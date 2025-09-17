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

#define __ClientDate                                               20250908u
#define __ExpectedVersionDate                                     "Sep  8 2025"
#define __ExpectedVersionTime                                     "21:35:18"
#define __ActualVersionDate_x                                      0x140963B00
#define __ActualVersionTime_x                                      0x140963AF0
#define __ActualVersionBuild_x                                     0x1408F95E0

// Memory Protection
#define __MemChecker0_x                                            0x1402C0A60
#define __MemChecker1_x                                            0x140588C20
#define __MemChecker4_x                                            0x14028E140
#define __EncryptPad0_x                                            0x140D33EA0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E6C8E0
#define instEQZoneInfo_x                                           0x140E6CAD4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x1402220E0
#define __gfMaxZoomCameraDistance_x                                0x1408FA858
#define __gfMaxCameraDistance_x                                    0x140AA2064
#define __CurrentSocial_x                                          0x140BEF950 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D2B720
#define g_eqCommandStates_x                                        0x140D2C790
#define __CommandList_x                                            0x140D2C9D0
#define __ScreenMode_x                                             0x140DB41F4
#define __gWorld_x                                                 0x140E64DA8
#define __gpbCommandEvent_x                                        0x140E65300
#define __ServerHost_x                                             0x140E654F8
#define __Guilds_x                                                 0x140E6B490
#define __MemCheckBitmask_x                                        0x140E6CE1F
#define __MemCheckActive_x                                         0x140E6E525
#define __MouseEventTime_x                                         0x140EE1E90
#define DI8__MouseState_x                                          0x140EE60C8
#define __heqmain_x                                                0x140EE8568
#define DI8__Mouse_x                                               0x140EE6018
#define __HWnd_x                                                   0x140EE60A0
#define __Mouse_x                                                  0x140EE5FD4
#define DI8__Keyboard_x                                            0x140EE5FF0
#define __LoginName_x                                              0x140EE8C4C
#define __CurrentMapLabel_x                                        0x140EFC760
#define __LabelCache_x                                             0x140EFD330
#define __ChatFilterDefs_x                                         0x140A3C7E0
#define Teleport_Table_Size_x                                      0x140E65390
#define Teleport_Table_x                                           0x140E65820

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E67820
#define pinstActiveBanker_x                                        0x140E65248
#define pinstActiveCorpse_x                                        0x140E65238
#define pinstActiveGMaster_x                                       0x140E65240
#define pinstActiveMerchant_x                                      0x140E65230
#define pinstAltAdvManager_x                                       0x140DB5028
#define pinstCEverQuest_x                                          0x140EE6010
#define pinstCamActor_x                                            0x140DB41E0
#define pinstCDBStr_x                                              0x140DB3DE0
#define pinstCDisplay_x                                            0x140E64D60
#define pinstControlledPlayer_x                                    0x140E652D8
#define pinstCResolutionHandler_x                                  0x140F0DB68
#define pinstCSidlManager_x                                        0x140F0E8D0
#define pinstCXWndManager_x                                        0x140F0E8C8
#define instDynamicZone_x                                          0x140E6B350 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E6B39E
#define instExpeditionName_x                                       0x140E6B3DE
#define pinstDZMember_x                                            0x140E6B468
#define pinstDZTimerInfo_x                                         0x140E6B470
#define pinstEqLogin_x                                             0x140EE8590
#define instTribute_x                                              0x140D26D60
#define pinstDeviceInputProxy_x                                    0x140E6C93C
#define pinstEQSoundManager_x                                      0x140DB53B0
#define pinstEQSpellStrings_x                                      0x140D98970
#define pinstSGraphicsEngine_x                                     0x140F0D8F8
#define pinstLocalPC_x                                             0x140E64D90
#define pinstLocalPlayer_x                                         0x140E65228
#define pinstCMercenaryClientManager_x                             0x140EE3778
#define pinstModelPlayer_x                                         0x140E65258
#define pinstRenderInterface_x                                     0x140F0D910
#define pinstSkillMgr_x                                            0x140EE5418
#define pinstSpawnManager_x                                        0x140EE3B40
#define pinstSpellManager_x                                        0x140EE5480
#define pinstStringTable_x                                         0x140E64D98
#define pinstSwitchManager_x                                       0x140E64CE0
#define pinstTarget_x                                              0x140E652D0
#define pinstTaskMember_x                                          0x140D26D50 // Part of g_taskManager
#define pinstTradeTarget_x                                         0x140E65250
#define instTributeActive_x                                        0x140D26D89
#define pinstViewActor_x                                           0x140DB41D8
#define pinstWorldData_x                                           0x140E653E8
#define pinstPlayerPath_x                                          0x140EE3B68
#define pinstTargetIndicator_x                                     0x140EE5530
#define EQObject_Top_x                                             0x140E65308

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140EF98C0
#define pinstCContainerMgr_x                                       0x140DB4210
#define pinstCContextMenuManager_x                                 0x140F0E5B0
#define pinstCInvSlotMgr_x                                         0x140DB41C8
#define pinstCItemDisplayManager_x                                 0x140EFC330
#define pinstCPopupWndManager_x                                    0x140EFCBC0
#define pinstCSpellDisplayMgr_x                                    0x140EFD210
#define pinstCTaskManager_x                                        0x140BEFC90
#define pinstEQSuiteTextureLoader_x                                0x140D3D5B0
#define pinstItemIconCache_x                                       0x140EF9C20
#define pinstLootFiltersManager_x                                  0x140DB3828
#define pinstGFViewListener_x                                      0x140F0DD88


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x14024BDC0
#define __CastRay_x                                                0x140244060
#define __CastRay2_x                                               0x140243D60
#define __compress_block_x                                         0x14053DFE0
#define __ConvertItemTags_x                                        0x1402444C0
#define __CleanItemTags_x                                          0x14008A7E0
#define __CreateCascadeMenuItems_x                                 0x14018E3E0
#define __decompress_block_x                                       0x140584430
#define __DoesFileExist_x                                          0x14058CAD0
#define __EQGetTime_x                                              0x1405891D0
#define __ExecuteCmd_x                                             0x1402198E0
#define __FixHeading_x                                             0x140643870
#define __FlushDxKeyboard_x                                        0x140344A10
#define __get_bearing_x                                            0x14024DFF0
#define __get_melee_range_x                                        0x14024E0E0
#define __GetAnimationCache_x                                      0x1403C5BB0
#define __GetGaugeValueFromEQ_x                                    0x1404FDB40
#define __GetLabelFromEQ_x                                         0x1404FF140
#define __GetXTargetType_x                                         0x140644B50   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x1406438F0
#define __HelpPath_x                                               0x140EE1D58   // Why?
#define __NewUIINI_x                                               0x14050AB70   // Why?
#define __ProcessDeviceEvents_x                                    0x14028E750
#define __ProcessGameEvents_x                                      0x140283290
#define __ProcessKeyboardEvents_x                                  0x140346160
#define __ProcessMouseEvents_x                                     0x140284970
#define __SaveColors_x                                             0x14019E410
#define __STMLToText_x                                             0x14059C570
#define __WndProc_x                                                0x1403431B0
#define CMemoryMappedFile__SetFile_x                               0x1407F04C0
#define DrawNetStatus_x                                            0x1402CF0B0
#define Util__FastTime_x                                           0x140588700
#define __eq_delete_x                                              0x1406BC508
#define __eq_new_x                                                 0x1406BC760
#define __CopyLayout_x                                             0x1402BCE60
#define __ThrottleFrameRate_x                                      0x140272937
#define __ThrottleFrameRateEnd_x                                   0x140272997

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140355C50
#define CAAWnd__Update_x                                           0x140355F50
#define CAAWnd__UpdateSelected_x                                   0x140357150

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400ACDA0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A5780
#define CAdvancedLootWnd__AddPlayerToList_x                        0x1408466C8
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AD6D0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401A9680
#define AltAdvManager__IsAbilityReady_x                            0x1401A9B10
#define AltAdvManager__GetAAById_x                                 0x1401A8F50
#define AltAdvManager__CanTrainAbility_x                           0x1401A8D40
#define AltAdvManager__CanSeeAbility_x                             0x1401A8A00

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D3800
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D4660
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D48B0
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400E90F0
#define CharacterZoneClient__CanUseItem_x                          0x1400E96B0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D5280
#define CharacterZoneClient__CastSpell_x                           0x1400D5320
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E4EF0
#define CharacterZoneClient__Cur_HP_x                              0x1400EADD0
#define CharacterZoneClient__Cur_Mana_x                            0x1400EAF90
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D8690
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F1600
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FFEA0  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D9B30
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E89F0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F31B0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F2090
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D9CB0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C9FE0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400CB9E0
#define CharacterZoneClient__GetHPRegen_x                          0x1400F27D0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400EAA40
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F3440
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D9D30
#define CharacterZoneClient__GetManaRegen_x                        0x1400F41C0
#define CharacterZoneClient__GetModCap_x                           0x1400FB650
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D9FC0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400DA190
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CEB70
#define CharacterZoneClient__HasSkill_x                            0x1400F7190
#define CharacterZoneClient__HitBySpell_x                          0x1400DAC20
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DE590
#define CharacterZoneClient__MakeMeVisible_x                       0x1400FB130
#define CharacterZoneClient__Max_Endurance_x                       0x1402EAEA0  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400FB480
#define CharacterZoneClient__Max_Mana_x                            0x1402EB0C0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400FB8E0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E1A40
#define CharacterZoneClient__SpellDuration_x                       0x1400E2770
#define CharacterZoneClient__TotalEffect_x                         0x1400E3AD0
#define CharacterZoneClient__UseSkill_x                            0x140100E20


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140374720

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14037EAA0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14037A920
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14037E520

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140381200

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AC14A0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403A4050
#define CChatWindowManager__InitContextMenu_x                      0x1403A41E0
#define CChatWindowManager__FreeChatWindow_x                       0x1403A30B0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403AC140
#define CChatWindowManager__CreateChatWindow_x                     0x1403A2AE0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140109380

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403AD190
#define CChatWindow__Clear_x                                       0x1403AE150
#define CChatWindow__WndNotification_x                             0x1403AF340
#define CChatWindow__AddHistory_x                                  0x1403ADC50

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405C9C50
#define CContextMenu__RemoveMenuItem_x                             0x1405CA030
#define CContextMenu__RemoveAllMenuItems_x                         0x1405CA000
#define CContextMenu__CheckMenuItem_x                              0x1405C9E70
#define CContextMenu__SetMenuItem_x                                0x1405CA050
#define CContextMenu__AddSeparator_x                               0x1405C9DB0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405BBB40
#define CContextMenuManager__RemoveMenu_x                          0x1405BC110
#define CContextMenuManager__PopupMenu_x                           0x1405BBE50
#define CContextMenuManager__Flush_x                               0x1405BBBC0
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403BD760

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x140696520
#define CChatService__GetFriendName_x                              0x140696530

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405ACAA0
#define CComboWnd__Draw_x                                          0x1405ACB90
#define CComboWnd__GetCurChoice_x                                  0x1405ACE60  // unused
#define CComboWnd__GetListRect_x                                   0x1405ACF00
#define CComboWnd__InsertChoice_x                                  0x1405AD220
#define CComboWnd__SetColors_x                                     0x1405AD5B0
#define CComboWnd__SetChoice_x                                     0x1405AD570
#define CComboWnd__GetItemCount_x                                  0x1405ACEF0
#define CComboWnd__GetCurChoiceText_x                              0x1405ACEA0  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405ACE30
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405AD2E0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403BB490
#define CContainerWnd__SetContainer_x                              0x1404138F0
#define CContainerWnd__vftable_x                                   0x1409D7FC0

// CDisplay
#define CDisplay__cameraType_x                                     0x140DB3F9C
#define CDisplay__ZoneMainUI_x                                     0x1405E3C30
#define CDisplay__PreZoneMainUI_x                                  0x14019B330
#define CDisplay__CleanGameUI_x                                    0x14018D4A0
#define CDisplay__GetClickedActor_x                                0x140191660
#define CDisplay__GetUserDefinedColor_x                            0x1401922D0
#define CDisplay__InitCharSelectUI_x                               0x140192580
#define CDisplay__ReloadUI_x                                       0x14019D630
#define CDisplay__RestartUI_x                                      0x1401FE5A0
#define CDisplay__WriteTextHD2_x                                   0x1401A4620
#define CDisplay__TrueDistance_x                                   0x1401A42D0
#define CDisplay__SetViewActor_x                                   0x1401A0B40
#define CDisplay__GetFloorHeight_x                                 0x1401918C0
#define CDisplay__ToggleScreenshotMode_x                           0x1401A3DC0
#define CDisplay__RealRender_World_x                               0x14019CA00

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405EDE60
#define CEditWnd__DrawCaret_x                                      0x1405DF980  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405DFE10
#define CEditWnd__GetCaretPt_x                                     0x1405E0090  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405E00D0
#define CEditWnd__GetDisplayString_x                               0x1405E0330
#define CEditWnd__GetHorzOffset_x                                  0x1405E0570
#define CEditWnd__GetLineForPrintableChar_x                        0x1405E06B0
#define CEditWnd__GetSelStartPt_x                                  0x1405E0990  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405E07E0
#define CEditWnd__PointFromPrintableChar_x                         0x1405E1540
#define CEditWnd__ReplaceSelection_x                               0x1405E18E0
#define CEditWnd__SelectableCharFromPoint_x                        0x1405E1D80
#define CEditWnd__SetEditable_x                                    0x1405E2010
#define CEditWnd__SetWindowText_x                                  0x1405E2040

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140273A50
#define CEverQuest__ClickedPlayer_x                                0x140267AD0
#define CEverQuest__CreateTargetIndicator_x                        0x140268390
#define CEverQuest__DoTellWindow_x                                 0x140109090 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140109960 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140275440
#define CEverQuest__dsp_chat_x                                     0x140108AD0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402A0660
#define CEverQuest__Emote_x                                        0x140275E30
#define CEverQuest__GetBodyTypeDesc_x                              0x140276C10
#define CEverQuest__GetClassDesc_x                                 0x140276C70
#define CEverQuest__GetClassThreeLetterCode_x                      0x140277040
#define CEverQuest__GetDeityDesc_x                                 0x1402772F0
#define CEverQuest__GetLangDesc_x                                  0x140277720
#define CEverQuest__GetRaceDesc_x                                  0x140277AC0
#define CEverQuest__InterpretCmd_x                                 0x140279450
#define CEverQuest__LeftClickedOnPlayer_x                          0x14028E7C0
#define CEverQuest__LMouseUp_x                                     0x14027AEC0
#define CEverQuest__RightClickedOnPlayer_x                         0x14028BE40
#define CEverQuest__RMouseUp_x                                     0x140285500
#define CEverQuest__SetGameState_x                                 0x140291730
#define CEverQuest__UPCNotificationFlush_x                         0x1402970A0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14027AB20
#define CEverQuest__ReportSuccessfulHeal_x                         0x1402868D0
#define CEverQuest__ReportSuccessfulHit_x                          0x1402876F0

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403D0B20

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C3860
#define CGuild__GetGuildName_x                                     0x1400C38A0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403F3FB0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402B2800
#define CHotButton__SetCheck_x                                     0x1402B2AD0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x14040C600
#define CInvSlotMgr__MoveItem_x                                    0x14040C7E0
#define CInvSlotMgr__SelectSlot_x                                  0x14040E210

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x140409800
#define CInvSlot__SliderComplete_x                                 0x14040AD50
#define CInvSlot__GetItemBase_x                                    0x1404051A0
#define CInvSlot__UpdateItem_x                                     0x14040B200

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x14040F5A0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140430AF0
#define CItemDisplayWnd__UpdateStrings_x                           0x140433700
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x14042D2C0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x14042EC30
#define CItemDisplayWnd__RequestConvertItem_x                      0x14042FF00

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404FA5B0
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404FC340

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140537340

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140429990

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140154390

// CLabel
#define CLabel__UpdateText_x                                       0x14043AAE0

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405B03F0
#define CListWnd__dCListWnd_x                                      0x1405B0830
#define CListWnd__vftable_x                                        0x140ABF5F0
#define CListWnd__AddColumn_x                                      0x1405B0ED0
#define CListWnd__AddColumn1_x                                     0x1405B0F70
#define CListWnd__AddLine_x                                        0x1405B10D0
#define CListWnd__AddString_x                                      0x1405B1660
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405B1BD0
#define CListWnd__CalculateVSBRange_x                              0x1405B1EB0
#define CListWnd__ClearSel_x                                       0x1405B2060
#define CListWnd__ClearAllSel_x                                    0x1405B2000
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405B20C0
#define CListWnd__Compare_x                                        0x1405B2280
#define CListWnd__Draw_x                                           0x1405B2750
#define CListWnd__DrawColumnSeparators_x                           0x1405B32F0
#define CListWnd__DrawHeader_x                                     0x1405B33B0
#define CListWnd__DrawItem_x                                       0x1405B3A80
#define CListWnd__DrawLine_x                                       0x1405B43F0
#define CListWnd__DrawSeparator_x                                  0x1405B48B0
#define CListWnd__EnableLine_x                                     0x1405B4CD0
#define CListWnd__EnsureVisible_x                                  0x1405B4D30
#define CListWnd__ExtendSel_x                                      0x1405B4E30
#define CListWnd__GetColumnMinWidth_x                              0x1405B51C0
#define CListWnd__GetColumnWidth_x                                 0x1405B5240
#define CListWnd__GetCurSel_x                                      0x1405B5340
#define CListWnd__GetItemData_x                                    0x1405B56C0
#define CListWnd__GetItemHeight_x                                  0x1405B5700
#define CListWnd__GetItemRect_x                                    0x1405B5920
#define CListWnd__GetItemText_x                                    0x1405B5BC0
#define CListWnd__GetSelList_x                                     0x1405B5E10
#define CListWnd__GetSeparatorRect_x                               0x1405B6000
#define CListWnd__InsertLine_x                                     0x1405B7460
#define CListWnd__RemoveLine_x                                     0x1405B7AD0
#define CListWnd__SetColors_x                                      0x1405B7E90
#define CListWnd__SetColumnJustification_x                         0x1405B7EB0
#define CListWnd__SetColumnLabel_x                                 0x1405B7F30
#define CListWnd__SetColumnWidth_x                                 0x1405B80D0
#define CListWnd__SetCurSel_x                                      0x1405B81A0
#define CListWnd__SetItemColor_x                                   0x1405B8410
#define CListWnd__SetItemData_x                                    0x1405B84B0
#define CListWnd__SetItemText_x                                    0x1405B86F0
#define CListWnd__Sort_x                                           0x1405B8B00
#define CListWnd__ToggleSel_x                                      0x1405B8C70
#define CListWnd__SetColumnsSizable_x                              0x1405B8120
#define CListWnd__SetItemWnd_x                                     0x1405B8820
#define CListWnd__GetItemWnd_x                                     0x1405B5DA0
#define CListWnd__SetItemIcon_x                                    0x1405B84F0
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405B19A0
#define CListWnd__SetVScrollPos_x                                  0x1405B8A60

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x14044DDE0

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A25210
#define MapViewMap__Clear_x                                        0x14044F960
#define MapViewMap__SetZoom_x                                      0x140455FD0
#define MapViewMap__HandleLButtonDown_x                            0x140452AF0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140477720  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x14047DD70
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x14047E510
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140481D50
#define CMerchantWnd__SelectBuySellSlot_x                          0x140481090
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140485FF0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x1406716E0
#define CPacketScrambler__hton_x                                   0x1406716D0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405D9240
#define CSidlManagerBase__FindAnimation1_x                         0x1405D9180
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405D9870
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405D9620
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405D8580
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405D8510
#define CSidlManagerBase__CreateXWnd_x                             0x1405D7B70

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404ED5C0
#define CSidlManager__CreateXWnd_x                                 0x1404ED780

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14059E060
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14059E170
#define CSidlScreenWnd__ConvertToRes_x                             0x1405E83A0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14059E2F0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14059D790
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14059D860
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14059DA70
#define CSidlScreenWnd__DrawSidlPiece_x                            0x14059E9D0
#define CSidlScreenWnd__EnableIniStorage_x                         0x14059EC00
#define CSidlScreenWnd__GetChildItem_x                             0x14059EDA0
#define CSidlScreenWnd__GetSidlPiece_x                             0x14059EFF0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405A9070 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x14059F360
#define CSidlScreenWnd__LoadIniInfo_x                              0x14059F6D0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x14059FF80
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405A0980
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F0DC28
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405A1000
#define CSidlScreenWnd__StoreIniVis_x                              0x1405A17E0
#define CSidlScreenWnd__vftable_x                                  0x140ABE878
#define CSidlScreenWnd__WndNotification_x                          0x1405A1830

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14032D920 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14032DDC0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14032DCF0
#define CSkillMgr__IsActivatedSkill_x                              0x14032E170
#define CSkillMgr__IsCombatSkill_x                                 0x14032E1B0
#define CSkillMgr__GetSkillTimerDuration_x                         0x14032E0E0
#define CSkillMgr__GetSkillLastUsed_x                              0x14032DD40

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405B95F0
#define CSliderWnd__SetValue_x                                     0x1405B9E00
#define CSliderWnd__SetNumTicks_x                                  0x1405B9C80

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404F3D00

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405BE590
#define CStmlWnd__CalculateHSBRange_x                              0x1405A8A20
#define CStmlWnd__CalculateVSBRange_x                              0x1405BF430
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405BFF30
#define CStmlWnd__ForceParseNow_x                                  0x1405BFFD0
#define CStmlWnd__GetVisibleText_x                                 0x1405C06A0
#define CStmlWnd__MakeStmlColorTag_x                               0x1405C2400
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405C2440
#define CStmlWnd__SetSTMLText_x                                    0x1405C9400
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405C95B0
#define CStmlWnd__UpdateHistoryString_x                            0x1405C9940

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405BA1D0
#define CTabWnd__DrawCurrentPage_x                                 0x1405BA270
#define CTabWnd__DrawTab_x                                         0x1405BA640
#define CTabWnd__GetTabRect_x                                      0x1405BACB0
#define CTabWnd__InsertPage_x                                      0x1405BAF80
#define CTabWnd__RemovePage_x                                      0x1405BB210
#define CTabWnd__SetPage_x                                         0x1405BB370
#define CTabWnd__UpdatePage_x                                      0x1405BB670

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405E24A0
#define CPageWnd__SetTabText_x                                     0x1405E2510

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BCE30  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BD240


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405D0C30
#define CTextureFont__DrawWrappedText1_x                           0x1405D0B40
#define CTextureFont__DrawWrappedText2_x                           0x1405D0D60
#define CTextureFont__GetTextExtent_x                              0x1405D1110
#define CTextureFont__GetHeight_x                                  0x1405D10D0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405E6B00

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x14059AC60

// CXStr
#define CXStr__gFreeLists_x                                        0x140D3CF20
#define CXStr__gCXStrAccess_x                                      0x140F0D788

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405A40A0
#define CXWnd__ClrFocus_x                                          0x1405A4390
#define CXWnd__Destroy_x                                           0x1405A4510
#define CXWnd__DoAllDrawing_x                                      0x1405A4610
#define CXWnd__DrawColoredRect_x                                   0x1405A4DE0
#define CXWnd__DrawTooltip_x                                       0x1405A6450
#define CXWnd__DrawTooltipAtPoint_x                                0x1405A6500
#define CXWnd__GetChildItem_x                                      0x1405A6E00
#define CXWnd__GetChildWndAt_x                                     0x1405A6EC0
#define CXWnd__GetClientRect_x                                     0x1405A7170
#define CXWnd__GetClientClipRect_x                                 0x1405A7020
#define CXWnd__GetRelativeRect_x                                   0x1405A8B60
#define CXWnd__GetScreenClipRect_x                                 0x1405A8C70
#define CXWnd__GetScreenRect_x                                     0x1405A8DF0
#define CXWnd__GetTooltipRect_x                                    0x1405A8F70
#define CXWnd__IsActive_x                                          0x1405A9530
#define CXWnd__IsDescendantOf_x                                    0x1405A9560
#define CXWnd__IsReallyVisible_x                                   0x1405A95D0
#define CXWnd__IsType_x                                            0x1405A9620
#define CXWnd__Minimize_x                                          0x1405A9720
#define CXWnd__ProcessTransition_x                                 0x1405AA5F0
#define CXWnd__Resize_x                                            0x1405AA700
#define CXWnd__Right_x                                             0x1405AA7A0
#define CXWnd__SetFocus_x                                          0x1405AAB60
#define CXWnd__SetFont_x                                           0x1405AABB0
#define CXWnd__SetKeyTooltip_x                                     0x1405AACB0
#define CXWnd__SetMouseOver_x                                      0x1405AADE0
#define CXWnd__SetParent_x                                         0x1405AAE60
#define CXWnd__StartFade_x                                         0x1405AB2A0
#define CXWnd__vftable_x                                           0x140ABEE50
#define CXWnd__CXWnd_x                                             0x1405A2C50
#define CXWnd__dCXWnd_x                                            0x1405A3590

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405ED5E0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405CB200
#define CXWndManager__DrawCursor_x                                 0x1405CB4E0
#define CXWndManager__DrawWindows_x                                0x1405CB740
#define CXWndManager__GetKeyboardFlags_x                           0x1405CBD90
#define CXWndManager__HandleKeyboardMsg_x                          0x1405CBDD0
#define CXWndManager__RemoveWnd_x                                  0x1405CF2F0

// CDBStr
#define CDBStr__GetString_x                                        0x14018B660

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x14067B530

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D1300
#define CCharacterListWnd__EnterWorld_x                            0x1400D0310
#define CCharacterListWnd__Quit_x                                  0x1400D12E0
#define CCharacterListWnd__UpdateList_x                            0x1400D2160

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x1406498A0
#define ItemBase__CreateItemTagString_x                            0x14064A2F0
#define ItemBase__GetImageNum_x                                    0x14064C870
#define ItemBase__GetItemValue_x                                   0x14064E3A0
#define ItemBase__IsEmpty_x                                        0x14064FFB0
#define ItemBase__IsKeyRingItem_x                                  0x1406506B0
#define ItemBase__ValueSellMerchant_x                              0x1406548D0
#define ItemClient__CanDrop_x                                      0x1402B50E0
#define ItemClient__CanGoInBag_x                                   0x1402B5210
#define ItemClient__CreateItemClient_x                             0x1402B5490
#define ItemClient__dItemClient_x                                  0x1402B4F50

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401AB030
#define EQ_LoadingS__Array_x                                       0x140D29230

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140660670
#define PcBase__GetCombatAbility_x                                 0x140660D60
#define PcBase__GetCombatAbilityTimer_x                            0x140660E00
#define PcBase__GetItemContainedRealEstateIds_x                    0x1406615A0
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x1406620E0
#define PcClient__AlertInventoryChanged_x                          0x1402D72E0
#define PcClient__GetConLevel_x                                    0x1402D78F0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402DA070
#define PcClient__HasLoreItem_x                                    0x1402DB120
#define PcZoneClient__GetItemRecastTimer_x                         0x1402E81F0
#define PcZoneClient__RemoveMyAffect_x                             0x1402EBFE0

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x14021E020  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x14021E1D0  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x14021E330  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x14021E270  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x140258EB0  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140185E40

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140636510
#define PlayerBase__CanSee1_x                                      0x1406365E0
#define PlayerBase__GetVisibilityLineSegment_x                     0x140636AC0
#define PlayerBase__HasProperty_x                                  0x140636C90
#define PlayerBase__IsTargetable_x                                 0x140636D50
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402F9B70
#define PlayerClient__GetPcClient_x                                0x1402FC6A0
#define PlayerClient__PlayerClient_x                               0x1402F1EC0
#define PlayerClient__SetNameSpriteState_x                         0x1402FFDD0
#define PlayerClient__SetNameSpriteTint_x                          0x140300D90
#define PlayerZoneClient__ChangeHeight_x                           0x14030F7C0
#define PlayerZoneClient__DoAttack_x                               0x1403104D0
#define PlayerZoneClient__GetLevel_x                               0x140313C10
#define PlayerZoneClient__IsValidTeleport_x                        0x14025BC40
#define PlayerZoneClient__LegalPlayerRace_x                        0x140199BB0

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x140308CC0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x140308D70  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x140308E70
#define PlayerManagerClient__CreatePlayer_x                        0x140308790
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x1406360D0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402BA360
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402B9F60
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402B9FD0
#define KeypressHandler__ClearCommandStateArray_x                  0x1402BA2F0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402BA480
#define KeypressHandler__HandleKeyUp_x                             0x1402BA5A0
#define KeypressHandler__SaveKeymapping_x                          0x1402BA200  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140679050  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x140672E20

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402E0FD0  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402E6320
#define PcZoneClient__GetPcSkillLimit_x                            0x1402E8980
#define PcZoneClient__RemovePetEffect_x                            0x1402EC2C0
#define PcZoneClient__HasAlternateAbility_x                        0x1402E9560
#define PcZoneClient__CanEquipItem_x                               0x1402E4630
#define PcZoneClient__GetItemByID_x                                0x1402E7240
#define PcZoneClient__RemoveBuffEffect_x                           0x1402EBE60
#define PcZoneClient__BandolierSwap_x                              0x1402E3690

// Doors
#define EQSwitch__UseSwitch_x                                      0x140260770

// IconCache
#define IconCache__GetIcon_x                                       0x1403C5BE0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403BA240
#define CContainerMgr__CloseContainer_x                            0x1403B9B80
#define CContainerMgr__OpenExperimentContainer_x                   0x1403BA5C0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404B1760

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402ACB00

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140441DE0
#define CLootWnd__RequestLootSlot_x                                0x140442E10

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401DA5D0
#define EQ_Spell__SpellAffects_x                                   0x1401DB8B0
#define EQ_Spell__SpellAffectBase_x                                0x1401DB810
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400DA320
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400DA2D0
#define EQ_Spell__IsSPAStacking_x                                  0x1401DB4E0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401DB090
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401DA960

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C23A0

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x14050E380
#define CTargetWnd__RefreshTargetBuffs_x                           0x14050DA90
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x14050D290

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x140515A20  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x1401827F0
#define CTaskManager__GetTaskStatus_x                              0x140182900
#define CTaskManager__GetElementDescription_x                      0x140182480

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401D88F0
#define EqSoundManager__PlayScriptMp3_x                            0x1401D7730
#define EqSoundManager__SoundAssistPlay_x                          0x140332F60  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x1403332A0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405AC030
#define CTextureAnimation__SetCurCell_x                            0x1405AC340

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402AAD00

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x140693BF0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x140693C70
#define CharacterBase__IsExpansionFlag_x                           0x1401FDC10

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140394C90
#define CCastSpellWnd__IsBardSongPlaying_x                         0x1403956B0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140396C00

// messages
#define msg_spell_worn_off_x                                       0x140214840
#define msg_new_text_x                                             0x14020FFF0
#define __msgTokenTextParam_x                                      0x1402076B0
#define msgTokenText_x                                             0x1402075C0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140334B90
#define SpellManager__GetSpellByGroupAndRank_x                     0x140334AB0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140644F30

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x14043B230

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403BEF70
#define CCursorAttachment__IsOkToActivate_x                        0x1403C2230
#define CCursorAttachment__RemoveAttachment_x                      0x1403C24E0
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405E4FA0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405E5190
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405E51A0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x14014F0F0
#define CFindItemWnd__Update_x                                     0x14014FA90
#define CFindItemWnd__PickupSelectedItem_x                         0x140149550

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x1401590B0
#define LootFiltersManager__GetItemFilterData_x                    0x140159BC0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14015A460
#define LootFiltersManager__SetItemLootFilter_x                    0x14015A710

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x1404941B0

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x14032D4E0
#define CResolutionHandler__UpdateResolution_x                     0x1405917E0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403B6520

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x140697FF0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x140697EE0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403DCEF0
#define CGroupWnd__UpdateDisplay_x                                 0x1403DCAD0

// ItemBase
#define ItemBase__IsLore_x                                         0x1406507E0
#define ItemBase__IsLoreEquipped_x                                 0x140650870

#define MultipleItemMoveManager__ProcessMove_x                     0x1402CD1A0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140259010
#define EQPlacedItemManager__GetItemByGuid_x                       0x140258FA0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140258FE0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140327910

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140126D40
#define FactionManagerClient__HandleFactionMessage_x               0x1401270F0
#define FactionManagerClient__GetFactionStanding_x                 0x140126510
#define FactionManagerClient__GetMaxFaction_x                      0x140126510
#define FactionManagerClient__GetMinFaction_x                      0x1401263C0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AF3B0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x1401324F0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401B3A00
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401B2D80
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401B3820  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401B37A0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x140339EB0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140327910

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x14021E3C0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405A1E20

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140086EA0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14034B7A0

// AchievementManager
#define AchievementManager__Instance_x                             0x14008F060

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x14067C0B0
#define FreeToPlayClient__RestrictionInfo_x                        0x140AD36B0

// UdpConnection
#define UdpConnection__GetStats_x                                  0x140544400

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x14082DE80
#define CGFScreenWnd__CGFScreenWnd_x                               0x140071530
#define CGFScreenWnd__CGFScreenWnd1_x                              0x1400716C0
#define CGFScreenWnd__dCGFScreenWnd_x                              0x140071870

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
