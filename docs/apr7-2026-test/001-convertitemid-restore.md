# Restore ConvertItemID to ItemBase

**Commit:** 74b7a54 (apr7-2026-test)  
**Date:** 2026-04-10  
**Tags:** BROKEN-missing-ConvertItemID (broken state), FIX-ConvertItemID-restored (fix)  
**Verified against:** awcook97/eqlib test branch (Axel), Apr 7 2026 test eqgame.exe  

## Summary

ConvertItemID (int, 4 bytes) was incorrectly removed from the ItemBase struct
based on Apr 7 patch notes stating "Optimized how item conversion requirements
are checked as a zoning speed improvement." The optimization changed how
conversion is CHECKED, not that the field was removed from the struct.

## What went wrong

1. We read the patch notes and interpreted "optimized item conversion" as
   "ConvertItemID field removed."
2. We removed `/*0x0ac*/ int ConvertItemID;` from ItemBase Members.
3. We removed `ConvertItemID = 0;` from the ItemBase constructor in Items.cpp.
4. We changed `GetConvertItemID()` to return `0` instead of `ConvertItemID`.

This caused every field after NoDropFlag (0x00c) in ItemBase to shift forward
by 4 bytes. The struct compiled to 0x104 instead of 0x108. Since ItemClient
inherits from ItemBase, ItemClient also shrank, causing all item data reads
to return garbage.

## Symptoms

- MQ fails to load / crashes on injection
- If it loads: "Unmatched bracket" TLO spam in the MQ chat window
- All item TLO reads return garbage (4-byte shift in every field)
- Struct test Lua scripts show corrupted data for all item properties

## Binary proof

The Apr 7 binary allocates ItemClient via `__eq_new(0x130)` at 0x1402236D0.
- 0x130 = 0x10 (shared_ptr control block) + 0x120 (ItemClient struct)
- ItemClient = 0x120 = ItemBase (0x108) + SharedItemDef (0x10) + ClientString (0x08)
- Therefore ItemBase = 0x108

If ConvertItemID (4 bytes) is removed, ItemBase = 0x104, ItemClient = 0x11C,
allocation should be 0x12C. But the binary allocates 0x130. The field exists.

Additionally, Axel's working build (awcook97/eqlib) has ConvertItemID present
at offset 0x0ac within ItemBase.

## A/B test

- prefix-bolrik (ConvertItemID present, Axel's code): MQ loads, works correctly
- prefix-testbench (ConvertItemID removed): MQ crashes on load

## ItemBase size discrepancy (known issue, not yet fixed)

Bumamgar reported that the compiled ItemBase struct is 0x110 instead of 0x108
(8 bytes of unwanted padding). This is because ConvertItemID is declared at
position 3 in the member list (after NoDropFlag), but its binary offset is
0x0ac. Declaring it early pushes `bConvertable` (bool) to 0x030, then
`DontKnow` (int64_t, 8-byte aligned) needs extra alignment padding.
4 bytes (field in wrong position) + 4 bytes (alignment padding) = 8 bytes bloat.

The fix is to MOVE ConvertItemID to the correct position in the declaration
order (after ItemGUID at 0x0eb, where it fits in an existing alignment gap
at 0x0ec). This is a separate change tracked separately.

## Files changed

- `include/eqlib/game/Items.h`: Restored `/*0x0ac*/ int ConvertItemID;` to
  ItemBase Members between NoDropFlag and OrnamentationIcon. Changed
  `GetConvertItemID()` to return `ConvertItemID` instead of `0`.
- `src/game/Items.cpp`: Restored `ConvertItemID = 0;` in ItemBase constructor.
