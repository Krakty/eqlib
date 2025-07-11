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

#define __ClientDate                                               20250616u
#define __ExpectedVersionDate                                     "Jun 16 2025"
#define __ExpectedVersionTime                                     "11:09:03"
#define __ActualVersionDate_x                                      0x14095D0D0
#define __ActualVersionTime_x                                      0x14095D0C0
#define __ActualVersionBuild_x                                     0x1408F2B80

// Memory Protection
#define __MemChecker0_x                                            0x1402BC940
#define __MemChecker1_x                                            0x140582130
#define __MemChecker4_x                                            0x14028A050
#define __EncryptPad0_x                                            0x140D2CE80

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E65AE0
#define instEQZoneInfo_x                                           0x140E65CD4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x14021F2D0
#define __gfMaxZoomCameraDistance_x                                0x1408F3DF8
#define __gfMaxCameraDistance_x                                    0x140A9CC74
#define __CurrentSocial_x                                          0x140BE8950 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D24720
#define g_eqCommandStates_x                                        0x140D25790
#define __CommandList_x                                            0x140D259C0
#define __ScreenMode_x                                             0x140DAD074
#define __gWorld_x                                                 0x140E5DF70
#define __gpbCommandEvent_x                                        0x140E5E4CC
#define __ServerHost_x                                             0x140E5E6B8
#define __Guilds_x                                                 0x140E646A0
#define __MemCheckBitmask_x                                        0x140E6601F
#define __MemCheckActive_x                                         0x140E67725
#define __MouseEventTime_x                                         0x140EDB088
#define DI8__MouseState_x                                          0x140EDF2B8
#define __heqmain_x                                                0x140EE1758
#define DI8__Mouse_x                                               0x140EDF208
#define __HWnd_x                                                   0x140EDF290
#define __Mouse_x                                                  0x140EDF1C4
#define DI8__Keyboard_x                                            0x140EDF1E0
#define __LoginName_x                                              0x140EE1E3C
#define __CurrentMapLabel_x                                        0x140EF58C0
#define __LabelCache_x                                             0x140EF6490
#define __ChatFilterDefs_x                                         0x140A35C60
#define Teleport_Table_Size_x                                      0x140E5E554
#define Teleport_Table_x                                           0x140E5E9F0

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E60A30
#define pinstActiveBanker_x                                        0x140E5E418
#define pinstActiveCorpse_x                                        0x140E5E408
#define pinstActiveGMaster_x                                       0x140E5E410
#define pinstActiveMerchant_x                                      0x140E5E400
#define pinstAltAdvManager_x                                       0x140DAE240
#define pinstCEverQuest_x                                          0x140EDF200
#define pinstCamActor_x                                            0x140DAD060
#define pinstCDBStr_x                                              0x140DACFF0
#define pinstCDisplay_x                                            0x140E5E9E8
#define pinstControlledPlayer_x                                    0x140E5E4A8
#define pinstCResolutionHandler_x                                  0x140F06CC8
#define pinstCSidlManager_x                                        0x140F07A30
#define pinstCXWndManager_x                                        0x140F07A28
#define instDynamicZone_x                                          0x140E64560 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E645AE
#define instExpeditionName_x                                       0x140E645EE
#define pinstDZMember_x                                            0x140E64678
#define pinstDZTimerInfo_x                                         0x140E64680
#define pinstEqLogin_x                                             0x140EE1780
#define instTribute_x                                              0x140D1FD60
#define pinstDeviceInputProxy_x                                    0x140E65B3C
#define pinstEQSoundManager_x                                      0x140DAE5C0
#define pinstEQSpellStrings_x                                      0x140D91B80
#define pinstSGraphicsEngine_x                                     0x140F06A48
#define pinstLocalPC_x                                             0x140E60A10
#define pinstLocalPlayer_x                                         0x140E5E3F8
#define pinstCMercenaryClientManager_x                             0x140EDC978
#define pinstModelPlayer_x                                         0x140E5E428
#define pinstRenderInterface_x                                     0x140F06A60
#define pinstSkillMgr_x                                            0x140EDE608
#define pinstSpawnManager_x                                        0x140EDCD30
#define pinstSpellManager_x                                        0x140EDE670
#define pinstStringTable_x                                         0x140E60A18
#define pinstSwitchManager_x                                       0x140E5DEF0
#define pinstTarget_x                                              0x140E5E4A0
#define pinstTaskMember_x                                          0x140D1FD50 // Part of g_taskManager
#define pinstTradeTarget_x                                         0x140E5E420
#define instTributeActive_x                                        0x140D1FD89
#define pinstViewActor_x                                           0x140DAD058
#define pinstWorldData_x                                           0x140E5E9D8
#define pinstPlayerPath_x                                          0x140EDCD58
#define pinstTargetIndicator_x                                     0x140EDE720
#define EQObject_Top_x                                             0x140E5E5A8

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140EF2A20
#define pinstCContainerMgr_x                                       0x140DAD098
#define pinstCContextMenuManager_x                                 0x140F07710
#define pinstCInvSlotMgr_x                                         0x140DAD040
#define pinstCItemDisplayManager_x                                 0x140EF5490
#define pinstCPopupWndManager_x                                    0x140EF5D20
#define pinstCSpellDisplayMgr_x                                    0x140EF6370
#define pinstCTaskManager_x                                        0x140BE8C90
#define pinstEQSuiteTextureLoader_x                                0x140D36590
#define pinstItemIconCache_x                                       0x140EF2D80
#define pinstLootFiltersManager_x                                  0x140DACA38
#define pinstGFViewListener_x                                      0x140F06EE8


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x140249000
#define __CastRay_x                                                0x140241290
#define __CastRay2_x                                               0x140240F90
#define __compress_block_x                                         0x1405376C0
#define __ConvertItemTags_x                                        0x1402416F0
#define __CleanItemTags_x                                          0x14008A2D0
#define __CreateCascadeMenuItems_x                                 0x14018D630
#define __decompress_block_x                                       0x14057D940
#define __DoesFileExist_x                                          0x140585FE0
#define __EQGetTime_x                                              0x1405826E0
#define __ExecuteCmd_x                                             0x140216AD0
#define __FixHeading_x                                             0x14063D3D0
#define __FlushDxKeyboard_x                                        0x140341220
#define __get_bearing_x                                            0x14024B230
#define __get_melee_range_x                                        0x14024B320
#define __GetAnimationCache_x                                      0x1403BFD40
#define __GetGaugeValueFromEQ_x                                    0x1404F7210
#define __GetLabelFromEQ_x                                         0x1404F8800
#define __GetXTargetType_x                                         0x14063E6B0   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14063D450
#define __HelpPath_x                                               0x140EDAF50   // Why?
#define __NewUIINI_x                                               0x140504250   // Why?
#define __ProcessDeviceEvents_x                                    0x14028A660
#define __ProcessGameEvents_x                                      0x14027F310
#define __ProcessKeyboardEvents_x                                  0x140342970
#define __ProcessMouseEvents_x                                     0x1402809F0
#define __SaveColors_x                                             0x14019D650
#define __STMLToText_x                                             0x14058E220
#define __WndProc_x                                                0x14033F9F0
#define CMemoryMappedFile__SetFile_x                               0x1407EB040
#define DrawNetStatus_x                                            0x1402CAF60
#define Util__FastTime_x                                           0x14057E860
#define __eq_delete_x                                              0x1406B7044
#define __eq_new_x                                                 0x1406B7000
#define __CopyLayout_x                                             0x1402B8D50
#define __ThrottleFrameRate_x                                      0x14026E9EF
#define __ThrottleFrameRateEnd_x                                   0x14026EA4F

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x1403520B0
#define CAAWnd__Update_x                                           0x1403523B0
#define CAAWnd__UpdateSelected_x                                   0x140353400

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AC810
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A51F0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x14083FE48
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AD140

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401A87C0
#define AltAdvManager__IsAbilityReady_x                            0x1401A8C50
#define AltAdvManager__GetAAById_x                                 0x1401A8090
#define AltAdvManager__CanTrainAbility_x                           0x1401A7E80
#define AltAdvManager__CanSeeAbility_x                             0x1401A7B40

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D31D0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D4030
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D4280
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400E8A90
#define CharacterZoneClient__CanUseItem_x                          0x1400E9050
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D4C50
#define CharacterZoneClient__CastSpell_x                           0x1400D4CF0
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E4890
#define CharacterZoneClient__Cur_HP_x                              0x1400EA760
#define CharacterZoneClient__Cur_Mana_x                            0x1400EA920
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D8050
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F0FA0
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FF7E0  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D94F0
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E8390
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F2B50
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F1A30
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D9670
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C99B0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400CB3B0
#define CharacterZoneClient__GetHPRegen_x                          0x1400F2170
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400EA3D0
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F2DE0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D96F0
#define CharacterZoneClient__GetManaRegen_x                        0x1400F3B60
#define CharacterZoneClient__GetModCap_x                           0x1400FAF90
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D9980
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D9B50
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CE540
#define CharacterZoneClient__HasSkill_x                            0x1400F6B30
#define CharacterZoneClient__HitBySpell_x                          0x1400DA5E0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DDF50
#define CharacterZoneClient__MakeMeVisible_x                       0x1400FAA70
#define CharacterZoneClient__Max_Endurance_x                       0x1402E76A0  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400FADC0
#define CharacterZoneClient__Max_Mana_x                            0x1402E78C0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400FB220
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E13E0
#define CharacterZoneClient__SpellDuration_x                       0x1400E2110
#define CharacterZoneClient__TotalEffect_x                         0x1400E3470
#define CharacterZoneClient__UseSkill_x                            0x140100760


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140370900

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14037ACA0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140376B20
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14037A720

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14037D410

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140ABA940

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403A00F0
#define CChatWindowManager__InitContextMenu_x                      0x1403A0280
#define CChatWindowManager__FreeChatWindow_x                       0x14039F160
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403A7EC0
#define CChatWindowManager__CreateChatWindow_x                     0x14039EB90

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140108CC0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403A8F10
#define CChatWindow__Clear_x                                       0x1403A9ED0
#define CChatWindow__WndNotification_x                             0x1403AB0C0
#define CChatWindow__AddHistory_x                                  0x1403A99D0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405C3200
#define CContextMenu__RemoveMenuItem_x                             0x1405C35F0
#define CContextMenu__RemoveAllMenuItems_x                         0x1405C35C0
#define CContextMenu__CheckMenuItem_x                              0x1405C3430
#define CContextMenu__SetMenuItem_x                                0x1405C3610
#define CContextMenu__AddSeparator_x                               0x1405C3370

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405B50F0
#define CContextMenuManager__RemoveMenu_x                          0x1405B56D0
#define CContextMenuManager__PopupMenu_x                           0x1405B5410
#define CContextMenuManager__Flush_x                               0x1405B5170
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403B78E0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1406911F0
#define CChatService__GetFriendName_x                              0x140691200

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405A6050
#define CComboWnd__Draw_x                                          0x1405A6150
#define CComboWnd__GetCurChoice_x                                  0x1405A6430  // unused
#define CComboWnd__GetListRect_x                                   0x1405A64D0
#define CComboWnd__InsertChoice_x                                  0x1405A6810
#define CComboWnd__SetColors_x                                     0x1405A6BA0
#define CComboWnd__SetChoice_x                                     0x1405A6B60
#define CComboWnd__GetItemCount_x                                  0x1405A64C0
#define CComboWnd__GetCurChoiceText_x                              0x1405A6470  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405A6400
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405A68D0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403B5600
#define CContainerWnd__SetContainer_x                              0x14040D030
#define CContainerWnd__vftable_x                                   0x1409D14E0

// CDisplay
#define CDisplay__cameraType_x                                     0x140DAD43C
#define CDisplay__ZoneMainUI_x                                     0x1405DD2B0
#define CDisplay__PreZoneMainUI_x                                  0x14019A580
#define CDisplay__CleanGameUI_x                                    0x14018C6F0
#define CDisplay__GetClickedActor_x                                0x1401908B0
#define CDisplay__GetUserDefinedColor_x                            0x140191520
#define CDisplay__InitCharSelectUI_x                               0x1401917D0
#define CDisplay__ReloadUI_x                                       0x14019C870
#define CDisplay__RestartUI_x                                      0x1401FC7F0
#define CDisplay__WriteTextHD2_x                                   0x1401A3880
#define CDisplay__TrueDistance_x                                   0x1401A3530
#define CDisplay__SetViewActor_x                                   0x14019FD70
#define CDisplay__GetFloorHeight_x                                 0x140190B10
#define CDisplay__ToggleScreenshotMode_x                           0x1401A3020
#define CDisplay__RealRender_World_x                               0x14019BC50

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405E74E0
#define CEditWnd__DrawCaret_x                                      0x1405D9010  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405D94D0
#define CEditWnd__GetCaretPt_x                                     0x1405D9750  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405D9790
#define CEditWnd__GetDisplayString_x                               0x1405D9A00
#define CEditWnd__GetHorzOffset_x                                  0x1405D9C40
#define CEditWnd__GetLineForPrintableChar_x                        0x1405D9D90
#define CEditWnd__GetSelStartPt_x                                  0x1405DA070  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405D9EC0
#define CEditWnd__PointFromPrintableChar_x                         0x1405DAC20
#define CEditWnd__ReplaceSelection_x                               0x1405DAFD0
#define CEditWnd__SelectableCharFromPoint_x                        0x1405DB470
#define CEditWnd__SetEditable_x                                    0x1405DB700
#define CEditWnd__SetWindowText_x                                  0x1405DB730

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14026FB00
#define CEverQuest__ClickedPlayer_x                                0x140264BB0
#define CEverQuest__CreateTargetIndicator_x                        0x140265470
#define CEverQuest__DoTellWindow_x                                 0x1401089D0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1401092A0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x1402714F0
#define CEverQuest__dsp_chat_x                                     0x140108410 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x14029C560
#define CEverQuest__Emote_x                                        0x140271EE0
#define CEverQuest__GetBodyTypeDesc_x                              0x140272CC0
#define CEverQuest__GetClassDesc_x                                 0x140272D20
#define CEverQuest__GetClassThreeLetterCode_x                      0x1402730F0
#define CEverQuest__GetDeityDesc_x                                 0x1402733A0
#define CEverQuest__GetLangDesc_x                                  0x1402737D0
#define CEverQuest__GetRaceDesc_x                                  0x140273B70
#define CEverQuest__InterpretCmd_x                                 0x1402754E0
#define CEverQuest__LeftClickedOnPlayer_x                          0x14028A6D0
#define CEverQuest__LMouseUp_x                                     0x140276F40
#define CEverQuest__RightClickedOnPlayer_x                         0x140287EC0
#define CEverQuest__RMouseUp_x                                     0x140281580
#define CEverQuest__SetGameState_x                                 0x14028D640
#define CEverQuest__UPCNotificationFlush_x                         0x140292FA0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140276BA0
#define CEverQuest__ReportSuccessfulHeal_x                         0x140282950
#define CEverQuest__ReportSuccessfulHit_x                          0x140283770

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403CAC40

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C32A0
#define CGuild__GetGuildName_x                                     0x1400C32E0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403EE0E0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402AE720
#define CHotButton__SetCheck_x                                     0x1402AE9F0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140405D40
#define CInvSlotMgr__MoveItem_x                                    0x140405F20
#define CInvSlotMgr__SelectSlot_x                                  0x140407950

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x140402F30
#define CInvSlot__SliderComplete_x                                 0x140404480
#define CInvSlot__GetItemBase_x                                    0x1403FE8D0
#define CInvSlot__UpdateItem_x                                     0x140404940

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x140408CE0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x14042A1F0
#define CItemDisplayWnd__UpdateStrings_x                           0x14042CDE0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x1404269E0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140428340
#define CItemDisplayWnd__RequestConvertItem_x                      0x140429600

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404F3C90
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404F5A20

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140530A20

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1404230C0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140153810

// CLabel
#define CLabel__UpdateText_x                                       0x1404341D0

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405A99E0
#define CListWnd__dCListWnd_x                                      0x1405A9E30
#define CListWnd__vftable_x                                        0x140AB8A90
#define CListWnd__AddColumn_x                                      0x1405AA4D0
#define CListWnd__AddColumn1_x                                     0x1405AA570
#define CListWnd__AddLine_x                                        0x1405AA6D0
#define CListWnd__AddString_x                                      0x1405AAC60
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405AB1D0
#define CListWnd__CalculateVSBRange_x                              0x1405AB4B0
#define CListWnd__ClearSel_x                                       0x1405AB660
#define CListWnd__ClearAllSel_x                                    0x1405AB600
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405AB6C0
#define CListWnd__Compare_x                                        0x1405AB870
#define CListWnd__Draw_x                                           0x1405ABD40
#define CListWnd__DrawColumnSeparators_x                           0x1405AC8F0
#define CListWnd__DrawHeader_x                                     0x1405AC9B0
#define CListWnd__DrawItem_x                                       0x1405AD080
#define CListWnd__DrawLine_x                                       0x1405ADA00
#define CListWnd__DrawSeparator_x                                  0x1405ADEC0
#define CListWnd__EnableLine_x                                     0x1405AE2E0
#define CListWnd__EnsureVisible_x                                  0x1405AE340
#define CListWnd__ExtendSel_x                                      0x1405AE440
#define CListWnd__GetColumnMinWidth_x                              0x1405AE7D0
#define CListWnd__GetColumnWidth_x                                 0x1405AE850
#define CListWnd__GetCurSel_x                                      0x1405AE950
#define CListWnd__GetItemData_x                                    0x1405AECD0
#define CListWnd__GetItemHeight_x                                  0x1405AED10
#define CListWnd__GetItemRect_x                                    0x1405AEF30
#define CListWnd__GetItemText_x                                    0x1405AF1D0
#define CListWnd__GetSelList_x                                     0x1405AF420
#define CListWnd__GetSeparatorRect_x                               0x1405AF610
#define CListWnd__InsertLine_x                                     0x1405B0A60
#define CListWnd__RemoveLine_x                                     0x1405B10D0
#define CListWnd__SetColors_x                                      0x1405B1490
#define CListWnd__SetColumnJustification_x                         0x1405B14B0
#define CListWnd__SetColumnLabel_x                                 0x1405B1530
#define CListWnd__SetColumnWidth_x                                 0x1405B16D0
#define CListWnd__SetCurSel_x                                      0x1405B17A0
#define CListWnd__SetItemColor_x                                   0x1405B1A10
#define CListWnd__SetItemData_x                                    0x1405B1AB0
#define CListWnd__SetItemText_x                                    0x1405B1CF0
#define CListWnd__Sort_x                                           0x1405B2100
#define CListWnd__ToggleSel_x                                      0x1405B2270
#define CListWnd__SetColumnsSizable_x                              0x1405B1720
#define CListWnd__SetItemWnd_x                                     0x1405B1E20
#define CListWnd__GetItemWnd_x                                     0x1405AF3B0
#define CListWnd__SetItemIcon_x                                    0x1405B1AF0
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405AAFA0
#define CListWnd__SetVScrollPos_x                                  0x1405B2060

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140447490

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A1E6B0
#define MapViewMap__Clear_x                                        0x140449010
#define MapViewMap__SetZoom_x                                      0x14044F680
#define MapViewMap__HandleLButtonDown_x                            0x14044C1A0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140470DB0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x1404773F0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140477B90
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14047B3E0
#define CMerchantWnd__SelectBuySellSlot_x                          0x14047A730
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14047F690

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14066C400
#define CPacketScrambler__hton_x                                   0x14066C3F0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405D2900
#define CSidlManagerBase__FindAnimation1_x                         0x1405D2840
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405D2F30
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405D2CE0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405D1C30
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405D1BC0
#define CSidlManagerBase__CreateXWnd_x                             0x1405D1200

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404E6B60
#define CSidlManager__CreateXWnd_x                                 0x1404E6D20

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405975A0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x1405976C0
#define CSidlScreenWnd__ConvertToRes_x                             0x1405E1A20 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x140597840
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x140596CD0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x140596DA0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x140596FB0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x140597F30
#define CSidlScreenWnd__EnableIniStorage_x                         0x140598160
#define CSidlScreenWnd__GetChildItem_x                             0x140598300
#define CSidlScreenWnd__GetSidlPiece_x                             0x140598550
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405A25E0 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405988C0
#define CSidlScreenWnd__LoadIniInfo_x                              0x140598C00
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405994D0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140599ED0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F06D88
#define CSidlScreenWnd__StoreIniInfo_x                             0x14059A560
#define CSidlScreenWnd__StoreIniVis_x                              0x14059AD50
#define CSidlScreenWnd__vftable_x                                  0x140AB7D18
#define CSidlScreenWnd__WndNotification_x                          0x14059ADA0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14032A180 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14032A620 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14032A550
#define CSkillMgr__IsActivatedSkill_x                              0x14032A9D0
#define CSkillMgr__IsCombatSkill_x                                 0x14032AA10
#define CSkillMgr__GetSkillTimerDuration_x                         0x14032A940
#define CSkillMgr__GetSkillLastUsed_x                              0x14032A5A0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405B2BC0
#define CSliderWnd__SetValue_x                                     0x1405B33D0
#define CSliderWnd__SetNumTicks_x                                  0x1405B3250

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404ED290

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405B7B50
#define CStmlWnd__CalculateHSBRange_x                              0x1405A1F90
#define CStmlWnd__CalculateVSBRange_x                              0x1405B89F0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405B94E0
#define CStmlWnd__ForceParseNow_x                                  0x1405B9580
#define CStmlWnd__GetVisibleText_x                                 0x1405B9C50
#define CStmlWnd__MakeStmlColorTag_x                               0x1405BB990
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405BB9D0
#define CStmlWnd__SetSTMLText_x                                    0x1405C29A0
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405C2B50
#define CStmlWnd__UpdateHistoryString_x                            0x1405C2EE0

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405B3780
#define CTabWnd__DrawCurrentPage_x                                 0x1405B3820
#define CTabWnd__DrawTab_x                                         0x1405B3BF0
#define CTabWnd__GetTabRect_x                                      0x1405B4260
#define CTabWnd__InsertPage_x                                      0x1405B4530
#define CTabWnd__RemovePage_x                                      0x1405B47C0
#define CTabWnd__SetPage_x                                         0x1405B4920
#define CTabWnd__UpdatePage_x                                      0x1405B4C20

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405DBB60
#define CPageWnd__SetTabText_x                                     0x1405DBBD0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BC8C0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BCCD0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405CA2B0
#define CTextureFont__DrawWrappedText1_x                           0x1405CA1C0
#define CTextureFont__DrawWrappedText2_x                           0x1405CA3E0
#define CTextureFont__GetTextExtent_x                              0x1405CA790
#define CTextureFont__GetHeight_x                                  0x1405CA750

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405E0180

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405968B0

// CXStr
#define CXStr__gFreeLists_x                                        0x140D35F00
#define CXStr__gCXStrAccess_x                                      0x140F068E8

// CXWnd
#define CXWnd__BringToTop_x                                        0x14059D5F0
#define CXWnd__ClrFocus_x                                          0x14059D8E0
#define CXWnd__Destroy_x                                           0x14059DA60
#define CXWnd__DoAllDrawing_x                                      0x14059DB70
#define CXWnd__DrawColoredRect_x                                   0x14059E340
#define CXWnd__DrawTooltip_x                                       0x14059F9C0
#define CXWnd__DrawTooltipAtPoint_x                                0x14059FA70
#define CXWnd__GetChildItem_x                                      0x1405A0380
#define CXWnd__GetChildWndAt_x                                     0x1405A0430
#define CXWnd__GetClientRect_x                                     0x1405A06F0
#define CXWnd__GetClientClipRect_x                                 0x1405A05A0
#define CXWnd__GetRelativeRect_x                                   0x1405A20D0
#define CXWnd__GetScreenClipRect_x                                 0x1405A21E0
#define CXWnd__GetScreenRect_x                                     0x1405A2360
#define CXWnd__GetTooltipRect_x                                    0x1405A24E0
#define CXWnd__IsActive_x                                          0x1405A2AA0
#define CXWnd__IsDescendantOf_x                                    0x1405A2AD0
#define CXWnd__IsReallyVisible_x                                   0x1405A2B40
#define CXWnd__IsType_x                                            0x1405A2B80
#define CXWnd__Minimize_x                                          0x1405A2C70
#define CXWnd__ProcessTransition_x                                 0x1405A3B50
#define CXWnd__Resize_x                                            0x1405A3C70
#define CXWnd__Right_x                                             0x1405A3D10
#define CXWnd__SetFocus_x                                          0x1405A40D0
#define CXWnd__SetFont_x                                           0x1405A4120
#define CXWnd__SetKeyTooltip_x                                     0x1405A4220
#define CXWnd__SetMouseOver_x                                      0x1405A4360
#define CXWnd__SetParent_x                                         0x1405A43E0
#define CXWnd__StartFade_x                                         0x1405A4830
#define CXWnd__vftable_x                                           0x140AB82F0
#define CXWnd__CXWnd_x                                             0x14059C1C0
#define CXWnd__dCXWnd_x                                            0x14059CAE0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405E6C60

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405C47C0
#define CXWndManager__DrawCursor_x                                 0x1405C4AA0
#define CXWndManager__DrawWindows_x                                0x1405C4D00
#define CXWndManager__GetKeyboardFlags_x                           0x1405C53D0
#define CXWndManager__HandleKeyboardMsg_x                          0x1405C5410
#define CXWndManager__RemoveWnd_x                                  0x1405C8970

// CDBStr
#define CDBStr__GetString_x                                        0x14018A8B0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x140676250

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D0CD0
#define CCharacterListWnd__EnterWorld_x                            0x1400CFCE0
#define CCharacterListWnd__Quit_x                                  0x1400D0CB0
#define CCharacterListWnd__UpdateList_x                            0x1400D1B30

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x1406437B0
#define ItemBase__CreateItemTagString_x                            0x140644230
#define ItemBase__GetImageNum_x                                    0x1406467A0
#define ItemBase__GetItemValue_x                                   0x140648250
#define ItemBase__IsEmpty_x                                        0x140649E50
#define ItemBase__IsKeyRingItem_x                                  0x14064A580
#define ItemBase__ValueSellMerchant_x                              0x14064E7F0
#define ItemClient__CanDrop_x                                      0x1402B0FF0
#define ItemClient__CanGoInBag_x                                   0x1402B1120
#define ItemClient__CreateItemClient_x                             0x1402B13A0
#define ItemClient__dItemClient_x                                  0x1402B0E60

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401AA170
#define EQ_LoadingS__Array_x                                       0x140D22230

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14065B0E0
#define PcBase__GetCombatAbility_x                                 0x14065B7D0
#define PcBase__GetCombatAbilityTimer_x                            0x14065B870
#define PcBase__GetItemContainedRealEstateIds_x                    0x14065C010
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14065CB50
#define PcClient__AlertInventoryChanged_x                          0x1402D3550
#define PcClient__GetConLevel_x                                    0x1402D3B70  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402D62F0
#define PcClient__HasLoreItem_x                                    0x1402D7380
#define PcZoneClient__GetItemRecastTimer_x                         0x1402E4B50
#define PcZoneClient__RemoveMyAffect_x                             0x1402E87E0

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x14021B210  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x14021B3C0  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x14021B520  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x14021B460  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x1402560F0  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x1401850D0

// PlayerClient
#define PlayerBase__CanSee_x                                       0x14062FB90
#define PlayerBase__CanSee1_x                                      0x14062FC60
#define PlayerBase__GetVisibilityLineSegment_x                     0x140630140
#define PlayerBase__HasProperty_x                                  0x140630310
#define PlayerBase__IsTargetable_x                                 0x1406303D0
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402F64F0
#define PlayerClient__GetPcClient_x                                0x1402F9010
#define PlayerClient__PlayerClient_x                               0x1402EE850
#define PlayerClient__SetNameSpriteState_x                         0x1402FC730
#define PlayerClient__SetNameSpriteTint_x                          0x1402FD6F0
#define PlayerZoneClient__ChangeHeight_x                           0x14030C000
#define PlayerZoneClient__DoAttack_x                               0x14030CD10
#define PlayerZoneClient__GetLevel_x                               0x140310450
#define PlayerZoneClient__IsValidTeleport_x                        0x140258E80
#define PlayerZoneClient__LegalPlayerRace_x                        0x140198E00

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x140305720  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1403057D0  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1403058D0
#define PlayerManagerClient__CreatePlayer_x                        0x1403051F0
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x14062F750

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402B6250
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402B5E50
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402B5EC0
#define KeypressHandler__ClearCommandStateArray_x                  0x1402B61E0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402B6370
#define KeypressHandler__HandleKeyUp_x                             0x1402B6490
#define KeypressHandler__SaveKeymapping_x                          0x1402B60F0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140673D70  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x14066DB40

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402DD920  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402E2C90
#define PcZoneClient__GetPcSkillLimit_x                            0x1402E52E0
#define PcZoneClient__RemovePetEffect_x                            0x1402E8AC0
#define PcZoneClient__HasAlternateAbility_x                        0x1402E5EC0
#define PcZoneClient__CanEquipItem_x                               0x1402E0FA0
#define PcZoneClient__GetItemByID_x                                0x1402E3BB0
#define PcZoneClient__RemoveBuffEffect_x                           0x1402E8660
#define PcZoneClient__BandolierSwap_x                              0x1402DFFF0

// Doors
#define EQSwitch__UseSwitch_x                                      0x14025D9B0

// IconCache
#define IconCache__GetIcon_x                                       0x1403BFD70

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403B43B0
#define CContainerMgr__CloseContainer_x                            0x1403B3CF0
#define CContainerMgr__OpenExperimentContainer_x                   0x1403B4730

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404AACF0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402A8A20

// CLootWnd
#define CLootWnd__LootAll_x                                        0x14043B4B0
#define CLootWnd__RequestLootSlot_x                                0x14043C4E0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401D9700
#define EQ_Spell__SpellAffects_x                                   0x1401DA9E0
#define EQ_Spell__SpellAffectBase_x                                0x1401DA940
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D9CE0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D9C90
#define EQ_Spell__IsSPAStacking_x                                  0x1401DA610
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401DA1C0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401D9A90

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C1DE0

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x140507A50
#define CTargetWnd__RefreshTargetBuffs_x                           0x140507160
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x140506960

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x14050F0E0  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140181A70
#define CTaskManager__GetTaskStatus_x                              0x140181B80
#define CTaskManager__GetElementDescription_x                      0x140181700

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401D7A20
#define EqSoundManager__PlayScriptMp3_x                            0x1401D6860
#define EqSoundManager__SoundAssistPlay_x                          0x14032F7C0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x14032FB00  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405A5600
#define CTextureAnimation__SetCurCell_x                            0x1405A5910

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402A6C20

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x14068E8C0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x14068E940
#define CharacterBase__IsExpansionFlag_x                           0x1401FC020

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140390D50
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140391750
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140392CA0

// messages
#define msg_spell_worn_off_x                                       0x140211A20
#define msg_new_text_x                                             0x14020D1D0
#define __msgTokenTextParam_x                                      0x1402048C0
#define msgTokenText_x                                             0x1402047D0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x1403313F0
#define SpellManager__GetSpellByGroupAndRank_x                     0x140331310

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x14063EA90

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140434920

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403B9110
#define CCursorAttachment__IsOkToActivate_x                        0x1403BC3C0
#define CCursorAttachment__RemoveAttachment_x                      0x1403BC670
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405DE620
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405DE810
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405DE820

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x14014E9C0
#define CFindItemWnd__Update_x                                     0x14014F360
#define CFindItemWnd__PickupSelectedItem_x                         0x140148E00

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x140158470
#define LootFiltersManager__GetItemFilterData_x                    0x140158F80
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140159820
#define LootFiltersManager__SetItemLootFilter_x                    0x140159AD0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14048D750

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x140329D40
#define CResolutionHandler__UpdateResolution_x                     0x14058ACF0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403B0690

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x140692CC0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x140692BB0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403D7020
#define CGroupWnd__UpdateDisplay_x                                 0x1403D6C00

// ItemBase
#define ItemBase__IsLore_x                                         0x14064A6B0
#define ItemBase__IsLoreEquipped_x                                 0x14064A740

#define MultipleItemMoveManager__ProcessMove_x                     0x1402C90B0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140256250
#define EQPlacedItemManager__GetItemByGuid_x                       0x1402561E0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140256220

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140324160

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140126650
#define FactionManagerClient__HandleFactionMessage_x               0x140126A00
#define FactionManagerClient__GetFactionStanding_x                 0x140125E20
#define FactionManagerClient__GetMaxFaction_x                      0x140125E20
#define FactionManagerClient__GetMinFaction_x                      0x140125CD0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AEE20

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140131E00

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401B2AF0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401B1E70
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401B2910  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401B2890  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x1403366F0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140324160

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x14021B5B0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x14059B390

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140086990

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140347FC0

// AchievementManager
#define AchievementManager__Instance_x                             0x14008EB50

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x140676DD0
#define FreeToPlayClient__RestrictionInfo_x                        0x140ACCA60

// UdpConnection
#define UdpConnection__GetStats_x                                  0x14053DAE0

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x140827610
#define CGFScreenWnd__CGFScreenWnd_x                               0x140071300
#define CGFScreenWnd__CGFScreenWnd1_x                              0x140071490
#define CGFScreenWnd__dCGFScreenWnd_x                              0x140071640

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
