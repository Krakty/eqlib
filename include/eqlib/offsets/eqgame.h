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
// eqgame.exe offsets
//

#define __ClientDate                                               20251124u
#define __ExpectedVersionDate                                     "Nov 24 2025"
#define __ExpectedVersionTime                                     "09:42:38"
#define __ActualVersionDate_x                                      0x140970898
#define __ActualVersionTime_x                                      0x140970888
#define __ActualVersionBuild_x                                     0x140905A50

// Memory Protection
#define __MemChecker0_x                                            0x1402C4080
#define __MemChecker1_x                                            0x140591830
#define __MemChecker4_x                                            0x140291880
#define __EncryptPad0_x                                            0x140D43F20

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E7C990
#define instEQZoneInfo_x                                           0x140E7CB84 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x140225490
#define __gfMaxZoomCameraDistance_x                                0x140906CF8
#define __gfMaxCameraDistance_x                                    0x140AB0C44
#define __CurrentSocial_x                                          0x140BFF950 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D3B730
#define g_eqCommandStates_x                                        0x140D3C7D0
#define __CommandList_x                                            0x140D3CA00
#define __ScreenMode_x                                             0x140DC42E4
#define __gWorld_x                                                 0x140E76E70
#define __gpbCommandEvent_x                                        0x140E773C8
#define __ServerHost_x                                             0x140E775C8
#define __Guilds_x                                                 0x140E7B550
#define __MemCheckBitmask_x                                        0x140E7CECF
#define __MemCheckActive_x                                         0x140E7E5E5
#define __MouseEventTime_x                                         0x140EF1F60
#define DI8__MouseState_x                                          0x140EF61B0
#define __heqmain_x                                                0x140EF8640
#define DI8__Mouse_x                                               0x140EF8658
#define __HWnd_x                                                   0x140EF8660
#define __Mouse_x                                                  0x140EF8668
#define DI8__Keyboard_x                                            0x140EF8688
#define __LoginName_x                                              0x140EF8D6C
#define __CurrentMapLabel_x                                        0x140F0C880
#define __LabelCache_x                                             0x140F0D450
#define __ChatFilterDefs_x                                         0x140A4AB00
#define Teleport_Table_Size_x                                      0x140E7745C
#define Teleport_Table_x                                           0x140E74E30

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E778E0
#define pinstActiveBanker_x                                        0x140E77310
#define pinstActiveCorpse_x                                        0x140E77300
#define pinstActiveGMaster_x                                       0x140E77308
#define pinstActiveMerchant_x                                      0x140E772F8
#define pinstAltAdvManager_x                                       0x140DC50D8
#define pinstCEverQuest_x                                          0x140EF6108
#define pinstCamActor_x                                            0x140DC42D0
#define pinstCDBStr_x                                              0x140DC3E90
#define pinstCDisplay_x                                            0x140E74E28
#define pinstControlledPlayer_x                                    0x140E773A0
#define pinstCResolutionHandler_x                                  0x140F1DC88
#define pinstCSidlManager_x                                        0x140F1E9F0
#define pinstCXWndManager_x                                        0x140F1E9E8
#define instDynamicZone_x                                          0x140E7B410 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E7B45E
#define instExpeditionName_x                                       0x140E7B49E
#define pinstDZMember_x                                            0x140E7B528
#define pinstDZTimerInfo_x                                         0x140E7B530
#define pinstEqLogin_x                                             0x140EF86B0
#define instTribute_x                                              0x140D36D60
#define pinstDeviceInputProxy_x                                    0x140E7C9EC
#define pinstEQSoundManager_x                                      0x140DC5460
#define pinstEQSpellStrings_x                                      0x140DA8A20
#define pinstSGraphicsEngine_x                                     0x140F1DA18
#define pinstLocalPC_x                                             0x140E76E58
#define pinstLocalPlayer_x                                         0x140E772F0
#define pinstCMercenaryClientManager_x                             0x140EF3898
#define pinstModelPlayer_x                                         0x140E77320
#define pinstRenderInterface_x                                     0x140F1DA30
#define pinstSkillMgr_x                                            0x140EF5548
#define pinstSpawnManager_x                                        0x140EF3C50
#define pinstSpellManager_x                                        0x140EF55B0
#define pinstStringTable_x                                         0x140E76E60
#define pinstSwitchManager_x                                       0x140E74D90
#define pinstTarget_x                                              0x140E77398
#define pinstTaskMember_x                                          0x140D36D50 // Part of g_taskManager
#define pinstTradeTarget_x                                         0x140E77318
#define instTributeActive_x                                        0x140D36D89
#define pinstViewActor_x                                           0x140DC42C8
#define pinstWorldData_x                                           0x140E74E20
#define pinstPlayerPath_x                                          0x140EF3C78
#define pinstTargetIndicator_x                                     0x140EF5660
#define EQObject_Top_x                                             0x140E77450

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140F099E0
#define pinstCContainerMgr_x                                       0x140DC4338
#define pinstCContextMenuManager_x                                 0x140F1E6D0
#define pinstCInvSlotMgr_x                                         0x140DC4318
#define pinstCItemDisplayManager_x                                 0x140F0C450
#define pinstCPopupWndManager_x                                    0x140F0CCE0
#define pinstCSpellDisplayMgr_x                                    0x140F0D330
#define pinstCTaskManager_x                                        0x140BFFC90
#define pinstEQSuiteTextureLoader_x                                0x140D4D640
#define pinstItemIconCache_x                                       0x140F09D40
#define pinstLootFiltersManager_x                                  0x140DC38D8
#define pinstGFViewListener_x                                      0x140F1DEA8


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x14024F200
#define __CastRay_x                                                0x140247470
#define __CastRay2_x                                               0x140247170
#define __compress_block_x                                         0x140546BF0
#define __ConvertItemTags_x                                        0x1402478D0
#define __CleanItemTags_x                                          0x14008A7B0
#define __CreateCascadeMenuItems_x                                 0x140190BF0
#define __decompress_block_x                                       0x14058D040
#define __DoesFileExist_x                                          0x1405956E0
#define __EQGetTime_x                                              0x140591DE0
#define __ExecuteCmd_x                                             0x14021CA20
#define __FixHeading_x                                             0x14064CF90
#define __FlushDxKeyboard_x                                        0x140347E10
#define __get_bearing_x                                            0x140251430
#define __get_melee_range_x                                        0x140251520
#define __GetAnimationCache_x                                      0x1403C9790
#define __GetGaugeValueFromEQ_x                                    0x140506620
#define __GetLabelFromEQ_x                                         0x140507C20
#define __GetXTargetType_x                                         0x14064E270   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14064D010
#define __HelpPath_x                                               0x140EF1E28   // Why?
#define __NewUIINI_x                                               0x140513660   // Why?
#define __ProcessDeviceEvents_x                                    0x140291E90
#define __ProcessGameEvents_x                                      0x1402868A0
#define __ProcessKeyboardEvents_x                                  0x140349560
#define __ProcessMouseEvents_x                                     0x140287FC0
#define __SaveColors_x                                             0x1401A0AF0
#define __STMLToText_x                                             0x1405A52E0
#define __WndProc_x                                                0x1403465B0
#define CMemoryMappedFile__SetFile_x                               0x1407FAC30
#define DrawNetStatus_x                                            0x1402D33B0
#define Util__FastTime_x                                           0x140591310
#define __eq_delete_x                                              0x1406C6BE8
#define __eq_new_x                                                 0x1406C6E40
#define __CopyLayout_x                                             0x1402C04B0
#define __ThrottleFrameRate_x                                      0x140275E6C
#define __ThrottleFrameRateEnd_x                                   0x140275E72

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140359050
#define CAAWnd__Update_x                                           0x140359350
#define CAAWnd__UpdateSelected_x                                   0x14035A550

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AD1E0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A5BC0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140851A10
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400ADB10

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401ABD70
#define AltAdvManager__IsAbilityReady_x                            0x1401AC200
#define AltAdvManager__GetAAById_x                                 0x1401AB640
#define AltAdvManager__CanTrainAbility_x                           0x1401AB430
#define AltAdvManager__CanSeeAbility_x                             0x1401AB0F0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D4620
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D5490
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D56E0
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400E9A30
#define CharacterZoneClient__CanUseItem_x                          0x1400E9FF0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D60B0
#define CharacterZoneClient__CastSpell_x                           0x1400D6150
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E5F00
#define CharacterZoneClient__Cur_HP_x                              0x1400EB710
#define CharacterZoneClient__Cur_Mana_x                            0x1400EB8D0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D93C0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F1F90
#define CharacterZoneClient__GetBaseSkill_x                        0x140100660  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400DA860
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E9330
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F3830
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F2710
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400DA9E0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400CA430
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400CC300
#define CharacterZoneClient__GetHPRegen_x                          0x1400F2E50
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400EB380
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F3AC0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400DAA60
#define CharacterZoneClient__GetManaRegen_x                        0x1400F4840
#define CharacterZoneClient__GetModCap_x                           0x1400FBE10
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400DACF0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400DAEC0
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CF990
#define CharacterZoneClient__HasSkill_x                            0x1400F7950
#define CharacterZoneClient__HitBySpell_x                          0x1400DB950
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DF2D0
#define CharacterZoneClient__MakeMeVisible_x                       0x1400FB8F0
#define CharacterZoneClient__Max_Endurance_x                       0x1402EE100  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400FBC40
#define CharacterZoneClient__Max_Mana_x                            0x1402EE320  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400FC0A0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E2940
#define CharacterZoneClient__SpellDuration_x                       0x1400E3670
#define CharacterZoneClient__TotalEffect_x                         0x1400E4A50
#define CharacterZoneClient__UseSkill_x                            0x1401015D0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140377EF0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140382500

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14037E370
#define CBarterSearchWnd__UpdateInventoryList_x                    0x140381F80

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140384C60

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AD02D0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403A79B0
#define CChatWindowManager__InitContextMenu_x                      0x1403A7B40
#define CChatWindowManager__FreeChatWindow_x                       0x1403A6A00
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403AFB00
#define CChatWindowManager__CreateChatWindow_x                     0x1403A6430

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140109B70

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403B0B50
#define CChatWindow__Clear_x                                       0x1403B1B00
#define CChatWindow__WndNotification_x                             0x1403B2CF0
#define CChatWindow__AddHistory_x                                  0x1403B1600

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405D2A10
#define CContextMenu__RemoveMenuItem_x                             0x1405D2E00
#define CContextMenu__RemoveAllMenuItems_x                         0x1405D2DD0
#define CContextMenu__CheckMenuItem_x                              0x1405D2C40
#define CContextMenu__SetMenuItem_x                                0x1405D2E20
#define CContextMenu__AddSeparator_x                               0x1405D2B80

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405C4920
#define CContextMenuManager__RemoveMenu_x                          0x1405C4F00
#define CContextMenuManager__PopupMenu_x                           0x1405C4C40
#define CContextMenuManager__Flush_x                               0x1405C49A0
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403C1140

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x140658C30
#define CChatService__GetFriendName_x                              0x1406A0A20

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405B5830
#define CComboWnd__Draw_x                                          0x1405B5930
#define CComboWnd__GetCurChoice_x                                  0x1405B5C00  // unused
#define CComboWnd__GetListRect_x                                   0x1405B5CA0
#define CComboWnd__InsertChoice_x                                  0x1405B5FE0
#define CComboWnd__SetColors_x                                     0x1405B6370
#define CComboWnd__SetChoice_x                                     0x1405B6330
#define CComboWnd__GetItemCount_x                                  0x1405B5C90
#define CComboWnd__GetCurChoiceText_x                              0x1405B5C40  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405B5BD0
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405B60A0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403BEE60
#define CContainerWnd__SetContainer_x                              0x14041AC30
#define CContainerWnd__vftable_x                                   0x1409E5918

// CDisplay
#define CDisplay__cameraType_x                                     0x140DC4054
#define CDisplay__ZoneMainUI_x                                     0x1405ECD50
#define CDisplay__PreZoneMainUI_x                                  0x14019D9F0
#define CDisplay__CleanGameUI_x                                    0x14018FCB0
#define CDisplay__GetClickedActor_x                                0x140193E80
#define CDisplay__GetUserDefinedColor_x                            0x140194AF0
#define CDisplay__InitCharSelectUI_x                               0x140194DA0
#define CDisplay__ReloadUI_x                                       0x14019FCF0
#define CDisplay__RestartUI_x                                      0x140201260
#define CDisplay__WriteTextHD2_x                                   0x1401A6D00
#define CDisplay__TrueDistance_x                                   0x1401A69B0
#define CDisplay__SetViewActor_x                                   0x1401A3220
#define CDisplay__GetFloorHeight_x                                 0x1401940E0
#define CDisplay__ToggleScreenshotMode_x                           0x1401A64A0
#define CDisplay__RealRender_World_x                               0x14019F0C0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405F6F80
#define CEditWnd__DrawCaret_x                                      0x1405E8A50  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405E8F00
#define CEditWnd__GetCaretPt_x                                     0x1405E9180  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405E91C0
#define CEditWnd__GetDisplayString_x                               0x1405E9430
#define CEditWnd__GetHorzOffset_x                                  0x1405E9670
#define CEditWnd__GetLineForPrintableChar_x                        0x1405E97C0
#define CEditWnd__GetSelStartPt_x                                  0x1405E9AA0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405E98F0
#define CEditWnd__PointFromPrintableChar_x                         0x1405EA650
#define CEditWnd__ReplaceSelection_x                               0x1405EAA00
#define CEditWnd__SelectableCharFromPoint_x                        0x1405EAEA0
#define CEditWnd__SetEditable_x                                    0x1405EB130
#define CEditWnd__SetWindowText_x                                  0x1405EB160

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140276F40
#define CEverQuest__ClickedPlayer_x                                0x14026AF30
#define CEverQuest__CreateTargetIndicator_x                        0x14026B7F0
#define CEverQuest__DoTellWindow_x                                 0x140109880 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x14010A160 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140278930
#define CEverQuest__dsp_chat_x                                     0x1401092C0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402A38C0
#define CEverQuest__Emote_x                                        0x140279320
#define CEverQuest__GetBodyTypeDesc_x                              0x14027A100
#define CEverQuest__GetClassDesc_x                                 0x14027A160
#define CEverQuest__GetClassThreeLetterCode_x                      0x14027A530
#define CEverQuest__GetDeityDesc_x                                 0x14027A7E0
#define CEverQuest__GetLangDesc_x                                  0x14027AC10
#define CEverQuest__GetRaceDesc_x                                  0x14027AFB0
#define CEverQuest__InterpretCmd_x                                 0x14027C940
#define CEverQuest__LeftClickedOnPlayer_x                          0x140291F00
#define CEverQuest__LMouseUp_x                                     0x14027E3C0
#define CEverQuest__RightClickedOnPlayer_x                         0x14028F490
#define CEverQuest__RMouseUp_x                                     0x140288B50
#define CEverQuest__SetGameState_x                                 0x140294980
#define CEverQuest__UPCNotificationFlush_x                         0x14029A2F0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14027E020
#define CEverQuest__ReportSuccessfulHeal_x                         0x140289F20
#define CEverQuest__ReportSuccessfulHit_x                          0x14028AD40

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403D4680

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C3CC0
#define CGuild__GetGuildName_x                                     0x1400C3D00

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403F7BC0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402B5B90
#define CHotButton__SetCheck_x                                     0x1402B5E60

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140411810
#define CInvSlotMgr__MoveItem_x                                    0x1404123A0
#define CInvSlotMgr__SelectSlot_x                                  0x1404146D0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x14040E850
#define CInvSlot__SliderComplete_x                                 0x14040FE50
#define CInvSlot__GetItemBase_x                                    0x14040A050
#define CInvSlot__UpdateItem_x                                     0x140410310

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1404168C0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140438250
#define CItemDisplayWnd__UpdateStrings_x                           0x14043AE70
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140434A00
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140436360
#define CItemDisplayWnd__RequestConvertItem_x                      0x140437660

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1405030A0
#define CSpellDisplayWnd__UpdateStrings_x                          0x140504E30

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x14053FF50

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1404310D0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x1401562B0

// CLabel
#define CLabel__UpdateText_x                                       0x140442250

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405B91B0
#define CListWnd__dCListWnd_x                                      0x1405B9600
#define CListWnd__vftable_x                                        0x140ACE420
#define CListWnd__AddColumn_x                                      0x1405B9CA0
#define CListWnd__AddColumn1_x                                     0x1405B9D40
#define CListWnd__AddLine_x                                        0x1405B9EA0
#define CListWnd__AddString_x                                      0x1405BA430
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405BA9A0
#define CListWnd__CalculateVSBRange_x                              0x1405BAC80
#define CListWnd__ClearSel_x                                       0x1405BAE20
#define CListWnd__ClearAllSel_x                                    0x1405BADC0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405BAE80
#define CListWnd__Compare_x                                        0x1405BB040
#define CListWnd__Draw_x                                           0x1405BB510
#define CListWnd__DrawColumnSeparators_x                           0x1405BC0C0
#define CListWnd__DrawHeader_x                                     0x1405BC180
#define CListWnd__DrawItem_x                                       0x1405BC850
#define CListWnd__DrawLine_x                                       0x1405BD1D0
#define CListWnd__DrawSeparator_x                                  0x1405BD690
#define CListWnd__EnableLine_x                                     0x1405BDAB0
#define CListWnd__EnsureVisible_x                                  0x1405BDB10
#define CListWnd__ExtendSel_x                                      0x1405BDC10
#define CListWnd__GetColumnMinWidth_x                              0x1405BDFA0
#define CListWnd__GetColumnWidth_x                                 0x1405BE020
#define CListWnd__GetCurSel_x                                      0x1405BE120
#define CListWnd__GetItemData_x                                    0x1405BE4A0
#define CListWnd__GetItemHeight_x                                  0x1405BE4E0
#define CListWnd__GetItemRect_x                                    0x1405BE700
#define CListWnd__GetItemText_x                                    0x1405BE9A0
#define CListWnd__GetSelList_x                                     0x1405BEBF0
#define CListWnd__GetSeparatorRect_x                               0x1405BEDE0
#define CListWnd__InsertLine_x                                     0x1405C0240
#define CListWnd__RemoveLine_x                                     0x1405C08B0
#define CListWnd__SetColors_x                                      0x1405C0C70
#define CListWnd__SetColumnJustification_x                         0x1405C0C90
#define CListWnd__SetColumnLabel_x                                 0x1405C0D10
#define CListWnd__SetColumnWidth_x                                 0x1405C0EB0
#define CListWnd__SetCurSel_x                                      0x1405C0F80
#define CListWnd__SetItemColor_x                                   0x1405C11F0
#define CListWnd__SetItemData_x                                    0x1405C1290
#define CListWnd__SetItemText_x                                    0x1405C14D0
#define CListWnd__Sort_x                                           0x1405C18E0
#define CListWnd__ToggleSel_x                                      0x1405C1A50
#define CListWnd__SetColumnsSizable_x                              0x1405C0F00
#define CListWnd__SetItemWnd_x                                     0x1405C1600
#define CListWnd__GetItemWnd_x                                     0x1405BEB80
#define CListWnd__SetItemIcon_x                                    0x1405C12D0
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405BA770
#define CListWnd__SetVScrollPos_x                                  0x1405C1840

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140455770

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A33328
#define MapViewMap__Clear_x                                        0x1404572F0
#define MapViewMap__SetZoom_x                                      0x14045D940
#define MapViewMap__HandleLButtonDown_x                            0x14045A480

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14047F180  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140485A20
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140486200
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140489B00
#define CMerchantWnd__SelectBuySellSlot_x                          0x140488E40
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14048DF00

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14067B9F0
#define CPacketScrambler__hton_x                                   0x14067B9E0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405E2310
#define CSidlManagerBase__FindAnimation1_x                         0x1405E2250
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405E2940
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405E26F0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405E1650
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405E15E0
#define CSidlManagerBase__CreateXWnd_x                             0x1405E0C20

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404F6050
#define CSidlManager__CreateXWnd_x                                 0x1404F6210

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405A6DD0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x1405A6EF0
#define CSidlScreenWnd__ConvertToRes_x                             0x1405F14C0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x1405A7060
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x1405A6500
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x1405A65D0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1405A67E0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1405A7740
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405A7970
#define CSidlScreenWnd__GetChildItem_x                             0x1405A7B10
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405A7D60
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405B1DD0 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405A80D0
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405A8440
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405A8D00
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405A9700
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F1DD48
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405A9D70
#define CSidlScreenWnd__StoreIniVis_x                              0x1405AA560
#define CSidlScreenWnd__vftable_x                                  0x140ACD6A8
#define CSidlScreenWnd__WndNotification_x                          0x1405AA5B0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x140330F90 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x1403312B0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x1403311E0
#define CSkillMgr__IsActivatedSkill_x                              0x140331670
#define CSkillMgr__IsCombatSkill_x                                 0x1403316B0
#define CSkillMgr__GetSkillTimerDuration_x                         0x1403315E0
#define CSkillMgr__GetSkillLastUsed_x                              0x140331230

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405C23D0
#define CSliderWnd__SetValue_x                                     0x1405C2BE0
#define CSliderWnd__SetNumTicks_x                                  0x1405C2A60

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404FC7D0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405C7380
#define CStmlWnd__CalculateHSBRange_x                              0x1405B17B0
#define CStmlWnd__CalculateVSBRange_x                              0x1405C8290
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405C8CF0
#define CStmlWnd__ForceParseNow_x                                  0x1405C8D90
#define CStmlWnd__GetVisibleText_x                                 0x1405C9460
#define CStmlWnd__MakeStmlColorTag_x                               0x1405CB1A0
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405CB1E0
#define CStmlWnd__SetSTMLText_x                                    0x1405D21B0
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405D2360
#define CStmlWnd__UpdateHistoryString_x                            0x1405D26F0

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405C2FB0
#define CTabWnd__DrawCurrentPage_x                                 0x1405C3050
#define CTabWnd__DrawTab_x                                         0x1405C3420
#define CTabWnd__GetTabRect_x                                      0x1405C3A90
#define CTabWnd__InsertPage_x                                      0x1405C3D60
#define CTabWnd__RemovePage_x                                      0x1405C3FF0
#define CTabWnd__SetPage_x                                         0x1405C4150
#define CTabWnd__UpdatePage_x                                      0x1405C4450

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405EB5C0
#define CPageWnd__SetTabText_x                                     0x1405EB630

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BD260  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BD670


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405D9CD0
#define CTextureFont__DrawWrappedText1_x                           0x1405D9BE0
#define CTextureFont__DrawWrappedText2_x                           0x1405D9E00
#define CTextureFont__GetTextExtent_x                              0x1405DA1B0
#define CTextureFont__GetHeight_x                                  0x1405DA170

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405EFC20

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405A39D0

// CXStr
#define CXStr__gFreeLists_x                                        0x140D4CFB0
#define CXStr__gCXStrAccess_x                                      0x140F1D8A8

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405ACE50
#define CXWnd__ClrFocus_x                                          0x1405AD140
#define CXWnd__Destroy_x                                           0x1405AD2C0
#define CXWnd__DoAllDrawing_x                                      0x1405AD3D0
#define CXWnd__DrawColoredRect_x                                   0x1405ADBA0
#define CXWnd__DrawTooltip_x                                       0x1405AF200
#define CXWnd__DrawTooltipAtPoint_x                                0x1405AF2B0
#define CXWnd__GetChildItem_x                                      0x1405AFBC0
#define CXWnd__GetChildWndAt_x                                     0x1405AFC80
#define CXWnd__GetClientRect_x                                     0x1405AFF20
#define CXWnd__GetClientClipRect_x                                 0x1405AFDF0
#define CXWnd__GetRelativeRect_x                                   0x1405B18D0
#define CXWnd__GetScreenClipRect_x                                 0x1405B19E0
#define CXWnd__GetScreenRect_x                                     0x1405B1B50
#define CXWnd__GetTooltipRect_x                                    0x1405B1CD0
#define CXWnd__IsActive_x                                          0x1405B2290
#define CXWnd__IsDescendantOf_x                                    0x1405B22C0
#define CXWnd__IsReallyVisible_x                                   0x1405B2330
#define CXWnd__IsType_x                                            0x1405B2380
#define CXWnd__Minimize_x                                          0x1405B2480
#define CXWnd__ProcessTransition_x                                 0x1405B3370
#define CXWnd__Resize_x                                            0x1405B3480
#define CXWnd__Right_x                                             0x1405B3520
#define CXWnd__SetFocus_x                                          0x1405B38E0
#define CXWnd__SetFont_x                                           0x1405B3930
#define CXWnd__SetKeyTooltip_x                                     0x1405B3A20
#define CXWnd__SetMouseOver_x                                      0x1405B3B60
#define CXWnd__SetParent_x                                         0x1405B3BE0
#define CXWnd__StartFade_x                                         0x1405B4010
#define CXWnd__vftable_x                                           0x140ACDC80
#define CXWnd__CXWnd_x                                             0x1405AB9D0
#define CXWnd__dCXWnd_x                                            0x1405AC320

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405F6700

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405D3FD0
#define CXWndManager__DrawCursor_x                                 0x1405D42B0
#define CXWndManager__DrawWindows_x                                0x1405D4510
#define CXWndManager__GetKeyboardFlags_x                           0x1405D4B60
#define CXWndManager__HandleKeyboardMsg_x                          0x1405D4BA0
#define CXWndManager__RemoveWnd_x                                  0x1405D8390

// CDBStr
#define CDBStr__GetString_x                                        0x14018DE70

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x140685850

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D2120
#define CCharacterListWnd__EnterWorld_x                            0x1400D1130
#define CCharacterListWnd__Quit_x                                  0x1400D2100
#define CCharacterListWnd__UpdateList_x                            0x1400D2F80

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140652FF0
#define ItemBase__CreateItemTagString_x                            0x140653A90
#define ItemBase__GetImageNum_x                                    0x140656170
#define ItemBase__GetItemValue_x                                   0x140657CA0
#define ItemBase__IsEmpty_x                                        0x1406599A0
#define ItemBase__IsKeyRingItem_x                                  0x14065A0B0
#define ItemBase__ValueSellMerchant_x                              0x14065E310
#define ItemClient__CanDrop_x                                      0x1402B8480
#define ItemClient__CanGoInBag_x                                   0x1402B85B0
#define ItemClient__CreateItemClient_x                             0x1402B8840
#define ItemClient__dItemClient_x                                  0x1402B82F0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401AD720
#define EQ_LoadingS__Array_x                                       0x140D39240

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14066A380
#define PcBase__GetCombatAbility_x                                 0x14066AA70
#define PcBase__GetCombatAbilityTimer_x                            0x14066AB10
#define PcBase__GetItemContainedRealEstateIds_x                    0x14066B2B0
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14066BD30
#define PcClient__AlertInventoryChanged_x                          0x1402DB5F0
#define PcClient__GetConLevel_x                                    0x1402DBD40  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402DE4D0
#define PcClient__HasLoreItem_x                                    0x1402DF510
#define PcZoneClient__GetItemRecastTimer_x                         0x1402EBD70
#define PcZoneClient__RemoveMyAffect_x                             0x1402EF240

// EQGroundItemListManager
#define EQGroundItem__EQGroundItem_x                               0x140221420
#define EQGroundItemListManager__Add_x                             0x1402215D0
#define EQGroundItemListManager__Clear_x                           0x140221670
#define EQGroundItemListManager__Delete_x                          0x140221730
#define EQGroundItemListManager__Instance_x                        0x1402217C0

// EQPlacedItemManager
#define EQPlacedItemManager__Add_x                                 0x14025C300

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140188690

// PlayerClient
#define PlayerBase__CanSee_x                                       0x14063EF20
#define PlayerBase__CanSee1_x                                      0x14063EFF0
#define PlayerBase__GetVisibilityLineSegment_x                     0x14063F4D0
#define PlayerBase__HasProperty_x                                  0x14063F6A0
#define PlayerBase__IsTargetable_x                                 0x14063F760
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402FCED0
#define PlayerClient__GetPcClient_x                                0x1402FFA00
#define PlayerClient__PlayerClient_x                               0x1402F5220
#define PlayerClient__SetNameSpriteState_x                         0x140303130
#define PlayerClient__SetNameSpriteTint_x                          0x1403040F0
#define PlayerZoneClient__ChangeHeight_x                           0x140312B20
#define PlayerZoneClient__DoAttack_x                               0x140313830
#define PlayerZoneClient__GetLevel_x                               0x140316F60
#define PlayerZoneClient__IsValidTeleport_x                        0x14025F0A0
#define PlayerZoneClient__LegalPlayerRace_x                        0x14019C270

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x14030C020  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x14030C0D0  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x14030C1D0
#define PlayerManagerClient__CreatePlayer_x                        0x14030BAF0
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x14063EAE0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402BD9D0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402BD300
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402BD370
#define KeypressHandler__ClearCommandStateArray_x                  0x1402BD960  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402BDAF0
#define KeypressHandler__HandleKeyUp_x                             0x1402BDC10
#define KeypressHandler__SaveKeymapping_x                          0x1402BD7F0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140683370  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x14067D130

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402E55C0  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402E9EA0
#define PcZoneClient__GetPcSkillLimit_x                            0x1402ECE50
#define PcZoneClient__RemovePetEffect_x                            0x1402EF520
#define PcZoneClient__HasAlternateAbility_x                        0x1402EDA30
#define PcZoneClient__CanEquipItem_x                               0x1402E8190
#define PcZoneClient__GetItemByID_x                                0x1402EADC0
#define PcZoneClient__RemoveBuffEffect_x                           0x1402EF0C0
#define PcZoneClient__BandolierSwap_x                              0x1402DB6A0

// Doors
#define EQSwitch__UseSwitch_x                                      0x140263BD0

// IconCache
#define IconCache__GetIcon_x                                       0x1403C97C0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403BDC10
#define CContainerMgr__CloseContainer_x                            0x1403BD530
#define CContainerMgr__OpenExperimentContainer_x                   0x1403BDF90

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404B9C90

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402AFDA0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140449580
#define CLootWnd__RequestLootSlot_x                                0x14044A5D0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401DD0F0
#define EQ_Spell__SpellAffects_x                                   0x1401DE3D0
#define EQ_Spell__SpellAffectBase_x                                0x1401DE330
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400DB050
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400DB000
#define EQ_Spell__IsSPAStacking_x                                  0x1401DE000
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401DDBB0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401DD470

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C2800

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x140516E60
#define CTargetWnd__RefreshTargetBuffs_x                           0x140516570
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x140515D70

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x14051E500  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140185050
#define CTaskManager__GetTaskStatus_x                              0x140185160
#define CTaskManager__GetElementDescription_x                      0x140184CE0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401DB410
#define EqSoundManager__PlayScriptMp3_x                            0x1401DA250
#define EqSoundManager__SoundAssistPlay_x                          0x1403363D0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140336710  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405B4DC0
#define CTextureAnimation__SetCurCell_x                            0x1405B50D0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402ADFA0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x14069E0E0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x14069E160
#define CharacterBase__IsExpansionFlag_x                           0x1402008C0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140398A90
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140399500
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x14039AA50

// messages
#define msg_spell_worn_off_x                                       0x140217960
#define msg_new_text_x                                             0x140213120
#define __msgTokenTextParam_x                                      0x14020A600
#define msgTokenText_x                                             0x14020A510

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140338000
#define SpellManager__GetSpellByGroupAndRank_x                     0x140337F20

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x14064E650

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1404429A0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403C2960
#define CCursorAttachment__IsOkToActivate_x                        0x1403C5E00
#define CCursorAttachment__RemoveAttachment_x                      0x1403C60B0
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405EE0C0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405EE2B0
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405EE2C0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140150BC0
#define CFindItemWnd__Update_x                                     0x140151560
#define CFindItemWnd__PickupSelectedItem_x                         0x14014A500

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14015B370
#define LootFiltersManager__GetItemFilterData_x                    0x14015BE90
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14015C730
#define LootFiltersManager__SetItemLootFilter_x                    0x14015C9E0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14049C550

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x140330B50
#define CResolutionHandler__UpdateResolution_x                     0x14059A380

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403B9EE0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406A2590  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406A2480  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403E0A40
#define CGroupWnd__UpdateDisplay_x                                 0x1403E0620

// ItemBase
#define ItemBase__IsLore_x                                         0x14065A1F0
#define ItemBase__IsLoreEquipped_x                                 0x14065A280

#define MultipleItemMoveManager__ProcessMove_x                     0x1402D1190

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14025C460
#define EQPlacedItemManager__GetItemByGuid_x                       0x14025C3F0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14025C430

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14032AF80

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x1401275B0
#define FactionManagerClient__HandleFactionMessage_x               0x140127990
#define FactionManagerClient__GetFactionStanding_x                 0x140126D80
#define FactionManagerClient__GetMaxFaction_x                      0x140126D80
#define FactionManagerClient__GetMinFaction_x                      0x140126C30

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AF7F0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140132D90

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401B62F0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401B54B0
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401B6110  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401B6090  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x14033D2B0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14032AF80

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405AABA0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140086E70

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14034EBB0

// AchievementManager
#define AchievementManager__Instance_x                             0x14008F190

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x1406863D0
#define FreeToPlayClient__RestrictionInfo_x                        0x140AE2600

// UdpConnection
#define UdpConnection__GetStats_x                                  0x14054D010

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x140839058
#define CGFScreenWnd__CGFScreenWnd_x                               0x140071550
#define CGFScreenWnd__CGFScreenWnd1_x                              0x1400716E0
#define CGFScreenWnd__dCGFScreenWnd_x                              0x140071890

#if __has_include("../../../../private/eqgame-private.h")
#include "../../../../private/eqgame-private.h"
#endif
