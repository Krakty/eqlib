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
#define __ExpectedVersionTime                                     "08:26:46"
#define __ActualVersionDate_x                                      0x140961AA0
#define __ActualVersionTime_x                                      0x140961A90
#define __ActualVersionBuild_x                                     0x1408F7540

// Memory Protection
#define __MemChecker0_x                                            0x1402BEF40
#define __MemChecker1_x                                            0x1405863A0
#define __MemChecker4_x                                            0x14028C650
#define __EncryptPad0_x                                            0x140D31EA0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E6A8E0
#define instEQZoneInfo_x                                           0x140E6AAD4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x140220740
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
#define Teleport_Table_Size_x                                      0x0
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
#define __allowslashcommand_x                                      0x14024A410
#define __CastRay_x                                                0x1402426B0
#define __CastRay2_x                                               0x1402423B0
#define __compress_block_x                                         0x14053B760
#define __ConvertItemTags_x                                        0x140242B10
#define __CleanItemTags_x                                          0x14008A350
#define __CreateCascadeMenuItems_x                                 0x14018DA40
#define __decompress_block_x                                       0x140581BB0
#define __DoesFileExist_x                                          0x14058A250
#define __EQGetTime_x                                              0x140586950
#define __ExecuteCmd_x                                             0x140217F40
#define __FixHeading_x                                             0x140641120
#define __FlushDxKeyboard_x                                        0x140343B10
#define __get_bearing_x                                            0x14024C640
#define __get_melee_range_x                                        0x14024C730
#define __GetAnimationCache_x                                      0x1403C3AF0
#define __GetGaugeValueFromEQ_x                                    0x1404FB0F0
#define __GetLabelFromEQ_x                                         0x1404FC6E0
#define __GetXTargetType_x                                         0x140642400   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x1406411A0
#define __HelpPath_x                                               0x140EDFD58   // Why?
#define __NewUIINI_x                                               0x140508130   // Why?
#define __ProcessDeviceEvents_x                                    0x14028CC60
#define __ProcessGameEvents_x                                      0x1402817A0
#define __ProcessKeyboardEvents_x                                  0x140345260
#define __ProcessMouseEvents_x                                     0x140282E80
#define __SaveColors_x                                             0x14019DA70
#define __STMLToText_x                                             0x140599CF0
#define __WndProc_x                                                0x140342300
#define CMemoryMappedFile__SetFile_x                               0x1407EDEA0
#define DrawNetStatus_x                                            0x1402CD5C0
#define Util__FastTime_x                                           0x140585E80
#define __eq_delete_x                                              0x1406B9F58
#define __eq_new_x                                                 0x1406BA1B0
#define __CopyLayout_x                                             0x1402BB340
#define __ThrottleFrameRate_x                                      0x140270E51
#define __ThrottleFrameRateEnd_x                                   0x140270EB1

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x1403558D0
#define CAAWnd__Update_x                                           0x140355BD0
#define CAAWnd__UpdateSelected_x                                   0x140356C20

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AC8F0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A52D0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x1408446B8
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AD220

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401A8CC0
#define AltAdvManager__IsAbilityReady_x                            0x1401A9150
#define AltAdvManager__GetAAById_x                                 0x1401A8590
#define AltAdvManager__CanTrainAbility_x                           0x1401A8380
#define AltAdvManager__CanSeeAbility_x                             0x1401A8040

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D3360
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D41C0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D4410
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400E8C50
#define CharacterZoneClient__CanUseItem_x                          0x1400E9210
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D4DE0
#define CharacterZoneClient__CastSpell_x                           0x1400D4E80
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E4A50
#define CharacterZoneClient__Cur_HP_x                              0x1400EA930
#define CharacterZoneClient__Cur_Mana_x                            0x1400EAAF0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D81F0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F1160
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FFA00  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D9690
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E8550
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F2D10
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F1BF0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D9810
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C9B40
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400CB540
#define CharacterZoneClient__GetHPRegen_x                          0x1400F2330
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400EA5A0
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F2FA0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D9890
#define CharacterZoneClient__GetManaRegen_x                        0x1400F3D20
#define CharacterZoneClient__GetModCap_x                           0x1400FB1B0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D9B20
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D9CF0
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CE6D0
#define CharacterZoneClient__HasSkill_x                            0x1400F6CF0
#define CharacterZoneClient__HitBySpell_x                          0x1400DA780
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DE0F0
#define CharacterZoneClient__MakeMeVisible_x                       0x1400FAC90
#define CharacterZoneClient__Max_Endurance_x                       0x1402E9E10  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400FAFE0
#define CharacterZoneClient__Max_Mana_x                            0x1402EA030  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400FB440
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E15A0
#define CharacterZoneClient__SpellDuration_x                       0x1400E22D0
#define CharacterZoneClient__TotalEffect_x                         0x1400E3630
#define CharacterZoneClient__UseSkill_x                            0x140100980


// CBankWnd
#define CBankWnd__WndNotification_x                                0x1403741F0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14037E570

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14037A3F0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14037DFF0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140380CE0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140ABF450

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403A3B60
#define CChatWindowManager__InitContextMenu_x                      0x1403A3CF0
#define CChatWindowManager__FreeChatWindow_x                       0x1403A2BC0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403ABC50
#define CChatWindowManager__CreateChatWindow_x                     0x1403A25F0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140108EE0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403ACCA0
#define CChatWindow__Clear_x                                       0x1403ADC60
#define CChatWindow__WndNotification_x                             0x1403AEE50
#define CChatWindow__AddHistory_x                                  0x1403AD760

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405C7530
#define CContextMenu__RemoveMenuItem_x                             0x1405C7920
#define CContextMenu__RemoveAllMenuItems_x                         0x1405C78F0
#define CContextMenu__CheckMenuItem_x                              0x1405C7760
#define CContextMenu__SetMenuItem_x                                0x1405C7940
#define CContextMenu__AddSeparator_x                               0x1405C76A0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405B93F0
#define CContextMenuManager__RemoveMenu_x                          0x1405B99D0
#define CContextMenuManager__PopupMenu_x                           0x1405B9710
#define CContextMenuManager__Flush_x                               0x1405B9470
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403BB680

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x140693F10
#define CChatService__GetFriendName_x                              0x140693F20

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405AA2F0
#define CComboWnd__Draw_x                                          0x1405AA3F0
#define CComboWnd__GetCurChoice_x                                  0x1405AA6D0  // unused
#define CComboWnd__GetListRect_x                                   0x1405AA770
#define CComboWnd__InsertChoice_x                                  0x1405AAAB0
#define CComboWnd__SetColors_x                                     0x1405AAE40
#define CComboWnd__SetChoice_x                                     0x1405AAE00
#define CComboWnd__GetItemCount_x                                  0x1405AA760
#define CComboWnd__GetCurChoiceText_x                              0x1405AA710  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405AA6A0
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405AAB70

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403B93A0
#define CContainerWnd__SetContainer_x                              0x140410E10
#define CContainerWnd__vftable_x                                   0x1409D5F50

// CDisplay
#define CDisplay__cameraType_x                                     0x140DB1F94
#define CDisplay__ZoneMainUI_x                                     0x1405E1670
#define CDisplay__PreZoneMainUI_x                                  0x14019A990
#define CDisplay__CleanGameUI_x                                    0x14018CB00
#define CDisplay__GetClickedActor_x                                0x140190CC0
#define CDisplay__GetUserDefinedColor_x                            0x140191930
#define CDisplay__InitCharSelectUI_x                               0x140191BE0
#define CDisplay__ReloadUI_x                                       0x14019CC90
#define CDisplay__RestartUI_x                                      0x1401FD780
#define CDisplay__WriteTextHD2_x                                   0x1401A3C70
#define CDisplay__TrueDistance_x                                   0x1401A3920
#define CDisplay__SetViewActor_x                                   0x1401A0190
#define CDisplay__GetFloorHeight_x                                 0x140190F20
#define CDisplay__ToggleScreenshotMode_x                           0x1401A3410
#define CDisplay__RealRender_World_x                               0x14019C060

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405EB8A0
#define CEditWnd__DrawCaret_x                                      0x1405DD370  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405DD830
#define CEditWnd__GetCaretPt_x                                     0x1405DDAB0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405DDAF0
#define CEditWnd__GetDisplayString_x                               0x1405DDD60
#define CEditWnd__GetHorzOffset_x                                  0x1405DDFA0
#define CEditWnd__GetLineForPrintableChar_x                        0x1405DE0F0
#define CEditWnd__GetSelStartPt_x                                  0x1405DE3D0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405DE220
#define CEditWnd__PointFromPrintableChar_x                         0x1405DEF80
#define CEditWnd__ReplaceSelection_x                               0x1405DF330
#define CEditWnd__SelectableCharFromPoint_x                        0x1405DF7D0
#define CEditWnd__SetEditable_x                                    0x1405DFA60
#define CEditWnd__SetWindowText_x                                  0x1405DFA90

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140271F60
#define CEverQuest__ClickedPlayer_x                                0x140265FC0
#define CEverQuest__CreateTargetIndicator_x                        0x140266880
#define CEverQuest__DoTellWindow_x                                 0x140108BF0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1401094C0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140273950
#define CEverQuest__dsp_chat_x                                     0x140108630 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x14029EB70
#define CEverQuest__Emote_x                                        0x140274340
#define CEverQuest__GetBodyTypeDesc_x                              0x140275120
#define CEverQuest__GetClassDesc_x                                 0x140275180
#define CEverQuest__GetClassThreeLetterCode_x                      0x140275550
#define CEverQuest__GetDeityDesc_x                                 0x140275800
#define CEverQuest__GetLangDesc_x                                  0x140275C30
#define CEverQuest__GetRaceDesc_x                                  0x140275FD0
#define CEverQuest__InterpretCmd_x                                 0x140277960
#define CEverQuest__LeftClickedOnPlayer_x                          0x14028CCD0
#define CEverQuest__LMouseUp_x                                     0x1402793D0
#define CEverQuest__RightClickedOnPlayer_x                         0x14028A350
#define CEverQuest__RMouseUp_x                                     0x140283A10
#define CEverQuest__SetGameState_x                                 0x14028FC40
#define CEverQuest__UPCNotificationFlush_x                         0x1402955B0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140279030
#define CEverQuest__ReportSuccessfulHeal_x                         0x140284DE0
#define CEverQuest__ReportSuccessfulHit_x                          0x140285C00

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403CEA50

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C33E0
#define CGuild__GetGuildName_x                                     0x1400C3420

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403F1EF0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402B0D10
#define CHotButton__SetCheck_x                                     0x1402B0FE0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140409B20
#define CInvSlotMgr__MoveItem_x                                    0x140409D00
#define CInvSlotMgr__SelectSlot_x                                  0x14040B730

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x140406D20
#define CInvSlot__SliderComplete_x                                 0x140408270
#define CInvSlot__GetItemBase_x                                    0x1404026C0
#define CInvSlot__UpdateItem_x                                     0x140408720

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x14040CAC0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x14042E000
#define CItemDisplayWnd__UpdateStrings_x                           0x140430BF0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x14042A7E0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x14042C140
#define CItemDisplayWnd__RequestConvertItem_x                      0x14042D410

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404F7B60
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404F98F0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140534AC0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140426EC0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140153A10

// CLabel
#define CLabel__UpdateText_x                                       0x140437FF0

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405ADC80
#define CListWnd__dCListWnd_x                                      0x1405AE0D0
#define CListWnd__vftable_x                                        0x140ABD5A0
#define CListWnd__AddColumn_x                                      0x1405AE770
#define CListWnd__AddColumn1_x                                     0x1405AE810
#define CListWnd__AddLine_x                                        0x1405AE970
#define CListWnd__AddString_x                                      0x1405AEF00
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405AF470
#define CListWnd__CalculateVSBRange_x                              0x1405AF750
#define CListWnd__ClearSel_x                                       0x1405AF900
#define CListWnd__ClearAllSel_x                                    0x1405AF8A0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405AF960
#define CListWnd__Compare_x                                        0x1405AFB10
#define CListWnd__Draw_x                                           0x1405AFFE0
#define CListWnd__DrawColumnSeparators_x                           0x1405B0B90
#define CListWnd__DrawHeader_x                                     0x1405B0C50
#define CListWnd__DrawItem_x                                       0x1405B1330
#define CListWnd__DrawLine_x                                       0x1405B1CB0
#define CListWnd__DrawSeparator_x                                  0x1405B2170
#define CListWnd__EnableLine_x                                     0x1405B2590
#define CListWnd__EnsureVisible_x                                  0x1405B25F0
#define CListWnd__ExtendSel_x                                      0x1405B26F0
#define CListWnd__GetColumnMinWidth_x                              0x1405B2A80
#define CListWnd__GetColumnWidth_x                                 0x1405B2B00
#define CListWnd__GetCurSel_x                                      0x1405B2C00
#define CListWnd__GetItemData_x                                    0x1405B2F80
#define CListWnd__GetItemHeight_x                                  0x1405B2FC0
#define CListWnd__GetItemRect_x                                    0x1405B31E0
#define CListWnd__GetItemText_x                                    0x1405B3480
#define CListWnd__GetSelList_x                                     0x1405B36D0
#define CListWnd__GetSeparatorRect_x                               0x1405B38C0
#define CListWnd__InsertLine_x                                     0x1405B4D20
#define CListWnd__RemoveLine_x                                     0x1405B5390
#define CListWnd__SetColors_x                                      0x1405B5750
#define CListWnd__SetColumnJustification_x                         0x1405B5770
#define CListWnd__SetColumnLabel_x                                 0x1405B57F0
#define CListWnd__SetColumnWidth_x                                 0x1405B5990
#define CListWnd__SetCurSel_x                                      0x1405B5A60
#define CListWnd__SetItemColor_x                                   0x1405B5CD0
#define CListWnd__SetItemData_x                                    0x1405B5D70
#define CListWnd__SetItemText_x                                    0x1405B5FB0
#define CListWnd__Sort_x                                           0x1405B63C0
#define CListWnd__ToggleSel_x                                      0x1405B6530
#define CListWnd__SetColumnsSizable_x                              0x1405B59E0
#define CListWnd__SetItemWnd_x                                     0x1405B60E0
#define CListWnd__GetItemWnd_x                                     0x1405B3660
#define CListWnd__SetItemIcon_x                                    0x1405B5DB0
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405AF240
#define CListWnd__SetVScrollPos_x                                  0x1405B6320

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x14044B2D0

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A231C0
#define MapViewMap__Clear_x                                        0x14044CE50
#define MapViewMap__SetZoom_x                                      0x1404534C0
#define MapViewMap__HandleLButtonDown_x                            0x14044FFE0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140474BE0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x14047B220
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x14047B9C0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14047F1F0
#define CMerchantWnd__SelectBuySellSlot_x                          0x14047E540
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140483490

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14066F0D0
#define CPacketScrambler__hton_x                                   0x14066F0C0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405D6C30
#define CSidlManagerBase__FindAnimation1_x                         0x1405D6B70
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405D7260
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405D7010
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405D5F70
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405D5F00
#define CSidlManagerBase__CreateXWnd_x                             0x1405D5540

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404EAA20
#define CSidlManager__CreateXWnd_x                                 0x1404EABE0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14059B7E0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14059B910
#define CSidlScreenWnd__ConvertToRes_x                             0x1405E5DE0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14059BA90
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14059AF10
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14059AFE0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14059B1F0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x14059C180
#define CSidlScreenWnd__EnableIniStorage_x                         0x14059C3B0
#define CSidlScreenWnd__GetChildItem_x                             0x14059C550
#define CSidlScreenWnd__GetSidlPiece_x                             0x14059C7A0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405A6860 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x14059CB10
#define CSidlScreenWnd__LoadIniInfo_x                              0x14059CE80
#define CSidlScreenWnd__LoadIniListWnd_x                           0x14059D740
#define CSidlScreenWnd__LoadSidlScreen_x                           0x14059E140
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F0BC28
#define CSidlScreenWnd__StoreIniInfo_x                             0x14059E7D0
#define CSidlScreenWnd__StoreIniVis_x                              0x14059EFC0
#define CSidlScreenWnd__vftable_x                                  0x140ABC828
#define CSidlScreenWnd__WndNotification_x                          0x14059F010

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14032CA70 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14032CF10 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14032CE40
#define CSkillMgr__IsActivatedSkill_x                              0x14032D2C0
#define CSkillMgr__IsCombatSkill_x                                 0x14032D300
#define CSkillMgr__GetSkillTimerDuration_x                         0x14032D230
#define CSkillMgr__GetSkillLastUsed_x                              0x14032CE90

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405B6EA0
#define CSliderWnd__SetValue_x                                     0x1405B76B0
#define CSliderWnd__SetNumTicks_x                                  0x1405B7530

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404F1160

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405BBE50
#define CStmlWnd__CalculateHSBRange_x                              0x1405A6210
#define CStmlWnd__CalculateVSBRange_x                              0x1405BCCF0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405BD7F0
#define CStmlWnd__ForceParseNow_x                                  0x1405BD890
#define CStmlWnd__GetVisibleText_x                                 0x1405BDF60
#define CStmlWnd__MakeStmlColorTag_x                               0x1405BFCC0
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405BFD00
#define CStmlWnd__SetSTMLText_x                                    0x1405C6CD0
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405C6E80
#define CStmlWnd__UpdateHistoryString_x                            0x1405C7210

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405B7A80
#define CTabWnd__DrawCurrentPage_x                                 0x1405B7B20
#define CTabWnd__DrawTab_x                                         0x1405B7EF0
#define CTabWnd__GetTabRect_x                                      0x1405B8560
#define CTabWnd__InsertPage_x                                      0x1405B8830
#define CTabWnd__RemovePage_x                                      0x1405B8AC0
#define CTabWnd__SetPage_x                                         0x1405B8C20
#define CTabWnd__UpdatePage_x                                      0x1405B8F20

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405DFEF0
#define CPageWnd__SetTabText_x                                     0x1405DFF60

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BC9A0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BCDB0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405CE610
#define CTextureFont__DrawWrappedText1_x                           0x1405CE520
#define CTextureFont__DrawWrappedText2_x                           0x1405CE740
#define CTextureFont__GetTextExtent_x                              0x1405CEAF0
#define CTextureFont__GetHeight_x                                  0x1405CEAB0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405E4540

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405983E0

// CXStr
#define CXStr__gFreeLists_x                                        0x140D3AF20
#define CXStr__gCXStrAccess_x                                      0x140F0B788

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405A18A0
#define CXWnd__ClrFocus_x                                          0x1405A1B90
#define CXWnd__Destroy_x                                           0x1405A1D10
#define CXWnd__DoAllDrawing_x                                      0x1405A1E20
#define CXWnd__DrawColoredRect_x                                   0x1405A25F0
#define CXWnd__DrawTooltip_x                                       0x1405A3C70
#define CXWnd__DrawTooltipAtPoint_x                                0x1405A3D20
#define CXWnd__GetChildItem_x                                      0x1405A4620
#define CXWnd__GetChildWndAt_x                                     0x1405A46D0
#define CXWnd__GetClientRect_x                                     0x1405A4990
#define CXWnd__GetClientClipRect_x                                 0x1405A4840
#define CXWnd__GetRelativeRect_x                                   0x1405A6350
#define CXWnd__GetScreenClipRect_x                                 0x1405A6460
#define CXWnd__GetScreenRect_x                                     0x1405A65E0
#define CXWnd__GetTooltipRect_x                                    0x1405A6760
#define CXWnd__IsActive_x                                          0x1405A6D20
#define CXWnd__IsDescendantOf_x                                    0x1405A6D50
#define CXWnd__IsReallyVisible_x                                   0x1405A6DC0
#define CXWnd__IsType_x                                            0x1405A6E10
#define CXWnd__Minimize_x                                          0x1405A6F10
#define CXWnd__ProcessTransition_x                                 0x1405A7E20
#define CXWnd__Resize_x                                            0x1405A7F30
#define CXWnd__Right_x                                             0x1405A7FD0
#define CXWnd__SetFocus_x                                          0x1405A8380
#define CXWnd__SetFont_x                                           0x1405A83D0
#define CXWnd__SetKeyTooltip_x                                     0x1405A84D0
#define CXWnd__SetMouseOver_x                                      0x1405A8610
#define CXWnd__SetParent_x                                         0x1405A8690
#define CXWnd__StartFade_x                                         0x1405A8AE0
#define CXWnd__vftable_x                                           0x140ABCE00
#define CXWnd__CXWnd_x                                             0x1405A0430
#define CXWnd__dCXWnd_x                                            0x1405A0D80

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405EB020

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405C8AD0
#define CXWndManager__DrawCursor_x                                 0x1405C8DB0
#define CXWndManager__DrawWindows_x                                0x1405C9010
#define CXWndManager__GetKeyboardFlags_x                           0x1405C9660
#define CXWndManager__HandleKeyboardMsg_x                          0x1405C96A0
#define CXWndManager__RemoveWnd_x                                  0x1405CCCD0

// CDBStr
#define CDBStr__GetString_x                                        0x14018ACC0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x140678F20

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D0E60
#define CCharacterListWnd__EnterWorld_x                            0x1400CFE70
#define CCharacterListWnd__Quit_x                                  0x1400D0E40
#define CCharacterListWnd__UpdateList_x                            0x1400D1CC0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140647210
#define ItemBase__CreateItemTagString_x                            0x140647C80
#define ItemBase__GetImageNum_x                                    0x14064A210
#define ItemBase__GetItemValue_x                                   0x14064BCB0
#define ItemBase__IsEmpty_x                                        0x14064D8E0
#define ItemBase__IsKeyRingItem_x                                  0x14064E010
#define ItemBase__ValueSellMerchant_x                              0x1406522A0
#define ItemClient__CanDrop_x                                      0x1402B35D0
#define ItemClient__CanGoInBag_x                                   0x1402B3700
#define ItemClient__CreateItemClient_x                             0x1402B3980
#define ItemClient__dItemClient_x                                  0x1402B3440

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401AA670
#define EQ_LoadingS__Array_x                                       0x140D27230

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14065E040
#define PcBase__GetCombatAbility_x                                 0x14065E730
#define PcBase__GetCombatAbilityTimer_x                            0x14065E7D0
#define PcBase__GetItemContainedRealEstateIds_x                    0x14065EF70
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14065FAB0
#define PcClient__AlertInventoryChanged_x                          0x1402D5BF0
#define PcClient__GetConLevel_x                                    0x1402D6210  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402D8990
#define PcClient__HasLoreItem_x                                    0x1402D9A40
#define PcZoneClient__GetItemRecastTimer_x                         0x1402E7210
#define PcZoneClient__RemoveMyAffect_x                             0x1402EAF50

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x14021C680  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x14021C830  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x14021C990  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x14021C8D0  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x1402574F0  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x1401854B0

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140633F50
#define PlayerBase__CanSee1_x                                      0x140634020
#define PlayerBase__GetVisibilityLineSegment_x                     0x140634500
#define PlayerBase__HasProperty_x                                  0x1406346D0
#define PlayerBase__IsTargetable_x                                 0x140634790
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402F8CD0
#define PlayerClient__GetPcClient_x                                0x1402FB800
#define PlayerClient__PlayerClient_x                               0x1402F1030
#define PlayerClient__SetNameSpriteState_x                         0x1402FEF30
#define PlayerClient__SetNameSpriteTint_x                          0x1402FFEF0
#define PlayerZoneClient__ChangeHeight_x                           0x14030E920
#define PlayerZoneClient__DoAttack_x                               0x14030F630
#define PlayerZoneClient__GetLevel_x                               0x140312D70
#define PlayerZoneClient__IsValidTeleport_x                        0x14025A280
#define PlayerZoneClient__LegalPlayerRace_x                        0x140199210

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x140307E20  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x140307ED0  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x140307FD0
#define PlayerManagerClient__CreatePlayer_x                        0x1403078F0
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140633B10

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402B8840
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402B8440
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402B84B0
#define KeypressHandler__ClearCommandStateArray_x                  0x1402B87D0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402B8960
#define KeypressHandler__HandleKeyUp_x                             0x1402B8A80
#define KeypressHandler__SaveKeymapping_x                          0x1402B86E0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140676A40  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x140670810

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402E0000  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402E5350
#define PcZoneClient__GetPcSkillLimit_x                            0x1402E79A0
#define PcZoneClient__RemovePetEffect_x                            0x1402EB230
#define PcZoneClient__HasAlternateAbility_x                        0x1402E8580
#define PcZoneClient__CanEquipItem_x                               0x1402E3660
#define PcZoneClient__GetItemByID_x                                0x1402E6270
#define PcZoneClient__RemoveBuffEffect_x                           0x1402EADD0
#define PcZoneClient__BandolierSwap_x                              0x1402E26C0

// Doors
#define EQSwitch__UseSwitch_x                                      0x14025EDB0

// IconCache
#define IconCache__GetIcon_x                                       0x1403C3B20

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403B8150
#define CContainerMgr__CloseContainer_x                            0x1403B7A90
#define CContainerMgr__OpenExperimentContainer_x                   0x1403B84D0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404AEBB0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402AB010

// CLootWnd
#define CLootWnd__LootAll_x                                        0x14043F2F0
#define CLootWnd__RequestLootSlot_x                                0x140440320

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401D9B60
#define EQ_Spell__SpellAffects_x                                   0x1401DAE40
#define EQ_Spell__SpellAffectBase_x                                0x1401DADA0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D9E80
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D9E30
#define EQ_Spell__IsSPAStacking_x                                  0x1401DAA70
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401DA620
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401D9EF0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C1F20

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x14050B930
#define CTargetWnd__RefreshTargetBuffs_x                           0x14050B040
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x14050A840

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x140512FC0  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140181E60
#define CTaskManager__GetTaskStatus_x                              0x140181F70
#define CTaskManager__GetElementDescription_x                      0x140181AF0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401D7E80
#define EqSoundManager__PlayScriptMp3_x                            0x1401D6CC0
#define EqSoundManager__SoundAssistPlay_x                          0x1403320B0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x1403323F0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405A9880
#define CTextureAnimation__SetCurCell_x                            0x1405A9B90

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402A9210

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1406915E0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x140691660
#define CharacterBase__IsExpansionFlag_x                           0x1401FCF40

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140394790
#define CCastSpellWnd__IsBardSongPlaying_x                         0x1403951B0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140396700

// messages
#define msg_spell_worn_off_x                                       0x140212EA0
#define msg_new_text_x                                             0x14020E650
#define __msgTokenTextParam_x                                      0x140205D30
#define msgTokenText_x                                             0x140205C40

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140333CE0
#define SpellManager__GetSpellByGroupAndRank_x                     0x140333C00

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x1406427E0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140438740

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403BCEB0
#define CCursorAttachment__IsOkToActivate_x                        0x1403C0170
#define CCursorAttachment__RemoveAttachment_x                      0x1403C0420
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405E29E0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405E2BD0
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405E2BE0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x14014EBD0
#define CFindItemWnd__Update_x                                     0x14014F570
#define CFindItemWnd__PickupSelectedItem_x                         0x140149030

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x140158730
#define LootFiltersManager__GetItemFilterData_x                    0x140159240
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140159AE0
#define LootFiltersManager__SetItemLootFilter_x                    0x140159D90

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x140491640

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x14032C630
#define CResolutionHandler__UpdateResolution_x                     0x14058EF60

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403B4430

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406959E0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406958D0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403DAE50
#define CGroupWnd__UpdateDisplay_x                                 0x1403DAA30

// ItemBase
#define ItemBase__IsLore_x                                         0x14064E140
#define ItemBase__IsLoreEquipped_x                                 0x14064E1D0

#define MultipleItemMoveManager__ProcessMove_x                     0x1402CB6B0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140257650
#define EQPlacedItemManager__GetItemByGuid_x                       0x1402575E0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140257620

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140326A70

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140126870
#define FactionManagerClient__HandleFactionMessage_x               0x140126C20
#define FactionManagerClient__GetFactionStanding_x                 0x140126040
#define FactionManagerClient__GetMaxFaction_x                      0x140126040
#define FactionManagerClient__GetMinFaction_x                      0x140125EF0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AEF00

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140132020

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401B3000
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401B2380
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401B2E20  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401B2DA0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x140339000

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140326A70

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x14021CA20

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x14059F600

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140086A10

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14034AB90

// AchievementManager
#define AchievementManager__Instance_x                             0x14008EBD0

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x140679AA0
#define FreeToPlayClient__RestrictionInfo_x                        0x140AD1660

// UdpConnection
#define UdpConnection__GetStats_x                                  0x140541B80

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x14082BE80
#define CGFScreenWnd__CGFScreenWnd_x                               0x140071380
#define CGFScreenWnd__CGFScreenWnd1_x                              0x140071510
#define CGFScreenWnd__dCGFScreenWnd_x                              0x1400716C0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
