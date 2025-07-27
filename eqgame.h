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

#define __ClientDate                                               20250723u
#define __ExpectedVersionDate                                     "Jul 23 2025"
#define __ExpectedVersionTime                                     "11:37:43"
#define __ActualVersionDate_x                                      0x14095E0D0
#define __ActualVersionTime_x                                      0x14095E0C0
#define __ActualVersionBuild_x                                     0x1408F3B80

// Memory Protection
#define __MemChecker0_x                                            0x1402BCDD0
#define __MemChecker1_x                                            0x140583480
#define __MemChecker4_x                                            0x14028A4A0
#define __MemChecker5_x                                            0x140EDBD58
#define __EncryptPad0_x                                            0x140D2DE80

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E66AE0
#define instEQZoneInfo_x                                           0x140E66CD4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x14021EA10
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
#define __allowslashcommand_x                                      0x140248770
#define __CastRay_x                                                0x140240A10
#define __CastRay2_x                                               0x140240710
#define __compress_block_x                                         0x140538A00
#define __ConvertItemTags_x                                        0x140240E70
#define __CleanItemTags_x                                          0x14008A2D0
#define __CreateCascadeMenuItems_x                                 0x14018D6E0
#define __decompress_block_x                                       0x14057EC90
#define __DoesFileExist_x                                          0x140587330
#define __EQGetTime_x                                              0x140583A30
#define __ExecuteCmd_x                                             0x140216210
#define __FixHeading_x                                             0x14063DF90
#define __FlushDxKeyboard_x                                        0x140341990
#define __get_bearing_x                                            0x14024A9A0
#define __get_melee_range_x                                        0x14024AA90
#define __GetAnimationCache_x                                      0x1403C11E0
#define __GetGaugeValueFromEQ_x                                    0x1404F8590
#define __GetLabelFromEQ_x                                         0x1404F9B80
#define __GetXTargetType_x                                         0x14063F270   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14063E010
#define __HelpPath_x                                               0x140EDBF58   // Why?
#define __NewUIINI_x                                               0x1405055C0   // Why?
#define __ProcessDeviceEvents_x                                    0x14028AAB0
#define __ProcessGameEvents_x                                      0x14027F770
#define __ProcessKeyboardEvents_x                                  0x1403430E0
#define __ProcessMouseEvents_x                                     0x140280E40
#define __SaveColors_x                                             0x14019D700
#define __STMLToText_x                                             0x14058F530
#define __WndProc_x                                                0x140340160
#define CMemoryMappedFile__SetFile_x                               0x1407EBB40
#define DrawNetStatus_x                                            0x1402CB3C0
#define Util__FastTime_x                                           0x14057FBB0
#define __eq_delete_x                                              0x1406B7B64
#define __eq_new_x                                                 0x1406B7B20
#define __CopyLayout_x                                             0x1402B91E0
#define __ThrottleFrameRate_x                                      0x14026EE1F
#define __ThrottleFrameRateEnd_x                                   0x14026EE7F

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140353460
#define CAAWnd__Update_x                                           0x140353760
#define CAAWnd__UpdateSelected_x                                   0x1403547B0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AC840
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A5220
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140840E48
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AD170

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401A8870
#define AltAdvManager__IsAbilityReady_x                            0x1401A8D00
#define AltAdvManager__GetAAById_x                                 0x1401A8140
#define AltAdvManager__CanTrainAbility_x                           0x1401A7F30
#define AltAdvManager__CanSeeAbility_x                             0x1401A7BF0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D31F0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D4050
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D42A0
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400E8AC0
#define CharacterZoneClient__CanUseItem_x                          0x1400E9080
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D4C70
#define CharacterZoneClient__CastSpell_x                           0x1400D4D10
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E48C0
#define CharacterZoneClient__Cur_HP_x                              0x1400EA7A0
#define CharacterZoneClient__Cur_Mana_x                            0x1400EA960
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D8080
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F0FD0
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FF870  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D9520
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E83C0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F2B80
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F1A60
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D96A0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C99D0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400CB3D0
#define CharacterZoneClient__GetHPRegen_x                          0x1400F21A0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400EA410
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F2E10
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D9720
#define CharacterZoneClient__GetManaRegen_x                        0x1400F3B90
#define CharacterZoneClient__GetModCap_x                           0x1400FB020
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D99B0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D9B80
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CE560
#define CharacterZoneClient__HasSkill_x                            0x1400F6B60
#define CharacterZoneClient__HitBySpell_x                          0x1400DA610
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DDF80
#define CharacterZoneClient__MakeMeVisible_x                       0x1400FAB00
#define CharacterZoneClient__Max_Endurance_x                       0x1402E7BB0  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400FAE50
#define CharacterZoneClient__Max_Mana_x                            0x1402E7DD0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400FB2B0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E1410
#define CharacterZoneClient__SpellDuration_x                       0x1400E2140
#define CharacterZoneClient__TotalEffect_x                         0x1400E34A0
#define CharacterZoneClient__UseSkill_x                            0x1401007F0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140371D90

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14037C110

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140377F90
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14037BB90

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14037E880

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140ABB9A0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403A15C0
#define CChatWindowManager__InitContextMenu_x                      0x1403A1750
#define CChatWindowManager__FreeChatWindow_x                       0x1403A0630
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403A9390
#define CChatWindowManager__CreateChatWindow_x                     0x1403A0060

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140108D40

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403AA3E0
#define CChatWindow__Clear_x                                       0x1403AB390
#define CChatWindow__WndNotification_x                             0x1403AC580
#define CChatWindow__AddHistory_x                                  0x1403AAE90

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405C4420
#define CContextMenu__RemoveMenuItem_x                             0x1405C4800
#define CContextMenu__RemoveAllMenuItems_x                         0x1405C47D0
#define CContextMenu__CheckMenuItem_x                              0x1405C4640
#define CContextMenu__SetMenuItem_x                                0x1405C4820
#define CContextMenu__AddSeparator_x                               0x1405C4580

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405B6300
#define CContextMenuManager__RemoveMenu_x                          0x1405B68E0
#define CContextMenuManager__PopupMenu_x                           0x1405B6620
#define CContextMenuManager__Flush_x                               0x1405B6380
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403B8D90

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x140691C20
#define CChatService__GetFriendName_x                              0x140691C30

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405A72B0
#define CComboWnd__Draw_x                                          0x1405A73A0
#define CComboWnd__GetCurChoice_x                                  0x1405A7670  // unused
#define CComboWnd__GetListRect_x                                   0x1405A7710
#define CComboWnd__InsertChoice_x                                  0x1405A7A30
#define CComboWnd__SetColors_x                                     0x1405A7DC0
#define CComboWnd__SetChoice_x                                     0x1405A7D80
#define CComboWnd__GetItemCount_x                                  0x1405A7700
#define CComboWnd__GetCurChoiceText_x                              0x1405A76B0  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405A7640
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405A7AF0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403B6AB0
#define CContainerWnd__SetContainer_x                              0x14040E450
#define CContainerWnd__vftable_x                                   0x1409D2540

// CDisplay
#define CDisplay__cameraType_x                                     0x140DAE43C
#define CDisplay__ZoneMainUI_x                                     0x1405DE400
#define CDisplay__PreZoneMainUI_x                                  0x14019A630
#define CDisplay__CleanGameUI_x                                    0x14018C7A0
#define CDisplay__GetClickedActor_x                                0x140190960
#define CDisplay__GetUserDefinedColor_x                            0x1401915D0
#define CDisplay__InitCharSelectUI_x                               0x140191880
#define CDisplay__ReloadUI_x                                       0x14019C920
#define CDisplay__RestartUI_x                                      0x1401FBF40
#define CDisplay__WriteTextHD2_x                                   0x1401A3930
#define CDisplay__TrueDistance_x                                   0x1401A35E0
#define CDisplay__SetViewActor_x                                   0x14019FE20
#define CDisplay__GetFloorHeight_x                                 0x140190BC0
#define CDisplay__ToggleScreenshotMode_x                           0x1401A30D0
#define CDisplay__RealRender_World_x                               0x14019BD00

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405E8630
#define CEditWnd__DrawCaret_x                                      0x1405DA1D0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405DA660
#define CEditWnd__GetCaretPt_x                                     0x1405DA8E0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405DA920
#define CEditWnd__GetDisplayString_x                               0x1405DAB80
#define CEditWnd__GetHorzOffset_x                                  0x1405DADC0
#define CEditWnd__GetLineForPrintableChar_x                        0x1405DAF00
#define CEditWnd__GetSelStartPt_x                                  0x1405DB1E0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405DB030
#define CEditWnd__PointFromPrintableChar_x                         0x1405DBD90
#define CEditWnd__ReplaceSelection_x                               0x1405DC130
#define CEditWnd__SelectableCharFromPoint_x                        0x1405DC5D0
#define CEditWnd__SetEditable_x                                    0x1405DC860
#define CEditWnd__SetWindowText_x                                  0x1405DC890

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14026FF30
#define CEverQuest__ClickedPlayer_x                                0x140264320
#define CEverQuest__CreateTargetIndicator_x                        0x140264BE0
#define CEverQuest__DoTellWindow_x                                 0x140108A50 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140109320 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140271920
#define CEverQuest__dsp_chat_x                                     0x140108490 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x14029C9C0
#define CEverQuest__Emote_x                                        0x140272310
#define CEverQuest__GetBodyTypeDesc_x                              0x1402730F0
#define CEverQuest__GetClassDesc_x                                 0x140273150
#define CEverQuest__GetClassThreeLetterCode_x                      0x140273520
#define CEverQuest__GetDeityDesc_x                                 0x1402737D0
#define CEverQuest__GetLangDesc_x                                  0x140273C00
#define CEverQuest__GetRaceDesc_x                                  0x140273FA0
#define CEverQuest__InterpretCmd_x                                 0x140275930
#define CEverQuest__LeftClickedOnPlayer_x                          0x14028AB20
#define CEverQuest__LMouseUp_x                                     0x1402773A0
#define CEverQuest__RightClickedOnPlayer_x                         0x140288310
#define CEverQuest__RMouseUp_x                                     0x1402819D0
#define CEverQuest__SetGameState_x                                 0x14028DA90
#define CEverQuest__UPCNotificationFlush_x                         0x140293400 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140277000
#define CEverQuest__ReportSuccessfulHeal_x                         0x140282DA0
#define CEverQuest__ReportSuccessfulHit_x                          0x140283BC0

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403CC0E0

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C32B0
#define CGuild__GetGuildName_x                                     0x1400C32F0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403EF590

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402AEB90
#define CHotButton__SetCheck_x                                     0x1402AEE60

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1404071B0
#define CInvSlotMgr__MoveItem_x                                    0x140407390
#define CInvSlotMgr__SelectSlot_x                                  0x140408D90

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1404043D0
#define CInvSlot__SliderComplete_x                                 0x140405920
#define CInvSlot__GetItemBase_x                                    0x1403FFD60
#define CInvSlot__UpdateItem_x                                     0x140405DD0

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x14040A120

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x14042B5E0
#define CItemDisplayWnd__UpdateStrings_x                           0x14042E1A0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140427E00
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140429750
#define CItemDisplayWnd__RequestConvertItem_x                      0x14042AA00

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404F5000
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404F6D90

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140531D60

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1404244D0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x1401538C0

// CLabel
#define CLabel__UpdateText_x                                       0x140435590

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405AAC00
#define CListWnd__dCListWnd_x                                      0x1405AB040
#define CListWnd__vftable_x                                        0x140AB9AF0
#define CListWnd__AddColumn_x                                      0x1405AB6E0
#define CListWnd__AddColumn1_x                                     0x1405AB780
#define CListWnd__AddLine_x                                        0x1405AB8E0
#define CListWnd__AddString_x                                      0x1405ABE70
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405AC3E0
#define CListWnd__CalculateVSBRange_x                              0x1405AC6C0
#define CListWnd__ClearSel_x                                       0x1405AC870
#define CListWnd__ClearAllSel_x                                    0x1405AC810
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405AC8D0
#define CListWnd__Compare_x                                        0x1405ACA90
#define CListWnd__Draw_x                                           0x1405ACF60
#define CListWnd__DrawColumnSeparators_x                           0x1405ADB00
#define CListWnd__DrawHeader_x                                     0x1405ADBC0
#define CListWnd__DrawItem_x                                       0x1405AE290
#define CListWnd__DrawLine_x                                       0x1405AEC00
#define CListWnd__DrawSeparator_x                                  0x1405AF0C0
#define CListWnd__EnableLine_x                                     0x1405AF4E0
#define CListWnd__EnsureVisible_x                                  0x1405AF540
#define CListWnd__ExtendSel_x                                      0x1405AF640
#define CListWnd__GetColumnMinWidth_x                              0x1405AF9D0
#define CListWnd__GetColumnWidth_x                                 0x1405AFA50
#define CListWnd__GetCurSel_x                                      0x1405AFB50
#define CListWnd__GetItemData_x                                    0x1405AFED0
#define CListWnd__GetItemHeight_x                                  0x1405AFF10
#define CListWnd__GetItemRect_x                                    0x1405B0130
#define CListWnd__GetItemText_x                                    0x1405B03D0
#define CListWnd__GetSelList_x                                     0x1405B0620
#define CListWnd__GetSeparatorRect_x                               0x1405B0810
#define CListWnd__InsertLine_x                                     0x1405B1C70
#define CListWnd__RemoveLine_x                                     0x1405B22E0
#define CListWnd__SetColors_x                                      0x1405B26A0
#define CListWnd__SetColumnJustification_x                         0x1405B26C0
#define CListWnd__SetColumnLabel_x                                 0x1405B2740
#define CListWnd__SetColumnWidth_x                                 0x1405B28E0
#define CListWnd__SetCurSel_x                                      0x1405B29B0
#define CListWnd__SetItemColor_x                                   0x1405B2C20
#define CListWnd__SetItemData_x                                    0x1405B2CC0
#define CListWnd__SetItemText_x                                    0x1405B2F00
#define CListWnd__Sort_x                                           0x1405B3310
#define CListWnd__ToggleSel_x                                      0x1405B3480
#define CListWnd__SetColumnsSizable_x                              0x1405B2930
#define CListWnd__SetItemWnd_x                                     0x1405B3030
#define CListWnd__GetItemWnd_x                                     0x1405B05B0
#define CListWnd__SetItemIcon_x                                    0x1405B2D00
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405AC1B0
#define CListWnd__SetVScrollPos_x                                  0x1405B3270

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140448840

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A1F710
#define MapViewMap__Clear_x                                        0x14044A3C0
#define MapViewMap__SetZoom_x                                      0x140450A30
#define MapViewMap__HandleLButtonDown_x                            0x14044D550

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140472170  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x1404787E0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140478F90
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14047C7B0
#define CMerchantWnd__SelectBuySellSlot_x                          0x14047BB00
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140480A60

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14066CE20
#define CPacketScrambler__hton_x                                   0x14066CE10

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405D3AD0
#define CSidlManagerBase__FindAnimation1_x                         0x1405D3A10
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405D4100
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405D3EB0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405D2E10
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405D2DA0
#define CSidlManagerBase__CreateXWnd_x                             0x1405D2400

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404E7ED0
#define CSidlManager__CreateXWnd_x                                 0x1404E8090

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405988B0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x1405989D0
#define CSidlScreenWnd__ConvertToRes_x                             0x1405E2B70 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x140598B50
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x140597FE0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x1405980B0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1405982C0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x140599240
#define CSidlScreenWnd__EnableIniStorage_x                         0x140599470
#define CSidlScreenWnd__GetChildItem_x                             0x140599610
#define CSidlScreenWnd__GetSidlPiece_x                             0x140599860
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405A3880 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x140599BD0
#define CSidlScreenWnd__LoadIniInfo_x                              0x140599F10
#define CSidlScreenWnd__LoadIniListWnd_x                           0x14059A7D0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x14059B1D0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F07D98
#define CSidlScreenWnd__StoreIniInfo_x                             0x14059B850
#define CSidlScreenWnd__StoreIniVis_x                              0x14059C040
#define CSidlScreenWnd__vftable_x                                  0x140AB8D78
#define CSidlScreenWnd__WndNotification_x                          0x14059C090

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14032A8F0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14032AD90 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14032ACC0
#define CSkillMgr__IsActivatedSkill_x                              0x14032B140
#define CSkillMgr__IsCombatSkill_x                                 0x14032B180
#define CSkillMgr__GetSkillTimerDuration_x                         0x14032B0B0
#define CSkillMgr__GetSkillLastUsed_x                              0x14032AD10

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405B3DD0
#define CSliderWnd__SetValue_x                                     0x1405B45E0
#define CSliderWnd__SetNumTicks_x                                  0x1405B4460

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404EE600

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405B8D60
#define CStmlWnd__CalculateHSBRange_x                              0x1405A3230
#define CStmlWnd__CalculateVSBRange_x                              0x1405B9C00
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405BA700
#define CStmlWnd__ForceParseNow_x                                  0x1405BA7A0
#define CStmlWnd__GetVisibleText_x                                 0x1405BAE70
#define CStmlWnd__MakeStmlColorTag_x                               0x1405BCBD0
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405BCC10
#define CStmlWnd__SetSTMLText_x                                    0x1405C3BD0
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405C3D80
#define CStmlWnd__UpdateHistoryString_x                            0x1405C4110

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405B4990
#define CTabWnd__DrawCurrentPage_x                                 0x1405B4A30
#define CTabWnd__DrawTab_x                                         0x1405B4E00
#define CTabWnd__GetTabRect_x                                      0x1405B5470
#define CTabWnd__InsertPage_x                                      0x1405B5740
#define CTabWnd__RemovePage_x                                      0x1405B59D0
#define CTabWnd__SetPage_x                                         0x1405B5B30
#define CTabWnd__UpdatePage_x                                      0x1405B5E30

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405DCCC0
#define CPageWnd__SetTabText_x                                     0x1405DCD30

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BC8E0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BCCF0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405CB4B0
#define CTextureFont__DrawWrappedText1_x                           0x1405CB3C0
#define CTextureFont__DrawWrappedText2_x                           0x1405CB5E0
#define CTextureFont__GetTextExtent_x                              0x1405CB990
#define CTextureFont__GetHeight_x                                  0x1405CB950

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405E12D0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x140597BC0

// CXStr
#define CXStr__gFreeLists_x                                        0x140D36F00
#define CXStr__gCXStrAccess_x                                      0x140F078F8

// CXWnd
#define CXWnd__BringToTop_x                                        0x14059E8F0
#define CXWnd__ClrFocus_x                                          0x14059EBE0
#define CXWnd__Destroy_x                                           0x14059ED60
#define CXWnd__DoAllDrawing_x                                      0x14059EE70
#define CXWnd__DrawColoredRect_x                                   0x14059F640
#define CXWnd__DrawTooltip_x                                       0x1405A0CC0
#define CXWnd__DrawTooltipAtPoint_x                                0x1405A0D70
#define CXWnd__GetChildItem_x                                      0x1405A1670
#define CXWnd__GetChildWndAt_x                                     0x1405A1730
#define CXWnd__GetClientRect_x                                     0x1405A19E0
#define CXWnd__GetClientClipRect_x                                 0x1405A1890
#define CXWnd__GetRelativeRect_x                                   0x1405A3370
#define CXWnd__GetScreenClipRect_x                                 0x1405A3480
#define CXWnd__GetScreenRect_x                                     0x1405A3600
#define CXWnd__GetTooltipRect_x                                    0x1405A3780
#define CXWnd__IsActive_x                                          0x1405A3D40
#define CXWnd__IsDescendantOf_x                                    0x1405A3D70
#define CXWnd__IsReallyVisible_x                                   0x1405A3DE0
#define CXWnd__IsType_x                                            0x1405A3E20
#define CXWnd__Minimize_x                                          0x1405A3F10
#define CXWnd__ProcessTransition_x                                 0x1405A4E10
#define CXWnd__Resize_x                                            0x1405A4F20
#define CXWnd__Right_x                                             0x1405A4FC0
#define CXWnd__SetFocus_x                                          0x1405A5370
#define CXWnd__SetFont_x                                           0x1405A53C0
#define CXWnd__SetKeyTooltip_x                                     0x1405A54C0
#define CXWnd__SetMouseOver_x                                      0x1405A5600
#define CXWnd__SetParent_x                                         0x1405A5680
#define CXWnd__StartFade_x                                         0x1405A5AC0
#define CXWnd__vftable_x                                           0x140AB9350
#define CXWnd__CXWnd_x                                             0x14059D4B0
#define CXWnd__dCXWnd_x                                            0x14059DDE0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405E7DB0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405C59C0
#define CXWndManager__DrawCursor_x                                 0x1405C5CA0
#define CXWndManager__DrawWindows_x                                0x1405C5F00
#define CXWndManager__GetKeyboardFlags_x                           0x1405C65D0
#define CXWndManager__HandleKeyboardMsg_x                          0x1405C6610
#define CXWndManager__RemoveWnd_x                                  0x1405C9B70

// CDBStr
#define CDBStr__GetString_x                                        0x14018A960

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x140676C70

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D0CF0
#define CCharacterListWnd__EnterWorld_x                            0x1400CFD00
#define CCharacterListWnd__Quit_x                                  0x1400D0CD0
#define CCharacterListWnd__UpdateList_x                            0x1400D1B50

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140644370
#define ItemBase__CreateItemTagString_x                            0x140644DE0
#define ItemBase__GetImageNum_x                                    0x140647340
#define ItemBase__GetItemValue_x                                   0x140648DF0
#define ItemBase__IsEmpty_x                                        0x14064AA10
#define ItemBase__IsKeyRingItem_x                                  0x14064B140
#define ItemBase__ValueSellMerchant_x                              0x14064F360
#define ItemClient__CanDrop_x                                      0x1402B1480
#define ItemClient__CanGoInBag_x                                   0x1402B15B0
#define ItemClient__CreateItemClient_x                             0x1402B1830
#define ItemClient__dItemClient_x                                  0x1402B12F0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401AA220
#define EQ_LoadingS__Array_x                                       0x140D23230

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14065BAE0
#define PcBase__GetCombatAbility_x                                 0x14065C1D0
#define PcBase__GetCombatAbilityTimer_x                            0x14065C270
#define PcBase__GetItemContainedRealEstateIds_x                    0x14065CA10
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14065D550
#define PcClient__AlertInventoryChanged_x                          0x1402D39B0
#define PcClient__GetConLevel_x                                    0x1402D3FD0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402D6750
#define PcClient__HasLoreItem_x                                    0x1402D77E0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402E4FB0
#define PcZoneClient__RemoveMyAffect_x                             0x1402E8CF0

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x14021A950  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x14021AB00  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x14021AC60  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x14021ABA0  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x140255860  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140185160

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140630CE0
#define PlayerBase__CanSee1_x                                      0x140630DB0
#define PlayerBase__GetVisibilityLineSegment_x                     0x140631290
#define PlayerBase__HasProperty_x                                  0x140631460
#define PlayerBase__IsTargetable_x                                 0x140631520
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402F6A80
#define PlayerClient__GetPcClient_x                                0x1402F95B0
#define PlayerClient__PlayerClient_x                               0x1402EEDE0
#define PlayerClient__SetNameSpriteState_x                         0x1402FCCE0
#define PlayerClient__SetNameSpriteTint_x                          0x1402FDCA0
#define PlayerZoneClient__ChangeHeight_x                           0x14030C7D0
#define PlayerZoneClient__DoAttack_x                               0x14030D4E0
#define PlayerZoneClient__GetLevel_x                               0x140310C20
#define PlayerZoneClient__IsValidTeleport_x                        0x1402585F0
#define PlayerZoneClient__LegalPlayerRace_x                        0x140198EB0

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x140305CD0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x140305D80  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x140305E80
#define PlayerManagerClient__CreatePlayer_x                        0x1403057A0
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x1406308A0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402B66E0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402B62E0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402B6350
#define KeypressHandler__ClearCommandStateArray_x                  0x1402B6670  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402B6800
#define KeypressHandler__HandleKeyUp_x                             0x1402B6920
#define KeypressHandler__SaveKeymapping_x                          0x1402B6580  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140674790  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x14066E560

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402DDDA0  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402E30F0
#define PcZoneClient__GetPcSkillLimit_x                            0x1402E5740
#define PcZoneClient__RemovePetEffect_x                            0x1402E8FD0
#define PcZoneClient__HasAlternateAbility_x                        0x1402E6320
#define PcZoneClient__CanEquipItem_x                               0x1402E1400
#define PcZoneClient__GetItemByID_x                                0x1402E4010
#define PcZoneClient__RemoveBuffEffect_x                           0x1402E8B70
#define PcZoneClient__BandolierSwap_x                              0x1402E0460

// Doors
#define EQSwitch__UseSwitch_x                                      0x14025D120

// IconCache
#define IconCache__GetIcon_x                                       0x1403C1210

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403B5860
#define CContainerMgr__CloseContainer_x                            0x1403B51A0
#define CContainerMgr__OpenExperimentContainer_x                   0x1403B5BE0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404AC0B0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402A8E80

// CLootWnd
#define CLootWnd__LootAll_x                                        0x14043C870
#define CLootWnd__RequestLootSlot_x                                0x14043D8A0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401D9760
#define EQ_Spell__SpellAffects_x                                   0x1401DAA40
#define EQ_Spell__SpellAffectBase_x                                0x1401DA9A0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D9D10
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D9CC0
#define EQ_Spell__IsSPAStacking_x                                  0x1401DA670
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401DA220
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401D9AF0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C1DF0

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x140508DC0
#define CTargetWnd__RefreshTargetBuffs_x                           0x1405084D0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x140507CD0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x140510450  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140181B00
#define CTaskManager__GetTaskStatus_x                              0x140181C10
#define CTaskManager__GetElementDescription_x                      0x140181790

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401D7A80
#define EqSoundManager__PlayScriptMp3_x                            0x1401D68C0
#define EqSoundManager__SoundAssistPlay_x                          0x14032FF30  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140330270  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405A6860
#define CTextureAnimation__SetCurCell_x                            0x1405A6B70

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402A7080

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x14068F2F0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x14068F370
#define CharacterBase__IsExpansionFlag_x                           0x1401FB770

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140392220
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140392C20
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140394170

// messages
#define msg_spell_worn_off_x                                       0x140211170
#define msg_new_text_x                                             0x14020C920
#define __msgTokenTextParam_x                                      0x140204000
#define msgTokenText_x                                             0x140203F10

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140331B60
#define SpellManager__GetSpellByGroupAndRank_x                     0x140331A80

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x14063F650

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140435CE0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403BA5C0
#define CCursorAttachment__IsOkToActivate_x                        0x1403BD860
#define CCursorAttachment__RemoveAttachment_x                      0x1403BDB10
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405DF770
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405DF960
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405DF970

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x14014EA90
#define CFindItemWnd__Update_x                                     0x14014F430
#define CFindItemWnd__PickupSelectedItem_x                         0x140148EE0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x140158520
#define LootFiltersManager__GetItemFilterData_x                    0x140159040
#define LootFiltersManager__RemoveItemLootFilter_x                 0x1401598E0
#define LootFiltersManager__SetItemLootFilter_x                    0x140159B90

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14048EB30

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x14032A4B0
#define CResolutionHandler__UpdateResolution_x                     0x14058C040

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403B1B50

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406936F0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406935E0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403D84C0
#define CGroupWnd__UpdateDisplay_x                                 0x1403D80A0

// ItemBase
#define ItemBase__IsLore_x                                         0x14064B270
#define ItemBase__IsLoreEquipped_x                                 0x14064B300

#define MultipleItemMoveManager__ProcessMove_x                     0x1402C9520

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x1402559C0
#define EQPlacedItemManager__GetItemByGuid_x                       0x140255950
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140255990

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140324900

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x1401266E0
#define FactionManagerClient__HandleFactionMessage_x               0x140126A90
#define FactionManagerClient__GetFactionStanding_x                 0x140125EB0
#define FactionManagerClient__GetMaxFaction_x                      0x140125EB0
#define FactionManagerClient__GetMinFaction_x                      0x140125D60

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AEE50

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140131E90

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401B2BC0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401B1F40
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401B29E0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401B2960  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x140336E60

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140324900

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x14021ACF0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x14059C680

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140086990

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140348730

// AchievementManager
#define AchievementManager__Instance_x                             0x14008EB50

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x1406777F0
#define FreeToPlayClient__RestrictionInfo_x                        0x140ACDBB0

// UdpConnection
#define UdpConnection__GetStats_x                                  0x14053EE20

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x140828610
#define CGFScreenWnd__CGFScreenWnd_x                               0x140071300
#define CGFScreenWnd__CGFScreenWnd1_x                              0x140071490
#define CGFScreenWnd__dCGFScreenWnd_x                              0x140071640

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
