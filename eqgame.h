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

#define __ClientDate                                               20250109u
#define __ExpectedVersionDate                                     "Jan  9 2025"
#define __ExpectedVersionTime                                     "11:26:56"
#define __ActualVersionDate_x                                      0x14094D0F0
#define __ActualVersionTime_x                                      0x14094D0E0
#define __ActualVersionBuild_x                                     0x1408E37C0

// Memory Protection
#define __MemChecker0_x                                            0x1402B3B60
#define __MemChecker1_x                                            0x140575760
#define __MemChecker4_x                                            0x140281BD0
#define __EncryptPad0_x                                            0x140D19E60

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E52A50
#define instEQZoneInfo_x                                           0x140E52C44 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x140218560
#define __gfMaxZoomCameraDistance_x                                0x1408E4A38
#define __gfMaxCameraDistance_x                                    0x140A89958
#define __CurrentSocial_x                                          0x140BD5940 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D11710
#define g_eqCommandStates_x                                        0x140D12780
#define __CommandList_x                                            0x140D129B0
#define __ScreenMode_x                                             0x140D9A36C
#define __gWorld_x                                                 0x140E4CF20
#define __gpbCommandEvent_x                                        0x140E4D474
#define __ServerHost_x                                             0x140E4D668
#define __Guilds_x                                                 0x140E51610
#define __MemCheckBitmask_x                                        0x140E52F8B
#define __MemCheckActive_x                                         0x140E5467D
#define __MouseEventTime_x                                         0x140EC7FC8
#define DI8__MouseState_x                                          0x140ECC128
#define __heqmain_x                                                0x140ECE5B8
#define DI8__Mouse_x                                               0x140ECE5D0
#define __HWnd_x                                                   0x140ECE5D8
#define __Mouse_x                                                  0x140ECE5E0
#define DI8__Keyboard_x                                            0x140ECE600
#define __LoginName_x                                              0x140ECED6C
#define __CurrentMapLabel_x                                        0x140EE2600
#define __LabelCache_x                                             0x140EE31D0
#define __ChatFilterDefs_x                                         0x140A24A30
#define Teleport_Table_Size_x                                      0x140E4D500
#define Teleport_Table_x                                           0x140E4AEF0

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E4D9A0
#define pinstActiveBanker_x                                        0x140E4D3D0
#define pinstActiveCorpse_x                                        0x140E4D3C0
#define pinstActiveGMaster_x                                       0x140E4D3C8
#define pinstActiveMerchant_x                                      0x140E4D3B8
#define pinstAltAdvManager_x                                       0x140D9B1A8
#define pinstCEverQuest_x                                          0x140ECE618
#define pinstCamActor_x                                            0x140D9A358
#define pinstCDBStr_x                                              0x140D99F60
#define pinstCDisplay_x                                            0x140E4AED0
#define pinstControlledPlayer_x                                    0x140E4D460
#define pinstCResolutionHandler_x                                  0x141553978
#define pinstCSidlManager_x                                        0x140EF44D0
#define pinstCXWndManager_x                                        0x140EF44C8
#define instDynamicZone_x                                          0x140E514D0 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E5151E
#define instExpeditionName_x                                       0x140E5155E
#define pinstDZMember_x                                            0x140E515E8
#define pinstDZTimerInfo_x                                         0x140E515F0
#define pinstEqLogin_x                                             0x140ECE6B0
#define instTribute_x                                              0x140D0CD50
#define pinstDeviceInputProxy_x                                    0x140E52AAC
#define pinstEQSoundManager_x                                      0x140D9B528
#define pinstEQSpellStrings_x                                      0x140D7EB30
#define pinstSGraphicsEngine_x                                     0x1415536F8
#define pinstLocalPC_x                                             0x140E4AEE0
#define pinstLocalPlayer_x                                         0x140E4D3B0
#define pinstCMercenaryClientManager_x                             0x140EC98A8
#define pinstModelPlayer_x                                         0x140E4D3E0
#define pinstRenderInterface_x                                     0x141553710
#define pinstSkillMgr_x                                            0x140ECB548
#define pinstSpawnManager_x                                        0x140EC9C70
#define pinstSpellManager_x                                        0x140ECB5B0
#define pinstStringTable_x                                         0x140E4CF18
#define pinstSwitchManager_x                                       0x140E4AE50
#define pinstTarget_x                                              0x140E4D458
#define pinstTaskMember_x                                          0x140D0CD40 // Part of g_taskManager
#define pinstTradeTarget_x                                         0x140E4D3D8
#define instTributeActive_x                                        0x140D0CD79
#define pinstViewActor_x                                           0x140D9A350
#define pinstWorldData_x                                           0x140E4D558
#define pinstPlayerPath_x                                          0x140EC9C98
#define pinstTargetIndicator_x                                     0x140ECB660
#define EQObject_Top_x                                             0x140E4D988

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140EDF758
#define pinstCContainerMgr_x                                       0x140D9A398
#define pinstCContextMenuManager_x                                 0x140EF41B0
#define pinstCInvSlotMgr_x                                         0x140D9A378
#define pinstCItemDisplayManager_x                                 0x140EE21D0
#define pinstCPopupWndManager_x                                    0x140EE2A60
#define pinstCSpellDisplayMgr_x                                    0x140EE30B0
#define pinstCTaskManager_x                                        0x140BD5C80
#define pinstEQSuiteTextureLoader_x                                0x140D23570
#define pinstItemIconCache_x                                       0x140EDFAB8
#define pinstLootFiltersManager_x                                  0x140D999A8
#define pinstGFViewListener_x                                      0x140EF3988


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x1402417B0
#define __CastRay_x                                                0x140239B50
#define __CastRay2_x                                               0x140239850
#define __compress_block_x                                         0x14052AE00
#define __ConvertItemTags_x                                        0x140239FB0
#define __CleanItemTags_x                                          0x140088C20
#define __CreateCascadeMenuItems_x                                 0x140188160
#define __decompress_block_x                                       0x140570FD0
#define __DoesFileExist_x                                          0x140579610
#define __EQGetTime_x                                              0x140575D10
#define __ExecuteCmd_x                                             0x14020FE90
#define __FixHeading_x                                             0x1406A1600
#define __FlushDxKeyboard_x                                        0x1403371F0
#define __get_bearing_x                                            0x140243990
#define __get_melee_range_x                                        0x140243A80
#define __GetAnimationCache_x                                      0x1403B4520
#define __GetGaugeValueFromEQ_x                                    0x1404EAA90
#define __GetLabelFromEQ_x                                         0x1404EC0A0
#define __GetXTargetType_x                                         0x1406A28E0   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x1406A1680
#define __HelpPath_x                                               0x140EC7E90   // Why?
#define __NewUIINI_x                                               0x1404F7B30   // Why?
#define __ProcessDeviceEvents_x                                    0x1402821E0
#define __ProcessGameEvents_x                                      0x140276F10
#define __ProcessKeyboardEvents_x                                  0x140338940
#define __ProcessMouseEvents_x                                     0x1402785F0
#define __SaveColors_x                                             0x140198170
#define __STMLToText_x                                             0x14057DF60
#define __WndProc_x                                                0x140335A00
#define CMemoryMappedFile__SetFile_x                               0x1407DD650
#define DrawNetStatus_x                                            0x1402C2070
#define Util__FastTime_x                                           0x1405752A0
#define __eq_delete_x                                              0x1406A9714
#define __eq_new_x                                                 0x1406A96D0
#define __CopyLayout_x                                             0x1402AFF90
#define __ThrottleFrameRate_x                                      0x140266744
#define __ThrottleFrameRateEnd_x                                   0x1402667A4

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140348000
#define CAAWnd__Update_x                                           0x140348300
#define CAAWnd__UpdateSelected_x                                   0x140349340

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AB000
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A3910
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140831BA8
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AB930

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401A3290
#define AltAdvManager__IsAbilityReady_x                            0x1401A3720
#define AltAdvManager__GetAAById_x                                 0x1401A2B60
#define AltAdvManager__CanTrainAbility_x                           0x1401A2970
#define AltAdvManager__CanSeeAbility_x                             0x1401A2630

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
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400EEF70
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FD990  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D7A60
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E66B0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F0B10
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400EFA00
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D7BE0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C7D70
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C9740
#define CharacterZoneClient__GetHPRegen_x                          0x1400F0140
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E8560
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F0DA0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D7C60
#define CharacterZoneClient__GetManaRegen_x                        0x1400F1B80
#define CharacterZoneClient__GetModCap_x                           0x1400F9150
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D7EF0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D8090
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CC8B0
#define CharacterZoneClient__HasSkill_x                            0x1400F4B80
#define CharacterZoneClient__HitBySpell_x                          0x1400D8B10
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DC410
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F8C30
#define CharacterZoneClient__Max_Endurance_x                       0x1402DE870  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F8F80
#define CharacterZoneClient__Max_Mana_x                            0x1402DEA90  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F93E0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DF890
#define CharacterZoneClient__SpellDuration_x                       0x1400E05C0
#define CharacterZoneClient__TotalEffect_x                         0x1400E18F0
#define CharacterZoneClient__UseSkill_x                            0x1400FE900


// CBankWnd
#define CBankWnd__WndNotification_x                                0x1403664E0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140370830

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14036C6C0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x1403702B0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140372EF0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AA86D0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140395DB0
#define CChatWindowManager__InitContextMenu_x                      0x140395F40
#define CChatWindowManager__FreeChatWindow_x                       0x140394E30
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x14039DB20
#define CChatWindowManager__CreateChatWindow_x                     0x140394770

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140106DC0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x14039EB70
#define CChatWindow__Clear_x                                       0x14039FB20
#define CChatWindow__WndNotification_x                             0x1403A0D10
#define CChatWindow__AddHistory_x                                  0x14039F620

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405B30A0
#define CContextMenu__RemoveMenuItem_x                             0x1405B3490
#define CContextMenu__RemoveAllMenuItems_x                         0x1405B3460
#define CContextMenu__CheckMenuItem_x                              0x1405B32D0
#define CContextMenu__SetMenuItem_x                                0x1405B34B0
#define CContextMenu__AddSeparator_x                               0x1405B3210

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405A4F90
#define CContextMenuManager__RemoveMenu_x                          0x1405A5560
#define CContextMenuManager__PopupMenu_x                           0x1405A52B0
#define CContextMenuManager__Flush_x                               0x1405A5010
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403AC450

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x14066BAC0
#define CChatService__GetFriendName_x                              0x14066BAD0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x140595CC0
#define CComboWnd__Draw_x                                          0x140595DC0
#define CComboWnd__GetCurChoice_x                                  0x1405960A0  // unused
#define CComboWnd__GetListRect_x                                   0x140596140
#define CComboWnd__InsertChoice_x                                  0x140596470
#define CComboWnd__SetColors_x                                     0x140596800
#define CComboWnd__SetChoice_x                                     0x1405967C0
#define CComboWnd__GetItemCount_x                                  0x140596130
#define CComboWnd__GetCurChoiceText_x                              0x1405960E0  // unused
#define CComboWnd__GetChoiceText_x                                 0x140596070
#define CComboWnd__InsertChoiceAtIndex_x                           0x140596530

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403AA1D0
#define CContainerWnd__SetContainer_x                              0x140401300
#define CContainerWnd__vftable_x                                   0x1409C0B28

// CDisplay
#define CDisplay__cameraType_x                                     0x140D9A0FC
#define CDisplay__ZoneMainUI_x                                     0x1405CD1D0
#define CDisplay__PreZoneMainUI_x                                  0x1401950B0
#define CDisplay__CleanGameUI_x                                    0x140187220
#define CDisplay__GetClickedActor_x                                0x14018B3E0
#define CDisplay__GetUserDefinedColor_x                            0x14018C050
#define CDisplay__InitCharSelectUI_x                               0x14018C300
#define CDisplay__ReloadUI_x                                       0x1401973A0
#define CDisplay__RestartUI_x                                      0x1401F6260
#define CDisplay__WriteTextHD2_x                                   0x14019E3A0
#define CDisplay__TrueDistance_x                                   0x14019E050
#define CDisplay__SetViewActor_x                                   0x14019A890
#define CDisplay__GetFloorHeight_x                                 0x14018B640
#define CDisplay__ToggleScreenshotMode_x                           0x14019DB40
#define CDisplay__RealRender_World_x                               0x140196780

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405D7400
#define CEditWnd__DrawCaret_x                                      0x1405C8EC0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405C9380
#define CEditWnd__GetCaretPt_x                                     0x1405C9600  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405C9640
#define CEditWnd__GetDisplayString_x                               0x1405C98B0
#define CEditWnd__GetHorzOffset_x                                  0x1405C9AF0
#define CEditWnd__GetLineForPrintableChar_x                        0x1405C9C40
#define CEditWnd__GetSelStartPt_x                                  0x1405C9F20  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405C9D70
#define CEditWnd__PointFromPrintableChar_x                         0x1405CAAD0
#define CEditWnd__ReplaceSelection_x                               0x1405CAE80
#define CEditWnd__SelectableCharFromPoint_x                        0x1405CB320
#define CEditWnd__SetEditable_x                                    0x1405CB5B0
#define CEditWnd__SetWindowText_x                                  0x1405CB5E0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140267850
#define CEverQuest__ClickedPlayer_x                                0x14025D1A0
#define CEverQuest__CreateTargetIndicator_x                        0x14025DA60
#define CEverQuest__DoTellWindow_x                                 0x140106AD0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140107390 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140269210
#define CEverQuest__dsp_chat_x                                     0x140106500 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x140293F70
#define CEverQuest__Emote_x                                        0x140269BF0
#define CEverQuest__GetBodyTypeDesc_x                              0x14026A9A0
#define CEverQuest__GetClassDesc_x                                 0x14026AA00
#define CEverQuest__GetClassThreeLetterCode_x                      0x14026ADD0
#define CEverQuest__GetDeityDesc_x                                 0x14026B080
#define CEverQuest__GetLangDesc_x                                  0x14026B4B0
#define CEverQuest__GetRaceDesc_x                                  0x14026B850
#define CEverQuest__InterpretCmd_x                                 0x14026D190
#define CEverQuest__LeftClickedOnPlayer_x                          0x140282250
#define CEverQuest__LMouseUp_x                                     0x14026EBB0
#define CEverQuest__RightClickedOnPlayer_x                         0x14027FA70
#define CEverQuest__RMouseUp_x                                     0x140279180
#define CEverQuest__SetGameState_x                                 0x140285110
#define CEverQuest__UPCNotificationFlush_x                         0x14028AA40 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14026E820
#define CEverQuest__ReportSuccessfulHeal_x                         0x14027A530
#define CEverQuest__ReportSuccessfulHit_x                          0x14027B350

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403BF420

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C18E0
#define CGuild__GetGuildName_x                                     0x1400C1920

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403E2610

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402A5CD0
#define CHotButton__SetCheck_x                                     0x1402A5FA0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403FA040
#define CInvSlotMgr__MoveItem_x                                    0x1403FA220
#define CInvSlotMgr__SelectSlot_x                                  0x1403FBC50

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403F7240
#define CInvSlot__SliderComplete_x                                 0x1403F8780
#define CInvSlot__GetItemBase_x                                    0x1403F2C90
#define CInvSlot__UpdateItem_x                                     0x1403F8C40

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403FCFD0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x14041E470
#define CItemDisplayWnd__UpdateStrings_x                           0x140420F30
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x14041ACA0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x14041C5F0
#define CItemDisplayWnd__RequestConvertItem_x                      0x14041D890

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404E75D0
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404E92C0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140524170

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1404173F0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14014F450

// CLabel
#define CLabel__UpdateText_x                                       0x140428300

// CListWnd
#define CListWnd__CListWnd_x                                       0x140599640
#define CListWnd__dCListWnd_x                                      0x140599A90
#define CListWnd__vftable_x                                        0x140AA6820
#define CListWnd__AddColumn_x                                      0x14059A130
#define CListWnd__AddColumn1_x                                     0x14059A1D0
#define CListWnd__AddLine_x                                        0x14059A330
#define CListWnd__AddString_x                                      0x14059A8C0
#define CListWnd__CalculateFirstVisibleLine_x                      0x14059AE30
#define CListWnd__CalculateVSBRange_x                              0x14059B110
#define CListWnd__ClearSel_x                                       0x14059B2C0
#define CListWnd__ClearAllSel_x                                    0x14059B260
#define CListWnd__CloseAndUpdateEditWindow_x                       0x14059B320
#define CListWnd__Compare_x                                        0x14059B4D0
#define CListWnd__Draw_x                                           0x14059B9A0
#define CListWnd__DrawColumnSeparators_x                           0x14059C550
#define CListWnd__DrawHeader_x                                     0x14059C610
#define CListWnd__DrawItem_x                                       0x14059CCF0
#define CListWnd__DrawLine_x                                       0x14059D670
#define CListWnd__DrawSeparator_x                                  0x14059DB30
#define CListWnd__EnableLine_x                                     0x14059DF50
#define CListWnd__EnsureVisible_x                                  0x14059DFB0
#define CListWnd__ExtendSel_x                                      0x14059E0B0
#define CListWnd__GetColumnMinWidth_x                              0x14059E440
#define CListWnd__GetColumnWidth_x                                 0x14059E4C0
#define CListWnd__GetCurSel_x                                      0x14059E5C0
#define CListWnd__GetItemData_x                                    0x14059E940
#define CListWnd__GetItemHeight_x                                  0x14059E980
#define CListWnd__GetItemRect_x                                    0x14059EBA0
#define CListWnd__GetItemText_x                                    0x14059EE40
#define CListWnd__GetSelList_x                                     0x14059F090
#define CListWnd__GetSeparatorRect_x                               0x14059F280
#define CListWnd__InsertLine_x                                     0x1405A06F0
#define CListWnd__RemoveLine_x                                     0x1405A0D60
#define CListWnd__SetColors_x                                      0x1405A1120
#define CListWnd__SetColumnJustification_x                         0x1405A1140
#define CListWnd__SetColumnLabel_x                                 0x1405A11C0
#define CListWnd__SetColumnWidth_x                                 0x1405A1360
#define CListWnd__SetCurSel_x                                      0x1405A1430
#define CListWnd__SetItemColor_x                                   0x1405A16A0
#define CListWnd__SetItemData_x                                    0x1405A1740
#define CListWnd__SetItemText_x                                    0x1405A1980
#define CListWnd__Sort_x                                           0x1405A1D90
#define CListWnd__ToggleSel_x                                      0x1405A1F00
#define CListWnd__SetColumnsSizable_x                              0x1405A13B0
#define CListWnd__SetItemWnd_x                                     0x1405A1AB0
#define CListWnd__GetItemWnd_x                                     0x14059F020
#define CListWnd__SetItemIcon_x                                    0x1405A1780
#define CListWnd__CalculateCustomWindowPositions_x                 0x14059AC00
#define CListWnd__SetVScrollPos_x                                  0x1405A1CF0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x14043B5A0

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A0D628
#define MapViewMap__Clear_x                                        0x14043D110
#define MapViewMap__SetZoom_x                                      0x140443760
#define MapViewMap__HandleLButtonDown_x                            0x1404402A0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140464DF0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x14046B3A0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x14046BB40
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14046F350
#define CMerchantWnd__SelectBuySellSlot_x                          0x14046E690
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x1404735E0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x140646E10
#define CPacketScrambler__hton_x                                   0x140646E00

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405C27C0
#define CSidlManagerBase__FindAnimation1_x                         0x1405C2700
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405C2DF0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405C2BA0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405C1B00
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405C1A90
#define CSidlManagerBase__CreateXWnd_x                             0x1405C1100

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404DA600
#define CSidlManager__CreateXWnd_x                                 0x1404DA7C0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405872E0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x1405873F0
#define CSidlScreenWnd__ConvertToRes_x                             0x1405D1940 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x140587570
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x140586A10
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x140586AE0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x140586CF0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x140587C60
#define CSidlScreenWnd__EnableIniStorage_x                         0x140587E90
#define CSidlScreenWnd__GetChildItem_x                             0x140588030
#define CSidlScreenWnd__GetSidlPiece_x                             0x140588280
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405922C0 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405885F0
#define CSidlScreenWnd__LoadIniInfo_x                              0x140588960
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140589220
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140589C10
#define CSidlScreenWnd__m_layoutCopy_x                             0x140EF3828
#define CSidlScreenWnd__StoreIniInfo_x                             0x14058A280
#define CSidlScreenWnd__StoreIniVis_x                              0x14058AA70
#define CSidlScreenWnd__vftable_x                                  0x140AA5AA8
#define CSidlScreenWnd__WndNotification_x                          0x14058AAC0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x1403206F0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140320B90 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x140320AC0
#define CSkillMgr__IsActivatedSkill_x                              0x140320F40
#define CSkillMgr__IsCombatSkill_x                                 0x140320F80
#define CSkillMgr__GetSkillTimerDuration_x                         0x140320EB0
#define CSkillMgr__GetSkillLastUsed_x                              0x140320B10

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405A2880
#define CSliderWnd__SetValue_x                                     0x1405A3090
#define CSliderWnd__SetNumTicks_x                                  0x1405A2F10

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404E0C30

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405A79E0
#define CStmlWnd__CalculateHSBRange_x                              0x140591C70
#define CStmlWnd__CalculateVSBRange_x                              0x1405A8900
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405A9370
#define CStmlWnd__ForceParseNow_x                                  0x1405A9410
#define CStmlWnd__GetVisibleText_x                                 0x1405A9AE0
#define CStmlWnd__MakeStmlColorTag_x                               0x1405AB840
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405AB880
#define CStmlWnd__SetSTMLText_x                                    0x1405B2850
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405B2A00
#define CStmlWnd__UpdateHistoryString_x                            0x1405B2D90

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405A3640
#define CTabWnd__DrawCurrentPage_x                                 0x1405A36E0
#define CTabWnd__DrawTab_x                                         0x1405A3AB0
#define CTabWnd__GetTabRect_x                                      0x1405A4120
#define CTabWnd__InsertPage_x                                      0x1405A43F0
#define CTabWnd__RemovePage_x                                      0x1405A4670
#define CTabWnd__SetPage_x                                         0x1405A47D0
#define CTabWnd__UpdatePage_x                                      0x1405A4AD0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405CBA30
#define CPageWnd__SetTabText_x                                     0x1405CBAA0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BB020  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BB430


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405BA1B0
#define CTextureFont__DrawWrappedText1_x                           0x1405BA0C0
#define CTextureFont__DrawWrappedText2_x                           0x1405BA2E0
#define CTextureFont__GetTextExtent_x                              0x1405BA690
#define CTextureFont__GetHeight_x                                  0x1405BA650

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405D00A0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405865F0

// CXStr
#define CXStr__gFreeLists_x                                        0x140D22EE0
#define CXStr__gCXStrAccess_x                                      0x140EF3628

// CXWnd
#define CXWnd__BringToTop_x                                        0x14058D340
#define CXWnd__ClrFocus_x                                          0x14058D630
#define CXWnd__Destroy_x                                           0x14058D7B0
#define CXWnd__DoAllDrawing_x                                      0x14058D8B0
#define CXWnd__DrawColoredRect_x                                   0x14058E070
#define CXWnd__DrawTooltip_x                                       0x14058F6E0
#define CXWnd__DrawTooltipAtPoint_x                                0x14058F790
#define CXWnd__GetChildItem_x                                      0x1405900A0
#define CXWnd__GetChildWndAt_x                                     0x140590160
#define CXWnd__GetClientRect_x                                     0x140590410
#define CXWnd__GetClientClipRect_x                                 0x1405902C0
#define CXWnd__GetRelativeRect_x                                   0x140591DB0
#define CXWnd__GetScreenClipRect_x                                 0x140591EC0
#define CXWnd__GetScreenRect_x                                     0x140592040
#define CXWnd__GetTooltipRect_x                                    0x1405921C0
#define CXWnd__IsActive_x                                          0x140592770
#define CXWnd__IsDescendantOf_x                                    0x1405927A0
#define CXWnd__IsReallyVisible_x                                   0x140592800
#define CXWnd__IsType_x                                            0x140592840
#define CXWnd__Minimize_x                                          0x140592940
#define CXWnd__ProcessTransition_x                                 0x140593800
#define CXWnd__Resize_x                                            0x140593920
#define CXWnd__Right_x                                             0x1405939C0
#define CXWnd__SetFocus_x                                          0x140593D70
#define CXWnd__SetFont_x                                           0x140593DC0
#define CXWnd__SetKeyTooltip_x                                     0x140593EC0
#define CXWnd__SetMouseOver_x                                      0x140593FF0
#define CXWnd__SetParent_x                                         0x140594070
#define CXWnd__StartFade_x                                         0x1405944B0
#define CXWnd__vftable_x                                           0x140AA6080
#define CXWnd__CXWnd_x                                             0x14058BEE0
#define CXWnd__dCXWnd_x                                            0x14058C830

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405D6B80

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405B4660
#define CXWndManager__DrawCursor_x                                 0x1405B4940
#define CXWndManager__DrawWindows_x                                0x1405B4BA0
#define CXWndManager__GetKeyboardFlags_x                           0x1405B5260
#define CXWndManager__HandleKeyboardMsg_x                          0x1405B52A0
#define CXWndManager__RemoveWnd_x                                  0x1405B8880

// CDBStr
#define CDBStr__GetString_x                                        0x1401853E0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x140650C30

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CF4D0
#define CCharacterListWnd__EnterWorld_x                            0x1400CE1D0
#define CCharacterListWnd__Quit_x                                  0x1400CF4B0
#define CCharacterListWnd__UpdateList_x                            0x1400D0340

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x14061E2B0
#define ItemBase__CreateItemTagString_x                            0x14061ED10
#define ItemBase__GetImageNum_x                                    0x140621210
#define ItemBase__GetItemValue_x                                   0x140622D50
#define ItemBase__IsEmpty_x                                        0x140624910
#define ItemBase__IsKeyRingItem_x                                  0x140625030
#define ItemBase__ValueSellMerchant_x                              0x1406292A0
#define ItemClient__CanDrop_x                                      0x1402A8210
#define ItemClient__CanGoInBag_x                                   0x1402A8340
#define ItemClient__CreateItemClient_x                             0x1402A85C0
#define ItemClient__dItemClient_x                                  0x1402A8080

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401A4C40
#define EQ_LoadingS__Array_x                                       0x140D0F220

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140635B70
#define PcBase__GetCombatAbility_x                                 0x140636260
#define PcBase__GetCombatAbilityTimer_x                            0x140636300
#define PcBase__GetItemContainedRealEstateIds_x                    0x140636AA0
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x1406375E0
#define PcClient__AlertInventoryChanged_x                          0x1402CA650
#define PcClient__GetConLevel_x                                    0x1402CAC70  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402CD440
#define PcClient__HasLoreItem_x                                    0x1402CE4A0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402DBDB0
#define PcZoneClient__RemoveMyAffect_x                             0x1402DF9B0

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x140214580  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x140214730  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x140214890  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x1402147D0  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x14024E790  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14017FC40

// PlayerClient
#define PlayerBase__CanSee_x                                       0x1406947E0
#define PlayerBase__CanSee1_x                                      0x1406948B0
#define PlayerBase__GetVisibilityLineSegment_x                     0x140694D70
#define PlayerBase__HasProperty_x                                  0x140694F40
#define PlayerBase__IsTargetable_x                                 0x140695000
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402ED250
#define PlayerClient__GetPcClient_x                                0x1402EFA80
#define PlayerClient__PlayerClient_x                               0x1402E5A60
#define PlayerClient__SetNameSpriteState_x                         0x1402F3120
#define PlayerClient__SetNameSpriteTint_x                          0x1402F40E0
#define PlayerZoneClient__ChangeHeight_x                           0x140302820
#define PlayerZoneClient__DoAttack_x                               0x140303530
#define PlayerZoneClient__GetLevel_x                               0x140306C50
#define PlayerZoneClient__IsValidTeleport_x                        0x140251520
#define PlayerZoneClient__LegalPlayerRace_x                        0x140193930

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402FBFA0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402FC050  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402FC150
#define PlayerManagerClient__CreatePlayer_x                        0x1402FBA70
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x1406943A0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402AD490
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402AD090
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402AD100
#define KeypressHandler__ClearCommandStateArray_x                  0x1402AD420  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402AD5B0
#define KeypressHandler__HandleKeyUp_x                             0x1402AD6D0
#define KeypressHandler__SaveKeymapping_x                          0x1402AD330  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x14064E770  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x140648540

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402D4A40  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402D9D80
#define PcZoneClient__GetPcSkillLimit_x                            0x1402DC4B0
#define PcZoneClient__RemovePetEffect_x                            0x1402DFC90
#define PcZoneClient__HasAlternateAbility_x                        0x1402DD090
#define PcZoneClient__CanEquipItem_x                               0x1402D80B0
#define PcZoneClient__GetItemByID_x                                0x1402DAE10
#define PcZoneClient__RemoveBuffEffect_x                           0x1402DF830
#define PcZoneClient__BandolierSwap_x                              0x1402D7100

// Doors
#define EQSwitch__UseSwitch_x                                      0x140256050

// IconCache
#define IconCache__GetIcon_x                                       0x1403B4550

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403A8F90
#define CContainerMgr__CloseContainer_x                            0x1403A88D0
#define CContainerMgr__OpenExperimentContainer_x                   0x1403A9310

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x14049E950

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402A0340

// CLootWnd
#define CLootWnd__LootAll_x                                        0x14042F5C0
#define CLootWnd__RequestLootSlot_x                                0x1404305E0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401D4000
#define EQ_Spell__SpellAffects_x                                   0x1401D52B0
#define EQ_Spell__SpellAffectBase_x                                0x1401D5210
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D8220
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D81D0
#define EQ_Spell__IsSPAStacking_x                                  0x1401D4EE0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401D4AA0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401D4370

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C0520

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1404FB300
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404FAA10
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404FA210

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x140502970  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x14017C610
#define CTaskManager__GetTaskStatus_x                              0x14017C720
#define CTaskManager__GetElementDescription_x                      0x14017C2A0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401D2370
#define EqSoundManager__PlayScriptMp3_x                            0x1401D11B0
#define EqSoundManager__SoundAssistPlay_x                          0x140325D30  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140326070  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x140595250
#define CTextureAnimation__SetCurCell_x                            0x140595560

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x14029E5A0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x140669190
#define CharacterBase__GetItemByGlobalIndex1_x                     0x140669210
#define CharacterBase__IsExpansionFlag_x                           0x1401F5AA0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140386CD0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140387660
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140388B90

// messages
#define msg_spell_worn_off_x                                       0x14020AED0
#define msg_new_text_x                                             0x140206750
#define __msgTokenTextParam_x                                      0x1401FE070
#define msgTokenText_x                                             0x1401FDF90

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x1403276F0
#define SpellManager__GetSpellByGroupAndRank_x                     0x140327610

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x1406A2CC0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140428A50

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403ADC60
#define CCursorAttachment__IsOkToActivate_x                        0x1403B0BB0
#define CCursorAttachment__RemoveAttachment_x                      0x1403B0E60
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405CE540
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405CE730
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405CE740

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x14014A600
#define CFindItemWnd__Update_x                                     0x14014AFA0
#define CFindItemWnd__PickupSelectedItem_x                         0x140144A80

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x140154150
#define LootFiltersManager__GetItemFilterData_x                    0x140154C60
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140155500
#define LootFiltersManager__SetItemLootFilter_x                    0x1401557B0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x1404815C0

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x1403202B0
#define CResolutionHandler__UpdateResolution_x                     0x1406A7520

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403A52A0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x14066D590  // Rename..?
#define CDistillerInfo__Instance_x                                 0x14066D480  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403CB740
#define CGroupWnd__UpdateDisplay_x                                 0x1403CB320

// ItemBase
#define ItemBase__IsLore_x                                         0x140625160
#define ItemBase__IsLoreEquipped_x                                 0x1406251F0

#define MultipleItemMoveManager__ProcessMove_x                     0x1402C0200

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14024E8F0
#define EQPlacedItemManager__GetItemByGuid_x                       0x14024E880
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14024E8C0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14031A710

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x1401245C0
#define FactionManagerClient__HandleFactionMessage_x               0x140124970
#define FactionManagerClient__GetFactionStanding_x                 0x140123D90
#define FactionManagerClient__GetMaxFaction_x                      0x140123D90
#define FactionManagerClient__GetMinFaction_x                      0x140123C40

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AD610

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x14012FD70

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401AD5A0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401AC920
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401AD3C0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401AD340  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x14032C750

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14031A710

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x140214920

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x14058B0B0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140085AD0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14033DF60

// AchievementManager
#define AchievementManager__Instance_x                             0x14008D4A0

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x1406517B0
#define FreeToPlayClient__RestrictionInfo_x                        0x140ABA150

// UdpConnection
#define UdpConnection__GetStats_x                                  0x140531220

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x140819538
#define CGFScreenWnd__CGFScreenWnd_x                               0x1400703F0
#define CGFScreenWnd__CGFScreenWnd1_x                              0x140070580
#define CGFScreenWnd__dCGFScreenWnd_x                              0x140070730

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
