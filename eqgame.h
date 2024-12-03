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

#define __ClientDate                                               20241127u
#define __ExpectedVersionDate                                     "Nov 27 2024"
#define __ExpectedVersionTime                                     "10:55:51"
#define __ActualVersionDate_x                                      0x14094B010
#define __ActualVersionTime_x                                      0x14094B000
#define __ActualVersionBuild_x                                     0x1408E1760

// Memory Protection
#define __MemChecker0_x                                            0x1402B2390
#define __MemChecker1_x                                            0x140571E90
#define __MemChecker4_x                                            0x140280E20
#define __EncryptPad0_x                                            0x140D17E50

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E50AC0
#define instEQZoneInfo_x                                           0x140E50CB4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x140217B40
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
#define __allowslashcommand_x                                      0x140240BC0
#define __CastRay_x                                                0x140238FF0
#define __CastRay2_x                                               0x140238CF0
#define __compress_block_x                                         0x140527530
#define __ConvertItemTags_x                                        0x140239450
#define __CleanItemTags_x                                          0x140088BE0
#define __CreateCascadeMenuItems_x                                 0x140187BF0
#define __decompress_block_x                                       0x14056D700
#define __DoesFileExist_x                                          0x140575D40
#define __EQGetTime_x                                              0x140572440
#define __ExecuteCmd_x                                             0x14020F450
#define __FixHeading_x                                             0x14069F310
#define __FlushDxKeyboard_x                                        0x140334390
#define __get_bearing_x                                            0x140242DB0
#define __get_melee_range_x                                        0x140242EA0
#define __GetAnimationCache_x                                      0x1403B1B00
#define __GetGaugeValueFromEQ_x                                    0x1404E7200
#define __GetLabelFromEQ_x                                         0x1404E8810
#define __GetXTargetType_x                                         0x1406A05F0   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14069F390
#define __HelpPath_x                                               0x140EC5F00   // Why?
#define __NewUIINI_x                                               0x1404F42A0   // Why?
#define __ProcessDeviceEvents_x                                    0x140281430
#define __ProcessGameEvents_x                                      0x140276150
#define __ProcessKeyboardEvents_x                                  0x140335AE0
#define __ProcessMouseEvents_x                                     0x140277830
#define __SaveColors_x                                             0x140197C10
#define __STMLToText_x                                             0x14057A690
#define __WndProc_x                                                0x140332B90
#define CMemoryMappedFile__SetFile_x                               0x1407DB3A0
#define DrawNetStatus_x                                            0x1402C08C0
#define Util__FastTime_x                                           0x1405719D0
#define __eq_delete_x                                              0x1406A7444
#define __eq_new_x                                                 0x1406A7400
#define __CopyLayout_x                                             0x1402AE790
#define __ThrottleFrameRate_x                                      0x140265974
#define __ThrottleFrameRateEnd_x                                   0x1402659D4

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x1403454C0
#define CAAWnd__Update_x                                           0x1403457C0
#define CAAWnd__UpdateSelected_x                                   0x140346810

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AAFC0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A38C0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x14082FBB8
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AB8F0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401A2D50
#define AltAdvManager__IsAbilityReady_x                            0x1401A2FD0
#define AltAdvManager__GetAAById_x                                 0x1401A2620
#define AltAdvManager__CanTrainAbility_x                           0x1401A2430
#define AltAdvManager__CanSeeAbility_x                             0x1401A20F0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D1970
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D27B0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D2A00
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400E68B0
#define CharacterZoneClient__CanUseItem_x                          0x1400E6CE0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D33D0
#define CharacterZoneClient__CastSpell_x                           0x1400D3470
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E2810
#define CharacterZoneClient__Cur_HP_x                              0x1400E83B0
#define CharacterZoneClient__Cur_Mana_x                            0x1400E8570
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D6210
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400EEA40
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FD470  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D76C0
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E61B0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F0600
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400EF4D0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D7890
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C7D80
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C9750
#define CharacterZoneClient__GetHPRegen_x                          0x1400EFC10
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E8020
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F0890
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D7910
#define CharacterZoneClient__GetManaRegen_x                        0x1400F1670
#define CharacterZoneClient__GetModCap_x                           0x1400F8C30
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D7BA0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D7DB0
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CC8C0
#define CharacterZoneClient__HasSkill_x                            0x1400F4660
#define CharacterZoneClient__HitBySpell_x                          0x1400D8860
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DC000
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F8710
#define CharacterZoneClient__Max_Endurance_x                       0x1402DD010  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F8A60
#define CharacterZoneClient__Max_Mana_x                            0x1402DD230  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F8EC0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DF3A0
#define CharacterZoneClient__SpellDuration_x                       0x1400E00A0
#define CharacterZoneClient__TotalEffect_x                         0x1400E13F0
#define CharacterZoneClient__UseSkill_x                            0x1400FE3E0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x1403639C0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14036DD20

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140369BB0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14036D7A0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x1403703E0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AA6590

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140393330
#define CChatWindowManager__InitContextMenu_x                      0x1403934C0
#define CChatWindowManager__FreeChatWindow_x                       0x1403923B0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x14039B0A0
#define CChatWindowManager__CreateChatWindow_x                     0x140391CF0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x1401068B0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x14039C0F0
#define CChatWindow__Clear_x                                       0x14039D0B0
#define CChatWindow__WndNotification_x                             0x14039E2A0
#define CChatWindow__AddHistory_x                                  0x14039CBB0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405AF710
#define CContextMenu__RemoveMenuItem_x                             0x1405AFAF0
#define CContextMenu__RemoveAllMenuItems_x                         0x1405AFAC0
#define CContextMenu__CheckMenuItem_x                              0x1405AF930
#define CContextMenu__SetMenuItem_x                                0x1405AFB10
#define CContextMenu__AddSeparator_x                               0x1405AF870

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405A1600
#define CContextMenuManager__RemoveMenu_x                          0x1405A1BD0
#define CContextMenuManager__PopupMenu_x                           0x1405A1910
#define CContextMenuManager__Flush_x                               0x1405A1680
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403A9A20

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x140668E80
#define CChatService__GetFriendName_x                              0x140668E90

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x140592560
#define CComboWnd__Draw_x                                          0x140592650
#define CComboWnd__GetCurChoice_x                                  0x140592920  // unused
#define CComboWnd__GetListRect_x                                   0x1405929C0
#define CComboWnd__InsertChoice_x                                  0x140592CE0
#define CComboWnd__SetColors_x                                     0x140593070
#define CComboWnd__SetChoice_x                                     0x140593030
#define CComboWnd__GetItemCount_x                                  0x1405929B0
#define CComboWnd__GetCurChoiceText_x                              0x140592960  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405928F0
#define CComboWnd__InsertChoiceAtIndex_x                           0x140592DA0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403A77B0
#define CContainerWnd__SetContainer_x                              0x1403FDEA0
#define CContainerWnd__vftable_x                                   0x1409BEA48

// CDisplay
#define CDisplay__cameraType_x                                     0x140D9811C
#define CDisplay__ZoneMainUI_x                                     0x1405C97A0
#define CDisplay__PreZoneMainUI_x                                  0x140194B40
#define CDisplay__CleanGameUI_x                                    0x140186CB0
#define CDisplay__GetClickedActor_x                                0x14018AE70
#define CDisplay__GetUserDefinedColor_x                            0x14018BAE0
#define CDisplay__InitCharSelectUI_x                               0x14018BD90
#define CDisplay__ReloadUI_x                                       0x140196E30
#define CDisplay__RestartUI_x                                      0x1401F59B0
#define CDisplay__WriteTextHD2_x                                   0x14019DE40
#define CDisplay__TrueDistance_x                                   0x14019DAF0
#define CDisplay__SetViewActor_x                                   0x14019A330
#define CDisplay__GetFloorHeight_x                                 0x14018B0D0
#define CDisplay__ToggleScreenshotMode_x                           0x14019D5E0
#define CDisplay__RealRender_World_x                               0x140196210

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405D39D0
#define CEditWnd__DrawCaret_x                                      0x1405C54F0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405C5980
#define CEditWnd__GetCaretPt_x                                     0x1405C5C00  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405C5C40
#define CEditWnd__GetDisplayString_x                               0x1405C5EA0
#define CEditWnd__GetHorzOffset_x                                  0x1405C60E0
#define CEditWnd__GetLineForPrintableChar_x                        0x1405C6220
#define CEditWnd__GetSelStartPt_x                                  0x1405C6500  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405C6350
#define CEditWnd__PointFromPrintableChar_x                         0x1405C70B0
#define CEditWnd__ReplaceSelection_x                               0x1405C7450
#define CEditWnd__SelectableCharFromPoint_x                        0x1405C78F0
#define CEditWnd__SetEditable_x                                    0x1405C7B80
#define CEditWnd__SetWindowText_x                                  0x1405C7BB0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140266A80
#define CEverQuest__ClickedPlayer_x                                0x14025C550
#define CEverQuest__CreateTargetIndicator_x                        0x14025CE10
#define CEverQuest__DoTellWindow_x                                 0x1401065C0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140106E80 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140268440
#define CEverQuest__dsp_chat_x                                     0x140105FF0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x140292840
#define CEverQuest__Emote_x                                        0x140268E20
#define CEverQuest__GetBodyTypeDesc_x                              0x140269BD0
#define CEverQuest__GetClassDesc_x                                 0x140269C30
#define CEverQuest__GetClassThreeLetterCode_x                      0x14026A000
#define CEverQuest__GetDeityDesc_x                                 0x14026A2B0
#define CEverQuest__GetLangDesc_x                                  0x14026A6E0
#define CEverQuest__GetRaceDesc_x                                  0x14026AA80
#define CEverQuest__InterpretCmd_x                                 0x14026C3C0
#define CEverQuest__LeftClickedOnPlayer_x                          0x1402814A0
#define CEverQuest__LMouseUp_x                                     0x14026DDE0
#define CEverQuest__RightClickedOnPlayer_x                         0x14027ECC0
#define CEverQuest__RMouseUp_x                                     0x1402783C0
#define CEverQuest__SetGameState_x                                 0x1402839E0
#define CEverQuest__UPCNotificationFlush_x                         0x140289310 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14026DA50
#define CEverQuest__ReportSuccessfulHeal_x                         0x140279770
#define CEverQuest__ReportSuccessfulHit_x                          0x14027A590

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403BBEF0

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C18F0
#define CGuild__GetGuildName_x                                     0x1400C1930

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403DF150

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402A44F0
#define CHotButton__SetCheck_x                                     0x1402A47C0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403F6BD0
#define CInvSlotMgr__MoveItem_x                                    0x1403F6DB0
#define CInvSlotMgr__SelectSlot_x                                  0x1403F87E0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403F3DC0
#define CInvSlot__SliderComplete_x                                 0x1403F5310
#define CInvSlot__GetItemBase_x                                    0x1403EF7E0
#define CInvSlot__UpdateItem_x                                     0x1403F57D0

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403F9B70

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x14041ACD0
#define CItemDisplayWnd__UpdateStrings_x                           0x14041D630
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140417740
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140418F10
#define CItemDisplayWnd__RequestConvertItem_x                      0x14041A0E0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404E3D30
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404E5A20

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x1405208A0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140413E60

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14014EFE0

// CLabel
#define CLabel__UpdateText_x                                       0x140424A10

// CListWnd
#define CListWnd__CListWnd_x                                       0x140595EB0
#define CListWnd__dCListWnd_x                                      0x1405962F0
#define CListWnd__vftable_x                                        0x140AA46E8
#define CListWnd__AddColumn_x                                      0x140596990
#define CListWnd__AddColumn1_x                                     0x140596A30
#define CListWnd__AddLine_x                                        0x140596B90
#define CListWnd__AddString_x                                      0x140597120
#define CListWnd__CalculateFirstVisibleLine_x                      0x140597690
#define CListWnd__CalculateVSBRange_x                              0x140597970
#define CListWnd__ClearSel_x                                       0x140597B20
#define CListWnd__ClearAllSel_x                                    0x140597AC0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x140597B80
#define CListWnd__Compare_x                                        0x140597D40
#define CListWnd__Draw_x                                           0x140598210
#define CListWnd__DrawColumnSeparators_x                           0x140598DB0
#define CListWnd__DrawHeader_x                                     0x140598E70
#define CListWnd__DrawItem_x                                       0x140599540
#define CListWnd__DrawLine_x                                       0x140599EB0
#define CListWnd__DrawSeparator_x                                  0x14059A370
#define CListWnd__EnableLine_x                                     0x14059A790
#define CListWnd__EnsureVisible_x                                  0x14059A7F0
#define CListWnd__ExtendSel_x                                      0x14059A8F0
#define CListWnd__GetColumnMinWidth_x                              0x14059AC80
#define CListWnd__GetColumnWidth_x                                 0x14059AD00
#define CListWnd__GetCurSel_x                                      0x14059AE00
#define CListWnd__GetItemData_x                                    0x14059B180
#define CListWnd__GetItemHeight_x                                  0x14059B1C0
#define CListWnd__GetItemRect_x                                    0x14059B3E0
#define CListWnd__GetItemText_x                                    0x14059B680
#define CListWnd__GetSelList_x                                     0x14059B8D0
#define CListWnd__GetSeparatorRect_x                               0x14059BAC0
#define CListWnd__InsertLine_x                                     0x14059CF20
#define CListWnd__RemoveLine_x                                     0x14059D590
#define CListWnd__SetColors_x                                      0x14059D950
#define CListWnd__SetColumnJustification_x                         0x14059D970
#define CListWnd__SetColumnLabel_x                                 0x14059D9F0
#define CListWnd__SetColumnWidth_x                                 0x14059DB90
#define CListWnd__SetCurSel_x                                      0x14059DC60
#define CListWnd__SetItemColor_x                                   0x14059DED0
#define CListWnd__SetItemData_x                                    0x14059DF70
#define CListWnd__SetItemText_x                                    0x14059E1B0
#define CListWnd__Sort_x                                           0x14059E5C0
#define CListWnd__ToggleSel_x                                      0x14059E730
#define CListWnd__SetColumnsSizable_x                              0x14059DBE0
#define CListWnd__SetItemWnd_x                                     0x14059E2E0
#define CListWnd__GetItemWnd_x                                     0x14059B860
#define CListWnd__SetItemIcon_x                                    0x14059DFB0
#define CListWnd__CalculateCustomWindowPositions_x                 0x140597460
#define CListWnd__SetVScrollPos_x                                  0x14059E520

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140437CF0

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A0B4F8
#define MapViewMap__Clear_x                                        0x140439870
#define MapViewMap__SetZoom_x                                      0x14043FEC0
#define MapViewMap__HandleLButtonDown_x                            0x14043CA00

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140461580  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140467B20
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x1404682C0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14046BAE0
#define CMerchantWnd__SelectBuySellSlot_x                          0x14046AE20
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14046FD70

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x1406441C0
#define CPacketScrambler__hton_x                                   0x1406441B0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405BEDB0
#define CSidlManagerBase__FindAnimation1_x                         0x1405BECF0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405BF3E0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405BF190
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405BE0F0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405BE080
#define CSidlManagerBase__CreateXWnd_x                             0x1405BD6E0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404D6D10
#define CSidlManager__CreateXWnd_x                                 0x1404D6ED0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x140583A10
#define CSidlScreenWnd__CalculateVSBRange_x                        0x140583B30
#define CSidlScreenWnd__ConvertToRes_x                             0x1405CDF10 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x140583CB0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x140583140
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x140583210
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x140583420
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1405843A0
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405845D0
#define CSidlScreenWnd__GetChildItem_x                             0x140584770
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405849C0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x14058EBB0 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x140584D30
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405850A0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140585960
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140586360
#define CSidlScreenWnd__m_layoutCopy_x                             0x140EF18A8
#define CSidlScreenWnd__StoreIniInfo_x                             0x140586A00
#define CSidlScreenWnd__StoreIniVis_x                              0x1405871F0
#define CSidlScreenWnd__vftable_x                                  0x140AA3958
#define CSidlScreenWnd__WndNotification_x                          0x140587240

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14031D870 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14031DD10 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14031DC40
#define CSkillMgr__IsActivatedSkill_x                              0x14031E0C0
#define CSkillMgr__IsCombatSkill_x                                 0x14031E100
#define CSkillMgr__GetSkillTimerDuration_x                         0x14031E030
#define CSkillMgr__GetSkillLastUsed_x                              0x14031DC90

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x14059F0B0
#define CSliderWnd__SetValue_x                                     0x14059F8C0
#define CSliderWnd__SetNumTicks_x                                  0x14059F740

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404DD380

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405A4050
#define CStmlWnd__CalculateHSBRange_x                              0x14058E590
#define CStmlWnd__CalculateVSBRange_x                              0x1405A4EF0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405A59F0
#define CStmlWnd__ForceParseNow_x                                  0x1405A5A90
#define CStmlWnd__GetVisibleText_x                                 0x1405A6160
#define CStmlWnd__MakeStmlColorTag_x                               0x1405A7EC0
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405A7F00
#define CStmlWnd__SetSTMLText_x                                    0x1405AEEC0
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405AF070
#define CStmlWnd__UpdateHistoryString_x                            0x1405AF400

// CTabWnd
#define CTabWnd__Draw_x                                            0x14059FC90
#define CTabWnd__DrawCurrentPage_x                                 0x14059FD30
#define CTabWnd__DrawTab_x                                         0x1405A0100
#define CTabWnd__GetTabRect_x                                      0x1405A0770
#define CTabWnd__InsertPage_x                                      0x1405A0A40
#define CTabWnd__RemovePage_x                                      0x1405A0CD0
#define CTabWnd__SetPage_x                                         0x1405A0E30
#define CTabWnd__UpdatePage_x                                      0x1405A1130

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405C8010
#define CPageWnd__SetTabText_x                                     0x1405C8080

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BB040  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BB450


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405B67B0
#define CTextureFont__DrawWrappedText1_x                           0x1405B66C0
#define CTextureFont__DrawWrappedText2_x                           0x1405B68E0
#define CTextureFont__GetTextExtent_x                              0x1405B6C90
#define CTextureFont__GetHeight_x                                  0x1405B6C50

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405CC670

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x140582D20

// CXStr
#define CXStr__gFreeLists_x                                        0x140D20ED0
#define CXStr__gCXStrAccess_x                                      0x140EF16A8

// CXWnd
#define CXWnd__BringToTop_x                                        0x140589C20
#define CXWnd__ClrFocus_x                                          0x140589F10
#define CXWnd__Destroy_x                                           0x14058A090
#define CXWnd__DoAllDrawing_x                                      0x14058A190
#define CXWnd__DrawColoredRect_x                                   0x14058A960
#define CXWnd__DrawTooltip_x                                       0x14058BFE0
#define CXWnd__DrawTooltipAtPoint_x                                0x14058C090
#define CXWnd__GetChildItem_x                                      0x14058C990
#define CXWnd__GetChildWndAt_x                                     0x14058CA50
#define CXWnd__GetClientRect_x                                     0x14058CCF0
#define CXWnd__GetClientClipRect_x                                 0x14058CBB0
#define CXWnd__GetRelativeRect_x                                   0x14058E6C0
#define CXWnd__GetScreenClipRect_x                                 0x14058E7D0
#define CXWnd__GetScreenRect_x                                     0x14058E940
#define CXWnd__GetTooltipRect_x                                    0x14058EAC0
#define CXWnd__IsActive_x                                          0x14058F070
#define CXWnd__IsDescendantOf_x                                    0x14058F0A0
#define CXWnd__IsReallyVisible_x                                   0x14058F110
#define CXWnd__IsType_x                                            0x14058F150
#define CXWnd__Minimize_x                                          0x14058F250
#define CXWnd__ProcessTransition_x                                 0x140590100
#define CXWnd__Resize_x                                            0x140590210
#define CXWnd__Right_x                                             0x1405902B0
#define CXWnd__SetFocus_x                                          0x140590660
#define CXWnd__SetFont_x                                           0x1405906B0
#define CXWnd__SetKeyTooltip_x                                     0x1405907B0
#define CXWnd__SetMouseOver_x                                      0x1405908E0
#define CXWnd__SetParent_x                                         0x140590950
#define CXWnd__StartFade_x                                         0x140590D70
#define CXWnd__vftable_x                                           0x140AA3F48
#define CXWnd__CXWnd_x                                             0x1405887E0
#define CXWnd__dCXWnd_x                                            0x140589120

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405D3150

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405B0CC0
#define CXWndManager__DrawCursor_x                                 0x1405B0FA0
#define CXWndManager__DrawWindows_x                                0x1405B1200
#define CXWndManager__GetKeyboardFlags_x                           0x1405B18D0
#define CXWndManager__HandleKeyboardMsg_x                          0x1405B1910
#define CXWndManager__RemoveWnd_x                                  0x1405B4E70

// CDBStr
#define CDBStr__GetString_x                                        0x140184E70

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x14064DFE0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CF4F0
#define CCharacterListWnd__EnterWorld_x                            0x1400CE1F0
#define CCharacterListWnd__Quit_x                                  0x1400CF4D0
#define CCharacterListWnd__UpdateList_x                            0x1400D0360

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x14061BB20
#define ItemBase__CreateItemTagString_x                            0x14061C580
#define ItemBase__GetImageNum_x                                    0x14061EAA0
#define ItemBase__GetItemValue_x                                   0x1406205D0
#define ItemBase__IsEmpty_x                                        0x140622160
#define ItemBase__IsKeyRingItem_x                                  0x140622880
#define ItemBase__ValueSellMerchant_x                              0x140626A40
#define ItemClient__CanDrop_x                                      0x1402A6A20
#define ItemClient__CanGoInBag_x                                   0x1402A6B50
#define ItemClient__CreateItemClient_x                             0x1402A6DD0
#define ItemClient__dItemClient_x                                  0x1402A6890

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401A44F0
#define EQ_LoadingS__Array_x                                       0x140D0D230

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140633340
#define PcBase__GetCombatAbility_x                                 0x140633A30
#define PcBase__GetCombatAbilityTimer_x                            0x140633AD0
#define PcBase__GetItemContainedRealEstateIds_x                    0x140634270
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x140634DB0
#define PcClient__AlertInventoryChanged_x                          0x1402C8E90
#define PcClient__GetConLevel_x                                    0x1402C94B0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402CBC80
#define PcClient__HasLoreItem_x                                    0x1402CCC50
#define PcZoneClient__GetItemRecastTimer_x                         0x1402DA540
#define PcZoneClient__RemoveMyAffect_x                             0x1402DE150

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x140213B60  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x140213D10  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x140213E70  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x140213DB0  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x14024DB40  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14017F680

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140691E90
#define PlayerBase__CanSee1_x                                      0x140691F60
#define PlayerBase__GetVisibilityLineSegment_x                     0x140692420
#define PlayerBase__HasProperty_x                                  0x1406925F0
#define PlayerBase__IsTargetable_x                                 0x1406926B0
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402EAE50
#define PlayerClient__GetPcClient_x                                0x1402ED680
#define PlayerClient__PlayerClient_x                               0x1402E4110
#define PlayerClient__SetNameSpriteState_x                         0x1402F0AD0
#define PlayerClient__SetNameSpriteTint_x                          0x1402F1A90
#define PlayerZoneClient__ChangeHeight_x                           0x140300040
#define PlayerZoneClient__DoAttack_x                               0x140300D50
#define PlayerZoneClient__GetLevel_x                               0x140304490
#define PlayerZoneClient__IsValidTeleport_x                        0x1402508D0
#define PlayerZoneClient__LegalPlayerRace_x                        0x1401933C0

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402F9960  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402F9A10  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402F9B10
#define PlayerManagerClient__CreatePlayer_x                        0x1402F9430
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140691A50

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402ABC90
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402AB890
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402AB900
#define KeypressHandler__ClearCommandStateArray_x                  0x1402ABC20  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402ABDB0
#define KeypressHandler__HandleKeyUp_x                             0x1402ABED0
#define KeypressHandler__SaveKeymapping_x                          0x1402ABB30  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x14064BB20  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1406458F0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402D3210  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402D8560
#define PcZoneClient__GetPcSkillLimit_x                            0x1402DAC40
#define PcZoneClient__RemovePetEffect_x                            0x1402DE430
#define PcZoneClient__HasAlternateAbility_x                        0x1402DB830
#define PcZoneClient__CanEquipItem_x                               0x1402D6880
#define PcZoneClient__GetItemByID_x                                0x1402D9600
#define PcZoneClient__RemoveBuffEffect_x                           0x1402DDFD0
#define PcZoneClient__BandolierSwap_x                              0x1402D58D0

// Doors
#define EQSwitch__UseSwitch_x                                      0x140255400

// IconCache
#define IconCache__GetIcon_x                                       0x1403B1B30

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403A6560
#define CContainerMgr__CloseContainer_x                            0x1403A5EA0
#define CContainerMgr__OpenExperimentContainer_x                   0x1403A68E0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x14049B060

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x14029EC10

// CLootWnd
#define CLootWnd__LootAll_x                                        0x14042BCF0
#define CLootWnd__RequestLootSlot_x                                0x14042CD00

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401D3930
#define EQ_Spell__SpellAffects_x                                   0x1401D4BF0
#define EQ_Spell__SpellAffectBase_x                                0x1401D4B50
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D7F80
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D7F30
#define EQ_Spell__IsSPAStacking_x                                  0x1401D4810
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401D43D0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401D3CA0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C0530

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1404F7A70
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404F7180
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404F6980

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404FF0E0  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x14017C050
#define CTaskManager__GetTaskStatus_x                              0x14017C160
#define CTaskManager__GetElementDescription_x                      0x14017BCE0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401D1CA0
#define EqSoundManager__PlayScriptMp3_x                            0x1401D0AE0
#define EqSoundManager__SoundAssistPlay_x                          0x140322EB0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x1403231F0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x140591AF0
#define CTextureAnimation__SetCurCell_x                            0x140591E00

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x14029CE70

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x140666550
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1406665D0
#define CharacterBase__IsExpansionFlag_x                           0x1401F5200

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140384240
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140384BB0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140386100

// messages
#define msg_spell_worn_off_x                                       0x14020A490
#define msg_new_text_x                                             0x140205D00
#define __msgTokenTextParam_x                                      0x1401FD7C0
#define msgTokenText_x                                             0x1401FD6E0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140324870
#define SpellManager__GetSpellByGroupAndRank_x                     0x140324790

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x1406A09D0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140425160

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403AB230
#define CCursorAttachment__IsOkToActivate_x                        0x1403AE190
#define CCursorAttachment__RemoveAttachment_x                      0x1403AE440
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405CAB10
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405CAD00
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405CAD10

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x14014A190
#define CFindItemWnd__Update_x                                     0x14014AB30
#define CFindItemWnd__PickupSelectedItem_x                         0x1401445F0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x140153D00
#define LootFiltersManager__GetItemFilterData_x                    0x140154810
#define LootFiltersManager__RemoveItemLootFilter_x                 0x1401550B0
#define LootFiltersManager__SetItemLootFilter_x                    0x140155360

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14047DD70

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x14031D430
#define CResolutionHandler__UpdateResolution_x                     0x1406A5230

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403A2840

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x14066A950  // Rename..?
#define CDistillerInfo__Instance_x                                 0x14066A840  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403C8270
#define CGroupWnd__UpdateDisplay_x                                 0x1403C7E50

// ItemBase
#define ItemBase__IsLore_x                                         0x1406229B0
#define ItemBase__IsLoreEquipped_x                                 0x140622A40

#define MultipleItemMoveManager__ProcessMove_x                     0x1402BEA50

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14024DCA0
#define EQPlacedItemManager__GetItemByGuid_x                       0x14024DC30
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14024DC70

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140317890

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x1401240E0
#define FactionManagerClient__HandleFactionMessage_x               0x140124490
#define FactionManagerClient__GetFactionStanding_x                 0x1401238B0
#define FactionManagerClient__GetMaxFaction_x                      0x1401238B0
#define FactionManagerClient__GetMinFaction_x                      0x140123760

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AD5D0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x14012F880

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401ACE60
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401AC1E0
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401ACC80  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401ACC00  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x1403298E0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140317890

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x140213F00

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140587830

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140085A90

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14033B400

// AchievementManager
#define AchievementManager__Instance_x                             0x14008D460

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x14064EB60
#define FreeToPlayClient__RestrictionInfo_x                        0x140AB7FE0

// UdpConnection
#define UdpConnection__GetStats_x                                  0x14052D950

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x140817548
#define CGFScreenWnd__CGFScreenWnd_x                               0x1400703C0
#define CGFScreenWnd__CGFScreenWnd1_x                              0x140070550
#define CGFScreenWnd__dCGFScreenWnd_x                              0x140070700

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
