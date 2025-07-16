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

#define __ClientDate                                               20250710u
#define __ExpectedVersionDate                                     "Jul 10 2025"
#define __ExpectedVersionTime                                     "09:24:00"
#define __ActualVersionDate_x                                      0x14095F0D0
#define __ActualVersionTime_x                                      0x14095F0C0
#define __ActualVersionBuild_x                                     0x1408F4B80

// Memory Protection
#define __MemChecker0_x                                            0x1402BCFB0
#define __MemChecker1_x                                            0x140583990
#define __MemChecker4_x                                            0x14028A6A0
#define __MemChecker5_x                                            0x140EDDD58
#define __EncryptPad0_x                                            0x140D2FE80

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E68AE0
#define instEQZoneInfo_x                                           0x140E68CD4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x14021EC00
#define __gfMaxZoomCameraDistance_x                                0x1408F5DF8
#define __gfMaxCameraDistance_x                                    0x140A9ECD4
#define __CurrentSocial_x                                          0x140BEB950 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D27720
#define g_eqCommandStates_x                                        0x140D28790
#define __CommandList_x                                            0x140D289C0
#define __ScreenMode_x                                             0x140DB0064
#define __gWorld_x                                                 0x140E60F70
#define __gpbCommandEvent_x                                        0x140E614CC
#define __ServerHost_x                                             0x140E616B8
#define __Guilds_x                                                 0x140E676A0
#define __MemCheckBitmask_x                                        0x140E6901F
#define __MemCheckActive_x                                         0x140E6A725
#define __MouseEventTime_x                                         0x140EDE090
#define DI8__MouseState_x                                          0x140EE22C8
#define __heqmain_x                                                0x140EE4768
#define DI8__Mouse_x                                               0x140EE2218
#define __HWnd_x                                                   0x140EE22A0
#define __Mouse_x                                                  0x140EE21D4
#define DI8__Keyboard_x                                            0x140EE21F0
#define __LoginName_x                                              0x140EE4E4C
#define __CurrentMapLabel_x                                        0x140EF88D0
#define __LabelCache_x                                             0x140EF94A0
#define __ChatFilterDefs_x                                         0x140A37CC0
#define Teleport_Table_Size_x                                      0x140E61554
#define Teleport_Table_x                                           0x140E619F0

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E63A30
#define pinstActiveBanker_x                                        0x140E61418
#define pinstActiveCorpse_x                                        0x140E61408
#define pinstActiveGMaster_x                                       0x140E61410
#define pinstActiveMerchant_x                                      0x140E61400
#define pinstAltAdvManager_x                                       0x140DB1240
#define pinstCEverQuest_x                                          0x140EE2210
#define pinstCamActor_x                                            0x140DB0050
#define pinstCDBStr_x                                              0x140DAFFF0
#define pinstCDisplay_x                                            0x140E619E8
#define pinstControlledPlayer_x                                    0x140E614A8
#define pinstCResolutionHandler_x                                  0x140F09CD8
#define pinstCSidlManager_x                                        0x140F0AA40
#define pinstCXWndManager_x                                        0x140F0AA38
#define instDynamicZone_x                                          0x140E67560 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E675AE
#define instExpeditionName_x                                       0x140E675EE
#define pinstDZMember_x                                            0x140E67678
#define pinstDZTimerInfo_x                                         0x140E67680
#define pinstEqLogin_x                                             0x140EE4790
#define instTribute_x                                              0x140D22D60
#define pinstDeviceInputProxy_x                                    0x140E68B3C
#define pinstEQSoundManager_x                                      0x140DB15C0
#define pinstEQSpellStrings_x                                      0x140D94B80
#define pinstSGraphicsEngine_x                                     0x140F09A58
#define pinstLocalPC_x                                             0x140E63A10
#define pinstLocalPlayer_x                                         0x140E613F8
#define pinstCMercenaryClientManager_x                             0x140EDF988
#define pinstModelPlayer_x                                         0x140E61428
#define pinstRenderInterface_x                                     0x140F09A70
#define pinstSkillMgr_x                                            0x140EE1618
#define pinstSpawnManager_x                                        0x140EDFD40
#define pinstSpellManager_x                                        0x140EE1680
#define pinstStringTable_x                                         0x140E63A18
#define pinstSwitchManager_x                                       0x140E60EF0
#define pinstTarget_x                                              0x140E614A0
#define pinstTaskMember_x                                          0x140D22D50 // Part of g_taskManager
#define pinstTradeTarget_x                                         0x140E61420
#define instTributeActive_x                                        0x140D22D89
#define pinstViewActor_x                                           0x140DB0048
#define pinstWorldData_x                                           0x140E619D8
#define pinstPlayerPath_x                                          0x140EDFD68
#define pinstTargetIndicator_x                                     0x140EE1730
#define EQObject_Top_x                                             0x140E615A8

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140EF5A30
#define pinstCContainerMgr_x                                       0x140DB0098
#define pinstCContextMenuManager_x                                 0x140F0A720
#define pinstCInvSlotMgr_x                                         0x140DB0040
#define pinstCItemDisplayManager_x                                 0x140EF84A0
#define pinstCPopupWndManager_x                                    0x140EF8D30
#define pinstCSpellDisplayMgr_x                                    0x140EF9380
#define pinstCTaskManager_x                                        0x140BEBC90
#define pinstEQSuiteTextureLoader_x                                0x140D39590
#define pinstItemIconCache_x                                       0x140EF5D90
#define pinstLootFiltersManager_x                                  0x140DAFA38
#define pinstGFViewListener_x                                      0x140F09EF8


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x140248960
#define __CastRay_x                                                0x140240C00
#define __CastRay2_x                                               0x140240900
#define __compress_block_x                                         0x140538F10
#define __ConvertItemTags_x                                        0x140241060
#define __CleanItemTags_x                                          0x14008A2D0
#define __CreateCascadeMenuItems_x                                 0x14018D740
#define __decompress_block_x                                       0x14057F1A0
#define __DoesFileExist_x                                          0x140587840
#define __EQGetTime_x                                              0x140583F40
#define __ExecuteCmd_x                                             0x140216400
#define __FixHeading_x                                             0x14063F670
#define __FlushDxKeyboard_x                                        0x140341B70
#define __get_bearing_x                                            0x14024AB90
#define __get_melee_range_x                                        0x14024AC80
#define __GetAnimationCache_x                                      0x1403C15C0
#define __GetGaugeValueFromEQ_x                                    0x1404F8AD0
#define __GetLabelFromEQ_x                                         0x1404FA0C0
#define __GetXTargetType_x                                         0x140640950   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14063F6F0
#define __HelpPath_x                                               0x140EDDF58   // Why?
#define __NewUIINI_x                                               0x140505B10   // Why?
#define __ProcessDeviceEvents_x                                    0x14028ACB0
#define __ProcessGameEvents_x                                      0x14027F960
#define __ProcessKeyboardEvents_x                                  0x1403432C0
#define __ProcessMouseEvents_x                                     0x140281040
#define __SaveColors_x                                             0x14019D760
#define __STMLToText_x                                             0x14058FA40
#define __WndProc_x                                                0x140340340
#define CMemoryMappedFile__SetFile_x                               0x1407ED660
#define DrawNetStatus_x                                            0x1402CB5A0
#define Util__FastTime_x                                           0x1405800C0
#define __eq_delete_x                                              0x1406B9674
#define __eq_new_x                                                 0x1406B9630
#define __CopyLayout_x                                             0x1402B93C0
#define __ThrottleFrameRate_x                                      0x14026F00A
#define __ThrottleFrameRateEnd_x                                   0x14026F06A

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140353910
#define CAAWnd__Update_x                                           0x140353C10
#define CAAWnd__UpdateSelected_x                                   0x140354C60

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AC840
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A5220
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140841E48
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AD170

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401A88E0
#define AltAdvManager__IsAbilityReady_x                            0x1401A8D70
#define AltAdvManager__GetAAById_x                                 0x1401A81B0
#define AltAdvManager__CanTrainAbility_x                           0x1401A7FA0
#define AltAdvManager__CanSeeAbility_x                             0x1401A7C60

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D3230
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D4090
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D42E0
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400E8B20
#define CharacterZoneClient__CanUseItem_x                          0x1400E90E0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D4CB0
#define CharacterZoneClient__CastSpell_x                           0x1400D4D50
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E4920
#define CharacterZoneClient__Cur_HP_x                              0x1400EA800
#define CharacterZoneClient__Cur_Mana_x                            0x1400EA9C0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D80C0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F1030
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FF8D0  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D9560
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E8420
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F2BE0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F1AC0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D96E0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C9A10
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400CB410
#define CharacterZoneClient__GetHPRegen_x                          0x1400F2200
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400EA470
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F2E70
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D9760
#define CharacterZoneClient__GetManaRegen_x                        0x1400F3BF0
#define CharacterZoneClient__GetModCap_x                           0x1400FB080
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D99F0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D9BC0
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CE5A0
#define CharacterZoneClient__HasSkill_x                            0x1400F6BC0
#define CharacterZoneClient__HitBySpell_x                          0x1400DA650
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DDFC0
#define CharacterZoneClient__MakeMeVisible_x                       0x1400FAB60
#define CharacterZoneClient__Max_Endurance_x                       0x1402E7D90  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400FAEB0
#define CharacterZoneClient__Max_Mana_x                            0x1402E7FB0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400FB310
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E1470
#define CharacterZoneClient__SpellDuration_x                       0x1400E21A0
#define CharacterZoneClient__TotalEffect_x                         0x1400E3500
#define CharacterZoneClient__UseSkill_x                            0x140100850


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140372220

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14037C5A0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140378420
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14037C020

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14037ECF0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140ABC9A0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403A19E0
#define CChatWindowManager__InitContextMenu_x                      0x1403A1B70
#define CChatWindowManager__FreeChatWindow_x                       0x1403A0A50
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403A97B0
#define CChatWindowManager__CreateChatWindow_x                     0x1403A0490

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140108D90

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403AA800
#define CChatWindow__Clear_x                                       0x1403AB7B0
#define CChatWindow__WndNotification_x                             0x1403AC990
#define CChatWindow__AddHistory_x                                  0x1403AB2B0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405C4A80
#define CContextMenu__RemoveMenuItem_x                             0x1405C4E70
#define CContextMenu__RemoveAllMenuItems_x                         0x1405C4E40
#define CContextMenu__CheckMenuItem_x                              0x1405C4CB0
#define CContextMenu__SetMenuItem_x                                0x1405C4E90
#define CContextMenu__AddSeparator_x                               0x1405C4BF0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405B6950
#define CContextMenuManager__RemoveMenu_x                          0x1405B6F20
#define CContextMenuManager__PopupMenu_x                           0x1405B6C60
#define CContextMenuManager__Flush_x                               0x1405B69D0
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403B9180

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x140693720
#define CChatService__GetFriendName_x                              0x140693730

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405A7850
#define CComboWnd__Draw_x                                          0x1405A7950
#define CComboWnd__GetCurChoice_x                                  0x1405A7C20  // unused
#define CComboWnd__GetListRect_x                                   0x1405A7CC0
#define CComboWnd__InsertChoice_x                                  0x1405A8000
#define CComboWnd__SetColors_x                                     0x1405A8390
#define CComboWnd__SetChoice_x                                     0x1405A8350
#define CComboWnd__GetItemCount_x                                  0x1405A7CB0
#define CComboWnd__GetCurChoiceText_x                              0x1405A7C60  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405A7BF0
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405A80C0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403B6EC0
#define CContainerWnd__SetContainer_x                              0x14040E850
#define CContainerWnd__vftable_x                                   0x1409D3540

// CDisplay
#define CDisplay__cameraType_x                                     0x140DB043C
#define CDisplay__ZoneMainUI_x                                     0x1405DEBD0
#define CDisplay__PreZoneMainUI_x                                  0x14019A690
#define CDisplay__CleanGameUI_x                                    0x14018C800
#define CDisplay__GetClickedActor_x                                0x1401909C0
#define CDisplay__GetUserDefinedColor_x                            0x140191630
#define CDisplay__InitCharSelectUI_x                               0x1401918E0
#define CDisplay__ReloadUI_x                                       0x14019C980
#define CDisplay__RestartUI_x                                      0x1401FC130
#define CDisplay__WriteTextHD2_x                                   0x1401A3990
#define CDisplay__TrueDistance_x                                   0x1401A3640
#define CDisplay__SetViewActor_x                                   0x14019FE80
#define CDisplay__GetFloorHeight_x                                 0x140190C20
#define CDisplay__ToggleScreenshotMode_x                           0x1401A3130
#define CDisplay__RealRender_World_x                               0x14019BD60

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405E8E00
#define CEditWnd__DrawCaret_x                                      0x1405DA8F0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405DAD90
#define CEditWnd__GetCaretPt_x                                     0x1405DB010  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405DB050
#define CEditWnd__GetDisplayString_x                               0x1405DB2C0
#define CEditWnd__GetHorzOffset_x                                  0x1405DB4F0
#define CEditWnd__GetLineForPrintableChar_x                        0x1405DB640
#define CEditWnd__GetSelStartPt_x                                  0x1405DB920  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405DB770
#define CEditWnd__PointFromPrintableChar_x                         0x1405DC4D0
#define CEditWnd__ReplaceSelection_x                               0x1405DC880
#define CEditWnd__SelectableCharFromPoint_x                        0x1405DCD20
#define CEditWnd__SetEditable_x                                    0x1405DCFA0
#define CEditWnd__SetWindowText_x                                  0x1405DCFD0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140270120
#define CEverQuest__ClickedPlayer_x                                0x140264510
#define CEverQuest__CreateTargetIndicator_x                        0x140264DD0
#define CEverQuest__DoTellWindow_x                                 0x140108AA0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140109370 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140271B10
#define CEverQuest__dsp_chat_x                                     0x1401084E0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x14029CBC0
#define CEverQuest__Emote_x                                        0x140272500
#define CEverQuest__GetBodyTypeDesc_x                              0x1402732E0
#define CEverQuest__GetClassDesc_x                                 0x140273340
#define CEverQuest__GetClassThreeLetterCode_x                      0x140273710
#define CEverQuest__GetDeityDesc_x                                 0x1402739C0
#define CEverQuest__GetLangDesc_x                                  0x140273DF0
#define CEverQuest__GetRaceDesc_x                                  0x140274190
#define CEverQuest__InterpretCmd_x                                 0x140275B20
#define CEverQuest__LeftClickedOnPlayer_x                          0x14028AD20
#define CEverQuest__LMouseUp_x                                     0x140277590
#define CEverQuest__RightClickedOnPlayer_x                         0x140288510
#define CEverQuest__RMouseUp_x                                     0x140281BD0
#define CEverQuest__SetGameState_x                                 0x14028DC90
#define CEverQuest__UPCNotificationFlush_x                         0x140293600 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x1402771F0
#define CEverQuest__ReportSuccessfulHeal_x                         0x140282FA0
#define CEverQuest__ReportSuccessfulHit_x                          0x140283DC0

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403CC510

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C32E0
#define CGuild__GetGuildName_x                                     0x1400C3320

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403EF8F0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402AED60
#define CHotButton__SetCheck_x                                     0x1402AF030

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140407560
#define CInvSlotMgr__MoveItem_x                                    0x140407740
#define CInvSlotMgr__SelectSlot_x                                  0x140409170

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x140404760
#define CInvSlot__SliderComplete_x                                 0x140405CB0
#define CInvSlot__GetItemBase_x                                    0x1404000F0
#define CInvSlot__UpdateItem_x                                     0x140406160

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x14040A500

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x14042BB60
#define CItemDisplayWnd__UpdateStrings_x                           0x14042E740
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140428330
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140429C90
#define CItemDisplayWnd__RequestConvertItem_x                      0x14042AF70

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404F5550
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404F72E0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140532270

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140424A00

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140153910

// CLabel
#define CLabel__UpdateText_x                                       0x140435B10

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405AB1D0
#define CListWnd__dCListWnd_x                                      0x1405AB620
#define CListWnd__vftable_x                                        0x140ABAAF0
#define CListWnd__AddColumn_x                                      0x1405ABCC0
#define CListWnd__AddColumn1_x                                     0x1405ABD60
#define CListWnd__AddLine_x                                        0x1405ABEC0
#define CListWnd__AddString_x                                      0x1405AC450
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405AC9C0
#define CListWnd__CalculateVSBRange_x                              0x1405ACCA0
#define CListWnd__ClearSel_x                                       0x1405ACE50
#define CListWnd__ClearAllSel_x                                    0x1405ACDF0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405ACEB0
#define CListWnd__Compare_x                                        0x1405AD070
#define CListWnd__Draw_x                                           0x1405AD540
#define CListWnd__DrawColumnSeparators_x                           0x1405AE0F0
#define CListWnd__DrawHeader_x                                     0x1405AE1B0
#define CListWnd__DrawItem_x                                       0x1405AE880
#define CListWnd__DrawLine_x                                       0x1405AF200
#define CListWnd__DrawSeparator_x                                  0x1405AF6C0
#define CListWnd__EnableLine_x                                     0x1405AFAE0
#define CListWnd__EnsureVisible_x                                  0x1405AFB40
#define CListWnd__ExtendSel_x                                      0x1405AFC40
#define CListWnd__GetColumnMinWidth_x                              0x1405AFFD0
#define CListWnd__GetColumnWidth_x                                 0x1405B0050
#define CListWnd__GetCurSel_x                                      0x1405B0150
#define CListWnd__GetItemData_x                                    0x1405B04D0
#define CListWnd__GetItemHeight_x                                  0x1405B0510
#define CListWnd__GetItemRect_x                                    0x1405B0730
#define CListWnd__GetItemText_x                                    0x1405B09D0
#define CListWnd__GetSelList_x                                     0x1405B0C20
#define CListWnd__GetSeparatorRect_x                               0x1405B0E10
#define CListWnd__InsertLine_x                                     0x1405B2270
#define CListWnd__RemoveLine_x                                     0x1405B28E0
#define CListWnd__SetColors_x                                      0x1405B2CA0
#define CListWnd__SetColumnJustification_x                         0x1405B2CC0
#define CListWnd__SetColumnLabel_x                                 0x1405B2D40
#define CListWnd__SetColumnWidth_x                                 0x1405B2EE0
#define CListWnd__SetCurSel_x                                      0x1405B2FB0
#define CListWnd__SetItemColor_x                                   0x1405B3220
#define CListWnd__SetItemData_x                                    0x1405B32C0
#define CListWnd__SetItemText_x                                    0x1405B3500
#define CListWnd__Sort_x                                           0x1405B3910
#define CListWnd__ToggleSel_x                                      0x1405B3A80
#define CListWnd__SetColumnsSizable_x                              0x1405B2F30
#define CListWnd__SetItemWnd_x                                     0x1405B3630
#define CListWnd__GetItemWnd_x                                     0x1405B0BB0
#define CListWnd__SetItemIcon_x                                    0x1405B3300
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405AC790
#define CListWnd__SetVScrollPos_x                                  0x1405B3870

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140448DC0

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A20710
#define MapViewMap__Clear_x                                        0x14044A940
#define MapViewMap__SetZoom_x                                      0x140450FB0
#define MapViewMap__HandleLButtonDown_x                            0x14044DAD0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x1404726E0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140478D40
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x1404794F0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14047CD20
#define CMerchantWnd__SelectBuySellSlot_x                          0x14047C070
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140480FD0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14066E910
#define CPacketScrambler__hton_x                                   0x14066E900

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405D41B0
#define CSidlManagerBase__FindAnimation1_x                         0x1405D40F0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405D47E0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405D4590
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405D34F0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405D3480
#define CSidlManagerBase__CreateXWnd_x                             0x1405D2AC0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404E8430
#define CSidlManager__CreateXWnd_x                                 0x1404E85F0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x140598DC0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x140598ED0
#define CSidlScreenWnd__ConvertToRes_x                             0x1405E3340 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x140599050
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x1405984F0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x1405985C0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1405987D0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x140599740
#define CSidlScreenWnd__EnableIniStorage_x                         0x140599970
#define CSidlScreenWnd__GetChildItem_x                             0x140599B10
#define CSidlScreenWnd__GetSidlPiece_x                             0x140599D60
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405A3E10 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x14059A0D0
#define CSidlScreenWnd__LoadIniInfo_x                              0x14059A440
#define CSidlScreenWnd__LoadIniListWnd_x                           0x14059ACF0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x14059B6F0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F09D98
#define CSidlScreenWnd__StoreIniInfo_x                             0x14059BD70
#define CSidlScreenWnd__StoreIniVis_x                              0x14059C560
#define CSidlScreenWnd__vftable_x                                  0x140AB9D78
#define CSidlScreenWnd__WndNotification_x                          0x14059C5B0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14032AAD0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14032AF70 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14032AEA0
#define CSkillMgr__IsActivatedSkill_x                              0x14032B320
#define CSkillMgr__IsCombatSkill_x                                 0x14032B360
#define CSkillMgr__GetSkillTimerDuration_x                         0x14032B290
#define CSkillMgr__GetSkillLastUsed_x                              0x14032AEF0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405B4400
#define CSliderWnd__SetValue_x                                     0x1405B4C10
#define CSliderWnd__SetNumTicks_x                                  0x1405B4A90

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404EEB50

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405B93A0
#define CStmlWnd__CalculateHSBRange_x                              0x1405A37C0
#define CStmlWnd__CalculateVSBRange_x                              0x1405BA240
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405BAD40
#define CStmlWnd__ForceParseNow_x                                  0x1405BADE0
#define CStmlWnd__GetVisibleText_x                                 0x1405BB4B0
#define CStmlWnd__MakeStmlColorTag_x                               0x1405BD210
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405BD250
#define CStmlWnd__SetSTMLText_x                                    0x1405C4220
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405C43D0
#define CStmlWnd__UpdateHistoryString_x                            0x1405C4760

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405B4FE0
#define CTabWnd__DrawCurrentPage_x                                 0x1405B5080
#define CTabWnd__DrawTab_x                                         0x1405B5450
#define CTabWnd__GetTabRect_x                                      0x1405B5AC0
#define CTabWnd__InsertPage_x                                      0x1405B5D90
#define CTabWnd__RemovePage_x                                      0x1405B6020
#define CTabWnd__SetPage_x                                         0x1405B6180
#define CTabWnd__UpdatePage_x                                      0x1405B6480

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405DD430
#define CPageWnd__SetTabText_x                                     0x1405DD4A0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BC900  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BCD10


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405CBBC0
#define CTextureFont__DrawWrappedText1_x                           0x1405CBAD0
#define CTextureFont__DrawWrappedText2_x                           0x1405CBCF0
#define CTextureFont__GetTextExtent_x                              0x1405CC0A0
#define CTextureFont__GetHeight_x                                  0x1405CC060

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405E1AA0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405980D0

// CXStr
#define CXStr__gFreeLists_x                                        0x140D38F00
#define CXStr__gCXStrAccess_x                                      0x140F098F8

// CXWnd
#define CXWnd__BringToTop_x                                        0x14059EE40
#define CXWnd__ClrFocus_x                                          0x14059F130
#define CXWnd__Destroy_x                                           0x14059F2B0
#define CXWnd__DoAllDrawing_x                                      0x14059F3C0
#define CXWnd__DrawColoredRect_x                                   0x14059FB90
#define CXWnd__DrawTooltip_x                                       0x1405A1210
#define CXWnd__DrawTooltipAtPoint_x                                0x1405A12C0
#define CXWnd__GetChildItem_x                                      0x1405A1BC0
#define CXWnd__GetChildWndAt_x                                     0x1405A1C80
#define CXWnd__GetClientRect_x                                     0x1405A1F40
#define CXWnd__GetClientClipRect_x                                 0x1405A1DF0
#define CXWnd__GetRelativeRect_x                                   0x1405A3900
#define CXWnd__GetScreenClipRect_x                                 0x1405A3A10
#define CXWnd__GetScreenRect_x                                     0x1405A3B90
#define CXWnd__GetTooltipRect_x                                    0x1405A3D10
#define CXWnd__IsActive_x                                          0x1405A42D0
#define CXWnd__IsDescendantOf_x                                    0x1405A42F0
#define CXWnd__IsReallyVisible_x                                   0x1405A4360
#define CXWnd__IsType_x                                            0x1405A43A0
#define CXWnd__Minimize_x                                          0x1405A44A0
#define CXWnd__ProcessTransition_x                                 0x1405A5380
#define CXWnd__Resize_x                                            0x1405A5480
#define CXWnd__Right_x                                             0x1405A5520
#define CXWnd__SetFocus_x                                          0x1405A58D0
#define CXWnd__SetFont_x                                           0x1405A5920
#define CXWnd__SetKeyTooltip_x                                     0x1405A5A30
#define CXWnd__SetMouseOver_x                                      0x1405A5B70
#define CXWnd__SetParent_x                                         0x1405A5BF0
#define CXWnd__StartFade_x                                         0x1405A6030
#define CXWnd__vftable_x                                           0x140ABA350
#define CXWnd__CXWnd_x                                             0x14059D9D0
#define CXWnd__dCXWnd_x                                            0x14059E330

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405E8580

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405C6030
#define CXWndManager__DrawCursor_x                                 0x1405C6310
#define CXWndManager__DrawWindows_x                                0x1405C6570
#define CXWndManager__GetKeyboardFlags_x                           0x1405C6C40
#define CXWndManager__HandleKeyboardMsg_x                          0x1405C6C80
#define CXWndManager__RemoveWnd_x                                  0x1405CA290

// CDBStr
#define CDBStr__GetString_x                                        0x14018A9C0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x140678760

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D0D30
#define CCharacterListWnd__EnterWorld_x                            0x1400CFD40
#define CCharacterListWnd__Quit_x                                  0x1400D0D10
#define CCharacterListWnd__UpdateList_x                            0x1400D1B90

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x1406459C0
#define ItemBase__CreateItemTagString_x                            0x140646430
#define ItemBase__GetImageNum_x                                    0x1406489A0
#define ItemBase__GetItemValue_x                                   0x14064A830
#define ItemBase__IsEmpty_x                                        0x14064C3B0
#define ItemBase__IsKeyRingItem_x                                  0x14064CAC0
#define ItemBase__ValueSellMerchant_x                              0x140650C70
#define ItemClient__CanDrop_x                                      0x1402B1650
#define ItemClient__CanGoInBag_x                                   0x1402B1780
#define ItemClient__CreateItemClient_x                             0x1402B1A00
#define ItemClient__dItemClient_x                                  0x1402B14C0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401AA290
#define EQ_LoadingS__Array_x                                       0x140D25230

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14065D600
#define PcBase__GetCombatAbility_x                                 0x14065DCF0
#define PcBase__GetCombatAbilityTimer_x                            0x14065DD90
#define PcBase__GetItemContainedRealEstateIds_x                    0x14065E530
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14065F070
#define PcClient__AlertInventoryChanged_x                          0x1402D3B80
#define PcClient__GetConLevel_x                                    0x1402D41A0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402D6920
#define PcClient__HasLoreItem_x                                    0x1402D79B0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402E5180
#define PcZoneClient__RemoveMyAffect_x                             0x1402E8ED0

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x14021AB40  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x14021ACF0  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x14021AE50  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x14021AD90  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x140255A50  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x1401851E0

// PlayerClient
#define PlayerBase__CanSee_x                                       0x1406314B0
#define PlayerBase__CanSee1_x                                      0x140631580
#define PlayerBase__GetVisibilityLineSegment_x                     0x140631A60
#define PlayerBase__HasProperty_x                                  0x140631C30
#define PlayerBase__IsTargetable_x                                 0x140631CF0
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402F6C60
#define PlayerClient__GetPcClient_x                                0x1402F9790
#define PlayerClient__PlayerClient_x                               0x1402EEFC0
#define PlayerClient__SetNameSpriteState_x                         0x1402FCEC0
#define PlayerClient__SetNameSpriteTint_x                          0x1402FDE80
#define PlayerZoneClient__ChangeHeight_x                           0x14030C9B0
#define PlayerZoneClient__DoAttack_x                               0x14030D6C0
#define PlayerZoneClient__GetLevel_x                               0x140310E00
#define PlayerZoneClient__IsValidTeleport_x                        0x1402587E0
#define PlayerZoneClient__LegalPlayerRace_x                        0x140198F10

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x140305EB0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x140305F60  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x140306060
#define PlayerManagerClient__CreatePlayer_x                        0x140305980
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140631070

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402B68C0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402B64C0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402B6530
#define KeypressHandler__ClearCommandStateArray_x                  0x1402B6850  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402B69E0
#define KeypressHandler__HandleKeyUp_x                             0x1402B6B00
#define KeypressHandler__SaveKeymapping_x                          0x1402B6760  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140676280  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x140670050

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402DDF60  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402E32B0
#define PcZoneClient__GetPcSkillLimit_x                            0x1402E5910
#define PcZoneClient__RemovePetEffect_x                            0x1402E91B0
#define PcZoneClient__HasAlternateAbility_x                        0x1402E6500
#define PcZoneClient__CanEquipItem_x                               0x1402E15C0
#define PcZoneClient__GetItemByID_x                                0x1402E41E0
#define PcZoneClient__RemoveBuffEffect_x                           0x1402E8D50
#define PcZoneClient__BandolierSwap_x                              0x1402E0620

// Doors
#define EQSwitch__UseSwitch_x                                      0x14025D310

// IconCache
#define IconCache__GetIcon_x                                       0x1403C15F0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403B5C70
#define CContainerMgr__CloseContainer_x                            0x1403B55B0
#define CContainerMgr__OpenExperimentContainer_x                   0x1403B5FF0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404AC5E0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402A9080

// CLootWnd
#define CLootWnd__LootAll_x                                        0x14043CDF0
#define CLootWnd__RequestLootSlot_x                                0x14043DE20

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401D9800
#define EQ_Spell__SpellAffects_x                                   0x1401DAAE0
#define EQ_Spell__SpellAffectBase_x                                0x1401DAA40
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D9D50
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D9D00
#define EQ_Spell__IsSPAStacking_x                                  0x1401DA710
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401DA2C0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401D9B90

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C1E20

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x140509320
#define CTargetWnd__RefreshTargetBuffs_x                           0x140508A30
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x140508230

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1405109B0  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140181B80
#define CTaskManager__GetTaskStatus_x                              0x140181C90
#define CTaskManager__GetElementDescription_x                      0x140181810

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401D7B20
#define EqSoundManager__PlayScriptMp3_x                            0x1401D6960
#define EqSoundManager__SoundAssistPlay_x                          0x140330110  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140330450  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405A6DE0
#define CTextureAnimation__SetCurCell_x                            0x1405A70F0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402A7280

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x140690DF0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x140690E70
#define CharacterBase__IsExpansionFlag_x                           0x1401FB970

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140392630
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140393030
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x1403945B0

// messages
#define msg_spell_worn_off_x                                       0x140211360
#define msg_new_text_x                                             0x14020CB10
#define __msgTokenTextParam_x                                      0x140204200
#define msgTokenText_x                                             0x140204110

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140331D40
#define SpellManager__GetSpellByGroupAndRank_x                     0x140331C60

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140640D30

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140436260

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403BA9B0
#define CCursorAttachment__IsOkToActivate_x                        0x1403BDC60
#define CCursorAttachment__RemoveAttachment_x                      0x1403BDF10
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405DFF40
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405E0130
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405E0140

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x14014EAC0
#define CFindItemWnd__Update_x                                     0x14014F460
#define CFindItemWnd__PickupSelectedItem_x                         0x140148F00

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x140158570
#define LootFiltersManager__GetItemFilterData_x                    0x140159090
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140159930
#define LootFiltersManager__SetItemLootFilter_x                    0x140159BE0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14048F090

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x14032A690
#define CResolutionHandler__UpdateResolution_x                     0x14058C550

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403B1F60

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406951F0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406950E0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403D8820
#define CGroupWnd__UpdateDisplay_x                                 0x1403D8400

// ItemBase
#define ItemBase__IsLore_x                                         0x14064CBF0
#define ItemBase__IsLoreEquipped_x                                 0x14064CC80

#define MultipleItemMoveManager__ProcessMove_x                     0x1402C9700

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140255BB0
#define EQPlacedItemManager__GetItemByGuid_x                       0x140255B40
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140255B80

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140324AE0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140126720
#define FactionManagerClient__HandleFactionMessage_x               0x140126AD0
#define FactionManagerClient__GetFactionStanding_x                 0x140125EF0
#define FactionManagerClient__GetMaxFaction_x                      0x140125EF0
#define FactionManagerClient__GetMinFaction_x                      0x140125DA0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AEE50

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140131ED0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401B2C30
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401B1FB0
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401B2A50  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401B29D0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x140337040

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140324AE0

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x14021AEE0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x14059CBA0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140086990

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140348C00

// AchievementManager
#define AchievementManager__Instance_x                             0x14008EB50

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x1406792E0
#define FreeToPlayClient__RestrictionInfo_x                        0x140ACEBB0

// UdpConnection
#define UdpConnection__GetStats_x                                  0x14053F330

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x140829610
#define CGFScreenWnd__CGFScreenWnd_x                               0x140071300
#define CGFScreenWnd__CGFScreenWnd1_x                              0x140071490
#define CGFScreenWnd__dCGFScreenWnd_x                              0x140071640

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
