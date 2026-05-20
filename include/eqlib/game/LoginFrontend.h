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

#include "eqlib/game/Constants.h"
#include "eqlib/game/Containers.h"
#include "eqlib/game/CXStr.h"
#include "eqlib/game/UI.h"
#include "eqlib/game/UITypes.h"

#include <dinput.h>

namespace eqlib {

//----------------------------------------------------------------------------

// Types used by the frontend a.k.a. eqmain.dll

class [[offsetcomments]] LoginController
{
public:
	EQLIB_OBJECT LoginController(HINSTANCE hInstance, HWND hWnd);
	EQLIB_OBJECT ~LoginController();

	EQLIB_OBJECT void Startup();
	EQLIB_OBJECT void Shutdown();
	EQLIB_OBJECT void GiveTime();

	EQLIB_OBJECT int ProcessKeyboardEvents();
	EQLIB_OBJECT int ProcessMouseEvents();

/*0x00*/ IDirectInput8A* pDI;
/*0x08*/ IDirectInputDevice8A* pDIKeyboard;
/*0x10*/ IDirectInputDevice8A* pDIMouse;
/*0x18*/ HWND hWnd;
/*0x20*/ HINSTANCE hInstance;
/*0x28*/ bool bIsKeyboardActive;
/*0x29*/ bool bIsMouseActive;
/*0x2c*/ uint32_t Unknown0x18;
/*0x30*/ int LastInputKey;
/*0x34*/
};

class CLoginViewManager
{
public:
	EQLIB_OBJECT int HandleLButtonUp(CXPoint&);
};

class LoginServerAPI
{
public:
	EQLIB_OBJECT unsigned int JoinServer(int serverID, void* userdata = 0, int timeoutseconds = 10);
};

namespace EQLS {

struct [[offsetcomments]] Date
{
/*0x00*/ int8_t Hours;
/*0x01*/ int8_t Minutes;
/*0x02*/ int8_t Seconds;
/*0x03*/ int8_t Month;
/*0x04*/ int8_t Day;
/*0x06*/ int16_t Year;
/*0x08*/ CXStr Unknown0x08;
/*0x10*/ CXStr Unknown0x0c;
/*0x18*/ CXStr Unknown0x10;
/*0x20*/ int64_t TimeStamp;
/*0x28*/
};

enum eServerStatus : uint32_t
{
	eServerStatus_Down = 1,
	eServerStatus_Locked = 4,
	eServerStatus_PopulationLow = 0x10,
	eServerStatus_PopulationHigh = 0x20,

};

struct [[offsetcomments]] EQClientServerData
{
/*0x00*/ ServerID ID;
/*0x08*/ CXStr ServerName;
/*0x10*/ CXStr HostName;
/*0x18*/ CXStr ServerIP;
/*0x20*/ int ExternalPort;
/*0x24*/ int InternalPort;
/*0x28*/ Date DateCreated;
/*0x50*/ int Flags; // 0x100 = all access
/*0x54*/ int ServerType; // uninitialized
/*0x58*/ CXStr LanguageCode;
/*0x60*/ CXStr CountryCode;
/*0x68*/ CXStr RuleSet;
/*0x70*/ CXStr Description;
/*0x78*/ eServerStatus StatusFlags;
/*0x7c*/ int PopulationRanking; // not populated
/*0x80*/ int Expansion;
/*0x84*/ int TrueBoxStatus; // 0 = no, 1 = yes, 2 = relaxed
/*0x88*/
};

class [[offsetcomments]] LoginServerCallback
{
public:
	virtual void OnConnect() {}
	virtual void OnConnectionTerminated(bool clientSide) {}
	virtual void OnCallback(void*, void*) {}
	virtual void OnHandshake(bool, int, CXStr, CXStr) {}
	virtual void OnPlayerLogin(bool, int, CXStr, void*, void*) {}
	virtual void OnGetServerList(bool, int, CXStr, void*, void*) {}
	virtual void OnJoinServer(bool, int, CXStr, int, void*) {}
	virtual void OnJoinChat(bool, int, CXStr, CXStr&, int, CXStr&, CXStr&, CXStr&, CXStr&, int, void*) {}
	virtual void OnSetGMList(void*) {}
	virtual void OnModifyGMList(void*, void*) {}
	virtual void OnJoinAdminChannel(bool, int, CXStr, CXStr&, CXStr, void*) {}
	virtual void OnCommandResult(bool, int, CXStr, CXStr, void*) {}
	virtual void OnCommandExecute(uint32_t, int, uint32_t, CXStr, void*) {}
	virtual void OnServerChatMessageList(void*, void*) {}
	virtual void OnServerChatSTLookupList(void*, void*) {}
	virtual void OnSetBanner(CXStr&) {}
	virtual void OnReconnectToChat(CXStr&, int, CXStr&, CXStr&, CXStr&, CXStr&, bool, void*) {}
	virtual void OnBoot(CXStr) {}
	virtual void JoinServer(void*) {}
	virtual void OnSetGameFeatures(void*) {}
	virtual void OnKickMyPlayerReply(bool, int, CXStr, void*) {}
};

class [[offsetcomments]] ChannelServerHandler
{
public:
	virtual void Channel_VirtualFunction1(bool) {}
	virtual void Channel_VirtualFunction2(void*) {}
	// more virtuals ...
};

struct [[offsetcomments]] EQDevice
{
/*0x00*/ char Name[0x40];
/*0x40*/
};

struct [[offsetcomments]] EQLogin
{
/*0x000*/ EQDevice Devices[0x10];
/*0x400*/ int NumDevices;
/*0x408*/ HWND hEQWnd;
/*0x410*/ int ReturnCode; // -1 = failed login
/*0x414*/ char Login[0x80];
/*0x494*/ char PW[0x80];
/*0x514*/ char PW2[0x80];
/*0x594*/ char ServerLong[0x80];
/*0x614*/ int ServerPort;
/*0x618*/ char AccountKey[0x80];
/*0x698*/ int ActiveDeviceIndex;
/*0x69c*/ char LastZoneEntered[0x20];
/*0x6bc*/ char StationName[0x20];
/*0x6dc*/ char ExeName[0x20];
/*0x6fc*/ char CommandLine[0x1c0];
/*0x8bc*/ char ServerShort[0x80];
/*0x93c*/ char Session[0x40];
/*0x97c*/ char Character[0x40];
/*0x9bc*/ // more...
};

} // namespace EQLS

struct [[offsetcomments]] IniKeyValuePair
{
/*0x00*/ CXStr key;
/*0x08*/ CXStr value;
/*0x10*/ const char* valueStr;
/*0x18*/ int hashVal;
/*0x20*/ IniKeyValuePair* next;
/*0x28*/
};

struct [[offsetcomments]] IniFileSection
{
/*0x00*/ HashTable<IniKeyValuePair*> values;
/*0x18*/ int numValues;
/*0x20*/ CXStr section;
/*0x28*/ int hashVal;
/*0x30*/ IniKeyValuePair* firstKeyValue;
/*0x38*/ IniKeyValuePair* lastKeyValue;
/*0x40*/ IniFileSection* nextSection;
/*0x48*/
};

class [[offsetcomments]] IniFileWrapper
{
public:
	virtual ~IniFileWrapper() {}

/*0x08*/ HashTable<IniFileSection*> sections;
/*0x20*/ int numSections;
/*0x28*/ IniFileSection* firstSection;
/*0x30*/ IniFileSection* lastSection;
/*0x38*/ bool dirty;
/*0x3c*/
};

struct [[offsetcomments]] TimeCheck
{
/*0x00*/ int64_t lastTimeChecked;
/*0x08*/ int64_t elapsedTime;
/*0x10*/
};

// LoginClient
class [[offsetcomments]] LoginClient : public EQLS::LoginServerCallback,
	public EQLS::ChannelServerHandler
{
public:
	struct Host
	{
		CXStr Name;
		int Port;
	};

/*0x010*/ EQLS::EQLogin* pLoginData;
/*0x018*/ DoublyLinkedList<Host*> Hosts;
/*0x050*/ Host* pHost;
/*0x058*/ bool bRetryConnect;
/*0x060*/ IniFileWrapper hostIniFile;
/*0x0a0*/ IniFileWrapper systemMacrosIniFile;
/*0x0e0*/ IniFileWrapper userMacrosIniFile;
/*0x120*/ TimeCheck timeCheck;
/*0x130*/ CXStr LoginName;
/*0x138*/ CXStr Password;
/*0x140*/ CXStr LoginNameCopy;
/*0x148*/ CXStr PasswordCopy;
/*0x150*/ CXStr AccountKey;
/*0x158*/ int accountId;
/*0x160*/ EQLS::EQClientServerData* selectedServer;
/*0x168*/ int displayDeviceIndex;
/*0x16c*/ uint32_t isLoggingIn;          // may11: ctor writes DWORD, accessor returns DWORD; was declared bool
/*0x170*/ uint8_t authSuccess;            // may11: byte, written by auth handler RVA 0x13cb0 (was uint32_t unknown1)
/*0x171*/ uint8_t retryFlag;              // may11: byte, written by host-arrival retry handler
/*0x172*/ uint8_t _pad172[2];             // ctor WORD-zero covers +0x170..+0x171 only
/*0x174*/ uint32_t unknown2;              // UNFOUND_IN_CTOR; relies on operator-new zero-fill; live = UTF-16 overlay
/*0x178*/ DoublyLinkedList<EQLS::EQClientServerData*> ServerList;
/*0x1b0*/ EQLS::EQClientServerData QuickConnectServer;
/*0x238*/ // BEGIN UNDECLARED TRAILING REGION -- full sizeof is 0x508 per ctor + alloc+dealloc evidence.
          // Production-header sizeof 0x238 is incomplete by 0x2D0 bytes. The ctor (eqmain RVA 0xd020)
          // initializes the following named subregions; field-level decode pending future audit.
/*0x238*/ uint64_t trailing238;           // CONSTANT across LoginClient lifecycle (UTF-16 "ndel" fragment observed);
                                          // initial agent guess "lastResponseTime watchdog" was REFUTED by 45s live capture
/*0x240*/ char _gap240[0x10];             // not probed
/*0x250*/ char ChatBlacklist[0x20];       // chat-name blacklist container (lazy-init suspected)
/*0x270*/ uint32_t state_flag1;           // ctor init = 0
/*0x274*/ uint32_t state_flag2;           // ctor init = 1
/*0x278*/ char _gap278[0xF9];             // not probed
/*0x371*/ uint8_t quitPending;            // byte; agent claim "flips on /quit" (live-unverified)
/*0x372*/ char _gap372[0x16];             // not probed
/*0x388*/ uint64_t ChannelManager_vftbl;  // = eqmain RVA 0x12BCB0 (LIVE-VERIFIED)
/*0x390*/ char ChannelManager_internals[0x98]; // nested HashTable + ChannelManager subobject body
/*0x428*/ char Patcher_state[0xC8];       // process-spawn state: handle / exit-code / arg strings around +0x438..+0x470
/*0x4f0*/ uint8_t authFlag1;              // auth handler writes; BYPASSED by MQ2AutoLogin /login: fast-path
/*0x4f1*/ uint8_t authFlag2;
/*0x4f2*/ uint8_t authFlag3;
/*0x4f3*/ char _gap4f3[0xD];              // not probed
/*0x500*/ uint8_t exitState;
/*0x501*/ uint16_t runningFlag;
/*0x503*/ uint8_t _pad503;
/*0x504*/ int32_t sentinel504;            // ctor init = -1
/*0x508*/                                 // class end -- sizeof PROVEN via mov ecx,0x508 (alloc) + mov edx,0x508 (dealloc)
                                          // plus Wine heap NEXT-BLOCK signature 0x7500670000006a at +0x508
};

namespace eqmain {


//============================================================================
// CXWnd
//============================================================================
//
// eqmain::CXWnd has IDENTICAL DATA LAYOUT to eqgame.exe's eqlib::CXWnd
// (sizeof 0x258, same field offsets including WindowText @ +0x70). BUT THE
// VIRTUAL FUNCTION TABLE DIFFERS. eqmain.dll's CXWnd vtable was independently
// enumerated from eqmain.dll RVA 0x13adb8 (base CXWnd vftbl) and verified
// across 39 derived-class vftbls in eqmain.dll. Key differences vs eqlib:
//
//   * eqmain DROPS GetWndClassName (eqlib slot 2) -- never used in login UI.
//   * eqmain DROPS SetZLayer (eqlib slot 14) -- z-ordering done elsewhere.
//   * eqmain SWAPS H/V virtual pairs:
//        - OnHScroll before OnVScroll (eqlib has VScroll first).
//        - SetHScrollPos before SetVScrollPos.
//        - AutoSetHScrollPos before AutoSetVScrollPos.
//   * eqmain DROPS several other virtuals between slots 60 and 89; see
//     enumeration below. The eqmain vtable has 90 slots (0..89); eqlib has
//     105 (0..104).
//
// The CRITICAL slot for AutoLogin functionality:
//
//        eqmain slot 34 = WndNotification (vftbl byte offset 0x110)
//        eqlib  slot 36 = WndNotification (vftbl byte offset 0x120)
//
// Aliasing eqmain::CXWnd to eqlib::CXWnd as we did briefly in may11-test
// silently broke AutoLogin's Connect-button click: the compiler emitted
// 'call [rax+0x120]' (eqlib slot 36) which landed on eqmain's Activate
// thunk (Show(true), a no-op since the button was already visible).
//
// The eqmain vftbl was enumerated as follows (raw .rdata @ 0x13adb8):
//   slot  0: IsValid           (eqlib  0) - readback 'movzx eax,[rcx+0x24c]'
//   slot  1: ~CXWnd            (eqlib  1) - scalar deleting dtor
//   slot  2: DrawNC            (eqlib  3) - GetWndClassName dropped, shift -1
//   slot  3: Draw              (eqlib  4)
//   slot  4: PostDraw          (eqlib  5)
//   slot  5: DrawCursor        (eqlib  6) - FocusProxy forwards to self
//   slot  6: DrawChildItem     (eqlib  7)
//   slot  7: DrawCaret         (eqlib  8)
//   slot  8: DrawBackground    (eqlib  9) - reads DrawTemplate @+0x128
//   slot  9: DrawTooltip       (eqlib 10)
//   slot 10: DrawTooltipAtPoint(eqlib 11)
//   slot 11: GetMinimizedRect  (eqlib 12)
//   slot 12: DrawTitleBar      (eqlib 13) - large fn, called from DrawNC
//   slot 13: GetCursorToDisplay(eqlib 15) - SetZLayer dropped, shift -2
//   slot 14: HandleLButtonDown (eqlib 16)
//   slot 15: HandleLButtonUp   (eqlib 17)
//   slot 16: HandleLButtonHeld (eqlib 18)
//   slot 17: HandleLButtonUpAfterHeld (eqlib 19)
//   slot 18: HandleRButtonDown (eqlib 20)
//   slot 19: HandleRButtonUp   (eqlib 21)
//   slot 20: HandleRButtonHeld (eqlib 22)
//   slot 21: HandleRButtonUpAfterHeld (eqlib 23)
//   slot 22: HandleWheelButtonDown (eqlib 24)
//   slot 23: HandleWheelButtonUp (eqlib 25)
//   slot 24: HandleMouseMove   (eqlib 26)
//   slot 25: HandleWheelMove   (eqlib 27)
//   slot 26: HandleKeyboardMsg (eqlib 28)
//   slot 27: HandleMouseLeave  (eqlib 29)
//   slot 28: OnDragDrop        (eqlib 30)
//   slot 29: GetDragDropCursor (eqlib 31)
//   slot 30: QueryDropOK       (eqlib 32)
//   slot 31: OnClickStick      (eqlib 33)
//   slot 32: GetClickStickCursor (eqlib 34)
//   slot 33: QueryClickStickDropOK (eqlib 35)
//   slot 34: WndNotification   (eqlib 36) *** AUTOLOGIN CRITICAL ***
//   slot 35: OnWndNotification (eqlib 37)
//   slot 36: Activate          (eqlib 38) - Show-thunk(r9b=1, edx=1) -> slot 54
//   slot 37: Deactivate        (eqlib 39) - Show-thunk(r9b=1, edx=0) -> slot 54
//   slot 38: OnShow            (eqlib 40)
//   slot 39: OnMove            (eqlib 41)
//   slot 40: OnResize          (eqlib 42)
//   slot 41: OnBeginMoveOrResize (eqlib 43)
//   slot 42: OnCompleteMoveOrResize (eqlib 44)
//   slot 43: OnMinimizeBox     (eqlib 45)
//   slot 44: OnMaximizeBox     (eqlib 46)
//   slot 45: OnTileBox         (eqlib 47)
//   slot 46: OnTile            (eqlib 48)
//   slot 47: OnSetFocus        (eqlib 49) - WndNotification(parent, 0x23)
//   slot 48: OnKillFocus       (eqlib 50) - WndNotification(parent, 0x24)
//   slot 49: OnProcessFrame    (eqlib 51)
//   slot 50: OnHScroll         (eqlib 53) *** H/V SWAP: H first in eqmain ***
//   slot 51: OnVScroll         (eqlib 52)
//   slot 52: OnBroughtToTop    (eqlib 54)
//   slot 53: OnActivate        (eqlib 55)
//   slot 54: Show              (eqlib 56) - Activate/Deactivate dispatch here
//   slot 55: AboutToShow       (eqlib 57) - pController @+0x198 fwd
//   slot 56: AboutToHide       (eqlib 58) - pController @+0x198 fwd
//   slot 57: RequestDockInfo   (eqlib 59)
//   slot 58: GetWindowText     (eqmain-specific - reads WindowText @+0x70)
//                              (eqlib slot 60 GetTooltip appears DROPPED in
//                               eqmain; this virtual returns WindowText)
//   slot 59: ClickThroughMenuItemTriggered (eqlib 61) - empty stub
//   slot 60: HitTest           (eqlib 63) - SetLocked@62 dropped, shift -3
//   slot 61: GetHitTestRect    (eqlib 64) - switch(code) for hit regions
//   slot 62: GetInnerRect      (eqlib 65)
//   slot 63: GetClientRect     (eqlib 66)
//   slot 64: GetClientClipRect (eqlib 67)
//   slot 65: GetMinSize        (eqlib 68)
//   slot 66: GetMaxSize        (eqlib 69)
//   slot 67: GetUntileSize     (eqlib 70) - returns Location.GetSize
//   slot 68: IsPointTransparent (eqlib 71) - returns false stub
//   slot 69: ShouldProcessChildrenFrames (eqlib 72)
//   slot 70: ShouldProcessControllerFrame (eqlib 73)
//   slot 71: SetDrawTemplate   (eqlib 74) - mov [rcx+0x128], rdx; ret
//   slot 72: SetBGType         (eqlib 75)
//   slot 73: SetBGColor        (eqlib 76)
//   slot 74: UpdateGeometry    (eqlib 77)
//   slot 75: GetChildWndAt     (eqlib 90) - eqlib slots 78..89 dropped en bloc
//                              (Move/Minimize/SetWindowText/SetTooltip/Center*
//                               /Top/Bottom/Left/Right/MoveToCursor not virtual
//                               in eqmain.dll; called as non-virtual from
//                               eqmain internals where needed.)
//   slot 76: GetSidlPiece      (eqlib 91) - recurses to child slot 76
//   slot 77: GetWindowName     (eqlib 92) - returns nullptr stub
//   slot 78: SetHScrollPos     (eqlib 94) *** H/V SWAP ***
//   slot 79: SetVScrollPos     (eqlib 93)
//   slot 80: AutoSetHScrollPos (eqlib 96) *** H/V SWAP ***
//   slot 81: AutoSetVScrollPos (eqlib 95)
//   slot 82: SetAttributesFromSidl (eqlib 97)
//   slot 83: OnReloadSidl      (eqlib 98) - empty 2-arg stub
//   slot 84: HasActivatedFirstTimeAlert (eqlib 99) - xor al,al ret
//   slot 85: SetHasActivatedFirstTimeAlert (eqlib 100) - empty 2-arg stub
//   slot 86: GetMinClientSize  (eqlib 101) - lea rax,[rcx+0x1f8]; ret
//   slot 87: GetMaxClientSize  (eqlib 102) - lea rax,[rcx+0xdc]; ret
//   slot 88: GetActiveEditWnd  (eqlib 103) - returns nullptr stub
//   slot 89: UpdateLayout      (eqlib 104) - iterates children
//
// Total: 90 virtual slots in eqmain CXWnd vs 105 in eqlib CXWnd.
// Data layout is byte-identical (sizeof 0x258).
//
class [[offsetcomments]] CXWnd
	: public TListNode<CXWnd> // node in list of siblings (matches eqlib base list shape)
	, public TList<CXWnd>     // list of children
{
public:
	// Virtuals declared in EXACT order of eqmain.dll's CXWnd vftbl.
	// DO NOT REORDER without re-verifying against eqmain.dll RVA 0x13adb8.
	//
	// All virtuals carry inline default bodies. We never construct an
	// eqmain::CXWnd directly -- all live instances live inside eqmain.dll and
	// are accessed by reinterpret_cast from eqlib::CXWnd* (with a matching
	// GAMESTATE_PRECHARSELECT guard). The inline bodies exist solely to give
	// the C++ runtime a complete class -- when a virtual is dispatched through
	// vtable[N] on a real eqmain.dll instance, control goes to eqmain.dll's
	// function pointer, not these stubs.
	virtual bool IsValid() const { return ValidCXWnd; }                                       // slot  0
	virtual ~CXWnd() {}                                                                       // slot  1
	virtual int DrawNC() const { return 0; }                                                  // slot  2
	virtual int Draw() { return 0; }                                                          // slot  3
	virtual int PostDraw() { return 0; }                                                      // slot  4
	virtual int DrawCursor(const CXPoint& mousePos, const CXRect& clip, bool& drawn) { return 0; } // slot 5
	virtual int DrawChildItem(const ::eqlib::CXWnd* child, void* item) const { return 0; }    // slot  6
	virtual int DrawCaret() const { return 0; }                                               // slot  7
	virtual int DrawBackground() const { return 0; }                                          // slot  8
	virtual int DrawTooltip(const ::eqlib::CXWnd* wnd) const { return 0; }                    // slot  9
	virtual int DrawTooltipAtPoint(const CXPoint& pos, const CXStr& tooltip = {}) const { return 0; } // slot 10
	virtual CXRect GetMinimizedRect() const { return CXRect(); }                              // slot 11
	virtual int DrawTitleBar(const CXRect& rect) const { return 0; }                          // slot 12
	virtual HCURSOR GetCursorToDisplay() const { return nullptr; }                            // slot 13
	virtual int HandleLButtonDown(const CXPoint& pos, uint32_t flags) { return 0; }           // slot 14
	virtual int HandleLButtonUp(const CXPoint& pos, uint32_t flags) { return 0; }             // slot 15
	virtual int HandleLButtonHeld(const CXPoint& pos, uint32_t flags) { return 0; }           // slot 16
	virtual int HandleLButtonUpAfterHeld(const CXPoint& pos, uint32_t flags) { return 0; }    // slot 17
	virtual int HandleRButtonDown(const CXPoint& pos, uint32_t flags) { return 0; }           // slot 18
	virtual int HandleRButtonUp(const CXPoint& pos, uint32_t flags) { return 0; }             // slot 19
	virtual int HandleRButtonHeld(const CXPoint& pos, uint32_t flags) { return 0; }           // slot 20
	virtual int HandleRButtonUpAfterHeld(const CXPoint& pos, uint32_t flags) { return 0; }    // slot 21
	virtual int HandleWheelButtonDown(const CXPoint& pos, uint32_t flags) { return 0; }       // slot 22
	virtual int HandleWheelButtonUp(const CXPoint& pos, uint32_t flags) { return 0; }         // slot 23
	virtual int HandleMouseMove(const CXPoint& pos, uint32_t flags) { return 0; }             // slot 24
	virtual int HandleWheelMove(const CXPoint& pos, int scroll, uint32_t flags) { return 0; } // slot 25
	virtual int HandleKeyboardMsg(uint32_t message, uint32_t flags, bool down) { return 0; }  // slot 26
	virtual int HandleMouseLeave() { return 0; }                                              // slot 27
	virtual int OnDragDrop(::eqlib::SDragDropInfo* info) { return 0; }                        // slot 28
	virtual HCURSOR GetDragDropCursor(::eqlib::SDragDropInfo* info) const { return nullptr; } // slot 29
	virtual bool QueryDropOK(::eqlib::SDragDropInfo* info) const { return false; }            // slot 30
	virtual int OnClickStick(::eqlib::CClickStickInfo* info, uint32_t flags, bool unk) { return 0; } // slot 31
	virtual HCURSOR GetClickStickCursor(::eqlib::CClickStickInfo* info) const { return nullptr; } // slot 32
	virtual bool QueryClickStickDropOK(::eqlib::CClickStickInfo* info) const { return false; } // slot 33
	virtual int WndNotification(::eqlib::CXWnd* sender, uint32_t message, void* data = nullptr) { return 0; } // slot 34 *** AUTOLOGIN CRITICAL ***
	virtual void OnWndNotification() {}                                                       // slot 35
	virtual void Activate() { Show(true); }                                                   // slot 36 (Show(true) thunk)
	virtual void Deactivate() { Show(false); }                                                // slot 37 (Show(false) thunk)
	virtual int OnShow() { return 0; }                                                        // slot 38
	virtual int OnMove(const CXRect& rect) { return 0; }                                      // slot 39
	virtual int OnResize(int w, int h) { return 0; }                                          // slot 40
	virtual int OnBeginMoveOrResize() { return 0; }                                           // slot 41
	virtual int OnCompleteMoveOrResize() { return 0; }                                        // slot 42
	virtual int OnMinimizeBox() { return 0; }                                                 // slot 43
	virtual int OnMaximizeBox() { return 0; }                                                 // slot 44
	virtual int OnTileBox() { return 0; }                                                     // slot 45
	virtual int OnTile() { return 0; }                                                        // slot 46
	virtual int OnSetFocus(::eqlib::CXWnd* old) { return 0; }                                 // slot 47
	virtual int OnKillFocus(::eqlib::CXWnd* old) { return 0; }                                // slot 48
	virtual int OnProcessFrame() { return 0; }                                                // slot 49
	virtual int OnHScroll(::eqlib::EScrollCode code, int pos) { return 0; }                   // slot 50 *** H/V SWAPPED vs eqlib ***
	virtual int OnVScroll(::eqlib::EScrollCode code, int pos) { return 0; }                   // slot 51 *** H/V SWAPPED vs eqlib ***
	virtual int OnBroughtToTop() { return 0; }                                                // slot 52
	virtual int OnActivate(::eqlib::CXWnd* old) { return 0; }                                 // slot 53
	virtual int Show(bool show = true, bool bringToTop = true, bool updateLayout = true) { return 0; } // slot 54
	virtual bool AboutToShow() { return false; }                                              // slot 55
	virtual bool AboutToHide() { return false; }                                              // slot 56
	virtual int RequestDockInfo(::eqlib::EDockAction action, ::eqlib::CXWnd* wnd, CXRect* rect) { return 0; } // slot 57
	virtual CXStr GetWindowText() const { return WindowText; }                                // slot 58 (eqmain-specific virtual; reads WindowText @+0x70)
	virtual void ClickThroughMenuItemTriggered() {}                                           // slot 59
	virtual int HitTest(const CXPoint& pos, int* result) const { return 0; }                  // slot 60 (eqlib SetLocked@62 dropped here, shift becomes -3)
	virtual CXRect GetHitTestRect(int code) const { return CXRect(); }                        // slot 61
	virtual CXRect GetInnerRect() const { return CXRect(); }                                  // slot 62
	virtual CXRect GetClientRect() const { return ClientRect; }                               // slot 63
	virtual CXRect GetClientClipRect() const { return ClipRectScreen; }                       // slot 64
	virtual CXSize GetMinSize(bool withBorder = true) const { return MinClientSize; }         // slot 65
	virtual CXSize GetMaxSize(bool withBorder = true) const { return MaxClientSize; }         // slot 66
	virtual CXSize GetUntileSize() const { return Location.GetSize(); }                       // slot 67
	virtual bool IsPointTransparent(const CXPoint& point) const { return false; }             // slot 68
	virtual bool ShouldProcessChildrenFrames() const { return IsVisible() && !IsMinimized(); }// slot 69
	virtual bool ShouldProcessControllerFrame() const { return IsVisible() && !IsMinimized(); } // slot 70
	virtual void SetDrawTemplate(::eqlib::CXWndDrawTemplate* drawTemplate) { DrawTemplate = drawTemplate; } // slot 71
	virtual void SetBGType(uint32_t Value) { BGType = Value; }                                // slot 72
	virtual void SetBGColor(COLORREF Value) { BGColor = Value; }                              // slot 73
	virtual int UpdateGeometry(const CXRect& rect, bool updateLayout = true, bool forceUpdateLayout = false,
		bool completeMoveOrResize = false, bool moveAutoStretch = false) { return 0; }    // slot 74
	virtual ::eqlib::CXWnd* GetChildWndAt(const CXPoint& pos, bool, bool) const { return nullptr; } // slot 75 (eqlib 78..89 dropped)
	virtual ::eqlib::CScreenPieceTemplate* GetSidlPiece(const CXStr& screenId, bool top = true) const { return nullptr; } // slot 76
	virtual const CXStr* GetWindowName() const { return nullptr; }                            // slot 77
	virtual int SetHScrollPos(int pos) { return 0; }                                          // slot 78 *** H/V SWAPPED vs eqlib ***
	virtual int SetVScrollPos(int pos) { return 0; }                                          // slot 79 *** H/V SWAPPED vs eqlib ***
	virtual int AutoSetHScrollPos(CXRect rect) { return 0; }                                  // slot 80 *** H/V SWAPPED vs eqlib ***
	virtual int AutoSetVScrollPos(CXRect rect) { return 0; }                                  // slot 81 *** H/V SWAPPED vs eqlib ***
	virtual void SetAttributesFromSidl(::eqlib::CParamScreenPiece* screenPiece) {}            // slot 82
	virtual void OnReloadSidl() {}                                                            // slot 83
	virtual bool HasActivatedFirstTimeAlert() const { return false; }                         // slot 84
	virtual void SetHasActivatedFirstTimeAlert(bool) {}                                       // slot 85
	virtual const CXSize& GetMinClientSize() const { return MinClientSize; }                  // slot 86
	virtual const CXSize& GetMaxClientSize() const { return MaxClientSize; }                  // slot 87
	virtual ::eqlib::CEditWnd* GetActiveEditWnd() const { return nullptr; }                   // slot 88
	virtual void UpdateLayout(bool finish = false) {}                                         // slot 89 (final eqmain CXWnd virtual)

	// Convenience non-virtual accessors mirroring eqlib::CXWnd.
	bool IsVisible() const { return dShow; }
	bool IsEnabled() const { return Enabled; }
	bool IsMinimized() const { return Minimized; }
	bool IsLocked() const { return Locked; }
	int GetZLayer() const { return ZLayer; }
	CXStr GetWindowTextField() const { return WindowText; }

	// Trivial accessor over /*0x088*/ XMLIndex. Inline -- no thunk needed.
	int GetXMLIndex() const { return static_cast<int>(XMLIndex); }

	// Trivial accessor over /*0x1c0*/ DisabledBackground (COLORREF).
	COLORREF GetDisabledBackground() const { return DisabledBackground; }
	void     SetDisabledBackground(COLORREF Value) { DisabledBackground = Value; }

	// Inline wrapper around virtual slot 74 UpdateGeometry. Matches the
	// eqlib::CXWnd::Move(CXRect) backwards-compat wrapper in CXWnd.h.
	inline int Move(const CXRect& rect, bool updateLayout = true, bool forceUpdateLayout = false,
		bool completeMoveOrResize = false, bool moveAutoStretch = false)
	{
		return UpdateGeometry(rect, updateLayout, forceUpdateLayout, completeMoveOrResize, moveAutoStretch);
	}

	// GetXMLName() and GetXMLData() not yet placed -- hunt in flight (agent #425).

	//------------------------------------------------------------------------
	// Data layout copied byte-for-byte from eqlib::CXWnd (sizeof 0x258).
	// Offsets are identical because eqmain.dll and eqgame.exe share the same
	// Daybreak source CXWnd.cpp; only the virtual table differs.
	//------------------------------------------------------------------------

/*0x030*/ uint32_t BlinkFadeFreq;
/*0x034*/ bool bNeedsSaving;
/*0x035*/ bool bShowBorder;
/*0x036*/ bool bMaximizable;
/*0x037*/ bool bFullyScreenClipped;
/*0x038*/ uint32_t BlinkFadeStartTime;
/*0x03c*/ bool Enabled;
/*0x040*/ CXRect OldLocation;
/*0x050*/ bool bClientRectChanged;
/*0x051*/ bool bEnableShowBorder;
/*0x052*/ bool bAction;
/*0x053*/ bool bActive;
/*0x054*/ bool bEscapable;
/*0x055*/ bool Locked;
/*0x058*/ CXRect TransitionRect;
/*0x068*/ int TopOffset;
/*0x06c*/ bool Minimized;
/*0x070*/ CXStr WindowText;
/*0x078*/ ::eqlib::CLayoutStrategy* pLayoutStrategy;
/*0x080*/ int BlinkDuration;
/*0x084*/ uint32_t BGType;
/*0x088*/ uint32_t XMLIndex;
/*0x090*/ CXStr DataStr;
/*0x098*/ bool bBringToTopWhenClicked;
/*0x09c*/ int VScrollMax;
/*0x0a0*/ uint32_t LastBlinkFadeRefreshTime;
/*0x0a4*/ int HScrollMax;
/*0x0a8*/ bool Fades;
/*0x0a9*/ bool bBottomAnchoredToTop;
/*0x0ac*/ int RightOffset;
/*0x0b0*/ uint32_t TransitionDuration;
/*0x0b8*/ ::eqlib::CTextureFont* pFont;
/*0x0c0*/ bool bClickThroughToBackground;
/*0x0c1*/ uint8_t TargetAlpha;
/*0x0c4*/ int HScrollPos;
/*0x0c8*/ CXStr XMLToolTip;
/*0x0d0*/ uint8_t Alpha;
/*0x0d4*/ COLORREF CRNormal;
/*0x0d8*/ bool bUseInLayoutHorizontal;
/*0x0dc*/ CXSize MaxClientSize;
	  uint8_t _pad_0xe4[0xc];  // matches eqlib::CXWnd injected padding
/*0x0f0*/ int BlinkState;
/*0x0f4*/ bool bTiled;
/*0x0f5*/ bool bHCenterTooltip;
/*0x0f8*/ CXStr Tooltip;
	  uint8_t _pad_0x100[0x4];  // matches eqlib::CXWnd injected padding
/*0x104*/ int VScrollPos;
/*0x108*/ int Transition;
/*0x10c*/ bool bMarkedForDelete;
/*0x110*/ int DeleteCount;
/*0x114*/ uint8_t FadeAlpha;
/*0x118*/ uint32_t TransitionStartTick;
/*0x11c*/ uint8_t StartAlpha;
/*0x120*/ ::eqlib::CTextObjectInterface* pTipTextObject;
/*0x128*/ ::eqlib::CXWndDrawTemplate* DrawTemplate;
/*0x130*/ CXRect Location;
/*0x140*/ uint32_t BackgroundDrawType;
/*0x148*/ ::eqlib::CTextureAnimation* IconTextureAnim;
/*0x150*/ bool Unlockable;
/*0x154*/ int ZLayer;
/*0x158*/ ::eqlib::CXWnd* FocusProxy;
/*0x160*/ bool bLeftAnchoredToLeft;
/*0x161*/ bool bClickThrough;
/*0x162*/ bool bUseInLayoutVertical;
/*0x168*/ ::eqlib::CXWnd* ParentWindow;
/*0x170*/ bool bKeepOnScreen;
/*0x171*/ bool bScreenClipRectChanged;
/*0x172*/ bool bIsTransitioning;
/*0x173*/ bool bEscapableLocked;
/*0x174*/ CXRect ClipRectScreen;
/*0x184*/ CXRect IconRect;
/*0x194*/ bool bClientClipRectChanged;
/*0x195*/ bool bCaptureTitle;
/*0x198*/ ::eqlib::ControllerBase* pController;
/*0x1a0*/ bool Faded;
/*0x1a1*/ bool bRightAnchoredToLeft;
/*0x1a2*/ bool bShowClickThroughMenuItem;
/*0x1a4*/ int managerArrayIndex;
	  uint8_t _pad_0x1a8[0x4];  // matches eqlib::CXWnd injected padding
/*0x1ac*/ int LeftOffset;
/*0x1b0*/ int BottomOffset;
/*0x1b8*/ ::eqlib::CStaticTintedBlendAnimationTemplate* TitlePiece;
/*0x1c0*/ COLORREF DisabledBackground;
/*0x1c4*/ uint32_t WindowStyle;
/*0x1c8*/ uint8_t FadeToAlpha;
/*0x1cc*/ int ParentAndContextMenuArrayIndex;
/*0x1d0*/ uint32_t BlinkFadeDuration;
/*0x1d4*/ uint32_t FadeDelay;
/*0x1d8*/ CXRect ClientRect;
/*0x1e8*/ ::eqlib::CTextObjectInterface* pTextObject;
/*0x1f0*/ uint32_t LastTimeMouseOver;
/*0x1f4*/ bool bIsParentOrContextMenuWindow;
/*0x1f8*/ CXSize MinClientSize;
/*0x200*/ bool bClipToParent;
/*0x208*/ int64_t Data;
	  uint8_t _pad_0x210[0x4];  // matches eqlib::CXWnd injected padding
/*0x214*/ uint8_t bResizableMask;
/*0x215*/ bool MouseOver;
/*0x218*/ ::eqlib::CStaticTintedBlendAnimationTemplate* TitlePiece2;
/*0x220*/ COLORREF BGColor;
/*0x228*/ ::eqlib::ArrayClass2<uint32_t> RuntimeTypes;
/*0x248*/ uint32_t FadeDuration;
/*0x24c*/ bool ValidCXWnd;
/*0x24d*/ bool bMaximized;
/*0x24e*/ bool dShow;
/*0x24f*/ bool bTopAnchoredToTop;
/*0x250*/ int BlinkStartTimer;
/*0x254*/ bool bUsesClassicUI;
/*0x255*/ bool bMouseOverEvent;
/*0x258*/
};

// Lock in the size so any future drift trips a build-time tripwire.
static_assert(sizeof(CXWnd) == 0x258, "eqmain::CXWnd size must match eqmain.dll layout (0x258)");


class CStmlWnd : public CXWnd
{
public:
/*0x258*/ CXStr STMLText;  // shifted -0x10 from declared 0x248 to match eqmain CXWnd 0x258 sizeof
};

class [[offsetcomments]] CEditBaseWnd : public CXWnd
{
public:
/*0x258*/ eTextAlign eAlign = eta_Left;        // shifted -0x8 for eqmain::CXWnd 0x258 sizeof (may11)
/*0x25c*/ int StartPos = 0;
/*0x260*/ int EndPos = 0;
/*0x264*/ int MaxChars = -1;                   // binary writes 0x1f here for PasswordEdit (verified in eqmain FUN_18002e490)
/*0x268*/ int MaxBytesUTF8 = -1;               // binary writes 0x1f here for PasswordEdit
/*0x270*/ CXStr InputText;                     // FIX: was @+0x278, now @+0x270 (AutoLogin password entry crash)
/*0x278*/ int TagPrintableStarts[EDITWND_MAX_TAGS];
/*0x2a0*/ int TagPrintableEnds[EDITWND_MAX_TAGS];
/*0x2c8*/ int TagOriginalStarts[EDITWND_MAX_TAGS];
/*0x2f0*/ int TagOriginalEnds[EDITWND_MAX_TAGS];
/*0x318*/ int TagDynamicSize[EDITWND_MAX_TAGS];
/*0x340*/ int TagCodes[EDITWND_MAX_TAGS];
/*0x368*/ CXStr TagStrings[EDITWND_MAX_TAGS];
/*0x3b8*/ int TagCount;
/*0x3bc*/ uint32_t EditStyle;                  // binary writes |0x20000 (password mask flag) here
/*0x3c0*/
};

class [[offsetcomments]] CListWnd : public CXWnd
{
public:
/*0x258*/ int Unknown0x1f0;                    // shifted -0x8 for eqmain::CXWnd 0x258 sizeof (may11)
/*0x260*/ ArrayClass<SListWndLine> ItemsArray;
/*0x278*/ ArrayClass<SListWndColumn> Columns;
/*0x290*/ int CurSel;
/*0x294*/ int CurCol;
/*0x298*/
	CXStr GetItemText(int row, int col)
	{
		if (row < 0 || row >= ItemsArray.Count)
			return CXStr();

		auto& line = ItemsArray[row];
		if (col < 0 || col >= line.Cells.Count)
			return CXStr();

		return line.Cells[col].Text;
	}
};

} // namespace eqmain

//----------------------------------------------------------------------------

} // namespace eqlib
