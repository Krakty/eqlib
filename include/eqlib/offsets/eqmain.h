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

#define EQMain__CEQSuiteTextureLoader__GetTexture_x                0x180091540
#define EQMain__CLoginViewManager__HandleLButtonUp_x               0x18001B0E0
//#define EQMain__CXWndManager__GetCursorToDisplay_x                 0x0          // inlined into CXWndManager::DrawCursor
#define EQMain__LoginController__GiveTime_x                        0x180016640
#define EQMain__LoginController__Shutdown_x                        0x180016E40
#define EQMain__LoginServerAPI__JoinServer_x                       0x180018050
#define EQMain__WndProc_x                                          0x18000C220

#define EQMain__pinstCEQSuiteTextureLoader_x                       0x18017BDE0
#define EQMain__pinstCLoginViewManager_x                           0x1801835A8
#define EQMain__pinstCXWndManager_x                                0x180386598
#define EQMain__pinstCSidlManager_x                                0x1803865A0
#define EQMain__pinstLoginController_x                             0x1801835B0
#define EQMain__pinstLoginServerAPI_x                              0x180183590

// CXWnd::UpdateGeometry in eqmain.dll. Used by Move() wrapper in LoginFrontend.h to bypass
// virtual dispatch -- LoginFrontend.h's vtable annotation declares 12 phantom virtuals between
// slots 58-74, so direct UpdateGeometry virtual calls dispatch through the wrong slot (slot 74
// in our class is actually a CXStr operator= in the binary). The function-pointer thunk routes
// to the correct binary VA (verified by raw disasm 2026-05-19, agent #a5dd1755).
#define EQMain__CXWnd__UpdateGeometry_x                            0x18007E5F0

// CXMLDataManager::GetXMLData in eqmain.dll. Used by GetXMLData()/GetXMLName() inline thunks
// in LoginFrontend.h. The CXMLDataManager is embedded at CSidlManager + 0x1B0 (NOT a separate
// global). Function takes (this, classIdx, itemIdx) where xmlIndex >> 16 = classIdx and
// xmlIndex & 0xFFFF = itemIdx. Daybreak fully inlined CXWnd::GetXMLData in eqmain.dll so no
// standalone leaf function exists; this is the underlying manager call. Verified via
// FUN_18007D0D0 (RecurseAndFindName) disasm 2026-05-19, agent #425.
#define EQMain__CXMLDataManager__GetXMLData_x                      0x1800BA760

#if __has_include("../../../../private/eqmain-private.h")
#include "../../../../private/eqmain-private.h"
#endif
