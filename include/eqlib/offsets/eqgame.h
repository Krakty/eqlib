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

#define __ClientDate                                               20251022u
#define __ExpectedVersionDate                                     "Oct 22 2025"
#define __ExpectedVersionTime                                     "13:59:42"
#define __ActualVersionDate_x                                      0x140965AC0
#define __ActualVersionTime_x                                      0x140965AB0
#define __ActualVersionBuild_x                                     0x1408FB690

// Memory Protection
#define __MemChecker0_x                                            0x1402C1390
#define __MemChecker1_x                                            0x14058A530
#define __MemChecker4_x                                            0x14028EC90
#define __EncryptPad0_x                                            0x140D35ED0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E6E910
#define instEQZoneInfo_x                                           0x140E6EB04 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x140222B70
#define __gfMaxZoomCameraDistance_x                                0x1408FC938
#define __gfMaxCameraDistance_x                                    0x140AA4194
#define __CurrentSocial_x                                          0x140BF1950 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D2D720
#define g_eqCommandStates_x                                        0x140D2E7B0
#define __CommandList_x                                            0x140D2E9F0
#define __ScreenMode_x                                             0x140DB6224
#define __gWorld_x                                                 0x140E66DD8
#define __gpbCommandEvent_x                                        0x140E67330
#define __ServerHost_x                                             0x140E67528
#define __Guilds_x                                                 0x140E6D4C0
#define __MemCheckBitmask_x                                        0x140E6EE4F
#define __MemCheckActive_x                                         0x140E70559
#define __MouseEventTime_x                                         0x140EE3EC8
#define DI8__MouseState_x                                          0x140EE8128
#define __heqmain_x                                                0x140EEA5C8
#define DI8__Mouse_x                                               0x140EE8078
#define __HWnd_x                                                   0x140EE8100
#define __Mouse_x                                                  0x140EE8034
#define DI8__Keyboard_x                                            0x140EE8050
#define __LoginName_x                                              0x140EEACAC
#define __CurrentMapLabel_x                                        0x140EFE7C0
#define __LabelCache_x                                             0x140EFF390
#define __ChatFilterDefs_x                                         0x140A3E8F0
#define Teleport_Table_Size_x                                      0x140E673C0
#define Teleport_Table_x                                           0x140E67850

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E69850
#define pinstActiveBanker_x                                        0x140E67208
#define pinstActiveCorpse_x                                        0x140E671F8
#define pinstActiveGMaster_x                                       0x140E67200
#define pinstActiveMerchant_x                                      0x140E671F0
#define pinstAltAdvManager_x                                       0x140DB7058
#define pinstCEverQuest_x                                          0x140EE8070
#define pinstCamActor_x                                            0x140DB6210
#define pinstCDBStr_x                                              0x140DB5E10
#define pinstCDisplay_x                                            0x140E66D90
#define pinstControlledPlayer_x                                    0x140E67298
#define pinstCResolutionHandler_x                                  0x140F0FBC8
#define pinstCSidlManager_x                                        0x140F10930
#define pinstCXWndManager_x                                        0x140F10928
#define instDynamicZone_x                                          0x140E6D380 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E6D3CE
#define instExpeditionName_x                                       0x140E6D40E
#define pinstDZMember_x                                            0x140E6D498
#define pinstDZTimerInfo_x                                         0x140E6D4A0
#define pinstEqLogin_x                                             0x140EEA5F0
#define instTribute_x                                              0x140D28D60
#define pinstDeviceInputProxy_x                                    0x140E6E96C
#define pinstEQSoundManager_x                                      0x140DB73E0
#define pinstEQSpellStrings_x                                      0x140D9A9A0
#define pinstSGraphicsEngine_x                                     0x140F0F958
#define pinstLocalPC_x                                             0x140E66DC0
#define pinstLocalPlayer_x                                         0x140E671E8
#define pinstCMercenaryClientManager_x                             0x140EE57D8
#define pinstModelPlayer_x                                         0x140E67218
#define pinstRenderInterface_x                                     0x140F0F970
#define pinstSkillMgr_x                                            0x140EE7478
#define pinstSpawnManager_x                                        0x140EE5BA0
#define pinstSpellManager_x                                        0x140EE74E0
#define pinstStringTable_x                                         0x140E66DC8
#define pinstSwitchManager_x                                       0x140E66D10
#define pinstTarget_x                                              0x140E67290
#define pinstTaskMember_x                                          0x140D28D50 // Part of g_taskManager
#define pinstTradeTarget_x                                         0x140E67210
#define instTributeActive_x                                        0x140D28D89
#define pinstViewActor_x                                           0x140DB6208
#define pinstWorldData_x                                           0x140E67418
#define pinstPlayerPath_x                                          0x140EE5BC8
#define pinstTargetIndicator_x                                     0x140EE7590
#define EQObject_Top_x                                             0x140E67338

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140EFB920
#define pinstCContainerMgr_x                                       0x140DB6240
#define pinstCContextMenuManager_x                                 0x140F10610
#define pinstCInvSlotMgr_x                                         0x140DB61F8
#define pinstCItemDisplayManager_x                                 0x140EFE390
#define pinstCPopupWndManager_x                                    0x140EFEC20
#define pinstCSpellDisplayMgr_x                                    0x140EFF270
#define pinstCTaskManager_x                                        0x140BF1C90
#define pinstEQSuiteTextureLoader_x                                0x140D3F5E0
#define pinstItemIconCache_x                                       0x140EFBC80
#define pinstLootFiltersManager_x                                  0x140DB5858
#define pinstGFViewListener_x                                      0x140F0FDE8


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x14024C870
#define __CastRay_x                                                0x140244B00
#define __CastRay2_x                                               0x140244800
#define __compress_block_x                                         0x14053F8F0
#define __ConvertItemTags_x                                        0x140244F60
#define __CleanItemTags_x                                          0x14008A750
#define __CreateCascadeMenuItems_x                                 0x14018E5F0
#define __decompress_block_x                                       0x140585D40
#define __DoesFileExist_x                                          0x14058E3E0
#define __EQGetTime_x                                              0x14058AAE0
#define __ExecuteCmd_x                                             0x14021A1D0
#define __FixHeading_x                                             0x1406451C0
#define __FlushDxKeyboard_x                                        0x140345690
#define __get_bearing_x                                            0x14024EAA0
#define __get_melee_range_x                                        0x14024EB90
#define __GetAnimationCache_x                                      0x1403C6B50
#define __GetGaugeValueFromEQ_x                                    0x1404FF400
#define __GetLabelFromEQ_x                                         0x140500A00
#define __GetXTargetType_x                                         0x1406464A0   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140645240
#define __HelpPath_x                                               0x140EE3D90   // Why?
#define __NewUIINI_x                                               0x14050C440   // Why?
#define __ProcessDeviceEvents_x                                    0x14028F2A0
#define __ProcessGameEvents_x                                      0x140283DA0
#define __ProcessKeyboardEvents_x                                  0x140346DE0
#define __ProcessMouseEvents_x                                     0x1402854C0
#define __SaveColors_x                                             0x14019E610
#define __STMLToText_x                                             0x14059DFA0
#define __WndProc_x                                                0x140343E30
#define CMemoryMappedFile__SetFile_x                               0x1407F1F10
#define DrawNetStatus_x                                            0x1402CFA70
#define Util__FastTime_x                                           0x14058A010
#define __eq_delete_x                                              0x1406BDF28
#define __eq_new_x                                                 0x1406BE180
#define __CopyLayout_x                                             0x1402BD790
#define __ThrottleFrameRate_x                                      0x140273444
#define __ThrottleFrameRateEnd_x                                   0x1402734A4

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x1403568D0
#define CAAWnd__Update_x                                           0x140356BD0
#define CAAWnd__UpdateSelected_x                                   0x140357DD0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400ACD20
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A5700
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140848768
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AD650

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401A9870
#define AltAdvManager__IsAbilityReady_x                            0x1401A9D00
#define AltAdvManager__GetAAById_x                                 0x1401A9140
#define AltAdvManager__CanTrainAbility_x                           0x1401A8F30
#define AltAdvManager__CanSeeAbility_x                             0x1401A8BF0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D3720
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D4580
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D47D0
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400E9010
#define CharacterZoneClient__CanUseItem_x                          0x1400E95D0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D51A0
#define CharacterZoneClient__CastSpell_x                           0x1400D5240
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E4E10
#define CharacterZoneClient__Cur_HP_x                              0x1400EACF0
#define CharacterZoneClient__Cur_Mana_x                            0x1400EAEB0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D85B0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F1530
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FFDD0  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D9A50
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E8910
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F30E0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F1FC0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D9BD0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C9F00
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400CB900
#define CharacterZoneClient__GetHPRegen_x                          0x1400F2700
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400EA960
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F3370
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D9C50
#define CharacterZoneClient__GetManaRegen_x                        0x1400F40F0
#define CharacterZoneClient__GetModCap_x                           0x1400FB580
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D9EE0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400DA0B0
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CEA90
#define CharacterZoneClient__HasSkill_x                            0x1400F70C0
#define CharacterZoneClient__HitBySpell_x                          0x1400DAB40
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DE4B0
#define CharacterZoneClient__MakeMeVisible_x                       0x1400FB060
#define CharacterZoneClient__Max_Endurance_x                       0x1402EB890  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400FB3B0
#define CharacterZoneClient__Max_Mana_x                            0x1402EBAB0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400FB810
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E1960
#define CharacterZoneClient__SpellDuration_x                       0x1400E2690
#define CharacterZoneClient__TotalEffect_x                         0x1400E39F0
#define CharacterZoneClient__UseSkill_x                            0x140100D50


// CBankWnd
#define CBankWnd__WndNotification_x                                0x1403756A0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14037FA40

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14037B8C0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14037F4C0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x1403821A0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AC3650

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403A5000
#define CChatWindowManager__InitContextMenu_x                      0x1403A5190
#define CChatWindowManager__FreeChatWindow_x                       0x1403A4060
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403AD0F0
#define CChatWindowManager__CreateChatWindow_x                     0x1403A3A90

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x1401092B0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403AE140
#define CChatWindow__Clear_x                                       0x1403AF0F0
#define CChatWindow__WndNotification_x                             0x1403B02E0
#define CChatWindow__AddHistory_x                                  0x1403AEBF0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405CB7C0
#define CContextMenu__RemoveMenuItem_x                             0x1405CBBB0
#define CContextMenu__RemoveAllMenuItems_x                         0x1405CBB80
#define CContextMenu__CheckMenuItem_x                              0x1405CB9F0
#define CContextMenu__SetMenuItem_x                                0x1405CBBD0
#define CContextMenu__AddSeparator_x                               0x1405CB930

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405BD680
#define CContextMenuManager__RemoveMenu_x                          0x1405BDC60
#define CContextMenuManager__PopupMenu_x                           0x1405BD9A0
#define CContextMenuManager__Flush_x                               0x1405BD700
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403BE6E0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x140697EE0
#define CChatService__GetFriendName_x                              0x140697EF0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405AE560
#define CComboWnd__Draw_x                                          0x1405AE660
#define CComboWnd__GetCurChoice_x                                  0x1405AE940  // unused
#define CComboWnd__GetListRect_x                                   0x1405AE9E0
#define CComboWnd__InsertChoice_x                                  0x1405AED20
#define CComboWnd__SetColors_x                                     0x1405AF0B0
#define CComboWnd__SetChoice_x                                     0x1405AF070
#define CComboWnd__GetItemCount_x                                  0x1405AE9D0
#define CComboWnd__GetCurChoiceText_x                              0x1405AE980  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405AE910
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405AEDE0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403BC400
#define CContainerWnd__SetContainer_x                              0x140414810
#define CContainerWnd__vftable_x                                   0x1409D9FC0

// CDisplay
#define CDisplay__cameraType_x                                     0x140DB5FCC
#define CDisplay__ZoneMainUI_x                                     0x1405E5B20
#define CDisplay__PreZoneMainUI_x                                  0x14019B510
#define CDisplay__CleanGameUI_x                                    0x14018D6B0
#define CDisplay__GetClickedActor_x                                0x140191880
#define CDisplay__GetUserDefinedColor_x                            0x1401924F0
#define CDisplay__InitCharSelectUI_x                               0x1401927A0
#define CDisplay__ReloadUI_x                                       0x14019D810
#define CDisplay__RestartUI_x                                      0x1401FEE10
#define CDisplay__WriteTextHD2_x                                   0x1401A4820
#define CDisplay__TrueDistance_x                                   0x1401A44D0
#define CDisplay__SetViewActor_x                                   0x1401A0D40
#define CDisplay__GetFloorHeight_x                                 0x140191AE0
#define CDisplay__ToggleScreenshotMode_x                           0x1401A3FC0
#define CDisplay__RealRender_World_x                               0x14019CBE0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405EFD40
#define CEditWnd__DrawCaret_x                                      0x1405E1800  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405E1CC0
#define CEditWnd__GetCaretPt_x                                     0x1405E1F40  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405E1F80
#define CEditWnd__GetDisplayString_x                               0x1405E21F0
#define CEditWnd__GetHorzOffset_x                                  0x1405E2430
#define CEditWnd__GetLineForPrintableChar_x                        0x1405E2580
#define CEditWnd__GetSelStartPt_x                                  0x1405E2860  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405E26B0
#define CEditWnd__PointFromPrintableChar_x                         0x1405E3410
#define CEditWnd__ReplaceSelection_x                               0x1405E37C0
#define CEditWnd__SelectableCharFromPoint_x                        0x1405E3C60
#define CEditWnd__SetEditable_x                                    0x1405E3EF0
#define CEditWnd__SetWindowText_x                                  0x1405E3F20

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140274550
#define CEverQuest__ClickedPlayer_x                                0x140268510
#define CEverQuest__CreateTargetIndicator_x                        0x140268DD0
#define CEverQuest__DoTellWindow_x                                 0x140108FC0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140109890 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140275F40
#define CEverQuest__dsp_chat_x                                     0x140108A00 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402A0CC0
#define CEverQuest__Emote_x                                        0x140276930
#define CEverQuest__GetBodyTypeDesc_x                              0x140277710
#define CEverQuest__GetClassDesc_x                                 0x140277770
#define CEverQuest__GetClassThreeLetterCode_x                      0x140277B40
#define CEverQuest__GetDeityDesc_x                                 0x140277DF0
#define CEverQuest__GetLangDesc_x                                  0x140278220
#define CEverQuest__GetRaceDesc_x                                  0x1402785C0
#define CEverQuest__InterpretCmd_x                                 0x140279F50
#define CEverQuest__LeftClickedOnPlayer_x                          0x14028F310
#define CEverQuest__LMouseUp_x                                     0x14027B9D0
#define CEverQuest__RightClickedOnPlayer_x                         0x14028C990
#define CEverQuest__RMouseUp_x                                     0x140286050
#define CEverQuest__SetGameState_x                                 0x140291D80
#define CEverQuest__UPCNotificationFlush_x                         0x1402976F0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14027B630
#define CEverQuest__ReportSuccessfulHeal_x                         0x140287420
#define CEverQuest__ReportSuccessfulHit_x                          0x140288240

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403D1A40

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C37A0
#define CGuild__GetGuildName_x                                     0x1400C37E0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403F4EA0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402B2E60
#define CHotButton__SetCheck_x                                     0x1402B3130

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x14040D520
#define CInvSlotMgr__MoveItem_x                                    0x14040D700
#define CInvSlotMgr__SelectSlot_x                                  0x14040F130

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x14040A710
#define CInvSlot__SliderComplete_x                                 0x14040BC60
#define CInvSlot__GetItemBase_x                                    0x1404060A0
#define CInvSlot__UpdateItem_x                                     0x14040C120

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1404104C0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140431A10
#define CItemDisplayWnd__UpdateStrings_x                           0x140434610
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x14042E1D0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x14042FB40
#define CItemDisplayWnd__RequestConvertItem_x                      0x140430E20

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404FBE80
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404FDC10

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140538C50

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x14042A8B0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x1401543C0

// CLabel
#define CLabel__UpdateText_x                                       0x14043BA10

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405B1EF0
#define CListWnd__dCListWnd_x                                      0x1405B2340
#define CListWnd__vftable_x                                        0x140AC17A0
#define CListWnd__AddColumn_x                                      0x1405B29E0
#define CListWnd__AddColumn1_x                                     0x1405B2A80
#define CListWnd__AddLine_x                                        0x1405B2BE0
#define CListWnd__AddString_x                                      0x1405B3170
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405B36E0
#define CListWnd__CalculateVSBRange_x                              0x1405B39C0
#define CListWnd__ClearSel_x                                       0x1405B3B70
#define CListWnd__ClearAllSel_x                                    0x1405B3B10
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405B3BD0
#define CListWnd__Compare_x                                        0x1405B3D90
#define CListWnd__Draw_x                                           0x1405B4260
#define CListWnd__DrawColumnSeparators_x                           0x1405B4E10
#define CListWnd__DrawHeader_x                                     0x1405B4ED0
#define CListWnd__DrawItem_x                                       0x1405B55B0
#define CListWnd__DrawLine_x                                       0x1405B5F30
#define CListWnd__DrawSeparator_x                                  0x1405B63F0
#define CListWnd__EnableLine_x                                     0x1405B6810
#define CListWnd__EnsureVisible_x                                  0x1405B6870
#define CListWnd__ExtendSel_x                                      0x1405B6970
#define CListWnd__GetColumnMinWidth_x                              0x1405B6D00
#define CListWnd__GetColumnWidth_x                                 0x1405B6D80
#define CListWnd__GetCurSel_x                                      0x1405B6E80
#define CListWnd__GetItemData_x                                    0x1405B7200
#define CListWnd__GetItemHeight_x                                  0x1405B7240
#define CListWnd__GetItemRect_x                                    0x1405B7460
#define CListWnd__GetItemText_x                                    0x1405B7700
#define CListWnd__GetSelList_x                                     0x1405B7950
#define CListWnd__GetSeparatorRect_x                               0x1405B7B40
#define CListWnd__InsertLine_x                                     0x1405B8FB0
#define CListWnd__RemoveLine_x                                     0x1405B9620
#define CListWnd__SetColors_x                                      0x1405B99E0
#define CListWnd__SetColumnJustification_x                         0x1405B9A00
#define CListWnd__SetColumnLabel_x                                 0x1405B9A80
#define CListWnd__SetColumnWidth_x                                 0x1405B9C20
#define CListWnd__SetCurSel_x                                      0x1405B9CF0
#define CListWnd__SetItemColor_x                                   0x1405B9F60
#define CListWnd__SetItemData_x                                    0x1405BA000
#define CListWnd__SetItemText_x                                    0x1405BA240
#define CListWnd__Sort_x                                           0x1405BA650
#define CListWnd__ToggleSel_x                                      0x1405BA7C0
#define CListWnd__SetColumnsSizable_x                              0x1405B9C70
#define CListWnd__SetItemWnd_x                                     0x1405BA370
#define CListWnd__GetItemWnd_x                                     0x1405B78E0
#define CListWnd__SetItemIcon_x                                    0x1405BA040
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405B34B0
#define CListWnd__SetVScrollPos_x                                  0x1405BA5B0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x14044EEA0

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A272F0
#define MapViewMap__Clear_x                                        0x140450A20
#define MapViewMap__SetZoom_x                                      0x140457070
#define MapViewMap__HandleLButtonDown_x                            0x140453BB0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x1404787D0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x14047EF90
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x14047F740
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140482F90
#define CMerchantWnd__SelectBuySellSlot_x                          0x1404822E0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140487240

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x140673090
#define CPacketScrambler__hton_x                                   0x140673080

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405DB0C0
#define CSidlManagerBase__FindAnimation1_x                         0x1405DB000
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405DB6F0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405DB4A0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405DA400
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405DA390
#define CSidlManagerBase__CreateXWnd_x                             0x1405D99D0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404EEE60
#define CSidlManager__CreateXWnd_x                                 0x1404EF020

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14059FA90
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14059FBC0
#define CSidlScreenWnd__ConvertToRes_x                             0x1405EA280 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14059FD40
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14059F1C0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14059F290
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14059F4A0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1405A0430
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405A0660
#define CSidlScreenWnd__GetChildItem_x                             0x1405A0800
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405A0A50
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405AAB00 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405A0DC0
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405A1130
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405A19F0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405A23F0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F0FC88
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405A2A80
#define CSidlScreenWnd__StoreIniVis_x                              0x1405A3270
#define CSidlScreenWnd__vftable_x                                  0x140AC0A28
#define CSidlScreenWnd__WndNotification_x                          0x1405A32C0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14032E610 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14032EAB0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14032E9E0
#define CSkillMgr__IsActivatedSkill_x                              0x14032EE60
#define CSkillMgr__IsCombatSkill_x                                 0x14032EEA0
#define CSkillMgr__GetSkillTimerDuration_x                         0x14032EDD0
#define CSkillMgr__GetSkillLastUsed_x                              0x14032EA30

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405BB140
#define CSliderWnd__SetValue_x                                     0x1405BB950
#define CSliderWnd__SetNumTicks_x                                  0x1405BB7D0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404F55D0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405C00E0
#define CStmlWnd__CalculateHSBRange_x                              0x1405AA4F0
#define CStmlWnd__CalculateVSBRange_x                              0x1405C0F80
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405C1A80
#define CStmlWnd__ForceParseNow_x                                  0x1405C1B20
#define CStmlWnd__GetVisibleText_x                                 0x1405C21F0
#define CStmlWnd__MakeStmlColorTag_x                               0x1405C3F50
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405C3F90
#define CStmlWnd__SetSTMLText_x                                    0x1405CAF60
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405CB110
#define CStmlWnd__UpdateHistoryString_x                            0x1405CB4A0

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405BBD20
#define CTabWnd__DrawCurrentPage_x                                 0x1405BBDC0
#define CTabWnd__DrawTab_x                                         0x1405BC190
#define CTabWnd__GetTabRect_x                                      0x1405BC7F0
#define CTabWnd__InsertPage_x                                      0x1405BCAC0
#define CTabWnd__RemovePage_x                                      0x1405BCD50
#define CTabWnd__SetPage_x                                         0x1405BCEB0
#define CTabWnd__UpdatePage_x                                      0x1405BD1B0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405E4380
#define CPageWnd__SetTabText_x                                     0x1405E43F0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BCD70  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BD180


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405D2A80
#define CTextureFont__DrawWrappedText1_x                           0x1405D2990
#define CTextureFont__DrawWrappedText2_x                           0x1405D2BB0
#define CTextureFont__GetTextExtent_x                              0x1405D2F60
#define CTextureFont__GetHeight_x                                  0x1405D2F20

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405E89E0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x14059C690

// CXStr
#define CXStr__gFreeLists_x                                        0x140D3EF50
#define CXStr__gCXStrAccess_x                                      0x140F0F7E8

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405A5B60
#define CXWnd__ClrFocus_x                                          0x1405A5E50
#define CXWnd__Destroy_x                                           0x1405A5FD0
#define CXWnd__DoAllDrawing_x                                      0x1405A60E0
#define CXWnd__DrawColoredRect_x                                   0x1405A68B0
#define CXWnd__DrawTooltip_x                                       0x1405A7F40
#define CXWnd__DrawTooltipAtPoint_x                                0x1405A7FF0
#define CXWnd__GetChildItem_x                                      0x1405A8900
#define CXWnd__GetChildWndAt_x                                     0x1405A89C0
#define CXWnd__GetClientRect_x                                     0x1405A8C60
#define CXWnd__GetClientClipRect_x                                 0x1405A8B30
#define CXWnd__GetRelativeRect_x                                   0x1405AA610
#define CXWnd__GetScreenClipRect_x                                 0x1405AA710
#define CXWnd__GetScreenRect_x                                     0x1405AA880
#define CXWnd__GetTooltipRect_x                                    0x1405AAA00
#define CXWnd__IsActive_x                                          0x1405AAFC0
#define CXWnd__IsDescendantOf_x                                    0x1405AAFF0
#define CXWnd__IsReallyVisible_x                                   0x1405AB060
#define CXWnd__IsType_x                                            0x1405AB0B0
#define CXWnd__Minimize_x                                          0x1405AB1B0
#define CXWnd__ProcessTransition_x                                 0x1405AC090
#define CXWnd__Resize_x                                            0x1405AC1B0
#define CXWnd__Right_x                                             0x1405AC250
#define CXWnd__SetFocus_x                                          0x1405AC610
#define CXWnd__SetFont_x                                           0x1405AC660
#define CXWnd__SetKeyTooltip_x                                     0x1405AC760
#define CXWnd__SetMouseOver_x                                      0x1405AC8A0
#define CXWnd__SetParent_x                                         0x1405AC920
#define CXWnd__StartFade_x                                         0x1405ACD50
#define CXWnd__vftable_x                                           0x140AC1000
#define CXWnd__CXWnd_x                                             0x1405A46E0
#define CXWnd__dCXWnd_x                                            0x1405A5040

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405EF4C0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405CCD50
#define CXWndManager__DrawCursor_x                                 0x1405CD030
#define CXWndManager__DrawWindows_x                                0x1405CD290
#define CXWndManager__GetKeyboardFlags_x                           0x1405CD8E0
#define CXWndManager__HandleKeyboardMsg_x                          0x1405CD920
#define CXWndManager__RemoveWnd_x                                  0x1405D1140

// CDBStr
#define CDBStr__GetString_x                                        0x14018B870

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x14067CEE0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D1220
#define CCharacterListWnd__EnterWorld_x                            0x1400D0230
#define CCharacterListWnd__Quit_x                                  0x1400D1200
#define CCharacterListWnd__UpdateList_x                            0x1400D2080

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x14064B210
#define ItemBase__CreateItemTagString_x                            0x14064BC70
#define ItemBase__GetImageNum_x                                    0x14064E200
#define ItemBase__GetItemValue_x                                   0x14064FD20
#define ItemBase__IsEmpty_x                                        0x140651930
#define ItemBase__IsKeyRingItem_x                                  0x140652030
#define ItemBase__ValueSellMerchant_x                              0x140656240
#define ItemClient__CanDrop_x                                      0x1402B5760
#define ItemClient__CanGoInBag_x                                   0x1402B5890
#define ItemClient__CreateItemClient_x                             0x1402B5B10
#define ItemClient__dItemClient_x                                  0x1402B55D0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401AB220
#define EQ_LoadingS__Array_x                                       0x140D2B230

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140662010
#define PcBase__GetCombatAbility_x                                 0x140662700
#define PcBase__GetCombatAbilityTimer_x                            0x1406627A0
#define PcBase__GetItemContainedRealEstateIds_x                    0x140662F40
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x140663A80
#define PcClient__AlertInventoryChanged_x                          0x1402D7CA0
#define PcClient__GetConLevel_x                                    0x1402D82B0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402DAA30
#define PcClient__HasLoreItem_x                                    0x1402DBAE0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402E8BE0
#define PcZoneClient__RemoveMyAffect_x                             0x1402EC9D0

// EQGroundItemListManager
#define EQGroundItem__EQGroundItem_x                               0x14021EB10
#define EQGroundItemListManager__Add_x                             0x14021ECC0
#define EQGroundItemListManager__Clear_x                           0x14021ED60
#define EQGroundItemListManager__Delete_x                          0x14021EE20
#define EQGroundItemListManager__Instance_x                        0x14021EEB0

// EQPlacedItemManager
#define EQPlacedItemManager__Add_x                                 0x140259960

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x1401860A0

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140638040
#define PlayerBase__CanSee1_x                                      0x140638110
#define PlayerBase__GetVisibilityLineSegment_x                     0x1406385F0
#define PlayerBase__HasProperty_x                                  0x1406387C0
#define PlayerBase__IsTargetable_x                                 0x140638880
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402FA580
#define PlayerClient__GetPcClient_x                                0x1402FD0B0
#define PlayerClient__PlayerClient_x                               0x1402F28D0
#define PlayerClient__SetNameSpriteState_x                         0x1403007E0
#define PlayerClient__SetNameSpriteTint_x                          0x1403017A0
#define PlayerZoneClient__ChangeHeight_x                           0x1403101D0
#define PlayerZoneClient__DoAttack_x                               0x140310EE0
#define PlayerZoneClient__GetLevel_x                               0x140314620
#define PlayerZoneClient__IsValidTeleport_x                        0x14025C6F0
#define PlayerZoneClient__LegalPlayerRace_x                        0x140199D90

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1403096D0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x140309780  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x140309880
#define PlayerManagerClient__CreatePlayer_x                        0x1403091A0
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140637C00

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402BACB0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402BA5E0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402BA650
#define KeypressHandler__ClearCommandStateArray_x                  0x1402BAC40  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402BADD0
#define KeypressHandler__HandleKeyUp_x                             0x1402BAEF0
#define KeypressHandler__SaveKeymapping_x                          0x1402BAAD0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x14067AA00  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1406747D0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402E1990  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402E6D10
#define PcZoneClient__GetPcSkillLimit_x                            0x1402E9370
#define PcZoneClient__RemovePetEffect_x                            0x1402ECCB0
#define PcZoneClient__HasAlternateAbility_x                        0x1402E9F50
#define PcZoneClient__CanEquipItem_x                               0x1402E5010
#define PcZoneClient__GetItemByID_x                                0x1402E7C30
#define PcZoneClient__RemoveBuffEffect_x                           0x1402EC850
#define PcZoneClient__BandolierSwap_x                              0x1402E4060

// Doors
#define EQSwitch__UseSwitch_x                                      0x140261220

// IconCache
#define IconCache__GetIcon_x                                       0x1403C6B80

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403BB1B0
#define CContainerMgr__CloseContainer_x                            0x1403BAAF0
#define CContainerMgr__OpenExperimentContainer_x                   0x1403BB530

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404B2A70

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402AD160

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140442D10
#define CLootWnd__RequestLootSlot_x                                0x140443D40

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401DA8F0
#define EQ_Spell__SpellAffects_x                                   0x1401DBBC0
#define EQ_Spell__SpellAffectBase_x                                0x1401DBB20
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400DA240
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400DA1F0
#define EQ_Spell__IsSPAStacking_x                                  0x1401DB7F0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401DB3A0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401DAC70

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C22E0

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x14050FC40
#define CTargetWnd__RefreshTargetBuffs_x                           0x14050F350
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x14050EB50

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1405172E0  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140182A50
#define CTaskManager__GetTaskStatus_x                              0x140182B60
#define CTaskManager__GetElementDescription_x                      0x1401826E0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401D8C10
#define EqSoundManager__PlayScriptMp3_x                            0x1401D7A50
#define EqSoundManager__SoundAssistPlay_x                          0x140333C50  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140333F90  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405ADAF0
#define CTextureAnimation__SetCurCell_x                            0x1405ADE00

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402AB360

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1406955B0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x140695630
#define CharacterBase__IsExpansionFlag_x                           0x1401FE480

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140395C40
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140396660
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140397BB0

// messages
#define msg_spell_worn_off_x                                       0x140215130
#define msg_new_text_x                                             0x1402108E0
#define __msgTokenTextParam_x                                      0x140207F90
#define msgTokenText_x                                             0x140207EA0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140335880
#define SpellManager__GetSpellByGroupAndRank_x                     0x1403357A0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140646880

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x14043C160

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403BFF10
#define CCursorAttachment__IsOkToActivate_x                        0x1403C31D0
#define CCursorAttachment__RemoveAttachment_x                      0x1403C3480
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405E6E80
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405E7070
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405E7080

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x14014F110
#define CFindItemWnd__Update_x                                     0x14014FAB0
#define CFindItemWnd__PickupSelectedItem_x                         0x140149550

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x140159300
#define LootFiltersManager__GetItemFilterData_x                    0x140159E20
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14015A6C0
#define LootFiltersManager__SetItemLootFilter_x                    0x14015A970

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x140495400

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x14032E1D0
#define CResolutionHandler__UpdateResolution_x                     0x140593040

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403B74A0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x140699A20  // Rename..?
#define CDistillerInfo__Instance_x                                 0x140699910  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403DDDC0
#define CGroupWnd__UpdateDisplay_x                                 0x1403DD9A0

// ItemBase
#define ItemBase__IsLore_x                                         0x140652160
#define ItemBase__IsLoreEquipped_x                                 0x1406521F0

#define MultipleItemMoveManager__ProcessMove_x                     0x1402CDB50

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140259AC0
#define EQPlacedItemManager__GetItemByGuid_x                       0x140259A50
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140259A90

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140328610

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140126CB0
#define FactionManagerClient__HandleFactionMessage_x               0x140127090
#define FactionManagerClient__GetFactionStanding_x                 0x140126480
#define FactionManagerClient__GetMaxFaction_x                      0x140126480
#define FactionManagerClient__GetMinFaction_x                      0x140126330

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AF330

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140132490

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401B3DA0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401B2F60
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401B3BC0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401B3B40  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x14033AB30

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140328610

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405A38B0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140086E10

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14034C420

// AchievementManager
#define AchievementManager__Instance_x                             0x14008EFD0

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x14067DA60
#define FreeToPlayClient__RestrictionInfo_x                        0x140AD58E0

// UdpConnection
#define UdpConnection__GetStats_x                                  0x140545D10

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x14082FF90
#define CGFScreenWnd__CGFScreenWnd_x                               0x140071500
#define CGFScreenWnd__CGFScreenWnd1_x                              0x140071690
#define CGFScreenWnd__dCGFScreenWnd_x                              0x140071840

#if __has_include("../../../../private/eqgame-private.h")
#include "../../../../private/eqgame-private.h"
#endif
