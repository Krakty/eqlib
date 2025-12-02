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

#define __eqgraphics_fopen_x                                       0x1802811F8

#define CEQGBitmap__GetFirstBitmap_x                               0x180003280

#define CParticleSystem__Render_x                                  0x1800B1990
#define CParticleSystem__CreateSpellEmitter_x                      0x1800A15D0

#define CRender__RenderScene_x                                     0x1800D9940
#define CRender__RenderBlind_x                                     0x1800D9800
#define CRender__ResetDevice_x                                     0x1800DA4B0
#define CRender__UpdateDisplay_x                                   0x1800DB7B0
#define __bRenderSceneCalled_x                                     0x18035E3D0

#define C2DPrimitiveManager__AddCachedText_x                       0x1800F4430
#define C2DPrimitiveManager__Render_x                              0x1800F55E0

#define ObjectPreviewView__Render_x                                0x1800267F0

#define EQGraphics_DebugAPI_Ptr_x                                  0x1803C4D68

#if __has_include("../../../../private/eqgraphics-private.h")
#include "../../../../private/eqgraphics-private.h"
#endif
