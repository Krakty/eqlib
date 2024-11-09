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

#define __ClientDate                                               20241108u
#define __ExpectedVersionDate                                     "Nov  8 2024"
#define __ExpectedVersionTime                                     "12:51:25"
#define __ActualVersionDate_x                                      0x140947CC0
#define __ActualVersionTime_x                                      0x140947CB0
#define __ActualVersionBuild_x                                     0x1408DE640

// Memory Protection
#define __MemChecker0_x                                            0x1402B1620
#define __MemChecker1_x                                            0x14056DFA0
#define __MemChecker4_x                                            0x14027FF20
#define __EncryptPad0_x                                            0x140D14E50

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E4DAA0
#define instEQZoneInfo_x                                           0x140E4DC94 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x140216C60
#define __gfMaxZoomCameraDistance_x                                0x1408DF8B8
#define __gfMaxCameraDistance_x                                    0x140A84458
#define __CurrentSocial_x                                          0x140BD0940 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D0C720
#define g_eqCommandStates_x                                        0x140D0D790
#define __CommandList_x                                            0x140D0D9D0
#define __ScreenMode_x                                             0x140D9534C
#define __gWorld_x                                                 0x140E483D8
#define __gpbCommandEvent_x                                        0x140E483E4
#define __ServerHost_x                                             0x140E485C8
#define __Guilds_x                                                 0x140E4C660
#define __MemCheckBitmask_x                                        0x140E4DFD7
#define __MemCheckActive_x                                         0x140E4F6C5
#define __MouseEventTime_x                                         0x140EC3010
#define DI8__MouseState_x                                          0x140EC7258
#define __heqmain_x                                                0x140EC96F8
#define DI8__Mouse_x                                               0x140EC71A8
#define __HWnd_x                                                   0x140EC7230
#define __Mouse_x                                                  0x140EC7164
#define DI8__Keyboard_x                                            0x140EC7180
#define __LoginName_x                                              0x140EC9DDC
#define __CurrentMapLabel_x                                        0x140EDD5E0
#define __LabelCache_x                                             0x140EDE1B0
#define __ChatFilterDefs_x                                         0x140A1F570
#define Teleport_Table_Size_x                                      0x140E48470
#define Teleport_Table_x                                           0x140E45F20

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E489F0
#define pinstActiveBanker_x                                        0x140E48900
#define pinstActiveCorpse_x                                        0x140E488F0
#define pinstActiveGMaster_x                                       0x140E488F8
#define pinstActiveMerchant_x                                      0x140E488E8
#define pinstAltAdvManager_x                                       0x140D961F8
#define pinstCEverQuest_x                                          0x140EC71A0
#define pinstCamActor_x                                            0x140D95338
#define pinstCDBStr_x                                              0x140D94FB0
#define pinstCDisplay_x                                            0x140E489D8
#define pinstControlledPlayer_x                                    0x140E48990
#define pinstCResolutionHandler_x                                  0x14154E978
#define pinstCSidlManager_x                                        0x140EEF4B0
#define pinstCXWndManager_x                                        0x140EEF4A8
#define instDynamicZone_x                                          0x140E4C520 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E4C56E
#define instExpeditionName_x                                       0x140E4C5AE
#define pinstDZMember_x                                            0x140E4C638
#define pinstDZTimerInfo_x                                         0x140E4C640
#define pinstEqLogin_x                                             0x140EC9720
#define instTribute_x                                              0x140D07D50
#define pinstDeviceInputProxy_x                                    0x140E4DAFC
#define pinstEQSoundManager_x                                      0x140D96578
#define pinstEQSpellStrings_x                                      0x140D79B80
#define pinstSGraphicsEngine_x                                     0x14154E6F8
#define pinstLocalPC_x                                             0x140E489C0
#define pinstLocalPlayer_x                                         0x140E488E0
#define pinstCMercenaryClientManager_x                             0x140EC48F8
#define pinstModelPlayer_x                                         0x140E48910
#define pinstRenderInterface_x                                     0x14154E710
#define pinstSkillMgr_x                                            0x140EC65A0
#define pinstSpawnManager_x                                        0x140EC4CC0
#define pinstSpellManager_x                                        0x140EC6608
#define pinstStringTable_x                                         0x140E489E0
#define pinstSwitchManager_x                                       0x140E45EA0
#define pinstTarget_x                                              0x140E48988
#define pinstTaskMember_x                                          0x140D07D40 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140E48998
#define pinstTradeTarget_x                                         0x140E48908
#define instTributeActive_x                                        0x140D07D79
#define pinstViewActor_x                                           0x140D95330
#define pinstWorldData_x                                           0x140E489C8
#define pinstPlayerPath_x                                          0x140EC4CE8
#define pinstTargetIndicator_x                                     0x140EC66B8
#define EQObject_Top_x                                             0x140E489B0

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140EDA738
#define pinstCContainerMgr_x                                       0x140D94FF8
#define pinstCContextMenuManager_x                                 0x140EEF190
#define pinstCInvSlotMgr_x                                         0x140D94FF0
#define pinstCItemDisplayManager_x                                 0x140EDD1B0
#define pinstCPopupWndManager_x                                    0x140EDDA40
#define pinstCSpellDisplayMgr_x                                    0x140EDE090
#define pinstCTaskManager_x                                        0x140BD0C80
#define pinstEQSuiteTextureLoader_x                                0x140D1E550
#define pinstItemIconCache_x                                       0x140EDAA98
#define pinstLootFiltersManager_x                                  0x140D949F8
#define pinstGFViewListener_x                                      0x140EEE968


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x14023FCB0
#define __CastRay_x                                                0x140238100
#define __CastRay2_x                                               0x140237E00
#define __compress_block_x                                         0x140523640
#define __ConvertItemTags_x                                        0x140238560
#define __CleanItemTags_x                                          0x1400880D0
#define __CreateCascadeMenuItems_x                                 0x1401869C0
#define __decompress_block_x                                       0x140569810
#define __DoesFileExist_x                                          0x140571E50
#define __EQGetTime_x                                              0x14056E550
#define __ExecuteCmd_x                                             0x14020E570
#define __FixHeading_x                                             0x14069BCA0
#define __FlushDxKeyboard_x                                        0x140333260
#define __get_bearing_x                                            0x140241EA0
#define __get_melee_range_x                                        0x140241F90
#define __GetAnimationCache_x                                      0x1403B0890
#define __GetGaugeValueFromEQ_x                                    0x1404E46D0
#define __GetLabelFromEQ_x                                         0x1404E5CE0
#define __GetXTargetType_x                                         0x14069CF80   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14069BD20
#define __HelpPath_x                                               0x140EC2ED8   // Why?
#define __NewUIINI_x                                               0x1404F1770   // Why?
#define __ProcessDeviceEvents_x                                    0x140280530
#define __ProcessGameEvents_x                                      0x140275250
#define __ProcessKeyboardEvents_x                                  0x1403349B0
#define __ProcessMouseEvents_x                                     0x140276930
#define __SaveColors_x                                             0x1401969C0
#define __STMLToText_x                                             0x1405767A0
#define __WndProc_x                                                0x140331A80
#define CMemoryMappedFile__SetFile_x                               0x1407D7C80
#define DrawNetStatus_x                                            0x1402BFA70
#define Util__FastTime_x                                           0x14056DAE0
#define __eq_delete_x                                              0x1406A3CF4
#define __eq_new_x                                                 0x1406A3CB0
#define __CopyLayout_x                                             0x1402ADA10
#define __ThrottleFrameRate_x                                      0x140264A74
#define __ThrottleFrameRateEnd_x                                   0x140264AD4

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140344370
#define CAAWnd__Update_x                                           0x140344670
#define CAAWnd__UpdateSelected_x                                   0x1403456B0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AA4D0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A2DC0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x14082CB68
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AADC0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401A1AF0
#define AltAdvManager__IsAbilityReady_x                            0x1401A1D70
#define AltAdvManager__GetAAById_x                                 0x1401A13C0
#define AltAdvManager__CanTrainAbility_x                           0x1401A11D0
#define AltAdvManager__CanSeeAbility_x                             0x1401A0E90

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D0D10
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D1B50
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D1DA0
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400E5C50
#define CharacterZoneClient__CanUseItem_x                          0x1400E6080
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D2770
#define CharacterZoneClient__CastSpell_x                           0x1400D2810
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E1BB0
#define CharacterZoneClient__Cur_HP_x                              0x1400E7750
#define CharacterZoneClient__Cur_Mana_x                            0x1400E7910
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D55A0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400EDDD0
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FC800  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D6A50
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E5550
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400EF990
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400EE860
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D6C20
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C7120
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C8AF0
#define CharacterZoneClient__GetHPRegen_x                          0x1400EEFA0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E73C0
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400EFC20
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D6CA0
#define CharacterZoneClient__GetManaRegen_x                        0x1400F0A00
#define CharacterZoneClient__GetModCap_x                           0x1400F7FC0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D6F30
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D7140
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CBC60
#define CharacterZoneClient__HasSkill_x                            0x1400F39F0
#define CharacterZoneClient__HitBySpell_x                          0x1400D7BF0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DB390
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F7AA0
#define CharacterZoneClient__Max_Endurance_x                       0x1402DC120  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F7DF0
#define CharacterZoneClient__Max_Mana_x                            0x1402DC340  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F8250
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DE740
#define CharacterZoneClient__SpellDuration_x                       0x1400DF440
#define CharacterZoneClient__TotalEffect_x                         0x1400E0790
#define CharacterZoneClient__UseSkill_x                            0x1400FD770


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140362810

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14036CB30

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x1403689E0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14036C5B0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14036F1F0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AA31E0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140392120
#define CChatWindowManager__InitContextMenu_x                      0x1403922B0
#define CChatWindowManager__FreeChatWindow_x                       0x1403911A0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x140399E90
#define CChatWindowManager__CreateChatWindow_x                     0x140390AE0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140105CE0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x14039AED0
#define CChatWindow__Clear_x                                       0x14039BE80
#define CChatWindow__WndNotification_x                             0x14039D070
#define CChatWindow__AddHistory_x                                  0x14039B980

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405AB950
#define CContextMenu__RemoveMenuItem_x                             0x1405ABD40
#define CContextMenu__RemoveAllMenuItems_x                         0x1405ABD10
#define CContextMenu__CheckMenuItem_x                              0x1405ABB80
#define CContextMenu__SetMenuItem_x                                0x1405ABD60
#define CContextMenu__AddSeparator_x                               0x1405ABAC0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x14059D840
#define CContextMenuManager__RemoveMenu_x                          0x14059DE20
#define CContextMenuManager__PopupMenu_x                           0x14059DB60
#define CContextMenuManager__Flush_x                               0x14059D8C0
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403A87C0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1406650A0
#define CChatService__GetFriendName_x                              0x1406650B0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14058E790
#define CComboWnd__Draw_x                                          0x14058E890
#define CComboWnd__GetCurChoice_x                                  0x14058EB70  // unused
#define CComboWnd__GetListRect_x                                   0x14058EC10
#define CComboWnd__InsertChoice_x                                  0x14058EF50
#define CComboWnd__SetColors_x                                     0x14058F2E0
#define CComboWnd__SetChoice_x                                     0x14058F2A0
#define CComboWnd__GetItemCount_x                                  0x14058EC00
#define CComboWnd__GetCurChoiceText_x                              0x14058EBB0  // unused
#define CComboWnd__GetChoiceText_x                                 0x14058EB40
#define CComboWnd__InsertChoiceAtIndex_x                           0x14058F010

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403A6540
#define CContainerWnd__SetContainer_x                              0x1403FBDE0
#define CContainerWnd__vftable_x                                   0x1409BB6D8

// CDisplay
#define CDisplay__cameraType_x                                     0x140D950EC
#define CDisplay__ZoneMainUI_x                                     0x1405C5AF0
#define CDisplay__PreZoneMainUI_x                                  0x1401938F0
#define CDisplay__CleanGameUI_x                                    0x140185A80
#define CDisplay__GetClickedActor_x                                0x140189C30
#define CDisplay__GetUserDefinedColor_x                            0x14018A8A0
#define CDisplay__InitCharSelectUI_x                               0x14018AB50
#define CDisplay__ReloadUI_x                                       0x140195BE0
#define CDisplay__RestartUI_x                                      0x1401F4BA0
#define CDisplay__WriteTextHD2_x                                   0x14019CBF0
#define CDisplay__TrueDistance_x                                   0x14019C8A0
#define CDisplay__SetViewActor_x                                   0x1401990E0
#define CDisplay__GetFloorHeight_x                                 0x140189E90
#define CDisplay__ToggleScreenshotMode_x                           0x14019C390
#define CDisplay__RealRender_World_x                               0x140194FC0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405CFD20
#define CEditWnd__DrawCaret_x                                      0x1405C17E0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405C1C90
#define CEditWnd__GetCaretPt_x                                     0x1405C1F10  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405C1F50
#define CEditWnd__GetDisplayString_x                               0x1405C21C0
#define CEditWnd__GetHorzOffset_x                                  0x1405C2400
#define CEditWnd__GetLineForPrintableChar_x                        0x1405C2550
#define CEditWnd__GetSelStartPt_x                                  0x1405C2830  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405C2680
#define CEditWnd__PointFromPrintableChar_x                         0x1405C33E0
#define CEditWnd__ReplaceSelection_x                               0x1405C3790
#define CEditWnd__SelectableCharFromPoint_x                        0x1405C3C30
#define CEditWnd__SetEditable_x                                    0x1405C3EC0
#define CEditWnd__SetWindowText_x                                  0x1405C3EF0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140265B80
#define CEverQuest__ClickedPlayer_x                                0x14025B650
#define CEverQuest__CreateTargetIndicator_x                        0x14025BF10
#define CEverQuest__DoTellWindow_x                                 0x1401059F0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1401062B0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140267540
#define CEverQuest__dsp_chat_x                                     0x140105420 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x140291940
#define CEverQuest__Emote_x                                        0x140267F20
#define CEverQuest__GetBodyTypeDesc_x                              0x140268CD0
#define CEverQuest__GetClassDesc_x                                 0x140268D30
#define CEverQuest__GetClassThreeLetterCode_x                      0x140269100
#define CEverQuest__GetDeityDesc_x                                 0x1402693B0
#define CEverQuest__GetLangDesc_x                                  0x1402697E0
#define CEverQuest__GetRaceDesc_x                                  0x140269B80
#define CEverQuest__InterpretCmd_x                                 0x14026B4C0
#define CEverQuest__LeftClickedOnPlayer_x                          0x1402805A0
#define CEverQuest__LMouseUp_x                                     0x14026CEE0
#define CEverQuest__RightClickedOnPlayer_x                         0x14027DDC0
#define CEverQuest__RMouseUp_x                                     0x1402774C0
#define CEverQuest__SetGameState_x                                 0x140282AE0
#define CEverQuest__UPCNotificationFlush_x                         0x140288410 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14026CB50
#define CEverQuest__ReportSuccessfulHeal_x                         0x140278870
#define CEverQuest__ReportSuccessfulHit_x                          0x140279690

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403BAC80

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C0CA0
#define CGuild__GetGuildName_x                                     0x1400C0CE0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403DD1F0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402A3530
#define CHotButton__SetCheck_x                                     0x1402A3800

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403F4B20
#define CInvSlotMgr__MoveItem_x                                    0x1403F4D00
#define CInvSlotMgr__SelectSlot_x                                  0x1403F66A0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403F1D30
#define CInvSlot__SliderComplete_x                                 0x1403F3280
#define CInvSlot__GetItemBase_x                                    0x1403ED950
#define CInvSlot__UpdateItem_x                                     0x1403F3730

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403F7A30

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140418C80
#define CItemDisplayWnd__UpdateStrings_x                           0x14041B5C0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140415710
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140416ED0
#define CItemDisplayWnd__RequestConvertItem_x                      0x140418090

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404E11F0
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404E2EE0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x14051C9B0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140411E40

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14014DFA0

// CLabel
#define CLabel__UpdateText_x                                       0x1404229B0

// CListWnd
#define CListWnd__CListWnd_x                                       0x140592120
#define CListWnd__dCListWnd_x                                      0x140592570
#define CListWnd__vftable_x                                        0x140AA1338
#define CListWnd__AddColumn_x                                      0x140592C10
#define CListWnd__AddColumn1_x                                     0x140592CB0
#define CListWnd__AddLine_x                                        0x140592E10
#define CListWnd__AddString_x                                      0x1405933A0
#define CListWnd__CalculateFirstVisibleLine_x                      0x140593910
#define CListWnd__CalculateVSBRange_x                              0x140593BF0
#define CListWnd__ClearSel_x                                       0x140593DA0
#define CListWnd__ClearAllSel_x                                    0x140593D40
#define CListWnd__CloseAndUpdateEditWindow_x                       0x140593E00
#define CListWnd__Compare_x                                        0x140593FC0
#define CListWnd__Draw_x                                           0x140594490
#define CListWnd__DrawColumnSeparators_x                           0x140595040
#define CListWnd__DrawHeader_x                                     0x140595100
#define CListWnd__DrawItem_x                                       0x1405957D0
#define CListWnd__DrawLine_x                                       0x140596150
#define CListWnd__DrawSeparator_x                                  0x140596610
#define CListWnd__EnableLine_x                                     0x140596A30
#define CListWnd__EnsureVisible_x                                  0x140596A90
#define CListWnd__ExtendSel_x                                      0x140596B90
#define CListWnd__GetColumnMinWidth_x                              0x140596EC0
#define CListWnd__GetColumnWidth_x                                 0x140596F40
#define CListWnd__GetCurSel_x                                      0x140597040
#define CListWnd__GetItemData_x                                    0x1405973C0
#define CListWnd__GetItemHeight_x                                  0x140597400
#define CListWnd__GetItemRect_x                                    0x140597620
#define CListWnd__GetItemText_x                                    0x1405978C0
#define CListWnd__GetSelList_x                                     0x140597B10
#define CListWnd__GetSeparatorRect_x                               0x140597D00
#define CListWnd__InsertLine_x                                     0x140599160
#define CListWnd__RemoveLine_x                                     0x1405997D0
#define CListWnd__SetColors_x                                      0x140599B90
#define CListWnd__SetColumnJustification_x                         0x140599BB0
#define CListWnd__SetColumnLabel_x                                 0x140599C30
#define CListWnd__SetColumnWidth_x                                 0x140599DD0
#define CListWnd__SetCurSel_x                                      0x140599EA0
#define CListWnd__SetItemColor_x                                   0x14059A110
#define CListWnd__SetItemData_x                                    0x14059A1B0
#define CListWnd__SetItemText_x                                    0x14059A3F0
#define CListWnd__Sort_x                                           0x14059A800
#define CListWnd__ToggleSel_x                                      0x14059A970
#define CListWnd__SetColumnsSizable_x                              0x140599E20
#define CListWnd__SetItemWnd_x                                     0x14059A520
#define CListWnd__GetItemWnd_x                                     0x140597AA0
#define CListWnd__SetItemIcon_x                                    0x14059A1F0
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405936E0
#define CListWnd__SetVScrollPos_x                                  0x14059A760

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140435C80

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A08168
#define MapViewMap__Clear_x                                        0x140437800
#define MapViewMap__SetZoom_x                                      0x14043DE50
#define MapViewMap__HandleLButtonDown_x                            0x14043A990

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14045F510  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140465AA0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140466240
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140469A50
#define CMerchantWnd__SelectBuySellSlot_x                          0x140468DA0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14046DCE0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x140640640
#define CPacketScrambler__hton_x                                   0x140640630

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405BB0A0
#define CSidlManagerBase__FindAnimation1_x                         0x1405BAFE0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405BB6D0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405BB480
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405BA3E0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405BA370
#define CSidlManagerBase__CreateXWnd_x                             0x1405B99D0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404D41F0
#define CSidlManager__CreateXWnd_x                                 0x1404D43B0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14057FB20
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14057FC40
#define CSidlScreenWnd__ConvertToRes_x                             0x1405CA260 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14057FDC0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14057F250
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14057F320
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14057F530
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1405804B0
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405806E0
#define CSidlScreenWnd__GetChildItem_x                             0x140580880
#define CSidlScreenWnd__GetSidlPiece_x                             0x140580AD0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x14058AD60 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x140580E40
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405811B0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140581A70
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140582470
#define CSidlScreenWnd__m_layoutCopy_x                             0x140EEE808
#define CSidlScreenWnd__StoreIniInfo_x                             0x140582B10
#define CSidlScreenWnd__StoreIniVis_x                              0x140583300
#define CSidlScreenWnd__vftable_x                                  0x140AA05A8
#define CSidlScreenWnd__WndNotification_x                          0x140583350

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14031C750 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14031CBF0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14031CB20
#define CSkillMgr__IsActivatedSkill_x                              0x14031CFA0
#define CSkillMgr__IsCombatSkill_x                                 0x14031CFE0
#define CSkillMgr__GetSkillTimerDuration_x                         0x14031CF10
#define CSkillMgr__GetSkillLastUsed_x                              0x14031CB70

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x14059B2F0
#define CSliderWnd__SetValue_x                                     0x14059BB00
#define CSliderWnd__SetNumTicks_x                                  0x14059B980

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404DA840

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405A02A0
#define CStmlWnd__CalculateHSBRange_x                              0x14058A710
#define CStmlWnd__CalculateVSBRange_x                              0x1405A1140
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405A1C30
#define CStmlWnd__ForceParseNow_x                                  0x1405A1CD0
#define CStmlWnd__GetVisibleText_x                                 0x1405A23A0
#define CStmlWnd__MakeStmlColorTag_x                               0x1405A40E0
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405A4120
#define CStmlWnd__SetSTMLText_x                                    0x1405AB0F0
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405AB2A0
#define CStmlWnd__UpdateHistoryString_x                            0x1405AB630

// CTabWnd
#define CTabWnd__Draw_x                                            0x14059BED0
#define CTabWnd__DrawCurrentPage_x                                 0x14059BF70
#define CTabWnd__DrawTab_x                                         0x14059C340
#define CTabWnd__GetTabRect_x                                      0x14059C9B0
#define CTabWnd__InsertPage_x                                      0x14059CC80
#define CTabWnd__RemovePage_x                                      0x14059CF10
#define CTabWnd__SetPage_x                                         0x14059D070
#define CTabWnd__UpdatePage_x                                      0x14059D370

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405C4350
#define CPageWnd__SetTabText_x                                     0x1405C43C0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BA3E0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BA7F0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405B2AA0
#define CTextureFont__DrawWrappedText1_x                           0x1405B29B0
#define CTextureFont__DrawWrappedText2_x                           0x1405B2BD0
#define CTextureFont__GetTextExtent_x                              0x1405B2F80
#define CTextureFont__GetHeight_x                                  0x1405B2F40

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405C89C0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x14057EE30

// CXStr
#define CXStr__gFreeLists_x                                        0x140D1DEC0
#define CXStr__gCXStrAccess_x                                      0x140EEE608

// CXWnd
#define CXWnd__BringToTop_x                                        0x140585D50
#define CXWnd__ClrFocus_x                                          0x140586040
#define CXWnd__Destroy_x                                           0x1405861C0
#define CXWnd__DoAllDrawing_x                                      0x1405862D0
#define CXWnd__DrawColoredRect_x                                   0x140586AA0
#define CXWnd__DrawTooltip_x                                       0x140588110
#define CXWnd__DrawTooltipAtPoint_x                                0x1405881C0
#define CXWnd__GetChildItem_x                                      0x140588AD0
#define CXWnd__GetChildWndAt_x                                     0x140588B90
#define CXWnd__GetClientRect_x                                     0x140588E50
#define CXWnd__GetClientClipRect_x                                 0x140588D00
#define CXWnd__GetRelativeRect_x                                   0x14058A850
#define CXWnd__GetScreenClipRect_x                                 0x14058A960
#define CXWnd__GetScreenRect_x                                     0x14058AAE0
#define CXWnd__GetTooltipRect_x                                    0x14058AC60
#define CXWnd__IsActive_x                                          0x14058B220
#define CXWnd__IsDescendantOf_x                                    0x14058B250
#define CXWnd__IsReallyVisible_x                                   0x14058B2C0
#define CXWnd__IsType_x                                            0x14058B300
#define CXWnd__Minimize_x                                          0x14058B400
#define CXWnd__ProcessTransition_x                                 0x14058C2A0
#define CXWnd__Resize_x                                            0x14058C3B0
#define CXWnd__Right_x                                             0x14058C450
#define CXWnd__SetFocus_x                                          0x14058C820
#define CXWnd__SetFont_x                                           0x14058C870
#define CXWnd__SetKeyTooltip_x                                     0x14058C970
#define CXWnd__SetMouseOver_x                                      0x14058CAA0
#define CXWnd__SetParent_x                                         0x14058CB20
#define CXWnd__StartFade_x                                         0x14058CF60
#define CXWnd__vftable_x                                           0x140AA0B98
#define CXWnd__CXWnd_x                                             0x1405848F0
#define CXWnd__dCXWnd_x                                            0x140585230

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405CF4A0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405ACF00
#define CXWndManager__DrawCursor_x                                 0x1405AD1E0
#define CXWndManager__DrawWindows_x                                0x1405AD440
#define CXWndManager__GetKeyboardFlags_x                           0x1405ADB10
#define CXWndManager__HandleKeyboardMsg_x                          0x1405ADB50
#define CXWndManager__RemoveWnd_x                                  0x1405B1170

// CDBStr
#define CDBStr__GetString_x                                        0x140183C40

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x14064A440

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CE890
#define CCharacterListWnd__EnterWorld_x                            0x1400CD590
#define CCharacterListWnd__Quit_x                                  0x1400CE870
#define CCharacterListWnd__UpdateList_x                            0x1400CF700

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140617ED0
#define ItemBase__CreateItemTagString_x                            0x140618950
#define ItemBase__GetImageNum_x                                    0x14061AEE0
#define ItemBase__GetItemValue_x                                   0x14061C9A0
#define ItemBase__IsEmpty_x                                        0x14061E5C0
#define ItemBase__IsKeyRingItem_x                                  0x14061ED00
#define ItemBase__ValueSellMerchant_x                              0x140622ED0
#define ItemClient__CanDrop_x                                      0x1402A5B00
#define ItemClient__CanGoInBag_x                                   0x1402A5C30
#define ItemClient__CreateItemClient_x                             0x1402A5F10
#define ItemClient__dItemClient_x                                  0x1402A5970

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401A3290
#define EQ_LoadingS__Array_x                                       0x140D0A230

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14062F860
#define PcBase__GetCombatAbility_x                                 0x14062FF50
#define PcBase__GetCombatAbilityTimer_x                            0x14062FFF0
#define PcBase__GetItemContainedRealEstateIds_x                    0x140630740
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x140631230
#define PcClient__AlertInventoryChanged_x                          0x1402C8050
#define PcClient__GetConLevel_x                                    0x1402C8670  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402CAE10
#define PcClient__HasLoreItem_x                                    0x1402CBDD0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402D9660
#define PcZoneClient__RemoveMyAffect_x                             0x1402DD260

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x140212C80  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x140212E30  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x140212F90  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x140212ED0  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x14024CC30  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14017E480

// PlayerClient
#define PlayerBase__CanSee_x                                       0x14068E650
#define PlayerBase__CanSee1_x                                      0x14068E720
#define PlayerBase__GetVisibilityLineSegment_x                     0x14068EBE0
#define PlayerBase__HasProperty_x                                  0x14068EDB0
#define PlayerBase__IsTargetable_x                                 0x14068EE70
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402E9D60
#define PlayerClient__GetPcClient_x                                0x1402EC590
#define PlayerClient__PlayerClient_x                               0x1402E3020
#define PlayerClient__SetNameSpriteState_x                         0x1402EF9E0
#define PlayerClient__SetNameSpriteTint_x                          0x1402F09A0
#define PlayerZoneClient__ChangeHeight_x                           0x1402FEF50
#define PlayerZoneClient__DoAttack_x                               0x1402FFC60
#define PlayerZoneClient__GetLevel_x                               0x140303390
#define PlayerZoneClient__IsValidTeleport_x                        0x14024F9C0
#define PlayerZoneClient__LegalPlayerRace_x                        0x140192170

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402F8870  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402F8920  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402F8A20
#define PlayerManagerClient__CreatePlayer_x                        0x1402F8340
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x14068E210

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402AAF10
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402AAB10
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402AAB80
#define KeypressHandler__ClearCommandStateArray_x                  0x1402AAEA0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402AB030
#define KeypressHandler__HandleKeyUp_x                             0x1402AB150
#define KeypressHandler__SaveKeymapping_x                          0x1402AADB0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140647F80  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x140641D70

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402D2380  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402D7690
#define PcZoneClient__GetPcSkillLimit_x                            0x1402D9D60
#define PcZoneClient__RemovePetEffect_x                            0x1402DD360
#define PcZoneClient__HasAlternateAbility_x                        0x1402DA950
#define PcZoneClient__CanEquipItem_x                               0x1402D59E0
#define PcZoneClient__GetItemByID_x                                0x1402D8730
#define PcZoneClient__RemoveBuffEffect_x                           0x1402DD0E0
#define PcZoneClient__BandolierSwap_x                              0x1402D4A30

// Doors
#define EQSwitch__UseSwitch_x                                      0x1402544F0

// IconCache
#define IconCache__GetIcon_x                                       0x1403B08C0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403A52F0
#define CContainerMgr__CloseContainer_x                            0x1403A4C30
#define CContainerMgr__OpenExperimentContainer_x                   0x1403A5670

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x140498FB0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x14029DD00

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140429C90
#define CLootWnd__RequestLootSlot_x                                0x14042ACA0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401D2650
#define EQ_Spell__SpellAffects_x                                   0x1401D3910
#define EQ_Spell__SpellAffectBase_x                                0x1401D3870
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D7310
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D72C0
#define EQ_Spell__IsSPAStacking_x                                  0x1401D3530
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401D30F0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401D29C0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400BF8E0

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1404F4F20
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404F4630
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404F3E40

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404FC590  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x14017AE20
#define CTaskManager__GetTaskStatus_x                              0x14017AF30
#define CTaskManager__GetElementDescription_x                      0x14017AAB0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401D09C0
#define EqSoundManager__PlayScriptMp3_x                            0x1401CF800
#define EqSoundManager__SoundAssistPlay_x                          0x140321DA0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x1403220E0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x14058DD20
#define CTextureAnimation__SetCurCell_x                            0x14058E030

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x14029BF60

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1406627E0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x140662860
#define CharacterBase__IsExpansionFlag_x                           0x1401F43F0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140383040
#define CCastSpellWnd__IsBardSongPlaying_x                         0x1403839B0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140384F00

// messages
#define msg_spell_worn_off_x                                       0x1402095B0
#define msg_new_text_x                                             0x140204E40
#define __msgTokenTextParam_x                                      0x1401FC970
#define msgTokenText_x                                             0x1401FC890

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140323760
#define SpellManager__GetSpellByGroupAndRank_x                     0x140323680

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x14069D360

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140423100

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403A9FD0
#define CCursorAttachment__IsOkToActivate_x                        0x1403ACF40
#define CCursorAttachment__RemoveAttachment_x                      0x1403AD1F0
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405C6E60
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405C7050
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405C7060

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140149220
#define CFindItemWnd__Update_x                                     0x140149BC0
#define CFindItemWnd__PickupSelectedItem_x                         0x1401436E0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x140152AA0
#define LootFiltersManager__GetItemFilterData_x                    0x1401535B0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140153E50
#define LootFiltersManager__SetItemLootFilter_x                    0x140154100

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14047BCE0

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x14031C310
#define CResolutionHandler__UpdateResolution_x                     0x1406A1BC0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403A1600

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x140666B60  // Rename..?
#define CDistillerInfo__Instance_x                                 0x140666A50  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403C6360
#define CGroupWnd__UpdateDisplay_x                                 0x1403C5F40

// ItemBase
#define ItemBase__IsLore_x                                         0x14061EDD0
#define ItemBase__IsLoreEquipped_x                                 0x14061EE60

#define MultipleItemMoveManager__ProcessMove_x                     0x1402BDC90

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14024CD90
#define EQPlacedItemManager__GetItemByGuid_x                       0x14024CD20
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14024CD60

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1403168C0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x1401235F0
#define FactionManagerClient__HandleFactionMessage_x               0x1401239A0
#define FactionManagerClient__GetFactionStanding_x                 0x140122DC0
#define FactionManagerClient__GetMaxFaction_x                      0x140122DC0
#define FactionManagerClient__GetMinFaction_x                      0x140122C70

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AC970

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x14012ED90

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401ABBF0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401AAF70
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401ABA10  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401AB990  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x1403287D0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1403168C0

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x140213020

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140583940

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140084F80

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14033A2C0

// AchievementManager
#define AchievementManager__Instance_x                             0x14008C950

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x14064AFC0
#define FreeToPlayClient__RestrictionInfo_x                        0x140AB4BF0

// UdpConnection
#define UdpConnection__GetStats_x                                  0x140529A60

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
