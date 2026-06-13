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
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

#pragma once

#include "eqlib/Common.h"
#include "eqlib/Offsets.h"

#include "eqlib/game/ChatFilters.h"
#include "eqlib/game/Constants.h"
#include "eqlib/game/Containers.h"
#include "eqlib/game/CXStr.h"
#include "eqlib/game/CXWnd.h"
#include "eqlib/game/EQData.h"
#include "eqlib/game/ForwardDecls.h"
#include "eqlib/game/GameFace.h"
#include "eqlib/game/Items.h"
#include "eqlib/game/UITemplates.h"
#include "eqlib/game/XMLData.h"
#include "eqlib/graphics/GraphicsResources.h"

#include "mq/base/Iterator.h"

#include <list>
#include <functional>

#undef FindWindow
#undef InsertMenuItem
#undef LoadMenu

struct IShellFolder;

// from shtypes.h
struct _ITEMIDLIST;
using LPITEMIDLIST = _ITEMIDLIST *;

namespace eqlib {

//----------------------------------------------------------------------------
// Forward Declarations

class CAtlas;
class CButtonWnd;
class CChatContainerWindow;
class CChatWindow;
class CContextMenu;
class CConfirmationDialog;
class CEditWnd;
class CParamLayoutStrategy;
class CLabel;
class CLayoutStrategyTemplate;
class CStmlWnd;
class CUnSerializeBuffer;
class CVerticalLayoutWnd;
class CVivoxObserver;

using D3DCOLOR = DWORD;
using CPopDialogWnd = CConfirmationDialog;

//----------------------------------------------------------------------------

class WndEventHandler
{
public:
	uint32_t lastUpdate;
};

//----------------------------------------------------------------------------

class CVivoxManager;
class CVivoxObserver
{
public:
	virtual void Unknown00(bool) {}

	CVivoxManager* VivoxManager;
};

//----------------------------------------------------------------------------

class CObservable;

class CNotification
{
public:
	int Type;
};

class IObserver
{
public:
	EQLIB_OBJECT virtual void Notify(CObservable* Src, const CNotification* const Notification) {}
};

class CObservable
{
public:
	EQLIB_OBJECT void NotifyObservers(CNotification* notification = 0);

private:
	// this will never work because of differences in stl between
	// mq2 and eq. Don't use it.
	std::list<IObserver*> ObserverList;
};

//============================================================================

struct [[offsetcomments]] PlayerBuffInfo
{
/*0x0*/ CButtonWnd* BuffBtn;
/*0x8*/ CTextureAnimation* BuffIcon;
/*0x10*/ int SpellID; // Spell ID# of each buff
/*0x14*/ int BuffTimer; // milliseconds before buff will expire
/*0x18*/ SoeUtil::StringFixed<EQ_MAX_NAME> Caster;
/*0x78*/
};

struct [[offsetcomments]] BuffWindowPlayerBuffInfo : PlayerBuffInfo
{
/*0x78*/ CTextObjectInterface* TimeRemainingText;
/*0x80*/ CTextObjectInterface* CounterText;
/*0x88*/ CTextObjectInterface* LimitUseText;
/*0x90*/
};

// Convenience wrapper that smooths over the difference in buff interfaces between
// clients. Allows MQ code to share the same between test/test/emu/etc
class PlayerBuffInfoWrapper
{
protected:
	const PlayerBuffInfo* m_buffInfo;
	int m_index;

public:
	using BuffInfoType = PlayerBuffInfo;

	PlayerBuffInfoWrapper(int index, const PlayerBuffInfo* buffInfo) noexcept
		: m_index(index), m_buffInfo(buffInfo) {}

	PlayerBuffInfoWrapper(const PlayerBuffInfoWrapper&) = delete;
	PlayerBuffInfoWrapper& operator=(const PlayerBuffInfoWrapper&) = delete;

	PlayerBuffInfoWrapper(PlayerBuffInfoWrapper&& rhs) noexcept : m_index(rhs.m_index), m_buffInfo(rhs.m_buffInfo) {}
	PlayerBuffInfoWrapper& operator=(PlayerBuffInfoWrapper&& rhs) noexcept { m_index = rhs.m_index; m_buffInfo = rhs.m_buffInfo; return *this; }

	explicit operator bool() const { return m_buffInfo != nullptr; }

	int GetIndex() const { return m_index; }
	CButtonWnd* GetBuffButton() const { return m_buffInfo ? m_buffInfo->BuffBtn : nullptr; }
	CTextureAnimation* GetBuffIcon() const { return m_buffInfo ? m_buffInfo->BuffIcon : nullptr; }
	int GetSpellID() const { return m_buffInfo ? m_buffInfo->SpellID : 0; }
	int GetBuffTimer() const { return m_buffInfo ? m_buffInfo->BuffTimer : 0; }
	const char* GetCaster() const { return (m_buffInfo && m_buffInfo->SpellID > 0) ? m_buffInfo->Caster.c_str() : ""; }

	EQLIB_OBJECT EQ_Spell* GetSpell() const;

	template <typename T = PlayerBuffInfoWrapper>
	struct Iterator
	{
	public:
		using BuffInfoWrapperType = T;
		using BuffInfoType = typename T::BuffInfoType;
		using ContainerType = SoeUtil::Array<BuffInfoType>;

		using iterator_category = std::forward_iterator_tag;
		using difference_type = std::ptrdiff_t;
		using value_type = BuffInfoWrapperType;

		Iterator(const ContainerType& container, int index)
			: m_container(container), m_index(index)
		{
			// Increment to first buff
			if (m_index < m_container.GetSize() && m_container[m_index].SpellID <= 0)
			{
				++(*this);
			}
		}

		value_type operator*() const { return BuffInfoWrapperType(m_index, &m_container[m_index]); }

		// Prefix increment - increment to the next valid buff
		Iterator operator++()
		{
			if (m_index < m_container.GetSize())
			{
				do {
					++m_index;
				} while (m_index < m_container.GetSize() && m_container[m_index].SpellID <= 0);
			}
			return *this;
		}
		
		// Postfix increment
		Iterator operator++(int) { Iterator tmp = *this; ++(*this); return tmp; }

		friend bool operator==(const Iterator& a, const Iterator& b) { return &a.m_container == &b.m_container && a.m_index == b.m_index; }
		friend bool operator!=(const Iterator& a, const Iterator& b) { return !(a == b); }

	private:
		const ContainerType& m_container;
		int m_index;
	};
};

class BuffWindowPlayerBuffInfoWrapper : public PlayerBuffInfoWrapper
{
	const BuffWindowPlayerBuffInfo* GetBuffInfo() const { return static_cast<const BuffWindowPlayerBuffInfo*>(m_buffInfo); }

public:
	using PlayerBuffInfoWrapper::PlayerBuffInfoWrapper;
	using BuffInfoType = BuffWindowPlayerBuffInfo;

	CTextObjectInterface* GetTimeRemainingText() const { return m_buffInfo ? GetBuffInfo()->TimeRemainingText : nullptr; }
	CTextObjectInterface* GetCounterText() const { return m_buffInfo ? GetBuffInfo()->CounterText : nullptr; }
	CTextObjectInterface* GetLimitUseText() const { return m_buffInfo ? GetBuffInfo()->LimitUseText : nullptr; }
};

//============================================================================
// CTextureFont
//============================================================================

class [[offsetcomments]] CTextureFont
{
public:
	virtual ~CTextureFont();

	EQLIB_OBJECT CXStr GetName() const;
	EQLIB_OBJECT int DrawWrappedText(const CXStr&, const CXRect&, const CXRect&, COLORREF, uint16_t, int) const;
	EQLIB_OBJECT int DrawWrappedText(const CXStr& Str, int x, int y, int Width, const CXRect& BoundRect, COLORREF Color, uint16_t Flags = 0, int StartX = 0) const;
	EQLIB_OBJECT int DrawWrappedText(CTextObjectInterface* Interface, const CXStr& Str, const CXRect& Rect, const CXRect& BoundRect, COLORREF Color, uint16_t Flags = 0, int StartX = 0) const;
	EQLIB_OBJECT int GetHeight() const;
	EQLIB_OBJECT int GetKerning(unsigned short, unsigned short) const;
	EQLIB_OBJECT int GetTextExtent(const CXStr&);
	EQLIB_OBJECT int GetWidth(unsigned short) const;

/*0x8*/ int FontStyle;
/*0xc*/
};

//============================================================================
// CEQSuiteTextureLoader
//============================================================================

struct [[offsetcomments]] _SuiteTexture
{
/*0x0000*/ bool bUsed;
/*0x0008*/ CXStr Name;
/*0x0010*/ enDir Directory;
/*0x0018*/ BMI* pBMInfo;
/*0x20*/
};

struct SWadFile;

class [[offsetcomments]] CEQSuiteTextureLoader
{
public:
/*0x0*/ SWadFile* pWadFile;
/*0x8*/ ArrayClass<_SuiteTexture> Textures;
/*0x20*/ CXStr UIPath[cUIDirectoryCount];
/*0x40*/ CXStr DefaultUIPath[cUIDirectoryCount];
/*0x60*/

	EQLIB_OBJECT CEQSuiteTextureLoader();
	EQLIB_OBJECT ~CEQSuiteTextureLoader();

	EQLIB_OBJECT BMI* GetTexture(const CUITextureInfo& ti);

	EQLIB_OBJECT unsigned int CreateTexture(const CUITextureInfo& ti);
	EQLIB_OBJECT void DestroyTexture(const CUITextureInfo& ti);
	EQLIB_OBJECT void UnloadAllTextures();

	EQLIB_OBJECT const CXStr& GetDefaultUIPath(int DirType) const;
};

//============================================================================
// CRadioGroup
//============================================================================

class [[offsetcomments]] CRadioGroup
{
public:
	EQLIB_OBJECT CRadioGroup(CXStr name = {});
	EQLIB_OBJECT virtual ~CRadioGroup();

	CButtonWnd* GetButton(int index) const
	{
		return index >= 0 && index < Buttons.GetLength() ? Buttons[index].get() : nullptr;
	}

/*0x8*/ CXStr Name;
/*0x10*/ ArrayClass<eqstd::shared_ptr<CButtonWnd>> Buttons;
/*0x28*/ int CurSel = -1;
/*0x2c*/ bool bAllowMultiSelect = false;
/*0x30*/ int nSelectionLimit = -1;
/*0x34*/ bool bAllowNullable = false;
/*0x38*/
};

//============================================================================
// CButtonWnd
//============================================================================

constexpr size_t CButtonWnd_size = 0x348; // @sizeof(CButtonWnd) :: 2026-06-09 (test) -- jun09 ctor 0x1405f2c80 op_new(0x348) + CInvSlotWnd own-field start @0x348; BOB-gated first-hand (was 0x338; +0x10 CXWnd base growth)

class [[offsetcomments]] CButtonWnd : public CXWnd
{
public:
	//----------------------------------------------------------------------------
	// constructor / destructor
	EQLIB_OBJECT CButtonWnd(CXWnd* parent, uint32_t id, const CXRect& rect,
		const CXPoint& decalOffset, const CXSize& decalSize,
		CTextureAnimation* normal, CTextureAnimation* pressed,
		CTextureAnimation* hover, CTextureAnimation* disabled,
		CTextureAnimation* pressedHover, CTextureAnimation* pressedDisabled,
		CTextureAnimation* normalDecal, CTextureAnimation* pressedDecal,
		CTextureAnimation* hoverDecal, CTextureAnimation* pressedDisabledDecal);
	//EQLIB_OBJECT CButtonWnd(CXWnd* parent, uint32_t id, const CXRect& rect);
	//EQLIB_OBJECT CBUttonWnd(CXWnd* parent, uint32_t id, const CXRect& rect, const CXStr& label);
	EQLIB_OBJECT virtual ~CButtonWnd();

	//----------------------------------------------------------------------------
	// virtual functions
	EQLIB_OBJECT virtual bool IsChecked() const;
	EQLIB_OBJECT virtual void SetRadioGroup(CRadioGroup* group);
	EQLIB_OBJECT virtual int DrawWndText(const CXRect& rect, const CXRect& clip);
	EQLIB_OBJECT virtual int DrawCooldown();
	EQLIB_OBJECT virtual void SetCheck(bool check, bool bNoSound = true);
	EQLIB_OBJECT virtual void SetCoolDownCompletionTimeDelta(uint32_t delta, uint32_t total);
	EQLIB_OBJECT virtual void SetCoolDownCompletionTime(uint32_t time, uint32_t total);
	EQLIB_OBJECT virtual void SetCoolDownCompletionTime(eqtime_t time, uint32_t total);
	EQLIB_OBJECT virtual void SetCoolDownBeginTime(uint32_t time, uint32_t total);
	EQLIB_OBJECT virtual void SetCoolDownUpdatedBeginTime(uint32_t time, uint32_t total);
	EQLIB_OBJECT virtual uint32_t GetCoolDownBeginTime() const;
	EQLIB_OBJECT virtual uint32_t GetCoolDownTotalDuration() const;
	EQLIB_OBJECT virtual uint32_t GetCoolDownTimeRemaining() const;
	EQLIB_OBJECT virtual void ClearCoolDownCompletionTime();

	//----------------------------------------------------------------------------
	// inherited virtuals
	EQLIB_OBJECT virtual int Draw() override;
	EQLIB_OBJECT virtual int DrawTooltipAtPoint(const CXPoint& pos, const CXStr& tooltip) const override;
	EQLIB_OBJECT virtual int HandleLButtonDown(const CXPoint&, uint32_t) override;
	EQLIB_OBJECT virtual int HandleLButtonUp(const CXPoint&, uint32_t) override;
	EQLIB_OBJECT virtual int HandleLButtonHeld(const CXPoint&, uint32_t) override;
	EQLIB_OBJECT virtual int HandleLButtonUpAfterHeld(const CXPoint&, uint32_t) override;
	EQLIB_OBJECT virtual int HandleRButtonDown(const CXPoint&, uint32_t) override;
	EQLIB_OBJECT virtual int HandleRButtonUp(const CXPoint&, uint32_t) override;
	EQLIB_OBJECT virtual int HandleRButtonHeld(const CXPoint&, uint32_t) override;
	EQLIB_OBJECT virtual int HandleRButtonUpAfterHeld(const CXPoint&, uint32_t) override;
	EQLIB_OBJECT virtual int HandleMouseMove(const CXPoint&, uint32_t) override;
	EQLIB_OBJECT virtual int OnProcessFrame() override;
	EQLIB_OBJECT virtual bool IsPointTransparent(const CXPoint& point) const override;
	EQLIB_OBJECT virtual void SetAttributesFromSidl(CParamScreenPiece*) override;

	//----------------------------------------------------------------------------
	void SetDecalTint(COLORREF cr) { DecalTint = cr; }
	void SetDecalTint(mq::MQColor color) { DecalTint = color.ToARGB(); }

	//----------------------------------------------------------------------------
	// data members
/*0x0268*/ int MouseButtonState;
/*0x026c*/ bool bPicture;
/*0x0270*/ CRadioGroup* pGroup;
/*0x0278*/ bool Checked;
/*0x0279*/ bool bMouseOverLastFrame;
/*0x027c*/ CXPoint DecalOffset;
/*0x0284*/ CXSize DecalSize;
/*0x028c*/ COLORREF DecalTint; // Color
/*0x0290*/ CXRect TextOffsets;
/*0x02a0*/ int TextModeBits;
/*0x02a4*/ COLORREF Mouseover;
/*0x02a8*/ COLORREF Pressed;
/*0x02ac*/ COLORREF Disabled;
/*0x02b0*/ unsigned int CoolDownBeginTime;
/*0x02b4*/ unsigned int CoolDownDuration;
/*0x02b8*/ CXStr Indicator;
/*0x02c0*/ unsigned int IndicatorVal;
/*0x02c8*/ CTextObjectInterface* pIndicatorTextObject;
/*0x02d0*/ unsigned int Unknown0x248;
/*0x02d8*/ CButtonDrawTemplate DrawTemplate;
/*0x0340*/ bool bAllowButtonClickThrough;  // jun09 ctor 0x1405f2c80 tail@0x340 (4 bytes); name-order declared (AM-REVIEW, layout BOB-gated)
/*0x0341*/ bool bCoolDownDoDelayedStart;
/*0x0342*/ bool bIsCheckbox;
/*0x0343*/ bool bIsDrawLasso;
/*0x0344*/ uint32_t ButtonStyle; // flags; Draw 0x1405f37b0 @1405f37e2 TEST dword,0x40000
/*0x0348*/

	ALT_MEMBER_ALIAS(bool, Checked, bChecked);

	struct [[offsetcomments]] VirtualFunctionTable : public CXWnd::VirtualFunctionTable
	{
	/*0x348*/ void* IsChecked;
	/*0x350*/ void* SetRadioGroup;
	/*0x358*/ void* DrawWndText;
	/*0x360*/ void* DrawCooldown;
	/*0x368*/ void* DrawCooldownRect;
	/*0x370*/ void* SetCheck;
	/*0x378*/ void* SetCoolDownCompletionTimeDelta;
	/*0x380*/ void* SetCoolDownCompletionTime;
	/*0x388*/ void* SetCoolDownCompletionTime2;
	/*0x390*/ void* SetCoolDownBeginTime;
	/*0x398*/ void* SetCoolDownUpdatedBeginTime;
	/*0x3a0*/ void* GetCoolDownBeginTime;
	/*0x3a8*/ void* GetCoolDownTotalDuration;
	/*0x3b0*/ void* GetCoolDownTimeRemaining;
	/*0x3b8*/ void* ClearCoolDownCompletionTime;
	/*0x3c0*/
	};

	// points to the eq instance of the virtual function table for this class
	EQLIB_OBJECT static VirtualFunctionTable* sm_vftable;
};

SIZE_CHECK(CButtonWnd, CButtonWnd_size);

inline namespace deprecated {
	using CBUTTONWND DEPRECATE("Use CButtonWnd instead of CBUTTONWND") = CButtonWnd;
	using PCBUTTONWND DEPRECATE("Use CButtonWnd* instead of PCBUTTONWND") = CButtonWnd*;
}

//============================================================================
// CCheckBoxWnd
//============================================================================

constexpr size_t CCheckBoxWnd_size = 0x350; // jun09 +0x10 (op_new TBD by BOB)
class [[offsetcomments]] CCheckBoxWnd : public CButtonWnd
{
public:
	CCheckBoxWnd(CXWnd*, uint32_t, const CXRect&, const CXPoint&, const CXSize&,
		CTextureAnimation*, CTextureAnimation*, CTextureAnimation*, CTextureAnimation*,
		CTextureAnimation*, CTextureAnimation*, CTextureAnimation*, CTextureAnimation*,
		CTextureAnimation*, CTextureAnimation*);
	virtual ~CCheckBoxWnd();

	// virtual
	int HandleLButtonDown(const CXPoint&, uint32_t) override;
	int HandleLButtonUp(const CXPoint&, uint32_t) override;
	int HandleMouseMove(const CXPoint&, uint32_t) override;
	void SetRadioGroup(CRadioGroup*) override;

	EQLIB_OBJECT void SetRadioLook();

	// protected
/*0x348*/ bool bOrgState;
/*0x34c*/
};
SIZE_CHECK(CCheckBoxWnd, CCheckBoxWnd_size);

//============================================================================
// CComboWnd
//============================================================================

class [[offsetcomments]] CComboWnd : public CXWnd
{
public:
	CComboWnd(CXWnd*, uint32_t, const CXRect&, int height, const CButtonDrawTemplate&);
	virtual ~CComboWnd();

	//----------------------------------------------------------------------------
	// virtuals

	virtual CXSize GetMinSize() const;

	// overrides

	virtual int Draw() override;
	virtual int HandleLButtonDown(const CXPoint&, uint32_t) override;
	virtual int WndNotification(CXWnd*, uint32_t, void*) override;
	virtual int OnMove(const CXRect&) override;
	virtual int OnResize(int, int) override;
	virtual int HitTest(const CXPoint&, int*) const override;
	virtual void SetDrawTemplate(CXWndDrawTemplate*) override;

	//----------------------------------------------------------------------------
	// methods

	EQLIB_OBJECT CXRect GetListRect(bool) const;
	EQLIB_OBJECT void SetColors(COLORREF norm, COLORREF highlight, COLORREF selected);
	void SetColors(mq::MQColor norm, mq::MQColor highlight, mq::MQColor selected) { SetColors(norm.ToARGB(), highlight.ToARGB(), selected.ToARGB()); }

	EQLIB_OBJECT int InsertChoice(const CXStr& text, uint32_t data = 0);
	EQLIB_OBJECT void SetChoice(int index);
	EQLIB_OBJECT int GetItemCount();
	EQLIB_OBJECT void DeleteAll();

	EQLIB_OBJECT CXRect GetTextRect() const;
	EQLIB_OBJECT CXRect GetButtonRect() const;

	EQLIB_OBJECT int GetCurChoice() const;
	EQLIB_OBJECT CXStr GetCurChoiceText() const;

	//----------------------------------------------------------------------------
	// data members
/*0x268*/ CListWnd* pListWnd;
/*0x270*/ int ListHeightMax;
/*0x274*/ int ListHeight;
/*0x278*/ CButtonDrawTemplate ButtonDrawTemplate;
/*0x2e0*/ void* Unknown0x2e0;                    // jun09-added trailing field (op_new 0x2e8 > ButtonDrawTemplate end 0x2e0); ctor FUN_1405cdc30 to name (OTTO)
/*0x2e8*/
};
constexpr size_t CComboWnd_size = 0x2e8; // jun09 op_new CONFIRMED 0x2e8 (OTTO SIDL CreateXWnd table case 0x27, anchored CComboWnd via InsertChoice); was field-end 0x2e0 +8 trailing
SIZE_CHECK(CComboWnd, CComboWnd_size);

//============================================================================
// CEditWnd
//============================================================================

enum eTextAlign
{
	eta_Left,
	eta_Center,
	eta_Right,
};

constexpr int EDITWND_MAX_TAGS = 10;

enum EditWndStyle
{
	ewsMultiline = 0x00010000,
	ewsPassword = 0x00020000,
	ewsWantReturn = 0x00040000,
	ewsWantArrows = 0x00080000,
	ewsWantTabs = 0x00100000,
	ewsReadOnly = 0x00200000,
};

constexpr size_t CEditBaseWnd_size = 0x3d0; // jun09 +0x10 (op_new TBD by BOB)
class [[offsetcomments]] CEditBaseWnd : public CXWnd
{
public:
	CEditBaseWnd(CXWnd* parent, uint32_t id, const CXRect& rect);
	virtual ~CEditBaseWnd();

	//----------------------------------------------------------------------------
	// virtuals

	virtual int GetHorzOffset() = 0;
	virtual CXStr GetDisplayString() const = 0;
	virtual CXPoint GetCaretPt() const = 0;
	virtual CXPoint PointFromPrintableChar(int charIndex) const = 0;
	virtual int ResetWnd() = 0;

	// overrides
	virtual int Draw() override = 0;
	virtual int DrawCaret() const override = 0;
	virtual int HandleKeyboardMsg(uint32_t message, uint32_t flags, bool down) override = 0;
	virtual int HandleLButtonDown(const CXPoint& pos, uint32_t flags) override = 0;
	virtual int OnKillFocus(CXWnd*) override;

	EQLIB_OBJECT void SetMaxChars(int);
	EQLIB_OBJECT void SetSel(int, int);

	//----------------------------------------------------------------------------
	// data members
/*0x268*/ eTextAlign eAlign = eta_Left;
/*0x26c*/ int StartPos = 0;
/*0x270*/ int EndPos = 0;
/*0x274*/ int MaxChars = -1;
/*0x278*/ int MaxBytesUTF8 = -1;
/*0x280*/ CXStr InputText;
/*0x288*/ int TagPrintableStarts[EDITWND_MAX_TAGS];
/*0x2b0*/ int TagPrintableEnds[EDITWND_MAX_TAGS];
/*0x2d8*/ int TagOriginalStarts[EDITWND_MAX_TAGS];
/*0x300*/ int TagOriginalEnds[EDITWND_MAX_TAGS];
/*0x328*/ int TagDynamicSize[EDITWND_MAX_TAGS];
/*0x350*/ int TagCodes[EDITWND_MAX_TAGS];
/*0x378*/ CXStr TagStrings[EDITWND_MAX_TAGS];
/*0x3c8*/ int TagCount;
/*0x3cc*/ uint32_t EditStyle;
/*0x3d0*/
};
SIZE_CHECK(CEditBaseWnd, CEditBaseWnd_size);

enum EditWndMode
{
	ewmNormal,
	ewmName,
	ewmAlphaOnly,
	ewmNumericOnly,
	ewmAlphaNumOnly,
	ewmCount
};

class [[offsetcomments]] CEditWnd : public CEditBaseWnd
{
public:
	CEditWnd(CXWnd* parent, uint32_t id, const CXRect& rect, uint32_t style = 0);
	virtual ~CEditWnd();

	//----------------------------------------------------------------------------
	// virtuals

	virtual int DrawMultiline();
	virtual CXStr GetWindowText() const;
	virtual CXStr GetWindowPrefixText();
	virtual CXStr GetWindowSuffixText();

	// CEditBaseWnd
	virtual int GetHorzOffset() override;
	virtual CXStr GetDisplayString() const override;
	virtual CXPoint GetCaretPt() const override;
	virtual CXPoint PointFromPrintableChar(int charIndex) const override;
	virtual int ResetWnd() override;

	// CXWnd
	virtual int Draw() override;
	virtual int DrawCaret() const override;
	virtual int HandleLButtonDown(const CXPoint&, uint32_t) override;
	virtual int HandleLButtonUp(const CXPoint&, uint32_t) override;
	virtual int HandleMouseMove(const CXPoint&, uint32_t) override;
	virtual void SetWindowText(const CXStr& text) override;
	virtual int OnMove(const CXRect& rect) override;
	virtual int OnResize(int, int) override;
	virtual int OnSetFocus(CXWnd*) override;
	virtual int OnKillFocus(CXWnd*) override;

	//----------------------------------------------------------------------------
	// methods

	EQLIB_OBJECT CXPoint GetCharIndexPt(int) const;
	EQLIB_OBJECT CXPoint GetSelEndPt() const;
	EQLIB_OBJECT CXPoint GetSelStartPt() const;
	EQLIB_OBJECT CXStr GetSTMLSafeText();
	EQLIB_OBJECT int ConvertIndexPrintableToTagged(int);
	EQLIB_OBJECT int ConvertIndexTaggedToPrintable(int);
	EQLIB_OBJECT int GetLineForPrintableChar(int) const;
	EQLIB_OBJECT int GetLineLength(int) const;
	EQLIB_OBJECT int SelectableCharFromPoint(CXPoint) const;
	EQLIB_OBJECT void AddItemTag(int, char*, int);
	EQLIB_OBJECT void CalculateScrollRange();
	EQLIB_OBJECT void EnsureCaretVisible();
	EQLIB_OBJECT void SetEditable(bool);

	EQLIB_OBJECT void FillIndexArray(CXStr) const;
	EQLIB_OBJECT void FilterInputStr(CXStr&);
	EQLIB_OBJECT void ProcessText();

	EQLIB_OBJECT bool ReplaceSelection(CXStr, bool bFilter = true) noexcept;
	bool ReplaceSelection(char ch, bool bFilter = true)
	{
		CXStr str(1, ch);
		return ReplaceSelection(str, bFilter);
	}

	//----------------------------------------------------------------------------
	// data members

/*0x3d0*/ bool bAnchorAtStart;
/*0x3d1*/ bool bCaretAtEnd;
/*0x3d2*/ bool bAutoVScrollCalc;
/*0x3d3*/ bool bEditable;
/*0x3d8*/ CXStr FilterChars;
/*0x3e0*/ int EditMode;
/*0x3e4*/ wchar_t PasswordChar;
/*0x3e8*/ ArrayClass2<uint32_t> LineIndices;
/*0x408*/
};
constexpr size_t CEditWnd_size = 0x408; // jun09 +0x10 (CEditBaseWnd); LineIndices ArrayClass2@0x3e8 (0x20) -> 0x408
SIZE_CHECK(CEditWnd, CEditWnd_size);

//============================================================================
// CEditLabelWnd
//============================================================================

class CEditLabelWnd : public CSidlScreenWnd, public WndEventHandler
{
public:
	CEditLabelWnd(CXWnd*);
	virtual ~CEditLabelWnd();

	virtual int OnProcessFrame() override;
	virtual int WndNotification(CXWnd*, uint32_t, void*) override;

	EQLIB_OBJECT CXStr GetLabelText();
};

//============================================================================
// CGaugeWnd
//============================================================================

constexpr size_t CGaugeWnd_size = 0x308; // jun09 +0x10 (CXWnd 0x258->0x268); op_new TBD by BOB
class [[offsetcomments]] CGaugeWnd : public CXWnd
{
public:
	EQLIB_OBJECT CGaugeWnd(CXWnd*, uint32_t, const CXRect&, CTextureAnimation*, CTextureAnimation*, CTextureAnimation*, CTextureAnimation*, CTextureAnimation*, CTextureAnimation*, int, unsigned long, unsigned long, bool, int, int, int, int);
	EQLIB_OBJECT void SpecialToolTip();

	EQLIB_OBJECT CXRect CalcFillRect(CXRect rect, int value) const;
	EQLIB_OBJECT CXRect CalcLinesFillRect(CXRect rect, int value) const;

	// virtual
	EQLIB_OBJECT ~CGaugeWnd();
	EQLIB_OBJECT int Draw() const;
	EQLIB_OBJECT int HandleLButtonUp(const CXPoint&, uint32_t);
	EQLIB_OBJECT int OnProcessFrame();
	EQLIB_OBJECT void SetAttributesFromSidl(CParamScreenPiece*);

	//----------------------------------------------------------------------------
	// data members

/*0x268*/ int EQType;
/*0x26c*/ D3DCOLOR FillTint;
/*0x270*/ D3DCOLOR LinesFillTint;
/*0x274*/ bool bDrawLinesFill;
/*0x278*/ int TextOffsetX;
/*0x27c*/ int TextOffsetY;
/*0x280*/ int GaugeOffsetX;
/*0x284*/ int GaugeOffsetY;
/*0x288*/ float LastFrameVal;
/*0x290*/ CXStr LastFrameName;
/*0x298*/ int LastFrameTime;
/*0x29c*/ int LastFrameTarget;
/*0x2a0*/ CXStr GaugeTooltip;
/*0x2a8*/ int TooltipVal;
/*0x2ac*/ int Unknown0x228;
/*0x2b0*/ CGaugeDrawTemplate DrawTemplate;
/*0x2e8*/ CTextObjectInterface* pTextObject;
/*0x2f0*/ CXStr NextDrawStr;
/*0x2f8*/ bool bSmooth;
/*0x2fc*/ int TargetVal;
/*0x300*/ bool bUseTargetVal;
/*0x308*/
};
SIZE_CHECK(CGaugeWnd, CGaugeWnd_size);

//============================================================================
// CHotButton
//============================================================================

enum HotButtonTypes
{
	HotButtonType_None = 0,
	HotButtonType_WeaponSlot,
	HotButtonType_CombatSkill, // deprecated: no longer used
	HotButtonType_Ability, // deprecated: no longer used
	HotButtonType_Social,
	HotButtonType_InventorySlot,
	HotButtonType_MenuButton,
	HotButtonType_SpellGem,
	HotButtonType_PetCommand,
	HotButtonType_Skill,
	HotButtonType_MeleeAbility,
	HotButtonType_LeadershipAbility,
	HotButtonType_ItemLink,
	HotButtonType_KronoSlot,
	HotButtonType_Command,
	HotButtonType_CombatAbility,
	HotButtonType_MountLink,
	HotButtonType_IllusionLink,
	HotButtonType_FamiliarLink,
	HotButtonType_TeleportationLink,
	HotButtonType_ActivatedItemLink,
};

EQLIB_OBJECT const char* HotButtonTypeToString(HotButtonTypes type);

class [[offsetcomments]] CHotButton : public CXWnd
{
public:
	CHotButton(CXWnd* parent, uint32_t id, const CXRect& rect, CButtonWnd* button,
		CInvSlotWnd* invSlot, CSpellGemWnd* gemSlot);
	virtual ~CHotButton();

	EQLIB_OBJECT void SetButtonSize(int percent, bool bUpdateParent = true);
	EQLIB_OBJECT void SetCheck(bool check);

	EQLIB_OBJECT const HotButtonData* GetHotButtonData() const;

	//----------------------------------------------------------------------------
	// data members

/*0x0268*/ int BarIndex;
/*0x026c*/ int ButtonIndex;
/*0x0270*/ uint32_t Timer;
/*0x0278*/ CTextureAnimation* DecalIcon;
/*0x0280*/ HotButtonTypes LastButtonType;
/*0x0284*/ int LastButtonSlot;
/*0x0288*/ char LastButtonPage;
/*0x289*/ EqItemGuid LastItemGuid;
/*0x29c*/ int LastItemId;
/*0x2a0*/ int LastIconType;
/*0x2a4*/ int LastIconSlot;
/*0x2a8*/ CXStr LastLabel;
/*0x2b0*/ CXStr DefaultLabel;
/*0x2b8*/ bool bForceUpdate;
/*0x2c0*/ CTextObjectInterface* pKeyMapText;
/*0x2c8*/ int Unknown0x228;
/*0x02d0*/ CButtonWnd* pButtonWnd;
/*0x02d8*/ CInvSlotWnd* pInvSlotWnd;
/*0x02e0*/ CSpellGemWnd* pSpellGemWnd;
/*0x02e8*/ CXSize BaseSize;
/*0x02f0*/ int ButtonPercentSize;
/*0x02f4*/ CXSize BaseButtonSize;
/*0x02fc*/ CXSize BaseDecalSize;
/*0x0304*/ CXSize BaseInvButtonSize;
/*0x030c*/ CXSize BaseSpellButtonSize;
/*0x314*/ int Unknown0x264;
/*0x318*/
};
//============================================================================
// CLabelWnd
//============================================================================

constexpr size_t CLabelWnd_size = 0x294; // jun09 +0x10 (CXWnd-derived; extent/op_new TBD by BOB)
class [[offsetcomments]] CLabelWnd : public CXWnd
{
public:
	// constructor / destructor
	CLabelWnd(CXWnd* parent, uint32_t id, const CXRect& rect);
	virtual ~CLabelWnd();

	// virtual functions
	virtual int Draw() override;
	virtual void SetWindowText(const CXStr& Text) override;

	virtual void UpdateText();
	virtual void ResizeHeightToText();

	CXStr GetText() const { return Text; }
	void SetText(const CXStr& text) { Text = text; }

	// data members
/*0x268*/ bool bNoWrap;
/*0x269*/ bool bAlignRight;
/*0x26a*/ bool bAlignCenter;
/*0x26c*/ int xOffset;
/*0x270*/ bool bResizeHeightToText;
/*0x278*/ CXStr PrependText;
/*0x280*/ CXStr Text;
/*0x288*/ CXStr AppendText;
/*0x290*/ bool bTextDirty;
/*0x294*/
};
SIZE_CHECK(CLabelWnd, CLabelWnd_size);

//============================================================================
// CLabel
//============================================================================

constexpr size_t CLabel_size = 0x29c; // jun09 +0x10 (CXWnd-derived; extent/op_new TBD by BOB)
class [[offsetcomments]] CLabel : public CLabelWnd
{
public:
	// constructor / destructor
	CLabel(CXWnd* parent, uint32_t id, CXRect rect, int EQType);
	virtual ~CLabel();

	// virtual functions
	virtual void UpdateText() override;

	// data members
/*0x298*/ int EQType;
/*0x29c*/
};
SIZE_CHECK(CLabel, CLabel_size);

inline namespace deprecated {
	using CLABEL DEPRECATE("Use CLabel instead of CLABEL") = CLabel;
	using PCLABEL DEPRECATE("Use CLabel* instead of PCLABEL") = CLabel*;
}

//============================================================================
// CListWnd
//============================================================================

struct [[offsetcomments]] STreeData
{
/*0x0*/ int Depth = 0;
/*0x4*/ bool bIsExpandable = false;
/*0x8*/
};

struct [[offsetcomments]] SListWndCell
{
/*0x00*/ const CTextureAnimation* pTA = nullptr;
/*0x0008*/ CXStr Text;
/*0x10*/ COLORREF Color = 0x00FFFFFF;
/*0x14*/ bool bOnlyDrawTexture = false;
/*0x18*/ CXWnd* pWnd = nullptr;
/*0x20*/ void* Unknown1 = nullptr;
/*0x28*/
};

struct [[offsetcomments]] SListWndLine
{
/*0x0*/ ArrayClass<SListWndCell> Cells;
/*0x18*/ uint64_t Data = 0;
/*0x20*/ int Height = -1;
/*0x24*/ bool bSelected = false;
/*0x25*/ bool bEnabled = true;
/*0x28*/ STreeData Treedata;
/*0x30*/ char TooltipText[256];
/*0x130*/ bool bVisible = true;
/*0x134*/ uint32_t bIsSeparator = 0;
/*0x138*/
};

class [[offsetcomments]] SListWndSortInfo
{
public:
/*0x0*/ int SortCol;
/*0x8*/ const SListWndLine& ListWndLine1;
/*0x10*/ CXStr StrLabel1;
/*0x18*/ uint64_t Data1;
/*0x20*/ const SListWndLine& ListWndLine2;
/*0x28*/ CXStr StrLabel2;
/*0x30*/ uint64_t Data2;
/*0x38*/ int SortResult;
/*0x3c*/
};
constexpr size_t SListWndSortInfo_size = 0x40; // plain struct delta-0; end 0x3c pad to 8-align (CXStr/uint64 members)
SIZE_CHECK(SListWndSortInfo, SListWndSortInfo_size);

enum ECellType
{
	CellTypeBasicText = 1,
	CellTypeBasicIcon = 2,
	CellTypeTextIcon = 3
};

struct [[offsetcomments]] SListWndColumn
{
/*0x0*/ int Width = 0;
/*0x4*/ int MinWidth = 10;
/*0x8*/ CXSize TextureSize;
/*0x10*/ CXPoint TextureOffset;
/*0x18*/ CXStr StrLabel;
/*0x20*/ uint64_t Data = 0;
/*0x28*/ uint32_t Flags = 0;
/*0x2c*/ uint32_t Type = CellTypeTextIcon; // ECellType
/*0x30*/ CTextureAnimation* pTextureAnim = nullptr;
/*0x38*/ CTextureAnimation* pSelected = nullptr;
/*0x40*/ CTextureAnimation* pMouseOver = nullptr;
/*0x48*/ CXStr Tooltip;
/*0x50*/ bool bResizable = false;
/*0x54*/

	SListWndColumn(CXStr strLabel = "",
		int width = 0,
		CTextureAnimation* pta = nullptr,
		uint32_t flags = 0,
		uint32_t type = CellTypeTextIcon,
		CTextureAnimation* pSelected = nullptr,
		CTextureAnimation* pMouseOver = nullptr,
		CXStr tooltip = "",
		bool bResizable = false,
		CXSize textureSize = {},
		CXPoint textureOffset = {})
		: StrLabel(strLabel)
		, Width(width)
		, pTextureAnim(pta)
		, Flags(flags)
		, Type(type)
		, pSelected(pSelected)
		, pMouseOver(pMouseOver)
		, Tooltip(tooltip)
		, bResizable(bResizable)
		, TextureSize(textureSize)
		, TextureOffset(textureOffset)
	{}
};

class IListItemDataHandler
{
public:
	virtual bool GetText(int index, int subItem, CXStr& text) const = 0;
};

constexpr size_t CListWnd_size = 0x348; // @sizeof :: 2026-06-09 (test) -- ctor 0x1405d1a20 op_new(0x348); BOB-gated (LastVisibleTime eqtime_t@0x340)

class [[offsetcomments]] CListWnd : public CXWnd
{
public:
	EQLIB_OBJECT CListWnd(CXWnd*, uint32_t, const CXRect&);
	virtual ~CListWnd();

	//----------------------------------------------------------------------------
	// virtuals

	EQLIB_OBJECT virtual void OnColumnClick(int column);
	EQLIB_OBJECT virtual int OnHeaderClick(CXPoint);
	EQLIB_OBJECT virtual int DrawColumnSeparators() const;
	EQLIB_OBJECT virtual int DrawSeparator(int index) const;
	EQLIB_OBJECT virtual int DrawLine(int index) const;
	EQLIB_OBJECT virtual int DrawHeader() const;
	EQLIB_OBJECT virtual int DrawItem(int index, int, int) const;
	EQLIB_OBJECT virtual void DeleteAll();
	EQLIB_OBJECT virtual int Compare(const SListWndLine&, const SListWndLine&) const;
	EQLIB_OBJECT virtual int Unknown0x188(int a, int b) const;
	EQLIB_OBJECT virtual void Sort(bool unstable = true);

	// overrides
	EQLIB_OBJECT virtual int Draw() override;
	EQLIB_OBJECT virtual int DrawBackground() const override;
	EQLIB_OBJECT virtual int DrawTooltip(const CXWnd* wnd) const override;
	EQLIB_OBJECT virtual HCURSOR GetCursorToDisplay() const override;
	EQLIB_OBJECT virtual int HandleLButtonDown(const CXPoint& pos, uint32_t flags) override;
	EQLIB_OBJECT virtual int HandleLButtonUp(const CXPoint& pos, uint32_t flags) override;
	EQLIB_OBJECT virtual int HandleLButtonHeld(const CXPoint& pos, uint32_t flags) override;
	EQLIB_OBJECT virtual int HandleLButtonUpAfterHeld(const CXPoint& pos, uint32_t flags) override;
	EQLIB_OBJECT virtual int HandleRButtonDown(const CXPoint& pos, uint32_t flags) override;
	EQLIB_OBJECT virtual int HandleRButtonUp(const CXPoint& pos, uint32_t flags) override;
	EQLIB_OBJECT virtual int HandleRButtonHeld(const CXPoint& pos, uint32_t flags) override;
	EQLIB_OBJECT virtual int HandleRButtonUpAfterHeld(const CXPoint& pos, uint32_t flags) override;
	EQLIB_OBJECT virtual int HandleMouseMove(const CXPoint& pos, uint32_t flags) override;
	EQLIB_OBJECT virtual int WndNotification(CXWnd* sender, uint32_t message, void* data) override;
	EQLIB_OBJECT virtual void OnWndNotification() override;
	EQLIB_OBJECT virtual int OnMove(const CXRect& rect) override;
	EQLIB_OBJECT virtual int OnResize(int w, int h) override;
	EQLIB_OBJECT virtual int OnVScroll(EScrollCode code, int pos) override;
	EQLIB_OBJECT virtual int OnHScroll(EScrollCode code, int pos) override;
	EQLIB_OBJECT virtual CXRect GetHitTestRect(int code) const override;
	EQLIB_OBJECT virtual CXRect GetClientClipRect() const override;
	EQLIB_OBJECT virtual CXWnd* GetChildWndAt(const CXPoint& pos, bool, bool) const override;
	EQLIB_OBJECT virtual int SetVScrollPos(int pos) override;

	//----------------------------------------------------------------------------
	// methods

	EQLIB_OBJECT bool IsLineEnabled(int) const;
	EQLIB_OBJECT const CTextureAnimation* GetColumnAnimation(int) const;
	EQLIB_OBJECT const CTextureAnimation* GetColumnAnimationMouseOver(int) const;
	EQLIB_OBJECT const CTextureAnimation* GetColumnAnimationSelected(int) const;
	EQLIB_OBJECT const CTextureAnimation* GetItemIcon(int, int) const;
	EQLIB_OBJECT CXRect GetHeaderRect(int) const;
	EQLIB_OBJECT CXRect GetItemRect(int, int) const;
	EQLIB_OBJECT CXRect GetSeparatorRect(int) const;
	EQLIB_OBJECT CXStr GetColumnLabel(int) const;
	EQLIB_OBJECT int AddColumn(const CXStr& Label, CTextureAnimation* pTA, int Width, uint32_t Flags, CXStr Tooltip = "",
		uint32_t Type = CellTypeTextIcon, CTextureAnimation* pTASelected = nullptr, CTextureAnimation* pTAMouseOver = nullptr,
		bool bResizeable = false, CXSize TextureSize = {}, CXPoint TextureOffset = {});
	EQLIB_OBJECT int AddColumn(const CXStr& Label, int Width, uint32_t Flags, uint32_t Type = CellTypeTextIcon);
	EQLIB_OBJECT int AddLine(SListWndLine*);
	EQLIB_OBJECT int AddString(const CXStr& Str, COLORREF Color, uint64_t Data = 0, const CTextureAnimation* pTa = nullptr, const char* TooltipStr = nullptr);
	int AddString(const CXStr& str, mq::MQColor Color, uint64_t Data = 0, const CTextureAnimation* pTA = nullptr, const char* TooltipStr = nullptr)
	{
		return AddString(str, Color.ToARGB(), Data, pTA, TooltipStr);
	}
	EQLIB_OBJECT int AddString(const char* Str, COLORREF Color, uint64_t Data, const CTextureAnimation* pTa, const char* TooltipStr = nullptr);
	EQLIB_OBJECT int GetColumnJustification(int) const;
	EQLIB_OBJECT int GetColumnMinWidth(int) const;
	EQLIB_OBJECT CXStr GetColumnTooltip(int) const;
	EQLIB_OBJECT int GetColumnWidth(int) const;
	EQLIB_OBJECT int GetCurCol() const;
	EQLIB_OBJECT int GetCurSel() const;
	EQLIB_OBJECT int GetItemHeight(int) const;
	EQLIB_OBJECT uint32_t GetColumnFlags(int) const;
	EQLIB_OBJECT uint64_t GetItemData(int) const;
	EQLIB_OBJECT COLORREF GetItemColor(int, int) const;
	EQLIB_OBJECT void CalculateFirstVisibleLine();
	EQLIB_OBJECT void CalculateLineHeights();
	EQLIB_OBJECT void CalculateVSBRange();
	EQLIB_OBJECT void ClearAllSel();
	EQLIB_OBJECT void ClearSel(int);
	EQLIB_OBJECT void CloseAndUpdateEditWindow();
	EQLIB_OBJECT void EnableLine(int Index, bool bVal);
	EQLIB_OBJECT void EnsureVisible(int);
	EQLIB_OBJECT void ExtendSel(int);
	EQLIB_OBJECT void InsertLine(int ID, SListWndLine* rEntry);
	EQLIB_OBJECT void RemoveLine(int);
	EQLIB_OBJECT void RemoveString(int);
	EQLIB_OBJECT void SetColumnJustification(int, int);
	EQLIB_OBJECT void SetColumnLabel(int, const CXStr&);
	EQLIB_OBJECT void SetColumnWidth(int, int);
	EQLIB_OBJECT void SetCurSel(int);
	EQLIB_OBJECT void SetItemColor(int, int, unsigned long);
	void SetItemColor(int row, int col, mq::MQColor color) { SetItemColor(row, col, color.ToARGB()); }
	EQLIB_OBJECT void SetItemData(int ID, uint64_t Data);
	EQLIB_OBJECT void SetItemText(int ID, int SubID, const CXStr& Text);
	EQLIB_OBJECT void ShiftColumnSeparator(int, int);
	EQLIB_OBJECT void ToggleSel(int);
	EQLIB_OBJECT void SetColumnsSizable(bool bColumnsSizable);
	EQLIB_OBJECT void GetWndPosition(CXWnd* pWnd, int& ItemID, int& SubItemID) const;
	EQLIB_OBJECT void SetItemWnd(int Index, int SubItem, CXWnd* pWnd);
	EQLIB_OBJECT CXWnd* GetItemWnd(int Index, int SubItem = 0) const;
	EQLIB_OBJECT void SetItemIcon(int Index, int SubItem, const CTextureAnimation* pTA);
	EQLIB_OBJECT void CalculateCustomWindowPositions();

	EQLIB_OBJECT void SetColors(COLORREF crNormal, COLORREF crHighlight, COLORREF crSelected);
	void SetColors(mq::MQColor normal, mq::MQColor highlight, mq::MQColor selected) { SetColors(normal.ToARGB(), highlight.ToARGB(), selected.ToARGB()); }


	EQLIB_OBJECT int GetItemAtPoint(const CXPoint& pt) const;
	EQLIB_OBJECT void GetItemAtPoint(const CXPoint& pt, int* ID, int* SubItem) const;


	int GetColumnCount() const { return Columns.GetLength(); }

	// Index of the first row in the list where the text in column matches predicate, or -1 if no row matches
	EQLIB_OBJECT int IndexOf(int column, const std::function<bool(const CXStr)>& predicate);

	// Index of the first row in the list where the text in the first column matches predicate, or -1 if no row matches
	EQLIB_OBJECT int IndexOf(const std::function<bool(const CXStr)>& predicate);

	// True if the list contains a row where the text in columns matches predicate
	EQLIB_OBJECT bool Contains(int column, const std::function<bool(const CXStr)>& predicate);

	// True if the list contains a row the text in the first column matches predicate
	EQLIB_OBJECT bool Contains(const std::function<bool(const CXStr)>& predicate);

	EQLIB_OBJECT CXStr GetItemText(int index, int subIndex = 0) const;

	DEPRECATE("GetItemText: Passing in a pointer to CXStr for GetItemText is deprecated. It should return CXStr instead.")
	void GetItemText(CXStr* pStr, int index, int subIndex = 0) const
	{
		*pStr = GetItemText(index, subIndex);
	}

	//----------------------------------------------------------------------------

	// Sets the sorting column. If this is the current column it will flip its order.
	void SetSortColumn(int column)
	{
		if (column < 0 || column >= Columns.GetCount())
			return;

		if (SortCol == column)
			bSortAsc = !bSortAsc;
		else
		{
			SortCol = column;
			bSortAsc = true;
		}

		Sort(false);
	}

	int GetItemCount() const { return ItemsArray.GetLength(); }

	//----------------------------------------------------------------------------
	// data members

/*0x0268*/ int Unknown0x1f0;
/*0x270*/ ArrayClass<SListWndLine> ItemsArray;
/*0x288*/ ArrayClass<SListWndColumn> Columns;
/*0x2a0*/ int CurSel;
/*0x02a4*/ int CurCol;
/*0x02a8*/ int DownItem;
/*0x02ac*/ int ScrollOffsetY;
/*0x2b0*/ int HeaderHeight;
/*0x2b4*/ int FirstVisibleLine;
/*0x02b8*/ int SortCol;
/*0x2bc*/ bool bSortAsc;
/*0x2bd*/ bool bFixedHeight;
/*0x2be*/ bool bOwnerDraw;
/*0x02bf*/ bool bCalcHeights;
/*0x02c0*/ bool bColumnSizable;
/*0x02c4*/ int LineHeight;
/*0x02c8*/ int ColumnSepDragged;
/*0x02cc*/ int ColumnSepMouseOver;
/*0x02d0*/ COLORREF HeaderText;
/*0x2d4*/ COLORREF Highlight;
/*0x2d8*/ COLORREF Selected;
/*0x02e0*/ CUITextureInfo BGHeader;
/*0x0300*/ COLORREF BGHeaderTint;
/*0x308*/ CTextureAnimation* pRowSep;
/*0x310*/ CTextureAnimation* pColumnSep;
/*0x318*/ CEditBaseWnd* pEditCell;
/*0x320*/ IListItemDataHandler* pItemDataHandler;
/*0x328*/ bool bHasItemTooltips;
/*0x32c*/ CXRect PrevInsideRect;
/*0x33c*/ uint32_t ListWndStyle;
/*0x340*/ eqtime_t LastVisibleTime;
/*0x348*/

	struct [[offsetcomments]] VirtualFunctionTable : public CXWnd::VirtualFunctionTable
	{
	/*0x348*/ void* OnColumnClick;
	/*0x350*/ void* OnHeaderClick;
	/*0x358*/ void* DrawColumnSeparators;
	/*0x360*/ void* DrawSeparator;
	/*0x368*/ void* DrawLine;
	/*0x370*/ void* DrawHeader;
	/*0x378*/ void* DrawItem;
	/*0x380*/ void* DeleteAll;
	/*0x388*/ void* Compare;
	/*0x390*/ void* Unknown0x188;
	/*0x398*/ void* Sort;
	/*0x3a0*/
	};
SIZE_CHECK(CListWnd, CListWnd_size);

	// points to the eq instance of the virtual function table for this class
	static VirtualFunctionTable* sm_vftable;
};

//============================================================================
// CPageWnd
//============================================================================

constexpr size_t CPageWnd_size = 0x310; // jun09 +0x10 (op_new TBD by BOB)
class [[offsetcomments]] CPageWnd : public CSidlScreenWnd
{
public:
	CPageWnd(CXWnd*, uint32_t, const CXRect&, const CXStr&, CPageTemplate*);
	virtual ~CPageWnd();

	CTextureAnimation* GetTabIcon() const { return pTATabIcon; }

	EQLIB_OBJECT CXStr GetTabText(bool bShowFlashing = false) const;
	EQLIB_OBJECT void SetTabText(CXStr&) const;
	EQLIB_OBJECT void FlashTab(bool flash, int msTime) const;

/*0x2d0*/ CXStr TabText;
/*0x2d8*/ CXStr OrigTabText;
/*0x2e0*/ COLORREF CRTabText;
/*0x2e4*/ COLORREF CRTabTextActive;
/*0x2e8*/ CTextureAnimation* pTATabIcon;
/*0x2f0*/ CTextureAnimation* pTATabIconActive;
/*0x2f8*/ int Unknown0x250;
/*0x2fc*/ int Unknown0x254;
/*0x300*/ int64_t LastFlashTime;
/*0x308*/ COLORREF CRHighlightFlashColor;
/*0x30c*/ bool bHighlightOnNewMessages;
/*0x30d*/ bool bFlashing;
/*0x310*/
};
SIZE_CHECK(CPageWnd, CPageWnd_size);

//============================================================================
// CSliderWnd
//============================================================================

// size: 0x258 6/10/2019 (test)
constexpr size_t CSliderWnd_size = 0x2e8; // jun09 +0x10 (extent/op_new TBD by BOB)
class [[offsetcomments]] CSliderWnd : public CXWnd
{
public:
	CSliderWnd(CXWnd*, uint32_t, const CXRect&, CSliderTemplate*);
	virtual ~CSliderWnd();

	virtual int Draw() override;
	virtual int HandleKeyboardMsg(uint32_t, uint32_t, bool) override;
	virtual int HandleLButtonDown(const CXPoint&, uint32_t) override;
	virtual int HandleLButtonUp(const CXPoint&, uint32_t) override;
	virtual int HandleLButtonUpAfterHeld(const CXPoint&, uint32_t) override;
	virtual int HandleMouseMove(const CXPoint&, uint32_t) override;
	virtual int OnProcessFrame() override;

	EQLIB_OBJECT CXRect GetEndCapLeftRect() const;
	EQLIB_OBJECT CXRect GetEndCapRightRect() const;
	EQLIB_OBJECT CXRect GetMiddleRangeRect() const;
	EQLIB_OBJECT CXRect GetThumbRect() const;
	EQLIB_OBJECT int GetValue() const;
	EQLIB_OBJECT void SetNumTicks(int);
	EQLIB_OBJECT void SetValue(int);

	EQLIB_OBJECT int DrawEndCapLeft() const;
	EQLIB_OBJECT int DrawEndCapRight() const;
	EQLIB_OBJECT int DrawMiddleRange() const;
	EQLIB_OBJECT int DrawThumb() const;
	EQLIB_OBJECT void SetThumbToOffset(int);
	EQLIB_OBJECT void UpdateMiddleRange();
	EQLIB_OBJECT void UpdateThumb();

	//----------------------------------------------------------------------------
	// data members

/*0x268*/ CButtonDrawTemplate bdtThumb;
/*0x2d0*/ CTextureAnimation* ptaBackground;
/*0x2d8*/ CTextureAnimation* ptaEndCapLeft;
/*0x2e0*/ CTextureAnimation* ptaEndCapRight;
/*0x2e8*/
	// more ...
};
SIZE_CHECK(CSliderWnd, CSliderWnd_size);

//============================================================================
// CStmlWnd
//============================================================================

enum ELinkType
{
	STML_LINK_FILE,
	STML_LINK_UNIT,
	STML_LINK_BUILDING,
	STML_LINK_MESSAGE,
	STML_LINK_CAMERA,
	STML_LINK_REPORT,
	STML_LINK_WNDNOTIFY,
	STML_LINK_EMPTY,
	STML_LINK_URL,
	STML_LINK_PLAYER,
	STML_LINK_SPAM,
	STML_LINK_ACHIEVEMENT,
	STML_LINK_HELP,
	STML_LINK_DIALOG_RESPONSE,
	STML_LINK_COMMAND,
	STML_NUM_LINK_TYPES,
};

enum EStmlTargetValue
{
	STML_TARGET_SELF,
	STML_TARGET_BLANK,
};

struct [[offsetcomments]] SFontTag
{
/*0x0*/ CTextureFont* face;
/*0x8*/ COLORREF color;
/*0xc*/
};

using SStyleTag = uint32_t;

const uint32_t STML_TAG_BOLD = 0;
const uint32_t STML_TAG_UNDERLINE = 2;

struct [[offsetcomments]] SFormattedText
{
/*0x0*/ SFontTag Font;
/*0x10*/ SStyleTag Style;
/*0x14*/ int Left;
/*0x18*/ int Right;
/*0x20*/ CXStr Text;
/*0x28*/ int32_t LinkID;
/*0x30*/ CTextureAnimation* Texture;
/*0x38*/ int32_t TableID;
/*0x3c*/ int32_t IndexStart;
/*0x40*/
};
constexpr size_t SFormattedText_size = 0x40; // plain struct delta-0; 9/9 fields
SIZE_CHECK(SFormattedText, SFormattedText_size);

struct [[offsetcomments]] STextLine
{
/*0x0*/ ArrayClass<SFormattedText> TextPieces;
/*0x18*/ int yBottom;
/*0x1c*/ int yTop;
/*0x20*/ int32_t IndexStart;
/*0x24*/
};

struct [[offsetcomments]] SLinkInfo
{
/*0x0*/ ELinkType Type = STML_LINK_EMPTY;
/*0x4*/ uint32_t MsgID = -1;
/*0x8*/ CXStr Name;
/*0x10*/ EStmlTargetValue TargetType = STML_TARGET_SELF;
/*0x14*/
};

struct SParseVariables
{
	// todo ...
};

struct [[offsetcomments]] SHistoryElement
{
/*0x0*/ SLinkInfo sLink;
/*0x18*/ CXStr STMLText;
/*0x20*/
};

enum ESTMLParseState
{
	STML_PARSE_STATE_BODY,
	STML_PARSE_STATE_HEAD,
};


class [[offsetcomments]] CStmlWnd : public CXWnd
{
public:
	CStmlWnd(CXWnd*, uint32_t, const CXRect&);
	virtual ~CStmlWnd();

	virtual bool IsPointTransparent(const CXPoint&) const override;
	virtual HCURSOR GetCursorToDisplay() const override;
	virtual int Draw() override;
	virtual int HandleKeyboardMsg(uint32_t, uint32_t, bool) override;
	virtual int HandleLButtonDown(const CXPoint&, uint32_t) override;
	virtual int HandleLButtonUp(const CXPoint&, uint32_t) override;
	virtual int HandleMouseMove(const CXPoint&, uint32_t) override;
	virtual int OnMove(const CXRect&) override;
	virtual int OnProcessFrame() override;
	virtual int OnResize(int, int) override;
	virtual int OnHScroll(EScrollCode, int) override;
	virtual int OnVScroll(EScrollCode, int) override;
	virtual void SetWindowText(const CXStr&) override;

	EQLIB_OBJECT bool CanGoBackward();
	EQLIB_OBJECT CXSize AppendSTML(CXStr);
	EQLIB_OBJECT CXStr GetVisibleText(CXStr, const CXRect&) const;
	EQLIB_OBJECT static CXStr MakeStmlColorTag(unsigned long);
	EQLIB_OBJECT static CXStr MakeWndNotificationTag(uint32_t, const CXStr&, const CXStr&);
	EQLIB_OBJECT void ActivateLink(SLinkInfo);
	EQLIB_OBJECT void ForceParseNow();
	EQLIB_OBJECT void GoToBackHistoryLink();
	// EQLIB_OBJECT void LoadPage(CXStr, enum ESTMLTargetValue, bool);
	EQLIB_OBJECT void SetSTMLText(CXStr, bool addToHistory = true, SLinkInfo* = nullptr);
	EQLIB_OBJECT void SetSTMLTextWithoutHistory(CXStr);

	// protected
	EQLIB_OBJECT bool IsLinkActive(SLinkInfo) const;
	EQLIB_OBJECT bool ParseAmpersand(CXStr, char*) const;
	EQLIB_OBJECT static bool CanBreakAtCharacter(unsigned short);
	EQLIB_OBJECT static bool IsCharacterNotASpaceAndNotNULL(unsigned short);
	EQLIB_OBJECT static bool IsCharacterNotEquals(unsigned short);
	EQLIB_OBJECT static bool IsCharacterNotQuotes(unsigned short);
	EQLIB_OBJECT unsigned short FastForwardPastQuotesAndGetNextTagPiece(const CXStr&, CXStr*, int*, bool);
	EQLIB_OBJECT unsigned short FastForwardPastSpaces(const CXStr&, int*);
	EQLIB_OBJECT unsigned short FastForwardPastSpacesAndQuotes(const CXStr&, int*);
	EQLIB_OBJECT unsigned short FastForwardToEndOfTag(const CXStr&, CXStr*, int*, char);
	EQLIB_OBJECT unsigned short GetNextChar(int*, const CXStr&);
	EQLIB_OBJECT unsigned short GetNextTagPiece(const CXStr&, CXStr*, int*, bool (*)(unsigned short), bool);
	EQLIB_OBJECT unsigned short GetThisChar(int, const CXStr&);
	EQLIB_OBJECT void ActivateLinkFile(SLinkInfo);
	EQLIB_OBJECT void ActivateLinkMessageId(SLinkInfo);
	EQLIB_OBJECT void ActivateLinkReport(SLinkInfo, bool);
	EQLIB_OBJECT void ActivateLinkWndNotify(SLinkInfo);
	EQLIB_OBJECT void AddLinkToHistory(SLinkInfo, const CXStr&);
	EQLIB_OBJECT void AddTextPieceToLine(SParseVariables*);
	EQLIB_OBJECT void CalculateHSBRange(int);
	EQLIB_OBJECT void CalculateVSBRange(int);
	EQLIB_OBJECT void CompleteParse();
	EQLIB_OBJECT void InitializeTempVariables(SParseVariables*, const CXRect&);
	EQLIB_OBJECT void InitializeTextLine(SParseVariables*, int);
	EQLIB_OBJECT void InitializeWindowVariables();
	// EQLIB_OBJECT void ParseLinkTarget(const CXStr&, enum ESTMLTargetValue*) const;
	EQLIB_OBJECT void ParseSTMLHead(const CXStr&);
	EQLIB_OBJECT void ParseSTMLTable(const CXStr&, int*, const CXStr&, SParseVariables*);
	EQLIB_OBJECT void ParseSTMLTableAttributes(const CXStr&, STable*);
	// EQLIB_OBJECT void ParseTagAlign(const CXStr&, enum ESTMLAlign*) const;
	EQLIB_OBJECT void ParseTagColor(const CXStr&, unsigned long*) const;
	EQLIB_OBJECT void ParseTagFace(const CXStr&, const CTextureFont**) const;
	EQLIB_OBJECT void ResetTempVariablesForNewLine(SParseVariables*);
	EQLIB_OBJECT void StripFirstSTMLLines(int);
	EQLIB_OBJECT void UpdateHistoryString(int32_t, const CXStr&);

	CXStr GetSTMLText() const { return STMLText; }

	CXStr GetText() const { return STMLText; }
	void SetText(const CXStr& str) { STMLText = str; }

	//----------------------------------------------------------------------------
	// data members

	// todo: verify
/*0x268*/ CXStr STMLText;
/*0x270*/ CircularArrayClass2<STextLine> TextLines;
/*0x2a0*/ int32_t TextTotalHeight;
/*0x2a4*/ int32_t TextTotalWidth;
/*0x2a8*/ int32_t Unknown0x224;
/*0x2b0*/ ArrayClass2<SLinkInfo> Links;
/*0x2d0*/ ArrayClass<STable> Tables;
/*0x2e8*/ bool bReparseNow;
/*0x2e9*/ bool bResized;
/*0x2ea*/ bool bAlignCenter;
/*0x2ec*/ int LineSpacingAdjust;
/*0x2f0*/ int32_t CapturedLinkID;
/*0x2f4*/ int32_t MousedOverLinkID;
/*0x2f8*/ COLORREF BackGroundColor;
/*0x2fc*/ COLORREF TextColor;
/*0x300*/ COLORREF LinkColor;
/*0x304*/ COLORREF VLinkColor;
/*0x308*/ COLORREF ALinkColor;
/*0x30c*/ COLORREF MLinkColor;
/*0x310*/ ESTMLParseState CurrentParseState;
/*0x318*/ ArrayClass2<SHistoryElement> HistoryArray;
/*0x338*/ int32_t HistoryIndex;
/*0x340*/ CStmlReport* pStmlReport;
/*0x348*/ int MaxLines;
/*0x34c*/ int PlayerContextMenuIndex;
/*0x350*/ int Unknown0x2ac;
/*0x354*/ int Unknown0x2b0;
/*0x358*/ int Unknown0x2b4;
/*0x35c*/
};
constexpr size_t CStmlWnd_size = 0x360; // jun09 +0x10 (CXWnd 0x258->0x268); field-end 0x35c pad to 8-align; op_new VTABLE-LOCKED = SIDL CreateXWnd case 0x25 (ctor 1405ddcd0, vtbl 0x140aecd78, OTTO positive identity)
SIZE_CHECK(CStmlWnd, CStmlWnd_size);

//============================================================================
// CTabWnd
//============================================================================

class [[offsetcomments]] CTabWnd : public CXWnd
{
public:
	CTabWnd(CXWnd* pParent, uint32_t uId, const CXRect& rect, CTabBoxTemplate* pTabContents);
	virtual ~CTabWnd();

	// functions we have offsets for
	EQLIB_OBJECT int DrawCurrentPage() const;
	EQLIB_OBJECT int DrawTab(int) const;
	EQLIB_OBJECT void UpdatePage();

	EQLIB_OBJECT void SetPageRect(const CXRect&);
	EQLIB_OBJECT bool SetPage(CPageWnd*, bool bNotifyParent = true, bool bBringToTop = true);
	EQLIB_OBJECT CPageWnd* GetPageFromTabPoint(CXPoint) const;

	EQLIB_OBJECT CXRect GetPageClientRect() const;
	EQLIB_OBJECT CXRect GetPageInnerRect() const;
	EQLIB_OBJECT CXRect GetTabInnerRect(int) const;
	EQLIB_OBJECT CXRect GetTabRect(int) const;

	int GetNumTabs() const { return PageArray.GetLength(); }
	int GetCurrentTabIndex() const { return CurTabIndex; }

	EQLIB_OBJECT CPageWnd* GetPageFromTabIndex(int tabIndex) const;
	EQLIB_OBJECT CPageWnd* GetCurrentPage() const;

	EQLIB_OBJECT void SetPage(int index, bool bNotifyParent = true, bool bBringToTop = true, bool bSomething = false);
	EQLIB_OBJECT void InsertPage(CPageWnd* pPageWnd, int position = -1); // defaults to the last tab
	EQLIB_OBJECT void RemovePage(CPageWnd* pPageWnd);

	bool IsValidIndex(int index) const
	{
		return index >= 0 && index < GetNumTabs();
	}


	//----------------------------------------------------------------------------
	// data members

/*0x268*/ CTAFrameDraw* pTabBorder;
/*0x270*/ CTAFrameDraw* pPageBorder;
/*0x278*/ ArrayClass<CPageWnd*> PageArray;
/*0x290*/ int CurTabIndex;
/*0x294*/ int TabHeight;
/*0x298*/ CXRect PageRect;
/*0x02a8*/ bool bShowTabs;
/*0x2ac*/ int TabStyle;
/*0x02b0*/ int TabWidth;
/*0x2b4*/
};

//============================================================================
// CTreeViewWnd
//============================================================================

class [[offsetcomments]] CTreeViewWnd : public CListWnd
{
public:
	CTreeViewWnd(CXWnd*, uint32_t, CXRect, int);
	virtual ~CTreeViewWnd();
};

//============================================================================

constexpr size_t CLayoutWnd_size = 0x2e8; // jun09 +0x10 (extent/op_new TBD by BOB)
class [[offsetcomments]] CLayoutWnd : public CSidlScreenWnd
{
public:
	CLayoutWnd(CXWnd*, uint32_t, const CXRect&, const CXStr&);
	virtual ~CLayoutWnd();

/*0x2d0*/ uint32_t spacing;
/*0x2d4*/ bool expandLast;
/*0x2d8*/ int paddingLeft;
/*0x2dc*/ int paddingRight;
/*0x2e0*/ int paddingTop;
/*0x2e4*/ int paddingBottom;
/*0x2e8*/
};
SIZE_CHECK(CLayoutWnd, CLayoutWnd_size);

// Horizontal and Vertical layouts are basically the same, but transposed.
class [[offsetcomments]] CHorizontalLayoutWnd : public CLayoutWnd
{
	FORCE_SYMBOLS

public:
/*0x2e8*/ ArrayClass<CXWnd*> visibleChildren;
/*0x300*/ ArrayClass<CXRect> dividerRects;
/*0x318*/ int activeDivider;
/*0x31c*/ bool dividerHover;
/*0x31d*/ bool dividerMoving;
/*0x320*/ int oldPosCoord; // X for horizontal, Y for vertical
/*0x324*/ bool bStyle_Dividers; // the Style_Dividers property from XML
/*0x328*/
};
constexpr size_t CHorizontalLayoutWnd_size = 0x328; // clean +0x10 (CLayoutWnd 0x2d8->0x2e8); 7/7 fields
SIZE_CHECK(CHorizontalLayoutWnd, CHorizontalLayoutWnd_size);

class [[offsetcomments]] CVerticalLayoutWnd : public CLayoutWnd
{
public:
/*0x2e8*/ ArrayClass<CXWnd*> visibleChildren;
/*0x300*/ ArrayClass<CXRect> dividerRects;
/*0x318*/ int activeDivider;
/*0x31c*/ bool dividerHover;
/*0x31d*/ bool dividerMoving;
/*0x320*/ int oldPosCoord; // X for horizontal, Y for vertical
/*0x324*/ bool bStyle_Dividers; // the Style_Dividers property from XML
/*0x328*/
};
constexpr size_t CVerticalLayoutWnd_size = 0x328; // clean +0x10 (CLayoutWnd 0x2d8->0x2e8); 7/7 fields
SIZE_CHECK(CVerticalLayoutWnd, CVerticalLayoutWnd_size);

constexpr size_t CTileLayoutWnd_size = 0x300; // jun09 +0x10 (extent/op_new TBD by BOB)
class [[offsetcomments]] CTileLayoutWnd : public CLayoutWnd
{
	FORCE_SYMBOLS

public:
/*0x2e8*/ bool horizontalFirst;
/*0x2e9*/ bool anchorToTop;
/*0x2ea*/ bool anchorToLeft;
/*0x2ec*/ int secondarySpacing;
/*0x2f0*/ bool firstPieceTemplate;
/*0x2f1*/ bool snapToChildren;
/*0x2f8*/ CXWnd* autoStretchWindow;
/*0x300*/
};
SIZE_CHECK(CTileLayoutWnd, CTileLayoutWnd_size);

//============================================================================
//============================================================================
//============================================================================
//============================================================================

//============================================================================
// CAAWnd
//============================================================================

class CAAWnd : public CSidlScreenWnd, public PopDialogHandler, public WndEventHandler
{
public:
	CAAWnd(CXWnd*);
	virtual ~CAAWnd();

	virtual int OnProcessFrame() override;
	virtual int WndNotification(CXWnd*, uint32_t, void*) override;

	// When confirmation for AA purchase is displayed, two message types are used
	// to identify which button was pressed
	// 100 = "Train" button
	// 101 = "Buy All" button
	virtual void DialogResponse(int msg, int, void*) {}

	EQLIB_OBJECT void CancelAASpend();
	EQLIB_OBJECT void ConfirmAASpend();
	EQLIB_OBJECT void SendNewPercent();
	EQLIB_OBJECT bool ShowAbility(int);
	EQLIB_OBJECT void Update(bool);
	EQLIB_OBJECT void UpdateTimer();

	// private
	EQLIB_OBJECT void Init();
	EQLIB_OBJECT void UpdateSelected();
};

//============================================================================
// CAchievementsWnd
//============================================================================

class CAchievementsWnd : public CSidlScreenWnd
{
public:
	CAchievementsWnd(CXWnd*);
	virtual ~CAchievementsWnd();
};

//============================================================================
// CActionsWnd
//============================================================================

// may11: sizeof 0x440, vftbl 0x14099CC68, pinst 0x140DFADE0, ctor 0x14036ED30.
// WndEventHandler MI subobject at +0x2C0 (secondary vftbl undeclared, see forensics).
// Internal fields not yet decoded -- ctor trace needed.
class CActionsWnd : public CSidlScreenWnd, public WndEventHandler
{
public:
	CActionsWnd(CXWnd*);
	virtual ~CActionsWnd();

	virtual int OnProcessFrame() override;
	virtual int WndNotification(CXWnd*, uint32_t, void*) override;

	EQLIB_OBJECT CButtonWnd* GetAbilityBtn(int);
	EQLIB_OBJECT CButtonWnd* GetCombatBtn(int);
	EQLIB_OBJECT CButtonWnd* GetMenuBtn(int);
	EQLIB_OBJECT int GetCurrentPageEnum() const;
	EQLIB_OBJECT void Activate(int);
	EQLIB_OBJECT void KeyMapUpdated();
	EQLIB_OBJECT void SelectSkillForAbilityBtn(int);
	EQLIB_OBJECT void SelectSkillForCombatBtn(int);
	EQLIB_OBJECT void UpdateButtonText();

	// private
	EQLIB_OBJECT int AbilitiesPageActivate();
	EQLIB_OBJECT int AbilitiesPageDeactivate();
	EQLIB_OBJECT int AbilitiesPageOnProcessFrame();
	EQLIB_OBJECT int AbilitiesPageWndNotification(CXWnd*, uint32_t, void*);
	EQLIB_OBJECT int CombatPageActivate();
	EQLIB_OBJECT int CombatPageDeactivate();
	EQLIB_OBJECT int CombatPageOnProcessFrame();
	EQLIB_OBJECT int CombatPageWndNotification(CXWnd*, uint32_t, void*);
	EQLIB_OBJECT int MainPageActivate();
	EQLIB_OBJECT int MainPageDeactivate();
	EQLIB_OBJECT int MainPageOnProcessFrame();
	EQLIB_OBJECT int MainPageWndNotification(CXWnd*, uint32_t, void*);
	EQLIB_OBJECT int RedirectActivateTo(CPageWnd*);
	EQLIB_OBJECT int RedirectDeactivateTo(CPageWnd*);
	EQLIB_OBJECT int RedirectOnProcessFrameTo(CPageWnd*);
	EQLIB_OBJECT int RedirectWndNotificationTo(CPageWnd*, CXWnd*, uint32_t, void*);
	EQLIB_OBJECT int SocialsPageActivate();
	EQLIB_OBJECT int SocialsPageDeactivate();
	EQLIB_OBJECT int SocialsPageOnProcessFrame();
	EQLIB_OBJECT int SocialsPageWndNotification(CXWnd*, uint32_t, void*);
};

//============================================================================
// CAdvancedLootWnd
//============================================================================

struct [[offsetcomments]] AdvancedLootItemNPC
{
/*0x00*/ unsigned int CorpseID; // spawnId of the corpse that has this lootitem
/*0x04*/ short StackCount;
/*0x08*/ unsigned int Expiration;
/*0x0c*/ bool Locked;
/*0x0d*/ char Name[0x40];
/*0x50*/ //more data here?
};

inline namespace deprecated {
	using LOOTDETAILS DEPRECATE("Use AdvancedLootItemNPC instead of LOOTDETAILS") = AdvancedLootItemNPC;
	using PLOOTDETAILS DEPRECATE("Use AdvancedLootItemNPC* instead of PLOOTDETAILS") = AdvancedLootItemNPC*;
}

enum eAdvLootState
{
	eAdvLootWaiting,
	eAdvLootAsk,
	eAdvLootAskAutoRoll,
	eAdvLootStop,
	eAdvLootAskCompleted,
	eAdvLootFreeGrab,
	eAdvLootFixedAskAutoRoll,
	eAdvLootFixedAskCompleted,
	eAdvLootRemoved
};

enum eAdvLootStatus
{
	eAdvLootStatusWaiting,
	eAdvLootStatusAsking,
	eAdvLootStatusRolling,
	eAdvLootStatusStopped,
	eAdvLootStatusClickRoll,
	eAdvLootStatusFreeGrab,
};

struct [[offsetcomments]] AdvancedLootItem
{
/*0x0*/ int64_t ItemID; // EqGuid?
/*0x8*/ char Name[0x40];
/*0x48*/ int IconID;
/*0x4c*/ bool bStackable;
/*0x50*/ int MaxStack;
/*0x54*/ bool NoDrop;
/*0x58*/ int ComboID;
/*0x5c*/ unsigned int LootID;
/*0x60*/ eAdvLootState State;
/*0x64*/ eAdvLootStatus Status;
/*0x68*/ bool bAutoRoll;
/*0x69*/ bool ActivelyManaged; // User has the manage Window up
/*0x6a*/ bool ContextMenu; // item has a context menu
/*0x6b*/ bool AskRandomMode; // item is in AskRandom mode
/*0x6c*/ bool CLootInProgress;
/*0x6d*/ bool PLootInProgress;
/*0x70*/ SoeUtil::Array<AdvancedLootItemNPC> LootDetails;
/*0x88*/ unsigned int AskTimer;
/*0x8c*/ bool AutoRoll;
/*0x8d*/ bool FG;
/*0x8e*/ bool Need;
/*0x8f*/ bool Greed;
/*0x90*/ bool No;
/*0x91*/ bool AlwaysNeed;
/*0x92*/ bool AlwaysGreed;
/*0x93*/ bool Never;
/*0x98*/ uint64_t Unk0;
/*0xa0*/ uint64_t Unk1;
/*0xa8*/
};

inline namespace deprecated {
	using LOOTITEM DEPRECATE("Use AdvancedLootItem instead of LOOTITEM") = AdvancedLootItem;
	using PLOOTITEM DEPRECATE("Use AdvancedLootItem* instead of PLOOTITEM") = AdvancedLootItem*;
}

struct [[offsetcomments]] AdvancedLootItemList
{
/*0x0*/ SoeUtil::Array<AdvancedLootItem> Items;
/*0x18*/ bool bIsPersonalLoot;
/*0x20*/ CListWnd* SharedLootList;
/*0x28*/ CComboWnd* PersonalLootList;
/*0x30*/
};

inline namespace deprecated {
	using LOOTLIST DEPRECATE("Use AdvancedLootItemList instead of LOOTLIST") = AdvancedLootItemList;
	using PLOOTLIST DEPRECATE("Use AdvancedLootItemList* instead of PLOOTLIST") = AdvancedLootItemList*;
}

class CorpseData;
class RefreshCorpseItemChoices;
class CGroupMemberBase;
struct RaidMember;

constexpr size_t CAdvancedLootWnd_size = 0x428; // @sizeof :: 2026-06-09 (test) -- ctor 0x1400a39e0; 27 child offsets validated vs batch, +pTextLinkPLTemplate

class [[offsetcomments]] CAdvancedLootWnd : public CSidlScreenWnd, public PopDialogHandler, public WndEventHandler
{
public:
	CAdvancedLootWnd(CXWnd*);
	virtual ~CAdvancedLootWnd();

	// virtuals
	virtual void UpdateMasterLooter(const CXStr&, bool);
	virtual void ToggleGroupedByNpc();
	virtual void ToggleApplyFilters();
	virtual void AddCorpse(CorpseData*, RefreshCorpseItemChoices*);
	virtual void RemoveCorpse(uint32_t id);
	virtual void ReduceItemCount(bool, int, int, int);
	virtual void ClearCorpses();
	virtual void AddPlayerToList(CGroupMemberBase*);
	virtual void AddPlayerToList(const RaidMember*);
	virtual void ResetComboBox();
	virtual bool ConstructChange();
	virtual void AddPlayerAccess(uint32_t id);

	// GiveTo
	EQLIB_OBJECT void DoAdvLootAction(int listindex, const CXStr& Name, bool Action, int Quantity);
	// GiveTo
	EQLIB_OBJECT void DoSharedAdvLootAction(const AdvancedLootItem& pLootItem, const CXStr& Assignee, bool Action, int Quantity);

	//----------------------------------------------------------------------------
	// data members

// jun09: 27 child ctrls (SIDL CreateChildControl, OTTO batch @0x2e0..0x3b0) + scalar tail. MI bases
// CSidlScreenWnd0x2d0+PopDialogHandler+WndEventHandler -> own@0x2e0. ctor 0x1400a39e0, sizeof 0x428 (validated:
// 27 child offsets match batch + end=0x428). NOTE: pTextLinkPLTemplate@0x3a0 was MISSING from corpus -- ADDED
// from binary (ADLW_TextLinkPLTemplate); explains prior +8 sizeof gap. [AM-REVIEW: new field, BOB confirm]
/*0x02e0*/ CVerticalLayoutWnd* pLayout;
/*0x02e8*/ CListWnd* pPersonalLootList;
/*0x02f0*/ CButtonWnd* pPersonalSetBtn;
/*0x02f8*/ CComboWnd* pPersonalSetCombo;
/*0x0300*/ CButtonWnd* pLootAllBtn;
/*0x0308*/ CButtonWnd* pLeaveAllBtn;
/*0x0310*/ CXWnd* pCLLWnd;
/*0x0318*/ CListWnd* pConstructLootList;
/*0x0320*/ CButtonWnd* pConstructSetBtn;
/*0x0328*/ CComboWnd* pConstructSetCombo;
/*0x0330*/ CButtonWnd* pContructLeaveAllBtn;
/*0x0338*/ CCheckBoxWnd* pApplyFiltersChk;
/*0x0340*/ CCheckBoxWnd* pGroupedByNpcChk;
/*0x0348*/ CButtonWnd* pEditFiltersBtn;
/*0x0350*/ CButtonWnd* pLootSettingsBtn;
/*0x0358*/ CLabelWnd* pCalculatedMasterLooter;
/*0x0360*/ CButtonWnd* pItemBtnTemplate;
/*0x0368*/ CButtonWnd* pStatusTemplate;
/*0x0370*/ CButtonWnd* pNeverBtnTemplate;
/*0x0378*/ CButtonWnd* pLootBtnTemplate;
/*0x0380*/ CButtonWnd* pLeaveBtnTemplate;
/*0x0388*/ CButtonWnd* pFreeGrabBtnTemplate;
/*0x0390*/ CCheckBoxWnd* pCheckBoxTemplate;
/*0x0398*/ CButtonWnd* pTextLinkTemplate;
/*0x03a0*/ CButtonWnd* pTextLinkPLTemplate;
/*0x03a8*/ CButtonWnd* pManageBtnTemplate;
/*0x03b0*/ CButtonWnd* pActionBtnTemplate;
/*0x03b8*/ int PLLNPCColumnWidth;
/*0x03bc*/ int CLLNPCColumnWidth;
/*0x03c0*/ int CLLRNDColumnWidth;
/*0x03c4*/ int CLLManageColumnWidth;
/*0x03c8*/ int CLLActionColumnWidth;
/*0x03cc*/ int PLLANColumnWidth;
/*0x03d0*/ int PLLAGColumnWidth;
/*0x03d4*/ int PLLNeverColumnWidth;
/*0x03d8*/ int CLLANColumnWidth;
/*0x03dc*/ int CLLAGColumnWidth;
/*0x03e0*/ int CLLNeverColumnWidth;
/*0x03e8*/ AdvancedLootItemList* pCLootList;
/*0x03f0*/ AdvancedLootItemList* pPLootList;
/*0x03f8*/ uint32_t LastUpdateTime;
/*0x03fc*/ uint32_t LastTransactionCheck;
/*0x0400*/ bool bPopupPending;
/*0x0404*/ int Unknown1;
/*0x0408*/ int Unknown2;
/*0x040c*/ bool bFirstTimeShowingCLL;
/*0x0410*/ int TotalLootCount;
/*0x0414*/ bool bAutoInventoryQuantity;
/*0x0418*/ int CLLActionMenu;
/*0x041c*/ int CLLActionMenuQty;
/*0x0420*/ int PLLActionMenu;
/*0x0424*/ bool bUnknown3;
/*0x0428*/  // sizeof 0x428
};
SIZE_CHECK(CAdvancedLootWnd, CAdvancedLootWnd_size);

//============================================================================
// CAlarmWnd
//============================================================================

class CAlarmWnd : public CSidlScreenWnd, public WndEventHandler
{
public:
	CAlarmWnd(CXWnd*);
	virtual ~CAlarmWnd();

	// virtual
	int OnProcessFrame() override;
	int WndNotification(CXWnd*, uint32_t, void*) override;

	// private
	EQLIB_OBJECT void DoNeverButton();
};

//============================================================================
// CAuraWnd
//============================================================================

class CAuraWnd : public CSidlScreenWnd
{
public:
	CAuraWnd(CXWnd*);
	virtual ~CAuraWnd();
};

//============================================================================
// CBandolierWnd
//============================================================================

constexpr size_t CBandolierWnd_size = 0x358; // jun09 -- half-lay guard (BOB policy: SIZE_CHECK on all non-trivial windows)
class [[offsetcomments]] CBandolierWnd : public CSidlScreenWnd, public WndEventHandler
{
public:
	CBandolierWnd();
	virtual ~CBandolierWnd();

/*0x2d8*/ CButtonWnd* pAddButton;
/*0x2e0*/ CButtonWnd* pDeleteButton;
/*0x2e8*/ CButtonWnd* pUseButton;
/*0x2f0*/ CButtonWnd* pMkHotButton;
/*0x2f8*/ CButtonWnd* pAutoSwapButton;
/*0x300*/ CButtonWnd* pDisplayButtons[MAX_BANDOLIER_SLOTS];
/*0x320*/ CListWnd* pWeaponSetList;
/*0x328*/ void* Unknown0x328; // jun09 NEW (PROVISIONAL): ptr (field-map 328:8:s)
/*0x330*/ void* Unknown0x330; // jun09 NEW (PROVISIONAL): ptr (ctor-unstored)
/*0x338*/ void* Unknown0x338; // jun09 NEW (PROVISIONAL): ptr (field-map 338:8:s)
/*0x340*/ void* Unknown0x340; // jun09 NEW (PROVISIONAL): ptr (field-map 340:8:s)
/*0x348*/ void* Unknown0x348; // jun09 NEW (PROVISIONAL): ptr (field-map 348:8:s)
/*0x350*/ int Unknown0x350;   // jun09 NEW (PROVISIONAL): int (field-map 350:4:s)
/*0x354*/ bool Unknown0x354;  // jun09 NEW (PROVISIONAL): bool (field-map 354:1:s)
/*0x358*/
};
SIZE_CHECK(CBandolierWnd, CBandolierWnd_size);

//============================================================================
// CBankWnd
//============================================================================

constexpr size_t CBankWnd_size = 0x2360; // jun09 op_new (CGFScreenWnd+WndEvt +0x10; verified component-map arrays@0x9d0/0x1cd8 + op_new 0x2360)

class [[offsetcomments]] CBankWnd : public CGFScreenWnd, public WndEventHandler
{
public:
/*0x3bc*/ int MoneyButtonIndex;
/*0x3c0*/ unsigned int NextRefreshTime;
/*0x3c4*/ bool bInventoryWasActive;
/*0x3c5*/ bool bRealEstateManagementWasActive;

private:
	// If New UI is enabled, these members will not be initialized, and the components will be used instead.
	// Use the accessors below instead of directly accessing the member variables.
/*0x3c8*/ CButtonWnd* m_moneyButtons[5]; // including shared plat
/*0x3f0*/ CLabel* m_bankerNameLabel;
/*0x3f8*/ CInvSlotWnd* m_invSlotWindows[NUM_BANK_SLOTS];
/*0x4b8*/ CLabel* m_sharedBankLabel;
/*0x4c0*/ CInvSlotWnd* m_sharedSlotWindows[NUM_SHAREDBANK_SLOTS];
/*0x500*/ CButtonWnd* m_doneButton; // DoneButton
/*0x508*/ CButtonWnd* m_changeButton; // ChangeButton
/*0x510*/ CButtonWnd* m_autoButton; // AutoButton
/*0x518*/ CButtonWnd* m_altStorageButton; // AltStorageButton
/*0x520*/ CButtonWnd* m_findItemButton; // FindItemButton
/*0x528*/ CButtonWnd* m_dragonHoardButton; // DragonHoard
/*0x530*/ CButtonWnd* m_tradeskillDepotButton; // TradeskillDepot

public:
	// CButtonWnd* MoneyButtons[5];
	CButtonWnd* _get_moneyButton(int index)
	{
		if (index < 0 || index >= 5)
			return nullptr;
		return GetNewUIEngineWindow(m_moneyButtons[index], moneyButtonComponents[index]);
	}
	__declspec(property(get = _get_moneyButton)) CButtonWnd* MoneyButtons[];

	// CLabel* BankerNameLabel;
	CLabel* _get_bankerNameLabel() { return GetNewUIEngineWindow(m_bankerNameLabel, bankerNameComponent); }
	__declspec(property(get = _get_bankerNameLabel)) CLabel* BankerNameLabel;

	// CInvSlotWnd* InvSlotWindows[NUM_BANK_SLOTS];
	CInvSlotWnd* _get_invSlotWindow(int index)
	{
		if (index < 0 || index >= NUM_BANK_SLOTS)
			return nullptr;
		return GetNewUIEngineWindow(m_invSlotWindows[index], invSlotComponents[index]);
	}
	__declspec(property(get = _get_invSlotWindow)) CInvSlotWnd* InvSlotWindows[];

	// CLabel* SharedBankLabel;
	CLabel* _get_sharedBankLabel() { return GetNewUIEngineWindow(m_sharedBankLabel, sharedBankLabelComponent); }
	__declspec(property(get = _get_sharedBankLabel)) CLabel* SharedBankLabel;

	// CInvSlotWnd* SharedSlotWindows[NUM_SHAREDBANK_SLOTS];
	CInvSlotWnd* _get_sharedSlotWindow(int index)
	{
		if (index < 0 || index >= NUM_SHAREDBANK_SLOTS)
			return nullptr;
		return GetNewUIEngineWindow(m_sharedSlotWindows[index], sharedSlotComponents[index]);
	}
	__declspec(property(get = _get_sharedSlotWindow)) CInvSlotWnd* SharedSlotWindows[];

	// CButtonWnd* DoneButton;
	CButtonWnd* _get_doneButton() { return GetNewUIEngineWindow(m_doneButton, doneButtonComponent); }
	__declspec(property(get = _get_doneButton)) CButtonWnd* DoneButton;

	// CButtonWnd* ChangeButton;
	CButtonWnd* _get_changeButton() { return GetNewUIEngineWindow(m_changeButton, changeButtonComponent); }
	__declspec(property(get = _get_changeButton)) CButtonWnd* ChangeButton;

	// CButtonWnd* AutoButton;
	CButtonWnd* _get_autoButton() { return GetNewUIEngineWindow(m_autoButton, autoButtonComponent); }
	__declspec(property(get = _get_autoButton)) CButtonWnd* AutoButton;

	// CButtonWnd* AltStorageButton;
	CButtonWnd* _get_altStorageButton() { return GetNewUIEngineWindow(m_altStorageButton, altStorageButtonComponent); }
	__declspec(property(get = _get_altStorageButton)) CButtonWnd* AltStorageButton;

	// CButtonWnd* FindItemButton;
	CButtonWnd* _get_findItemButton() { return GetNewUIEngineWindow(m_findItemButton, findItemButtonComponent); }
	__declspec(property(get = _get_findItemButton)) CButtonWnd* FindItemButton;

	// CButtonWnd* DragonHoardButton;
	CButtonWnd* _get_dragonHoardButton() { return GetNewUIEngineWindow(m_dragonHoardButton, dragonHoardButtonComponent); }
	__declspec(property(get = _get_dragonHoardButton)) CButtonWnd* DragonHoardButton;

	// CButtonWnd* TradeskillDepotButton;
	CButtonWnd* _get_tradeskillDepotButton() { return GetNewUIEngineWindow(m_tradeskillDepotButton, tradeskillDepotButtonComponent); }
	__declspec(property(get = _get_tradeskillDepotButton)) CButtonWnd* TradeskillDepotButton;

/*0x538*/ UIButtonComponent doneButtonComponent; // BNK_DoneButton
/*0x5e0*/ UIButtonComponent changeButtonComponent; // BNK_ChangeButton
/*0x688*/ UIButtonComponent autoButtonComponent; // BNK_AutoButton
/*0x730*/ UIButtonComponent altStorageButtonComponent; // BNK_AltStorageButton
/*0x7d8*/ UIButtonComponent findItemButtonComponent; // BNK_FindItemButton
/*0x880*/ UIButtonComponent dragonHoardButtonComponent; // BNK_DragonHoard
/*0x928*/ UIButtonComponent tradeskillDepotButtonComponent; // BNK_TradeskillDepot
/*0x9d0*/ UIButtonComponent moneyButtonComponents[5]; // BNK_Money%d / BNK_SharedMoney%d
/*0xd18*/ UIInvSlotComponent invSlotComponents[NUM_BANK_SLOTS]; // BNK_BankSlot%d
/*0x1cd8*/ UIInvSlotComponent sharedSlotComponents[NUM_SHAREDBANK_SLOTS]; // BNK_SharedBankSlot%d
/*0x2218*/ UILabelComponent sharedBankLabelComponent; // BNK_SharedBankLabel
/*0x22b8*/ UILabelComponent bankerNameComponent; // BNK_BankerName
/*0x2358*/ int BankSize;
/*0x235c*/

	CBankWnd(CXWnd*, CXStr);
	virtual ~CBankWnd();

	virtual int OnProcessFrame() override;
	virtual int PostDraw() override;
	virtual int WndNotification(CXWnd* pWnd, unsigned int uiMessage, void* pData) override;

	int GetNumBankSlots() const { return BankSize; }

	// private
	EQLIB_OBJECT long GetBankQtyFromCoinType(int);
	EQLIB_OBJECT void ClickedMoneyButton(int, int);
	EQLIB_OBJECT void UpdateMoneyDisplay();
};

SIZE_CHECK(CBankWnd, CBankWnd_size);

//============================================================================
// CBarterWnd
//============================================================================

struct BarterInventoryItem
{
	int ItemID;
	int Charges;
	int Qty;
	int ItemIcon;
	char Name[EQ_MAX_NAME];
};

struct CompensationItem
{
	int ItemID;
	int Quantity;
	int ItemIcon;
	char ItemName[EQ_MAX_NAME];
};

struct [[offsetcomments]] BarterBuyLine
{
/*0x0*/ int LineIndex;
/*0x4*/ bool Filled;
/*0x8*/ int ItemSought;
/*0xc*/ char ItemName[EQ_MAX_NAME];
/*0x4c*/ int ItemIcon;
/*0x50*/ int ItemQuantity;
/*0x54*/ bool Active;
/*0x58*/ uint32_t CoinPrice;
/*0x60*/ ArrayClass<CompensationItem> ItemPrice;
/*0x78*/ uint32_t BuyerPlayerZoneID;
/*0x7c*/ uint32_t BuyerPlayerUniqueID;
/*0x80*/ int BuyerZoneID;
/*0x84*/ char BuyerName[EQ_MAX_NAME];
/*0xc4*/
};

struct BarterSearchedItem
{
	char itemName[EQ_MAX_NAME];
	int itemID;
	int itemIcon;
	int searchIndex;
};

// sizeof(CBarterWnd) == 0x4c8 // test 2022-02-07

constexpr size_t CBarterWnd_size = 0x4d0; // jun09 -- half-lay guard
class [[offsetcomments]] CBarterWnd : public CSidlScreenWnd
{
public:
	enum BuyLineListColumns
	{
		Column_Active = 0,
		Column_Icon,
		Column_Name,
		Column_Count,
		Column_Offering,
	};

/*0x2d0*/ CStmlWnd* pstmlStatus; // StatusText
/*0x2d8*/ CListWnd* plistItems; // ItemSearchList
/*0x2e0*/ CListWnd* plistInventory; // InventoryList
/*0x2e8*/ CListWnd* plistCompensation; // CompensationList
/*0x2f0*/ CListWnd* plistBuyLines; // BuyLineList
/*0x2f8*/ CEditWnd* peditSearch; // ItemSearchEdit
/*0x300*/ CButtonWnd* pbtnSearch; // ItemSearchButton
/*0x308*/ CButtonWnd* pbtnAddItem; // InventoryAddButton
/*0x310*/ CButtonWnd* pbtnRemoveItem; // InventoryRemoveButton
/*0x318*/ CButtonWnd* pbtnPlat; // CompensationPlat
/*0x320*/ CButtonWnd* pbtnGold; // CompensationGold
/*0x328*/ CButtonWnd* pbtnSilver; // CompensationSilver
/*0x330*/ CButtonWnd* pbtnCopper; // CompensationCopper
/*0x338*/ CButtonWnd* pbtnCreate; // BuyLineAddButton
/*0x340*/ CEditWnd* peditCount; // CountEdit
/*0x348*/ CButtonWnd* pbtnRemoveLine; // BuyLineRemoveButton
/*0x350*/ CButtonWnd* pbtnUpdateLine; // BuyLineModifyButton
/*0x358*/ CButtonWnd* pbtnActiveLine; // BuyLineActiveButton
/*0x360*/ CButtonWnd* pbtnActivateAllLines; // BuyLineActivateAllButton
/*0x368*/ CButtonWnd* pbtnListLines; // ListLinesButton
/*0x370*/ CButtonWnd* pbtnClearStatus; // ClearStatusButton
/*0x378*/ CButtonWnd* pbtnStartStop; // StartStopButton
/*0x380*/ CButtonWnd* pbtnOfflineMode; // OfflineModeButton
/*0x388*/ CEditWnd* peditWelcome; // WelcomeEdit
/*0x390*/ CButtonWnd* pbtnUpdateWelcome; // UpdateWelcomeButton
/*0x398*/ CButtonWnd* pbtnRefreshInventory; // InventoryRefreshButton
/*0x3a0*/ CLayoutWnd* pLayout; // Layout
/*0x3a8*/ CLayoutWnd* pStatusLayout; // StatusLayout
/*0x3b0*/ uint32_t lastUpdateTime;
/*0x3b8*/ eqtime_t lastSearchTime;
/*0x3c0*/ uint32_t quantityRequest;
/*0x3c8*/ ArrayClass2<BarterInventoryItem> InventoryItems;
/*0x3e8*/ ArrayClass2<BarterSearchedItem> SearchedItems;
/*0x408*/ BarterBuyLine CurrentBuyLine;
/*0x4d0*/
};
SIZE_CHECK(CBarterWnd, CBarterWnd_size);

//============================================================================
// CBarterSearchWnd
//============================================================================

struct [[offsetcomments]] BarterBuyerSearchData
{
/*0x0*/ int ZoneID;
/*0x4*/ uint32_t UniquePlayerID;
/*0x8*/ uint32_t ZonePlayerID;
/*0xc*/ char Name[EQ_MAX_NAME];
/*0x4c*/
};

// Size: 3c8

constexpr size_t CBarterSearchWnd_size = 0x3d8; // jun09 -- half-lay guard
class [[offsetcomments]] CBarterSearchWnd : public CSidlScreenWnd
{
public:
	enum InventoryListColumns
	{
		Column_Icon = 0,
		Column_Name,
		Column_Count,

		Column_Max,
	};

/*0x2d0*/ HashTable<BarterBuyerSearchData> Buyers;
/*0x2e8*/ CListWnd* plistInventory; // InventoryList
/*0x2f0*/ CListWnd* plistBuyLines; // BuyLineList
/*0x2f8*/ CListWnd* plistDetails; // DetailsList
/*0x300*/ CEditWnd* peditSearch; // ItemSearchEdit
/*0x308*/ CButtonWnd* pbtnRefreshInventory; // RefreshInventoryButton
/*0x310*/ CButtonWnd* pbtnSearch; // SearchButton
/*0x318*/ CButtonWnd* pbtnWelcome; // WelcomeButon
/*0x320*/ CButtonWnd* pbtnGreeting; // GreetingButton
/*0x328*/ CButtonWnd* pbtnFind; // FindButton
/*0x330*/ CButtonWnd* pbtnHide; // HideButton
/*0x338*/ CButtonWnd* pbtnBuyLineInspectItem; // BuyLineInspectButton
/*0x340*/ CButtonWnd* pbtnCompensationInspectItem; // CompensationInspectButton
/*0x348*/ CButtonWnd* pbtnCompensationPreviewItem; // CompensationPreviewButton
/*0x350*/ CButtonWnd* pbtnSellButton; // SellButton
/*0x358*/ CButtonWnd* pbtnResetButton; // ResetButton
/*0x360*/ CComboWnd* pcomboPlayersCombo; // PlayerCombo
/*0x368*/ CLayoutWnd* pLayout; // Layout
/*0x370*/ CLayoutWnd* pMatchLayout; // BuyLineLayout
/*0x378*/ bool NeedsUpdate;
/*0x380*/ ArrayClass<BarterBuyLine> BuyLines;
/*0x398*/ ArrayClass2<BarterInventoryItem> InventoryItems;
/*0x3b8*/ int Unknown0x3b8;    // jun09 NEW (PROVISIONAL)
/*0x3bc*/ int Unknown0x3bc;    // jun09 NEW (PROVISIONAL, field-map 3bc:4)
/*0x3c0*/ void* Unknown0x3c0;  // jun09 NEW (PROVISIONAL, field-map 3c0:8 ptr)
/*0x3c8*/ int Unknown0x3c8;    // jun09 NEW (PROVISIONAL)
/*0x3cc*/ int Unknown0x3cc;    // jun09 NEW (PROVISIONAL, field-map 3cc:4)
/*0x3d0*/ int Unknown0x3d0;    // jun09 NEW (PROVISIONAL, field-map 3d0:4)
/*0x3d4*/ bool Unknown0x3d4;   // jun09 NEW (PROVISIONAL, field-map 3d4:1)
// (tail laid: Unknown0x3b8..0x3d4 -> sizeof 0x3d8)
};
SIZE_CHECK(CBarterSearchWnd, CBarterSearchWnd_size);

//============================================================================
// CBazaarSearchWnd
//============================================================================

struct BazaarTraderData
{
/*0x00*/ int ZoneID;
/*0x04*/ uint32_t UniquePlayerID;
/*0x08*/ uint32_t SpawnID;
/*0x0c*/ char Name[EQ_MAX_NAME];
/*0x4c*/
};

constexpr int MAX_BAZAAR_SEARCH_RESULTS = 200;

// size: 0xBC
struct [[offsetcomments]] BazaarSearchResults
{
	FORCE_SYMBOLS

/*0x0*/ char sellerName[EQ_MAX_NAME];
/*0x40*/ char itemName[EQ_MAX_NAME];
/*0x80*/ uint32_t uniqueSellerID;
/*0x84*/ uint32_t sellerID;
/*0x88*/ int zoneID = 0;
/*0x8c*/ int price = 0;
/*0x90*/ int position = -1;
/*0x94*/ int iconID = 0;
/*0x98*/ int itemID = 0;
/*0x9c*/ int count = 0;
/*0xa0*/ int statNum = 0;
/*0xa4*/ float statNumFloat = 0.f;
/*0xa8*/ EqItemGuid itemGuid;
/*0xbc*/
};

// CBazaarSearchWnd_size: 0x9720
constexpr size_t CBazaarSearchWnd_size = 0x9728; // jun09 -- half-lay guard
class [[offsetcomments]] CBazaarSearchWnd : public CSidlScreenWnd, public WndEventHandler
{
	FORCE_SYMBOLS

public:
	CBazaarSearchWnd(CXWnd*);
	virtual ~CBazaarSearchWnd();

	virtual void Activate() override;
	virtual int Draw() override;
	virtual int OnProcessFrame() override;
	virtual int WndNotification(CXWnd*, uint32_t, void*) override;
	virtual void Deactivate() override;

	EQLIB_OBJECT void HandleBazaarMsg(char*, int);

	EQLIB_OBJECT char* GetPriceString(unsigned long);
	EQLIB_OBJECT void UpdatePlayerCombo();
	EQLIB_OBJECT void UpdatePlayerUpdateButton(bool);
	EQLIB_OBJECT void AddItemtoList(char*, unsigned long, char*, int, int);
	EQLIB_OBJECT void doQuery();
	EQLIB_OBJECT void SortItemList(int);
	EQLIB_OBJECT void UpdateComboButtons();

	//----------------------------------------------------------------------------
	// data members

/*0x2d4*/ uint8_t Unknown0x2d4[0x28];   // jun09 (PROVISIONAL): method-rich embedded sub-object, methods @0x140148210/340/450/560/690/7a0/8b0 (likely search-filter/input sub-control)
/*0x2fc*/ uint64_t Unknown0x2fc;        // jun09 (PROVISIONAL): ctor qword store
/*0x304*/ uint16_t Unknown0x304;        // jun09 (PROVISIONAL): ctor uint16 store
/*0x307*/ bool Unknown0x307;            // jun09 (PROVISIONAL): ctor bool store (+pad to 0x308)
/*0x308*/ BazaarSearchResults searchResults[MAX_BAZAAR_SEARCH_RESULTS];
/*0x95e8*/ HashTable<BazaarTraderData> Traders;
/*0x9600*/ CListWnd* pItemList; // BZR_ItemList
/*0x9608*/ CButtonWnd* pQueryButton;
/*0x9610*/ CButtonWnd* pWelcomeButton;
/*0x9618*/ CButtonWnd* pUpdatePlayerButton;
/*0x9620*/ CButtonWnd* pRequestItemButton;
/*0x9628*/ CButtonWnd* pRequestPreviewButton;
/*0x9630*/ CButtonWnd* pFindTraderButton;
/*0x9638*/ CButtonWnd* pHideTradersButton;
/*0x9640*/ CButtonWnd* pDefaultButton;
/*0x9648*/ CButtonWnd* pBuyButton;
/*0x9650*/ CLabelWnd* pItemNameLabel;
/*0x9658*/ CLabelWnd* pPlayersLabel;
/*0x9660*/ CLabelWnd* pItemSlotLabel;
/*0x9668*/ CLabelWnd* pStatSlotLabel;
/*0x9670*/ CLabelWnd* pRaceSlotLabel;
/*0x9678*/ CLabelWnd* pClassSlotLabel;
/*0x9680*/ CLabelWnd* pItemTypeLabel;
/*0x9688*/ CLabelWnd* pSearchResultLabel;
/*0x9690*/ CLabelWnd* pMaxPriceLabel;
/*0x9698*/ CLabelWnd* pMinPriceLabel;
/*0x96a0*/ CLabelWnd* pItemPrestigeLabel;
/*0x96a8*/ CLabelWnd* pItemAugmentLabel;
/*0x96b0*/ CComboWnd* pItemSlotCombobox;
/*0x96b8*/ CComboWnd* pStatSlotCombobox;
/*0x96c0*/ CComboWnd* pRaceSlotCombobox;
/*0x96c8*/ CComboWnd* pClassSlotCombobox;
/*0x96d0*/ CComboWnd* pItemTypeCombobox;
/*0x96d8*/ CComboWnd* pPlayersCombobox;
/*0x96e0*/ CComboWnd* pItemPrestigeCombobox;
/*0x96e8*/ CComboWnd* pItemAugmentCombobox;
/*0x96f0*/ CEditWnd* pItemNameInput;
/*0x96f8*/ CEditWnd* pMaxPriceInput;
/*0x9700*/ CEditWnd* pMinPriceInput;
/*0x9708*/ CEditWnd* pMaxLevelInput;
/*0x9710*/ CEditWnd* pMinLevelInput;
/*0x9718*/ CEditWnd* pMaxResultsPerTraderInput;
/*0x9720*/ BYTE Unknown0x92C8[0x8];
/*0x9728*/
};
SIZE_CHECK(CBazaarSearchWnd, CBazaarSearchWnd_size);

inline namespace deprecated {
	using BAZAARSEARCHWND DEPRECATE("Use CBazaarSearchWnd instead of BAZAARSEARCHWND") = CBazaarSearchWnd;
	using PBAZAARSEARCHWND DEPRECATE("Use CBazaarSearchWnd* instead of PBAZAARSEARCHWND") = CBazaarSearchWnd*;
}

//============================================================================
// CBazaarWnd
//============================================================================

constexpr int MAX_BAZAAR_ITEMS = 200;

// size: 0xdf0
constexpr size_t CBazaarWnd_size = 0xe00; // jun09 -- half-lay guard (BOB policy: SIZE_CHECK on all non-trivial windows)
class [[offsetcomments]] CBazaarWnd : public CSidlScreenWnd, public WndEventHandler
{
	FORCE_SYMBOLS

public:
	ItemContainer& GetBazaarItems() { return bazaarItems; }

/*0x2d4*/ int selectedSlot;
/*0x2d8*/ int curBazaarIndex;
/*0x2dc*/ int curItemPrice;
/*0x2e0*/ int moneyBtnIndex;
/*0x2e8*/ ItemPtr selectedItem;
/*0x2f8*/ CButtonWnd* startButton;
/*0x300*/ CButtonWnd* endButton;
/*0x308*/ CButtonWnd* clearButton;
/*0x310*/ CButtonWnd* setPriceButton; // BZW_SetPrice_Button
/*0x318*/ CButtonWnd* listButton;
/*0x320*/ uint32_t unknown0x25c;
/*0x328*/ CButtonWnd* addButton;
/*0x330*/ CButtonWnd* removeButton;
/*0x338*/ CButtonWnd* moneyButton[4]; // NumMoneySlotTypes
/*0x358*/ CButtonWnd* offlineModeButton;
/*0x360*/ CStmlWnd* bazaarText;
/*0x368*/ CInvSlotWnd* bazaarSlots[MAX_BAZAAR_ITEMS]; // BZR_BazaarSlot%d
/*0x9a8*/ ItemContainer bazaarItems;
/*0x9d0*/ uint32_t myPrice[MAX_BAZAAR_ITEMS];
/*0xcf0*/ bool bItemActive[MAX_BAZAAR_ITEMS];
/*0xdb8*/ char iniFilename[64];
/*0xdf8*/ bool bIsMerchant;
/*0xe00*/
};
SIZE_CHECK(CBazaarWnd, CBazaarWnd_size);

//============================================================================
// CBodyTintWnd
//============================================================================

class [[offsetcomments]] CBodyTintWnd : public CSidlScreenWnd, public WndEventHandler
{
public:
	CBodyTintWnd(CXWnd*);
	virtual ~CBodyTintWnd();

	virtual int OnProcessFrame() override;
	virtual int WndNotification(CXWnd*, uint32_t, void*) override;

	EQLIB_OBJECT char* BuildRBGTooltip(unsigned long, char* const);
	EQLIB_OBJECT unsigned long GetButtonTint(int);
	EQLIB_OBJECT unsigned long GetItemTint(int);
	EQLIB_OBJECT void GetReagentCount();
	EQLIB_OBJECT void GetTintChangeCount();
	EQLIB_OBJECT void ResetToOrigBodyTints();
	EQLIB_OBJECT void SetSlotLabels(bool);
	EQLIB_OBJECT void StoreModifiedBodyTints();
	EQLIB_OBJECT void UpdateLabelsAndButtons();
	EQLIB_OBJECT void UpdateLocalTintColor(unsigned long);
	EQLIB_OBJECT void UpdateMaterialTintLocal(unsigned long);
};

//============================================================================
// CBookWnd
//============================================================================

class CBookWnd : public CSidlScreenWnd
{
public:
	CBookWnd(CXWnd*);
	virtual ~CBookWnd();

	virtual int HandleKeyboardMsg(uint32_t, uint32_t, bool) override;
	virtual int WndNotification(CXWnd*, uint32_t, void*) override;

	EQLIB_OBJECT bool CheckBook(EQ_Note*);
	EQLIB_OBJECT void SetBook(char*);
	EQLIB_OBJECT void CleanPages();
	EQLIB_OBJECT void DisplayText();
	EQLIB_OBJECT void ProcessText();
	EQLIB_OBJECT void ShowButtons();
};

//============================================================================
// CBuffWindow
//============================================================================

enum BuffWindowType
{
	BuffWindowStandard,
	BuffWindowShortDuration,
};

constexpr size_t CBuffWindow_size = 0x350; // jun09 op_new CONFIRMED @0x14019e523 (BOB-gated); cohort@0x2d0, own@0x2d4 (bOldIconArrangement), highest 0x34c->0x350

class [[offsetcomments]] CBuffWindow : public CSidlScreenWnd, public WndEventHandler
{
	FORCE_SYMBOLS

public:
	CBuffWindow(CXWnd*, BuffWindowType);
	virtual ~CBuffWindow();

	virtual CXSize GetMinSize(bool) const override;
	virtual int OnProcessFrame() override;
	virtual int PostDraw() override;
	virtual int WndNotification(CXWnd*, uint32_t, void*) override;

	BuffWindowPlayerBuffInfoWrapper GetBuffInfo(int buffIndex) const
	{
		if (buffIndex >= 0 && buffIndex < GetMaxBuffs())
			return BuffWindowPlayerBuffInfoWrapper(buffIndex, &Buffs[buffIndex]);

		return BuffWindowPlayerBuffInfoWrapper(-1, nullptr);
	}

	BuffWindowPlayerBuffInfoWrapper GetBuffInfoBySpellID(int spellID) const
	{
		int buffIndex = 0;
		for (const PlayerBuffInfo& pbi : Buffs)
		{
			if (pbi.SpellID == spellID)
				return BuffWindowPlayerBuffInfoWrapper(buffIndex, &pbi);

			++buffIndex;
		}

		return BuffWindowPlayerBuffInfoWrapper(-1, nullptr);
	}

	int GetTotalBuffCount() const
	{
		int count = 0;
		for (const PlayerBuffInfo& pbi : Buffs)
		{
			if (pbi.SpellID > 0)
				++count;
		}

		return count;
	}

	int GetMaxBuffs() const { return std::min(lastEffectSlot - firstEffectSlot, Buffs.GetSize()); }

	int GetBuff(int buffIndex) const { return GetBuffInfo(buffIndex).GetSpellID(); }
	int GetBuffTimer(int buffIndex) const { return GetBuffInfo(buffIndex).GetBuffTimer(); }
	const char* GetCasterName(int buffIndex) const { return GetBuffInfo(buffIndex).GetCaster(); }
	CButtonWnd* GetBuffButton(int buffIndex) const { return GetBuffInfo(buffIndex).GetBuffButton(); }
	CTextureAnimation* GetBuffIcon(int buffIndex) const { return GetBuffInfo(buffIndex).GetBuffIcon(); }
	CTextObjectInterface* GetTimeRemainingText(int buffIndex) const { return GetBuffInfo(buffIndex).GetTimeRemainingText(); }
	CTextObjectInterface* GetCounterText(int buffIndex) const { return GetBuffInfo(buffIndex).GetCounterText(); }
	CTextObjectInterface* GetLimitUseText(int buffIndex) const { return GetBuffInfo(buffIndex).GetLimitUseText(); }

	using BuffIterator = PlayerBuffInfoWrapper::Iterator<BuffWindowPlayerBuffInfoWrapper>;
	mq::IteratorRange<BuffIterator> GetBuffRange() const { return mq::make_iterator_range(BuffIterator(Buffs, 0), BuffIterator(Buffs, Buffs.GetSize())); }

	#pragma region Deprecated Accessors
	//
	// Deprecated accessors
	//

	// spellIds -> GetBuff()
	DEPRECATE("Use GetBuff(index) or GetBuffInfo(index) insetad of spellIds[index]")
	int get_DeprecatedBuff(int buffIndex) const { return GetBuffInfo(buffIndex).GetSpellID(); }
	__declspec(property(get = get_DeprecatedBuff)) int spellIds[];

	// BuffId -> GetBuff()
	DEPRECATE("Use GetBuff(index) or GetBuffInfo(index) insetad of BuffId[index]")
		int get_DeprecatedBuff2(int buffIndex) const { return GetBuffInfo(buffIndex).GetSpellID(); }
	__declspec(property(get = get_DeprecatedBuff2)) int BuffId[];

	// buffTimers -> GetBuffTimer()
	DEPRECATE("Use GetBuffTimer(index) or GetBuffInfo(index) instead of buffTimers[index]")
	int get_DeprecatedBuffTimer(int buffIndex) const { return GetBuffInfo(buffIndex).GetBuffTimer(); }
	__declspec(property(get = get_DeprecatedBuffTimer)) int buffTimers[];

	// BuffTimer -> GetBuffTimer()
	DEPRECATE("Use GetBuffTimer(index) or GetBuffInfo(index) instead of BuffTimer[index]")
	int get_DeprecatedBuffTimer2(int buffIndex) const { return GetBuffInfo(buffIndex).GetBuffTimer(); }
	__declspec(property(get = get_DeprecatedBuffTimer2)) int BuffTimer[];

	// whoCastHash -> Removed
	DEPRECATE("whoCastHash was removed. Use GetBuffInfoBySpellID(spellID).GetCasterName() instead")
	HashTable<CXStr> get_DeprecatedWhoCastHash() const { return HashTable<CXStr>(); }
	__declspec(property(get = get_DeprecatedWhoCastHash)) HashTable<CXStr> whoCastHash;

	// pBuffButtons -> GetBuffButton()
	DEPRECATE("Use GetBuffButton(index) or GetBuffInfo(index) isntead of pBuffButtons[index]")
	CButtonWnd* get_DeprecatedBuffButton(int buffIndex) const { return GetBuffInfo(buffIndex).GetBuffButton(); }
	__declspec(property(get = get_DeprecatedBuffButton)) CButtonWnd* pBuffButtons[];

	// pBuff -> GetBuffButton()
	DEPRECATE("Use GetBuffButton(index) or GetBuffInfo(index) isntead of pBuff[index]")
	CButtonWnd* get_DeprecatedBuffButton2(int buffIndex) const { return GetBuffInfo(buffIndex).GetBuffButton(); }
	__declspec(property(get = get_DeprecatedBuffButton2)) CButtonWnd* pBuff[];

	ALT_VMEMBER_GETTER_DEPRECATED(int, lastEffectSlot, MaxLongBuffs, "CBuffWindow: Use lastEffectSlot instead of MaxLongBuffs");
	ALT_VMEMBER_GETTER_DEPRECATED(int, maxBuffButtons, MaxShortBuffs, "CBuffWindow: Use maxBuffButtons instead of MaxShortBuffs");
	#pragma endregion

	//----------------------------------------------------------------------------
	// data members

/*0x2d4*/ bool bOldIconArrangement;
/*0x2d8*/ CTextureAnimation* ptaBlueIconBackground;
/*0x2e0*/ CTextureAnimation* ptaRedIconBackground;
/*0x2e8*/ CTextureAnimation* ptaYellowIconBackground;
/*0x2f0*/ SoeUtil::Array<BuffWindowPlayerBuffInfo> Buffs;
/*0x310*/ SoeUtil::Map<int, CButtonWnd*> ButtonMap;
/*0x320*/ uint32_t nextRefreshTime;
/*0x324*/ int initWindowWidth;
/*0x328*/ int initWindowHeight;
/*0x32c*/ BuffWindowType buffWindowType;
/*0x330*/ int firstEffectSlot;
/*0x334*/ int lastEffectSlot; // was: MaxLongBuffs 0x2a (NUM_LONG_BUFFS)
/*0x338*/ int maxBuffButtons; // was: MaxShortBuffs 0x37 (NUM_SHORT_BUFFS)
/*0x33c*/ int contextMenuId;
/*0x340*/ CXWnd* selectedButtonWnd; // this field doesn't always appear to be initialize
/*0x348*/ bool updatedMenuItems;
/*0x34c*/ int lastBuffRefreshTime;
/*0x350*/
};

SIZE_CHECK(CBuffWindow, CBuffWindow_size);

//============================================================================
// CCastingWnd
//============================================================================

class CCastingWnd : public CGFScreenWnd, public WndEventHandler
{
public:
	CCastingWnd(CXWnd*);
	virtual ~CCastingWnd();
};

//============================================================================
// CCastSpellWnd
//============================================================================

class CSpellGemWnd;

// size: 0x3e0
constexpr size_t CCastSpellWnd_size = 0x3f0; // jun09 -- half-lay guard
class [[offsetcomments]] CCastSpellWnd : public CSidlScreenWnd, public PopDialogHandler, public WndEventHandler
{
	FORCE_SYMBOLS

public:
	CCastSpellWnd(CXWnd*);
	~CCastSpellWnd();

	virtual int OnProcessFrame() override;
	virtual int PostDraw() override;
	virtual int WndNotification(CXWnd*, uint32_t, void*) override;

	static EQLIB_OBJECT void Unmemorize(int);
	static EQLIB_OBJECT void UnmemorizeList(int*, int);
	EQLIB_OBJECT void ForgetMemorizedSpell(int);
	EQLIB_OBJECT void HandleSpellInfoDisplay(CXWnd*);
	EQLIB_OBJECT void HandleSpellLeftClick(int);
	EQLIB_OBJECT void HandleSpellRightClick(int);
	EQLIB_OBJECT void KeyMapUpdated();
	EQLIB_OBJECT void RecacheCategorizedSpells();
	EQLIB_OBJECT void RecacheLoadoutContextMenu();
	EQLIB_OBJECT void SpellBookDeactivating();
	EQLIB_OBJECT bool IsBardSongPlaying();
	EQLIB_OBJECT unsigned long GetSpellGemColor(EQ_Spell*);
	EQLIB_OBJECT void CategorizeSpell(int, int, int, int);
	EQLIB_OBJECT void ClearSpellCategories();
	EQLIB_OBJECT void Init();
	EQLIB_OBJECT void MakeSpellSelectMenu();
	EQLIB_OBJECT void RefreshSpellGemButtons();
	EQLIB_OBJECT void UpdateSpellGems(int);
	EQLIB_OBJECT void UpdateSpellGemTooltips(int);

	struct SpellCategoryData
	{
		int id;
		int level;
	};

	struct SpellCategoryMinor
	{
		int id;
		char name[64];
		ArrayClass<SpellCategoryData*> spells;
	};

	struct SpellCategoryMajor
	{
		int id;
		char name[64];
		ArrayClass<SpellCategoryMinor*> subcategories;
	};

	//----------------------------------------------------------------------------
	// data members

/*0x2e0*/ CPopDialogWnd* pCurrentPop;
/*0x2e8*/ uint32_t lastRefresh;
/*0x2ec*/ bool bHorizontal;
/*0x2f0*/ CSpellGemWnd* SpellSlots[NUM_SPELL_GEMS]; // CSPW_Spell%d
/*0x360*/ CButtonWnd* pBtnSpellBook; // CSPW_SpellBook
/*0x368*/ CButtonWnd* pBtnSpellBookH; // CSPW_SpellBookH
/*0x370*/ CButtonWnd* pBtnSpellBookV; // CSPW_SpellBookV
/*0x378*/ CXWnd* pHorizontalTemplate; // CSPW_HorizontalOrientationTemplate
/*0x380*/ CXWnd* pVerticalTemplate; // CSPW_VerticalOrientationTemplate
/*0x388*/ CTileLayoutWnd* pSpellGemLayout; // CSPW_SpellGemLayout
/*0x390*/ CXWnd* pHorizontalBook; // CSPW_HorizontalOrientationBook
/*0x398*/ CXWnd* pVerticalBook; // CSPW_VerticalOrientationBook
/*0x3a0*/ ArrayClass<SpellCategoryMajor*> CategorizedSpells;
/*0x3b8*/ int SpellSelectMenuID;
/*0x3bc*/ int GemMemming;
/*0x3c0*/ int LoadoutMenu;
/*0x3c4*/ int SaveLoadoutIndex;
/*0x3c8*/ int Unknown0x3c8; // jun09 NEW (PROVISIONAL): int menu-id (ctor MOV [+0x3c8],-1); inserted before context menus
/*0x3d0*/ CContextMenu* pMainMenu;
/*0x3d8*/ CContextMenu* pLoadMenu;
/*0x3e0*/ CContextMenu* pSaveMenu;
/*0x3e8*/ CContextMenu* pDeleteMenu;
/*0x3f0*/
};
SIZE_CHECK(CCastSpellWnd, CCastSpellWnd_size);

inline namespace deprecated {
	using EQCASTSPELLWINDOW DEPRECATE("Use CCastSpellWnd instead of EQCASTSPELLWINDOW") = CCastSpellWnd;
	using PEQCASTSPELLWINDOW DEPRECATE("Use CCastSpellWnd* instead of PEQCASTSPELLWINDOW") = CCastSpellWnd*;
}

//============================================================================
// CCharacterCreation
//============================================================================

class CCharacterCreation : public CSidlScreenWnd
{
public:
	CCharacterCreation(CXWnd*);
	virtual ~CCharacterCreation();

	virtual int Draw() override;
	virtual int OnProcessFrame() override;
	virtual int WndNotification(CXWnd*, uint32_t, void*) override;

	EQLIB_OBJECT void ActivateScreen(int);
	EQLIB_OBJECT void DoBackButton();
	EQLIB_OBJECT void DoNextButton();
	EQLIB_OBJECT void HandleNameApprovalResponse(int);
	EQLIB_OBJECT void NameGenerated(char*);
	EQLIB_OBJECT bool IsLackingExpansion(bool, bool);
	EQLIB_OBJECT char* GetCharCreateText(char*, int, int, int, int);
	EQLIB_OBJECT int GetClassButtonIndex(int);
	EQLIB_OBJECT int GetRaceButtonIndex(int);
	EQLIB_OBJECT void DoStatButton(int);
	EQLIB_OBJECT void FinalizeNewPCAndSendToWorld();
	EQLIB_OBJECT void Init();
	EQLIB_OBJECT void InitNewPC();
	EQLIB_OBJECT void InitStartingCities();
	EQLIB_OBJECT void InitStats(bool);
	EQLIB_OBJECT void RandomizeCharacter(bool, bool);
	EQLIB_OBJECT void RandomizeFacialFeatures();
	EQLIB_OBJECT void SelectedClassButton(int);
	EQLIB_OBJECT void SelectedRaceButton(int);
	EQLIB_OBJECT void SelectStartingCity(int);
	EQLIB_OBJECT void SetNewPCDeityFromBtnIndex(int);
	EQLIB_OBJECT void SetPlayerAppearanceFromNewPC();
	EQLIB_OBJECT void SubmitNameToWorld();
	EQLIB_OBJECT void UpdatePlayerFromNewPC();
	EQLIB_OBJECT void UpdateScreenZeroButtons(bool);
};

//============================================================================
// CCharacterListWnd
//============================================================================

class CCharacterListWnd : public CSidlScreenWnd, public PopDialogHandler, public WndEventHandler
{
public:
	CCharacterListWnd(CXWnd*);
	virtual ~CCharacterListWnd();

	virtual int Draw() override;
	virtual int OnProcessFrame() override;
	virtual int WndNotification(CXWnd*, uint32_t, void*) override;

	EQLIB_OBJECT int IsEmptyCharacterSlot(int);
	EQLIB_OBJECT int IsValidCharacterSelected();
	EQLIB_OBJECT int NumberOfCharacters();
	EQLIB_OBJECT unsigned char IsEvil(int, int, int);
	EQLIB_OBJECT void DeleteCharacter();
	EQLIB_OBJECT void EnterExplorationMode();
	EQLIB_OBJECT void EnterWorld();
	EQLIB_OBJECT void LeaveExplorationMode();
	EQLIB_OBJECT void Quit();
	EQLIB_OBJECT void UpdateList(bool bForceUpdate = false);
	EQLIB_OBJECT void SelectCharacter(int charindex, bool bSwitchVisually = true, bool bForceUpdate = false /*dont mess with this*/);
	EQLIB_OBJECT void SetLoadZonePlayerLocation();
	EQLIB_OBJECT void SwitchModel(PlayerClient*, unsigned char, int, unsigned char, unsigned char);
	EQLIB_OBJECT void UpdateButtonNames();
	EQLIB_OBJECT void CreateExplorationModePlayers();
	EQLIB_OBJECT void EnableButtons(bool);
	EQLIB_OBJECT void EnableEqMovementCommands(bool);
	EQLIB_OBJECT void Init();
	EQLIB_OBJECT void RemoveExplorationModePlayers();
	EQLIB_OBJECT void SetLocationByClass(PlayerClient*, bool, int);
};

//============================================================================
// CChatWindowManager
//============================================================================

constexpr int MAX_CHAT_WINDOWS = 32;

// size: 0x700
constexpr size_t CChatWindowManager_size = 0x798; // @sizeof :: 2026-06-09 (test) -- ctor 0x1403b4940 op_new(0x798) FUN_14019d420; pinst 0x140f41660

class [[offsetcomments]] CChatWindowManager
{
public:
	//EQLIB_OBJECT CChatWindowManager();
	//EQLIB_OBJECT ~CChatWindowManager();

	EQLIB_OBJECT COLORREF GetRGBAFromIndex(int);
	EQLIB_OBJECT int InitContextMenu(CChatWindow*);
	EQLIB_OBJECT void FreeChatWindow(CChatWindow*);
	EQLIB_OBJECT CChatWindow* GetLockedActiveChatWindow() const; // might be returning CChatContainerWindow now
	EQLIB_OBJECT void SetLockedActiveChatWindow(CChatWindow*);
	EQLIB_OBJECT void CreateChatWindow(CXWnd* pParentWnd, int ID, char* Name, int Language, int DefaultChannel,
		int ChatChannel, char* szTellTarget, int FontStyle, bool bScrollbar, bool bHighLight, COLORREF HighlightColor);

	//EQLIB_OBJECT CChatWindow* GetActiveChatWindow();
	//EQLIB_OBJECT CChatWindow* GetChannelMap(int);
	//EQLIB_OBJECT CXStr GetAllVisibleText(CXStr);
	//EQLIB_OBJECT int GetChannelFromColor(int);
	//EQLIB_OBJECT void Activate();
	//EQLIB_OBJECT void AddText(CXStr, int);
	//EQLIB_OBJECT void ClearChannelMap(int);
	//EQLIB_OBJECT void ClearChannelMaps(CChatWindow*);
	//EQLIB_OBJECT void CreateChatWindow();
	//EQLIB_OBJECT void Deactivate();
	//EQLIB_OBJECT void LoadChatInis();
	//EQLIB_OBJECT void Process();
	//EQLIB_OBJECT void SetActiveChatWindow(CChatWindow*);
	//EQLIB_OBJECT void SetChannelMap(int, CChatWindow*);
	//EQLIB_OBJECT void UpdateContextMenus(CChatWindow*);
	//EQLIB_OBJECT void UpdateTellMenus(CChatWindow*);

// jun09 HEAD (ctor 0x1403b4940, this=RBX): BOB-gated first-hand (Create/Free) + ctor-confirmed. sizeof 0x798.
/*0x0000*/ CChatContainerWindow* ChatContainerWindows[MAX_CHAT_WINDOWS]; // 0x000..0x100 (ctor memset @4963)
/*0x0100*/ SoeUtil::List<CChatWindow*> ChatWindowList;                    // 0x100..0x120 (head &0x14089ec38 @496f)
/*0x0120*/ CChatWindow* ChatWindows[MAX_CHAT_WINDOWS];                    // 0x120..0x220 (ctor memset @49a1; Create LEA RDI+RAX*8)
/*0x0220*/ int Unknown7;
/*0x0224*/ int NumWindows;                                               // Create 5e05 write; Free 6387 loop bound
/*0x0228*/ int LockedWindow;
/*0x022c*/ int ActiveWindow;                                             // Free 6417 write
/*0x0230*/ int CurrentActive; // CChat::GetActiveChatWindow
/*0x0234*/ int LockedActive;  // Free 63cc write=-1; CChatManager__GetLockedActiveChatWindow
/*0x0238*/ CChatWindow* ChannelMap[107]; // NUM_CHAT_CHANNELS=107 jun09 (was 105; 0x238..0x590, lazy-init). AM-REVIEW
// ---- TAIL 0x590..0x794 (context-menu block, SHUFFLED vs upstream) still poisoned below; careful padding-aware lay pending (names deferred per gate). ----
// jun09 context-menu TAIL (0x590..0x794) -- SHUFFLED vs upstream; offsets+types binary-verified 3 ways
// (InitContextMenu 0x1403b7500 + ctor 0x1403b4940 init + provisional map). NAMES deferred (Unknown0xNNN) per
// gate ruling -> derive from menu AddMenuItem label strings (operand-text scan) in a naming pass. sizeof 0x798.
/*0x0590*/ CContextMenu* Unknown0x590;
/*0x0598*/ int Unknown0x598;
/*0x059c*/ int Unknown0x59c;
/*0x05a0*/ int Unknown0x5a0;
/*0x05a4*/ int Unknown0x5a4;
/*0x05a8*/ int Unknown0x5a8;
/*0x05ac*/ int Unknown0x5ac;
/*0x05b0*/ int Unknown0x5b0;
/*0x05b8*/ CContextMenu* Unknown0x5b8;
/*0x05c0*/ int Unknown0x5c0;
/*0x05c8*/ CContextMenu* Unknown0x5c8;
/*0x05d0*/ int Unknown0x5d0;
/*0x05d4*/ int Unknown0x5d4;
/*0x05d8*/ int Unknown0x5d8;
/*0x05dc*/ int Unknown0x5dc;
/*0x05e0*/ CContextMenu* Unknown0x5e0;
/*0x05e8*/ int Unknown0x5e8;
/*0x05f0*/ CContextMenu* Unknown0x5f0;
/*0x05f8*/ int Unknown0x5f8;
/*0x0600*/ CContextMenu* Unknown0x600;
/*0x0608*/ int Unknown0x608;
/*0x0610*/ CContextMenu* Unknown0x610;
/*0x0618*/ int Unknown0x618;
/*0x061c*/ int Unknown0x61c;
/*0x0620*/ CContextMenu* Unknown0x620;
/*0x0628*/ int Unknown0x628;
/*0x0630*/ CContextMenu* Unknown0x630;
/*0x0638*/ int Unknown0x638;
/*0x0640*/ CContextMenu* Unknown0x640;
/*0x0648*/ int Unknown0x648;
/*0x0650*/ CContextMenu* Unknown0x650;
/*0x0658*/ int Unknown0x658;
/*0x0660*/ CContextMenu* Unknown0x660;
/*0x0668*/ int Unknown0x668;
/*0x0670*/ CContextMenu* Unknown0x670;
/*0x0678*/ int Unknown0x678;
/*0x0680*/ CContextMenu* Unknown0x680;
/*0x0688*/ int Unknown0x688;
/*0x0690*/ CContextMenu* Unknown0x690;
/*0x0698*/ int Unknown0x698;
/*0x06a0*/ CContextMenu* Unknown0x6a0;
/*0x06a8*/ int Unknown0x6a8;
/*0x06b0*/ CContextMenu* Unknown0x6b0;
/*0x06b8*/ int Unknown0x6b8;
/*0x06c0*/ CContextMenu* Unknown0x6c0;
/*0x06c8*/ int Unknown0x6c8;
/*0x06d0*/ CContextMenu* Unknown0x6d0;
/*0x06d8*/ int Unknown0x6d8;
/*0x06e0*/ CContextMenu* Unknown0x6e0;
/*0x06e8*/ int Unknown0x6e8;
/*0x06f0*/ CContextMenu* Unknown0x6f0;
/*0x06f8*/ int Unknown0x6f8;
/*0x0700*/ CContextMenu* Unknown0x700;
/*0x0708*/ int Unknown0x708;
/*0x070c*/ int Unknown0x70c;
/*0x0710*/ int Unknown0x710;
/*0x0714*/ int Unknown0x714;
/*0x0718*/ uint64_t Unknown0x718; // ctor sub-object @0x718 (LEA+init); 8 bytes
/*0x0720*/ int Unknown0x720;
/*0x0728*/ CContextMenu* Unknown0x728;
/*0x0730*/ int Unknown0x730;
/*0x0734*/ int Unknown0x734;
/*0x0738*/ CContextMenu* Unknown0x738;
/*0x0740*/ int Unknown0x740;
/*0x0744*/ int Unknown0x744;
/*0x0748*/ CContextMenu* Unknown0x748;
/*0x0750*/ int Unknown0x750;
/*0x0754*/ int Unknown0x754;
/*0x0758*/ CContextMenu* Unknown0x758;
/*0x0760*/ int Unknown0x760;
/*0x0764*/ int Unknown0x764;
/*0x0768*/ CContextMenu* Unknown0x768;
/*0x0770*/ int Unknown0x770;
/*0x0774*/ int Unknown0x774;
/*0x0778*/ CContextMenu* Unknown0x778;
/*0x0780*/ int Unknown0x780;
/*0x0784*/ int Unknown0x784;
/*0x0788*/ CContextMenu* Unknown0x788;
/*0x0790*/ int Unknown0x790;
/*0x0794*/ int Unknown0x794;
/*0x0798*/  // tail end; sizeof 0x798
};
SIZE_CHECK(CChatWindowManager, CChatWindowManager_size);

//============================================================================
// CChatWindow
//============================================================================

class [[offsetcomments]] CChatContainerWindow : public CSidlScreenWnd
{
	FORCE_SYMBOLS

public:
	EQLIB_OBJECT CChatContainerWindow(CXWnd* parent);
	EQLIB_OBJECT virtual ~CChatContainerWindow();

};

//============================================================================
// CChatWindow
//============================================================================

class [[offsetcomments]] CChatWindow : public CSidlScreenWnd
{
	FORCE_SYMBOLS

public:
	EQLIB_OBJECT CChatWindow(CXWnd* parent);
	EQLIB_OBJECT virtual ~CChatWindow();

	//----------------------------------------------------------------------------
	// virtuals

	virtual int Draw() override;
	virtual int HandleRButtonDown(const CXPoint&, uint32_t) override;
	virtual int OnProcessFrame() override;
	virtual int WndNotification(CXWnd* sender, uint32_t message, void* data) override;
	virtual int OnSetFocus(CXWnd* wnd) override;
	virtual int OnKillFocus(CXWnd* wnd) override;
	virtual void Deactivate() override;

	EQLIB_OBJECT void Clear();
	EQLIB_OBJECT void AddHistory(CXStr Text);
	EQLIB_OBJECT CEditWnd* GetInputWnd() { return InputWnd; }
	EQLIB_OBJECT CStmlWnd* GetOutputWnd() { return OutputWnd; }

	//EQLIB_OBJECT CXStr GetInputText();
	//EQLIB_OBJECT void AddOutputText(CXStr, int);
	//EQLIB_OBJECT void HistoryBack();
	//EQLIB_OBJECT void HistoryForward();
	//EQLIB_OBJECT void PageDown();
	//EQLIB_OBJECT void PageUp();
	//EQLIB_OBJECT void SetChatFont(int);

	// jun09 re-derived from BOB field-map (ChatWindow op_new 0x4d8 @0x1403c08f0) + REX ctor decompile (this=RSI).
	// SCALAR offsets from field-map (binary-reliable); names ONLY where ctor-evidenced (firewall: no upstream lift).
	// ChatManager: NO stored slot (OTTO positive proof -- CreateChatWindow @1403b5da0 stores window INTO manager,
	// never manager into window; factory reaches it via GLOBAL _pinstCChatWindowManager). Model upstream
	// ChatManager field as an ACCESSOR returning the global (COMPUTED_PROPERTY), do NOT reserve a slot.
	// Non-evidenced fields left Unknown (OTTO names from ctor SIDL/semantics).
/*0x2d0*/ int Unknown0x2d0;                     // field-map 2d0:4; ctor -1 init, read for channel routing (likely ChatChannel)
/*0x2d4*/ uint8_t Unknown0x2d4[0x4];            // gap (no captured store)
/*0x2d8*/ CEditWnd* InputWnd;                   // ctor GetChildItem (SOLID)
/*0x2e0*/ CStmlWnd* OutputWnd;                  // ctor GetChildItem (SOLID)
/*0x2e8*/ uint8_t Unknown0x2e8[0x4];            // gap
/*0x2ec*/ int Unknown0x2ec;                     // field-map 2ec:4; ctor -1 init (likely ChatChannelIndex)
/*0x2f0*/ char TellTarget[0x40];                // OTTO CONFIRMED: CreateChatWindow strncpy 0x40 @0x2f0; 0x2f0..0x330
/*0x330*/ int Unknown0x330;                     // field-map 330:4; ctor 0 init (likely Language)
/*0x334*/ uint8_t Unknown0x334;                 // field-map 334:1 (likely bIsMainChat)
/*0x335*/ uint8_t TimestampFormat;              // OTTO CONFIRMED: INI "%s_TimestampFormat" clamp 0..3
/*0x336*/ uint8_t Unknown0x336[0x2];            // pad
/*0x338*/ COLORREF TimestampColor;              // ctor 0x1403c12be: ARGB assemble (SOLID)
/*0x33c*/ bool bTimestampMatchChatColor;        // ctor 0x1403c12f6: INI bool (SOLID)
/*0x33d*/ uint8_t Unknown0x33d[0x3];            // pad
/*0x340*/ CXStr CommandHistory[0x28];           // ctor 0x1403c0970: LEA 0x340 + 0x28 init loop (SOLID); 0x340..0x480
/*0x480*/ void* Unknown0x480;                   // field-map 480:8 ptr (NOT ChatManager -- that's a global, see class note)
/*0x488*/ int Unknown0x488;                     // field-map 488:4
/*0x48c*/ int Unknown0x48c;                     // field-map 48c:4
/*0x490*/ void* Unknown0x490;                   // field-map 490:8 ptr; ctor op_new 0x350 list object
/*0x498*/ int Unknown0x498[0xe];                // field-map 498..4cc 4-byte scalars (14 ints, 0x498..0x4d0)
/*0x4d0*/ uint8_t Unknown0x4d0;                 // field-map 4d0:1
/*0x4d4*/ uint8_t Unknown0x4d4[0x4];            // pad to op_new 0x4d8
/*0x4d8*/
};
constexpr size_t CChatWindow_size = 0x4d8; // jun09 op_new CONFIRMED 0x4d8 (ChatWindow @0x1403c08f0, BOB field-map); reorder vs upstream; names ctor-evidenced only
SIZE_CHECK(CChatWindow, CChatWindow_size);

//============================================================================
// CColorPickerWnd
//============================================================================

constexpr size_t CColorPickerWnd_size = 0x3b8; // @sizeof :: 2026-06-09 (test) -- full-store-coverage validated

class [[offsetcomments]] CColorPickerWnd : public CSidlScreenWnd, public WndEventHandler
{
	FORCE_SYMBOLS

public:
	CColorPickerWnd(CXWnd* pwndParent);

	virtual bool AboutToHide() override;
	virtual int WndNotification(CXWnd* pwndSender, uint32_t Msg, void* pData) override;
	virtual void OnWndNotification() override;

	EQLIB_OBJECT void CheckMaxEditWnd();
	EQLIB_OBJECT void SetCurrentColor(unsigned long);
	EQLIB_OBJECT void SetTemplateColor(int, unsigned long);
	EQLIB_OBJECT void UpdateCurrentColor();
	EQLIB_OBJECT void UpdateEditWndFromSlider(CSliderWnd* pSlider, CEditWnd* pEdit, int* value);
	EQLIB_OBJECT void UpdateSliderFromEditWnd(CSliderWnd* pSlider, CEditWnd* pEdit, int* value);
	EQLIB_OBJECT int Open(CXWnd* pwndCaller, D3DCOLOR CurrentColor = 0x00FFFFFF);

	//----------------------------------------------------------------------------
	// data members

/*0x02d8*/ int ContextMenuIndex;
/*0x02dc*/ int MaxSliderValue;
/*0x02e0*/ CXWnd* pwndCaller;
/*0x02e8*/ CButtonWnd* ColorButton[16];
/*0x02f0*/ int RedSliderValue;
/*0x02f8*/ CSliderWnd* RedSlider;
/*0x0300*/ CEditWnd* RedSliderInputEdit;
/*0x0308*/ int GreenSliderValue;
/*0x0310*/ CSliderWnd* GreenSlider;
/*0x0318*/ CEditWnd* GreenSliderInputEdit;
/*0x0320*/ int BlueSliderValue;
/*0x0328*/ CSliderWnd* BlueSlider;
/*0x0330*/ CEditWnd* BlueSliderInputEdit;
/*0x0338*/ CButtonWnd* AcceptButton;
/*0x03b8*/
};
SIZE_CHECK(CColorPickerWnd, CColorPickerWnd_size);

//============================================================================
// CCombatAbilityWnd
//============================================================================

class CCombatAbilityWnd : public CSidlScreenWnd
{
public:
	CCombatAbilityWnd(CXWnd*);
	virtual ~CCombatAbilityWnd();
};

//============================================================================
// CCombatSkillsSelectWnd
//============================================================================

class CCombatSkillsSelectWnd : public CSidlScreenWnd, public WndEventHandler
{
public:
	CCombatSkillsSelectWnd(CXWnd*);
	virtual ~CCombatSkillsSelectWnd();

	EQLIB_OBJECT bool ShouldDisplayThisSkill(int);
};

//============================================================================
// CCompassWnd
//============================================================================

// Size: 0x30 @ 0x575119 2021-05-14 
struct [[offsetcomments]] CompassLineSource
{
	// jun09 (OTTO ctor-derive, CCompassWnd embed @0x308): sizeof 0x40, MULTIPLE-INHERITANCE (2 vtables @+0x28/+0x38) --
	// the stale may11 single-struct 0x30 model never closed. Scalar names 0x00-0x18 may11-inherited (OTTO vtable decode pending).
/*0x00*/ uint32_t Red;
/*0x04*/ uint32_t Green;
/*0x08*/ uint32_t Blue;                         // ctor default 0xff
/*0x0c*/ float Y;
/*0x10*/ float X;
/*0x14*/ float Z;
/*0x18*/ bool ShowLine;
/*0x19*/ uint8_t Unknown0x19[0x3];
/*0x1c*/ uint32_t Unknown0x1c;
/*0x20*/ uint32_t Unknown0x20;
/*0x24*/ uint32_t Unknown0x24;
/*0x28*/ void* vftable_A;                       // OTTO: MI vtable 0x1403cc4e0 @CLS+0x28
/*0x30*/ uint64_t Unknown0x30;                  // ctor qword store
/*0x38*/ void* vftable_B;                       // OTTO: MI vtable 0x1403cc4b0 @CLS+0x38
/*0x40*/
};
constexpr size_t CompassLineSource_size = 0x40; // jun09 OTTO: MI embed in CCompassWnd@0x308, spans 0x308..0x348
SIZE_CHECK(CompassLineSource, CompassLineSource_size);

inline namespace deprecated {
	using COMPASSDATA DEPRECATE("Use CompassLineSource instead of COMPASSDATA") = CompassLineSource;
	using PCOMPASSDATAINFO DEPRECATE("Use CompassLineSource* instead of PCOMPASSDATAINFO") = CompassLineSource*;
}

// size 0x2a0 @ 0x56fda5 2021-05-14
// may11 sizeof = 0x3C0 (audit's 0x340 is stale -- ctor allocator-site shows mov ecx,0x3C0).
// See eq-builds/test/2026-05-11/forensics/UI_singletons_may11.md.
// vftbl 0x140A6BD90, pinst 0x140DFAB30, ctor 0x1404BAEB0.
// Secondary WndEventHandler MI vftbl at +0x358 = 0x140A6BD70 (same vftbl as CTargetWnd
// but at a DIFFERENT offset there: CTargetWnd has it at +0x2E8, not +0x358). The earlier
// "shared at same offset" annotation was wrong per DISPATCH-5 live verification.
// Internal fields below need revision: +0x2D0..+0x328 region is a sequence of incrementing
// floats (path data / coordinate trail), NOT the declared int+int+int+double+int+CompassLineSource
// layout. ArrayClass<CompassLineSource*> header (3 heap pointers) actually lives at +0x340,
// not the declared +0x328. speed field at +0x2E8 is part of the float trail, NOT player movement.
// Field offsets +0x000/+0x2C8/+0x2D0/+0x358 confirmed; full internal layout pending future audit.
class [[offsetcomments]] CCompassWnd : public CSidlScreenWnd, public WndEventHandler
{
	FORCE_SYMBOLS

public:
	CCompassWnd(CXWnd*);
	virtual ~CCompassWnd();

	virtual int Draw() override;
	virtual int OnProcessFrame() override;

	EQLIB_OBJECT void SenseHeading();
	EQLIB_OBJECT void PickNewTarget();
	EQLIB_OBJECT void SetSpeed();

	//----------------------------------------------------------------------------
	// data members

	// jun09 re-derived from OTTO ctor FUN_1403cc010 (op_new 0x360 @14019f34c, highest-write 0x35c MATCH).
	// may11 scalar fields (Unknown0x244/offset/timestamp/speed/timer) were STALE -- jun09 has only 2 ints here.
/*0x2d8*/ CStaticAnimationTemplate* pStrip1;              // GetSidlPiece "CompassStrip1"
/*0x2e0*/ CStaticAnimationTemplate* pStrip2;              // GetSidlPiece "CompassStrip2"
/*0x2e8*/ uint8_t Unknown0x2e8[0x4];                      // no-store gap
/*0x2ec*/ int Unknown0x2ec;                               // ctor =0
/*0x2f0*/ uint8_t Unknown0x2f0[0x10];                     // no-store gap
/*0x300*/ int Unknown0x300;                               // ctor =0
/*0x304*/ uint8_t Unknown0x304[0x4];                      // pad to embed
/*0x308*/ CompassLineSource lineAdventure;                // embedded (registered as lineData[0]); 0x40 -> 0x308..0x348
/*0x348*/ ArrayClass<CompassLineSource*> lineData;        // count@0x348/ptr@0x350/cap@0x358/extflag@0x35c
/*0x360*/
};
constexpr size_t CCompassWnd_size = 0x360; // jun09 op_new CONFIRMED 0x360 (OTTO ctor FUN_1403cc010, alloc 14019f34c); CompassLineSource embed 0x40 closes BOB deferred-confirm
SIZE_CHECK(CCompassWnd, CCompassWnd_size);

inline namespace deprecated {
	using EQCOMPASSWINDOW DEPRECATE("Use CCompassWnd instead of EQCOMPASSWINDOW") = CCompassWnd;
	using PEQCOMPASSWINDOW DEPRECATE("Use CCompassWnd* instead of PEQCOMPASSWINDOW") = CCompassWnd*;
}

//============================================================================
// CConfirmationDialog
//============================================================================

// This is actually CPopDialogWnd.
// TODO: Rename this
class [[offsetcomments]] CConfirmationDialog : public CSidlScreenWnd
{
	FORCE_SYMBOLS

public:
	CConfirmationDialog(CXWnd*);
	virtual ~CConfirmationDialog();

	virtual int Draw() override;
	virtual int OnProcessFrame() override;
	virtual int WndNotification(CXWnd*, uint32_t, void*) override;

	// probably wrong
	virtual void Activate(PopDialogHandler* handler, int msg, const char* text,
		int, int, int, int);

	// this is all invalid
	//EQLIB_OBJECT void HandleButtonNoPressed();
	//EQLIB_OBJECT void HandleButtonOkPressed();
	//EQLIB_OBJECT void HandleButtonYesPressed();
	//EQLIB_OBJECT void ProcessNo(int);
	//EQLIB_OBJECT void ProcessYes();
	//EQLIB_OBJECT void SetNameApprovalData(char*, char*, int, int, char*);
	//EQLIB_OBJECT void ExpireCurrentDialog();
	//EQLIB_OBJECT void ResetFocusOnClose();

	// Data members
	// jun09 re-derived from BOB field-map (ConfirmationDialogBox op_new 0x350 @0x1404c9050); NOT +0x10 -- grew.
	// 5 upstream ptrs map clean; tail is jun09-new (field-map offsets/widths; gaps = uncaptured stores).
/*0x2d0*/ CStmlWnd* OutputText;
/*0x2d8*/ CButtonWnd* pYesButton;
/*0x2e0*/ CButtonWnd* pNoButton;
/*0x2e8*/ CButtonWnd* pCancelButton;
/*0x2f0*/ CButtonWnd* pOKButton;
/*0x2f8*/ void* Unknown0x2f8;                 // field-map 2f8:8
/*0x300*/ uint8_t Unknown0x300[0x8];          // gap (no captured store)
/*0x308*/ void* Unknown0x308;                 // field-map 308:8
/*0x310*/ uint8_t Unknown0x310[0x4];          // gap
/*0x314*/ int Unknown0x314;                   // field-map 314:4
/*0x318*/ uint8_t Unknown0x318[0x8];          // gap
/*0x320*/ int Unknown0x320;                   // field-map 320:4
/*0x324*/ uint8_t Unknown0x324[0x4];          // gap
/*0x328*/ uint8_t Unknown0x328[0x28];         // field-map 5x :c embedded-ctor objs @328/330/338/340/348; types ctor-pending
/*0x350*/
};
constexpr size_t CConfirmationDialog_size = 0x350; // jun09 op_new CONFIRMED 0x350 (ConfirmationDialogBox @0x1404c9050, BOB field-map); NOT +0x10
SIZE_CHECK(CConfirmationDialog, CConfirmationDialog_size);

//============================================================================
// CContainerWnd
//============================================================================

constexpr size_t CContainerWnd_size = 0x398; // @sizeof(CContainerWnd) :: 2026-06-09 jun09 op_new(0x398)@0x1403cdcd9 + op_delete(0x398) in dtor 0x1403ceb20

class [[offsetcomments]] CContainerWnd : public CSidlScreenWnd
{
	FORCE_SYMBOLS

public:
	CContainerWnd(CXWnd*);
	virtual ~CContainerWnd();

	virtual int OnProcessFrame() override;
	virtual int PostDraw() override;
	virtual int WndNotification(CXWnd*, uint32_t, void*) override;

	EQLIB_OBJECT void CheckCloseable();
	EQLIB_OBJECT void SetContainer(const ItemPtr& pContainer, const ItemGlobalIndex& location);
	EQLIB_OBJECT bool ContainsNoDrop();
	EQLIB_OBJECT void HandleCombine();

	// jun09 from-binary derivation (ctor 0x1403ce490 + dtor 0x1403ceb20) + LIVE-memory confirm.
	// See work/ui_jun09_2026-06-09/CContainerWnd_jun09.md. Clean uniform +0x10 from upstream.
/*0x2d0*/ ItemPtr Container;              // eqstd::shared_ptr<ItemClient> (0x10): _Ptr@0x2d0 -> ItemClient, _Rep@0x2d8 -> control block. LIVE-confirmed: ctrlblock uses=2/weaks=1, dtor does _Ref_count 2-phase release on _Rep.
/*0x2e0*/ ItemGlobalIndex Location;       // ctor -1 init qword@0x2e0 + word@0x2e8 (0xc)
/*0x2f0*/ VeArray<CInvSlotWnd*> InvSlotWnds; // dtor iterates begin@0x2f0/count@0x2f8, frees buffer
/*0x308*/ CButtonWnd* pCombineButton;       // SIDL "Container_Combine"
/*0x310*/ CButtonWnd* pDoneButton;          // SIDL "DoneButton"
/*0x318*/ CButtonWnd* pStandardDoneButton;  // SIDL "StandardDoneButton"
/*0x320*/ CButtonWnd* pCombineDoneButton;   // SIDL "CombineDoneButton"
/*0x328*/ CButtonWnd* pContainerIcon;       // SIDL "Container_Icon"
/*0x330*/ CButtonWnd* pContainerStandardIcon; // SIDL "ContainerStandard_Icon"
/*0x338*/ CButtonWnd* pContainerCombineIcon;  // SIDL "ContainerCombine_Icon"
/*0x340*/ CTextureAnimation* pIconAnimation;  // ctor __eq_new(0x60); linked into icons' +0x310
/*0x348*/ CLabel* ContainerLabel;           // SIDL "Container_Label"
/*0x350*/ CInvSlotWnd* pContainerSlotTemplate; // SIDL "Container_Slot"
/*0x358*/ CXWnd* pStandardItems;            // SIDL "ContainerStandard_Items"
/*0x360*/ CXWnd* pStandardItemsWithDone;    // SIDL "ContainerStandardWithDone_Items"
/*0x368*/ CXWnd* pCombineItems;             // SIDL "ContainerCombine_Items"
/*0x370*/ CStmlWnd* pStandardSize;          // SIDL "StandardSize"
/*0x378*/ CStmlWnd* pCombineSize;           // SIDL "CombineSize"
/*0x380*/ bool bCombineValid;               // ctor byte=0
/*0x381*/ bool bUserCloseable;              // ctor byte=1 (default true)
/*0x384*/ int ContainerType;                // classic = 0, standard = 1, combine = 2
/*0x388*/ int IndexDoneButton;              // FUN_1403cedc0 AddMenuItem index; CheckMenuItem via vtable+0x3d8
/*0x390*/ CContextMenu* ContextMenu;        // FUN_1403cedc0 __eq_new(0x350) CContextMenu
/*0x398*/

	DEPRECATE("CContainerWnd: Use Container instead of pContents")
	ItemClient* get_pContents() { return Container.get(); }
	__declspec(property(get = get_pContents)) ItemClient* pContents;
};

SIZE_CHECK(CContainerWnd, CContainerWnd_size);

inline namespace deprecated {
	using EQCONTAINERWINDOW DEPRECATE("Use CContainerWnd instead of EQCONTAINERWINDOW") = CContainerWnd;
	using PEQCONTAINERWINDOW DEPRECATE("Use CContainerWnd* instead of PEQCONTAINERWINDOW") = CContainerWnd*;
}

constexpr int MAX_CONTAINERS = 45;

constexpr size_t CContainerMgr_size = 0x1b0; // jun09 delta-0 (base-less mgr); bShowDone@0x1a8 end 0x1ac pad to 8-align (ptr members) = 0x1b0 (== upstream)

class [[offsetcomments]] CContainerMgr
{
	FORCE_SYMBOLS

public:
	CContainerMgr();
	virtual ~CContainerMgr();

	ItemPtr GetWorldContainerItem() const { return WorldContainer; };

	// Retrieves a window for the given item container, if it is active.
	EQLIB_OBJECT CContainerWnd* GetWindowForItem(const ItemPtr& pContainer) const;

	EQLIB_OBJECT bool CloseAllContainers();
	EQLIB_OBJECT void ClearWorldContainerItems();
	EQLIB_OBJECT void CloseContainer(const ItemPtr& pContainer, bool deleteWindow = true);
	EQLIB_OBJECT void OpenContainer(const ItemPtr& pContainer, const ItemGlobalIndex& location, bool allowTradeskill = true);
	EQLIB_OBJECT void OpenWorldContainer(const ItemPtr&, unsigned long);
	EQLIB_OBJECT void Process();
	EQLIB_OBJECT void SetWorldContainerItem(const ItemPtr&, int);
	EQLIB_OBJECT CContainerWnd* GetFreeContainerWnd();
	EQLIB_OBJECT void OpenExperimentContainer(const ItemPtr& pCont, const ItemGlobalIndex& Location);

	//----------------------------------------------------------------------------
	// data members

/*0x0008*/ CContainerWnd* pContainerWnds[MAX_CONTAINERS];
/*0x0170*/ ArrayClass<CContainerWnd*> ContainerWndsToDelete;
/*0x0188*/ ItemPtr WorldContainer;
/*0x0198*/ DWORD WorldContainerSerialNumber;
/*0x019c*/ int WorldContainerRealEstateID;
/*0x01a0*/ int WorldContainerRealEstateItemID;
/*0x01a4*/ DWORD Timer;
/*0x01a8*/ bool bShowDone;
/*0x1ac*/

	ItemClient* getter_pWorldContainer() { return WorldContainer.get(); }
	__declspec(property(get = getter_pWorldContainer)) ItemClient* pWorldContainer;
};

SIZE_CHECK(CContainerMgr, CContainerMgr_size);

//============================================================================
// CContextMenuManager
//============================================================================

constexpr int MAX_CONTEXT_MENU_DEPTH = 8;
constexpr int MAX_CONTEXT_MENUS = 1024;

// combination of CContexTMenuManager and CContextMenuManagerBase
constexpr size_t CContextMenuManager_size = 0x22e8; // jun09 +0x10 (CXWnd base grew; binary-confirmed: pMenus@0x2b8 + DefaultMenuIndex@0x22cc = upstream+0x10)
class [[offsetcomments]] CContextMenuManager : public CXWnd
{
	FORCE_SYMBOLS

public:
	CContextMenuManager(CXWnd*, uint32_t, const CXRect&);
	virtual ~CContextMenuManager();

	virtual int HandleLButtonDown(const CXPoint&, uint32_t) override;
	virtual int HandleRButtonDown(const CXPoint&, uint32_t) override;
	virtual int HandleWheelButtonDown(const CXPoint&, uint32_t) override;
	virtual int OnProcessFrame() override;
	virtual int WndNotification(CXWnd*, uint32_t, void*) override;

	virtual void CreateDefaultMenu();
	virtual int HandleWindowMenuCommands(CXWnd*, int);

	CContextMenu* GetMenu(int index)
	{
		if (index >= 0 && index < NumMenus)
			return pMenus[index];

		return nullptr;
	}

	EQLIB_OBJECT int AddMenu(CContextMenu*);
	EQLIB_OBJECT int GetDefaultMenuIndex() { return DefaultMenuIndex; }
	EQLIB_OBJECT int PopupMenu(int, const CXPoint&, CXWnd*);
	EQLIB_OBJECT int RemoveMenu(int, bool);
	EQLIB_OBJECT void Flush();
	EQLIB_OBJECT void WarnDefaultMenu(CXWnd*);

	//----------------------------------------------------------------------------
	// data members

/*0x268*/ CXWnd* pParentMenuWnd;
/*0x270*/ CContextMenu* pCurrMenus[MAX_CONTEXT_MENU_DEPTH];
/*0x2b0*/ int NumVisibleMenus;
/*0x2b4*/ int CurrMenu;
/*0x2b8*/ CContextMenu* pMenus[MAX_CONTEXT_MENUS];
/*0x22b8*/ int NumMenus;
/*0x22c0*/ CXWnd* pHandlerWnd;
/*0x22c8*/ int HandlerCmd;
/*0x22cc*/ int DefaultMenuIndex;
/*0x22d0*/ int DefaultHelpItem;
/*0x22d4*/ int DefaultBGItem;
/*0x22d8*/ int DefaultMinItem;
/*0x22dc*/ int DefaultCloseItem;
/*0x22e0*/ int DefaultLockItem;
/*0x22e4*/ int DefaultEscapeItem;
/*0x22e8*/
};
SIZE_CHECK(CContextMenuManager, CContextMenuManager_size);

//============================================================================
// CContextMenu
//============================================================================

class [[offsetcomments]] CContextMenu : public CListWnd
{
	FORCE_SYMBOLS

public:
	EQLIB_OBJECT CContextMenu(CXWnd* pParent, uint32_t MenuID, const CXRect& rect);
	EQLIB_OBJECT virtual ~CContextMenu();

	virtual int OnKillFocus(CXWnd*) override;

	// MenuID: Set HighPart as the ID for submenus and LowPart is then the subindex
	EQLIB_OBJECT int AddMenuItem(const CXStr& str, unsigned int MenuID, bool bChecked = false, COLORREF Color = 0xFFFFFFFF, bool bEnable = true);
	EQLIB_OBJECT int AddSeparator();
	EQLIB_OBJECT void Activate(CXPoint, int, int);
	EQLIB_OBJECT void CheckMenuItem(int ID, bool bVal = true, bool bUncheckAll = false);
	EQLIB_OBJECT void EnableMenuItem(int ID, bool bVal = true);
	EQLIB_OBJECT void RemoveAllMenuItems();
	EQLIB_OBJECT void RemoveMenuItem(int id);
	EQLIB_OBJECT void SetMenuItem(int ID, const CXStr& Str, bool bChecked = false, COLORREF Color = 0xFFFFFFFF, bool bEnable = true);

	EQLIB_OBJECT int InsertMenuItem(const CXStr& str, unsigned int position, unsigned int ItemID,
		bool bChecked, COLORREF Color, bool bEnable);

	//----------------------------------------------------------------------------
	// data members

/*0x0348*/ int NumItems;
/*0x34c*/
};

class CGFContextMenu : public CContextMenu
{
public:
	EQLIB_OBJECT CGFContextMenu(CXWnd* pParent, uint32_t MenuID, const CXRect& rect);
	EQLIB_OBJECT virtual ~CGFContextMenu();
};

//============================================================================
// CCursorAttachment
//============================================================================

enum ECursorAttachmentType
{
	eCursorAttachment_None = -1,
	eCursorAttachment_MemorizeSpell = 1,
	eCursorAttachment_Item,
	eCursorAttachment_Money,
	eCursorAttachment_Social,
	eCursorAttachment_MenuButton,
	eCursorAttachment_Ability,
	eCursorAttachment_Combat,
	eCursorAttachment_InvSlot,
	eCursorAttachment_SpellGem,
	eCursorAttachment_PetCommand,
	eCursorAttachment_SkillID,
	eCursorAttachment_MeleeAbility,
	eCursorAttachment_LeadershipAbility,
	eCursorAttachment_ItemLink, // also HeroForge
	eCursorAttachment_KronoSlot,
	eCursorAttachment_Command,
	eCursorAttachment_CombatAbility,
	eCursorAttachment_MountKeyRingLink,
	eCursorAttachment_IllusionKeyRingLink,
	eCursorAttachment_FamiliarKeyRingLink,
	eCursorAttachment_TeleportationKeyRingLink,
	eCursorAttachment_ActivatedKeyRingLink,
	eCursorAttachment_EquipmentKeyRingLink,
};

constexpr size_t CCursorAttachment_size = 0x648; // jun09 op_new CONFIRMED 0x648 (OTTO alloc 14019d8d5); base CGFScreenWnd 0x3b8

class [[offsetcomments]] CCursorAttachment : public CGFScreenWnd, public WndEventHandler
{
	FORCE_SYMBOLS

public:
	CCursorAttachment(CXWnd*);
	virtual ~CCursorAttachment();

	//virtual int Draw() override;
	//virtual int OnProcessFrame() override;
	//virtual int WndNotification(CXWnd*, uint32_t, void*) override;
	//virtual void Deactivate() override;

	EQLIB_OBJECT bool IsOkToActivate(int);
	EQLIB_OBJECT bool RemoveAttachment();

	void AttachToCursor(CTextureAnimation* Overlay, CTextureAnimation* Background,
		ECursorAttachmentType Type, int Index, const char* AssignedName, const char* Name, int Qty = -1, int IconID = -1)
	{
		AttachToCursor(Overlay, Background, Type, Index, EqItemGuid(), 0, AssignedName, Name, Qty, IconID);
	}

	EQLIB_OBJECT void AttachToCursor(CTextureAnimation* Overlay, CTextureAnimation* Background,
		ECursorAttachmentType Type, int Index, const EqItemGuid& ItemGuid, int ItemID, const char* AssignedName,
		const char* Name, int Qty = -1, int IconID = -1);

	EQLIB_OBJECT bool AttachSpellToCursor(int SpellID);

	ECursorAttachmentType GetType() const { return static_cast<ECursorAttachmentType>(Type); }

	//----------------------------------------------------------------------------
	// data members

	// jun09 REBUILT from OTTO binary (op_new 0x648, base CGFScreenWnd 0x3b8). Corpus UIStaticAnim model was
	// mismatched (binary has an 11x eqstd::string run, not those components). Flat lay at OTTO offsets; names
	// confirmed where OTTO gave them (CursorAttachmentComponent strings + CA_Anim/CA_Anim2/CA_SpellGem childpairs).
/*0x3b8*/ void* Unknown0x3b8;
/*0x3c0*/ eqstd::string name;                     // CursorAttachmentComponent.name (OTTO string run)
/*0x3e0*/ eqstd::string fullName;
/*0x400*/ eqstd::string modelPrefix;
/*0x420*/ CCursorAttachment* target;              // CursorAttachmentComponent.target
/*0x428*/ void* Unknown0x428;
/*0x430*/ eqstd::string Unknown0x430;             // OTTO string (unnamed)
/*0x450*/ eqstd::string Unknown0x450;
/*0x470*/ eqstd::string Unknown0x470;
/*0x490*/ void* Unknown0x490;
/*0x498*/ void* Unknown0x498;
/*0x4a0*/ eqstd::string Unknown0x4a0;
/*0x4c0*/ void* Unknown0x4c0;
/*0x4c8*/ void* Unknown0x4c8;
/*0x4d0*/ eqstd::string Unknown0x4d0;
/*0x4f0*/ eqstd::string Unknown0x4f0;
/*0x510*/ eqstd::string Unknown0x510;
/*0x530*/ void* Unknown0x530;
/*0x538*/ void* Unknown0x538;
/*0x540*/ eqstd::string Unknown0x540;
/*0x560*/ void* Unknown0x560;
/*0x568*/ CStaticAnimationTemplate* pBGStaticAnim;   // CA_Anim (childpair)
/*0x570*/ CStaticAnimationTemplate* pOverlayStaticAnim; // CA_Anim2 (childpair)
/*0x578*/ void* Unknown0x578;
/*0x580*/ void* Unknown0x580;
/*0x588*/ int Unknown0x588;
/*0x58c*/ uint8_t Unknown0x58c_pad[0x28];   // no-store gap (poss. AssignedName StringFixed<64>/extras -- OTTO confirm)
/*0x5b4*/ int Unknown0x5b4;                       // ctor init -1
/*0x5b8*/ void* Unknown0x5b8;
/*0x5c0*/ void* Unknown0x5c0;
/*0x5c8*/ void* Unknown0x5c8;
/*0x5d0*/ uint8_t Unknown0x5d0_pad[0x48];   // no-store gap (poss. AssignedName StringFixed<64>/extras -- OTTO confirm)
/*0x618*/ void* Unknown0x618;
/*0x620*/ CSpellGemWnd* pSpellGem;                // CA_SpellGem (childpair)
/*0x628*/ uint8_t Unknown0x628_pad[0x20];   // trailing to op_new 0x648
/*0x648*/
};

SIZE_CHECK(CCursorAttachment, CCursorAttachment_size);

//============================================================================
// CDragonHoardWnd
//============================================================================

constexpr size_t CDragonHoardWnd_size = 0x378; // jun09 -- half-lay guard (BOB policy: SIZE_CHECK on all non-trivial windows)
class [[offsetcomments]] CDragonHoardWnd : public CSidlScreenWnd, public WndEventHandler
{
public:
	FORCE_SYMBOLS;

/*0x2d8*/ CListWnd* pItemList; // DH_Item_List
/*0x2e0*/ CButtonWnd* pInspectButton; // DH_Inspect_Button
/*0x2e8*/ CButtonWnd* pPreviewButton; // DH_Preview_Button
/*0x2f0*/ CLabel* pSelectedItemLabel; // DH_Selected_Item_Label
/*0x2f8*/ CButtonWnd* pSelectedItemSlot; // DH_Selected_Item_Slot
/*0x300*/ CButtonWnd* pRetrieveButton; // DH_Retrieve_Button
/*0x308*/ CButtonWnd* pExitButton; // DH_Exit_Button
/*0x310*/ CLabel* pItemCountNumber; // DH_Item_Count_Number
/*0x318*/ CEditWnd* pSearchItemInput; // DH_SearchItem_Input
/*0x320*/ CButtonWnd* pSearchItemButton; // DH_SearchItem_Button
/*0x328*/ ItemContainer Items;
/*0x350*/ bool bNeedsUpdate;
/*0x358*/ ItemPtr pSelectedItem;
/*0x368*/ uint64_t SelectedItemId;
/*0x370*/ bool Unknown0x370; // jun09 NEW (PROVISIONAL): ctor-stored byte @0x370 (field-map 370:1:s)
/*0x378*/
};
SIZE_CHECK(CDragonHoardWnd, CDragonHoardWnd_size);

//============================================================================
// CExtendedTargetWnd
//============================================================================

// may11: sizeof 0x9B0, vftbl 0x140928A20, pinst 0x140DFB090, ctor 0x1402B34A0.
// Secondary WndEventHandler MI vftbl 0x140928DA0 (subobject offset undeclared).
// XML defines 207 gauges; class is large. Internal fields not yet decoded.
class CExtendedTargetWnd : public CSidlScreenWnd
{
public:
};

//============================================================================
// CFactionWnd
//============================================================================

class [[offsetcomments]] CFactionWnd : public CSidlScreenWnd, public WndEventHandler
{
	FORCE_SYMBOLS

public:
	CFactionWnd(CXWnd*);
	virtual ~CFactionWnd();

	//----------------------------------------------------------------------------
	// data members

/*0x2d4*/ bool Unknown0x22c;                  // jun09 ctor 0x140144ec0 store@0x2d4
/*0x2d8*/ int Unknown0x230;                   // store@0x2d8 w4
/*0x2dc*/ int Unknown0x234;                   // store@0x2dc (qword -1 covers 0x2dc/0x2e0)
/*0x2e0*/ int Unknown0x238;                   // store@0x2e0 w4
/*0x2e8*/ SoeUtil::String Unknown0x23c;       // store@0x2e8 (String 0x18) -> 0x300
/*0x300*/ SoeUtil::String Unknown0x24c;       // store@0x300 (String 0x18) -> 0x318
/*0x318*/ CGaugeWnd* StandingGaugeTemplate;   // store@0x318 w8
/*0x320*/ CTreeViewWnd* Categories;           // store@0x320 w8
/*0x328*/ CEditWnd* SearchNameInput;          // store@0x328 w8
/*0x330*/ CButtonWnd* SearchButton;           // store@0x330 w8
/*0x338*/ CListWnd* FactionList;              // store@0x338 w8 (hits12, list-populate)
/*0x340*/
};

inline namespace deprecated {
	using EQFACTIONWINDOW DEPRECATE("Use CFactionWnd instead of EQFACTIONWINDOW") = CFactionWnd;
	using PEQFACTIONWINDOW DEPRECATE("Use CFactionWnd* instead of PEQFACTIONWINDOW") = CFactionWnd*;
}

//============================================================================
// CPlayerCustomizationWnd
//============================================================================

constexpr size_t CPlayerCustomizationWnd_size = 0x408; // @sizeof(CPlayerCustomizationWnd) :: 2026-06-09 (test) jun09 allocator-confirmed (op_new 0x408 @0x14019c795; ctor 0x1404c3570; vtable 0x140a70da8; pPlayerCustomizationWnd 0x140dfbfb0)

class [[offsetcomments]] CPlayerCustomizationWnd : public CSidlScreenWnd
{
	FORCE_SYMBOLS

public:
	EQLIB_OBJECT CPlayerCustomizationWnd(CXWnd*);
	EQLIB_OBJECT ~CPlayerCustomizationWnd();

	EQLIB_OBJECT void SetFaceSelectionsFromPlayer();

	// virtual
	EQLIB_OBJECT int Draw() const;
	EQLIB_OBJECT int OnProcessFrame();
	EQLIB_OBJECT int WndNotification(CXWnd*, uint32_t, void*);

	// private
	EQLIB_OBJECT void CycleThroughFHEB(int, int);
	EQLIB_OBJECT void ShowButtonGroup(int, bool);

	// data members -- jun09 from ctor 0x1404c3570 (childmap: work/ui_jun09_2026-06-09/cplayercustomizationwnd_childmap.txt)
	// char-select appearance window (CDisplay__InitCharSelectUI). FHEB = Face/Hair/Eyes/Beard.
/*0x2d0*/ uint32_t Unknown0x2d0;                       // FUN_140359ca0 tick-stamp @0x1404c35d9
/*0x2d4*/ uint32_t Unknown0x2d4;                       // 4B, not ctor-written before 0x2d8 (pad/field)
/*0x2d8*/ CButtonWnd* Random_Button;
/*0x2e0*/ CButtonWnd* Accept_Button;
/*0x2e8*/ CButtonWnd* Cancel_Button;
/*0x2f0*/ CButtonWnd* Face_Down_Button;
/*0x2f8*/ CButtonWnd* Hair_Down_Button;
/*0x300*/ CButtonWnd* Hair_Color_Down_Button;
/*0x308*/ CButtonWnd* Eyes_Down_Button;
/*0x310*/ CButtonWnd* Beard_Down_Button;
/*0x318*/ CButtonWnd* Beard_Color_Down_Button;
/*0x320*/ CButtonWnd* TattooIndex_Down_Button;
/*0x328*/ CButtonWnd* ParentId_Down_Button;
/*0x330*/ CButtonWnd* Unknown0x330_DownButton;         // ctor-zeroed child slot @0x1404c36b3; GetChildItem name undecoded (feature between ParentId and FacialAttachment)
/*0x338*/ CButtonWnd* FacialAttachmentIndex_Down_Button;
/*0x340*/ CButtonWnd* Face_Up_Button;
/*0x348*/ CButtonWnd* Hair_Up_Button;
/*0x350*/ CButtonWnd* Hair_Color_Up_Button;
/*0x358*/ CButtonWnd* Eyes_Up_Button;
/*0x360*/ CButtonWnd* Beard_Up_Button;
/*0x368*/ CButtonWnd* Beard_Color_Up_Button;
/*0x370*/ CButtonWnd* TattooIndex_Up_Button;
/*0x378*/ CButtonWnd* ParentId_Up_Button;
/*0x380*/ CButtonWnd* Unknown0x380_UpButton;           // ctor-zeroed child slot @0x1404c36ba; name undecoded
/*0x388*/ CButtonWnd* FacialAttachmentIndex_Up_Button;
/*0x390*/ CScreenPieceTemplate* Face_Text;
/*0x398*/ CScreenPieceTemplate* Hair_Text;
/*0x3a0*/ CScreenPieceTemplate* Hair_Color_Text;
/*0x3a8*/ CScreenPieceTemplate* Eyes_Text;
/*0x3b0*/ CScreenPieceTemplate* Beard_Text;
/*0x3b8*/ CScreenPieceTemplate* Beard_Color_Text;
/*0x3c0*/ CScreenPieceTemplate* TattooIndex_Text;
/*0x3c8*/ CScreenPieceTemplate* ParentId_Text;
/*0x3d0*/ CScreenPieceTemplate* Unknown0x3d0_Text;     // ctor-zeroed piece slot @0x1404c36c1; name undecoded
/*0x3d8*/ CScreenPieceTemplate* FacialAttachmentIndex_Text;
/*0x3e0*/ CScreenPieceTemplate* Heritage_Text;
/*0x3e8*/ uint32_t Unknown0x3e8;                       // 4B
/*0x3ec*/ int Unknown0x3ec;                            // ctor zero @0x1404c3e8f
/*0x3f0*/ uint8_t FHEBSelections[0x18];                // 0x3f0..0x408 FHEB feature-selection index bytes; FUN_1404c4a10 copies current(0x3f0-0x3fa) -> committed(0x3fb-0x404); exact split not separately attested
/*0x408*/
};

SIZE_CHECK(CPlayerCustomizationWnd, CPlayerCustomizationWnd_size);

//============================================================================
// CFindItemWnd
//============================================================================

constexpr size_t CFindItemWnd_size = 0x400; // @sizeof(CFindItemWnd) :: 2026-06-09 (test) jun09 allocator-confirmed (op_new 0x400 @0x14019eeac; ctor 0x14014d010; vtable 0x1408b9970 "FindItem"); +0x10 vs apr07 0x3f0

class [[offsetcomments]] CFindItemWnd : public CSidlScreenWnd, public WndEventHandler
{
	FORCE_SYMBOLS

public:
	CFindItemWnd(CXWnd*);
	virtual ~CFindItemWnd();

	virtual int WndNotification(CXWnd*, uint32_t, void*) override;

	EQLIB_OBJECT void Update();
	EQLIB_OBJECT void PickupSelectedItem();

	struct ItemRecord
	{
		ItemGlobalIndex itemIndex;
		EqItemGuid guid;
		eqtime_t unknown;
	};

	ItemGlobalIndex GetItemGlobalIndex(int index)
	{
		ItemRecord* itemRecord = Items.FindFirst(index);
		if (itemRecord)
		{
			return itemRecord->itemIndex;
		}

		return ItemGlobalIndex();
	}

	// WndEventHandler::lastUpdate (uint32_t) is the inherited base member @0x2d0 -- the jun09 tick-stamp
	// written by ctor FUN_140359ca0 @0x14014d074. CFindItemWnd's own data begins @0x2d4.
/*0x2d4*/ uint8_t Unknown0x2d4[0xc];                 // 0x2d4..0x2e0 head flags+pad; ctor zeros byte@0x2d4 + dword@0x2d5 + word@0x2d9 (0x14014d203/d208/d212); sub-field widths not separately attested
/*0x2e0*/ ItemContainer Container;                   // ctor FUN_1406ac2a0(cap=21) @0x14014d09d
/*0x308*/ void* Unknown0x308;                        // ctor zero @0x14014d21b; 8B field between Container and Items (new vs apr07)
/*0x310*/ HashTable<ItemRecord, int> Items;          // ctor prime-build @0x14014d0b7 (m_array/numBuckets/total/occupied); clear-fn FUN_140153660, 0x40 nodes
/*0x328*/ HashTable<SoeUtil::String, int> ItemNames; // ctor build @0x14014d171 (second map, 11 buckets)
/*0x340*/ CStaticAnimationTemplate* FIW_ClassAnim;
/*0x348*/ CSidlScreenWnd* FIW_CharacterView;
/*0x350*/ CListWnd* FIW_ItemList;
/*0x358*/ CButtonWnd* FIW_QueryButton;
/*0x360*/ CButtonWnd* FIW_RequestItemButton;
/*0x368*/ CButtonWnd* FIW_RequestPreviewButton;
/*0x370*/ CButtonWnd* FIW_Default;
/*0x378*/ CButtonWnd* FIW_GrabButton;
/*0x380*/ CButtonWnd* FIW_HighlightButton;
/*0x388*/ CButtonWnd* FIW_DestroyItem;
/*0x390*/ CButtonWnd* FIW_SearchDepotButton;
/*0x398*/ CButtonWnd* FIW_AutoUnlock;
/*0x3a0*/ CComboWnd* FIW_ItemLocationCombobox;
/*0x3a8*/ CComboWnd* FIW_ItemSlotCombobox;
/*0x3b0*/ CComboWnd* FIW_StatSlotCombobox;
/*0x3b8*/ CComboWnd* FIW_RaceSlotCombobox;
/*0x3c0*/ CComboWnd* FIW_ClassSlotCombobox;
/*0x3c8*/ CComboWnd* FIW_ItemTypeCombobox;
/*0x3d0*/ CComboWnd* FIW_ItemPrestigeCombobox;
/*0x3d8*/ CComboWnd* FIW_ItemAugmentCombobox;
/*0x3e0*/ CEditWnd* FIW_ItemNameInput;
/*0x3e8*/ CEditWnd* FIW_MaxLevelInput;
/*0x3f0*/ CEditWnd* FIW_MinLevelInput;
/*0x3f8*/ CLabelWnd* FIW_DragonHoardLabel;
/*0x400*/
};

SIZE_CHECK(CFindItemWnd, CFindItemWnd_size);

//============================================================================
// CFindLocationWnd
//============================================================================

enum FindLocationType {
	FindLocation_Unknown,
	FindLocation_Player,
	FindLocation_POI,
	FindLocation_RealEstateItem,
	FindLocation_RealEstatePlot,
	FindLocation_MapPoint,
	FindLocation_Switch,
	FindLocation_Location
};
EQLIB_API const char* FindLocationTypeToString(FindLocationType type);

constexpr size_t CFindLocationWnd_size = 0x7c0; // jun09 op_new CONFIRMED 0x7c0 (OTTO alloc 14019f67c); base CGFScreenWnd 0x3b8; 5 components + 6 arrays close exactly

class [[offsetcomments]] CFindLocationWnd : public CGFScreenWnd
{
public:
	// has virtuals, but we get those from CSidlScreenWnd
	EQLIB_OBJECT bool HandleFindBegin();
	EQLIB_OBJECT void HandleFindEnd();
	EQLIB_OBJECT void HandleRowClicked(int Index);
	EQLIB_OBJECT void HandleFindableZoneConnectionsMessage(CUnSerializeBuffer& buf);

public:
	struct FindPlayerData
	{
		uint32_t spawnId;
		CXStr name;
		CXStr description;
		int race;
		int Class;
	};
	using PlayerDataArray = ArrayClass<FindPlayerData>;

	struct FindPOIData
	{
		uint32_t id;
		CXStr name;
		CXStr description;
	};
	using POIDataArray = ArrayClass<FindPOIData>;

	struct FindZoneConnectionData
	{
		FindLocationType type = FindLocation_Location;
		int32_t id = 0;
		int32_t subId = -1;
		EQZoneIndex zoneId;
		int zoneIdentifier;
		CVector3 location;
	};
	using ZoneConnectionDataArray = ArrayClass<FindZoneConnectionData>;

	struct FindableReference
	{
		FindLocationType type;
		uint32_t index;

		bool operator==(const FindableReference& other) const { return type == other.type && index == other.index; }
	};
	using FindableReferenceList = HashTable<FindableReference>;

private:
/*0x3b8*/ CListWnd* m_findLocationList; // FLW_FindLocationList
/*0x3c0*/ CCheckBoxWnd* m_filterLocationsCheckBox; // FLW_FilterLocationsCheckbox
/*0x3c8*/ CCheckBoxWnd* m_filterGroupCheckBox; // FLW_FilterGroupCheckbox
/*0x3d0*/ CCheckBoxWnd* m_filterRaidCheckBox; // FLW_FilterRaidCheckbox
/*0x3d8*/ CStmlWnd* m_noneLabel; // FLW_NoneFoundLabel

public:
	// CListWnd* findLocationList;
	CListWnd* _get_findLocationList() { return GetNewUIEngineWindow(m_findLocationList, findLocationListComponent); }
	const CListWnd* _get_findLocationList() const { return GetNewUIEngineWindow(m_findLocationList, findLocationListComponent); }
	__declspec(property(get = _get_findLocationList)) CListWnd* findLocationList;

	// CCheckBoxWnd* filterLocationsCheckBox;
	CCheckBoxWnd* _get_filterLocationsCheckBox() { return GetNewUIEngineWindow(m_filterLocationsCheckBox, filterLocationsCheckBoxComponent); }
	__declspec(property(get = _get_filterLocationsCheckBox)) CCheckBoxWnd* filterLocationsCheckBox;

	// CCheckBoxWnd* filterGroupCheckBox;
	CCheckBoxWnd* _get_filterGroupCheckBox() { return GetNewUIEngineWindow(m_filterGroupCheckBox, filterGroupCheckBoxComponent); }
	__declspec(property(get = _get_filterGroupCheckBox)) CCheckBoxWnd* filterGroupCheckBox;

	// CCheckBoxWnd* filterRaidCheckBox;
	CCheckBoxWnd* _get_filterRaidCheckBox() { return GetNewUIEngineWindow(m_filterRaidCheckBox, filterRaidCheckBoxComponent); }
	__declspec(property(get = _get_filterRaidCheckBox)) CCheckBoxWnd* filterRaidCheckBox;

	// CStmlWnd* noneLabel;
	CStmlWnd* _get_noneLabel() { return GetNewUIEngineWindow(m_noneLabel, noneLabelComponent); }
	__declspec(property(get = _get_noneLabel)) CStmlWnd* noneLabel;

/*0x3e0*/ UIListComponent findLocationListComponent;       // 0xa0->0x480
/*0x480*/ UIButtonComponent filterLocationsCheckBoxComponent; // 0xa8->0x528
/*0x528*/ UIButtonComponent filterGroupCheckBoxComponent;  // 0xa8->0x5d0
/*0x5d0*/ UIButtonComponent filterRaidCheckBoxComponent;   // 0xa8->0x678
/*0x678*/ UIStmlComponent noneLabelComponent;     // 0xa0->0x718
/*0x718*/ uint32_t lastUpdateTime;
/*0x71c*/ uint32_t lastFindRequestTime;
/*0x720*/ bool didFindRequest;
/*0x721*/ uint8_t Unknown0x721[0x7];               // pad to array region
/*0x728*/ PlayerDataArray unfilteredPlayerList;
/*0x740*/ PlayerDataArray filteredGroupPlayerList;
/*0x758*/ PlayerDataArray unfilteredRaidPlayerList;
/*0x770*/ POIDataArray unfilteredPOIDataList;
/*0x788*/ ZoneConnectionDataArray unfilteredZoneConnectionList;
/*0x7a0*/ FindableReferenceList referenceList;
/*0x7b8*/ uint32_t lastId;
/*0x7bc*/ bool dataRequested;
/*0x7bd*/ bool playerListDirty;
/*0x7be*/ bool zoneConnectionsRcvd;
/*0x7c0*/
};

SIZE_CHECK(CFindLocationWnd, CFindLocationWnd_size);

//============================================================================
// CFileSelectionWnd
//============================================================================

class [[offsetcomments]] CFileSelectionWnd : public CSidlScreenWnd, public WndEventHandler
{
	FORCE_SYMBOLS;

public:
	CFileSelectionWnd(CXWnd*);
	virtual ~CFileSelectionWnd();

	virtual int WndNotification(CXWnd*, uint32_t, void*) override;

	// would be LPITEMIDLIST from shtypes.h
	using LPITEMIDLIST = void*;

	EQLIB_OBJECT CXStr GetSelectedFile(int);
	EQLIB_OBJECT int GetSelectedFileCount();
	EQLIB_OBJECT void Callback(bool);
	EQLIB_OBJECT bool DirectoryEmpty(IShellFolder*, LPITEMIDLIST);
	EQLIB_OBJECT unsigned long GetPath(IShellFolder*, LPITEMIDLIST, bool, CXStr&);
	EQLIB_OBJECT void ClearFileList();
	EQLIB_OBJECT void GoSubdirectory(LPITEMIDLIST);
	EQLIB_OBJECT void MakeFilePath();
	EQLIB_OBJECT void UpdateButtons();
	EQLIB_OBJECT void UpdateFileList();

	EQLIB_OBJECT int Open(CXWnd* pWnd, int flags);

/*0x2d4*/ int Unknown0x24c;
/*0x2d8*/ CXWnd* pWndCaller;
/*0x2e0*/ CListWnd* pListFiles;
/*0x2e8*/ CEditWnd* pEditEntry;
/*0x2f0*/ CComboWnd* pComboDirHistory;
/*0x2f8*/ CButtonWnd* pUpButton;
/*0x300*/ CButtonWnd* pOKButton;
/*0x308*/ CButtonWnd* pCancelButton;
/*0x310*/ int Flags;
/*0x318*/ CXStr SelectedFile;
/*0x320*/ IShellFolder* ShellFolder;
/*0x328*/ CXStr CurrentDir;
	// jun09 tail STRUCTURED per BOB binary + field-map (NOT a flat buffer): stored ptrs/scalars laid; opaque ONLY no-store char-buffer gaps.
/*0x330*/ uint8_t Unknown0x330[0x68];            // no-store gap (char/state buffer)
/*0x398*/ void* Unknown0x398;                    // field-map 398:8 (MOV [RDI+0x398],RAX)
/*0x3a0*/ uint8_t Unknown0x3a0[0x3f8];           // no-store gap (dir char buffer) up to component array
/*0x798*/ void* ComponentArray0x798[0x80];       // OTTO decode (call 1403dd998): 128 x 0x8 = 0x400; elem ctor 0x1400570b0 / dtor 0x140056e30 (8-byte wrapper); 0x798..0xb98
/*0xb98*/ void* Unknown0xb98;                    // field-map b98:8 (MOV [RDI+0xb98],RAX)
/*0xba0*/ uint8_t Unknown0xba0[0x3f8];           // no-store gap (char buffer)
/*0xf98*/ int Unknown0xf98;                      // field-map f98:4
/*0xf9c*/ uint8_t Unknown0xf9c[0x4];             // gap
/*0xfa0*/ void* Unknown0xfa0;                    // field-map fa0:8
/*0xfa8*/ int Unknown0xfa8;                      // field-map fa8:4
/*0xfac*/ int Unknown0xfac;                      // field-map fac:4
/*0xfb0*/ int Unknown0xfb0;                      // field-map fb0:4
/*0xfb4*/ int Unknown0xfb4;                      // field-map fb4:4
/*0xfb8*/ void* Unknown0xfb8;                    // field-map fb8:8
/*0xfc0*/ int Unknown0xfc0;                      // field-map fc0:4
/*0xfc4*/ uint8_t Unknown0xfc4[0x4];             // pad to op_new 0xfc8
/*0xfc8*/
};
constexpr size_t CFileSelectionWnd_size = 0xfc8; // jun09 op_new CONFIRMED 0xfc8 (FileSelectionWnd @0x1403dd8e0); +0x10 head + STRUCTURED tail (ptrs/comp-array/scalars from field-map, char-buffer gaps opaque)
SIZE_CHECK(CFileSelectionWnd, CFileSelectionWnd_size);

//============================================================================
// CFriendsWnd
//============================================================================

class CFriendsWnd : public CSidlScreenWnd
{
public:
	CFriendsWnd(CXWnd*);
	virtual ~CFriendsWnd();

	virtual int WndNotification(CXWnd*, uint32_t, void*) override;

	EQLIB_OBJECT void UpdateFriendsList();
	EQLIB_OBJECT void UpdateIgnoreList();
	EQLIB_OBJECT void AddFriend();
	EQLIB_OBJECT void AddIgnore();
	EQLIB_OBJECT void UpdateButtons();
};

//============================================================================
// CGemsGameWnd
//============================================================================

struct GemsBlock;

class CGemsGameWnd : public CSidlScreenWnd
{
public:
	EQLIB_OBJECT CGemsGameWnd(CXWnd*);
	virtual ~CGemsGameWnd();

	virtual int HandleLButtonUp(const CXPoint&, uint32_t) override;
	virtual int OnProcessFrame() override;
	virtual int PostDraw() override;
	virtual int WndNotification(CXWnd*, uint32_t, void*) override;

	EQLIB_OBJECT void MoveCurBlock(int);
	EQLIB_OBJECT bool BadSpecial(int) const;
	EQLIB_OBJECT bool LegalBlockMove(int, int, int, int, bool);
	EQLIB_OBJECT int GetRndBlockImage();
	EQLIB_OBJECT void ActivateSpecialMode(int);
	EQLIB_OBJECT void AdvanceToNextWave();
	EQLIB_OBJECT void CheckForMatches(int, int);
	EQLIB_OBJECT void CheckForNewHighScore();
	EQLIB_OBJECT void ClearBlock(GemsBlock*);
	EQLIB_OBJECT void ClearHighScores();
	EQLIB_OBJECT void DoMatchScore(int);
	EQLIB_OBJECT void DrawSpellGem(int, const CXRect&, int, bool) const;
	EQLIB_OBJECT void GetNextBlock();
	EQLIB_OBJECT void MakeBlockDrop(int, int, int);
	EQLIB_OBJECT void MarkHigherBlocksFalling(int, int);
	EQLIB_OBJECT void ProcessMatches(int);
	EQLIB_OBJECT void ProcessMoveCurBlock(int);
	EQLIB_OBJECT void ReadHighScores();
	EQLIB_OBJECT void Restart();
	EQLIB_OBJECT void SetNextUpdate();
	EQLIB_OBJECT void SetPause(bool);
	EQLIB_OBJECT void TogglePause();
	EQLIB_OBJECT void Update();
	EQLIB_OBJECT void UpdateDisplay();
	EQLIB_OBJECT void WriteHighScores();
};

//============================================================================
// CGiveWnd
//============================================================================

constexpr size_t CGiveWnd_size = 0xb50; // jun09 op_new 0xb50 (ctor 0x1403e8e80; +0x10; childmap GVW_*)

class [[offsetcomments]] CGiveWnd : public CGFScreenWnd, public PopDialogHandler, public WndEventHandler
{
	FORCE_SYMBOLS

public:
	CGiveWnd(CXWnd*);
	virtual ~CGiveWnd();

	virtual int OnProcessFrame() override;
	virtual int PostDraw() override;
	virtual int WndNotification(CXWnd*, uint32_t, void*) override;

	EQLIB_OBJECT void UpdateGiveDisplay();

	//----------------------------------------------------------------------------
	// data members

private:
	// If New UI is enabled, these members will not be initialized, and the components will be used instead. Use the
	// Accessors below instead.
/*0x3c8*/ CButtonWnd* m_moneyButton[eNumMoneySlotTypes];
/*0x3e8*/ CButtonWnd* m_tradeButton;
/*0x3f0*/ CButtonWnd* m_cancelButton;
/*0x3f8*/ CStmlWnd* m_giveNameLabel;
/*0x400*/ CInvSlotWnd* m_invSlotWnd[MAX_GIVE_SLOTS];

public:
	// CButtonWnd* pMoneyButton[4];
	CButtonWnd* _get_moneyButton(int idx) { return idx < eNumMoneySlotTypes ? GetNewUIEngineWindow(m_moneyButton[idx], MoneyButtonComponent[idx]) : nullptr; }
	__declspec(property(get = _get_moneyButton)) CButtonWnd* MoneyButton[];

	// CButtonWnd* TradeButton;
	CButtonWnd* _get_tradeButton() { return GetNewUIEngineWindow(m_tradeButton, TradeButtonComponent); }
	__declspec(property(get = _get_tradeButton)) CButtonWnd* TradeButton;

	// CButtonWnd* CancelButton;
	CButtonWnd* _get_cancelButton() { return GetNewUIEngineWindow(m_cancelButton, CancelButtonComponent); }
	__declspec(property(get = _get_cancelButton)) CButtonWnd* CancelButton;

	// CStmlWnd* NPCNameLabel;
	CStmlWnd* _get_otherNameLabel() { return GetNewUIEngineWindow(m_giveNameLabel, GiveNameComponent); }
	__declspec(property(get = _get_otherNameLabel)) CStmlWnd* NPCNameLabel;

	// CInvSlotWnd* pInvSlotWnd[MAX_GIVE_SLOTS];
	CInvSlotWnd* _get_invSlotWnd(int idx) { return idx < MAX_GIVE_SLOTS ? GetNewUIEngineWindow(m_invSlotWnd[idx], ItemSlotComponents[idx]) : nullptr; }
	__declspec(property(get = _get_invSlotWnd)) CInvSlotWnd* pInvSlotWnd[];

/*0x420*/ UIButtonComponent MoneyButtonComponent[eNumMoneySlotTypes];
/*0x6c0*/ UIButtonComponent TradeButtonComponent;
/*0x768*/ UIButtonComponent CancelButtonComponent;
/*0x810*/ UIStmlComponent GiveNameComponent;
/*0x8b0*/ UIInvSlotComponent ItemSlotComponents[MAX_GIVE_SLOTS];
/*0xb50*/
};

SIZE_CHECK(CGiveWnd, CGiveWnd_size);

//============================================================================
// CGroupSearchFiltersWnd
//============================================================================

// todo: not mapped or cleaned up
class CGroupSearchFiltersWnd : public CSidlScreenWnd
{
public:
	EQLIB_OBJECT CGroupSearchFiltersWnd(CXWnd*);
	EQLIB_OBJECT bool ShouldFilterPlayer(const char*, const char*) const;
	EQLIB_OBJECT bool UseExclusiveSearchMode() const;
	EQLIB_OBJECT void HandleAddDesiredGuild();
	EQLIB_OBJECT void HandleAddExcludedGuild();
	EQLIB_OBJECT void HandleDesiredGuildsSelected();
	EQLIB_OBJECT void HandleExcludeGuildsSelected();
	EQLIB_OBJECT void HandleRemoveAllDesiredGuilds();
	EQLIB_OBJECT void HandleRemoveAllExcludedGuilds();
	EQLIB_OBJECT void HandleRemoveDesiredGuild();
	EQLIB_OBJECT void HandleRemoveExcludedGuild();
	EQLIB_OBJECT void HandleUseFriendsListSelected();
	EQLIB_OBJECT void HandleUseIgnoreListSelected();

	// virtual
	EQLIB_OBJECT ~CGroupSearchFiltersWnd();
	EQLIB_OBJECT int OnProcessFrame();
	EQLIB_OBJECT int WndNotification(CXWnd*, uint32_t, void*);

	// private
	EQLIB_OBJECT bool GuildIsInDesiredGuildsList(const char*) const;
	EQLIB_OBJECT bool GuildIsInExcludedGuildsList(const char*) const;
	EQLIB_OBJECT bool Load();
	EQLIB_OBJECT bool NameIsInFriendsList(const char*) const;
	EQLIB_OBJECT bool NameIsInIgnoreList(const char*) const;
	EQLIB_OBJECT bool UseDesiredGuilds() const;
	EQLIB_OBJECT bool UseExcludedGuilds() const;
	EQLIB_OBJECT bool UseFriendsList() const;
	EQLIB_OBJECT bool UseIgnoreList() const;
	EQLIB_OBJECT void ClearUiPointers();
	EQLIB_OBJECT void FetchUiPointers();
	EQLIB_OBJECT void InitPieces();
	EQLIB_OBJECT void Save() const;
};

//============================================================================
// CGroupSearchWnd
//============================================================================

struct LfgGroupResult;
class SListWndSortInfo;
struct LfgPlayerData;
struct LfgPlayerResult;

// todo: not mapped or cleaned up
class CGroupSearchWnd : public CSidlScreenWnd
{
public:
	EQLIB_OBJECT CGroupSearchWnd(CXWnd*);
	EQLIB_OBJECT void AddGroupResult(const LfgGroupResult*);
	EQLIB_OBJECT void AddPlayerResult(const LfgPlayerResult*);
	EQLIB_OBJECT void HandleDeselectAllClasses();
	EQLIB_OBJECT void HandleDoubleClickedOnPlayer(const char*);
	EQLIB_OBJECT void HandleGroupInfoPost();
	EQLIB_OBJECT void HandleGroupInfoRemove();
	EQLIB_OBJECT void HandleGroupInfoUpdate();
	EQLIB_OBJECT void HandleGroupMakeupChanged();
	EQLIB_OBJECT void HandleGroupResultColSelected(int);
	EQLIB_OBJECT void HandleGroupResultRowSelected(int);
	EQLIB_OBJECT void HandleNumericSort(SListWndSortInfo*);
	EQLIB_OBJECT void HandleOpenFiltersWindow();
	EQLIB_OBJECT void HandlePlayerInfoPost();
	EQLIB_OBJECT void HandlePlayerInfoRemove();
	EQLIB_OBJECT void HandlePlayerInfoUpdate();
	EQLIB_OBJECT void HandlePlayerResultColSelected(int);
	EQLIB_OBJECT void HandleQueryingForGroups();
	EQLIB_OBJECT void HandleQueryingForPlayers();
	EQLIB_OBJECT void HandleSelectAllClasses();
	EQLIB_OBJECT void ResetGroupList();
	EQLIB_OBJECT void ResetPlayerList();
	EQLIB_OBJECT void SendServerLfgOff();
	EQLIB_OBJECT void SendServerLfgOn();
	EQLIB_OBJECT void SendServerLfpOff();
	EQLIB_OBJECT void SendServerLfpOn();

	// virtual
	EQLIB_OBJECT ~CGroupSearchWnd();
	EQLIB_OBJECT int OnProcessFrame();
	EQLIB_OBJECT int WndNotification(CXWnd*, uint32_t, void*);

	// private
	EQLIB_OBJECT bool IsLevelRangeValid(int, int) const;
	EQLIB_OBJECT bool PlayerShouldBeFiltered(const LfgPlayerData*) const;
	EQLIB_OBJECT int CheckIfCurrentLfgInfoIsValid() const;
	EQLIB_OBJECT int CheckIfCurrentLfpInfoIsValid() const;
	EQLIB_OBJECT int GetDesiredClassesFlag() const;
	EQLIB_OBJECT int GetDesiredGroupMaxLevel() const;
	EQLIB_OBJECT int GetDesiredGroupMinLevel() const;
	EQLIB_OBJECT int GetDesiredPlayerMaxLevel() const;
	EQLIB_OBJECT int GetDesiredPlayerMinLevel() const;
	EQLIB_OBJECT int GetEqClassType(int) const;
	EQLIB_OBJECT int GroupInfoPageOnProcessFrame();
	EQLIB_OBJECT int GroupInfoPageWndNotification(CXWnd*, uint32_t, void*);
	EQLIB_OBJECT int GroupListPageOnProcessFrame();
	EQLIB_OBJECT int GroupListPageWndNotification(CXWnd*, uint32_t, void*);
	EQLIB_OBJECT int PlayerInfoPageOnProcessFrame();
	EQLIB_OBJECT int PlayerInfoPageWndNotification(CXWnd*, uint32_t, void*);
	EQLIB_OBJECT int PlayerListPageOnProcessFrame();
	EQLIB_OBJECT int PlayerListPageWndNotification(CXWnd*, uint32_t, void*);
	EQLIB_OBJECT int RedirectOnProcessFrameTo(CPageWnd*);
	EQLIB_OBJECT int RedirectWndNotificationTo(CPageWnd*, CXWnd*, uint32_t, void*);
	EQLIB_OBJECT void ClearUiPointers();
	EQLIB_OBJECT void FetchUiPointers();
	EQLIB_OBJECT void FilterOutBadWords(const char*, char*) const;
	EQLIB_OBJECT void GetDefaultLfgLevelRange(const PcClient*, int*, int*) const;
	EQLIB_OBJECT void GetDefaultLfpLevelRange(const PcClient*, int*, int*) const;
	EQLIB_OBJECT void InitLfg();
	EQLIB_OBJECT void InitLfp();
	EQLIB_OBJECT void LockQueryButtonAtTime(long);
	EQLIB_OBJECT void PopUpErrorMessage(int) const;
	EQLIB_OBJECT void ShowGroupDetails(LfgGroupResult const*);
	EQLIB_OBJECT void UpdateGroupLabel();
	EQLIB_OBJECT void UpdateLfgPostingStatus();
	EQLIB_OBJECT void UpdateLfpPostingStatus();
	EQLIB_OBJECT void UpdatePlayerLabel();
	EQLIB_OBJECT void UpdateRemainingQueryLockedTime(long);
};

//============================================================================
// CGroupWnd
//============================================================================

constexpr size_t CGroupWnd_size = 0x4728; // jun09 derived (was 0x4718; +0x10 = CGFScreenWnd base growth 0x3a8->0x3b8, CSidlScreenWnd 0x2c0->0x2d0). own@0x3b8. op_new @0x14019e054.

class [[offsetcomments]] CGroupWnd : public CGFScreenWnd
{
	FORCE_SYMBOLS

public:
	CGroupWnd(CXWnd*);
	virtual ~CGroupWnd();

	virtual int Draw() override;
	virtual int OnProcessFrame() override;
	virtual int WndNotification(CXWnd*, uint32_t, void*) override;
	virtual void LoadIniInfo() override;
	virtual void StoreIniInfo() override;

	EQLIB_OBJECT void CreateLocalMenu();
	EQLIB_OBJECT void KeyMapUpdated();
	EQLIB_OBJECT void SetInvited(bool);
	EQLIB_OBJECT void UpdateContextMenu();

	EQLIB_OBJECT void UpdateButtons();
	EQLIB_OBJECT void UpdateDisplay(int Index, PlayerClient* groupmember, COLORREF NameColor, UINT RoleBits);

	//----------------------------------------------------------------------------
	// data members

private:
	// If New UI is enabled, these members will not be initialized, and the components will be used instead. Use the
	// Accessors below instead.
/*0x3b8*/ CButtonWnd* m_inviteButton; // InviteButton
/*0x3c0*/ CButtonWnd* m_disbandButton; // DisbandButton
/*0x3c8*/ CButtonWnd* m_followButton; // FollowButton
/*0x3d0*/ CButtonWnd* m_declineButton; // DeclineButton
/*0x3d8*/ CButtonWnd* m_lfgButton; // LFGButton
/*0x3e0*/ CGaugeWnd* m_hpGauge[6]; // Gauge%d
/*0x410*/ CGaugeWnd* m_petGauge[6]; // PetGauge%d
/*0x440*/ CGaugeWnd* m_manaGauge[6]; // ManaGauge%d
/*0x470*/ CGaugeWnd* m_enduranceGauge[6]; // STAGauge%d
/*0x4a0*/ CLabel* m_hpLabel[6]; // HPLabel%d
/*0x4d0*/ CLabel* m_hpPercLabel[6]; // HPPercLabel%d
/*0x500*/ CLabel* m_manaLabel[6]; // ManaLabel%d
/*0x530*/ CLabel* m_manaPercLabel[6]; // ManaPercLabel%d
/*0x560*/ CLabel* m_enduranceLabel[6]; // STALabel%d
/*0x590*/ CLabel* m_endurancePercLabel[6]; // STAPercLabel%d
/*0x5c0*/ COLORREF m_hpTextColor[6];
/*0x5d8*/ CButtonWnd* m_groupTankButton[6]; // GroupRoleTank%d
/*0x608*/ CButtonWnd* m_groupAssistButton[6]; // GroupRoleAssist%d
/*0x638*/ CButtonWnd* m_groupPullerButton[6]; // GroupRolePuller%d
/*0x668*/ CButtonWnd* m_groupMarkNPCButton[6]; // GroupRoleMarkNPC%d
/*0x698*/ CLabel* m_aggroPercLabel[6]; // GW_AggroPctPlayer%d

public:
	// CButtonWnd* InviteButton;
	CButtonWnd* _get_inviteButton() { return GetNewUIEngineWindow(m_inviteButton, inviteButtonComponent); }
	__declspec(property(get = _get_inviteButton)) CButtonWnd* InviteButton;
	// CButtonWnd* DisbandButton;
	CButtonWnd* _get_disbandButton() { return GetNewUIEngineWindow(m_disbandButton, disbandButtonComponent); }
	__declspec(property(get = _get_disbandButton)) CButtonWnd* DisbandButton;
	// CButtonWnd* FollowButton;
	CButtonWnd* _get_followButton() { return GetNewUIEngineWindow(m_followButton, followButtonComponent); }
	__declspec(property(get = _get_followButton)) CButtonWnd* FollowButton;
	// CButtonWnd* DeclineButton;
	CButtonWnd* _get_declineButton() { return GetNewUIEngineWindow(m_declineButton, declineButtonComponent); }
	__declspec(property(get = _get_declineButton)) CButtonWnd* DeclineButton;
	// CButtonWnd* LFGButton;
	CButtonWnd* _get_lfgButton() { return GetNewUIEngineWindow(m_lfgButton, lfgButtonComponent); }
	__declspec(property(get = _get_lfgButton)) CButtonWnd* LFGButton;
	// CGaugeWnd* HPGauge[6];
	CGaugeWnd* _get_hpGauge(int idx) { return idx < 6 ? GetNewUIEngineWindow(m_hpGauge[idx], hpGaugeComponent[idx]) : nullptr; }
	__declspec(property(get = _get_hpGauge)) CGaugeWnd* HPGauge[];
	// CGaugeWnd* PetGauge[6];
	CGaugeWnd* _get_petGauge(int idx) { return idx < 6 ? GetNewUIEngineWindow(m_petGauge[idx], petGaugeComponent[idx]) : nullptr; }
	__declspec(property(get = _get_petGauge)) CGaugeWnd* PetGauge[];
	// CGaugeWnd* ManaGauge[6];
	CGaugeWnd* _get_manaGauge(int idx) { return idx < 6 ? GetNewUIEngineWindow(m_manaGauge[idx], manaGaugeComponent[idx]) : nullptr; }
	__declspec(property(get = _get_manaGauge)) CGaugeWnd* ManaGauge[];
	// CGaugeWnd* EnduranceGauge[6];
	CGaugeWnd* _get_enduranceGauge(int idx) { return idx < 6 ? GetNewUIEngineWindow(m_enduranceGauge[idx], enduranceGaugeComponent[idx]) : nullptr; }
	__declspec(property(get = _get_enduranceGauge)) CGaugeWnd* EnduranceGauge[];
	// CLabel* HPLabel[6];
	CLabel* _get_hpLabel(int idx) { return idx < 6 ? GetNewUIEngineWindow(m_hpLabel[idx], hpLabelComponent[idx]) : nullptr; }
	__declspec(property(get = _get_hpLabel)) CLabel* HPLabel[];
	// CLabel* HPPercLabel[6];
	CLabel* _get_hpPercLabel(int idx) { return idx < 6 ? GetNewUIEngineWindow(m_hpPercLabel[idx], hpPercLabelComponent[idx]) : nullptr; }
	__declspec(property(get = _get_hpPercLabel)) CLabel* HPPercLabel[];
	// CLabel* ManaLabel[6];
	CLabel* _get_manaLabel(int idx) { return idx < 6 ? GetNewUIEngineWindow(m_manaLabel[idx], manaLabelComponent[idx]) : nullptr; }
	__declspec(property(get = _get_manaLabel)) CLabel* ManaLabel[];
	// CLabel* ManaPercLabel[6];
	CLabel* _get_manaPercLabel(int idx) { return idx < 6 ? GetNewUIEngineWindow(m_manaPercLabel[idx], manaPercLabelComponent[idx]) : nullptr; }
	__declspec(property(get = _get_manaPercLabel)) CLabel* ManaPercLabel[];
	// CLabel* EnduranceLabel[6];
	CLabel* _get_enduranceLabel(int idx) { return idx < 6 ? GetNewUIEngineWindow(m_enduranceLabel[idx], enduranceLabelComponent[idx]) : nullptr; }
	__declspec(property(get = _get_enduranceLabel)) CLabel* EnduranceLabel[];
	// CLabel* EndurancePercLabel[6];
	CLabel* _get_endurancePercLabel(int idx) { return idx < 6 ? GetNewUIEngineWindow(m_endurancePercLabel[idx], endurancePercLabelComponent[idx]) : nullptr; }
	__declspec(property(get = _get_endurancePercLabel)) CLabel* EndurancePercLabel[];
	// CButtonWnd* GroupTankButton[6];
	CButtonWnd* _get_groupTankButton(int idx) { return idx < 6 ? GetNewUIEngineWindow(m_groupTankButton[idx], groupTankButtonComponent[idx]) : nullptr; }
	__declspec(property(get = _get_groupTankButton)) CButtonWnd* GroupTankButton[];
	// CButtonWnd* GroupAssistButton[6];
	CButtonWnd* _get_groupAssistButton(int idx) { return idx < 6 ? GetNewUIEngineWindow(m_groupAssistButton[idx], groupAssistButtonComponent[idx]) : nullptr; }
	__declspec(property(get = _get_groupAssistButton)) CButtonWnd* GroupAssistButton[];
	// CButtonWnd* GroupPullerButton[6];
	CButtonWnd* _get_groupPullerButton(int idx) { return idx < 6 ? GetNewUIEngineWindow(m_groupPullerButton[idx], groupPullerButtonComponent[idx]) : nullptr; }
	__declspec(property(get = _get_groupPullerButton)) CButtonWnd* GroupPullerButton[];
	// CButtonWnd* GroupMarkNPCButton[6];
	CButtonWnd* _get_groupMarkNPCButton(int idx) { return idx < 6 ? GetNewUIEngineWindow(m_groupMarkNPCButton[idx], groupMarkNPCButtonComponent[idx]) : nullptr; }
	__declspec(property(get = _get_groupMarkNPCButton)) CButtonWnd* GroupMarkNPCButton[];
	// CLabel* AggroPercLabel[6];
	CLabel* _get_aggroPercLabel(int idx) { return idx < 6 ? GetNewUIEngineWindow(m_aggroPercLabel[idx], aggroPercLabelComponent[idx]) : nullptr; }
	__declspec(property(get = _get_aggroPercLabel)) CLabel* AggroPercLabel[];

/*0x6c8*/ UIButtonComponent inviteButtonComponent;
/*0x770*/ UIButtonComponent disbandButtonComponent;
/*0x818*/ UIButtonComponent followButtonComponent;
/*0x8c0*/ UIButtonComponent declineButtonComponent;
/*0x968*/ UIButtonComponent lfgButtonComponent;
/*0xa10*/ UIGaugeComponent hpGaugeComponent[6];
/*0xdd0*/ UIGaugeComponent petGaugeComponent[6];
/*0x1190*/ UIGaugeComponent manaGaugeComponent[6];
/*0x1550*/ UIGaugeComponent enduranceGaugeComponent[6];
/*0x1910*/ UILabelComponent hpLabelComponent[6]; // HPLabel%d
/*0x1cd0*/ UILabelComponent hpPercLabelComponent[6];
/*0x2090*/ UILabelComponent manaLabelComponent[6];
/*0x2450*/ UILabelComponent manaPercLabelComponent[6];
/*0x2810*/ UILabelComponent enduranceLabelComponent[6];
/*0x2bd0*/ UILabelComponent endurancePercLabelComponent[6]; // STAPercLabel%d
/*0x2f90*/ UILabelComponent gaugeLabelComponent[6]; // GaugeLabel%d
/*0x3350*/ UIButtonComponent groupTankButtonComponent[6];
/*0x3740*/ UIButtonComponent groupAssistButtonComponent[6];
/*0x3b30*/ UIButtonComponent groupPullerButtonComponent[6];
/*0x3f20*/ UIButtonComponent groupMarkNPCButtonComponent[6];
/*0x4310*/ UILabelComponent aggroPercLabelComponent[6];

/*0x46d0*/ long Timer;
/*0x46d8*/ CContextMenu* GroupContextMenu;
/*0x46e0*/ bool bPetbars;
/*0x46e1*/ bool bManabars;
/*0x46e2*/ bool bEndurancebars;
/*0x46e3*/ bool bAggroPct;
/*0x46e4*/ int PetBarIndex;
/*0x46e8*/ int ManaBarIndex;
/*0x46ec*/ int EnduranceBarIndex;
/*0x46f0*/ int AggroPctIndex;
/*0x46f4*/ int RoleSeparatorID;
/*0x46f8*/ int RoleSelectMenu;
/*0x46fc*/ int RoleSelectMenuID;
/*0x4700*/ bool bPlayerInvited;
/*0x4708*/ eqstd::string strUnknown;
/*0x4728*/
};

SIZE_CHECK(CGroupWnd, CGroupWnd_size);

//============================================================================
// CGuildMgmtWnd
//============================================================================

// todo: update, some of this is obsolete
struct [[offsetcomments]] GuildMember
{
	// Start of GuildMember
/*0x0*/ GuildMember* pNext;
/*0x8*/ bool bOnline;
/*0xa*/ WORD ZoneID;
/*0xc*/ WORD Instance;
/*0x10*/ DWORD PlayerSerial;
/*0x14*/ bool bMainProfile;
/*0x15*/ bool bOfflineMode;
/*0x16*/ char Name[0x40];
/*0x58*/ int Level;
/*0x5c*/ int Flags; //1=banker, 2=alt
/*0x60*/ DWORD Class;
/*0x64*/ DWORD Rank; //0=member 1=officer 2=leader
/*0x68*/ char PlayerHandle[0x20];
/*0x88*/ char PlayerComments[0x100];
/*0x188*/ DWORD LastLoginTime;
/*0x190*/ EqGuid PlayerGuild;//size is 8
/*0x198*/ bool bGuildShowSprite;
/*0x199*/ bool bTributeStatus;//active on/off
/*0x19a*/ bool bTrophyStatus;//active on/off
/*0x19c*/ int TributeDonations;
/*0x1a0*/ DWORD LastDonation;//timestamp
/*0x3a8*/ // end of GuildMember
	// start of GuildMemberClient
/*0x1a4*/ char PublicNote[0x100];
/*0x2a4*/ char PersonalNote[0x100];
/*0x3a4*/ bool bTributeOptIn;
/*0x3a5*/ bool bTrophyTributeOptIn;
/*0x3a8*/
};

inline namespace deprecated {
	using GUILDMEMBERCLIENT DEPRECATE("Use GuildMember instead of GUILDMEMBERCLIENT") = GuildMember;
	using PGUILDMEMBERCLIENT DEPRECATE("Use GuildMember* instead of PGUILDMEMBERCLIENT") = GuildMember*;
	using GUILDMEMBERINFO DEPRECATE("Use GuildMember instead of GUILDMEMBERINFO") = GuildMember;
	using PGUILDMEMBERINFO DEPRECATE("Use GuildMember* instead of PGUILDMEMBERINFO") = GuildMember*;
}

// FIXME: Technically part of a HashMap of some kind
struct [[offsetcomments]] GuildNameEntry
{
/*0x0*/ EqGuid Guild_Guid;
/*0x8*/ char Name[0x40];
/*0x48*/ EqGuid Guild_Guid_Copy;
/*0x50*/ GuildNameEntry* pNext;
/*0x58*/ GuildNameEntry* pPrev;
/*0x60*/ GuildNameEntry* pNode1;
/*0x68*/ GuildNameEntry* pANode2;
/*0x70*/
};
constexpr size_t GuildNameEntry_size = 0x70; // plain struct delta-0; 7/7 fields
SIZE_CHECK(GuildNameEntry, GuildNameEntry_size);

struct [[offsetcomments]] GuildBanner
{
/*0x0*/ int Type;
/*0x4*/ int PrimaryFlagPattern;
/*0x8*/ int SecondaryFlagPattern;
/*0xc*/ ARGBCOLOR PrimaryTint;
/*0x10*/ ARGBCOLOR SecondaryTint;
/*0x18*/ eqtime_t TimeRemaining;
/*0x20*/ int ZoneID;
/*0x24*/ CVector3 Loc;
/*0x30*/ int Heading;
/*0x38*/ eqtime_t GracePeriodRemaining;
/*0x40*/ int ModificationCount;
/*0x44*/ int TeleportPlantRestriction;
/*0x48*/ eqtime_t ModifyDate;
/*0x50*/
};

enum GuildRankType
{
	GRT_None,
	GRT_Leader,
	GRT_SeniorOfficer,
	GRT_Officer,
	GRT_SeniorMember,
	GRT_Member,
	GRT_JuniorMember,
	GRT_Initiate,
	GRT_Recruit,

	NumGuildRanks,
};

struct [[offsetcomments]] GuildRank
{
/*0x0*/ GuildRankType Type;
/*0x8*/ CXStr Name;
/*0x10*/
};


template <typename Group>
class GuildRankPermissions : public AccessGroupList<Group>
{
};

enum GuildPermissionType
{
	GPT_None,
	GPT_BannerChange,
	GPT_BannerPlant,
	GPT_BannerRemove,
	GPT_DisplayGuildName,
	GPT_ChangePermissions,
	GPT_ChangeRankNames,
	GPT_InviteMember,
	GPT_PromoteMember,
	GPT_DemoteMember,
	GPT_RemoveMember,
	GPT_EditRecruitingSettings,
	GPT_EditPublicNotes,
	GPT_BankDeposit,
	GPT_BankWithdraw,
	GPT_BankView,
	GPT_BankPromote,
	GPT_BankChangeItemPermission,
	GPT_ChangeMOTD,
	GPT_SeeGuildChat,
	GPT_SpeakGuildChat,
	GPT_SendGuildEMail,
	GPT_TributeChangeSettingsForOthers,
	GPT_TributeChangeActiveBenefit,
	GPT_TrophyTributeChangeSettingsForOthers,
	GPT_TrophyTributeChangeActiveBenefit,
	GPT_ChangeAltFlagForOthers,
	GPT_GuildPlotBuy,
	GPT_GuildPlotSell,
	GPT_ModifyTrophies,
	GPT_DemoteSelf,

	NumGuildPermissionTypes,
};

using GuildRankPermission = AccessGroup<GuildRankType, NumGuildRanks, GRT_None, GuildPermissionType, NumGuildPermissionTypes>;

constexpr size_t GuildBase_size = 0xc08; // jun09 delta-0 (standalone data class, vtable@0x0, no CXWnd base, pure-data)
class [[offsetcomments]] GuildBase
{
public:
	EQLIB_OBJECT GuildBase();
	EQLIB_OBJECT virtual ~GuildBase();

/*0x8*/ int NumGuildMembers;
/*0x10*/ GuildMember* pFirstGuildMember;
/*0x18*/ EqGuid GuildGuid;
/*0x20*/ char Name[0x40];
/*0x60*/ eqtime_t CreationDate;
/*0x68*/ int Active;
/*0x70*/ int64_t GuildID;
/*0x78*/ bool bHasChanged;
/*0x79*/ char GuildMOTD[0x200];
/*0x280*/ SoeUtil::String MOTD_Author;
/*0x298*/ int TributePoints;
/*0x29c*/ BenefitSelection ActiveTributeBenefits[2];
/*0x2ac*/ bool bTributeBenefitsActive;
/*0x2b0*/ BenefitSelection ActiveTrophyTributeBenefits[4];
/*0x2d0*/ bool bTrophyTributeBenefitsActive;
/*0x2d1*/ bool bRenameFlag;
/*0x2d2*/ bool bUnknownFlag;
/*0x2d8*/ GuildBanner Banner;
/*0x328*/ TSafeArrayStatic<uint8_t, 0x320> BitFlags;
/*0x648*/ TSafeArrayStatic<uint8_t, 0x320> PrevBitFlags;
/*0x968*/ char GuildURL[0x200];
/*0xb68*/ char GuildChannel[0x80];
/*0xbe8*/ ArrayClass<GuildRank*> Ranks;
/*0xc00*/ GuildRankPermissions<GuildRankPermission>* RankPermissions;
/*0xc08*/

	ALT_MEMBER_GETTER(GuildMember*, pFirstGuildMember, pMember);
};
SIZE_CHECK(GuildBase, GuildBase_size);

struct guildmotdSet;

constexpr size_t CGuild_size = 0x1440; // jun09 delta-0 (standalone data class, vtable@0x0, no CXWnd base, pure-data)
class [[offsetcomments]] CGuild : public GuildBase
{
public:
/*0xc08*/ eqtime_t LastGuildNameRequest;
/*0xc10*/ HashListSet<GuildNameEntry*, 250> GuildNamesTable;
/*0x1400*/ void* Map[3]; // this is a SoeUtil::Map
/*0x1418*/ int OnlineCount; // 1418
/*0x141c*/ bool bOnlineOutofSync; // 141c
/*0x1420*/ int TributeTimer;
/*0x1424*/ int TributeCost;
/*0x1428*/ bool bTributeCostDirty;
/*0x1429*/ bool bTributeActive;
/*0x142a*/ bool bTributeBenefitsLocked;
/*0x1430*/ eqtime_t TrophyTributeTimer;
/*0x1438*/ int TrophyTributeCost;
/*0x143c*/ bool bTrophyTributeCostOutofSync;
/*0x143d*/ bool bTrophyTributeActive;
/*0x143e*/ bool bTrophyBenefitsLocked;
/*0x1440*/

	EQLIB_OBJECT bool ValidGuildName(int);
	EQLIB_OBJECT char* GetGuildMotd();
	EQLIB_OBJECT char* GetGuildMotdAuthor();
	EQLIB_OBJECT GuildMember* FindMemberByName(const char*);
	EQLIB_OBJECT void DeleteAllMembers();
	EQLIB_OBJECT void DemoteMember(GuildMember*);
	EQLIB_OBJECT void HandleGuildMessage(UdpLibrary::UdpConnection*, uint32_t, char*, uint32_t);
	EQLIB_OBJECT void SendPublicCommentChange(char*, char*);
	EQLIB_OBJECT void SetGuildMotd(guildmotdSet*);

	EQLIB_OBJECT int64_t GetGuildIndex(const char*);

	const char* GetGuildName(int64_t guildId) const
	{
		if (guildId == 0)
			return "Unknown Guild";

		// This is actually a std::function<void(int64_t)> which
		// returns the hash key when the guild id is found.
		char buffer[64] = { 0 };
		bool found = false;

		return GetGuildName(guildId, buffer, &found, false);
	}

private:
	// Use the wrapper above.
	EQLIB_OBJECT const char* GetGuildName(int64_t guildID, void* unknown, bool* found, bool makeRequest) const;

public:

	// private
	EQLIB_OBJECT void AddGuildMember(GuildMember*);
	EQLIB_OBJECT void ChangeGuildMemberName(char*);
	EQLIB_OBJECT void HandleAddGuildMember(char*, int);
	EQLIB_OBJECT void HandleDeleteGuildResponse(char*);
	EQLIB_OBJECT void HandleGuildInvite(UdpLibrary::UdpConnection*, uint32_t, char*, uint32_t);
	EQLIB_OBJECT void HandleMemberLevelUpdate(char*);
	EQLIB_OBJECT void HandleRemoveGuildMember(char*, int);
	EQLIB_OBJECT void InitializeFromDump(char*);
	EQLIB_OBJECT void UpdateGuildMemberOnWindow(GuildMember*);
	EQLIB_OBJECT void UpdateMemberStatus(char*);
	EQLIB_OBJECT void UpdatePublicComment(char*);
};
SIZE_CHECK(CGuild, CGuild_size);


// Size: 0x3d0 (02/18/2004)
class [[offsetcomments]] CGuildMgmtWnd
	: public CSidlScreenWnd
	, public PopDialogHandler
	, public WndEventHandler
	, public CVivoxObserver
{
	FORCE_SYMBOLS

public:
	CGuildMgmtWnd(CXWnd*);
	virtual ~CGuildMgmtWnd();

	virtual int OnProcessFrame() override;
	virtual int WndNotification(CXWnd*, uint32_t, void*) override;

	EQLIB_OBJECT void AddMember(GuildMember*);
	EQLIB_OBJECT void Clean();
	EQLIB_OBJECT void DumpToFile(char*);
	EQLIB_OBJECT void RemoveMember(GuildMember*);
	EQLIB_OBJECT void RenameMember(char*, char*);
	EQLIB_OBJECT void SetMOTD(char*, char*);
	EQLIB_OBJECT void SetPlayerCount(int);
	EQLIB_OBJECT void SortList(int, bool);
	EQLIB_OBJECT void UpdateButtons();
	EQLIB_OBJECT void UpdateListMember(GuildMember*, int);
	EQLIB_OBJECT char* GetPersonalNote(char*);
	EQLIB_OBJECT int FindListMember(GuildMember*);
	EQLIB_OBJECT void CleanAndRefillListWnd(bool);
	EQLIB_OBJECT void CreatePersonalNotesFilename();
	EQLIB_OBJECT void LoadINI();
	EQLIB_OBJECT void LoadPersonalNotes();
	EQLIB_OBJECT void SavePersonalNotes();
	EQLIB_OBJECT void SetPersonalNote(char*, char*);

	//----------------------------------------------------------------------------
	// data members

	// this is all out of date and needs updating
	// jun09 re-derived: STALE data-model REPLACED. 63 child ptrs from OTTO childpairs (firewall-clean string->offset),
	// types by SIDL suffix; 0x4b0-0x520 = embedded block (GT permissions sub-struct, OTTO); data tail opaque -> op_new 0x8f0.
/*0x2e0*/ CLabelWnd* GuildName;
/*0x2e8*/ CButtonWnd* DumpButton;
/*0x2f0*/ CListWnd* MemberList;
/*0x2f8*/ CLabelWnd* MOTDAuthorLabel;
/*0x300*/ CEditWnd* MOTDInput;
/*0x308*/ CButtonWnd* UpdateMOTDButton;
/*0x310*/ CStmlWnd* MOTDViewer;
/*0x318*/ CButtonWnd* MakeLeaderButton;
/*0x320*/ CButtonWnd* PromoteButton;
/*0x328*/ CButtonWnd* DemoteButton;
/*0x330*/ CButtonWnd* RemoveButton;
/*0x338*/ CButtonWnd* InviteButton;
/*0x340*/ CButtonWnd* AltFlagButton;
/*0x348*/ CComboWnd* InviteCombobox;
/*0x350*/ CListWnd* NoteList;
/*0x358*/ CEditWnd* PublicInput;
/*0x360*/ CButtonWnd* UpdatePublicButton;
/*0x368*/ CEditWnd* PersonalInput;
/*0x370*/ CButtonWnd* UpdatePersonalButton;
/*0x378*/ CListWnd* TributeList;
/*0x380*/ CButtonWnd* TributeOptOutButton;
/*0x388*/ CButtonWnd* TrophyTributeOptOutButton;
/*0x390*/ CXWnd* PlayerCount;
/*0x398*/ CButtonWnd* ShowOfflineButton;
/*0x3a0*/ CButtonWnd* HideAltButton;
/*0x3a8*/ CXWnd* Subwindows;
/*0x3b0*/ CPageWnd* TributePage;
/*0x3b8*/ CEditWnd* URLInput;
/*0x3c0*/ CXWnd* UpdateURL;
/*0x3c8*/ CXWnd* GotoURL;
/*0x3d0*/ CEditWnd* ChannelInput;
/*0x3d8*/ CXWnd* UpdateChannel;
/*0x3e0*/ CXWnd* JoinChannel;
/*0x3e8*/ CPageWnd* BannerPage;
/*0x3f0*/ CListWnd* BannerKitList;
/*0x3f8*/ CButtonWnd* PlantBannerButton;
/*0x400*/ CButtonWnd* RemoveBannerButton;
/*0x408*/ CButtonWnd* EditBannerButton;
/*0x410*/ CButtonWnd* Layer1TextureNext;
/*0x418*/ CButtonWnd* Layer2TextureNext;
/*0x420*/ CButtonWnd* Layer1TexturePrev;
/*0x428*/ CButtonWnd* Layer2TexturePrev;
/*0x430*/ CButtonWnd* Layer1ColorBtn;
/*0x438*/ CButtonWnd* Layer2ColorBtn;
/*0x440*/ CXWnd* SaveBannerSettings;
/*0x448*/ CXWnd* CancelEditBanner;
/*0x450*/ CButtonWnd* ShowAllPossibleBannersButton;
/*0x458*/ CLabelWnd* TimeRemainingValueLabel;
/*0x460*/ CComboWnd* BannerFilter;
/*0x468*/ CButtonWnd* RefreshBannerListButton;
/*0x470*/ CXWnd* BannerDescription;
/*0x478*/ CButtonWnd* GT_ViewMembers_Btn;
/*0x480*/ CButtonWnd* GT_ViewRanks_Btn;
/*0x488*/ CButtonWnd* GT_AutoEviction_Btn;
/*0x490*/ CListWnd* GT_Member_List;
/*0x498*/ CListWnd* GT_Rank_List;
/*0x4a0*/ CListWnd* GT_Permissions_List;
/*0x4a8*/ CButtonWnd* GT_Permissions_Checkbox;
/*0x4b0*/ uint8_t Unknown0x4b0[0x70];   // gap (non-child / embedded block)
/*0x520*/ CComboWnd* GT_Ranks_Combobox;
/*0x528*/ uint8_t Unknown0x528[0x8];   // gap (non-child / embedded block)
/*0x530*/ CComboWnd* GT_PerPage_Combobox;
/*0x538*/ CButtonWnd* GT_PageLeft_Button;
/*0x540*/ CLabelWnd* GT_PageIndex_Label;
/*0x548*/ CButtonWnd* GT_PageRight_Button;
/*0x550*/ uint8_t Unknown0x550[0x3a0];   // data tail (stale corpus had pMember/TotalMemberCount/PersonalNotesFilePath/ShowOffline here at stale offsets); opaque -> op_new 0x8f0
/*0x8f0*/
};
constexpr size_t CGuildMgmtWnd_size = 0x8f0; // jun09 op_new CONFIRMED 0x8f0 (oracle GuildManagementWnd @0x1403fd8b0, BOB-verified)
SIZE_CHECK(CGuildMgmtWnd, CGuildMgmtWnd_size);

inline namespace deprecated {
	using EQGUILDWINDOW DEPRECATE("Use CGuildMgmtWnd instead of EQGUILDWINDOW") = CGuildMgmtWnd;
	using PEQGUILDWINDOW DEPRECATE("Use CGuildMgmtWnd* instead of PEQGUILDWINDOW") = CGuildMgmtWnd*;
}

//============================================================================
// CHelpWnd
//============================================================================

class CHelpWnd : public CSidlScreenWnd
{
public:
	CHelpWnd(CXWnd*);
	virtual ~CHelpWnd();

	virtual int HandleKeyboardMsg(uint32_t, uint32_t, bool) override;
	virtual int OnProcessFrame() override;
	virtual int WndNotification(CXWnd*, uint32_t, void*) override;

	EQLIB_OBJECT void SetFile(CXStr);
};

//============================================================================
// CHotButtonWnd
//============================================================================

constexpr size_t CHotButtonWnd_size = 0x468; // jun09 -- half-lay guard
class [[offsetcomments]] CHotButtonWnd : public CSidlScreenWnd, public PopDialogHandler
{
public:
	CHotButtonWnd(CXWnd*);
	virtual ~CHotButtonWnd();

	virtual int Draw() override;
	virtual int OnProcessFrame() override;
	virtual int WndNotification(CXWnd*, uint32_t, void*) override;

	EQLIB_OBJECT void DoHotButton(int buttonIndex, BOOL bMouseClick, const KeyCombo* keyCombo);
	EQLIB_OBJECT void DoHotButtonRightClick(int);
	EQLIB_OBJECT void UpdatePage();
	EQLIB_OBJECT void SetCheck(bool checked);

	//----------------------------------------------------------------------------
	// data members

/*0x2d8*/ CXWnd* NoSpinnerBarTemplate; // HB_NoSpinnerBarTemplate
/*0x2e0*/ CXWnd* HorizontalBarTemplate; // HB_HorizontalBarTemplate
/*0x2e8*/ CXWnd* VerticalBarTemplate; // HB_VerticalBarTemplate
/*0x2f0*/ CTileLayoutWnd* HotButtonLayout; // HB_HotButtonLayout
/*0x2f8*/ CXWnd* HorizontalBarPageButtons; // HB_HorizontalBarPageButtons
/*0x300*/ CXWnd* VerticalBarPageButtons; // HB_VerticalBarPageButtons
/*0x308*/ CButtonWnd* PageUpButton; // HB_PageUpButton
/*0x310*/ CLabel* HorizontalCurrentPageLabel; // HB_HorizontalCurrentPageLabel
/*0x318*/ CButtonWnd* PageDownButton; // HB_PageDownButton
/*0x320*/ CButtonWnd* PageLeftButton; // HB_PageLeftButton
/*0x328*/ CLabel* VerticalCurrentPageLabel; // HB_VerticalCurrentPageLabel
/*0x330*/ CButtonWnd* PageRightButton; // HB_PageRightButton
/*0x338*/ int Page;
// Buttons[12]: REMOVED for may11. The 12 CHotButton widgets are not stored as a member
// array of CHotButtonWnd. They are standalone heap allocations parented by the per-bar
// data struct (CHotButton.pParent at +0x18). Plugins enumerate via vftbl-scan
// 0x140933FA8 + BarIndex/ButtonIndex filter. See forensics/CHotButtonWnd_layout_may11.md.
/*0x340*/ char Unknown_0x330[0x60];  // formerly Buttons[12]; bytes unverified in may11
/*0x3a0*/ int LoadLoadoutContextIndex;
/*0x3a4*/ int SaveLoadoutContextIndex;
/*0x3a8*/ int DeleteLoadoutContextIndex;
/*0x3ac*/ int SaveLoadoutIndex;
/*0x3b0*/ int ShowKeyMapIndex;
/*0x3b4*/ int ShowSpinnerIndex;
/*0x3b8*/ int ButtonPercent;
/*0x3bc*/ int OpenNewBarIndex;
/*0x3c0*/ bool ShowKeyMap;
/*0x3c1*/ bool ShowSpinner;
/*0x3c2*/ bool LastShowSpinner;
/*0x3c4*/ FontStyles TextFontStyle;
// KeyMapStrings[12]: REMOVED for may11. Per-button labels live on each CHotButton
// instance at +0x298 (LastLabel) and +0x2A0 (DefaultLabel), not in a per-window array.
/*0x3c8*/ char Unknown_0x3b8[0x60];  // formerly KeyMapStrings[12]; bytes unverified in may11
// FileButton + 4 CContextMenu* (MainMenu/LoadMenu/SaveMenu/DeleteMenu): REMOVED for may11.
// User-confirmed visually: these UI elements do not exist in modern EQ hotbar window
// (no file menu, no save/load/delete-loadout context menus). Audit names were inherited
// from a pre-redesign era; modern EQ uses right-click context menus spawned dynamically.
/*0x428*/ char Unknown_0x418[0x28];  // formerly FileButton + 4 menu pointers
/*0x450*/ bool HorizontalBar;
/*0x454*/ uint32_t Timer;
/*0x458*/ int HotWindowIndex;
/*0x45c*/ int ConfirmId;
/*0x460*/ bool KeepCurrentSize;
/*0x468*/
};
SIZE_CHECK(CHotButtonWnd, CHotButtonWnd_size);

//============================================================================
// CInspectWnd
//============================================================================

// size: 0x318
constexpr size_t CInspectWnd_size = 0x320; // @sizeof :: 2026-06-09 (test) -- full-store-coverage validated

class [[offsetcomments]] CInspectWnd : public CSidlScreenWnd, public WndEventHandler
{
	FORCE_SYMBOLS

public:
	ItemContainer& GetInspectItems() { return inspectItems; }

/*0x02d8*/ uint32_t nextRefreshTime;
/*0x02dc*/ uint32_t lastInspectTextSaveTime;
/*0x02e0*/ PlayerClient* inspectPlayer;
/*0x02e8*/ ItemContainer inspectItems;
/*0x0310*/ CEditWnd* inspectEdit;
/*0x0318*/ CButtonWnd* doneButton;
/*0x0320*/
};
SIZE_CHECK(CInspectWnd, CInspectWnd_size);

//============================================================================
// C
//============================================================================

constexpr size_t CInventoryWnd_size = 0x22c8; // jun09 op_new 0x22c8 (ctor 0x14040fa90); 4-base MI; interior opaque (childmap @0x14040fa90 has 54 IW_* children)
class [[offsetcomments]] CInventoryWnd : public CGFScreenWnd, public PopDialogHandler, public WndEventHandler, public IObserver
{
public:
	CInventoryWnd(CXWnd*);
	virtual ~CInventoryWnd();

	virtual int Draw() override;
	virtual int HandleLButtonUp(const CXPoint&, uint32_t) override;
	virtual int OnProcessFrame() override;
	virtual int WndNotification(CXWnd*, uint32_t, void*) override;

	EQLIB_OBJECT long GetInventoryQtyFromCoinType(int);
	EQLIB_OBJECT void ClickedMoneyButton(int, int);
	EQLIB_OBJECT void DestroyHeld();
	EQLIB_OBJECT void Init();
	EQLIB_OBJECT void UpdateMoneyDisplay();

/*0x03d0*/ uint8_t Unknown0x03d0[0x1ee8]; // jun09 opaque interior (own-start 0x3d0 after 4 bases CGFScreenWnd0x3b8+PopDialog+WndEvt+IObserver); holds 54 IW_* child ptrs (banked childmap), not carved -- matches upstream opaque model
/*0x22b8*/ int64_t VitalityCap;   // ctor highest this-store MOV dword [RDI+0x22b8] @1404101b9
/*0x22c0*/ int AAVitalityCap;
/*0x22c8*/
};
SIZE_CHECK(CInventoryWnd, CInventoryWnd_size);

inline namespace deprecated {
	using INVENTORYWND DEPRECATE("Use CInventoryWnd instead of INVENTORYWND") = CInventoryWnd;
	using PINVENTORYWND DEPRECATE("Use CInventoryWnd* instead of PINVENTORYWND") = CInventoryWnd*;
}

//============================================================================
// CInvSlotWnd
//============================================================================

class CInvSlotWnd;

constexpr size_t CInvSlot_size = 0x28; // jun09 delta-0 (vtable@0x0 + data, base-less); LastUpdate@0x20 end 0x24 pad to 8 (ptr members)

class [[offsetcomments]] CInvSlot
{
public:
	CInvSlot();
	virtual ~CInvSlot();

	EQLIB_OBJECT bool IllegalBigBank(int);
	EQLIB_OBJECT void HandleLButtonDown(const CXPoint&);
	EQLIB_OBJECT void HandleLButtonUp(const CXPoint& point, bool bHotButton, bool isLinkedItem, const KeyCombo& keyCombo);
	EQLIB_OBJECT void HandleLButtonHeld(const CXPoint& point, const KeyCombo& keyCombo);
	EQLIB_OBJECT void HandleLButtonUpAfterHeld(const CXPoint&);
	EQLIB_OBJECT void HandleRButtonDown(const CXPoint&);
	EQLIB_OBJECT void HandleRButtonUp(const CXPoint& point, bool bHotButton, bool isLinkedItem, const KeyCombo& keyCombo);
	EQLIB_OBJECT void HandleRButtonHeld(const CXPoint&);
	EQLIB_OBJECT void HandleRButtonUpAfterHeld(const CXPoint&);
	EQLIB_OBJECT void SetInvSlotWnd(CInvSlotWnd*);
	EQLIB_OBJECT void SetItem(const ItemPtr&);
	EQLIB_OBJECT void SliderComplete(int);
	EQLIB_OBJECT void UpdateItem();

	EQLIB_OBJECT ItemPtr GetItem();

	// Retrieves the global index of this item slot
	EQLIB_OBJECT ItemGlobalIndex GetItemLocation() const;

	//----------------------------------------------------------------------------
	// data members

/*0x8*/ CInvSlotWnd* pInvSlotWnd;
/*0x10*/ CTextureAnimation* pInvSlotAnimation;
/*0x18*/ int Index; // InvSlot
/*0x1c*/ bool bEnabled; // Valid
/*0x1d*/ bool bUsable;
/*0x1e*/ bool bLocked;
/*0x20*/ uint32_t LastUpdate;
/*0x24*/
};

SIZE_CHECK(CInvSlot, CInvSlot_size);


//----------------------------------------------------------------------------

constexpr int MAX_INV_SLOTS = 4000; // CInvSlotMgr::CreateInvSlot

constexpr size_t CInvSlotMgr_size = 0x7d88; // jun09 delta-0 (base-less mgr, offsets == upstream); SoeUtil::Map 0x18 + unordered_map 0x40

class [[offsetcomments]] CInvSlotMgr
{
public:
	CInvSlotMgr();
	virtual ~CInvSlotMgr();

	EQLIB_OBJECT CInvSlot* CreateInvSlot(CInvSlotWnd*);
	EQLIB_OBJECT CInvSlot* FindInvSlot(int TopSlot, int SubSlot = -1,
		ItemContainerInstance location = eItemContainerPossessions, bool includeLinks = true);

	CInvSlot* FindInvSlot(const ItemGlobalIndex& index, bool includeLinks = true)
	{
		return FindInvSlot(index.GetTopSlot(), index.GetIndex().GetSlot(1), index.GetLocation(), includeLinks);
	}

	EQLIB_OBJECT bool MoveItem(const ItemGlobalIndex& from, const ItemGlobalIndex& to, bool bDebugOut = true,
		bool CombineIsOk = true, bool MoveFromIntoToBag = false, bool MoveToIntoFromBag = false);
	EQLIB_OBJECT void Process();
	EQLIB_OBJECT void SelectSlot(CInvSlot*);
	EQLIB_OBJECT void UpdateSlots();

	//----------------------------------------------------------------------------
	// data members

/*0x0008*/ CInvSlot* SlotArray[MAX_INV_SLOTS];
/*0x7d08*/ int TotalSlots;
/*0x7d0c*/ int LastUpdatedSlot; // Index of last slot updated (limited to 200 per frame)
/*0x7d10*/ unsigned int LastUpdateTime; // Timestamp of last slot update (limited to 5 times a second)
/*0x7d18*/ CInvSlot* pSelectedItem;
/*0x7d20*/ CInvSlot* pFindSelectedItem;
/*0x7d28*/ bool bToggleBagsOpen;
/*0x7d29*/ bool bToggleBankBagsOpen;
/*0x7d30*/ SoeUtil::Map<uint32_t, ItemGlobalIndex> LockedSlots; // Multimap of container slot to locked items in container
/*0x7d48*/ eqstd::unordered_map<eqstd::string, CInvSlot*> RegisteredSlots; // Gameface-registered inventory slots
/*0x7d88*/
};

SIZE_CHECK(CInvSlotMgr, CInvSlotMgr_size);


//----------------------------------------------------------------------------

constexpr size_t CInvSlotWnd_size = 0x460; // @sizeof(CInvSlotWnd) :: 2026-06-09 jun09 dtor 0x14042b270 op_delete(this,0x460); ctor 0x14042af90; vtable 0x140a34d48. Live-validated inst 0x50CEAAE0.

class [[offsetcomments]] CInvSlotWnd : public CButtonWnd
{
	FORCE_SYMBOLS

public:
	CInvSlotWnd(CXWnd* pParent, uint32_t ID, CXRect rect, CTextureAnimation* ptaBackground,
		const ItemGlobalIndex& itemLocation, int ItemOffsetX, int ItemOffsetY);
	virtual ~CInvSlotWnd();

	virtual int Draw() override;
	virtual int DrawTooltip(const CXWnd*) const override;
	virtual int HandleLButtonDown(const CXPoint&, uint32_t) override;
	virtual int HandleLButtonHeld(const CXPoint&, uint32_t) override;
	virtual int HandleLButtonUp(const CXPoint&, uint32_t) override;
	virtual int HandleLButtonUpAfterHeld(const CXPoint&, uint32_t) override;
	virtual int HandleRButtonDown(const CXPoint&, uint32_t) override;
	virtual int HandleRButtonHeld(const CXPoint&, uint32_t) override;
	virtual int HandleRButtonUp(const CXPoint&, uint32_t) override;
	virtual int HandleRButtonUpAfterHeld(const CXPoint&, uint32_t) override;
	virtual int WndNotification(CXWnd*, uint32_t, void*) override;
	virtual void SetAttributesFromSidl(CParamScreenPiece*) override;

	EQLIB_OBJECT void SetInvSlot(CInvSlot*);

	//----------------------------------------------------------------------------
	// data members

	// size: 0xa8 (struct-relative; jun09 ctor 0x14042af90 inits at this+0x348)
	struct [[offsetcomments]] InvSlotComponent
	{
	/*0x00*/ eqstd::string name;
	/*0x20*/ eqstd::string itemPath;
	/*0x40*/ eqstd::string modelPrefix;
	/*0x60*/ CInvSlotWnd* pInvSlot;
	/*0x68*/ uint32_t u32_68;
	/*0x6c*/ uint32_t u32_6c;
	/*0x70*/ uint32_t u32_70;
	/*0x74*/ uint32_t u32_74;
	/*0x78*/ uint32_t u32_78;
	/*0x7c*/ uint32_t color;
	/*0x80*/ uint32_t u32_80;
	/*0x88*/ eqstd::string tooltip;
	/*0xa8*/
	};

/*0x348*/ InvSlotComponent component;
/*0x3f0*/ CTextureAnimation* pBackground;             // ctor arg ptaBackground
/*0x3f8*/ ItemGlobalIndex ItemLocation;               // 0xc; ctor -1 init then arg. WindowType = ItemLocation.Location, InvSlot = ItemLocation.GetTopSlot()
/*0x408*/ ItemPtr LinkedItem;                         // eqstd::shared_ptr<ItemClient> 0x10; _Ptr@0x408 _Rep@0x410 (dtor releases _Rep). If the slot is linked to a specific item
/*0x418*/ int ItemOffsetX;                            // ctor arg
/*0x41c*/ int ItemOffsetY;                            // ctor arg
/*0x420*/ CTextureAnimation* ptItem;
/*0x428*/ int Quantity;
/*0x42c*/ bool bSelected;
/*0x42d*/ bool bFindSelected;
/*0x430*/ int RecastLeft;
/*0x434*/ bool bHotButton;                            // ctor word@0x434=0x100 -> bHotButton=0
/*0x435*/ bool bInventorySlotLinked;                  // ctor -> 1
/*0x438*/ CInvSlot* pInvSlot;                          // ctor: set if ItemLocation.Location<0x2e && Index!=-1
/*0x440*/ CTextObjectInterface* pTextObject;          // ctor from _DAT_140f556c8 vtable+0x90; dtor +0x98
/*0x448*/ int TextFontStyle;
/*0x44c*/ int Mode;
/*0x450*/ D3DCOLOR BGTintRollover;                    // ctor 0xffffffff (LIVE-confirmed)
/*0x454*/ D3DCOLOR BGTintNormal;                      // ctor 0xffc0c0c0 (LIVE-confirmed)
/*0x458*/ int LastTime;
/*0x45c*/ int Unknown0x2cc;
/*0x460*/

	bool IsHotButton() const { return bHotButton; }

	// Backwards Compat Macros
	ALT_MEMBER_GETTER_COPY(ItemContainerInstance, ItemLocation.GetLocation(), WindowType);
	ALT_MEMBER_GETTER_COPY(ItemContainerInstance, ItemLocation.GetLocation(), Location);
	ALT_MEMBER_GETTER_COPY(short, ItemLocation.GetIndex().GetSlot(0), Slot1);
	ALT_MEMBER_GETTER_COPY(short, ItemLocation.GetIndex().GetSlot(0), InvSlot);
	ALT_MEMBER_GETTER_COPY(short, ItemLocation.GetIndex().GetSlot(1), Slot2);
	ALT_MEMBER_GETTER_COPY(short, ItemLocation.GetIndex().GetSlot(1), BagSlot);
	ALT_MEMBER_GETTER_COPY(short, ItemLocation.GetIndex().GetSlot(2), Slot3);
	ALT_MEMBER_GETTER_COPY(short, ItemLocation.GetIndex().GetSlot(2), GlobalSlot);
};

SIZE_CHECK(CInvSlotWnd, CInvSlotWnd_size);


//============================================================================
// CItemDisplayWnd
//============================================================================

enum ItemDisplayFlags
{
	PREVENT_LINK = 0x00000001,
	RECYCLE_WINDOW = 0x00000002,
	FROM_LINK = 0x00000004,
	FROM_BAZAAR_SEARCH = 0x00000008,
	FROM_BARTER_SEARCH = 0x00000010
};

constexpr size_t CItemDisplayWnd_size = 0xab0; // @sizeof(CItemDisplayWnd) :: 2026-06-09 jun09 dtor 0x14042e0f0 op_delete(this,0xab0) + op_new @CreateWindowInstance 0x140445520; ctor 0x14042cba0; vtable 0x140a36a60. +0x10 base + 1 NEW field @0x430 = +0x18 tail. Live cross-check inst 0x411FDEC0 (lantern).

class [[offsetcomments]] CItemDisplayWnd : public CSidlScreenWnd
{
	FORCE_SYMBOLS

public:
	//EQLIB_OBJECT virtual int HandleKeyboardMsg(uint32_t, uint32_t, bool) override;
	//EQLIB_OBJECT virtual int OnProcessFrame() override;
	//EQLIB_OBJECT virtual int WndNotification(CXWnd* pWnd, uint32_t Message, void* pData) override;
	//EQLIB_OBJECT virtual bool AboutToShow() override;

	EQLIB_OBJECT CXStr CreateEquipmentStatusString(const ItemPtr&);
	EQLIB_OBJECT void SetItem(const ItemPtr& pItem, int flags);
	EQLIB_OBJECT void SetItemText(char*);
	EQLIB_OBJECT void UpdateStrings();

	EQLIB_OBJECT CXStr CreateClassString(EQ_Equipment*);
	EQLIB_OBJECT CXStr CreateMealSizeString(EQ_Equipment*);
	EQLIB_OBJECT CXStr CreateModString(EQ_Equipment*, int, int, int*);
	EQLIB_OBJECT CXStr CreateRaceString(EQ_Equipment*);
	EQLIB_OBJECT void GetSizeString(int, char*);
	EQLIB_OBJECT void InsertAugmentRequest(int AugSlot);
	EQLIB_OBJECT static void RemoveAugmentRequest(ItemPtr item, int AugSlot);
	EQLIB_OBJECT void RequestConvertItem();

	//----------------------------------------------------------------------------
	// data members

	enum {
		NumStatRows = 26,
		NumStatCols = 3,
		NumHeroic = 13,
		NumItemInfo = 13,
	};

	// jun09 from-binary (raw-ASM ctor 0x14042cba0 + dtor 0x14042ded0) + live cross-check (lantern inst
	// 0x411FDEC0). Clean +0x10 through ConvertStml@0x428; ONE NEW field Unknown0x430 @0x430; then +0x18.
	// SIDL child names decoded from .rdata 0x140a36de0. Computes to sizeof 0xab0.
/*0x2d0*/ CStmlWnd* Description; // ItemDescription
/*0x2d8*/ CButtonWnd* IconButton; // IconButton
/*0x2e0*/ CStmlWnd* ItemLore; // ItemLore
/*0x2e8*/ CTabWnd* ItemDescriptionTabBox; // ItemDescriptionTabBox
/*0x2f0*/ CPageWnd* ItemDescriptionTab; // ItemDescriptionTab
/*0x2f8*/ CPageWnd* ItemLoreTab; // ItemLoreTab
/*0x300*/ CSidlScreenWnd* pAppearanceSocketScreen; // IDW_Appearance_Socket_Screen
/*0x308*/ CButtonWnd* pAppearanceSocketItem; // IDW_Appearance_Socket_Item
/*0x310*/ CButtonWnd* pAppearanceSocketBuyButton; // IDW_Appearance_Socket_Buy_Button
/*0x318*/ CStmlWnd* pAppearanceSocketDescription; // IDW_Appearance_Socket_Description
/*0x320*/ CSidlScreenWnd* pItemSocketScreen[6]; // IDW_Socket_Slot_%d_Screen
/*0x350*/ CButtonWnd* pItemSocketItemButton[6]; // IDW_Socket_Slot_%d_Item
/*0x380*/ CStmlWnd* pItemSocketDescription[6]; // IDW_Socket_Slot_%d_Description
/*0x3b0*/ CXStr ItemInfo; // "Error: Item description not set"
/*0x3b8*/ CXStr Unknown0x2ac;
/*0x3c0*/ CXStr Unknown0x2b0;
/*0x3c8*/ CXStr WindowTitle; // "Item Display"
/*0x3d0*/ CXStr ItemAdvancedLoreText; // "Error: Item lore not set"
/*0x3d8*/ CXStr ItemMadeByText;
/*0x3e0*/ CXStr SolventText;
/*0x3e8*/ CXStr ItemInformationText;
/*0x3f0*/ ItemPtr pItem; // 0x10; live _Ptr@0x3f0/_Rep@0x3f8 (lantern)
/*0x400*/ bool bActiveItem;
/*0x401*/ bool bItemTextSet;
/*0x408*/ CTextureAnimation* DragIcons; // A_DragItem
/*0x410*/ bool bTaggable;
/*0x411*/ bool bFailed;
/*0x414*/ unsigned int TabCount;
/*0x418*/ CLabel* ModButtonLabel; // IDW_ModButtonLabel
/*0x420*/ CStmlWnd* RewardButtonLabel; // IDW_RewardButtonLabel
/*0x428*/ CStmlWnd* ConvertStml; // IDW_ConvertButtonLabel
/*0x430*/ bool Unknown0x430; // NEW jun09 display-state bool: SetItem (CItemDisplayWnd__SetItem) resets it 0 + gates rendering on it (OTTO offline: reader FUN_14044e8f0, setter FUN_14044a690). 1 byte + 7 pad to FuseButtonLabel@0x438 -> drives +0x18 tail.
/*0x438*/ CLabel* FuseButtonLabel; // IDW_FuseButtonLabel
/*0x440*/ CLabel* MadeByLabel; // IDW_MadeBy
/*0x448*/ CLabel* CollectedLabel; // IDW_CollectedLabel
/*0x450*/ CLabel* ScribedLabel; // IDW_ScribedLabel
/*0x458*/ int Row;
/*0x45c*/ bool bAntiTwink;
/*0x460*/ CButtonWnd* ModButton; // IDW_ModButton
/*0x468*/ CButtonWnd* RewardButton; // IDW_RewardButton
/*0x470*/ CButtonWnd* PrintRealEstateItems; // IDW_PrintRealEstateItems
/*0x478*/ CButtonWnd* ConvertButton; // IDW_ConvertButton
/*0x480*/ CButtonWnd* FuseButton; // IDW_FuseButton
/*0x488*/ bool bCollected; // live [0x488]=0
/*0x489*/ bool bCollectedReceived; // live [0x489]=1
/*0x48c*/ int Unknown0x0314;
/*0x490*/ CXStr ItemName; // live CXStr (lantern name)
/*0x498*/ bool bScribed;
/*0x499*/ bool bScribedReceived;
/*0x49c*/ int group[6]; // 0x49c-0x4b4 (ctor XMM zero)
/*0x4b4*/ int showModified;
/*0x4b8*/ int heroicCount;
/*0x4bc*/ int itemInfoCount;
/*0x4c0*/ CStmlWnd* lblItemInfo[NumItemInfo]; // IDW_ItemInfo%d (13) 0x4c0-0x528
/*0x528*/ CLabel* lblStat[NumStatRows][NumStatCols]; // IDW_Row%dCol%dStat (26x3) 0x528-0x798
/*0x798*/ CLabel* lblValue[NumStatRows][NumStatCols]; // IDW_Row%dCol%dValue (26x3) 0x798-0xa08
/*0xa08*/ CLabel* lblHeroic[NumHeroic]; // IDW_Heroic%d (13) 0xa08-0xa70
/*0xa70*/ int rightClickMenuId; // ctor AddMenu id
/*0xa74*/ int rightClickMenuSocketId; // ctor init -1 (0xffffffff)
/*0xa78*/ CComboWnd* ItemCompareList; // IDW_ItemCompareList
/*0xa80*/ bool isComparing;
/*0xa88*/ ItemPtr pCompareItem; // 0x10; _Ptr@0xa88/_Rep@0xa90 (dtor control-block release)
/*0xa98*/ CTAFrameDraw* ptaPageBorderHighlight; // FT_DefPageBorderHighlight (FindAnimation)
/*0xaa0*/ CTAFrameDraw* ptaPageBorder; // FT_DefPageBorder (FindAnimation)
/*0xaa8*/ uint32_t ItemWndIndex;
/*0xab0*/
};

SIZE_CHECK(CItemDisplayWnd, CItemDisplayWnd_size);

//============================================================================
// CJournalWnd
//============================================================================

class JournalNPC;

class CJournalCatWnd : public CSidlScreenWnd
{
public:
	CJournalCatWnd(CXWnd*);
	virtual ~CJournalCatWnd();

	virtual int OnProcessFrame() override;
	virtual int WndNotification(CXWnd*, uint32_t, void*) override;

	EQLIB_OBJECT void Clean();
	EQLIB_OBJECT void UpdateAll(bool);
	EQLIB_OBJECT void UpdateButtons();
	EQLIB_OBJECT void BuildList();
	EQLIB_OBJECT void LoadINI();
	EQLIB_OBJECT void SelectCategory(int);
	EQLIB_OBJECT void SortList(int, bool);
	EQLIB_OBJECT void StoreINI();
	EQLIB_OBJECT void UpdateListWnd(bool);
};

class CJournalNPCWnd : public CSidlScreenWnd
{
public:
	CJournalNPCWnd(CXWnd*);
	virtual ~CJournalNPCWnd();

	virtual int OnProcessFrame() override;
	virtual int WndNotification(CXWnd*, uint32_t, void*) override;

	EQLIB_OBJECT void EnterIntoJournal(char*, float, float, float, char*);
	EQLIB_OBJECT void LoadJournal(int);
	EQLIB_OBJECT void SaveJournal();
	EQLIB_OBJECT void UpdateAll(bool);
	EQLIB_OBJECT void UpdateCategories();
	EQLIB_OBJECT void BuildList();
	EQLIB_OBJECT void DoBackups(CXStr);
	EQLIB_OBJECT void GetLogState();
	EQLIB_OBJECT void SelectNPCIndex(int);
	EQLIB_OBJECT void SortList(int, bool);
	EQLIB_OBJECT void StoreLogState();
	EQLIB_OBJECT void UpdateButtons();
	EQLIB_OBJECT void UpdateListWnd(bool);
};

class CJournalTextWnd : public CSidlScreenWnd
{
public:
	CJournalTextWnd(CXWnd*);
	virtual ~CJournalTextWnd();

	virtual int OnProcessFrame() override;
	virtual int WndNotification(CXWnd*, uint32_t, void*) override;

	EQLIB_OBJECT void Clear();
	EQLIB_OBJECT void DisplayNPC(JournalNPC*);
	EQLIB_OBJECT void SetSearch(CXStr);
	EQLIB_OBJECT void UpdateAll(bool);
	EQLIB_OBJECT void UpdateCategories();
	EQLIB_OBJECT void BuildList();
	EQLIB_OBJECT void SelectEntryIndex(int);
	EQLIB_OBJECT void SortList(int, bool);
	EQLIB_OBJECT void UpdateButtons();
	EQLIB_OBJECT void UpdateListWnd(bool);
};

//============================================================================
// CKeyRingWnd
//============================================================================

constexpr size_t CKeyRingWnd_size = 0x4a8; // jun09 derived (was 0x498; +0x10). op_new 0x4a8 @14019ea3b. BOB gate-OK.

class [[offsetcomments]] CKeyRingWnd : public CSidlScreenWnd, public WndEventHandler
{
public:
	EQLIB_OBJECT CKeyRingWnd(CXWnd* parent);
	EQLIB_OBJECT virtual ~CKeyRingWnd();

	EQLIB_OBJECT static int ExecuteRightClick(KeyRingType keyRingType, const ItemPtr& pItem, int index);

	EQLIB_OBJECT CListWnd* GetKeyRingList(KeyRingType type) const;

	enum KeyRingPages
	{
		ePageMountKeyRing = 0,
		ePageIllusionKeyRing = 1,
		ePageFamiliarKeyRing = 2,
		ePageHeroForgeKeyRing = 3,
		ePageTeleportationItemsKeyRing = 4,
		ePageActivatedItemsKeyRing = 5,
		ePageEquipmentKeyRing = 6,

		eNumPages,
		ePageFirst = ePageMountKeyRing,
		ePageLast = ePageEquipmentKeyRing,
	};

	EQLIB_OBJECT static ECursorAttachmentType GetLinkType(KeyRingType type);
	EQLIB_OBJECT static KeyRingType GetKeyRingType(ItemContainerInstance container);

// 0x2d0 = WndEventHandler::lastUpdate (uint32_t) -- provided by the WndEventHandler base above
// (ctor sets it via FUN_140359ca0 <- 0x1405a9760); 0x2d4 is alignment pad. Own members start @0x2d8.
/*0x2d8*/ CListWnd* pList[eNumPages]; // KRW_Mounts_List, KRW_Illusions_List, KRW_Familiars_List, KRW_HeroForge_List
/*0x310*/ CLabel* pStatLabel[eNumPages]; // KRW_Mounts_StatsNameLabel, KRW_Illusions_StatNameLabel, KRW_Familiars_StatNameLabel,
/*0x348*/ CLabel* pCountLabel[eNumPages]; // KRW_Mounts_CountLabel, KRW_Illusions_CountLabel, KRW_Familiars_CountLabel, KRW_HeroForge_CountLabel
/*0x380*/ CButtonWnd* pBtnStat[eNumPages]; // KRW_Mounts_Selected, KRW_Illusions_Selected, KRW_Familiars_Selected, KRW_HeroForge_SlotButton
/*0x3b8*/ CButtonWnd* pBtnSlot[eNumPages]; // KRW_Mounts_SlotButton, KRW_Illusions_SlotButton, KRW_Familiars_SlotButton
/*0x3f0*/ bool bListDirty[eNumPages];
/*0x3f7*/ bool bStatDirty[eNumPages];
/*0x400*/ int ForcedSelection[eNumPages];
/*0x41c*/ int New_41c; // jun09 NEW (PROVISIONAL): dword, ctor store 14015ba72 MOV [RDI+0x41c],ESI
/*0x420*/ CButtonWnd* pItemBtnTemplate; // KRW_ItemBtnTemplate
/*0x428*/ CButtonWnd* pBtnFamiliarLeave; // KRW_Familiars_LeaveButton
/*0x430*/ CButtonWnd* pBtnFamiliarAutoLeave; // KRW_Familiars_AutoLeaveButton
/*0x438*/ CButtonWnd* pBtnStoreEquipmentSets; // KRW_Equipment_StoreEquipmentSetsButton
/*0x440*/ CListWnd* pKeysList; // KRW_Keys_List
/*0x448*/ bool KeysListDirty;
/*0x44c*/ int ForcedKeysSelection;
/*0x450*/ int LastUpdateTime; // timestamp of when the current tab was last updated.
/*0x458*/ CPageWnd* pPageMounts; // KRW_Mounts_Page
/*0x460*/ CPageWnd* pPageIllusions; // KRW_Illusions_Page
/*0x468*/ CPageWnd* pPageFamiliars; // KRW_Familiars_Page
/*0x470*/ CPageWnd* pPageKeys; // KRW_Keys_Page
/*0x478*/ CPageWnd* pPageHeroForge; // KRW_HeroForge_Page
/*0x480*/ CPageWnd* pPageTeleportation; // KRW_TeleportationItems_Page
/*0x488*/ CPageWnd* pPageActivated; // KRW_ActivatedItems_Page
/*0x490*/ CPageWnd* pPageEquipmen; // KRW_EquipmentItems_Page
/*0x498*/ CTabWnd* pTabBox; // KRW_Subwindows
/*0x4a0*/ KeyRingPages CurrentPage;
/*0x4a8*/
};

SIZE_CHECK(CKeyRingWnd, CKeyRingWnd_size);

//============================================================================
// ClaimWindow
//============================================================================

class [[offsetcomments]] ClaimWindow : public CGFScreenWnd, public PopDialogHandler
{
public:
/*0x3c0*/ ClaimFeatureDataCollection claimFeatureData;
/*0x7e0*/
private:
	// If New UI is enabled, these members will not be initialized, and the components will be used instead. Use the
	// Accessors below instead.
/*0x3d8*/ CListWnd* m_pListFeatures; // ClaimFeatureList
/*0x3e0*/ CListWnd* m_pListItems; // ClaimItemList
/*0x3e8*/ CButtonWnd* m_pRefreshButton; // ClaimRefreshButton
/*0x3f0*/ CButtonWnd* m_pClaimButton; // ClaimClaimButton
/*0x3f8*/ CButtonWnd* m_pCancelButton; // ClaimCancelButton
/*0x400*/ CStmlWnd* m_pItemDescription; // ClaimItemDescription

public:
	// CListWnd* pListFeatures;
	CListWnd* _get_pListFeatures() { return GetNewUIEngineWindow(m_pListFeatures, FeatureListComponent); }
	__declspec(property(get = _get_pListFeatures)) CListWnd* pListFeatures;
	// CListWnd* pListItems;
	CListWnd* _get_pListItems() { return GetNewUIEngineWindow(m_pListItems, ItemListComponent); }
	__declspec(property(get = _get_pListItems)) CListWnd* pListItems;
	// CButtonWnd* pRefreshButton;
	CButtonWnd* _get_pRefreshButton() { return GetNewUIEngineWindow(m_pRefreshButton, RefreshButtonComponent); }
	__declspec(property(get = _get_pRefreshButton)) CButtonWnd* pRefreshButton;
	// CButtonWnd* pClaimButton;
	CButtonWnd* _get_pClaimButton() { return GetNewUIEngineWindow(m_pClaimButton, ClaimButtonComponent); }
	__declspec(property(get = _get_pClaimButton)) CButtonWnd* pClaimButton;
	// CButtonWnd* pCancelButton;
	CButtonWnd* _get_pCancelButton() { return GetNewUIEngineWindow(m_pCancelButton, CancelButtonComponent); }
	__declspec(property(get = _get_pCancelButton)) CButtonWnd* pCancelButton;
	// CStmlWnd* pItemDescription;
	CStmlWnd* _get_pItemDescription() { return GetNewUIEngineWindow(m_pItemDescription, ItemDescriptionComponent); }
	__declspec(property(get = _get_pItemDescription)) CStmlWnd* pItemDescription;

/*0x408*/ UIListComponent FeatureListComponent; // 408
/*0x4a8*/ UIListComponent ItemListComponent; // 4a8
/*0x548*/ UIButtonComponent RefreshButtonComponent; // 548
/*0x5f0*/ UIButtonComponent ClaimButtonComponent; // 5f0
/*0x698*/ UIButtonComponent CancelButtonComponent; // 698
/*0x740*/ UIStmlComponent ItemDescriptionComponent; // 740
/*0x7e0*/
};
constexpr size_t ClaimWindow_size = 0x7e0; // clean +0x10 cohort (CGFScreenWnd 0x3a8->0x3b8 + PopDialogHandler); own-start 0x3b0->0x3c0; inline // comments are pre-computed jun09 offsets (corroborate +0x10); UIList 0xa0/UIButton 0xa8/UIStml 0xa0 embeds
SIZE_CHECK(ClaimWindow, ClaimWindow_size);

//============================================================================
// CLargeDialogWnd
//============================================================================

class CLargeDialogWnd : public CSidlScreenWnd
{
public:
	EQLIB_OBJECT void Open(bool bYesNoEnabled, CXStr DialogText, unsigned long closeTimer /* 0 means never */,
		CXStr DialogTitle, bool bShowVolumeControls, CXStr YesText, CXStr NoText);
};

//============================================================================
// CLootWnd
//============================================================================

struct loot_msg;

constexpr size_t CLootWnd_size = 0xcc0; // @sizeof(CLootWnd) :: 2026-06-09 jun09 dtor 0x14045d580 op_delete(this,0xcc0) + op_new 0x14019ebdf; ctor 0x14045d1c0; vtable 0x140a47620 (+secondary 0x140a479a0 @0x2d0). Live-validated singleton 0x432488D0.

class [[offsetcomments]] CLootWnd : public CSidlScreenWnd, public PopDialogHandler, public WndEventHandler
{
	FORCE_SYMBOLS

public:
	CLootWnd(CXWnd*);
	virtual ~CLootWnd();

	virtual int OnProcessFrame() override;
	virtual int PostDraw() override;
	virtual int WndNotification(CXWnd*, uint32_t, void*) override;

	EQLIB_OBJECT void AddItemToLootArray(const ItemPtr&);
	EQLIB_OBJECT void Deactivate(bool);
	EQLIB_OBJECT void LootAll(bool close);
	EQLIB_OBJECT void RequestLootSlot(int Slot, bool bAutoInventory);
	EQLIB_OBJECT void SlotLooted(int);
	EQLIB_OBJECT void FinalizeLoot();

	enum { NumLootSlots = 200 };

	//----------------------------------------------------------------------------
	// data members

	// jun09 = upstream +0x10 (CSidlScreenWnd base grew). Validated vs live singleton 0x432488D0:
	// children @0xc80-0xc98, LootSlotWnd[200] @0x640-0xc80, secondary vtable @0x2d0. dtor op_delete 0xcc0.
/*0x2dc*/ bool bServerClose;                  // live [0x2dc]=0
/*0x2dd*/ bool bLootingActive;
/*0x2e0*/ int LootIndex[NumLootSlots];        // 0x2e0..0x600 (200*4)
/*0x600*/ uint32_t nNextRefreshTime;
/*0x604*/ bool bInventoryWasActive;
/*0x608*/ ItemContainer LootItems;            // 0x28; dtor ItemContainer__Reset @0x608; holds ItemPtrs internally
/*0x630*/ bool bCloseOnComplete;
/*0x631*/ bool bRightClickLoot;
/*0x632*/ bool bLootAllReady;
/*0x638*/ CXWnd* LootInvWnd; // LootInvWnd
/*0x640*/ CInvSlotWnd* LootSlotWnd[NumLootSlots]; // 0x640..0xc80; created from LW_LootSlotTemplate; live [199]@0xc78
/*0xc80*/ CLabel* CorpseNameLabel; // LW_CorpseName (live ptr @0xc80)
/*0xc88*/ CButtonWnd* DoneButton; // DoneButton (live @0xc88)
/*0xc90*/ CButtonWnd* BroadcastButton; // BroadcastButton (live @0xc90)
/*0xc98*/ CButtonWnd* LootAllButton; // LootAllButton (live @0xc98)
/*0xca0*/ bool bPopupPending;
/*0xca8*/ void* Unknown1;
/*0xcb0*/ void* Unknown2;
/*0xcb8*/ uint32_t Unknown3;
/*0xcc0*/

	ItemContainer& GetLootItems() { return LootItems; }
	ItemPtr GetLootItem(int slot) { return LootItems.GetItem(slot); }

	INVENTORYARRAY* get_pInventoryArray() { return reinterpret_cast<INVENTORYARRAY*>(&LootItems.Items[0]); }
	__declspec(property(get = get_pInventoryArray)) INVENTORYARRAY* pInventoryArray;

	int get_Size() { return LootItems.GetSize(); }
	__declspec(property(get = get_Size)) int Size;

	DEPRECATE("CLootWnd: Use Loots.GetSize() instead of NumOfSlots")
	__declspec(property(get = get_Size)) int NumOfSlots;
};

inline namespace deprecated {
	using EQLOOTWINDOW DEPRECATE("Use CLootWnd instead of EQLOOTWINDOW") = CLootWnd;
	using PEQLOOTWINDOW DEPRECATE("Use CLootWnd* instead of PEQLOOTWINDOW") = CLootWnd*;
}

SIZE_CHECK(CLootWnd, CLootWnd_size);

//============================================================================
// CMapViewWnd
//============================================================================

// Map Window sizeof() = 0x38
struct [[offsetcomments]] MapViewLabel
{
/*0x0*/ uint32_t LabelId;
/*0x8*/ MapViewLabel* pNext;
/*0x10*/ MapViewLabel* pPrev;
/*0x18*/ CVector3 Location;
/*0x24*/ ARGBCOLOR Color;
/*0x28*/ int Size; // 1-3;
/*0x30*/ const char* Label;
/*0x38*/ int Layer; // 0-3;
/*0x3c*/ int Width;
/*0x40*/ int Height;
/*0x44*/ int OffsetX;
/*0x48*/ int OffsetY;
/*0x4c*/
};

// If you see: 'eqlib::MAPLINE': redefinition; different basic types
// Then make sure to change your code to use MapViewLabel instead of MAPLABEL;
using MAPLABEL DEPRECATE("Use MapViewLabel instead of MAPLABEL") = MapViewLabel;
using PMAPLABEL DEPRECATE("Use MapViewLabel* instead of PMAPLABEL") = MapViewLabel*;

// sizeof() = 0x28
struct [[offsetcomments]] MapViewLine
{
/*0x0*/ MapViewLine* pNext;
/*0x8*/ MapViewLine* pPrev;
/*0x10*/ CVector3 Start;
/*0x1c*/ CVector3 End;
/*0x28*/ ARGBCOLOR Color;
/*0x2c*/ int Layer; // 0-3;
/*0x30*/
};

// If you see: 'eqlib::MAPLINE': redefinition; different basic types
// Then make sure to change your code to use MapViewLine instead of MAPLINE;
using MAPLINE DEPRECATE("Use MapViewLine instead of MAPLINE") = MapViewLine;
using PMAPLINE DEPRECATE("Use MapViewLine* instead of PMAPLINE") = MapViewLine*;

// pLines address = 0x254 + 0x035c = 0x05b0 (address of pMapViewMapVfTable)
// MapViewMap_size: 0x848 - 0x4b8 = 0x390

class [[offsetcomments]] MapViewMap : public CSidlScreenWnd
{
	FORCE_SYMBOLS

public:
	// constructor / destructor
	MapViewMap();
	virtual ~MapViewMap();

	// virtual functions
	EQLIB_OBJECT virtual int PostDraw() override;
	EQLIB_OBJECT virtual int HandleLButtonDown(const CXPoint& pos, uint32_t flags) override;
	EQLIB_OBJECT virtual int HandleLButtonUp(const CXPoint& pos, uint32_t flags) override;
	EQLIB_OBJECT virtual int HandleLButtonUpAfterHeld(const CXPoint& pos, uint32_t flags) override;
	EQLIB_OBJECT virtual int HandleRButtonDown(const CXPoint& pos, uint32_t flags) override;
	EQLIB_OBJECT virtual int HandleWheelMove(const CXPoint& pos, int scroll, uint32_t flags) override;

	// methods
	EQLIB_OBJECT void Clear();
	//EQLIB_OBJECT void SaveEx(char*, int);
	EQLIB_OBJECT void SetZoom(float);
	EQLIB_OBJECT void GetWorldCoordinates(CVector3&);

	//EQLIB_OBJECT bool DrawClippedLine(CVector3*, RGB, CXRect);
	//EQLIB_OBJECT bool IsLayerVisible(int);
	//EQLIB_OBJECT bool LoadEx(char*, int);
	//EQLIB_OBJECT bool PointInMapViewArea(CXPoint, CXRect);
	//EQLIB_OBJECT int GetMaxZ();
	//EQLIB_OBJECT int GetMinZ();
	//EQLIB_OBJECT unsigned long GetCurrentColor();
	//EQLIB_OBJECT unsigned long GetMarkedLineColor();
	//EQLIB_OBJECT void AddLabel(float, float, float, unsigned long, int, char*);
	//EQLIB_OBJECT void AddPoint(float, float, float);
	//EQLIB_OBJECT void CalcLabelRenderOffsets(CXRect);
	//EQLIB_OBJECT void ClearActiveLayer();
	//EQLIB_OBJECT void Draw(CXRect);
	//EQLIB_OBJECT void EndLine(float, float, float);
	//EQLIB_OBJECT void JoinLinesAtIntersect(bool);
	//EQLIB_OBJECT void Load(char*);
	//EQLIB_OBJECT void MoveLabel(MapViewLabel*, float, float, float);
	//EQLIB_OBJECT void PreCalcRenderValues();
	//EQLIB_OBJECT void RecalcLabelExtents(MapViewLabel*);
	//EQLIB_OBJECT void RemoveLabel(MapViewLabel*);
	//EQLIB_OBJECT void RemoveLabel();
	//EQLIB_OBJECT void RemoveLine(MapViewLabel*);
	//EQLIB_OBJECT void RemoveLine();
	//EQLIB_OBJECT void Save(char*);
	//EQLIB_OBJECT void SetCurrentColor(unsigned long);
	//EQLIB_OBJECT void SetMarkedLine(MapViewLabel*);
	//EQLIB_OBJECT void SetMarkedLineColor(unsigned long);
	//EQLIB_OBJECT void SetZoneExtents(int, int, int, int);
	//EQLIB_OBJECT void StartLine(float, float, float);
	//EQLIB_OBJECT void TransformPoint(CVector3*);

/*0x2d0*/ float mapViewMinX;
/*0x2d4*/ float mapViewMinY;
/*0x2d8*/ float mapViewMaxX;
/*0x2dc*/ float mapViewMaxY;
/*0x2e0*/ int panOffsetX;
/*0x2e4*/ int panOffsetY;
/*0x2e8*/ float lineOffsetX;
/*0x2ec*/ float lineOffsetY;
/*0x2f0*/ float scaleDiffX;
/*0x2f4*/ float scaleDiffY;
/*0x2f8*/ float mapViewScaleX;
/*0x2fc*/ float mapViewScaleY;
/*0x300*/ MapViewLine* pLines;
/*0x308*/ MapViewLabel* pLabels;
/*0x310*/ uint32_t nextLabelId;
/*0x314*/ bool lineActive;
/*0x318*/ CVector3 currentPoint;
/*0x324*/ RGB currentColor;
/*0x328*/ RGB myColor;
/*0x32c*/ RGB groupColor;
/*0x330*/ RGB findPathColor;
/*0x334*/ bool failedFindActive;
/*0x338*/ CVector3 failedFindPoint;
/*0x344*/ int failedFindType;
/*0x348*/ MapViewLine* markedLines;
/*0x350*/ MapViewLabel* markedLabel;
/*0x358*/ MapViewLabel* selectedLabel;
/*0x360*/ int layerFilter; // bitmask of active layers
/*0x364*/ int activeLayer;
/*0x368*/ int minZ;
/*0x36c*/ int maxZ;
/*0x370*/ bool zFilterActive;
/*0x374*/ float zoom;
/*0x378*/ float recalcZoom;
/*0x37c*/ int range;
/*0x380*/ bool showGroup;
/*0x381*/ bool showNames;
/*0x382*/ bool findAutoZoom;
/*0x383*/ bool showLabels;
/*0x384*/ bool recalcLabels;
/*0x385*/ bool canAddToMap;
/*0x388*/ EQZoneIndex zoneId;
/*0x390*/ CXStr customMapPath;
/*0x398*/

	// points to the eq instance of the virtual function table for this class
	static VirtualFunctionTable* sm_vftable;
};

constexpr size_t CMapViewWnd_size = 0x858; // jun09 op_new CONFIRMED 0x858 (alloc 14019e3b6, OTTO); MapView (MapViewMap 0x398) embed @0x4c0 -> 0x4c0+0x398=0x858

class [[offsetcomments]] CMapViewWnd : public CSidlScreenWnd, public WndEventHandler
{
	FORCE_SYMBOLS

public:
	// constructor / destructor
	EQLIB_OBJECT CMapViewWnd(CXWnd*);
	EQLIB_OBJECT virtual ~CMapViewWnd();

	// virtual functions
	virtual bool AboutToShow() override;
	virtual bool AboutToHide() override;
	virtual int OnShow() override;
	virtual int OnMove(const CXRect&) override;
	virtual int OnProcessFrame() override;
	virtual int WndNotification(CXWnd*, uint32_t, void*) override;
	virtual void OnWndNotification() override;
	virtual void LoadIniInfo() override;
	virtual void StoreIniInfo() override;

	// functions
	EQLIB_OBJECT void ActivateAutoMapping();
	EQLIB_OBJECT void DeactivateAutoMapping();
	EQLIB_OBJECT bool IsMappingEnabled();

	EQLIB_OBJECT void SetCurrentZone(EQZoneIndex, CVector3* v3Min, CVector3* v3Max, bool);

	// these are almost all the controls belonging to the CMapViewWnd
/*0x02d4*/ int ZoneId;
/*0x02d8*/ bool bAutoMapping;
/*0x02e0*/ CButtonWnd* btnPanLeft;
/*0x02e8*/ CButtonWnd* btnPanRight;
/*0x02f0*/ CButtonWnd* btnPanUp;
/*0x02f8*/ CButtonWnd* btnPanDown;
/*0x0300*/ CButtonWnd* btnPanReset;
/*0x0308*/ CButtonWnd* btnZoomIn;
/*0x0310*/ CButtonWnd* btnZoomOut;
/*0x0318*/ CButtonWnd* btnShowGroup;
/*0x0320*/ CButtonWnd* btnShowNames;
/*0x0328*/ CButtonWnd* btnFind;
/*0x0330*/ CButtonWnd* btnEndFind;
/*0x0338*/ CButtonWnd* btnFindAutoZoom;
/*0x0340*/ CButtonWnd* btnMapZoneGuide;
/*0x0348*/ CButtonWnd* btnToolbar;
/*0x0350*/ char szZoneName[0x80];
/*0x03d0*/ CButtonWnd* btntoggleLabels;
/*0x03d8*/ CEditWnd* editMinZ;
/*0x03e0*/ CEditWnd* editMaxZ;
/*0x03e8*/ CButtonWnd* btnZFilter;
/*0x03f0*/ CButtonWnd* btnLayer0;
/*0x03f8*/ CButtonWnd* btnLayer1;
/*0x0400*/ CButtonWnd* btnLayer2;
/*0x0408*/ CButtonWnd* btnLayer3;
/*0x0410*/ CButtonWnd* btnLayer1Active;
/*0x0418*/ CButtonWnd* btnLayer2Active;
/*0x0420*/ CButtonWnd* btnLayer3Active;
/*0x0428*/ CButtonWnd* btnLoadCurrent;
/*0x0430*/ CPageWnd* pageAtlas;
/*0x0438*/ CPageWnd* pageMap;
/*0x0440*/ CTabWnd* tabWnd;
/*0x0448*/ CXWnd* MapRenderArea;
/*0x0450*/ CComboWnd* MapsDirSelect;
/*0x0458*/ CXWnd* AtlasRenderArea;
/*0x0460*/ CAtlas* AtlasWnd;
/*0x0468*/ CComboWnd* AtlasDirSelect;
/*0x0470*/ CButtonWnd* btnAtlasZoneGuide;
/*0x0478*/ CButtonWnd* btnMapIcon;
/*0x0480*/ CEditWnd* editSearchBox;
/*0x0488*/ CButtonWnd* btnSearch;
/*0x0490*/ CButtonWnd* btnSearchClear;
/*0x0498*/ CListWnd* listSearch;
/*0x04a0*/ CXWnd* wndSearchLayout;
/*0x04a8*/ CButtonWnd* btnSearchHide;
/*0x04b0*/ CXWnd* wndSpacer;
/*0x04b8*/ bool bEditing;
/*0x04c0*/ MapViewMap MapView; // a window component owned by CMapViewWnd
/*0x858*/
	// alias the stupid
	__declspec(property(get = getLines)) MapViewLine* pLines;
	__declspec(property(get = getLabels)) MapViewLabel* pLabels;

	ALT_MEMBER_GETTER_ARRAY(char, 0x80, szZoneName, shortzonename);

	MapViewLine* getLines() { return MapView.pLines; }
	MapViewLabel* getLabels() { return MapView.pLabels; }
};

inline namespace deprecated {
	using EQMAPWINDOW DEPRECATE("Use CMapViewWnd instead of EQMAPWINDOW") = CMapViewWnd;
	using PEQMAPWINDOW DEPRECATE("Use CMapViewWnd* instead of PEQMAPWINDOW") = CMapViewWnd*;
}

SIZE_CHECK(CMapViewWnd, CMapViewWnd_size);

//============================================================================
// CMarketplaceWnd
//============================================================================

class [[offsetcomments]] CMarketplaceWnd : public CSidlScreenWnd
{
public:
};

//============================================================================
// CMerchantWnd
//============================================================================

enum eMerchantServices
{
	Regular,
	Recovery,
	Mail,
	ServiceCount
};

struct [[offsetcomments]] MerchantItemEntry
{
/*0x0*/ ItemPtr pItem;
/*0x10*/ void* pMerchantSlotData; // pointer to merchant-side pricing struct -- ONLY populated
                                  // when merchant uses cache PATH (live 2026-05-19 walk at
                                  // Angler_Winifred regular merchant showed ALL 80 entries had
                                  // this slot = NULL). When non-null: buy-price loaded as DWORD
                                  // at [pMerchantSlotData + 0x8c4]. When NULL: merchant uses the
                                  // ALT PATH in DisplayBuyOrSellPrice@0x1404927a0 which reads
                                  // pItem->MerchantSlot@+0xb0 directly. Was 'int Unknown' (apr07
                                  // era); width corrected from int to pointer 2026-05-19 via
                                  // Ghidra disasm of array-clear loop at may11 VA 0x140491F10
                                  // (stride 0x18 = 24 bytes confirmed).
/*0x18*/

	ALT_MEMBER_GETTER_DEPRECATED(ItemClient*, pItem, pCont, "Use pItem instead of pCont");
};

// todo: finish mapping this and verify
class [[offsetcomments]] MerchantPageHandler
{
public:
/*0x8*/ CMerchantWnd* pParent;
/*0x10*/ int MaxItems;
/*0x14*/ int LastIndex;
/*0x18*/ CListWnd* ItemsList;
/*0x20*/ CPageWnd* PurchasePage;
/*0x28*/ bool bListNeedsRefresh;
/*0x30*/ SoeUtil::Array<MerchantItemEntry> ItemContainer;
/*0x48*/ int Unknown0x40;
/*0x4c*/ int Unknown0x44;
/*0x50*/ int Unknown0x48;
/*0x54*/ int Unknown0x4c;
/*0x58*/ int Unknown0x50;
/*0x5c*/ int Unknown0x54;
/*0x60*/ int Unknown0x58;
/*0x64*/ int Unknown0x5c;
/*0x68*/ int Unknown0x60;
/*0x6c*/ int Unknown0x64;
/*0x70*/ int Unknown0x68;
/*0x74*/ int Unknown0x6c;
/*0x78*/ int Unknown0x70;
/*0x7c*/ int Unknown0x74;
/*0x80*/ int Unknown0x78;
/*0x84*/ int Unknown0x7c;
/*0x88*/ int Unknown0x80;
/*0x8c*/

	// offset comments indicate vtable offset
	/*0x08*/ EQLIB_OBJECT virtual void Unknownv0x08();
	/*0x0c*/ EQLIB_OBJECT virtual void Unknownv0x0c();
	/*0x10*/ EQLIB_OBJECT virtual void Unknownv0x10();
	/*0x14*/ EQLIB_OBJECT virtual void Unknownv0x14();
	/*0x18*/ EQLIB_OBJECT virtual void DestroyItemByUniqueId(int64_t UniqueID);
	/*0x1c*/ EQLIB_OBJECT virtual void DestroyItemByItemGuid(const EqItemGuid& ItemGuid);
	/*0x20*/ EQLIB_OBJECT virtual bool AddItemToArray(const ItemPtr& pSentItem);
	/*0x24*/ EQLIB_OBJECT virtual int Sort(SListWndSortInfo* SortInfo);
	/*0x28*/ EQLIB_OBJECT virtual void UpdateList();
	/*0x2c*/ EQLIB_OBJECT virtual int DisplayBuyOrSellPrice(const ItemPtr& pItem, bool bBuy) const;
	/*0x30*/ EQLIB_OBJECT virtual CXStr GetPriceString(int Price) const;
	/*0x34*/ EQLIB_OBJECT virtual void UpdateControls();
	/*0x38*/ EQLIB_OBJECT virtual bool RequestGetItem(int Qty);
	/*0x3c*/ EQLIB_OBJECT virtual void RequestPutItem(int Qty);
	/*0x40*/ EQLIB_OBJECT virtual bool CanSelectSlot(const ItemGlobalIndex& Location) const;
	/*0x44*/ EQLIB_OBJECT virtual void DisablePageSpecificButtons();
	/*0x48*/ EQLIB_OBJECT virtual eMerchantServices GetHandlerType() const;
	/*0x4c*/ EQLIB_OBJECT virtual void CXWnd__OnShowANDPostDraw() const;
	/*0x50*/ EQLIB_OBJECT virtual void Unknownv0x50() const;
	/*0x54*/ EQLIB_OBJECT virtual void Unknownv0x54() const;
	/*0x58*/ EQLIB_OBJECT virtual void Unknownv0x58() const;

	int GetItemCount() const
	{
		return ItemContainer.GetSize();
	}

	ItemPtr GetItem(int index) const
	{
		if (index >= 0 && index < ItemContainer.GetSize())
		{
			return ItemContainer[index].pItem;
		}

		return ItemPtr();
	}
};
constexpr size_t MerchantPageHandler_size = 0x90; // 0x8c last-field-end padded to 8-byte align (vtable+ptr members); confirmed by PurchasePageHandler own-field bShowAllItems@0x90
SIZE_CHECK(MerchantPageHandler, MerchantPageHandler_size);

// Size 0xa8 (0x7a331f) 2020-12-05
class [[offsetcomments]] PurchasePageHandler : public MerchantPageHandler
{
	FORCE_SYMBOLS;

public:
/*0x90*/ bool bShowAllItems;
/*0x94*/ int Unknown0x88;
/*0x98*/ int Unknown0x8c;
/*0x9c*/ int Unknown0x90;
/*0xa0*/ int Unknown0x94;
/*0xa4*/ int Unknown0x98;
/*0xa8*/ int Unknown0x9c;
/*0xac*/ int Unknown0xa0;
/*0xb0*/ int Unknown0xa4;
/*0xb4*/

	EQLIB_OBJECT bool RequestGetItem(int);
	EQLIB_OBJECT void RequestPutItem(int);
};
constexpr size_t PurchasePageHandler_size = 0xb8; // own end 0xb4 padded to 8-byte align (inherited MerchantPageHandler ptr/vtable alignment)
SIZE_CHECK(PurchasePageHandler, PurchasePageHandler_size);

struct sell_msg;

enum MerchantPages
{
	RegularMerchantPage,
	BuybackMerchantPage,
	MailMerchantPage,

	MaxMerchantPages
};

constexpr size_t CMerchantWnd_size = 0x620; // @sizeof(CMerchantWnd) :: 2026-06-09 jun09 allocator @0x14019ed26; ctor 0x140491350; dtor 0x140492990 op_delete(0x620). Tail proven (EmbeddedArray0x5d8+0x48=0x620).
class [[offsetcomments]] CMerchantWnd : public CSidlScreenWnd, public WndEventHandler, PopDialogHandler
{
	FORCE_SYMBOLS

public:
	using PageHandlerPtr = eqstd::shared_ptr<MerchantPageHandler>;
	using PageHandlerArray = VeArray<PageHandlerPtr>;

	// jun09 head de-poisoned from ctor 0x140491350 (own data from 0x2d8; CSidlScreenWnd + WndEventHandler
	// secondary vtable @0x2d0). LastActivityTime added (ctor GetTickCount stamp); Unknown0x254->SelectedSlotIndex.
/*0x2d8*/ uint32_t lastUpdate;              // INHERITED WndEventHandler::lastUpdate (0x2d0 = WndEventHandler polymorphic 2nd-base vtable). NOT a CMerchantWnd own field -- own-vs-base name HELD pending dependency-graph audit (BOB flag 2026-06-13). ctor @0x1404913e3 GetTickCount stamp.
/*0x2dc*/ uint32_t NextRefreshTime;         // Draw: cmp vs CDisplay+0x16c then +500
/*0x2e0*/ bool bInventoryWasActive;         // FUN_14049ad40 caches companion-window _DAT_140dfbe90 active-state
/*0x2e8*/ PageHandlerArray PageHandlers;    // VeArray<PageHandlerPtr> 0x18; ctor zeroes 0x2e8/0x2f0/0x2f8
/*0x300*/ float MerchantGreed;              // price math: movss [reg+0x300]
/*0x304*/ ItemGlobalIndex ItemLocation;     // ctor -1 init 0x304..0x30e (0xc)
/*0x310*/ ItemIndex SelectedSlotIndex;      // ctor 3 shorts -1 (ItemIndex 8); was Unknown0x254[8]
/*0x318*/ ItemPtr pSelectedItem;
/*0x328*/ void* pSelectedItemMerchantData; // cached MerchantItemEntry.pMerchantSlotData for
                                           // pSelectedItem; NULL when merchant uses ALT-path (live
                                           // 2026-05-19 walk at Angler_Winifred showed this stayed
                                           // NULL throughout). Cache PATH (one of TWO in
                                           // DisplayBuyOrSellPrice@0x1404927a0): when [+0x10] of
                                           // MerchantItemEntry is non-null, price = DWORD at
                                           // [pSelectedItemMerchantData + 0x8c4]. ALT PATH (taken
                                           // when cache is null): price = pItem->MerchantSlot @+0xb0.
                                           // Which path is active depends on the merchant-type byte
                                           // at pActiveMerchant+0x135 (jump-table dispatch). Was
                                           // eqtime_t MailExpireTime; rename 2026-05-19. Apr07 label
                                           // was a misidentification.
	// jun09 0x318-0x3a8 de-poisoned 2026-06-13. BOB-concurred via independent binary trace of
	// SelectBuySellSlot (0x14049e970): pSelectedItem 0x10 shared_ptr (ctrlblk reset @0x14049e9c8),
	// pSelectedItemMerchantData raw (+0x8c8 read @0x14049eb8f), Quantity INT (CMP 0xf423f @0x14049efc6),
	// pSourceHandler vtable-dispatched @0x14049f03d. DISPROVES production placeholders Labels[14] AND
	// bAutoRetrieveingMail (both stale). Live merchant (inst 0x43FF0D10) corroborated; binary is authority.
/*0x330*/ void* pSourceHandler; // BOB binary-proof: [this+0x330] deref + vtable-call +0x18/+0x20 @0x14049f03d (polymorphic ptr, NOT bool). Production bAutoRetrieveingMail retracted (stale).
/*0x338*/ int Quantity; // binary: CMP 0xf423f (999999) @0x14049efc6; Activate this[0x67]
/*0x33c*/ bool Unknown0x33c; // Activate param_8
/*0x33d*/ bool bApplyMarkup; // live [0x33d]=1; DisplayBuyOrSellPrice markup gate; Activate param_9
/*0x33e*/ bool Unknown0x33e; // ctor byte[0x33e]=0
/*0x340*/ uint32_t ModeIndex; // Activate this[0x68] gated <6; indexed readers [base+idx*8+0x348/0x378]
/*0x348*/ char* ModeCaptionsA[6]; // live char* array @0x348 (0x147D6D90..); Activate StringTable 0x2149..0x214e
/*0x378*/ char* ModeCaptionsB[6]; // Activate StringTable 0x2155..0x215a
/*0x3a8*/ CEditWnd* SearchEdit; // MW_ItemNameInput
/*0x3b0*/ CButtonWnd* SearchButton; // MW_SearchItem_Button
/*0x3b8*/ CLabel* MerchantNameLabel; // MW_MerchantName
/*0x3c0*/ CLabel* SelectedItemLabel;
/*0x3c8*/ CLabel* SelectedPriceLabel;
/*0x3d0*/ CButtonWnd* InspectButton;
/*0x3d8*/ CButtonWnd* PreviewButton;
/*0x3e0*/ CButtonWnd* SelectedItemButton;
/*0x3e8*/ CButtonWnd* BuyButton;
/*0x3f0*/ CButtonWnd* BuyMarketPlaceButton;
/*0x3f8*/ CButtonWnd* SellButton;
/*0x400*/ CButtonWnd* RecoverButton; // MW_Recover_Button
/*0x408*/ CButtonWnd* RetrieveButton; // MW_Retrieve_Button
/*0x410*/ CButtonWnd* RetrieveAllButton; // MW_Retrieve_All_Button
/*0x418*/ CButtonWnd* SendButton; // MW_Send_Button
/*0x420*/ CButtonWnd* AdventureButton; // MW_Adventure_Button
/*0x428*/ CLabel* SendToLabel; // MW_Send_To_Label
/*0x430*/ CEditWnd* SendToEdit; // MW_Send_To_Edit
/*0x438*/ CLabel* NoteLabel; // MW_Note_Label
/*0x440*/ CEditWnd* NoteEdit; // MW_Note_Edit
/*0x448*/ CButtonWnd* ClearNoteButton; // MW_Clear_Note_Button
/*0x450*/ CListWnd* ItemsList; // ItemList
/*0x458*/ CListWnd* ItemsRecoveryList; // MW_ItemListRecovery
/*0x460*/ CListWnd* ItemsMailList; // MW_ItemListMail
/*0x468*/ CButtonWnd* DoneButton; // MW_Done_Button
/*0x470*/ CPageWnd* PurchasePage; // MW_PurchasePage
/*0x478*/ CPageWnd* RecoveryPage; // MW_RecoveryPage
/*0x480*/ CPageWnd* MailPage; // MW_MailPage
/*0x488*/ CTabWnd* TabWindow; // MW_MerchantSubwindows
/*0x490*/ CButtonWnd* UsableButton; // MW_UsableButton
/*0x498*/ CButtonWnd* CashButton; // MW_CashButton; NEW jun09 (ctor [0x498]<-UNK_140a5b6f0); upstream omits
/*0x4a0*/ CLabel* CurrentCurrencyLabel; // MW_Current_Currency_Label
	// jun09 tail de-poisoned from Draw (cached) + dtor (embedded arrays). REPLACES stale
	// Unknown0x32c..Guk_Currency + Unknown0x340[0x100] (all wrong vs binary). sizeof 0x620.
/*0x4a8*/ uint64_t CachedCurrencyHandle; // Draw this[0x95]=func_0x1406b9f00(localPC currency)
/*0x4b0*/ int CachedVal_0x4b0; // Draw this[0x96]=*(int*)(_DAT_140dfc0b0+0x3a0)
/*0x4b4*/ int CachedVal_0x4b4; // Draw this[0x66] vtable count
/*0x4b8*/ int CachedVal_0x4b8; // Draw this[0x97]=*(int*)(LocalPC+0x19fc)
/*0x4bc*/ int CachedVal_0x4bc; // Draw *(int*)(LocalPC+0x182c)
/*0x4c0*/ int CachedVal_0x4c0; // Draw this[0x98]=*(int*)(LocalPC+0x1930)
/*0x4c4*/ int CachedVal_0x4c4; // Draw *(int*)(LocalPC+0x1938)
/*0x4c8*/ int CachedVal_0x4c8; // Draw this[0x99] vtable count
/*0x4cc*/ int ColumnWidthPrev; // Draw change-detect previous column width
/*0x4d0*/ int ColumnWidthCur; // Draw this[0x9a]=CListWnd__GetColumnWidth(list,3)
/*0x4d4*/ uint8_t Unknown0x4d4; // alignment/flag byte before Unknown0x4d5
/*0x4d5*/ bool Unknown0x4d5; // ctor zero-init @0x140491580; Draw gates colwidth refresh
/*0x4d8*/ CButtonWnd* ButtonTemplate; // MW_ButtonTemplate (ctor [0x4d8]<-UNK_140a5b720)
/*0x4e0*/ uint8_t EmbeddedArray0x4e0[0xf8]; // embedded obj, vtable 0x140a5b0e0 (ctor); sizeof 0xf8 (dtor 0x140492969 MOV EDX,0xf8)
/*0x5d8*/ uint8_t EmbeddedArray0x5d8[0x48]; // embedded obj, vtable 0x1408c1498 (ctor); sizeof 0x48 (dtor 0x140164119 MOV EDX,0x48)
/*0x620*/

	CMerchantWnd(CXWnd*);
	virtual ~CMerchantWnd();

	EQLIB_OBJECT void AddContainerToMercArray(EQ_Container*);
	EQLIB_OBJECT void AddEquipmentToMercArray(EQ_Equipment*);
	EQLIB_OBJECT void AddNoteToMercArray(EQ_Note*);
	EQLIB_OBJECT void ClearMerchantSlot(int);
	EQLIB_OBJECT void FinishBuyingItem(sell_msg*);
	EQLIB_OBJECT void FinishSellingItem(sell_msg*);
	EQLIB_OBJECT int SelectBuySellSlot(const ItemGlobalIndex&, int ListIndex = -1);
	EQLIB_OBJECT void DisplayBuyOrSellPrice(const ItemPtr& item, bool buy);
	EQLIB_OBJECT void HandleBuy(int);
	EQLIB_OBJECT void HandleSell(int);
	EQLIB_OBJECT void UpdateBuySellButtons();
};

SIZE_CHECK(CMerchantWnd, CMerchantWnd_size);

inline namespace deprecated {
	using EQMERCHWINDOW DEPRECATE("Use CMerchantWnd instead of EQMERCHWINDOW") = CMerchantWnd;
	using PEQMERCHWINDOW DEPRECATE("Use CMerchantWnd* instead of PEQMERCHWINDOW") = CMerchantWnd*;
}

//============================================================================
// CMusicPlayerWnd
//============================================================================

class CMusicPlayerWnd : public CSidlScreenWnd
{
public:
	CMusicPlayerWnd(CXWnd*);
	virtual ~CMusicPlayerWnd();

	EQLIB_OBJECT void Update();
	EQLIB_OBJECT void AutoStart();
	EQLIB_OBJECT void UpdateButtons();
};

//============================================================================
// CNoteWnd
//============================================================================

class CNoteWnd : public CSidlScreenWnd
{
public:
	EQLIB_OBJECT CNoteWnd(CXWnd*);
	EQLIB_OBJECT ~CNoteWnd();

	EQLIB_OBJECT bool CheckNote(EQ_Note*);
	EQLIB_OBJECT void SetNote(char*);
};

//============================================================================
// COptionsWnd
//============================================================================

struct [[offsetcomments]] KeyboardAssignmentData
{
/*0x0*/ CXStr Description;
/*0x8*/ int nAssignmentNumber;
/*0xc*/ // sizeof = 0x10 (CXStr 8-byte align pads 0xc->0x10); array stride 0x10
};

inline namespace deprecated {
	using EQKBASSIGN DEPRECATE("Use KeyboardAssignmentData instead of EQKBASSIGN") = KeyboardAssignmentData;
	using PEQKBASSIGN DEPRECATE("Use KeyboardAssignmentData* instead of PEQKBASSIGN") = KeyboardAssignmentData*;
}

// size 0x904 3-10-2004
class [[offsetcomments]] COptionsWnd : public CSidlScreenWnd, public PopDialogHandler, public WndEventHandler
{
public:
	COptionsWnd(CXWnd*);
	virtual ~COptionsWnd();

	EQLIB_OBJECT void RefreshCurrentKeyboardAssignmentList();
	EQLIB_OBJECT void ResetKeysToDefault();
	EQLIB_OBJECT void RestoreDefaultColors();
	EQLIB_OBJECT int ChatPageOnProcessFrame();
	EQLIB_OBJECT int ChatPageWndNotification(CXWnd*, uint32_t, void*);
	EQLIB_OBJECT int ColorPageOnProcessFrame();
	EQLIB_OBJECT int ColorPageWndNotification(CXWnd*, uint32_t, void*);
	EQLIB_OBJECT int DisplayPageOnProcessFrame();
	EQLIB_OBJECT int DisplayPageWndNotification(CXWnd*, uint32_t, void*);
	EQLIB_OBJECT int GeneralPageOnProcessFrame();
	EQLIB_OBJECT int GeneralPageWndNotification(CXWnd*, uint32_t, void*);
	EQLIB_OBJECT int KeyboardPageDeactivate();
	EQLIB_OBJECT int KeyboardPageHandleKeyboardMsg(uint32_t, uint32_t, bool);
	EQLIB_OBJECT int KeyboardPageOnProcessFrame();
	EQLIB_OBJECT int KeyboardPageWndNotification(CXWnd*, uint32_t, void*);
	EQLIB_OBJECT int MousePageOnProcessFrame();
	EQLIB_OBJECT int MousePageWndNotification(CXWnd*, uint32_t, void*);
	EQLIB_OBJECT int RedirectDeactivateTo(CPageWnd*);
	EQLIB_OBJECT int RedirectHandleKeyboardMsgTo(CPageWnd*, uint32_t, uint32_t, bool);
	EQLIB_OBJECT int RedirectOnProcessFrameTo(CPageWnd*);
	EQLIB_OBJECT int RedirectWndNotificationTo(CPageWnd*, CXWnd*, uint32_t, void*);
	EQLIB_OBJECT void AddKeyboardAssignment(int, int, int);
	EQLIB_OBJECT void InitKeyboardAssignments();
	EQLIB_OBJECT void InitKeyboardPage();
	EQLIB_OBJECT void KeyboardPageCancelKeypressAssignment();
	EQLIB_OBJECT void SetBagOptions(int, int);
	EQLIB_OBJECT void SyncChatPage();
	EQLIB_OBJECT void SyncColorPage();
	EQLIB_OBJECT void SyncDisplayPage();
	EQLIB_OBJECT void SyncGeneralPage();
	EQLIB_OBJECT void SyncMousePage();
	EQLIB_OBJECT void FillChatFilterList();

	//----------------------------------------------------------------------------
	// data members

	// jun09: Binds is the sole own member. KeyboardAssignmentData array-stride = 0x10 (CXStr 8-align,
	// not field-end 0xc); upstream 0x2d0..0xce0 = 0xa1*0x10 confirms. +0x10 cohort -> Binds@0x2e0.
/*0x2e0*/ KeyboardAssignmentData Binds[0xA1];   // 0xa1*0x10=0xa10 -> 0xcf0 (KeyboardAssignmentData sizeof 0x10, CXStr 8-align)
/*0xcf0*/ uint8_t Unknown0xcf0[0x1c70];           // post-Binds members (child-control ptrs etc); ctor 0x1404abc20; OPAQUE pending OTTO member-derivation; covers to op_new sizeof
/*0x2960*/
};
constexpr size_t COptionsWnd_size = 0x2960; // jun09 op_new CONFIRMED 0x2960 (OptionsWindow ctor 0x1404abc20, alloc @0x14019e4d5, BOB-gated); Binds is NOT sole member -- 0x1c70 tail opaque pending derivation
SIZE_CHECK(COptionsWnd, COptionsWnd_size);

inline namespace deprecated {
	using EQOPTIONSWINDOW DEPRECATE("Use COptionsWnd instead of EQOPTIONSWINDOW") = COptionsWnd;
	using PEQOPTIONSWINDOW DEPRECATE("Use COptionsWnd* instead of PEQOPTIONSWINDOW") = COptionsWnd*;
}

//============================================================================
// COverseerWnd
//============================================================================

class [[offsetcomments]] COverseerWnd : public CSidlScreenWnd
{
public:
};


//============================================================================
// CPetInfoWnd
//============================================================================

constexpr const int MAX_PET_BUTTONS = 14;

// may11 allocator-site reports sizeof 0x3A8 (binary truth; ctor 0x1403C7750).
// DISPATCH-5 (2026-05-18) REAFFIRMED via two independent methods:
//   1. mov ecx,0x3A8 immediate at the new+ctor wrapper allocator site
//   2. Wine heap NEXT-BLOCK signature 0x807500?? at +0x3A8 (would be at +0x3C0 if 0x3C0 sizeof)
// The earlier revert 0x3A8 -> 0x3C0 (commit 69b910b) was WRONG; binary truth is 0x3A8.
// Audit's CPetInfoWnd class declaration sums to 0x3C0 in the compiler. The 0x18-byte
// gap means the audit has 0x18 phantom bytes somewhere in the field list that don't
// exist in may11. TODO: identify which fields need removing to match 0x3A8 runtime.
// Keeping the constant at 0x3C0 here so SIZE_CHECK passes against current declaration
// (field-level audit needed before flipping constant + would require removing 24 bytes
// of phantom declarations to keep SIZE_CHECK valid).
// vftbl 0x1409FB0D8, pinst 0x140DFAFC8.
constexpr size_t CPetInfoWnd_size = 0x3d0; // jun09 body terminator 0x3d0 = declared 0x3c0 +0x10 (body laid+gated; NOTE may11 binary was 0x3a8 -- BOB to confirm jun09 op_new)

class [[offsetcomments]] CPetInfoWnd : public CSidlScreenWnd, public WndEventHandler
{
	FORCE_SYMBOLS

public:
	CPetInfoWnd(CXWnd*);
	virtual ~CPetInfoWnd();

	EQLIB_OBJECT CButtonWnd* GetButton(int);
	EQLIB_OBJECT void SetShowOnSummon(bool);
	EQLIB_OBJECT void Update();

	PlayerBuffInfoWrapper GetBuffInfo(int buffIndex) const
	{
		if (buffIndex >= 0 && buffIndex < Buffs.GetSize())
			return PlayerBuffInfoWrapper(buffIndex, &Buffs[buffIndex]);

		return PlayerBuffInfoWrapper(buffIndex, nullptr);
	}

	PlayerBuffInfoWrapper GetBuffInfoBySpellID(int spellID) const
	{
		int buffIndex = 0;
		for (const PlayerBuffInfo& pbi : Buffs)
		{
			if (pbi.SpellID == spellID)
				return PlayerBuffInfoWrapper(buffIndex, &pbi);
			++buffIndex;
		}

		return PlayerBuffInfoWrapper(-1, nullptr);
	}

	int GetTotalBuffCount() const
	{
		int count = 0;
		for (const PlayerBuffInfo& pbi : Buffs)
		{
			if (pbi.SpellID > 0)
				++count;
		}
		
		return count;
	}

	int GetMaxBuffs() const { return Buffs.GetSize(); }

	int GetBuff(int buffIndex) const { return GetBuffInfo(buffIndex).GetSpellID(); }
	int GetBuffTimer(int buffIndex) const { return GetBuffInfo(buffIndex).GetBuffTimer(); }
	const char* GetCasterName(int buffIndex) const { return GetBuffInfo(buffIndex).GetCaster(); }
	CButtonWnd* GetBuffButton(int buffIndex) const { return GetBuffInfo(buffIndex).GetBuffButton(); }
	CTextureAnimation* GetBuffIcon(int buffIndex) const { return GetBuffInfo(buffIndex).GetBuffIcon(); }

	using BuffIterator = PlayerBuffInfoWrapper::Iterator<PlayerBuffInfoWrapper>;
	mq::IteratorRange<BuffIterator> GetBuffRange() const { return mq::make_iterator_range(BuffIterator(Buffs, 0), BuffIterator(Buffs, Buffs.GetSize())); }

	#pragma region Deprecated accessors
	//
	// Deprecated accessors
	//

	// Buff -> GetBuff()
	DEPRECATE("Use GetBuff(index) or GetBuffInfo(index) insetad of Buff[index]")
	int get_DeprecatedBuff(int buffIndex) const { return GetBuffInfo(buffIndex).GetSpellID(); }
	__declspec(property(get = get_DeprecatedBuff)) int Buff[];

	// PetBuffTimer -> GetBuffTimer()
	DEPRECATE("Use GetBuffTimer(index) or GetBuffInfo(index) instead of PetBuffTimer[index]")
	int get_DeprecatedBuffTimer(int buffIndex) const { return GetBuffInfo(buffIndex).GetBuffTimer(); }
	__declspec(property(get = get_DeprecatedBuffTimer)) int PetBuffTimer[];
	#pragma endregion

	//----------------------------------------------------------------------------
	// data members

/*0x450*/ uint32_t LastUpdateTime;
/*0x2d8*/ CCheckBoxWnd* pButton[MAX_PET_BUTTONS]; // Pet%d_Button
/*0x348*/ CXWnd* pWndBuffs; // BuffWindow
/*0x350*/ CTextureAnimation* pGoodBuffBackground; // PetBlueIconBackground
/*0x358*/ CTextureAnimation* pBadBuffBackground; // PetRedIconBackground
/*0x360*/ CTextureAnimation* pBypassBuffBackground; // YellowIconBackground 360
/*0x368*/ SoeUtil::Array<PlayerBuffInfo> Buffs;
/*0x310*/ SoeUtil::Map<int, CButtonWnd*> ButtonMap;
/*0x398*/ uint32_t LastBuffDecTime; // last time buff counters were decremented
/*0x39c*/ bool bHadPetLastTime;
/*0x39d*/ bool bShowOnSummon;
/*0x3a0*/ uint32_t ListContextMenuID;
/*0x3a8*/ CXWnd* pRequestingWnd;
/*0x3b0*/ bool bRemovedBuffBlockMenuItem;
/*0x3b4*/ int PetCommandSelectContextMenu;
/*0x3b8*/ CXWnd* LastClickedButton;
/*0x3c0*/ bool bPetButtonsDirty;
/*0x3c1*/ bool Sit;
/*0x3c2*/ bool Stop;
/*0x3c3*/ bool ReGroup;
/*0x3c4*/ bool Follow;
/*0x3c5*/ bool Guard;
/*0x3c6*/ bool Taunt;
/*0x3c7*/ bool Hold;
/*0x3c8*/ bool GHold;
/*0x3c9*/ bool Focus;
/*0x3ca*/ bool SpellHold;
/*0x3cb*/ bool Resume;
/*0x3cc*/ bool ProcHold;
/*0x3d0*/
};

SIZE_CHECK(CPetInfoWnd, CPetInfoWnd_size);

//============================================================================
// CPlayerNotesWnd
//============================================================================

class CPlayerNotesWnd : public CSidlScreenWnd
{
public:
	CPlayerNotesWnd(CXWnd*);
	virtual ~CPlayerNotesWnd();

	EQLIB_OBJECT void AppendText(char*);
	EQLIB_OBJECT void SaveNotes();
};

//============================================================================
// CPlayerWnd
//============================================================================

enum ECombatState
{
	eCombatState_Combat,
	eCombatState_Debuff,
	eCombatState_Timer,
	eCombatState_Standing,
	eCombatState_Regen,
};


constexpr size_t CPlayerWnd_size = 0x408; // jun09 body terminator 0x408 = upstream 0x3f8 +0x10 (clean cohort, body laid+gated)

class [[offsetcomments]] CPlayerWnd : public CSidlScreenWnd, public WndEventHandler
{
	FORCE_SYMBOLS

public:
	CPlayerWnd(CXWnd*);
	virtual ~CPlayerWnd();

	EQLIB_OBJECT void CreateLocalMenu();
	EQLIB_OBJECT void UpdateContextMenu();

	//----------------------------------------------------------------------------
	// data members

// 0x2d0 = WndEventHandler::lastUpdate (base-provided); own members start 0x2d8
/*0x2d8*/ CGaugeWnd* pPlayerHP; // PlayerHP
/*0x2e0*/ CGaugeWnd* pPetHP; // PetHP
/*0x2e8*/ CGaugeWnd* pPlayerMana; // PlayerMana
/*0x2f0*/ CGaugeWnd* pPlayerEndurance; // PlayerFatigue
/*0x2f8*/ CLabel* pPlayerHPLbl; // HPLabel
/*0x300*/ CLabel* pPlayerManaLbl; // ManaLabel
/*0x308*/ CLabel* pPlayerEnduranceLbl; // FatigueLabel
/*0x310*/ CLabel* pPlayerHPPercentLbl; // HPPerLabel
/*0x318*/ CLabel* pPlayerManaPercentLbl; // ManaPercLabel
/*0x320*/ CLabel* pPlayerEndurancePercentLbl; // FatiguePercLabel
/*0x328*/ COLORREF HPTextColor;
/*0x330*/ CButtonWnd* pGroupRoleTankBtn; // GroupRoleTank
/*0x338*/ CButtonWnd* pGroupRoleAssistBtn; // GroupRoleAssist
/*0x340*/ CButtonWnd* pGroupRolePullerBtn; // GroupRolePuller
/*0x348*/ CButtonWnd* pGroupRoleMarkNPCBtn; // GroupRoleMarkNPC
/*0x350*/ CGaugeWnd* pCombatTimerGauge; // Player_CombatTimer
/*0x358*/ CLabel* pCombatTimerLbl; // Player_CombatTimerLabel
/*0x360*/ CButtonWnd* pNewMailIconBtn; // PW_NewMailIcon
/*0x368*/ CButtonWnd* pParcelsIconBtn; // PW_ParcelsIcon
/*0x370*/ CButtonWnd* pParcelsOverLimitIconBtn; // PW_ParcelsOverLimitIcon
/*0x378*/ CLabel* pAggroPctPlayerLbl; // PW_AggroPctPlayerLabel
/*0x380*/ CLabel* pAggroPctSecondaryLbl; // PW_AggroPctSecondaryLabel
/*0x388*/ CLabel* pAggroNameSecondaryLbl; // PW_AggroNameSecondaryLabel
/*0x390*/ bool bDrawAutoAttackRect;
/*0x394*/ int LastUpdateTimer;
/*0x398*/ int LastFrameTimer;
/*0x3a0*/ CStaticAnimationTemplate* pAttackIndicatorAnimTop; // A_AttackIndicatorAnimTop
/*0x3a8*/ CStaticAnimationTemplate* pAttackIndicatorAnimBottom; // A_AttackIndicatorAnimBottom
/*0x3b0*/ CStaticAnimationTemplate* pAttackIndicatorAnimLeft; // A_AttackIndicatorAnimLeft
/*0x3b8*/ CStaticAnimationTemplate* pAttackIndicatorAnimRight; // A_AttackIndicatorAnimRight
/*0x3c0*/ CStaticAnimationTemplate* pAttackIndicatorAnimFill; // A_AttackIndicatorAnimFill
/*0x3c8*/ CButtonWnd* pCombatStateAnimButton; // PW_CombatStateAnim
/*0x3d0*/ int AttackIndicatorPulseValue;
/*0x3d8*/ CContextMenu* pContextMenu;
/*0x3e0*/ bool Unknown0x3e0;          // jun09 (PROVISIONAL): ctor MOV byte [+0x3e0],1
/*0x3e8*/ void* Unknown0x3e8;         // jun09 (PROVISIONAL): ctor MOV qword [+0x3e8],RSI (ptr)
/*0x3f0*/ int Unknown0x3f0;           // jun09 (PROVISIONAL): ctor MOV dword [+0x3f0],ESI
/*0x3f4*/ uint8_t _pad0x3f4[0xc];     // pad to 0x400 (no stores 0x3f4..0x400)
/*0x400*/ uint16_t Unknown0x400;      // jun09 (PROVISIONAL): ctor MOV word [+0x400],0x101 (flags)
/*0x402*/ bool Unknown0x402;          // jun09 (PROVISIONAL): ctor MOV byte [+0x402],1
/*0x404*/ ECombatState CombatState; // right above "A_PWCSInCombat"
/*0x408*/
};

SIZE_CHECK(CPlayerWnd, CPlayerWnd_size);

inline namespace deprecated {
	using CPLAYERWND DEPRECATE("Use CPlayerWnd instead of CPLAYERWND") = CPlayerWnd;
	using PCPLAYERWND DEPRECATE("Use CPlayerWnd* instead of PCPLAYERWND") = CPlayerWnd*;
}

//============================================================================
// CPotionBeltWnd
//============================================================================

class CPotionBeltWnd : public CSidlScreenWnd
{
public:
	CPotionBeltWnd(CXWnd*);
	virtual ~CPotionBeltWnd();
};


//============================================================================
// CPointMerchantWnd
//============================================================================

struct [[offsetcomments]] PointMerchantItem
{
/*0x0*/ char ItemName[0x40];
/*0x40*/ int ItemID;
/*0x44*/ unsigned int Price;
/*0x48*/ int ThemeID;
/*0x4c*/ int IsStackable;
/*0x50*/ int IsLore;
/*0x54*/ int RaceMask;
/*0x58*/ int ClassMask;
/*0x5c*/ bool bCanUse;
/*0x60*/
};
constexpr size_t PointMerchantItem_size = 0x60; // plain data struct, no base/vtable, 4-byte align
SIZE_CHECK(PointMerchantItem, PointMerchantItem_size);

class PointMerchantInterface;

class [[offsetcomments]] PointMerchantWnd : public CSidlScreenWnd, public PopDialogHandler, public WndEventHandler
{
	FORCE_SYMBOLS

public:
	PointMerchantWnd(CXWnd*);
	virtual ~PointMerchantWnd();

	//----------------------------------------------------------------------------
	// data members

	// todo: verify
/*0x2dc*/ int Unknown0x008;
/*0x2e0*/ int NumItems;
/*0x2e4*/ bool HdrItemName;
/*0x2e5*/ bool HdrTheme;
/*0x2e6*/ bool HdrPrice;
/*0x2e7*/ char OriginalPointsLabel[0x40];
/*0x328*/ CLabel* MerchantNameLabel;
/*0x330*/ CListWnd* ItemList;
/*0x338*/ CListWnd* PointList;
/*0x340*/ CButtonWnd* EquipButton;
/*0x348*/ CButtonWnd* PurchaseButton;
/*0x350*/ CButtonWnd* SellButton;
/*0x358*/ CButtonWnd* DoneButton;
/*0x360*/ CLabel* PointsAvailableValue;
/*0x368*/ CLabel* PointsEverEarnedLabel;
/*0x370*/ CLabel* PointsAvailableLabel;
/*0x378*/ unsigned int NextRefreshTime;
/*0x380*/ PlayerClient* ActiveMerchant;
/*0x388*/ PointMerchantItem** Items;
/*0x390*/ int MerchantThemeId;
/*0x394*/ int CurrentSelection;
/*0x398*/ int CurrentSort;
/*0x39c*/ bool bCurrentAscending;
/*0x3a0*/ ItemGlobalIndex ItemLocation;
/*0x3b0*/ ItemPtr pSelectedItem;
/*0x3c0*/ bool bInventoryWasActive;
/*0x3c4*/ int CurrentItem;
/*0x3c8*/ int CurrentQuantity;
/*0x3cc*/ int SliderType;
/*0x3d0*/ PointMerchantInterface* pHandler;
/*0x3d8*/
};
constexpr size_t PointMerchantWnd_size = 0x3d8; // clean +0x10 cohort (CSidlScreenWnd 0x2c0->0x2d0); own-start 0x2cc->0x2dc; 30/30 fields identical to upstream; SIZEOF gate-pending BOB on 8090
SIZE_CHECK(PointMerchantWnd, PointMerchantWnd_size);

//============================================================================
// CPurchaseGroupWnd
//============================================================================

class [[offsetcomments]] CPurchaseGroupWnd : public CSidlScreenWnd
{
public:
};

//============================================================================
// CQuantityWnd
//============================================================================

class CQuantityWnd : public CGFScreenWnd, public WndEventHandler
{
public:
	CQuantityWnd(CXWnd*);
	virtual ~CQuantityWnd();

	EQLIB_OBJECT void Open(CXWnd*, int, int, int, int, int, int, bool);
	EQLIB_OBJECT void CheckMaxEditWnd();
	EQLIB_OBJECT void UpdateEditWndFromSlider();
	EQLIB_OBJECT void UpdateSliderFromEditWnd();
};

//============================================================================
// CRaidOptionsWnd
//============================================================================

class CRaidOptionsWnd : public CSidlScreenWnd
{
public:
	CRaidOptionsWnd(CXWnd*);
	virtual ~CRaidOptionsWnd();

	EQLIB_OBJECT void AddLooterToList(char*);
	EQLIB_OBJECT void ClearLooterList();
	EQLIB_OBJECT void UpdateComponents();
	EQLIB_OBJECT void InitializeClassColors();
};

//============================================================================
// CRaidWnd
//============================================================================

// size: 0x500
class [[offsetcomments]] CRaidWnd : public CSidlScreenWnd, public WndEventHandler, public CVivoxObserver
{
	FORCE_SYMBOLS

public:
	CRaidWnd(CXWnd*);
	virtual ~CRaidWnd();

	EQLIB_OBJECT void AddPlayertoList(char*, char*, char*, char*, int, int, bool);
	EQLIB_OBJECT void ChangePosition(char*, int, int, int, bool);
	EQLIB_OBJECT void ChangeRaidGroupLeader(char*, int, char*);
	EQLIB_OBJECT void ClearPlayerList();
	EQLIB_OBJECT void RemovePlayerFromList(char*, int);
	EQLIB_OBJECT void SetClassColor(int, unsigned long);
	EQLIB_OBJECT void SetPlayerClassColor(char*, int, int);
	EQLIB_OBJECT void SetPlayerClassColor(int, int, int);
	EQLIB_OBJECT void SetRaidCount(int);
	EQLIB_OBJECT void SetRaidMemberRank(char*, char*, int);
	EQLIB_OBJECT void SetRaidTarget(char*, int, char*, int);
	EQLIB_OBJECT void UpdateButtons();
	EQLIB_OBJECT void UpdateLevelAverage(int);
	EQLIB_OBJECT void UpdateMemberName(char*, char*, int);
	EQLIB_OBJECT int FindIndexNotInGroupList(char*);
	EQLIB_OBJECT int FindOpenIndexInGroup(int);
	EQLIB_OBJECT int FindPlayerIndexInGroup(char*, int);
	EQLIB_OBJECT void AddSeparator();
	EQLIB_OBJECT void InitializeClassColors();
	EQLIB_OBJECT void ResortRaidGroupList(int, int);

	//----------------------------------------------------------------------------
	// data members

/*0x2e4*/ uint8_t Unknown0x2e4[0x198];          // jun09 ctor 0x1404d5d00: opaque head (own-start 0x2e4, regrown vs upstream 0x154)
/*0x47c*/ COLORREF ClassColors[0x10];             // PROVEN: 4 MOVUPS xmm-zero @0x47c/0x48c/0x49c/0x4ac = 16 COLORREF (0x40)
/*0x4bc*/ uint8_t Unknown0x4bc[0x4c];             // scalar tail (ctor writes 0x4bc..0x504 word) -> op_new 0x508
/*0x508*/
};
constexpr size_t CRaidWnd_size = 0x508; // jun09 op_new CONFIRMED 0x508 (RaidWindow ctor 0x1404d5d00, alloc @0x14019e129, BOB-gated); 3-base CVivoxObserver; NOT clean +0x10 (ClassColors regrew to 0x47c)
SIZE_CHECK(CRaidWnd, CRaidWnd_size);

inline namespace deprecated {
	using EQRAIDWINDOW DEPRECATE("Use CRaidWnd instead of EQRAIDWINDOW") = CRaidWnd;
	using PEQRAIDWINDOW DEPRECATE("Use CRaidWnd* instead of PEQRAIDWINDOW") = CRaidWnd*;
}

//============================================================================
// CRealEstateItemsWnd
//============================================================================

class CRealEstateItemsWnd : public CSidlScreenWnd, public PopDialogHandler, public WndEventHandler
{
public:
	CRealEstateItemsWnd(CXWnd*);
	virtual ~CRealEstateItemsWnd();
};

//============================================================================
// CRespawnWnd
//============================================================================

class CRespawnWnd : public CGFScreenWnd, public WndEventHandler
{
public:
	CRespawnWnd(CXWnd* pParent);
	virtual ~CRespawnWnd();
};

//============================================================================
// CRewardSelectionWnd
//============================================================================

class CRewardSelectionWnd : public CSidlScreenWnd
{
public:
	EQLIB_OBJECT CRewardSelectionWnd(CXWnd*);

	// virtual
	EQLIB_OBJECT ~CRewardSelectionWnd();
};

//============================================================================
// CSelectorWnd
//============================================================================

// may11: sizeof 0x1240, vftbl 0x140A91C98, pinst 0x140DFAF50, ctor 0x1405049C0.
// Secondary vftbl at +0x3A8 = 0x140A92030.
// Inline sub-widget array at +0x480 (stride 0xA8, 20 elements).
// Internal fields not yet decoded -- ctor trace needed.
class CSelectorWnd : public CGFScreenWnd
{
public:
	CSelectorWnd(CXWnd*);
	virtual ~CSelectorWnd();

	EQLIB_OBJECT void KeyMapUpdated();
};

//============================================================================
// CSkillsSelectWnd
//============================================================================

class CSkillsSelectWnd : public CSidlScreenWnd
{
public:
	CSkillsSelectWnd(CXWnd*);
	virtual ~CSkillsSelectWnd();

	EQLIB_OBJECT void Refresh();
	EQLIB_OBJECT void SetTypesToDisplay(int);
	EQLIB_OBJECT void UpdateAll();
	EQLIB_OBJECT void UpdateSkill(int);
};

//============================================================================
// CSkillsWnd
//============================================================================

class CSkillsWnd : public CSidlScreenWnd
{
public:
	CSkillsWnd(CXWnd*);
	virtual ~CSkillsWnd();

	EQLIB_OBJECT void SkillImproveOccurred(int);
	EQLIB_OBJECT void UpdateAll();
	EQLIB_OBJECT void UpdateSkill(int);
};

//============================================================================
// CSocialEditWnd
//============================================================================

class CSocialEditWnd : public CSidlScreenWnd
{
public:
	CSocialEditWnd(CXWnd*);
	virtual ~CSocialEditWnd();

	EQLIB_OBJECT unsigned long GetSocialTextColor(int);
	EQLIB_OBJECT void ClickedAccept();
	EQLIB_OBJECT void ClickedClear();
	EQLIB_OBJECT void ClickedTextColorButton(int);
	EQLIB_OBJECT void UpdateControlsFromSocial();
};

//============================================================================
// CSpellBookWnd
//============================================================================

class [[offsetcomments]] CSpellBookWnd : public CSidlScreenWnd,
	public PopDialogHandler, public WndEventHandler
{
	FORCE_SYMBOLS

public:
	CSpellBookWnd(CXWnd*);
	virtual ~CSpellBookWnd();

	EQLIB_OBJECT bool StartSpellMemorization(int, int, bool);
	EQLIB_OBJECT int GetSpellMemTicksLeft();
	EQLIB_OBJECT int GetSpellScribeTicksLeft();
	EQLIB_OBJECT void AutoMemSpell(int, int);
	EQLIB_OBJECT void DeleteSpellFromBook(int, int);
	EQLIB_OBJECT void FinishMemorizing(int, int);
	EQLIB_OBJECT void FinishScribing(int, int);
	EQLIB_OBJECT void MemorizeSet(int*, int);
	EQLIB_OBJECT void RequestSpellDeletion(int);
	EQLIB_OBJECT void SwapSpellBookSlots(int, int);
	EQLIB_OBJECT void TurnToPage(int);
	EQLIB_OBJECT bool CanStartMemming(int);
	EQLIB_OBJECT void ContinueSetMem();
	EQLIB_OBJECT void DelayedSpellMem(int, int, int);
	EQLIB_OBJECT void DisplaySpellInfo(int);
	EQLIB_OBJECT void EndSetMem();
	EQLIB_OBJECT void GetSpellDeletionConfirmation(int);
	EQLIB_OBJECT void HandleLeftClickOnSpell(int);
	EQLIB_OBJECT void HandleRightClickOnSpell(int);
	EQLIB_OBJECT void HandleSpellInfoDisplay(CXWnd*);
	EQLIB_OBJECT void StartSpellMemorizationDrag(int, CButtonWnd*);
	EQLIB_OBJECT void StartSpellScribe(int);
	EQLIB_OBJECT void StopSpellBookAction();
	EQLIB_OBJECT void UpdateSpellBookDisplay();

	EQLIB_OBJECT static int GetBookSlot(int);

	// jun09: upstream 8-field head maps clean +0x10 (field-map confirms 2e0/2e8/2f0/300); op_new 0x550 (SpellBookWnd
	// @0x1405105e0) -> large jun09-new tail 0x304..0x550 (field-map: 308:8/310:8/318:8/320:8 ptrs, 330:4/334:4/338:1,
	// embedded-array gaps 338..378, 37c..408, 408..490, 4c0..548). Tail OPAQUE pending OTTO ctor derivation.
/*0x2e0*/ CPopDialogWnd* m_currentPopup;
/*0x2e8*/ int LeftPageNbr;
/*0x2ec*/ int SelectedBookIndex;
/*0x2f0*/ int MemSlotIndex;
/*0x2f4*/ int SpellId;
/*0x2f8*/ int MemTicksLeft;
/*0x2fc*/ int ScribeBookSlot;
/*0x300*/ int ScribeTicksLeft;
/*0x304*/ uint8_t Unknown0x304[0x24c];          // jun09-new tail; field-map stores + embedded arrays; types ctor-pending (OTTO)
/*0x550*/
};
constexpr size_t CSpellBookWnd_size = 0x550; // jun09 op_new CONFIRMED 0x550 (SpellBookWnd @0x1405105e0, BOB field-map); head +0x10, tail opaque
SIZE_CHECK(CSpellBookWnd, CSpellBookWnd_size);

//============================================================================
// CSpellDisplayWnd
//============================================================================

enum ESpellDisplayType
{
	SpellDisplayType_None,
	SpellDisplayType_BuffWnd,
	SpellDisplayType_PetBuffWnd,
	SpellDisplayType_BlockedBuffWnd,
	SpellDisplayType_BlockedPetBuffWnd,
	SpellDisplayType_SpellBookWnd,
	SpellDisplayType_HotButtonWnd,
	SpellDisplayType_CastSpellWnd,
	SpellDisplayType_Unknown8,
	SpellDisplayType_Unknown9,
	SpellDisplayType_TargetBuff,
};

constexpr size_t CSpellDisplayWnd_size = 0x3b8; // jun09 (test)

class [[offsetcomments]] CSpellDisplayWnd : public CSidlScreenWnd
{
	FORCE_SYMBOLS

public:
	CSpellDisplayWnd(CXWnd* parent, ESpellDisplayType displayType);
	virtual ~CSpellDisplayWnd();

	EQLIB_OBJECT void SetSpell(int SpellID, int);
	EQLIB_OBJECT void UpdateStrings();

/*0x2d0*/ int WindowID;
/*0x2d8*/ CLabelWnd* pDuration; // SDW_SpellDurationLabel
/*0x2e0*/ CStmlWnd* pDescription; // SDW_SpellDescription
/*0x2e8*/ CStmlWnd* pName; //
/*0x2f0*/ CButtonWnd* pIcon; // SDW_IconButton
/*0x2f8*/ SoeUtil::String DescriptionText;
/*0x310*/ SoeUtil::String TitleText;
/*0x328*/ SoeUtil::StringFixed<EQ_MAX_NAME> CasterName;
/*0x388*/ bool bActive;
/*0x390*/ CTextureAnimation* ptaBuffIcons; // A_SpellIcons
/*0x398*/ CTextureAnimation* ptaDragIcons;
/*0x3a0*/ bool bFailed;
/*0x3a4*/ ESpellDisplayType SpellDisplayType;
/*0x3a8*/ int SpellID;
/*0x3ac*/ int Unknown; // Used in 3rd param of spell tag string %d
/*0x450*/ int LastUpdateTime;
/*0x3b8*/
};

SIZE_CHECK(CSpellDisplayWnd, CSpellDisplayWnd_size);

//============================================================================
// CSpellGemWnd
//============================================================================

constexpr size_t CSpellGemWnd_size = 0x400; // jun09 +0x10 (base CButtonWnd 0x348; DrawTemplate@0x3e0..0x400); was stale 0x3f8
class [[offsetcomments]] CSpellGemWnd : public CButtonWnd
{
	FORCE_SYMBOLS

public:
	CSpellGemWnd(CXWnd*, uint32_t, const CXRect&, CTextureAnimation*, CTextureAnimation*, CTextureAnimation*, int, int, unsigned long);
	virtual ~CSpellGemWnd();

	EQLIB_OBJECT void SetGemTintStage(int);
	EQLIB_OBJECT void SetSpellGemTint(unsigned long);
	EQLIB_OBJECT void SetSpellIconIndex(int);

	//----------------------------------------------------------------------------
	// data members

/*0x348*/ int MouseButtonState;
/*0x34c*/ bool bChecked;
/*0x350*/ unsigned int LastRefresh;
/*0x354*/ D3DCOLOR SpellGemTintArray[11];
/*0x380*/ int SpellGemAlphaArray[11];
/*0x3ac*/ int SpellIconOffsetX;
/*0x3b0*/ int SpellIconOffsetY;
/*0x3b4*/ int SpellIconWidth;
/*0x3b8*/ int SpellIconHeight;
/*0x3bc*/ int SpellIconIndex; // if this is equal to -1 there is no spell memmed in this slot
/*0x3c0*/ int spellstate; // 1 = cast in progress or refreshtime not met 2 means we ducked or aborted cast, 0 means its ok to cast, should really rename this to tintstage
/*0x3c4*/ int TintIndex;
/*0x3c8*/ CTextureAnimation* SpellIconTexture; // CTextureAnimation
/*0x3d0*/ CTextureAnimation* CustomIconTexture; // CTextureAnimation
/*0x3d8*/ int SpellSlot;
/*0x3dc*/ int Percent;
/*0x3e0*/ CSpellGemDrawTemplate DrawTemplate;
/*0x400*/

	ALT_MEMBER_GETTER(int, SpellIconIndex, spellicon);
};
SIZE_CHECK(CSpellGemWnd, CSpellGemWnd_size);

inline namespace deprecated {
	using EQCASTSPELLGEM DEPRECATE("Use CSpellGemWnd instead of EQCASTSPELLGEM") = CSpellGemWnd;
	using PEQCASTSPELLGEM DEPRECATE("Use CSpellGemWnd* instead of PEQCASTSPELLGEM") = CSpellGemWnd*;
}

//============================================================================
// CStoryWnd
//============================================================================

class CStoryWnd : public CGFScreenWnd
{
public:
	CStoryWnd(CXWnd*);
	virtual ~CStoryWnd();

	EQLIB_OBJECT bool HasNew();
	EQLIB_OBJECT bool ShowAuto();
	EQLIB_OBJECT void SaveIni();
	EQLIB_OBJECT void SelectIndex(int);
	EQLIB_OBJECT void SelectOldestNew();
};

//============================================================================
// CTargetWnd
//============================================================================

constexpr size_t CTargetWnd_size = 0x3c8; // jun09 body terminator 0x3c8 = upstream 0x3b8 +0x10 (body laid+gated; WndEvt MI 2nd vftbl +0x2e8)

class [[offsetcomments]] CTargetWnd : public CSidlScreenWnd, public WndEventHandler
{
	FORCE_SYMBOLS

public:
	CTargetWnd(CXWnd*);
	virtual ~CTargetWnd();

	EQLIB_OBJECT void RefreshTargetBuffs(CUnSerializeBuffer& buffer);
	EQLIB_OBJECT void HandleBuffRemoveRequest(CXWnd* pWnd);

	PlayerBuffInfoWrapper GetBuffInfo(int buffIndex) const
	{
		if (buffIndex >= 0 && buffIndex < Buffs.GetSize())
			return PlayerBuffInfoWrapper(buffIndex, &Buffs[buffIndex]);

		return PlayerBuffInfoWrapper(buffIndex, nullptr);
	}

	PlayerBuffInfoWrapper GetBuffInfoBySpellID(int spellID) const
	{
		int buffIndex = 0;
		for (const PlayerBuffInfo& pbi : Buffs)
		{
			if (pbi.SpellID == spellID)
				return PlayerBuffInfoWrapper(buffIndex, &pbi);

			++buffIndex;
		}

		return PlayerBuffInfoWrapper(-1, nullptr);
	}

	int GetTotalBuffCount() const
	{
		int count = 0;
		for (const PlayerBuffInfo& pbi : Buffs)
		{
			if (pbi.SpellID > 0)
				++count;
		}

		return count;
	}

	int GetMaxBuffs() const { return Buffs.GetSize(); }

	int GetBuff(int buffIndex) const { return GetBuffInfo(buffIndex).GetSpellID(); }
	int GetBuffTimer(int buffIndex) const { return GetBuffInfo(buffIndex).GetBuffTimer(); }
	const char* GetCasterName(int buffIndex) const { return GetBuffInfo(buffIndex).GetCaster(); }
	CButtonWnd* GetBuffButton(int buffIndex) const { return GetBuffInfo(buffIndex).GetBuffButton(); }
	CTextureAnimation* GetBuffIcon(int buffIndex) const { return GetBuffInfo(buffIndex).GetBuffIcon(); }

	using BuffIterator = PlayerBuffInfoWrapper::Iterator<PlayerBuffInfoWrapper>;
	mq::IteratorRange<BuffIterator> GetBuffRange() const { return mq::make_iterator_range(BuffIterator(Buffs, 0), BuffIterator(Buffs, Buffs.GetSize())); }

#pragma region Deprecated accessors
	//
	// Deprecated accessors
	//

	// BuffSpellID -> GetBuff()
	DEPRECATE("Use GetBuff(index) or GetBuffInfo(index) insetad of BuffSpellID[index]")
		int get_DeprecatedBuff(int buffIndex) const { return GetBuffInfo(buffIndex).GetSpellID(); }
	__declspec(property(get = get_DeprecatedBuff)) int BuffSpellID[];

	// BuffTimer -> GetBuffTimer()
	DEPRECATE("Use GetBuffTimer(index) or GetBuffInfo(index) instead of BuffTimer[index]")
		int get_DeprecatedBuffTimer(int buffIndex) const { return GetBuffInfo(buffIndex).GetBuffTimer(); }
	__declspec(property(get = get_DeprecatedBuffTimer)) int BuffTimer[];
#pragma endregion

	//----------------------------------------------------------------------------
	// data members

/*0x2d8*/ CXWnd* pWndBuffs; // BuffWindow
/*0x2e0*/ CTextureAnimation* pBuffGoodBackground; // BlueIconBackground
/*0x2e8*/ CTextureAnimation* pBuffBadBackground; // RedIconBackground
/*0x2f0*/ CTextureAnimation* pBuffBypassBackground; // ellowIconBackground
/*0x2f8*/ SoeUtil::Array<PlayerBuffInfo> Buffs;
/*0x310*/ SoeUtil::Map<int, CButtonWnd*> ButtonMap;
/*0x328*/ int LastBuffReceivedTime;
/*0x32c*/ int Timer;
/*0x330*/ int ContextMenuID;
/*0x338*/ CXWnd* RequestingWnd;
/*0x340*/ bool bRemovedBuffBlockMenuItem;
/*0x344*/ int Type; // 1 = self, 4 = group member, 5 = PC, 7 = NPC
/*0x348*/ bool bFirstUpdate;
/*0x350*/ CLabelWnd* lblAggroPctPlayer; // Target_AggroPctPlayerLabel
/*0x358*/ CLabelWnd* lblAggroPctSecondary; // Target_AggroPctSecondaryLabel
/*0x360*/ CLabelWnd* lblAggroNameSecondary; // Target_AggroNameSecondaryLabel
/*0x368*/ CContextMenu* pContextMenu;
/*0x370*/ int togglePctPlayerMenu;
/*0x374*/ int togglePctSecondaryMenu;
/*0x378*/ int toggleNameSecondaryMenu;
/*0x37c*/ bool bShowPctPlayer;
/*0x37d*/ bool bShowPctSecondary;
/*0x37e*/ bool bShowNameSecondary;
/*0x380*/ CLabel* lblHPLabel; // HPLabel
/*0x388*/ CLabel* lblHPPercLabel; // HPPercLabel
/*0x390*/ CStaticAnimationTemplate* pTargetBoxAnimTop; // A_TargetBoxStaticAnimTop
/*0x398*/ CStaticAnimationTemplate* pTargetBoxAnimBottom; // A_TargetBoxStaticAnimBottom
/*0x3a0*/ CStaticAnimationTemplate* pTargetBoxAnimLeft; // A_TargetBoxStaticAnimLeft
/*0x3a8*/ CStaticAnimationTemplate* pTargetBoxAnimRight; // A_TargetBoxStaticAnimRight
/*0x3b0*/ CStaticAnimationTemplate* pTargetBoxAnimFill; // A_TargetBoxStaticAnimFill
/*0x3b8*/ PlayerClient* previousTarget;
/*0x3c0*/ uint32_t conColorRgba;
/*0x3c8*/
};

SIZE_CHECK(CTargetWnd, CTargetWnd_size);

//============================================================================
// CTaskWnd
//============================================================================

class CTaskWnd : public CSidlScreenWnd, public PopDialogHandler, public WndEventHandler
{
public:
	CTaskWnd(CXWnd*);
	virtual ~CTaskWnd();

	EQLIB_OBJECT int UpdateTaskTimers(unsigned long fasttime);

	void ConfirmAbandonTask(int taskId)
	{
		DialogResponse(100 /* abandon task */, 4 /* yes */, (void*)(intptr_t)taskId);
	}
};

//============================================================================
// CTextEntryWnd
//============================================================================

constexpr size_t CTextEntryWnd_size = 0x310; // @sizeof :: 2026-06-09 (test) -- full-store-coverage validated

class [[offsetcomments]] CTextEntryWnd : public CSidlScreenWnd, public WndEventHandler
{
	FORCE_SYMBOLS

public:
	CTextEntryWnd(CXWnd*);
	virtual ~CTextEntryWnd();

	EQLIB_OBJECT void Open(CXWnd* pwnd, int EditMode, char* Prompt, int MinLength, int MaxLength, const char* InitialText);
	EQLIB_OBJECT CXStr GetEntryText() const { return m_text; };
	EQLIB_OBJECT void SetEntryText(const CXStr& text) { m_text = text; }
	EQLIB_OBJECT void Activate(CXWnd*, int, char*, int, int, char*);
	EQLIB_OBJECT void Callback(bool);
	EQLIB_OBJECT void UpdateButtons();

/*0x02d8*/ int m_minLength;
/*0x02dc*/ int m_maxLength;
/*0x02e0*/ CXStr m_text;
/*0x02e8*/ CXWnd* m_parent;
/*0x02f0*/ CEditWnd* m_entry;
/*0x02f8*/ CLabel* m_prompt;
/*0x0300*/ CButtonWnd* m_ok;
/*0x0308*/ CButtonWnd* m_cancel;
/*0x0310*/
};
SIZE_CHECK(CTextEntryWnd, CTextEntryWnd_size);

inline namespace deprecated {
	using CTEXTENTRYWND DEPRECATE("Use CTextEntryWnd instead of CTEXTENTRYWND") = CTextEntryWnd;
	using PCTEXTENTRYWND DEPRECATE("Use CTextEntryWnd* instead of PCTEXTENTRYWND") = CTextEntryWnd*;
}

//============================================================================
// CTipWnd
//============================================================================

class CTipWnd : public CSidlScreenWnd
{
public:
	CTipWnd(CXWnd*, int);
	virtual ~CTipWnd();

	EQLIB_OBJECT void InitializeTipSettings();
	EQLIB_OBJECT void UpdateButtons();
	EQLIB_OBJECT bool IsRecentTOTD(int);
	EQLIB_OBJECT int SelectRandomTip();
	EQLIB_OBJECT void AddContextTip(int);
	EQLIB_OBJECT void LoadINISettings();
	EQLIB_OBJECT void SetTOTD(int);
	EQLIB_OBJECT void ShowHistoryTip(int);
	EQLIB_OBJECT void CleanDayTips();
	EQLIB_OBJECT void LoadDayTips();
};


//============================================================================
// CTrackingWnd
//============================================================================

class CTrackingWnd : public CSidlScreenWnd
{
public:
	CTrackingWnd(CXWnd*);
	virtual ~CTrackingWnd();

	EQLIB_OBJECT void DoTrackFilter(bool);
	EQLIB_OBJECT void DoTrackSort(bool);
	EQLIB_OBJECT void RemovePlayerFromTracking(PlayerClient*);
	EQLIB_OBJECT void SetTrackingList(const char*, int);
	EQLIB_OBJECT int GetListIdByData(unsigned int);
	EQLIB_OBJECT unsigned long GetTrackColor(int);
	EQLIB_OBJECT void GenerateTrackingList();
	EQLIB_OBJECT void NotifyServerOfTrackingTarget(int);
	EQLIB_OBJECT void RemoveFromListWndByData(unsigned int);
	EQLIB_OBJECT void RemovePlayerFromTracking(int);
	EQLIB_OBJECT void UpdateTrackingControls();
	EQLIB_OBJECT void UpdateTrackingList(bool);
};

//============================================================================
// CTradeSkillDepotWnd
//============================================================================

constexpr size_t CTradeskillDepotWnd_size = 0x398; // jun09 -- half-lay guard
class [[offsetcomments]] CTradeskillDepotWnd : public CSidlScreenWnd, public WndEventHandler
{
public:
	FORCE_SYMBOLS;

/*0x2d8*/ CListWnd* pItemList; // TD_Item_List
/*0x2e0*/ CButtonWnd* pInspectButton; // TD_Inspect_Button
/*0x2e8*/ CLabel* pSelectedItemLabel; // TD_Selected_Item_Label
/*0x2f0*/ CLabel* pNoDataLabel; // TD_NoDataLabel
/*0x2f8*/ CXWnd* pScreenHideList; // TD_ScreenHideList
/*0x300*/ CButtonWnd* pSelectedItemSlot; // TD_Selected_Item_Slot
/*0x308*/ CButtonWnd* pWithdrawButton; // TD_Withdraw_Button
/*0x310*/ CButtonWnd* pExitButton; // TD_Exit_Button
/*0x318*/ CLabel* pItemCountNumber; // TD_Item_Count_Number
/*0x320*/ CEditWnd* pSearchItemInput; // TD_SearchItem_Input
/*0x328*/ CButtonWnd* pSearchItemButton; // TD_SearchItem_Button
/*0x330*/ SoeUtil::HashMap<int, ItemPtr> Items;
/*0x368*/ bool bNeedsUpdate;
/*0x370*/ ItemPtr pSelectedItem;
/*0x380*/ uint32_t SelectedItemID;
/*0x388*/ uint64_t lastUpdateTime;
/*0x390*/ bool bUnknown5;
/*0x398*/
};
SIZE_CHECK(CTradeskillDepotWnd, CTradeskillDepotWnd_size);

//============================================================================
// CTradeSkillWnd
//============================================================================

constexpr int MAX_RECIPE_ITEMS = 10;

struct [[offsetcomments]] TradeskillRecipe
{
	FORCE_SYMBOLS;

/*0x0*/ int ID;
/*0x4*/ int Trivial;
/*0x8*/ int ContainerType;
/*0xc*/ int ContainerID;
/*0x10*/ int RequiredSize;
/*0x14*/ char Name[0x40];
/*0x54*/ bool bUnknown;
/*0x58*/ int Ingredient[MAX_RECIPE_ITEMS]; // ID# of ingredient(s)
/*0x80*/ int IngredientIcon[MAX_RECIPE_ITEMS]; // Icon# of ingredient(s) (Note: 499 is blank)
/*0xa8*/
};
constexpr size_t TradeskillRecipe_size = 0xa8; // plain struct delta-0; 9/9 fields
SIZE_CHECK(TradeskillRecipe, TradeskillRecipe_size);

inline namespace deprecated {
	using EQTRADESKILLRECIPE DEPRECATE("Use TradeskillRecipe instead of EQTRADESKILLRECIPE") = TradeskillRecipe;
	using PEQTRADESKILLRECIPE DEPRECATE("Use TradeskillRecipe* instead of PEQTRADESKILLRECIPE") = TradeskillRecipe*;
}

// size: 0x10e0 2022-11-22 (test)
class [[offsetcomments]] CTradeSkillWnd : public CSidlScreenWnd
{
	FORCE_SYMBOLS;

public:
	CTradeSkillWnd(CXWnd* parent);
	virtual ~CTradeSkillWnd();

	//----------------------------------------------------------------------------
	// data members

	// todo: check and update
	// jun09 re-derived: OLD model was STALE (ended 0x3d8; real op_new 0x10d8). Child ptrs from OTTO childpairs
	// (GetChildItem string->offset, firewall-clean); types by SIDL suffix. Data tail opaque (OTTO store-map: SearchResults
	// array via eh_vector@0xf40 + state scalars) pending finer decode.
/*0x2d0*/ CListWnd* RecipeList;                  // childpair RecipeList
/*0x2d8*/ CEditWnd* MinTrivialEdit;              // childpair
/*0x2e0*/ CEditWnd* MaxTrivialEdit;              // childpair
/*0x2e8*/ CEditWnd* SearchTextEdit;              // childpair
/*0x2f0*/ CButtonWnd* SearchButton;              // childpair
/*0x2f8*/ CButtonWnd* AddFavoriteButton;         // childpair
/*0x300*/ CButtonWnd* RemoveFavoriteButton;      // childpair
/*0x308*/ CButtonWnd* ShowFavoritesButton;       // childpair
/*0x310*/ CButtonWnd* PersonalDepotButton;       // childpair
/*0x318*/ CButtonWnd* PersonalDepotCheckbox;     // childpair
/*0x320*/ void* Unknown0x320;                    // OTTO: non-child scalar/ptr (skipped in childpairs)
/*0x328*/ CButtonWnd* AutoInvButton;             // childpair
/*0x330*/ CButtonWnd* MakeAllCheckbox;           // childpair
/*0x338*/ CButtonWnd* ContainerIcon;             // childpair
/*0x340*/ CLabelWnd* ContainerName;              // childpair
/*0x348*/ CLabelWnd* SkillLabel;                 // childpair
/*0x350*/ CButtonWnd* RequiredIcon[0xa];         // childpair RequiredIcon%d array (0x50 region 0x350..0x3a0)
/*0x3a0*/ CButtonWnd* CombineButton;             // childpair
/*0x3a8*/ CButtonWnd* ExperimentButton;          // childpair
/*0x3b0*/ CButtonWnd* CloseButton;               // childpair
/*0x3b8*/ void* Unknown0x3b8;                    // store-map ptr (RDI)
/*0x3c0*/ uint8_t Unknown0x3c0[0xd18];           // data tail (OTTO store-map: SearchResults[0x64] eh_vector@0xf40 + Container/SelectedRecipe/SkillLevel/state scalars); opaque pending finer decode -> 0x10d8
/*0x10d8*/
};
constexpr size_t CTradeSkillWnd_size = 0x10d8; // jun09 op_new CONFIRMED 0x10d8 (oracle TradeskillWnd @0x14053d8b0, BOB-verified); child ptrs OTTO-childpair-named, data tail opaque
SIZE_CHECK(CTradeSkillWnd, CTradeSkillWnd_size);

//============================================================================
// CTradeWnd
//============================================================================

constexpr size_t CTradeWnd_size = 0x1748; // jun09 op_new (CGFScreenWnd+WndEvt +0x10; verified component-map 0x4a8/0x748/0xc78 + op_new 0x1748)

class [[offsetcomments]] CTradeWnd : public CGFScreenWnd, public WndEventHandler
{
	FORCE_SYMBOLS

public:
	CTradeWnd(CXWnd*);
	virtual ~CTradeWnd();

	EQLIB_OBJECT bool IsMyTradeSlot(int, bool*);
	EQLIB_OBJECT void Activate(PlayerClient*, bool);
	EQLIB_OBJECT void AddContainerToHisTradeArray(EQ_Container*);
	EQLIB_OBJECT void AddEquipmentToHisTradeArray(EQ_Equipment*);
	EQLIB_OBJECT void AddNoteToHisTradeArray(EQ_Note*);
	EQLIB_OBJECT void ClickedCancelButton();
	EQLIB_OBJECT void ClickedMoneyButton(int);
	EQLIB_OBJECT void ClickedTradeButton();
	EQLIB_OBJECT void CompleteTrade();
	EQLIB_OBJECT void DeleteItemFromHisTradeArray(int);
	EQLIB_OBJECT void DropItemIntoTrade();
	EQLIB_OBJECT void SetHisMoney(int, long);
	EQLIB_OBJECT void SetHisReadyTrade(bool);
	EQLIB_OBJECT void SetMyReadyTrade(bool);
	EQLIB_OBJECT void TradeItemChanged(int, int);
	EQLIB_OBJECT void UpdateTradeDisplay();

/*0x3bc*/ unsigned int NextRefreshTime;
/*0x3c0*/ bool bInventoryWasOpen;

private:
	// If New UI is enabled, these members will not be initialized, and the components will be used instead. Use the
	// Accessors below instead.
/*0x3c8*/ CButtonWnd* m_hisMoneyButton[eNumMoneySlotTypes];
/*0x3e8*/ CButtonWnd* m_myMoneyButton[eNumMoneySlotTypes];
/*0x408*/ CButtonWnd* m_tradeButton;
/*0x410*/ CButtonWnd* m_cancelButton;
/*0x418*/ CStmlWnd* m_hisNameLabel;
/*0x420*/ CStmlWnd* m_myNameLabel;
/*0x428*/ CInvSlotWnd* m_invSlotWnds[MAX_TRADE_SLOTS];

public:
	// CButtonWnd* HisMoneyButton[eNumMoneySlotTypes]
	CButtonWnd* _get_hisMoneyButton(int idx) { return idx < eNumMoneySlotTypes ? GetNewUIEngineWindow(m_hisMoneyButton[idx], HisMoneyComponent[idx]) : nullptr; }
	__declspec(property(get = _get_hisMoneyButton)) CButtonWnd* HisMoneyButton[];

	// CButtonWnd* MyMoneyButton[eNumMoneySlotTypes];
	CButtonWnd* _get_myMoneyButton(int idx) { return idx < eNumMoneySlotTypes ? GetNewUIEngineWindow(m_myMoneyButton[idx], MyMoneyComponent[idx]) : nullptr; }
	__declspec(property(get = _get_myMoneyButton)) CButtonWnd* MyMoneyButton[];

	// CButtonWnd* TradeButton;
	CButtonWnd* _get_tradeButton() { return GetNewUIEngineWindow(m_tradeButton, TradeButtonComponent); }
	__declspec(property(get = _get_tradeButton)) CButtonWnd* TradeButton;

	// CButtonWnd* CancelButton;
	CButtonWnd* _get_cancelButton() { return GetNewUIEngineWindow(m_cancelButton, CancelButtonComponent); }
	__declspec(property(get = _get_cancelButton)) CButtonWnd* CancelButton;

	// CStmlWnd* HisNameLabel;
	CStmlWnd* _get_hisNameLabel() { return GetNewUIEngineWindow(m_hisNameLabel, OtherNameComponent); }
	__declspec(property(get = _get_hisNameLabel)) CStmlWnd* HisNameLabel;

	// CStmlWnd* MyNameLabel;
	CStmlWnd* _get_myNameLabel() { return GetNewUIEngineWindow(m_myNameLabel, SelfNameComponent); }
	__declspec(property(get = _get_myNameLabel)) CStmlWnd* MyNameLabel;

	// CInvSlotWnd* pInvSlotWnd[MAX_TRADE_SLOTS];
	CInvSlotWnd* _get_invSlotWnd(int idx) { return idx < MAX_TRADE_SLOTS ? GetNewUIEngineWindow(m_invSlotWnds[idx], TradeSlotComponent[idx]) : nullptr; }
	__declspec(property(get = _get_invSlotWnd)) CInvSlotWnd* pInvSlotWnd[];

	// If New UI is enabled, these components are used instead:
/*0x4a8*/ UIButtonComponent HisMoneyComponent[eNumMoneySlotTypes];
/*0x748*/ UIButtonComponent MyMoneyComponent[eNumMoneySlotTypes];
/*0x9e8*/ UIButtonComponent TradeButtonComponent;
/*0xa90*/ UIButtonComponent CancelButtonComponent;
/*0xb38*/ UIStmlComponent OtherNameComponent;
/*0xbd8*/ UIStmlComponent SelfNameComponent;
/*0xc78*/ UIInvSlotComponent TradeSlotComponent[16];

/*0x16f8*/ long HisMoney[eNumMoneySlotTypes];
/*0x1708*/ long MyMoney[eNumMoneySlotTypes];
/*0x1718*/ ItemContainer TradeItems;
/*0x1740*/ bool bHisReadyTrade; // was HisTradeReady
/*0x1741*/ bool bMyReadyTrade; // was MyTradeReady
/*0x1742*/ bool bIsTrading; // was TradeWndOpen
/*0x1744*/

	ItemContainer& GetTradeItems() { return TradeItems; }
	// TODO: Add aliases

	ALT_MEMBER_GETTER(bool, bHisReadyTrade, HisTradeReady);
	ALT_MEMBER_GETTER(bool, bMyReadyTrade, MyTradeReady);
};

SIZE_CHECK(CTradeWnd, CTradeWnd_size);

//============================================================================
// CTrainWnd
//============================================================================

class CTrainWnd : public CSidlScreenWnd
{
public:
	CTrainWnd(CXWnd*);
	virtual ~CTrainWnd();

	EQLIB_OBJECT void SetGMData(int*, unsigned char*, float);
	EQLIB_OBJECT void SkillChanged(int);
	EQLIB_OBJECT char* SkillName(int);
	EQLIB_OBJECT int SkillValue(int);
	EQLIB_OBJECT void SortNames(int);
	EQLIB_OBJECT void SortSkill(int);
	EQLIB_OBJECT void SwapSkill(int, int);
	EQLIB_OBJECT void Train();
	EQLIB_OBJECT void UpdateAll(bool);
	EQLIB_OBJECT void UpdateRight();
	EQLIB_OBJECT void UpdateSkill(int);
};

//============================================================================
// CVideoModesWnd
//============================================================================

class CVideoModesWnd : public CSidlScreenWnd
{
public:
	CVideoModesWnd(CXWnd*);
	virtual ~CVideoModesWnd();

	EQLIB_OBJECT void RestoreOldMode();
	EQLIB_OBJECT void Update();
	EQLIB_OBJECT void UpdateSelection(unsigned int);
};

//============================================================================
// CZoneGuideWnd
//============================================================================

enum eZoneGuideConnectionsView
{
	eZGCV_None,
	eZGCV_Selected,
	eZGCV_PreviewPath,
	eZGCV_ActivePath,
	eZGCV_Disabled,
};

class [[offsetcomments]] ZoneGuideConnection
{
	FORCE_SYMBOLS;

public:
/*0x0*/ EQZoneIndex destZoneId;
/*0x4*/ int transferTypeIndex;
/*0x8*/ int64_t requiredExpansions; // EQExpansionOwned
/*0x10*/ bool disabled;
/*0x14*/
};

class [[offsetcomments]] ZoneGuideContinent
{
	FORCE_SYMBOLS;

public:
/*0x0*/ int id;
/*0x4*/ int displaySequence;
/*0x8*/ CXStr name;
/*0x10*/
};

class [[offsetcomments]] ZoneGuideZoneType
{
	FORCE_SYMBOLS;

public:
/*0x0*/ int id;
/*0x4*/ int displaySequence;
/*0x8*/ CXStr name;
/*0x10*/
};

class [[offsetcomments]] ZoneGuideTransferType
{
	FORCE_SYMBOLS;

public:
/*0x0*/ int id;
/*0x8*/ CXStr description;
/*0x10*/
};

class [[offsetcomments]] ZoneGuideZone
{
	FORCE_SYMBOLS;

public:
/*0x0*/ EQZoneIndex zoneId;
/*0x8*/ CXStr name;
/*0x10*/ int continentIndex;
/*0x14*/ int minLevel;
/*0x18*/ int maxLevel;
/*0x20*/ DynamicBitField<unsigned short, short> types;
/*0x30*/ ArrayClass<ZoneGuideConnection> zoneConnections;
/*0x48*/
};

struct [[offsetcomments]] ZonePathData
{
	FORCE_SYMBOLS;

/*0x0*/ EQZoneIndex zoneId;
/*0x4*/ int transferTypeIndex;
/*0x8*/

	ZonePathData(EQZoneIndex zoneId, int transferTypeIndex)
		: zoneId(zoneId), transferTypeIndex(transferTypeIndex) {}
	ZonePathData()
		: zoneId(0), transferTypeIndex(-1) {}
};

class [[offsetcomments]] ZoneGuideManagerBase
{
	FORCE_SYMBOLS;

public:
	ZoneGuideManagerBase();
	virtual ~ZoneGuideManagerBase();

	virtual void ResetAllData();
	//virtual void Serialize(CSerializeBuffer&);
	//virtual void Unserialize(CUnserializeBuffer&);

/*0x0008*/ ZoneGuideZone zones[ZONE_COUNT];
/*0xf9c8*/ ArrayClass<ZoneGuideContinent> continents;     // BOB ctor-lock; name via Get accessors
/*0xf9e0*/ ArrayClass<ZoneGuideZoneType> zoneTypes;
/*0xf9f8*/ ArrayClass<ZoneGuideTransferType> transferTypes;
/*0xfa10*/

	ZoneGuideZone* GetZone(EQZoneIndex zi)
	{
		if (zi > 0 && zi < ZONE_COUNT)
		{
			if (zones[zi].zoneId != 0)
				return &zones[zi];
		}

		return nullptr;
	}

	CXStr GetContinentNameByIndex(int continentIndex)
	{
		return continentIndex >= 0 && continentIndex < (int)continents.size() ? continents[continentIndex].name : CXStr();
	}

	CXStr GetZoneTypeNameByIndex(int zoneTypeIndex)
	{
		return zoneTypeIndex >= 0 && zoneTypeIndex < (int)zoneTypes.size() ? zoneTypes[zoneTypeIndex].name : CXStr();
	}

	CXStr GetZoneTransferTypeNameByIndex(int transferTypeIndex) const
	{
		return transferTypeIndex >= 0 && transferTypeIndex < (int)transferTypes.size() ? transferTypes[transferTypeIndex].description.c_str() : CXStr();
	}
};
constexpr size_t ZoneGuideManagerBase_size = 0xfa10; // jun09 BOB ctor-lock: zones[888]@0x8 inline + 3 ArrayClasses @0xf9c8/0xf9e0/0xf9f8
SIZE_CHECK(ZoneGuideManagerBase, ZoneGuideManagerBase_size);

using ZonePathArray = ArrayClass<ZonePathData>;

constexpr size_t ZoneGuideManagerClient_size = 0xfa50; // jun09 BOB ctor-lock (Client ctor FUN_140359f00): Base 0xfa10 + own activePath@0xfa10..findActivePath@0xfa4b

class [[offsetcomments]] ZoneGuideManagerClient : public ZoneGuideManagerBase
{
	FORCE_SYMBOLS

public:
/*0xfa10*/ ZonePathArray activePath;
/*0xfa28*/ ZonePathArray previewPath;
/*0xfa40*/ EQZoneIndex currentZone;
/*0xfa44*/ int heroesJourneyIndex;
/*0xfa48*/ bool zoneGuideDataSet;
/*0xfa49*/ bool includeBindZoneInPath;
/*0xfa4a*/ bool autoFindActivePath;
/*0xfa4b*/ bool findActivePath;
/*0xfa50*/

	EQLIB_OBJECT static ZoneGuideManagerClient& Instance();
};

SIZE_CHECK(ZoneGuideManagerClient, ZoneGuideManagerClient_size)

constexpr size_t CZoneGuideWnd_size = 0x448; // @sizeof :: 2026-06-09 (test) -- ctor 0x14035c4e0 op_new(0x448); offsets validated vs 13 ctor stores

class [[offsetcomments]] CZoneGuideWnd : public CSidlScreenWnd, public WndEventHandler
{
	FORCE_SYMBOLS

public:
// jun09 own fields: 37 child ctrls (SIDL CreateChildControl, OTTO-named) @0x2d8..0x400 + 20 scalar tail.
// Offsets computed from corpus order+types, VALIDATED: all 13 ctor-store anchors (0x400..0x440) hit, end=0x448.
// ctor 0x14035c4e0, primary vtable 0x140993c78, WndEventHandler 2nd-base @0x2d0, sizeof 0x448. NO shuffle.
/*0x02d8*/ CVerticalLayoutWnd* VerticalLayout;
/*0x02e0*/ CButtonWnd* FilterMyLevelButton;
/*0x02e8*/ CButtonWnd* FilterAllLevelsButton;
/*0x02f0*/ CButtonWnd* FilterZonesActiveButton;
/*0x02f8*/ CButtonWnd* FilterZonesInactiveButton;
/*0x0300*/ CButtonWnd* ZoneRunSearchButton;
/*0x0308*/ CButtonWnd* ZoneClearSearchButton;
/*0x0310*/ CButtonWnd* SelectCurrentZoneButton;
/*0x0318*/ CEditWnd* LevelFilterEdit;
/*0x0320*/ CEditWnd* ZoneSearchEdit;
/*0x0328*/ CComboWnd* TypeFilterCombo;
/*0x0330*/ CComboWnd* ContinentFilterCombo;
/*0x0338*/ CListWnd* ZonesList;
/*0x0340*/ CLabelWnd* ViewZoneConnectionsSelectedZoneLabel;
/*0x0348*/ CLabelWnd* ViewZoneConnectionsPreviewPathLabel;
/*0x0350*/ CLabelWnd* ViewZoneConnectionsActivePathLabel;
/*0x0358*/ CLabelWnd* ViewZoneConnectionsDisabledLabel;
/*0x0360*/ CButtonWnd* ViewZoneConnectionsSelectedZoneButton;
/*0x0368*/ CButtonWnd* ViewZoneConnectionsPreviewPathButton;
/*0x0370*/ CButtonWnd* ViewZoneConnectionsActivePathButton;
/*0x0378*/ CButtonWnd* ViewZoneConnectionsDisabledButton;
/*0x0380*/ CButtonWnd* DisableConnectionTemplateButton;
/*0x0388*/ CListWnd* ZoneConnectionsList;
/*0x0390*/ CButtonWnd* ResetPathStartZoneButton;
/*0x0398*/ CButtonWnd* SetPathStartZoneButton;
/*0x03a0*/ CButtonWnd* SetPathEndZoneButton;
/*0x03a8*/ CButtonWnd* ShowPathWndButton;
/*0x03b0*/ CButtonWnd* HidePathWndButton;
/*0x03b8*/ CButtonWnd* FindPathButton;
/*0x03c0*/ CButtonWnd* EndFindButton;
/*0x03c8*/ CButtonWnd* ClearPathWndButton;
/*0x03d0*/ CButtonWnd* ActivatePathButton;
/*0x03d8*/ CButtonWnd* IncludeBindZoneInPathGenerationButton;
/*0x03e0*/ CButtonWnd* ShowPathWndOnPathActivationButton;
/*0x03e8*/ CButtonWnd* AutoFindActivePathButton;
/*0x03f0*/ CEditWnd* PathStartZoneEdit;
/*0x03f8*/ CEditWnd* PathEndZoneEdit;
/*0x0400*/ uint32_t NextButtonRefreshTime;
/*0x0404*/ EQZoneIndex CurrentZone;
/*0x0408*/ bool bFilterActive;
/*0x040c*/ int FilterLevel;
/*0x0410*/ int FilterContinentIndex;
/*0x0414*/ int FilterZoneTypeIndex;
/*0x0418*/ bool bSelectCurrentZone;
/*0x0420*/ CXStr ZoneSearchString;
/*0x0428*/ eZoneGuideConnectionsView eCurrConnectionsView;
/*0x042c*/ EQZoneIndex CurrConnectionsViewSelectedZone;
/*0x0430*/ bool bCurrentConnectionsViewPreviewPathChanged;
/*0x0431*/ bool bCurrentConnectionsViewActivePathChanged;
/*0x0432*/ bool bSetPathStartZoneToCurrentZone;
/*0x0434*/ EQZoneIndex StartZone;
/*0x0438*/ EQZoneIndex EndZone;
/*0x043c*/ bool bZoneGuideDataChanged;
/*0x043d*/ bool bZoneListChanged;
/*0x043e*/ bool bZoneConnectionsListChanged;
/*0x043f*/ bool bPathStartZoneChanged;
/*0x0440*/ int RightClickMenuID;
/*0x0448*/  // sizeof (expect 0x448)
};
SIZE_CHECK(CZoneGuideWnd, CZoneGuideWnd_size);

constexpr size_t CZonePathWnd_size = 0x2e8; // @sizeof :: 2026-06-09 (test) -- full-store-coverage validated

class [[offsetcomments]] CZonePathWnd : public CSidlScreenWnd, public WndEventHandler
{
public:
/*0x02d8*/ EQZoneIndex currentZone;
/*0x02dc*/ bool zonePathDirty;
/*0x02e0*/ CListWnd* listZones;
/*0x02e8*/
};
SIZE_CHECK(CZonePathWnd, CZonePathWnd_size);

//============================================================================
// CSidlManagerBase
//============================================================================

enum EStaticScreenPieceClasses
{
	StaticScreenPieceUnknown = -1,

	StaticScreenPieceHeader,
	StaticScreenPieceFrame,
	StaticScreenPieceText,
	StaticScreenPieceAnimation,
	StaticScreenPieceTintedBlendAnimation,

	StaticScreenPieceMax,
};

class [[offsetcomments]] CSidlManagerBase
{
	FORCE_SYMBOLS

public:
	CSidlManagerBase();
	virtual ~CSidlManagerBase();

	//----------------------------------------------------------------------------
	// virtuals

	virtual CXWnd* CreateXWnd(CXWnd* parent, CControlTemplate* pTemplate);

	//----------------------------------------------------------------------------
	// defined methods

	EQLIB_OBJECT CButtonDrawTemplate* FindButtonDrawTemplate(uint32_t id) const;
	EQLIB_OBJECT CButtonDrawTemplate* FindButtonDrawTemplate(std::string_view name) const;

	EQLIB_OBJECT CXMLParamManager* GetParamManager();

	// this "bSomething" is a parameter passed through to CreateButtonWnd and CreateScreenWnd, which is then passed back through
	// CreateXWndFromTemplate recursively... not sure where it is used yet. A couple non-xml source set it to 1.
	EQLIB_OBJECT CXWnd* CreateXWndFromTemplate(CXWnd* pParent, CControlTemplate* pTemplate, bool bUnknown = false);

	// same as above but looks up a template by name.
	EQLIB_OBJECT CXWnd* CreateXWndFromTemplate(CXWnd* pParent, const CXStr& name);

	//----------------------------------------------------------------------------
	// methods

	EQLIB_OBJECT void DeleteContents();
	EQLIB_OBJECT void LoadSidl(const CXStr& Path, const CXStr& DefaultPath, const CXStr& Filename, const CXStr& DefaultClientPath = "UIFiles\\default\\");
	EQLIB_OBJECT CXStr& GetParsingErrorMsg();

	EQLIB_OBJECT EStaticScreenPieceClasses GetScreenPieceEnum(const CScreenPieceTemplate*) const;
	EQLIB_OBJECT EStaticScreenPieceClasses GetScreenPieceEnum(const CParamScreenPiece*) const;

	EQLIB_OBJECT CScrollbarTemplate* FindScrollbarTemplate(const CXStr& name) const;
	EQLIB_OBJECT CScrollbarTemplate* FindScrollbarTemplate(uint32_t) const;
	EQLIB_OBJECT CSliderDrawTemplate* FindSliderDrawTemplate(const CXStr& Name) const;
	EQLIB_OBJECT CSliderDrawTemplate* FindSliderDrawTemplate(uint32_t) const;
	EQLIB_OBJECT CUITextureInfo* FindTexture(const CXStr&) const;
	EQLIB_OBJECT CUITextureInfo* FindTexture(uint32_t) const;
	EQLIB_OBJECT CTextureAnimation* FindAnimation(const CXStr&) const;
	EQLIB_OBJECT CTextureAnimation* FindAnimation(uint32_t) const;
	EQLIB_OBJECT CTAFrameDraw* FindFrameDraw(const CXStr&) const;
	EQLIB_OBJECT CTAFrameDraw* FindFrameDraw(uint32_t) const;
	EQLIB_OBJECT CXWndDrawTemplate* FindDrawTemplate(const CXStr&) const;
	EQLIB_OBJECT CXWndDrawTemplate* FindDrawTemplate(uint32_t) const;
	EQLIB_OBJECT CScreenPieceTemplate* FindScreenPieceTemplate(const CXStr& Name) const;
	EQLIB_OBJECT CScreenPieceTemplate* FindScreenPieceTemplate(uint32_t) const;
	EQLIB_OBJECT CLayoutStrategyTemplate* FindLayoutStrategyTEmplate(uint32_t id);

	EQLIB_OBJECT CParamScreenPiece* GetScreenPiece(CParamScreen* screen, const CXStr& screenId) const;
	EQLIB_OBJECT CTextureAnimation CreateTextureAnimationFromSidlAnimation(const CParamUi2DAnimation*) const;
	EQLIB_OBJECT CTAFrameDraw CreateTAFrameDrawFromSidlFrame(const CParamFrameTemplate*) const;
	EQLIB_OBJECT CXWndDrawTemplate CreateDrawTemplateFromParamWindowDrawTemplate(const CParamWindowDrawTemplate*) const;

	EQLIB_OBJECT void AddScreenPieceTemplateInOrder(CScreenPieceTemplate*);
	EQLIB_OBJECT void AddAnimationInOrder(CTextureAnimation*);
	EQLIB_OBJECT void AddTAFrameDrawInOrder(CTAFrameDraw*);
	EQLIB_OBJECT void AddDrawTemplateInOrder(CXWndDrawTemplate*);
	EQLIB_OBJECT void AddLayoutStrategyInOrder(CLayoutStrategyTemplate*);

	EQLIB_OBJECT CButtonDrawTemplate GetButtonDrawTemplateFromParamButtonDrawTemplate(const CParamButtonDrawTemplate&) const;
	EQLIB_OBJECT CGaugeDrawTemplate GetGaugeDrawTemplateFromParamGaugeDrawTemplate(const CParamGaugeDrawTemplate&) const;
	EQLIB_OBJECT CSpellGemDrawTemplate GetSpellGemDrawTemplateFromParamSpellGemDrawTemplate(const CParamSpellGemDrawTemplate&) const;
	EQLIB_OBJECT CScrollbarTemplate GetScrollbarTemplateFromParamScrollbarTemplate(const CParamScrollbarDrawTemplate&) const;
	EQLIB_OBJECT CSliderDrawTemplate GetSliderDrawTemplateFromParamSliderDrawTemplate(const CParamSliderDrawTemplate&) const;

	EQLIB_OBJECT static CXPoint GetPointFromParamPoint(const CParamPoint&);
	EQLIB_OBJECT static CXRect GetRectFromParamPointSize(const CParamPoint&, const CParamSize&);
	EQLIB_OBJECT static CXSize GetSizeFromParamSize(const CParamSize&);
	EQLIB_OBJECT static CXStr TranslateString(const CXStr&);
	EQLIB_OBJECT static D3DCOLOR GetD3DCOLOR(const CParamRGB&);

	EQLIB_OBJECT CLayoutStrategyTemplate* CreateLayoutStrategyTemplate(CParamLayoutStrategy*);
	EQLIB_OBJECT CScreenPieceTemplate* CreateScreenPieceTemplateFromParamScreenPiece(const CParamScreenPiece*) const;
	EQLIB_OBJECT CLayoutStrategy* CreateLayoutStrategy(CLayoutStrategyTemplate*);
	EQLIB_OBJECT CXWnd* CreateButtonWnd(CXWnd* parent, CControlTemplate* pTemplate);
	EQLIB_OBJECT CXWnd* CreateScreenWnd(CXWnd* parent, CControlTemplate* pTemplate);
	EQLIB_OBJECT CXWnd* CreatePageWnd(CXWnd* parent, CControlTemplate* pTemplate);
	EQLIB_OBJECT CXWnd* CreateListWnd(CXWnd* parent, CControlTemplate* pTemplate);
	EQLIB_OBJECT CXWnd* CreateSliderWnd(CXWnd* parent, CControlTemplate* pTemplate);
	EQLIB_OBJECT CXWnd* CreateLabelWnd(CXWnd* parent, CControlTemplate* pTemplate);
	EQLIB_OBJECT CXWnd* CreateSTMLWnd(CXWnd* parent, CControlTemplate* pTemplate);
	EQLIB_OBJECT CXWnd* CreateTreeViewWnd(CXWnd* parent, CControlTemplate* pTemplate);
	EQLIB_OBJECT CXWnd* CreateComboWnd(CXWnd* parent, CControlTemplate* pTemplate);
	EQLIB_OBJECT CXWnd* CreateTabWnd(CXWnd* parent, CControlTemplate* pTemplate);
	EQLIB_OBJECT CXWnd* CreateLayoutWnd(CXWnd* parent, CControlTemplate* pTemplate);
	EQLIB_OBJECT CXWnd* CreateHorizontalLayoutWnd(CXWnd* parent, CControlTemplate* pTemplate);
	EQLIB_OBJECT CXWnd* CreateVerticalLayoutWnd(CXWnd* parent, CControlTemplate* pTemplate);
	EQLIB_OBJECT CXWnd* CreateFinderWnd(CXWnd* parent, CControlTemplate* pTemplate);
	EQLIB_OBJECT CXWnd* CreateTileLayoutWnd(CXWnd* parent, CControlTemplate* pTemplate);
	EQLIB_OBJECT CXWnd* CreateTemplateContainerWnd(CXWnd* parent, CControlTemplate* pTemplate);

	//----------------------------------------------------------------------------
	// data members

/*0x8*/ EStaticScreenPieceClasses ScreenPieceClassIndex[StaticScreenPieceMax];
/*0x20*/ ArrayClass<CUITextureInfo*> Textures;
/*0x38*/ ArrayClass<CButtonDrawTemplate*> ButtonDrawTemplateArray;
/*0x50*/ ArrayClass<CScrollbarTemplate*> ScrollbarTemplateArray;
/*0x68*/ ArrayClass<CSliderDrawTemplate*> SliderDrawTemplateArray;
/*0x80*/ ArrayClass<CXStr> ScreenNameArray;
/*0x98*/ ArrayClass<CXWndDrawTemplate*> DrawTemplateArray;
/*0xb0*/ CHashCXStrInt32 DrawTemplateHash;
/*0xd0*/ ArrayClass<CTextureAnimation*> AnimationArray;
/*0xe8*/ CHashCXStrInt32 AnimationsHash;
/*0x108*/ ArrayClass<CTAFrameDraw*> TAFrameArray;
/*0x120*/ CHashCXStrInt32 TAFrameHash;
/*0x140*/ ArrayClass<CScreenPieceTemplate*> ScreenPieceArray;
/*0x158*/ CHashCXStrInt32 ScreenPiecesHash;
/*0x178*/ ArrayClass<CLayoutStrategyTemplate*> LayoutStrategyTemplateArray;
/*0x190*/ CHashCXStrInt32 LayoutStrategyTemplatesHash;
/*0x1b0*/ CXMLParamManager XMLDataMgr;
/*0x288*/ bool bLoadError;
/*0x290*/ CXStr ErrorString;
/*0x298*/
};
constexpr size_t CSidlManagerBase_size = 0x298; // jun09 DELTA-0 (OTTO op_new-confirmed: alloc 1401a1ba1 MOV ECX,0x298; ctor FUN_1405f54d0 highest-write 0x290+8; ScreenPieceClassIndex[6] dim unchanged)
SIZE_CHECK(CSidlManagerBase, CSidlManagerBase_size);

class [[offsetcomments]] CSidlManager : public CSidlManagerBase
{
	FORCE_SYMBOLS

public:
	virtual ~CSidlManager();

	//----------------------------------------------------------------------------
	// virtuals
	virtual CXWnd* CreateXWnd(CXWnd* parent, CControlTemplate* pTemplate) override;

	//----------------------------------------------------------------------------
	// defined methods

	// don't need to use this -- can just use CreateXWnd.
	EQLIB_OBJECT CXWnd* CreateHotButtonWnd(CXWnd* pwndParent, CControlTemplate* pControl);

	//----------------------------------------------------------------------------
	// methods

	EQLIB_OBJECT CXWnd* CreateLabel(CXWnd* parent, CControlTemplate* pTemplate);
	EQLIB_OBJECT CXWnd* CreateGuageWnd(CXWnd* parent, CControlTemplate* pTemplate);
	EQLIB_OBJECT CXWnd* CreateSpellGemWnd(CXWnd* parent, CControlTemplate* pTemplate);
	EQLIB_OBJECT CXWnd* CreateInvSlotWnd(CXWnd* parent, CControlTemplate* pTemplate);
};

inline namespace deprecated {
	using CSIDLMGR DEPRECATE("Use CSidlManager instead of CSIDLMGR") = CSidlManager;
	using PCSIDLMGR DEPRECATE("Use CSidlManager* instead of PCSIDLMGR") = CSidlManager*;
}

//----------------------------------------------------------------------------

class CascadeItemCommand;

// this is a base class for the cascade menu items defined in CascadeMenu.txt
class [[offsetcomments]] CascadeItemBase
{
public:
	enum Type
	{
		eTypeSubMenu = 0,
		eTypeCommand = 1,
		eTypeSeparator = 2,
	};

	CascadeItemBase(Type type)
		: m_type(type)
	{}

	virtual ~CascadeItemBase() {}

	Type GetType() const { return m_type; }
	bool IsChanged() const { return m_changed; }

	virtual CascadeItemCommand* GetAsCommand() { return nullptr; }

protected:
/*0x0008*/ Type m_type;
/*0x0c*/ bool m_changed = true;
/*0x10*/
};

using CascadeItemArray = ArrayClass<CascadeItemBase*>;

// separator menu item (type 3 in CascadeMenu.txt)
class [[offsetcomments]] CascadeItemSeparator : public CascadeItemBase
{
public:
	CascadeItemSeparator() : CascadeItemBase(eTypeSeparator) {}
};

// a menu item that spawns another menu item
class [[offsetcomments]] CascadeItemSubMenu : public CascadeItemBase
{
public:
	CascadeItemSubMenu() : CascadeItemBase(eTypeSubMenu) {}
	CascadeItemSubMenu(int iconId, const char* text)
		: CascadeItemBase(eTypeSubMenu)
		, m_icon(iconId)
		, m_text(text)
	{}

	virtual ~CascadeItemSubMenu()
	{
		int count = m_items ? m_items->GetCount() : 0;
		for (int i = 0; i < count; ++i)
		{
			delete m_items->GetElementIdx(i);
		}
		m_items->Reset();
	}

	CascadeItemArray* GetItems() { return m_items; }

	CascadeItemArray* SetItems(CascadeItemArray* items)
	{
		m_changed = true;
		return std::exchange(m_items, items);
	}

	CascadeItemBase* GetItem(int index)
	{
		if (m_items)
		{
			return m_items->GetElementIdx(index);
		}

		return nullptr;
	}

	int GetIcon() const { return m_icon; }
	void SetIcon(int icon) { m_icon = icon; m_changed = true; }

	const CXStr& GetText() const { return m_text; }
	void SetText(const CXStr& text) { m_text = text; m_changed = true; }

protected:
/*0x10*/ int m_icon = -1;
/*0x18*/ CXStr m_text;
/*0x20*/ CascadeItemArray* m_items = nullptr;
/*0x28*/
};

// base class for items that execute a command of some kind when clicked
class [[offsetcomments]] CascadeItemCommandBase : public CascadeItemBase
{
public:
	CascadeItemCommandBase() : CascadeItemBase(CascadeItemBase::eTypeCommand) {}

	int GetIcon() const { return m_icon; }
	void SetIcon(int icon) { m_icon = icon; m_changed = true; }

	const CXStr& GetText() const { return m_text; }
	void SetText(const CXStr& text) { m_text = text; m_changed = true; }

	virtual void ExecuteCommand() = 0;
	virtual CXStr GetTooltip() const = 0;

protected:
/*0x10*/ int m_icon = -1;
/*0x0018*/ CXStr m_text;
/*0x20*/
};

// A menu item that executes a command
class [[offsetcomments]] CascadeItemCommand : public CascadeItemCommandBase
{
public:
	CascadeItemCommand(int icon, const char* text, int command);

	virtual void ExecuteCommand() override;
	virtual CXStr GetTooltip() const override { return m_text; }

private:
/*0x20*/ int m_command = -1;
/*0x24*/
};

//----------------------------------------------------------------------------

// This is the frame the holds the EQ and store buttons
constexpr size_t CEQMainWnd_size = 0x300; // jun09 -- half-lay guard (BOB policy: SIZE_CHECK on all non-trivial windows)
class [[offsetcomments]] CEQMainWnd : public CSidlScreenWnd
{
public:
	CEQMainWnd(CXWnd* pParent);
	virtual ~CEQMainWnd();

	virtual void UpdateCascadeMenuItems() {}

/*0x2d0*/ CButtonWnd* EQButtonWnd;            // GetChildItem UNK_140a0e210
/*0x2d8*/ CButtonWnd* SCButtonWnd;            // GetChildItem UNK_140a0e220
/*0x2e0*/ CButtonWnd* FlashSaleButtonWnd;     // GetChildItem UNK_140a0e230
/*0x2e8*/ CascadeItemArray* CascadeMenuItems; // __CreateCascadeMenuItems()
/*0x2f0*/ int MenuId;                         // FUN_1403a5840(_DAT_140f41530, CascadeMenuItems, -1)
/*0x2f4*/ int Unknown0x2f4; // jun09 NEW (PROVISIONAL): ctor-zeroed int
/*0x2f8*/ int Unknown0x2f8; // jun09 NEW (PROVISIONAL): ctor-zeroed int
/*0x2fc*/ int Unknown0x2fc; // jun09 NEW (PROVISIONAL): ctor-zeroed int
/*0x300*/
};
SIZE_CHECK(CEQMainWnd, CEQMainWnd_size);

//----------------------------------------------------------------------------

// there are four types of icon caches
enum eIconCacheType
{
	IconCacheType_Item = 0,
	IconCacheType_Spell = 1,
	IconCacheType_Menu = 2,
	IconCacheType_SpeakingIndicator = 3,
};
EQLIB_OBJECT const char* IconCacheTypeToString(eIconCacheType type);

class [[offsetcomments]] IconCache
{
public:
/*0x0*/ HashTable<CTextureAnimation*> IconTextures;
/*0x18*/ CXStr pAnimationName;
/*0x20*/ int Offset;
/*0x24*/ int MinValue;
/*0x28*/ int MaxValue;
/*0x2c*/

	EQLIB_OBJECT CTextureAnimation* GetIcon(int);
};

//----------------------------------------------------------------------------

constexpr int MAX_ITEMDISPLAY_WINDOWS = 6;
constexpr int MAX_SPELLDISPLAY_WINDOWS = 4;

class [[offsetcomments]] CWndDisplayManager
{
public:
	EQLIB_OBJECT int FindWindow(bool bNewWnd);
	//EQLIB_OBJECT bool CloseNewest();
	//EQLIB_OBJECT void CloseAll();

	EQLIB_OBJECT virtual int CreateWindowInstance();

	ALT_MEMBER_GETTER_DEPRECATED(ArrayClass2<CXWnd*>, m_windows, pWindows, "CWndDisplayManager: pWindows is deprecated. Use GetWindow instead.");
	ALT_MEMBER_GETTER_DEPRECATED(ArrayClass2<int>, m_times, pTimes, "CWndDisplayManager: pTimes is deprecated. Use GetLastUpdateTime instead.");

	CXWnd* GetWindow(int index) const
	{
		if (index >= 0 && index < m_windows.GetLength())
			return m_windows[index];
		return nullptr;
	}

	int GetLastUpdateTime(int index) const
	{
		if (index >= 0 && index < m_times.GetLength())
			return m_times[index];
		return 0;
	}

	int GetCount() const { return m_windows.GetLength(); }
	int GetMaxWindows() const { return MaxWindows; }

protected:
/*0x0008*/ ArrayClass2<CXWnd*> m_windows;
/*0x0028*/ ArrayClass2<int> m_times;
/*0x0048*/ int MaxWindows;
/*0x4c*/
};

class CItemDisplayManager : public CWndDisplayManager
{
public:
	EQLIB_OBJECT virtual int CreateWindowInstance() override;
	EQLIB_OBJECT void ShowItem(const ItemPtr& pItem);

	CItemDisplayWnd* GetWindow(int index) const { return static_cast<CItemDisplayWnd*>(CWndDisplayManager::GetWindow(index)); }
};

class CSpellDisplayManager : public CWndDisplayManager
{
public:
	CSpellDisplayWnd* GetWindow(int index) const { return static_cast<CSpellDisplayWnd*>(CWndDisplayManager::GetWindow(index)); }

	EQLIB_OBJECT void ShowSpell(int SpellID, bool NewWindow, bool FullDisplay, ESpellDisplayType SpellDisplayType);
};

//----------------------------------------------------------------------------

EQLIB_OBJECT void InitializeInGameUI();

} // namespace eqlib
