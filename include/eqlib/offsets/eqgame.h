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

#define __ClientDate                                               20251013u
#define __ExpectedVersionDate                                     "Oct 13 2025"
#define __ExpectedVersionTime                                     "15:53:20"
#define __ActualVersionDate_x                                      0x140966AC0
#define __ActualVersionTime_x                                      0x140966AB0
#define __ActualVersionBuild_x                                     0x1408FC690

// Memory Protection
#define __MemChecker0_x                                            0x1402C1210
#define __MemChecker1_x                                            0x14058A260
#define __MemChecker4_x                                            0x14028EB20
#define __EncryptPad0_x                                            0x140D36ED0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E6F910
#define instEQZoneInfo_x                                           0x140E6FB04 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x140222A30
#define __gfMaxZoomCameraDistance_x                                0x1408FD938
#define __gfMaxCameraDistance_x                                    0x140AA5194
#define __CurrentSocial_x                                          0x140BF2950 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D2E720
#define g_eqCommandStates_x                                        0x140D2F7B0
#define __CommandList_x                                            0x140D2F9F0
#define __ScreenMode_x                                             0x140DB7224
#define __gWorld_x                                                 0x140E67DD8
#define __gpbCommandEvent_x                                        0x140E68330
#define __ServerHost_x                                             0x140E68528
#define __Guilds_x                                                 0x140E6E4C0
#define __MemCheckBitmask_x                                        0x140E6FE4F
#define __MemCheckActive_x                                         0x140E71559
#define __MouseEventTime_x                                         0x140EE4EC8
#define DI8__MouseState_x                                          0x140EE9128
#define __heqmain_x                                                0x140EEB5C8
#define DI8__Mouse_x                                               0x140EE9078
#define __HWnd_x                                                   0x140EE9100
#define __Mouse_x                                                  0x140EE9034
#define DI8__Keyboard_x                                            0x140EE9050
#define __LoginName_x                                              0x140EEBCAC
#define __CurrentMapLabel_x                                        0x140EFF7C0
#define __LabelCache_x                                             0x140F00390
#define __ChatFilterDefs_x                                         0x140A3F8F0
#define Teleport_Table_Size_x                                      0x140E683C0
#define Teleport_Table_x                                           0x140E68850

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E6A850
#define pinstActiveBanker_x                                        0x140E68208
#define pinstActiveCorpse_x                                        0x140E681F8
#define pinstActiveGMaster_x                                       0x140E68200
#define pinstActiveMerchant_x                                      0x140E681F0
#define pinstAltAdvManager_x                                       0x140DB8058
#define pinstCEverQuest_x                                          0x140EE9070
#define pinstCamActor_x                                            0x140DB7210
#define pinstCDBStr_x                                              0x140DB6E10
#define pinstCDisplay_x                                            0x140E67D90
#define pinstControlledPlayer_x                                    0x140E68298
#define pinstCResolutionHandler_x                                  0x140F10BC8
#define pinstCSidlManager_x                                        0x140F11930
#define pinstCXWndManager_x                                        0x140F11928
#define instDynamicZone_x                                          0x140E6E380 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E6E3CE
#define instExpeditionName_x                                       0x140E6E40E
#define pinstDZMember_x                                            0x140E6E498
#define pinstDZTimerInfo_x                                         0x140E6E4A0
#define pinstEqLogin_x                                             0x140EEB5F0
#define instTribute_x                                              0x140D29D60
#define pinstDeviceInputProxy_x                                    0x140E6F96C
#define pinstEQSoundManager_x                                      0x140DB83E0
#define pinstEQSpellStrings_x                                      0x140D9B9A0
#define pinstSGraphicsEngine_x                                     0x140F10958
#define pinstLocalPC_x                                             0x140E67DC0
#define pinstLocalPlayer_x                                         0x140E681E8
#define pinstCMercenaryClientManager_x                             0x140EE67D8
#define pinstModelPlayer_x                                         0x140E68218
#define pinstRenderInterface_x                                     0x140F10970
#define pinstSkillMgr_x                                            0x140EE8478
#define pinstSpawnManager_x                                        0x140EE6BA0
#define pinstSpellManager_x                                        0x140EE84E0
#define pinstStringTable_x                                         0x140E67DC8
#define pinstSwitchManager_x                                       0x140E67D10
#define pinstTarget_x                                              0x140E68290
#define pinstTaskMember_x                                          0x140D29D50 // Part of g_taskManager
#define pinstTradeTarget_x                                         0x140E68210
#define instTributeActive_x                                        0x140D29D89
#define pinstViewActor_x                                           0x140DB7208
#define pinstWorldData_x                                           0x140E68418
#define pinstPlayerPath_x                                          0x140EE6BC8
#define pinstTargetIndicator_x                                     0x140EE8590
#define EQObject_Top_x                                             0x140E68338

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140EFC920
#define pinstCContainerMgr_x                                       0x140DB7240
#define pinstCContextMenuManager_x                                 0x140F11610
#define pinstCInvSlotMgr_x                                         0x140DB71F8
#define pinstCItemDisplayManager_x                                 0x140EFF390
#define pinstCPopupWndManager_x                                    0x140EFFC20
#define pinstCSpellDisplayMgr_x                                    0x140F00270
#define pinstCTaskManager_x                                        0x140BF2C90
#define pinstEQSuiteTextureLoader_x                                0x140D405E0
#define pinstItemIconCache_x                                       0x140EFCC80
#define pinstLootFiltersManager_x                                  0x140DB6858
#define pinstGFViewListener_x                                      0x140F10DE8


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x14024C730
#define __CastRay_x                                                0x1402449C0
#define __CastRay2_x                                               0x1402446C0
#define __compress_block_x                                         0x14053F630
#define __ConvertItemTags_x                                        0x140244E20
#define __CleanItemTags_x                                          0x14008A750
#define __CreateCascadeMenuItems_x                                 0x14018E470
#define __decompress_block_x                                       0x140585A70
#define __DoesFileExist_x                                          0x14058E110
#define __EQGetTime_x                                              0x14058A810
#define __ExecuteCmd_x                                             0x14021A0B0
#define __FixHeading_x                                             0x140645600
#define __FlushDxKeyboard_x                                        0x140345590
#define __get_bearing_x                                            0x14024E960
#define __get_melee_range_x                                        0x14024EA50
#define __GetAnimationCache_x                                      0x1403C68A0
#define __GetGaugeValueFromEQ_x                                    0x1404FF170
#define __GetLabelFromEQ_x                                         0x140500770
#define __GetXTargetType_x                                         0x1406468E0   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140645680
#define __HelpPath_x                                               0x140EE4D90   // Why?
#define __NewUIINI_x                                               0x14050C1B0   // Why?
#define __ProcessDeviceEvents_x                                    0x14028F130
#define __ProcessGameEvents_x                                      0x140283C30
#define __ProcessKeyboardEvents_x                                  0x140346CE0
#define __ProcessMouseEvents_x                                     0x140285350
#define __SaveColors_x                                             0x14019E480
#define __STMLToText_x                                             0x14059DCD0
#define __WndProc_x                                                0x140343D30
#define CMemoryMappedFile__SetFile_x                               0x1407F2710
#define DrawNetStatus_x                                            0x1402CF8E0
#define Util__FastTime_x                                           0x140589D40
#define __eq_delete_x                                              0x1406BE738
#define __eq_new_x                                                 0x1406BE990
#define __CopyLayout_x                                             0x1402BD600
#define __ThrottleFrameRate_x                                      0x1402732D2
#define __ThrottleFrameRateEnd_x                                   0x140273332

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x1403567B0
#define CAAWnd__Update_x                                           0x140356AB0
#define CAAWnd__UpdateSelected_x                                   0x140357CA0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400ACCE0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A56D0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140849768
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AD610

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401A96F0
#define AltAdvManager__IsAbilityReady_x                            0x1401A9B80
#define AltAdvManager__GetAAById_x                                 0x1401A8FC0
#define AltAdvManager__CanTrainAbility_x                           0x1401A8DB0
#define AltAdvManager__CanSeeAbility_x                             0x1401A8A70

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D3660
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D44C0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D4710
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400E8F50
#define CharacterZoneClient__CanUseItem_x                          0x1400E9510
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D50E0
#define CharacterZoneClient__CastSpell_x                           0x1400D5180
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E4D50
#define CharacterZoneClient__Cur_HP_x                              0x1400EAC30
#define CharacterZoneClient__Cur_Mana_x                            0x1400EADF0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D84F0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F1470
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FFD10  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D9990
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E8850
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F3020
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F1F00
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D9B10
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C9E40
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400CB840
#define CharacterZoneClient__GetHPRegen_x                          0x1400F2640
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400EA8A0
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F32B0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D9B90
#define CharacterZoneClient__GetManaRegen_x                        0x1400F4030
#define CharacterZoneClient__GetModCap_x                           0x1400FB4C0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D9E20
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D9FF0
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CE9D0
#define CharacterZoneClient__HasSkill_x                            0x1400F7000
#define CharacterZoneClient__HitBySpell_x                          0x1400DAA80
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DE3F0
#define CharacterZoneClient__MakeMeVisible_x                       0x1400FAFA0
#define CharacterZoneClient__Max_Endurance_x                       0x1402EB730  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400FB2F0
#define CharacterZoneClient__Max_Mana_x                            0x1402EB950  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400FB750
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E18A0
#define CharacterZoneClient__SpellDuration_x                       0x1400E25D0
#define CharacterZoneClient__TotalEffect_x                         0x1400E3930
#define CharacterZoneClient__UseSkill_x                            0x140100C90


// CBankWnd
#define CBankWnd__WndNotification_x                                0x1403754A0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14037F840

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14037B6B0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14037F2C0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140381FA0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AC4650

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403A4DC0
#define CChatWindowManager__InitContextMenu_x                      0x1403A4F50
#define CChatWindowManager__FreeChatWindow_x                       0x1403A3E20
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403ACEA0
#define CChatWindowManager__CreateChatWindow_x                     0x1403A3860

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x1401091D0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403ADEF0
#define CChatWindow__Clear_x                                       0x1403AEEA0
#define CChatWindow__WndNotification_x                             0x1403B0080
#define CChatWindow__AddHistory_x                                  0x1403AE9A0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405CB460
#define CContextMenu__RemoveMenuItem_x                             0x1405CB850
#define CContextMenu__RemoveAllMenuItems_x                         0x1405CB820
#define CContextMenu__CheckMenuItem_x                              0x1405CB690
#define CContextMenu__SetMenuItem_x                                0x1405CB870
#define CContextMenu__AddSeparator_x                               0x1405CB5D0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405BD320
#define CContextMenuManager__RemoveMenu_x                          0x1405BD900
#define CContextMenuManager__PopupMenu_x                           0x1405BD640
#define CContextMenuManager__Flush_x                               0x1405BD3A0
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403BE460

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1404FF100
#define CChatService__GetFriendName_x                              0x1406986F0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405AE230
#define CComboWnd__Draw_x                                          0x1405AE330
#define CComboWnd__GetCurChoice_x                                  0x1405AE610  // unused
#define CComboWnd__GetListRect_x                                   0x1405AE6B0
#define CComboWnd__InsertChoice_x                                  0x1405AE9E0
#define CComboWnd__SetColors_x                                     0x1405AED70
#define CComboWnd__SetChoice_x                                     0x1405AED30
#define CComboWnd__GetItemCount_x                                  0x1405AE6A0
#define CComboWnd__GetCurChoiceText_x                              0x1405AE650  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405AE5E0
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405AEAA0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403BC180
#define CContainerWnd__SetContainer_x                              0x140414570
#define CContainerWnd__vftable_x                                   0x1409DAFC0

// CDisplay
#define CDisplay__cameraType_x                                     0x140DB6FCC
#define CDisplay__ZoneMainUI_x                                     0x1405E5720
#define CDisplay__PreZoneMainUI_x                                  0x14019B390
#define CDisplay__CleanGameUI_x                                    0x14018D530
#define CDisplay__GetClickedActor_x                                0x140191700
#define CDisplay__GetUserDefinedColor_x                            0x140192370
#define CDisplay__InitCharSelectUI_x                               0x140192620
#define CDisplay__ReloadUI_x                                       0x14019D690
#define CDisplay__RestartUI_x                                      0x1401FED40
#define CDisplay__WriteTextHD2_x                                   0x1401A4690
#define CDisplay__TrueDistance_x                                   0x1401A4340
#define CDisplay__SetViewActor_x                                   0x1401A0BB0
#define CDisplay__GetFloorHeight_x                                 0x140191960
#define CDisplay__ToggleScreenshotMode_x                           0x1401A3E30
#define CDisplay__RealRender_World_x                               0x14019CA60

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405EF950
#define CEditWnd__DrawCaret_x                                      0x1405E1450  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405E18F0
#define CEditWnd__GetCaretPt_x                                     0x1405E1B70  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405E1BB0
#define CEditWnd__GetDisplayString_x                               0x1405E1E20
#define CEditWnd__GetHorzOffset_x                                  0x1405E2050
#define CEditWnd__GetLineForPrintableChar_x                        0x1405E21A0
#define CEditWnd__GetSelStartPt_x                                  0x1405E2480  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405E22D0
#define CEditWnd__PointFromPrintableChar_x                         0x1405E3030
#define CEditWnd__ReplaceSelection_x                               0x1405E33E0
#define CEditWnd__SelectableCharFromPoint_x                        0x1405E3880
#define CEditWnd__SetEditable_x                                    0x1405E3B00
#define CEditWnd__SetWindowText_x                                  0x1405E3B30

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x1402743E0
#define CEverQuest__ClickedPlayer_x                                0x1402683C0
#define CEverQuest__CreateTargetIndicator_x                        0x140268C80
#define CEverQuest__DoTellWindow_x                                 0x140108EE0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1401097B0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140275DD0
#define CEverQuest__dsp_chat_x                                     0x140108920 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402A0B50
#define CEverQuest__Emote_x                                        0x1402767C0
#define CEverQuest__GetBodyTypeDesc_x                              0x1402775A0
#define CEverQuest__GetClassDesc_x                                 0x140277600
#define CEverQuest__GetClassThreeLetterCode_x                      0x1402779D0
#define CEverQuest__GetDeityDesc_x                                 0x140277C80
#define CEverQuest__GetLangDesc_x                                  0x1402780B0
#define CEverQuest__GetRaceDesc_x                                  0x140278450
#define CEverQuest__InterpretCmd_x                                 0x140279DE0
#define CEverQuest__LeftClickedOnPlayer_x                          0x14028F1A0
#define CEverQuest__LMouseUp_x                                     0x14027B860
#define CEverQuest__RightClickedOnPlayer_x                         0x14028C820
#define CEverQuest__RMouseUp_x                                     0x140285EE0
#define CEverQuest__SetGameState_x                                 0x140291C10
#define CEverQuest__UPCNotificationFlush_x                         0x140297580 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14027B4C0
#define CEverQuest__ReportSuccessfulHeal_x                         0x1402872B0
#define CEverQuest__ReportSuccessfulHit_x                          0x1402880D0

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403D1770

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C36E0
#define CGuild__GetGuildName_x                                     0x1400C3720

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403F4C10

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402B2CD0
#define CHotButton__SetCheck_x                                     0x1402B2FA0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x14040D290
#define CInvSlotMgr__MoveItem_x                                    0x14040D470
#define CInvSlotMgr__SelectSlot_x                                  0x14040EEA0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x14040A490
#define CInvSlot__SliderComplete_x                                 0x14040B9E0
#define CInvSlot__GetItemBase_x                                    0x140405E10
#define CInvSlot__UpdateItem_x                                     0x14040BEA0

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x140410230

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140431870
#define CItemDisplayWnd__UpdateStrings_x                           0x140434450
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x14042E040
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x14042F9A0
#define CItemDisplayWnd__RequestConvertItem_x                      0x140430C80

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404FBBE0
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404FD970

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140538990

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x14042A710

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140154260

// CLabel
#define CLabel__UpdateText_x                                       0x14043B840

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405B1BB0
#define CListWnd__dCListWnd_x                                      0x1405B2000
#define CListWnd__vftable_x                                        0x140AC27A0
#define CListWnd__AddColumn_x                                      0x1405B26A0
#define CListWnd__AddColumn1_x                                     0x1405B2740
#define CListWnd__AddLine_x                                        0x1405B28A0
#define CListWnd__AddString_x                                      0x1405B2E30
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405B33A0
#define CListWnd__CalculateVSBRange_x                              0x1405B3680
#define CListWnd__ClearSel_x                                       0x1405B3830
#define CListWnd__ClearAllSel_x                                    0x1405B37D0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405B3890
#define CListWnd__Compare_x                                        0x1405B3A40
#define CListWnd__Draw_x                                           0x1405B3F10
#define CListWnd__DrawColumnSeparators_x                           0x1405B4AC0
#define CListWnd__DrawHeader_x                                     0x1405B4B80
#define CListWnd__DrawItem_x                                       0x1405B5250
#define CListWnd__DrawLine_x                                       0x1405B5BD0
#define CListWnd__DrawSeparator_x                                  0x1405B6090
#define CListWnd__EnableLine_x                                     0x1405B64B0
#define CListWnd__EnsureVisible_x                                  0x1405B6510
#define CListWnd__ExtendSel_x                                      0x1405B6610
#define CListWnd__GetColumnMinWidth_x                              0x1405B69A0
#define CListWnd__GetColumnWidth_x                                 0x1405B6A20
#define CListWnd__GetCurSel_x                                      0x1405B6B20
#define CListWnd__GetItemData_x                                    0x1405B6EA0
#define CListWnd__GetItemHeight_x                                  0x1405B6EE0
#define CListWnd__GetItemRect_x                                    0x1405B7100
#define CListWnd__GetItemText_x                                    0x1405B73A0
#define CListWnd__GetSelList_x                                     0x1405B75F0
#define CListWnd__GetSeparatorRect_x                               0x1405B77E0
#define CListWnd__InsertLine_x                                     0x1405B8C40
#define CListWnd__RemoveLine_x                                     0x1405B92B0
#define CListWnd__SetColors_x                                      0x1405B9670
#define CListWnd__SetColumnJustification_x                         0x1405B9690
#define CListWnd__SetColumnLabel_x                                 0x1405B9710
#define CListWnd__SetColumnWidth_x                                 0x1405B98B0
#define CListWnd__SetCurSel_x                                      0x1405B9980
#define CListWnd__SetItemColor_x                                   0x1405B9BF0
#define CListWnd__SetItemData_x                                    0x1405B9C90
#define CListWnd__SetItemText_x                                    0x1405B9ED0
#define CListWnd__Sort_x                                           0x1405BA2E0
#define CListWnd__ToggleSel_x                                      0x1405BA450
#define CListWnd__SetColumnsSizable_x                              0x1405B9900
#define CListWnd__SetItemWnd_x                                     0x1405BA000
#define CListWnd__GetItemWnd_x                                     0x1405B7580
#define CListWnd__SetItemIcon_x                                    0x1405B9CD0
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405B3170
#define CListWnd__SetVScrollPos_x                                  0x1405BA240

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x14044ECA0

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A282F0
#define MapViewMap__Clear_x                                        0x140450820
#define MapViewMap__SetZoom_x                                      0x140456E70
#define MapViewMap__HandleLButtonDown_x                            0x1404539B0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x1404785B0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x14047ED60
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x14047F510
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140482D50
#define CMerchantWnd__SelectBuySellSlot_x                          0x1404820A0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140487000

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x140673890
#define CPacketScrambler__hton_x                                   0x140673880

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405DAD40
#define CSidlManagerBase__FindAnimation1_x                         0x1405DAC80
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405DB370
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405DB120
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405DA080
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405DA010
#define CSidlManagerBase__CreateXWnd_x                             0x1405D9680

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404EEBE0
#define CSidlManager__CreateXWnd_x                                 0x1404EEDA0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14059F8D0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14059F7C0
#define CSidlScreenWnd__ConvertToRes_x                             0x1405E9E90 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14059FA50
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14059EEF0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14059EFC0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14059F1D0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1405A0140
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405A0370
#define CSidlScreenWnd__GetChildItem_x                             0x1405A0510
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405A0760
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405AA790 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405A0AD0
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405A0E40
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405A1700
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405A2100
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F10C88
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405A2770
#define CSidlScreenWnd__StoreIniVis_x                              0x1405A2F60
#define CSidlScreenWnd__vftable_x                                  0x140AC1A28
#define CSidlScreenWnd__WndNotification_x                          0x1405A2FB0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14032E510 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14032E9B0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14032E8E0
#define CSkillMgr__IsActivatedSkill_x                              0x14032ED60
#define CSkillMgr__IsCombatSkill_x                                 0x14032EDA0
#define CSkillMgr__GetSkillTimerDuration_x                         0x14032ECD0
#define CSkillMgr__GetSkillLastUsed_x                              0x14032E930

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405BADD0
#define CSliderWnd__SetValue_x                                     0x1405BB5E0
#define CSliderWnd__SetNumTicks_x                                  0x1405BB460

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404F5340

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405BFD80
#define CStmlWnd__CalculateHSBRange_x                              0x1405AA160
#define CStmlWnd__CalculateVSBRange_x                              0x1405C0C20
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405C1720
#define CStmlWnd__ForceParseNow_x                                  0x1405C17C0
#define CStmlWnd__GetVisibleText_x                                 0x1405C1E90
#define CStmlWnd__MakeStmlColorTag_x                               0x1405C3BF0
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405C3C30
#define CStmlWnd__SetSTMLText_x                                    0x1405CAC00
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405CADB0
#define CStmlWnd__UpdateHistoryString_x                            0x1405CB140

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405BB9B0
#define CTabWnd__DrawCurrentPage_x                                 0x1405BBA50
#define CTabWnd__DrawTab_x                                         0x1405BBE20
#define CTabWnd__GetTabRect_x                                      0x1405BC490
#define CTabWnd__InsertPage_x                                      0x1405BC760
#define CTabWnd__RemovePage_x                                      0x1405BC9F0
#define CTabWnd__SetPage_x                                         0x1405BCB50
#define CTabWnd__UpdatePage_x                                      0x1405BCE50

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405E3F80
#define CPageWnd__SetTabText_x                                     0x1405E3FF0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BCCB0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BD0C0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405D2740
#define CTextureFont__DrawWrappedText1_x                           0x1405D2650
#define CTextureFont__DrawWrappedText2_x                           0x1405D2870
#define CTextureFont__GetTextExtent_x                              0x1405D2C20
#define CTextureFont__GetHeight_x                                  0x1405D2BE0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405E85F0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x14059C3C0

// CXStr
#define CXStr__gFreeLists_x                                        0x140D3FF50
#define CXStr__gCXStrAccess_x                                      0x140F107E8

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405A5820
#define CXWnd__ClrFocus_x                                          0x1405A5B10
#define CXWnd__Destroy_x                                           0x1405A5C90
#define CXWnd__DoAllDrawing_x                                      0x1405A5D90
#define CXWnd__DrawColoredRect_x                                   0x1405A6560
#define CXWnd__DrawTooltip_x                                       0x1405A7BE0
#define CXWnd__DrawTooltipAtPoint_x                                0x1405A7C90
#define CXWnd__GetChildItem_x                                      0x1405A85A0
#define CXWnd__GetChildWndAt_x                                     0x1405A8650
#define CXWnd__GetClientRect_x                                     0x1405A88F0
#define CXWnd__GetClientClipRect_x                                 0x1405A87C0
#define CXWnd__GetRelativeRect_x                                   0x1405AA280
#define CXWnd__GetScreenClipRect_x                                 0x1405AA390
#define CXWnd__GetScreenRect_x                                     0x1405AA510
#define CXWnd__GetTooltipRect_x                                    0x1405AA690
#define CXWnd__IsActive_x                                          0x1405AAC50
#define CXWnd__IsDescendantOf_x                                    0x1405AAC80
#define CXWnd__IsReallyVisible_x                                   0x1405AACE0
#define CXWnd__IsType_x                                            0x1405AAD30
#define CXWnd__Minimize_x                                          0x1405AAE30
#define CXWnd__ProcessTransition_x                                 0x1405ABD20
#define CXWnd__Resize_x                                            0x1405ABE40
#define CXWnd__Right_x                                             0x1405ABEE0
#define CXWnd__SetFocus_x                                          0x1405AC2B0
#define CXWnd__SetFont_x                                           0x1405AC300
#define CXWnd__SetKeyTooltip_x                                     0x1405AC410
#define CXWnd__SetMouseOver_x                                      0x1405AC540
#define CXWnd__SetParent_x                                         0x1405AC5C0
#define CXWnd__StartFade_x                                         0x1405ACA00
#define CXWnd__vftable_x                                           0x140AC2000
#define CXWnd__CXWnd_x                                             0x1405A43D0
#define CXWnd__dCXWnd_x                                            0x1405A4D20

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405EF0D0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405CCA20
#define CXWndManager__DrawCursor_x                                 0x1405CCD00
#define CXWndManager__DrawWindows_x                                0x1405CCF60
#define CXWndManager__GetKeyboardFlags_x                           0x1405CD5B0
#define CXWndManager__HandleKeyboardMsg_x                          0x1405CD5F0
#define CXWndManager__RemoveWnd_x                                  0x1405D0E00

// CDBStr
#define CDBStr__GetString_x                                        0x14018B6F0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x14067D6E0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D1160
#define CCharacterListWnd__EnterWorld_x                            0x1400D0170
#define CCharacterListWnd__Quit_x                                  0x1400D1140
#define CCharacterListWnd__UpdateList_x                            0x1400D1FC0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x14064B650
#define ItemBase__CreateItemTagString_x                            0x14064C0B0
#define ItemBase__GetImageNum_x                                    0x14064E620
#define ItemBase__GetItemValue_x                                   0x1406504E0
#define ItemBase__IsEmpty_x                                        0x140652100
#define ItemBase__IsKeyRingItem_x                                  0x140652820
#define ItemBase__ValueSellMerchant_x                              0x140656A30
#define ItemClient__CanDrop_x                                      0x1402B55E0
#define ItemClient__CanGoInBag_x                                   0x1402B5710
#define ItemClient__CreateItemClient_x                             0x1402B5990
#define ItemClient__dItemClient_x                                  0x1402B5450

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401AB0A0
#define EQ_LoadingS__Array_x                                       0x140D2C230

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140662800
#define PcBase__GetCombatAbility_x                                 0x140662EF0
#define PcBase__GetCombatAbilityTimer_x                            0x140662F90
#define PcBase__GetItemContainedRealEstateIds_x                    0x140663730
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x140664270
#define PcClient__AlertInventoryChanged_x                          0x1402D7B10
#define PcClient__GetConLevel_x                                    0x1402D8120  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402DA8A0
#define PcClient__HasLoreItem_x                                    0x1402DB960
#define PcZoneClient__GetItemRecastTimer_x                         0x1402E8A70
#define PcZoneClient__RemoveMyAffect_x                             0x1402EC870

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x14021E9D0  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x14021EB80  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x14021ECE0  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x14021EC20  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x140259820  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140185F00

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140637C50
#define PlayerBase__CanSee1_x                                      0x140637D20
#define PlayerBase__GetVisibilityLineSegment_x                     0x140638200
#define PlayerBase__HasProperty_x                                  0x1406383D0
#define PlayerBase__IsTargetable_x                                 0x140638490
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402FA410
#define PlayerClient__GetPcClient_x                                0x1402FCF40
#define PlayerClient__PlayerClient_x                               0x1402F2770
#define PlayerClient__SetNameSpriteState_x                         0x140300670
#define PlayerClient__SetNameSpriteTint_x                          0x140301630
#define PlayerZoneClient__ChangeHeight_x                           0x140310150
#define PlayerZoneClient__DoAttack_x                               0x140310E60
#define PlayerZoneClient__GetLevel_x                               0x1403145A0
#define PlayerZoneClient__IsValidTeleport_x                        0x14025C5A0
#define PlayerZoneClient__LegalPlayerRace_x                        0x140199C10

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x140309650  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x140309700  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x140309800
#define PlayerManagerClient__CreatePlayer_x                        0x140309120
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140637810

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402BAB20
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402BA450
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402BA4C0
#define KeypressHandler__ClearCommandStateArray_x                  0x1402BAAB0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402BAC40
#define KeypressHandler__HandleKeyUp_x                             0x1402BAD60
#define KeypressHandler__SaveKeymapping_x                          0x1402BA940  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x14067B200  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x140674FD0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402E1820  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402E6BA0
#define PcZoneClient__GetPcSkillLimit_x                            0x1402E9200
#define PcZoneClient__RemovePetEffect_x                            0x1402ECB50
#define PcZoneClient__HasAlternateAbility_x                        0x1402E9DF0
#define PcZoneClient__CanEquipItem_x                               0x1402E4EA0
#define PcZoneClient__GetItemByID_x                                0x1402E7AD0
#define PcZoneClient__RemoveBuffEffect_x                           0x1402EC6F0
#define PcZoneClient__BandolierSwap_x                              0x1402E3EF0

// Doors
#define EQSwitch__UseSwitch_x                                      0x1402610D0

// IconCache
#define IconCache__GetIcon_x                                       0x1403C68D0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403BAF30
#define CContainerMgr__CloseContainer_x                            0x1403BA870
#define CContainerMgr__OpenExperimentContainer_x                   0x1403BB2B0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404B2820

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402ACFF0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140442B30
#define CLootWnd__RequestLootSlot_x                                0x140443B60

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401DA6F0
#define EQ_Spell__SpellAffects_x                                   0x1401DB9C0
#define EQ_Spell__SpellAffectBase_x                                0x1401DB920
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400DA180
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400DA130
#define EQ_Spell__IsSPAStacking_x                                  0x1401DB5F0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401DB1A0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401DAA70

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C2220

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x14050F9A0
#define CTargetWnd__RefreshTargetBuffs_x                           0x14050F0B0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x14050E8B0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x140517040  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x1401828C0
#define CTaskManager__GetTaskStatus_x                              0x1401829D0
#define CTaskManager__GetElementDescription_x                      0x140182550

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401D8A10
#define EqSoundManager__PlayScriptMp3_x                            0x1401D7850
#define EqSoundManager__SoundAssistPlay_x                          0x140333B50  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140333E90  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405AD7C0
#define CTextureAnimation__SetCurCell_x                            0x1405ADAD0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402AB1F0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x140695DC0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x140695E40
#define CharacterBase__IsExpansionFlag_x                           0x1401FE3B0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140395A10
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140396430
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140397970

// messages
#define msg_spell_worn_off_x                                       0x140215010
#define msg_new_text_x                                             0x1402107D0
#define __msgTokenTextParam_x                                      0x140207EA0
#define msgTokenText_x                                             0x140207DB0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140335780
#define SpellManager__GetSpellByGroupAndRank_x                     0x1403356A0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140646CC0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x14043BF90

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403BFC90
#define CCursorAttachment__IsOkToActivate_x                        0x1403C2F40
#define CCursorAttachment__RemoveAttachment_x                      0x1403C31F0
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405E6A90
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405E6C80
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405E6C90

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x14014EFB0
#define CFindItemWnd__Update_x                                     0x14014F950
#define CFindItemWnd__PickupSelectedItem_x                         0x140149400

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x1401591A0
#define LootFiltersManager__GetItemFilterData_x                    0x140159CC0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14015A560
#define LootFiltersManager__SetItemLootFilter_x                    0x14015A810

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x1404951C0

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x14032E0D0
#define CResolutionHandler__UpdateResolution_x                     0x140592D70

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403B7240

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x14069A230  // Rename..?
#define CDistillerInfo__Instance_x                                 0x14069A120  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403DDB30
#define CGroupWnd__UpdateDisplay_x                                 0x1403DD710

// ItemBase
#define ItemBase__IsLore_x                                         0x140652950
#define ItemBase__IsLoreEquipped_x                                 0x1406529E0

#define MultipleItemMoveManager__ProcessMove_x                     0x1402CD9C0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140259980
#define EQPlacedItemManager__GetItemByGuid_x                       0x140259910
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140259950

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1403284F0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140126B90
#define FactionManagerClient__HandleFactionMessage_x               0x140126F70
#define FactionManagerClient__GetFactionStanding_x                 0x140126360
#define FactionManagerClient__GetMaxFaction_x                      0x140126360
#define FactionManagerClient__GetMinFaction_x                      0x140126210

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AF2F0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140132370

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401B3C00
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401B2DC0
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401B3A20  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401B39A0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x14033AA30

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1403284F0

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x14021ED70

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405A35A0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140086E10

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14034C310

// AchievementManager
#define AchievementManager__Instance_x                             0x14008EFD0

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x14067E260
#define FreeToPlayClient__RestrictionInfo_x                        0x140AD68E0

// UdpConnection
#define UdpConnection__GetStats_x                                  0x140545A50

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x140830F90
#define CGFScreenWnd__CGFScreenWnd_x                               0x1400714F0
#define CGFScreenWnd__CGFScreenWnd1_x                              0x140071680
#define CGFScreenWnd__dCGFScreenWnd_x                              0x140071830

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
