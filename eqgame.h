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

#define __ClientDate                                               20250107u
#define __ExpectedVersionDate                                     "Jan  7 2025"
#define __ExpectedVersionTime                                     "12:30:46"
#define __ActualVersionDate_x                                      0x14094E0F0
#define __ActualVersionTime_x                                      0x14094E0E0
#define __ActualVersionBuild_x                                     0x1408E47C0

// Memory Protection
#define __MemChecker0_x                                            0x1402B3B80
#define __MemChecker1_x                                            0x140575830
#define __MemChecker4_x                                            0x140281C10
#define __EncryptPad0_x                                            0x140D1AE60

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E53A50
#define instEQZoneInfo_x                                           0x140E53C44 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x1402185B0
#define __gfMaxZoomCameraDistance_x                                0x1408E5A38
#define __gfMaxCameraDistance_x                                    0x140A8A958
#define __CurrentSocial_x                                          0x140BD6940 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D12710
#define g_eqCommandStates_x                                        0x140D13780
#define __CommandList_x                                            0x140D139B0
#define __ScreenMode_x                                             0x140D9B36C
#define __gWorld_x                                                 0x140E4DF20
#define __gpbCommandEvent_x                                        0x140E4E474
#define __ServerHost_x                                             0x140E4E668
#define __Guilds_x                                                 0x140E52610
#define __MemCheckBitmask_x                                        0x140E53F8B
#define __MemCheckActive_x                                         0x140E5567D
#define __MouseEventTime_x                                         0x140EC8FC8
#define DI8__MouseState_x                                          0x140ECD128
#define __heqmain_x                                                0x140ECF5B8
#define DI8__Mouse_x                                               0x140ECF5D0
#define __HWnd_x                                                   0x140ECF5D8
#define __Mouse_x                                                  0x140ECF5E0
#define DI8__Keyboard_x                                            0x140ECF600
#define __LoginName_x                                              0x140ECFD6C
#define __CurrentMapLabel_x                                        0x140EE3600
#define __LabelCache_x                                             0x140EE41D0
#define __ChatFilterDefs_x                                         0x140A25A30
#define Teleport_Table_Size_x                                      0x140E4E500
#define Teleport_Table_x                                           0x140E4BEF0

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E4E9A0
#define pinstActiveBanker_x                                        0x140E4E3D0
#define pinstActiveCorpse_x                                        0x140E4E3C0
#define pinstActiveGMaster_x                                       0x140E4E3C8
#define pinstActiveMerchant_x                                      0x140E4E3B8
#define pinstAltAdvManager_x                                       0x140D9C1A8
#define pinstCEverQuest_x                                          0x140ECF618
#define pinstCamActor_x                                            0x140D9B358
#define pinstCDBStr_x                                              0x140D9AF60
#define pinstCDisplay_x                                            0x140E4BED0
#define pinstControlledPlayer_x                                    0x140E4E460
#define pinstCResolutionHandler_x                                  0x141554978
#define pinstCSidlManager_x                                        0x140EF54D0
#define pinstCXWndManager_x                                        0x140EF54C8
#define instDynamicZone_x                                          0x140E524D0 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E5251E
#define instExpeditionName_x                                       0x140E5255E
#define pinstDZMember_x                                            0x140E525E8
#define pinstDZTimerInfo_x                                         0x140E525F0
#define pinstEqLogin_x                                             0x140ECF6B0
#define instTribute_x                                              0x140D0DD50
#define pinstDeviceInputProxy_x                                    0x140E53AAC
#define pinstEQSoundManager_x                                      0x140D9C528
#define pinstEQSpellStrings_x                                      0x140D7FB30
#define pinstSGraphicsEngine_x                                     0x1415546F8
#define pinstLocalPC_x                                             0x140E4BEE0
#define pinstLocalPlayer_x                                         0x140E4E3B0
#define pinstCMercenaryClientManager_x                             0x140ECA8A8
#define pinstModelPlayer_x                                         0x140E4E3E0
#define pinstRenderInterface_x                                     0x141554710
#define pinstSkillMgr_x                                            0x140ECC548
#define pinstSpawnManager_x                                        0x140ECAC70
#define pinstSpellManager_x                                        0x140ECC5B0
#define pinstStringTable_x                                         0x140E4DF18
#define pinstSwitchManager_x                                       0x140E4BE50
#define pinstTarget_x                                              0x140E4E458
#define pinstTaskMember_x                                          0x140D0DD40 // Part of g_taskManager
#define pinstTradeTarget_x                                         0x140E4E3D8
#define instTributeActive_x                                        0x140D0DD79
#define pinstViewActor_x                                           0x140D9B350
#define pinstWorldData_x                                           0x140E4E558
#define pinstPlayerPath_x                                          0x140ECAC98
#define pinstTargetIndicator_x                                     0x140ECC660
#define EQObject_Top_x                                             0x140E4E988

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140EE0758
#define pinstCContainerMgr_x                                       0x140D9B398
#define pinstCContextMenuManager_x                                 0x140EF51B0
#define pinstCInvSlotMgr_x                                         0x140D9B378
#define pinstCItemDisplayManager_x                                 0x140EE31D0
#define pinstCPopupWndManager_x                                    0x140EE3A60
#define pinstCSpellDisplayMgr_x                                    0x140EE40B0
#define pinstCTaskManager_x                                        0x140BD6C80
#define pinstEQSuiteTextureLoader_x                                0x140D24570
#define pinstItemIconCache_x                                       0x140EE0AB8
#define pinstLootFiltersManager_x                                  0x140D9A9A8
#define pinstGFViewListener_x                                      0x140EF4988


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x1402417F0
#define __CastRay_x                                                0x140239BA0
#define __CastRay2_x                                               0x1402398A0
#define __compress_block_x                                         0x14052AED0
#define __ConvertItemTags_x                                        0x14023A000
#define __CleanItemTags_x                                          0x140088C30
#define __CreateCascadeMenuItems_x                                 0x1401881A0
#define __decompress_block_x                                       0x1405710A0
#define __DoesFileExist_x                                          0x1405796E0
#define __EQGetTime_x                                              0x140575DE0
#define __ExecuteCmd_x                                             0x14020FEC0
#define __FixHeading_x                                             0x1406A1AC0
#define __FlushDxKeyboard_x                                        0x140337210
#define __get_bearing_x                                            0x1402439D0
#define __get_melee_range_x                                        0x140243AC0
#define __GetAnimationCache_x                                      0x1403B4690
#define __GetGaugeValueFromEQ_x                                    0x1404EAB80
#define __GetLabelFromEQ_x                                         0x1404EC190
#define __GetXTargetType_x                                         0x1406A2DA0   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x1406A1B40
#define __HelpPath_x                                               0x140EC8E90   // Why?
#define __NewUIINI_x                                               0x1404F7C20   // Why?
#define __ProcessDeviceEvents_x                                    0x140282220
#define __ProcessGameEvents_x                                      0x140276F60
#define __ProcessKeyboardEvents_x                                  0x140338960
#define __ProcessMouseEvents_x                                     0x140278630
#define __SaveColors_x                                             0x1401981C0
#define __STMLToText_x                                             0x14057E030
#define __WndProc_x                                                0x140335A10
#define CMemoryMappedFile__SetFile_x                               0x1407DDB00
#define DrawNetStatus_x                                            0x1402C2070
#define Util__FastTime_x                                           0x140575370
#define __eq_delete_x                                              0x1406A9BD4
#define __eq_new_x                                                 0x1406A9B90
#define __CopyLayout_x                                             0x1402AFF80
#define __ThrottleFrameRate_x                                      0x140266784
#define __ThrottleFrameRateEnd_x                                   0x1402667E4

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140348060
#define CAAWnd__Update_x                                           0x140348360
#define CAAWnd__UpdateSelected_x                                   0x1403493B0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AB020
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A3920
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140832BA8
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AB950

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401A32F0
#define AltAdvManager__IsAbilityReady_x                            0x1401A3780
#define AltAdvManager__GetAAById_x                                 0x1401A2BC0
#define AltAdvManager__CanTrainAbility_x                           0x1401A29D0
#define AltAdvManager__CanSeeAbility_x                             0x1401A2690

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D19C0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D2820
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D2A70
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400E6DF0
#define CharacterZoneClient__CanUseItem_x                          0x1400E7220
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D3440
#define CharacterZoneClient__CastSpell_x                           0x1400D34E0
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E2D50
#define CharacterZoneClient__Cur_HP_x                              0x1400E8930
#define CharacterZoneClient__Cur_Mana_x                            0x1400E8AF0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D6670
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400EEFA0
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FD9C0  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D7AD0
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E66F0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F0B40
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400EFA30
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D7C50
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C7DD0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C97A0
#define CharacterZoneClient__GetHPRegen_x                          0x1400F0170
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E85A0
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F0DD0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D7CD0
#define CharacterZoneClient__GetManaRegen_x                        0x1400F1BB0
#define CharacterZoneClient__GetModCap_x                           0x1400F9180
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D7F60
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D8100
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CC910
#define CharacterZoneClient__HasSkill_x                            0x1400F4BB0
#define CharacterZoneClient__HitBySpell_x                          0x1400D8B80
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DC480
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F8C60
#define CharacterZoneClient__Max_Endurance_x                       0x1402DE820  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F8FB0
#define CharacterZoneClient__Max_Mana_x                            0x1402DEA40  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F9410
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DF8E0
#define CharacterZoneClient__SpellDuration_x                       0x1400E0610
#define CharacterZoneClient__TotalEffect_x                         0x1400E1930
#define CharacterZoneClient__UseSkill_x                            0x1400FE930


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140366580

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x1403708B0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14036C750
#define CBarterSearchWnd__UpdateInventoryList_x                    0x140370330

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140372F70

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AA96D0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140395EB0
#define CChatWindowManager__InitContextMenu_x                      0x140396040
#define CChatWindowManager__FreeChatWindow_x                       0x140394F30
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x14039DC20
#define CChatWindowManager__CreateChatWindow_x                     0x140394870

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140106E00

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x14039EC70
#define CChatWindow__Clear_x                                       0x14039FC20
#define CChatWindow__WndNotification_x                             0x1403A0E10
#define CChatWindow__AddHistory_x                                  0x14039F720

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405B3070
#define CContextMenu__RemoveMenuItem_x                             0x1405B3460
#define CContextMenu__RemoveAllMenuItems_x                         0x1405B3430
#define CContextMenu__CheckMenuItem_x                              0x1405B32A0
#define CContextMenu__SetMenuItem_x                                0x1405B3480
#define CContextMenu__AddSeparator_x                               0x1405B31E0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405A4F30
#define CContextMenuManager__RemoveMenu_x                          0x1405A5510
#define CContextMenuManager__PopupMenu_x                           0x1405A5250
#define CContextMenuManager__Flush_x                               0x1405A4FB0
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403AC5B0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x140621250
#define CChatService__GetFriendName_x                              0x14066BC30

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x140595E00
#define CComboWnd__Draw_x                                          0x140595F00
#define CComboWnd__GetCurChoice_x                                  0x1405961E0  // unused
#define CComboWnd__GetListRect_x                                   0x140596280
#define CComboWnd__InsertChoice_x                                  0x1405965C0
#define CComboWnd__SetColors_x                                     0x140596950
#define CComboWnd__SetChoice_x                                     0x140596910
#define CComboWnd__GetItemCount_x                                  0x140596270
#define CComboWnd__GetCurChoiceText_x                              0x140596220  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405961B0
#define CComboWnd__InsertChoiceAtIndex_x                           0x140596680

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403AA320
#define CContainerWnd__SetContainer_x                              0x140401430
#define CContainerWnd__vftable_x                                   0x1409C1B28

// CDisplay
#define CDisplay__cameraType_x                                     0x140D9B0FC
#define CDisplay__ZoneMainUI_x                                     0x1405CD2A0
#define CDisplay__PreZoneMainUI_x                                  0x1401950F0
#define CDisplay__CleanGameUI_x                                    0x140187260
#define CDisplay__GetClickedActor_x                                0x14018B420
#define CDisplay__GetUserDefinedColor_x                            0x14018C090
#define CDisplay__InitCharSelectUI_x                               0x14018C340
#define CDisplay__ReloadUI_x                                       0x1401973E0
#define CDisplay__RestartUI_x                                      0x1401F62C0
#define CDisplay__WriteTextHD2_x                                   0x14019E3F0
#define CDisplay__TrueDistance_x                                   0x14019E0A0
#define CDisplay__SetViewActor_x                                   0x14019A8E0
#define CDisplay__GetFloorHeight_x                                 0x14018B680
#define CDisplay__ToggleScreenshotMode_x                           0x14019DB90
#define CDisplay__RealRender_World_x                               0x1401967C0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405D74D0
#define CEditWnd__DrawCaret_x                                      0x1405C8F80  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405C9440
#define CEditWnd__GetCaretPt_x                                     0x1405C96C0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405C9700
#define CEditWnd__GetDisplayString_x                               0x1405C9970
#define CEditWnd__GetHorzOffset_x                                  0x1405C9BB0
#define CEditWnd__GetLineForPrintableChar_x                        0x1405C9D00
#define CEditWnd__GetSelStartPt_x                                  0x1405C9FE0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405C9E30
#define CEditWnd__PointFromPrintableChar_x                         0x1405CAB90
#define CEditWnd__ReplaceSelection_x                               0x1405CAF40
#define CEditWnd__SelectableCharFromPoint_x                        0x1405CB3E0
#define CEditWnd__SetEditable_x                                    0x1405CB670
#define CEditWnd__SetWindowText_x                                  0x1405CB6A0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140267890
#define CEverQuest__ClickedPlayer_x                                0x14025D1E0
#define CEverQuest__CreateTargetIndicator_x                        0x14025DAA0
#define CEverQuest__DoTellWindow_x                                 0x140106B10 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1401073D0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140269250
#define CEverQuest__dsp_chat_x                                     0x140106540 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x140293FB0
#define CEverQuest__Emote_x                                        0x140269C30
#define CEverQuest__GetBodyTypeDesc_x                              0x14026A9E0
#define CEverQuest__GetClassDesc_x                                 0x14026AA40
#define CEverQuest__GetClassThreeLetterCode_x                      0x14026AE10
#define CEverQuest__GetDeityDesc_x                                 0x14026B0C0
#define CEverQuest__GetLangDesc_x                                  0x14026B4F0
#define CEverQuest__GetRaceDesc_x                                  0x14026B890
#define CEverQuest__InterpretCmd_x                                 0x14026D1D0
#define CEverQuest__LeftClickedOnPlayer_x                          0x140282290
#define CEverQuest__LMouseUp_x                                     0x14026EBF0
#define CEverQuest__RightClickedOnPlayer_x                         0x14027FAB0
#define CEverQuest__RMouseUp_x                                     0x1402791C0
#define CEverQuest__SetGameState_x                                 0x140285150
#define CEverQuest__UPCNotificationFlush_x                         0x14028AA80 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14026E860
#define CEverQuest__ReportSuccessfulHeal_x                         0x14027A570
#define CEverQuest__ReportSuccessfulHit_x                          0x14027B390

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403BF5C0

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C1940
#define CGuild__GetGuildName_x                                     0x1400C1980

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403E27D0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402A5D20
#define CHotButton__SetCheck_x                                     0x1402A5FF0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403FA1A0
#define CInvSlotMgr__MoveItem_x                                    0x1403FA380
#define CInvSlotMgr__SelectSlot_x                                  0x1403FBD80

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403F73D0
#define CInvSlot__SliderComplete_x                                 0x1403F8910
#define CInvSlot__GetItemBase_x                                    0x1403F2E30
#define CInvSlot__UpdateItem_x                                     0x1403F8DC0

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403FD110

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x14041E530
#define CItemDisplayWnd__UpdateStrings_x                           0x140420FA0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x14041ADC0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x14041C6F0
#define CItemDisplayWnd__RequestConvertItem_x                      0x14041D960

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404E76B0
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404E93A0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140524240

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140417520

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14014F490

// CLabel
#define CLabel__UpdateText_x                                       0x140428370

// CListWnd
#define CListWnd__CListWnd_x                                       0x140599790
#define CListWnd__dCListWnd_x                                      0x140599BE0
#define CListWnd__vftable_x                                        0x140AA7820
#define CListWnd__AddColumn_x                                      0x14059A280
#define CListWnd__AddColumn1_x                                     0x14059A320
#define CListWnd__AddLine_x                                        0x14059A480
#define CListWnd__AddString_x                                      0x14059AA10
#define CListWnd__CalculateFirstVisibleLine_x                      0x14059AF80
#define CListWnd__CalculateVSBRange_x                              0x14059B260
#define CListWnd__ClearSel_x                                       0x14059B410
#define CListWnd__ClearAllSel_x                                    0x14059B3B0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x14059B470
#define CListWnd__Compare_x                                        0x14059B630
#define CListWnd__Draw_x                                           0x14059BB00
#define CListWnd__DrawColumnSeparators_x                           0x14059C6B0
#define CListWnd__DrawHeader_x                                     0x14059C770
#define CListWnd__DrawItem_x                                       0x14059CE50
#define CListWnd__DrawLine_x                                       0x14059D7D0
#define CListWnd__DrawSeparator_x                                  0x14059DC90
#define CListWnd__EnableLine_x                                     0x14059E0B0
#define CListWnd__EnsureVisible_x                                  0x14059E110
#define CListWnd__ExtendSel_x                                      0x14059E210
#define CListWnd__GetColumnMinWidth_x                              0x14059E5A0
#define CListWnd__GetColumnWidth_x                                 0x14059E620
#define CListWnd__GetCurSel_x                                      0x14059E720
#define CListWnd__GetItemData_x                                    0x14059EAA0
#define CListWnd__GetItemHeight_x                                  0x14059EAE0
#define CListWnd__GetItemRect_x                                    0x14059ED00
#define CListWnd__GetItemText_x                                    0x14059EFA0
#define CListWnd__GetSelList_x                                     0x14059F1F0
#define CListWnd__GetSeparatorRect_x                               0x14059F3E0
#define CListWnd__InsertLine_x                                     0x1405A0850
#define CListWnd__RemoveLine_x                                     0x1405A0EC0
#define CListWnd__SetColors_x                                      0x1405A1280
#define CListWnd__SetColumnJustification_x                         0x1405A12A0
#define CListWnd__SetColumnLabel_x                                 0x1405A1320
#define CListWnd__SetColumnWidth_x                                 0x1405A14C0
#define CListWnd__SetCurSel_x                                      0x1405A1590
#define CListWnd__SetItemColor_x                                   0x1405A1800
#define CListWnd__SetItemData_x                                    0x1405A18A0
#define CListWnd__SetItemText_x                                    0x1405A1AE0
#define CListWnd__Sort_x                                           0x1405A1EF0
#define CListWnd__ToggleSel_x                                      0x1405A2060
#define CListWnd__SetColumnsSizable_x                              0x1405A1510
#define CListWnd__SetItemWnd_x                                     0x1405A1C10
#define CListWnd__GetItemWnd_x                                     0x14059F180
#define CListWnd__SetItemIcon_x                                    0x1405A18E0
#define CListWnd__CalculateCustomWindowPositions_x                 0x14059AD50
#define CListWnd__SetVScrollPos_x                                  0x1405A1E50

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x14043B650

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A0E628
#define MapViewMap__Clear_x                                        0x14043D1D0
#define MapViewMap__SetZoom_x                                      0x140443820
#define MapViewMap__HandleLButtonDown_x                            0x140440360

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140464ED0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x14046B450
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x14046BBF0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14046F400
#define CMerchantWnd__SelectBuySellSlot_x                          0x14046E740
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140473680

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x140646FA0
#define CPacketScrambler__hton_x                                   0x140646F90

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405C2840
#define CSidlManagerBase__FindAnimation1_x                         0x1405C2780
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405C2E70
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405C2C20
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405C1B70
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405C1B00
#define CSidlManagerBase__CreateXWnd_x                             0x1405C1140

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404DA6B0
#define CSidlManager__CreateXWnd_x                                 0x1404DA870

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405873B0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x1405874C0
#define CSidlScreenWnd__ConvertToRes_x                             0x1405D1A10 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x140587640
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x140586AE0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x140586BB0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x140586DC0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x140587D30
#define CSidlScreenWnd__EnableIniStorage_x                         0x140587F60
#define CSidlScreenWnd__GetChildItem_x                             0x140588100
#define CSidlScreenWnd__GetSidlPiece_x                             0x140588350
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405923C0 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405886C0
#define CSidlScreenWnd__LoadIniInfo_x                              0x140588A30
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405892F0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140589CF0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140EF4828
#define CSidlScreenWnd__StoreIniInfo_x                             0x14058A380
#define CSidlScreenWnd__StoreIniVis_x                              0x14058AB70
#define CSidlScreenWnd__vftable_x                                  0x140AA6AA8
#define CSidlScreenWnd__WndNotification_x                          0x14058ABC0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x1403206F0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140320B90 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x140320AC0
#define CSkillMgr__IsActivatedSkill_x                              0x140320F40
#define CSkillMgr__IsCombatSkill_x                                 0x140320F80
#define CSkillMgr__GetSkillTimerDuration_x                         0x140320EB0
#define CSkillMgr__GetSkillLastUsed_x                              0x140320B10

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405A29E0
#define CSliderWnd__SetValue_x                                     0x1405A31F0
#define CSliderWnd__SetNumTicks_x                                  0x1405A3070

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404E0D00

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405A7990
#define CStmlWnd__CalculateHSBRange_x                              0x140591DB0
#define CStmlWnd__CalculateVSBRange_x                              0x1405A88B0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405A9330
#define CStmlWnd__ForceParseNow_x                                  0x1405A93D0
#define CStmlWnd__GetVisibleText_x                                 0x1405A9AA0
#define CStmlWnd__MakeStmlColorTag_x                               0x1405AB800
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405AB840
#define CStmlWnd__SetSTMLText_x                                    0x1405B2810
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405B29C0
#define CStmlWnd__UpdateHistoryString_x                            0x1405B2D50

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405A35C0
#define CTabWnd__DrawCurrentPage_x                                 0x1405A3660
#define CTabWnd__DrawTab_x                                         0x1405A3A30
#define CTabWnd__GetTabRect_x                                      0x1405A40A0
#define CTabWnd__InsertPage_x                                      0x1405A4370
#define CTabWnd__RemovePage_x                                      0x1405A4600
#define CTabWnd__SetPage_x                                         0x1405A4760
#define CTabWnd__UpdatePage_x                                      0x1405A4A60

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405CBB00
#define CPageWnd__SetTabText_x                                     0x1405CBB70

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BB090  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BB4A0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405BA1F0
#define CTextureFont__DrawWrappedText1_x                           0x1405BA100
#define CTextureFont__DrawWrappedText2_x                           0x1405BA320
#define CTextureFont__GetTextExtent_x                              0x1405BA6D0
#define CTextureFont__GetHeight_x                                  0x1405BA690

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405D0170

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405866C0

// CXStr
#define CXStr__gFreeLists_x                                        0x140D23EE0
#define CXStr__gCXStrAccess_x                                      0x140EF4628

// CXWnd
#define CXWnd__BringToTop_x                                        0x14058D440
#define CXWnd__ClrFocus_x                                          0x14058D730
#define CXWnd__Destroy_x                                           0x14058D8B0
#define CXWnd__DoAllDrawing_x                                      0x14058D9B0
#define CXWnd__DrawColoredRect_x                                   0x14058E180
#define CXWnd__DrawTooltip_x                                       0x14058F7E0
#define CXWnd__DrawTooltipAtPoint_x                                0x14058F890
#define CXWnd__GetChildItem_x                                      0x1405901A0
#define CXWnd__GetChildWndAt_x                                     0x140590260
#define CXWnd__GetClientRect_x                                     0x140590510
#define CXWnd__GetClientClipRect_x                                 0x1405903D0
#define CXWnd__GetRelativeRect_x                                   0x140591ED0
#define CXWnd__GetScreenClipRect_x                                 0x140591FE0
#define CXWnd__GetScreenRect_x                                     0x140592150
#define CXWnd__GetTooltipRect_x                                    0x1405922D0
#define CXWnd__IsActive_x                                          0x140592880
#define CXWnd__IsDescendantOf_x                                    0x1405928B0
#define CXWnd__IsReallyVisible_x                                   0x140592920
#define CXWnd__IsType_x                                            0x140592960
#define CXWnd__Minimize_x                                          0x140592A60
#define CXWnd__ProcessTransition_x                                 0x140593910
#define CXWnd__Resize_x                                            0x140593A30
#define CXWnd__Right_x                                             0x140593AD0
#define CXWnd__SetFocus_x                                          0x140593E90
#define CXWnd__SetFont_x                                           0x140593EE0
#define CXWnd__SetKeyTooltip_x                                     0x140593FF0
#define CXWnd__SetMouseOver_x                                      0x140594130
#define CXWnd__SetParent_x                                         0x1405941B0
#define CXWnd__StartFade_x                                         0x1405945E0
#define CXWnd__vftable_x                                           0x140AA7080
#define CXWnd__CXWnd_x                                             0x14058BFE0
#define CXWnd__dCXWnd_x                                            0x14058C930

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405D6C50

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405B4630
#define CXWndManager__DrawCursor_x                                 0x1405B4910
#define CXWndManager__DrawWindows_x                                0x1405B4B70
#define CXWndManager__GetKeyboardFlags_x                           0x1405B5240
#define CXWndManager__HandleKeyboardMsg_x                          0x1405B5280
#define CXWndManager__RemoveWnd_x                                  0x1405B88B0

// CDBStr
#define CDBStr__GetString_x                                        0x140185420

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x140650DC0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CF540
#define CCharacterListWnd__EnterWorld_x                            0x1400CE240
#define CCharacterListWnd__Quit_x                                  0x1400CF520
#define CCharacterListWnd__UpdateList_x                            0x1400D03B0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x14061E420
#define ItemBase__CreateItemTagString_x                            0x14061EE70
#define ItemBase__GetImageNum_x                                    0x1406213E0
#define ItemBase__GetItemValue_x                                   0x140622EA0
#define ItemBase__IsEmpty_x                                        0x140624AC0
#define ItemBase__IsKeyRingItem_x                                  0x1406251F0
#define ItemBase__ValueSellMerchant_x                              0x140629440
#define ItemClient__CanDrop_x                                      0x1402A8220
#define ItemClient__CanGoInBag_x                                   0x1402A8350
#define ItemClient__CreateItemClient_x                             0x1402A85D0
#define ItemClient__dItemClient_x                                  0x1402A8090

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401A4CA0
#define EQ_LoadingS__Array_x                                       0x140D10220

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140635CF0
#define PcBase__GetCombatAbility_x                                 0x1406363E0
#define PcBase__GetCombatAbilityTimer_x                            0x140636480
#define PcBase__GetItemContainedRealEstateIds_x                    0x140636C20
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x140637760
#define PcClient__AlertInventoryChanged_x                          0x1402CA650
#define PcClient__GetConLevel_x                                    0x1402CAC70  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402CD440
#define PcClient__HasLoreItem_x                                    0x1402CE4A0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402DBD90
#define PcZoneClient__RemoveMyAffect_x                             0x1402DF960

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x1402145D0  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x140214780  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x1402148E0  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x140214820  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x14024E7D0  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14017FC80

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140694940
#define PlayerBase__CanSee1_x                                      0x140694A10
#define PlayerBase__GetVisibilityLineSegment_x                     0x140694ED0
#define PlayerBase__HasProperty_x                                  0x1406950A0
#define PlayerBase__IsTargetable_x                                 0x140695160
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402ED200
#define PlayerClient__GetPcClient_x                                0x1402EFA30
#define PlayerClient__PlayerClient_x                               0x1402E5A10
#define PlayerClient__SetNameSpriteState_x                         0x1402F30D0
#define PlayerClient__SetNameSpriteTint_x                          0x1402F4090
#define PlayerZoneClient__ChangeHeight_x                           0x140302810
#define PlayerZoneClient__DoAttack_x                               0x140303520
#define PlayerZoneClient__GetLevel_x                               0x140306C40
#define PlayerZoneClient__IsValidTeleport_x                        0x140251560
#define PlayerZoneClient__LegalPlayerRace_x                        0x140193970

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402FBF90  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402FC040  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402FC140
#define PlayerManagerClient__CreatePlayer_x                        0x1402FBA60
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140694500

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402AD480
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402AD080
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402AD0F0
#define KeypressHandler__ClearCommandStateArray_x                  0x1402AD410  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402AD5A0
#define KeypressHandler__HandleKeyUp_x                             0x1402AD6C0
#define KeypressHandler__SaveKeymapping_x                          0x1402AD320  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x14064E900  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1406486D0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402D4A40  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402D9D60
#define PcZoneClient__GetPcSkillLimit_x                            0x1402DC480
#define PcZoneClient__RemovePetEffect_x                            0x1402DFC40
#define PcZoneClient__HasAlternateAbility_x                        0x1402DD050
#define PcZoneClient__CanEquipItem_x                               0x1402D80A0
#define PcZoneClient__GetItemByID_x                                0x1402DADF0
#define PcZoneClient__RemoveBuffEffect_x                           0x1402DF7E0
#define PcZoneClient__BandolierSwap_x                              0x1402D70F0

// Doors
#define EQSwitch__UseSwitch_x                                      0x140256090

// IconCache
#define IconCache__GetIcon_x                                       0x1403B46C0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403A90D0
#define CContainerMgr__CloseContainer_x                            0x1403A8A10
#define CContainerMgr__OpenExperimentContainer_x                   0x1403A9450

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x14049EA40

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402A0380

// CLootWnd
#define CLootWnd__LootAll_x                                        0x14042F650
#define CLootWnd__RequestLootSlot_x                                0x140430670

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401D3FA0
#define EQ_Spell__SpellAffects_x                                   0x1401D5250
#define EQ_Spell__SpellAffectBase_x                                0x1401D51B0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D8290
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D8240
#define EQ_Spell__IsSPAStacking_x                                  0x1401D4E80
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401D4A40
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401D4310

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C0580

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1404FB420
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404FAB30
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404FA330

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x140502A90  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x14017C640
#define CTaskManager__GetTaskStatus_x                              0x14017C750
#define CTaskManager__GetElementDescription_x                      0x14017C2D0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401D2310
#define EqSoundManager__PlayScriptMp3_x                            0x1401D1150
#define EqSoundManager__SoundAssistPlay_x                          0x140325D30  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140326070  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x140595390
#define CTextureAnimation__SetCurCell_x                            0x1405956A0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x14029E5E0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x140669300
#define CharacterBase__GetItemByGlobalIndex1_x                     0x140669380
#define CharacterBase__IsExpansionFlag_x                           0x1401F5B00

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140386DA0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140387730
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140388C70

// messages
#define msg_spell_worn_off_x                                       0x14020AF00
#define msg_new_text_x                                             0x140206770
#define __msgTokenTextParam_x                                      0x1401FE0B0
#define msgTokenText_x                                             0x1401FDFD0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x1403276F0
#define SpellManager__GetSpellByGroupAndRank_x                     0x140327610

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x1406A3180

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140428AC0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403ADDC0
#define CCursorAttachment__IsOkToActivate_x                        0x1403B0D20
#define CCursorAttachment__RemoveAttachment_x                      0x1403B0FD0
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405CE610
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405CE800
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405CE810

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x14014A660
#define CFindItemWnd__Update_x                                     0x14014B000
#define CFindItemWnd__PickupSelectedItem_x                         0x140144AE0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x140154190
#define LootFiltersManager__GetItemFilterData_x                    0x140154CA0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140155540
#define LootFiltersManager__SetItemLootFilter_x                    0x1401557F0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x140481670

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x1403202B0
#define CResolutionHandler__UpdateResolution_x                     0x1406A79E0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403A53B0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x14066D6F0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x14066D5E0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403CB910
#define CGroupWnd__UpdateDisplay_x                                 0x1403CB4F0

// ItemBase
#define ItemBase__IsLore_x                                         0x140625320
#define ItemBase__IsLoreEquipped_x                                 0x1406253B0

#define MultipleItemMoveManager__ProcessMove_x                     0x1402C0210

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14024E930
#define EQPlacedItemManager__GetItemByGuid_x                       0x14024E8C0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14024E900

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14031A700

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140124600
#define FactionManagerClient__HandleFactionMessage_x               0x1401249B0
#define FactionManagerClient__GetFactionStanding_x                 0x140123DD0
#define FactionManagerClient__GetMaxFaction_x                      0x140123DD0
#define FactionManagerClient__GetMinFaction_x                      0x140123C80

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AD630

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x14012FDA0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401AD600
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401AC980
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401AD420  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401AD3A0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x14032C760

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14031A700

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x140214970

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x14058B1B0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140085AE0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14033DF90

// AchievementManager
#define AchievementManager__Instance_x                             0x14008D4B0

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x140651940
#define FreeToPlayClient__RestrictionInfo_x                        0x140ABB150

// UdpConnection
#define UdpConnection__GetStats_x                                  0x1405312F0

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x14081A538
#define CGFScreenWnd__CGFScreenWnd_x                               0x140070400
#define CGFScreenWnd__CGFScreenWnd1_x                              0x140070590
#define CGFScreenWnd__dCGFScreenWnd_x                              0x140070740

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
