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

#define __ClientDate                                               20260116u
#define __ExpectedVersionDate                                     "Jan 16 2026"
#define __ExpectedVersionTime                                     "18:05:26"
#define __ActualVersionDate_x                                      0x140979968
#define __ActualVersionTime_x                                      0x140979958
#define __ActualVersionBuild_x                                     0x14090EAF0

// Memory Protection
#define __MemChecker0_x                                            0x1402C7CF0
#define __MemChecker1_x                                            0x140598D70
#define __MemChecker4_x                                            0x140295620
#define __EncryptPad0_x                                            0x140D4BFA0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E84AB0
#define instEQZoneInfo_x                                           0x140E84CA4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x140228BE0
#define __gfMaxZoomCameraDistance_x                                0x14090FDA8
#define __gfMaxCameraDistance_x                                    0x140AB9C14
#define __CurrentSocial_x                                          0x140C079BC // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D43790
#define g_eqCommandStates_x                                        0x140D44830
#define __CommandList_x                                            0x140D44A60
#define __ScreenMode_x                                             0x140DCC514
#define __gWorld_x                                                 0x140E7F558
#define __gpbCommandEvent_x                                        0x140E7D028
#define __ServerHost_x                                             0x140E7D208
#define __Guilds_x                                                 0x140E83660
#define __MemCheckBitmask_x                                        0x140E84FEF
#define __MemCheckActive_x                                         0x140E8670D
#define __MouseEventTime_x                                         0x140EFA080
#define DI8__MouseState_x                                          0x140EFE238
#define __heqmain_x                                                0x140F006C8
#define DI8__Mouse_x                                               0x140F006E0
#define __HWnd_x                                                   0x140F006E8
#define __Mouse_x                                                  0x140F006F0
#define DI8__Keyboard_x                                            0x140F00710
#define __LoginName_x                                              0x140F00E7C
#define __CurrentMapLabel_x                                        0x140F14990
#define __LabelCache_x                                             0x140F15560
#define __ChatFilterDefs_x                                         0x140A53AA0
#define Teleport_Table_Size_x                                      0x140E7D0B0
#define Teleport_Table_x                                           0x140E7D530

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E7F9F0
#define pinstActiveBanker_x                                        0x140E7CF60
#define pinstActiveCorpse_x                                        0x140E7CF50
#define pinstActiveGMaster_x                                       0x140E7CF58
#define pinstActiveMerchant_x                                      0x140E7CF48
#define pinstAltAdvManager_x                                       0x140DCD200
#define pinstCEverQuest_x                                          0x140F00728
#define pinstCamActor_x                                            0x140DCC500
#define pinstCDBStr_x                                              0x140DCBFB0
#define pinstCDisplay_x                                            0x140E7D010
#define pinstControlledPlayer_x                                    0x140E7CFF0
#define pinstCResolutionHandler_x                                  0x140F25D98
#define pinstCSidlManager_x                                        0x140F26B00
#define pinstCXWndManager_x                                        0x140F26AF8
#define instDynamicZone_x                                          0x140E83520 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E8356E
#define instExpeditionName_x                                       0x140E835AE
#define pinstDZMember_x                                            0x140E83638
#define pinstDZTimerInfo_x                                         0x140E83640
#define pinstEqLogin_x                                             0x140F007C0
#define instTribute_x                                              0x140D3EDC0
#define pinstDeviceInputProxy_x                                    0x140E84B0C
#define pinstEQSoundManager_x                                      0x140DCD580
#define pinstEQSpellStrings_x                                      0x140DB0B40
#define pinstSGraphicsEngine_x                                     0x140F25B28
#define pinstLocalPC_x                                             0x140E7F568
#define pinstLocalPlayer_x                                         0x140E7CF40
#define pinstCMercenaryClientManager_x                             0x140EFB9A8
#define pinstModelPlayer_x                                         0x140E7CF70
#define pinstRenderInterface_x                                     0x140F25B40
#define pinstSkillMgr_x                                            0x140EFD658
#define pinstSpawnManager_x                                        0x140EFBD60
#define pinstSpellManager_x                                        0x140EFD6C0
#define pinstStringTable_x                                         0x140E7F5E0
#define pinstSwitchManager_x                                       0x140E7CEB0
#define pinstTarget_x                                              0x140E7CFE8
#define pinstTaskMember_x                                          0x140D3EDB0 // Part of g_taskManager
#define pinstTradeTarget_x                                         0x140E7CF68
#define instTributeActive_x                                        0x140D3EDE9
#define pinstViewActor_x                                           0x140DCC4F8
#define pinstWorldData_x                                           0x140E7CF38
#define pinstPlayerPath_x                                          0x140EFBD88
#define pinstTargetIndicator_x                                     0x140EFD770
#define EQObject_Top_x                                             0x140E7D018

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140F11AF0
#define pinstCContainerMgr_x                                       0x140DCC5A0
#define pinstCContextMenuManager_x                                 0x140F267E0
#define pinstCInvSlotMgr_x                                         0x140DCC580
#define pinstCItemDisplayManager_x                                 0x140F14560
#define pinstCPopupWndManager_x                                    0x140F14DF0
#define pinstCSpellDisplayMgr_x                                    0x140F15440
#define pinstCTaskManager_x                                        0x140C07CF0
#define pinstEQSuiteTextureLoader_x                                0x140D556C0
#define pinstItemIconCache_x                                       0x140F11E50
#define pinstLootFiltersManager_x                                  0x140DCB9F8
#define pinstGFViewListener_x                                      0x140F25FB8


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x140252EA0
#define __CastRay_x                                                0x14024B090
#define __CastRay2_x                                               0x14024AD90
#define __compress_block_x                                         0x14054E100
#define __ConvertItemTags_x                                        0x14024B4F0
#define __CleanItemTags_x                                          0x14008A7C0
#define __CreateCascadeMenuItems_x                                 0x140192CC0
#define __decompress_block_x                                       0x140594550
#define __DoesFileExist_x                                          0x14059CC30
#define __EQGetTime_x                                              0x140599320
#define __ExecuteCmd_x                                             0x140220170
#define __FixHeading_x                                             0x140653C30
#define __FlushDxKeyboard_x                                        0x14034C430
#define __get_bearing_x                                            0x1402550D0
#define __get_melee_range_x                                        0x1402551C0
#define __GetAnimationCache_x                                      0x1403CFBE0
#define __GetGaugeValueFromEQ_x                                    0x14050D920
#define __GetLabelFromEQ_x                                         0x14050EF10
#define __GetXTargetType_x                                         0x140655E30   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140653CB0
#define __HelpPath_x                                               0x140EF9F48   // Why?
#define __NewUIINI_x                                               0x14051A950   // Why?
#define __ProcessDeviceEvents_x                                    0x140295C30
#define __ProcessGameEvents_x                                      0x14028A630
#define __ProcessKeyboardEvents_x                                  0x14034DB80
#define __ProcessMouseEvents_x                                     0x14028BD80
#define __SaveColors_x                                             0x1401A2BB0
#define __STMLToText_x                                             0x1405ACAB0
#define __WndProc_x                                                0x14034ABD0
#define CMemoryMappedFile__SetFile_x                               0x140802580
#define DrawNetStatus_x                                            0x1402D7190
#define Util__FastTime_x                                           0x140598820
#define __eq_delete_x                                              0x1406CE528
#define __eq_new_x                                                 0x1406CE780
#define __CopyLayout_x                                             0x1402C40F0
#define __ThrottleFrameRate_x                                      0x140279917
#define __ThrottleFrameRateEnd_x                                   0x14027991D

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x14035D3E0
#define CAAWnd__Update_x                                           0x14035D6E0
#define CAAWnd__UpdateSelected_x                                   0x14035E8E0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AE7D0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A71B0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x14085AA10
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AF100

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401ADE80
#define AltAdvManager__IsAbilityReady_x                            0x1401AE320
#define AltAdvManager__GetAAById_x                                 0x1401AD720
#define AltAdvManager__CanTrainAbility_x                           0x1401AD520
#define AltAdvManager__CanSeeAbility_x                             0x1401AD1D0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D5FA0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D6E60
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D70B0
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400EB3F0
#define CharacterZoneClient__CanUseItem_x                          0x1400EB9B0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D7A80
#define CharacterZoneClient__CastSpell_x                           0x1400D7B20
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E78B0
#define CharacterZoneClient__Cur_HP_x                              0x1400ED0F0
#define CharacterZoneClient__Cur_Mana_x                            0x1400ED2B0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400DAD90
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F39D0
#define CharacterZoneClient__GetBaseSkill_x                        0x140101F20  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400DC230
#define CharacterZoneClient__GetCurrentMod_x                       0x1400EACF0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F5260
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F4150
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400DC3B0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400CBB50
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400CDA20
#define CharacterZoneClient__GetHPRegen_x                          0x1400F4880
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400ECD40
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F3A70
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400DC430
#define CharacterZoneClient__GetManaRegen_x                        0x1400F60F0
#define CharacterZoneClient__GetModCap_x                           0x1400FD6D0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400DC6C0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400DC890
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400D10B0
#define CharacterZoneClient__HasSkill_x                            0x1400F9210
#define CharacterZoneClient__HitBySpell_x                          0x1400DD320
#define CharacterZoneClient__IsStackBlocked_x                      0x1400E0CF0
#define CharacterZoneClient__MakeMeVisible_x                       0x1400FD1B0
#define CharacterZoneClient__Max_Endurance_x                       0x1402F1F90  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400FD500
#define CharacterZoneClient__Max_Mana_x                            0x1402F21B0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400FD960
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E4360
#define CharacterZoneClient__SpellDuration_x                       0x1400E5090
#define CharacterZoneClient__TotalEffect_x                         0x1400E6480
#define CharacterZoneClient__UseSkill_x                            0x140102EA0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x14037DAA0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x1403886F0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140384510
#define CBarterSearchWnd__UpdateInventoryList_x                    0x140388170

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14038AE60

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AD9590

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403ADD40
#define CChatWindowManager__InitContextMenu_x                      0x1403ADED0
#define CChatWindowManager__FreeChatWindow_x                       0x1403ACD90
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403B5E90
#define CChatWindowManager__CreateChatWindow_x                     0x1403AC7C0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x14010B430

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403B6EE0
#define CChatWindow__Clear_x                                       0x1403B7EA0
#define CChatWindow__WndNotification_x                             0x1403B9090
#define CChatWindow__AddHistory_x                                  0x1403B79A0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405DA310
#define CContextMenu__RemoveMenuItem_x                             0x1405DA700
#define CContextMenu__RemoveAllMenuItems_x                         0x1405DA6D0
#define CContextMenu__CheckMenuItem_x                              0x1405DA540
#define CContextMenu__SetMenuItem_x                                0x1405DA720
#define CContextMenu__AddSeparator_x                               0x1405DA480

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405CC1D0
#define CContextMenuManager__RemoveMenu_x                          0x1405CC7B0
#define CContextMenuManager__PopupMenu_x                           0x1405CC4F0
#define CContextMenuManager__Flush_x                               0x1405CC250
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403C7570

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1406A82B0
#define CChatService__GetFriendName_x                              0x1406A82C0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405BD0B0
#define CComboWnd__Draw_x                                          0x1405BD1B0
#define CComboWnd__GetCurChoice_x                                  0x1405BD490  // unused
#define CComboWnd__GetListRect_x                                   0x1405BD530
#define CComboWnd__InsertChoice_x                                  0x1405BD870
#define CComboWnd__SetColors_x                                     0x1405BDC00
#define CComboWnd__SetChoice_x                                     0x1405BDBC0
#define CComboWnd__GetItemCount_x                                  0x1405BD520
#define CComboWnd__GetCurChoiceText_x                              0x1405BD4D0  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405BD460
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405BD930

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403C5270
#define CContainerWnd__SetContainer_x                              0x1404213E0
#define CContainerWnd__vftable_x                                   0x1409EE8B8

// CDisplay
#define CDisplay__cameraType_x                                     0x140DCC214
#define CDisplay__ZoneMainUI_x                                     0x1405F4660
#define CDisplay__PreZoneMainUI_x                                  0x14019FAB0
#define CDisplay__CleanGameUI_x                                    0x140191D80
#define CDisplay__GetClickedActor_x                                0x140195F40
#define CDisplay__GetUserDefinedColor_x                            0x140196BB0
#define CDisplay__InitCharSelectUI_x                               0x140196E60
#define CDisplay__ReloadUI_x                                       0x1401A1DB0
#define CDisplay__RestartUI_x                                      0x140204710
#define CDisplay__WriteTextHD2_x                                   0x1401A8DC0
#define CDisplay__TrueDistance_x                                   0x1401A8A70
#define CDisplay__SetViewActor_x                                   0x1401A52E0
#define CDisplay__GetFloorHeight_x                                 0x1401961A0
#define CDisplay__ToggleScreenshotMode_x                           0x1401A8560
#define CDisplay__RealRender_World_x                               0x1401A1180

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405FE890
#define CEditWnd__DrawCaret_x                                      0x1405F0350  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405F0810
#define CEditWnd__GetCaretPt_x                                     0x1405F0A90  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405F0AD0
#define CEditWnd__GetDisplayString_x                               0x1405F0D40
#define CEditWnd__GetHorzOffset_x                                  0x1405F0F80
#define CEditWnd__GetLineForPrintableChar_x                        0x1405F10D0
#define CEditWnd__GetSelStartPt_x                                  0x1405F13B0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405F1200
#define CEditWnd__PointFromPrintableChar_x                         0x1405F1F60
#define CEditWnd__ReplaceSelection_x                               0x1405F2310
#define CEditWnd__SelectableCharFromPoint_x                        0x1405F27B0
#define CEditWnd__SetEditable_x                                    0x1405F2A40
#define CEditWnd__SetWindowText_x                                  0x1405F2A70

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14027A9E0
#define CEverQuest__ClickedPlayer_x                                0x14026EBD0
#define CEverQuest__CreateTargetIndicator_x                        0x14026F490
#define CEverQuest__DoTellWindow_x                                 0x14010B140 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x14010BA20 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14027C3D0
#define CEverQuest__dsp_chat_x                                     0x14010AB80 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402A76E0
#define CEverQuest__Emote_x                                        0x14027CDC0
#define CEverQuest__GetBodyTypeDesc_x                              0x14027DBA0
#define CEverQuest__GetClassDesc_x                                 0x14027DC00
#define CEverQuest__GetClassThreeLetterCode_x                      0x14027DFD0
#define CEverQuest__GetDeityDesc_x                                 0x14027E280
#define CEverQuest__GetLangDesc_x                                  0x14027E6B0
#define CEverQuest__GetRaceDesc_x                                  0x14027EA50
#define CEverQuest__InterpretCmd_x                                 0x140280690
#define CEverQuest__LeftClickedOnPlayer_x                          0x140295CA0
#define CEverQuest__LMouseUp_x                                     0x140282110
#define CEverQuest__RightClickedOnPlayer_x                         0x140293250
#define CEverQuest__RMouseUp_x                                     0x14028C910
#define CEverQuest__SetGameState_x                                 0x140298720
#define CEverQuest__UPCNotificationFlush_x                         0x14029E0A0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140281D70
#define CEverQuest__ReportSuccessfulHeal_x                         0x14028DCE0
#define CEverQuest__ReportSuccessfulHit_x                          0x14028EB00

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403DAB40

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C5350
#define CGuild__GetGuildName_x                                     0x1400C5390

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403FDFC0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402B9790
#define CHotButton__SetCheck_x                                     0x1402B9A60

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140417F80
#define CInvSlotMgr__MoveItem_x                                    0x140418B10
#define CInvSlotMgr__SelectSlot_x                                  0x14041AE60

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x140414D50
#define CInvSlot__SliderComplete_x                                 0x140416580
#define CInvSlot__GetItemBase_x                                    0x1404103B0
#define CInvSlot__UpdateItem_x                                     0x140416A40

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x14041D070

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x14043EA20
#define CItemDisplayWnd__UpdateStrings_x                           0x1404416D0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x14043B230
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x14043CB30
#define CItemDisplayWnd__RequestConvertItem_x                      0x14043DE30

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x14050A390
#define CSpellDisplayWnd__UpdateStrings_x                          0x14050C120

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140547460

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1404378F0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140157E20

// CLabel
#define CLabel__UpdateText_x                                       0x140448AC0

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405C0A40
#define CListWnd__dCListWnd_x                                      0x1405C0E90
#define CListWnd__vftable_x                                        0x140AD76E0
#define CListWnd__AddColumn_x                                      0x1405C1530
#define CListWnd__AddColumn1_x                                     0x1405C15D0
#define CListWnd__AddLine_x                                        0x1405C1730
#define CListWnd__AddString_x                                      0x1405C1CC0
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405C2230
#define CListWnd__CalculateVSBRange_x                              0x1405C2510
#define CListWnd__ClearSel_x                                       0x1405C26C0
#define CListWnd__ClearAllSel_x                                    0x1405C2660
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405C2720
#define CListWnd__Compare_x                                        0x1405C28E0
#define CListWnd__Draw_x                                           0x1405C2DB0
#define CListWnd__DrawColumnSeparators_x                           0x1405C3960
#define CListWnd__DrawHeader_x                                     0x1405C3A20
#define CListWnd__DrawItem_x                                       0x1405C4100
#define CListWnd__DrawLine_x                                       0x1405C4A80
#define CListWnd__DrawSeparator_x                                  0x1405C4F40
#define CListWnd__EnableLine_x                                     0x1405C5360
#define CListWnd__EnsureVisible_x                                  0x1405C53C0
#define CListWnd__ExtendSel_x                                      0x1405C54C0
#define CListWnd__GetColumnMinWidth_x                              0x1405C5850
#define CListWnd__GetColumnWidth_x                                 0x1405C58D0
#define CListWnd__GetCurSel_x                                      0x1405C59D0
#define CListWnd__GetItemData_x                                    0x1405C5D50
#define CListWnd__GetItemHeight_x                                  0x1405C5D90
#define CListWnd__GetItemRect_x                                    0x1405C5FB0
#define CListWnd__GetItemText_x                                    0x1405C6250
#define CListWnd__GetSelList_x                                     0x1405C64A0
#define CListWnd__GetSeparatorRect_x                               0x1405C6690
#define CListWnd__InsertLine_x                                     0x1405C7B00
#define CListWnd__RemoveLine_x                                     0x1405C8170
#define CListWnd__SetColors_x                                      0x1405C8530
#define CListWnd__SetColumnJustification_x                         0x1405C8550
#define CListWnd__SetColumnLabel_x                                 0x1405C85D0
#define CListWnd__SetColumnWidth_x                                 0x1405C8770
#define CListWnd__SetCurSel_x                                      0x1405C8840
#define CListWnd__SetItemColor_x                                   0x1405C8AB0
#define CListWnd__SetItemData_x                                    0x1405C8B50
#define CListWnd__SetItemText_x                                    0x1405C8D90
#define CListWnd__Sort_x                                           0x1405C91A0
#define CListWnd__ToggleSel_x                                      0x1405C9310
#define CListWnd__SetColumnsSizable_x                              0x1405C87C0
#define CListWnd__SetItemWnd_x                                     0x1405C8EC0
#define CListWnd__GetItemWnd_x                                     0x1405C6430
#define CListWnd__SetItemIcon_x                                    0x1405C8B90
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405C2000
#define CListWnd__SetVScrollPos_x                                  0x1405C9100

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x14045BFF0

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A3C2C8
#define MapViewMap__Clear_x                                        0x14045DB70
#define MapViewMap__SetZoom_x                                      0x1404641C0
#define MapViewMap__HandleLButtonDown_x                            0x140460D00

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x1404859D0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x14048C300
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x14048CAE0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x1404903C0
#define CMerchantWnd__SelectBuySellSlot_x                          0x14048F710
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x1404947F0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x140683880
#define CPacketScrambler__hton_x                                   0x140683870

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405E9C10
#define CSidlManagerBase__FindAnimation1_x                         0x1405E9B50
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405EA240
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405E9FF0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405E8F50
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405E8EE0
#define CSidlManagerBase__CreateXWnd_x                             0x1405E8540

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404FD2E0
#define CSidlManager__CreateXWnd_x                                 0x1404FD4A0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405AE5A0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x1405AE6B0
#define CSidlScreenWnd__ConvertToRes_x                             0x1405F8DC0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x1405AE830
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x1405ADCD0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x1405ADDA0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1405ADFB0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1405AEF20
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405AF150
#define CSidlScreenWnd__GetChildItem_x                             0x1405AF2F0
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405AF540
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405B9620 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405AF8B0
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405AFC20
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405B04E0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405B0EE0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F25E58
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405B1560
#define CSidlScreenWnd__StoreIniVis_x                              0x1405B1D50
#define CSidlScreenWnd__vftable_x                                  0x140AD6968
#define CSidlScreenWnd__WndNotification_x                          0x1405B1DA0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x140335490 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x1403357B0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x1403356E0
#define CSkillMgr__IsActivatedSkill_x                              0x140335B70
#define CSkillMgr__IsCombatSkill_x                                 0x140335BB0
#define CSkillMgr__GetSkillTimerDuration_x                         0x140335AE0
#define CSkillMgr__GetSkillLastUsed_x                              0x140335730

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405C9C80
#define CSliderWnd__SetValue_x                                     0x1405CA490
#define CSliderWnd__SetNumTicks_x                                  0x1405CA310

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x140503AC0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405CEC30
#define CStmlWnd__CalculateHSBRange_x                              0x1405B8FE0
#define CStmlWnd__CalculateVSBRange_x                              0x1405CFB50
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405D05D0
#define CStmlWnd__ForceParseNow_x                                  0x1405D0670
#define CStmlWnd__GetVisibleText_x                                 0x1405D0D40
#define CStmlWnd__MakeStmlColorTag_x                               0x1405D2AA0
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405D2AE0
#define CStmlWnd__SetSTMLText_x                                    0x1405D9AB0
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405D9C60
#define CStmlWnd__UpdateHistoryString_x                            0x1405D9FF0

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405CA860
#define CTabWnd__DrawCurrentPage_x                                 0x1405CA900
#define CTabWnd__DrawTab_x                                         0x1405CACD0
#define CTabWnd__GetTabRect_x                                      0x1405CB340
#define CTabWnd__InsertPage_x                                      0x1405CB610
#define CTabWnd__RemovePage_x                                      0x1405CB8A0
#define CTabWnd__SetPage_x                                         0x1405CBA00
#define CTabWnd__UpdatePage_x                                      0x1405CBD00

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405F2ED0
#define CPageWnd__SetTabText_x                                     0x1405F2F40

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BE8C0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BECD0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405E1600
#define CTextureFont__DrawWrappedText1_x                           0x1405E1510
#define CTextureFont__DrawWrappedText2_x                           0x1405E1730
#define CTextureFont__GetTextExtent_x                              0x1405E1AE0
#define CTextureFont__GetHeight_x                                  0x1405E1AA0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405F7520

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405AB190

// CXStr
#define CXStr__gFreeLists_x                                        0x140D55030
#define CXStr__gCXStrAccess_x                                      0x140F259B8

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405B4630
#define CXWnd__ClrFocus_x                                          0x1405B4920
#define CXWnd__Destroy_x                                           0x1405B4AA0
#define CXWnd__DoAllDrawing_x                                      0x1405B4BB0
#define CXWnd__DrawColoredRect_x                                   0x1405B5380
#define CXWnd__DrawTooltip_x                                       0x1405B69F0
#define CXWnd__DrawTooltipAtPoint_x                                0x1405B6AA0
#define CXWnd__GetChildItem_x                                      0x1405B73B0
#define CXWnd__GetChildWndAt_x                                     0x1405B7470
#define CXWnd__GetClientRect_x                                     0x1405B7730
#define CXWnd__GetClientClipRect_x                                 0x1405B75E0
#define CXWnd__GetRelativeRect_x                                   0x1405B9120
#define CXWnd__GetScreenClipRect_x                                 0x1405B9230
#define CXWnd__GetScreenRect_x                                     0x1405B93A0
#define CXWnd__GetTooltipRect_x                                    0x1405B9520
#define CXWnd__IsActive_x                                          0x1405B9AE0
#define CXWnd__IsDescendantOf_x                                    0x1405B9B10
#define CXWnd__IsReallyVisible_x                                   0x1405B9B80
#define CXWnd__IsType_x                                            0x1405B9BD0
#define CXWnd__Minimize_x                                          0x1405B9CD0
#define CXWnd__ProcessTransition_x                                 0x1405BABB0
#define CXWnd__Resize_x                                            0x1405BACD0
#define CXWnd__Right_x                                             0x1405BAD70
#define CXWnd__SetFocus_x                                          0x1405BB140
#define CXWnd__SetFont_x                                           0x1405BB190
#define CXWnd__SetKeyTooltip_x                                     0x1405BB290
#define CXWnd__SetMouseOver_x                                      0x1405BB3B0
#define CXWnd__SetParent_x                                         0x1405BB430
#define CXWnd__StartFade_x                                         0x1405BB880
#define CXWnd__vftable_x                                           0x140AD6F40
#define CXWnd__CXWnd_x                                             0x1405B31C0
#define CXWnd__dCXWnd_x                                            0x1405B3B10

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405FE010

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405DB8C0
#define CXWndManager__DrawCursor_x                                 0x1405DBBA0
#define CXWndManager__DrawWindows_x                                0x1405DBE00
#define CXWndManager__GetKeyboardFlags_x                           0x1405DC450
#define CXWndManager__HandleKeyboardMsg_x                          0x1405DC490
#define CXWndManager__RemoveWnd_x                                  0x1405DFCC0

// CDBStr
#define CDBStr__GetString_x                                        0x14018FF30

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x14068D820

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D3840
#define CCharacterListWnd__EnterWorld_x                            0x1400D2850
#define CCharacterListWnd__Quit_x                                  0x1400D3820
#define CCharacterListWnd__UpdateList_x                            0x1400D46A0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x14065AB50
#define ItemBase__CreateItemTagString_x                            0x14065B5F0
#define ItemBase__GetImageNum_x                                    0x14065DD30
#define ItemBase__GetItemValue_x                                   0x14065F880
#define ItemBase__IsEmpty_x                                        0x140661580
#define ItemBase__IsKeyRingItem_x                                  0x140661C80
#define ItemBase__ValueSellMerchant_x                              0x140665F00
#define ItemClient__CanDrop_x                                      0x1402BC0A0
#define ItemClient__CanGoInBag_x                                   0x1402BC1D0
#define ItemClient__CreateItemClient_x                             0x1402BC460
#define ItemClient__dItemClient_x                                  0x1402BBF10

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401AF850
#define EQ_LoadingS__Array_x                                       0x140D412A0

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140672020
#define PcBase__GetCombatAbility_x                                 0x140672720
#define PcBase__GetCombatAbilityTimer_x                            0x1406727C0
#define PcBase__GetItemContainedRealEstateIds_x                    0x140672F90
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x140673A00
#define PcClient__AlertInventoryChanged_x                          0x1402DF430
#define PcClient__GetConLevel_x                                    0x1402DFB50  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402E2270
#define PcClient__HasLoreItem_x                                    0x1402E3300
#define PcZoneClient__GetItemRecastTimer_x                         0x1402EFBE0
#define PcZoneClient__RemoveMyAffect_x                             0x1402F30D0

// EQGroundItemListManager
#define EQGroundItem__EQGroundItem_x                               0x140224B70
#define EQGroundItemListManager__Add_x                             0x140224D20
#define EQGroundItemListManager__Clear_x                           0x140224DC0
#define EQGroundItemListManager__Delete_x                          0x140224E80
#define EQGroundItemListManager__Instance_x                        0x140224F10

// EQPlacedItemManager
#define EQPlacedItemManager__Add_x                                 0x14025FF90

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14018A6C0

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140646530
#define PlayerBase__CanSee1_x                                      0x140646600
#define PlayerBase__GetVisibilityLineSegment_x                     0x140646AE0
#define PlayerBase__HasProperty_x                                  0x140646CB0
#define PlayerBase__IsTargetable_x                                 0x140646D70
#define PlayerClient__ChangeBoneStringSprite_x                     0x140300DA0
#define PlayerClient__GetPcClient_x                                0x1403038B0
#define PlayerClient__PlayerClient_x                               0x1402F90C0
#define PlayerClient__SetNameSpriteState_x                         0x140306FE0
#define PlayerClient__SetNameSpriteTint_x                          0x140307FA0
#define PlayerZoneClient__ChangeHeight_x                           0x1403169D0
#define PlayerZoneClient__DoAttack_x                               0x1403176E0
#define PlayerZoneClient__GetLevel_x                               0x14031AE10
#define PlayerZoneClient__IsValidTeleport_x                        0x140262D30
#define PlayerZoneClient__LegalPlayerRace_x                        0x14019E330

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x14030FED0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x14030FF80  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x140310080
#define PlayerManagerClient__CreatePlayer_x                        0x14030F9A0
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x1406460F0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402C1610
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402C0F40
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402C0FB0
#define KeypressHandler__ClearCommandStateArray_x                  0x1402C15A0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402C1730
#define KeypressHandler__HandleKeyUp_x                             0x1402C1850
#define KeypressHandler__SaveKeymapping_x                          0x1402C1430  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x14068B330  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x140684FC0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402E93E0  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402EDD00
#define PcZoneClient__GetPcSkillLimit_x                            0x1402F0CD0
#define PcZoneClient__RemovePetEffect_x                            0x1402F33B0
#define PcZoneClient__HasAlternateAbility_x                        0x1402F18C0
#define PcZoneClient__CanEquipItem_x                               0x1402EBFC0
#define PcZoneClient__GetItemByID_x                                0x1402EEC30
#define PcZoneClient__RemoveBuffEffect_x                           0x1402F2F50
#define PcZoneClient__BandolierSwap_x                              0x1402DF4E0

// Doors
#define EQSwitch__UseSwitch_x                                      0x140267870

// IconCache
#define IconCache__GetIcon_x                                       0x1403CFC10

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403C4000
#define CContainerMgr__CloseContainer_x                            0x1403C3920
#define CContainerMgr__OpenExperimentContainer_x                   0x1403C43A0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404C0790

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402B3980

// CLootWnd
#define CLootWnd__LootAll_x                                        0x14044FE00
#define CLootWnd__RequestLootSlot_x                                0x140450E50

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401DF420
#define EQ_Spell__SpellAffects_x                                   0x1401E0700
#define EQ_Spell__SpellAffectBase_x                                0x1401E0660
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400DCA20
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400DC9D0
#define EQ_Spell__IsSPAStacking_x                                  0x1401E0330
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401DFEE0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401DF7A0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C3E50

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x14051E160
#define CTargetWnd__RefreshTargetBuffs_x                           0x14051D870
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x14051D070

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x140525830  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x1401870C0
#define CTaskManager__GetTaskStatus_x                              0x1401871D0
#define CTaskManager__GetElementDescription_x                      0x140186D50

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401DD740
#define EqSoundManager__PlayScriptMp3_x                            0x1401DC580
#define EqSoundManager__SoundAssistPlay_x                          0x14033A8D0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x14033AC10  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405BC640
#define CTextureAnimation__SetCurCell_x                            0x1405BC950

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402B1B80

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1406A5A20
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1406A5AA0
#define CharacterBase__IsExpansionFlag_x                           0x140203D70

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x14039EE10
#define CCastSpellWnd__IsBardSongPlaying_x                         0x14039F880
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x1403A0DD0

// messages
#define msg_spell_worn_off_x                                       0x14021AEA0
#define msg_new_text_x                                             0x140216660
#define __msgTokenTextParam_x                                      0x14020DAE0
#define msgTokenText_x                                             0x14020D9F0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x14033C530
#define SpellManager__GetSpellByGroupAndRank_x                     0x14033C430

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140656210

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140449210

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403C8DA0
#define CCursorAttachment__IsOkToActivate_x                        0x1403CC240
#define CCursorAttachment__RemoveAttachment_x                      0x1403CC4F0
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405F59C0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405F5BB0
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405F5BC0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140152790
#define CFindItemWnd__Update_x                                     0x140153150
#define CFindItemWnd__PickupSelectedItem_x                         0x14014BF60

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14015CF50
#define LootFiltersManager__GetItemFilterData_x                    0x14015DA70
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14015E310
#define LootFiltersManager__SetItemLootFilter_x                    0x14015E5C0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x1404A2F10

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x140335050
#define CResolutionHandler__UpdateResolution_x                     0x1405A1950

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403C02B0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406A9E30  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406A9D20  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403E6DF0
#define CGroupWnd__UpdateDisplay_x                                 0x1403E69D0

// ItemBase
#define ItemBase__IsLore_x                                         0x140661DC0
#define ItemBase__IsLoreEquipped_x                                 0x140661E50

#define MultipleItemMoveManager__ProcessMove_x                     0x1402D4F80

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x1402600F0
#define EQPlacedItemManager__GetItemByGuid_x                       0x140260080
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x1402600C0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14032F370

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140128E70
#define FactionManagerClient__HandleFactionMessage_x               0x140129250
#define FactionManagerClient__GetFactionStanding_x                 0x140128640
#define FactionManagerClient__GetMaxFaction_x                      0x140128640
#define FactionManagerClient__GetMinFaction_x                      0x1401284F0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400B0DE0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140134720

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401B8450
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401B7610
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401B8270  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401B81F0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x140341810

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14032F370

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405B2390

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140086E80

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140352F30

// AchievementManager
#define AchievementManager__Instance_x                             0x14008FF90

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x14068E3A0
#define FreeToPlayClient__RestrictionInfo_x                        0x140AEB8D0

// UdpConnection
#define UdpConnection__GetStats_x                                  0x140554520

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x140841068
#define CGFScreenWnd__CGFScreenWnd_x                               0x140071550
#define CGFScreenWnd__CGFScreenWnd1_x                              0x1400716E0
#define CGFScreenWnd__dCGFScreenWnd_x                              0x140071890

#if __has_include("../../../../private/eqgame-private.h")
#include "../../../../private/eqgame-private.h"
#endif
