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

#define __ClientDate                                               20250422u
#define __ExpectedVersionDate                                     "Apr 22 2025"
#define __ExpectedVersionTime                                     "14:50:59"
#define __ActualVersionDate_x                                      0x14095ACD0
#define __ActualVersionTime_x                                      0x14095ACC0
#define __ActualVersionBuild_x                                     0x1408F0A40

// Memory Protection
#define __MemChecker0_x                                            0x1402BB940
#define __MemChecker1_x                                            0x140580B20
#define __MemChecker4_x                                            0x140289100
#define __EncryptPad0_x                                            0x140D2AE80

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E63AE0
#define instEQZoneInfo_x                                           0x140E63CD4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x14021ECC0
#define __gfMaxZoomCameraDistance_x                                0x1408F1CB8
#define __gfMaxCameraDistance_x                                    0x140A98F98
#define __CurrentSocial_x                                          0x140BE6950 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D22720
#define g_eqCommandStates_x                                        0x140D23790
#define __CommandList_x                                            0x140D239C0
#define __ScreenMode_x                                             0x140DAB5BC
#define __gWorld_x                                                 0x140E5EA20
#define __gpbCommandEvent_x                                        0x140E5C4C4
#define __ServerHost_x                                             0x140E5C6A8
#define __Guilds_x                                                 0x140E626A0
#define __MemCheckBitmask_x                                        0x140E6401F
#define __MemCheckActive_x                                         0x140E6571D
#define __MouseEventTime_x                                         0x140ED9068
#define DI8__MouseState_x                                          0x140EDD298
#define __heqmain_x                                                0x140EDF738
#define DI8__Mouse_x                                               0x140EDD1E8
#define __HWnd_x                                                   0x140EDD270
#define __Mouse_x                                                  0x140EDD1A4
#define DI8__Keyboard_x                                            0x140EDD1C0
#define __LoginName_x                                              0x140EDFE1C
#define __CurrentMapLabel_x                                        0x140EF38A0
#define __LabelCache_x                                             0x140EF4470
#define __ChatFilterDefs_x                                         0x140A33860
#define Teleport_Table_Size_x                                      0x140E5C550
#define Teleport_Table_x                                           0x140E5C9E0

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E5EA30
#define pinstActiveBanker_x                                        0x140E5C408
#define pinstActiveCorpse_x                                        0x140E5C3F8
#define pinstActiveGMaster_x                                       0x140E5C400
#define pinstActiveMerchant_x                                      0x140E5C3F0
#define pinstAltAdvManager_x                                       0x140DAC238
#define pinstCEverQuest_x                                          0x140EDD1E0
#define pinstCamActor_x                                            0x140DAB5A8
#define pinstCDBStr_x                                              0x140DAAFF0
#define pinstCDisplay_x                                            0x140E5C9D8
#define pinstControlledPlayer_x                                    0x140E5C498
#define pinstCResolutionHandler_x                                  0x140F04CA8
#define pinstCSidlManager_x                                        0x140F05A10
#define pinstCXWndManager_x                                        0x140F05A08
#define instDynamicZone_x                                          0x140E62560 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E625AE
#define instExpeditionName_x                                       0x140E625EE
#define pinstDZMember_x                                            0x140E62678
#define pinstDZTimerInfo_x                                         0x140E62680
#define pinstEqLogin_x                                             0x140EDF760
#define instTribute_x                                              0x140D1DD60
#define pinstDeviceInputProxy_x                                    0x140E63B3C
#define pinstEQSoundManager_x                                      0x140DAC5B8
#define pinstEQSpellStrings_x                                      0x140D8FB80
#define pinstSGraphicsEngine_x                                     0x140F04A28
#define pinstLocalPC_x                                             0x140E5EA08
#define pinstLocalPlayer_x                                         0x140E5C3E8
#define pinstCMercenaryClientManager_x                             0x140EDA958
#define pinstModelPlayer_x                                         0x140E5C418
#define pinstRenderInterface_x                                     0x140F04A40
#define pinstSkillMgr_x                                            0x140EDC5E8
#define pinstSpawnManager_x                                        0x140EDAD10
#define pinstSpellManager_x                                        0x140EDC650
#define pinstStringTable_x                                         0x140E5EA18
#define pinstSwitchManager_x                                       0x140E5BEE0
#define pinstTarget_x                                              0x140E5C490
#define pinstTaskMember_x                                          0x140D1DD50 // Part of g_taskManager
#define pinstTradeTarget_x                                         0x140E5C410
#define instTributeActive_x                                        0x140D1DD89
#define pinstViewActor_x                                           0x140DAB5A0
#define pinstWorldData_x                                           0x140E5C4B8
#define pinstPlayerPath_x                                          0x140EDAD38
#define pinstTargetIndicator_x                                     0x140EDC700
#define EQObject_Top_x                                             0x140E5C9B8

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140EF0A00
#define pinstCContainerMgr_x                                       0x140DAB608
#define pinstCContextMenuManager_x                                 0x140F056F0
#define pinstCInvSlotMgr_x                                         0x140DAB5D8
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
#define __allowslashcommand_x                                      0x140248940
#define __CastRay_x                                                0x140240BF0
#define __CastRay2_x                                               0x1402408F0
#define __compress_block_x                                         0x140536110
#define __ConvertItemTags_x                                        0x140241050
#define __CleanItemTags_x                                          0x14008A1F0
#define __CreateCascadeMenuItems_x                                 0x14018D610
#define __decompress_block_x                                       0x14057C390
#define __DoesFileExist_x                                          0x1405849D0
#define __EQGetTime_x                                              0x1405810D0
#define __ExecuteCmd_x                                             0x1402164C0
#define __FixHeading_x                                             0x14063B6F0
#define __FlushDxKeyboard_x                                        0x14033FB60
#define __get_bearing_x                                            0x14024AB70
#define __get_melee_range_x                                        0x14024AC60
#define __GetAnimationCache_x                                      0x1403BEB00
#define __GetGaugeValueFromEQ_x                                    0x1404F5C80
#define __GetLabelFromEQ_x                                         0x1404F7290
#define __GetXTargetType_x                                         0x14063C9D0   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14063B770
#define __HelpPath_x                                               0x140ED8F30   // Why?
#define __NewUIINI_x                                               0x140502CF0   // Why?
#define __ProcessDeviceEvents_x                                    0x140289710
#define __ProcessGameEvents_x                                      0x14027E3C0
#define __ProcessKeyboardEvents_x                                  0x1403412B0
#define __ProcessMouseEvents_x                                     0x14027FAA0
#define __SaveColors_x                                             0x14019D630
#define __STMLToText_x                                             0x14058CC10
#define __WndProc_x                                                0x14033E360
#define CMemoryMappedFile__SetFile_x                               0x1407E95C0
#define DrawNetStatus_x                                            0x1402C9F30
#define Util__FastTime_x                                           0x14057D2B0
#define __eq_delete_x                                              0x1406B55B4
#define __eq_new_x                                                 0x1406B5570
#define __CopyLayout_x                                             0x1402B7D50
#define __ThrottleFrameRate_x                                      0x14026DAE4
#define __ThrottleFrameRateEnd_x                                   0x14026DB44

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x1403509D0
#define CAAWnd__Update_x                                           0x140350CD0
#define CAAWnd__UpdateSelected_x                                   0x140351D20

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AC740
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A5120
#define CAdvancedLootWnd__AddPlayerToList_x                        0x14083DE38
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AD070

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401A87B0
#define AltAdvManager__IsAbilityReady_x                            0x1401A8C40
#define AltAdvManager__GetAAById_x                                 0x1401A8080
#define AltAdvManager__CanTrainAbility_x                           0x1401A7E70
#define AltAdvManager__CanSeeAbility_x                             0x1401A7B30

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D3440
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D42A0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D44F0
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400E8BB0
#define CharacterZoneClient__CanUseItem_x                          0x1400E9170
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D4EC0
#define CharacterZoneClient__CastSpell_x                           0x1400D4F60
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E4B00
#define CharacterZoneClient__Cur_HP_x                              0x1400EA890
#define CharacterZoneClient__Cur_Mana_x                            0x1400EAA50
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D82C0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F10A0
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FF9E0  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D9760
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E84B0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F2C50
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F1B30
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D98E0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C97D0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400CB1D0
#define CharacterZoneClient__GetHPRegen_x                          0x1400F2270
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400EA500
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F2EE0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D9960
#define CharacterZoneClient__GetManaRegen_x                        0x1400F3CD0
#define CharacterZoneClient__GetModCap_x                           0x1400FB180
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D9BF0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D9DC0
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CE360
#define CharacterZoneClient__HasSkill_x                            0x1400F6D00
#define CharacterZoneClient__HitBySpell_x                          0x1400DA850
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DE1C0
#define CharacterZoneClient__MakeMeVisible_x                       0x1400FAC60
#define CharacterZoneClient__Max_Endurance_x                       0x1402E6670  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400FAFB0
#define CharacterZoneClient__Max_Mana_x                            0x1402E6890  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400FB410
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E1650
#define CharacterZoneClient__SpellDuration_x                       0x1400E2380
#define CharacterZoneClient__TotalEffect_x                         0x1400E36E0
#define CharacterZoneClient__UseSkill_x                            0x140100960


// CBankWnd
#define CBankWnd__WndNotification_x                                0x14036F280

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140379630

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x1403754A0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x1403790B0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14037BD00

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AB84D0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x14039EF70
#define CChatWindowManager__InitContextMenu_x                      0x14039F100
#define CChatWindowManager__FreeChatWindow_x                       0x14039DFE0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403A6D40
#define CChatWindowManager__CreateChatWindow_x                     0x14039DA10

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140108EB0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403A7D90
#define CChatWindow__Clear_x                                       0x1403A8D40
#define CChatWindow__WndNotification_x                             0x1403A9F30
#define CChatWindow__AddHistory_x                                  0x1403A8840

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405C1DF0
#define CContextMenu__RemoveMenuItem_x                             0x1405C21E0
#define CContextMenu__RemoveAllMenuItems_x                         0x1405C21B0
#define CContextMenu__CheckMenuItem_x                              0x1405C2020
#define CContextMenu__SetMenuItem_x                                0x1405C2200
#define CContextMenu__AddSeparator_x                               0x1405C1F60

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405B3CD0
#define CContextMenuManager__RemoveMenu_x                          0x1405B42B0
#define CContextMenuManager__PopupMenu_x                           0x1405B3FF0
#define CContextMenuManager__Flush_x                               0x1405B3D50
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403B6690

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x140647710
#define CChatService__GetFriendName_x                              0x14068F770

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405A4A10
#define CComboWnd__Draw_x                                          0x1405A4B10
#define CComboWnd__GetCurChoice_x                                  0x1405A4DF0  // unused
#define CComboWnd__GetListRect_x                                   0x1405A4E90
#define CComboWnd__InsertChoice_x                                  0x1405A51D0
#define CComboWnd__SetColors_x                                     0x1405A5560
#define CComboWnd__SetChoice_x                                     0x1405A5520
#define CComboWnd__GetItemCount_x                                  0x1405A4E80
#define CComboWnd__GetCurChoiceText_x                              0x1405A4E30  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405A4DC0
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405A5290

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403B43B0
#define CContainerWnd__SetContainer_x                              0x14040BD10
#define CContainerWnd__vftable_x                                   0x1409CF0B8

// CDisplay
#define CDisplay__cameraType_x                                     0x140DAB384
#define CDisplay__ZoneMainUI_x                                     0x1405DBF30
#define CDisplay__PreZoneMainUI_x                                  0x14019A560
#define CDisplay__CleanGameUI_x                                    0x14018C6D0
#define CDisplay__GetClickedActor_x                                0x140190890
#define CDisplay__GetUserDefinedColor_x                            0x140191500
#define CDisplay__InitCharSelectUI_x                               0x1401917B0
#define CDisplay__ReloadUI_x                                       0x14019C850
#define CDisplay__RestartUI_x                                      0x1401FC3E0
#define CDisplay__WriteTextHD2_x                                   0x1401A3860
#define CDisplay__TrueDistance_x                                   0x1401A3510
#define CDisplay__SetViewActor_x                                   0x14019FD50
#define CDisplay__GetFloorHeight_x                                 0x140190AF0
#define CDisplay__ToggleScreenshotMode_x                           0x1401A3000
#define CDisplay__RealRender_World_x                               0x14019BC30

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405E6160
#define CEditWnd__DrawCaret_x                                      0x1405D7C20  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405D80E0
#define CEditWnd__GetCaretPt_x                                     0x1405D8360  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405D83A0
#define CEditWnd__GetDisplayString_x                               0x1405D8610
#define CEditWnd__GetHorzOffset_x                                  0x1405D8850
#define CEditWnd__GetLineForPrintableChar_x                        0x1405D89A0
#define CEditWnd__GetSelStartPt_x                                  0x1405D8C80  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405D8AD0
#define CEditWnd__PointFromPrintableChar_x                         0x1405D9830
#define CEditWnd__ReplaceSelection_x                               0x1405D9BE0
#define CEditWnd__SelectableCharFromPoint_x                        0x1405DA080
#define CEditWnd__SetEditable_x                                    0x1405DA310
#define CEditWnd__SetWindowText_x                                  0x1405DA340

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14026EBF0
#define CEverQuest__ClickedPlayer_x                                0x1402644D0
#define CEverQuest__CreateTargetIndicator_x                        0x140264D90
#define CEverQuest__DoTellWindow_x                                 0x140108BC0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140109490 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x1402705E0
#define CEverQuest__dsp_chat_x                                     0x140108600 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x14029B5C0
#define CEverQuest__Emote_x                                        0x140270FD0
#define CEverQuest__GetBodyTypeDesc_x                              0x140271DA0
#define CEverQuest__GetClassDesc_x                                 0x140271E00
#define CEverQuest__GetClassThreeLetterCode_x                      0x1402721D0
#define CEverQuest__GetDeityDesc_x                                 0x140272480
#define CEverQuest__GetLangDesc_x                                  0x1402728B0
#define CEverQuest__GetRaceDesc_x                                  0x140272C50
#define CEverQuest__InterpretCmd_x                                 0x1402745C0
#define CEverQuest__LeftClickedOnPlayer_x                          0x140289780
#define CEverQuest__LMouseUp_x                                     0x140276010
#define CEverQuest__RightClickedOnPlayer_x                         0x140286F70
#define CEverQuest__RMouseUp_x                                     0x140280630
#define CEverQuest__SetGameState_x                                 0x14028C6A0
#define CEverQuest__UPCNotificationFlush_x                         0x140292000 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140275C70
#define CEverQuest__ReportSuccessfulHeal_x                         0x140281A00
#define CEverQuest__ReportSuccessfulHit_x                          0x140282820

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403C9A30

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C3180
#define CGuild__GetGuildName_x                                     0x1400C31C0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403ECE10

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402AD6D0
#define CHotButton__SetCheck_x                                     0x1402AD9A0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140404A30
#define CInvSlotMgr__MoveItem_x                                    0x140404C10
#define CInvSlotMgr__SelectSlot_x                                  0x140406640

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x140401C20
#define CInvSlot__SliderComplete_x                                 0x140403170
#define CInvSlot__GetItemBase_x                                    0x1403FD620
#define CInvSlot__UpdateItem_x                                     0x140403630

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1404079D0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140428F10
#define CItemDisplayWnd__UpdateStrings_x                           0x14042BAD0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x1404256E0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140427050
#define CItemDisplayWnd__RequestConvertItem_x                      0x140428320

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404F2790
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404F4480

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x14052F470

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140421DA0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140153800

// CLabel
#define CLabel__UpdateText_x                                       0x140432EB0

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405A83A0
#define CListWnd__dCListWnd_x                                      0x1405A87F0
#define CListWnd__vftable_x                                        0x140AB6620
#define CListWnd__AddColumn_x                                      0x1405A8E90
#define CListWnd__AddColumn1_x                                     0x1405A8F30
#define CListWnd__AddLine_x                                        0x1405A9090
#define CListWnd__AddString_x                                      0x1405A9620
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405A9B90
#define CListWnd__CalculateVSBRange_x                              0x1405A9E70
#define CListWnd__ClearSel_x                                       0x1405AA020
#define CListWnd__ClearAllSel_x                                    0x1405A9FC0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405AA080
#define CListWnd__Compare_x                                        0x1405AA240
#define CListWnd__Draw_x                                           0x1405AA710
#define CListWnd__DrawColumnSeparators_x                           0x1405AB2C0
#define CListWnd__DrawHeader_x                                     0x1405AB380
#define CListWnd__DrawItem_x                                       0x1405ABA60
#define CListWnd__DrawLine_x                                       0x1405AC3E0
#define CListWnd__DrawSeparator_x                                  0x1405AC8A0
#define CListWnd__EnableLine_x                                     0x1405ACCC0
#define CListWnd__EnsureVisible_x                                  0x1405ACD20
#define CListWnd__ExtendSel_x                                      0x1405ACE20
#define CListWnd__GetColumnMinWidth_x                              0x1405AD1B0
#define CListWnd__GetColumnWidth_x                                 0x1405AD230
#define CListWnd__GetCurSel_x                                      0x1405AD330
#define CListWnd__GetItemData_x                                    0x1405AD6B0
#define CListWnd__GetItemHeight_x                                  0x1405AD6F0
#define CListWnd__GetItemRect_x                                    0x1405AD910
#define CListWnd__GetItemText_x                                    0x1405ADBB0
#define CListWnd__GetSelList_x                                     0x1405ADE00
#define CListWnd__GetSeparatorRect_x                               0x1405ADFF0
#define CListWnd__InsertLine_x                                     0x1405AF460
#define CListWnd__RemoveLine_x                                     0x1405AFAD0
#define CListWnd__SetColors_x                                      0x1405AFE90
#define CListWnd__SetColumnJustification_x                         0x1405AFEB0
#define CListWnd__SetColumnLabel_x                                 0x1405AFF30
#define CListWnd__SetColumnWidth_x                                 0x1405B00D0
#define CListWnd__SetCurSel_x                                      0x1405B01A0
#define CListWnd__SetItemColor_x                                   0x1405B0410
#define CListWnd__SetItemData_x                                    0x1405B04B0
#define CListWnd__SetItemText_x                                    0x1405B06F0
#define CListWnd__Sort_x                                           0x1405B0B00
#define CListWnd__ToggleSel_x                                      0x1405B0C70
#define CListWnd__SetColumnsSizable_x                              0x1405B0120
#define CListWnd__SetItemWnd_x                                     0x1405B0820
#define CListWnd__GetItemWnd_x                                     0x1405ADD90
#define CListWnd__SetItemIcon_x                                    0x1405B04F0
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405A9960
#define CListWnd__SetVScrollPos_x                                  0x1405B0A60

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140446150

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A1C2B0
#define MapViewMap__Clear_x                                        0x140447CC0
#define MapViewMap__SetZoom_x                                      0x14044E330
#define MapViewMap__HandleLButtonDown_x                            0x14044AE50

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14046FA50  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x1404760C0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140476870
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14047A0D0
#define CMerchantWnd__SelectBuySellSlot_x                          0x140479410
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14047E380

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14066AA40
#define CPacketScrambler__hton_x                                   0x14066AA30

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405D1500
#define CSidlManagerBase__FindAnimation1_x                         0x1405D1440
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405D1B30
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405D18E0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405D0850
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405D07E0
#define CSidlManagerBase__CreateXWnd_x                             0x1405CFE60

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404E5670
#define CSidlManager__CreateXWnd_x                                 0x1404E5830

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x140595F90
#define CSidlScreenWnd__CalculateVSBRange_x                        0x1405960B0
#define CSidlScreenWnd__ConvertToRes_x                             0x1405E06A0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x140596230
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x1405956C0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x140595790
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1405959A0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x140596920
#define CSidlScreenWnd__EnableIniStorage_x                         0x140596B50
#define CSidlScreenWnd__GetChildItem_x                             0x140596CF0
#define CSidlScreenWnd__GetSidlPiece_x                             0x140596F40
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405A0FA0 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405972B0
#define CSidlScreenWnd__LoadIniInfo_x                              0x140597620
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140597EE0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405988D0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F04D68
#define CSidlScreenWnd__StoreIniInfo_x                             0x140598F50
#define CSidlScreenWnd__StoreIniVis_x                              0x140599740
#define CSidlScreenWnd__vftable_x                                  0x140AB58A8
#define CSidlScreenWnd__WndNotification_x                          0x140599790

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x140328B00 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140328FA0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x140328ED0
#define CSkillMgr__IsActivatedSkill_x                              0x140329350
#define CSkillMgr__IsCombatSkill_x                                 0x140329390
#define CSkillMgr__GetSkillTimerDuration_x                         0x1403292C0
#define CSkillMgr__GetSkillLastUsed_x                              0x140328F20

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405013D0
#define CSliderWnd__SetValue_x                                     0x1405B1DE0
#define CSliderWnd__SetNumTicks_x                                  0x1405B1C60

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404EBD90

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405B6730
#define CStmlWnd__CalculateHSBRange_x                              0x1405A0970
#define CStmlWnd__CalculateVSBRange_x                              0x1405B75D0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405B80C0
#define CStmlWnd__ForceParseNow_x                                  0x1405B8160
#define CStmlWnd__GetVisibleText_x                                 0x1405B8830
#define CStmlWnd__MakeStmlColorTag_x                               0x1405BA590
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405BA5D0
#define CStmlWnd__SetSTMLText_x                                    0x1405C15A0
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405C1750
#define CStmlWnd__UpdateHistoryString_x                            0x1405C1AE0

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405B2390
#define CTabWnd__DrawCurrentPage_x                                 0x1405B2430
#define CTabWnd__DrawTab_x                                         0x1405B2800
#define CTabWnd__GetTabRect_x                                      0x1405B2E60
#define CTabWnd__InsertPage_x                                      0x1405B3130
#define CTabWnd__RemovePage_x                                      0x1405B33B0
#define CTabWnd__SetPage_x                                         0x1405B3510
#define CTabWnd__UpdatePage_x                                      0x1405B3810

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405DA790
#define CPageWnd__SetTabText_x                                     0x1405DA800

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BC7A0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BCBB0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405C8F20
#define CTextureFont__DrawWrappedText1_x                           0x1405C8E30
#define CTextureFont__DrawWrappedText2_x                           0x1405C9050
#define CTextureFont__GetTextExtent_x                              0x1405C9400
#define CTextureFont__GetHeight_x                                  0x1405C93C0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405DEE00

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405952A0

// CXStr
#define CXStr__gFreeLists_x                                        0x140D33F00
#define CXStr__gCXStrAccess_x                                      0x140F048C8

// CXWnd
#define CXWnd__BringToTop_x                                        0x14059C020
#define CXWnd__ClrFocus_x                                          0x14059C310
#define CXWnd__Destroy_x                                           0x14059C490
#define CXWnd__DoAllDrawing_x                                      0x14059C5A0
#define CXWnd__DrawColoredRect_x                                   0x14059CD60
#define CXWnd__DrawTooltip_x                                       0x14059E3B0
#define CXWnd__DrawTooltipAtPoint_x                                0x14059E460
#define CXWnd__GetChildItem_x                                      0x14059ED70
#define CXWnd__GetChildWndAt_x                                     0x14059EE30
#define CXWnd__GetClientRect_x                                     0x14059F0D0
#define CXWnd__GetClientClipRect_x                                 0x14059EF90
#define CXWnd__GetRelativeRect_x                                   0x1405A0AA0
#define CXWnd__GetScreenClipRect_x                                 0x1405A0BB0
#define CXWnd__GetScreenRect_x                                     0x1405A0D20
#define CXWnd__GetTooltipRect_x                                    0x1405A0EA0
#define CXWnd__IsActive_x                                          0x1405A1460
#define CXWnd__IsDescendantOf_x                                    0x1405A1490
#define CXWnd__IsReallyVisible_x                                   0x1405A1500
#define CXWnd__IsType_x                                            0x1405A1540
#define CXWnd__Minimize_x                                          0x1405A1640
#define CXWnd__ProcessTransition_x                                 0x1405A2520
#define CXWnd__Resize_x                                            0x1405A2640
#define CXWnd__Right_x                                             0x1405A26E0
#define CXWnd__SetFocus_x                                          0x1405A2AB0
#define CXWnd__SetFont_x                                           0x1405A2B00
#define CXWnd__SetKeyTooltip_x                                     0x1405A2C10
#define CXWnd__SetMouseOver_x                                      0x1405A2D30
#define CXWnd__SetParent_x                                         0x1405A2DB0
#define CXWnd__StartFade_x                                         0x1405A31F0
#define CXWnd__vftable_x                                           0x140AB5E80
#define CXWnd__CXWnd_x                                             0x14059ABB0
#define CXWnd__dCXWnd_x                                            0x14059B520

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405E58E0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405C33B0
#define CXWndManager__DrawCursor_x                                 0x1405C3690
#define CXWndManager__DrawWindows_x                                0x1405C38F0
#define CXWndManager__GetKeyboardFlags_x                           0x1405C3FC0
#define CXWndManager__HandleKeyboardMsg_x                          0x1405C4000
#define CXWndManager__RemoveWnd_x                                  0x1405C75F0

// CDBStr
#define CDBStr__GetString_x                                        0x14018A890

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x140674880

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D0F40
#define CCharacterListWnd__EnterWorld_x                            0x1400CFC40
#define CCharacterListWnd__Quit_x                                  0x1400D0F20
#define CCharacterListWnd__UpdateList_x                            0x1400D1DA0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140641A40
#define ItemBase__CreateItemTagString_x                            0x1406424B0
#define ItemBase__GetImageNum_x                                    0x1406449F0
#define ItemBase__GetItemValue_x                                   0x1406468B0
#define ItemBase__IsEmpty_x                                        0x140648460
#define ItemBase__IsKeyRingItem_x                                  0x140648B90
#define ItemBase__ValueSellMerchant_x                              0x14064CDA0
#define ItemClient__CanDrop_x                                      0x1402AFFE0
#define ItemClient__CanGoInBag_x                                   0x1402B0110
#define ItemClient__CreateItemClient_x                             0x1402B0390
#define ItemClient__dItemClient_x                                  0x1402AFE50

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401AA160
#define EQ_LoadingS__Array_x                                       0x140D20230

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140659730
#define PcBase__GetCombatAbility_x                                 0x140659E20
#define PcBase__GetCombatAbilityTimer_x                            0x140659EC0
#define PcBase__GetItemContainedRealEstateIds_x                    0x14065A660
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14065B1A0
#define PcClient__AlertInventoryChanged_x                          0x1402D2510
#define PcClient__GetConLevel_x                                    0x1402D2B30  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402D52C0
#define PcClient__HasLoreItem_x                                    0x1402D6330
#define PcZoneClient__GetItemRecastTimer_x                         0x1402E3B20
#define PcZoneClient__RemoveMyAffect_x                             0x1402E77B0

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x14021AC00  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x14021ADB0  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x14021AF10  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x14021AE50  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x140255A30  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x1401850B0

// PlayerClient
#define PlayerBase__CanSee_x                                       0x14062E800
#define PlayerBase__CanSee1_x                                      0x14062E8D0
#define PlayerBase__GetVisibilityLineSegment_x                     0x14062EDB0
#define PlayerBase__HasProperty_x                                  0x14062EF80
#define PlayerBase__IsTargetable_x                                 0x14062F040
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402F5490
#define PlayerClient__GetPcClient_x                                0x1402F7CE0
#define PlayerClient__PlayerClient_x                               0x1402ED820
#define PlayerClient__SetNameSpriteState_x                         0x1402FB380
#define PlayerClient__SetNameSpriteTint_x                          0x1402FC340
#define PlayerZoneClient__ChangeHeight_x                           0x14030AB20
#define PlayerZoneClient__DoAttack_x                               0x14030B830
#define PlayerZoneClient__GetLevel_x                               0x14030EF70
#define PlayerZoneClient__IsValidTeleport_x                        0x1402587C0
#define PlayerZoneClient__LegalPlayerRace_x                        0x140198DE0

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x140304240  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1403042F0  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1403043F0
#define PlayerManagerClient__CreatePlayer_x                        0x140303D10
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x14062E3C0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402B5250
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402B4E50
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402B4EC0
#define KeypressHandler__ClearCommandStateArray_x                  0x1402B51E0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402B5370
#define KeypressHandler__HandleKeyUp_x                             0x1402B5490
#define KeypressHandler__SaveKeymapping_x                          0x1402B50F0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1406723A0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x14066C170

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402DC8F0  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402E1C40
#define PcZoneClient__GetPcSkillLimit_x                            0x1402E42B0
#define PcZoneClient__RemovePetEffect_x                            0x1402E7A90
#define PcZoneClient__HasAlternateAbility_x                        0x1402E4EA0
#define PcZoneClient__CanEquipItem_x                               0x1402DFF60
#define PcZoneClient__GetItemByID_x                                0x1402E2B70
#define PcZoneClient__RemoveBuffEffect_x                           0x1402E7630
#define PcZoneClient__BandolierSwap_x                              0x1402DEFC0

// Doors
#define EQSwitch__UseSwitch_x                                      0x14025D2F0

// IconCache
#define IconCache__GetIcon_x                                       0x1403BEB30

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403B3170
#define CContainerMgr__CloseContainer_x                            0x1403B2AB0
#define CContainerMgr__OpenExperimentContainer_x                   0x1403B34F0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404A9850

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402A79D0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x14043A180
#define CLootWnd__RequestLootSlot_x                                0x14043B1B0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401D97B0
#define EQ_Spell__SpellAffects_x                                   0x1401DAA90
#define EQ_Spell__SpellAffectBase_x                                0x1401DA9F0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D9F50
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D9F00
#define EQ_Spell__IsSPAStacking_x                                  0x1401DA6C0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401DA270
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401D9B40

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C1CC0

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1405064C0
#define CTargetWnd__RefreshTargetBuffs_x                           0x140505BD0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1405053E0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x14050DB50  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140181A70
#define CTaskManager__GetTaskStatus_x                              0x140181B80
#define CTaskManager__GetElementDescription_x                      0x140181700

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401D7AD0
#define EqSoundManager__PlayScriptMp3_x                            0x1401D6910
#define EqSoundManager__SoundAssistPlay_x                          0x14032E140  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x14032E480  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405A3FA0
#define CTextureAnimation__SetCurCell_x                            0x1405A42B0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402A5BF0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x14068CE40
#define CharacterBase__GetItemByGlobalIndex1_x                     0x14068CEC0
#define CharacterBase__IsExpansionFlag_x                           0x1401FBC10

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x14038FBF0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x1403905F0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140391B40

// messages
#define msg_spell_worn_off_x                                       0x140211470
#define msg_new_text_x                                             0x14020CC20
#define __msgTokenTextParam_x                                      0x140204490
#define msgTokenText_x                                             0x1402043A0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x14032FD70
#define SpellManager__GetSpellByGroupAndRank_x                     0x14032FC90

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x14063CDB0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140433600

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403B7EC0
#define CCursorAttachment__IsOkToActivate_x                        0x1403BB180
#define CCursorAttachment__RemoveAttachment_x                      0x1403BB430
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405DD2A0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405DD490
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405DD4A0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x14014E9B0
#define CFindItemWnd__Update_x                                     0x14014F350
#define CFindItemWnd__PickupSelectedItem_x                         0x140148DF0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x140158460
#define LootFiltersManager__GetItemFilterData_x                    0x140158F80
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140159820
#define LootFiltersManager__SetItemLootFilter_x                    0x140159AD0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14048C3E0

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x1403286C0
#define CResolutionHandler__UpdateResolution_x                     0x1405896E0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403AF460

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x140691220  // Rename..?
#define CDistillerInfo__Instance_x                                 0x140691110  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403D5D40
#define CGroupWnd__UpdateDisplay_x                                 0x1403D5920

// ItemBase
#define ItemBase__IsLore_x                                         0x140648CC0
#define ItemBase__IsLoreEquipped_x                                 0x140648D50

#define MultipleItemMoveManager__ProcessMove_x                     0x1402C80B0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140255B90
#define EQPlacedItemManager__GetItemByGuid_x                       0x140255B20
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140255B60

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140322B10

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140126640
#define FactionManagerClient__HandleFactionMessage_x               0x1401269F0
#define FactionManagerClient__GetFactionStanding_x                 0x140125E10
#define FactionManagerClient__GetMaxFaction_x                      0x140125E10
#define FactionManagerClient__GetMinFaction_x                      0x140125CC0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AED50

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140131DF0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401B2B00
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401B1E80
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401B2920  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401B28A0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x140335060

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140322B10

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x14021AFA0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140599D80

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x1400868B0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140346900

// AchievementManager
#define AchievementManager__Instance_x                             0x14008EA70

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x140675400
#define FreeToPlayClient__RestrictionInfo_x                        0x140ACA5A0

// UdpConnection
#define UdpConnection__GetStats_x                                  0x14053C530

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x140825600
#define CGFScreenWnd__CGFScreenWnd_x                               0x140071260
#define CGFScreenWnd__CGFScreenWnd1_x                              0x1400713F0
#define CGFScreenWnd__dCGFScreenWnd_x                              0x1400715A0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
