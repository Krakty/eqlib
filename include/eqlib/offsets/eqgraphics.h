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

#define __eqgraphics_fopen_x                                       0x18027FBE8

#define CEQGBitmap__GetFirstBitmap_x                               0x180003270

#define CParticleSystem__Render_x                                  0x1800B2000
#define CParticleSystem__CreateSpellEmitter_x                      0x1800A1C10

#define CRender__RenderScene_x                                     0x1800D9DF0
#define CRender__RenderBlind_x                                     0x1800D9CB0
#define CRender__ResetDevice_x                                     0x1800DA960
#define CRender__UpdateDisplay_x                                   0x1800DBB10
#define __bRenderSceneCalled_x                                     0x18035D420

#define C2DPrimitiveManager__AddCachedText_x                       0x1800F4680
#define C2DPrimitiveManager__Render_x                              0x1800F5820

#define ObjectPreviewView__Render_x                                0x180027510

#define EQGraphics_DebugAPI_Ptr_x                                  0x1803C3DB8

#if __has_include("../../../../private/eqgraphics-private.h")
#include "../../../../private/eqgraphics-private.h"
#endif
