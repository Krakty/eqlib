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

#define __ClientDate                                               20250121u
#define __ExpectedVersionDate                                     "Jan 21 2025"
#define __ExpectedVersionTime                                     "13:02:29"
#define __ActualVersionDate_x                                      0x14094E0F0
#define __ActualVersionTime_x                                      0x14094E0E0
#define __ActualVersionBuild_x                                     0x1408E47C0

// Memory Protection
#define __MemChecker0_x                                            0x1402B3E20
#define __MemChecker1_x                                            0x1405760E0
#define __MemChecker4_x                                            0x140281E80
#define __EncryptPad0_x                                            0x140D1AE60

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E53A50
#define instEQZoneInfo_x                                           0x140E53C44 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x140218810
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
#define __allowslashcommand_x                                      0x140241A60
#define __CastRay_x                                                0x140239E10
#define __CastRay2_x                                               0x140239B10
#define __compress_block_x                                         0x14052B780
#define __ConvertItemTags_x                                        0x14023A270
#define __CleanItemTags_x                                          0x140088C30
#define __CreateCascadeMenuItems_x                                 0x140188250
#define __decompress_block_x                                       0x140571950
#define __DoesFileExist_x                                          0x140579F90
#define __EQGetTime_x                                              0x140576690
#define __ExecuteCmd_x                                             0x140210120
#define __FixHeading_x                                             0x1406A1E70
#define __FlushDxKeyboard_x                                        0x140337690
#define __get_bearing_x                                            0x140243C40
#define __get_melee_range_x                                        0x140243D30
#define __GetAnimationCache_x                                      0x1403B4DD0
#define __GetGaugeValueFromEQ_x                                    0x1404EB470
#define __GetLabelFromEQ_x                                         0x1404ECA80
#define __GetXTargetType_x                                         0x1406A3150   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x1406A1EF0
#define __HelpPath_x                                               0x140EC8E90   // Why?
#define __NewUIINI_x                                               0x1404F8510   // Why?
#define __ProcessDeviceEvents_x                                    0x140282490
#define __ProcessGameEvents_x                                      0x1402771C0
#define __ProcessKeyboardEvents_x                                  0x140338DE0
#define __ProcessMouseEvents_x                                     0x1402788A0
#define __SaveColors_x                                             0x140198270
#define __STMLToText_x                                             0x14057E8E0
#define __WndProc_x                                                0x140335E90
#define CMemoryMappedFile__SetFile_x                               0x1407DDEC0
#define DrawNetStatus_x                                            0x1402C2310
#define Util__FastTime_x                                           0x140575C20
#define __eq_delete_x                                              0x1406A9F84
#define __eq_new_x                                                 0x1406A9F40
#define __CopyLayout_x                                             0x1402B0230
#define __ThrottleFrameRate_x                                      0x1402669E4
#define __ThrottleFrameRateEnd_x                                   0x140266A44

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x1403487C0
#define CAAWnd__Update_x                                           0x140348AC0
#define CAAWnd__UpdateSelected_x                                   0x140349B10

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AAFF0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A38F0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140832BA8
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AB920

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401A33B0
#define AltAdvManager__IsAbilityReady_x                            0x1401A3840
#define AltAdvManager__GetAAById_x                                 0x1401A2C80
#define AltAdvManager__CanTrainAbility_x                           0x1401A2A90
#define AltAdvManager__CanSeeAbility_x                             0x1401A2750

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D1950
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D27B0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D2A00
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400E6DB0
#define CharacterZoneClient__CanUseItem_x                          0x1400E71E0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D33D0
#define CharacterZoneClient__CastSpell_x                           0x1400D3470
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E2D10
#define CharacterZoneClient__Cur_HP_x                              0x1400E88F0
#define CharacterZoneClient__Cur_Mana_x                            0x1400E8AB0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D6600
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400EEF60
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FD980  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D7A60
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E66B0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F0B00
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400EF9F0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D7BE0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C7D60
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C9730
#define CharacterZoneClient__GetHPRegen_x                          0x1400F0130
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E8560
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F0D90
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D7C60
#define CharacterZoneClient__GetManaRegen_x                        0x1400F1B70
#define CharacterZoneClient__GetModCap_x                           0x1400F9140
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D7EF0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D8090
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CC8A0
#define CharacterZoneClient__HasSkill_x                            0x1400F4B70
#define CharacterZoneClient__HitBySpell_x                          0x1400D8B10
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DC410
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F8C20
#define CharacterZoneClient__Max_Endurance_x                       0x1402DEB30  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F8F70
#define CharacterZoneClient__Max_Mana_x                            0x1402DED50  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F93D0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DF890
#define CharacterZoneClient__SpellDuration_x                       0x1400E05C0
#define CharacterZoneClient__TotalEffect_x                         0x1400E18F0
#define CharacterZoneClient__UseSkill_x                            0x1400FE8F0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140366C90

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140370FC0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14036CE60
#define CBarterSearchWnd__UpdateInventoryList_x                    0x140370A40

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140373690

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AA96D0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140396600
#define CChatWindowManager__InitContextMenu_x                      0x140396790
#define CChatWindowManager__FreeChatWindow_x                       0x140395680
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x14039E370
#define CChatWindowManager__CreateChatWindow_x                     0x140394FC0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140106DD0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x14039F3C0
#define CChatWindow__Clear_x                                       0x1403A0380
#define CChatWindow__WndNotification_x                             0x1403A1570
#define CChatWindow__AddHistory_x                                  0x14039FE80

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405B3890
#define CContextMenu__RemoveMenuItem_x                             0x1405B3C80
#define CContextMenu__RemoveAllMenuItems_x                         0x1405B3C50
#define CContextMenu__CheckMenuItem_x                              0x1405B3AC0
#define CContextMenu__SetMenuItem_x                                0x1405B3CA0
#define CContextMenu__AddSeparator_x                               0x1405B3A00

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405A5760
#define CContextMenuManager__RemoveMenu_x                          0x1405A5D30
#define CContextMenuManager__PopupMenu_x                           0x1405A5A70
#define CContextMenuManager__Flush_x                               0x1405A57E0
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403ACD10

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x14066C360
#define CChatService__GetFriendName_x                              0x14066C370

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x140596680
#define CComboWnd__Draw_x                                          0x140596780
#define CComboWnd__GetCurChoice_x                                  0x140596A60  // unused
#define CComboWnd__GetListRect_x                                   0x140596B00
#define CComboWnd__InsertChoice_x                                  0x140596E40
#define CComboWnd__SetColors_x                                     0x1405971D0
#define CComboWnd__SetChoice_x                                     0x140597190
#define CComboWnd__GetItemCount_x                                  0x140596AF0
#define CComboWnd__GetCurChoiceText_x                              0x140596AA0  // unused
#define CComboWnd__GetChoiceText_x                                 0x140596A30
#define CComboWnd__InsertChoiceAtIndex_x                           0x140596F00

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403AAA80
#define CContainerWnd__SetContainer_x                              0x140401C30
#define CContainerWnd__vftable_x                                   0x1409C1B28

// CDisplay
#define CDisplay__cameraType_x                                     0x140D9B0FC
#define CDisplay__ZoneMainUI_x                                     0x1405CD960
#define CDisplay__PreZoneMainUI_x                                  0x1401951A0
#define CDisplay__CleanGameUI_x                                    0x140187310
#define CDisplay__GetClickedActor_x                                0x14018B4D0
#define CDisplay__GetUserDefinedColor_x                            0x14018C140
#define CDisplay__InitCharSelectUI_x                               0x14018C3F0
#define CDisplay__ReloadUI_x                                       0x140197490
#define CDisplay__RestartUI_x                                      0x1401F6500
#define CDisplay__WriteTextHD2_x                                   0x14019E4A0
#define CDisplay__TrueDistance_x                                   0x14019E150
#define CDisplay__SetViewActor_x                                   0x14019A990
#define CDisplay__GetFloorHeight_x                                 0x14018B730
#define CDisplay__ToggleScreenshotMode_x                           0x14019DC40
#define CDisplay__RealRender_World_x                               0x140196870

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405D7B80
#define CEditWnd__DrawCaret_x                                      0x1405C9640  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405C9B00
#define CEditWnd__GetCaretPt_x                                     0x1405C9D80  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405C9DC0
#define CEditWnd__GetDisplayString_x                               0x1405CA030
#define CEditWnd__GetHorzOffset_x                                  0x1405CA270
#define CEditWnd__GetLineForPrintableChar_x                        0x1405CA3C0
#define CEditWnd__GetSelStartPt_x                                  0x1405CA6A0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405CA4F0
#define CEditWnd__PointFromPrintableChar_x                         0x1405CB250
#define CEditWnd__ReplaceSelection_x                               0x1405CB600
#define CEditWnd__SelectableCharFromPoint_x                        0x1405CBAA0
#define CEditWnd__SetEditable_x                                    0x1405CBD30
#define CEditWnd__SetWindowText_x                                  0x1405CBD60

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140267AF0
#define CEverQuest__ClickedPlayer_x                                0x14025D440
#define CEverQuest__CreateTargetIndicator_x                        0x14025DD00
#define CEverQuest__DoTellWindow_x                                 0x140106AE0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1401073A0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x1402694B0
#define CEverQuest__dsp_chat_x                                     0x140106510 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x140294220
#define CEverQuest__Emote_x                                        0x140269E90
#define CEverQuest__GetBodyTypeDesc_x                              0x14026AC40
#define CEverQuest__GetClassDesc_x                                 0x14026ACA0
#define CEverQuest__GetClassThreeLetterCode_x                      0x14026B070
#define CEverQuest__GetDeityDesc_x                                 0x14026B320
#define CEverQuest__GetLangDesc_x                                  0x14026B750
#define CEverQuest__GetRaceDesc_x                                  0x14026BAF0
#define CEverQuest__InterpretCmd_x                                 0x14026D430
#define CEverQuest__LeftClickedOnPlayer_x                          0x140282500
#define CEverQuest__LMouseUp_x                                     0x14026EE50
#define CEverQuest__RightClickedOnPlayer_x                         0x14027FD20
#define CEverQuest__RMouseUp_x                                     0x140279430
#define CEverQuest__SetGameState_x                                 0x1402853C0
#define CEverQuest__UPCNotificationFlush_x                         0x14028ACF0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14026EAC0
#define CEverQuest__ReportSuccessfulHeal_x                         0x14027A7E0
#define CEverQuest__ReportSuccessfulHit_x                          0x14027B600

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403BFD00

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C1900
#define CGuild__GetGuildName_x                                     0x1400C1940

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403E2F30

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402A5FA0
#define CHotButton__SetCheck_x                                     0x1402A6270

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403FA960
#define CInvSlotMgr__MoveItem_x                                    0x1403FAB40
#define CInvSlotMgr__SelectSlot_x                                  0x1403FC560

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403F7B80
#define CInvSlot__SliderComplete_x                                 0x1403F90C0
#define CInvSlot__GetItemBase_x                                    0x1403F35C0
#define CInvSlot__UpdateItem_x                                     0x1403F9570

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403FD8F0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x14041ECE0
#define CItemDisplayWnd__UpdateStrings_x                           0x1404217D0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x14041B4D0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x14041CE30
#define CItemDisplayWnd__RequestConvertItem_x                      0x14041E0F0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404E7F90
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404E9C80

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140524AF0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140417C00

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14014F4D0

// CLabel
#define CLabel__UpdateText_x                                       0x140428BD0

// CListWnd
#define CListWnd__CListWnd_x                                       0x14059A010
#define CListWnd__dCListWnd_x                                      0x14059A460
#define CListWnd__vftable_x                                        0x140AA7820
#define CListWnd__AddColumn_x                                      0x14059AB00
#define CListWnd__AddColumn1_x                                     0x14059ABA0
#define CListWnd__AddLine_x                                        0x14059AD00
#define CListWnd__AddString_x                                      0x14059B290
#define CListWnd__CalculateFirstVisibleLine_x                      0x14059B800
#define CListWnd__CalculateVSBRange_x                              0x14059BAE0
#define CListWnd__ClearSel_x                                       0x14059BC90
#define CListWnd__ClearAllSel_x                                    0x14059BC30
#define CListWnd__CloseAndUpdateEditWindow_x                       0x14059BCF0
#define CListWnd__Compare_x                                        0x14059BEA0
#define CListWnd__Draw_x                                           0x14059C370
#define CListWnd__DrawColumnSeparators_x                           0x14059CF20
#define CListWnd__DrawHeader_x                                     0x14059CFE0
#define CListWnd__DrawItem_x                                       0x14059D6C0
#define CListWnd__DrawLine_x                                       0x14059E040
#define CListWnd__DrawSeparator_x                                  0x14059E500
#define CListWnd__EnableLine_x                                     0x14059E920
#define CListWnd__EnsureVisible_x                                  0x14059E980
#define CListWnd__ExtendSel_x                                      0x14059EA80
#define CListWnd__GetColumnMinWidth_x                              0x14059EE10
#define CListWnd__GetColumnWidth_x                                 0x14059EE90
#define CListWnd__GetCurSel_x                                      0x14059EF90
#define CListWnd__GetItemData_x                                    0x14059F310
#define CListWnd__GetItemHeight_x                                  0x14059F350
#define CListWnd__GetItemRect_x                                    0x14059F570
#define CListWnd__GetItemText_x                                    0x14059F810
#define CListWnd__GetSelList_x                                     0x14059FA60
#define CListWnd__GetSeparatorRect_x                               0x14059FC50
#define CListWnd__InsertLine_x                                     0x1405A10B0
#define CListWnd__RemoveLine_x                                     0x1405A1720
#define CListWnd__SetColors_x                                      0x1405A1AE0
#define CListWnd__SetColumnJustification_x                         0x1405A1B00
#define CListWnd__SetColumnLabel_x                                 0x1405A1B80
#define CListWnd__SetColumnWidth_x                                 0x1405A1D20
#define CListWnd__SetCurSel_x                                      0x1405A1DF0
#define CListWnd__SetItemColor_x                                   0x1405A2060
#define CListWnd__SetItemData_x                                    0x1405A2100
#define CListWnd__SetItemText_x                                    0x1405A2340
#define CListWnd__Sort_x                                           0x1405A2750
#define CListWnd__ToggleSel_x                                      0x1405A28C0
#define CListWnd__SetColumnsSizable_x                              0x1405A1D70
#define CListWnd__SetItemWnd_x                                     0x1405A2470
#define CListWnd__GetItemWnd_x                                     0x14059F9F0
#define CListWnd__SetItemIcon_x                                    0x1405A2140
#define CListWnd__CalculateCustomWindowPositions_x                 0x14059B5D0
#define CListWnd__SetVScrollPos_x                                  0x1405A26B0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x14043BEB0

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A0E628
#define MapViewMap__Clear_x                                        0x14043DA30
#define MapViewMap__SetZoom_x                                      0x140444080
#define MapViewMap__HandleLButtonDown_x                            0x140440BC0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140465730  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x14046BCD0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x14046C470
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14046FC80
#define CMerchantWnd__SelectBuySellSlot_x                          0x14046EFD0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140473F10

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x1406476A0
#define CPacketScrambler__hton_x                                   0x140647690

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405C2F10
#define CSidlManagerBase__FindAnimation1_x                         0x1405C2E50
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405C3540
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405C32F0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405C2250
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405C21E0
#define CSidlManagerBase__CreateXWnd_x                             0x1405C1840

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404DAFA0
#define CSidlManager__CreateXWnd_x                                 0x1404DB160

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x140587C60
#define CSidlScreenWnd__CalculateVSBRange_x                        0x140587D80
#define CSidlScreenWnd__ConvertToRes_x                             0x1405D20C0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x140587F00
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x140587390
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x140587460
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x140587670
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1405885E0
#define CSidlScreenWnd__EnableIniStorage_x                         0x140588810
#define CSidlScreenWnd__GetChildItem_x                             0x1405889B0
#define CSidlScreenWnd__GetSidlPiece_x                             0x140588C00
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140592C10 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x140588F70
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405892E0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140589B80
#define CSidlScreenWnd__LoadSidlScreen_x                           0x14058A580
#define CSidlScreenWnd__m_layoutCopy_x                             0x140EF4828
#define CSidlScreenWnd__StoreIniInfo_x                             0x14058AC00
#define CSidlScreenWnd__StoreIniVis_x                              0x14058B3E0
#define CSidlScreenWnd__vftable_x                                  0x140AA6AA8
#define CSidlScreenWnd__WndNotification_x                          0x14058B430

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x140320B70 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140321010 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x140320F40
#define CSkillMgr__IsActivatedSkill_x                              0x1403213C0
#define CSkillMgr__IsCombatSkill_x                                 0x140321400
#define CSkillMgr__GetSkillTimerDuration_x                         0x140321330
#define CSkillMgr__GetSkillLastUsed_x                              0x140320F90

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1404F6BF0
#define CSliderWnd__SetValue_x                                     0x1405A3A30
#define CSliderWnd__SetNumTicks_x                                  0x1405A38B0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404E15E0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405A81B0
#define CStmlWnd__CalculateHSBRange_x                              0x1405925F0
#define CStmlWnd__CalculateVSBRange_x                              0x1405A90D0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405A9B50
#define CStmlWnd__ForceParseNow_x                                  0x1405A9BF0
#define CStmlWnd__GetVisibleText_x                                 0x1405AA2C0
#define CStmlWnd__MakeStmlColorTag_x                               0x1405AC020
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405AC060
#define CStmlWnd__SetSTMLText_x                                    0x1405B3030
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405B31E0
#define CStmlWnd__UpdateHistoryString_x                            0x1405B3570

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405A3E00
#define CTabWnd__DrawCurrentPage_x                                 0x1405A3EA0
#define CTabWnd__DrawTab_x                                         0x1405A4270
#define CTabWnd__GetTabRect_x                                      0x1405A48D0
#define CTabWnd__InsertPage_x                                      0x1405A4BA0
#define CTabWnd__RemovePage_x                                      0x1405A4E30
#define CTabWnd__SetPage_x                                         0x1405A4F90
#define CTabWnd__UpdatePage_x                                      0x1405A5290

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405CC1C0
#define CPageWnd__SetTabText_x                                     0x1405CC230

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BB050  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BB460


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405BA8F0
#define CTextureFont__DrawWrappedText1_x                           0x1405BA800
#define CTextureFont__DrawWrappedText2_x                           0x1405BAA20
#define CTextureFont__GetTextExtent_x                              0x1405BADD0
#define CTextureFont__GetHeight_x                                  0x1405BAD90

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405D0820

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x140586F70

// CXStr
#define CXStr__gFreeLists_x                                        0x140D23EE0
#define CXStr__gCXStrAccess_x                                      0x140EF4628

// CXWnd
#define CXWnd__BringToTop_x                                        0x14058DCC0
#define CXWnd__ClrFocus_x                                          0x14058DFB0
#define CXWnd__Destroy_x                                           0x14058E130
#define CXWnd__DoAllDrawing_x                                      0x14058E240
#define CXWnd__DrawColoredRect_x                                   0x14058EA10
#define CXWnd__DrawTooltip_x                                       0x140590090
#define CXWnd__DrawTooltipAtPoint_x                                0x140590140
#define CXWnd__GetChildItem_x                                      0x140590A50
#define CXWnd__GetChildWndAt_x                                     0x140590B00
#define CXWnd__GetClientRect_x                                     0x140590D90
#define CXWnd__GetClientClipRect_x                                 0x140590C60
#define CXWnd__GetRelativeRect_x                                   0x140592710
#define CXWnd__GetScreenClipRect_x                                 0x140592820
#define CXWnd__GetScreenRect_x                                     0x140592990
#define CXWnd__GetTooltipRect_x                                    0x140592B10
#define CXWnd__IsActive_x                                          0x1405930D0
#define CXWnd__IsDescendantOf_x                                    0x140593100
#define CXWnd__IsReallyVisible_x                                   0x140593170
#define CXWnd__IsType_x                                            0x1405931B0
#define CXWnd__Minimize_x                                          0x1405932B0
#define CXWnd__ProcessTransition_x                                 0x1405941A0
#define CXWnd__Resize_x                                            0x1405942C0
#define CXWnd__Right_x                                             0x140594360
#define CXWnd__SetFocus_x                                          0x140594710
#define CXWnd__SetFont_x                                           0x140594760
#define CXWnd__SetKeyTooltip_x                                     0x140594870
#define CXWnd__SetMouseOver_x                                      0x1405949A0
#define CXWnd__SetParent_x                                         0x140594A20
#define CXWnd__StartFade_x                                         0x140594E60
#define CXWnd__vftable_x                                           0x140AA7080
#define CXWnd__CXWnd_x                                             0x14058C850
#define CXWnd__dCXWnd_x                                            0x14058D1A0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405D7300

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405B4E50
#define CXWndManager__DrawCursor_x                                 0x1405B5130
#define CXWndManager__DrawWindows_x                                0x1405B5390
#define CXWndManager__GetKeyboardFlags_x                           0x1405B5A60
#define CXWndManager__HandleKeyboardMsg_x                          0x1405B5AA0
#define CXWndManager__RemoveWnd_x                                  0x1405B8FD0

// CDBStr
#define CDBStr__GetString_x                                        0x1401854D0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1406514C0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CF4D0
#define CCharacterListWnd__EnterWorld_x                            0x1400CE1D0
#define CCharacterListWnd__Quit_x                                  0x1400CF4B0
#define CCharacterListWnd__UpdateList_x                            0x1400D0340

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x14061EA90
#define ItemBase__CreateItemTagString_x                            0x14061F510
#define ItemBase__GetImageNum_x                                    0x140621AB0
#define ItemBase__GetItemValue_x                                   0x140623560
#define ItemBase__IsEmpty_x                                        0x140625180
#define ItemBase__IsKeyRingItem_x                                  0x1406258C0
#define ItemBase__ValueSellMerchant_x                              0x140629AC0
#define ItemClient__CanDrop_x                                      0x1402A84D0
#define ItemClient__CanGoInBag_x                                   0x1402A8600
#define ItemClient__CreateItemClient_x                             0x1402A8880
#define ItemClient__dItemClient_x                                  0x1402A8340

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401A4D60
#define EQ_LoadingS__Array_x                                       0x140D10220

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x1406363E0
#define PcBase__GetCombatAbility_x                                 0x140636AD0
#define PcBase__GetCombatAbilityTimer_x                            0x140636B70
#define PcBase__GetItemContainedRealEstateIds_x                    0x140637310
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x140637E50
#define PcClient__AlertInventoryChanged_x                          0x1402CA8F0
#define PcClient__GetConLevel_x                                    0x1402CAF10  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402CD6E0
#define PcClient__HasLoreItem_x                                    0x1402CE740
#define PcZoneClient__GetItemRecastTimer_x                         0x1402DC070
#define PcZoneClient__RemoveMyAffect_x                             0x1402DFC70

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x140214830  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x1402149E0  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x140214B40  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x140214A80  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x14024EA30  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14017FCD0

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140695060
#define PlayerBase__CanSee1_x                                      0x140695130
#define PlayerBase__GetVisibilityLineSegment_x                     0x1406955F0
#define PlayerBase__HasProperty_x                                  0x1406957C0
#define PlayerBase__IsTargetable_x                                 0x140695880
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402ED520
#define PlayerClient__GetPcClient_x                                0x1402EFD50
#define PlayerClient__PlayerClient_x                               0x1402E5D30
#define PlayerClient__SetNameSpriteState_x                         0x1402F33F0
#define PlayerClient__SetNameSpriteTint_x                          0x1402F43B0
#define PlayerZoneClient__ChangeHeight_x                           0x140302C30
#define PlayerZoneClient__DoAttack_x                               0x140303940
#define PlayerZoneClient__GetLevel_x                               0x140307060
#define PlayerZoneClient__IsValidTeleport_x                        0x1402517C0
#define PlayerZoneClient__LegalPlayerRace_x                        0x140193A20

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402FC3B0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402FC460  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402FC560
#define PlayerManagerClient__CreatePlayer_x                        0x1402FBE80
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140694C20

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402AD730
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402AD330
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402AD3A0
#define KeypressHandler__ClearCommandStateArray_x                  0x1402AD6C0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402AD850
#define KeypressHandler__HandleKeyUp_x                             0x1402AD970
#define KeypressHandler__SaveKeymapping_x                          0x1402AD5D0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x14064F000  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x140648DD0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402D4D00  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402DA020
#define PcZoneClient__GetPcSkillLimit_x                            0x1402DC770
#define PcZoneClient__RemovePetEffect_x                            0x1402DFF50
#define PcZoneClient__HasAlternateAbility_x                        0x1402DD360
#define PcZoneClient__CanEquipItem_x                               0x1402D8360
#define PcZoneClient__GetItemByID_x                                0x1402DB0C0
#define PcZoneClient__RemoveBuffEffect_x                           0x1402DFAF0
#define PcZoneClient__BandolierSwap_x                              0x1402D73B0

// Doors
#define EQSwitch__UseSwitch_x                                      0x1402562F0

// IconCache
#define IconCache__GetIcon_x                                       0x1403B4E00

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403A9830
#define CContainerMgr__CloseContainer_x                            0x1403A9170
#define CContainerMgr__OpenExperimentContainer_x                   0x1403A9BB0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x14049F2C0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402A05F0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x14042FEB0
#define CLootWnd__RequestLootSlot_x                                0x140430ED0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401D4040
#define EQ_Spell__SpellAffects_x                                   0x1401D52F0
#define EQ_Spell__SpellAffectBase_x                                0x1401D5250
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D8220
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D81D0
#define EQ_Spell__IsSPAStacking_x                                  0x1401D4F20
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401D4AE0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401D43B0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C0540

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1404FBCE0
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404FB3F0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404FAC00

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x140503340  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x14017C6B0
#define CTaskManager__GetTaskStatus_x                              0x14017C7C0
#define CTaskManager__GetElementDescription_x                      0x14017C340

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401D23B0
#define EqSoundManager__PlayScriptMp3_x                            0x1401D11F0
#define EqSoundManager__SoundAssistPlay_x                          0x1403261B0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x1403264F0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x140595C10
#define CTextureAnimation__SetCurCell_x                            0x140595F20

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x14029E850

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x140669A30
#define CharacterBase__GetItemByGlobalIndex1_x                     0x140669AB0
#define CharacterBase__IsExpansionFlag_x                           0x1401F5D40

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x1403874F0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140387E80
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x1403893C0

// messages
#define msg_spell_worn_off_x                                       0x14020B160
#define msg_new_text_x                                             0x1402069D0
#define __msgTokenTextParam_x                                      0x1401FE310
#define msgTokenText_x                                             0x1401FE230

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140327B70
#define SpellManager__GetSpellByGroupAndRank_x                     0x140327A90

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x1406A3530

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140429320

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403AE500
#define CCursorAttachment__IsOkToActivate_x                        0x1403B1460
#define CCursorAttachment__RemoveAttachment_x                      0x1403B1710
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405CECC0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405CEEB0
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405CEEC0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x14014A680
#define CFindItemWnd__Update_x                                     0x14014B020
#define CFindItemWnd__PickupSelectedItem_x                         0x140144AE0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x1401541E0
#define LootFiltersManager__GetItemFilterData_x                    0x140154CF0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140155590
#define LootFiltersManager__SetItemLootFilter_x                    0x140155840

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x140481F10

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x140320730
#define CResolutionHandler__UpdateResolution_x                     0x1406A7D90

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403A5B10

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x14066DE20  // Rename..?
#define CDistillerInfo__Instance_x                                 0x14066DD10  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403CC050
#define CGroupWnd__UpdateDisplay_x                                 0x1403CBC30

// ItemBase
#define ItemBase__IsLore_x                                         0x1406259F0
#define ItemBase__IsLoreEquipped_x                                 0x140625A80

#define MultipleItemMoveManager__ProcessMove_x                     0x1402C04B0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14024EB90
#define EQPlacedItemManager__GetItemByGuid_x                       0x14024EB20
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14024EB60

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14031AB40

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140124610
#define FactionManagerClient__HandleFactionMessage_x               0x1401249C0
#define FactionManagerClient__GetFactionStanding_x                 0x140123DE0
#define FactionManagerClient__GetMaxFaction_x                      0x140123DE0
#define FactionManagerClient__GetMinFaction_x                      0x140123C90

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AD600

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x14012FDB0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401AD6A0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401ACA20
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401AD4C0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401AD440  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x14032CBE0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14031AB40

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x140214BD0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x14058BA20

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140085AE0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14033E6F0

// AchievementManager
#define AchievementManager__Instance_x                             0x14008D4B0

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x140652040
#define FreeToPlayClient__RestrictionInfo_x                        0x140ABB150

// UdpConnection
#define UdpConnection__GetStats_x                                  0x140531BA0

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x14081A538
#define CGFScreenWnd__CGFScreenWnd_x                               0x140070400
#define CGFScreenWnd__CGFScreenWnd1_x                              0x140070590
#define CGFScreenWnd__dCGFScreenWnd_x                              0x140070740

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
