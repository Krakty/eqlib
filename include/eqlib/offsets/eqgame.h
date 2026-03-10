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

#define __ClientDate                                               20260205u
#define __ExpectedVersionDate                                     "Feb  5 2026"
#define __ExpectedVersionTime                                     "22:37:51"
#define __ActualVersionDate_x                                      0x1409840B8
#define __ActualVersionTime_x                                      0x1409840A8
#define __ActualVersionBuild_x                                     0x1409192A0

// Memory Protection
#define __MemChecker0_x                                            0x1402CB420
#define __MemChecker1_x                                            0x1405A0D80
#define __MemChecker4_x                                            0x140298960
#define __EncryptPad0_x                                            0x140D56FC0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E8FAE0
#define instEQZoneInfo_x                                           0x140E8FCD4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x14022B9D0
#define __gfMaxZoomCameraDistance_x                                0x14091A558
#define __gfMaxCameraDistance_x                                    0x140AC4014
#define __CurrentSocial_x                                          0x140C129B0 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D4E790
#define g_eqCommandStates_x                                        0x140D4F830
#define __CommandList_x                                            0x140D4FA60
#define __ScreenMode_x                                             0x140DD7514
#define __gWorld_x                                                 0x140E8A998
#define __gpbCommandEvent_x                                        0x140E8846C
#define __ServerHost_x                                             0x140E88658
#define __Guilds_x                                                 0x140E8E6A0
#define __MemCheckBitmask_x                                        0x140E9001F
#define __MemCheckActive_x                                         0x140E9173D
#define __MouseEventTime_x                                         0x140F050B8
#define DI8__MouseState_x                                          0x140F09268
#define __heqmain_x                                                0x140F0B6F8
#define DI8__Mouse_x                                               0x140F0B710
#define __HWnd_x                                                   0x140F0B718
#define __Mouse_x                                                  0x140F0B720
#define DI8__Keyboard_x                                            0x140F0B740
#define __LoginName_x                                              0x140F0BEAC
#define __CurrentMapLabel_x                                        0x140F1F9C0
#define __LabelCache_x                                             0x140F20590
#define __ChatFilterDefs_x                                         0x140A5DF70
#define Teleport_Table_Size_x                                      0x140E884F4
#define Teleport_Table_x                                           0x140E88970

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E8AA30
#define pinstActiveBanker_x                                        0x140E883A0
#define pinstActiveCorpse_x                                        0x140E88390
#define pinstActiveGMaster_x                                       0x140E88398
#define pinstActiveMerchant_x                                      0x140E88388
#define pinstAltAdvManager_x                                       0x140DD8240
#define pinstCEverQuest_x                                          0x140F0B758
#define pinstCamActor_x                                            0x140DD7500
#define pinstCDBStr_x                                              0x140DD6FF0
#define pinstCDisplay_x                                            0x140E88450
#define pinstControlledPlayer_x                                    0x140E88430
#define pinstCResolutionHandler_x                                  0x140F30DC8
#define pinstCSidlManager_x                                        0x140F31B30
#define pinstCXWndManager_x                                        0x140F31B28
#define instDynamicZone_x                                          0x140E8E560 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E8E5AE
#define instExpeditionName_x                                       0x140E8E5EE
#define pinstDZMember_x                                            0x140E8E678
#define pinstDZTimerInfo_x                                         0x140E8E680
#define pinstEqLogin_x                                             0x140F0B7F0
#define instTribute_x                                              0x140D49DC0
#define pinstDeviceInputProxy_x                                    0x140E8FB3C
#define pinstEQSoundManager_x                                      0x140DD85C0
#define pinstEQSpellStrings_x                                      0x140DBBB80
#define pinstSGraphicsEngine_x                                     0x140F30B58
#define pinstLocalPC_x                                             0x140E8AA18
#define pinstLocalPlayer_x                                         0x140E88380
#define pinstCMercenaryClientManager_x                             0x140F069D8
#define pinstModelPlayer_x                                         0x140E883B0
#define pinstRenderInterface_x                                     0x140F30B70
#define pinstSkillMgr_x                                            0x140F08688
#define pinstSpawnManager_x                                        0x140F06D90
#define pinstSpellManager_x                                        0x140F086F0
#define pinstStringTable_x                                         0x140E8AA20
#define pinstSwitchManager_x                                       0x140E87EF0
#define pinstTarget_x                                              0x140E88428
#define pinstTaskMember_x                                          0x140D49DB0 // Part of g_taskManager
#define pinstTradeTarget_x                                         0x140E883A8
#define instTributeActive_x                                        0x140D49DE9
#define pinstViewActor_x                                           0x140DD74F8
#define pinstWorldData_x                                           0x140E88178
#define pinstPlayerPath_x                                          0x140F06DB8
#define pinstTargetIndicator_x                                     0x140F087A0
#define EQObject_Top_x                                             0x140E88458

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140F1CB20
#define pinstCContainerMgr_x                                       0x140DD7608
#define pinstCContextMenuManager_x                                 0x140F31810
#define pinstCInvSlotMgr_x                                         0x140DD75E8
#define pinstCItemDisplayManager_x                                 0x140F1F590
#define pinstCPopupWndManager_x                                    0x140F1FE20
#define pinstCSpellDisplayMgr_x                                    0x140F20470
#define pinstCTaskManager_x                                        0x140C12CF0
#define pinstEQSuiteTextureLoader_x                                0x140D606E0
#define pinstItemIconCache_x                                       0x140F1CE80
#define pinstLootFiltersManager_x                                  0x140DD6A38
#define pinstGFViewListener_x                                      0x140F30FE8


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x140255DE0
#define __CastRay_x                                                0x14024DF60
#define __CastRay2_x                                               0x14024DC50
#define __compress_block_x                                         0x140556120
#define __ConvertItemTags_x                                        0x14024E3C0
#define __CleanItemTags_x                                          0x14008BAB0
#define __CreateCascadeMenuItems_x                                 0x140195080
#define __decompress_block_x                                       0x14059C570
#define __DoesFileExist_x                                          0x1405A4DF0
#define __EQGetTime_x                                              0x1405A1330
#define __ExecuteCmd_x                                             0x140222EB0
#define __FixHeading_x                                             0x14065CDB0
#define __FlushDxKeyboard_x                                        0x14034FD40
#define __get_bearing_x                                            0x140258100
#define __get_melee_range_x                                        0x1402581F0
#define __GetAnimationCache_x                                      0x1403D4900
#define __GetGaugeValueFromEQ_x                                    0x140515370
#define __GetLabelFromEQ_x                                         0x140516960
#define __GetXTargetType_x                                         0x14065F2A0   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14065CE30
#define __HelpPath_x                                               0x140F04F80   // Why?
#define __NewUIINI_x                                               0x1405223B0   // Why?
#define __ProcessDeviceEvents_x                                    0x140298F60
#define __ProcessGameEvents_x                                      0x14028D960
#define __ProcessKeyboardEvents_x                                  0x140351490
#define __ProcessMouseEvents_x                                     0x14028F0A0
#define __SaveColors_x                                             0x1401A4FD0
#define __STMLToText_x                                             0x1405B50F0
#define __WndProc_x                                                0x14034E4E0
#define CMemoryMappedFile__SetFile_x                               0x14080BD80
#define DrawNetStatus_x                                            0x1402DAA00
#define Util__FastTime_x                                           0x1405A0840
#define __eq_delete_x                                              0x1406D7D48
#define __eq_new_x                                                 0x1406D7FA0
#define __CopyLayout_x                                             0x1402C7810
#define __ThrottleFrameRate_x                                      0x14027CA97
#define __ThrottleFrameRateEnd_x                                   0x14027CA9D

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140360F10
#define CAAWnd__Update_x                                           0x140361210
#define CAAWnd__UpdateSelected_x                                   0x140362430

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AFCA0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A85B0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140865290
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400B0600

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401B02D0
#define AltAdvManager__IsAbilityReady_x                            0x1401B0770
#define AltAdvManager__GetAAById_x                                 0x1401AFB60
#define AltAdvManager__CanTrainAbility_x                           0x1401AF960
#define AltAdvManager__CanSeeAbility_x                             0x1401AF610

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D7730
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D85F0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D8840
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400ECB70
#define CharacterZoneClient__CanUseItem_x                          0x1400ED130
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D9220
#define CharacterZoneClient__CastSpell_x                           0x1400D92C0
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E9030
#define CharacterZoneClient__Cur_HP_x                              0x1400EE870
#define CharacterZoneClient__Cur_Mana_x                            0x1400EEA30
#define CharacterZoneClient__FindAffectSlot_x                      0x1400DC530
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F5150
#define CharacterZoneClient__GetBaseSkill_x                        0x1401036D0  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400DD9D0
#define CharacterZoneClient__GetCurrentMod_x                       0x1400EC470
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F69E0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F58D0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400DDB50
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400CD260
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400CF130
#define CharacterZoneClient__GetHPRegen_x                          0x1400F6000
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400EE4C0
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F51F0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400DDBD0
#define CharacterZoneClient__GetManaRegen_x                        0x1400F7870
#define CharacterZoneClient__GetModCap_x                           0x1400FEE80
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400DDE60
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400DE030
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400D27C0
#define CharacterZoneClient__HasSkill_x                            0x1400FA990
#define CharacterZoneClient__HitBySpell_x                          0x1400DEAC0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400E2490
#define CharacterZoneClient__MakeMeVisible_x                       0x1400FE960
#define CharacterZoneClient__Max_Endurance_x                       0x1402F5750  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400FECB0
#define CharacterZoneClient__Max_Mana_x                            0x1402F5970  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400FF110
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E5AE0
#define CharacterZoneClient__SpellDuration_x                       0x1400E6810
#define CharacterZoneClient__TotalEffect_x                         0x1400E7C00
#define CharacterZoneClient__UseSkill_x                            0x140104650


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140381C50

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14038CA30

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x1403886F0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14038C4A0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14038F290

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AE3990

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403B2390
#define CChatWindowManager__InitContextMenu_x                      0x1403B2520
#define CChatWindowManager__FreeChatWindow_x                       0x1403B1390
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403BA890
#define CChatWindowManager__CreateChatWindow_x                     0x1403B0DD0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x14010CC30

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403BB900
#define CChatWindow__Clear_x                                       0x1403BC910
#define CChatWindow__WndNotification_x                             0x1403BDB70
#define CChatWindow__AddHistory_x                                  0x1403BC410

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405E2980
#define CContextMenu__RemoveMenuItem_x                             0x1405E2D90
#define CContextMenu__RemoveAllMenuItems_x                         0x1405E2D60
#define CContextMenu__CheckMenuItem_x                              0x1405E2BD0
#define CContextMenu__SetMenuItem_x                                0x1405E2DB0
#define CContextMenu__AddSeparator_x                               0x1405E2B00

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405D4710
#define CContextMenuManager__RemoveMenu_x                          0x1405D4CE0
#define CContextMenuManager__PopupMenu_x                           0x1405D4A20
#define CContextMenuManager__Flush_x                               0x1405D4790
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403CC1B0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1406B1BB0
#define CChatService__GetFriendName_x                              0x1406B1BC0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405C55F0
#define CComboWnd__Draw_x                                          0x1405C56F0
#define CComboWnd__GetCurChoice_x                                  0x1405C59E0  // unused
#define CComboWnd__GetListRect_x                                   0x1405C5A80
#define CComboWnd__InsertChoice_x                                  0x1405C5DB0
#define CComboWnd__SetColors_x                                     0x1405C6140
#define CComboWnd__SetChoice_x                                     0x1405C6100
#define CComboWnd__GetItemCount_x                                  0x1405C5A70
#define CComboWnd__GetCurChoiceText_x                              0x1405C5A20  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405C59B0
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405C5E70

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403C9EA0
#define CContainerWnd__SetContainer_x                              0x140426C40
#define CContainerWnd__vftable_x                                   0x1409F8E30

// CDisplay
#define CDisplay__cameraType_x                                     0x140DD7244
#define CDisplay__ZoneMainUI_x                                     0x1405FCE90
#define CDisplay__PreZoneMainUI_x                                  0x1401A1EE0
#define CDisplay__CleanGameUI_x                                    0x140194140
#define CDisplay__GetClickedActor_x                                0x140198360
#define CDisplay__GetUserDefinedColor_x                            0x140198FD0
#define CDisplay__InitCharSelectUI_x                               0x140199280
#define CDisplay__ReloadUI_x                                       0x1401A41E0
#define CDisplay__RestartUI_x                                      0x140207420
#define CDisplay__WriteTextHD2_x                                   0x1401AB1F0
#define CDisplay__TrueDistance_x                                   0x1401AAE90
#define CDisplay__SetViewActor_x                                   0x1401A7700
#define CDisplay__GetFloorHeight_x                                 0x1401985C0
#define CDisplay__ToggleScreenshotMode_x                           0x1401AA980
#define CDisplay__RealRender_World_x                               0x1401A35B0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x140607360
#define CEditWnd__DrawCaret_x                                      0x1405F8B00  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405F9010
#define CEditWnd__GetCaretPt_x                                     0x1405F92B0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405F92F0
#define CEditWnd__GetDisplayString_x                               0x1405F9550
#define CEditWnd__GetHorzOffset_x                                  0x1405F97A0
#define CEditWnd__GetLineForPrintableChar_x                        0x1405F9900
#define CEditWnd__GetSelStartPt_x                                  0x1405F9BF0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405F9A30
#define CEditWnd__PointFromPrintableChar_x                         0x1405FA7B0
#define CEditWnd__ReplaceSelection_x                               0x1405FAB60
#define CEditWnd__SelectableCharFromPoint_x                        0x1405FB020
#define CEditWnd__SetEditable_x                                    0x1405FB2A0
#define CEditWnd__SetWindowText_x                                  0x1405FB2D0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14027DB70
#define CEverQuest__ClickedPlayer_x                                0x140271D90
#define CEverQuest__CreateTargetIndicator_x                        0x140272660
#define CEverQuest__DoTellWindow_x                                 0x14010C930 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x14010D220 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14027F560
#define CEverQuest__dsp_chat_x                                     0x14010C360 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402AAA50
#define CEverQuest__Emote_x                                        0x14027FF50
#define CEverQuest__GetBodyTypeDesc_x                              0x140280D30
#define CEverQuest__GetClassDesc_x                                 0x140280D90
#define CEverQuest__GetClassThreeLetterCode_x                      0x140281160
#define CEverQuest__GetDeityDesc_x                                 0x140281410
#define CEverQuest__GetLangDesc_x                                  0x140281840
#define CEverQuest__GetRaceDesc_x                                  0x140281BE0
#define CEverQuest__InterpretCmd_x                                 0x140283820
#define CEverQuest__LeftClickedOnPlayer_x                          0x140298FD0
#define CEverQuest__LMouseUp_x                                     0x140285330
#define CEverQuest__RightClickedOnPlayer_x                         0x140296570
#define CEverQuest__RMouseUp_x                                     0x14028FC30
#define CEverQuest__SetGameState_x                                 0x14029BA40
#define CEverQuest__UPCNotificationFlush_x                         0x1402A13D0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140284F10
#define CEverQuest__ReportSuccessfulHeal_x                         0x140291000
#define CEverQuest__ReportSuccessfulHit_x                          0x140291E20

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403DFAC0

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C6A00
#define CGuild__GetGuildName_x                                     0x1400C6A40

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x140403700

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402BCF90
#define CHotButton__SetCheck_x                                     0x1402BD260

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x14041D810
#define CInvSlotMgr__MoveItem_x                                    0x14041E3A0
#define CInvSlotMgr__SelectSlot_x                                  0x1404206A0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x14041A5E0
#define CInvSlot__SliderComplete_x                                 0x14041BE10
#define CInvSlot__GetItemBase_x                                    0x140415C40
#define CInvSlot__UpdateItem_x                                     0x14041C2D0

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1404228B0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140444510
#define CItemDisplayWnd__UpdateStrings_x                           0x1404471A0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140440DD0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140442710
#define CItemDisplayWnd__RequestConvertItem_x                      0x140443930

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x140511DE0
#define CSpellDisplayWnd__UpdateStrings_x                          0x140513B70

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x14054F480

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x14043D460

// CSpellDisplayManager
#define CSpellDisplayManager__ShowSpell_x                          0x1405139B0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140159B70

// CLabel
#define CLabel__UpdateText_x                                       0x14044E7C0

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405C8F80
#define CListWnd__dCListWnd_x                                      0x1405C93C0
#define CListWnd__vftable_x                                        0x140AE1AE0
#define CListWnd__AddColumn_x                                      0x1405C9A50
#define CListWnd__AddColumn1_x                                     0x1405C9AF0
#define CListWnd__AddLine_x                                        0x1405C9C50
#define CListWnd__AddString_x                                      0x1405CA1F0
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405CA760
#define CListWnd__CalculateVSBRange_x                              0x1405CAA40
#define CListWnd__ClearSel_x                                       0x1405CABF0
#define CListWnd__ClearAllSel_x                                    0x1405CAB90
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405CAC50
#define CListWnd__Compare_x                                        0x1405CAE10
#define CListWnd__Draw_x                                           0x1405CB2D0
#define CListWnd__DrawColumnSeparators_x                           0x1405CBE60
#define CListWnd__DrawHeader_x                                     0x1405CBF20
#define CListWnd__DrawItem_x                                       0x1405CC5F0
#define CListWnd__DrawLine_x                                       0x1405CCF90
#define CListWnd__DrawSeparator_x                                  0x1405CD450
#define CListWnd__EnableLine_x                                     0x1405CD870
#define CListWnd__EnsureVisible_x                                  0x1405CD8D0
#define CListWnd__ExtendSel_x                                      0x1405CD9D0
#define CListWnd__GetColumnMinWidth_x                              0x1405CDD60
#define CListWnd__GetColumnWidth_x                                 0x1405CDDE0
#define CListWnd__GetCurSel_x                                      0x1405CDEE0
#define CListWnd__GetItemData_x                                    0x1405CE260
#define CListWnd__GetItemHeight_x                                  0x1405CE2A0
#define CListWnd__GetItemRect_x                                    0x1405CE4D0
#define CListWnd__GetItemText_x                                    0x1405CE770
#define CListWnd__GetSelList_x                                     0x1405CE9D0
#define CListWnd__GetSeparatorRect_x                               0x1405CEBC0
#define CListWnd__InsertLine_x                                     0x1405D0030
#define CListWnd__RemoveLine_x                                     0x1405D06A0
#define CListWnd__SetColors_x                                      0x1405D0A60
#define CListWnd__SetColumnJustification_x                         0x1405D0A80
#define CListWnd__SetColumnLabel_x                                 0x1405D0B00
#define CListWnd__SetColumnWidth_x                                 0x1405D0CA0
#define CListWnd__SetCurSel_x                                      0x1405D0D70
#define CListWnd__SetItemColor_x                                   0x1405D0FE0
#define CListWnd__SetItemData_x                                    0x1405D1080
#define CListWnd__SetItemText_x                                    0x1405D12C0
#define CListWnd__Sort_x                                           0x1405D16D0
#define CListWnd__ToggleSel_x                                      0x1405D1840
#define CListWnd__SetColumnsSizable_x                              0x1405D0CF0
#define CListWnd__SetItemWnd_x                                     0x1405D13F0
#define CListWnd__GetItemWnd_x                                     0x1405CE960
#define CListWnd__SetItemIcon_x                                    0x1405D10C0
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405CA530
#define CListWnd__SetVScrollPos_x                                  0x1405D1630

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140462150

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A467E0
#define MapViewMap__Clear_x                                        0x140463E10
#define MapViewMap__SetZoom_x                                      0x14046A4F0
#define MapViewMap__HandleLButtonDown_x                            0x140466FF0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14048C570  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140492ED0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x1404936B0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140496FE0
#define CMerchantWnd__SelectBuySellSlot_x                          0x1404962E0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14049B470

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14068CF90
#define CPacketScrambler__hton_x                                   0x14068CF80

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405F23E0
#define CSidlManagerBase__FindAnimation1_x                         0x1405F2320
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405F2A20
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405F27C0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405F1720
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405F16B0
#define CSidlManagerBase__CreateXWnd_x                             0x1405F0CF0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x140504C60
#define CSidlManager__CreateXWnd_x                                 0x140504E20

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405B6D00
#define CSidlScreenWnd__CalculateVSBRange_x                        0x1405B6BE0
#define CSidlScreenWnd__ConvertToRes_x                             0x140601690 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x1405B6E80
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x1405B6320
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x1405B63F0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1405B6600
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1405B7570
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405B77A0
#define CSidlScreenWnd__GetChildItem_x                             0x1405B7940
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405B7B90
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405C1BD0 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405B7F00
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405B8270
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405B8B30
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405B9530
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F30E88
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405B9BB0
#define CSidlScreenWnd__StoreIniVis_x                              0x1405BA3A0
#define CSidlScreenWnd__vftable_x                                  0x140AE0D68
#define CSidlScreenWnd__WndNotification_x                          0x1405BA3F0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x140338D80 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x1403390A0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x140338FD0
#define CSkillMgr__IsActivatedSkill_x                              0x140339460
#define CSkillMgr__IsCombatSkill_x                                 0x1403394A0
#define CSkillMgr__GetSkillTimerDuration_x                         0x1403393D0
#define CSkillMgr__GetSkillLastUsed_x                              0x140339020

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405D21B0
#define CSliderWnd__SetValue_x                                     0x1405D29C0
#define CSliderWnd__SetNumTicks_x                                  0x1405D2840

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x14050B4C0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405D7160
#define CStmlWnd__CalculateHSBRange_x                              0x1405C1590
#define CStmlWnd__CalculateVSBRange_x                              0x1405D8090
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405D8B30
#define CStmlWnd__ForceParseNow_x                                  0x1405D8BD0
#define CStmlWnd__GetVisibleText_x                                 0x1405D92A0
#define CStmlWnd__MakeStmlColorTag_x                               0x1405DB030
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405DB070
#define CStmlWnd__SetSTMLText_x                                    0x1405E2100
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405E22B0
#define CStmlWnd__UpdateHistoryString_x                            0x1405E2650

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405D2D90
#define CTabWnd__DrawCurrentPage_x                                 0x1405D2E30
#define CTabWnd__DrawTab_x                                         0x1405D3200
#define CTabWnd__GetTabRect_x                                      0x1405D3880
#define CTabWnd__InsertPage_x                                      0x1405D3B50
#define CTabWnd__RemovePage_x                                      0x1405D3DE0
#define CTabWnd__SetPage_x                                         0x1405D3F40
#define CTabWnd__UpdatePage_x                                      0x1405D4240

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405FB720
#define CPageWnd__SetTabText_x                                     0x1405FB790

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BFF10  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400C0340


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405E9C00
#define CTextureFont__DrawWrappedText1_x                           0x1405E9B00
#define CTextureFont__DrawWrappedText2_x                           0x1405E9D30
#define CTextureFont__GetTextExtent_x                              0x1405EA0E0
#define CTextureFont__GetHeight_x                                  0x1405EA0A0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405FFDB0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405B3770

// CXStr
#define CXStr__gFreeLists_x                                        0x140D60050
#define CXStr__gCXStrAccess_x                                      0x140F309E8

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405BCBF0
#define CXWnd__ClrFocus_x                                          0x1405BCEE0
#define CXWnd__Destroy_x                                           0x1405BD060
#define CXWnd__DoAllDrawing_x                                      0x1405BD160
#define CXWnd__DrawColoredRect_x                                   0x1405BD930
#define CXWnd__DrawTooltip_x                                       0x1405BEFC0
#define CXWnd__DrawTooltipAtPoint_x                                0x1405BF080
#define CXWnd__GetChildItem_x                                      0x1405BF990
#define CXWnd__GetChildWndAt_x                                     0x1405BFA50
#define CXWnd__GetClientRect_x                                     0x1405BFD10
#define CXWnd__GetClientClipRect_x                                 0x1405BFBC0
#define CXWnd__GetRelativeRect_x                                   0x1405C16D0
#define CXWnd__GetScreenClipRect_x                                 0x1405C17E0
#define CXWnd__GetScreenRect_x                                     0x1405C1950
#define CXWnd__GetTooltipRect_x                                    0x1405C1AD0
#define CXWnd__IsActive_x                                          0x1405C2090
#define CXWnd__IsDescendantOf_x                                    0x1405C20C0
#define CXWnd__IsReallyVisible_x                                   0x1405C2120
#define CXWnd__IsType_x                                            0x1405C2170
#define CXWnd__Minimize_x                                          0x1405C2270
#define CXWnd__ProcessTransition_x                                 0x1405C3120
#define CXWnd__Resize_x                                            0x1405C3240
#define CXWnd__Right_x                                             0x1405C32E0
#define CXWnd__SetFocus_x                                          0x1405C36B0
#define CXWnd__SetFont_x                                           0x1405C3700
#define CXWnd__SetKeyTooltip_x                                     0x1405C3800
#define CXWnd__SetMouseOver_x                                      0x1405C3950
#define CXWnd__SetParent_x                                         0x1405C39D0
#define CXWnd__StartFade_x                                         0x1405C3E10
#define CXWnd__vftable_x                                           0x140AE1340
#define CXWnd__CXWnd_x                                             0x1405BB810
#define CXWnd__dCXWnd_x                                            0x1405BC140

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x140606AF0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405E3F70
#define CXWndManager__DrawCursor_x                                 0x1405E4250
#define CXWndManager__DrawWindows_x                                0x1405E44B0
#define CXWndManager__GetKeyboardFlags_x                           0x1405E4B10
#define CXWndManager__HandleKeyboardMsg_x                          0x1405E4B50
#define CXWndManager__RemoveWnd_x                                  0x1405E8290

// CDBStr
#define CDBStr__GetString_x                                        0x140192300

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x140696F80

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D4FD0
#define CCharacterListWnd__EnterWorld_x                            0x1400D3F70
#define CCharacterListWnd__Quit_x                                  0x1400D4FB0
#define CCharacterListWnd__UpdateList_x                            0x1400D5E40

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140663F60
#define ItemBase__CreateItemTagString_x                            0x1406649E0
#define ItemBase__GetImageNum_x                                    0x140667070
#define ItemBase__GetItemValue_x                                   0x140668F70
#define ItemBase__IsEmpty_x                                        0x14066AC70
#define ItemBase__IsKeyRingItem_x                                  0x14066B380
#define ItemBase__ValueSellMerchant_x                              0x14066F610
#define ItemClient__CanDrop_x                                      0x1402BF760
#define ItemClient__CanGoInBag_x                                   0x1402BF890
#define ItemClient__CreateItemClient_x                             0x1402BFB20
#define ItemClient__dItemClient_x                                  0x1402BF5D0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401B1CA0
#define EQ_LoadingS__Array_x                                       0x140D4C2A0

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14067B730
#define PcBase__GetCombatAbility_x                                 0x14067BE30
#define PcBase__GetCombatAbilityTimer_x                            0x14067BED0
#define PcBase__GetItemContainedRealEstateIds_x                    0x14067C6A0
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14067D100
#define PcClient__AlertInventoryChanged_x                          0x1402E2C80
#define PcClient__GetConLevel_x                                    0x1402E33A0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402E5AD0
#define PcClient__HasLoreItem_x                                    0x1402E6B60
#define PcZoneClient__GetItemRecastTimer_x                         0x1402F33F0
#define PcZoneClient__RemoveMyAffect_x                             0x1402F6880

// EQGroundItemListManager
#define EQGroundItem__EQGroundItem_x                               0x140227950
#define EQGroundItemListManager__Add_x                             0x140227B00
#define EQGroundItemListManager__Clear_x                           0x140227BA0
#define EQGroundItemListManager__Delete_x                          0x140227C60
#define EQGroundItemListManager__Instance_x                        0x140227CF0

// EQPlacedItemManager
#define EQPlacedItemManager__Add_x                                 0x140262FF0

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14018CA50

// PlayerClient
#define PlayerBase__CanSee_x                                       0x14064FCE0
#define PlayerBase__CanSee1_x                                      0x14064FDC0
#define PlayerBase__GetVisibilityLineSegment_x                     0x1406502B0
#define PlayerBase__HasProperty_x                                  0x140650490
#define PlayerBase__IsTargetable_x                                 0x140650550
#define PlayerClient__ChangeBoneStringSprite_x                     0x140304580
#define PlayerClient__GetPcClient_x                                0x140307090
#define PlayerClient__PlayerClient_x                               0x1402FC8B0
#define PlayerClient__SetNameSpriteState_x                         0x14030A7C0
#define PlayerClient__SetNameSpriteTint_x                          0x14030B780
#define PlayerZoneClient__ChangeHeight_x                           0x14031A2B0
#define PlayerZoneClient__DoAttack_x                               0x14031AFC0
#define PlayerZoneClient__GetLevel_x                               0x14031E6F0
#define PlayerZoneClient__IsValidTeleport_x                        0x140265D70
#define PlayerZoneClient__LegalPlayerRace_x                        0x1401A0760

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x140313780  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x140313830  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x140313930
#define PlayerManagerClient__CreatePlayer_x                        0x140313240
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x14064F8A0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402C4D00
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402C4610
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402C4680
#define KeypressHandler__ClearCommandStateArray_x                  0x1402C4C90  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402C4E20
#define KeypressHandler__HandleKeyUp_x                             0x1402C4F40
#define KeypressHandler__SaveKeymapping_x                          0x1402C4B10  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140694A90  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x14068E6B0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402ECC30  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402F1550
#define PcZoneClient__GetPcSkillLimit_x                            0x1402F44B0
#define PcZoneClient__RemovePetEffect_x                            0x1402F6B60
#define PcZoneClient__HasAlternateAbility_x                        0x1402F5080
#define PcZoneClient__CanEquipItem_x                               0x1402EF810
#define PcZoneClient__GetItemByID_x                                0x1402F2470
#define PcZoneClient__RemoveBuffEffect_x                           0x1402F6710
#define PcZoneClient__BandolierSwap_x                              0x1402E2D30

// Doors
#define EQSwitch__UseSwitch_x                                      0x14026A900

// IconCache
#define IconCache__GetIcon_x                                       0x1403D4930

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403C8BF0
#define CContainerMgr__CloseContainer_x                            0x1403C8510
#define CContainerMgr__OpenExperimentContainer_x                   0x1403C8F90

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404C8010

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402B6D90

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140455CF0
#define CLootWnd__RequestLootSlot_x                                0x140456D40

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401E1FB0
#define EQ_Spell__SpellAffects_x                                   0x1401E3290
#define EQ_Spell__SpellAffectBase_x                                0x1401E31F0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400DE1C0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400DE170
#define EQ_Spell__IsSPAStacking_x                                  0x1401E2EC0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401E2A70
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401E2330

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C5500

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x140525BF0
#define CTargetWnd__RefreshTargetBuffs_x                           0x140525310
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x140524B10

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x14052D490  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x1401894F0
#define CTaskManager__GetTaskStatus_x                              0x140189600
#define CTaskManager__GetElementDescription_x                      0x140189180

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401E02D0
#define EqSoundManager__PlayScriptMp3_x                            0x1401DF110
#define EqSoundManager__SoundAssistPlay_x                          0x14033E1C0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x14033E500  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405C4B90
#define CTextureAnimation__SetCurCell_x                            0x1405C4EA0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402B4F80

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1406AF320
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1406AF3A0
#define CharacterBase__IsExpansionFlag_x                           0x140206A80

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x1403A3310
#define CCastSpellWnd__IsBardSongPlaying_x                         0x1403A3D80
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x1403A52E0

// messages
#define msg_spell_worn_off_x                                       0x14021DBD0
#define msg_new_text_x                                             0x1402193A0
#define __msgTokenTextParam_x                                      0x1402107E0
#define msgTokenText_x                                             0x1402106F0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x14033FE20
#define SpellManager__GetSpellByGroupAndRank_x                     0x14033FD20

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x14065F680

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x14044EF40

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403CDA40
#define CCursorAttachment__IsOkToActivate_x                        0x1403D0ED0
#define CCursorAttachment__RemoveAttachment_x                      0x1403D1180
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405FE210
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405FE410
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405FE420

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x1401543F0
#define CFindItemWnd__Update_x                                     0x140154DB0
#define CFindItemWnd__PickupSelectedItem_x                         0x14014DA90

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14015F000
#define LootFiltersManager__GetItemFilterData_x                    0x14015FB30
#define LootFiltersManager__RemoveItemLootFilter_x                 0x1401603E0
#define LootFiltersManager__SetItemLootFilter_x                    0x140160690

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x1404A9E50

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x140338940
#define CResolutionHandler__UpdateResolution_x                     0x1405A9B20

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403C4E50

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406B3740  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406B3630  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403EBFA0
#define CGroupWnd__UpdateDisplay_x                                 0x1403EBB80

// ItemBase
#define ItemBase__IsLore_x                                         0x14066B4C0
#define ItemBase__IsLoreEquipped_x                                 0x14066B550

#define MultipleItemMoveManager__ProcessMove_x                     0x1402D87F0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140263150
#define EQPlacedItemManager__GetItemByGuid_x                       0x1402630E0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140263120

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140332C20

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x14012A760
#define FactionManagerClient__HandleFactionMessage_x               0x14012AB40
#define FactionManagerClient__GetFactionStanding_x                 0x140129F30
#define FactionManagerClient__GetMaxFaction_x                      0x140129F30
#define FactionManagerClient__GetMinFaction_x                      0x140129DE0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400B2300

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140136050

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401BAA00
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401B9BA0
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401BA820  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401BA7A0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x140345130

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140332C20

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405BA9E0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140088190

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140356860

// AchievementManager
#define AchievementManager__Instance_x                             0x140091340

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x140697B10
#define FreeToPlayClient__RestrictionInfo_x                        0x140AF5CF0

// UdpConnection
#define UdpConnection__GetStats_x                                  0x14055C540

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x14084B8E8
#define CGFScreenWnd__CGFScreenWnd_x                               0x140072860
#define CGFScreenWnd__CGFScreenWnd1_x                              0x1400729F0
#define CGFScreenWnd__dCGFScreenWnd_x                              0x140072BA0

#if __has_include("../../../../private/eqgame-private.h")
#include "../../../../private/eqgame-private.h"
#endif
