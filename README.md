# eqlib - Apr 7 2026 Test Server Branch

Fork of [macroquest/eqlib](https://github.com/macroquest/eqlib) with updated
struct layouts and offsets for the April 7, 2026 EverQuest test server patch.

## What this is

EverQuest deliberately randomizes the declaration order of C++ struct members
between patches. This breaks MacroQuest on every patch because MQ reads game
memory at hardcoded offsets. This repo contains the reverse-engineered struct
layouts for the Apr 7, 2026 test server binary so MQ can be rebuilt against it.

The upstream eqlib `test` branch targets the previous patch (March 16, 2026).
This branch (`apr7-2026-test`) updates the struct layouts, offset files, and
related source to match the Apr 7 binary.

## Current status

MQ loads, injects, and runs in-game on the Apr 7 test client. Verified
functionality includes:

- Login, character select, zone-in
- Chat (MQ2ChatWnd functional)
- Items (pickup, buy, delete, drop, inspect)
- ImGui overlay and MQ console
- All core TLOs return correct values (validated via Lua test scripts)
- 652 eqgame.h offsets validated via FindPointerFromList (95.6% exact match)

### Known issues

- ItemBase compiles to 0x110 instead of 0x108 (8 bytes of alignment padding
  from ConvertItemID declaration position). Functionally correct but SIZE_CHECK
  fails in Debug builds. Fix identified but not yet applied.
- ItemDefinition 0x640-0x688: 2 of 3 new fields typed, 1 remaining (shuffled
  string identity unknown).

## What changed from upstream

### Struct layouts (member declaration order shuffled)

| Struct | Size | Status |
|--------|------|--------|
| CXWnd | 0x268 | 5 new fields, member reorder, all verified |
| PlayerZoneClient | 0x20D8 | 32 anchor points confirmed via Ghidra accessors |
| ItemBase | 0x108 | 36 fields reordered, 12 anchors confirmed |
| ItemDefinition | 0x688 | Grew from 0x640. New count+array fields at 0x65C/0x660 |
| CItemDisplayWnd | 0xAB0 | New bool at 0x430 |
| CEverQuest | 0x19710 | Grew from 0x19708 |

### Offset files

| File | Changes | Validation |
|------|---------|------------|
| eqgame.h | 652 offsets | FindPointerFromList + ASCII dump verification |
| eqmain.h | 6 of 13 offsets | Ghidra verified |
| eqgraphics.h | 12 of 13 offsets | EnhancedFunctionFinder (Axel) + Ghidra xref tracing |

### Source changes

- `Items.cpp`: New field initializers for ItemDefinition 0x640-0x688 area.
  ConvertItemID retained (see docs/001).

## Documentation

Every non-trivial change has a detailed analysis doc in `docs/apr7-2026-test/`
explaining the binary evidence, methodology, and reasoning:

| Doc | Description |
|-----|-------------|
| [001-convertitemid-restore.md](docs/apr7-2026-test/001-convertitemid-restore.md) | ConvertItemID must stay in ItemBase. Binary allocation proof, A/B test, padding analysis. |
| [002-revert-bumamgar-changes.md](docs/apr7-2026-test/002-revert-bumamgar-changes.md) | CXWnd Tooltip field verification via SetKeyTooltip disassembly. PZCPhysicsInfo field types via MOVSS/MOV access pattern analysis. Deploy path error postmortem. |

The standard for this project: no field placement is accepted without binary
evidence. Patch notes, assumptions, and claims from collaborators are starting
points for investigation, not conclusions.

## Verification methodology

### Struct field identification

Fields are identified by tracing accessor functions (GetX/SetX), constructors,
deserializers, and copy constructors in the Apr 7 eqgame.exe via Ghidra. 
Constructor init order matches declaration order (MSVC). Accessor functions
provide field-to-offset mappings that are independent of declaration order.

### Offset validation

- **eqgame.h**: FindPointerFromList.java (community Ghidra script) performs
  xref-based voting between old and new binaries. 586/613 exact matches.
  Remaining resolved via Ghidra tiebreaking and ASCII dump verification.
- **eqgraphics.h**: EnhancedFunctionFinder (Axel's Ghidra script) for
  automated resolution. C2DPrimitiveManager::Render independently verified
  via "Render 2D stuff" string xref trace in CRender::RenderScene.
- **eqmain.h**: Direct Ghidra analysis of each global pointer.

### Runtime validation

Lua test scripts (`struct_test.lua`, `full_dump.lua`) exercise all major TLOs
in-game and log results. Any offset error produces garbage values or crashes.

## Related repos

| Repo | Purpose |
|------|---------|
| [Krakty/MQ2-Krakty](https://github.com/Krakty/MQ2-Krakty) | Buildable MacroQuest fork (test branch) |
| [Krakty/MQ-RE](https://github.com/Krakty/MQ-RE) | Research repo: working files, agent logs, session notes, Ghidra scripts |
| [awcook97/eqlib](https://github.com/awcook97/eqlib) | Axel's independent eqlib (used as cross-reference) |

## Contributors

| Handle | Role |
|--------|------|
| Krakty | Struct layouts, offset validation, Ghidra analysis, pipeline |
| Axel (awcook97) | EnhancedFunctionFinder, independent eqgraphics/eqmain offset verification |
| Bumamgar (Cezero) | In-game testing, size validation, push access |
| Sicprofundus, Debauche87, jdonohoo | Collaborators with write access |

## Build instructions

See [MQ-RE: README-BUILD.md](https://github.com/Krakty/MQ-RE/blob/main/eq-builds/test/2026-04-07/README-BUILD.md)

Standard MSBuild from the macroquest root (do NOT use cmake):
```
msbuild src\MacroQuest.sln /p:Configuration=Release /p:Platform=x64
```
