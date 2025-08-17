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
// EQGraphics.dll offsets
//

#define __eqgraphics_fopen_x                                       0x1802793C8

#define CEQGBitmap__GetFirstBitmap_x                               0x180003280

#define CParticleSystem__Render_x                                  0x1800B0010
#define CParticleSystem__CreateSpellEmitter_x                      0x18009FC60

#define CRender__RenderScene_x                                     0x1800D76D0
#define CRender__RenderBlind_x                                     0x1800D7590
#define CRender__ResetDevice_x                                     0x1800D8240
#define CRender__UpdateDisplay_x                                   0x1800D94D0
#define __bRenderSceneCalled_x                                     0x18034F5E0

#define C2DPrimitiveManager__AddCachedText_x                       0x1800F1880
#define C2DPrimitiveManager__Render_x                              0x1800F2A20

#define ObjectPreviewView__Render_x                                0x180026600

#define EQGraphics_DebugAPI_Ptr_x                                  0x1803B3B78

#if __has_include("../private/eqgraphics-private.h")
#include "../private/eqgraphics-private.h"
#endif
