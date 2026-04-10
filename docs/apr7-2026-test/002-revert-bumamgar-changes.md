# Revert Bumamgar CXWnd/PlayerClient Changes

**Commit:** 5b09f9c (apr7-2026-test)  
**Date:** 2026-04-10  
**Reverts:** Commit 2fe8226 ("merging CZ fixes")  
**Verified against:** awcook97/eqlib test branch (Axel), Apr 7 2026 test eqgame.exe  

## Summary

Three changes from Bumamgar's commit 2fe8226 were reverted after independent
binary verification proved them incorrect:

1. CXWnd.h Tooltip/XMLToolTip swap -- **wrong, breaks MQ**
2. PlayerClient.h PZCPhysicsInfo member reorder -- **wrong per access patterns**
3. CXWnd.h @end marker format change -- **cosmetic, reverted for consistency**

## Background

During Session 4 patch day work, Bumamgar provided a diff with several changes.
These were applied to our branch at commit 2fe8226. Testing appeared to show
they worked, but we later discovered that our test environment (prefix-testbench)
had been receiving DLL deployments to a `Release/` subdirectory while MQ loaded
from the root directory. This meant every test since the changes were applied
was running stale DLLs from before the changes. None of Bumamgar's changes
were ever actually tested in-game until we discovered the deploy path error.

Once the deploy path was corrected, we established a proper A/B test environment:
- **prefix-bolrik**: Axel's code (known working baseline)
- **prefix-testbench**: Bumamgar's changes applied on top

## CXWnd.h: Tooltip / XMLToolTip Field Order

### The dispute

| Offset | Axel (awcook97/eqlib) | Bumamgar (commit 2fe8226) |
|--------|----------------------|--------------------------|
| 0x0a0  | Tooltip              | XMLToolTip               |
| 0x240  | XMLToolTip           | Tooltip                  |

Both fields are CXStr (8 bytes). The swap does not change struct size (still 0x268)
but changes which string MQ code reads when accessing `pWnd->Tooltip`.

### A/B test result

With ONLY the Tooltip swap applied (all other code identical to Axel's working build):
- **MQ failed to load entirely.** No console, no MQ2AutoLogin, no injection.
- Reverting the swap immediately restored functionality.

### Binary verification: SetKeyTooltip proves 0x0a0 = Tooltip

`CXWnd::SetKeyTooltip` at 0x1405c9d20 contains this instruction at 0x1405c9d2b:

```asm
MOV RDX, qword ptr [RCX + 0xa0]
```

This reads the CXStr at offset 0x0a0 as the **base tooltip text**, then:
1. Copies the string (refcount increment)
2. Appends `" - "` separator if the string is non-empty
3. Appends a bracket prefix (from global `DAT_1408cf578`)
4. Appends the key combo text description (e.g., `"Alt+1"`)
5. Appends a bracket suffix (from global `DAT_14084e724`)
6. Calls `SetTooltip` (vtable+0x288) to write the modified string back

**You do not append `" - [Alt+1]"` to an XML template name.** This only makes
sense if 0x0a0 is the runtime user-facing tooltip display text. This is the
smoking gun.

### Additional confirming evidence

- `DrawTooltipAtPoint` (0x1405c5500) calls virtual `GetTooltip` (vtable+0x1e0)
  to retrieve the text it renders on screen. GetTooltip reads from the same
  field that SetTooltip writes to -- offset 0x0a0.
- The CXWnd constructor (0x1405c1c90) initializes both 0x0a0 and 0x240 to null.
- The CXWnd destructor releases both as CXStr pointers via `CXStr::Release`.
- `CSidlScreenWnd::LoadSidlScreen` calls vtable[0x280] (SetWindowText) with
  `template+0x80` (strText), and vtable[0x288] (SetTooltip) is the adjacent
  entry in the vtable.
- Virtual function table layout at 0x140ae8510:
  - vtable+0x1e0 = GetTooltip (returns CXStr from 0x0a0)
  - vtable+0x280 = SetWindowText
  - vtable+0x288 = SetTooltip (writes CXStr to 0x0a0)

### Verdict

**Axel is correct: Tooltip at 0x0a0, XMLToolTip at 0x240.**

---

## PlayerClient.h: PZCPhysicsInfo Member Order

### The dispute

PZCPhysicsInfo is a 0x20-byte struct at PlayerZoneClient+0x0FAC containing
physics interpolation data: 6 floats (Y, X, Z, DeltaY, DeltaX, DeltaZ) and
2 bitfield groups (Acceleration:10+Heading:12, DeltaHeading:10, ZHeading:12).

| Offset | Axel | Bumamgar |
|--------|------|---------|
| +0x00 | Acceleration:10 + Heading:12 | DeltaY (float) |
| +0x04 | DeltaHeading:10 + ZHeading:12 | Y (float) |
| +0x08 | DeltaX (float) | bitfields |
| +0x0C | X (float) | X (float) |
| +0x10 | DeltaZ (float) | ZHeading:12 |
| +0x14 | Z (float) | DeltaZ (float) |
| +0x18 | DeltaY (float) | DeltaX (float) |
| +0x1C | Y (float) | Z (float) |

### Binary verification: MOVSS vs MOV access pattern analysis

Method: Searched the entire .text section of the Apr 7 eqgame.exe for all
instructions that access PZCPhysicsInfo offsets (PlayerZoneClient+0x0FAC
through +0x0FCC). Counted MOVSS (float load/store) vs MOV (integer load/store)
for each 4-byte field.

| PZC Offset | MOVSS (float) | MOV (integer) | Interpretation |
|------------|--------------|---------------|----------------|
| +0x00 | 1 | 2 | mixed -- bitfield accessed as int, occasionally as float |
| **+0x04** | **0** | **9** | **pure integer -- this is a bitfield, NOT a float** |
| +0x08 | 1 | 3 | float (with some int-style copies) |
| +0x0C | 0 | 15 | heavily accessed (memcpy patterns, comparisons) |
| +0x10 | 1 | 3 | float |
| +0x14 | 1 | 8 | float |
| +0x18 | 1 | 5 | float |
| +0x1C | 0 | 7 | float accessed via int patterns |

### Key finding

**PZC+0x04 has ZERO MOVSS (float) accesses and 9 MOV (integer) accesses.**

- In Axel's layout, +0x04 is `ZHeading : 12` (a bitfield packed into an int).
  Bitfields are always accessed with integer MOV instructions. **9 integer
  accesses and zero float accesses is exactly what you expect for a bitfield.**

- In Bumamgar's layout, +0x04 is `Y` (a float). A float field that is never
  once loaded with MOVSS across the entire binary is not credible. EQ's
  movement code heavily uses MOVSS for position data.

### Functional impact

MQ code never directly accesses individual PZCPhysicsInfo fields. The struct
is 0x20 bytes in both layouts, so downstream field offsets in PlayerZoneClient
are unaffected. The reorder would not break MQ functionality. However, correct
documentation of the binary layout matters for future development and for
anyone using this struct for movement analysis.

### Verdict

**Axel is correct: bitfields at +0x00/+0x04, floats at +0x08 through +0x1C.**

---

## Methodology notes

### Deploy path error (Session 4 lesson)

All testing from approximately 21:00 through 23:35 on April 9 was invalid
because DLLs were deployed to `prefix-testbench/drive_c/MacroQuest/Release/`
while MQ loaded from `prefix-testbench/drive_c/MacroQuest/` (root). The stale
root DLLs from before our changes were running the entire time. This led to
incorrect conclusions about what was and wasn't working.

The error was discovered when we deployed to prefix-bolrik (which has no
Release/ subdirectory) and everything worked. We then compared directory
structures and found the mismatch.

**Rule: Always deploy to the MacroQuest root directory, never to Release/.**

### A/B testing methodology

After discovering the deploy path error, we established:
- prefix-bolrik = control (Axel's working code, untouched)
- prefix-testbench = test (changes applied one at a time)

Changes were tested individually, not batched:
1. Tooltip swap only -- BROKE MQ (MQ failed to load)
2. PZCPhysicsInfo reorder -- analyzed via binary, not A/B tested (MQ doesn't use fields)
3. ConvertItemID removal -- previously confirmed to crash MQ via A/B test

### Binary analysis tools used

- Ghidra MCP: decompile, disassemble, xref tracing for Tooltip verification
- Raw binary search: MOVSS/MOV instruction pattern counting for PZCPhysicsInfo
- Allocation size verification: __eq_new search for ItemBase/ItemClient sizes
