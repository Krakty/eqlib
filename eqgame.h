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

#define __ClientDate                                               20250407u
#define __ExpectedVersionDate                                     "Apr  7 2025"
#define __ExpectedVersionTime                                     "21:19:49"
#define __ActualVersionDate_x                                      0x14095ACD0
#define __ActualVersionTime_x                                      0x14095ACC0
#define __ActualVersionBuild_x                                     0x1408F0A40

// Memory Protection
#define __MemChecker0_x                                            0x1402BB880
#define __MemChecker1_x                                            0x140580640
#define __MemChecker4_x                                            0x140289060
#define __EncryptPad0_x                                            0x140D2AE80

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E63AE0
#define instEQZoneInfo_x                                           0x140E63CD4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x14021EC50
#define __gfMaxZoomCameraDistance_x                                0x1408F1CB8
#define __gfMaxCameraDistance_x                                    0x140A98FB8
#define __CurrentSocial_x                                          0x0 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D22720
#define g_eqCommandStates_x                                        0x140D23790
#define __CommandList_x                                            0x140D239C0
#define __ScreenMode_x                                             0x140DAB63C
#define __gWorld_x                                                 0x140E5E618
#define __gpbCommandEvent_x                                        0x140E5BFE4
#define __ServerHost_x                                             0x140E5C288
#define __Guilds_x                                                 0x140E62690
#define __MemCheckBitmask_x                                        0x140E6401F
#define __MemCheckActive_x                                         0x140E6571D
#define __MouseEventTime_x                                         0x140ED9068
#define DI8__MouseState_x                                          0x140EDD288
#define __heqmain_x                                                0x140EDF728
#define DI8__Mouse_x                                               0x140EDF740
#define __HWnd_x                                                   0x140EDF748
#define __Mouse_x                                                  0x140EDD1A4
#define DI8__Keyboard_x                                            0x140EDD1C0
#define __LoginName_x                                              0x140EDFE1C
#define __CurrentMapLabel_x                                        0x140EF38A0
#define __LabelCache_x                                             0x140EF4470
#define __ChatFilterDefs_x                                         0x140A33870
#define Teleport_Table_Size_x                                      0x140E5C09C
#define Teleport_Table_x                                           0x140E5C5D0

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E5EA20
#define pinstActiveBanker_x                                        0x140E5C088
#define pinstActiveCorpse_x                                        0x140E5C078
#define pinstActiveGMaster_x                                       0x140E5C080
#define pinstActiveMerchant_x                                      0x140E5C070
#define pinstAltAdvManager_x                                       0x140DAC238
#define pinstCEverQuest_x                                          0x140EDD1E0
#define pinstCamActor_x                                            0x140DAB628
#define pinstCDBStr_x                                              0x140DAAFF0
#define pinstCDisplay_x                                            0x140E5E5D0
#define pinstControlledPlayer_x                                    0x140E5C120
#define pinstCResolutionHandler_x                                  0x140F04CA8
#define pinstCSidlManager_x                                        0x140F05A10
#define pinstCXWndManager_x                                        0x140F05A08
#define instDynamicZone_x                                          0x140E62550 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E6259E
#define instExpeditionName_x                                       0x140E625DE
#define pinstDZMember_x                                            0x140E62668
#define pinstDZTimerInfo_x                                         0x140E62670
#define pinstEqLogin_x                                             0x140EDF760
#define instTribute_x                                              0x140D1DD60
#define pinstDeviceInputProxy_x                                    0x140E63B3C
#define pinstEQSoundManager_x                                      0x140DAC5B8
#define pinstEQSpellStrings_x                                      0x140D8FB80
#define pinstSGraphicsEngine_x                                     0x140F04A28
#define pinstLocalPC_x                                             0x140E5E5D8
#define pinstLocalPlayer_x                                         0x140E5BFE8
#define pinstCMercenaryClientManager_x                             0x140EDA958
#define pinstModelPlayer_x                                         0x140E5C0A0
#define pinstRenderInterface_x                                     0x140F04A40
#define pinstSkillMgr_x                                            0x140EDC5E8
#define pinstSpawnManager_x                                        0x140EDAD10
#define pinstSpellManager_x                                        0x140EDC650
#define pinstStringTable_x                                         0x140E5E610
#define pinstSwitchManager_x                                       0x140E5BEE0
#define pinstTarget_x                                              0x140E5C118
#define pinstTaskMember_x                                          0x140D1DD50 // Part of g_taskManager
#define pinstTradeTarget_x                                         0x140E5C090
#define instTributeActive_x                                        0x140D1DD89
#define pinstViewActor_x                                           0x140DAB618
#define pinstWorldData_x                                           0x140E5C5B0
#define pinstPlayerPath_x                                          0x140EDAD38
#define pinstTargetIndicator_x                                     0x140EDC700
#define EQObject_Top_x                                             0x140E5C5B8

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140EF0A00
#define pinstCContainerMgr_x                                       0x140DAB5A8
#define pinstCContextMenuManager_x                                 0x140F056F0
#define pinstCInvSlotMgr_x                                         0x140DAB578
#define pinstCItemDisplayManager_x                                 0x140EF3470
#define pinstCPopupWndManager_x                                    0x140EF3D00
#define pinstCSpellDisplayMgr_x                                    0x140EF4350
#define pinstCTaskManager_x                                        0x140BE6C90
#define pinstEQSuiteTextureLoader_x                                0x140D34590
#define pinstItemIconCache_x                                       0x140EF0D60
#define pinstLootFiltersManager_x                                  0x140DAAA38
#define pinstGFViewListener_x                                      0x140F04EC8


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x1402488D0
#define __CastRay_x                                                0x140240B80
#define __CastRay2_x                                               0x140240880
#define __compress_block_x                                         0x140535C50
#define __ConvertItemTags_x                                        0x140240FE0
#define __CleanItemTags_x                                          0x14008A200
#define __CreateCascadeMenuItems_x                                 0x14018D730
#define __decompress_block_x                                       0x14057BEB0
#define __DoesFileExist_x                                          0x1405844F0
#define __EQGetTime_x                                              0x140580BF0
#define __ExecuteCmd_x                                             0x140216450
#define __FixHeading_x                                             0x14063B070
#define __FlushDxKeyboard_x                                        0x14033F600
#define __get_bearing_x                                            0x14024AB00
#define __get_melee_range_x                                        0x14024ABF0
#define __GetAnimationCache_x                                      0x1403BE5B0
#define __GetGaugeValueFromEQ_x                                    0x1404F57A0
#define __GetLabelFromEQ_x                                         0x1404F6DB0
#define __GetXTargetType_x                                         0x14063C350   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14063B0F0
#define __HelpPath_x                                               0x140ED8F30   // Why?
#define __NewUIINI_x                                               0x140502800   // Why?
#define __ProcessDeviceEvents_x                                    0x140289670
#define __ProcessGameEvents_x                                      0x14027E320
#define __ProcessKeyboardEvents_x                                  0x140340D50
#define __ProcessMouseEvents_x                                     0x14027FA00
#define __SaveColors_x                                             0x14019D750
#define __STMLToText_x                                             0x14058C730
#define __WndProc_x                                                0x14033DE00
#define CMemoryMappedFile__SetFile_x                               0x1407E8BB0
#define DrawNetStatus_x                                            0x1402C9E80
#define Util__FastTime_x                                           0x14057CDD0
#define __eq_delete_x                                              0x1406B4B94
#define __eq_new_x                                                 0x1406B4B50
#define __CopyLayout_x                                             0x1402B7C90
#define __ThrottleFrameRate_x                                      0x14026DA44
#define __ThrottleFrameRateEnd_x                                   0x14026DAA4

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140350490
#define CAAWnd__Update_x                                           0x140350790
#define CAAWnd__UpdateSelected_x                                   0x1403517E0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AC760
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A5140
#define CAdvancedLootWnd__AddPlayerToList_x                        0x14083DE38
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AD090

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401A88B0
#define AltAdvManager__IsAbilityReady_x                            0x1401A8D40
#define AltAdvManager__GetAAById_x                                 0x1401A8180
#define AltAdvManager__CanTrainAbility_x                           0x1401A7F70
#define AltAdvManager__CanSeeAbility_x                             0x1401A7C30

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D3540
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D43A0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D45F0
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400E8CB0
#define CharacterZoneClient__CanUseItem_x                          0x1400E9270
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D4FC0
#define CharacterZoneClient__CastSpell_x                           0x1400D5060
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E4C00
#define CharacterZoneClient__Cur_HP_x                              0x1400EA990
#define CharacterZoneClient__Cur_Mana_x                            0x1400EAB50
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D83C0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F11A0
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FFAE0  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D9860
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E85B0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F2D50
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F1C30
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D99E0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C98C0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400CB2C0
#define CharacterZoneClient__GetHPRegen_x                          0x1400F2370
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400EA600
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F2FE0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D9A60
#define CharacterZoneClient__GetManaRegen_x                        0x1400F3DD0
#define CharacterZoneClient__GetModCap_x                           0x1400FB280
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D9CF0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D9EC0
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CE450
#define CharacterZoneClient__HasSkill_x                            0x1400F6E00
#define CharacterZoneClient__HitBySpell_x                          0x1400DA950
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DE2C0
#define CharacterZoneClient__MakeMeVisible_x                       0x1400FAD60
#define CharacterZoneClient__Max_Endurance_x                       0x1402E6560  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400FB0B0
#define CharacterZoneClient__Max_Mana_x                            0x1402E6780  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400FB510
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E1750
#define CharacterZoneClient__SpellDuration_x                       0x1400E2480
#define CharacterZoneClient__TotalEffect_x                         0x1400E37E0
#define CharacterZoneClient__UseSkill_x                            0x140100A60


// CBankWnd
#define CBankWnd__WndNotification_x                                0x14036ED50

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x1403790F0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140374F70
#define CBarterSearchWnd__UpdateInventoryList_x                    0x140378B70

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14037B7C0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AB84F0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x14039E9E0
#define CChatWindowManager__InitContextMenu_x                      0x14039EB70
#define CChatWindowManager__FreeChatWindow_x                       0x14039DA50
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403A67B0
#define CChatWindowManager__CreateChatWindow_x                     0x14039D480

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140108FC0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403A7800
#define CChatWindow__Clear_x                                       0x1403A87C0
#define CChatWindow__WndNotification_x                             0x1403A99B0
#define CChatWindow__AddHistory_x                                  0x1403A82C0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405C16A0
#define CContextMenu__RemoveMenuItem_x                             0x1405C1A80
#define CContextMenu__RemoveAllMenuItems_x                         0x1405C1A50
#define CContextMenu__CheckMenuItem_x                              0x1405C18C0
#define CContextMenu__SetMenuItem_x                                0x1405C1AA0
#define CContextMenu__AddSeparator_x                               0x1405C1800

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405B3590
#define CContextMenuManager__RemoveMenu_x                          0x1405B3B60
#define CContextMenuManager__PopupMenu_x                           0x1405B38A0
#define CContextMenuManager__Flush_x                               0x1405B3610
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403B6140

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x14068ED40
#define CChatService__GetFriendName_x                              0x14068ED50

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405A4520
#define CComboWnd__Draw_x                                          0x1405A4610
#define CComboWnd__GetCurChoice_x                                  0x1405A48E0  // unused
#define CComboWnd__GetListRect_x                                   0x1405A4980
#define CComboWnd__InsertChoice_x                                  0x1405A4CA0
#define CComboWnd__SetColors_x                                     0x1405A5030
#define CComboWnd__SetChoice_x                                     0x1405A4FF0
#define CComboWnd__GetItemCount_x                                  0x1405A4970
#define CComboWnd__GetCurChoiceText_x                              0x1405A4920  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405A48B0
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405A4D60

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403B3E60
#define CContainerWnd__SetContainer_x                              0x14040B830
#define CContainerWnd__vftable_x                                   0x1409CF0C8

// CDisplay
#define CDisplay__cameraType_x                                     0x140DAB354
#define CDisplay__ZoneMainUI_x                                     0x1405DB820
#define CDisplay__PreZoneMainUI_x                                  0x14019A680
#define CDisplay__CleanGameUI_x                                    0x14018C7F0
#define CDisplay__GetClickedActor_x                                0x1401909B0
#define CDisplay__GetUserDefinedColor_x                            0x140191620
#define CDisplay__InitCharSelectUI_x                               0x1401918D0
#define CDisplay__ReloadUI_x                                       0x14019C970
#define CDisplay__RestartUI_x                                      0x1401FC310
#define CDisplay__WriteTextHD2_x                                   0x1401A3980
#define CDisplay__TrueDistance_x                                   0x1401A3630
#define CDisplay__SetViewActor_x                                   0x14019FE70
#define CDisplay__GetFloorHeight_x                                 0x140190C10
#define CDisplay__ToggleScreenshotMode_x                           0x1401A3120
#define CDisplay__RealRender_World_x                               0x14019BD50

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405E5A50
#define CEditWnd__DrawCaret_x                                      0x1405D7570  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405D7A00
#define CEditWnd__GetCaretPt_x                                     0x1405D7C80  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405D7CC0
#define CEditWnd__GetDisplayString_x                               0x1405D7F20
#define CEditWnd__GetHorzOffset_x                                  0x1405D8160
#define CEditWnd__GetLineForPrintableChar_x                        0x1405D82A0
#define CEditWnd__GetSelStartPt_x                                  0x1405D8580  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405D83D0
#define CEditWnd__PointFromPrintableChar_x                         0x1405D9130
#define CEditWnd__ReplaceSelection_x                               0x1405D94D0
#define CEditWnd__SelectableCharFromPoint_x                        0x1405D9970
#define CEditWnd__SetEditable_x                                    0x1405D9C00
#define CEditWnd__SetWindowText_x                                  0x1405D9C30

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14026EB50
#define CEverQuest__ClickedPlayer_x                                0x140264460
#define CEverQuest__CreateTargetIndicator_x                        0x140264D20
#define CEverQuest__DoTellWindow_x                                 0x140108CD0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1401095A0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140270540
#define CEverQuest__dsp_chat_x                                     0x140108710 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x14029B520
#define CEverQuest__Emote_x                                        0x140270F30
#define CEverQuest__GetBodyTypeDesc_x                              0x140271D00
#define CEverQuest__GetClassDesc_x                                 0x140271D60
#define CEverQuest__GetClassThreeLetterCode_x                      0x140272130
#define CEverQuest__GetDeityDesc_x                                 0x1402723E0
#define CEverQuest__GetLangDesc_x                                  0x140272810
#define CEverQuest__GetRaceDesc_x                                  0x140272BB0
#define CEverQuest__InterpretCmd_x                                 0x140274520
#define CEverQuest__LeftClickedOnPlayer_x                          0x1402896E0
#define CEverQuest__LMouseUp_x                                     0x140275F70
#define CEverQuest__RightClickedOnPlayer_x                         0x140286ED0
#define CEverQuest__RMouseUp_x                                     0x140280590
#define CEverQuest__SetGameState_x                                 0x14028C600
#define CEverQuest__UPCNotificationFlush_x                         0x140291F60 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140275BD0
#define CEverQuest__ReportSuccessfulHeal_x                         0x140281960
#define CEverQuest__ReportSuccessfulHit_x                          0x140282780

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403C9500

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C31D0
#define CGuild__GetGuildName_x                                     0x1400C3210

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403EC920

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402AD630
#define CHotButton__SetCheck_x                                     0x1402AD900

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140404540
#define CInvSlotMgr__MoveItem_x                                    0x140404720
#define CInvSlotMgr__SelectSlot_x                                  0x140406150

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x140401730
#define CInvSlot__SliderComplete_x                                 0x140402C80
#define CInvSlot__GetItemBase_x                                    0x1403FD140
#define CInvSlot__UpdateItem_x                                     0x140403140

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1404074E0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140428A00
#define CItemDisplayWnd__UpdateStrings_x                           0x14042B5A0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x1404251E0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140426B40
#define CItemDisplayWnd__RequestConvertItem_x                      0x140427E10

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404F22B0
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404F3FA0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x14052EFB0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1404218C0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x1401538D0

// CLabel
#define CLabel__UpdateText_x                                       0x140432990

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405A7E70
#define CListWnd__dCListWnd_x                                      0x1405A82B0
#define CListWnd__vftable_x                                        0x140AB6640
#define CListWnd__AddColumn_x                                      0x1405A8950
#define CListWnd__AddColumn1_x                                     0x1405A89F0
#define CListWnd__AddLine_x                                        0x1405A8B50
#define CListWnd__AddString_x                                      0x1405A90E0
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405A9650
#define CListWnd__CalculateVSBRange_x                              0x1405A9930
#define CListWnd__ClearSel_x                                       0x1405A9AE0
#define CListWnd__ClearAllSel_x                                    0x1405A9A80
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405A9B40
#define CListWnd__Compare_x                                        0x1405A9D00
#define CListWnd__Draw_x                                           0x1405AA1D0
#define CListWnd__DrawColumnSeparators_x                           0x1405AAD70
#define CListWnd__DrawHeader_x                                     0x1405AAE30
#define CListWnd__DrawItem_x                                       0x1405AB500
#define CListWnd__DrawLine_x                                       0x1405ABE70
#define CListWnd__DrawSeparator_x                                  0x1405AC330
#define CListWnd__EnableLine_x                                     0x1405AC750
#define CListWnd__EnsureVisible_x                                  0x1405AC7B0
#define CListWnd__ExtendSel_x                                      0x1405AC8B0
#define CListWnd__GetColumnMinWidth_x                              0x1405ACC40
#define CListWnd__GetColumnWidth_x                                 0x1405ACCC0
#define CListWnd__GetCurSel_x                                      0x1405ACDC0
#define CListWnd__GetItemData_x                                    0x1405AD140
#define CListWnd__GetItemHeight_x                                  0x1405AD180
#define CListWnd__GetItemRect_x                                    0x1405AD3A0
#define CListWnd__GetItemText_x                                    0x1405AD640
#define CListWnd__GetSelList_x                                     0x1405AD890
#define CListWnd__GetSeparatorRect_x                               0x1405ADA80
#define CListWnd__InsertLine_x                                     0x1405AEEE0
#define CListWnd__RemoveLine_x                                     0x1405AF550
#define CListWnd__SetColors_x                                      0x1405AF910
#define CListWnd__SetColumnJustification_x                         0x1405AF930
#define CListWnd__SetColumnLabel_x                                 0x1405AF9B0
#define CListWnd__SetColumnWidth_x                                 0x1405AFB50
#define CListWnd__SetCurSel_x                                      0x1405AFC20
#define CListWnd__SetItemColor_x                                   0x1405AFE90
#define CListWnd__SetItemData_x                                    0x1405AFF30
#define CListWnd__SetItemText_x                                    0x1405B0170
#define CListWnd__Sort_x                                           0x1405B0580
#define CListWnd__ToggleSel_x                                      0x1405B06F0
#define CListWnd__SetColumnsSizable_x                              0x1405AFBA0
#define CListWnd__SetItemWnd_x                                     0x1405B02A0
#define CListWnd__GetItemWnd_x                                     0x1405AD820
#define CListWnd__SetItemIcon_x                                    0x1405AFF70
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405A9420
#define CListWnd__SetVScrollPos_x                                  0x1405B04E0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140445C50

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A1C2C0
#define MapViewMap__Clear_x                                        0x1404477D0
#define MapViewMap__SetZoom_x                                      0x14044DE40
#define MapViewMap__HandleLButtonDown_x                            0x14044A960

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14046F580  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140475BD0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140476380
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140479BD0
#define CMerchantWnd__SelectBuySellSlot_x                          0x140478F20
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14047DE80

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14066A030
#define CPacketScrambler__hton_x                                   0x14066A020

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405D0E30
#define CSidlManagerBase__FindAnimation1_x                         0x1405D0D70
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405D1460
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405D1210
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405D0170
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405D0100
#define CSidlManagerBase__CreateXWnd_x                             0x1405CF760

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404E5180
#define CSidlManager__CreateXWnd_x                                 0x1404E5340

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x140595AB0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x140595BC0
#define CSidlScreenWnd__ConvertToRes_x                             0x1405DFF90 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x140595D40
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x1405951E0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x1405952B0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1405954C0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x140596430
#define CSidlScreenWnd__EnableIniStorage_x                         0x140596660
#define CSidlScreenWnd__GetChildItem_x                             0x140596800
#define CSidlScreenWnd__GetSidlPiece_x                             0x140596A50
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405A0AD0 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x140596DC0
#define CSidlScreenWnd__LoadIniInfo_x                              0x140597130
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405979F0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405983F0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F04D68
#define CSidlScreenWnd__StoreIniInfo_x                             0x140598A70
#define CSidlScreenWnd__StoreIniVis_x                              0x140599260
#define CSidlScreenWnd__vftable_x                                  0x140AB58C8
#define CSidlScreenWnd__WndNotification_x                          0x1405992B0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x140328A00 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140328EA0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x140328DD0
#define CSkillMgr__IsActivatedSkill_x                              0x140329250
#define CSkillMgr__IsCombatSkill_x                                 0x140329290
#define CSkillMgr__GetSkillTimerDuration_x                         0x1403291C0
#define CSkillMgr__GetSkillLastUsed_x                              0x140328E20

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x140500EE0
#define CSliderWnd__SetValue_x                                     0x1405B1860
#define CSliderWnd__SetNumTicks_x                                  0x1405B16E0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404EB8B0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405B5FE0
#define CStmlWnd__CalculateHSBRange_x                              0x1405A0480
#define CStmlWnd__CalculateVSBRange_x                              0x1405B6E80
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405B7980
#define CStmlWnd__ForceParseNow_x                                  0x1405B7A20
#define CStmlWnd__GetVisibleText_x                                 0x1405B80F0
#define CStmlWnd__MakeStmlColorTag_x                               0x1405B9E50
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405B9E90
#define CStmlWnd__SetSTMLText_x                                    0x1405C0E50
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405C1000
#define CStmlWnd__UpdateHistoryString_x                            0x1405C1390

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405B1C30
#define CTabWnd__DrawCurrentPage_x                                 0x1405B1CD0
#define CTabWnd__DrawTab_x                                         0x1405B20A0
#define CTabWnd__GetTabRect_x                                      0x1405B2700
#define CTabWnd__InsertPage_x                                      0x1405B29D0
#define CTabWnd__RemovePage_x                                      0x1405B2C60
#define CTabWnd__SetPage_x                                         0x1405B2DC0
#define CTabWnd__UpdatePage_x                                      0x1405B30C0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405DA090
#define CPageWnd__SetTabText_x                                     0x1405DA100

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BC7E0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BCBF0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405C8810
#define CTextureFont__DrawWrappedText1_x                           0x1405C8720
#define CTextureFont__DrawWrappedText2_x                           0x1405C8940
#define CTextureFont__GetTextExtent_x                              0x1405C8CF0
#define CTextureFont__GetHeight_x                                  0x1405C8CB0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405DE6F0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x140594DC0

// CXStr
#define CXStr__gFreeLists_x                                        0x140D33F00
#define CXStr__gCXStrAccess_x                                      0x140F048C8

// CXWnd
#define CXWnd__BringToTop_x                                        0x14059BB30
#define CXWnd__ClrFocus_x                                          0x14059BE20
#define CXWnd__Destroy_x                                           0x14059BFA0
#define CXWnd__DoAllDrawing_x                                      0x14059C0A0
#define CXWnd__DrawColoredRect_x                                   0x14059C870
#define CXWnd__DrawTooltip_x                                       0x14059DED0
#define CXWnd__DrawTooltipAtPoint_x                                0x14059DF80
#define CXWnd__GetChildItem_x                                      0x14059E870
#define CXWnd__GetChildWndAt_x                                     0x14059E930
#define CXWnd__GetClientRect_x                                     0x14059EBE0
#define CXWnd__GetClientClipRect_x                                 0x14059EA90
#define CXWnd__GetRelativeRect_x                                   0x1405A05C0
#define CXWnd__GetScreenClipRect_x                                 0x1405A06D0
#define CXWnd__GetScreenRect_x                                     0x1405A0850
#define CXWnd__GetTooltipRect_x                                    0x1405A09D0
#define CXWnd__IsActive_x                                          0x1401E1FA0
#define CXWnd__IsDescendantOf_x                                    0x1405A0FB0
#define CXWnd__IsReallyVisible_x                                   0x1405A1020
#define CXWnd__IsType_x                                            0x1405A1060
#define CXWnd__Minimize_x                                          0x1405A1160
#define CXWnd__ProcessTransition_x                                 0x1405A2040
#define CXWnd__Resize_x                                            0x1405A2160
#define CXWnd__Right_x                                             0x1405A2200
#define CXWnd__SetFocus_x                                          0x1405A25B0
#define CXWnd__SetFont_x                                           0x1405A2600
#define CXWnd__SetKeyTooltip_x                                     0x1405A26F0
#define CXWnd__SetMouseOver_x                                      0x1405A2820
#define CXWnd__SetParent_x                                         0x1405A28A0
#define CXWnd__StartFade_x                                         0x1405A2CF0
#define CXWnd__vftable_x                                           0x140AB5EA0
#define CXWnd__CXWnd_x                                             0x14059A6D0
#define CXWnd__dCXWnd_x                                            0x14059B020

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405E51D0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405C2C50
#define CXWndManager__DrawCursor_x                                 0x1405C2F30
#define CXWndManager__DrawWindows_x                                0x1405C3190
#define CXWndManager__GetKeyboardFlags_x                           0x1405C3860
#define CXWndManager__HandleKeyboardMsg_x                          0x1405C38A0
#define CXWndManager__RemoveWnd_x                                  0x1405C6ED0

// CDBStr
#define CDBStr__GetString_x                                        0x14018A9B0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x140673E60

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D1040
#define CCharacterListWnd__EnterWorld_x                            0x1400CFD40
#define CCharacterListWnd__Quit_x                                  0x1400D1020
#define CCharacterListWnd__UpdateList_x                            0x1400D1EA0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140641430
#define ItemBase__CreateItemTagString_x                            0x140641EB0
#define ItemBase__GetImageNum_x                                    0x140644420
#define ItemBase__GetItemValue_x                                   0x140645EB0
#define ItemBase__IsEmpty_x                                        0x140647AC0
#define ItemBase__IsKeyRingItem_x                                  0x1406481F0
#define ItemBase__ValueSellMerchant_x                              0x14064C400
#define ItemClient__CanDrop_x                                      0x1402AFF10
#define ItemClient__CanGoInBag_x                                   0x1402B0040
#define ItemClient__CreateItemClient_x                             0x1402B02C0
#define ItemClient__dItemClient_x                                  0x1402AFD80

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401AA260
#define EQ_LoadingS__Array_x                                       0x140D20230

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140658D20
#define PcBase__GetCombatAbility_x                                 0x140659410
#define PcBase__GetCombatAbilityTimer_x                            0x1406594B0
#define PcBase__GetItemContainedRealEstateIds_x                    0x140659C50
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14065A790
#define PcClient__AlertInventoryChanged_x                          0x1402D2460
#define PcClient__GetConLevel_x                                    0x1402D2A80  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402D5210
#define PcClient__HasLoreItem_x                                    0x1402D6270
#define PcZoneClient__GetItemRecastTimer_x                         0x1402E3A20
#define PcZoneClient__RemoveMyAffect_x                             0x1402E76A0

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x14021AB90  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x14021AD40  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x14021AEA0  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x14021ADE0  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x1402559D0  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140185180

// PlayerClient
#define PlayerBase__CanSee_x                                       0x14062E100
#define PlayerBase__CanSee1_x                                      0x14062E1D0
#define PlayerBase__GetVisibilityLineSegment_x                     0x14062E6B0
#define PlayerBase__HasProperty_x                                  0x14062E880
#define PlayerBase__IsTargetable_x                                 0x14062E940
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402F5380
#define PlayerClient__GetPcClient_x                                0x1402F7BD0
#define PlayerClient__PlayerClient_x                               0x1402ED720
#define PlayerClient__SetNameSpriteState_x                         0x1402FB270
#define PlayerClient__SetNameSpriteTint_x                          0x1402FC230
#define PlayerZoneClient__ChangeHeight_x                           0x14030AA10
#define PlayerZoneClient__DoAttack_x                               0x14030B720
#define PlayerZoneClient__GetLevel_x                               0x14030EE60
#define PlayerZoneClient__IsValidTeleport_x                        0x140258750
#define PlayerZoneClient__LegalPlayerRace_x                        0x140198F00

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x140304130  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1403041E0  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1403042E0
#define PlayerManagerClient__CreatePlayer_x                        0x140303C00
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x14062DCC0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402B5190
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402B4D90
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402B4E00
#define KeypressHandler__ClearCommandStateArray_x                  0x1402B5120  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402B52B0
#define KeypressHandler__HandleKeyUp_x                             0x1402B53D0
#define KeypressHandler__SaveKeymapping_x                          0x1402B5030  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140671980  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x14066B760

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402DC810  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402E1B60
#define PcZoneClient__GetPcSkillLimit_x                            0x1402E41B0
#define PcZoneClient__RemovePetEffect_x                            0x1402E7980
#define PcZoneClient__HasAlternateAbility_x                        0x1402E4D90
#define PcZoneClient__CanEquipItem_x                               0x1402DFE80
#define PcZoneClient__GetItemByID_x                                0x1402E2A80
#define PcZoneClient__RemoveBuffEffect_x                           0x1402E7520
#define PcZoneClient__BandolierSwap_x                              0x1402DEEE0

// Doors
#define EQSwitch__UseSwitch_x                                      0x14025D280

// IconCache
#define IconCache__GetIcon_x                                       0x1403BE5E0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403B2C10
#define CContainerMgr__CloseContainer_x                            0x1403B2550
#define CContainerMgr__OpenExperimentContainer_x                   0x1403B2F90

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404A9380

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402A7930

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140439C70
#define CLootWnd__RequestLootSlot_x                                0x14043ACA0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401D98A0
#define EQ_Spell__SpellAffects_x                                   0x1401DAB80
#define EQ_Spell__SpellAffectBase_x                                0x1401DAAE0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400DA050
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400DA000
#define EQ_Spell__IsSPAStacking_x                                  0x1401DA7B0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401DA360
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401D9C30

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C1D10

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x140505FF0
#define CTargetWnd__RefreshTargetBuffs_x                           0x140505700
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x140504F00

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x14050D680  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140181B40
#define CTaskManager__GetTaskStatus_x                              0x140181C50
#define CTaskManager__GetElementDescription_x                      0x1401817D0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401D7BC0
#define EqSoundManager__PlayScriptMp3_x                            0x1401D6A00
#define EqSoundManager__SoundAssistPlay_x                          0x14032E040  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x14032E380  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405A3AB0
#define CTextureAnimation__SetCurCell_x                            0x1405A3DC0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402A5B50

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x14068C410
#define CharacterBase__GetItemByGlobalIndex1_x                     0x14068C490
#define CharacterBase__IsExpansionFlag_x                           0x1401FBB40

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x14038F660
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140390040
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140391590

// messages
#define msg_spell_worn_off_x                                       0x140211400
#define msg_new_text_x                                             0x14020CBB0
#define __msgTokenTextParam_x                                      0x1402043B0
#define msgTokenText_x                                             0x1402042C0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x14032F920
#define SpellManager__GetSpellByGroupAndRank_x                     0x14032F840

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x14063C730

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1404330E0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403B7970
#define CCursorAttachment__IsOkToActivate_x                        0x1403BAC30
#define CCursorAttachment__RemoveAttachment_x                      0x1403BAEE0
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405DCB90
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405DCD80
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405DCD90

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x14014EA80
#define CFindItemWnd__Update_x                                     0x14014F420
#define CFindItemWnd__PickupSelectedItem_x                         0x140148EC0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x140158530
#define LootFiltersManager__GetItemFilterData_x                    0x140159050
#define LootFiltersManager__RemoveItemLootFilter_x                 0x1401598F0
#define LootFiltersManager__SetItemLootFilter_x                    0x140159BA0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14048BED0

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x1403285C0
#define CResolutionHandler__UpdateResolution_x                     0x140589200

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403AEEF0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x140690810  // Rename..?
#define CDistillerInfo__Instance_x                                 0x140690700  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403D5850
#define CGroupWnd__UpdateDisplay_x                                 0x1403D5430

// ItemBase
#define ItemBase__IsLore_x                                         0x140648320
#define ItemBase__IsLoreEquipped_x                                 0x1406483B0

#define MultipleItemMoveManager__ProcessMove_x                     0x1402C8000

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140255B30
#define EQPlacedItemManager__GetItemByGuid_x                       0x140255AC0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140255B00

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1403229F0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140126730
#define FactionManagerClient__HandleFactionMessage_x               0x140126AE0
#define FactionManagerClient__GetFactionStanding_x                 0x140125F00
#define FactionManagerClient__GetMaxFaction_x                      0x140125F00
#define FactionManagerClient__GetMinFaction_x                      0x140125DB0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AED70

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140131EE0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401B2C00
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401B1F80
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401B2A20  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401B29A0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x140334B00

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1403229F0

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x14021AF30

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405998A0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x1400868C0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x1403463A0

// AchievementManager
#define AchievementManager__Instance_x                             0x14008EA80

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x1406749E0
#define FreeToPlayClient__RestrictionInfo_x                        0x140ACA5C0

// UdpConnection
#define UdpConnection__GetStats_x                                  0x14053C070

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x140825600
#define CGFScreenWnd__CGFScreenWnd_x                               0x140071260
#define CGFScreenWnd__CGFScreenWnd1_x                              0x1400713F0
#define CGFScreenWnd__dCGFScreenWnd_x                              0x1400715A0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
