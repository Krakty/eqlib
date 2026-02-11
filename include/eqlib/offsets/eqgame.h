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

#define __ClientDate                                               20260202u
#define __ExpectedVersionDate                                     "Feb  2 2026"
#define __ExpectedVersionTime                                     "09:25:59"
#define __ActualVersionDate_x                                      0x1409840B8
#define __ActualVersionTime_x                                      0x1409840A8
#define __ActualVersionBuild_x                                     0x1409192A0

// Memory Protection
#define __MemChecker0_x                                            0x1402CB410
#define __MemChecker1_x                                            0x1405A0D70
#define __MemChecker4_x                                            0x140298950
#define __EncryptPad0_x                                            0x140D56FC0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E8FAE0
#define instEQZoneInfo_x                                           0x140E8FCD4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x14022B9C0
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
#define __allowslashcommand_x                                      0x140255DD0
#define __CastRay_x                                                0x14024DF50
#define __CastRay2_x                                               0x14024DC40
#define __compress_block_x                                         0x140556110
#define __ConvertItemTags_x                                        0x14024E3B0
#define __CleanItemTags_x                                          0x14008BAB0
#define __CreateCascadeMenuItems_x                                 0x140195070
#define __decompress_block_x                                       0x14059C560
#define __DoesFileExist_x                                          0x1405A4DE0
#define __EQGetTime_x                                              0x1405A1320
#define __ExecuteCmd_x                                             0x140222EA0
#define __FixHeading_x                                             0x14065CE80
#define __FlushDxKeyboard_x                                        0x14034FD30
#define __get_bearing_x                                            0x1402580F0
#define __get_melee_range_x                                        0x1402581E0
#define __GetAnimationCache_x                                      0x1403D48F0
#define __GetGaugeValueFromEQ_x                                    0x140515360
#define __GetLabelFromEQ_x                                         0x140516950
#define __GetXTargetType_x                                         0x14065F370   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14065CF00
#define __HelpPath_x                                               0x140F04F80   // Why?
#define __NewUIINI_x                                               0x1405223A0   // Why?
#define __ProcessDeviceEvents_x                                    0x140298F50
#define __ProcessGameEvents_x                                      0x14028D950
#define __ProcessKeyboardEvents_x                                  0x140351480
#define __ProcessMouseEvents_x                                     0x14028F090
#define __SaveColors_x                                             0x1401A4FC0
#define __STMLToText_x                                             0x1405B50E0
#define __WndProc_x                                                0x14034E4D0
#define CMemoryMappedFile__SetFile_x                               0x14080BE50
#define DrawNetStatus_x                                            0x1402DA9F0
#define Util__FastTime_x                                           0x1405A0830
#define __eq_delete_x                                              0x1406D7E18
#define __eq_new_x                                                 0x1406D8070
#define __CopyLayout_x                                             0x1402C7800
#define __ThrottleFrameRate_x                                      0x14027CA87
#define __ThrottleFrameRateEnd_x                                   0x14027CA8D

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140360F00
#define CAAWnd__Update_x                                           0x140361200
#define CAAWnd__UpdateSelected_x                                   0x140362420

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AFCA0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A85B0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140865290
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400B0600

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401B02C0
#define AltAdvManager__IsAbilityReady_x                            0x1401B0760
#define AltAdvManager__GetAAById_x                                 0x1401AFB50
#define AltAdvManager__CanTrainAbility_x                           0x1401AF950
#define AltAdvManager__CanSeeAbility_x                             0x1401AF600

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D7730
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D85F0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D8840
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400ECB60
#define CharacterZoneClient__CanUseItem_x                          0x1400ED120
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D9210
#define CharacterZoneClient__CastSpell_x                           0x1400D92B0
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E9020
#define CharacterZoneClient__Cur_HP_x                              0x1400EE860
#define CharacterZoneClient__Cur_Mana_x                            0x1400EEA20
#define CharacterZoneClient__FindAffectSlot_x                      0x1400DC520
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F5140
#define CharacterZoneClient__GetBaseSkill_x                        0x1401036C0  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400DD9C0
#define CharacterZoneClient__GetCurrentMod_x                       0x1400EC460
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F69D0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F58C0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400DDB40
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400CD260
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400CF130
#define CharacterZoneClient__GetHPRegen_x                          0x1400F5FF0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400EE4B0
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F51E0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400DDBC0
#define CharacterZoneClient__GetManaRegen_x                        0x1400F7860
#define CharacterZoneClient__GetModCap_x                           0x1400FEE70
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400DDE50
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400DE020
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400D27C0
#define CharacterZoneClient__HasSkill_x                            0x1400FA980
#define CharacterZoneClient__HitBySpell_x                          0x1400DEAB0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400E2480
#define CharacterZoneClient__MakeMeVisible_x                       0x1400FE950
#define CharacterZoneClient__Max_Endurance_x                       0x1402F5740  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400FECA0
#define CharacterZoneClient__Max_Mana_x                            0x1402F5960  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400FF100
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E5AD0
#define CharacterZoneClient__SpellDuration_x                       0x1400E6800
#define CharacterZoneClient__TotalEffect_x                         0x1400E7BF0
#define CharacterZoneClient__UseSkill_x                            0x140104640


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140381C40

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14038CA20

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x1403886E0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14038C490

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14038F280

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AE3990

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403B2380
#define CChatWindowManager__InitContextMenu_x                      0x1403B2510
#define CChatWindowManager__FreeChatWindow_x                       0x1403B1380
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403BA880
#define CChatWindowManager__CreateChatWindow_x                     0x1403B0DC0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x14010CC20

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403BB8F0
#define CChatWindow__Clear_x                                       0x1403BC900
#define CChatWindow__WndNotification_x                             0x1403BDB60
#define CChatWindow__AddHistory_x                                  0x1403BC400

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405E2970
#define CContextMenu__RemoveMenuItem_x                             0x1405E2D80
#define CContextMenu__RemoveAllMenuItems_x                         0x1405E2D50
#define CContextMenu__CheckMenuItem_x                              0x1405E2BC0
#define CContextMenu__SetMenuItem_x                                0x1405E2DA0
#define CContextMenu__AddSeparator_x                               0x1405E2AF0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405D4700
#define CContextMenuManager__RemoveMenu_x                          0x1405D4CD0
#define CContextMenuManager__PopupMenu_x                           0x1405D4A10
#define CContextMenuManager__Flush_x                               0x1405D4780
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403CC1A0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1406B1C80
#define CChatService__GetFriendName_x                              0x1406B1C90

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405C55E0
#define CComboWnd__Draw_x                                          0x1405C56E0
#define CComboWnd__GetCurChoice_x                                  0x1405C59D0  // unused
#define CComboWnd__GetListRect_x                                   0x1405C5A70
#define CComboWnd__InsertChoice_x                                  0x1405C5DA0
#define CComboWnd__SetColors_x                                     0x1405C6130
#define CComboWnd__SetChoice_x                                     0x1405C60F0
#define CComboWnd__GetItemCount_x                                  0x1405C5A60
#define CComboWnd__GetCurChoiceText_x                              0x1405C5A10  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405C59A0
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405C5E60

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403C9E90
#define CContainerWnd__SetContainer_x                              0x140426C30
#define CContainerWnd__vftable_x                                   0x1409F8E30

// CDisplay
#define CDisplay__cameraType_x                                     0x140DD7244
#define CDisplay__ZoneMainUI_x                                     0x1405FCE80
#define CDisplay__PreZoneMainUI_x                                  0x1401A1ED0
#define CDisplay__CleanGameUI_x                                    0x140194130
#define CDisplay__GetClickedActor_x                                0x140198350
#define CDisplay__GetUserDefinedColor_x                            0x140198FC0
#define CDisplay__InitCharSelectUI_x                               0x140199270
#define CDisplay__ReloadUI_x                                       0x1401A41D0
#define CDisplay__RestartUI_x                                      0x140207410
#define CDisplay__WriteTextHD2_x                                   0x1401AB1E0
#define CDisplay__TrueDistance_x                                   0x1401AAE80
#define CDisplay__SetViewActor_x                                   0x1401A76F0
#define CDisplay__GetFloorHeight_x                                 0x1401985B0
#define CDisplay__ToggleScreenshotMode_x                           0x1401AA970
#define CDisplay__RealRender_World_x                               0x1401A35A0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x140607350
#define CEditWnd__DrawCaret_x                                      0x1405F8AF0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405F9000
#define CEditWnd__GetCaretPt_x                                     0x1405F92A0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405F92E0
#define CEditWnd__GetDisplayString_x                               0x1405F9540
#define CEditWnd__GetHorzOffset_x                                  0x1405F9790
#define CEditWnd__GetLineForPrintableChar_x                        0x1405F98F0
#define CEditWnd__GetSelStartPt_x                                  0x1405F9BE0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405F9A20
#define CEditWnd__PointFromPrintableChar_x                         0x1405FA7A0
#define CEditWnd__ReplaceSelection_x                               0x1405FAB50
#define CEditWnd__SelectableCharFromPoint_x                        0x1405FB010
#define CEditWnd__SetEditable_x                                    0x1405FB290
#define CEditWnd__SetWindowText_x                                  0x1405FB2C0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14027DB60
#define CEverQuest__ClickedPlayer_x                                0x140271D80
#define CEverQuest__CreateTargetIndicator_x                        0x140272650
#define CEverQuest__DoTellWindow_x                                 0x14010C920 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x14010D210 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14027F550
#define CEverQuest__dsp_chat_x                                     0x14010C350 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402AAA40
#define CEverQuest__Emote_x                                        0x14027FF40
#define CEverQuest__GetBodyTypeDesc_x                              0x140280D20
#define CEverQuest__GetClassDesc_x                                 0x140280D80
#define CEverQuest__GetClassThreeLetterCode_x                      0x140281150
#define CEverQuest__GetDeityDesc_x                                 0x140281400
#define CEverQuest__GetLangDesc_x                                  0x140281830
#define CEverQuest__GetRaceDesc_x                                  0x140281BD0
#define CEverQuest__InterpretCmd_x                                 0x140283810
#define CEverQuest__LeftClickedOnPlayer_x                          0x140298FC0
#define CEverQuest__LMouseUp_x                                     0x140285320
#define CEverQuest__RightClickedOnPlayer_x                         0x140296560
#define CEverQuest__RMouseUp_x                                     0x14028FC20
#define CEverQuest__SetGameState_x                                 0x14029BA30
#define CEverQuest__UPCNotificationFlush_x                         0x1402A13C0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140284F00
#define CEverQuest__ReportSuccessfulHeal_x                         0x140290FF0
#define CEverQuest__ReportSuccessfulHit_x                          0x140291E10

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403DFAB0

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C6A00
#define CGuild__GetGuildName_x                                     0x1400C6A40

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1404036F0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402BCF80
#define CHotButton__SetCheck_x                                     0x1402BD250

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x14041D800
#define CInvSlotMgr__MoveItem_x                                    0x14041E390
#define CInvSlotMgr__SelectSlot_x                                  0x140420690

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x14041A5D0
#define CInvSlot__SliderComplete_x                                 0x14041BE00
#define CInvSlot__GetItemBase_x                                    0x140415C30
#define CInvSlot__UpdateItem_x                                     0x14041C2C0

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1404228A0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140444500
#define CItemDisplayWnd__UpdateStrings_x                           0x140447190
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140440DC0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140442700
#define CItemDisplayWnd__RequestConvertItem_x                      0x140443920

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x140511DD0
#define CSpellDisplayWnd__UpdateStrings_x                          0x140513B60

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x14054F470

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x14043D450

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140159B60

// CLabel
#define CLabel__UpdateText_x                                       0x14044E7B0

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405C8F70
#define CListWnd__dCListWnd_x                                      0x1405C93B0
#define CListWnd__vftable_x                                        0x140AE1AE0
#define CListWnd__AddColumn_x                                      0x1405C9A40
#define CListWnd__AddColumn1_x                                     0x1405C9AE0
#define CListWnd__AddLine_x                                        0x1405C9C40
#define CListWnd__AddString_x                                      0x1405CA1E0
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405CA750
#define CListWnd__CalculateVSBRange_x                              0x1405CAA30
#define CListWnd__ClearSel_x                                       0x1405CABE0
#define CListWnd__ClearAllSel_x                                    0x1405CAB80
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405CAC40
#define CListWnd__Compare_x                                        0x1405CAE00
#define CListWnd__Draw_x                                           0x1405CB2C0
#define CListWnd__DrawColumnSeparators_x                           0x1405CBE50
#define CListWnd__DrawHeader_x                                     0x1405CBF10
#define CListWnd__DrawItem_x                                       0x1405CC5E0
#define CListWnd__DrawLine_x                                       0x1405CCF80
#define CListWnd__DrawSeparator_x                                  0x1405CD440
#define CListWnd__EnableLine_x                                     0x1405CD860
#define CListWnd__EnsureVisible_x                                  0x1405CD8C0
#define CListWnd__ExtendSel_x                                      0x1405CD9C0
#define CListWnd__GetColumnMinWidth_x                              0x1405CDD50
#define CListWnd__GetColumnWidth_x                                 0x1405CDDD0
#define CListWnd__GetCurSel_x                                      0x1405CDED0
#define CListWnd__GetItemData_x                                    0x1405CE250
#define CListWnd__GetItemHeight_x                                  0x1405CE290
#define CListWnd__GetItemRect_x                                    0x1405CE4C0
#define CListWnd__GetItemText_x                                    0x1405CE760
#define CListWnd__GetSelList_x                                     0x1405CE9C0
#define CListWnd__GetSeparatorRect_x                               0x1405CEBB0
#define CListWnd__InsertLine_x                                     0x1405D0020
#define CListWnd__RemoveLine_x                                     0x1405D0690
#define CListWnd__SetColors_x                                      0x1405D0A50
#define CListWnd__SetColumnJustification_x                         0x1405D0A70
#define CListWnd__SetColumnLabel_x                                 0x1405D0AF0
#define CListWnd__SetColumnWidth_x                                 0x1405D0C90
#define CListWnd__SetCurSel_x                                      0x1405D0D60
#define CListWnd__SetItemColor_x                                   0x1405D0FD0
#define CListWnd__SetItemData_x                                    0x1405D1070
#define CListWnd__SetItemText_x                                    0x1405D12B0
#define CListWnd__Sort_x                                           0x1405D16C0
#define CListWnd__ToggleSel_x                                      0x1405D1830
#define CListWnd__SetColumnsSizable_x                              0x1405D0CE0
#define CListWnd__SetItemWnd_x                                     0x1405D13E0
#define CListWnd__GetItemWnd_x                                     0x1405CE950
#define CListWnd__SetItemIcon_x                                    0x1405D10B0
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405CA520
#define CListWnd__SetVScrollPos_x                                  0x1405D1620

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140462140

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A467E0
#define MapViewMap__Clear_x                                        0x140463E00
#define MapViewMap__SetZoom_x                                      0x14046A4E0
#define MapViewMap__HandleLButtonDown_x                            0x140466FE0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14048C560  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140492EC0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x1404936A0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140496FD0
#define CMerchantWnd__SelectBuySellSlot_x                          0x1404962D0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14049B460

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14068D060
#define CPacketScrambler__hton_x                                   0x14068D050

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405F23D0
#define CSidlManagerBase__FindAnimation1_x                         0x1405F2310
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405F2A10
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405F27B0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405F1710
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405F16A0
#define CSidlManagerBase__CreateXWnd_x                             0x1405F0CE0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x140504C50
#define CSidlManager__CreateXWnd_x                                 0x140504E10

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405B6CF0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x1405B6BD0
#define CSidlScreenWnd__ConvertToRes_x                             0x140601680 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x1405B6E70
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x1405B6310
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x1405B63E0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1405B65F0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1405B7560
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405B7790
#define CSidlScreenWnd__GetChildItem_x                             0x1405B7930
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405B7B80
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405C1BC0 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405B7EF0
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405B8260
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405B8B20
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405B9520
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F30E88
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405B9BA0
#define CSidlScreenWnd__StoreIniVis_x                              0x1405BA390
#define CSidlScreenWnd__vftable_x                                  0x140AE0D68
#define CSidlScreenWnd__WndNotification_x                          0x1405BA3E0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x140338D70 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140339090 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x140338FC0
#define CSkillMgr__IsActivatedSkill_x                              0x140339450
#define CSkillMgr__IsCombatSkill_x                                 0x140339490
#define CSkillMgr__GetSkillTimerDuration_x                         0x1403393C0
#define CSkillMgr__GetSkillLastUsed_x                              0x140339010

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405D21A0
#define CSliderWnd__SetValue_x                                     0x1405D29B0
#define CSliderWnd__SetNumTicks_x                                  0x1405D2830

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x14050B4B0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405D7150
#define CStmlWnd__CalculateHSBRange_x                              0x1405C1580
#define CStmlWnd__CalculateVSBRange_x                              0x1405D8080
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405D8B20
#define CStmlWnd__ForceParseNow_x                                  0x1405D8BC0
#define CStmlWnd__GetVisibleText_x                                 0x1405D9290
#define CStmlWnd__MakeStmlColorTag_x                               0x1405DB020
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405DB060
#define CStmlWnd__SetSTMLText_x                                    0x1405E20F0
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405E22A0
#define CStmlWnd__UpdateHistoryString_x                            0x1405E2640

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405D2D80
#define CTabWnd__DrawCurrentPage_x                                 0x1405D2E20
#define CTabWnd__DrawTab_x                                         0x1405D31F0
#define CTabWnd__GetTabRect_x                                      0x1405D3870
#define CTabWnd__InsertPage_x                                      0x1405D3B40
#define CTabWnd__RemovePage_x                                      0x1405D3DD0
#define CTabWnd__SetPage_x                                         0x1405D3F30
#define CTabWnd__UpdatePage_x                                      0x1405D4230

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405FB710
#define CPageWnd__SetTabText_x                                     0x1405FB780

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BFF10  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400C0340


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405E9BF0
#define CTextureFont__DrawWrappedText1_x                           0x1405E9AF0
#define CTextureFont__DrawWrappedText2_x                           0x1405E9D20
#define CTextureFont__GetTextExtent_x                              0x1405EA0D0
#define CTextureFont__GetHeight_x                                  0x1405EA090

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405FFDA0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405B3760

// CXStr
#define CXStr__gFreeLists_x                                        0x140D60050
#define CXStr__gCXStrAccess_x                                      0x140F309E8

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405BCBE0
#define CXWnd__ClrFocus_x                                          0x1405BCED0
#define CXWnd__Destroy_x                                           0x1405BD050
#define CXWnd__DoAllDrawing_x                                      0x1405BD150
#define CXWnd__DrawColoredRect_x                                   0x1405BD920
#define CXWnd__DrawTooltip_x                                       0x1405BEFB0
#define CXWnd__DrawTooltipAtPoint_x                                0x1405BF070
#define CXWnd__GetChildItem_x                                      0x1405BF980
#define CXWnd__GetChildWndAt_x                                     0x1405BFA40
#define CXWnd__GetClientRect_x                                     0x1405BFD00
#define CXWnd__GetClientClipRect_x                                 0x1405BFBB0
#define CXWnd__GetRelativeRect_x                                   0x1405C16C0
#define CXWnd__GetScreenClipRect_x                                 0x1405C17D0
#define CXWnd__GetScreenRect_x                                     0x1405C1940
#define CXWnd__GetTooltipRect_x                                    0x1405C1AC0
#define CXWnd__IsActive_x                                          0x1405C2080
#define CXWnd__IsDescendantOf_x                                    0x1405C20B0
#define CXWnd__IsReallyVisible_x                                   0x1405C2110
#define CXWnd__IsType_x                                            0x1405C2160
#define CXWnd__Minimize_x                                          0x1405C2260
#define CXWnd__ProcessTransition_x                                 0x1405C3110
#define CXWnd__Resize_x                                            0x1405C3230
#define CXWnd__Right_x                                             0x1405C32D0
#define CXWnd__SetFocus_x                                          0x1405C36A0
#define CXWnd__SetFont_x                                           0x1405C36F0
#define CXWnd__SetKeyTooltip_x                                     0x1405C37F0
#define CXWnd__SetMouseOver_x                                      0x1405C3940
#define CXWnd__SetParent_x                                         0x1405C39C0
#define CXWnd__StartFade_x                                         0x1405C3E00
#define CXWnd__vftable_x                                           0x140AE1340
#define CXWnd__CXWnd_x                                             0x1405BB800
#define CXWnd__dCXWnd_x                                            0x1405BC130

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x140606AE0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405E3F60
#define CXWndManager__DrawCursor_x                                 0x1405E4240
#define CXWndManager__DrawWindows_x                                0x1405E44A0
#define CXWndManager__GetKeyboardFlags_x                           0x1405E4B00
#define CXWndManager__HandleKeyboardMsg_x                          0x1405E4B40
#define CXWndManager__RemoveWnd_x                                  0x1405E8280

// CDBStr
#define CDBStr__GetString_x                                        0x1401922F0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x140697050

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D4FD0
#define CCharacterListWnd__EnterWorld_x                            0x1400D3F70
#define CCharacterListWnd__Quit_x                                  0x1400D4FB0
#define CCharacterListWnd__UpdateList_x                            0x1400D5E40

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140664030
#define ItemBase__CreateItemTagString_x                            0x140664AB0
#define ItemBase__GetImageNum_x                                    0x140667140
#define ItemBase__GetItemValue_x                                   0x140669040
#define ItemBase__IsEmpty_x                                        0x14066AD40
#define ItemBase__IsKeyRingItem_x                                  0x14066B450
#define ItemBase__ValueSellMerchant_x                              0x14066F6E0
#define ItemClient__CanDrop_x                                      0x1402BF750
#define ItemClient__CanGoInBag_x                                   0x1402BF880
#define ItemClient__CreateItemClient_x                             0x1402BFB10
#define ItemClient__dItemClient_x                                  0x1402BF5C0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401B1C90
#define EQ_LoadingS__Array_x                                       0x140D4C2A0

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14067B800
#define PcBase__GetCombatAbility_x                                 0x14067BF00
#define PcBase__GetCombatAbilityTimer_x                            0x14067BFA0
#define PcBase__GetItemContainedRealEstateIds_x                    0x14067C770
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14067D1D0
#define PcClient__AlertInventoryChanged_x                          0x1402E2C70
#define PcClient__GetConLevel_x                                    0x1402E3390  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402E5AC0
#define PcClient__HasLoreItem_x                                    0x1402E6B50
#define PcZoneClient__GetItemRecastTimer_x                         0x1402F33E0
#define PcZoneClient__RemoveMyAffect_x                             0x1402F6870

// EQGroundItemListManager
#define EQGroundItem__EQGroundItem_x                               0x140227940
#define EQGroundItemListManager__Add_x                             0x140227AF0
#define EQGroundItemListManager__Clear_x                           0x140227B90
#define EQGroundItemListManager__Delete_x                          0x140227C50
#define EQGroundItemListManager__Instance_x                        0x140227CE0

// EQPlacedItemManager
#define EQPlacedItemManager__Add_x                                 0x140262FE0

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14018CA40

// PlayerClient
#define PlayerBase__CanSee_x                                       0x14064FCD0
#define PlayerBase__CanSee1_x                                      0x14064FDB0
#define PlayerBase__GetVisibilityLineSegment_x                     0x1406502A0
#define PlayerBase__HasProperty_x                                  0x140650480
#define PlayerBase__IsTargetable_x                                 0x140650540
#define PlayerClient__ChangeBoneStringSprite_x                     0x140304570
#define PlayerClient__GetPcClient_x                                0x140307080
#define PlayerClient__PlayerClient_x                               0x1402FC8A0
#define PlayerClient__SetNameSpriteState_x                         0x14030A7B0
#define PlayerClient__SetNameSpriteTint_x                          0x14030B770
#define PlayerZoneClient__ChangeHeight_x                           0x14031A2A0
#define PlayerZoneClient__DoAttack_x                               0x14031AFB0
#define PlayerZoneClient__GetLevel_x                               0x14031E6E0
#define PlayerZoneClient__IsValidTeleport_x                        0x140265D60
#define PlayerZoneClient__LegalPlayerRace_x                        0x1401A0750

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x140313770  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x140313820  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x140313920
#define PlayerManagerClient__CreatePlayer_x                        0x140313230
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x14064F890

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402C4CF0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402C4600
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402C4670
#define KeypressHandler__ClearCommandStateArray_x                  0x1402C4C80  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402C4E10
#define KeypressHandler__HandleKeyUp_x                             0x1402C4F30
#define KeypressHandler__SaveKeymapping_x                          0x1402C4B00  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140694B60  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x14068E780

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402ECC20  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402F1540
#define PcZoneClient__GetPcSkillLimit_x                            0x1402F44A0
#define PcZoneClient__RemovePetEffect_x                            0x1402F6B50
#define PcZoneClient__HasAlternateAbility_x                        0x1402F5070
#define PcZoneClient__CanEquipItem_x                               0x1402EF800
#define PcZoneClient__GetItemByID_x                                0x1402F2460
#define PcZoneClient__RemoveBuffEffect_x                           0x1402F6700
#define PcZoneClient__BandolierSwap_x                              0x1402E2D20

// Doors
#define EQSwitch__UseSwitch_x                                      0x14026A8F0

// IconCache
#define IconCache__GetIcon_x                                       0x1403D4920

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403C8BE0
#define CContainerMgr__CloseContainer_x                            0x1403C8500
#define CContainerMgr__OpenExperimentContainer_x                   0x1403C8F80

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404C8000

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402B6D80

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140455CE0
#define CLootWnd__RequestLootSlot_x                                0x140456D30

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401E1FA0
#define EQ_Spell__SpellAffects_x                                   0x1401E3280
#define EQ_Spell__SpellAffectBase_x                                0x1401E31E0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400DE1B0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400DE160
#define EQ_Spell__IsSPAStacking_x                                  0x1401E2EB0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401E2A60
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401E2320

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C5500

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x140525BE0
#define CTargetWnd__RefreshTargetBuffs_x                           0x140525300
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x140524B00

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x14052D480  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x1401894E0
#define CTaskManager__GetTaskStatus_x                              0x1401895F0
#define CTaskManager__GetElementDescription_x                      0x140189170

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401E02C0
#define EqSoundManager__PlayScriptMp3_x                            0x1401DF100
#define EqSoundManager__SoundAssistPlay_x                          0x14033E1B0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x14033E4F0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405C4B80
#define CTextureAnimation__SetCurCell_x                            0x1405C4E90

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402B4F70

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1406AF3F0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1406AF470
#define CharacterBase__IsExpansionFlag_x                           0x140206A70

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x1403A3300
#define CCastSpellWnd__IsBardSongPlaying_x                         0x1403A3D70
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x1403A52D0

// messages
#define msg_spell_worn_off_x                                       0x14021DBC0
#define msg_new_text_x                                             0x140219390
#define __msgTokenTextParam_x                                      0x1402107D0
#define msgTokenText_x                                             0x1402106E0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x14033FE10
#define SpellManager__GetSpellByGroupAndRank_x                     0x14033FD10

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x14065F750

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x14044EF30

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403CDA30
#define CCursorAttachment__IsOkToActivate_x                        0x1403D0EC0
#define CCursorAttachment__RemoveAttachment_x                      0x1403D1170
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405FE200
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405FE400
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405FE410

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x1401543E0
#define CFindItemWnd__Update_x                                     0x140154DA0
#define CFindItemWnd__PickupSelectedItem_x                         0x14014DA80

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14015EFF0
#define LootFiltersManager__GetItemFilterData_x                    0x14015FB20
#define LootFiltersManager__RemoveItemLootFilter_x                 0x1401603D0
#define LootFiltersManager__SetItemLootFilter_x                    0x140160680

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x1404A9E40

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x140338930
#define CResolutionHandler__UpdateResolution_x                     0x1405A9B10

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403C4E40

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406B3810  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406B3700  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403EBF90
#define CGroupWnd__UpdateDisplay_x                                 0x1403EBB70

// ItemBase
#define ItemBase__IsLore_x                                         0x14066B590
#define ItemBase__IsLoreEquipped_x                                 0x14066B620

#define MultipleItemMoveManager__ProcessMove_x                     0x1402D87E0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140263140
#define EQPlacedItemManager__GetItemByGuid_x                       0x1402630D0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140263110

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140332C10

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x14012A750
#define FactionManagerClient__HandleFactionMessage_x               0x14012AB30
#define FactionManagerClient__GetFactionStanding_x                 0x140129F20
#define FactionManagerClient__GetMaxFaction_x                      0x140129F20
#define FactionManagerClient__GetMinFaction_x                      0x140129DD0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400B2300

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140136040

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401BA9F0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401B9B90
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401BA810  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401BA790  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x140345120

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140332C10

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405BA9D0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140088190

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140356850

// AchievementManager
#define AchievementManager__Instance_x                             0x140091340

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x140697BE0
#define FreeToPlayClient__RestrictionInfo_x                        0x140AF5CF0

// UdpConnection
#define UdpConnection__GetStats_x                                  0x14055C530

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x14084B8E8
#define CGFScreenWnd__CGFScreenWnd_x                               0x140072860
#define CGFScreenWnd__CGFScreenWnd1_x                              0x1400729F0
#define CGFScreenWnd__dCGFScreenWnd_x                              0x140072BA0

#if __has_include("../../../../private/eqgame-private.h")
#include "../../../../private/eqgame-private.h"
#endif
