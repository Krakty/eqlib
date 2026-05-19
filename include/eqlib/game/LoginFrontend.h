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
// eqmain::CXWnd was historically a duplicate declaration of the same Daybreak
// source class compiled into eqmain.dll. As of may11-test (2026-05-11), binary
// verification confirms eqmain.dll's CXWnd has identical memory layout to
// eqgame.exe's eqlib::CXWnd (sizeof 0x258, same field offsets including
// WindowText @ +0x70). Verified via eqmain CLoginFrontend::PasswordEdit
// config writes (FUN_18002e490): MaxChars=0x1f @+0x264, MaxBytesUTF8=0x1f
// @+0x268, EditStyle|=0x20000 (password mask) @+0x3bc -- all matching
// UI.h::CEditBaseWnd offsets which derive from eqlib::CXWnd 0x258.
//
// Aliasing avoids two parallel declarations drifting independently. If
// Daybreak ever differentiates the eqmain-side CXWnd in a future patch,
// the static_assert(sizeof(eqlib::CXWnd) == 0x258) in CXWnd.h will need
// to be revisited and this alias replaced with a fresh fork.
//
using CXWnd = ::eqlib::CXWnd;


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
