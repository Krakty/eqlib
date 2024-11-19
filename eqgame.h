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

#define __ClientDate                                               20241112u
#define __ExpectedVersionDate                                     "Nov 12 2024"
#define __ExpectedVersionTime                                     "19:26:18"
#define __ActualVersionDate_x                                      0x140947F00
#define __ActualVersionTime_x                                      0x140947EF0
#define __ActualVersionBuild_x                                     0x1408DE650

// Memory Protection
#define __MemChecker0_x                                            0x1402B0FD0
#define __MemChecker1_x                                            0x14056F610
#define __MemChecker4_x                                            0x14027FAF0
#define __EncryptPad0_x                                            0x140D14E50

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E4DAA0
#define instEQZoneInfo_x                                           0x140E4DC94 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x140216860
#define __gfMaxZoomCameraDistance_x                                0x1408DF8C8
#define __gfMaxCameraDistance_x                                    0x140A846A8
#define __CurrentSocial_x                                          0x140BD0940 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D0C720
#define g_eqCommandStates_x                                        0x140D0D790
#define __CommandList_x                                            0x140D0D9D0
#define __ScreenMode_x                                             0x140D9535C
#define __gWorld_x                                                 0x140E483D8
#define __gpbCommandEvent_x                                        0x140E483E4
#define __ServerHost_x                                             0x140E485C8
#define __Guilds_x                                                 0x140E4C650
#define __MemCheckBitmask_x                                        0x140E4DFDB
#define __MemCheckActive_x                                         0x140E4F6CD
#define __MouseEventTime_x                                         0x140EC3018
#define DI8__MouseState_x                                          0x140EC7248
#define __heqmain_x                                                0x140EC96E8
#define DI8__Mouse_x                                               0x140EC7198
#define __HWnd_x                                                   0x140EC7220
#define __Mouse_x                                                  0x140EC7154
#define DI8__Keyboard_x                                            0x140EC7170
#define __LoginName_x                                              0x140EC9DCC
#define __CurrentMapLabel_x                                        0x140EDD5D0
#define __LabelCache_x                                             0x140EDE1A0
#define __ChatFilterDefs_x                                         0x140A1F7B0
#define Teleport_Table_Size_x                                      0x140E48470
#define Teleport_Table_x                                           0x140E45F30

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E489E0
#define pinstActiveBanker_x                                        0x140E48900
#define pinstActiveCorpse_x                                        0x140E488F0
#define pinstActiveGMaster_x                                       0x140E488F8
#define pinstActiveMerchant_x                                      0x140E488E8
#define pinstAltAdvManager_x                                       0x140D961F8
#define pinstCEverQuest_x                                          0x140EC7190
#define pinstCamActor_x                                            0x140D95348
#define pinstCDBStr_x                                              0x140D94FB0
#define pinstCDisplay_x                                            0x140E489D8
#define pinstControlledPlayer_x                                    0x140E48990
#define pinstCResolutionHandler_x                                  0x14154E948
#define pinstCSidlManager_x                                        0x140EEF4A0
#define pinstCXWndManager_x                                        0x140EEF498
#define instDynamicZone_x                                          0x140E4C510 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E4C55E
#define instExpeditionName_x                                       0x140E4C59E
#define pinstDZMember_x                                            0x140E4C628
#define pinstDZTimerInfo_x                                         0x140E4C630
#define pinstEqLogin_x                                             0x140EC9710
#define instTribute_x                                              0x140D07D50
#define pinstDeviceInputProxy_x                                    0x140E4DAFC
#define pinstEQSoundManager_x                                      0x140D96578
#define pinstEQSpellStrings_x                                      0x140D79B80
#define pinstSGraphicsEngine_x                                     0x14154E6C8
#define pinstLocalPC_x                                             0x140E489C0
#define pinstLocalPlayer_x                                         0x140E488E0
#define pinstCMercenaryClientManager_x                             0x140EC48F8
#define pinstModelPlayer_x                                         0x140E48910
#define pinstRenderInterface_x                                     0x14154E6E0
#define pinstSkillMgr_x                                            0x140EC6598
#define pinstSpawnManager_x                                        0x140EC4CC0
#define pinstSpellManager_x                                        0x140EC6600
#define pinstStringTable_x                                         0x140E45F20
#define pinstSwitchManager_x                                       0x140E45EA0
#define pinstTarget_x                                              0x140E48988
#define pinstTaskMember_x                                          0x140D07D40 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140E48998
#define pinstTradeTarget_x                                         0x140E48908
#define instTributeActive_x                                        0x140D07D79
#define pinstViewActor_x                                           0x140D95340
#define pinstWorldData_x                                           0x140E489D0
#define pinstPlayerPath_x                                          0x140EC4CE8
#define pinstTargetIndicator_x                                     0x140EC66B0
#define EQObject_Top_x                                             0x140E489B0

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140EDA728
#define pinstCContainerMgr_x                                       0x140D95008
#define pinstCContextMenuManager_x                                 0x140EEF180
#define pinstCInvSlotMgr_x                                         0x140D95000
#define pinstCItemDisplayManager_x                                 0x140EDD1A0
#define pinstCPopupWndManager_x                                    0x140EDDA30
#define pinstCSpellDisplayMgr_x                                    0x140EDE080
#define pinstCTaskManager_x                                        0x140BD0C80
#define pinstEQSuiteTextureLoader_x                                0x140D1E550
#define pinstItemIconCache_x                                       0x140EDAA88
#define pinstLootFiltersManager_x                                  0x140D949F8
#define pinstGFViewListener_x                                      0x140EEE958


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x14023F8C0
#define __CastRay_x                                                0x140237D00
#define __CastRay2_x                                               0x140237A00
#define __compress_block_x                                         0x140524CB0
#define __ConvertItemTags_x                                        0x140238160
#define __CleanItemTags_x                                          0x140088490
#define __CreateCascadeMenuItems_x                                 0x140187010
#define __decompress_block_x                                       0x14056AE80
#define __DoesFileExist_x                                          0x1405734C0
#define __EQGetTime_x                                              0x14056FBC0
#define __ExecuteCmd_x                                             0x14020E170
#define __FixHeading_x                                             0x14069C280
#define __FlushDxKeyboard_x                                        0x140332CB0
#define __get_bearing_x                                            0x140241AB0
#define __get_melee_range_x                                        0x140241BA0
#define __GetAnimationCache_x                                      0x1403B00D0
#define __GetGaugeValueFromEQ_x                                    0x1404E49A0
#define __GetLabelFromEQ_x                                         0x1404E5FA0
#define __GetXTargetType_x                                         0x14069D560   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14069C300
#define __HelpPath_x                                               0x140EC2EE0   // Why?
#define __NewUIINI_x                                               0x1404F1A30   // Why?
#define __ProcessDeviceEvents_x                                    0x140280100
#define __ProcessGameEvents_x                                      0x140274E30
#define __ProcessKeyboardEvents_x                                  0x140334400
#define __ProcessMouseEvents_x                                     0x140276500
#define __SaveColors_x                                             0x140197030
#define __STMLToText_x                                             0x140577E10
#define __WndProc_x                                                0x1403314D0
#define CMemoryMappedFile__SetFile_x                               0x1407D8260
#define DrawNetStatus_x                                            0x1402BF420
#define Util__FastTime_x                                           0x14056F150
#define __eq_delete_x                                              0x1406A42D4
#define __eq_new_x                                                 0x1406A4290
#define __CopyLayout_x                                             0x1402AD3D0
#define __ThrottleFrameRate_x                                      0x140264654
#define __ThrottleFrameRateEnd_x                                   0x1402646B4

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140343AD0
#define CAAWnd__Update_x                                           0x140343DD0
#define CAAWnd__UpdateSelected_x                                   0x140344E20

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AA8A0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A3190
#define CAdvancedLootWnd__AddPlayerToList_x                        0x14082CB78
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AB190

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401A2160
#define AltAdvManager__IsAbilityReady_x                            0x1401A23E0
#define AltAdvManager__GetAAById_x                                 0x1401A1A30
#define AltAdvManager__CanTrainAbility_x                           0x1401A1840
#define AltAdvManager__CanSeeAbility_x                             0x1401A1500

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D1100
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D1F40
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D2190
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400E6020
#define CharacterZoneClient__CanUseItem_x                          0x1400E6450
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D2B60
#define CharacterZoneClient__CastSpell_x                           0x1400D2C00
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E1F80
#define CharacterZoneClient__Cur_HP_x                              0x1400E7B20
#define CharacterZoneClient__Cur_Mana_x                            0x1400E7CE0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D5990
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400EE1A0
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FCBD0  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D6E40
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E5920
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400EFD60
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400EEC30
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D7010
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C7510
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C8EE0
#define CharacterZoneClient__GetHPRegen_x                          0x1400EF370
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E7790
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400EFFF0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D7090
#define CharacterZoneClient__GetManaRegen_x                        0x1400F0DD0
#define CharacterZoneClient__GetModCap_x                           0x1400F8390
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D7320
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D7530
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CC050
#define CharacterZoneClient__HasSkill_x                            0x1400F3DC0
#define CharacterZoneClient__HitBySpell_x                          0x1400D7FE0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DB780
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F7E70
#define CharacterZoneClient__Max_Endurance_x                       0x1402DBAB0  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F81C0
#define CharacterZoneClient__Max_Mana_x                            0x1402DBCD0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F8620
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DEB10
#define CharacterZoneClient__SpellDuration_x                       0x1400DF810
#define CharacterZoneClient__TotalEffect_x                         0x1400E0B60
#define CharacterZoneClient__UseSkill_x                            0x1400FDB40


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140361FD0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14036C300

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x1403681A0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14036BD80

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14036E9D0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AA3430

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140391910
#define CChatWindowManager__InitContextMenu_x                      0x140391AA0
#define CChatWindowManager__FreeChatWindow_x                       0x140390990
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x140399680
#define CChatWindowManager__CreateChatWindow_x                     0x1403902D0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x1401060A0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x14039A6D0
#define CChatWindow__Clear_x                                       0x14039B690
#define CChatWindow__WndNotification_x                             0x14039C880
#define CChatWindow__AddHistory_x                                  0x14039B190

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405ACF20
#define CContextMenu__RemoveMenuItem_x                             0x1405AD310
#define CContextMenu__RemoveAllMenuItems_x                         0x1405AD2E0
#define CContextMenu__CheckMenuItem_x                              0x1405AD150
#define CContextMenu__SetMenuItem_x                                0x1405AD330
#define CContextMenu__AddSeparator_x                               0x1405AD090

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x14059EDE0
#define CContextMenuManager__RemoveMenu_x                          0x14059F3C0
#define CContextMenuManager__PopupMenu_x                           0x14059F100
#define CContextMenuManager__Flush_x                               0x14059EE60
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403A8000

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1406662A0
#define CChatService__GetFriendName_x                              0x1406662B0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14058FD40
#define CComboWnd__Draw_x                                          0x14058FE40
#define CComboWnd__GetCurChoice_x                                  0x140590110  // unused
#define CComboWnd__GetListRect_x                                   0x1405901B0
#define CComboWnd__InsertChoice_x                                  0x1405904F0
#define CComboWnd__SetColors_x                                     0x140590880
#define CComboWnd__SetChoice_x                                     0x140590840
#define CComboWnd__GetItemCount_x                                  0x1405901A0
#define CComboWnd__GetCurChoiceText_x                              0x140590150  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405900E0
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405905B0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403A5D90
#define CContainerWnd__SetContainer_x                              0x1403FC150
#define CContainerWnd__vftable_x                                   0x1409BB928

// CDisplay
#define CDisplay__cameraType_x                                     0x140D950FC
#define CDisplay__ZoneMainUI_x                                     0x1405C6FE0
#define CDisplay__PreZoneMainUI_x                                  0x140193F60
#define CDisplay__CleanGameUI_x                                    0x1401860D0
#define CDisplay__GetClickedActor_x                                0x14018A290
#define CDisplay__GetUserDefinedColor_x                            0x14018AF00
#define CDisplay__InitCharSelectUI_x                               0x14018B1B0
#define CDisplay__ReloadUI_x                                       0x140196250
#define CDisplay__RestartUI_x                                      0x1401F4780
#define CDisplay__WriteTextHD2_x                                   0x14019D260
#define CDisplay__TrueDistance_x                                   0x14019CF10
#define CDisplay__SetViewActor_x                                   0x140199750
#define CDisplay__GetFloorHeight_x                                 0x14018A4F0
#define CDisplay__ToggleScreenshotMode_x                           0x14019CA00
#define CDisplay__RealRender_World_x                               0x140195630

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405D1210
#define CEditWnd__DrawCaret_x                                      0x1405C2CE0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405C31A0
#define CEditWnd__GetCaretPt_x                                     0x1405C3420  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405C3460
#define CEditWnd__GetDisplayString_x                               0x1405C36D0
#define CEditWnd__GetHorzOffset_x                                  0x1405C3910
#define CEditWnd__GetLineForPrintableChar_x                        0x1405C3A60
#define CEditWnd__GetSelStartPt_x                                  0x1405C3D40  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405C3B90
#define CEditWnd__PointFromPrintableChar_x                         0x1405C48F0
#define CEditWnd__ReplaceSelection_x                               0x1405C4CA0
#define CEditWnd__SelectableCharFromPoint_x                        0x1405C5140
#define CEditWnd__SetEditable_x                                    0x1405C53D0
#define CEditWnd__SetWindowText_x                                  0x1405C5400

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140265760
#define CEverQuest__ClickedPlayer_x                                0x14025B250
#define CEverQuest__CreateTargetIndicator_x                        0x14025BB10
#define CEverQuest__DoTellWindow_x                                 0x140105DB0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140106670 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140267120
#define CEverQuest__dsp_chat_x                                     0x1401057E0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x140291510
#define CEverQuest__Emote_x                                        0x140267B00
#define CEverQuest__GetBodyTypeDesc_x                              0x1402688B0
#define CEverQuest__GetClassDesc_x                                 0x140268910
#define CEverQuest__GetClassThreeLetterCode_x                      0x140268CE0
#define CEverQuest__GetDeityDesc_x                                 0x140268F90
#define CEverQuest__GetLangDesc_x                                  0x1402693C0
#define CEverQuest__GetRaceDesc_x                                  0x140269760
#define CEverQuest__InterpretCmd_x                                 0x14026B0A0
#define CEverQuest__LeftClickedOnPlayer_x                          0x140280170
#define CEverQuest__LMouseUp_x                                     0x14026CAC0
#define CEverQuest__RightClickedOnPlayer_x                         0x14027D990
#define CEverQuest__RMouseUp_x                                     0x140277090
#define CEverQuest__SetGameState_x                                 0x1402826B0
#define CEverQuest__UPCNotificationFlush_x                         0x140287FE0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14026C730
#define CEverQuest__ReportSuccessfulHeal_x                         0x140278440
#define CEverQuest__ReportSuccessfulHit_x                          0x140279260

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403BA4B0

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C1090
#define CGuild__GetGuildName_x                                     0x1400C10D0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403DD720

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402A3120
#define CHotButton__SetCheck_x                                     0x1402A33F0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403F4F50
#define CInvSlotMgr__MoveItem_x                                    0x1403F5130
#define CInvSlotMgr__SelectSlot_x                                  0x1403F6AB0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403F2170
#define CInvSlot__SliderComplete_x                                 0x1403F36C0
#define CInvSlot__GetItemBase_x                                    0x1403EDD90
#define CInvSlot__UpdateItem_x                                     0x1403F3B70

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403F7E40

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140418EE0
#define CItemDisplayWnd__UpdateStrings_x                           0x14041B7E0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x1404159B0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140417160
#define CItemDisplayWnd__RequestConvertItem_x                      0x140418300

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404E14E0
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404E31D0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x14051E020

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1404120E0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14014E630

// CLabel
#define CLabel__UpdateText_x                                       0x140422BB0

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405936C0
#define CListWnd__dCListWnd_x                                      0x140593B10
#define CListWnd__vftable_x                                        0x140AA1588
#define CListWnd__AddColumn_x                                      0x1405941B0
#define CListWnd__AddColumn1_x                                     0x140594250
#define CListWnd__AddLine_x                                        0x1405943B0
#define CListWnd__AddString_x                                      0x140594940
#define CListWnd__CalculateFirstVisibleLine_x                      0x140594EB0
#define CListWnd__CalculateVSBRange_x                              0x140595190
#define CListWnd__ClearSel_x                                       0x140595340
#define CListWnd__ClearAllSel_x                                    0x1405952E0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405953A0
#define CListWnd__Compare_x                                        0x140595560
#define CListWnd__Draw_x                                           0x140595A30
#define CListWnd__DrawColumnSeparators_x                           0x1405965E0
#define CListWnd__DrawHeader_x                                     0x1405966A0
#define CListWnd__DrawItem_x                                       0x140596D80
#define CListWnd__DrawLine_x                                       0x140597700
#define CListWnd__DrawSeparator_x                                  0x140597BC0
#define CListWnd__EnableLine_x                                     0x140597FE0
#define CListWnd__EnsureVisible_x                                  0x140598040
#define CListWnd__ExtendSel_x                                      0x140598140
#define CListWnd__GetColumnMinWidth_x                              0x140598470
#define CListWnd__GetColumnWidth_x                                 0x1405984F0
#define CListWnd__GetCurSel_x                                      0x1405985F0
#define CListWnd__GetItemData_x                                    0x140598970
#define CListWnd__GetItemHeight_x                                  0x1405989B0
#define CListWnd__GetItemRect_x                                    0x140598BD0
#define CListWnd__GetItemText_x                                    0x140598E70
#define CListWnd__GetSelList_x                                     0x1405990C0
#define CListWnd__GetSeparatorRect_x                               0x1405992B0
#define CListWnd__InsertLine_x                                     0x14059A710
#define CListWnd__RemoveLine_x                                     0x14059AD80
#define CListWnd__SetColors_x                                      0x14059B140
#define CListWnd__SetColumnJustification_x                         0x14059B160
#define CListWnd__SetColumnLabel_x                                 0x14059B1E0
#define CListWnd__SetColumnWidth_x                                 0x14059B380
#define CListWnd__SetCurSel_x                                      0x14059B450
#define CListWnd__SetItemColor_x                                   0x14059B6C0
#define CListWnd__SetItemData_x                                    0x14059B760
#define CListWnd__SetItemText_x                                    0x14059B9A0
#define CListWnd__Sort_x                                           0x14059BDB0
#define CListWnd__ToggleSel_x                                      0x14059BF20
#define CListWnd__SetColumnsSizable_x                              0x14059B3D0
#define CListWnd__SetItemWnd_x                                     0x14059BAD0
#define CListWnd__GetItemWnd_x                                     0x140599050
#define CListWnd__SetItemIcon_x                                    0x14059B7A0
#define CListWnd__CalculateCustomWindowPositions_x                 0x140594C80
#define CListWnd__SetVScrollPos_x                                  0x14059BD10

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140435E60

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A083B8
#define MapViewMap__Clear_x                                        0x1404379E0
#define MapViewMap__SetZoom_x                                      0x14043E030
#define MapViewMap__HandleLButtonDown_x                            0x14043AB70

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14045F6F0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140465C80
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140466420
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140469C20
#define CMerchantWnd__SelectBuySellSlot_x                          0x140468F70
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14046DEB0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x1406417D0
#define CPacketScrambler__hton_x                                   0x1406417C0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405BC5C0
#define CSidlManagerBase__FindAnimation1_x                         0x1405BC500
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405BCBF0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405BC9A0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405BB900
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405BB890
#define CSidlManagerBase__CreateXWnd_x                             0x1405BAED0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404D44D0
#define CSidlManager__CreateXWnd_x                                 0x1404D4690

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x140581190
#define CSidlScreenWnd__CalculateVSBRange_x                        0x1405812C0
#define CSidlScreenWnd__ConvertToRes_x                             0x1405CB750 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x140581440
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x1405808C0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x140580990
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x140580BA0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x140581B30
#define CSidlScreenWnd__EnableIniStorage_x                         0x140581D60
#define CSidlScreenWnd__GetChildItem_x                             0x140581F00
#define CSidlScreenWnd__GetSidlPiece_x                             0x140582150
#define CSidlScreenWnd__HandleLButtonUp_x                          0x14058C310 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405824C0
#define CSidlScreenWnd__LoadIniInfo_x                              0x140582830
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405830F0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140583AF0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140EEE7F8
#define CSidlScreenWnd__StoreIniInfo_x                             0x140584180
#define CSidlScreenWnd__StoreIniVis_x                              0x140584970
#define CSidlScreenWnd__vftable_x                                  0x140AA07F8
#define CSidlScreenWnd__WndNotification_x                          0x1405849C0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14031C1B0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14031C650 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14031C580
#define CSkillMgr__IsActivatedSkill_x                              0x14031CA00
#define CSkillMgr__IsCombatSkill_x                                 0x14031CA40
#define CSkillMgr__GetSkillTimerDuration_x                         0x14031C970
#define CSkillMgr__GetSkillLastUsed_x                              0x14031C5D0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x14059C890
#define CSliderWnd__SetValue_x                                     0x14059D0A0
#define CSliderWnd__SetNumTicks_x                                  0x14059CF20

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404DAB30

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405A1840
#define CStmlWnd__CalculateHSBRange_x                              0x14058BD00
#define CStmlWnd__CalculateVSBRange_x                              0x1405A26E0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405A31E0
#define CStmlWnd__ForceParseNow_x                                  0x1405A3280
#define CStmlWnd__GetVisibleText_x                                 0x1405A3950
#define CStmlWnd__MakeStmlColorTag_x                               0x1405A56B0
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405A56F0
#define CStmlWnd__SetSTMLText_x                                    0x1405AC6C0
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405AC870
#define CStmlWnd__UpdateHistoryString_x                            0x1405ACC00

// CTabWnd
#define CTabWnd__Draw_x                                            0x14059D470
#define CTabWnd__DrawCurrentPage_x                                 0x14059D510
#define CTabWnd__DrawTab_x                                         0x14059D8E0
#define CTabWnd__GetTabRect_x                                      0x14059DF50
#define CTabWnd__InsertPage_x                                      0x14059E220
#define CTabWnd__RemovePage_x                                      0x14059E4B0
#define CTabWnd__SetPage_x                                         0x14059E610
#define CTabWnd__UpdatePage_x                                      0x14059E910

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405C5860
#define CPageWnd__SetTabText_x                                     0x1405C58D0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BA7D0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BABE0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405B3FD0
#define CTextureFont__DrawWrappedText1_x                           0x1405B3EE0
#define CTextureFont__DrawWrappedText2_x                           0x1405B4100
#define CTextureFont__GetTextExtent_x                              0x1405B44B0
#define CTextureFont__GetHeight_x                                  0x1405B4470

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405C9EB0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405804A0

// CXStr
#define CXStr__gFreeLists_x                                        0x140D1DEC0
#define CXStr__gCXStrAccess_x                                      0x140EEE5F8

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405873C0
#define CXWnd__ClrFocus_x                                          0x1405876B0
#define CXWnd__Destroy_x                                           0x140587830
#define CXWnd__DoAllDrawing_x                                      0x140587940
#define CXWnd__DrawColoredRect_x                                   0x140588100
#define CXWnd__DrawTooltip_x                                       0x140589760
#define CXWnd__DrawTooltipAtPoint_x                                0x140589810
#define CXWnd__GetChildItem_x                                      0x14058A100
#define CXWnd__GetChildWndAt_x                                     0x14058A1C0
#define CXWnd__GetClientRect_x                                     0x14058A470
#define CXWnd__GetClientClipRect_x                                 0x14058A330
#define CXWnd__GetRelativeRect_x                                   0x14058BE30
#define CXWnd__GetScreenClipRect_x                                 0x14058BF40
#define CXWnd__GetScreenRect_x                                     0x14058C090
#define CXWnd__GetTooltipRect_x                                    0x14058C210
#define CXWnd__IsActive_x                                          0x14058C7D0
#define CXWnd__IsDescendantOf_x                                    0x14058C800
#define CXWnd__IsReallyVisible_x                                   0x14058C870
#define CXWnd__IsType_x                                            0x14058C8B0
#define CXWnd__Minimize_x                                          0x14058C9B0
#define CXWnd__ProcessTransition_x                                 0x14058D890
#define CXWnd__Resize_x                                            0x14058D990
#define CXWnd__Right_x                                             0x14058DA30
#define CXWnd__SetFocus_x                                          0x14058DDF0
#define CXWnd__SetFont_x                                           0x14058DE40
#define CXWnd__SetKeyTooltip_x                                     0x14058DF40
#define CXWnd__SetMouseOver_x                                      0x14058E080
#define CXWnd__SetParent_x                                         0x14058E100
#define CXWnd__StartFade_x                                         0x14058E530
#define CXWnd__vftable_x                                           0x140AA0DE8
#define CXWnd__CXWnd_x                                             0x140585F60
#define CXWnd__dCXWnd_x                                            0x1405868C0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405D0990

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405AE4E0
#define CXWndManager__DrawCursor_x                                 0x1405AE7C0
#define CXWndManager__DrawWindows_x                                0x1405AEA20
#define CXWndManager__GetKeyboardFlags_x                           0x1405AF0F0
#define CXWndManager__HandleKeyboardMsg_x                          0x1405AF130
#define CXWndManager__RemoveWnd_x                                  0x1405B2690

// CDBStr
#define CDBStr__GetString_x                                        0x140184290

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x14064B5F0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CEC80
#define CCharacterListWnd__EnterWorld_x                            0x1400CD980
#define CCharacterListWnd__Quit_x                                  0x1400CEC60
#define CCharacterListWnd__UpdateList_x                            0x1400CFAF0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140619360
#define ItemBase__CreateItemTagString_x                            0x140619DA0
#define ItemBase__GetImageNum_x                                    0x14061C2D0
#define ItemBase__GetItemValue_x                                   0x14061DDE0
#define ItemBase__IsEmpty_x                                        0x14061F980
#define ItemBase__IsKeyRingItem_x                                  0x1406200A0
#define ItemBase__ValueSellMerchant_x                              0x1406241E0
#define ItemClient__CanDrop_x                                      0x1402A5640
#define ItemClient__CanGoInBag_x                                   0x1402A5770
#define ItemClient__CreateItemClient_x                             0x1402A59F0
#define ItemClient__dItemClient_x                                  0x1402A54B0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401A3900
#define EQ_LoadingS__Array_x                                       0x140D0A230

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140630A00
#define PcBase__GetCombatAbility_x                                 0x1406310F0
#define PcBase__GetCombatAbilityTimer_x                            0x140631190
#define PcBase__GetItemContainedRealEstateIds_x                    0x140631930
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x140632420
#define PcClient__AlertInventoryChanged_x                          0x1402C79F0
#define PcClient__GetConLevel_x                                    0x1402C8010  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402CA7B0
#define PcClient__HasLoreItem_x                                    0x1402CB770
#define PcZoneClient__GetItemRecastTimer_x                         0x1402D9000
#define PcZoneClient__RemoveMyAffect_x                             0x1402DCBF0

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x140212880  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x140212A30  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x140212B90  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x140212AD0  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x14024C850  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14017EAB0

// PlayerClient
#define PlayerBase__CanSee_x                                       0x14068F1D0
#define PlayerBase__CanSee1_x                                      0x14068F2A0
#define PlayerBase__GetVisibilityLineSegment_x                     0x14068F760
#define PlayerBase__HasProperty_x                                  0x14068F930
#define PlayerBase__IsTargetable_x                                 0x14068F9F0
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402E98D0
#define PlayerClient__GetPcClient_x                                0x1402EC100
#define PlayerClient__PlayerClient_x                               0x1402E2BA0
#define PlayerClient__SetNameSpriteState_x                         0x1402EF550
#define PlayerClient__SetNameSpriteTint_x                          0x1402F0510
#define PlayerZoneClient__ChangeHeight_x                           0x1402FE990
#define PlayerZoneClient__DoAttack_x                               0x1402FF6A0
#define PlayerZoneClient__GetLevel_x                               0x140302DE0
#define PlayerZoneClient__IsValidTeleport_x                        0x14024F5E0
#define PlayerZoneClient__LegalPlayerRace_x                        0x1401927E0

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402F82B0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402F8360  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402F8460
#define PlayerManagerClient__CreatePlayer_x                        0x1402F7D80
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x14068ED90

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402AA8D0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402AA4D0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402AA540
#define KeypressHandler__ClearCommandStateArray_x                  0x1402AA860  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402AA9F0
#define KeypressHandler__HandleKeyUp_x                             0x1402AAB10
#define KeypressHandler__SaveKeymapping_x                          0x1402AA770  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140649130  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x140642F00

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402D1D30  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402D7040
#define PcZoneClient__GetPcSkillLimit_x                            0x1402D9700
#define PcZoneClient__RemovePetEffect_x                            0x1402DCED0
#define PcZoneClient__HasAlternateAbility_x                        0x1402DA2E0
#define PcZoneClient__CanEquipItem_x                               0x1402D5390
#define PcZoneClient__GetItemByID_x                                0x1402D80D0
#define PcZoneClient__RemoveBuffEffect_x                           0x1402DCA70
#define PcZoneClient__BandolierSwap_x                              0x1402D43E0

// Doors
#define EQSwitch__UseSwitch_x                                      0x140254110

// IconCache
#define IconCache__GetIcon_x                                       0x1403B0100

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403A4B40
#define CContainerMgr__CloseContainer_x                            0x1403A4480
#define CContainerMgr__OpenExperimentContainer_x                   0x1403A4EC0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404991B0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x14029D8E0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140429E90
#define CLootWnd__RequestLootSlot_x                                0x14042AEA0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401D2C90
#define EQ_Spell__SpellAffects_x                                   0x1401D3F50
#define EQ_Spell__SpellAffectBase_x                                0x1401D3EB0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D7700
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D76B0
#define EQ_Spell__IsSPAStacking_x                                  0x1401D3B70
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401D3730
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401D3000

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400BFCD0

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1404F5200
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404F4910
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404F4110

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404FC870  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x14017B480
#define CTaskManager__GetTaskStatus_x                              0x14017B590
#define CTaskManager__GetElementDescription_x                      0x14017B110

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401D1000
#define EqSoundManager__PlayScriptMp3_x                            0x1401CFE40
#define EqSoundManager__SoundAssistPlay_x                          0x1403217F0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140321B30  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x14058F2D0
#define CTextureAnimation__SetCurCell_x                            0x14058F5E0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x14029BB40

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x140663970
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1406639F0
#define CharacterBase__IsExpansionFlag_x                           0x1401F3FD0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140382830
#define CCastSpellWnd__IsBardSongPlaying_x                         0x1403831A0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x1403846F0

// messages
#define msg_spell_worn_off_x                                       0x1402091B0
#define msg_new_text_x                                             0x140204A40
#define __msgTokenTextParam_x                                      0x1401FC570
#define msgTokenText_x                                             0x1401FC490

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x1403231B0
#define SpellManager__GetSpellByGroupAndRank_x                     0x1403230D0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x14069D940

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140423300

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403A9810
#define CCursorAttachment__IsOkToActivate_x                        0x1403AC780
#define CCursorAttachment__RemoveAttachment_x                      0x1403ACA30
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405C8350
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405C8540
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405C8550

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x1401498E0
#define CFindItemWnd__Update_x                                     0x14014A280
#define CFindItemWnd__PickupSelectedItem_x                         0x140143DA0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x140153120
#define LootFiltersManager__GetItemFilterData_x                    0x140153C30
#define LootFiltersManager__RemoveItemLootFilter_x                 0x1401544D0
#define LootFiltersManager__SetItemLootFilter_x                    0x140154780

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14047BEB0

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x14031BD70
#define CResolutionHandler__UpdateResolution_x                     0x1406A21A0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403A0E20

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x140667D70  // Rename..?
#define CDistillerInfo__Instance_x                                 0x140667C60  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403C6860
#define CGroupWnd__UpdateDisplay_x                                 0x1403C6440

// ItemBase
#define ItemBase__IsLore_x                                         0x140620170
#define ItemBase__IsLoreEquipped_x                                 0x140620200

#define MultipleItemMoveManager__ProcessMove_x                     0x1402BD640

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14024C9B0
#define EQPlacedItemManager__GetItemByGuid_x                       0x14024C940
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14024C980

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1403161B0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x1401239C0
#define FactionManagerClient__HandleFactionMessage_x               0x140123D70
#define FactionManagerClient__GetFactionStanding_x                 0x140123190
#define FactionManagerClient__GetMaxFaction_x                      0x140123190
#define FactionManagerClient__GetMinFaction_x                      0x140123040

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400ACD40

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x14012F170

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401AC270
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401AB5F0
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401AC090  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401AC010  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x140328220

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1403161B0

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x140212C20

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140584FB0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140085340

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140339A20

// AchievementManager
#define AchievementManager__Instance_x                             0x14008CD10

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x14064C170
#define FreeToPlayClient__RestrictionInfo_x                        0x140AB4E40

// UdpConnection
#define UdpConnection__GetStats_x                                  0x14052B0D0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
