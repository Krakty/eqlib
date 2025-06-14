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

#define __ClientDate                                               20250609u
#define __ExpectedVersionDate                                     "Jun  9 2025"
#define __ExpectedVersionTime                                     "19:28:56"
#define __ActualVersionDate_x                                      0x14095D0D0
#define __ActualVersionTime_x                                      0x14095D0C0
#define __ActualVersionBuild_x                                     0x1408F2B80

// Memory Protection
#define __MemChecker0_x                                            0x1402BC340
#define __MemChecker1_x                                            0x140581F10
#define __MemChecker4_x                                            0x140289A30
#define __EncryptPad0_x                                            0x140D2CE80

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E65AE0
#define instEQZoneInfo_x                                           0x140E65CD4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x14021ECE0
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
#define __allowslashcommand_x                                      0x140248A00
#define __CastRay_x                                                0x140240CA0
#define __CastRay2_x                                               0x1402409A0
#define __compress_block_x                                         0x1405374B0
#define __ConvertItemTags_x                                        0x140241100
#define __CleanItemTags_x                                          0x14008A2D0
#define __CreateCascadeMenuItems_x                                 0x14018D560
#define __decompress_block_x                                       0x14057D720
#define __DoesFileExist_x                                          0x140585DC0
#define __EQGetTime_x                                              0x1405824C0
#define __ExecuteCmd_x                                             0x1402164E0
#define __FixHeading_x                                             0x14063D220
#define __FlushDxKeyboard_x                                        0x140340B60
#define __get_bearing_x                                            0x14024AC30
#define __get_melee_range_x                                        0x14024AD20
#define __GetAnimationCache_x                                      0x1403BF970
#define __GetGaugeValueFromEQ_x                                    0x1404F6E90
#define __GetLabelFromEQ_x                                         0x1404F8490
#define __GetXTargetType_x                                         0x14063E500   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14063D2A0
#define __HelpPath_x                                               0x140EDAF50   // Why?
#define __NewUIINI_x                                               0x140503EB0   // Why?
#define __ProcessDeviceEvents_x                                    0x14028A040
#define __ProcessGameEvents_x                                      0x14027ED00
#define __ProcessKeyboardEvents_x                                  0x1403422B0
#define __ProcessMouseEvents_x                                     0x1402803D0
#define __SaveColors_x                                             0x14019D580
#define __STMLToText_x                                             0x14058E000
#define __WndProc_x                                                0x14033F330
#define CMemoryMappedFile__SetFile_x                               0x1407EB080
#define DrawNetStatus_x                                            0x1402CA910
#define Util__FastTime_x                                           0x14057E640
#define __eq_delete_x                                              0x1406B7094
#define __eq_new_x                                                 0x1406B7050
#define __CopyLayout_x                                             0x1402B8750
#define __ThrottleFrameRate_x                                      0x14026E3DA
#define __ThrottleFrameRateEnd_x                                   0x14026E43A

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140351CD0
#define CAAWnd__Update_x                                           0x140351FD0
#define CAAWnd__UpdateSelected_x                                   0x140353020

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AC820
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A5200
#define CAdvancedLootWnd__AddPlayerToList_x                        0x14083FE48
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AD150

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401A86F0
#define AltAdvManager__IsAbilityReady_x                            0x1401A8B80
#define AltAdvManager__GetAAById_x                                 0x1401A7FC0
#define AltAdvManager__CanTrainAbility_x                           0x1401A7DB0
#define AltAdvManager__CanSeeAbility_x                             0x1401A7A70

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D31B0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D4010
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D4260
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400E8A60
#define CharacterZoneClient__CanUseItem_x                          0x1400E9020
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D4C30
#define CharacterZoneClient__CastSpell_x                           0x1400D4CD0
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E4860
#define CharacterZoneClient__Cur_HP_x                              0x1400EA730
#define CharacterZoneClient__Cur_Mana_x                            0x1400EA8F0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D8030
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F0F60
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FF7A0  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D94D0
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E8360
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F2B10
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F19F0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D9650
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C9990
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400CB390
#define CharacterZoneClient__GetHPRegen_x                          0x1400F2130
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400EA3A0
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F2DA0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D96D0
#define CharacterZoneClient__GetManaRegen_x                        0x1400F3B20
#define CharacterZoneClient__GetModCap_x                           0x1400FAF50
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D9960
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D9B30
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CE520
#define CharacterZoneClient__HasSkill_x                            0x1400F6AF0
#define CharacterZoneClient__HitBySpell_x                          0x1400DA5C0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DDF30
#define CharacterZoneClient__MakeMeVisible_x                       0x1400FAA30
#define CharacterZoneClient__Max_Endurance_x                       0x1402E7030  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400FAD80
#define CharacterZoneClient__Max_Mana_x                            0x1402E7250  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400FB1E0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E13C0
#define CharacterZoneClient__SpellDuration_x                       0x1400E20F0
#define CharacterZoneClient__TotalEffect_x                         0x1400E3440
#define CharacterZoneClient__UseSkill_x                            0x140100720


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140370530

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14037A8A0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140376730
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14037A320

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14037D020

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140ABA940

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x14039FD50
#define CChatWindowManager__InitContextMenu_x                      0x14039FEE0
#define CChatWindowManager__FreeChatWindow_x                       0x14039EDC0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403A7B20
#define CChatWindowManager__CreateChatWindow_x                     0x14039E7F0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140108C60

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403A8B70
#define CChatWindow__Clear_x                                       0x1403A9B20
#define CChatWindow__WndNotification_x                             0x1403AAD10
#define CChatWindow__AddHistory_x                                  0x1403A9620

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405C2FC0
#define CContextMenu__RemoveMenuItem_x                             0x1405C33B0
#define CContextMenu__RemoveAllMenuItems_x                         0x1405C3380
#define CContextMenu__CheckMenuItem_x                              0x1405C31F0
#define CContextMenu__SetMenuItem_x                                0x1405C33D0
#define CContextMenu__AddSeparator_x                               0x1405C3130

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405B4EA0
#define CContextMenuManager__RemoveMenu_x                          0x1405B5470
#define CContextMenuManager__PopupMenu_x                           0x1405B51B0
#define CContextMenuManager__Flush_x                               0x1405B4F20
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403B7500

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x140691240
#define CChatService__GetFriendName_x                              0x140691250

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405A5DA0
#define CComboWnd__Draw_x                                          0x1405A5EA0
#define CComboWnd__GetCurChoice_x                                  0x1405A6180  // unused
#define CComboWnd__GetListRect_x                                   0x1405A6220
#define CComboWnd__InsertChoice_x                                  0x1405A6560
#define CComboWnd__SetColors_x                                     0x1405A68F0
#define CComboWnd__SetChoice_x                                     0x1405A68B0
#define CComboWnd__GetItemCount_x                                  0x1405A6210
#define CComboWnd__GetCurChoiceText_x                              0x1405A61C0  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405A6150
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405A6620

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403B5220
#define CContainerWnd__SetContainer_x                              0x14040CBF0
#define CContainerWnd__vftable_x                                   0x1409D14E0

// CDisplay
#define CDisplay__cameraType_x                                     0x140DAD43C
#define CDisplay__ZoneMainUI_x                                     0x1405DD0B0
#define CDisplay__PreZoneMainUI_x                                  0x14019A4B0
#define CDisplay__CleanGameUI_x                                    0x14018C620
#define CDisplay__GetClickedActor_x                                0x1401907E0
#define CDisplay__GetUserDefinedColor_x                            0x140191450
#define CDisplay__InitCharSelectUI_x                               0x140191700
#define CDisplay__ReloadUI_x                                       0x14019C7A0
#define CDisplay__RestartUI_x                                      0x1401FC230
#define CDisplay__WriteTextHD2_x                                   0x1401A37B0
#define CDisplay__TrueDistance_x                                   0x1401A3460
#define CDisplay__SetViewActor_x                                   0x14019FCA0
#define CDisplay__GetFloorHeight_x                                 0x140190A40
#define CDisplay__ToggleScreenshotMode_x                           0x1401A2F50
#define CDisplay__RealRender_World_x                               0x14019BB80

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405E72E0
#define CEditWnd__DrawCaret_x                                      0x1405D8DA0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405D9250
#define CEditWnd__GetCaretPt_x                                     0x1405D94D0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405D9510
#define CEditWnd__GetDisplayString_x                               0x1405D9780
#define CEditWnd__GetHorzOffset_x                                  0x1405D99C0
#define CEditWnd__GetLineForPrintableChar_x                        0x1405D9B10
#define CEditWnd__GetSelStartPt_x                                  0x1405D9DF0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405D9C40
#define CEditWnd__PointFromPrintableChar_x                         0x1405DA9A0
#define CEditWnd__ReplaceSelection_x                               0x1405DAD50
#define CEditWnd__SelectableCharFromPoint_x                        0x1405DB1F0
#define CEditWnd__SetEditable_x                                    0x1405DB480
#define CEditWnd__SetWindowText_x                                  0x1405DB4B0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14026F4F0
#define CEverQuest__ClickedPlayer_x                                0x1402645A0
#define CEverQuest__CreateTargetIndicator_x                        0x140264E60
#define CEverQuest__DoTellWindow_x                                 0x140108970 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140109240 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140270EE0
#define CEverQuest__dsp_chat_x                                     0x1401083B0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x14029BF40
#define CEverQuest__Emote_x                                        0x1402718D0
#define CEverQuest__GetBodyTypeDesc_x                              0x1402726B0
#define CEverQuest__GetClassDesc_x                                 0x140272710
#define CEverQuest__GetClassThreeLetterCode_x                      0x140272AE0
#define CEverQuest__GetDeityDesc_x                                 0x140272D90
#define CEverQuest__GetLangDesc_x                                  0x1402731C0
#define CEverQuest__GetRaceDesc_x                                  0x140273560
#define CEverQuest__InterpretCmd_x                                 0x140274ED0
#define CEverQuest__LeftClickedOnPlayer_x                          0x14028A0B0
#define CEverQuest__LMouseUp_x                                     0x140276930
#define CEverQuest__RightClickedOnPlayer_x                         0x1402878A0
#define CEverQuest__RMouseUp_x                                     0x140280F60
#define CEverQuest__SetGameState_x                                 0x14028D020
#define CEverQuest__UPCNotificationFlush_x                         0x140292980 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140276590
#define CEverQuest__ReportSuccessfulHeal_x                         0x140282330
#define CEverQuest__ReportSuccessfulHit_x                          0x140283150

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403CA8C0

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C3280
#define CGuild__GetGuildName_x                                     0x1400C32C0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403EDD20

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402AE100
#define CHotButton__SetCheck_x                                     0x1402AE3D0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140405950
#define CInvSlotMgr__MoveItem_x                                    0x140405B30
#define CInvSlotMgr__SelectSlot_x                                  0x140407530

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x140402B80
#define CInvSlot__SliderComplete_x                                 0x1404040D0
#define CInvSlot__GetItemBase_x                                    0x1403FE520
#define CInvSlot__UpdateItem_x                                     0x140404580

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1404088C0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140429FF0
#define CItemDisplayWnd__UpdateStrings_x                           0x14042CBB0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140426820
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140428170
#define CItemDisplayWnd__RequestConvertItem_x                      0x140429410

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404F3900
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404F5690

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140530810

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140422EF0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140153790

// CLabel
#define CLabel__UpdateText_x                                       0x140433F90

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405A9730
#define CListWnd__dCListWnd_x                                      0x1405A9B80
#define CListWnd__vftable_x                                        0x140AB8A90
#define CListWnd__AddColumn_x                                      0x1405AA220
#define CListWnd__AddColumn1_x                                     0x1405AA2C0
#define CListWnd__AddLine_x                                        0x1405AA420
#define CListWnd__AddString_x                                      0x1405AA9B0
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405AAF20
#define CListWnd__CalculateVSBRange_x                              0x1405AB200
#define CListWnd__ClearSel_x                                       0x1405AB3A0
#define CListWnd__ClearAllSel_x                                    0x1405AB340
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405AB400
#define CListWnd__Compare_x                                        0x1405AB5C0
#define CListWnd__Draw_x                                           0x1405ABA90
#define CListWnd__DrawColumnSeparators_x                           0x1405AC640
#define CListWnd__DrawHeader_x                                     0x1405AC700
#define CListWnd__DrawItem_x                                       0x1405ACDE0
#define CListWnd__DrawLine_x                                       0x1405AD760
#define CListWnd__DrawSeparator_x                                  0x1405ADC20
#define CListWnd__EnableLine_x                                     0x1405AE040
#define CListWnd__EnsureVisible_x                                  0x1405AE0A0
#define CListWnd__ExtendSel_x                                      0x1405AE1A0
#define CListWnd__GetColumnMinWidth_x                              0x1405AE530
#define CListWnd__GetColumnWidth_x                                 0x1405AE5B0
#define CListWnd__GetCurSel_x                                      0x1405AE6B0
#define CListWnd__GetItemData_x                                    0x1405AEA30
#define CListWnd__GetItemHeight_x                                  0x1405AEA70
#define CListWnd__GetItemRect_x                                    0x1405AEC90
#define CListWnd__GetItemText_x                                    0x1405AEF30
#define CListWnd__GetSelList_x                                     0x1405AF180
#define CListWnd__GetSeparatorRect_x                               0x1405AF370
#define CListWnd__InsertLine_x                                     0x1405B07E0
#define CListWnd__RemoveLine_x                                     0x1405B0E50
#define CListWnd__SetColors_x                                      0x1405B1210
#define CListWnd__SetColumnJustification_x                         0x1405B1230
#define CListWnd__SetColumnLabel_x                                 0x1405B12B0
#define CListWnd__SetColumnWidth_x                                 0x1405B1450
#define CListWnd__SetCurSel_x                                      0x1405B1520
#define CListWnd__SetItemColor_x                                   0x1405B1790
#define CListWnd__SetItemData_x                                    0x1405B1830
#define CListWnd__SetItemText_x                                    0x1405B1A70
#define CListWnd__Sort_x                                           0x1405B1E80
#define CListWnd__ToggleSel_x                                      0x1405B1FF0
#define CListWnd__SetColumnsSizable_x                              0x1405B14A0
#define CListWnd__SetItemWnd_x                                     0x1405B1BA0
#define CListWnd__GetItemWnd_x                                     0x1405AF110
#define CListWnd__SetItemIcon_x                                    0x1405B1870
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405AACF0
#define CListWnd__SetVScrollPos_x                                  0x1405B1DE0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140447230

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A1E6B0
#define MapViewMap__Clear_x                                        0x140448DB0
#define MapViewMap__SetZoom_x                                      0x14044F420
#define MapViewMap__HandleLButtonDown_x                            0x14044BF40

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140470B40  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140477190
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140477930
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14047B160
#define CMerchantWnd__SelectBuySellSlot_x                          0x14047A4A0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14047F410

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14066C470
#define CPacketScrambler__hton_x                                   0x14066C460

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405D2660
#define CSidlManagerBase__FindAnimation1_x                         0x1405D25A0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405D2C90
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405D2A40
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405D19A0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405D1930
#define CSidlManagerBase__CreateXWnd_x                             0x1405D0F70

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404E6800
#define CSidlManager__CreateXWnd_x                                 0x1404E69C0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x140597380
#define CSidlScreenWnd__CalculateVSBRange_x                        0x1405974B0
#define CSidlScreenWnd__ConvertToRes_x                             0x1405E1820 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x140597620
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x140596AB0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x140596B80
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x140596D90
#define CSidlScreenWnd__DrawSidlPiece_x                            0x140597D10
#define CSidlScreenWnd__EnableIniStorage_x                         0x140597F40
#define CSidlScreenWnd__GetChildItem_x                             0x1405980E0
#define CSidlScreenWnd__GetSidlPiece_x                             0x140598330
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405A2350 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405986A0
#define CSidlScreenWnd__LoadIniInfo_x                              0x140598A10
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405992C0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140599CC0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F06D88
#define CSidlScreenWnd__StoreIniInfo_x                             0x14059A340
#define CSidlScreenWnd__StoreIniVis_x                              0x14059AB30
#define CSidlScreenWnd__vftable_x                                  0x140AB7D18
#define CSidlScreenWnd__WndNotification_x                          0x14059AB80

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x140329AC0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140329F60 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x140329E90
#define CSkillMgr__IsActivatedSkill_x                              0x14032A310
#define CSkillMgr__IsCombatSkill_x                                 0x14032A350
#define CSkillMgr__GetSkillTimerDuration_x                         0x14032A280
#define CSkillMgr__GetSkillLastUsed_x                              0x140329EE0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1404F6E60
#define CSliderWnd__SetValue_x                                     0x1405B3160
#define CSliderWnd__SetNumTicks_x                                  0x1405B2FE0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404ECF00

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405B78F0
#define CStmlWnd__CalculateHSBRange_x                              0x1405A1D40
#define CStmlWnd__CalculateVSBRange_x                              0x1405B8810
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405B9280
#define CStmlWnd__ForceParseNow_x                                  0x1405B9320
#define CStmlWnd__GetVisibleText_x                                 0x1405B99F0
#define CStmlWnd__MakeStmlColorTag_x                               0x1405BB750
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405BB790
#define CStmlWnd__SetSTMLText_x                                    0x1405C2760
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405C2910
#define CStmlWnd__UpdateHistoryString_x                            0x1405C2CA0

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405B3530
#define CTabWnd__DrawCurrentPage_x                                 0x1405B35D0
#define CTabWnd__DrawTab_x                                         0x1405B39A0
#define CTabWnd__GetTabRect_x                                      0x1405B4010
#define CTabWnd__InsertPage_x                                      0x1405B42E0
#define CTabWnd__RemovePage_x                                      0x1405B4570
#define CTabWnd__SetPage_x                                         0x1405B46D0
#define CTabWnd__UpdatePage_x                                      0x1405B49D0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405DB910
#define CPageWnd__SetTabText_x                                     0x1405DB980

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BC8B0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BCCC0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405CA030
#define CTextureFont__DrawWrappedText1_x                           0x1405C9F40
#define CTextureFont__DrawWrappedText2_x                           0x1405CA160
#define CTextureFont__GetTextExtent_x                              0x1405CA510
#define CTextureFont__GetHeight_x                                  0x1405CA4D0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405DFF80

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x140596690

// CXStr
#define CXStr__gFreeLists_x                                        0x140D35F00
#define CXStr__gCXStrAccess_x                                      0x140F068E8

// CXWnd
#define CXWnd__BringToTop_x                                        0x14059D410
#define CXWnd__ClrFocus_x                                          0x14059D700
#define CXWnd__Destroy_x                                           0x14059D880
#define CXWnd__DoAllDrawing_x                                      0x14059D980
#define CXWnd__DrawColoredRect_x                                   0x14059E150
#define CXWnd__DrawTooltip_x                                       0x14059F7B0
#define CXWnd__DrawTooltipAtPoint_x                                0x14059F860
#define CXWnd__GetChildItem_x                                      0x1405A0160
#define CXWnd__GetChildWndAt_x                                     0x1405A0220
#define CXWnd__GetClientRect_x                                     0x1405A04D0
#define CXWnd__GetClientClipRect_x                                 0x1405A0390
#define CXWnd__GetRelativeRect_x                                   0x1405A1E60
#define CXWnd__GetScreenClipRect_x                                 0x1405A1F70
#define CXWnd__GetScreenRect_x                                     0x1405A20E0
#define CXWnd__GetTooltipRect_x                                    0x1405A2260
#define CXWnd__IsActive_x                                          0x1405A2810
#define CXWnd__IsDescendantOf_x                                    0x1405A2840
#define CXWnd__IsReallyVisible_x                                   0x1405A28B0
#define CXWnd__IsType_x                                            0x1405A28F0
#define CXWnd__Minimize_x                                          0x1405A29F0
#define CXWnd__ProcessTransition_x                                 0x1405A38C0
#define CXWnd__Resize_x                                            0x1405A39E0
#define CXWnd__Right_x                                             0x1405A3A80
#define CXWnd__SetFocus_x                                          0x1405A3E40
#define CXWnd__SetFont_x                                           0x1405A3E90
#define CXWnd__SetKeyTooltip_x                                     0x1405A3FA0
#define CXWnd__SetMouseOver_x                                      0x1405A40E0
#define CXWnd__SetParent_x                                         0x1405A4160
#define CXWnd__StartFade_x                                         0x1405A4590
#define CXWnd__vftable_x                                           0x140AB82F0
#define CXWnd__CXWnd_x                                             0x14059BFA0
#define CXWnd__dCXWnd_x                                            0x14059C8F0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405E6A60

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405C4570
#define CXWndManager__DrawCursor_x                                 0x1405C4850
#define CXWndManager__DrawWindows_x                                0x1405C4AB0
#define CXWndManager__GetKeyboardFlags_x                           0x1405C5180
#define CXWndManager__HandleKeyboardMsg_x                          0x1405C51C0
#define CXWndManager__RemoveWnd_x                                  0x1405C8700

// CDBStr
#define CDBStr__GetString_x                                        0x14018A7E0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1406762A0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D0CB0
#define CCharacterListWnd__EnterWorld_x                            0x1400CFCC0
#define CCharacterListWnd__Quit_x                                  0x1400D0C90
#define CCharacterListWnd__UpdateList_x                            0x1400D1B10

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x1406435E0
#define ItemBase__CreateItemTagString_x                            0x140644040
#define ItemBase__GetImageNum_x                                    0x1406465E0
#define ItemBase__GetItemValue_x                                   0x140648460
#define ItemBase__IsEmpty_x                                        0x14064A080
#define ItemBase__IsKeyRingItem_x                                  0x14064A7C0
#define ItemBase__ValueSellMerchant_x                              0x14064E9E0
#define ItemClient__CanDrop_x                                      0x1402B09E0
#define ItemClient__CanGoInBag_x                                   0x1402B0B10
#define ItemClient__CreateItemClient_x                             0x1402B0D90
#define ItemClient__dItemClient_x                                  0x1402B0850

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401AA0A0
#define EQ_LoadingS__Array_x                                       0x140D22230

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14065B130
#define PcBase__GetCombatAbility_x                                 0x14065B820
#define PcBase__GetCombatAbilityTimer_x                            0x14065B8C0
#define PcBase__GetItemContainedRealEstateIds_x                    0x14065C060
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14065CBA0
#define PcClient__AlertInventoryChanged_x                          0x1402D2F00
#define PcClient__GetConLevel_x                                    0x1402D3520  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402D5CA0
#define PcClient__HasLoreItem_x                                    0x1402D6D30
#define PcZoneClient__GetItemRecastTimer_x                         0x1402E44F0
#define PcZoneClient__RemoveMyAffect_x                             0x1402E8170

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x14021AC20  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x14021ADD0  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x14021AF30  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x14021AE70  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x140255AF0  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140185010

// PlayerClient
#define PlayerBase__CanSee_x                                       0x14062F990
#define PlayerBase__CanSee1_x                                      0x14062FA60
#define PlayerBase__GetVisibilityLineSegment_x                     0x14062FF40
#define PlayerBase__HasProperty_x                                  0x140630110
#define PlayerBase__IsTargetable_x                                 0x1406301D0
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402F5E80
#define PlayerClient__GetPcClient_x                                0x1402F89A0
#define PlayerClient__PlayerClient_x                               0x1402EE1E0
#define PlayerClient__SetNameSpriteState_x                         0x1402FC0C0
#define PlayerClient__SetNameSpriteTint_x                          0x1402FD080
#define PlayerZoneClient__ChangeHeight_x                           0x14030B990
#define PlayerZoneClient__DoAttack_x                               0x14030C6A0
#define PlayerZoneClient__GetLevel_x                               0x14030FDE0
#define PlayerZoneClient__IsValidTeleport_x                        0x140258880
#define PlayerZoneClient__LegalPlayerRace_x                        0x140198D30

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1403050B0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x140305160  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x140305260
#define PlayerManagerClient__CreatePlayer_x                        0x140304B80
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x14062F550

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402B5C50
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402B5850
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402B58C0
#define KeypressHandler__ClearCommandStateArray_x                  0x1402B5BE0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402B5D70
#define KeypressHandler__HandleKeyUp_x                             0x1402B5E90
#define KeypressHandler__SaveKeymapping_x                          0x1402B5AF0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140673DD0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x14066DBB0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402DD2F0  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402E2630
#define PcZoneClient__GetPcSkillLimit_x                            0x1402E4C80
#define PcZoneClient__RemovePetEffect_x                            0x1402E8450
#define PcZoneClient__HasAlternateAbility_x                        0x1402E5860
#define PcZoneClient__CanEquipItem_x                               0x1402E0950
#define PcZoneClient__GetItemByID_x                                0x1402E3550
#define PcZoneClient__RemoveBuffEffect_x                           0x1402E7FF0
#define PcZoneClient__BandolierSwap_x                              0x1402DF9B0

// Doors
#define EQSwitch__UseSwitch_x                                      0x14025D3B0

// IconCache
#define IconCache__GetIcon_x                                       0x1403BF9A0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403B3FD0
#define CContainerMgr__CloseContainer_x                            0x1403B3910
#define CContainerMgr__OpenExperimentContainer_x                   0x1403B4350

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404AAA50

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402A8400

// CLootWnd
#define CLootWnd__LootAll_x                                        0x14043B270
#define CLootWnd__RequestLootSlot_x                                0x14043C2A0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401D9550
#define EQ_Spell__SpellAffects_x                                   0x1401DA830
#define EQ_Spell__SpellAffectBase_x                                0x1401DA790
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D9CC0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D9C70
#define EQ_Spell__IsSPAStacking_x                                  0x1401DA460
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401DA010
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401D98E0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C1DC0

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1405076B0
#define CTargetWnd__RefreshTargetBuffs_x                           0x140506DC0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1405065D0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x14050ED30  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x1401819C0
#define CTaskManager__GetTaskStatus_x                              0x140181AD0
#define CTaskManager__GetElementDescription_x                      0x140181650

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401D7870
#define EqSoundManager__PlayScriptMp3_x                            0x1401D66B0
#define EqSoundManager__SoundAssistPlay_x                          0x14032F100  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x14032F440  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405A5330
#define CTextureAnimation__SetCurCell_x                            0x1405A5640

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402A6600

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x14068E910
#define CharacterBase__GetItemByGlobalIndex1_x                     0x14068E990
#define CharacterBase__IsExpansionFlag_x                           0x1401FBA60

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x1403909C0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x1403913C0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140392910

// messages
#define msg_spell_worn_off_x                                       0x140211430
#define msg_new_text_x                                             0x14020CBE0
#define __msgTokenTextParam_x                                      0x1402042C0
#define msgTokenText_x                                             0x1402041D0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140330D30
#define SpellManager__GetSpellByGroupAndRank_x                     0x140330C50

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x14063E8E0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1404346E0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403B8D30
#define CCursorAttachment__IsOkToActivate_x                        0x1403BBFF0
#define CCursorAttachment__RemoveAttachment_x                      0x1403BC2A0
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405DE420
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405DE610
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405DE620

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x14014E960
#define CFindItemWnd__Update_x                                     0x14014F300
#define CFindItemWnd__PickupSelectedItem_x                         0x140148DC0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x1401583F0
#define LootFiltersManager__GetItemFilterData_x                    0x140158F00
#define LootFiltersManager__RemoveItemLootFilter_x                 0x1401597A0
#define LootFiltersManager__SetItemLootFilter_x                    0x140159A50

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14048D4F0

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x140329680
#define CResolutionHandler__UpdateResolution_x                     0x14058AAD0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403B02D0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x140692D10  // Rename..?
#define CDistillerInfo__Instance_x                                 0x140692C00  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403D6C80
#define CGroupWnd__UpdateDisplay_x                                 0x1403D6860

// ItemBase
#define ItemBase__IsLore_x                                         0x14064A8F0
#define ItemBase__IsLoreEquipped_x                                 0x14064A980

#define MultipleItemMoveManager__ProcessMove_x                     0x1402C8A70

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140255C50
#define EQPlacedItemManager__GetItemByGuid_x                       0x140255BE0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140255C20

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140323AE0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140126600
#define FactionManagerClient__HandleFactionMessage_x               0x1401269B0
#define FactionManagerClient__GetFactionStanding_x                 0x140125DD0
#define FactionManagerClient__GetMaxFaction_x                      0x140125DD0
#define FactionManagerClient__GetMinFaction_x                      0x140125C80

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AEE30

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140131DB0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401B2A40
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401B1DC0
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401B2860  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401B27E0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x140336030

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140323AE0

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x14021AFC0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x14059B170

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140086990

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140347BF0

// AchievementManager
#define AchievementManager__Instance_x                             0x14008EB50

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x140676E20
#define FreeToPlayClient__RestrictionInfo_x                        0x140ACCA60

// UdpConnection
#define UdpConnection__GetStats_x                                  0x14053D8D0

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x140827610
#define CGFScreenWnd__CGFScreenWnd_x                               0x140071300
#define CGFScreenWnd__CGFScreenWnd1_x                              0x140071490
#define CGFScreenWnd__dCGFScreenWnd_x                              0x140071640

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
