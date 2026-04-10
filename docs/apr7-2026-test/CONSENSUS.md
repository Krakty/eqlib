# Apr 7 2026 Patch - Change Consensus Matrix

Every change in this patch must reach three-way consensus before being applied:
1. **Binary proof** - Ghidra/rizin analysis of the Apr 7 eqgame.exe/eqgraphics.dll/eqmain.dll
2. **Bumamgar** - In-game testing, memory inspection, size validation
3. **Axel** - EnhancedFunctionFinder, independent working build

Changes are not applied until consensus is reached or conflicts are resolved with documented evidence.

## Status Key

| Symbol | Meaning |
|--------|---------|
| PASS | Independently verified, evidence documented |
| TRUST | Accepted from source, not independently verified |
| FAIL | Contradicted by evidence |
| OPEN | Not yet verified |
| N/A | Source has no opinion on this item |

---

## Offset Files

### eqgraphics.h

| # | Symbol | Old (S3) | New | Binary | Bumamgar | Axel | Status |
|---|--------|----------|-----|--------|----------|------|--------|
| 1 | __eqgraphics_fopen_x | 0x2812C4 | 0x2812B8 | OPEN | PASS | PASS | needs Ghidra verify |
| 2 | CEQGBitmap__GetFirstBitmap_x | 0x003250 | 0x003250 | PASS | PASS | PASS | no change |
| 3 | CParticleSystem__Render_x | 0x0B2E10 | 0x0B2E10 | PASS | PASS | PASS | no change |
| 4 | CParticleSystem__CreateSpellEmitter_x | 0x0A26A0 | 0x0A2A20 | OPEN | PASS | PASS | needs Ghidra verify |
| 5 | CRender__RenderScene_x | 0x0DAE30 | 0x0DAE30 | PASS | PASS | PASS | no change |
| 6 | CRender__RenderBlind_x | 0x0DACF0 | 0x0DACF0 | PASS | PASS | PASS | no change |
| 7 | CRender__ResetDevice_x | 0x0DAA30 | 0x0DB9A0 | PASS | PASS | PASS | Ghidra string xref |
| 8 | CRender__UpdateDisplay_x | 0x0DB9A0 | 0x0DCBA0 | OPEN | PASS | PASS | needs Ghidra verify |
| 9 | __bRenderSceneCalled_x | 0x36F610 | 0x36F610 | PASS | PASS | PASS | no change |
| 10 | C2DPrimitiveManager__AddCachedText_x | 0x0F46F0 | 0x0F57C0 | OPEN | PASS | PASS | needs Ghidra verify |
| 11 | C2DPrimitiveManager__Render_x | 0x0F51C0 | 0x0F6960 | PASS | PASS | PASS | Ghidra xref trace |
| 12 | ObjectPreviewView__Render_x | 0x027560 | 0x0277E0 | PASS | PASS | PASS | Ghidra string xref |
| 13 | EQGraphics_DebugAPI_Ptr_x | 0x3D5FA8 | 0x3D5FA8 | PASS | PASS | PASS | no change |

### eqmain.h

| # | Symbol | Old | New | Binary | Bumamgar | Axel | Status |
|---|--------|-----|-----|--------|----------|------|--------|
| 1 | GetTexture | 0x8F170 | 0x8F010 | PASS | PASS | PASS | r2 verified: old is mid-function |
| 2 | pinstCLoginViewManager | 0x1804E8 | 0x1804F8 | PASS | PASS | PASS | r2 xref verified |
| 3 | pinstCXWndManager | 0x3834B8 | 0x3834C8 | PASS | PASS | PASS | r2: old has 0 xrefs |
| 4 | pinstCSidlManager | 0x3834C0 | 0x3834D0 | PASS | PASS | PASS | r2: old has 0 xrefs |
| 5 | pinstLoginController | 0x1804F0 | 0x180500 | PASS | PASS | PASS | r2 xref verified |
| 6 | pinstLoginServerAPI | 0x1804D0 | 0x1804E0 | PASS | PASS | PASS | r2 xref verified |

### eqgame.h

| Item | Status | Notes |
|------|--------|-------|
| 652 offsets | PASS | FindPointerFromList 95.6% + ASCII dump 99.7% + 5 manual corrections |

---

## Struct Changes

### CXWnd.h (0x268)

| Item | Binary | Bumamgar | Axel | Status | Notes |
|------|--------|----------|------|--------|-------|
| 5 new fields added | PASS | PASS | PASS | applied | bUseInLayoutHorizontal, pLayoutStrategy, bUseInLayoutVertical, bUsesClassicUI, bMouseOverEvent |
| Member reorder | PASS | PASS | PASS | applied | 32+ anchors from Ghidra accessors |
| Tooltip at 0x0a0 | PASS | FAIL | PASS | CONFLICT | Binary: SetKeyTooltip reads 0x0a0 as display text. Bumamgar says swap needed for MQ2Labels. Axel has original order. |
| XMLToolTip at 0x240 | PASS | FAIL | PASS | CONFLICT | Same conflict as above - paired swap |

### PlayerClient.h (0x20D8)

| Item | Binary | Bumamgar | Axel | Status | Notes |
|------|--------|----------|------|--------|-------|
| PlayerZoneClient reorder | PASS | PASS | PASS | applied | 32 anchor points |
| PZCPhysicsInfo order | PASS | FAIL | PASS | resolved | Binary: +0x04 has 0 MOVSS/9 MOV = bitfield. Axel original order correct. |
| CGroupMember field offsets | OPEN | N/A | PASS | applied | pCharacter 0x38, pPlayer 0x3E, GroupIndex 0x3F |

### Items.h

| Item | Binary | Bumamgar | Axel | Status | Notes |
|------|--------|----------|------|--------|-------|
| ItemBase 36 fields reordered | PASS | PASS | PASS | applied | 12 anchors confirmed |
| ConvertItemID exists | OPEN | PASS (at 0x0ec) | PASS (at 0x0ac) | CONFLICT | Agent says not in binary. Bumamgar says move to 0x0ec. Axel has at 0x0ac. Deep agent running. |
| ConvertItemName removed | PASS | PASS | PASS | applied | Not in binary, accessor returns empty |
| ItemBase size = 0x108 | PASS | PASS | PASS | consensus | Binary allocation confirms |
| ItemClient size = 0x120 | PASS | PASS | PASS | consensus | __eq_new(0x130) = 0x10 + 0x120 |
| ItemDefinition size = 0x688 | PASS | PASS | PASS | consensus | __eq_new confirms |
| ItemDef new fields 0x640-0x688 | PASS | OPEN | N/A | partial | 0x65C count + 0x660 int[10] verified. String at 0x61C identity unknown. |

### PcClient.h

| Item | Binary | Bumamgar | Axel | Status | Notes |
|------|--------|----------|------|--------|-------|
| CGroupMember shuffle | OPEN | N/A | PASS | applied, needs verify | pCharacter/pPlayer/GroupIndex shifted |

### EverQuest.h

| Item | Binary | Bumamgar | Axel | Status | Notes |
|------|--------|----------|------|--------|-------|
| CEverQuest_size 0x19708->0x19710 | PASS | PASS | PASS | applied | +8 bytes |

### Other Headers (comment-only changes)

| File | Change | Status | Notes |
|------|--------|--------|-------|
| Achievements.h | SIZE_CHECK addr comment | OPEN | Size unchanged (0x140) |
| AltAbilities.h | SIZE_CHECK addr comment | OPEN | Size unchanged (0xE0) |
| EQClasses.h | SIZE_CHECK addr comments x2 | OPEN | Sizes unchanged |
| PcProfile.h | SIZE_CHECK addr comment | OPEN | Size unchanged (0x6E98) |
| Spells.h | SIZE_CHECK addr comments x2 | OPEN | Sizes unchanged |
| TaskSystem.h | SIZE_CHECK addr comment | OPEN | Size unchanged (0x3D70) |

---

## Open Conflicts Requiring Resolution

### 1. CXWnd Tooltip/XMLToolTip Swap

**Binary proof says:** Tooltip at 0x0a0 (SetKeyTooltip appends keybinds to it)
**Bumamgar says:** Swap needed for MQ2Labels and gauge rendering
**Axel says:** Original order (Tooltip at 0x0a0)
**Our A/B test:** Swap killed MQ entirely
**Resolution needed:** Test Bumamgar's specific claim (MQ2Labels) separately

### 2. ConvertItemID Existence and Position

**Binary proof says:** Copy constructor shows no field between 0xa4 and 0xa8 (deep agent pending)
**Bumamgar says:** Field exists, move to 0x0ec (after ItemGUID padding gap)
**Axel says:** Field exists at 0x0ac
**Our current build:** No ConvertItemID, MQ loads fine
**Resolution needed:** Deep agent results, then in-game testing of item conversion

---

## Applied to Current Build (GOLDEN-BASELINE-SESSION4)

- [x] CXWnd 5 new fields + reorder (Session 3)
- [x] PlayerClient reorder (Session 3)
- [x] ItemBase 36 field reorder (Session 3)
- [x] eqgame.h 652 offsets (Session 3)
- [x] CGroupMember field offsets (PcClient.h)
- [x] CEverQuest_size 0x19710

## Not Yet Applied (pending consensus)

- [ ] eqgraphics.h corrections (7 offsets)
- [ ] eqmain.h corrections (6 offsets)
- [ ] ConvertItemID resolution
- [ ] Tooltip/XMLToolTip resolution
- [ ] ItemDefinition 0x640-0x688 typed fields
- [ ] SIZE_CHECK address comment updates (6 files)
