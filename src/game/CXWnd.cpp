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

#include "pch.h"

#include "eqlib/Common.h"
#include "eqlib/WindowOverride.h"

#include "eqlib/game/CXWnd.h"
#include "eqlib/game/EQClasses.h"
#include "eqlib/game/Globals.h"
#include "eqlib/game/LoginFrontend.h"
#include "eqlib/game/UI.h"

#include "mq/base/String.h"

namespace eqlib {

//----------------------------------------------------------------------------

CXWnd::VirtualFunctionTable* CXWnd::sm_vftable = nullptr;
CSidlScreenWnd::VirtualFunctionTable* CSidlScreenWnd::sm_vftable = nullptr;
CGFScreenWnd::VirtualFunctionTable* CGFScreenWnd::sm_vftable = nullptr;

//----------------------------------------------------------------------------

CONSTRUCTOR_AT_ADDRESS(CXWnd::CXWnd(CXWnd*, uint32_t, CXRect), CXWnd__CXWnd);
DESTRUCTOR_AT_ADDRESS(CXWnd::~CXWnd(), CXWnd__dCXWnd);

//----------------------------------------------------------------------------

void CXWnd::SetClientRectDirty(bool dirty)
{
	// apr15-2026-live: bClientRectChanged UNFOUND (no apr15 dirty flag for
	// the client rect; cached_ClientRect at +0x22c is updated directly).
	// bClientClipRectChanged renamed to ClipRectClient_dirty_flag at +0x0c0.
	// Recursive-mark-children semantics preserved.
	if (dirty)
	{
		ClipRectClient_dirty_flag = true;
		bScreenClipRectChanged = true;

		for (CXWnd* wnd = GetFirstNode(); wnd != nullptr; wnd = wnd->GetNext())
		{
			wnd->SetClientRectDirty(true);
		}
	}
}
//----------------------------------------------------------------------------

UIType eqmain::CXWnd::GetType() const
{
	CXMLDataManager* mgr = pSidlMgr->GetParamManager();
	return mgr->GetWindowType(reinterpret_cast<const eqlib::CXWnd*>(this));
}

CXMLData* eqmain::CXWnd::GetXMLData(CXMLDataManager* dataMgr) const
{
	if (int xmlIndex = GetXMLIndex())
	{
		return dataMgr->GetXMLData(xmlIndex);
	}

	return nullptr;
}

CXMLData* eqmain::CXWnd::GetXMLData() const
{
	CXMLDataManager* mgr = pSidlMgr->GetParamManager();
	return GetXMLData(mgr);
}

CXStr eqmain::CXWnd::GetXMLName() const
{
	if (CXMLData* pXMLData = GetXMLData())
	{
		return pXMLData->Name;
	}

	return CXStr();
}

//----------------------------------------------------------------------------

UIType CXWnd::GetType() const
{
	CXMLDataManager* mgr = pSidlMgr->GetParamManager();
	return mgr->GetWindowType(this);
}

CXMLData* CXWnd::GetXMLData(CXMLDataManager* dataMgr) const
{
	if (int xmlIndex = GetXMLIndex())
	{
		return dataMgr->GetXMLData(xmlIndex);
	}

	return nullptr;
}

CXMLData* CXWnd::GetXMLData() const
{
	CXMLDataManager* mgr = pSidlMgr->GetParamManager();
	return GetXMLData(mgr);
}

// apr15-2026-live: GetChildItem re-implementation removed — it depended on
// GetXMLData() -> GetXMLIndex() which is a stub returning -1 (XMLIndex was
// UNFOUND_AFTER_EXHAUSTIVE_SEARCH in apr15 RE), so RecurseAndFindName never
// matched any child by name. Plugin GetChildItem("CW_ChatInput") returned
// nullptr -> MQ2ChatWnd null-derefed at +0x1B5D.
//
// Replaced with FUNCTION_AT_ADDRESS thunk to the binary's native
// CXWnd::GetChildItem (CXWnd__GetChildItem at 0x1405C5D90) — see FunctionDefs.cpp.
// The two-arg overload (CXMLDataManager*, CXStr&) is dead code in apr15 since
// the only caller was the one-arg overload; left out entirely.

CXStr CXWnd::GetXMLName() const
{
	if (CXMLData* pXMLData = GetXMLData())
	{
		return pXMLData->Name;
	}

	return CXStr();
}

std::string_view CXWnd::GetXMLNameSv() const
{
	if (CXMLData* pXMLData = GetXMLData())
	{
		return pXMLData->Name;
	}

	return {};
}

CXStr CXWnd::GetTypeName() const
{
	if (CXMLData* pXMLData = GetXMLData())
	{
		return pXMLData->TypeName;
	}

	return UITypeToString(GetType());
}

std::string_view CXWnd::GetTypeNameSv() const
{
	if (CXMLData* pXMLData = GetXMLData())
	{
		return pXMLData->TypeName;
	}

	return UITypeToString(GetType());
}

const char* UITypeToString(UIType type)
{
	switch (type)
	{
	case UI_Unknown: return "CXWnd";           // a dynamically created CXWnd can have this type
	case UI_Class: return "Class";
	case UI_RGB: return "RGB";
	case UI_TextRGB: return "TextRGB";
	case UI_Point: return "Point";
	case UI_Size: return "Size";
	case UI_TextureInfo: return "TextureInfo";
	case UI_Frame: return "Frame";
	case UI_Ui2DAnimation: return "Ui2DAnimation";
	case UI_ButtonDrawTemplate: return "ButtonDrawTemplate";
	case UI_GaugeDrawTemplate: return "GaugeDrawTemplate";
	case UI_SpellGemDrawTemplate: return "SpellGemDrawTemplate";
	case UI_FrameTemplate: return "FrameTemplate";
	case UI_ScrollbarDrawTemplate: return "ScrollbarDrawTemplate";
	case UI_WindowDrawTemplate: return "WindowDrawTemplate";
	case UI_SliderDrawTemplate: return "SliderDrawTemplate";
	case UI_ScreenPiece: return "ScreenPiece";
	case UI_StaticScreenPiece: return "StaticScreenPiece";
	case UI_StaticAnimation: return "StaticAnimation";
	case UI_StaticTintedBlendAnimation: return "StaticTintedBlendAnimation";
	case UI_StaticText: return "StaticText";
	case UI_StaticFrame: return "StaticFrame";
	case UI_StaticHeader: return "StaticHeader";
	case UI_LayoutStrategy: return "LayoutStrategy";
	case UI_LayoutVertical: return "LayoutVertical";
	case UI_LayoutHorizontal: return "LayoutHorizontal";
	case UI_Control: return "Control";
	case UI_TemplateAssoc: return "TemplateAssoc";
	case UI_TemplateScreen: return "TemplateScreen";
	case UI_ListboxColumn: return "ListboxColumn";
	case UI_Listbox: return "Listbox";
	case UI_Button: return "Button";
	case UI_Gauge: return "Gauge";
	case UI_SpellGem: return "SpellGem";
	case UI_InvSlot: return "InvSlot";
	case UI_EditBox: return "Editbox";
	case UI_Slider: return "Slider";
	case UI_Label: return "Label";
	case UI_STMLBox: return "STMLbox";
	case UI_TreeView: return "TreeView";
	case UI_Combobox: return "Combobox";
	case UI_Page: return "Page";
	case UI_TabBox: return "TabBox";
	case UI_LayoutBox: return "LayoutBox";
	case UI_HorizontalLayoutBox: return "HorizontalLayoutBox";
	case UI_VerticalLayoutBox: return "VerticalLayoutBox";
	case UI_FinderBox: return "FinderBox";
	case UI_TileLayoutBox: return "TileLayoutBox";
	case UI_NamedTemplatePiece: return "NamedTemplatePiece";
	case UI_TemplateContainer: return "TemplateContainer";
	case UI_Screen: return "Screen";
	case UI_SuiteDefaults: return "SuiteDefaults";
	case UI_Screens: return "Screens";
	case UI_TopLevelWindowList: return "TopLevelWindowList";
	case UI_HotButton: return "HotButton";
	default: return "Unknown(new)";
	}
}

const char* EWndRuntimeTypeToString(EWndRuntimeType type)
{
	switch (type)
	{
	case WRT_WND: return "WND";
	case WRT_LISTWND: return "LISTWND";
	case WRT_EDITWND: return "EDITWND";
	case WRT_TREEWND: return "TREEWND";
	case WRT_PAGEWND: return "PAGEWND";
	case WRT_TABWND: return "TABWND";
	case WRT_HOTKEYWND: return "HOTKEYWND";
	case WRT_EDITHOTKEYWND: return "EDITHOTKEYWND";
	case WRT_RANGESLIDERWND: return "RANGESLIDERWND";
	case WRT_STMLWND: return "STMLWND";
	case WRT_MODALMESSAGEWND: return "MODALMESSAGEWND";
	case WRT_CHECKBOXWND: return "CHECKBOXWND";
	case WRT_SIDLSCREENWND: return "SIDLSCREENWND";
	case WRT_SLIDERWND: return "SLIDERWND";
	case WRT_LABEL: return "LABEL";
	case WRT_BUTTON: return "BUTTON";
	case WRT_GAUGE: return "GAUGE";
	case WRT_COMBOBOX: return "COMBOBOX";
	case WRT_CHATWND: return "CHATWND";
	case WRT_HELPWND: return "HELPWND";
	default: return "UNKNOWN";
	}
}

void* CXWnd::operator new(std::size_t sz)
{
	return eqAlloc(sz);
}

void* CXWnd::operator new[](std::size_t sz)
{
	return eqAlloc(sz);
}

void CXWnd::operator delete(void* ptr)
{
	eqFree(ptr);
}

void CXWnd::operator delete[](void* ptr)
{
	eqFree(ptr);
}

//============================================================================
//============================================================================

// CSidlScreenWnd

// defined in AssemblyFunctions.asm:
DESTRUCTOR_AT_ADDRESS(CSidlScreenWnd::~CSidlScreenWnd(), CSidlScreenWnd__dCSidlScreenWnd);
CONSTRUCTOR_AT_ADDRESS(CSidlScreenWnd::CSidlScreenWnd(CXWnd* pParent, const CXStr& Screen, int, int, const char*, bool), CSidlScreenWnd__CSidlScreenWnd1);
CONSTRUCTOR_AT_ADDRESS(CSidlScreenWnd::CSidlScreenWnd(CXWnd* pParent, const CXStr& Screen, bool bUseClassicUI), CSidlScreenWnd__CSidlScreenWnd2);

//----------------------------------------------------------------------------

void InitializeCXWnd()
{
	CXWnd::sm_vftable = reinterpret_cast<CXWnd::VirtualFunctionTable*>(CXWnd__vftable);
	CSidlScreenWnd::sm_vftable = reinterpret_cast<CSidlScreenWnd::VirtualFunctionTable*>(CSidlScreenWnd__vftable);
}

//----------------------------------------------------------------------------

void CXWndControllerHook::Hook(CXWnd* pWnd)
{
	if (m_pWnd == pWnd) return;
	if (m_pWnd && m_pWnd != pWnd) Unhook();

	m_pWnd = pWnd;
	m_pOriginalController = m_pWnd->pController;
	m_pWnd->pController = this;

	OnHooked();
}

bool CXWndControllerHook::Unhook()
{
	if (m_pWnd)
	{
		OnAboutToUnhook();

		m_pWnd->pController = m_pOriginalController;

		m_pWnd = nullptr;
		m_pOriginalController = nullptr;
		return true;
	}

	return false;
}

} // namespace eqlib
