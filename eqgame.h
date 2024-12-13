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

#define __ClientDate                                               20241205u
#define __ExpectedVersionDate                                     "Dec  5 2024"
#define __ExpectedVersionTime                                     "11:03:55"
#define __ActualVersionDate_x                                      0x14094B010
#define __ActualVersionTime_x                                      0x14094B000
#define __ActualVersionBuild_x                                     0x1408E1760

// Memory Protection
#define __MemChecker0_x                                            0x1402B1C60
#define __MemChecker1_x                                            0x140571290
#define __MemChecker4_x                                            0x140280740
#define __EncryptPad0_x                                            0x140D17E50

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E50AC0
#define instEQZoneInfo_x                                           0x140E50CB4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x140217480
#define __gfMaxZoomCameraDistance_x                                0x1408E29D8
#define __gfMaxCameraDistance_x                                    0x140A87808
#define __CurrentSocial_x                                          0x140BD3940 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D0F720
#define g_eqCommandStates_x                                        0x140D10790
#define __CommandList_x                                            0x140D109D0
#define __ScreenMode_x                                             0x140D9836C
#define __gWorld_x                                                 0x140E4B3F8
#define __gpbCommandEvent_x                                        0x140E4B404
#define __ServerHost_x                                             0x140E4B5E8
#define __Guilds_x                                                 0x140E4F670
#define __MemCheckBitmask_x                                        0x140E50FFB
#define __MemCheckActive_x                                         0x140E526ED
#define __MouseEventTime_x                                         0x140EC6038
#define DI8__MouseState_x                                          0x140ECA268
#define __heqmain_x                                                0x140ECC708
#define DI8__Mouse_x                                               0x140ECA1B8
#define __HWnd_x                                                   0x140ECA240
#define __Mouse_x                                                  0x140ECA174
#define DI8__Keyboard_x                                            0x140ECA190
#define __LoginName_x                                              0x140ECCDEC
#define __CurrentMapLabel_x                                        0x140EE0680
#define __LabelCache_x                                             0x140EE1250
#define __ChatFilterDefs_x                                         0x140A228F0
#define Teleport_Table_Size_x                                      0x140E4B490
#define Teleport_Table_x                                           0x140E48F50

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E4BA00
#define pinstActiveBanker_x                                        0x140E4B920
#define pinstActiveCorpse_x                                        0x140E4B910
#define pinstActiveGMaster_x                                       0x140E4B918
#define pinstActiveMerchant_x                                      0x140E4B908
#define pinstAltAdvManager_x                                       0x140D99218
#define pinstCEverQuest_x                                          0x140ECA1B0
#define pinstCamActor_x                                            0x140D98358
#define pinstCDBStr_x                                              0x140D97FD0
#define pinstCDisplay_x                                            0x140E4B9F8
#define pinstControlledPlayer_x                                    0x140E4B9B0
#define pinstCResolutionHandler_x                                  0x1415519F8
#define pinstCSidlManager_x                                        0x140EF2550
#define pinstCXWndManager_x                                        0x140EF2548
#define instDynamicZone_x                                          0x140E4F530 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E4F57E
#define instExpeditionName_x                                       0x140E4F5BE
#define pinstDZMember_x                                            0x140E4F648
#define pinstDZTimerInfo_x                                         0x140E4F650
#define pinstEqLogin_x                                             0x140ECC730
#define instTribute_x                                              0x140D0AD50
#define pinstDeviceInputProxy_x                                    0x140E50B1C
#define pinstEQSoundManager_x                                      0x140D99598
#define pinstEQSpellStrings_x                                      0x140D7CBA0
#define pinstSGraphicsEngine_x                                     0x141551778
#define pinstLocalPC_x                                             0x140E4B9E0
#define pinstLocalPlayer_x                                         0x140E4B900
#define pinstCMercenaryClientManager_x                             0x140EC7918
#define pinstModelPlayer_x                                         0x140E4B930
#define pinstRenderInterface_x                                     0x141551790
#define pinstSkillMgr_x                                            0x140EC95B8
#define pinstSpawnManager_x                                        0x140EC7CE0
#define pinstSpellManager_x                                        0x140EC9620
#define pinstStringTable_x                                         0x140E48F40
#define pinstSwitchManager_x                                       0x140E48EC0
#define pinstTarget_x                                              0x140E4B9A8
#define pinstTaskMember_x                                          0x140D0AD40 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140E4B9B8
#define pinstTradeTarget_x                                         0x140E4B928
#define instTributeActive_x                                        0x140D0AD79
#define pinstViewActor_x                                           0x140D98350
#define pinstWorldData_x                                           0x140E4B9F0
#define pinstPlayerPath_x                                          0x140EC7D08
#define pinstTargetIndicator_x                                     0x140EC96D0
#define EQObject_Top_x                                             0x140E4B9D0

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140EDD7D8
#define pinstCContainerMgr_x                                       0x140D98028
#define pinstCContextMenuManager_x                                 0x140EF2230
#define pinstCInvSlotMgr_x                                         0x140D98020
#define pinstCItemDisplayManager_x                                 0x140EE0250
#define pinstCPopupWndManager_x                                    0x140EE0AE0
#define pinstCSpellDisplayMgr_x                                    0x140EE1130
#define pinstCTaskManager_x                                        0x140BD3C80
#define pinstEQSuiteTextureLoader_x                                0x140D21560
#define pinstItemIconCache_x                                       0x140EDDB38
#define pinstLootFiltersManager_x                                  0x140D97A18
#define pinstGFViewListener_x                                      0x140EF1A08


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x1402404E0
#define __CastRay_x                                                0x140238920
#define __CastRay2_x                                               0x140238620
#define __compress_block_x                                         0x140526930
#define __ConvertItemTags_x                                        0x140238D80
#define __CleanItemTags_x                                          0x140088BD0
#define __CreateCascadeMenuItems_x                                 0x140187B30
#define __decompress_block_x                                       0x14056CB00
#define __DoesFileExist_x                                          0x140575140
#define __EQGetTime_x                                              0x140571840
#define __ExecuteCmd_x                                             0x14020ED90
#define __FixHeading_x                                             0x14069EC50
#define __FlushDxKeyboard_x                                        0x140333B80
#define __get_bearing_x                                            0x1402426D0
#define __get_melee_range_x                                        0x1402427C0
#define __GetAnimationCache_x                                      0x1403B1020
#define __GetGaugeValueFromEQ_x                                    0x1404E6610
#define __GetLabelFromEQ_x                                         0x1404E7C10
#define __GetXTargetType_x                                         0x14069FF30   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14069ECD0
#define __HelpPath_x                                               0x140EC5F00   // Why?
#define __NewUIINI_x                                               0x1404F36B0   // Why?
#define __ProcessDeviceEvents_x                                    0x140280D50
#define __ProcessGameEvents_x                                      0x140275A70
#define __ProcessKeyboardEvents_x                                  0x1403352D0
#define __ProcessMouseEvents_x                                     0x140277150
#define __SaveColors_x                                             0x140197B50
#define __STMLToText_x                                             0x140579A90
#define __WndProc_x                                                0x140332380
#define CMemoryMappedFile__SetFile_x                               0x1407DACF0
#define DrawNetStatus_x                                            0x1402C0140
#define Util__FastTime_x                                           0x140570DD0
#define __eq_delete_x                                              0x1406A6D84
#define __eq_new_x                                                 0x1406A6D40
#define __CopyLayout_x                                             0x1402AE070
#define __ThrottleFrameRate_x                                      0x140265294
#define __ThrottleFrameRateEnd_x                                   0x1402652F4

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x1403449D0
#define CAAWnd__Update_x                                           0x140344CD0
#define CAAWnd__UpdateSelected_x                                   0x140345D20

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AAFA0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A38A0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x14082FBB8
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AB8D0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401A2C80
#define AltAdvManager__IsAbilityReady_x                            0x1401A2F00
#define AltAdvManager__GetAAById_x                                 0x1401A2550
#define AltAdvManager__CanTrainAbility_x                           0x1401A2360
#define AltAdvManager__CanSeeAbility_x                             0x1401A2020

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D1930
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D2770
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D29C0
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400E6860
#define CharacterZoneClient__CanUseItem_x                          0x1400E6C90
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D3390
#define CharacterZoneClient__CastSpell_x                           0x1400D3430
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E27C0
#define CharacterZoneClient__Cur_HP_x                              0x1400E8360
#define CharacterZoneClient__Cur_Mana_x                            0x1400E8520
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D61C0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400EE9E0
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FD410  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D7670
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E6160
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F05A0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400EF470
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D7840
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C7D40
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C9710
#define CharacterZoneClient__GetHPRegen_x                          0x1400EFBB0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E7FD0
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F0830
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D78C0
#define CharacterZoneClient__GetManaRegen_x                        0x1400F1610
#define CharacterZoneClient__GetModCap_x                           0x1400F8BD0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D7B50
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D7D60
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CC880
#define CharacterZoneClient__HasSkill_x                            0x1400F4600
#define CharacterZoneClient__HitBySpell_x                          0x1400D8810
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DBFB0
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F86B0
#define CharacterZoneClient__Max_Endurance_x                       0x1402DC850  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F8A00
#define CharacterZoneClient__Max_Mana_x                            0x1402DCA70  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F8E60
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DF350
#define CharacterZoneClient__SpellDuration_x                       0x1400E0050
#define CharacterZoneClient__TotalEffect_x                         0x1400E13A0
#define CharacterZoneClient__UseSkill_x                            0x1400FE380


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140362EF0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14036D220

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x1403690C0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14036CCA0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14036F8F0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AA6590

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140392840
#define CChatWindowManager__InitContextMenu_x                      0x1403929D0
#define CChatWindowManager__FreeChatWindow_x                       0x1403918C0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x14039A5B0
#define CChatWindowManager__CreateChatWindow_x                     0x140391200

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140106850

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x14039B600
#define CChatWindow__Clear_x                                       0x14039C5C0
#define CChatWindow__WndNotification_x                             0x14039D7B0
#define CChatWindow__AddHistory_x                                  0x14039C0C0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405AEC30
#define CContextMenu__RemoveMenuItem_x                             0x1405AF020
#define CContextMenu__RemoveAllMenuItems_x                         0x1405AEFF0
#define CContextMenu__CheckMenuItem_x                              0x1405AEE60
#define CContextMenu__SetMenuItem_x                                0x1405AF040
#define CContextMenu__AddSeparator_x                               0x1405AEDA0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405A0AF0
#define CContextMenuManager__RemoveMenu_x                          0x1405A10D0
#define CContextMenuManager__PopupMenu_x                           0x1405A0E10
#define CContextMenuManager__Flush_x                               0x1405A0B70
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403A8F40

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1406688D0
#define CChatService__GetFriendName_x                              0x1406688E0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405919D0
#define CComboWnd__Draw_x                                          0x140591AD0
#define CComboWnd__GetCurChoice_x                                  0x140591DB0  // unused
#define CComboWnd__GetListRect_x                                   0x140591E50
#define CComboWnd__InsertChoice_x                                  0x140592190
#define CComboWnd__SetColors_x                                     0x140592520
#define CComboWnd__SetChoice_x                                     0x1405924E0
#define CComboWnd__GetItemCount_x                                  0x140591E40
#define CComboWnd__GetCurChoiceText_x                              0x140591DF0  // unused
#define CComboWnd__GetChoiceText_x                                 0x140591D80
#define CComboWnd__InsertChoiceAtIndex_x                           0x140592250

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403A6CC0
#define CContainerWnd__SetContainer_x                              0x1403FD350
#define CContainerWnd__vftable_x                                   0x1409BEA48

// CDisplay
#define CDisplay__cameraType_x                                     0x140D9811C
#define CDisplay__ZoneMainUI_x                                     0x1405C8E30
#define CDisplay__PreZoneMainUI_x                                  0x140194A80
#define CDisplay__CleanGameUI_x                                    0x140186BF0
#define CDisplay__GetClickedActor_x                                0x14018ADB0
#define CDisplay__GetUserDefinedColor_x                            0x14018BA20
#define CDisplay__InitCharSelectUI_x                               0x14018BCD0
#define CDisplay__ReloadUI_x                                       0x140196D70
#define CDisplay__RestartUI_x                                      0x1401F5330
#define CDisplay__WriteTextHD2_x                                   0x14019DD80
#define CDisplay__TrueDistance_x                                   0x14019DA30
#define CDisplay__SetViewActor_x                                   0x14019A270
#define CDisplay__GetFloorHeight_x                                 0x14018B010
#define CDisplay__ToggleScreenshotMode_x                           0x14019D520
#define CDisplay__RealRender_World_x                               0x140196150

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405D3060
#define CEditWnd__DrawCaret_x                                      0x1405C4B30  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405C4FF0
#define CEditWnd__GetCaretPt_x                                     0x1405C5270  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405C52B0
#define CEditWnd__GetDisplayString_x                               0x1405C5520
#define CEditWnd__GetHorzOffset_x                                  0x1405C5760
#define CEditWnd__GetLineForPrintableChar_x                        0x1405C58B0
#define CEditWnd__GetSelStartPt_x                                  0x1405C5B90  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405C59E0
#define CEditWnd__PointFromPrintableChar_x                         0x1405C6740
#define CEditWnd__ReplaceSelection_x                               0x1405C6AF0
#define CEditWnd__SelectableCharFromPoint_x                        0x1405C6F90
#define CEditWnd__SetEditable_x                                    0x1405C7220
#define CEditWnd__SetWindowText_x                                  0x1405C7250

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x1402663A0
#define CEverQuest__ClickedPlayer_x                                0x14025BE70
#define CEverQuest__CreateTargetIndicator_x                        0x14025C730
#define CEverQuest__DoTellWindow_x                                 0x140106560 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140106E20 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140267D60
#define CEverQuest__dsp_chat_x                                     0x140105F90 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x140292160
#define CEverQuest__Emote_x                                        0x140268740
#define CEverQuest__GetBodyTypeDesc_x                              0x1402694F0
#define CEverQuest__GetClassDesc_x                                 0x140269550
#define CEverQuest__GetClassThreeLetterCode_x                      0x140269920
#define CEverQuest__GetDeityDesc_x                                 0x140269BD0
#define CEverQuest__GetLangDesc_x                                  0x14026A000
#define CEverQuest__GetRaceDesc_x                                  0x14026A3A0
#define CEverQuest__InterpretCmd_x                                 0x14026BCE0
#define CEverQuest__LeftClickedOnPlayer_x                          0x140280DC0
#define CEverQuest__LMouseUp_x                                     0x14026D700
#define CEverQuest__RightClickedOnPlayer_x                         0x14027E5E0
#define CEverQuest__RMouseUp_x                                     0x140277CE0
#define CEverQuest__SetGameState_x                                 0x140283300
#define CEverQuest__UPCNotificationFlush_x                         0x140288C30 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14026D370
#define CEverQuest__ReportSuccessfulHeal_x                         0x140279090
#define CEverQuest__ReportSuccessfulHit_x                          0x140279EB0

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403BB410

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C18B0
#define CGuild__GetGuildName_x                                     0x1400C18F0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403DE680

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402A3E10
#define CHotButton__SetCheck_x                                     0x1402A40E0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403F6080
#define CInvSlotMgr__MoveItem_x                                    0x1403F6260
#define CInvSlotMgr__SelectSlot_x                                  0x1403F7C80

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403F3280
#define CInvSlot__SliderComplete_x                                 0x1403F47D0
#define CInvSlot__GetItemBase_x                                    0x1403EECB0
#define CInvSlot__UpdateItem_x                                     0x1403F4C80

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403F9010

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x14041A150
#define CItemDisplayWnd__UpdateStrings_x                           0x14041CA70
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140416BF0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x1404183B0
#define CItemDisplayWnd__RequestConvertItem_x                      0x140419560

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404E3150
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404E4E40

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x14051FCA0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140413320

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14014EF20

// CLabel
#define CLabel__UpdateText_x                                       0x140423E30

// CListWnd
#define CListWnd__CListWnd_x                                       0x140595360
#define CListWnd__dCListWnd_x                                      0x1405957B0
#define CListWnd__vftable_x                                        0x140AA46E8
#define CListWnd__AddColumn_x                                      0x140595E50
#define CListWnd__AddColumn1_x                                     0x140595EF0
#define CListWnd__AddLine_x                                        0x140596050
#define CListWnd__AddString_x                                      0x1405965E0
#define CListWnd__CalculateFirstVisibleLine_x                      0x140596B50
#define CListWnd__CalculateVSBRange_x                              0x140596E30
#define CListWnd__ClearSel_x                                       0x140596FE0
#define CListWnd__ClearAllSel_x                                    0x140596F80
#define CListWnd__CloseAndUpdateEditWindow_x                       0x140597040
#define CListWnd__Compare_x                                        0x140597200
#define CListWnd__Draw_x                                           0x1405976D0
#define CListWnd__DrawColumnSeparators_x                           0x140598280
#define CListWnd__DrawHeader_x                                     0x140598340
#define CListWnd__DrawItem_x                                       0x140598A20
#define CListWnd__DrawLine_x                                       0x1405993A0
#define CListWnd__DrawSeparator_x                                  0x140599860
#define CListWnd__EnableLine_x                                     0x140599C80
#define CListWnd__EnsureVisible_x                                  0x140599CE0
#define CListWnd__ExtendSel_x                                      0x140599DE0
#define CListWnd__GetColumnMinWidth_x                              0x14059A170
#define CListWnd__GetColumnWidth_x                                 0x14059A1F0
#define CListWnd__GetCurSel_x                                      0x14059A2F0
#define CListWnd__GetItemData_x                                    0x14059A670
#define CListWnd__GetItemHeight_x                                  0x14059A6B0
#define CListWnd__GetItemRect_x                                    0x14059A8D0
#define CListWnd__GetItemText_x                                    0x14059AB70
#define CListWnd__GetSelList_x                                     0x14059ADC0
#define CListWnd__GetSeparatorRect_x                               0x14059AFB0
#define CListWnd__InsertLine_x                                     0x14059C420
#define CListWnd__RemoveLine_x                                     0x14059CA90
#define CListWnd__SetColors_x                                      0x14059CE50
#define CListWnd__SetColumnJustification_x                         0x14059CE70
#define CListWnd__SetColumnLabel_x                                 0x14059CEF0
#define CListWnd__SetColumnWidth_x                                 0x14059D090
#define CListWnd__SetCurSel_x                                      0x14059D160
#define CListWnd__SetItemColor_x                                   0x14059D3D0
#define CListWnd__SetItemData_x                                    0x14059D470
#define CListWnd__SetItemText_x                                    0x14059D6B0
#define CListWnd__Sort_x                                           0x14059DAC0
#define CListWnd__ToggleSel_x                                      0x14059DC30
#define CListWnd__SetColumnsSizable_x                              0x14059D0E0
#define CListWnd__SetItemWnd_x                                     0x14059D7E0
#define CListWnd__GetItemWnd_x                                     0x14059AD50
#define CListWnd__SetItemIcon_x                                    0x14059D4B0
#define CListWnd__CalculateCustomWindowPositions_x                 0x140596920
#define CListWnd__SetVScrollPos_x                                  0x14059DA20

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140437110

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A0B4F8
#define MapViewMap__Clear_x                                        0x140438C90
#define MapViewMap__SetZoom_x                                      0x14043F2E0
#define MapViewMap__HandleLButtonDown_x                            0x14043BE20

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x1404609A0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140466F20
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x1404676C0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14046AEE0
#define CMerchantWnd__SelectBuySellSlot_x                          0x14046A220
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14046F170

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x140643C20
#define CPacketScrambler__hton_x                                   0x140643C10

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405BE3F0
#define CSidlManagerBase__FindAnimation1_x                         0x1405BE330
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405BEA20
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405BE7D0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405BD730
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405BD6C0
#define CSidlManagerBase__CreateXWnd_x                             0x1405BCD00

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404D6130
#define CSidlManager__CreateXWnd_x                                 0x1404D62F0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x140582E10
#define CSidlScreenWnd__CalculateVSBRange_x                        0x140582F40
#define CSidlScreenWnd__ConvertToRes_x                             0x1405CD5A0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x1405830C0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x140582540
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x140582610
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x140582820
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1405837B0
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405839E0
#define CSidlScreenWnd__GetChildItem_x                             0x140583B80
#define CSidlScreenWnd__GetSidlPiece_x                             0x140583DD0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x14058E000 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x140584140
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405844B0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140584D60
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140585760
#define CSidlScreenWnd__m_layoutCopy_x                             0x140EF18A8
#define CSidlScreenWnd__StoreIniInfo_x                             0x140585DF0
#define CSidlScreenWnd__StoreIniVis_x                              0x1405865E0
#define CSidlScreenWnd__vftable_x                                  0x140AA3958
#define CSidlScreenWnd__WndNotification_x                          0x140586630

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14031D060 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14031D500 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14031D430
#define CSkillMgr__IsActivatedSkill_x                              0x14031D8B0
#define CSkillMgr__IsCombatSkill_x                                 0x14031D8F0
#define CSkillMgr__GetSkillTimerDuration_x                         0x14031D820
#define CSkillMgr__GetSkillLastUsed_x                              0x14031D480

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x14059E5A0
#define CSliderWnd__SetValue_x                                     0x14059EDB0
#define CSliderWnd__SetNumTicks_x                                  0x14059EC30

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404DC7A0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405A3550
#define CStmlWnd__CalculateHSBRange_x                              0x14058D9D0
#define CStmlWnd__CalculateVSBRange_x                              0x1405A4470
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405A4EF0
#define CStmlWnd__ForceParseNow_x                                  0x1405A4F90
#define CStmlWnd__GetVisibleText_x                                 0x1405A5660
#define CStmlWnd__MakeStmlColorTag_x                               0x1405A73C0
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405A7400
#define CStmlWnd__SetSTMLText_x                                    0x1405AE3D0
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405AE580
#define CStmlWnd__UpdateHistoryString_x                            0x1405AE910

// CTabWnd
#define CTabWnd__Draw_x                                            0x14059F180
#define CTabWnd__DrawCurrentPage_x                                 0x14059F220
#define CTabWnd__DrawTab_x                                         0x14059F5F0
#define CTabWnd__GetTabRect_x                                      0x14059FC60
#define CTabWnd__InsertPage_x                                      0x14059FF30
#define CTabWnd__RemovePage_x                                      0x1405A01C0
#define CTabWnd__SetPage_x                                         0x1405A0320
#define CTabWnd__UpdatePage_x                                      0x1405A0620

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405C76B0
#define CPageWnd__SetTabText_x                                     0x1405C7720

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BAFF0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BB400


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405B5DB0
#define CTextureFont__DrawWrappedText1_x                           0x1405B5CC0
#define CTextureFont__DrawWrappedText2_x                           0x1405B5EE0
#define CTextureFont__GetTextExtent_x                              0x1405B6290
#define CTextureFont__GetHeight_x                                  0x1405B6250

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405CBD00

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x140582120

// CXStr
#define CXStr__gFreeLists_x                                        0x140D20ED0
#define CXStr__gCXStrAccess_x                                      0x140EF16A8

// CXWnd
#define CXWnd__BringToTop_x                                        0x140589030
#define CXWnd__ClrFocus_x                                          0x140589320
#define CXWnd__Destroy_x                                           0x1405894A0
#define CXWnd__DoAllDrawing_x                                      0x1405895B0
#define CXWnd__DrawColoredRect_x                                   0x140589D80
#define CXWnd__DrawTooltip_x                                       0x14058B410
#define CXWnd__DrawTooltipAtPoint_x                                0x14058B4C0
#define CXWnd__GetChildItem_x                                      0x14058BDC0
#define CXWnd__GetChildWndAt_x                                     0x14058BE80
#define CXWnd__GetClientRect_x                                     0x14058C140
#define CXWnd__GetClientClipRect_x                                 0x14058BFF0
#define CXWnd__GetRelativeRect_x                                   0x14058DB10
#define CXWnd__GetScreenClipRect_x                                 0x14058DC10
#define CXWnd__GetScreenRect_x                                     0x14058DD90
#define CXWnd__GetTooltipRect_x                                    0x14058DF00
#define CXWnd__IsActive_x                                          0x14058E4C0
#define CXWnd__IsDescendantOf_x                                    0x14058E4F0
#define CXWnd__IsReallyVisible_x                                   0x14058E560
#define CXWnd__IsType_x                                            0x14058E5A0
#define CXWnd__Minimize_x                                          0x14058E6A0
#define CXWnd__ProcessTransition_x                                 0x14058F530
#define CXWnd__Resize_x                                            0x14058F640
#define CXWnd__Right_x                                             0x14058F6E0
#define CXWnd__SetFocus_x                                          0x14058FAA0
#define CXWnd__SetFont_x                                           0x14058FAF0
#define CXWnd__SetKeyTooltip_x                                     0x14058FBF0
#define CXWnd__SetMouseOver_x                                      0x14058FD30
#define CXWnd__SetParent_x                                         0x14058FDB0
#define CXWnd__StartFade_x                                         0x1405901F0
#define CXWnd__vftable_x                                           0x140AA3F48
#define CXWnd__CXWnd_x                                             0x140587BD0
#define CXWnd__dCXWnd_x                                            0x140588520

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405D27E0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405B01F0
#define CXWndManager__DrawCursor_x                                 0x1405B04D0
#define CXWndManager__DrawWindows_x                                0x1405B0730
#define CXWndManager__GetKeyboardFlags_x                           0x1405B0E00
#define CXWndManager__HandleKeyboardMsg_x                          0x1405B0E40
#define CXWndManager__RemoveWnd_x                                  0x1405B4480

// CDBStr
#define CDBStr__GetString_x                                        0x140184DB0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x14064DA40

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CF4B0
#define CCharacterListWnd__EnterWorld_x                            0x1400CE1B0
#define CCharacterListWnd__Quit_x                                  0x1400CF490
#define CCharacterListWnd__UpdateList_x                            0x1400D0320

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x14061B190
#define ItemBase__CreateItemTagString_x                            0x14061BBF0
#define ItemBase__GetImageNum_x                                    0x14061E120
#define ItemBase__GetItemValue_x                                   0x14061FFD0
#define ItemBase__IsEmpty_x                                        0x140621B90
#define ItemBase__IsKeyRingItem_x                                  0x1406222C0
#define ItemBase__ValueSellMerchant_x                              0x1406264E0
#define ItemClient__CanDrop_x                                      0x1402A6300
#define ItemClient__CanGoInBag_x                                   0x1402A6430
#define ItemClient__CreateItemClient_x                             0x1402A66B0
#define ItemClient__dItemClient_x                                  0x1402A6170

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401A4420
#define EQ_LoadingS__Array_x                                       0x140D0D230

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140632DB0
#define PcBase__GetCombatAbility_x                                 0x1406334A0
#define PcBase__GetCombatAbilityTimer_x                            0x140633540
#define PcBase__GetItemContainedRealEstateIds_x                    0x140633CE0
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x140634820
#define PcClient__AlertInventoryChanged_x                          0x1402C8720
#define PcClient__GetConLevel_x                                    0x1402C8D40  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402CB510
#define PcClient__HasLoreItem_x                                    0x1402CC4E0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402D9D90
#define PcZoneClient__RemoveMyAffect_x                             0x1402DD990

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x1402134A0  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x140213650  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x1402137B0  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x1402136F0  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x14024D460  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14017F5C0

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140691900
#define PlayerBase__CanSee1_x                                      0x1406919D0
#define PlayerBase__GetVisibilityLineSegment_x                     0x140691E90
#define PlayerBase__HasProperty_x                                  0x140692060
#define PlayerBase__IsTargetable_x                                 0x140692120
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402EA680
#define PlayerClient__GetPcClient_x                                0x1402ECEB0
#define PlayerClient__PlayerClient_x                               0x1402E3940
#define PlayerClient__SetNameSpriteState_x                         0x1402F0300
#define PlayerClient__SetNameSpriteTint_x                          0x1402F12C0
#define PlayerZoneClient__ChangeHeight_x                           0x1402FF870
#define PlayerZoneClient__DoAttack_x                               0x140300580
#define PlayerZoneClient__GetLevel_x                               0x140303CC0
#define PlayerZoneClient__IsValidTeleport_x                        0x1402501F0
#define PlayerZoneClient__LegalPlayerRace_x                        0x140193300

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402F9190  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402F9240  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402F9340
#define PlayerManagerClient__CreatePlayer_x                        0x1402F8C60
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x1406914C0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402AB570
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402AB170
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402AB1E0
#define KeypressHandler__ClearCommandStateArray_x                  0x1402AB500  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402AB690
#define KeypressHandler__HandleKeyUp_x                             0x1402AB7B0
#define KeypressHandler__SaveKeymapping_x                          0x1402AB410  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x14064B580  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x140645350

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402D2A90  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402D7DC0
#define PcZoneClient__GetPcSkillLimit_x                            0x1402DA490
#define PcZoneClient__RemovePetEffect_x                            0x1402DDC70
#define PcZoneClient__HasAlternateAbility_x                        0x1402DB080
#define PcZoneClient__CanEquipItem_x                               0x1402D60F0
#define PcZoneClient__GetItemByID_x                                0x1402D8E60
#define PcZoneClient__RemoveBuffEffect_x                           0x1402DD810
#define PcZoneClient__BandolierSwap_x                              0x1402D5140

// Doors
#define EQSwitch__UseSwitch_x                                      0x140254D20

// IconCache
#define IconCache__GetIcon_x                                       0x1403B1050

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403A5A70
#define CContainerMgr__CloseContainer_x                            0x1403A53B0
#define CContainerMgr__OpenExperimentContainer_x                   0x1403A5DF0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x14049A450

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x14029E530

// CLootWnd
#define CLootWnd__LootAll_x                                        0x14042B110
#define CLootWnd__RequestLootSlot_x                                0x14042C130

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401D37C0
#define EQ_Spell__SpellAffects_x                                   0x1401D4A80
#define EQ_Spell__SpellAffectBase_x                                0x1401D49E0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D7F30
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D7EE0
#define EQ_Spell__IsSPAStacking_x                                  0x1401D46A0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401D4260
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401D3B30

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C04F0

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1404F6E70
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404F6580
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404F5D90

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404FE4E0  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x14017BF80
#define CTaskManager__GetTaskStatus_x                              0x14017C090
#define CTaskManager__GetElementDescription_x                      0x14017BC10

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401D1B30
#define EqSoundManager__PlayScriptMp3_x                            0x1401D0970
#define EqSoundManager__SoundAssistPlay_x                          0x1403226A0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x1403229E0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x140590F60
#define CTextureAnimation__SetCurCell_x                            0x140591270

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x14029C790

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x140665FA0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x140666020
#define CharacterBase__IsExpansionFlag_x                           0x1401F4B80

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140383740
#define CCastSpellWnd__IsBardSongPlaying_x                         0x1403840B0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140385600

// messages
#define msg_spell_worn_off_x                                       0x140209DD0
#define msg_new_text_x                                             0x140205640
#define __msgTokenTextParam_x                                      0x1401FD110
#define msgTokenText_x                                             0x1401FD030

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140324060
#define SpellManager__GetSpellByGroupAndRank_x                     0x140323F80

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x1406A0310

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140424580

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403AA750
#define CCursorAttachment__IsOkToActivate_x                        0x1403AD6B0
#define CCursorAttachment__RemoveAttachment_x                      0x1403AD960
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405CA1A0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405CA390
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405CA3A0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x14014A0D0
#define CFindItemWnd__Update_x                                     0x14014AA70
#define CFindItemWnd__PickupSelectedItem_x                         0x140144550

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x140153C30
#define LootFiltersManager__GetItemFilterData_x                    0x140154740
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140154FE0
#define LootFiltersManager__SetItemLootFilter_x                    0x140155290

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14047D170

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x14031CC20
#define CResolutionHandler__UpdateResolution_x                     0x1406A4B70

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403A1D50

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x14066A3A0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x14066A290  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403C77C0
#define CGroupWnd__UpdateDisplay_x                                 0x1403C73A0

// ItemBase
#define ItemBase__IsLore_x                                         0x1406223F0
#define ItemBase__IsLoreEquipped_x                                 0x140622480

#define MultipleItemMoveManager__ProcessMove_x                     0x1402BE2E0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14024D5C0
#define EQPlacedItemManager__GetItemByGuid_x                       0x14024D550
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14024D590

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140317090

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140124060
#define FactionManagerClient__HandleFactionMessage_x               0x140124410
#define FactionManagerClient__GetFactionStanding_x                 0x140123830
#define FactionManagerClient__GetMaxFaction_x                      0x140123830
#define FactionManagerClient__GetMinFaction_x                      0x1401236E0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AD5B0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x14012F800

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401ACD80
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401AC100
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401ACBA0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401ACB20  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x1403290D0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140317090

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x140213840

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140586C20

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140085A80

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14033A900

// AchievementManager
#define AchievementManager__Instance_x                             0x14008D450

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x14064E5C0
#define FreeToPlayClient__RestrictionInfo_x                        0x140AB7FE0

// UdpConnection
#define UdpConnection__GetStats_x                                  0x14052CD50

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x140817548
#define CGFScreenWnd__CGFScreenWnd_x                               0x1400703C0
#define CGFScreenWnd__CGFScreenWnd1_x                              0x140070550
#define CGFScreenWnd__dCGFScreenWnd_x                              0x140070700

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
