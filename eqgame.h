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

#define __ClientDate                                               20250707u
#define __ExpectedVersionDate                                     "Jul  7 2025"
#define __ExpectedVersionTime                                     "12:31:27"
#define __ActualVersionDate_x                                      0x14095E0D0
#define __ActualVersionTime_x                                      0x14095E0C0
#define __ActualVersionBuild_x                                     0x1408F3B80

// Memory Protection
#define __MemChecker0_x                                            0x1402BD0B0
#define __MemChecker1_x                                            0x140583AB0
#define __MemChecker4_x                                            0x14028A760
#define __EncryptPad0_x                                            0x140D2CE80
#define __EncryptPad0_x                                            0x140D2DE80

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E66AE0
#define instEQZoneInfo_x                                           0x140E66CD4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x14021ECD0
#define __gfMaxZoomCameraDistance_x                                0x1408F4DF8
#define __gfMaxCameraDistance_x                                    0x140A9DCD4
#define __CurrentSocial_x                                          0x140BE9950 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D25720
#define g_eqCommandStates_x                                        0x140D26790
#define __CommandList_x                                            0x140D269C0
#define __ScreenMode_x                                             0x140DAE064
#define __gWorld_x                                                 0x140E5EF70
#define __gpbCommandEvent_x                                        0x140E5F4CC
#define __ServerHost_x                                             0x140E5F6B8
#define __Guilds_x                                                 0x140E656A0
#define __MemCheckBitmask_x                                        0x140E6701F
#define __MemCheckActive_x                                         0x140E68725
#define __MouseEventTime_x                                         0x140EDC090
#define DI8__MouseState_x                                          0x140EE02C8
#define __heqmain_x                                                0x140EE2768
#define DI8__Mouse_x                                               0x140EE0218
#define __HWnd_x                                                   0x140EE02A0
#define __Mouse_x                                                  0x140EE01D4
#define DI8__Keyboard_x                                            0x140EE01F0
#define __LoginName_x                                              0x140EE2E4C
#define __CurrentMapLabel_x                                        0x140EF68D0
#define __LabelCache_x                                             0x140EF74A0
#define __ChatFilterDefs_x                                         0x140A36CC0
#define Teleport_Table_Size_x                                      0x140E5F554
#define Teleport_Table_x                                           0x140E5F9F0

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E61A30
#define pinstActiveBanker_x                                        0x140E5F418
#define pinstActiveCorpse_x                                        0x140E5F408
#define pinstActiveGMaster_x                                       0x140E5F410
#define pinstActiveMerchant_x                                      0x140E5F400
#define pinstAltAdvManager_x                                       0x140DAF240
#define pinstCEverQuest_x                                          0x140EE0210
#define pinstCamActor_x                                            0x140DAE050
#define pinstCDBStr_x                                              0x140DADFF0
#define pinstCDisplay_x                                            0x140E5F9E8
#define pinstControlledPlayer_x                                    0x140E5F4A8
#define pinstCResolutionHandler_x                                  0x140F07CD8
#define pinstCSidlManager_x                                        0x140F08A40
#define pinstCXWndManager_x                                        0x140F08A38
#define instDynamicZone_x                                          0x140E65560 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E655AE
#define instExpeditionName_x                                       0x140E655EE
#define pinstDZMember_x                                            0x140E65678
#define pinstDZTimerInfo_x                                         0x140E65680
#define pinstEqLogin_x                                             0x140EE2790
#define instTribute_x                                              0x140D20D60
#define pinstDeviceInputProxy_x                                    0x140E66B3C
#define pinstEQSoundManager_x                                      0x140DAF5C0
#define pinstEQSpellStrings_x                                      0x140D92B80
#define pinstSGraphicsEngine_x                                     0x140F07A58
#define pinstLocalPC_x                                             0x140E61A10
#define pinstLocalPlayer_x                                         0x140E5F3F8
#define pinstCMercenaryClientManager_x                             0x140EDD988
#define pinstModelPlayer_x                                         0x140E5F428
#define pinstRenderInterface_x                                     0x140F07A70
#define pinstSkillMgr_x                                            0x140EDF618
#define pinstSpawnManager_x                                        0x140EDDD40
#define pinstSpellManager_x                                        0x140EDF680
#define pinstStringTable_x                                         0x140E61A18
#define pinstSwitchManager_x                                       0x140E5EEF0
#define pinstTarget_x                                              0x140E5F4A0
#define pinstTaskMember_x                                          0x140D20D50 // Part of g_taskManager
#define pinstTradeTarget_x                                         0x140E5F420
#define instTributeActive_x                                        0x140D20D89
#define pinstViewActor_x                                           0x140DAE048
#define pinstWorldData_x                                           0x140E5F9D8
#define pinstPlayerPath_x                                          0x140EDDD68
#define pinstTargetIndicator_x                                     0x140EDF730
#define EQObject_Top_x                                             0x140E5F5A8

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140EF3A30
#define pinstCContainerMgr_x                                       0x140DAE098
#define pinstCContextMenuManager_x                                 0x140F08720
#define pinstCInvSlotMgr_x                                         0x140DAE040
#define pinstCItemDisplayManager_x                                 0x140EF64A0
#define pinstCPopupWndManager_x                                    0x140EF6D30
#define pinstCSpellDisplayMgr_x                                    0x140EF7380
#define pinstCTaskManager_x                                        0x140BE9C90
#define pinstEQSuiteTextureLoader_x                                0x140D37590
#define pinstItemIconCache_x                                       0x140EF3D90
#define pinstLootFiltersManager_x                                  0x140DADA38
#define pinstGFViewListener_x                                      0x140F07EF8


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x140248A20
#define __CastRay_x                                                0x140240CC0
#define __CastRay2_x                                               0x1402409C0
#define __compress_block_x                                         0x140539030
#define __ConvertItemTags_x                                        0x140241120
#define __CleanItemTags_x                                          0x14008A2D0
#define __CreateCascadeMenuItems_x                                 0x14018D700
#define __decompress_block_x                                       0x14057F2C0
#define __DoesFileExist_x                                          0x140587960
#define __EQGetTime_x                                              0x140584060
#define __ExecuteCmd_x                                             0x1402164D0
#define __FixHeading_x                                             0x14063E950
#define __FlushDxKeyboard_x                                        0x140341C50
#define __get_bearing_x                                            0x14024AC50
#define __get_melee_range_x                                        0x14024AD40
#define __GetAnimationCache_x                                      0x1403C1540
#define __GetGaugeValueFromEQ_x                                    0x1404F8BC0
#define __GetLabelFromEQ_x                                         0x1404FA1C0
#define __GetXTargetType_x                                         0x14063FC30   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14063E9D0
#define __HelpPath_x                                               0x140EDBF58   // Why?
#define __NewUIINI_x                                               0x140505C00   // Why?
#define __ProcessDeviceEvents_x                                    0x14028AD70
#define __ProcessGameEvents_x                                      0x14027FA20
#define __ProcessKeyboardEvents_x                                  0x1403433A0
#define __ProcessMouseEvents_x                                     0x140281100
#define __SaveColors_x                                             0x14019D720
#define __STMLToText_x                                             0x14058FB60
#define __WndProc_x                                                0x140340420
#define CMemoryMappedFile__SetFile_x                               0x1407EC630
#define DrawNetStatus_x                                            0x1402CB680
#define Util__FastTime_x                                           0x1405801E0
#define __eq_delete_x                                              0x1406B8644
#define __eq_new_x                                                 0x1406B8600
#define __CopyLayout_x                                             0x1402B94D0
#define __ThrottleFrameRate_x                                      0x14026F0CA
#define __ThrottleFrameRateEnd_x                                   0x14026F12A

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140353720
#define CAAWnd__Update_x                                           0x140353A20
#define CAAWnd__UpdateSelected_x                                   0x140354A70

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AC830
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A5210
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140840E48
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AD160

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401A8880
#define AltAdvManager__IsAbilityReady_x                            0x1401A8D10
#define AltAdvManager__GetAAById_x                                 0x1401A8150
#define AltAdvManager__CanTrainAbility_x                           0x1401A7F40
#define AltAdvManager__CanSeeAbility_x                             0x1401A7C00

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D31C0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D4020
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D4270
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400E8AB0
#define CharacterZoneClient__CanUseItem_x                          0x1400E9070
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D4C40
#define CharacterZoneClient__CastSpell_x                           0x1400D4CE0
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E48B0
#define CharacterZoneClient__Cur_HP_x                              0x1400EA790
#define CharacterZoneClient__Cur_Mana_x                            0x1400EA950
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D8050
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F0FC0
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FF860  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D94F0
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E83B0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F2B70
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F1A50
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D9670
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C99A0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400CB3A0
#define CharacterZoneClient__GetHPRegen_x                          0x1400F2190
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400EA400
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F2E00
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D96F0
#define CharacterZoneClient__GetManaRegen_x                        0x1400F3B80
#define CharacterZoneClient__GetModCap_x                           0x1400FB010
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D9980
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D9B50
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CE530
#define CharacterZoneClient__HasSkill_x                            0x1400F6B50
#define CharacterZoneClient__HitBySpell_x                          0x1400DA5E0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DDF50
#define CharacterZoneClient__MakeMeVisible_x                       0x1400FAAF0
#define CharacterZoneClient__Max_Endurance_x                       0x1402E7E90  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400FAE40
#define CharacterZoneClient__Max_Mana_x                            0x1402E80B0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400FB2A0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E1400
#define CharacterZoneClient__SpellDuration_x                       0x1400E2130
#define CharacterZoneClient__TotalEffect_x                         0x1400E3490
#define CharacterZoneClient__UseSkill_x                            0x1401007E0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140372070

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14037C3F0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140378270
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14037BE70

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14037EB70

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140ABB9A0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403A18F0
#define CChatWindowManager__InitContextMenu_x                      0x1403A1A80
#define CChatWindowManager__FreeChatWindow_x                       0x1403A0960
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403A96C0
#define CChatWindowManager__CreateChatWindow_x                     0x1403A0390

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140108D40

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403AA710
#define CChatWindow__Clear_x                                       0x1403AB6D0
#define CChatWindow__WndNotification_x                             0x1403AC8C0
#define CChatWindow__AddHistory_x                                  0x1403AB1D0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405C4B60
#define CContextMenu__RemoveMenuItem_x                             0x1405C4F50
#define CContextMenu__RemoveAllMenuItems_x                         0x1405C4F20
#define CContextMenu__CheckMenuItem_x                              0x1405C4D90
#define CContextMenu__SetMenuItem_x                                0x1405C4F70
#define CContextMenu__AddSeparator_x                               0x1405C4CD0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405B6A30
#define CContextMenuManager__RemoveMenu_x                          0x1405B7000
#define CContextMenuManager__PopupMenu_x                           0x1405B6D40
#define CContextMenuManager__Flush_x                               0x1405B6AB0
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403B90D0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1406926F0
#define CChatService__GetFriendName_x                              0x140692700

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405A7920
#define CComboWnd__Draw_x                                          0x1405A7A20
#define CComboWnd__GetCurChoice_x                                  0x1405A7D00  // unused
#define CComboWnd__GetListRect_x                                   0x1405A7DA0
#define CComboWnd__InsertChoice_x                                  0x1405A80E0
#define CComboWnd__SetColors_x                                     0x1405A8470
#define CComboWnd__SetChoice_x                                     0x1405A8430
#define CComboWnd__GetItemCount_x                                  0x1405A7D90
#define CComboWnd__GetCurChoiceText_x                              0x1405A7D40  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405A7CD0
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405A81A0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403B6E00
#define CContainerWnd__SetContainer_x                              0x14040E870
#define CContainerWnd__vftable_x                                   0x1409D2540

// CDisplay
#define CDisplay__cameraType_x                                     0x140DAE43C
#define CDisplay__ZoneMainUI_x                                     0x1405DEC80
#define CDisplay__PreZoneMainUI_x                                  0x14019A650
#define CDisplay__CleanGameUI_x                                    0x14018C7C0
#define CDisplay__GetClickedActor_x                                0x140190980
#define CDisplay__GetUserDefinedColor_x                            0x1401915F0
#define CDisplay__InitCharSelectUI_x                               0x1401918A0
#define CDisplay__ReloadUI_x                                       0x14019C940
#define CDisplay__RestartUI_x                                      0x1401FC1B0
#define CDisplay__WriteTextHD2_x                                   0x1401A3950
#define CDisplay__TrueDistance_x                                   0x1401A3600
#define CDisplay__SetViewActor_x                                   0x14019FE40
#define CDisplay__GetFloorHeight_x                                 0x140190BE0
#define CDisplay__ToggleScreenshotMode_x                           0x1401A30F0
#define CDisplay__RealRender_World_x                               0x14019BD20

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405E8EB0
#define CEditWnd__DrawCaret_x                                      0x1405DA960  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405DAE20
#define CEditWnd__GetCaretPt_x                                     0x1405DB0A0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405DB0E0
#define CEditWnd__GetDisplayString_x                               0x1405DB350
#define CEditWnd__GetHorzOffset_x                                  0x1405DB590
#define CEditWnd__GetLineForPrintableChar_x                        0x1405DB6E0
#define CEditWnd__GetSelStartPt_x                                  0x1405DB9C0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405DB810
#define CEditWnd__PointFromPrintableChar_x                         0x1405DC570
#define CEditWnd__ReplaceSelection_x                               0x1405DC920
#define CEditWnd__SelectableCharFromPoint_x                        0x1405DCDC0
#define CEditWnd__SetEditable_x                                    0x1405DD050
#define CEditWnd__SetWindowText_x                                  0x1405DD080

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x1402701E0
#define CEverQuest__ClickedPlayer_x                                0x1402645D0
#define CEverQuest__CreateTargetIndicator_x                        0x140264E90
#define CEverQuest__DoTellWindow_x                                 0x140108A50 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140109320 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140271BD0
#define CEverQuest__dsp_chat_x                                     0x140108490 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x14029CC80
#define CEverQuest__Emote_x                                        0x1402725C0
#define CEverQuest__GetBodyTypeDesc_x                              0x1402733A0
#define CEverQuest__GetClassDesc_x                                 0x140273400
#define CEverQuest__GetClassThreeLetterCode_x                      0x1402737D0
#define CEverQuest__GetDeityDesc_x                                 0x140273A80
#define CEverQuest__GetLangDesc_x                                  0x140273EB0
#define CEverQuest__GetRaceDesc_x                                  0x140274250
#define CEverQuest__InterpretCmd_x                                 0x140275BE0
#define CEverQuest__LeftClickedOnPlayer_x                          0x14028ADE0
#define CEverQuest__LMouseUp_x                                     0x140277650
#define CEverQuest__RightClickedOnPlayer_x                         0x1402885D0
#define CEverQuest__RMouseUp_x                                     0x140281C90
#define CEverQuest__SetGameState_x                                 0x14028DD50
#define CEverQuest__UPCNotificationFlush_x                         0x1402936C0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x1402772B0
#define CEverQuest__ReportSuccessfulHeal_x                         0x140283060
#define CEverQuest__ReportSuccessfulHit_x                          0x140283E80

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403CC490

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C32A0
#define CGuild__GetGuildName_x                                     0x1400C32E0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403EF910

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402AEE50
#define CHotButton__SetCheck_x                                     0x1402AF120

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140407580
#define CInvSlotMgr__MoveItem_x                                    0x140407760
#define CInvSlotMgr__SelectSlot_x                                  0x140409190

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x140404780
#define CInvSlot__SliderComplete_x                                 0x140405CD0
#define CInvSlot__GetItemBase_x                                    0x140400110
#define CInvSlot__UpdateItem_x                                     0x140406180

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x14040A520

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x14042BBA0
#define CItemDisplayWnd__UpdateStrings_x                           0x14042E7A0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140428370
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140429CE0
#define CItemDisplayWnd__RequestConvertItem_x                      0x14042AFB0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404F5640
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404F73D0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140532390

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140424A30

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x1401538C0

// CLabel
#define CLabel__UpdateText_x                                       0x140435B80

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405AB2B0
#define CListWnd__dCListWnd_x                                      0x1405AB700
#define CListWnd__vftable_x                                        0x140AB9AF0
#define CListWnd__AddColumn_x                                      0x1405ABDA0
#define CListWnd__AddColumn1_x                                     0x1405ABE40
#define CListWnd__AddLine_x                                        0x1405ABFA0
#define CListWnd__AddString_x                                      0x1405AC530
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405ACAA0
#define CListWnd__CalculateVSBRange_x                              0x1405ACD80
#define CListWnd__ClearSel_x                                       0x1405ACF30
#define CListWnd__ClearAllSel_x                                    0x1405ACED0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405ACF90
#define CListWnd__Compare_x                                        0x1405AD150
#define CListWnd__Draw_x                                           0x1405AD620
#define CListWnd__DrawColumnSeparators_x                           0x1405AE1D0
#define CListWnd__DrawHeader_x                                     0x1405AE290
#define CListWnd__DrawItem_x                                       0x1405AE970
#define CListWnd__DrawLine_x                                       0x1405AF2F0
#define CListWnd__DrawSeparator_x                                  0x1405AF7B0
#define CListWnd__EnableLine_x                                     0x1405AFBD0
#define CListWnd__EnsureVisible_x                                  0x1405AFC30
#define CListWnd__ExtendSel_x                                      0x1405AFD30
#define CListWnd__GetColumnMinWidth_x                              0x1405B00C0
#define CListWnd__GetColumnWidth_x                                 0x1405B0140
#define CListWnd__GetCurSel_x                                      0x1405B0240
#define CListWnd__GetItemData_x                                    0x1405B05C0
#define CListWnd__GetItemHeight_x                                  0x1405B0600
#define CListWnd__GetItemRect_x                                    0x1405B0820
#define CListWnd__GetItemText_x                                    0x1405B0AC0
#define CListWnd__GetSelList_x                                     0x1405B0D10
#define CListWnd__GetSeparatorRect_x                               0x1405B0F00
#define CListWnd__InsertLine_x                                     0x1405B2370
#define CListWnd__RemoveLine_x                                     0x1405B29E0
#define CListWnd__SetColors_x                                      0x1405B2DA0
#define CListWnd__SetColumnJustification_x                         0x1405B2DC0
#define CListWnd__SetColumnLabel_x                                 0x1405B2E40
#define CListWnd__SetColumnWidth_x                                 0x1405B2FE0
#define CListWnd__SetCurSel_x                                      0x1405B30B0
#define CListWnd__SetItemColor_x                                   0x1405B3320
#define CListWnd__SetItemData_x                                    0x1405B33C0
#define CListWnd__SetItemText_x                                    0x1405B3600
#define CListWnd__Sort_x                                           0x1405B3A10
#define CListWnd__ToggleSel_x                                      0x1405B3B80
#define CListWnd__SetColumnsSizable_x                              0x1405B3030
#define CListWnd__SetItemWnd_x                                     0x1405B3730
#define CListWnd__GetItemWnd_x                                     0x1405B0CA0
#define CListWnd__SetItemIcon_x                                    0x1405B3400
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405AC870
#define CListWnd__SetVScrollPos_x                                  0x1405B3970

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140448E30

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A1F710
#define MapViewMap__Clear_x                                        0x14044A9B0
#define MapViewMap__SetZoom_x                                      0x140451020
#define MapViewMap__HandleLButtonDown_x                            0x14044DB40

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140472760  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140478DC0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140479560
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14047CDA0
#define CMerchantWnd__SelectBuySellSlot_x                          0x14047C0E0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140481050

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14066D900
#define CPacketScrambler__hton_x                                   0x14066D8F0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405D4220
#define CSidlManagerBase__FindAnimation1_x                         0x1405D4160
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405D4850
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405D4600
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405D3560
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405D34F0
#define CSidlManagerBase__CreateXWnd_x                             0x1405D2B50

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404E8510
#define CSidlManager__CreateXWnd_x                                 0x1404E86D0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x140598EE0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x140599010
#define CSidlScreenWnd__ConvertToRes_x                             0x1405E33F0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x140599190
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x140598610
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x1405986E0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1405988F0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x140599880
#define CSidlScreenWnd__EnableIniStorage_x                         0x140599AB0
#define CSidlScreenWnd__GetChildItem_x                             0x140599C50
#define CSidlScreenWnd__GetSidlPiece_x                             0x140599EA0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405A3F50 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x14059A210
#define CSidlScreenWnd__LoadIniInfo_x                              0x14059A580
#define CSidlScreenWnd__LoadIniListWnd_x                           0x14059AE20
#define CSidlScreenWnd__LoadSidlScreen_x                           0x14059B820
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F07D98
#define CSidlScreenWnd__StoreIniInfo_x                             0x14059BEB0
#define CSidlScreenWnd__StoreIniVis_x                              0x14059C690
#define CSidlScreenWnd__vftable_x                                  0x140AB8D78
#define CSidlScreenWnd__WndNotification_x                          0x14059C6E0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14032ABB0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14032B050 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14032AF80
#define CSkillMgr__IsActivatedSkill_x                              0x14032B400
#define CSkillMgr__IsCombatSkill_x                                 0x14032B440
#define CSkillMgr__GetSkillTimerDuration_x                         0x14032B370
#define CSkillMgr__GetSkillLastUsed_x                              0x14032AFD0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1404F8B90
#define CSliderWnd__SetValue_x                                     0x1405B4CF0
#define CSliderWnd__SetNumTicks_x                                  0x1405B4B70

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404EEC40

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405B9480
#define CStmlWnd__CalculateHSBRange_x                              0x1405A3940
#define CStmlWnd__CalculateVSBRange_x                              0x1405BA320
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405BAE20
#define CStmlWnd__ForceParseNow_x                                  0x1405BAEC0
#define CStmlWnd__GetVisibleText_x                                 0x1405BB590
#define CStmlWnd__MakeStmlColorTag_x                               0x1405BD2F0
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405BD330
#define CStmlWnd__SetSTMLText_x                                    0x1405C4300
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405C44B0
#define CStmlWnd__UpdateHistoryString_x                            0x1405C4840

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405B50C0
#define CTabWnd__DrawCurrentPage_x                                 0x1405B5160
#define CTabWnd__DrawTab_x                                         0x1405B5530
#define CTabWnd__GetTabRect_x                                      0x1405B5BA0
#define CTabWnd__InsertPage_x                                      0x1405B5E70
#define CTabWnd__RemovePage_x                                      0x1405B6100
#define CTabWnd__SetPage_x                                         0x1405B6260
#define CTabWnd__UpdatePage_x                                      0x1405B6560

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405DD4E0
#define CPageWnd__SetTabText_x                                     0x1405DD550

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BC8C0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BCCD0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405CBC10
#define CTextureFont__DrawWrappedText1_x                           0x1405CBB20
#define CTextureFont__DrawWrappedText2_x                           0x1405CBD40
#define CTextureFont__GetTextExtent_x                              0x1405CC0F0
#define CTextureFont__GetHeight_x                                  0x1405CC0B0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405E1B50

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405981F0

// CXStr
#define CXStr__gFreeLists_x                                        0x140D36F00
#define CXStr__gCXStrAccess_x                                      0x140F078F8

// CXWnd
#define CXWnd__BringToTop_x                                        0x14059EF70
#define CXWnd__ClrFocus_x                                          0x14059F260
#define CXWnd__Destroy_x                                           0x14059F3E0
#define CXWnd__DoAllDrawing_x                                      0x14059F4F0
#define CXWnd__DrawColoredRect_x                                   0x14059FCC0
#define CXWnd__DrawTooltip_x                                       0x1405A1350
#define CXWnd__DrawTooltipAtPoint_x                                0x1405A1400
#define CXWnd__GetChildItem_x                                      0x1405A1D10
#define CXWnd__GetChildWndAt_x                                     0x1405A1DD0
#define CXWnd__GetClientRect_x                                     0x1405A2080
#define CXWnd__GetClientClipRect_x                                 0x1405A1F40
#define CXWnd__GetRelativeRect_x                                   0x1405A3A70
#define CXWnd__GetScreenClipRect_x                                 0x1405A3B80
#define CXWnd__GetScreenRect_x                                     0x1405A3CD0
#define CXWnd__GetTooltipRect_x                                    0x1405A3E50
#define CXWnd__IsActive_x                                          0x1405A4410
#define CXWnd__IsDescendantOf_x                                    0x1405A4440
#define CXWnd__IsReallyVisible_x                                   0x1405A44B0
#define CXWnd__IsType_x                                            0x1405A44F0
#define CXWnd__Minimize_x                                          0x1405A45F0
#define CXWnd__ProcessTransition_x                                 0x1405A54A0
#define CXWnd__Resize_x                                            0x1405A55B0
#define CXWnd__Right_x                                             0x1405A5650
#define CXWnd__SetFocus_x                                          0x1405A5A10
#define CXWnd__SetFont_x                                           0x1405A5A60
#define CXWnd__SetKeyTooltip_x                                     0x1405A5B60
#define CXWnd__SetMouseOver_x                                      0x1405A5C90
#define CXWnd__SetParent_x                                         0x1405A5D10
#define CXWnd__StartFade_x                                         0x1405A6140
#define CXWnd__vftable_x                                           0x140AB9350
#define CXWnd__CXWnd_x                                             0x14059DB00
#define CXWnd__dCXWnd_x                                            0x14059E460

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405E8630

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405C6120
#define CXWndManager__DrawCursor_x                                 0x1405C6400
#define CXWndManager__DrawWindows_x                                0x1405C6660
#define CXWndManager__GetKeyboardFlags_x                           0x1405C6D30
#define CXWndManager__HandleKeyboardMsg_x                          0x1405C6D70
#define CXWndManager__RemoveWnd_x                                  0x1405CA2D0

// CDBStr
#define CDBStr__GetString_x                                        0x14018A980

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x140677740

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D0CC0
#define CCharacterListWnd__EnterWorld_x                            0x1400CFCD0
#define CCharacterListWnd__Quit_x                                  0x1400D0CA0
#define CCharacterListWnd__UpdateList_x                            0x1400D1B20

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140644CC0
#define ItemBase__CreateItemTagString_x                            0x140645730
#define ItemBase__GetImageNum_x                                    0x140647C90
#define ItemBase__GetItemValue_x                                   0x1406497D0
#define ItemBase__IsEmpty_x                                        0x14064B360
#define ItemBase__IsKeyRingItem_x                                  0x14064BA70
#define ItemBase__ValueSellMerchant_x                              0x14064FC90
#define ItemClient__CanDrop_x                                      0x1402B1760
#define ItemClient__CanGoInBag_x                                   0x1402B1890
#define ItemClient__CreateItemClient_x                             0x1402B1B10
#define ItemClient__dItemClient_x                                  0x1402B15D0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401AA230
#define EQ_LoadingS__Array_x                                       0x140D23230

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14065C5F0
#define PcBase__GetCombatAbility_x                                 0x14065CCE0
#define PcBase__GetCombatAbilityTimer_x                            0x14065CD80
#define PcBase__GetItemContainedRealEstateIds_x                    0x14065D520
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14065E060
#define PcClient__AlertInventoryChanged_x                          0x1402D3C60
#define PcClient__GetConLevel_x                                    0x1402D4280  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402D6A00
#define PcClient__HasLoreItem_x                                    0x1402D7A90
#define PcZoneClient__GetItemRecastTimer_x                         0x1402E5280
#define PcZoneClient__RemoveMyAffect_x                             0x1402E8FD0

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x14021AC10  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x14021ADC0  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x14021AF20  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x14021AE60  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x140255B10  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140185160

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140631560
#define PlayerBase__CanSee1_x                                      0x140631630
#define PlayerBase__GetVisibilityLineSegment_x                     0x140631B10
#define PlayerBase__HasProperty_x                                  0x140631CE0
#define PlayerBase__IsTargetable_x                                 0x140631DA0
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402F6D50
#define PlayerClient__GetPcClient_x                                0x1402F9880
#define PlayerClient__PlayerClient_x                               0x1402EF0B0
#define PlayerClient__SetNameSpriteState_x                         0x1402FCFB0
#define PlayerClient__SetNameSpriteTint_x                          0x1402FDF70
#define PlayerZoneClient__ChangeHeight_x                           0x14030CAA0
#define PlayerZoneClient__DoAttack_x                               0x14030D7B0
#define PlayerZoneClient__GetLevel_x                               0x140310EF0
#define PlayerZoneClient__IsValidTeleport_x                        0x1402588A0
#define PlayerZoneClient__LegalPlayerRace_x                        0x140198ED0

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x140305FA0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x140306050  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x140306150
#define PlayerManagerClient__CreatePlayer_x                        0x140305A70
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140631120

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402B69D0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402B65D0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402B6640
#define KeypressHandler__ClearCommandStateArray_x                  0x1402B6960  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402B6AF0
#define KeypressHandler__HandleKeyUp_x                             0x1402B6C10
#define KeypressHandler__SaveKeymapping_x                          0x1402B6870  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140675270  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x14066F040

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402DE050  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402E33A0
#define PcZoneClient__GetPcSkillLimit_x                            0x1402E5A10
#define PcZoneClient__RemovePetEffect_x                            0x1402E92B0
#define PcZoneClient__HasAlternateAbility_x                        0x1402E6600
#define PcZoneClient__CanEquipItem_x                               0x1402E16B0
#define PcZoneClient__GetItemByID_x                                0x1402E42D0
#define PcZoneClient__RemoveBuffEffect_x                           0x1402E8E50
#define PcZoneClient__BandolierSwap_x                              0x1402E0710

// Doors
#define EQSwitch__UseSwitch_x                                      0x14025D3D0

// IconCache
#define IconCache__GetIcon_x                                       0x1403C1570

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403B5BB0
#define CContainerMgr__CloseContainer_x                            0x1403B54F0
#define CContainerMgr__OpenExperimentContainer_x                   0x1403B5F30

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404AC6D0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402A9140

// CLootWnd
#define CLootWnd__LootAll_x                                        0x14043CE60
#define CLootWnd__RequestLootSlot_x                                0x14043DE90

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401D97B0
#define EQ_Spell__SpellAffects_x                                   0x1401DAA90
#define EQ_Spell__SpellAffectBase_x                                0x1401DA9F0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D9CE0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D9C90
#define EQ_Spell__IsSPAStacking_x                                  0x1401DA6C0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401DA270
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401D9B40

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C1DE0

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x140509410
#define CTargetWnd__RefreshTargetBuffs_x                           0x140508B20
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x140508320

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x140510AA0  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140181B20
#define CTaskManager__GetTaskStatus_x                              0x140181C30
#define CTaskManager__GetElementDescription_x                      0x1401817B0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401D7AD0
#define EqSoundManager__PlayScriptMp3_x                            0x1401D6910
#define EqSoundManager__SoundAssistPlay_x                          0x1403301F0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140330530  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405A6EB0
#define CTextureAnimation__SetCurCell_x                            0x1405A71C0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402A7340

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x14068FDC0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x14068FE40
#define CharacterBase__IsExpansionFlag_x                           0x1401FB9E0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140392530
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140392F30
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x1403944B0

// messages
#define msg_spell_worn_off_x                                       0x140211430
#define msg_new_text_x                                             0x14020CBE0
#define __msgTokenTextParam_x                                      0x140204290
#define msgTokenText_x                                             0x1402041A0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140331E20
#define SpellManager__GetSpellByGroupAndRank_x                     0x140331D40

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140640010

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1404362D0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403BA900
#define CCursorAttachment__IsOkToActivate_x                        0x1403BDBC0
#define CCursorAttachment__RemoveAttachment_x                      0x1403BDE70
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405DFFF0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405E01E0
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405E01F0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x14014EA70
#define CFindItemWnd__Update_x                                     0x14014F410
#define CFindItemWnd__PickupSelectedItem_x                         0x140148ED0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x140158520
#define LootFiltersManager__GetItemFilterData_x                    0x140159030
#define LootFiltersManager__RemoveItemLootFilter_x                 0x1401598D0
#define LootFiltersManager__SetItemLootFilter_x                    0x140159B80

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14048F130

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x14032A770
#define CResolutionHandler__UpdateResolution_x                     0x14058C670

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403B1E90

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406941C0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406940B0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403D8860
#define CGroupWnd__UpdateDisplay_x                                 0x1403D8440

// ItemBase
#define ItemBase__IsLore_x                                         0x14064BBA0
#define ItemBase__IsLoreEquipped_x                                 0x14064BC30

#define MultipleItemMoveManager__ProcessMove_x                     0x1402C97E0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140255C70
#define EQPlacedItemManager__GetItemByGuid_x                       0x140255C00
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140255C40

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140324BC0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x1401266D0
#define FactionManagerClient__HandleFactionMessage_x               0x140126A80
#define FactionManagerClient__GetFactionStanding_x                 0x140125EA0
#define FactionManagerClient__GetMaxFaction_x                      0x140125EA0
#define FactionManagerClient__GetMinFaction_x                      0x140125D50

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AEE40

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140131E80

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401B2BE0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401B1F60
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401B2A00  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401B2980  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x140337120

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140324BC0

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x14021AFB0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x14059CCD0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140086990

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x1403489F0

// AchievementManager
#define AchievementManager__Instance_x                             0x14008EB50

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x1406782C0
#define FreeToPlayClient__RestrictionInfo_x                        0x140ACDBB0

// UdpConnection
#define UdpConnection__GetStats_x                                  0x14053F450

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x140828610
#define CGFScreenWnd__CGFScreenWnd_x                               0x140071300
#define CGFScreenWnd__CGFScreenWnd1_x                              0x140071490
#define CGFScreenWnd__dCGFScreenWnd_x                              0x140071640

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
