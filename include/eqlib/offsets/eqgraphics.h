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

#define __eqgraphics_fopen_x                                       0x180281414 // jun09 (OTTO BSim 1.000); DRIFTED +0x40 from carried 0x1802813D4

#define CEQGBitmap__GetFirstBitmap_x                               0x180003250 // jun09 CONFIRMED (REX caller-trace 8091): function-entry (2 CALL xrefs @180026f34/180027054); caller FUN_180027040 consumes return as bitmap-LIST HEAD + iterates next@[+0x30] = GetFirstBitmap semantics. STABLE (carried correct; Ghidra didn't auto-fn the region)

#define CParticleSystem__Render_x                                  0x1800B2E10 // jun09 CONFIRMED (OTTO BSim 1.000; stable)
#define CParticleSystem__CreateSpellEmitter_x                      0x1800A26A0 // jun09 CONFIRMED (OTTO BSim 1.000 exact; stable)

#define CRender__RenderScene_x                                     0x1800DAE50 // jun09 CONFIRMED (OTTO BSim 1.000, 2921B exact; stable)
#define CRender__RenderBlind_x                                     0x1800DAD10 // jun09 CONFIRMED (OTTO BSim 1.000 exact; stable)
#define CRender__ResetDevice_x                                     0x1800DAA30 // jun09 CONFIRMED (OTTO BSim 1.000 exact; stable)
#define CRender__UpdateDisplay_x                                   0x1800DB9C0 // jun09 CONFIRMED (OTTO BSim 1.000 exact; stable)
#define __bRenderSceneCalled_x                                     0x180370610 // jun09 CONFIRMED (OTTO: RenderScene set-site MOV[rip],imm @+0x9b7 references it identically may11+jun09; .data region stable)

#define C2DPrimitiveManager__AddCachedText_x                       0x1800F4750 // jun09 (OTTO BSim 1.000); DRIFTED +0x40 from carried 0x1800F4710
#define C2DPrimitiveManager__Render_x                              0x1800F5220 // jun09 (OTTO BSim 1.000); DRIFTED -- resolves corpus 0x1800F51E0 vs prod 0x1800F6980 (both wrong)

#define ObjectPreviewView__Render_x                                0x180027560 // jun09 CONFIRMED (OTTO BSim 1.000; stable)

#define EQGraphics_DebugAPI_Ptr_x                                  0x1803D6FA8 // jun09 CONFIRMED (OTTO: CParticleSystem::Render referencer twin BSim 1.000, data-ref -> carried VA; .data sub-region stable)

#if __has_include("../../../../private/eqgraphics-private.h")
#include "../../../../private/eqgraphics-private.h"
#endif
