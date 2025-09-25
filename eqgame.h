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

#define __ClientDate                                               20250924u
#define __ExpectedVersionDate                                     "Sep 24 2025"
#define __ExpectedVersionTime                                     "11:35:02"
#define __ActualVersionDate_x                                      0x140963B00
#define __ActualVersionTime_x                                      0x140963AF0
#define __ActualVersionBuild_x                                     0x1408F95E0

// Memory Protection
#define __MemChecker0_x                                            0x1402C0470
#define __MemChecker1_x                                            0x1405883C0
#define __MemChecker4_x                                            0x14028DBC0
#define __EncryptPad0_x                                            0x140D33EA0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E6C8E0
#define instEQZoneInfo_x                                           0x140E6CAD4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x140221B80
#define __gfMaxZoomCameraDistance_x                                0x1408FA858
#define __gfMaxCameraDistance_x                                    0x140AA2064
#define __CurrentSocial_x                                          0x140BEF950 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D2B720
#define g_eqCommandStates_x                                        0x140D2C790
#define __CommandList_x                                            0x140D2C9D0
#define __ScreenMode_x                                             0x140DB41F4
#define __gWorld_x                                                 0x140E64DA8
#define __gpbCommandEvent_x                                        0x140E65300
#define __ServerHost_x                                             0x140E654F8
#define __Guilds_x                                                 0x140E6B490
#define __MemCheckBitmask_x                                        0x140E6CE1F
#define __MemCheckActive_x                                         0x140E6E525
#define __MouseEventTime_x                                         0x140EE1E90
#define DI8__MouseState_x                                          0x140EE60C8
#define __heqmain_x                                                0x140EE8568
#define DI8__Mouse_x                                               0x140EE6018
#define __HWnd_x                                                   0x140EE60A0
#define __Mouse_x                                                  0x140EE5FD4
#define DI8__Keyboard_x                                            0x140EE5FF0
#define __LoginName_x                                              0x140EE8C4C
#define __CurrentMapLabel_x                                        0x140EFC760
#define __LabelCache_x                                             0x140EFD330
#define __ChatFilterDefs_x                                         0x140A3C7E0
#define Teleport_Table_Size_x                                      0x140E65390
#define Teleport_Table_x                                           0x140E65820

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E67820
#define pinstActiveBanker_x                                        0x140E65248
#define pinstActiveCorpse_x                                        0x140E65238
#define pinstActiveGMaster_x                                       0x140E65240
#define pinstActiveMerchant_x                                      0x140E65230
#define pinstAltAdvManager_x                                       0x140DB5028
#define pinstCEverQuest_x                                          0x140EE6010
#define pinstCamActor_x                                            0x140DB41E0
#define pinstCDBStr_x                                              0x140DB3DE0
#define pinstCDisplay_x                                            0x140E64D60
#define pinstControlledPlayer_x                                    0x140E652D8
#define pinstCResolutionHandler_x                                  0x140F0DB68
#define pinstCSidlManager_x                                        0x140F0E8D0
#define pinstCXWndManager_x                                        0x140F0E8C8
#define instDynamicZone_x                                          0x140E6B350 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E6B39E
#define instExpeditionName_x                                       0x140E6B3DE
#define pinstDZMember_x                                            0x140E6B468
#define pinstDZTimerInfo_x                                         0x140E6B470
#define pinstEqLogin_x                                             0x140EE8590
#define instTribute_x                                              0x140D26D60
#define pinstDeviceInputProxy_x                                    0x140E6C93C
#define pinstEQSoundManager_x                                      0x140DB53B0
#define pinstEQSpellStrings_x                                      0x140D98970
#define pinstSGraphicsEngine_x                                     0x140F0D8F8
#define pinstLocalPC_x                                             0x140E64D90
#define pinstLocalPlayer_x                                         0x140E65228
#define pinstCMercenaryClientManager_x                             0x140EE3778
#define pinstModelPlayer_x                                         0x140E65258
#define pinstRenderInterface_x                                     0x140F0D910
#define pinstSkillMgr_x                                            0x140EE5418
#define pinstSpawnManager_x                                        0x140EE3B40
#define pinstSpellManager_x                                        0x140EE5480
#define pinstStringTable_x                                         0x140E64D98
#define pinstSwitchManager_x                                       0x140E64CE0
#define pinstTarget_x                                              0x140E652D0
#define pinstTaskMember_x                                          0x140D26D50 // Part of g_taskManager
#define pinstTradeTarget_x                                         0x140E65250
#define instTributeActive_x                                        0x140D26D89
#define pinstViewActor_x                                           0x140DB41D8
#define pinstWorldData_x                                           0x140E653E8
#define pinstPlayerPath_x                                          0x140EE3B68
#define pinstTargetIndicator_x                                     0x140EE5530
#define EQObject_Top_x                                             0x140E65308

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140EF98C0
#define pinstCContainerMgr_x                                       0x140DB4210
#define pinstCContextMenuManager_x                                 0x140F0E5B0
#define pinstCInvSlotMgr_x                                         0x140DB41C8
#define pinstCItemDisplayManager_x                                 0x140EFC330
#define pinstCPopupWndManager_x                                    0x140EFCBC0
#define pinstCSpellDisplayMgr_x                                    0x140EFD210
#define pinstCTaskManager_x                                        0x140BEFC90
#define pinstEQSuiteTextureLoader_x                                0x140D3D5B0
#define pinstItemIconCache_x                                       0x140EF9C20
#define pinstLootFiltersManager_x                                  0x140DB3828
#define pinstGFViewListener_x                                      0x140F0DD88


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x14024B860
#define __CastRay_x                                                0x140243B00
#define __CastRay2_x                                               0x140243800
#define __compress_block_x                                         0x14053D780
#define __ConvertItemTags_x                                        0x140243F60
#define __CleanItemTags_x                                          0x14008A7D0
#define __CreateCascadeMenuItems_x                                 0x14018E2F0
#define __decompress_block_x                                       0x140583BD0
#define __DoesFileExist_x                                          0x14058C270
#define __EQGetTime_x                                              0x140588970
#define __ExecuteCmd_x                                             0x140219380
#define __FixHeading_x                                             0x140643210
#define __FlushDxKeyboard_x                                        0x140344510
#define __get_bearing_x                                            0x14024DA90
#define __get_melee_range_x                                        0x14024DB80
#define __GetAnimationCache_x                                      0x1403C5650
#define __GetGaugeValueFromEQ_x                                    0x1404FD2D0
#define __GetLabelFromEQ_x                                         0x1404FE8C0
#define __GetXTargetType_x                                         0x1406444F0   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140643290
#define __HelpPath_x                                               0x140EE1D58   // Why?
#define __NewUIINI_x                                               0x14050A300   // Why?
#define __ProcessDeviceEvents_x                                    0x14028E1D0
#define __ProcessGameEvents_x                                      0x140282D20
#define __ProcessKeyboardEvents_x                                  0x140345C60
#define __ProcessMouseEvents_x                                     0x1402843F0
#define __SaveColors_x                                             0x14019E320
#define __STMLToText_x                                             0x14059BD10
#define __WndProc_x                                                0x140342CB0
#define CMemoryMappedFile__SetFile_x                               0x1407EFF90
#define DrawNetStatus_x                                            0x1402CEAF0
#define Util__FastTime_x                                           0x140587EA0
#define __eq_delete_x                                              0x1406BBFD8
#define __eq_new_x                                                 0x1406BC230
#define __CopyLayout_x                                             0x1402BC880
#define __ThrottleFrameRate_x                                      0x1402723C5
#define __ThrottleFrameRateEnd_x                                   0x140272425

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140355740
#define CAAWnd__Update_x                                           0x140355A40
#define CAAWnd__UpdateSelected_x                                   0x140356C40

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400ACD90
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A5770
#define CAdvancedLootWnd__AddPlayerToList_x                        0x1408466C8
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AD6C0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401A9570
#define AltAdvManager__IsAbilityReady_x                            0x1401A9A00
#define AltAdvManager__GetAAById_x                                 0x1401A8E40
#define AltAdvManager__CanTrainAbility_x                           0x1401A8C30
#define AltAdvManager__CanSeeAbility_x                             0x1401A88F0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D37C0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D4620
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D4870
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400E9090
#define CharacterZoneClient__CanUseItem_x                          0x1400E9650
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D5240
#define CharacterZoneClient__CastSpell_x                           0x1400D52E0
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E4E90
#define CharacterZoneClient__Cur_HP_x                              0x1400EAD70
#define CharacterZoneClient__Cur_Mana_x                            0x1400EAF30
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D8650
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F15A0
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FFE40  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D9AF0
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E8990
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F3150
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F2030
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D9C70
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C9FA0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400CB9A0
#define CharacterZoneClient__GetHPRegen_x                          0x1400F2770
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400EA9E0
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F33E0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D9CF0
#define CharacterZoneClient__GetManaRegen_x                        0x1400F4160
#define CharacterZoneClient__GetModCap_x                           0x1400FB5F0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D9F80
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400DA150
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CEB30
#define CharacterZoneClient__HasSkill_x                            0x1400F7130
#define CharacterZoneClient__HitBySpell_x                          0x1400DABE0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DE550
#define CharacterZoneClient__MakeMeVisible_x                       0x1400FB0D0
#define CharacterZoneClient__Max_Endurance_x                       0x1402EA8D0  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400FB420
#define CharacterZoneClient__Max_Mana_x                            0x1402EAAF0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400FB880
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E19E0
#define CharacterZoneClient__SpellDuration_x                       0x1400E2710
#define CharacterZoneClient__TotalEffect_x                         0x1400E3A70
#define CharacterZoneClient__UseSkill_x                            0x140100DC0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x1403741D0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14037E550

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14037A3D0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14037DFD0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140380CC0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AC14A0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403A3B10
#define CChatWindowManager__InitContextMenu_x                      0x1403A3CA0
#define CChatWindowManager__FreeChatWindow_x                       0x1403A2B70
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403ABC00
#define CChatWindowManager__CreateChatWindow_x                     0x1403A25A0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140109300

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403ACC50
#define CChatWindow__Clear_x                                       0x1403ADC00
#define CChatWindow__WndNotification_x                             0x1403AEDF0
#define CChatWindow__AddHistory_x                                  0x1403AD700

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405C94D0
#define CContextMenu__RemoveMenuItem_x                             0x1405C98C0
#define CContextMenu__RemoveAllMenuItems_x                         0x1405C9890
#define CContextMenu__CheckMenuItem_x                              0x1405C9700
#define CContextMenu__SetMenuItem_x                                0x1405C98E0
#define CContextMenu__AddSeparator_x                               0x1405C9640

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405BB3B0
#define CContextMenuManager__RemoveMenu_x                          0x1405BB990
#define CContextMenuManager__PopupMenu_x                           0x1405BB6D0
#define CContextMenuManager__Flush_x                               0x1405BB430
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403BD1E0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x140695FE0
#define CChatService__GetFriendName_x                              0x140695FF0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405AC140
#define CComboWnd__Draw_x                                          0x1405AC240
#define CComboWnd__GetCurChoice_x                                  0x1405AC520  // unused
#define CComboWnd__GetListRect_x                                   0x1405AC5C0
#define CComboWnd__InsertChoice_x                                  0x1405AC900
#define CComboWnd__SetColors_x                                     0x1405ACC90
#define CComboWnd__SetChoice_x                                     0x1405ACC50
#define CComboWnd__GetItemCount_x                                  0x1405AC5B0
#define CComboWnd__GetCurChoiceText_x                              0x1405AC560  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405AC4F0
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405AC9C0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403BAF00
#define CContainerWnd__SetContainer_x                              0x1404132C0
#define CContainerWnd__vftable_x                                   0x1409D7FC0

// CDisplay
#define CDisplay__cameraType_x                                     0x140DB3F9C
#define CDisplay__ZoneMainUI_x                                     0x1405E3540
#define CDisplay__PreZoneMainUI_x                                  0x14019B240
#define CDisplay__CleanGameUI_x                                    0x14018D3B0
#define CDisplay__GetClickedActor_x                                0x140191570
#define CDisplay__GetUserDefinedColor_x                            0x1401921E0
#define CDisplay__InitCharSelectUI_x                               0x140192490
#define CDisplay__ReloadUI_x                                       0x14019D540
#define CDisplay__RestartUI_x                                      0x1401FE060
#define CDisplay__WriteTextHD2_x                                   0x1401A4530
#define CDisplay__TrueDistance_x                                   0x1401A41E0
#define CDisplay__SetViewActor_x                                   0x1401A0A50
#define CDisplay__GetFloorHeight_x                                 0x1401917D0
#define CDisplay__ToggleScreenshotMode_x                           0x1401A3CD0
#define CDisplay__RealRender_World_x                               0x14019C910

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405ED770
#define CEditWnd__DrawCaret_x                                      0x1405DF2A0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405DF760
#define CEditWnd__GetCaretPt_x                                     0x1405DF9E0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405DFA20
#define CEditWnd__GetDisplayString_x                               0x1405DFC90
#define CEditWnd__GetHorzOffset_x                                  0x1405DFED0
#define CEditWnd__GetLineForPrintableChar_x                        0x1405E0020
#define CEditWnd__GetSelStartPt_x                                  0x1405E0300  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405E0150
#define CEditWnd__PointFromPrintableChar_x                         0x1405E0EB0
#define CEditWnd__ReplaceSelection_x                               0x1405E1260
#define CEditWnd__SelectableCharFromPoint_x                        0x1405E1700
#define CEditWnd__SetEditable_x                                    0x1405E1990
#define CEditWnd__SetWindowText_x                                  0x1405E19C0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x1402734E0
#define CEverQuest__ClickedPlayer_x                                0x140267560
#define CEverQuest__CreateTargetIndicator_x                        0x140267E20
#define CEverQuest__DoTellWindow_x                                 0x140109010 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1401098E0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140274ED0
#define CEverQuest__dsp_chat_x                                     0x140108A50 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402A00E0
#define CEverQuest__Emote_x                                        0x1402758C0
#define CEverQuest__GetBodyTypeDesc_x                              0x1402766A0
#define CEverQuest__GetClassDesc_x                                 0x140276700
#define CEverQuest__GetClassThreeLetterCode_x                      0x140276AD0
#define CEverQuest__GetDeityDesc_x                                 0x140276D80
#define CEverQuest__GetLangDesc_x                                  0x1402771B0
#define CEverQuest__GetRaceDesc_x                                  0x140277550
#define CEverQuest__InterpretCmd_x                                 0x140278EE0
#define CEverQuest__LeftClickedOnPlayer_x                          0x14028E240
#define CEverQuest__LMouseUp_x                                     0x14027A950
#define CEverQuest__RightClickedOnPlayer_x                         0x14028B8C0
#define CEverQuest__RMouseUp_x                                     0x140284F80
#define CEverQuest__SetGameState_x                                 0x1402911B0
#define CEverQuest__UPCNotificationFlush_x                         0x140296B20 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14027A5B0
#define CEverQuest__ReportSuccessfulHeal_x                         0x140286350
#define CEverQuest__ReportSuccessfulHit_x                          0x140287170

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403D0560

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C3850
#define CGuild__GetGuildName_x                                     0x1400C3890

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403F3A10

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402B2250
#define CHotButton__SetCheck_x                                     0x1402B2520

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x14040C020
#define CInvSlotMgr__MoveItem_x                                    0x14040C200
#define CInvSlotMgr__SelectSlot_x                                  0x14040DC00

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x140409250
#define CInvSlot__SliderComplete_x                                 0x14040A7A0
#define CInvSlot__GetItemBase_x                                    0x140404BF0
#define CInvSlot__UpdateItem_x                                     0x14040AC50

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x14040EF90

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140430410
#define CItemDisplayWnd__UpdateStrings_x                           0x140432FC0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x14042CC30
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x14042E580
#define CItemDisplayWnd__RequestConvertItem_x                      0x14042F830

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404F9D50
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404FBAE0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140536AE0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140429310

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x1401542C0

// CLabel
#define CLabel__UpdateText_x                                       0x14043A390

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405AFAD0
#define CListWnd__dCListWnd_x                                      0x1405AFF10
#define CListWnd__vftable_x                                        0x140ABF5F0
#define CListWnd__AddColumn_x                                      0x1405B05B0
#define CListWnd__AddColumn1_x                                     0x1405B0650
#define CListWnd__AddLine_x                                        0x1405B07B0
#define CListWnd__AddString_x                                      0x1405B0D40
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405B12B0
#define CListWnd__CalculateVSBRange_x                              0x1405B1590
#define CListWnd__ClearSel_x                                       0x1405B1740
#define CListWnd__ClearAllSel_x                                    0x1405B16E0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405B17A0
#define CListWnd__Compare_x                                        0x1405B1960
#define CListWnd__Draw_x                                           0x1405B1E30
#define CListWnd__DrawColumnSeparators_x                           0x1405B29E0
#define CListWnd__DrawHeader_x                                     0x1405B2AA0
#define CListWnd__DrawItem_x                                       0x1405B3180
#define CListWnd__DrawLine_x                                       0x1405B3B00
#define CListWnd__DrawSeparator_x                                  0x1405B3FC0
#define CListWnd__EnableLine_x                                     0x1405B43E0
#define CListWnd__EnsureVisible_x                                  0x1405B4440
#define CListWnd__ExtendSel_x                                      0x1405B4540
#define CListWnd__GetColumnMinWidth_x                              0x1405B48D0
#define CListWnd__GetColumnWidth_x                                 0x1405B4950
#define CListWnd__GetCurSel_x                                      0x1405B4A50
#define CListWnd__GetItemData_x                                    0x1405B4DD0
#define CListWnd__GetItemHeight_x                                  0x1405B4E10
#define CListWnd__GetItemRect_x                                    0x1405B5030
#define CListWnd__GetItemText_x                                    0x1405B52D0
#define CListWnd__GetSelList_x                                     0x1405B5520
#define CListWnd__GetSeparatorRect_x                               0x1405B5710
#define CListWnd__InsertLine_x                                     0x1405B6B80
#define CListWnd__RemoveLine_x                                     0x1405B71F0
#define CListWnd__SetColors_x                                      0x1405B75B0
#define CListWnd__SetColumnJustification_x                         0x1405B75D0
#define CListWnd__SetColumnLabel_x                                 0x1405B7650
#define CListWnd__SetColumnWidth_x                                 0x1405B77F0
#define CListWnd__SetCurSel_x                                      0x1405B78C0
#define CListWnd__SetItemColor_x                                   0x1405B7B30
#define CListWnd__SetItemData_x                                    0x1405B7BD0
#define CListWnd__SetItemText_x                                    0x1405B7E10
#define CListWnd__Sort_x                                           0x1405B8220
#define CListWnd__ToggleSel_x                                      0x1405B8390
#define CListWnd__SetColumnsSizable_x                              0x1405B7840
#define CListWnd__SetItemWnd_x                                     0x1405B7F40
#define CListWnd__GetItemWnd_x                                     0x1405B54B0
#define CListWnd__SetItemIcon_x                                    0x1405B7C10
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405B1080
#define CListWnd__SetVScrollPos_x                                  0x1405B8180

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x14044D670

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A25210
#define MapViewMap__Clear_x                                        0x14044F1E0
#define MapViewMap__SetZoom_x                                      0x140455850
#define MapViewMap__HandleLButtonDown_x                            0x140452370

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140476F80  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x14047D5D0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x14047DD70
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x1404815A0
#define CMerchantWnd__SelectBuySellSlot_x                          0x1404808E0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140485840

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x1406711B0
#define CPacketScrambler__hton_x                                   0x1406711A0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405D8BB0
#define CSidlManagerBase__FindAnimation1_x                         0x1405D8AF0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405D91E0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405D8F90
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405D7EF0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405D7E80
#define CSidlManagerBase__CreateXWnd_x                             0x1405D74E0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404ECD70
#define CSidlManager__CreateXWnd_x                                 0x1404ECF30

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14059D800
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14059D920
#define CSidlScreenWnd__ConvertToRes_x                             0x1405E7CB0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14059DAA0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14059CF30
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14059D000
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14059D210
#define CSidlScreenWnd__DrawSidlPiece_x                            0x14059E190
#define CSidlScreenWnd__EnableIniStorage_x                         0x14059E3C0
#define CSidlScreenWnd__GetChildItem_x                             0x14059E560
#define CSidlScreenWnd__GetSidlPiece_x                             0x14059E7B0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405A87B0 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x14059EB20
#define CSidlScreenWnd__LoadIniInfo_x                              0x14059EE60
#define CSidlScreenWnd__LoadIniListWnd_x                           0x14059F720
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405A0110
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F0DC28
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405A0790
#define CSidlScreenWnd__StoreIniVis_x                              0x1405A0F80
#define CSidlScreenWnd__vftable_x                                  0x140ABE878
#define CSidlScreenWnd__WndNotification_x                          0x1405A0FD0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14032D420 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14032D8C0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14032D7F0
#define CSkillMgr__IsActivatedSkill_x                              0x14032DC70
#define CSkillMgr__IsCombatSkill_x                                 0x14032DCB0
#define CSkillMgr__GetSkillTimerDuration_x                         0x14032DBE0
#define CSkillMgr__GetSkillLastUsed_x                              0x14032D840

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405B8CD0
#define CSliderWnd__SetValue_x                                     0x1405B94E0
#define CSliderWnd__SetNumTicks_x                                  0x1405B9360

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404F34A0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405BDE10
#define CStmlWnd__CalculateHSBRange_x                              0x1405A8180
#define CStmlWnd__CalculateVSBRange_x                              0x1405BECB0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405BF7A0
#define CStmlWnd__ForceParseNow_x                                  0x1405BF840
#define CStmlWnd__GetVisibleText_x                                 0x1405BFF10
#define CStmlWnd__MakeStmlColorTag_x                               0x1405C1C70
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405C1CB0
#define CStmlWnd__SetSTMLText_x                                    0x1405C8C80
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405C8E30
#define CStmlWnd__UpdateHistoryString_x                            0x1405C91C0

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405B9A60
#define CTabWnd__DrawCurrentPage_x                                 0x1405B9B00
#define CTabWnd__DrawTab_x                                         0x1405B9ED0
#define CTabWnd__GetTabRect_x                                      0x1405BA540
#define CTabWnd__InsertPage_x                                      0x1405BA810
#define CTabWnd__RemovePage_x                                      0x1405BAA90
#define CTabWnd__SetPage_x                                         0x1405BABF0
#define CTabWnd__UpdatePage_x                                      0x1405BAEF0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405E1DF0
#define CPageWnd__SetTabText_x                                     0x1405E1E60

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BCE30  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BD240


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405D0590
#define CTextureFont__DrawWrappedText1_x                           0x1405D04A0
#define CTextureFont__DrawWrappedText2_x                           0x1405D06C0
#define CTextureFont__GetTextExtent_x                              0x1405D0A70
#define CTextureFont__GetHeight_x                                  0x1405D0A30

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405E6410

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x14059A400

// CXStr
#define CXStr__gFreeLists_x                                        0x140D3CF20
#define CXStr__gCXStrAccess_x                                      0x140F0D788

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405A3800
#define CXWnd__ClrFocus_x                                          0x1405A3AF0
#define CXWnd__Destroy_x                                           0x1405A3C70
#define CXWnd__DoAllDrawing_x                                      0x1405A3D80
#define CXWnd__DrawColoredRect_x                                   0x1405A4540
#define CXWnd__DrawTooltip_x                                       0x1405A5BB0
#define CXWnd__DrawTooltipAtPoint_x                                0x1405A5C60
#define CXWnd__GetChildItem_x                                      0x1405A6570
#define CXWnd__GetChildWndAt_x                                     0x1405A6630
#define CXWnd__GetClientRect_x                                     0x1405A68E0
#define CXWnd__GetClientClipRect_x                                 0x1405A6790
#define CXWnd__GetRelativeRect_x                                   0x1405A82C0
#define CXWnd__GetScreenClipRect_x                                 0x1405A83C0
#define CXWnd__GetScreenRect_x                                     0x1405A8540
#define CXWnd__GetTooltipRect_x                                    0x1405A86B0
#define CXWnd__IsActive_x                                          0x1405A8C70
#define CXWnd__IsDescendantOf_x                                    0x1405A8CA0
#define CXWnd__IsReallyVisible_x                                   0x1405A8D10
#define CXWnd__IsType_x                                            0x1405A8D60
#define CXWnd__Minimize_x                                          0x1405A8E50
#define CXWnd__ProcessTransition_x                                 0x1405A9CD0
#define CXWnd__Resize_x                                            0x1405A9DE0
#define CXWnd__Right_x                                             0x1405A9E80
#define CXWnd__SetFocus_x                                          0x1405AA250
#define CXWnd__SetFont_x                                           0x1405AA2A0
#define CXWnd__SetKeyTooltip_x                                     0x1405AA3B0
#define CXWnd__SetMouseOver_x                                      0x1405AA4F0
#define CXWnd__SetParent_x                                         0x1405AA570
#define CXWnd__StartFade_x                                         0x1405AA9B0
#define CXWnd__vftable_x                                           0x140ABEE50
#define CXWnd__CXWnd_x                                             0x1405A23F0
#define CXWnd__dCXWnd_x                                            0x1405A2D10

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405ECEF0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405CAA90
#define CXWndManager__DrawCursor_x                                 0x1405CAD70
#define CXWndManager__DrawWindows_x                                0x1405CAFD0
#define CXWndManager__GetKeyboardFlags_x                           0x1405CB620
#define CXWndManager__HandleKeyboardMsg_x                          0x1405CB660
#define CXWndManager__RemoveWnd_x                                  0x1405CEC50

// CDBStr
#define CDBStr__GetString_x                                        0x14018B570

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x14067B000

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D12C0
#define CCharacterListWnd__EnterWorld_x                            0x1400D02D0
#define CCharacterListWnd__Quit_x                                  0x1400D12A0
#define CCharacterListWnd__UpdateList_x                            0x1400D2120

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x1406492C0
#define ItemBase__CreateItemTagString_x                            0x140649D10
#define ItemBase__GetImageNum_x                                    0x14064C2C0
#define ItemBase__GetItemValue_x                                   0x14064DD70
#define ItemBase__IsEmpty_x                                        0x14064FA00
#define ItemBase__IsKeyRingItem_x                                  0x140650130
#define ItemBase__ValueSellMerchant_x                              0x140654380
#define ItemClient__CanDrop_x                                      0x1402B4B20
#define ItemClient__CanGoInBag_x                                   0x1402B4C50
#define ItemClient__CreateItemClient_x                             0x1402B4ED0
#define ItemClient__dItemClient_x                                  0x1402B4990

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401AAF20
#define EQ_LoadingS__Array_x                                       0x140D29230

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140660120
#define PcBase__GetCombatAbility_x                                 0x140660810
#define PcBase__GetCombatAbilityTimer_x                            0x1406608B0
#define PcBase__GetItemContainedRealEstateIds_x                    0x140661050
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x140661B90
#define PcClient__AlertInventoryChanged_x                          0x1402D6D30
#define PcClient__GetConLevel_x                                    0x1402D7340  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402D9AC0
#define PcClient__HasLoreItem_x                                    0x1402DAB80
#define PcZoneClient__GetItemRecastTimer_x                         0x1402E7C40
#define PcZoneClient__RemoveMyAffect_x                             0x1402EBA10

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x14021DAC0  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x14021DC70  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x14021DDD0  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x14021DD10  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x140258940  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140185D40

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140635E10
#define PlayerBase__CanSee1_x                                      0x140635EE0
#define PlayerBase__GetVisibilityLineSegment_x                     0x1406363C0
#define PlayerBase__HasProperty_x                                  0x140636590
#define PlayerBase__IsTargetable_x                                 0x140636650
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402F95B0
#define PlayerClient__GetPcClient_x                                0x1402FC0E0
#define PlayerClient__PlayerClient_x                               0x1402F1900
#define PlayerClient__SetNameSpriteState_x                         0x1402FF810
#define PlayerClient__SetNameSpriteTint_x                          0x1403007D0
#define PlayerZoneClient__ChangeHeight_x                           0x14030F2F0
#define PlayerZoneClient__DoAttack_x                               0x140310000
#define PlayerZoneClient__GetLevel_x                               0x140313740
#define PlayerZoneClient__IsValidTeleport_x                        0x14025B6D0
#define PlayerZoneClient__LegalPlayerRace_x                        0x140199AC0

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1403087F0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1403088A0  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1403089A0
#define PlayerManagerClient__CreatePlayer_x                        0x1403082C0
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x1406359D0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402B9D80
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402B9980
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402B99F0
#define KeypressHandler__ClearCommandStateArray_x                  0x1402B9D10  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402B9EA0
#define KeypressHandler__HandleKeyUp_x                             0x1402B9FC0
#define KeypressHandler__SaveKeymapping_x                          0x1402B9C20  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140678B20  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1406728F0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402E0A30  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402E5D80
#define PcZoneClient__GetPcSkillLimit_x                            0x1402E83C0
#define PcZoneClient__RemovePetEffect_x                            0x1402EBCF0
#define PcZoneClient__HasAlternateAbility_x                        0x1402E8F90
#define PcZoneClient__CanEquipItem_x                               0x1402E4090
#define PcZoneClient__GetItemByID_x                                0x1402E6CA0
#define PcZoneClient__RemoveBuffEffect_x                           0x1402EB890
#define PcZoneClient__BandolierSwap_x                              0x1402E30F0

// Doors
#define EQSwitch__UseSwitch_x                                      0x140260200

// IconCache
#define IconCache__GetIcon_x                                       0x1403C5680

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403B9CB0
#define CContainerMgr__CloseContainer_x                            0x1403B95F0
#define CContainerMgr__OpenExperimentContainer_x                   0x1403BA030

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404B0F70

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402AC570

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140441680
#define CLootWnd__RequestLootSlot_x                                0x1404426B0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401DA4F0
#define EQ_Spell__SpellAffects_x                                   0x1401DB7D0
#define EQ_Spell__SpellAffectBase_x                                0x1401DB730
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400DA2E0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400DA290
#define EQ_Spell__IsSPAStacking_x                                  0x1401DB400
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401DAFB0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401DA880

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C2390

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x14050DAF0
#define CTargetWnd__RefreshTargetBuffs_x                           0x14050D200
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x14050CA00

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x140515190  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x1401826F0
#define CTaskManager__GetTaskStatus_x                              0x140182800
#define CTaskManager__GetElementDescription_x                      0x140182380

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401D8810
#define EqSoundManager__PlayScriptMp3_x                            0x1401D7650
#define EqSoundManager__SoundAssistPlay_x                          0x140332A60  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140332DA0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405AB6F0
#define CTextureAnimation__SetCurCell_x                            0x1405ABA00

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402AA770

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1406936B0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x140693730
#define CharacterBase__IsExpansionFlag_x                           0x1401FD6D0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140394760
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140395180
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x1403966D0

// messages
#define msg_spell_worn_off_x                                       0x1402142E0
#define msg_new_text_x                                             0x14020FA90
#define __msgTokenTextParam_x                                      0x140207170
#define msgTokenText_x                                             0x140207080

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140334690
#define SpellManager__GetSpellByGroupAndRank_x                     0x1403345B0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x1406448D0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x14043AAE0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403BEA10
#define CCursorAttachment__IsOkToActivate_x                        0x1403C1CD0
#define CCursorAttachment__RemoveAttachment_x                      0x1403C1F80
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405E48B0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405E4AA0
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405E4AB0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x14014F030
#define CFindItemWnd__Update_x                                     0x14014F9D0
#define CFindItemWnd__PickupSelectedItem_x                         0x140149490

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x140158FE0
#define LootFiltersManager__GetItemFilterData_x                    0x140159AF0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14015A390
#define LootFiltersManager__SetItemLootFilter_x                    0x14015A640

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x1404939F0

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x14032CFE0
#define CResolutionHandler__UpdateResolution_x                     0x140590F80

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403B5FA0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x140697AB0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406979A0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403DC950
#define CGroupWnd__UpdateDisplay_x                                 0x1403DC530

// ItemBase
#define ItemBase__IsLore_x                                         0x140650260
#define ItemBase__IsLoreEquipped_x                                 0x1406502F0

#define MultipleItemMoveManager__ProcessMove_x                     0x1402CCBE0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140258AA0
#define EQPlacedItemManager__GetItemByGuid_x                       0x140258A30
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140258A70

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140327430

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140126CB0
#define FactionManagerClient__HandleFactionMessage_x               0x140127060
#define FactionManagerClient__GetFactionStanding_x                 0x140126480
#define FactionManagerClient__GetMaxFaction_x                      0x140126480
#define FactionManagerClient__GetMinFaction_x                      0x140126330

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AF3A0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140132460

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401B38E0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401B2C60
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401B3700  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401B3680  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x1403399B0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140327430

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x14021DE60

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405A15C0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140086E90

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14034B2A0

// AchievementManager
#define AchievementManager__Instance_x                             0x14008F050

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x14067BB80
#define FreeToPlayClient__RestrictionInfo_x                        0x140AD36B0

// UdpConnection
#define UdpConnection__GetStats_x                                  0x140543BA0

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x14082DE80
#define CGFScreenWnd__CGFScreenWnd_x                               0x140071530
#define CGFScreenWnd__CGFScreenWnd1_x                              0x1400716C0
#define CGFScreenWnd__dCGFScreenWnd_x                              0x140071870

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
