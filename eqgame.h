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

#define __ClientDate                                               20250718u
#define __ExpectedVersionDate                                     "Jul 18 2025"
#define __ExpectedVersionTime                                     "16:53:08"
#define __ActualVersionDate_x                                      0x14095F0D0
#define __ActualVersionTime_x                                      0x14095F0C0
#define __ActualVersionBuild_x                                     0x1408F4B80

// Memory Protection
#define __MemChecker0_x                                            0x1402BCFB0
#define __MemChecker1_x                                            0x140583670
#define __MemChecker4_x                                            0x14028A6A0
#define __MemChecker5_x                                            0x140EDCD58
#define __EncryptPad0_x                                            0x140D2EE80

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E67AE0
#define instEQZoneInfo_x                                           0x140E67CD4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x14021EC00
#define __gfMaxZoomCameraDistance_x                                0x1408F5DF8
#define __gfMaxCameraDistance_x                                    0x140A9ECD4
#define __CurrentSocial_x                                          0x140BEA950 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D26720
#define g_eqCommandStates_x                                        0x140D27790
#define __CommandList_x                                            0x140D279C0
#define __ScreenMode_x                                             0x140DAF064
#define __gWorld_x                                                 0x140E5FF70
#define __gpbCommandEvent_x                                        0x140E604CC
#define __ServerHost_x                                             0x140E606B8
#define __Guilds_x                                                 0x140E666A0
#define __MemCheckBitmask_x                                        0x140E6801F
#define __MemCheckActive_x                                         0x140E69725
#define __MouseEventTime_x                                         0x140EDD090
#define DI8__MouseState_x                                          0x140EE12C8
#define __heqmain_x                                                0x140EE3768
#define DI8__Mouse_x                                               0x140EE1218
#define __HWnd_x                                                   0x140EE12A0
#define __Mouse_x                                                  0x140EE11D4
#define DI8__Keyboard_x                                            0x140EE11F0
#define __LoginName_x                                              0x140EE3E4C
#define __CurrentMapLabel_x                                        0x140EF78D0
#define __LabelCache_x                                             0x140EF84A0
#define __ChatFilterDefs_x                                         0x140A37CC0
#define Teleport_Table_Size_x                                      0x140E60554
#define Teleport_Table_x                                           0x140E609F0

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E62A30
#define pinstActiveBanker_x                                        0x140E60418
#define pinstActiveCorpse_x                                        0x140E60408
#define pinstActiveGMaster_x                                       0x140E60410
#define pinstActiveMerchant_x                                      0x140E60400
#define pinstAltAdvManager_x                                       0x140DB0240
#define pinstCEverQuest_x                                          0x140EE1210
#define pinstCamActor_x                                            0x140DAF050
#define pinstCDBStr_x                                              0x140DAEFF0
#define pinstCDisplay_x                                            0x140E609E8
#define pinstControlledPlayer_x                                    0x140E604A8
#define pinstCResolutionHandler_x                                  0x140F08CD8
#define pinstCSidlManager_x                                        0x140F09A40
#define pinstCXWndManager_x                                        0x140F09A38
#define instDynamicZone_x                                          0x140E66560 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E665AE
#define instExpeditionName_x                                       0x140E665EE
#define pinstDZMember_x                                            0x140E66678
#define pinstDZTimerInfo_x                                         0x140E66680
#define pinstEqLogin_x                                             0x140EE3790
#define instTribute_x                                              0x140D21D60
#define pinstDeviceInputProxy_x                                    0x140E67B3C
#define pinstEQSoundManager_x                                      0x140DB05C0
#define pinstEQSpellStrings_x                                      0x140D93B80
#define pinstSGraphicsEngine_x                                     0x140F08A58
#define pinstLocalPC_x                                             0x140E62A10
#define pinstLocalPlayer_x                                         0x140E603F8
#define pinstCMercenaryClientManager_x                             0x140EDE988
#define pinstModelPlayer_x                                         0x140E60428
#define pinstRenderInterface_x                                     0x140F08A70
#define pinstSkillMgr_x                                            0x140EE0618
#define pinstSpawnManager_x                                        0x140EDED40
#define pinstSpellManager_x                                        0x140EE0680
#define pinstStringTable_x                                         0x140E62A18
#define pinstSwitchManager_x                                       0x140E5FEF0
#define pinstTarget_x                                              0x140E604A0
#define pinstTaskMember_x                                          0x140D21D50 // Part of g_taskManager
#define pinstTradeTarget_x                                         0x140E60420
#define instTributeActive_x                                        0x140D21D89
#define pinstViewActor_x                                           0x140DAF048
#define pinstWorldData_x                                           0x140E609D8
#define pinstPlayerPath_x                                          0x140EDED68
#define pinstTargetIndicator_x                                     0x140EE0730
#define EQObject_Top_x                                             0x140E605A8

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140EF4A30
#define pinstCContainerMgr_x                                       0x140DAF098
#define pinstCContextMenuManager_x                                 0x140F09720
#define pinstCInvSlotMgr_x                                         0x140DAF040
#define pinstCItemDisplayManager_x                                 0x140EF74A0
#define pinstCPopupWndManager_x                                    0x140EF7D30
#define pinstCSpellDisplayMgr_x                                    0x140EF8380
#define pinstCTaskManager_x                                        0x140BEAC90
#define pinstEQSuiteTextureLoader_x                                0x140D38590
#define pinstItemIconCache_x                                       0x140EF4D90
#define pinstLootFiltersManager_x                                  0x140DAEA38
#define pinstGFViewListener_x                                      0x140F08EF8


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x140248960
#define __CastRay_x                                                0x140240C00
#define __CastRay2_x                                               0x140240900
#define __compress_block_x                                         0x140538BF0
#define __ConvertItemTags_x                                        0x140241060
#define __CleanItemTags_x                                          0x14008A2D0
#define __CreateCascadeMenuItems_x                                 0x14018D740
#define __decompress_block_x                                       0x14057EE80
#define __DoesFileExist_x                                          0x140587520
#define __EQGetTime_x                                              0x140583C20
#define __ExecuteCmd_x                                             0x140216400
#define __FixHeading_x                                             0x14063E9D0
#define __FlushDxKeyboard_x                                        0x140341B70
#define __get_bearing_x                                            0x14024AB90
#define __get_melee_range_x                                        0x14024AC80
#define __GetAnimationCache_x                                      0x1403C12A0
#define __GetGaugeValueFromEQ_x                                    0x1404F87B0
#define __GetLabelFromEQ_x                                         0x1404F9DA0
#define __GetXTargetType_x                                         0x14063FCB0   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14063EA50
#define __HelpPath_x                                               0x140EDCF58   // Why?
#define __NewUIINI_x                                               0x1405057F0   // Why?
#define __ProcessDeviceEvents_x                                    0x14028ACB0
#define __ProcessGameEvents_x                                      0x14027F960
#define __ProcessKeyboardEvents_x                                  0x1403432C0
#define __ProcessMouseEvents_x                                     0x140281040
#define __SaveColors_x                                             0x14019D760
#define __STMLToText_x                                             0x14058F720
#define __WndProc_x                                                0x140340340
#define CMemoryMappedFile__SetFile_x                               0x1407EC9C0
#define DrawNetStatus_x                                            0x1402CB5A0
#define Util__FastTime_x                                           0x14057FDA0
#define __eq_delete_x                                              0x1406B89D4
#define __eq_new_x                                                 0x1406B8990
#define __CopyLayout_x                                             0x1402B93C0
#define __ThrottleFrameRate_x                                      0x14026F00A
#define __ThrottleFrameRateEnd_x                                   0x14026F06A

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140353620
#define CAAWnd__Update_x                                           0x140353920
#define CAAWnd__UpdateSelected_x                                   0x140354970

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
#define CBankWnd__WndNotification_x                                0x140371F30

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14037C2B0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140378130
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14037BD30

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14037EA00

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140ABC9A0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403A16C0
#define CChatWindowManager__InitContextMenu_x                      0x1403A1850
#define CChatWindowManager__FreeChatWindow_x                       0x1403A0730
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403A9490
#define CChatWindowManager__CreateChatWindow_x                     0x1403A0170

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140108D90

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403AA4E0
#define CChatWindow__Clear_x                                       0x1403AB490
#define CChatWindow__WndNotification_x                             0x1403AC670
#define CChatWindow__AddHistory_x                                  0x1403AAF90

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405C4760
#define CContextMenu__RemoveMenuItem_x                             0x1405C4B50
#define CContextMenu__RemoveAllMenuItems_x                         0x1405C4B20
#define CContextMenu__CheckMenuItem_x                              0x1405C4990
#define CContextMenu__SetMenuItem_x                                0x1405C4B70
#define CContextMenu__AddSeparator_x                               0x1405C48D0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405B6630
#define CContextMenuManager__RemoveMenu_x                          0x1405B6C00
#define CContextMenuManager__PopupMenu_x                           0x1405B6940
#define CContextMenuManager__Flush_x                               0x1405B66B0
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403B8E60

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x140692A80
#define CChatService__GetFriendName_x                              0x140692A90

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405A7530
#define CComboWnd__Draw_x                                          0x1405A7630
#define CComboWnd__GetCurChoice_x                                  0x1405A7900  // unused
#define CComboWnd__GetListRect_x                                   0x1405A79A0
#define CComboWnd__InsertChoice_x                                  0x1405A7CE0
#define CComboWnd__SetColors_x                                     0x1405A8070
#define CComboWnd__SetChoice_x                                     0x1405A8030
#define CComboWnd__GetItemCount_x                                  0x1405A7990
#define CComboWnd__GetCurChoiceText_x                              0x1405A7940  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405A78D0
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405A7DA0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403B6BA0
#define CContainerWnd__SetContainer_x                              0x14040E530
#define CContainerWnd__vftable_x                                   0x1409D3540

// CDisplay
#define CDisplay__cameraType_x                                     0x140DAF43C
#define CDisplay__ZoneMainUI_x                                     0x1405DE8B0
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
#define CEditBaseWnd__SetSel_x                                     0x1405E8AE0
#define CEditWnd__DrawCaret_x                                      0x1405DA5D0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405DAA70
#define CEditWnd__GetCaretPt_x                                     0x1405DACF0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405DAD30
#define CEditWnd__GetDisplayString_x                               0x1405DAFA0
#define CEditWnd__GetHorzOffset_x                                  0x1405DB1D0
#define CEditWnd__GetLineForPrintableChar_x                        0x1405DB320
#define CEditWnd__GetSelStartPt_x                                  0x1405DB600  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405DB450
#define CEditWnd__PointFromPrintableChar_x                         0x1405DC1B0
#define CEditWnd__ReplaceSelection_x                               0x1405DC560
#define CEditWnd__SelectableCharFromPoint_x                        0x1405DCA00
#define CEditWnd__SetEditable_x                                    0x1405DCC80
#define CEditWnd__SetWindowText_x                                  0x1405DCCB0

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
#define CGaugeWnd__Draw_x                                          0x1403CC1F0

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C32E0
#define CGuild__GetGuildName_x                                     0x1400C3320

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403EF5D0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402AED60
#define CHotButton__SetCheck_x                                     0x1402AF030

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140407240
#define CInvSlotMgr__MoveItem_x                                    0x140407420
#define CInvSlotMgr__SelectSlot_x                                  0x140408E50

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x140404440
#define CInvSlot__SliderComplete_x                                 0x140405990
#define CInvSlot__GetItemBase_x                                    0x1403FFDD0
#define CInvSlot__UpdateItem_x                                     0x140405E40

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x14040A1E0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x14042B840
#define CItemDisplayWnd__UpdateStrings_x                           0x14042E420
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140428010
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140429970
#define CItemDisplayWnd__RequestConvertItem_x                      0x14042AC50

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404F5230
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404F6FC0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140531F50

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1404246E0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140153910

// CLabel
#define CLabel__UpdateText_x                                       0x1404357F0

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405AAEB0
#define CListWnd__dCListWnd_x                                      0x1405AB300
#define CListWnd__vftable_x                                        0x140ABAAF0
#define CListWnd__AddColumn_x                                      0x1405AB9A0
#define CListWnd__AddColumn1_x                                     0x1405ABA40
#define CListWnd__AddLine_x                                        0x1405ABBA0
#define CListWnd__AddString_x                                      0x1405AC130
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405AC6A0
#define CListWnd__CalculateVSBRange_x                              0x1405AC980
#define CListWnd__ClearSel_x                                       0x1405ACB30
#define CListWnd__ClearAllSel_x                                    0x1405ACAD0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405ACB90
#define CListWnd__Compare_x                                        0x1405ACD50
#define CListWnd__Draw_x                                           0x1405AD220
#define CListWnd__DrawColumnSeparators_x                           0x1405ADDD0
#define CListWnd__DrawHeader_x                                     0x1405ADE90
#define CListWnd__DrawItem_x                                       0x1405AE560
#define CListWnd__DrawLine_x                                       0x1405AEEE0
#define CListWnd__DrawSeparator_x                                  0x1405AF3A0
#define CListWnd__EnableLine_x                                     0x1405AF7C0
#define CListWnd__EnsureVisible_x                                  0x1405AF820
#define CListWnd__ExtendSel_x                                      0x1405AF920
#define CListWnd__GetColumnMinWidth_x                              0x1405AFCB0
#define CListWnd__GetColumnWidth_x                                 0x1405AFD30
#define CListWnd__GetCurSel_x                                      0x1405AFE30
#define CListWnd__GetItemData_x                                    0x1405B01B0
#define CListWnd__GetItemHeight_x                                  0x1405B01F0
#define CListWnd__GetItemRect_x                                    0x1405B0410
#define CListWnd__GetItemText_x                                    0x1405B06B0
#define CListWnd__GetSelList_x                                     0x1405B0900
#define CListWnd__GetSeparatorRect_x                               0x1405B0AF0
#define CListWnd__InsertLine_x                                     0x1405B1F50
#define CListWnd__RemoveLine_x                                     0x1405B25C0
#define CListWnd__SetColors_x                                      0x1405B2980
#define CListWnd__SetColumnJustification_x                         0x1405B29A0
#define CListWnd__SetColumnLabel_x                                 0x1405B2A20
#define CListWnd__SetColumnWidth_x                                 0x1405B2BC0
#define CListWnd__SetCurSel_x                                      0x1405B2C90
#define CListWnd__SetItemColor_x                                   0x1405B2F00
#define CListWnd__SetItemData_x                                    0x1405B2FA0
#define CListWnd__SetItemText_x                                    0x1405B31E0
#define CListWnd__Sort_x                                           0x1405B35F0
#define CListWnd__ToggleSel_x                                      0x1405B3760
#define CListWnd__SetColumnsSizable_x                              0x1405B2C10
#define CListWnd__SetItemWnd_x                                     0x1405B3310
#define CListWnd__GetItemWnd_x                                     0x1405B0890
#define CListWnd__SetItemIcon_x                                    0x1405B2FE0
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405AC470
#define CListWnd__SetVScrollPos_x                                  0x1405B3550

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140448AA0

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A20710
#define MapViewMap__Clear_x                                        0x14044A620
#define MapViewMap__SetZoom_x                                      0x140450C90
#define MapViewMap__HandleLButtonDown_x                            0x14044D7B0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x1404723C0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140478A20
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x1404791D0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14047CA00
#define CMerchantWnd__SelectBuySellSlot_x                          0x14047BD50
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140480CB0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14066DC70
#define CPacketScrambler__hton_x                                   0x14066DC60

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405D3E90
#define CSidlManagerBase__FindAnimation1_x                         0x1405D3DD0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405D44C0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405D4270
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405D31D0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405D3160
#define CSidlManagerBase__CreateXWnd_x                             0x1405D27A0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404E8110
#define CSidlManager__CreateXWnd_x                                 0x1404E82D0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x140598AA0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x140598BB0
#define CSidlScreenWnd__ConvertToRes_x                             0x1405E3020 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x140598D30
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x1405981D0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x1405982A0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1405984B0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x140599420
#define CSidlScreenWnd__EnableIniStorage_x                         0x140599650
#define CSidlScreenWnd__GetChildItem_x                             0x1405997F0
#define CSidlScreenWnd__GetSidlPiece_x                             0x140599A40
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405A3AF0 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x140599DB0
#define CSidlScreenWnd__LoadIniInfo_x                              0x14059A120
#define CSidlScreenWnd__LoadIniListWnd_x                           0x14059A9D0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x14059B3D0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F08D98
#define CSidlScreenWnd__StoreIniInfo_x                             0x14059BA50
#define CSidlScreenWnd__StoreIniVis_x                              0x14059C240
#define CSidlScreenWnd__vftable_x                                  0x140AB9D78
#define CSidlScreenWnd__WndNotification_x                          0x14059C290

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14032AAD0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14032AF70 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14032AEA0
#define CSkillMgr__IsActivatedSkill_x                              0x14032B320
#define CSkillMgr__IsCombatSkill_x                                 0x14032B360
#define CSkillMgr__GetSkillTimerDuration_x                         0x14032B290
#define CSkillMgr__GetSkillLastUsed_x                              0x14032AEF0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405B40E0
#define CSliderWnd__SetValue_x                                     0x1405B48F0
#define CSliderWnd__SetNumTicks_x                                  0x1405B4770

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404EE830

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405B9080
#define CStmlWnd__CalculateHSBRange_x                              0x1405A34A0
#define CStmlWnd__CalculateVSBRange_x                              0x1405B9F20
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405BAA20
#define CStmlWnd__ForceParseNow_x                                  0x1405BAAC0
#define CStmlWnd__GetVisibleText_x                                 0x1405BB190
#define CStmlWnd__MakeStmlColorTag_x                               0x1405BCEF0
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405BCF30
#define CStmlWnd__SetSTMLText_x                                    0x1405C3F00
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405C40B0
#define CStmlWnd__UpdateHistoryString_x                            0x1405C4440

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405B4CC0
#define CTabWnd__DrawCurrentPage_x                                 0x1405B4D60
#define CTabWnd__DrawTab_x                                         0x1405B5130
#define CTabWnd__GetTabRect_x                                      0x1405B57A0
#define CTabWnd__InsertPage_x                                      0x1405B5A70
#define CTabWnd__RemovePage_x                                      0x1405B5D00
#define CTabWnd__SetPage_x                                         0x1405B5E60
#define CTabWnd__UpdatePage_x                                      0x1405B6160

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405DD110
#define CPageWnd__SetTabText_x                                     0x1405DD180

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BC900  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BCD10


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405CB8A0
#define CTextureFont__DrawWrappedText1_x                           0x1405CB7B0
#define CTextureFont__DrawWrappedText2_x                           0x1405CB9D0
#define CTextureFont__GetTextExtent_x                              0x1405CBD80
#define CTextureFont__GetHeight_x                                  0x1405CBD40

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405E1780

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x140597DB0

// CXStr
#define CXStr__gFreeLists_x                                        0x140D37F00
#define CXStr__gCXStrAccess_x                                      0x140F088F8

// CXWnd
#define CXWnd__BringToTop_x                                        0x14059EB20
#define CXWnd__ClrFocus_x                                          0x14059EE10
#define CXWnd__Destroy_x                                           0x14059EF90
#define CXWnd__DoAllDrawing_x                                      0x14059F0A0
#define CXWnd__DrawColoredRect_x                                   0x14059F870
#define CXWnd__DrawTooltip_x                                       0x1405A0EF0
#define CXWnd__DrawTooltipAtPoint_x                                0x1405A0FA0
#define CXWnd__GetChildItem_x                                      0x1405A18A0
#define CXWnd__GetChildWndAt_x                                     0x1405A1960
#define CXWnd__GetClientRect_x                                     0x1405A1C20
#define CXWnd__GetClientClipRect_x                                 0x1405A1AD0
#define CXWnd__GetRelativeRect_x                                   0x1405A35E0
#define CXWnd__GetScreenClipRect_x                                 0x1405A36F0
#define CXWnd__GetScreenRect_x                                     0x1405A3870
#define CXWnd__GetTooltipRect_x                                    0x1405A39F0
#define CXWnd__IsActive_x                                          0x1405A3FB0
#define CXWnd__IsDescendantOf_x                                    0x1405A3FD0
#define CXWnd__IsReallyVisible_x                                   0x1405A4040
#define CXWnd__IsType_x                                            0x1405A4080
#define CXWnd__Minimize_x                                          0x1405A4180
#define CXWnd__ProcessTransition_x                                 0x1405A5060
#define CXWnd__Resize_x                                            0x1405A5160
#define CXWnd__Right_x                                             0x1405A5200
#define CXWnd__SetFocus_x                                          0x1405A55B0
#define CXWnd__SetFont_x                                           0x1405A5600
#define CXWnd__SetKeyTooltip_x                                     0x1405A5710
#define CXWnd__SetMouseOver_x                                      0x1405A5850
#define CXWnd__SetParent_x                                         0x1405A58D0
#define CXWnd__StartFade_x                                         0x1405A5D10
#define CXWnd__vftable_x                                           0x140ABA350
#define CXWnd__CXWnd_x                                             0x14059D6B0
#define CXWnd__dCXWnd_x                                            0x14059E010

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405E8260

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405C5D10
#define CXWndManager__DrawCursor_x                                 0x1405C5FF0
#define CXWndManager__DrawWindows_x                                0x1405C6250
#define CXWndManager__GetKeyboardFlags_x                           0x1405C6920
#define CXWndManager__HandleKeyboardMsg_x                          0x1405C6960
#define CXWndManager__RemoveWnd_x                                  0x1405C9F70

// CDBStr
#define CDBStr__GetString_x                                        0x14018A9C0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x140677AC0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D0D30
#define CCharacterListWnd__EnterWorld_x                            0x1400CFD40
#define CCharacterListWnd__Quit_x                                  0x1400D0D10
#define CCharacterListWnd__UpdateList_x                            0x1400D1B90

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140644D20
#define ItemBase__CreateItemTagString_x                            0x140645790
#define ItemBase__GetImageNum_x                                    0x140647D00
#define ItemBase__GetItemValue_x                                   0x140649B90
#define ItemBase__IsEmpty_x                                        0x14064B710
#define ItemBase__IsKeyRingItem_x                                  0x14064BE20
#define ItemBase__ValueSellMerchant_x                              0x14064FFD0
#define ItemClient__CanDrop_x                                      0x1402B1650
#define ItemClient__CanGoInBag_x                                   0x1402B1780
#define ItemClient__CreateItemClient_x                             0x1402B1A00
#define ItemClient__dItemClient_x                                  0x1402B14C0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401AA290
#define EQ_LoadingS__Array_x                                       0x140D24230

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14065C960
#define PcBase__GetCombatAbility_x                                 0x14065D050
#define PcBase__GetCombatAbilityTimer_x                            0x14065D0F0
#define PcBase__GetItemContainedRealEstateIds_x                    0x14065D890
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14065E3D0
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
#define PlayerBase__CanSee_x                                       0x140631190
#define PlayerBase__CanSee1_x                                      0x140631260
#define PlayerBase__GetVisibilityLineSegment_x                     0x140631740
#define PlayerBase__HasProperty_x                                  0x140631910
#define PlayerBase__IsTargetable_x                                 0x1406319D0
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
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140630D50

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402B68C0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402B64C0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402B6530
#define KeypressHandler__ClearCommandStateArray_x                  0x1402B6850  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402B69E0
#define KeypressHandler__HandleKeyUp_x                             0x1402B6B00
#define KeypressHandler__SaveKeymapping_x                          0x1402B6760  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1406755E0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x14066F3B0

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
#define IconCache__GetIcon_x                                       0x1403C12D0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403B5950
#define CContainerMgr__CloseContainer_x                            0x1403B5290
#define CContainerMgr__OpenExperimentContainer_x                   0x1403B5CD0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404AC2C0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402A9080

// CLootWnd
#define CLootWnd__LootAll_x                                        0x14043CAD0
#define CLootWnd__RequestLootSlot_x                                0x14043DB00

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
#define CTargetWnd__WndNotification_x                              0x140509000
#define CTargetWnd__RefreshTargetBuffs_x                           0x140508710
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x140507F10

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x140510690  // CTaskWnd::UpdateTimes

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
#define CTextureAnimation__Draw_x                                  0x1405A6AC0
#define CTextureAnimation__SetCurCell_x                            0x1405A6DD0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402A7280

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x140690150
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1406901D0
#define CharacterBase__IsExpansionFlag_x                           0x1401FB970

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140392340
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140392D40
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140394290

// messages
#define msg_spell_worn_off_x                                       0x140211360
#define msg_new_text_x                                             0x14020CB10
#define __msgTokenTextParam_x                                      0x140204200
#define msgTokenText_x                                             0x140204110

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140331D40
#define SpellManager__GetSpellByGroupAndRank_x                     0x140331C60

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140640090

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140435F40

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403BA690
#define CCursorAttachment__IsOkToActivate_x                        0x1403BD940
#define CCursorAttachment__RemoveAttachment_x                      0x1403BDBF0
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405DFC20
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405DFE10
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405DFE20

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
#define COptionsWnd__FillChatFilterList_x                          0x14048ED70

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x14032A690
#define CResolutionHandler__UpdateResolution_x                     0x14058C230

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403B1C40

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x140694550  // Rename..?
#define CDistillerInfo__Instance_x                                 0x140694440  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403D8500
#define CGroupWnd__UpdateDisplay_x                                 0x1403D80E0

// ItemBase
#define ItemBase__IsLore_x                                         0x14064BF50
#define ItemBase__IsLoreEquipped_x                                 0x14064BFE0

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
#define KeyCombo__GetTextDescription_x                             0x14059C880

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140086990

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140348910

// AchievementManager
#define AchievementManager__Instance_x                             0x14008EB50

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x140678640
#define FreeToPlayClient__RestrictionInfo_x                        0x140ACEBB0

// UdpConnection
#define UdpConnection__GetStats_x                                  0x14053F010

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x140829610
#define CGFScreenWnd__CGFScreenWnd_x                               0x140071300
#define CGFScreenWnd__CGFScreenWnd1_x                              0x140071490
#define CGFScreenWnd__dCGFScreenWnd_x                              0x140071640

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
