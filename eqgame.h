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

#define __ClientDate                                               20241213u
#define __ExpectedVersionDate                                     "Dec 13 2024"
#define __ExpectedVersionTime                                     "10:49:58"
#define __ActualVersionDate_x                                      0x14094B010
#define __ActualVersionTime_x                                      0x14094B000
#define __ActualVersionBuild_x                                     0x1408E1760

// Memory Protection
#define __MemChecker0_x                                            0x1402B20F0
#define __MemChecker1_x                                            0x1405715D0
#define __MemChecker4_x                                            0x140280BD0
#define __EncryptPad0_x                                            0x140D17E50

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E50AC0
#define instEQZoneInfo_x                                           0x140E50CB4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x140217960
#define __gfMaxZoomCameraDistance_x                                0x1408E29D8
#define __gfMaxCameraDistance_x                                    0x140A87808
#define __CurrentSocial_x                                          0x140BD3940 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D0F720
#define g_eqCommandStates_x                                        0x140D10790
#define __CommandList_x                                            0x140D109D0
#define __ScreenMode_x                                             0x140D9836C
#define __gWorld_x                                                 0x140E4B3F8
#define __gpbCommandEvent_x                                        0x140E4B404
#define __ServerHost_x                                             0x140E4B5E8
#define __Guilds_x                                                 0x140E4F670
#define __MemCheckBitmask_x                                        0x140E50FFB
#define __MemCheckActive_x                                         0x140E526ED
#define __MouseEventTime_x                                         0x140EC6038
#define DI8__MouseState_x                                          0x140ECA268
#define __heqmain_x                                                0x140ECC708
#define DI8__Mouse_x                                               0x140ECA1B8
#define __HWnd_x                                                   0x140ECA240
#define __Mouse_x                                                  0x140ECA174
#define DI8__Keyboard_x                                            0x140ECA190
#define __LoginName_x                                              0x140ECCDEC
#define __CurrentMapLabel_x                                        0x140EE0680
#define __LabelCache_x                                             0x140EE1250
#define __ChatFilterDefs_x                                         0x140A228F0
#define Teleport_Table_Size_x                                      0x140E4B490
#define Teleport_Table_x                                           0x140E48F50

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E4BA00
#define pinstActiveBanker_x                                        0x140E4B920
#define pinstActiveCorpse_x                                        0x140E4B910
#define pinstActiveGMaster_x                                       0x140E4B918
#define pinstActiveMerchant_x                                      0x140E4B908
#define pinstAltAdvManager_x                                       0x140D99218
#define pinstCEverQuest_x                                          0x140ECA1B0
#define pinstCamActor_x                                            0x140D98358
#define pinstCDBStr_x                                              0x140D97FD0
#define pinstCDisplay_x                                            0x140E4B9F8
#define pinstControlledPlayer_x                                    0x140E4B9B0
#define pinstCResolutionHandler_x                                  0x1415519F8
#define pinstCSidlManager_x                                        0x140EF2550
#define pinstCXWndManager_x                                        0x140EF2548
#define instDynamicZone_x                                          0x140E4F530 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E4F57E
#define instExpeditionName_x                                       0x140E4F5BE
#define pinstDZMember_x                                            0x140E4F648
#define pinstDZTimerInfo_x                                         0x140E4F650
#define pinstEqLogin_x                                             0x140ECC730
#define instTribute_x                                              0x140D0AD50
#define pinstDeviceInputProxy_x                                    0x140E50B1C
#define pinstEQSoundManager_x                                      0x140D99598
#define pinstEQSpellStrings_x                                      0x140D7CBA0
#define pinstSGraphicsEngine_x                                     0x141551778
#define pinstLocalPC_x                                             0x140E4B9E0
#define pinstLocalPlayer_x                                         0x140E4B900
#define pinstCMercenaryClientManager_x                             0x140EC7918
#define pinstModelPlayer_x                                         0x140E4B930
#define pinstRenderInterface_x                                     0x141551790
#define pinstSkillMgr_x                                            0x140EC95B8
#define pinstSpawnManager_x                                        0x140EC7CE0
#define pinstSpellManager_x                                        0x140EC9620
#define pinstStringTable_x                                         0x140E48F40
#define pinstSwitchManager_x                                       0x140E48EC0
#define pinstTarget_x                                              0x140E4B9A8
#define pinstTaskMember_x                                          0x140D0AD40 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140E4B9B8
#define pinstTradeTarget_x                                         0x140E4B928
#define instTributeActive_x                                        0x140D0AD79
#define pinstViewActor_x                                           0x140D98350
#define pinstWorldData_x                                           0x140E4B9F0
#define pinstPlayerPath_x                                          0x140EC7D08
#define pinstTargetIndicator_x                                     0x140EC96D0
#define EQObject_Top_x                                             0x140E4B9D0

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140EDD7D8
#define pinstCContainerMgr_x                                       0x140D98028
#define pinstCContextMenuManager_x                                 0x140EF2230
#define pinstCInvSlotMgr_x                                         0x140D98020
#define pinstCItemDisplayManager_x                                 0x140EE0250
#define pinstCPopupWndManager_x                                    0x140EE0AE0
#define pinstCSpellDisplayMgr_x                                    0x140EE1130
#define pinstCTaskManager_x                                        0x140BD3C80
#define pinstEQSuiteTextureLoader_x                                0x140D21560
#define pinstItemIconCache_x                                       0x140EDDB38
#define pinstLootFiltersManager_x                                  0x140D97A18
#define pinstGFViewListener_x                                      0x140EF1A08


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x1402409C0
#define __CastRay_x                                                0x140238E00
#define __CastRay2_x                                               0x140238B00
#define __compress_block_x                                         0x140526C70
#define __ConvertItemTags_x                                        0x140239260
#define __CleanItemTags_x                                          0x140088BC0
#define __CreateCascadeMenuItems_x                                 0x140187AB0
#define __decompress_block_x                                       0x14056CE40
#define __DoesFileExist_x                                          0x140575480
#define __EQGetTime_x                                              0x140571B80
#define __ExecuteCmd_x                                             0x14020F270
#define __FixHeading_x                                             0x14069F060
#define __FlushDxKeyboard_x                                        0x140333FC0
#define __get_bearing_x                                            0x140242BB0
#define __get_melee_range_x                                        0x140242CA0
#define __GetAnimationCache_x                                      0x1403B13B0
#define __GetGaugeValueFromEQ_x                                    0x1404E67A0
#define __GetLabelFromEQ_x                                         0x1404E7DA0
#define __GetXTargetType_x                                         0x1406A0340   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14069F0E0
#define __HelpPath_x                                               0x140EC5F00   // Why?
#define __NewUIINI_x                                               0x1404F3840   // Why?
#define __ProcessDeviceEvents_x                                    0x1402811E0
#define __ProcessGameEvents_x                                      0x140275F10
#define __ProcessKeyboardEvents_x                                  0x140335710
#define __ProcessMouseEvents_x                                     0x1402775E0
#define __SaveColors_x                                             0x140197AD0
#define __STMLToText_x                                             0x140579DD0
#define __WndProc_x                                                0x1403327C0
#define CMemoryMappedFile__SetFile_x                               0x1407DB0F0
#define DrawNetStatus_x                                            0x1402C05E0
#define Util__FastTime_x                                           0x140571110
#define __eq_delete_x                                              0x1406A7194
#define __eq_new_x                                                 0x1406A7150
#define __CopyLayout_x                                             0x1402AE4F0
#define __ThrottleFrameRate_x                                      0x140265734
#define __ThrottleFrameRateEnd_x                                   0x140265794

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140344DF0
#define CAAWnd__Update_x                                           0x1403450F0
#define CAAWnd__UpdateSelected_x                                   0x140346140

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AAF80
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A3880
#define CAdvancedLootWnd__AddPlayerToList_x                        0x14082FBB8
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AB8B0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401A2C00
#define AltAdvManager__IsAbilityReady_x                            0x1401A2E80
#define AltAdvManager__GetAAById_x                                 0x1401A24D0
#define AltAdvManager__CanTrainAbility_x                           0x1401A22E0
#define AltAdvManager__CanSeeAbility_x                             0x1401A1FA0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D1970
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D27B0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D2A00
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400E6890
#define CharacterZoneClient__CanUseItem_x                          0x1400E6CC0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D33D0
#define CharacterZoneClient__CastSpell_x                           0x1400D3470
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E27F0
#define CharacterZoneClient__Cur_HP_x                              0x1400E8390
#define CharacterZoneClient__Cur_Mana_x                            0x1400E8550
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D6200
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400EEA10
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FD440  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D76B0
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E6190
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F05D0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400EF4A0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D7880
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C7D80
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C9750
#define CharacterZoneClient__GetHPRegen_x                          0x1400EFBE0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E8000
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F0860
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D7900
#define CharacterZoneClient__GetManaRegen_x                        0x1400F1640
#define CharacterZoneClient__GetModCap_x                           0x1400F8C00
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D7B90
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D7DA0
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CC8C0
#define CharacterZoneClient__HasSkill_x                            0x1400F4630
#define CharacterZoneClient__HitBySpell_x                          0x1400D8850
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DBFF0
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F86E0
#define CharacterZoneClient__Max_Endurance_x                       0x1402DCC90  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F8A30
#define CharacterZoneClient__Max_Mana_x                            0x1402DCEB0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F8E90
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DF380
#define CharacterZoneClient__SpellDuration_x                       0x1400E0080
#define CharacterZoneClient__TotalEffect_x                         0x1400E13D0
#define CharacterZoneClient__UseSkill_x                            0x1400FE3B0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x1403632F0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14036D620

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x1403694C0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14036D0A0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14036FCF0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AA6590

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140392BE0
#define CChatWindowManager__InitContextMenu_x                      0x140392D70
#define CChatWindowManager__FreeChatWindow_x                       0x140391C60
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x14039A950
#define CChatWindowManager__CreateChatWindow_x                     0x1403915A0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140106870

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x14039B9A0
#define CChatWindow__Clear_x                                       0x14039C950
#define CChatWindow__WndNotification_x                             0x14039DB40
#define CChatWindow__AddHistory_x                                  0x14039C450

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405AEF10
#define CContextMenu__RemoveMenuItem_x                             0x1405AF300
#define CContextMenu__RemoveAllMenuItems_x                         0x1405AF2D0
#define CContextMenu__CheckMenuItem_x                              0x1405AF140
#define CContextMenu__SetMenuItem_x                                0x1405AF320
#define CContextMenu__AddSeparator_x                               0x1405AF080

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405A0DE0
#define CContextMenuManager__RemoveMenu_x                          0x1405A13B0
#define CContextMenuManager__PopupMenu_x                           0x1405A10F0
#define CContextMenuManager__Flush_x                               0x1405A0E60
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403A92D0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x14061E290
#define CChatService__GetFriendName_x                              0x140668BF0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x140591CE0
#define CComboWnd__Draw_x                                          0x140591DE0
#define CComboWnd__GetCurChoice_x                                  0x1405920B0  // unused
#define CComboWnd__GetListRect_x                                   0x140592150
#define CComboWnd__InsertChoice_x                                  0x140592490
#define CComboWnd__SetColors_x                                     0x140592820
#define CComboWnd__SetChoice_x                                     0x1405927E0
#define CComboWnd__GetItemCount_x                                  0x140592140
#define CComboWnd__GetCurChoiceText_x                              0x1405920F0  // unused
#define CComboWnd__GetChoiceText_x                                 0x140592080
#define CComboWnd__InsertChoiceAtIndex_x                           0x140592550

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403A7050
#define CContainerWnd__SetContainer_x                              0x1403FD660
#define CContainerWnd__vftable_x                                   0x1409BEA48

// CDisplay
#define CDisplay__cameraType_x                                     0x140D9811C
#define CDisplay__ZoneMainUI_x                                     0x1405C9080
#define CDisplay__PreZoneMainUI_x                                  0x140194A00
#define CDisplay__CleanGameUI_x                                    0x140186B70
#define CDisplay__GetClickedActor_x                                0x14018AD30
#define CDisplay__GetUserDefinedColor_x                            0x14018B9A0
#define CDisplay__InitCharSelectUI_x                               0x14018BC50
#define CDisplay__ReloadUI_x                                       0x140196CF0
#define CDisplay__RestartUI_x                                      0x1401F5830
#define CDisplay__WriteTextHD2_x                                   0x14019DD00
#define CDisplay__TrueDistance_x                                   0x14019D9B0
#define CDisplay__SetViewActor_x                                   0x14019A1F0
#define CDisplay__GetFloorHeight_x                                 0x14018AF90
#define CDisplay__ToggleScreenshotMode_x                           0x14019D4A0
#define CDisplay__RealRender_World_x                               0x1401960D0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405D32B0
#define CEditWnd__DrawCaret_x                                      0x1405C4D90  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405C5250
#define CEditWnd__GetCaretPt_x                                     0x1405C54D0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405C5510
#define CEditWnd__GetDisplayString_x                               0x1405C5780
#define CEditWnd__GetHorzOffset_x                                  0x1405C59C0
#define CEditWnd__GetLineForPrintableChar_x                        0x1405C5B10
#define CEditWnd__GetSelStartPt_x                                  0x1405C5DF0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405C5C40
#define CEditWnd__PointFromPrintableChar_x                         0x1405C69A0
#define CEditWnd__ReplaceSelection_x                               0x1405C6D50
#define CEditWnd__SelectableCharFromPoint_x                        0x1405C71F0
#define CEditWnd__SetEditable_x                                    0x1405C7480
#define CEditWnd__SetWindowText_x                                  0x1405C74B0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140266840
#define CEverQuest__ClickedPlayer_x                                0x14025C350
#define CEverQuest__CreateTargetIndicator_x                        0x14025CC10
#define CEverQuest__DoTellWindow_x                                 0x140106580 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140106E40 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140268200
#define CEverQuest__dsp_chat_x                                     0x140105FB0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402925F0
#define CEverQuest__Emote_x                                        0x140268BE0
#define CEverQuest__GetBodyTypeDesc_x                              0x140269990
#define CEverQuest__GetClassDesc_x                                 0x1402699F0
#define CEverQuest__GetClassThreeLetterCode_x                      0x140269DC0
#define CEverQuest__GetDeityDesc_x                                 0x14026A070
#define CEverQuest__GetLangDesc_x                                  0x14026A4A0
#define CEverQuest__GetRaceDesc_x                                  0x14026A840
#define CEverQuest__InterpretCmd_x                                 0x14026C180
#define CEverQuest__LeftClickedOnPlayer_x                          0x140281250
#define CEverQuest__LMouseUp_x                                     0x14026DBA0
#define CEverQuest__RightClickedOnPlayer_x                         0x14027EA70
#define CEverQuest__RMouseUp_x                                     0x140278170
#define CEverQuest__SetGameState_x                                 0x140283790
#define CEverQuest__UPCNotificationFlush_x                         0x1402890C0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14026D810
#define CEverQuest__ReportSuccessfulHeal_x                         0x140279520
#define CEverQuest__ReportSuccessfulHit_x                          0x14027A340

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403BB7A0

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C18C0
#define CGuild__GetGuildName_x                                     0x1400C1900

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403DEA30

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402A42A0
#define CHotButton__SetCheck_x                                     0x1402A4570

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403F63E0
#define CInvSlotMgr__MoveItem_x                                    0x1403F65C0
#define CInvSlotMgr__SelectSlot_x                                  0x1403F7FC0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403F3610
#define CInvSlot__SliderComplete_x                                 0x1403F4B60
#define CInvSlot__GetItemBase_x                                    0x1403EF050
#define CInvSlot__UpdateItem_x                                     0x1403F5010

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403F9350

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x14041A3B0
#define CItemDisplayWnd__UpdateStrings_x                           0x14041CCA0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140416EB0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140418650
#define CItemDisplayWnd__RequestConvertItem_x                      0x1404197E0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404E32C0
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404E4FB0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x14051FFE0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140413600

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14014EF00

// CLabel
#define CLabel__UpdateText_x                                       0x140424070

// CListWnd
#define CListWnd__CListWnd_x                                       0x140595660
#define CListWnd__dCListWnd_x                                      0x140595AB0
#define CListWnd__vftable_x                                        0x140AA46E8
#define CListWnd__AddColumn_x                                      0x140596150
#define CListWnd__AddColumn1_x                                     0x1405961F0
#define CListWnd__AddLine_x                                        0x140596350
#define CListWnd__AddString_x                                      0x1405968E0
#define CListWnd__CalculateFirstVisibleLine_x                      0x140596E50
#define CListWnd__CalculateVSBRange_x                              0x140597130
#define CListWnd__ClearSel_x                                       0x1405972E0
#define CListWnd__ClearAllSel_x                                    0x140597280
#define CListWnd__CloseAndUpdateEditWindow_x                       0x140597340
#define CListWnd__Compare_x                                        0x140597500
#define CListWnd__Draw_x                                           0x1405979D0
#define CListWnd__DrawColumnSeparators_x                           0x140598580
#define CListWnd__DrawHeader_x                                     0x140598640
#define CListWnd__DrawItem_x                                       0x140598D20
#define CListWnd__DrawLine_x                                       0x1405996A0
#define CListWnd__DrawSeparator_x                                  0x140599B60
#define CListWnd__EnableLine_x                                     0x140599F80
#define CListWnd__EnsureVisible_x                                  0x140599FE0
#define CListWnd__ExtendSel_x                                      0x14059A0E0
#define CListWnd__GetColumnMinWidth_x                              0x14059A470
#define CListWnd__GetColumnWidth_x                                 0x14059A4F0
#define CListWnd__GetCurSel_x                                      0x14059A5F0
#define CListWnd__GetItemData_x                                    0x14059A970
#define CListWnd__GetItemHeight_x                                  0x14059A9B0
#define CListWnd__GetItemRect_x                                    0x14059ABD0
#define CListWnd__GetItemText_x                                    0x14059AE70
#define CListWnd__GetSelList_x                                     0x14059B0C0
#define CListWnd__GetSeparatorRect_x                               0x14059B2B0
#define CListWnd__InsertLine_x                                     0x14059C710
#define CListWnd__RemoveLine_x                                     0x14059CD80
#define CListWnd__SetColors_x                                      0x14059D140
#define CListWnd__SetColumnJustification_x                         0x14059D160
#define CListWnd__SetColumnLabel_x                                 0x14059D1E0
#define CListWnd__SetColumnWidth_x                                 0x14059D380
#define CListWnd__SetCurSel_x                                      0x14059D450
#define CListWnd__SetItemColor_x                                   0x14059D6C0
#define CListWnd__SetItemData_x                                    0x14059D760
#define CListWnd__SetItemText_x                                    0x14059D9A0
#define CListWnd__Sort_x                                           0x14059DDB0
#define CListWnd__ToggleSel_x                                      0x14059DF20
#define CListWnd__SetColumnsSizable_x                              0x14059D3D0
#define CListWnd__SetItemWnd_x                                     0x14059DAD0
#define CListWnd__GetItemWnd_x                                     0x14059B050
#define CListWnd__SetItemIcon_x                                    0x14059D7A0
#define CListWnd__CalculateCustomWindowPositions_x                 0x140596C20
#define CListWnd__SetVScrollPos_x                                  0x14059DD10

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140437350

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A0B4F8
#define MapViewMap__Clear_x                                        0x140438ED0
#define MapViewMap__SetZoom_x                                      0x14043F520
#define MapViewMap__HandleLButtonDown_x                            0x14043C060

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140460BC0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140467150
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x1404678F0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14046B100
#define CMerchantWnd__SelectBuySellSlot_x                          0x14046A440
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14046F380

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x140643F60
#define CPacketScrambler__hton_x                                   0x140643F50

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405BE650
#define CSidlManagerBase__FindAnimation1_x                         0x1405BE590
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405BEC80
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405BEA30
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405BD980
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405BD910
#define CSidlManagerBase__CreateXWnd_x                             0x1405BCF50

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404D62C0
#define CSidlManager__CreateXWnd_x                                 0x1404D6480

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x140583150
#define CSidlScreenWnd__CalculateVSBRange_x                        0x140583280
#define CSidlScreenWnd__ConvertToRes_x                             0x1405CD7F0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x140583400
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x140582880
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x140582950
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x140582B60
#define CSidlScreenWnd__DrawSidlPiece_x                            0x140583AF0
#define CSidlScreenWnd__EnableIniStorage_x                         0x140583D20
#define CSidlScreenWnd__GetChildItem_x                             0x140583EC0
#define CSidlScreenWnd__GetSidlPiece_x                             0x140584110
#define CSidlScreenWnd__HandleLButtonUp_x                          0x14058E340 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x140584480
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405847F0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140585090
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140585A90
#define CSidlScreenWnd__m_layoutCopy_x                             0x140EF18A8
#define CSidlScreenWnd__StoreIniInfo_x                             0x140586130
#define CSidlScreenWnd__StoreIniVis_x                              0x140586920
#define CSidlScreenWnd__vftable_x                                  0x140AA3958
#define CSidlScreenWnd__WndNotification_x                          0x140586970

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14031D4A0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14031D940 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14031D870
#define CSkillMgr__IsActivatedSkill_x                              0x14031DCF0
#define CSkillMgr__IsCombatSkill_x                                 0x14031DD30
#define CSkillMgr__GetSkillTimerDuration_x                         0x14031DC60
#define CSkillMgr__GetSkillLastUsed_x                              0x14031D8C0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x14059E890
#define CSliderWnd__SetValue_x                                     0x14059F0A0
#define CSliderWnd__SetNumTicks_x                                  0x14059EF20

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404DC910

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405A3830
#define CStmlWnd__CalculateHSBRange_x                              0x14058DD20
#define CStmlWnd__CalculateVSBRange_x                              0x1405A4750
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405A51D0
#define CStmlWnd__ForceParseNow_x                                  0x1405A5270
#define CStmlWnd__GetVisibleText_x                                 0x1405A5940
#define CStmlWnd__MakeStmlColorTag_x                               0x1405A76A0
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405A76E0
#define CStmlWnd__SetSTMLText_x                                    0x1405AE6B0
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405AE860
#define CStmlWnd__UpdateHistoryString_x                            0x1405AEBF0

// CTabWnd
#define CTabWnd__Draw_x                                            0x14059F470
#define CTabWnd__DrawCurrentPage_x                                 0x14059F510
#define CTabWnd__DrawTab_x                                         0x14059F8E0
#define CTabWnd__GetTabRect_x                                      0x14059FF50
#define CTabWnd__InsertPage_x                                      0x1405A0220
#define CTabWnd__RemovePage_x                                      0x1405A04B0
#define CTabWnd__SetPage_x                                         0x1405A0610
#define CTabWnd__UpdatePage_x                                      0x1405A0910

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405C7900
#define CPageWnd__SetTabText_x                                     0x1405C7970

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BB010  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BB420


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405B6050
#define CTextureFont__DrawWrappedText1_x                           0x1405B5F60
#define CTextureFont__DrawWrappedText2_x                           0x1405B6180
#define CTextureFont__GetTextExtent_x                              0x1405B6530
#define CTextureFont__GetHeight_x                                  0x1405B64F0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405CBF50

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x140582460

// CXStr
#define CXStr__gFreeLists_x                                        0x140D20ED0
#define CXStr__gCXStrAccess_x                                      0x140EF16A8

// CXWnd
#define CXWnd__BringToTop_x                                        0x140589360
#define CXWnd__ClrFocus_x                                          0x140589650
#define CXWnd__Destroy_x                                           0x1405897D0
#define CXWnd__DoAllDrawing_x                                      0x1405898E0
#define CXWnd__DrawColoredRect_x                                   0x14058A0B0
#define CXWnd__DrawTooltip_x                                       0x14058B740
#define CXWnd__DrawTooltipAtPoint_x                                0x14058B7F0
#define CXWnd__GetChildItem_x                                      0x14058C0F0
#define CXWnd__GetChildWndAt_x                                     0x14058C1B0
#define CXWnd__GetClientRect_x                                     0x14058C470
#define CXWnd__GetClientClipRect_x                                 0x14058C320
#define CXWnd__GetRelativeRect_x                                   0x14058DE50
#define CXWnd__GetScreenClipRect_x                                 0x14058DF50
#define CXWnd__GetScreenRect_x                                     0x14058E0D0
#define CXWnd__GetTooltipRect_x                                    0x14058E240
#define CXWnd__IsActive_x                                          0x14058E800
#define CXWnd__IsDescendantOf_x                                    0x14058E830
#define CXWnd__IsReallyVisible_x                                   0x14058E8A0
#define CXWnd__IsType_x                                            0x14058E8E0
#define CXWnd__Minimize_x                                          0x14058E9E0
#define CXWnd__ProcessTransition_x                                 0x14058F860
#define CXWnd__Resize_x                                            0x14058F970
#define CXWnd__Right_x                                             0x14058FA10
#define CXWnd__SetFocus_x                                          0x14058FDD0
#define CXWnd__SetFont_x                                           0x14058FE20
#define CXWnd__SetKeyTooltip_x                                     0x14058FF30
#define CXWnd__SetMouseOver_x                                      0x140590070
#define CXWnd__SetParent_x                                         0x1405900F0
#define CXWnd__StartFade_x                                         0x140590520
#define CXWnd__vftable_x                                           0x140AA3F48
#define CXWnd__CXWnd_x                                             0x140587F10
#define CXWnd__dCXWnd_x                                            0x140588860

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405D2A30

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405B04B0
#define CXWndManager__DrawCursor_x                                 0x1405B0790
#define CXWndManager__DrawWindows_x                                0x1405B09F0
#define CXWndManager__GetKeyboardFlags_x                           0x1405B10C0
#define CXWndManager__HandleKeyboardMsg_x                          0x1405B1100
#define CXWndManager__RemoveWnd_x                                  0x1405B4730

// CDBStr
#define CDBStr__GetString_x                                        0x140184D30

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x14064DD70

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CF4F0
#define CCharacterListWnd__EnterWorld_x                            0x1400CE1F0
#define CCharacterListWnd__Quit_x                                  0x1400CF4D0
#define CCharacterListWnd__UpdateList_x                            0x1400D0360

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x14061B450
#define ItemBase__CreateItemTagString_x                            0x14061BEA0
#define ItemBase__GetImageNum_x                                    0x14061E420
#define ItemBase__GetItemValue_x                                   0x1406202A0
#define ItemBase__IsEmpty_x                                        0x140621EC0
#define ItemBase__IsKeyRingItem_x                                  0x1406225F0
#define ItemBase__ValueSellMerchant_x                              0x140626800
#define ItemClient__CanDrop_x                                      0x1402A6780
#define ItemClient__CanGoInBag_x                                   0x1402A68B0
#define ItemClient__CreateItemClient_x                             0x1402A6B30
#define ItemClient__dItemClient_x                                  0x1402A65F0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401A43A0
#define EQ_LoadingS__Array_x                                       0x140D0D230

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x1406330E0
#define PcBase__GetCombatAbility_x                                 0x1406337D0
#define PcBase__GetCombatAbilityTimer_x                            0x140633870
#define PcBase__GetItemContainedRealEstateIds_x                    0x140634010
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x140634B50
#define PcClient__AlertInventoryChanged_x                          0x1402C8BC0
#define PcClient__GetConLevel_x                                    0x1402C91E0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402CB9B0
#define PcClient__HasLoreItem_x                                    0x1402CC970
#define PcZoneClient__GetItemRecastTimer_x                         0x1402DA200
#define PcZoneClient__RemoveMyAffect_x                             0x1402DDDD0

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x140213980  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x140213B30  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x140213C90  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x140213BD0  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x14024D950  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14017F590

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140691C00
#define PlayerBase__CanSee1_x                                      0x140691CD0
#define PlayerBase__GetVisibilityLineSegment_x                     0x140692190
#define PlayerBase__HasProperty_x                                  0x140692360
#define PlayerBase__IsTargetable_x                                 0x140692420
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402EAAC0
#define PlayerClient__GetPcClient_x                                0x1402ED2F0
#define PlayerClient__PlayerClient_x                               0x1402E3DA0
#define PlayerClient__SetNameSpriteState_x                         0x1402F0740
#define PlayerClient__SetNameSpriteTint_x                          0x1402F1700
#define PlayerZoneClient__ChangeHeight_x                           0x1402FFC70
#define PlayerZoneClient__DoAttack_x                               0x140300980
#define PlayerZoneClient__GetLevel_x                               0x1403040C0
#define PlayerZoneClient__IsValidTeleport_x                        0x1402506D0
#define PlayerZoneClient__LegalPlayerRace_x                        0x140193280

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402F9590  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402F9640  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402F9740
#define PlayerManagerClient__CreatePlayer_x                        0x1402F9060
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x1406917C0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402AB9F0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402AB5F0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402AB660
#define KeypressHandler__ClearCommandStateArray_x                  0x1402AB980  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402ABB10
#define KeypressHandler__HandleKeyUp_x                             0x1402ABC30
#define KeypressHandler__SaveKeymapping_x                          0x1402AB890  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x14064B8B0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x140645690

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402D2F10  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402D8240
#define PcZoneClient__GetPcSkillLimit_x                            0x1402DA8F0
#define PcZoneClient__RemovePetEffect_x                            0x1402DE0B0
#define PcZoneClient__HasAlternateAbility_x                        0x1402DB4C0
#define PcZoneClient__CanEquipItem_x                               0x1402D6570
#define PcZoneClient__GetItemByID_x                                0x1402D92D0
#define PcZoneClient__RemoveBuffEffect_x                           0x1402DDC50
#define PcZoneClient__BandolierSwap_x                              0x1402D55C0

// Doors
#define EQSwitch__UseSwitch_x                                      0x140255200

// IconCache
#define IconCache__GetIcon_x                                       0x1403B13E0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403A5E00
#define CContainerMgr__CloseContainer_x                            0x1403A5740
#define CContainerMgr__OpenExperimentContainer_x                   0x1403A6180

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x14049A640

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x14029E9C0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x14042B350
#define CLootWnd__RequestLootSlot_x                                0x14042C370

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401D36C0
#define EQ_Spell__SpellAffects_x                                   0x1401D4970
#define EQ_Spell__SpellAffectBase_x                                0x1401D48D0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D7F70
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D7F20
#define EQ_Spell__IsSPAStacking_x                                  0x1401D4590
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401D4150
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401D3A30

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C0500

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1404F7000
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404F6710
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404F5F20

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404FE650  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x14017BF40
#define CTaskManager__GetTaskStatus_x                              0x14017C050
#define CTaskManager__GetElementDescription_x                      0x14017BBD0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401D1A30
#define EqSoundManager__PlayScriptMp3_x                            0x1401D0870
#define EqSoundManager__SoundAssistPlay_x                          0x140322AE0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140322E20  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x140591270
#define CTextureAnimation__SetCurCell_x                            0x140591580

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x14029CC20

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1406662C0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x140666340
#define CharacterBase__IsExpansionFlag_x                           0x1401F5080

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140383AE0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140384450
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x1403859A0

// messages
#define msg_spell_worn_off_x                                       0x14020A2B0
#define msg_new_text_x                                             0x140205B20
#define __msgTokenTextParam_x                                      0x1401FD610
#define msgTokenText_x                                             0x1401FD530

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x1403244A0
#define SpellManager__GetSpellByGroupAndRank_x                     0x1403243C0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x1406A0720

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1404247C0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403AAAE0
#define CCursorAttachment__IsOkToActivate_x                        0x1403ADA40
#define CCursorAttachment__RemoveAttachment_x                      0x1403ADCF0
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405CA3F0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405CA5E0
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405CA5F0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x14014A0D0
#define CFindItemWnd__Update_x                                     0x14014AA70
#define CFindItemWnd__PickupSelectedItem_x                         0x140144550

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x140153C10
#define LootFiltersManager__GetItemFilterData_x                    0x140154720
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140154FC0
#define LootFiltersManager__SetItemLootFilter_x                    0x140155270

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14047D370

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x14031D060
#define CResolutionHandler__UpdateResolution_x                     0x1406A4F80

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403A20E0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x14066A6B0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x14066A5A0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403C7B60
#define CGroupWnd__UpdateDisplay_x                                 0x1403C7740

// ItemBase
#define ItemBase__IsLore_x                                         0x140622720
#define ItemBase__IsLoreEquipped_x                                 0x1406227B0

#define MultipleItemMoveManager__ProcessMove_x                     0x1402BE780

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14024DAB0
#define EQPlacedItemManager__GetItemByGuid_x                       0x14024DA40
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14024DA80

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140317480

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140124080
#define FactionManagerClient__HandleFactionMessage_x               0x140124430
#define FactionManagerClient__GetFactionStanding_x                 0x140123850
#define FactionManagerClient__GetMaxFaction_x                      0x140123850
#define FactionManagerClient__GetMinFaction_x                      0x140123700

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AD590

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x14012F830

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401ACCF0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401AC070
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401ACB10  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401ACA90  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x140329510

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140317480

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x140213D20

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140586F60

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140085A70

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14033AD40

// AchievementManager
#define AchievementManager__Instance_x                             0x14008D440

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x14064E8F0
#define FreeToPlayClient__RestrictionInfo_x                        0x140AB7FE0

// UdpConnection
#define UdpConnection__GetStats_x                                  0x14052D090

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x140817548
#define CGFScreenWnd__CGFScreenWnd_x                               0x1400703C0
#define CGFScreenWnd__CGFScreenWnd1_x                              0x140070550
#define CGFScreenWnd__dCGFScreenWnd_x                              0x140070700

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
