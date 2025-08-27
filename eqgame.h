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

#define __ClientDate                                               20250826u
#define __ExpectedVersionDate                                     "Aug 26 2025"
#define __ExpectedVersionTime                                     "14:56:41"
#define __ActualVersionDate_x                                      0x140961AA0
#define __ActualVersionTime_x                                      0x140961A90
#define __ActualVersionBuild_x                                     0x1408F7540

// Memory Protection
#define __MemChecker0_x                                            0x1402BEF70
#define __MemChecker1_x                                            0x140586370
#define __MemChecker4_x                                            0x14028C5F0
#define __EncryptPad0_x                                            0x140D31EA0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E6A8E0
#define instEQZoneInfo_x                                           0x140E6AAD4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x1402206E0
#define __gfMaxZoomCameraDistance_x                                0x1408F87B8
#define __gfMaxCameraDistance_x                                    0x140AA0014
#define __CurrentSocial_x                                          0x140BED950 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D29720
#define g_eqCommandStates_x                                        0x140D2A790
#define __CommandList_x                                            0x140D2A9D0
#define __ScreenMode_x                                             0x140DB21EC
#define __gWorld_x                                                 0x140E62DA8
#define __gpbCommandEvent_x                                        0x140E63300
#define __ServerHost_x                                             0x140E634F8
#define __Guilds_x                                                 0x140E69490
#define __MemCheckBitmask_x                                        0x140E6AE1F
#define __MemCheckActive_x                                         0x140E6C525
#define __MouseEventTime_x                                         0x140EDFE90
#define DI8__MouseState_x                                          0x140EE40C8
#define __heqmain_x                                                0x140EE6568
#define DI8__Mouse_x                                               0x140EE4018
#define __HWnd_x                                                   0x140EE40A0
#define __Mouse_x                                                  0x140EE3FD4
#define DI8__Keyboard_x                                            0x140EE3FF0
#define __LoginName_x                                              0x140EE6C4C
#define __CurrentMapLabel_x                                        0x140EFA760
#define __LabelCache_x                                             0x140EFB330
#define __ChatFilterDefs_x                                         0x140A3A790
#define Teleport_Table_Size_x                                      0x140E62308
#define Teleport_Table_x                                           0x140E63820

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E65820
#define pinstActiveBanker_x                                        0x140E63248
#define pinstActiveCorpse_x                                        0x140E63238
#define pinstActiveGMaster_x                                       0x140E63240
#define pinstActiveMerchant_x                                      0x140E63230
#define pinstAltAdvManager_x                                       0x140DB3028
#define pinstCEverQuest_x                                          0x140EE4010
#define pinstCamActor_x                                            0x140DB21D8
#define pinstCDBStr_x                                              0x140DB1DE0
#define pinstCDisplay_x                                            0x140E62D60
#define pinstControlledPlayer_x                                    0x140E632D8
#define pinstCResolutionHandler_x                                  0x140F0BB68
#define pinstCSidlManager_x                                        0x140F0C8D0
#define pinstCXWndManager_x                                        0x140F0C8C8
#define instDynamicZone_x                                          0x140E69350 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E6939E
#define instExpeditionName_x                                       0x140E693DE
#define pinstDZMember_x                                            0x140E69468
#define pinstDZTimerInfo_x                                         0x140E69470
#define pinstEqLogin_x                                             0x140EE6590
#define instTribute_x                                              0x140D24D60
#define pinstDeviceInputProxy_x                                    0x140E6A93C
#define pinstEQSoundManager_x                                      0x140DB33B0
#define pinstEQSpellStrings_x                                      0x140D96970
#define pinstSGraphicsEngine_x                                     0x140F0B8F8
#define pinstLocalPC_x                                             0x140E62D90
#define pinstLocalPlayer_x                                         0x140E63228
#define pinstCMercenaryClientManager_x                             0x140EE1778
#define pinstModelPlayer_x                                         0x140E63258
#define pinstRenderInterface_x                                     0x140F0B910
#define pinstSkillMgr_x                                            0x140EE3418
#define pinstSpawnManager_x                                        0x140EE1B40
#define pinstSpellManager_x                                        0x140EE3480
#define pinstStringTable_x                                         0x140E62D98
#define pinstSwitchManager_x                                       0x140E62CE0
#define pinstTarget_x                                              0x140E632D0
#define pinstTaskMember_x                                          0x140D24D50 // Part of g_taskManager
#define pinstTradeTarget_x                                         0x140E63250
#define instTributeActive_x                                        0x140D24D89
#define pinstViewActor_x                                           0x140DB21D0
#define pinstWorldData_x                                           0x140E633E8
#define pinstPlayerPath_x                                          0x140EE1B68
#define pinstTargetIndicator_x                                     0x140EE3530
#define EQObject_Top_x                                             0x140E63308

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140EF78C0
#define pinstCContainerMgr_x                                       0x140DB2208
#define pinstCContextMenuManager_x                                 0x140F0C5B0
#define pinstCInvSlotMgr_x                                         0x140DB21C8
#define pinstCItemDisplayManager_x                                 0x140EFA330
#define pinstCPopupWndManager_x                                    0x140EFABC0
#define pinstCSpellDisplayMgr_x                                    0x140EFB210
#define pinstCTaskManager_x                                        0x140BEDC90
#define pinstEQSuiteTextureLoader_x                                0x140D3B5B0
#define pinstItemIconCache_x                                       0x140EF7C20
#define pinstLootFiltersManager_x                                  0x140DB1828
#define pinstGFViewListener_x                                      0x140F0BD88


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x14024A3D0
#define __CastRay_x                                                0x140242660
#define __CastRay2_x                                               0x140242360
#define __compress_block_x                                         0x14053B730
#define __ConvertItemTags_x                                        0x140242AC0
#define __CleanItemTags_x                                          0x14008A330
#define __CreateCascadeMenuItems_x                                 0x14018DAD0
#define __decompress_block_x                                       0x140581B80
#define __DoesFileExist_x                                          0x14058A220
#define __EQGetTime_x                                              0x140586920
#define __ExecuteCmd_x                                             0x140217EE0
#define __FixHeading_x                                             0x140640CF0
#define __FlushDxKeyboard_x                                        0x140343BB0
#define __get_bearing_x                                            0x14024C600
#define __get_melee_range_x                                        0x14024C6F0
#define __GetAnimationCache_x                                      0x1403C3BC0
#define __GetGaugeValueFromEQ_x                                    0x1404FB280
#define __GetLabelFromEQ_x                                         0x1404FC880
#define __GetXTargetType_x                                         0x140641FD0   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140640D70
#define __HelpPath_x                                               0x140EDFD58   // Why?
#define __NewUIINI_x                                               0x1405082C0   // Why?
#define __ProcessDeviceEvents_x                                    0x14028CC00
#define __ProcessGameEvents_x                                      0x140281740
#define __ProcessKeyboardEvents_x                                  0x140345300
#define __ProcessMouseEvents_x                                     0x140282E20
#define __SaveColors_x                                             0x14019DB00
#define __STMLToText_x                                             0x140599CC0
#define __WndProc_x                                                0x1403423A0
#define CMemoryMappedFile__SetFile_x                               0x1407EDA10
#define DrawNetStatus_x                                            0x1402CD640
#define Util__FastTime_x                                           0x140585E50
#define __eq_delete_x                                              0x1406B9AB8
#define __eq_new_x                                                 0x1406B9D10
#define __CopyLayout_x                                             0x1402BB370
#define __ThrottleFrameRate_x                                      0x140270DF1
#define __ThrottleFrameRateEnd_x                                   0x140270E51

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140355970
#define CAAWnd__Update_x                                           0x140355C70
#define CAAWnd__UpdateSelected_x                                   0x140356CC0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AC900
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A52E0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x1408446B8
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AD230

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401A8D60
#define AltAdvManager__IsAbilityReady_x                            0x1401A91F0
#define AltAdvManager__GetAAById_x                                 0x1401A8630
#define AltAdvManager__CanTrainAbility_x                           0x1401A8420
#define AltAdvManager__CanSeeAbility_x                             0x1401A80E0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D3380
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D41E0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D4430
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400E8C70
#define CharacterZoneClient__CanUseItem_x                          0x1400E9230
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D4E00
#define CharacterZoneClient__CastSpell_x                           0x1400D4EA0
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E4A70
#define CharacterZoneClient__Cur_HP_x                              0x1400EA950
#define CharacterZoneClient__Cur_Mana_x                            0x1400EAB10
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D8210
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F1190
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FFA30  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D96B0
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E8570
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F2D40
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F1C20
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D9830
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C9B60
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400CB560
#define CharacterZoneClient__GetHPRegen_x                          0x1400F2360
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400EA5C0
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F2FD0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D98B0
#define CharacterZoneClient__GetManaRegen_x                        0x1400F3D50
#define CharacterZoneClient__GetModCap_x                           0x1400FB1E0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D9B40
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D9D10
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CE6F0
#define CharacterZoneClient__HasSkill_x                            0x1400F6D20
#define CharacterZoneClient__HitBySpell_x                          0x1400DA7A0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DE110
#define CharacterZoneClient__MakeMeVisible_x                       0x1400FACC0
#define CharacterZoneClient__Max_Endurance_x                       0x1402E9EE0  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400FB010
#define CharacterZoneClient__Max_Mana_x                            0x1402EA100  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400FB470
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E15C0
#define CharacterZoneClient__SpellDuration_x                       0x1400E22F0
#define CharacterZoneClient__TotalEffect_x                         0x1400E3650
#define CharacterZoneClient__UseSkill_x                            0x1401009B0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140374280

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14037E630

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14037A4A0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14037E0B0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140380DA0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140ABF450

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403A3C60
#define CChatWindowManager__InitContextMenu_x                      0x1403A3DF0
#define CChatWindowManager__FreeChatWindow_x                       0x1403A2CC0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403ABD50
#define CChatWindowManager__CreateChatWindow_x                     0x1403A26F0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140108F10

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403ACDA0
#define CChatWindow__Clear_x                                       0x1403ADD60
#define CChatWindow__WndNotification_x                             0x1403AEF50
#define CChatWindow__AddHistory_x                                  0x1403AD860

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405C7380
#define CContextMenu__RemoveMenuItem_x                             0x1405C7770
#define CContextMenu__RemoveAllMenuItems_x                         0x1405C7740
#define CContextMenu__CheckMenuItem_x                              0x1405C75B0
#define CContextMenu__SetMenuItem_x                                0x1405C7790
#define CContextMenu__AddSeparator_x                               0x1405C74F0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405B9270
#define CContextMenuManager__RemoveMenu_x                          0x1405B9850
#define CContextMenuManager__PopupMenu_x                           0x1405B9590
#define CContextMenuManager__Flush_x                               0x1405B92F0
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403BB760

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x140693A80
#define CChatService__GetFriendName_x                              0x140693A90

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405AA190
#define CComboWnd__Draw_x                                          0x1405AA290
#define CComboWnd__GetCurChoice_x                                  0x1405AA570  // unused
#define CComboWnd__GetListRect_x                                   0x1405AA610
#define CComboWnd__InsertChoice_x                                  0x1405AA950
#define CComboWnd__SetColors_x                                     0x1405AACE0
#define CComboWnd__SetChoice_x                                     0x1405AACA0
#define CComboWnd__GetItemCount_x                                  0x1405AA600
#define CComboWnd__GetCurChoiceText_x                              0x1405AA5B0  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405AA540
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405AAA10

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403B9490
#define CContainerWnd__SetContainer_x                              0x140410EF0
#define CContainerWnd__vftable_x                                   0x1409D5F50

// CDisplay
#define CDisplay__cameraType_x                                     0x140DB1F94
#define CDisplay__ZoneMainUI_x                                     0x1405E1440
#define CDisplay__PreZoneMainUI_x                                  0x14019AA20
#define CDisplay__CleanGameUI_x                                    0x14018CB90
#define CDisplay__GetClickedActor_x                                0x140190D50
#define CDisplay__GetUserDefinedColor_x                            0x1401919C0
#define CDisplay__InitCharSelectUI_x                               0x140191C70
#define CDisplay__ReloadUI_x                                       0x14019CD20
#define CDisplay__RestartUI_x                                      0x1401FD710
#define CDisplay__WriteTextHD2_x                                   0x1401A3D00
#define CDisplay__TrueDistance_x                                   0x1401A39B0
#define CDisplay__SetViewActor_x                                   0x1401A0220
#define CDisplay__GetFloorHeight_x                                 0x140190FB0
#define CDisplay__ToggleScreenshotMode_x                           0x1401A34A0
#define CDisplay__RealRender_World_x                               0x14019C0F0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405EB670
#define CEditWnd__DrawCaret_x                                      0x1405DD120  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405DD5E0
#define CEditWnd__GetCaretPt_x                                     0x1405DD860  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405DD8A0
#define CEditWnd__GetDisplayString_x                               0x1405DDB10
#define CEditWnd__GetHorzOffset_x                                  0x1405DDD50
#define CEditWnd__GetLineForPrintableChar_x                        0x1405DDEA0
#define CEditWnd__GetSelStartPt_x                                  0x1405DE180  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405DDFD0
#define CEditWnd__PointFromPrintableChar_x                         0x1405DED30
#define CEditWnd__ReplaceSelection_x                               0x1405DF0E0
#define CEditWnd__SelectableCharFromPoint_x                        0x1405DF580
#define CEditWnd__SetEditable_x                                    0x1405DF810
#define CEditWnd__SetWindowText_x                                  0x1405DF840

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140271F00
#define CEverQuest__ClickedPlayer_x                                0x140265F90
#define CEverQuest__CreateTargetIndicator_x                        0x140266850
#define CEverQuest__DoTellWindow_x                                 0x140108C20 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1401094F0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x1402738F0
#define CEverQuest__dsp_chat_x                                     0x140108660 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x14029EB10
#define CEverQuest__Emote_x                                        0x1402742E0
#define CEverQuest__GetBodyTypeDesc_x                              0x1402750C0
#define CEverQuest__GetClassDesc_x                                 0x140275120
#define CEverQuest__GetClassThreeLetterCode_x                      0x1402754F0
#define CEverQuest__GetDeityDesc_x                                 0x1402757A0
#define CEverQuest__GetLangDesc_x                                  0x140275BD0
#define CEverQuest__GetRaceDesc_x                                  0x140275F70
#define CEverQuest__InterpretCmd_x                                 0x140277900
#define CEverQuest__LeftClickedOnPlayer_x                          0x14028CC70
#define CEverQuest__LMouseUp_x                                     0x140279370
#define CEverQuest__RightClickedOnPlayer_x                         0x14028A2F0
#define CEverQuest__RMouseUp_x                                     0x1402839B0
#define CEverQuest__SetGameState_x                                 0x14028FBE0
#define CEverQuest__UPCNotificationFlush_x                         0x140295550 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140278FD0
#define CEverQuest__ReportSuccessfulHeal_x                         0x140284D80
#define CEverQuest__ReportSuccessfulHit_x                          0x140285BA0

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403CEB10

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C33F0
#define CGuild__GetGuildName_x                                     0x1400C3430

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403F1F40

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402B0CC0
#define CHotButton__SetCheck_x                                     0x1402B0F90

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140409BF0
#define CInvSlotMgr__MoveItem_x                                    0x140409DD0
#define CInvSlotMgr__SelectSlot_x                                  0x14040B800

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x140406DE0
#define CInvSlot__SliderComplete_x                                 0x140408330
#define CInvSlot__GetItemBase_x                                    0x140402760
#define CInvSlot__UpdateItem_x                                     0x1404087F0

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x14040CB90

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x14042E0F0
#define CItemDisplayWnd__UpdateStrings_x                           0x140430CE0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x14042A8C0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x14042C220
#define CItemDisplayWnd__RequestConvertItem_x                      0x14042D500

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404F7CF0
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404F9A80

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140534A90

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140426F90

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140153AD0

// CLabel
#define CLabel__UpdateText_x                                       0x1404380C0

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405ADB20
#define CListWnd__dCListWnd_x                                      0x1405ADF70
#define CListWnd__vftable_x                                        0x140ABD5A0
#define CListWnd__AddColumn_x                                      0x1405AE610
#define CListWnd__AddColumn1_x                                     0x1405AE6B0
#define CListWnd__AddLine_x                                        0x1405AE810
#define CListWnd__AddString_x                                      0x1405AEDA0
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405AF310
#define CListWnd__CalculateVSBRange_x                              0x1405AF5F0
#define CListWnd__ClearSel_x                                       0x1405AF7A0
#define CListWnd__ClearAllSel_x                                    0x1405AF740
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405AF800
#define CListWnd__Compare_x                                        0x1405AF9C0
#define CListWnd__Draw_x                                           0x1405AFE90
#define CListWnd__DrawColumnSeparators_x                           0x1405B0A40
#define CListWnd__DrawHeader_x                                     0x1405B0B00
#define CListWnd__DrawItem_x                                       0x1405B11D0
#define CListWnd__DrawLine_x                                       0x1405B1B50
#define CListWnd__DrawSeparator_x                                  0x1405B2010
#define CListWnd__EnableLine_x                                     0x1405B2430
#define CListWnd__EnsureVisible_x                                  0x1405B2490
#define CListWnd__ExtendSel_x                                      0x1405B2590
#define CListWnd__GetColumnMinWidth_x                              0x1405B2920
#define CListWnd__GetColumnWidth_x                                 0x1405B29A0
#define CListWnd__GetCurSel_x                                      0x1405B2AA0
#define CListWnd__GetItemData_x                                    0x1405B2E20
#define CListWnd__GetItemHeight_x                                  0x1405B2E60
#define CListWnd__GetItemRect_x                                    0x1405B3080
#define CListWnd__GetItemText_x                                    0x1405B3320
#define CListWnd__GetSelList_x                                     0x1405B3570
#define CListWnd__GetSeparatorRect_x                               0x1405B3760
#define CListWnd__InsertLine_x                                     0x1405B4BC0
#define CListWnd__RemoveLine_x                                     0x1405B5230
#define CListWnd__SetColors_x                                      0x1405B55F0
#define CListWnd__SetColumnJustification_x                         0x1405B5610
#define CListWnd__SetColumnLabel_x                                 0x1405B5690
#define CListWnd__SetColumnWidth_x                                 0x1405B5830
#define CListWnd__SetCurSel_x                                      0x1405B5900
#define CListWnd__SetItemColor_x                                   0x1405B5B70
#define CListWnd__SetItemData_x                                    0x1405B5C10
#define CListWnd__SetItemText_x                                    0x1405B5E50
#define CListWnd__Sort_x                                           0x1405B6260
#define CListWnd__ToggleSel_x                                      0x1405B63D0
#define CListWnd__SetColumnsSizable_x                              0x1405B5880
#define CListWnd__SetItemWnd_x                                     0x1405B5F80
#define CListWnd__GetItemWnd_x                                     0x1405B3500
#define CListWnd__SetItemIcon_x                                    0x1405B5C50
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405AF0E0
#define CListWnd__SetVScrollPos_x                                  0x1405B61C0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x14044B3C0

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A231C0
#define MapViewMap__Clear_x                                        0x14044CF40
#define MapViewMap__SetZoom_x                                      0x1404535B0
#define MapViewMap__HandleLButtonDown_x                            0x1404500D0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140474D10  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x14047B370
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x14047BB20
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14047F370
#define CMerchantWnd__SelectBuySellSlot_x                          0x14047E6C0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140483620

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14066EC30
#define CPacketScrambler__hton_x                                   0x14066EC20

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405D69E0
#define CSidlManagerBase__FindAnimation1_x                         0x1405D6920
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405D7010
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405D6DC0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405D5D20
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405D5CB0
#define CSidlManagerBase__CreateXWnd_x                             0x1405D52F0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404EABB0
#define CSidlManager__CreateXWnd_x                                 0x1404EAD70

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14059B7B0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14059B8D0
#define CSidlScreenWnd__ConvertToRes_x                             0x1405E5BB0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14059BA50
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14059AEE0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14059AFB0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14059B1C0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x14059C140
#define CSidlScreenWnd__EnableIniStorage_x                         0x14059C370
#define CSidlScreenWnd__GetChildItem_x                             0x14059C510
#define CSidlScreenWnd__GetSidlPiece_x                             0x14059C760
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405A67E0 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x14059CAD0
#define CSidlScreenWnd__LoadIniInfo_x                              0x14059CE40
#define CSidlScreenWnd__LoadIniListWnd_x                           0x14059D700
#define CSidlScreenWnd__LoadSidlScreen_x                           0x14059E100
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F0BC28
#define CSidlScreenWnd__StoreIniInfo_x                             0x14059E790
#define CSidlScreenWnd__StoreIniVis_x                              0x14059EF80
#define CSidlScreenWnd__vftable_x                                  0x140ABC828
#define CSidlScreenWnd__WndNotification_x                          0x14059EFD0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14032CB10 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14032CFB0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14032CEE0
#define CSkillMgr__IsActivatedSkill_x                              0x14032D360
#define CSkillMgr__IsCombatSkill_x                                 0x14032D3A0
#define CSkillMgr__GetSkillTimerDuration_x                         0x14032D2D0
#define CSkillMgr__GetSkillLastUsed_x                              0x14032CF30

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405069A0
#define CSliderWnd__SetValue_x                                     0x1405B7540
#define CSliderWnd__SetNumTicks_x                                  0x1405B73C0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404F12F0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405BBCD0
#define CStmlWnd__CalculateHSBRange_x                              0x1405A61E0
#define CStmlWnd__CalculateVSBRange_x                              0x1405BCB70
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405BD660
#define CStmlWnd__ForceParseNow_x                                  0x1405BD700
#define CStmlWnd__GetVisibleText_x                                 0x1405BDDD0
#define CStmlWnd__MakeStmlColorTag_x                               0x1405BFB10
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405BFB50
#define CStmlWnd__SetSTMLText_x                                    0x1405C6B20
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405C6CD0
#define CStmlWnd__UpdateHistoryString_x                            0x1405C7060

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405B7910
#define CTabWnd__DrawCurrentPage_x                                 0x1405B79B0
#define CTabWnd__DrawTab_x                                         0x1405B7D80
#define CTabWnd__GetTabRect_x                                      0x1405B83E0
#define CTabWnd__InsertPage_x                                      0x1405B86B0
#define CTabWnd__RemovePage_x                                      0x1405B8940
#define CTabWnd__SetPage_x                                         0x1405B8AA0
#define CTabWnd__UpdatePage_x                                      0x1405B8DA0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405DFCA0
#define CPageWnd__SetTabText_x                                     0x1405DFD10

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BC9C0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BCDD0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405CE3A0
#define CTextureFont__DrawWrappedText1_x                           0x1405CE2B0
#define CTextureFont__DrawWrappedText2_x                           0x1405CE4D0
#define CTextureFont__GetTextExtent_x                              0x1405CE880
#define CTextureFont__GetHeight_x                                  0x1405CE840

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405E4310

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405983B0

// CXStr
#define CXStr__gFreeLists_x                                        0x140D3AF20
#define CXStr__gCXStrAccess_x                                      0x140F0B788

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405A1850
#define CXWnd__ClrFocus_x                                          0x1405A1B40
#define CXWnd__Destroy_x                                           0x1405A1CC0
#define CXWnd__DoAllDrawing_x                                      0x1405A1DD0
#define CXWnd__DrawColoredRect_x                                   0x1405A25A0
#define CXWnd__DrawTooltip_x                                       0x1405A3C30
#define CXWnd__DrawTooltipAtPoint_x                                0x1405A3CE0
#define CXWnd__GetChildItem_x                                      0x1405A45F0
#define CXWnd__GetChildWndAt_x                                     0x1405A46B0
#define CXWnd__GetClientRect_x                                     0x1405A4950
#define CXWnd__GetClientClipRect_x                                 0x1405A4820
#define CXWnd__GetRelativeRect_x                                   0x1405A6300
#define CXWnd__GetScreenClipRect_x                                 0x1405A6400
#define CXWnd__GetScreenRect_x                                     0x1405A6570
#define CXWnd__GetTooltipRect_x                                    0x1405A66E0
#define CXWnd__IsActive_x                                          0x1405A6CA0
#define CXWnd__IsDescendantOf_x                                    0x1405A6CD0
#define CXWnd__IsReallyVisible_x                                   0x1405A6D40
#define CXWnd__IsType_x                                            0x1405A6D90
#define CXWnd__Minimize_x                                          0x1405A6E90
#define CXWnd__ProcessTransition_x                                 0x1405A7D10
#define CXWnd__Resize_x                                            0x1405A7E20
#define CXWnd__Right_x                                             0x1405A7EC0
#define CXWnd__SetFocus_x                                          0x1405A8270
#define CXWnd__SetFont_x                                           0x1405A82C0
#define CXWnd__SetKeyTooltip_x                                     0x1405A83B0
#define CXWnd__SetMouseOver_x                                      0x1405A84F0
#define CXWnd__SetParent_x                                         0x1405A8570
#define CXWnd__StartFade_x                                         0x1405A89B0
#define CXWnd__vftable_x                                           0x140ABCE00
#define CXWnd__CXWnd_x                                             0x1405A03F0
#define CXWnd__dCXWnd_x                                            0x1405A0D20

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405EADF0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405C8930
#define CXWndManager__DrawCursor_x                                 0x1405C8C10
#define CXWndManager__DrawWindows_x                                0x1405C8E70
#define CXWndManager__GetKeyboardFlags_x                           0x1405C94C0
#define CXWndManager__HandleKeyboardMsg_x                          0x1405C9500
#define CXWndManager__RemoveWnd_x                                  0x1405CCA60

// CDBStr
#define CDBStr__GetString_x                                        0x14018AD50

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x140678A70

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D0E80
#define CCharacterListWnd__EnterWorld_x                            0x1400CFE90
#define CCharacterListWnd__Quit_x                                  0x1400D0E60
#define CCharacterListWnd__UpdateList_x                            0x1400D1CE0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140646D90
#define ItemBase__CreateItemTagString_x                            0x140647800
#define ItemBase__GetImageNum_x                                    0x140649D70
#define ItemBase__GetItemValue_x                                   0x14064B8B0
#define ItemBase__IsEmpty_x                                        0x14064D430
#define ItemBase__IsKeyRingItem_x                                  0x14064DB40
#define ItemBase__ValueSellMerchant_x                              0x140651DD0
#define ItemClient__CanDrop_x                                      0x1402B35F0
#define ItemClient__CanGoInBag_x                                   0x1402B3720
#define ItemClient__CreateItemClient_x                             0x1402B39A0
#define ItemClient__dItemClient_x                                  0x1402B3460

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401AA710
#define EQ_LoadingS__Array_x                                       0x140D27230

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14065DBA0
#define PcBase__GetCombatAbility_x                                 0x14065E290
#define PcBase__GetCombatAbilityTimer_x                            0x14065E330
#define PcBase__GetItemContainedRealEstateIds_x                    0x14065EAD0
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14065F610
#define PcClient__AlertInventoryChanged_x                          0x1402D5C60
#define PcClient__GetConLevel_x                                    0x1402D6280  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402D8A00
#define PcClient__HasLoreItem_x                                    0x1402D9AB0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402E72D0
#define PcZoneClient__RemoveMyAffect_x                             0x1402EB020

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x14021C620  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x14021C7D0  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x14021C930  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x14021C870  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x1402574C0  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x1401855A0

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140633D20
#define PlayerBase__CanSee1_x                                      0x140633DF0
#define PlayerBase__GetVisibilityLineSegment_x                     0x1406342D0
#define PlayerBase__HasProperty_x                                  0x1406344A0
#define PlayerBase__IsTargetable_x                                 0x140634560
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402F8D90
#define PlayerClient__GetPcClient_x                                0x1402FB8C0
#define PlayerClient__PlayerClient_x                               0x1402F1100
#define PlayerClient__SetNameSpriteState_x                         0x1402FEFF0
#define PlayerClient__SetNameSpriteTint_x                          0x1402FFFB0
#define PlayerZoneClient__ChangeHeight_x                           0x14030E9E0
#define PlayerZoneClient__DoAttack_x                               0x14030F6F0
#define PlayerZoneClient__GetLevel_x                               0x140312E30
#define PlayerZoneClient__IsValidTeleport_x                        0x14025A250
#define PlayerZoneClient__LegalPlayerRace_x                        0x1401992A0

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x140307EE0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x140307F90  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x140308090
#define PlayerManagerClient__CreatePlayer_x                        0x1403079B0
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x1406338E0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402B8870
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402B8470
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402B84E0
#define KeypressHandler__ClearCommandStateArray_x                  0x1402B8800  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402B8990
#define KeypressHandler__HandleKeyUp_x                             0x1402B8AB0
#define KeypressHandler__SaveKeymapping_x                          0x1402B8710  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140676590  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x140670370

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402E0080  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402E5400
#define PcZoneClient__GetPcSkillLimit_x                            0x1402E7A60
#define PcZoneClient__RemovePetEffect_x                            0x1402EB300
#define PcZoneClient__HasAlternateAbility_x                        0x1402E8650
#define PcZoneClient__CanEquipItem_x                               0x1402E3700
#define PcZoneClient__GetItemByID_x                                0x1402E6330
#define PcZoneClient__RemoveBuffEffect_x                           0x1402EAEA0
#define PcZoneClient__BandolierSwap_x                              0x1402E2750

// Doors
#define EQSwitch__UseSwitch_x                                      0x14025ED80

// IconCache
#define IconCache__GetIcon_x                                       0x1403C3BF0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403B8240
#define CContainerMgr__CloseContainer_x                            0x1403B7B80
#define CContainerMgr__OpenExperimentContainer_x                   0x1403B85C0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404AED60

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402AAFB0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x14043F3C0
#define CLootWnd__RequestLootSlot_x                                0x1404403F0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401D9C40
#define EQ_Spell__SpellAffects_x                                   0x1401DAF20
#define EQ_Spell__SpellAffectBase_x                                0x1401DAE80
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D9EA0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D9E50
#define EQ_Spell__IsSPAStacking_x                                  0x1401DAB50
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401DA700
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401D9FD0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C1F30

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x14050BAB0
#define CTargetWnd__RefreshTargetBuffs_x                           0x14050B1C0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x14050A9C0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x140513150  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140181F40
#define CTaskManager__GetTaskStatus_x                              0x140182050
#define CTaskManager__GetElementDescription_x                      0x140181BD0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401D7F60
#define EqSoundManager__PlayScriptMp3_x                            0x1401D6DA0
#define EqSoundManager__SoundAssistPlay_x                          0x140332150  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140332490  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405A9720
#define CTextureAnimation__SetCurCell_x                            0x1405A9A30

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402A91B0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x140691150
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1406911D0
#define CharacterBase__IsExpansionFlag_x                           0x1401FCED0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140394890
#define CCastSpellWnd__IsBardSongPlaying_x                         0x1403952B0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140396800

// messages
#define msg_spell_worn_off_x                                       0x140212E40
#define msg_new_text_x                                             0x14020E5F0
#define __msgTokenTextParam_x                                      0x140205CC0
#define msgTokenText_x                                             0x140205BD0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140333D80
#define SpellManager__GetSpellByGroupAndRank_x                     0x140333CA0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x1406423B0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140438810

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403BCF90
#define CCursorAttachment__IsOkToActivate_x                        0x1403C0240
#define CCursorAttachment__RemoveAttachment_x                      0x1403C04F0
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405E27B0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405E29A0
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405E29B0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x14014EC80
#define CFindItemWnd__Update_x                                     0x14014F620
#define CFindItemWnd__PickupSelectedItem_x                         0x1401490C0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x1401587F0
#define LootFiltersManager__GetItemFilterData_x                    0x140159310
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140159BB0
#define LootFiltersManager__SetItemLootFilter_x                    0x140159E60

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x1404917E0

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x14032C6D0
#define CResolutionHandler__UpdateResolution_x                     0x14058EF30

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403B4530

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x140695540  // Rename..?
#define CDistillerInfo__Instance_x                                 0x140695430  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403DAE70
#define CGroupWnd__UpdateDisplay_x                                 0x1403DAA50

// ItemBase
#define ItemBase__IsLore_x                                         0x14064DC70
#define ItemBase__IsLoreEquipped_x                                 0x14064DD00

#define MultipleItemMoveManager__ProcessMove_x                     0x1402CB720

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140257620
#define EQPlacedItemManager__GetItemByGuid_x                       0x1402575B0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x1402575F0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140326B20

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x1401268B0
#define FactionManagerClient__HandleFactionMessage_x               0x140126C60
#define FactionManagerClient__GetFactionStanding_x                 0x140126080
#define FactionManagerClient__GetMaxFaction_x                      0x140126080
#define FactionManagerClient__GetMinFaction_x                      0x140125F30

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AEF10

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140132060

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401B30D0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401B2450
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401B2EF0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401B2E70  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x1403390A0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140326B20

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x14021C9C0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x14059F5C0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x1400869F0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14034AC30

// AchievementManager
#define AchievementManager__Instance_x                             0x14008EBB0

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x1406795F0
#define FreeToPlayClient__RestrictionInfo_x                        0x140AD1660

// UdpConnection
#define UdpConnection__GetStats_x                                  0x140541B50

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x14082BE80
#define CGFScreenWnd__CGFScreenWnd_x                               0x140071380
#define CGFScreenWnd__CGFScreenWnd1_x                              0x140071510
#define CGFScreenWnd__dCGFScreenWnd_x                              0x1400716C0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
