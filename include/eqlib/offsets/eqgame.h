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

#define __ClientDate                                               20251209u
#define __ExpectedVersionDate                                     "Dec  9 2025"
#define __ExpectedVersionTime                                     "13:42:10"
#define __ActualVersionDate_x                                      0x140970898
#define __ActualVersionTime_x                                      0x140970888
#define __ActualVersionBuild_x                                     0x140905A50

// Memory Protection
#define __MemChecker0_x                                            0x1402C42F0
#define __MemChecker1_x                                            0x140591EB0
#define __MemChecker4_x                                            0x140291A70
#define __EncryptPad0_x                                            0x140D43F20

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E7C990
#define instEQZoneInfo_x                                           0x140E7CB84 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x140225680
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
#define DI8__MouseState_x                                          0x140EF61A0
#define __heqmain_x                                                0x140EF8630
#define DI8__Mouse_x                                               0x140EF8648
#define __HWnd_x                                                   0x140EF8650
#define __Mouse_x                                                  0x140EF8658
#define DI8__Keyboard_x                                            0x140EF8678
#define __LoginName_x                                              0x140EF8D5C
#define __CurrentMapLabel_x                                        0x140F0C870
#define __LabelCache_x                                             0x140F0D440
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
#define pinstCEverQuest_x                                          0x140EF60F8
#define pinstCamActor_x                                            0x140DC42D0
#define pinstCDBStr_x                                              0x140DC3E90
#define pinstCDisplay_x                                            0x140E74E28
#define pinstControlledPlayer_x                                    0x140E773A0
#define pinstCResolutionHandler_x                                  0x140F1DC78
#define pinstCSidlManager_x                                        0x140F1E9E0
#define pinstCXWndManager_x                                        0x140F1E9D8
#define instDynamicZone_x                                          0x140E7B410 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E7B45E
#define instExpeditionName_x                                       0x140E7B49E
#define pinstDZMember_x                                            0x140E7B528
#define pinstDZTimerInfo_x                                         0x140E7B530
#define pinstEqLogin_x                                             0x140EF86A0
#define instTribute_x                                              0x140D36D60
#define pinstDeviceInputProxy_x                                    0x140E7C9EC
#define pinstEQSoundManager_x                                      0x140DC5460
#define pinstEQSpellStrings_x                                      0x140DA8A20
#define pinstSGraphicsEngine_x                                     0x140F1DA08
#define pinstLocalPC_x                                             0x140E76E58
#define pinstLocalPlayer_x                                         0x140E772F0
#define pinstCMercenaryClientManager_x                             0x140EF3888
#define pinstModelPlayer_x                                         0x140E77320
#define pinstRenderInterface_x                                     0x140F1DA20
#define pinstSkillMgr_x                                            0x140EF5538
#define pinstSpawnManager_x                                        0x140EF3C40
#define pinstSpellManager_x                                        0x140EF55A0
#define pinstStringTable_x                                         0x140E76E60
#define pinstSwitchManager_x                                       0x140E74D90
#define pinstTarget_x                                              0x140E77398
#define pinstTaskMember_x                                          0x140D36D50 // Part of g_taskManager
#define pinstTradeTarget_x                                         0x140E77318
#define instTributeActive_x                                        0x140D36D89
#define pinstViewActor_x                                           0x140DC42C8
#define pinstWorldData_x                                           0x140E74E20
#define pinstPlayerPath_x                                          0x140EF3C68
#define pinstTargetIndicator_x                                     0x140EF5650
#define EQObject_Top_x                                             0x140E77450

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140F099D0
#define pinstCContainerMgr_x                                       0x140DC4338
#define pinstCContextMenuManager_x                                 0x140F1E6C0
#define pinstCInvSlotMgr_x                                         0x140DC4318
#define pinstCItemDisplayManager_x                                 0x140F0C440
#define pinstCPopupWndManager_x                                    0x140F0CCD0
#define pinstCSpellDisplayMgr_x                                    0x140F0D320
#define pinstCTaskManager_x                                        0x140BFFC90
#define pinstEQSuiteTextureLoader_x                                0x140D4D640
#define pinstItemIconCache_x                                       0x140F09D30
#define pinstLootFiltersManager_x                                  0x140DC38D8
#define pinstGFViewListener_x                                      0x140F1DE98


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x14024F3F0
#define __CastRay_x                                                0x140247660
#define __CastRay2_x                                               0x140247360
#define __compress_block_x                                         0x140547270
#define __ConvertItemTags_x                                        0x140247AC0
#define __CleanItemTags_x                                          0x14008A7B0
#define __CreateCascadeMenuItems_x                                 0x140190BD0
#define __decompress_block_x                                       0x14058D6C0
#define __DoesFileExist_x                                          0x140595D60
#define __EQGetTime_x                                              0x140592460
#define __ExecuteCmd_x                                             0x14021CC10
#define __FixHeading_x                                             0x14064D540
#define __FlushDxKeyboard_x                                        0x1403481A0
#define __get_bearing_x                                            0x140251620
#define __get_melee_range_x                                        0x140251710
#define __GetAnimationCache_x                                      0x1403C9C40
#define __GetGaugeValueFromEQ_x                                    0x140506C90
#define __GetLabelFromEQ_x                                         0x140508290
#define __GetXTargetType_x                                         0x14064E820   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14064D5C0
#define __HelpPath_x                                               0x140EF1E28   // Why?
#define __NewUIINI_x                                               0x140513CE0   // Why?
#define __ProcessDeviceEvents_x                                    0x140292080
#define __ProcessGameEvents_x                                      0x140286A90
#define __ProcessKeyboardEvents_x                                  0x1403498F0
#define __ProcessMouseEvents_x                                     0x1402881B0
#define __SaveColors_x                                             0x1401A0AD0
#define __STMLToText_x                                             0x1405A5960
#define __WndProc_x                                                0x140346940
#define CMemoryMappedFile__SetFile_x                               0x1407FB260
#define DrawNetStatus_x                                            0x1402D3630
#define Util__FastTime_x                                           0x140591990
#define __eq_delete_x                                              0x1406C7208
#define __eq_new_x                                                 0x1406C7460
#define __CopyLayout_x                                             0x1402C0700
#define __ThrottleFrameRate_x                                      0x14027605C
#define __ThrottleFrameRateEnd_x                                   0x140276062

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x1403593D0
#define CAAWnd__Update_x                                           0x1403596D0
#define CAAWnd__UpdateSelected_x                                   0x14035A8D0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AD1E0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A5BC0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140851A10
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400ADB10

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401ABD30
#define AltAdvManager__IsAbilityReady_x                            0x1401AC1C0
#define AltAdvManager__GetAAById_x                                 0x1401AB600
#define AltAdvManager__CanTrainAbility_x                           0x1401AB3F0
#define AltAdvManager__CanSeeAbility_x                             0x1401AB0B0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D45C0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D5430
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D5680
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400E99D0
#define CharacterZoneClient__CanUseItem_x                          0x1400E9F90
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D6050
#define CharacterZoneClient__CastSpell_x                           0x1400D60F0
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E5EA0
#define CharacterZoneClient__Cur_HP_x                              0x1400EB6B0
#define CharacterZoneClient__Cur_Mana_x                            0x1400EB870
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D9360
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F1F30
#define CharacterZoneClient__GetBaseSkill_x                        0x140100600  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400DA800
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E92D0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F37D0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F26B0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400DA980
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400CA3D0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400CC2A0
#define CharacterZoneClient__GetHPRegen_x                          0x1400F2DF0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400EB320
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F3A60
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400DAA00
#define CharacterZoneClient__GetManaRegen_x                        0x1400F47E0
#define CharacterZoneClient__GetModCap_x                           0x1400FBDB0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400DAC90
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400DAE60
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CF930
#define CharacterZoneClient__HasSkill_x                            0x1400F78F0
#define CharacterZoneClient__HitBySpell_x                          0x1400DB8F0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DF270
#define CharacterZoneClient__MakeMeVisible_x                       0x1400FB890
#define CharacterZoneClient__Max_Endurance_x                       0x1402EE3C0  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400FBBE0
#define CharacterZoneClient__Max_Mana_x                            0x1402EE5E0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400FC040
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E28E0
#define CharacterZoneClient__SpellDuration_x                       0x1400E3610
#define CharacterZoneClient__TotalEffect_x                         0x1400E49F0
#define CharacterZoneClient__UseSkill_x                            0x140101570


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140378300

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140382920

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14037E780
#define CBarterSearchWnd__UpdateInventoryList_x                    0x1403823A0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140385090

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AD02D0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403A7E10
#define CChatWindowManager__InitContextMenu_x                      0x1403A7FA0
#define CChatWindowManager__FreeChatWindow_x                       0x1403A6E60
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403AFF60
#define CChatWindowManager__CreateChatWindow_x                     0x1403A6890

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140109B10

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403B0FB0
#define CChatWindow__Clear_x                                       0x1403B1F70
#define CChatWindow__WndNotification_x                             0x1403B3160
#define CChatWindow__AddHistory_x                                  0x1403B1A70

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405D31A0
#define CContextMenu__RemoveMenuItem_x                             0x1405D3590
#define CContextMenu__RemoveAllMenuItems_x                         0x1405D3560
#define CContextMenu__CheckMenuItem_x                              0x1405D33D0
#define CContextMenu__SetMenuItem_x                                0x1405D35B0
#define CContextMenu__AddSeparator_x                               0x1405D3310

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405C5060
#define CContextMenuManager__RemoveMenu_x                          0x1405C5640
#define CContextMenuManager__PopupMenu_x                           0x1405C5380
#define CContextMenuManager__Flush_x                               0x1405C50E0
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403C15F0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x140657970
#define CChatService__GetFriendName_x                              0x1406A1050

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405B5F50
#define CComboWnd__Draw_x                                          0x1405B6050
#define CComboWnd__GetCurChoice_x                                  0x1405B6320  // unused
#define CComboWnd__GetListRect_x                                   0x1405B63C0
#define CComboWnd__InsertChoice_x                                  0x1405B6700
#define CComboWnd__SetColors_x                                     0x1405B6A90
#define CComboWnd__SetChoice_x                                     0x1405B6A50
#define CComboWnd__GetItemCount_x                                  0x1405B63B0
#define CComboWnd__GetCurChoiceText_x                              0x1405B6360  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405B62F0
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405B67C0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403BF300
#define CContainerWnd__SetContainer_x                              0x14041B0D0
#define CContainerWnd__vftable_x                                   0x1409E5918

// CDisplay
#define CDisplay__cameraType_x                                     0x140DC4054
#define CDisplay__ZoneMainUI_x                                     0x1405ED4D0
#define CDisplay__PreZoneMainUI_x                                  0x14019D9D0
#define CDisplay__CleanGameUI_x                                    0x14018FC90
#define CDisplay__GetClickedActor_x                                0x140193E60
#define CDisplay__GetUserDefinedColor_x                            0x140194AD0
#define CDisplay__InitCharSelectUI_x                               0x140194D80
#define CDisplay__ReloadUI_x                                       0x14019FCD0
#define CDisplay__RestartUI_x                                      0x140201460
#define CDisplay__WriteTextHD2_x                                   0x1401A6CE0
#define CDisplay__TrueDistance_x                                   0x1401A6990
#define CDisplay__SetViewActor_x                                   0x1401A3200
#define CDisplay__GetFloorHeight_x                                 0x1401940C0
#define CDisplay__ToggleScreenshotMode_x                           0x1401A6480
#define CDisplay__RealRender_World_x                               0x14019F0A0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405F7700
#define CEditWnd__DrawCaret_x                                      0x1405E91B0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405E9670
#define CEditWnd__GetCaretPt_x                                     0x1405E98F0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405E9930
#define CEditWnd__GetDisplayString_x                               0x1405E9BA0
#define CEditWnd__GetHorzOffset_x                                  0x1405E9DE0
#define CEditWnd__GetLineForPrintableChar_x                        0x1405E9F30
#define CEditWnd__GetSelStartPt_x                                  0x1405EA210  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405EA060
#define CEditWnd__PointFromPrintableChar_x                         0x1405EADC0
#define CEditWnd__ReplaceSelection_x                               0x1405EB170
#define CEditWnd__SelectableCharFromPoint_x                        0x1405EB610
#define CEditWnd__SetEditable_x                                    0x1405EB8A0
#define CEditWnd__SetWindowText_x                                  0x1405EB8D0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140277130
#define CEverQuest__ClickedPlayer_x                                0x14026B100
#define CEverQuest__CreateTargetIndicator_x                        0x14026B9C0
#define CEverQuest__DoTellWindow_x                                 0x140109820 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x14010A100 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140278B20
#define CEverQuest__dsp_chat_x                                     0x140109260 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402A3AB0
#define CEverQuest__Emote_x                                        0x140279510
#define CEverQuest__GetBodyTypeDesc_x                              0x14027A2F0
#define CEverQuest__GetClassDesc_x                                 0x14027A350
#define CEverQuest__GetClassThreeLetterCode_x                      0x14027A720
#define CEverQuest__GetDeityDesc_x                                 0x14027A9D0
#define CEverQuest__GetLangDesc_x                                  0x14027AE00
#define CEverQuest__GetRaceDesc_x                                  0x14027B1A0
#define CEverQuest__InterpretCmd_x                                 0x14027CB30
#define CEverQuest__LeftClickedOnPlayer_x                          0x1402920F0
#define CEverQuest__LMouseUp_x                                     0x14027E5B0
#define CEverQuest__RightClickedOnPlayer_x                         0x14028F680
#define CEverQuest__RMouseUp_x                                     0x140288D40
#define CEverQuest__SetGameState_x                                 0x140294B70
#define CEverQuest__UPCNotificationFlush_x                         0x14029A4E0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14027E210
#define CEverQuest__ReportSuccessfulHeal_x                         0x14028A110
#define CEverQuest__ReportSuccessfulHit_x                          0x14028AF30

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403D4B20

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C3C50
#define CGuild__GetGuildName_x                                     0x1400C3C90

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403F8020

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402B5DB0
#define CHotButton__SetCheck_x                                     0x1402B6080

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140411C90
#define CInvSlotMgr__MoveItem_x                                    0x140412820
#define CInvSlotMgr__SelectSlot_x                                  0x140414B70

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x14040ECC0
#define CInvSlot__SliderComplete_x                                 0x1404102C0
#define CInvSlot__GetItemBase_x                                    0x14040A4B0
#define CInvSlot__UpdateItem_x                                     0x140410780

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x140416D60

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140438850
#define CItemDisplayWnd__UpdateStrings_x                           0x14043B460
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140434FF0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140436960
#define CItemDisplayWnd__RequestConvertItem_x                      0x140437C60

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x140503720
#define CSpellDisplayWnd__UpdateStrings_x                          0x1405054B0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x1405405D0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1404316B0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140156280

// CLabel
#define CLabel__UpdateText_x                                       0x140442850

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405B98D0
#define CListWnd__dCListWnd_x                                      0x1405B9D20
#define CListWnd__vftable_x                                        0x140ACE420
#define CListWnd__AddColumn_x                                      0x1405BA3C0
#define CListWnd__AddColumn1_x                                     0x1405BA460
#define CListWnd__AddLine_x                                        0x1405BA5C0
#define CListWnd__AddString_x                                      0x1405BAB50
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405BB0C0
#define CListWnd__CalculateVSBRange_x                              0x1405BB3A0
#define CListWnd__ClearSel_x                                       0x1405BB550
#define CListWnd__ClearAllSel_x                                    0x1405BB4F0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405BB5B0
#define CListWnd__Compare_x                                        0x1405BB770
#define CListWnd__Draw_x                                           0x1405BBC40
#define CListWnd__DrawColumnSeparators_x                           0x1405BC7F0
#define CListWnd__DrawHeader_x                                     0x1405BC8B0
#define CListWnd__DrawItem_x                                       0x1405BCF90
#define CListWnd__DrawLine_x                                       0x1405BD910
#define CListWnd__DrawSeparator_x                                  0x1405BDDD0
#define CListWnd__EnableLine_x                                     0x1405BE1F0
#define CListWnd__EnsureVisible_x                                  0x1405BE250
#define CListWnd__ExtendSel_x                                      0x1405BE350
#define CListWnd__GetColumnMinWidth_x                              0x1405BE6E0
#define CListWnd__GetColumnWidth_x                                 0x1405BE760
#define CListWnd__GetCurSel_x                                      0x1405BE860
#define CListWnd__GetItemData_x                                    0x1405BEBE0
#define CListWnd__GetItemHeight_x                                  0x1405BEC20
#define CListWnd__GetItemRect_x                                    0x1405BEE40
#define CListWnd__GetItemText_x                                    0x1405BF0E0
#define CListWnd__GetSelList_x                                     0x1405BF330
#define CListWnd__GetSeparatorRect_x                               0x1405BF520
#define CListWnd__InsertLine_x                                     0x1405C0980
#define CListWnd__RemoveLine_x                                     0x1405C0FF0
#define CListWnd__SetColors_x                                      0x1405C13B0
#define CListWnd__SetColumnJustification_x                         0x1405C13D0
#define CListWnd__SetColumnLabel_x                                 0x1405C1450
#define CListWnd__SetColumnWidth_x                                 0x1405C15F0
#define CListWnd__SetCurSel_x                                      0x1405C16C0
#define CListWnd__SetItemColor_x                                   0x1405C1930
#define CListWnd__SetItemData_x                                    0x1405C19D0
#define CListWnd__SetItemText_x                                    0x1405C1C10
#define CListWnd__Sort_x                                           0x1405C2020
#define CListWnd__ToggleSel_x                                      0x1405C2190
#define CListWnd__SetColumnsSizable_x                              0x1405C1640
#define CListWnd__SetItemWnd_x                                     0x1405C1D40
#define CListWnd__GetItemWnd_x                                     0x1405BF2C0
#define CListWnd__SetItemIcon_x                                    0x1405C1A10
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405BAE90
#define CListWnd__SetVScrollPos_x                                  0x1405C1F80

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140455D70

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A33328
#define MapViewMap__Clear_x                                        0x1404578F0
#define MapViewMap__SetZoom_x                                      0x14045DF40
#define MapViewMap__HandleLButtonDown_x                            0x14045AA80

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14047F770  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140486010
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x1404867F0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14048A0E0
#define CMerchantWnd__SelectBuySellSlot_x                          0x140489430
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14048E4E0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14067C010
#define CPacketScrambler__hton_x                                   0x14067C000

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405E2A70
#define CSidlManagerBase__FindAnimation1_x                         0x1405E29B0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405E30A0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405E2E50
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405E1DB0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405E1D40
#define CSidlManagerBase__CreateXWnd_x                             0x1405E1380

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404F66B0
#define CSidlManager__CreateXWnd_x                                 0x1404F6870

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405A7450
#define CSidlScreenWnd__CalculateVSBRange_x                        0x1405A7580
#define CSidlScreenWnd__ConvertToRes_x                             0x1405F1C40 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x1405A7700
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x1405A6B80
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x1405A6C50
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1405A6E60
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1405A7DE0
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405A8010
#define CSidlScreenWnd__GetChildItem_x                             0x1405A81B0
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405A8400
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405B24D0 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405A8770
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405A8AE0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405A93A0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405A9DA0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F1DD38
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405AA430
#define CSidlScreenWnd__StoreIniVis_x                              0x1405AAC20
#define CSidlScreenWnd__vftable_x                                  0x140ACD6A8
#define CSidlScreenWnd__WndNotification_x                          0x1405AAC70

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x140331320 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140331640 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x140331570
#define CSkillMgr__IsActivatedSkill_x                              0x140331A00
#define CSkillMgr__IsCombatSkill_x                                 0x140331A40
#define CSkillMgr__GetSkillTimerDuration_x                         0x140331970
#define CSkillMgr__GetSkillLastUsed_x                              0x1403315C0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405C2B10
#define CSliderWnd__SetValue_x                                     0x1405C3320
#define CSliderWnd__SetNumTicks_x                                  0x1405C31A0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404FCE50

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405C7AC0
#define CStmlWnd__CalculateHSBRange_x                              0x1405B1EA0
#define CStmlWnd__CalculateVSBRange_x                              0x1405C89E0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405C9460
#define CStmlWnd__ForceParseNow_x                                  0x1405C9500
#define CStmlWnd__GetVisibleText_x                                 0x1405C9BD0
#define CStmlWnd__MakeStmlColorTag_x                               0x1405CB930
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405CB970
#define CStmlWnd__SetSTMLText_x                                    0x1405D2940
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405D2AF0
#define CStmlWnd__UpdateHistoryString_x                            0x1405D2E80

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405C36F0
#define CTabWnd__DrawCurrentPage_x                                 0x1405C3790
#define CTabWnd__DrawTab_x                                         0x1405C3B60
#define CTabWnd__GetTabRect_x                                      0x1405C41D0
#define CTabWnd__InsertPage_x                                      0x1405C44A0
#define CTabWnd__RemovePage_x                                      0x1405C4730
#define CTabWnd__SetPage_x                                         0x1405C4890
#define CTabWnd__UpdatePage_x                                      0x1405C4B90

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405EBD30
#define CPageWnd__SetTabText_x                                     0x1405EBDA0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BD1F0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BD600


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405DA470
#define CTextureFont__DrawWrappedText1_x                           0x1405DA380
#define CTextureFont__DrawWrappedText2_x                           0x1405DA5A0
#define CTextureFont__GetTextExtent_x                              0x1405DA950
#define CTextureFont__GetHeight_x                                  0x1405DA910

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405F03A0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405A4050

// CXStr
#define CXStr__gFreeLists_x                                        0x140D4CFB0
#define CXStr__gCXStrAccess_x                                      0x140F1D898

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405AD4F0
#define CXWnd__ClrFocus_x                                          0x1405AD7E0
#define CXWnd__Destroy_x                                           0x1405AD960
#define CXWnd__DoAllDrawing_x                                      0x1405ADA70
#define CXWnd__DrawColoredRect_x                                   0x1405AE240
#define CXWnd__DrawTooltip_x                                       0x1405AF8C0
#define CXWnd__DrawTooltipAtPoint_x                                0x1405AF970
#define CXWnd__GetChildItem_x                                      0x1405B0270
#define CXWnd__GetChildWndAt_x                                     0x1405B0330
#define CXWnd__GetClientRect_x                                     0x1405B05F0
#define CXWnd__GetClientClipRect_x                                 0x1405B04A0
#define CXWnd__GetRelativeRect_x                                   0x1405B1FE0
#define CXWnd__GetScreenClipRect_x                                 0x1405B20E0
#define CXWnd__GetScreenRect_x                                     0x1405B2250
#define CXWnd__GetTooltipRect_x                                    0x1405B23D0
#define CXWnd__IsActive_x                                          0x1405B2990
#define CXWnd__IsDescendantOf_x                                    0x1405B29C0
#define CXWnd__IsReallyVisible_x                                   0x1405B2A30
#define CXWnd__IsType_x                                            0x1405B2A80
#define CXWnd__Minimize_x                                          0x1405B2B80
#define CXWnd__ProcessTransition_x                                 0x1405B3A40
#define CXWnd__Resize_x                                            0x1405B3B50
#define CXWnd__Right_x                                             0x1405B3BF0
#define CXWnd__SetFocus_x                                          0x1405B3FB0
#define CXWnd__SetFont_x                                           0x1405B4000
#define CXWnd__SetKeyTooltip_x                                     0x1405B4110
#define CXWnd__SetMouseOver_x                                      0x1405B4250
#define CXWnd__SetParent_x                                         0x1405B42D0
#define CXWnd__StartFade_x                                         0x1405B4710
#define CXWnd__vftable_x                                           0x140ACDC80
#define CXWnd__CXWnd_x                                             0x1405AC090
#define CXWnd__dCXWnd_x                                            0x1405AC9E0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405F6E80

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405D4760
#define CXWndManager__DrawCursor_x                                 0x1405D4A40
#define CXWndManager__DrawWindows_x                                0x1405D4CA0
#define CXWndManager__GetKeyboardFlags_x                           0x1405D52F0
#define CXWndManager__HandleKeyboardMsg_x                          0x1405D5330
#define CXWndManager__RemoveWnd_x                                  0x1405D8B30

// CDBStr
#define CDBStr__GetString_x                                        0x14018DE50

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x140685E70

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D20C0
#define CCharacterListWnd__EnterWorld_x                            0x1400D10D0
#define CCharacterListWnd__Quit_x                                  0x1400D20A0
#define CCharacterListWnd__UpdateList_x                            0x1400D2F20

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x1406535C0
#define ItemBase__CreateItemTagString_x                            0x140654060
#define ItemBase__GetImageNum_x                                    0x140656750
#define ItemBase__GetItemValue_x                                   0x140658290
#define ItemBase__IsEmpty_x                                        0x140659FA0
#define ItemBase__IsKeyRingItem_x                                  0x14065A6C0
#define ItemBase__ValueSellMerchant_x                              0x14065E920
#define ItemClient__CanDrop_x                                      0x1402B86C0
#define ItemClient__CanGoInBag_x                                   0x1402B87F0
#define ItemClient__CreateItemClient_x                             0x1402B8A80
#define ItemClient__dItemClient_x                                  0x1402B8530

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401AD6E0
#define EQ_LoadingS__Array_x                                       0x140D39240

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14066A990
#define PcBase__GetCombatAbility_x                                 0x14066B080
#define PcBase__GetCombatAbilityTimer_x                            0x14066B120
#define PcBase__GetItemContainedRealEstateIds_x                    0x14066B8C0
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14066C340
#define PcClient__AlertInventoryChanged_x                          0x1402DB870
#define PcClient__GetConLevel_x                                    0x1402DBFC0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402DE750
#define PcClient__HasLoreItem_x                                    0x1402DF790
#define PcZoneClient__GetItemRecastTimer_x                         0x1402EC010
#define PcZoneClient__RemoveMyAffect_x                             0x1402EF500

// EQGroundItemListManager
#define EQGroundItem__EQGroundItem_x                               0x140221610
#define EQGroundItemListManager__Add_x                             0x1402217C0
#define EQGroundItemListManager__Clear_x                           0x140221860
#define EQGroundItemListManager__Delete_x                          0x140221920
#define EQGroundItemListManager__Instance_x                        0x1402219B0

// EQPlacedItemManager
#define EQPlacedItemManager__Add_x                                 0x14025C4D0

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140188680

// PlayerClient
#define PlayerBase__CanSee_x                                       0x14063F6A0
#define PlayerBase__CanSee1_x                                      0x14063F770
#define PlayerBase__GetVisibilityLineSegment_x                     0x14063FC50
#define PlayerBase__HasProperty_x                                  0x14063FE20
#define PlayerBase__IsTargetable_x                                 0x14063FEE0
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402FD1A0
#define PlayerClient__GetPcClient_x                                0x1402FFCD0
#define PlayerClient__PlayerClient_x                               0x1402F54E0
#define PlayerClient__SetNameSpriteState_x                         0x140303400
#define PlayerClient__SetNameSpriteTint_x                          0x1403043C0
#define PlayerZoneClient__ChangeHeight_x                           0x140312EB0
#define PlayerZoneClient__DoAttack_x                               0x140313BC0
#define PlayerZoneClient__GetLevel_x                               0x1403172F0
#define PlayerZoneClient__IsValidTeleport_x                        0x14025F270
#define PlayerZoneClient__LegalPlayerRace_x                        0x14019C250

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x14030C3B0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x14030C460  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x14030C560
#define PlayerManagerClient__CreatePlayer_x                        0x14030BE80
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x14063F260

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402BDC20
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402BD550
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402BD5C0
#define KeypressHandler__ClearCommandStateArray_x                  0x1402BDBB0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402BDD40
#define KeypressHandler__HandleKeyUp_x                             0x1402BDE60
#define KeypressHandler__SaveKeymapping_x                          0x1402BDA40  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140683990  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x14067D750

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402E5850  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402EA130
#define PcZoneClient__GetPcSkillLimit_x                            0x1402ED100
#define PcZoneClient__RemovePetEffect_x                            0x1402EF7E0
#define PcZoneClient__HasAlternateAbility_x                        0x1402EDCF0
#define PcZoneClient__CanEquipItem_x                               0x1402E8420
#define PcZoneClient__GetItemByID_x                                0x1402EB060
#define PcZoneClient__RemoveBuffEffect_x                           0x1402EF380
#define PcZoneClient__BandolierSwap_x                              0x1402DB920

// Doors
#define EQSwitch__UseSwitch_x                                      0x140263DA0

// IconCache
#define IconCache__GetIcon_x                                       0x1403C9C70

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403BE0B0
#define CContainerMgr__CloseContainer_x                            0x1403BD9D0
#define CContainerMgr__OpenExperimentContainer_x                   0x1403BE430

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404BA290

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402AFFA0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140449B80
#define CLootWnd__RequestLootSlot_x                                0x14044ABD0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401DD130
#define EQ_Spell__SpellAffects_x                                   0x1401DE410
#define EQ_Spell__SpellAffectBase_x                                0x1401DE370
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400DAFF0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400DAFA0
#define EQ_Spell__IsSPAStacking_x                                  0x1401DE040
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401DDBF0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401DD4B0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C2790

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1405174F0
#define CTargetWnd__RefreshTargetBuffs_x                           0x140516C00
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x140516400

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x14051EB90  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140185030
#define CTaskManager__GetTaskStatus_x                              0x140185140
#define CTaskManager__GetElementDescription_x                      0x140184CC0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401DB450
#define EqSoundManager__PlayScriptMp3_x                            0x1401DA290
#define EqSoundManager__SoundAssistPlay_x                          0x140336760  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140336AA0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405B54E0
#define CTextureAnimation__SetCurCell_x                            0x1405B57F0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402AE1A0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x14069E710
#define CharacterBase__GetItemByGlobalIndex1_x                     0x14069E790
#define CharacterBase__IsExpansionFlag_x                           0x140200AC0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140398F00
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140399970
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x14039AEC0

// messages
#define msg_spell_worn_off_x                                       0x140217B50
#define msg_new_text_x                                             0x140213310
#define __msgTokenTextParam_x                                      0x14020A800
#define msgTokenText_x                                             0x14020A710

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140338390
#define SpellManager__GetSpellByGroupAndRank_x                     0x1403382B0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x14064EC00

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140442FA0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403C2E10
#define CCursorAttachment__IsOkToActivate_x                        0x1403C62B0
#define CCursorAttachment__RemoveAttachment_x                      0x1403C6560
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405EE840
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405EEA30
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405EEA40

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140150B90
#define CFindItemWnd__Update_x                                     0x140151530
#define CFindItemWnd__PickupSelectedItem_x                         0x14014A4C0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14015B350
#define LootFiltersManager__GetItemFilterData_x                    0x14015BE70
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14015C710
#define LootFiltersManager__SetItemLootFilter_x                    0x14015C9C0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14049CB30

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x140330EE0
#define CResolutionHandler__UpdateResolution_x                     0x14059AA00

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403BA360

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406A2BB0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406A2AA0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403E0EA0
#define CGroupWnd__UpdateDisplay_x                                 0x1403E0A80

// ItemBase
#define ItemBase__IsLore_x                                         0x14065A800
#define ItemBase__IsLoreEquipped_x                                 0x14065A890

#define MultipleItemMoveManager__ProcessMove_x                     0x1402D1410

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14025C630
#define EQPlacedItemManager__GetItemByGuid_x                       0x14025C5C0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14025C600

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14032B300

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140127540
#define FactionManagerClient__HandleFactionMessage_x               0x140127920
#define FactionManagerClient__GetFactionStanding_x                 0x140126D10
#define FactionManagerClient__GetMaxFaction_x                      0x140126D10
#define FactionManagerClient__GetMinFaction_x                      0x140126BC0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AF7F0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140132D20

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401B62B0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401B5470
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401B60D0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401B6050  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x14033D640

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14032B300

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405AB260

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140086E70

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14034EF40

// AchievementManager
#define AchievementManager__Instance_x                             0x14008F190

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x1406869F0
#define FreeToPlayClient__RestrictionInfo_x                        0x140AE2600

// UdpConnection
#define UdpConnection__GetStats_x                                  0x14054D690

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x140839058
#define CGFScreenWnd__CGFScreenWnd_x                               0x140071550
#define CGFScreenWnd__CGFScreenWnd1_x                              0x1400716E0
#define CGFScreenWnd__dCGFScreenWnd_x                              0x140071890

#if __has_include("../../../../private/eqgame-private.h")
#include "../../../../private/eqgame-private.h"
#endif
