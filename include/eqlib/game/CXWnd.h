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

#include "eqlib/Common.h"
#include "eqlib/SizeChecks.h"

#include "eqlib/game/Containers.h"
#include "eqlib/game/CXStr.h"
#include "eqlib/game/UIHelpers.h"
#include "eqlib/game/UITemplates.h"
#include "eqlib/game/UITextures.h"
#include "eqlib/game/UITypes.h"
#include "eqlib/game/XMLData.h"

#include "mq/base/Color.h"

namespace eqlib {

class CEditWnd;
class CRadioGroup;
class CSidlManagerBase;
class CTextureFont;
class CTextObjectInterface;

// Message types for WndNotifications
enum eWndNotification
{
	XWM_LCLICK                       = 1,
	XWM_LMOUSEUP                     = 2,
	XWM_RCLICK                       = 3,
	XWM_LDBLCLICK                    = 4,
	XWM_RDBLCLICK                    = 5,
	XWM_HITENTER                     = 6,
	XWM_TAB                          = 7,
	XWM_SHIFTTAB                     = 8,
	XWM_QMARKBOX                     = 9,
	XWM_CLOSE                        = 10,
	XWM_CHILDCLOSED                  = 11,
	XWM_TOOLTIP                      = 12,
	XWM_REQUESTINFO                  = 13,
	XWM_NEWVALUE                     = 14,
	XWM_COLUMNCLICK                  = 15,
	XWM_SORTREQUEST                  = 16,
	XWM_LISTBOX_EDIT_UPDATE          = 17,
	XWM_CLICKSTICKSTART              = 18,
	XWM_IS_LINK_ACTIVE               = 19,
	XWM_MENUSELECT                   = 20,
	XWM_MOUSEOVER                    = 21,
	XWM_HISTORY                      = 22,
	XWM_LCLICKHOLD                   = 23,
	XWM_RCLICKHOLD                   = 24,
	XWM_LBUTTONUPAFTERHELD           = 25,
	XWM_RBUTTONUPAFTERHELD           = 26,
	XWM_LINK                         = 27,
	XWM_FINDERITEMOPEN               = 28,
	XWM_MAXIMIZEBOX                  = 29,
	XWM_TITLEBAR                     = 30,
	XWM_ACHIEVEMENTLINK              = 31,
	XWM_NOTSURE32                    = 32,
	XWM_DIALOGRESPONSELINK           = 33,
	XWM_SPELL_LINK                   = 34,
	XWM_FOCUS                        = 35,
	XWM_LOSTFOCUS                    = 36,
	XWM_RELOAD_FROM_SIDL             = 37,
	XWM_ACTIVATE                     = 38,
	XWM_SLIDER_COMPLETE              = 39,
	XWM_SLIDER_COMPLEX_EX            = 40,
	XWM_COLORPICKER_COMPLETE         = 41,
	XWM_TEXTENTRY_COMPLETE           = 42,
	XWM_FILESELECTION_COMPLETE       = 43,
	XWM_ICONSELECTION_COMPLETE       = 44,
	XWM_RELOAD_INI                   = 45,
	XWM_THUMBTRACK                   = 46,
	XWM_SELITEM_DOWN                 = 47,
	XWM_FIRST_USER                   = 48,
	XWM_RSELITEM_DOWN                = 49,
	XWM_OUTPUT_TEXT                  = 50,
	XWM_COMMANDLINK                  = 51,
	XWM_RAIDINVITE_LINK              = 52,
	XWM_FACTION_LINK                 = 53,

	XWM_USER_DEFINED                 = 1000,
};


// Defines for CXWnd WindowStyle
#define CWS_VSCROLL                              0x00000001
#define CWS_HSCROLL                              0x00000002
#define CWS_TITLE                                0x00000004
#define CWS_CLOSE                                0x00000008
#define CWS_TILEBOX                              0x00000010
#define CWS_MINIMIZE                             0x00000020
#define CWS_BORDER                               0x00000040
#define CWS_RELATIVERECT                         0x00000080
#define CWS_AUTOSTRETCHV                         0x00000100
#define CWS_RESIZEALL                            0x00000200
#define CWS_TRANSPARENT                          0x00000400
#define CWS_USEMYALPHA                           0x00000800
#define CWS_DOCKING                              0x00001000
#define CWS_TOOLTIP_NODELAY                      0x00002000
#define CWS_FRAMEWND                             0x00004000
#define CWS_NOHITTEST                            0x00008000
#define CWS_QMARK                                0x00010000
#define CWS_NOMOVABLE                            0x00020000
#define CWS_MAXIMIZE                             0x00040000
#define CWS_AUTOVSCROLL                          0x00080000
#define CWS_AUTOHSCROLL                          0x00100000
#define CWS_CLIENTMOVABLE                        0x00200000
#define CWS_AUTOSTRETCH                          0x00400000
#define CWS_TRANSPARENTCONTROL                   0x00800000
#define CWS_RESIZEBORDER                         CWS_BORDER | CWS_RESIZEALL

#define ToggleBit(field, bit)                    ((field) ^= (bit));
#define BitOn(field, bit)                        ((field) |= (bit));
#define BitOff(field, bit)                       ((field) &= (~bit));
#define BitSet(field, bit)                       ((field) |= (1 << bit));
#define BitClear(field, bit)                     ((field) &= (~(1 << bit)));
// End CXWnd WindowStyle Defines

// For use with CXWndManager
enum eKeyboardFlags {
	KeyboardFlags_Shift = 0x01,
	KeyboardFlags_Ctrl  = 0x02,
	KeyboardFlags_LAlt  = 0x04,
	KeyboardFlags_RAlt  = 0x08,

	KeyboardFlags_Alt   = KeyboardFlags_LAlt | KeyboardFlags_RAlt,
};

// CXWndManager will send mouse clicks as keyboard events
constexpr int EQ_KEYBOARD_EVENT_MB3 = 240;
constexpr int EQ_KEYBOARD_EVENT_MB4 = 242;
constexpr int EQ_KEYBOARD_EVENT_MB5 = 241;

enum EScrollCode
{
	ScrollCodeUp,
	ScrollCodeUpContinue,
	ScrollCodeDown,
	ScrollCodeDownContinue,
	ScrollCodeAbsolute,
	ScrollCodePageUp,
	ScrollCodePageDown
};

enum EWndRuntimeType
{
	WRT_WND = 0,
	WRT_LISTWND,
	WRT_EDITWND,
	WRT_TREEWND,
	WRT_PAGEWND,
	WRT_TABWND,
	WRT_HOTKEYWND,
	WRT_EDITHOTKEYWND,
	WRT_RANGESLIDERWND,
	WRT_STMLWND,
	WRT_BROWSERWND,
	WRT_MODALMESSAGEWND,
	WRT_CHECKBOXWND,
	WRT_SIDLSCREENWND,
	WRT_SLIDERWND,
	WRT_LABEL,
	WRT_BUTTON,
	WRT_GAUGE,
	WRT_COMBOBOX,
	WRT_CHATWND,
	WRT_HELPWND,
};
EQLIB_API const char* EWndRuntimeTypeToString(EWndRuntimeType type);


using EDockAction = uint32_t;

//----------------------------------------------------------------------------

struct [[offsetcomments]] SDragDropInfo
{
/*0x00*/ bool       m_rightMouse;
/*0x08*/ CXWnd*     sourceWnd;
/*0x10*/ CXWnd*     targetWnd;
/*0x18*/ CXPoint    sourcePos;
/*0x20*/ CXPoint    targetPos;
/*0x28*/ int        message;
/*0x30*/ uintptr_t  data;
/*0x38*/
};

class [[offsetcomments]] CClickStickInfo
{
	CClickStickInfo() = default;
	virtual ~CClickStickInfo() {}

/*0x08*/ CXWnd*     sourceWnd;
/*0x10*/ CXWnd*     targetWnd;
/*0x18*/ CXPoint    sourcePos;
/*0x20*/ CXPoint    targetPos;
/*0x28*/ int        message;
/*0x30*/ uintptr_t  data;
/*0x38*/
};

class CLayoutStrategy
{
public:
	~CLayoutStrategy() {}
	virtual bool LayoutChildren(CXWnd* wnd) {}
};

class CursorClass
{
public:
	enum { eNumCursors = 7 };

	enum eCursorTypes
	{
		eArrow,
		eMove,
		eBeam,
		eNorthEastSouthWest,
		eNorthWestSouthEast,
		eNorthSouth,
		eEastWest
	};

	enum eDisplayMode
	{
		eNormal,
		eScreenShot
	};

	const char*    CursorName[eNumCursors];
	HCURSOR        CursorList[eNumCursors];
	bool           bScreenShotMode;
};

//============================================================================
// CXWnd
//============================================================================

constexpr size_t CXWnd_size = 0x260; // @sizeof(CXWnd) :: 2026-04-15 (live) — master forensics/cxwnd_apr15_vtable_thunks.md (Master CXWnd apr15 layout map, 85 rows, sums to 0x260)
constexpr size_t CXWnd_vftable_size = 0x348;

class [[offsetcomments]] CXWnd
	: public TListNode<CXWnd>   // node in list of siblings
	, public TList<CXWnd>       // list of children
{
public:
	EQLIB_OBJECT CXWnd(CXWnd* parent = nullptr, uint32_t id = 0, CXRect rect = {}, bool useClassicUI = true);

	//----------------------------------------------------------------------------
	EQLIB_OBJECT virtual bool IsValid() const { return ValidCXWnd; }
	EQLIB_OBJECT virtual ~CXWnd();
	EQLIB_OBJECT virtual const char* GetWndClassName() const { return "CXWnd"; }
	EQLIB_OBJECT virtual int DrawNC() const;
	EQLIB_OBJECT virtual int Draw() { return 0; }
	EQLIB_OBJECT virtual int PostDraw() { return 0; }
	EQLIB_OBJECT virtual int DrawCursor(const CXPoint& mousePos, const CXRect& clip, bool& drawn);
	EQLIB_OBJECT virtual int DrawChildItem(const CXWnd* child, void* item) const { return 0; }
	EQLIB_OBJECT virtual int DrawCaret() const { return 0; }
	EQLIB_OBJECT virtual int DrawBackground() const;
	EQLIB_OBJECT virtual int DrawTooltip(const CXWnd* wnd) const;
	EQLIB_OBJECT virtual int DrawTooltipAtPoint(const CXPoint& pos, const CXStr& tooltip = {}) const;
	EQLIB_OBJECT virtual CXRect GetMinimizedRect() const;
	EQLIB_OBJECT virtual int DrawTitleBar(const CXRect& rect) const;
	EQLIB_OBJECT virtual void SetZLayer(int Value);
	int GetZLayer() const { return ZLayer; }
	EQLIB_OBJECT virtual HCURSOR GetCursorToDisplay() const;
	EQLIB_OBJECT virtual int HandleLButtonDown(const CXPoint& pos, uint32_t flags);
	EQLIB_OBJECT virtual int HandleLButtonUp(const CXPoint& pos, uint32_t flags);
	EQLIB_OBJECT virtual int HandleLButtonHeld(const CXPoint& pos, uint32_t flags);
	EQLIB_OBJECT virtual int HandleLButtonUpAfterHeld(const CXPoint& pos, uint32_t flags);
	EQLIB_OBJECT virtual int HandleRButtonDown(const CXPoint& pos, uint32_t flags);
	EQLIB_OBJECT virtual int HandleRButtonUp(const CXPoint& pos, uint32_t flags);
	EQLIB_OBJECT virtual int HandleRButtonHeld(const CXPoint& pos, uint32_t flags);
	EQLIB_OBJECT virtual int HandleRButtonUpAfterHeld(const CXPoint& pos, uint32_t flags);
	EQLIB_OBJECT virtual int HandleWheelButtonDown(const CXPoint& pos, uint32_t flags);
	EQLIB_OBJECT virtual int HandleWheelButtonUp(const CXPoint& pos, uint32_t flags);
	EQLIB_OBJECT virtual int HandleMouseMove(const CXPoint& pos, uint32_t flags);
	EQLIB_OBJECT virtual int HandleWheelMove(const CXPoint& pos, int scroll, uint32_t flags);
	EQLIB_OBJECT virtual int HandleKeyboardMsg(uint32_t message, uint32_t flags, bool down);
	EQLIB_OBJECT virtual int HandleMouseLeave();
	EQLIB_OBJECT virtual int OnDragDrop(SDragDropInfo* info);
	EQLIB_OBJECT virtual HCURSOR GetDragDropCursor(SDragDropInfo* info) const;
	EQLIB_OBJECT virtual bool QueryDropOK(SDragDropInfo* info) const;
	EQLIB_OBJECT virtual int OnClickStick(CClickStickInfo* info, uint32_t flags, bool unk);
	EQLIB_OBJECT virtual HCURSOR GetClickStickCursor(CClickStickInfo* info) const;
	EQLIB_OBJECT virtual bool QueryClickStickDropOK(CClickStickInfo* info) const;
	EQLIB_OBJECT virtual int WndNotification(CXWnd* sender, uint32_t message, void* data = nullptr);
	EQLIB_OBJECT virtual void OnWndNotification();
	EQLIB_OBJECT virtual void Activate() { Show(true); }
	EQLIB_OBJECT virtual void Deactivate() { Show(false); }
	EQLIB_OBJECT bool IsActive() const { return bActive; }
	EQLIB_OBJECT virtual int OnShow();
	EQLIB_OBJECT virtual int OnMove(const CXRect& rect);
	EQLIB_OBJECT virtual int OnResize(int w, int h);
	EQLIB_OBJECT virtual int OnBeginMoveOrResize();
	EQLIB_OBJECT virtual int OnCompleteMoveOrResize();
	EQLIB_OBJECT virtual int OnMinimizeBox();
	EQLIB_OBJECT bool IsMinimized() const { return bMinimized; }
	EQLIB_OBJECT void SetMinimized(bool bValue) { bMinimized = bValue; }
	EQLIB_OBJECT virtual int OnMaximizeBox();
	EQLIB_OBJECT bool IsMaximized() const { return bMaximized; }
	EQLIB_OBJECT virtual int OnTileBox();
	EQLIB_OBJECT bool IsTiled() const { return bTiled; }
	EQLIB_OBJECT virtual int OnTile() { return 0; }
	EQLIB_OBJECT virtual int OnSetFocus(CXWnd* old);
	EQLIB_OBJECT virtual int OnKillFocus(CXWnd* old);
	EQLIB_OBJECT virtual int OnProcessFrame();
	EQLIB_OBJECT virtual int OnVScroll(EScrollCode code, int pos);
	EQLIB_OBJECT virtual int OnHScroll(EScrollCode code, int pos);
	EQLIB_OBJECT virtual int OnBroughtToTop() { return 0; }
	EQLIB_OBJECT virtual int OnActivate(CXWnd* old) { return 0; }
	EQLIB_OBJECT virtual int Show(bool show = true, bool bringToTop = true, bool updateLayout = true);
	EQLIB_OBJECT virtual bool AboutToShow();
	EQLIB_OBJECT virtual bool AboutToHide();
	EQLIB_OBJECT virtual int RequestDockInfo(EDockAction action, CXWnd* wnd, CXRect* rect) { return 0; }
	EQLIB_OBJECT virtual CXStr GetTooltip() const { return Tooltip; }
	EQLIB_OBJECT virtual void ClickThroughMenuItemTriggered();
	EQLIB_OBJECT virtual void SetLocked(bool bValue) { if (Unlockable) Locked = bValue; }
	bool IsLocked() const { return Locked; }
	EQLIB_OBJECT virtual int HitTest(const CXPoint& pos, int* result) const;
	EQLIB_OBJECT virtual CXRect GetHitTestRect(int code) const;
	EQLIB_OBJECT virtual CXRect GetInnerRect() const;
	EQLIB_OBJECT virtual CXRect GetClientRect() const { return GetClientRectNonVirtual(); }
	EQLIB_OBJECT virtual CXRect GetClientClipRect() const;
	EQLIB_OBJECT virtual CXSize GetMinSize(bool withBorder = true) const;
	EQLIB_OBJECT virtual CXSize GetMaxSize(bool withBorder = true) const;
	EQLIB_OBJECT virtual CXSize GetUntileSize() const { return Location.GetSize(); }
	EQLIB_OBJECT virtual bool IsPointTransparent(const CXPoint& point) const { return false; }
	EQLIB_OBJECT virtual bool ShouldProcessChildrenFrames() const { return IsVisible() && !IsMinimized(); }
	EQLIB_OBJECT virtual bool ShouldProcessControllerFrame() const { return IsVisible() && !IsMinimized(); }
	EQLIB_OBJECT virtual void SetDrawTemplate(CXWndDrawTemplate* drawTemplate) { DrawTemplate = drawTemplate; }
	EQLIB_OBJECT virtual void SetBGType(uint32_t Value) { BackgroundDrawType = Value; }
	uint32_t GetBGType() const { return BackgroundDrawType; }
	// apr15-2026-live: BGColor RESTORED at +0x060 per pass-3 master layout
	// (cxwnd_apr15_vtable_thunks.md). The +0x24c slot holds FadeDuration in
	// apr15 (re-attribution; +0x038 is BlinkFadeDuration).
	EQLIB_OBJECT virtual void SetBGColor(COLORREF Value) { BGColor = Value; }
	void SetBGColor(mq::MQColor Value) { BGColor = Value.ToARGB(); }
	COLORREF GetBGColor() const { return BGColor; }
	EQLIB_OBJECT virtual int UpdateGeometry(const CXRect& rect, bool updateLayout = true, bool forceUpdateLayout = false,
		bool completeMoveOrResize = false, bool moveAutoStretch = false);
	EQLIB_OBJECT virtual int Move(const CXPoint& point);
	EQLIB_OBJECT virtual int Minimize(bool);
	EQLIB_OBJECT virtual void SetWindowText(const CXStr& text) { WindowText = text; }
	CXStr GetWindowText() const { return WindowText; }
	EQLIB_OBJECT virtual void SetTooltip(const CXStr& Value) { Tooltip = Value; }
	EQLIB_OBJECT virtual void Center();
	EQLIB_OBJECT virtual void CenterVertically();
	EQLIB_OBJECT virtual void CenterHorizontally();
	EQLIB_OBJECT virtual void Top(bool center = true);
	EQLIB_OBJECT virtual void Bottom(bool center = true);
	EQLIB_OBJECT virtual void Right(bool center = true);
	EQLIB_OBJECT virtual void Left(bool center = true);
	EQLIB_OBJECT virtual int MoveToCursor();
	EQLIB_OBJECT virtual CXWnd* GetChildWndAt(const CXPoint& pos, bool, bool) const;
	EQLIB_OBJECT virtual CScreenPieceTemplate* GetSidlPiece(const CXStr& screenId, bool top = true) const;
	EQLIB_OBJECT virtual const CXStr* GetWindowName() const { return nullptr; }
	EQLIB_OBJECT virtual int SetVScrollPos(int pos);
	EQLIB_OBJECT virtual int SetHScrollPos(int pos);
	EQLIB_OBJECT virtual int AutoSetVScrollPos(CXRect rect);
	EQLIB_OBJECT virtual int AutoSetHScrollPos(CXRect rect);
	EQLIB_OBJECT virtual void SetAttributesFromSidl(CParamScreenPiece* screenPiece);
	EQLIB_OBJECT virtual void OnReloadSidl() {}
	EQLIB_OBJECT virtual bool HasActivatedFirstTimeAlert() const {  return false; }
	EQLIB_OBJECT virtual void SetHasActivatedFirstTimeAlert(bool) {}
	// apr15-2026-live: MinClientSize RESTORED at +0x1ac (CXSize, master pass-3).
	// MaxClientSize RESTORED at +0x0f4 (CXSize, master pass-3).
	EQLIB_OBJECT virtual const CXSize& GetMinClientSize() const { return MinClientSize; }
	EQLIB_OBJECT virtual const CXSize& GetMaxClientSize() const { return MaxClientSize; }
	void SetMinClientSize(const CXSize& Value) { MinClientSize = Value; }
	void SetMaxClientSize(const CXSize& Value) { MaxClientSize = Value; }
	EQLIB_OBJECT virtual CEditWnd* GetActiveEditWnd() const { return nullptr; }
	EQLIB_OBJECT virtual void UpdateLayout(bool finish = false);

	// De-virtualized to support calling from login.
	EQLIB_OBJECT CXRect GetClientRectNonVirtual() const;

	void SetClientRectDirty(bool dirty);
	bool IsClientRectDirty() const { return bClientRectChanged; }
	bool IsClientClipRectDirty() const { return bClientClipRectChanged; }
	bool IsScreenClipRectDirty() const { return bScreenClipRectChanged; }
	DEPRECATE("CGetWindowText: Use GetWindowText() instead") CXStr CGetWindowText() const { return GetWindowText(); }
	DEPRECATE("CSetWindowText: Use SetWindowText() instead") void CSetWindowText(const CXStr& text) { SetWindowText(text); }
	DEPRECATE("Use SetWindowText instead of SetWindowTextA") void SetWindowTextA(const CXStr& text) { this->SetWindowText(text); }

	// Renamed Move -> UpdateLayout to avoid having two virtuals with the same name. This just exists for backwards compatibility.
	inline int Move(const CXRect& rect, bool updateLayout = true, bool forceUpdateLayout = false,
		bool completeMoveOrResize = false, bool moveAutoStretch = false)
	{
		return UpdateGeometry(rect, updateLayout, forceUpdateLayout, completeMoveOrResize, moveAutoStretch);
	}
public:
	// functions we have offsets for
	EQLIB_OBJECT bool IsType(EWndRuntimeType eType) const;
	EQLIB_OBJECT CXWnd* SetFocus();
	EQLIB_OBJECT void ClrFocus();
	EQLIB_OBJECT int Destroy();
	EQLIB_OBJECT int ProcessTransition();
	EQLIB_OBJECT void BringToTop(bool bRecurse = true);
	EQLIB_OBJECT void StartFade(unsigned char, uint32_t);
	EQLIB_OBJECT bool IsReallyVisible() const;
	EQLIB_OBJECT int DoAllDrawing() const;
	EQLIB_OBJECT int DrawChildren() const;
	EQLIB_OBJECT CXRect GetScreenClipRect() const;
	EQLIB_OBJECT bool IsDescendantOf(CXWnd const*) const;
	EQLIB_OBJECT const CTAFrameDraw* GetBorderFrame() const;
	EQLIB_OBJECT CXRect GetScreenRect() const;
	EQLIB_OBJECT int Resize(int Width, int Height, bool bUpdateLayout = true, bool bCompleteMoveOrResize = false, bool bMoveAutoStretch = false);
	EQLIB_OBJECT CXWnd* SetParent(CXWnd*, bool);
	EQLIB_OBJECT void SetMouseOver(bool);
	EQLIB_OBJECT void SetKeyTooltip(int, int);
	EQLIB_OBJECT int SetFont(CTextureFont*);

	EQLIB_OBJECT static void DrawColoredRect(const CXRect& rect, COLORREF color, const CXRect& clipRect);

	//EQLIB_OBJECT bool HasFocus() const;
	//EQLIB_OBJECT const CButtonDrawTemplate* GetCloseBoxTemplate() const;
	//EQLIB_OBJECT const CButtonDrawTemplate* GetMinimizeBoxTemplate() const;
	//EQLIB_OBJECT const CButtonDrawTemplate* GetTileBoxTemplate() const;
	//EQLIB_OBJECT const CTAFrameDraw* GetTitlebarHeader() const;
	//EQLIB_OBJECT CXRect GetRelativeRect() const;
	//EQLIB_OBJECT CXWnd* GetChildWndAt(CXPoint*, int, int) const;
	//EQLIB_OBJECT int DrawCloseBox() const;
	//EQLIB_OBJECT int DrawHScrollbar(int, int, int) const;
	//EQLIB_OBJECT int DrawMinimizeBox() const;
	//EQLIB_OBJECT int DrawTileBox() const;
	//EQLIB_OBJECT int DrawVScrollbar(int, int, int) const;
	//EQLIB_OBJECT int GetWidth() const;
	//EQLIB_OBJECT void BringChildWndToTop(CXWnd*);
	//EQLIB_OBJECT void SetFirstChildPointer(CXWnd*);
	//EQLIB_OBJECT void SetLookLikeParent();
	//EQLIB_OBJECT void SetNextSibPointer(CXWnd*);

	// -----------------------------------------------------------------------

	EQLIB_OBJECT UIType GetType() const;
	EQLIB_OBJECT CXMLData* GetXMLData() const;
	EQLIB_OBJECT CXMLData* GetXMLData(CXMLDataManager* dataMgr) const;
	EQLIB_OBJECT CXWnd* GetChildItem(const CXStr&);
	EQLIB_OBJECT CXWnd* GetChildItem(CXMLDataManager* dataMgr, const CXStr&);

	bool IsVisible() const { return dShow; }
	void SetVisible(bool bValue) { dShow = bValue; }

	void SetMaximizable(bool bValue) { bMaximizable = bValue; }

	CTextureFont* GetFont() const { return pFont; }

	void SetEscapable(bool bValue) { CloseOnESC = bValue; }
	void SetEscapableLocked(bool bValue) { bEscapableLocked = bValue; }

	CXWnd* GetParentWindow() const { return ParentWindow; }
	CXWnd* GetParent() const { return ParentWindow; }
	void SetParentWindow(CXWnd* pWnd) { ParentWindow = pWnd; };

	const CXWnd* GetFirstChildWnd() const { return GetFirstNode(); }
	CXWnd* GetFirstChildWnd() { return GetFirstNode(); }
	const CXWnd* GetNextSiblingWnd() const { return GetNext(); }
	CXWnd* GetNextSiblingWnd() { return GetNext(); }

	// apr15-2026-live: VScrollMax VERIFIED at +0x044 (int, master pass-3).
	int GetVScrollMax() const { return VScrollMax; }
	int GetVScrollPos() const { return VScrollPos; }
	int GetHScrollMax() const { return HScrollMax; }
	int GetHScrollPos() const { return HScrollPos; }

	bool IsMouseOver() const { return MouseOver; }

	CXRect GetLocation() const { return Location; }
	void SetLocation(const CXRect& r) { Location = r; }

	// apr15-2026-live: OldLocation RESTORED at +0x1b8 (CXRect, master pass-3).
	CXRect GetOldLocation() const { return OldLocation; }
	void SetOldLocation(const CXRect& r) { OldLocation = r; }

	void SetNeedsSaving(bool bValue) { bNeedsSaving = bValue; }

	void SetClientRectChanged(bool bValue) { bClientRectChanged = bValue; }

	void SetDisabledBackground(COLORREF Value) { DisabledBackground = Value; }
	COLORREF GetDisabledBackground() const { return DisabledBackground; }

	bool IsEnabled() const { return Enabled; }
	void SetEnabled(bool bValue) { Enabled = bValue; }

	uint32_t GetWindowStyle() const { return WindowStyle; }
	void SetWindowStyle(uint32_t Value) { WindowStyle = Value; }
	void AddStyle(uint32_t Value) { WindowStyle |= Value; }
	void RemoveStyle(uint32_t Value) { WindowStyle &= ~Value; }

	void SetClipToParent(bool bValue) { bClipToParent = bValue; }
	void SetUseInLayoutHorizontal(bool bValue) { bUseInLayoutHorizontal = bValue; }
	void SetUseInLayoutVertical(bool bValue) { bUseInLayoutVertical = bValue; }

	CXWndDrawTemplate* GetDrawTemplate() const { return DrawTemplate; }

	void SetActive(bool bValue) { bActive = bValue; }

	void SetFades(bool bValue) { Fades = bValue; }
	bool GetFades() const { return Fades; }

	// apr15-2026-live: Faded RESTORED at +0x067 (bool, master pass-3).
	bool GetFaded() const { return Faded; }
	void SetFaded(bool bValue) { Faded = bValue; }

	// apr15-2026-live: FadeDelay VERIFIED at +0x178 (uint32_t).
	// Round-2 audit forensics/cxwnd_apr15_field_locations.md:
	//   OnProcessFrame 0x1405c9050 reads *(uint*)(this+0x178) and compares to
	//   GetTickCount()-LastTimeMouseOver to trigger fade-out; ctor 0x1405c1f08
	//   writes 0x7d0 (=2000ms canonical default).
	void SetFadeDelay(int Value) { FadeDelay = (uint32_t)Value; }
	int  GetFadeDelay() const    { return (int)FadeDelay; }

	void SetFadeDuration(uint32_t Value) { FadeDuration = Value; }
	uint32_t GetFadeDuration() const { return FadeDuration; }

	void SetAlpha(uint8_t Value) { Alpha = Value; }
	uint8_t GetAlpha() const { return Alpha; }

	void SetFadeToAlpha(uint8_t Value) { FadeToAlpha = Value; }
	uint8_t GetFadeToAlpha() const { return FadeToAlpha; }

	// apr15-2026-live: Data REMOVED — upstream +0x198 (8B) overlaps verified
	// Location @+0x18c..+0x19c (last 4 bytes conflict). Accessors removed.

	DEPRECATE("Use GetClickThrough instead of GetClickable")
	bool GetClickable() const { return bClickThrough; }
	DEPRECATE("Use SetClickThrough instead of SetClickable")
	void SetClickable(bool bValue) { bClickThrough = bValue; }

	bool GetClickThrough() const { return bClickThrough; }
	void SetClickThrough(bool bValue) { bClickThrough = bValue; }

	// apr15-2026-live: bShowClickThroughMenuItem REMOVED from CXWnd.
	// Round-2 audit forensics/cxwnd_apr15_field_locations.md positively proves
	// no bool exists at any plausible offset:
	//   - ctor zero-pair at 0x1405c1d70+0x1405c1d77 covers 16 contiguous bytes
	//     at +0x22c..+0x23c (single 16-byte CXRect, not bool + rect).
	//   - GetClientRect 0x1405c6100 writes 4 dwords at +0x22c..+0x238.
	//   - No CXWnd member function reads a bool at +0x22c.
	// Accessors removed entirely; callers must be updated.

	void SetBottomAnchoredToTop(bool bValue) { bBottomAnchoredToTop = bValue; }
	void SetLeftAnchoredToLeft(bool bValue) { bLeftAnchoredToLeft = bValue; }
	void SetRightAnchoredToLeft(bool bValue) { bRightAnchoredToLeft = bValue; }
	void SetTopAnchoredToTop(bool bValue) { bTopAnchoredToTop = bValue; }

	void SetOffsets(const CXRect& rect)
	{
		TopOffset = rect.top;
		BottomOffset = rect.bottom;
		LeftOffset = rect.left;
		// apr15-2026-live: RightOffset VERIFIED at +0x250 (round-2 forensics).
		SetRightOffset(rect.right);
	}

	void SetTopOffset(int Value) { TopOffset = Value; }
	int GetTopOffset() const { return TopOffset; }

	void SetBottomOffset(int Value) { BottomOffset = Value; }
	int GetBottomOffset() const { return BottomOffset; }

	void SetLeftOffset(int Value) { LeftOffset = Value; }
	int GetLeftOffset() const { return LeftOffset; }

	// apr15-2026-live: RightOffset VERIFIED at +0x250 (int).
	// Round-2 audit forensics/cxwnd_apr15_field_locations.md:
	//   GetRelativeRect 0x1405c7aa0 reads (this+0x250) as the right-side anchor
	//   offset, paired with byte +0x3c toggle (bRightAnchoredToRight).
	void SetRightOffset(int Value) { RightOffset = Value; }
	int  GetRightOffset() const    { return RightOffset; }

	int GetXMLIndex() const { return XMLIndex; }

	void SetXMLTooltip(const CXStr& Value) { XMLToolTip = Value; }
	CXStr GetXMLTooltip() const { return XMLToolTip; }

	void SetCRNormal(mq::MQColor Value) { CRNormal = Value.ToARGB(); }
	void SetCRNormal(COLORREF Value) { CRNormal = Value; }

	void SetBringToTopWhenClicked(bool bValue) { bBringToTopWhenClicked = bValue; }

	bool GetNeedsSaving() const { return bNeedsSaving; }
	int GetParentAndContextMenuArrayIndex() const { return ParentAndContextMenuArrayIndex; }

	EQLIB_OBJECT CXStr GetXMLName() const;
	EQLIB_OBJECT CXStr GetTypeName() const;

	EQLIB_OBJECT std::string_view GetXMLNameSv() const;
	EQLIB_OBJECT std::string_view GetTypeNameSv() const;

	int ParentWndNotification(CXWnd* sender, uint32_t message, void* data) const
	{
		if (pController)
		{
			pController->WndNotification(sender, message, data);
		}

		if (ParentWindow)
		{
			return ParentWindow->WndNotification(sender, message, data);
		}

		return 0;
	}

	void Refade()
	{
		// apr15-2026-live: LastTimeMouseOver VERIFIED at +0x1f4 (uint32_t).
		// apr15-2026-live: Faded RESTORED at +0x067 (master pass-3).
		Faded = true;
		LastTimeMouseOver = GetTickCount();
	}

	struct [[offsetcomments]] VirtualFunctionTable
	{
		FORCE_SYMBOLS;

	/*0x000*/ void* IsValid;
	/*0x008*/ void* Destructor;
	/*0x010*/ void* GetWndClassName;
	/*0x018*/ void* DrawNC;
	/*0x020*/ void* Draw;
	/*0x028*/ void* PostDraw;
	/*0x030*/ void* DrawCursor;
	/*0x038*/ void* DrawChildItem;
	/*0x040*/ void* DrawCaret;
	/*0x048*/ void* DrawBackground;
	/*0x050*/ void* DrawTooltip;
	/*0x058*/ void* DrawTooltipAtPoint;
	/*0x060*/ void* GetMinimizedRect;
	/*0x068*/ void* DrawTitleBar;
	/*0x070*/ void* SetZLayer;
	/*0x078*/ void* GetCursorToDisplay;
	/*0x080*/ void* HandleLButtonDown;
	/*0x088*/ void* HandleLButtonUp;
	/*0x090*/ void* HandleLButtonHeld;
	/*0x098*/ void* HandleLButtonUpAfterHeld;
	/*0x0a0*/ void* HandleRButtonDown;
	/*0x0a8*/ void* HandleRButtonUp;
	/*0x0b0*/ void* HandleRButtonHeld;
	/*0x0b8*/ void* HandleRButtonUpAfterHeld;
	/*0x0c0*/ void* HandleWheelButtonDown;
	/*0x0c8*/ void* HandleWheelButtonUp;
	/*0x0d0*/ void* HandleMouseMove;
	/*0x0d8*/ void* HandleWheelMove;
	/*0x0e0*/ void* HandleKeyboardMsg;
	/*0x0e8*/ void* HandleMouseLeave;
	/*0x0f0*/ void* OnDragDrop;
	/*0x0f8*/ void* GetDragDropCursor;
	/*0x100*/ void* QueryDropOK;
	/*0x108*/ void* OnClickStick;
	/*0x110*/ void* GetClickStickCursor;
	/*0x118*/ void* QueryClickStickDropOK;
	/*0x120*/ void* WndNotification;
	/*0x128*/ void* OnWndNotification;
	/*0x130*/ void* Activate;
	/*0x138*/ void* Deactivate;
	/*0x140*/ void* OnShow;
	/*0x148*/ void* OnMove;
	/*0x150*/ void* OnResize;
	/*0x158*/ void* OnBeginMoveOrResize;
	/*0x160*/ void* OnCompleteMoveOrResize;
	/*0x168*/ void* OnMinimizeBox;
	/*0x170*/ void* OnMaximizeBox;
	/*0x178*/ void* OnTileBox;
	/*0x180*/ void* OnTile;
	/*0x188*/ void* OnSetFocus;
	/*0x190*/ void* OnKillFocus;
	/*0x198*/ void* OnProcessFrame;
	/*0x1a0*/ void* OnVScroll;
	/*0x1a8*/ void* OnHScroll;
	/*0x1b0*/ void* OnBroughtToTop;
	/*0x1b8*/ void* OnActivate;
	/*0x1c0*/ void* Show;
	/*0x1c8*/ void* AboutToShow;
	/*0x1d0*/ void* AboutToHide;
	/*0x1d8*/ void* RequestDockInfo;
	/*0x1e0*/ void* GetTooltip;
	/*0x1e8*/ void* ClickThroughMenuItemTriggered;  // called from CContextMenuManagerBase::HandleWindowMenuCommands
	/*0x1f0*/ void* SetLocked;
	/*0x1f8*/ void* HitTest;
	/*0x200*/ void* GetHitTestRect;
	/*0x208*/ void* GetInnerRect;
	/*0x210*/ void* GetClientRect;
	/*0x218*/ void* GetClientClipRect;
	/*0x220*/ void* GetMinSize;
	/*0x228*/ void* GetMaxSize;
	/*0x230*/ void* GetUntileSize;
	/*0x238*/ void* IsPointTransparent;
	/*0x240*/ void* ShouldProcessChildrenFrames;
	/*0x248*/ void* ShouldProcessControllerFrame;
	/*0x250*/ void* SetDrawTemplate;
	/*0x258*/ void* SetBGType;
	/*0x260*/ void* SetBGColor;
	/*0x268*/ void* UpdateGeometry;
	/*0x270*/ void* Move;
	/*0x278*/ void* Minimize;
	/*0x280*/ void* SetWindowText;
	/*0x288*/ void* SetTooltip;
	/*0x290*/ void* Center;
	/*0x298*/ void* CenterVertically;
	/*0x2a0*/ void* CenterHorizontally;
	/*0x2a8*/ void* Top;
	/*0x2b0*/ void* Bottom;
	/*0x2b8*/ void* Right;
	/*0x2c0*/ void* Left;
	/*0x2c8*/ void* MoveToCursor;
	/*0x2d0*/ void* GetChildWndAt;
	/*0x2d8*/ void* GetSidlPiece;
	/*0x2e0*/ void* GetWindowName;
	/*0x2e8*/ void* SetVScrollPos;
	/*0x2f0*/ void* SetHScrollPos;
	/*0x2f8*/ void* AutoSetVScrollPos;
	/*0x300*/ void* AutoSetHScrollPos;
	/*0x308*/ void* SetAttributesFromSidl;
	/*0x310*/ void* OnReloadSidl;
	/*0x318*/ void* HasActivatedFirstTimeAlert;
	/*0x320*/ void* SetHasActivatedFirstTimeAlert;
	/*0x328*/ void* GetMinClientSize;
	/*0x330*/ void* GetMaxClientSize;
	/*0x338*/ void* GetActiveEditWnd;
	/*0x340*/ void* UpdateLayout;
	/*0x348*/
	};

	// Returns the current instance of this class's vftable. Might represent some other
	// inherited class (and not CXWnd's)
	inline VirtualFunctionTable* GetVFTable()
	{
		if (this == nullptr) return nullptr;
		return *reinterpret_cast<VirtualFunctionTable**>(this);
	}

	// points to the eq instance of the virtual function table for this class
	static VirtualFunctionTable* sm_vftable;

	// Always allocate using custom eq allocators
	EQLIB_OBJECT static void* operator new(std::size_t sz);
	EQLIB_OBJECT static void* operator new[](std::size_t sz);
	EQLIB_OBJECT static void operator delete(void* ptr);
	EQLIB_OBJECT static void operator delete[](void* ptr);

// @start: CXWnd Members
//
// apr15-2026-live layout per master forensics
// (forensics/cxwnd_apr15_vtable_thunks.md "Master CXWnd apr15 layout map").
//
// 78 named upstream fields (one row per offset; CXRect/CXSize/CXStr collapsed
// to a single typed declaration at the start offset of the region).
//
// 6 NONE_FOUND_apr15_internal slots (typed pad bytes, no upstream match):
//   +0x030 byte, +0x099 byte, +0x09a byte, +0x0e4 byte, +0x188 byte,
//   +0x189 byte, +0x18b byte, +0x19d byte (note: 8 internal rows total in
//   master at last update — listed here individually to match table).
//
// 1 med-confidence row (single-callsite):
//   +0x078 IconTextureAnim (qword) — promoted to a real declaration but
//   marked med-confidence in master pass-3.
//
// Re-attribution vs prior round-3 layout:
//   +0x038  BlinkFadeDuration (was the upstream BGColor offset; the older
//           header had FadeDuration "removed" and BlinkFadeDuration at +0x24c)
//   +0x24c  FadeDuration (re-attributed from BlinkFadeDuration per pass-3
//           OnProcessFrame evidence)
//   +0x060  BGColor (re-introduced; was removed in earlier rounds)
//
// Struct sizeof = 0x260 (preserved). CXWnd_size constant unchanged.
// Master row count = 85 (84 named + 1 med). Net (TBD) count = 0.
//
/*0x030*/ uint8_t            _apr15_internal_0x030;     // gated cursor/internal byte, no upstream match (R, FUN_1405c92e0)
/*0x031*/ uint8_t            _pad_0x031[3];
/*0x034*/ uint8_t            Fades;                     // apr15: VERIFIED (master +pass3, OnProcessFrame 0x1405c9050)
/*0x035*/ uint8_t            _pad_0x035[3];
/*0x038*/ uint32_t           BlinkFadeDuration;         // apr15: VERIFIED (master +pass3, OnProcessFrame fade-trigger reader)
/*0x03c*/ bool               bRightAnchoredToRight;     // apr15: VERIFIED (anchor save FUN_1405c5c50, ctor 0x1405c1ed4 init=1)
/*0x03d*/ uint8_t            _pad_0x03d[3];
/*0x040*/ int                HScrollMax;                // apr15: VERIFIED (master, 0x1405c4800)
/*0x044*/ int                VScrollMax;                // apr15: VERIFIED (master, 0x1405c4800)
/*0x048*/ uint8_t            Alpha;                     // apr15: VERIFIED (master, 0x1405c9f90)
/*0x049*/ uint8_t            FadeAlpha;                 // apr15: VERIFIED (master, OnProcessFrame 0x1405c9050)
/*0x04a*/ uint8_t            _pad_0x04a[6];
/*0x050*/ CTextureFont*      pFont;                     // apr15: VERIFIED (master +disambig, 0x1405c5490)
/*0x058*/ CTextObjectInterface* pTipTextObject;         // apr15: VERIFIED (master, 0x1405c5490)
/*0x060*/ uint32_t           BGColor;                   // apr15: VERIFIED (master, 0x140074470 — RW dword)
/*0x064*/ uint8_t            StartAlpha;                // apr15: VERIFIED (master +pass3, 0x1405c9f90)
/*0x065*/ uint8_t            _pad_0x065[1];
/*0x066*/ bool               bActive;                   // apr15: VERIFIED (master, 0x1405c92b0)
/*0x067*/ bool               Faded;                     // apr15: VERIFIED (master, OnProcessFrame 0x1405c9050)
/*0x068*/ CXRect             ClipRectScreen;            // apr15: VERIFIED (master forensics_only, GetScreenClipRect 0x1405c7bb0)
/*0x078*/ CTextureAnimation* IconTextureAnim;           // med-confidence, single-callsite (master +pass3, 0x1405c4e30)
/*0x080*/ int                TransitionStartTick;       // apr15: VERIFIED (master +disambig, 0x1405c9f90)
/*0x084*/ int                DisabledBackground;        // apr15: VERIFIED (master +pass3, 0x1405c37b0)
/*0x088*/ CXRect             IconRect;                  // apr15: VERIFIED (master, 0x1405c4e30 DrawNC)
/*0x098*/ uint8_t            _pad_0x098[1];
/*0x099*/ bool               dShow;                     // apr15: VERIFIED (member-fn sweep, IsReallyVisible 0x1405c84e0 self+parent-chain visibility gate)
/*0x09a*/ uint8_t            _apr15_internal_0x09a;     // RW byte, no upstream match (master +pass4, 0x140074750)
/*0x09b*/ uint8_t            _pad_0x09b[5];
/*0x0a0*/ CStaticTintedBlendAnimationTemplate* TitlePiece; // apr15: VERIFIED (master +pass4, 0x1405c4e30)
/*0x0a8*/ uint8_t            bResizableMask;            // apr15: VERIFIED (master +pass3, 0x1405c6190)
/*0x0a9*/ uint8_t            _pad_0x0a9[7];
/*0x0b0*/ CTextObjectInterface* pTextObject;            // apr15: VERIFIED (master +disambig, 0x1405c4e30)
/*0x0b8*/ bool               bMinimized;                // apr15: VERIFIED (member-fn sweep, thunk 0x140074ad0 = "shown AND not minimized" predicate; sibling helper 0x1405c8720 writes =1 + save-rect to OldLocation)
/*0x0b9*/ uint8_t            _pad_0x0b9[3];
/*0x0bc*/ int                ZLayer;                    // apr15: VERIFIED (master, 0x1405c9f70)
/*0x0c0*/ bool               ClipRectClient_dirty_flag; // apr15: VERIFIED (member-fn sweep, GetClientClipRect 0x1405c5fb0 dirty gate for +0x0d4 rect)
/*0x0c1*/ uint8_t            _pad_0x0c1[3];
/*0x0c4*/ int                BlinkStartTimer;           // apr15: VERIFIED (master +pass3, OnProcessFrame 0x1405c9050)
/*0x0c8*/ COLORREF           CRNormal;                  // apr15: VERIFIED (master +pass4, 0x1405c4e30)
/*0x0cc*/ uint32_t           LastBlinkFadeRefreshTime;  // apr15: VERIFIED (master, OnProcessFrame 0x1405c9050)
/*0x0d0*/ uint8_t            _pad_0x0d0[4];
/*0x0d4*/ CXRect             ClipRectClient;            // apr15: VERIFIED (member-fn sweep, GetClientClipRect 0x1405c5fb0 — parent-intersected client-clip rect, NOT the screen-clip rect at +0x68)
/*0x0e4*/ uint8_t            _apr15_internal_0x0e4;     // R byte, no upstream match (master +pass4, 0x1405c5490)
/*0x0e5*/ bool               bFullyScreenClipped;       // apr15: VERIFIED (GetScreenClipRect 0x1405c7bb0, ctor 0x1405c1f8c)
/*0x0e6*/ uint8_t            _pad_0x0e6[2];
/*0x0e8*/ CXStr              DataStr;                   // apr15: VERIFIED (master forensics_only, FUN_140377670)
/*0x0f0*/ int                BottomOffset;              // apr15: VERIFIED (master +pass3, 0x1405c8a50 GetRelativeRect)
/*0x0f4*/ CXSize             MaxClientSize;             // apr15: VERIFIED (master, vtable+0x330 GetMaxClientSize thunk 0x140073550)
/*0x0fc*/ bool               bLeftAnchoredToLeft;       // apr15: VERIFIED (GetRelativeRect 0x1405c7aa0, ctor 0x1405c1ecd init=1)
/*0x0fd*/ uint8_t            _pad_0x0fd[7];
/*0x104*/ int                Transition;                // apr15: VERIFIED (master +disambig, OnProcessFrame 0x1405c9050)
/*0x108*/ uint8_t            _pad_0x108[8];
/*0x110*/ CStaticTintedBlendAnimationTemplate* TitlePiece2; // apr15: VERIFIED (master +pass4, 0x1405c4e30)
/*0x118*/ int                VScrollPos;                // apr15: VERIFIED (master, 0x1405c4800)
/*0x11c*/ uint8_t            _pad_0x11c[4];
/*0x120*/ uint32_t           TransitionDuration;        // apr15: VERIFIED (master, 0x1405c9f90)
/*0x124*/ uint8_t            _pad_0x124[4];
/*0x128*/ CXRect             TransitionRect;            // apr15: VERIFIED (master, 0x1405c8630 Minimize-anchor)
/*0x138*/ uint8_t            _pad_0x138[1];
/*0x139*/ uint8_t            _apr15_internal_0x139;     // demoted from Minimized — actual minimized state is +0x0b8 bMinimized; +0x139 semantic is unclear (read by CXWnd::Minimize 0x1405c8630)
/*0x13a*/ uint8_t            _pad_0x13a[6];
/*0x140*/ CXWndDrawTemplate* DrawTemplate;              // apr15: VERIFIED (master, 0x140074730)
/*0x148*/ bool               MouseOver;                 // apr15: VERIFIED (SetMouseOver 0x1405c9d10)
/*0x149*/ uint8_t            _pad_0x149[7];
/*0x150*/ CXWnd*             FocusProxy;                // apr15: VERIFIED (member-fn sweep, CXWndManager::SetFocus 0x1405ee9a0 self-deref chain-walker mov rcx,[this+0x150])
/*0x158*/ uint8_t            TargetAlpha;               // apr15: VERIFIED (master +disambig, 0x1405c9f90)
/*0x159*/ uint8_t            _pad_0x159[3];
/*0x15c*/ int                BlinkFadeStartTime;        // apr15: VERIFIED (master +disambig, OnProcessFrame 0x1405c9050)
/*0x160*/ CLayoutStrategy*   pLayoutStrategy;           // apr15: VERIFIED (master +pass3, 0x1405ca740)
/*0x168*/ CXStr              XMLToolTip;                // apr15: VERIFIED (master forensics_only, CSidlMgr template-instantiator FUN_1405f5730)
/*0x170*/ int                LeftOffset;                // apr15: VERIFIED (master +pass3, GetRelativeRect 0x1405c8a50)
/*0x174*/ uint8_t            _pad_0x174[4];
/*0x178*/ uint32_t           FadeDelay;                 // apr15: VERIFIED (OnProcessFrame 0x1405c9050, ctor 0x1405c1f08 = 2000ms)
/*0x17c*/ bool               Enabled;                   // apr15: VERIFIED (master +pass3, 0x1405c37b0)
/*0x17d*/ uint8_t            _pad_0x17d[3];
/*0x180*/ int                ParentAndContextMenuArrayIndex; // apr15: VERIFIED (member-fn sweep, Destroy 0x1405c34a0 parent-array slot index)
/*0x184*/ bool               bMarkedForDelete;          // apr15: VERIFIED (member-fn sweep, Destroy 0x1405c34a0 writes =1 before manager teardown)
/*0x185*/ bool               bTopAnchoredToBottom;      // apr15: VERIFIED (GetRelativeRect, anchor save FUN_1405c5c50)
/*0x186*/ uint8_t            bBottomAnchoredToTop;      // apr15: VERIFIED (master +pass4, 0x140074350)
/*0x187*/ uint8_t            FadeToAlpha;               // apr15: VERIFIED (master, OnProcessFrame 0x1405c9050)
/*0x188*/ uint8_t            _apr15_internal_0x188;     // R byte, no upstream match (master +pass4, 0x140074750)
/*0x189*/ uint8_t            _apr15_internal_0x189;     // R byte, no upstream match (master +pass4, 0x1405c6190)
/*0x18a*/ uint8_t            _pad_0x18a[1];
/*0x18b*/ uint8_t            _apr15_internal_0x18b;     // R byte, no upstream match (master +pass4, 0x1405c8920)
/*0x18c*/ CXRect             Location;                  // apr15: VERIFIED (4-int rect, ctor 0x1405c1e21..0x1405c1e42)
/*0x19c*/ bool               cached_ClientRect_dirty_flag; // apr15: VERIFIED (master, 0x1405c9320 cache invalidate)
/*0x19d*/ uint8_t            _apr15_internal_0x19d;     // R byte, no upstream match (master +pass4, 0x1400735f0)
/*0x19e*/ uint8_t            _pad_0x19e[2];
/*0x1a0*/ CXStr              WindowText;                // apr15: VERIFIED (vtable+0x280 SetWindowText FUN_140074850)
/*0x1a8*/ uint32_t           BackgroundDrawType;        // apr15: VERIFIED (member-fn sweep, DoAllDrawing 0x1405c35b0 reads as switch-on-value: case 1=custom-image vtable+0x48, case 2=solid-fill BGColor/DisabledBackground)
/*0x1ac*/ CXSize             MinClientSize;             // apr15: VERIFIED (master, vtable+0x328 GetMinClientSize thunk 0x140073560)
/*0x1b4*/ uint8_t            _pad_0x1b4[1];
/*0x1b5*/ bool               bClipToParent;             // apr15: VERIFIED (master +disambig, GetScreenRect 0x1405c5fb0)
/*0x1b6*/ uint8_t            _pad_0x1b6[2];
/*0x1b8*/ CXRect             OldLocation;               // apr15: VERIFIED (master, 0x1405c8630 Minimize)
/*0x1c8*/ int                TopOffset;                 // apr15: VERIFIED (master +pass3, GetRelativeRect 0x1405c8a50)
/*0x1cc*/ uint8_t            _pad_0x1cc[4];
/*0x1d0*/ ArrayClass2<uint32_t> RuntimeTypes;           // apr15: VERIFIED (member-fn sweep, IsType 0x1405c8530 paged-hash: length@+0x1d0, mask@+0x1d8, shift@+0x1dc, buckets@+0x1e0; 32B span)
/*0x1f0*/ int                BlinkDuration;             // apr15: VERIFIED (master +pass3, OnProcessFrame 0x1405c9050)
/*0x1f4*/ uint32_t           LastTimeMouseOver;         // apr15: VERIFIED (OnProcessFrame 0x1405c9050, ctor 0x1405c1f1c init=0)
/*0x1f8*/ uint8_t            _pad_0x1f8[4];
/*0x1fc*/ int                WindowStyle;               // apr15: VERIFIED (master, 0x1405c4800)
/*0x200*/ uint8_t            _pad_0x200[16];
/*0x210*/ ControllerBase*    pController;               // apr15: VERIFIED (master +disambig, 0x1405ca7f0)
/*0x218*/ CXWnd*             ParentWindow;              // apr15: VERIFIED (35 callsites: SetParent / SetMouseOver / Get*Rect / IsReallyVisible / Minimize / OnProcessFrame / GetScreenClipRect)
/*0x220*/ uint8_t            _pad_0x220[1];
/*0x221*/ bool               bBottomAnchoredToBottom;   // apr15: VERIFIED (GetRelativeRect, Resize, anchor save FUN_1405c5c50, copy-anchor FUN_1405c9930)
/*0x222*/ uint8_t            _pad_0x222[2];
/*0x224*/ int                BlinkState;                // apr15: VERIFIED (OnProcessFrame 0x1405c9050 toggle/-1 sentinel; ctor 0x1405c1f5c R8D=-1)
/*0x228*/ int                HScrollPos;                // apr15: VERIFIED (master, 0x1405c4800)
/*0x22c*/ CXRect             cached_ClientRect;         // apr15: VERIFIED (master, GetClientRect 0x1405c6100 RW cache)
/*0x23c*/ uint8_t            bScreenClipRectChanged;    // apr15: VERIFIED (master +disambig, 0x1405c9320 cache invalidate)
/*0x23d*/ uint8_t            _pad_0x23d[3];
/*0x240*/ CXStr              Tooltip;                   // apr15: VERIFIED (vtable+0x288 SetTooltip FUN_140074840)
/*0x248*/ int                BlinkFadeFreq;             // apr15: VERIFIED (master +pass3, OnProcessFrame 0x1405c9050)
/*0x24c*/ uint32_t           FadeDuration;              // apr15: VERIFIED (master +pass3, OnProcessFrame 0x1405c9050 — re-attributed from BlinkFadeDuration)
/*0x250*/ int                RightOffset;               // apr15: VERIFIED (GetRelativeRect 0x1405c7aa0, paired with +0x3c bRightAnchoredToRight)
/*0x254*/ bool               bUsesClassicUI;            // apr15: VERIFIED (ctor 0x1405c1d8d MOV byte [RBX+0x254], AL)
/*0x255*/ bool               bMouseOverEvent;           // apr15: VERIFIED (ctor 0x1405c2262 MOV byte [RBX+0x255], 0x0)
/*0x256*/ uint8_t            _pad_0x256[10];
// @end: CXWnd Members

/*0x260*/

	// apr15-2026-live: ALT_MEMBER_ALIAS entries (CloseOnESC -> bEscapable,
	// bBorder -> bEnableShowBorder, bBorder2 -> bShowBorder, Clickable ->
	// bClickThrough) REMOVED — none of those origin fields appear in the
	// master CXWnd apr15 layout map (forensics/cxwnd_apr15_vtable_thunks.md).
	// Per "no stubs" rule, the aliases are dropped rather than retargeted.
};

inline namespace deprecated {
	using CXWND DEPRECATE("Use CXWnd instead of CXWND") = CXWnd;
	using PCXWND DEPRECATE("Use CXWnd* instead of PCXWND") = CXWnd*;
}

SIZE_CHECK(CXWnd, CXWnd_size);
SIZE_CHECK2(CXWnd_vftable, CXWnd::VirtualFunctionTable, CXWnd_vftable_size);

//============================================================================
// CSidlScreenWnd
//============================================================================

enum eIniFlags
{
	eIniFlag_None                    = 0,
	eIniFlag_Position                = 0x0001,
	eIniFlag_Size                    = 0x0002,
	eIniFlag_Font                    = 0x0004,
	eIniFlag_Alpha                   = 0x0008,
	eIniFlag_Color                   = 0x0010,
	eIniFlag_Visibility              = 0x0100,
	eIniFlag_FirstTimeVisibility     = 0x0200,
	eIniFlag_MinMaxState             = 0x0400,
	eIniFlag_All                     = 0xffffffff
};

constexpr size_t CSidlScreenWnd_size = 0x2c0; // @sizeof(CSidlScreenWnd) :: 2026-04-15 (live) -- verified via ctors at 0x1405BC7B0/0x1405BC880 and dtor 0x1405BCBC0
constexpr size_t CSidlScreenWnd_vftable_size = 0x380; // 2026-04-15 (live) -- verified via vtable at 0x140ae7f48 (112 slots x 8B)

class [[offsetcomments]] CSidlScreenWnd : public CXWnd
{
public:
	//EQLIB_OBJECT CSidlScreenWnd(CXWnd* parent, uint32_t id, const CXRect& rect, const CXStr& Screen);                           // CSidlScreenWnd__CSidlScreenWnd
	EQLIB_OBJECT CSidlScreenWnd(CXWnd* parent, const CXStr& Screen, int IniFlags, int IniVersion = 1, const char* BlockName = nullptr, bool useClassicUI = true); // CSidlScreenWnd__CSidlScreenWnd1
	EQLIB_OBJECT CSidlScreenWnd(CXWnd* parent = nullptr, const CXStr& Screen = CXStr(), bool useClassicUI = true);                // CSidlScreenWnd__CSidlScreenWnd2
	EQLIB_OBJECT virtual ~CSidlScreenWnd();

	//----------------------------------------------------------------------------
	// virtuals that are overwritten
	EQLIB_OBJECT virtual const char* GetWndClassName() const { return "CSidlScreenWnd"; }
	EQLIB_OBJECT virtual int OnResize(int width, int height) override;
	EQLIB_OBJECT virtual int DrawBackground() const override;
	EQLIB_OBJECT virtual int WndNotification(CXWnd* wnd, uint32_t message, void* data) override;
	EQLIB_OBJECT virtual int HandleRButtonDown(const CXPoint& pos, uint32_t flags) override;
	EQLIB_OBJECT virtual int OnShow() override;
	EQLIB_OBJECT virtual CScreenPieceTemplate* GetSidlPiece(const CXStr& screenId, bool topLevel = true) const override;
	EQLIB_OBJECT virtual const CXStr* GetWindowName() const override;
	EQLIB_OBJECT virtual bool HasActivatedFirstTimeAlert() const override;
	EQLIB_OBJECT virtual void SetHasActivatedFirstTimeAlert(bool) override;

	//----------------------------------------------------------------------------
	// new virtuals
	EQLIB_OBJECT virtual void Unknown0x330(const char* pUnkA, bool bUnkB);
	EQLIB_OBJECT virtual int OnZone();
	EQLIB_OBJECT virtual int OnPreZone();
	EQLIB_OBJECT virtual void LoadIniInfo();
	EQLIB_OBJECT virtual void StoreIniInfo();
	EQLIB_OBJECT virtual CSidlScreenWnd* AsSidlScreenWnd();
	EQLIB_OBJECT virtual bool GetScreenWndType();

	//----------------------------------------------------------------------------
	// data members (apr15-2026-live verified -- see forensics/csidlscreenwnd_apr15_vtable.md)
/*0x260*/ CXStr                        SidlText;                       // upstream was +0x270
/*0x268*/ CScreenTemplate*             SidlPiece;                      // upstream was +0x278
/*0x270*/ uint8_t                      RadioGroup_data[0x14];          // ArrayClass<CRadioGroup*> internals: m_length(+0x270 4B) + pad(4B) + m_array(+0x278 8B) + m_alloc(+0x280 4B); apr15 packs to 0x14 (no trailing pad before bControlsCreated). Upstream was +0x280..+0x297 (0x18B with m_isValid).
/*0x284*/ bool                         bControlsCreated;               // upstream was +0x268
/*0x285*/ uint8_t                      _pad_apr15_0x285[3];
/*0x288*/ bool                         bInitVisibility;                // upstream was +0x298
/*0x289*/ bool                         bVisibleBeforeResize;           // upstream was +0x299
/*0x28a*/ uint8_t                      _pad_apr15_0x28a[2];
/*0x28c*/ int                          IniFlags;                       // upstream was +0x29c
/*0x290*/ CXStr                        IniStorageName;                 // upstream was +0x2a0
/*0x298*/ int                          IniVersion;                     // upstream was +0x2a8
/*0x29c*/ int                          LastResX;                       // upstream was +0x2ac
/*0x2a0*/ int                          LastResY;                       // upstream was +0x2b0
/*0x2a4*/ bool                         bLastResFullscreen;             // upstream was +0x2b4
/*0x2a5*/ uint8_t                      _pad_apr15_0x2a5[3];
/*0x2a8*/ int                          ContextMenuTipID;               // upstream was +0x2c8 -- CORRECTED (apr15 swaps ContextMenuTipID/ContextMenuID slot order)
/*0x2ac*/ uint8_t                      _pad_apr15_0x2ac[4];
/*0x2b0*/ CXWnd*                       pFirstVScrollChild;             // upstream was +0x2c0
/*0x2b8*/ int                          ContextMenuID;                  // upstream was +0x2b8 -- same offset, role swap with ContextMenuTipID
/*0x2bc*/ bool                         bHasActivatedFirstTimeAlert;    // upstream was +0x2cc
/*0x2bd*/ uint8_t                      _pad_apr15_0x2bd[3];
/*0x2c0*/                              // sizeof = 0x2c0 (apr15)

	//----------------------------------------------------------------------------
	// functions that we provide offsets for
	//EQLIB_OBJECT CXWnd* GetChildItem(const CXStr&, bool bDebug);
	EQLIB_OBJECT int DrawSidlPiece(CScreenPieceTemplate*, const CXRect&, const CXRect&) const;
	EQLIB_OBJECT void CalculateHSBRange();
	EQLIB_OBJECT void CalculateVSBRange();
	EQLIB_OBJECT void CreateChildrenFromSidl(DWORD = 0);
	EQLIB_OBJECT void EnableIniStorage(int, char*);
	EQLIB_OBJECT void Init(int, const CXStr&, int, int, int);
	EQLIB_OBJECT void LoadIniListWnd(CListWnd*, char*);
	EQLIB_OBJECT void StoreIniVis();
	EQLIB_OBJECT int ConvertToRes(int, int, int, int);
	EQLIB_OBJECT void LoadSidlScreen();

	//----------------------------------------------------------------------------
	//EQLIB_OBJECT void Init(CXWnd*, uint32_t, const CXRect&, const CXStr&, int, char*);
	//EQLIB_OBJECT void SetScreen(const CXStr&);
	//EQLIB_OBJECT void AddButtonToRadioGroup(const CXStr&, CButtonWnd*);
	//EQLIB_OBJECT CXRect GetSidlPieceRect(CScreenPieceTemplate*, const CXRect&) const;
	//EQLIB_OBJECT void StoreIniListWnd(CListWnd const*, char*);

	struct [[offsetcomments]] VirtualFunctionTable : public CXWnd::VirtualFunctionTable
	{
	/*0x348*/ void* Unknown0x330;
	/*0x350*/ void* OnZone;
	/*0x358*/ void* OnPreZone;
	/*0x360*/ void* LoadIniInfo;
	/*0x368*/ void* StoreIniInfo;
	/*0x370*/ void* AsSidlScreenWnd;
	/*0x378*/ void* GetScreenWndType;
	/*0x380*/
	};

	// Returns the current instance of this class's vftable. Might represent some other
	// inherited class (and not CSidlScreenWnd's)
	inline VirtualFunctionTable* GetVFTable()
	{
		if (this == nullptr) return nullptr;
		return *reinterpret_cast<VirtualFunctionTable**>(this);
	}

	inline void ReplaceVFTable(VirtualFunctionTable* table)
	{
		if (this == nullptr) return;
		*reinterpret_cast<VirtualFunctionTable**>(this) = table;
	}

	// points to the eq instance of the virtual function table for this class
	static VirtualFunctionTable* sm_vftable;
};

SIZE_CHECK(CSidlScreenWnd, CSidlScreenWnd_size);
SIZE_CHECK2(CSidlScreenWnd_vftable, CSidlScreenWnd::VirtualFunctionTable, CSidlScreenWnd_vftable_size);

inline namespace deprecated {
	using CSIDLWND DEPRECATE("Use CSidlScreenWnd instead of CSIDLWND") = CSidlScreenWnd;
	using PCSIDLWND DEPRECATE("Use CSidlScreenWnd* instead of PCSIDLWND") = CSidlScreenWnd*;
}

//============================================================================
// CXWndManager
//============================================================================

enum EWndManagerMode
{
	WndManagerModeNormal,
	WndManagerModeMoving,
	WndManagerModeSizingLeft,
	WndManagerModeSizingTop,
	WndManagerModeSizingRight,
	WndManagerModeSizingBottom,
	WndManagerModeSizingTopLeft,
	WndManagerModeSizingTopRight,
	WndManagerModeSizingBottomLeft,
	WndManagerModeSizingBototmRight,
	WndManagerModeVScrollUp,
	WndManagerModeVScrollPageUp,
	WndManagerModeVScrollPageDown,
	WndManagerModeVScrollDown,
	WndManagerModeVScrollAbsolute,
	WndManagerModeHScrollLeft,
	WndManagerModeHScrollRight,
	WndManagerModeHScrollAbsolute,
	WndManagerModeHScrollPageLeft,
	WndManagerModeHScrollPageRight,
	WndManagerModeTyping,
	WndManagerModeFrameButton,
	WndManagerModeDragDrop,
	WndManagerModeUnknown23,
	WndManagerModeUnknown24,
};

class [[offsetcomments]] CXWndManager
{
public:
	CXWndManager(CSidlManagerBase* sidlManager, HWND* wnd, CXPoint point);
	virtual ~CXWndManager();

	//----------------------------------------------------------------------------
	// virtuals

	virtual bool CanSendMouseMessage(CXWnd* wnd) const;
	virtual bool CanSendKeyboardMessage(CXWnd* wnd) const;
	virtual bool CanDraw(CXWnd* wnd) const;
	virtual ControllerBase* CreateController(CXStr controller, int type);

	//----------------------------------------------------------------------------
	// defined methods

	EQLIB_OBJECT int DrawCursor() const;
	EQLIB_OBJECT int DrawWindows() const;
	EQLIB_OBJECT uint32_t GetKeyboardFlags() const;
	EQLIB_OBJECT int HandleKeyboardMsg(uint32_t, bool);
	EQLIB_OBJECT int RemoveWnd(CXWnd*);

	CTextureFont* GetFont(int FontIndex) const
	{
		if (FontIndex < FontsArray.GetCount())
		{
			return FontsArray[FontIndex];
		}

		return nullptr;
	}
	int GetNumFonts() const { return FontsArray.GetCount(); }
	int GetFontIndex(CTextureFont* pFont)
	{
		for (int i = 0; i < FontsArray.GetCount(); ++i)
		{
			if (pFont == FontsArray[i])
				return i;
		}
		return -1;
	}

	inline const CursorClass* GetCursorClass() const { return &CC; }

	//----------------------------------------------------------------------------
	// methods

	//EQLIB_OBJECT bool IsAllValid();
	//EQLIB_OBJECT bool IsWindowActive(const CXWnd*) const;
	//EQLIB_OBJECT bool IsWindowMovingOrSizing(CXWnd*) const;
	//EQLIB_OBJECT bool IsWindowPieceDown(const CXWnd*, int) const;
	//EQLIB_OBJECT bool OkayToSendMouseMessage(CXWnd*) const;
	//EQLIB_OBJECT const CTextureAnimation* GetCursorToDisplay() const;
	//EQLIB_OBJECT CTextureFont* GetFont(CXStr);
	//EQLIB_OBJECT CXWnd* FindWnd(CXPoint, int*) const;
	//EQLIB_OBJECT CXWnd* GetFirstChildWnd(CXWnd const*) const;
	//EQLIB_OBJECT CXWnd* GetFocusWnd() const;
	//EQLIB_OBJECT CXWnd* GetNextSib(CXWnd const*) const;
	//EQLIB_OBJECT CXWnd* SetFocusWnd(CXWnd*);
	//EQLIB_OBJECT int ActivateWnd(CXWnd*);
	//EQLIB_OBJECT int AddFont(CTextureFont*);
	//EQLIB_OBJECT int AddWnd(CXWnd*);
	//EQLIB_OBJECT int HandleLButtonDown(const CXPoint&);
	//EQLIB_OBJECT int HandleLButtonHeld(const CXPoint&);
	//EQLIB_OBJECT int HandleLButtonUp(const CXPoint&);
	//EQLIB_OBJECT int HandleLButtonUpAfterHeld(const CXPoint&);
	//EQLIB_OBJECT int HandleMouseMove(const CXPoint&);
	//EQLIB_OBJECT int HandleRButtonDown(const CXPoint&);
	//EQLIB_OBJECT int HandleRButtonHeld(const CXPoint&);
	//EQLIB_OBJECT int HandleRButtonUp(const CXPoint&);
	//EQLIB_OBJECT int HandleRButtonUpAfterHeld(const CXPoint&);
	//EQLIB_OBJECT int HandleWheelMove(int);
	//EQLIB_OBJECT int NotifyAllWindows(CXWnd*, uint32_t, void*);
	//EQLIB_OBJECT int OnWindowCloseBox(CXWnd*);
	//EQLIB_OBJECT int OnWindowMinimizeBox(CXWnd*);
	//EQLIB_OBJECT int OnWindowTileBox(CXWnd*);
	//EQLIB_OBJECT int ProcessFrame();
	//EQLIB_OBJECT uint32_t GetDisplayWidth() const;
	//EQLIB_OBJECT uint32_t GetGlobalFadeDuration() const;
	//EQLIB_OBJECT unsigned char GetGlobalAlpha() const;
	//EQLIB_OBJECT unsigned char GetGlobalFadeToAlpha() const;
	//EQLIB_OBJECT unsigned long GetGlobalFadeDelay() const;
	//EQLIB_OBJECT void BringWndToTop(CXWnd*, bool);
	//EQLIB_OBJECT void CheckInvalidateLastFoundWnd();
	//EQLIB_OBJECT void CleanupWindows();
	//EQLIB_OBJECT void DestroyAllWindows();
	//EQLIB_OBJECT void FlushKeyboardFlags();
	//EQLIB_OBJECT void OnWindowShown(CXWnd*, bool);
	//EQLIB_OBJECT void SetGlobalAlpha(unsigned char);
	//EQLIB_OBJECT void SetGlobalFadeDelay(unsigned long);
	//EQLIB_OBJECT void SetGlobalFadeDuration(uint32_t);
	//EQLIB_OBJECT void SetGlobalFadeToAlpha(unsigned char);
	//EQLIB_OBJECT void SetSystemFont(CTextureFont*);
	//EQLIB_OBJECT void UpdateChildAndSiblingInfo();
	//EQLIB_OBJECT int DestroyWnd(CXWnd* wnd);

	//----------------------------------------------------------------------------
	// data members

/*0x008*/ ArrayClass<CXWnd*>           pWindows;
/*0x020*/ ArrayClass<CXWnd*>           ParentAndContextMenuWindows;
/*0x038*/ ArrayClass<CXWnd*>           TransitionWindows;
/*0x050*/ ArrayClass<CXWnd*>           PendingDeletionWindows;
/*0x068*/ uint32_t                     TypematicKey;
/*0x06c*/ uint32_t                     LastKeyDownTime;
/*0x070*/ uint32_t                     LastMouseClickTime;           // when mouse was last clicked
/*0x074*/ uint32_t                     MouseMoveTimeStamp;           // when mouse was last moved
/*0x078*/ int                          StrokesSent;
/*0x07c*/ int                          ToolTipHitTest;               // this is really an enum //0 outside 1 transparent 2 client 3 minimizebox 4 tilebox 5 qmark 6 maxbox 7 closebox 8 titlebar 9 vscrollup 10 vscrolldown 11 vscroll thumb 12 vscroll pgup 13 vscroll pgdn 14 hscroll left 15 hscroll right 16 hscroll thumb 17 hscroll pgup 18 hscroll pgdn 19 border left 20 border top 21 border right 22 border bottom 23 border topleft 24 border topright 25 border bott left 26 bott right 27 left top 28 left bott 29 right top 30 right bott 31 no hit
/*0x080*/ CXWnd*                       LastClickedWindow;
/*0x088*/ CXWnd*                       MainWindow;
/*0x090*/ CXWnd*                       FocusWindow;                  // when you select a window its pointer shows up here
/*0x098*/ CXWnd*                       CurrDraggedWindow;            // when you drag a window its pointer shows up here
/*0x0a0*/ CXWnd*                       ActiveWindow;
/*0x0a8*/ CXWnd*                       LastMouseOver;                // Current window pointer is over if this is 0 we are above MAIN Window
/*0x0b0*/ CXWnd*                       Tooltip;                      // Last Tooltip to show?
/*0x0b8*/ ArrayClass<CXWnd*>           GlobalFocusWindows;
/*0x0d0*/ bool                         bReadingLog;
/*0x0d1*/ bool                         bSidlManagerOwner;
/*0x0d4*/ int                          CaptureCount;
/*0x0d8*/ bool                         bMouseMoveRelative;
/*0x0dc*/ CXPoint                      MousePoint;
/*0x0e4*/ bool                         bCapsLock;
/*0x0e5*/ bool                         KeyboardFlags[4];
/*0x0e9*/ bool                         bChatMessage;
/*0x0ea*/ bool                         bDrawWindows;
/*0x0eb*/ uint8_t                      MouseMoveFlags;
/*0x0ec*/ EWndManagerMode              ManagerMode;
/*0x0f0*/ int                          DecorButtonHitTest;
/*0x0f4*/ CXPoint                      MoveResize;
/*0x100*/ SDragDropInfo                DragDropInfo;
/*0x138*/ CClickStickInfo              ClickStickInfo;
/*0x170*/ int                          Unknown0x100;
/*0x174*/ bool                         bModal;
/*0x178*/ uint32_t                     TTCheckTimer;
/*0x17c*/ int                          Flags;
/*0x180*/ CXStr                        ClipText;
/*0x188*/ uint32_t                     ScreenExtentX;
/*0x18c*/ uint32_t                     ScreenExtentY;
/*0x190*/ ArrayClass<CTextureFont*>    FontsArray;
/*0x1a8*/ CTextureFont*                pSystemFont;
/*0x1b0*/ bool                         bToggleWindowMode;
/*0x1b8*/ HWND*                        pGlobalHwnd;
/*0x1c0*/ CXPoint                      StoredMousePos;               // last position Mouse was at before we moved it
/*0x1c8*/ bool                         bManagerDeletionPending;
/*0x1d0*/ CursorClass                  CC;
/*0x248*/ bool                         bUseNewUIEngine;
/*0x24c*/

	inline bool IsShiftKey() const { return KeyboardFlags[0]; }
	inline bool IsCtrlKey() const { return KeyboardFlags[1]; }
	inline bool IsAltKey() const { return KeyboardFlags[2] | KeyboardFlags[3]; }
};

//============================================================================
// CEQXWndManager
//============================================================================

constexpr size_t CEQXWndManager_size = 0x298; // @sizeof(CEQXWndManager) :: 2026-03-10 (live) @ 0x14019F525

class [[offsetcomments]] CEQXWndManager : public CXWndManager
{
public:
	CEQXWndManager(CSidlManagerBase* sidlManager);
	virtual ~CEQXWndManager();

	//----------------------------------------------------------------------------
	// virtual overrides
	virtual bool CanSendMouseMessage(CXWnd* wnd) const override;
	virtual bool CanSendKeyboardMessage(CXWnd* wnd) const override;
	virtual bool CanDraw(CXWnd* wnd) const override;
	virtual ControllerBase* CreateController(CXStr controller, int type) override;

	EQLIB_OBJECT ControllerManager* GetControllerManager()
	{
		return &ControllerMgr;
	}

	//----------------------------------------------------------------------------
	// data members

/*0x250*/ ControllerFactory DefaultControllerFactory;
/*0x270*/ ControllerManager ControllerMgr;
/*0x298*/
};

SIZE_CHECK(CEQXWndManager, CEQXWndManager_size);

inline namespace deprecated {
	using CXWNDMGR DEPRECATE("Use CEQXWndManager instead of CXWNDMGR") = CEQXWndManager;
	using PCXWNDMGR DEPRECATE("Use CEQXWndManager* instead of PCXWNDMGR") = CEQXWndManager*;
}

//----------------------------------------------------------------------------

} // namespace eqlib
