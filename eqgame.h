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

#define __ClientDate                                               20250319u
#define __ExpectedVersionDate                                     "Mar 19 2025"
#define __ExpectedVersionTime                                     "10:20:48"
#define __ActualVersionDate_x                                      0x140954180
#define __ActualVersionTime_x                                      0x140954170
#define __ActualVersionBuild_x                                     0x1408EA840

// Memory Protection
#define __MemChecker0_x                                            0x1402B7A30
#define __MemChecker1_x                                            0x14057B760
#define __MemChecker4_x                                            0x140285330
#define __EncryptPad0_x                                            0x140D22E70

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E5BAA0
#define instEQZoneInfo_x                                           0x140E5BC94 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x14021BC20
#define __gfMaxZoomCameraDistance_x                                0x1408EBAB8
#define __gfMaxCameraDistance_x                                    0x140A909D8
#define __CurrentSocial_x                                          0x140BDE940 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D1A710
#define g_eqCommandStates_x                                        0x140D1B780
#define __CommandList_x                                            0x140D1B9C0
#define __ScreenMode_x                                             0x140DA33AC
#define __gWorld_x                                                 0x140E55F60
#define __gpbCommandEvent_x                                        0x140E564CC
#define __ServerHost_x                                             0x140E566B8
#define __Guilds_x                                                 0x140E5A650
#define __MemCheckBitmask_x                                        0x140E5BFDF
#define __MemCheckActive_x                                         0x140E5D6DD
#define __MouseEventTime_x                                         0x140ED1028
#define DI8__MouseState_x                                          0x140ED5198
#define __heqmain_x                                                0x140ED7628
#define DI8__Mouse_x                                               0x140ED7640
#define __HWnd_x                                                   0x140ED7648
#define __Mouse_x                                                  0x140ED7650
#define DI8__Keyboard_x                                            0x140ED7670
#define __LoginName_x                                              0x140ED7DDC
#define __CurrentMapLabel_x                                        0x140EEB670
#define __LabelCache_x                                             0x140EEC240
#define __ChatFilterDefs_x                                         0x140A2BAD0
#define Teleport_Table_Size_x                                      0x140E56554
#define Teleport_Table_x                                           0x140E53F30

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E569E0
#define pinstActiveBanker_x                                        0x140E56410
#define pinstActiveCorpse_x                                        0x140E56400
#define pinstActiveGMaster_x                                       0x140E56408
#define pinstActiveMerchant_x                                      0x140E563F8
#define pinstAltAdvManager_x                                       0x140DA41E8
#define pinstCEverQuest_x                                          0x140ED7688
#define pinstCamActor_x                                            0x140DA3398
#define pinstCDBStr_x                                              0x140DA2FA0
#define pinstCDisplay_x                                            0x140E53F10
#define pinstControlledPlayer_x                                    0x140E564A0
#define pinstCResolutionHandler_x                                  0x140EFCA78
#define pinstCSidlManager_x                                        0x140EFD7E0
#define pinstCXWndManager_x                                        0x140EFD7D8
#define instDynamicZone_x                                          0x140E5A510 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E5A55E
#define instExpeditionName_x                                       0x140E5A59E
#define pinstDZMember_x                                            0x140E5A628
#define pinstDZTimerInfo_x                                         0x140E5A630
#define pinstEqLogin_x                                             0x140ED7720
#define instTribute_x                                              0x140D15D50
#define pinstDeviceInputProxy_x                                    0x140E5BAFC
#define pinstEQSoundManager_x                                      0x140DA4568
#define pinstEQSpellStrings_x                                      0x140D87B70
#define pinstSGraphicsEngine_x                                     0x140EFC7F8
#define pinstLocalPC_x                                             0x140E53F20
#define pinstLocalPlayer_x                                         0x140E563F0
#define pinstCMercenaryClientManager_x                             0x140ED2918
#define pinstModelPlayer_x                                         0x140E56420
#define pinstRenderInterface_x                                     0x140EFC810
#define pinstSkillMgr_x                                            0x140ED45B8
#define pinstSpawnManager_x                                        0x140ED2CE0
#define pinstSpellManager_x                                        0x140ED4620
#define pinstStringTable_x                                         0x140E55F58
#define pinstSwitchManager_x                                       0x140E53E90
#define pinstTarget_x                                              0x140E56498
#define pinstTaskMember_x                                          0x140D15D40 // Part of g_taskManager
#define pinstTradeTarget_x                                         0x140E56418
#define instTributeActive_x                                        0x140D15D79
#define pinstViewActor_x                                           0x140DA3390
#define pinstWorldData_x                                           0x140E564B0
#define pinstPlayerPath_x                                          0x140ED2D08
#define pinstTargetIndicator_x                                     0x140ED46D0
#define EQObject_Top_x                                             0x140E569D0

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140EE87C8
#define pinstCContainerMgr_x                                       0x140DA33E0
#define pinstCContextMenuManager_x                                 0x140EFD4C0
#define pinstCInvSlotMgr_x                                         0x140DA33C0
#define pinstCItemDisplayManager_x                                 0x140EEB240
#define pinstCPopupWndManager_x                                    0x140EEBAD0
#define pinstCSpellDisplayMgr_x                                    0x140EEC120
#define pinstCTaskManager_x                                        0x140BDEC80
#define pinstEQSuiteTextureLoader_x                                0x140D2C580
#define pinstItemIconCache_x                                       0x140EE8B28
#define pinstLootFiltersManager_x                                  0x140DA29E8
#define pinstGFViewListener_x                                      0x140EFCC98


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x140244E80
#define __CastRay_x                                                0x14023D220
#define __CastRay2_x                                               0x14023CF20
#define __compress_block_x                                         0x140530E00
#define __ConvertItemTags_x                                        0x14023D680
#define __CleanItemTags_x                                          0x1400899C0
#define __CreateCascadeMenuItems_x                                 0x14018B140
#define __decompress_block_x                                       0x140576FD0
#define __DoesFileExist_x                                          0x14057F610
#define __EQGetTime_x                                              0x14057BD10
#define __ExecuteCmd_x                                             0x140213530
#define __FixHeading_x                                             0x140636BE0
#define __FlushDxKeyboard_x                                        0x14033B2E0
#define __get_bearing_x                                            0x140247070
#define __get_melee_range_x                                        0x140247160
#define __GetAnimationCache_x                                      0x1403B9E10
#define __GetGaugeValueFromEQ_x                                    0x1404F0AD0
#define __GetLabelFromEQ_x                                         0x1404F20E0
#define __GetXTargetType_x                                         0x140637EC0   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140636C60
#define __HelpPath_x                                               0x140ED0EF0   // Why?
#define __NewUIINI_x                                               0x1404FDB30   // Why?
#define __ProcessDeviceEvents_x                                    0x140285940
#define __ProcessGameEvents_x                                      0x14027A660
#define __ProcessKeyboardEvents_x                                  0x14033CA30
#define __ProcessMouseEvents_x                                     0x14027BD40
#define __SaveColors_x                                             0x14019B160
#define __STMLToText_x                                             0x140587850
#define __WndProc_x                                                0x140339AE0
#define CMemoryMappedFile__SetFile_x                               0x1407E3C80
#define DrawNetStatus_x                                            0x1402C5EF0
#define Util__FastTime_x                                           0x140577EF0
#define __eq_delete_x                                              0x1406AFC84
#define __eq_new_x                                                 0x1406AFC40
#define __CopyLayout_x                                             0x1402B3E40
#define __ThrottleFrameRate_x                                      0x140269E84
#define __ThrottleFrameRateEnd_x                                   0x140269EE4

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x14034C140
#define CAAWnd__Update_x                                           0x14034C440
#define CAAWnd__UpdateSelected_x                                   0x14034D490

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400ABDB0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A46B0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140838BE8
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AC6E0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401A6280
#define AltAdvManager__IsAbilityReady_x                            0x1401A6710
#define AltAdvManager__GetAAById_x                                 0x1401A5B50
#define AltAdvManager__CanTrainAbility_x                           0x1401A5960
#define AltAdvManager__CanSeeAbility_x                             0x1401A5620

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D28D0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D3730
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D3980
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400E7E70
#define CharacterZoneClient__CanUseItem_x                          0x1400E82A0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D4350
#define CharacterZoneClient__CastSpell_x                           0x1400D43F0
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E3DD0
#define CharacterZoneClient__Cur_HP_x                              0x1400E99B0
#define CharacterZoneClient__Cur_Mana_x                            0x1400E9B70
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D75E0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F0030
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FEA60  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D8A80
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E7770
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F1BE0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F0AC0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D8C00
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C8DB0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400CA7B0
#define CharacterZoneClient__GetHPRegen_x                          0x1400F1200
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E9620
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F1E70
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D8C80
#define CharacterZoneClient__GetManaRegen_x                        0x1400F2C50
#define CharacterZoneClient__GetModCap_x                           0x1400FA220
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D8F10
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D90E0
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CD940
#define CharacterZoneClient__HasSkill_x                            0x1400F5C50
#define CharacterZoneClient__HitBySpell_x                          0x1400D9B70
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DD490
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F9D00
#define CharacterZoneClient__Max_Endurance_x                       0x1402E2720  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400FA050
#define CharacterZoneClient__Max_Mana_x                            0x1402E2940  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400FA4B0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E0920
#define CharacterZoneClient__SpellDuration_x                       0x1400E1650
#define CharacterZoneClient__TotalEffect_x                         0x1400E29B0
#define CharacterZoneClient__UseSkill_x                            0x1400FF9D0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x14036A9E0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140374D10

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140370BB0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x140374790

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x1403773D0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AAFD90

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x14039A330
#define CChatWindowManager__InitContextMenu_x                      0x14039A4C0
#define CChatWindowManager__FreeChatWindow_x                       0x1403993B0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403A20A0
#define CChatWindowManager__CreateChatWindow_x                     0x140398DE0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140107EB0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403A30F0
#define CChatWindow__Clear_x                                       0x1403A40B0
#define CChatWindow__WndNotification_x                             0x1403A52A0
#define CChatWindow__AddHistory_x                                  0x1403A3BB0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405BC9A0
#define CContextMenu__RemoveMenuItem_x                             0x1405BCD90
#define CContextMenu__RemoveAllMenuItems_x                         0x1405BCD60
#define CContextMenu__CheckMenuItem_x                              0x1405BCBD0
#define CContextMenu__SetMenuItem_x                                0x1405BCDB0
#define CContextMenu__AddSeparator_x                               0x1405BCB10

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405AE870
#define CContextMenuManager__RemoveMenu_x                          0x1405AEE40
#define CContextMenuManager__PopupMenu_x                           0x1405AEB80
#define CContextMenuManager__Flush_x                               0x1405AE8F0
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403B19A0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x14068A780
#define CChatService__GetFriendName_x                              0x14068A790

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14059F740
#define CComboWnd__Draw_x                                          0x14059F840
#define CComboWnd__GetCurChoice_x                                  0x14059FB20  // unused
#define CComboWnd__GetListRect_x                                   0x14059FBC0
#define CComboWnd__InsertChoice_x                                  0x14059FF00
#define CComboWnd__SetColors_x                                     0x1405A0290
#define CComboWnd__SetChoice_x                                     0x1405A0250
#define CComboWnd__GetItemCount_x                                  0x14059FBB0
#define CComboWnd__GetCurChoiceText_x                              0x14059FB60  // unused
#define CComboWnd__GetChoiceText_x                                 0x14059FAF0
#define CComboWnd__InsertChoiceAtIndex_x                           0x14059FFC0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403AF710
#define CContainerWnd__SetContainer_x                              0x140406F80
#define CContainerWnd__vftable_x                                   0x1409C7BB8

// CDisplay
#define CDisplay__cameraType_x                                     0x140DA315C
#define CDisplay__ZoneMainUI_x                                     0x1405D6BA0
#define CDisplay__PreZoneMainUI_x                                  0x140198090
#define CDisplay__CleanGameUI_x                                    0x14018A200
#define CDisplay__GetClickedActor_x                                0x14018E3C0
#define CDisplay__GetUserDefinedColor_x                            0x14018F030
#define CDisplay__InitCharSelectUI_x                               0x14018F2E0
#define CDisplay__ReloadUI_x                                       0x14019A380
#define CDisplay__RestartUI_x                                      0x1401F96D0
#define CDisplay__WriteTextHD2_x                                   0x1401A1390
#define CDisplay__TrueDistance_x                                   0x1401A1040
#define CDisplay__SetViewActor_x                                   0x14019D880
#define CDisplay__GetFloorHeight_x                                 0x14018E620
#define CDisplay__ToggleScreenshotMode_x                           0x1401A0B30
#define CDisplay__RealRender_World_x                               0x140199760

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405E0DD0
#define CEditWnd__DrawCaret_x                                      0x1405D2880  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405D2D40
#define CEditWnd__GetCaretPt_x                                     0x1405D2FC0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405D3000
#define CEditWnd__GetDisplayString_x                               0x1405D3270
#define CEditWnd__GetHorzOffset_x                                  0x1405D34B0
#define CEditWnd__GetLineForPrintableChar_x                        0x1405D3600
#define CEditWnd__GetSelStartPt_x                                  0x1405D38E0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405D3730
#define CEditWnd__PointFromPrintableChar_x                         0x1405D4490
#define CEditWnd__ReplaceSelection_x                               0x1405D4840
#define CEditWnd__SelectableCharFromPoint_x                        0x1405D4CE0
#define CEditWnd__SetEditable_x                                    0x1405D4F70
#define CEditWnd__SetWindowText_x                                  0x1405D4FA0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14026AF90
#define CEverQuest__ClickedPlayer_x                                0x140260900
#define CEverQuest__CreateTargetIndicator_x                        0x1402611C0
#define CEverQuest__DoTellWindow_x                                 0x140107BC0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140108480 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14026C950
#define CEverQuest__dsp_chat_x                                     0x1401075F0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x140297720
#define CEverQuest__Emote_x                                        0x14026D330
#define CEverQuest__GetBodyTypeDesc_x                              0x14026E0E0
#define CEverQuest__GetClassDesc_x                                 0x14026E140
#define CEverQuest__GetClassThreeLetterCode_x                      0x14026E510
#define CEverQuest__GetDeityDesc_x                                 0x14026E7C0
#define CEverQuest__GetLangDesc_x                                  0x14026EBF0
#define CEverQuest__GetRaceDesc_x                                  0x14026EF90
#define CEverQuest__InterpretCmd_x                                 0x1402708D0
#define CEverQuest__LeftClickedOnPlayer_x                          0x1402859B0
#define CEverQuest__LMouseUp_x                                     0x1402722F0
#define CEverQuest__RightClickedOnPlayer_x                         0x1402831D0
#define CEverQuest__RMouseUp_x                                     0x14027C8D0
#define CEverQuest__SetGameState_x                                 0x1402888C0
#define CEverQuest__UPCNotificationFlush_x                         0x14028E1F0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140271F60
#define CEverQuest__ReportSuccessfulHeal_x                         0x14027DC80
#define CEverQuest__ReportSuccessfulHit_x                          0x14027EAA0

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403C4D50

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C27A0
#define CGuild__GetGuildName_x                                     0x1400C27E0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403E8120

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402A97F0
#define CHotButton__SetCheck_x                                     0x1402A9AC0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403FFCB0
#define CInvSlotMgr__MoveItem_x                                    0x1403FFE90
#define CInvSlotMgr__SelectSlot_x                                  0x1404018B0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403FCEB0
#define CInvSlot__SliderComplete_x                                 0x1403FE400
#define CInvSlot__GetItemBase_x                                    0x1403F8900
#define CInvSlot__UpdateItem_x                                     0x1403FE8B0

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x140402C40

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1404241B0
#define CItemDisplayWnd__UpdateStrings_x                           0x140426D30
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x1404209E0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140422330
#define CItemDisplayWnd__RequestConvertItem_x                      0x1404235C0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404ED5F0
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404EF2E0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x14052A160

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x14041D0F0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140152630

// CLabel
#define CLabel__UpdateText_x                                       0x14042E110

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405A30D0
#define CListWnd__dCListWnd_x                                      0x1405A3520
#define CListWnd__vftable_x                                        0x140AADEE0
#define CListWnd__AddColumn_x                                      0x1405A3BC0
#define CListWnd__AddColumn1_x                                     0x1405A3C60
#define CListWnd__AddLine_x                                        0x1405A3DC0
#define CListWnd__AddString_x                                      0x1405A4350
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405A48C0
#define CListWnd__CalculateVSBRange_x                              0x1405A4BA0
#define CListWnd__ClearSel_x                                       0x1405A4D50
#define CListWnd__ClearAllSel_x                                    0x1405A4CF0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405A4DB0
#define CListWnd__Compare_x                                        0x1405A4F70
#define CListWnd__Draw_x                                           0x1405A5440
#define CListWnd__DrawColumnSeparators_x                           0x1405A5FF0
#define CListWnd__DrawHeader_x                                     0x1405A60B0
#define CListWnd__DrawItem_x                                       0x1405A6790
#define CListWnd__DrawLine_x                                       0x1405A7110
#define CListWnd__DrawSeparator_x                                  0x1405A75D0
#define CListWnd__EnableLine_x                                     0x1405A79F0
#define CListWnd__EnsureVisible_x                                  0x1405A7A50
#define CListWnd__ExtendSel_x                                      0x1405A7B50
#define CListWnd__GetColumnMinWidth_x                              0x1405A7EE0
#define CListWnd__GetColumnWidth_x                                 0x1405A7F60
#define CListWnd__GetCurSel_x                                      0x1405A8060
#define CListWnd__GetItemData_x                                    0x1405A83E0
#define CListWnd__GetItemHeight_x                                  0x1405A8420
#define CListWnd__GetItemRect_x                                    0x1405A8640
#define CListWnd__GetItemText_x                                    0x1405A88E0
#define CListWnd__GetSelList_x                                     0x1405A8B30
#define CListWnd__GetSeparatorRect_x                               0x1405A8D20
#define CListWnd__InsertLine_x                                     0x1405AA190
#define CListWnd__RemoveLine_x                                     0x1405AA800
#define CListWnd__SetColors_x                                      0x1405AABC0
#define CListWnd__SetColumnJustification_x                         0x1405AABE0
#define CListWnd__SetColumnLabel_x                                 0x1405AAC60
#define CListWnd__SetColumnWidth_x                                 0x1405AAE00
#define CListWnd__SetCurSel_x                                      0x1405AAED0
#define CListWnd__SetItemColor_x                                   0x1405AB140
#define CListWnd__SetItemData_x                                    0x1405AB1E0
#define CListWnd__SetItemText_x                                    0x1405AB420
#define CListWnd__Sort_x                                           0x1405AB830
#define CListWnd__ToggleSel_x                                      0x1405AB9A0
#define CListWnd__SetColumnsSizable_x                              0x1405AAE50
#define CListWnd__SetItemWnd_x                                     0x1405AB550
#define CListWnd__GetItemWnd_x                                     0x1405A8AC0
#define CListWnd__SetItemIcon_x                                    0x1405AB220
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405A4690
#define CListWnd__SetVScrollPos_x                                  0x1405AB790

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x1404413F0

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A146D8
#define MapViewMap__Clear_x                                        0x140442F70
#define MapViewMap__SetZoom_x                                      0x1404495C0
#define MapViewMap__HandleLButtonDown_x                            0x140446100

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14046AC80  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140471220
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x1404719C0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x1404751D0
#define CMerchantWnd__SelectBuySellSlot_x                          0x140474520
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140479480

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x140665A90
#define CPacketScrambler__hton_x                                   0x140665A80

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405CC140
#define CSidlManagerBase__FindAnimation1_x                         0x1405CC080
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405CC770
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405CC520
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405CB480
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405CB410
#define CSidlManagerBase__CreateXWnd_x                             0x1405CAA50

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404E0550
#define CSidlManager__CreateXWnd_x                                 0x1404E0710

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x140590BD0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x140590D00
#define CSidlScreenWnd__ConvertToRes_x                             0x1405DB310 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x140590E80
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x140590300
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x1405903D0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1405905E0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x140591570
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405917A0
#define CSidlScreenWnd__GetChildItem_x                             0x140591940
#define CSidlScreenWnd__GetSidlPiece_x                             0x140591B90
#define CSidlScreenWnd__HandleLButtonUp_x                          0x14059BC90 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x140591F00
#define CSidlScreenWnd__LoadIniInfo_x                              0x140592270
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140592B20
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140593520
#define CSidlScreenWnd__m_layoutCopy_x                             0x140EFCB38
#define CSidlScreenWnd__StoreIniInfo_x                             0x140593BB0
#define CSidlScreenWnd__StoreIniVis_x                              0x1405943A0
#define CSidlScreenWnd__vftable_x                                  0x140AAD168
#define CSidlScreenWnd__WndNotification_x                          0x1405943F0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x140324660 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140324B00 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x140324A30
#define CSkillMgr__IsActivatedSkill_x                              0x140324EB0
#define CSkillMgr__IsCombatSkill_x                                 0x140324EF0
#define CSkillMgr__GetSkillTimerDuration_x                         0x140324E20
#define CSkillMgr__GetSkillLastUsed_x                              0x140324A80

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405AC320
#define CSliderWnd__SetValue_x                                     0x1405ACB30
#define CSliderWnd__SetNumTicks_x                                  0x1405AC9B0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404E6C10

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405B12C0
#define CStmlWnd__CalculateHSBRange_x                              0x14059B640
#define CStmlWnd__CalculateVSBRange_x                              0x1405B2160
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405B2C60
#define CStmlWnd__ForceParseNow_x                                  0x1405B2D00
#define CStmlWnd__GetVisibleText_x                                 0x1405B33D0
#define CStmlWnd__MakeStmlColorTag_x                               0x1405B5130
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405B5170
#define CStmlWnd__SetSTMLText_x                                    0x1405BC140
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405BC2F0
#define CStmlWnd__UpdateHistoryString_x                            0x1405BC680

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405ACF00
#define CTabWnd__DrawCurrentPage_x                                 0x1405ACFA0
#define CTabWnd__DrawTab_x                                         0x1405AD370
#define CTabWnd__GetTabRect_x                                      0x1405AD9E0
#define CTabWnd__InsertPage_x                                      0x1405ADCB0
#define CTabWnd__RemovePage_x                                      0x1405ADF40
#define CTabWnd__SetPage_x                                         0x1405AE0A0
#define CTabWnd__UpdatePage_x                                      0x1405AE3A0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405D5400
#define CPageWnd__SetTabText_x                                     0x1405D5470

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BBDF0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BC200


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405C3B10
#define CTextureFont__DrawWrappedText1_x                           0x1405C3A20
#define CTextureFont__DrawWrappedText2_x                           0x1405C3C40
#define CTextureFont__GetTextExtent_x                              0x1405C3FF0
#define CTextureFont__GetHeight_x                                  0x1405C3FB0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405D9A70

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x14058FEE0

// CXStr
#define CXStr__gFreeLists_x                                        0x140D2BEF0
#define CXStr__gCXStrAccess_x                                      0x140EFC698

// CXWnd
#define CXWnd__BringToTop_x                                        0x140596C90
#define CXWnd__ClrFocus_x                                          0x140596F80
#define CXWnd__Destroy_x                                           0x140597100
#define CXWnd__DoAllDrawing_x                                      0x140597210
#define CXWnd__DrawColoredRect_x                                   0x1405979E0
#define CXWnd__DrawTooltip_x                                       0x140599050
#define CXWnd__DrawTooltipAtPoint_x                                0x140599100
#define CXWnd__GetChildItem_x                                      0x140599A10
#define CXWnd__GetChildWndAt_x                                     0x140599AD0
#define CXWnd__GetClientRect_x                                     0x140599D90
#define CXWnd__GetClientClipRect_x                                 0x140599C40
#define CXWnd__GetRelativeRect_x                                   0x14059B780
#define CXWnd__GetScreenClipRect_x                                 0x14059B890
#define CXWnd__GetScreenRect_x                                     0x14059BA10
#define CXWnd__GetTooltipRect_x                                    0x14059BB90
#define CXWnd__IsActive_x                                          0x14059C150
#define CXWnd__IsDescendantOf_x                                    0x14059C180
#define CXWnd__IsReallyVisible_x                                   0x14059C1F0
#define CXWnd__IsType_x                                            0x14059C230
#define CXWnd__Minimize_x                                          0x14059C330
#define CXWnd__ProcessTransition_x                                 0x14059D220
#define CXWnd__Resize_x                                            0x14059D340
#define CXWnd__Right_x                                             0x14059D3E0
#define CXWnd__SetFocus_x                                          0x14059D7A0
#define CXWnd__SetFont_x                                           0x14059D7F0
#define CXWnd__SetKeyTooltip_x                                     0x14059D900
#define CXWnd__SetMouseOver_x                                      0x14059DA40
#define CXWnd__SetParent_x                                         0x14059DAC0
#define CXWnd__StartFade_x                                         0x14059DF10
#define CXWnd__vftable_x                                           0x140AAD740
#define CXWnd__CXWnd_x                                             0x140595810
#define CXWnd__dCXWnd_x                                            0x140596170

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405E0550

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405BDF50
#define CXWndManager__DrawCursor_x                                 0x1405BE230
#define CXWndManager__DrawWindows_x                                0x1405BE490
#define CXWndManager__GetKeyboardFlags_x                           0x1405BEB60
#define CXWndManager__HandleKeyboardMsg_x                          0x1405BEBA0
#define CXWndManager__RemoveWnd_x                                  0x1405C21E0

// CDBStr
#define CDBStr__GetString_x                                        0x1401883C0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x14066F8D0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D0570
#define CCharacterListWnd__EnterWorld_x                            0x1400CF270
#define CCharacterListWnd__Quit_x                                  0x1400D0550
#define CCharacterListWnd__UpdateList_x                            0x1400D13D0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x14063CF90
#define ItemBase__CreateItemTagString_x                            0x14063DA00
#define ItemBase__GetImageNum_x                                    0x14063FF80
#define ItemBase__GetItemValue_x                                   0x140641A30
#define ItemBase__IsEmpty_x                                        0x140643640
#define ItemBase__IsKeyRingItem_x                                  0x140643D80
#define ItemBase__ValueSellMerchant_x                              0x140647F60
#define ItemClient__CanDrop_x                                      0x1402AC0D0
#define ItemClient__CanGoInBag_x                                   0x1402AC200
#define ItemClient__CreateItemClient_x                             0x1402AC480
#define ItemClient__dItemClient_x                                  0x1402ABF40

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401A7C30
#define EQ_LoadingS__Array_x                                       0x140D18220

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140654760
#define PcBase__GetCombatAbility_x                                 0x140654E50
#define PcBase__GetCombatAbilityTimer_x                            0x140654EF0
#define PcBase__GetItemContainedRealEstateIds_x                    0x140655690
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x1406561D0
#define PcClient__AlertInventoryChanged_x                          0x1402CE4D0
#define PcClient__GetConLevel_x                                    0x1402CEAF0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402D1280
#define PcClient__HasLoreItem_x                                    0x1402D22E0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402DFBE0
#define PcZoneClient__RemoveMyAffect_x                             0x1402E3860

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x140217C40  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x140217DF0  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x140217F50  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x140217E90  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x140251EA0  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140182BE0

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140629480
#define PlayerBase__CanSee1_x                                      0x140629550
#define PlayerBase__GetVisibilityLineSegment_x                     0x140629A30
#define PlayerBase__HasProperty_x                                  0x140629C00
#define PlayerBase__IsTargetable_x                                 0x140629CC0
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402F1110
#define PlayerClient__GetPcClient_x                                0x1402F3940
#define PlayerClient__PlayerClient_x                               0x1402E9920
#define PlayerClient__SetNameSpriteState_x                         0x1402F6FE0
#define PlayerClient__SetNameSpriteTint_x                          0x1402F7FA0
#define PlayerZoneClient__ChangeHeight_x                           0x140306730
#define PlayerZoneClient__DoAttack_x                               0x140307440
#define PlayerZoneClient__GetLevel_x                               0x14030AB60
#define PlayerZoneClient__IsValidTeleport_x                        0x140254C20
#define PlayerZoneClient__LegalPlayerRace_x                        0x140196910

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402FFEA0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402FFF50  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x140300050
#define PlayerManagerClient__CreatePlayer_x                        0x1402FF970
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140629040

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402B1340
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402B0F40
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402B0FB0
#define KeypressHandler__ClearCommandStateArray_x                  0x1402B12D0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402B1460
#define KeypressHandler__HandleKeyUp_x                             0x1402B1580
#define KeypressHandler__SaveKeymapping_x                          0x1402B11E0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x14066D3F0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1406671C0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402D8890  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402DDBA0
#define PcZoneClient__GetPcSkillLimit_x                            0x1402E0370
#define PcZoneClient__RemovePetEffect_x                            0x1402E3B40
#define PcZoneClient__HasAlternateAbility_x                        0x1402E0F60
#define PcZoneClient__CanEquipItem_x                               0x1402DBEE0
#define PcZoneClient__GetItemByID_x                                0x1402DEC40
#define PcZoneClient__RemoveBuffEffect_x                           0x1402E36E0
#define PcZoneClient__BandolierSwap_x                              0x1402DAF40

// Doors
#define EQSwitch__UseSwitch_x                                      0x140259750

// IconCache
#define IconCache__GetIcon_x                                       0x1403B9E40

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403AE4C0
#define CContainerMgr__CloseContainer_x                            0x1403ADE00
#define CContainerMgr__OpenExperimentContainer_x                   0x1403AE840

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404A4870

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402A3AE0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x1404353F0
#define CLootWnd__RequestLootSlot_x                                0x140436410

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401D7010
#define EQ_Spell__SpellAffects_x                                   0x1401D82C0
#define EQ_Spell__SpellAffectBase_x                                0x1401D8220
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D9270
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D9220
#define EQ_Spell__IsSPAStacking_x                                  0x1401D7EF0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401D7AB0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401D7380

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C12F0

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x140501320
#define CTargetWnd__RefreshTargetBuffs_x                           0x140500A30
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x140500240

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x140508990  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x14017F5A0
#define CTaskManager__GetTaskStatus_x                              0x14017F6B0
#define CTaskManager__GetElementDescription_x                      0x14017F230

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401D5340
#define EqSoundManager__PlayScriptMp3_x                            0x1401D4180
#define EqSoundManager__SoundAssistPlay_x                          0x140329CA0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140329FE0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x14059ECD0
#define CTextureAnimation__SetCurCell_x                            0x14059EFE0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402A1D40

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x140687E50
#define CharacterBase__GetItemByGlobalIndex1_x                     0x140687ED0
#define CharacterBase__IsExpansionFlag_x                           0x1401F8F00

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x14038B250
#define CCastSpellWnd__IsBardSongPlaying_x                         0x14038BC10
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x14038D160

// messages
#define msg_spell_worn_off_x                                       0x14020E550
#define msg_new_text_x                                             0x140209DC0
#define __msgTokenTextParam_x                                      0x140201700
#define msgTokenText_x                                             0x140201620

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x14032B650
#define SpellManager__GetSpellByGroupAndRank_x                     0x14032B570

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x1406382A0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x14042E860

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403B31D0
#define CCursorAttachment__IsOkToActivate_x                        0x1403B6490
#define CCursorAttachment__RemoveAttachment_x                      0x1403B6740
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405D7F10
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405D8100
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405D8110

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x14014D7E0
#define CFindItemWnd__Update_x                                     0x14014E180
#define CFindItemWnd__PickupSelectedItem_x                         0x140147C60

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x140157240
#define LootFiltersManager__GetItemFilterData_x                    0x140157D50
#define LootFiltersManager__RemoveItemLootFilter_x                 0x1401585F0
#define LootFiltersManager__SetItemLootFilter_x                    0x1401588A0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x1404874B0

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x140324220
#define CResolutionHandler__UpdateResolution_x                     0x140584320

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403AA7A0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x14068C250  // Rename..?
#define CDistillerInfo__Instance_x                                 0x14068C140  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403D10A0
#define CGroupWnd__UpdateDisplay_x                                 0x1403D0C80

// ItemBase
#define ItemBase__IsLore_x                                         0x140643EB0
#define ItemBase__IsLoreEquipped_x                                 0x140643F40

#define MultipleItemMoveManager__ProcessMove_x                     0x1402C4090

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140252000
#define EQPlacedItemManager__GetItemByGuid_x                       0x140251F90
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140251FD0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14031E680

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140125520
#define FactionManagerClient__HandleFactionMessage_x               0x1401258D0
#define FactionManagerClient__GetFactionStanding_x                 0x140124CF0
#define FactionManagerClient__GetMaxFaction_x                      0x140124CF0
#define FactionManagerClient__GetMinFaction_x                      0x140124BA0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AE3C0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140130CB0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401B0590
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401AF910
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401B03B0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401B0330  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x140330830

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14031E680

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x140217FE0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405949E0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140086870

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140342070

// AchievementManager
#define AchievementManager__Instance_x                             0x14008E240

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x140670450
#define FreeToPlayClient__RestrictionInfo_x                        0x140AC1E00

// UdpConnection
#define UdpConnection__GetStats_x                                  0x140537220

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x140820578
#define CGFScreenWnd__CGFScreenWnd_x                               0x140071260
#define CGFScreenWnd__CGFScreenWnd1_x                              0x1400713F0
#define CGFScreenWnd__dCGFScreenWnd_x                              0x1400715A0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
