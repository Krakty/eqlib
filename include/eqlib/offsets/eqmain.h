/*
 * MacroQuest: The extension platform for EverQuest
 * Copyright (C) 2002-present MacroQuest Authors
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, version 2, as published by
 * the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#pragma once

//
// eqmain.dll offsets
//

#define EQMain__CEQSuiteTextureLoader__GetTexture_x                0x18008e6d0 // jun09 (OTTO BSim 0.9824 vs may11 named GetTexture, sole match; carried may11 0x180091540 drifted/refuted BSim 0.094)
#define EQMain__CLoginViewManager__HandleLButtonUp_x               0x18001B0E0 // jun09 CONFIRMED (BOB caller-twin, beats BSim): jun09 CLoginViewManager dispatch (twin of may11, CMP EDX,0xd + pinstCLoginViewManager) CALLs this @0x180016de1 -- carried VA, did NOT drift. OTTO's BSim 0.442 mispaired the refactored true match (0.371) to SIBLING 0x18001b290.
#define EQMain__LoginController__GiveTime_x                        0x180016640 // jun09 CONFIRMED (OTTO: jun09 bytes byte-identical to may11; stable, carried correct)
#define EQMain__LoginController__Shutdown_x                        0x180016E40 // jun09 CONFIRMED (OTTO BSim 1.000 exact to may11; carried VA correct, stable build-to-build)
#define EQMain__LoginServerAPI__JoinServer_x                       0x180018050 // jun09 CONFIRMED (OTTO BSim 0.653, sole top by 0.22 at carried loc; abs<0.7 -> BOB optional twin-compare)
#define EQMain__WndProc_x                                          0x18000C220 // jun09 CONFIRMED (OTTO BSim 0.693, sole top by 0.52 margin; stable)

#define EQMain__pinstCEQSuiteTextureLoader_x                       0x180176DE0 // jun09 LOCKED (OTTO: accessor 0x18007C270 + readers 0x180077820 read this .data slot as the instance) was carried 0x18017BDE0
#define EQMain__pinstCLoginViewManager_x                           0x18017E4F8 // jun09 (OTTO HIGH: twin 0.718 + Δ-0x50B0 dual-confirm) was 0x1801835A8
#define EQMain__pinstCXWndManager_x                                0x1803814C8 // jun09 (OTTO MED: twin 0.399 weak, Δ-0x50D0 + dual-slot + GetTexture-global corroborated; BOB-confirm) was 0x180386598
#define EQMain__pinstCSidlManager_x                                0x1803814D0 // jun09 (OTTO HIGH: twin 0.903 + Δ-0x50D0) was 0x1803865A0
#define EQMain__pinstLoginController_x                             0x18017E500 // jun09 (OTTO accessor-trace, referencer-twin BSim 1.000 HIGH; Δ-0x50B0 region) was 0x1801835B0
#define EQMain__pinstLoginServerAPI_x                              0x18017E4E0 // jun09 (OTTO HIGH: twin 0.688 + Δ-0x50B0) was 0x180183590
// (phantom-virtual slot mismatch). Function-pointer thunk routes to the correct binary VA.
#define EQMain__CXWnd__UpdateGeometry_x                            0x18007B650 // jun09 (OTTO BSim 0.930 clean; DRIFTED from may11/prod-carried 0x18007E5F0). prod-only fn added to corpus to keep prod superset.

// CXMLDataManager::GetXMLData in eqmain.dll. Used by GetXMLData()/GetXMLName() inline thunks in
// LoginFrontend.h. CXMLDataManager embedded at CSidlManager+0x1B0. (this, classIdx, itemIdx); xmlIndex>>16=class,
// xmlIndex&0xFFFF=item.
#define EQMain__CXMLDataManager__GetXMLData_x                      0x1800B7690 // jun09 (OTTO MED: sole BSim 0.485 of 2707; refactored leaf, standalone fn -- BOB twin-compare). DRIFTED from may11/prod-carried 0x1800BA760. prod-only added to corpus.

#if __has_include("../../../../private/eqmain-private.h")
#include "../../../../private/eqmain-private.h"
#endif
