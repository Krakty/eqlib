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

#define EQMain__CEQSuiteTextureLoader__GetTexture_x                0x18008e4c0
#define EQMain__CLoginViewManager__HandleLButtonUp_x               0x18001b0e0
//#define EQMain__CXWndManager__GetCursorToDisplay_x                 0x0          // inlined into CXWndManager::DrawCursor
#define EQMain__LoginController__GiveTime_x                        0x180016640
#define EQMain__LoginController__Shutdown_x                        0x180016e40
#define EQMain__LoginServerAPI__JoinServer_x                       0x180018050
#define EQMain__WndProc_x                                          0x18000c220

#define EQMain__pinstCEQSuiteTextureLoader_x                       0x180177df0 /*6-24 reader-trace verified (RM-DGLOB); was 0x180176df0, +0x1000 .data cascade*/
#define EQMain__pinstCLoginViewManager_x                           0x18017f4f8 /*6-24 set-site re-derive (RM-DGLOB); was 0x18017e4f8, +0x1000 .data cascade*/
#define EQMain__pinstCXWndManager_x                                0x1803824c8 /*6-24 reader-trace verified (RM-DGLOB, 42 refs); was 0x1803814c8, +0x1000 .data cascade*/
#define EQMain__pinstCSidlManager_x                                0x1803824d0 /*6-24 reader-trace verified (RM-DGLOB, 87 refs); was 0x1803814d0, +0x1000 .data cascade*/
#define EQMain__pinstLoginController_x                             0x18017f500 /*6-24 set-site re-derive (RM-DGLOB); was 0x18017e500, +0x1000 .data cascade*/
#define EQMain__pinstLoginServerAPI_x                              0x18017f4e0 /*6-24 set-site re-derive (RM-DGLOB); was 0x18017e4e0, +0x1000 .data cascade*/

#if __has_include("../../../../private/eqmain-private.h")
#include "../../../../private/eqmain-private.h"
#endif
