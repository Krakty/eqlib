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

#define __ClientDate                                               20260127u
#define __ExpectedVersionDate                                     "Jan 27 2026"
#define __ExpectedVersionTime                                     "10:17:52"
#define __ActualVersionDate_x                                      0x140979968
#define __ActualVersionTime_x                                      0x140979958
#define __ActualVersionBuild_x                                     0x14090EAF0

// Memory Protection
#define __MemChecker0_x                                            0x1402C7B10
#define __MemChecker1_x                                            0x140598C40
#define __MemChecker4_x                                            0x140295420
#define __EncryptPad0_x                                            0x140D4BFA0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E84AB0
#define instEQZoneInfo_x                                           0x140E84CA4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x1402289F0
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
#define __allowslashcommand_x                                      0x140252CA0
#define __CastRay_x                                                0x14024AE90
#define __CastRay2_x                                               0x14024AB90
#define __compress_block_x                                         0x14054DFD0
#define __ConvertItemTags_x                                        0x14024B2F0
#define __CleanItemTags_x                                          0x14008A7B0
#define __CreateCascadeMenuItems_x                                 0x140192D00
#define __decompress_block_x                                       0x140594420
#define __DoesFileExist_x                                          0x14059CB00
#define __EQGetTime_x                                              0x1405991F0
#define __ExecuteCmd_x                                             0x14021FF80
#define __FixHeading_x                                             0x140654110
#define __FlushDxKeyboard_x                                        0x14034C340
#define __get_bearing_x                                            0x140254ED0
#define __get_melee_range_x                                        0x140254FC0
#define __GetAnimationCache_x                                      0x1403CFAE0
#define __GetGaugeValueFromEQ_x                                    0x14050D7F0
#define __GetLabelFromEQ_x                                         0x14050EDF0
#define __GetXTargetType_x                                         0x140656310   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140654190
#define __HelpPath_x                                               0x140EF9F48   // Why?
#define __NewUIINI_x                                               0x14051A820   // Why?
#define __ProcessDeviceEvents_x                                    0x140295A30
#define __ProcessGameEvents_x                                      0x14028A430
#define __ProcessKeyboardEvents_x                                  0x14034DA90
#define __ProcessMouseEvents_x                                     0x14028BB80
#define __SaveColors_x                                             0x1401A2BF0
#define __STMLToText_x                                             0x1405AC980
#define __WndProc_x                                                0x14034AAE0
#define CMemoryMappedFile__SetFile_x                               0x140802DC0
#define DrawNetStatus_x                                            0x1402D6FA0
#define Util__FastTime_x                                           0x1405986F0
#define __eq_delete_x                                              0x1406CED68
#define __eq_new_x                                                 0x1406CEFC0
#define __CopyLayout_x                                             0x1402C3F20
#define __ThrottleFrameRate_x                                      0x140279711
#define __ThrottleFrameRateEnd_x                                   0x140279717

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x14035D2F0
#define CAAWnd__Update_x                                           0x14035D5F0
#define CAAWnd__UpdateSelected_x                                   0x14035E7F0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AE7C0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A71A0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x14085AA10
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AF0F0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401ADEC0
#define AltAdvManager__IsAbilityReady_x                            0x1401AE360
#define AltAdvManager__GetAAById_x                                 0x1401AD760
#define AltAdvManager__CanTrainAbility_x                           0x1401AD560
#define AltAdvManager__CanSeeAbility_x                             0x1401AD210

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D5F90
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D6E50
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D70A0
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400EB3E0
#define CharacterZoneClient__CanUseItem_x                          0x1400EB9A0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D7A70
#define CharacterZoneClient__CastSpell_x                           0x1400D7B10
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E78A0
#define CharacterZoneClient__Cur_HP_x                              0x1400ED0E0
#define CharacterZoneClient__Cur_Mana_x                            0x1400ED2A0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400DAD80
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F39C0
#define CharacterZoneClient__GetBaseSkill_x                        0x140101F10  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400DC220
#define CharacterZoneClient__GetCurrentMod_x                       0x1400EACE0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F5250
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F4140
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400DC3A0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400CBB40
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400CDA10
#define CharacterZoneClient__GetHPRegen_x                          0x1400F4870
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400ECD30
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F3A60
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400DC420
#define CharacterZoneClient__GetManaRegen_x                        0x1400F60E0
#define CharacterZoneClient__GetModCap_x                           0x1400FD6C0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400DC6B0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400DC880
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400D10A0
#define CharacterZoneClient__HasSkill_x                            0x1400F9200
#define CharacterZoneClient__HitBySpell_x                          0x1400DD310
#define CharacterZoneClient__IsStackBlocked_x                      0x1400E0CE0
#define CharacterZoneClient__MakeMeVisible_x                       0x1400FD1A0
#define CharacterZoneClient__Max_Endurance_x                       0x1402F1D90  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400FD4F0
#define CharacterZoneClient__Max_Mana_x                            0x1402F1FB0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400FD950
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E4350
#define CharacterZoneClient__SpellDuration_x                       0x1400E5080
#define CharacterZoneClient__TotalEffect_x                         0x1400E6470
#define CharacterZoneClient__UseSkill_x                            0x140102E90


// CBankWnd
#define CBankWnd__WndNotification_x                                0x14037D9C0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140388610

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140384430
#define CBarterSearchWnd__UpdateInventoryList_x                    0x140388090

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14038AD70

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AD9590

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403ADC40
#define CChatWindowManager__InitContextMenu_x                      0x1403ADDD0
#define CChatWindowManager__FreeChatWindow_x                       0x1403ACC90
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403B5D90
#define CChatWindowManager__CreateChatWindow_x                     0x1403AC6C0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x14010B430

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403B6DE0
#define CChatWindow__Clear_x                                       0x1403B7DA0
#define CChatWindow__WndNotification_x                             0x1403B8F90
#define CChatWindow__AddHistory_x                                  0x1403B78A0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405DA1C0
#define CContextMenu__RemoveMenuItem_x                             0x1405DA5B0
#define CContextMenu__RemoveAllMenuItems_x                         0x1405DA580
#define CContextMenu__CheckMenuItem_x                              0x1405DA3F0
#define CContextMenu__SetMenuItem_x                                0x1405DA5D0
#define CContextMenu__AddSeparator_x                               0x1405DA330

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405CC080
#define CContextMenuManager__RemoveMenu_x                          0x1405CC660
#define CContextMenuManager__PopupMenu_x                           0x1405CC3A0
#define CContextMenuManager__Flush_x                               0x1405CC100
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403C7470

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1406A8B00
#define CChatService__GetFriendName_x                              0x1406A8B10

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405BCF50
#define CComboWnd__Draw_x                                          0x1405BD050
#define CComboWnd__GetCurChoice_x                                  0x1405BD330  // unused
#define CComboWnd__GetListRect_x                                   0x1405BD3D0
#define CComboWnd__InsertChoice_x                                  0x1405BD710
#define CComboWnd__SetColors_x                                     0x1405BDAA0
#define CComboWnd__SetChoice_x                                     0x1405BDA60
#define CComboWnd__GetItemCount_x                                  0x1405BD3C0
#define CComboWnd__GetCurChoiceText_x                              0x1405BD370  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405BD300
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405BD7D0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403C5170
#define CContainerWnd__SetContainer_x                              0x1404212C0
#define CContainerWnd__vftable_x                                   0x1409EE8B8

// CDisplay
#define CDisplay__cameraType_x                                     0x140DCC214
#define CDisplay__ZoneMainUI_x                                     0x1405F4560
#define CDisplay__PreZoneMainUI_x                                  0x14019FAF0
#define CDisplay__CleanGameUI_x                                    0x140191DC0
#define CDisplay__GetClickedActor_x                                0x140195F80
#define CDisplay__GetUserDefinedColor_x                            0x140196BF0
#define CDisplay__InitCharSelectUI_x                               0x140196EA0
#define CDisplay__ReloadUI_x                                       0x1401A1DF0
#define CDisplay__RestartUI_x                                      0x140204550
#define CDisplay__WriteTextHD2_x                                   0x1401A8E00
#define CDisplay__TrueDistance_x                                   0x1401A8AB0
#define CDisplay__SetViewActor_x                                   0x1401A5320
#define CDisplay__GetFloorHeight_x                                 0x1401961E0
#define CDisplay__ToggleScreenshotMode_x                           0x1401A85A0
#define CDisplay__RealRender_World_x                               0x1401A11C0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405FE7A0
#define CEditWnd__DrawCaret_x                                      0x1405F0230  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405F06F0
#define CEditWnd__GetCaretPt_x                                     0x1405F0970  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405F09B0
#define CEditWnd__GetDisplayString_x                               0x1405F0C20
#define CEditWnd__GetHorzOffset_x                                  0x1405F0E60
#define CEditWnd__GetLineForPrintableChar_x                        0x1405F0FB0
#define CEditWnd__GetSelStartPt_x                                  0x1405F1290  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405F10E0
#define CEditWnd__PointFromPrintableChar_x                         0x1405F1E40
#define CEditWnd__ReplaceSelection_x                               0x1405F21F0
#define CEditWnd__SelectableCharFromPoint_x                        0x1405F2690
#define CEditWnd__SetEditable_x                                    0x1405F2920
#define CEditWnd__SetWindowText_x                                  0x1405F2950

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14027A7E0
#define CEverQuest__ClickedPlayer_x                                0x14026E9F0
#define CEverQuest__CreateTargetIndicator_x                        0x14026F2B0
#define CEverQuest__DoTellWindow_x                                 0x14010B140 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x14010BA20 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14027C1D0
#define CEverQuest__dsp_chat_x                                     0x14010AB80 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402A74E0
#define CEverQuest__Emote_x                                        0x14027CBC0
#define CEverQuest__GetBodyTypeDesc_x                              0x14027D9A0
#define CEverQuest__GetClassDesc_x                                 0x14027DA00
#define CEverQuest__GetClassThreeLetterCode_x                      0x14027DDD0
#define CEverQuest__GetDeityDesc_x                                 0x14027E080
#define CEverQuest__GetLangDesc_x                                  0x14027E4B0
#define CEverQuest__GetRaceDesc_x                                  0x14027E850
#define CEverQuest__InterpretCmd_x                                 0x140280490
#define CEverQuest__LeftClickedOnPlayer_x                          0x140295AA0
#define CEverQuest__LMouseUp_x                                     0x140281F10
#define CEverQuest__RightClickedOnPlayer_x                         0x140293050
#define CEverQuest__RMouseUp_x                                     0x14028C710
#define CEverQuest__SetGameState_x                                 0x140298520
#define CEverQuest__UPCNotificationFlush_x                         0x14029DEA0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140281B70
#define CEverQuest__ReportSuccessfulHeal_x                         0x14028DAE0
#define CEverQuest__ReportSuccessfulHit_x                          0x14028E900

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403DAA40

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C5340
#define CGuild__GetGuildName_x                                     0x1400C5380

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403FDE90

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402B9590
#define CHotButton__SetCheck_x                                     0x1402B9860

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140417E60
#define CInvSlotMgr__MoveItem_x                                    0x1404189F0
#define CInvSlotMgr__SelectSlot_x                                  0x14041AD40

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x140414C20
#define CInvSlot__SliderComplete_x                                 0x140416450
#define CInvSlot__GetItemBase_x                                    0x140410280
#define CInvSlot__UpdateItem_x                                     0x140416910

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x14041CF50

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x14043E910
#define CItemDisplayWnd__UpdateStrings_x                           0x1404415D0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x14043B120
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x14043CA20
#define CItemDisplayWnd__RequestConvertItem_x                      0x14043DD20

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x14050A260
#define CSpellDisplayWnd__UpdateStrings_x                          0x14050BFF0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140547330

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1404377E0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140157E10

// CLabel
#define CLabel__UpdateText_x                                       0x1404489C0

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405C08E0
#define CListWnd__dCListWnd_x                                      0x1405C0D30
#define CListWnd__vftable_x                                        0x140AD76E0
#define CListWnd__AddColumn_x                                      0x1405C13D0
#define CListWnd__AddColumn1_x                                     0x1405C1470
#define CListWnd__AddLine_x                                        0x1405C15D0
#define CListWnd__AddString_x                                      0x1405C1B60
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405C20D0
#define CListWnd__CalculateVSBRange_x                              0x1405C23B0
#define CListWnd__ClearSel_x                                       0x1405C2560
#define CListWnd__ClearAllSel_x                                    0x1405C2500
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405C25C0
#define CListWnd__Compare_x                                        0x1405C2780
#define CListWnd__Draw_x                                           0x1405C2C50
#define CListWnd__DrawColumnSeparators_x                           0x1405C3800
#define CListWnd__DrawHeader_x                                     0x1405C38C0
#define CListWnd__DrawItem_x                                       0x1405C3FA0
#define CListWnd__DrawLine_x                                       0x1405C4920
#define CListWnd__DrawSeparator_x                                  0x1405C4DE0
#define CListWnd__EnableLine_x                                     0x1405C5200
#define CListWnd__EnsureVisible_x                                  0x1405C5260
#define CListWnd__ExtendSel_x                                      0x1405C5360
#define CListWnd__GetColumnMinWidth_x                              0x1405C56F0
#define CListWnd__GetColumnWidth_x                                 0x1405C5770
#define CListWnd__GetCurSel_x                                      0x1405C5870
#define CListWnd__GetItemData_x                                    0x1405C5BF0
#define CListWnd__GetItemHeight_x                                  0x1405C5C30
#define CListWnd__GetItemRect_x                                    0x1405C5E50
#define CListWnd__GetItemText_x                                    0x1405C60F0
#define CListWnd__GetSelList_x                                     0x1405C6340
#define CListWnd__GetSeparatorRect_x                               0x1405C6530
#define CListWnd__InsertLine_x                                     0x1405C79A0
#define CListWnd__RemoveLine_x                                     0x1405C8010
#define CListWnd__SetColors_x                                      0x1405C83D0
#define CListWnd__SetColumnJustification_x                         0x1405C83F0
#define CListWnd__SetColumnLabel_x                                 0x1405C8470
#define CListWnd__SetColumnWidth_x                                 0x1405C8610
#define CListWnd__SetCurSel_x                                      0x1405C86E0
#define CListWnd__SetItemColor_x                                   0x1405C8950
#define CListWnd__SetItemData_x                                    0x1405C89F0
#define CListWnd__SetItemText_x                                    0x1405C8C30
#define CListWnd__Sort_x                                           0x1405C9040
#define CListWnd__ToggleSel_x                                      0x1405C91B0
#define CListWnd__SetColumnsSizable_x                              0x1405C8660
#define CListWnd__SetItemWnd_x                                     0x1405C8D60
#define CListWnd__GetItemWnd_x                                     0x1405C62D0
#define CListWnd__SetItemIcon_x                                    0x1405C8A30
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405C1EA0
#define CListWnd__SetVScrollPos_x                                  0x1405C8FA0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x14045BEF0

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A3C2C8
#define MapViewMap__Clear_x                                        0x14045DA70
#define MapViewMap__SetZoom_x                                      0x1404640C0
#define MapViewMap__HandleLButtonDown_x                            0x140460C00

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x1404858D0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x14048C1F0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x14048C9D0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x1404902B0
#define CMerchantWnd__SelectBuySellSlot_x                          0x14048F600
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x1404946E0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x1406840C0
#define CPacketScrambler__hton_x                                   0x1406840B0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405E9AF0
#define CSidlManagerBase__FindAnimation1_x                         0x1405E9A30
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405EA120
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405E9ED0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405E8E30
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405E8DC0
#define CSidlManagerBase__CreateXWnd_x                             0x1405E8400

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404FD1B0
#define CSidlManager__CreateXWnd_x                                 0x1404FD370

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405AE470
#define CSidlScreenWnd__CalculateVSBRange_x                        0x1405AE5A0
#define CSidlScreenWnd__ConvertToRes_x                             0x1405F8CD0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x1405AE720
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x1405ADBA0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x1405ADC70
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1405ADE80
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1405AEE10
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405AF040
#define CSidlScreenWnd__GetChildItem_x                             0x1405AF1E0
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405AF430
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405B94E0 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405AF7A0
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405AFB10
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405B03D0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405B0DD0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F25E58
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405B1460
#define CSidlScreenWnd__StoreIniVis_x                              0x1405B1C50
#define CSidlScreenWnd__vftable_x                                  0x140AD6968
#define CSidlScreenWnd__WndNotification_x                          0x1405B1CA0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x1403353A0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x1403356C0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x1403355F0
#define CSkillMgr__IsActivatedSkill_x                              0x140335A80
#define CSkillMgr__IsCombatSkill_x                                 0x140335AC0
#define CSkillMgr__GetSkillTimerDuration_x                         0x1403359F0
#define CSkillMgr__GetSkillLastUsed_x                              0x140335640

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405C9B30
#define CSliderWnd__SetValue_x                                     0x1405CA340
#define CSliderWnd__SetNumTicks_x                                  0x1405CA1C0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x140503990

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405CEAE0
#define CStmlWnd__CalculateHSBRange_x                              0x1405B8EC0
#define CStmlWnd__CalculateVSBRange_x                              0x1405CFA00
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405D0480
#define CStmlWnd__ForceParseNow_x                                  0x1405D0520
#define CStmlWnd__GetVisibleText_x                                 0x1405D0BF0
#define CStmlWnd__MakeStmlColorTag_x                               0x1405D2950
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405D2990
#define CStmlWnd__SetSTMLText_x                                    0x1405D9960
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405D9B10
#define CStmlWnd__UpdateHistoryString_x                            0x1405D9EA0

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405CA710
#define CTabWnd__DrawCurrentPage_x                                 0x1405CA7B0
#define CTabWnd__DrawTab_x                                         0x1405CAB80
#define CTabWnd__GetTabRect_x                                      0x1405CB1F0
#define CTabWnd__InsertPage_x                                      0x1405CB4C0
#define CTabWnd__RemovePage_x                                      0x1405CB750
#define CTabWnd__SetPage_x                                         0x1405CB8B0
#define CTabWnd__UpdatePage_x                                      0x1405CBBB0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405F2DB0
#define CPageWnd__SetTabText_x                                     0x1405F2E20

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BE8B0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BECC0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405E14C0
#define CTextureFont__DrawWrappedText1_x                           0x1405E13D0
#define CTextureFont__DrawWrappedText2_x                           0x1405E15F0
#define CTextureFont__GetTextExtent_x                              0x1405E19A0
#define CTextureFont__GetHeight_x                                  0x1405E1960

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405F7430

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405AB060

// CXStr
#define CXStr__gFreeLists_x                                        0x140D55030
#define CXStr__gCXStrAccess_x                                      0x140F259B8

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405B4540
#define CXWnd__ClrFocus_x                                          0x1405B4830
#define CXWnd__Destroy_x                                           0x1405B49B0
#define CXWnd__DoAllDrawing_x                                      0x1405B4AB0
#define CXWnd__DrawColoredRect_x                                   0x1405B5280
#define CXWnd__DrawTooltip_x                                       0x1405B68F0
#define CXWnd__DrawTooltipAtPoint_x                                0x1405B69A0
#define CXWnd__GetChildItem_x                                      0x1405B72A0
#define CXWnd__GetChildWndAt_x                                     0x1405B7360
#define CXWnd__GetClientRect_x                                     0x1405B7610
#define CXWnd__GetClientClipRect_x                                 0x1405B74D0
#define CXWnd__GetRelativeRect_x                                   0x1405B8FF0
#define CXWnd__GetScreenClipRect_x                                 0x1405B9100
#define CXWnd__GetScreenRect_x                                     0x1405B9270
#define CXWnd__GetTooltipRect_x                                    0x1405B93F0
#define CXWnd__IsActive_x                                          0x1405B99A0
#define CXWnd__IsDescendantOf_x                                    0x1405B99D0
#define CXWnd__IsReallyVisible_x                                   0x1405B9A40
#define CXWnd__IsType_x                                            0x1405B9A90
#define CXWnd__Minimize_x                                          0x1405B9B90
#define CXWnd__ProcessTransition_x                                 0x1405BAA60
#define CXWnd__Resize_x                                            0x1405BAB80
#define CXWnd__Right_x                                             0x1405BAC20
#define CXWnd__SetFocus_x                                          0x1405BAFE0
#define CXWnd__SetFont_x                                           0x1405BB030
#define CXWnd__SetKeyTooltip_x                                     0x1405BB130
#define CXWnd__SetMouseOver_x                                      0x1405BB270
#define CXWnd__SetParent_x                                         0x1405BB2F0
#define CXWnd__StartFade_x                                         0x1405BB720
#define CXWnd__vftable_x                                           0x140AD6F40
#define CXWnd__CXWnd_x                                             0x1405B30C0
#define CXWnd__dCXWnd_x                                            0x1405B3A20

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405FDF20

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405DB780
#define CXWndManager__DrawCursor_x                                 0x1405DBA60
#define CXWndManager__DrawWindows_x                                0x1405DBCC0
#define CXWndManager__GetKeyboardFlags_x                           0x1405DC310
#define CXWndManager__HandleKeyboardMsg_x                          0x1405DC350
#define CXWndManager__RemoveWnd_x                                  0x1405DFB80

// CDBStr
#define CDBStr__GetString_x                                        0x14018FF70

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x14068E070

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D3830
#define CCharacterListWnd__EnterWorld_x                            0x1400D2840
#define CCharacterListWnd__Quit_x                                  0x1400D3810
#define CCharacterListWnd__UpdateList_x                            0x1400D4690

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x14065B050
#define ItemBase__CreateItemTagString_x                            0x14065BAE0
#define ItemBase__GetImageNum_x                                    0x14065E220
#define ItemBase__GetItemValue_x                                   0x140660100
#define ItemBase__IsEmpty_x                                        0x140661DF0
#define ItemBase__IsKeyRingItem_x                                  0x140662500
#define ItemBase__ValueSellMerchant_x                              0x140666740
#define ItemClient__CanDrop_x                                      0x1402BBEC0
#define ItemClient__CanGoInBag_x                                   0x1402BBFF0
#define ItemClient__CreateItemClient_x                             0x1402BC280
#define ItemClient__dItemClient_x                                  0x1402BBD30

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401AF890
#define EQ_LoadingS__Array_x                                       0x140D412A0

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140672860
#define PcBase__GetCombatAbility_x                                 0x140672F60
#define PcBase__GetCombatAbilityTimer_x                            0x140673000
#define PcBase__GetItemContainedRealEstateIds_x                    0x1406737D0
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x140674240
#define PcClient__AlertInventoryChanged_x                          0x1402DF240
#define PcClient__GetConLevel_x                                    0x1402DF960  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402E2080
#define PcClient__HasLoreItem_x                                    0x1402E3100
#define PcZoneClient__GetItemRecastTimer_x                         0x1402EF9E0
#define PcZoneClient__RemoveMyAffect_x                             0x1402F2ED0

// EQGroundItemListManager
#define EQGroundItem__EQGroundItem_x                               0x140224980
#define EQGroundItemListManager__Add_x                             0x140224B30
#define EQGroundItemListManager__Clear_x                           0x140224BD0
#define EQGroundItemListManager__Delete_x                          0x140224C90
#define EQGroundItemListManager__Instance_x                        0x140224D20

// EQPlacedItemManager
#define EQPlacedItemManager__Add_x                                 0x14025FDA0

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14018A6B0

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140646430
#define PlayerBase__CanSee1_x                                      0x140646500
#define PlayerBase__GetVisibilityLineSegment_x                     0x1406469E0
#define PlayerBase__HasProperty_x                                  0x140646BB0
#define PlayerBase__IsTargetable_x                                 0x140646C70
#define PlayerClient__ChangeBoneStringSprite_x                     0x140300B90
#define PlayerClient__GetPcClient_x                                0x1403036A0
#define PlayerClient__PlayerClient_x                               0x1402F8EB0
#define PlayerClient__SetNameSpriteState_x                         0x140306DD0
#define PlayerClient__SetNameSpriteTint_x                          0x140307D90
#define PlayerZoneClient__ChangeHeight_x                           0x1403168C0
#define PlayerZoneClient__DoAttack_x                               0x1403175D0
#define PlayerZoneClient__GetLevel_x                               0x14031AD00
#define PlayerZoneClient__IsValidTeleport_x                        0x140262B40
#define PlayerZoneClient__LegalPlayerRace_x                        0x14019E370

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x14030FDC0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x14030FE70  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x14030FF70
#define PlayerManagerClient__CreatePlayer_x                        0x14030F890
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140645FF0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402C1440
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402C0D70
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402C0DE0
#define KeypressHandler__ClearCommandStateArray_x                  0x1402C13D0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402C1560
#define KeypressHandler__HandleKeyUp_x                             0x1402C1680
#define KeypressHandler__SaveKeymapping_x                          0x1402C1260  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x14068BB80  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x140685800

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402E91E0  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402EDB00
#define PcZoneClient__GetPcSkillLimit_x                            0x1402F0AD0
#define PcZoneClient__RemovePetEffect_x                            0x1402F31B0
#define PcZoneClient__HasAlternateAbility_x                        0x1402F16C0
#define PcZoneClient__CanEquipItem_x                               0x1402EBDC0
#define PcZoneClient__GetItemByID_x                                0x1402EEA30
#define PcZoneClient__RemoveBuffEffect_x                           0x1402F2D50
#define PcZoneClient__BandolierSwap_x                              0x1402DF2F0

// Doors
#define EQSwitch__UseSwitch_x                                      0x140267680

// IconCache
#define IconCache__GetIcon_x                                       0x1403CFB10

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403C3F00
#define CContainerMgr__CloseContainer_x                            0x1403C3820
#define CContainerMgr__OpenExperimentContainer_x                   0x1403C42A0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404C0670

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402B3780

// CLootWnd
#define CLootWnd__LootAll_x                                        0x14044FD00
#define CLootWnd__RequestLootSlot_x                                0x140450D50

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401DF460
#define EQ_Spell__SpellAffects_x                                   0x1401E0740
#define EQ_Spell__SpellAffectBase_x                                0x1401E06A0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400DCA10
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400DC9C0
#define EQ_Spell__IsSPAStacking_x                                  0x1401E0370
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401DFF20
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401DF7E0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C3E40

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x14051E030
#define CTargetWnd__RefreshTargetBuffs_x                           0x14051D740
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x14051CF40

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x140525700  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x1401870B0
#define CTaskManager__GetTaskStatus_x                              0x1401871C0
#define CTaskManager__GetElementDescription_x                      0x140186D40

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401DD780
#define EqSoundManager__PlayScriptMp3_x                            0x1401DC5C0
#define EqSoundManager__SoundAssistPlay_x                          0x14033A7E0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x14033AB20  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405BC4E0
#define CTextureAnimation__SetCurCell_x                            0x1405BC7F0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402B1980

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1406A6270
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1406A62F0
#define CharacterBase__IsExpansionFlag_x                           0x140203BB0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x14039ED20
#define CCastSpellWnd__IsBardSongPlaying_x                         0x14039F790
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x1403A0CE0

// messages
#define msg_spell_worn_off_x                                       0x14021ACB0
#define msg_new_text_x                                             0x140216470
#define __msgTokenTextParam_x                                      0x14020D900
#define msgTokenText_x                                             0x14020D810

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x14033C440
#define SpellManager__GetSpellByGroupAndRank_x                     0x14033C340

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x1406566F0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140449110

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403C8CA0
#define CCursorAttachment__IsOkToActivate_x                        0x1403CC140
#define CCursorAttachment__RemoveAttachment_x                      0x1403CC3F0
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405F58D0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405F5AC0
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405F5AD0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140152780
#define CFindItemWnd__Update_x                                     0x140153140
#define CFindItemWnd__PickupSelectedItem_x                         0x14014BF50

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14015CF40
#define LootFiltersManager__GetItemFilterData_x                    0x14015DA60
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14015E300
#define LootFiltersManager__SetItemLootFilter_x                    0x14015E5B0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x1404A2DF0

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x140334F60
#define CResolutionHandler__UpdateResolution_x                     0x1405A1820

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403C01B0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406AA680  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406AA570  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403E6CC0
#define CGroupWnd__UpdateDisplay_x                                 0x1403E68A0

// ItemBase
#define ItemBase__IsLore_x                                         0x140662640
#define ItemBase__IsLoreEquipped_x                                 0x1406626D0

#define MultipleItemMoveManager__ProcessMove_x                     0x1402D4D90

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14025FF00
#define EQPlacedItemManager__GetItemByGuid_x                       0x14025FE90
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14025FED0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14032F270

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140128E80
#define FactionManagerClient__HandleFactionMessage_x               0x140129260
#define FactionManagerClient__GetFactionStanding_x                 0x140128650
#define FactionManagerClient__GetMaxFaction_x                      0x140128650
#define FactionManagerClient__GetMinFaction_x                      0x140128500

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400B0DD0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140134720

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401B8490
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401B7650
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401B82B0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401B8230  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x140341720

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14032F270

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405B2290

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140086E70

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140352E40

// AchievementManager
#define AchievementManager__Instance_x                             0x14008FF80

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x14068EBF0
#define FreeToPlayClient__RestrictionInfo_x                        0x140AEB8D0

// UdpConnection
#define UdpConnection__GetStats_x                                  0x1405543F0

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x140841068
#define CGFScreenWnd__CGFScreenWnd_x                               0x140071550
#define CGFScreenWnd__CGFScreenWnd1_x                              0x1400716E0
#define CGFScreenWnd__dCGFScreenWnd_x                              0x140071890

#if __has_include("../../../../private/eqgame-private.h")
#include "../../../../private/eqgame-private.h"
#endif
