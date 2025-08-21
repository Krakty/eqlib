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

#define __ClientDate                                               20250814u
#define __ExpectedVersionDate                                     "Aug 14 2025"
#define __ExpectedVersionTime                                     "13:21:12"
#define __ActualVersionDate_x                                      0x1409609E0
#define __ActualVersionTime_x                                      0x1409609D0
#define __ActualVersionBuild_x                                     0x1408F6490

// Memory Protection
#define __MemChecker0_x                                            0x1402BEC00
#define __MemChecker1_x                                            0x140585B70
#define __MemChecker4_x                                            0x14028C320
#define __EncryptPad0_x                                            0x140D30EA0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E698E0
#define instEQZoneInfo_x                                           0x140E69AD4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x140220460
#define __gfMaxZoomCameraDistance_x                                0x1408F7708
#define __gfMaxCameraDistance_x                                    0x140A9EDF4
#define __CurrentSocial_x                                          0x140BEC950 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D28720
#define g_eqCommandStates_x                                        0x140D29790
#define __CommandList_x                                            0x140D299D0
#define __ScreenMode_x                                             0x140DB11EC
#define __gWorld_x                                                 0x140E61DA8
#define __gpbCommandEvent_x                                        0x140E62300
#define __ServerHost_x                                             0x140E624F8
#define __Guilds_x                                                 0x140E68490
#define __MemCheckBitmask_x                                        0x140E69E1F
#define __MemCheckActive_x                                         0x140E6B525
#define __MouseEventTime_x                                         0x140EDEE90
#define DI8__MouseState_x                                          0x140EE30C8
#define __heqmain_x                                                0x140EE5568
#define DI8__Mouse_x                                               0x140EE3018
#define __HWnd_x                                                   0x140EE30A0
#define __Mouse_x                                                  0x140EE2FD4
#define DI8__Keyboard_x                                            0x140EE2FF0
#define __LoginName_x                                              0x140EE5C4C
#define __CurrentMapLabel_x                                        0x140EF9760
#define __LabelCache_x                                             0x140EFA330
#define __ChatFilterDefs_x                                         0x140A395F0
#define Teleport_Table_Size_x                                      0x140E62308
#define Teleport_Table_x                                           0x140E62820

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E64820
#define pinstActiveBanker_x                                        0x140E62248
#define pinstActiveCorpse_x                                        0x140E62238
#define pinstActiveGMaster_x                                       0x140E62240
#define pinstActiveMerchant_x                                      0x140E62230
#define pinstAltAdvManager_x                                       0x140DB2028
#define pinstCEverQuest_x                                          0x140EE3010
#define pinstCamActor_x                                            0x140DB11D8
#define pinstCDBStr_x                                              0x140DB0DE0
#define pinstCDisplay_x                                            0x140E61D60
#define pinstControlledPlayer_x                                    0x140E622D8
#define pinstCResolutionHandler_x                                  0x140F0AB68
#define pinstCSidlManager_x                                        0x140F0B8D0
#define pinstCXWndManager_x                                        0x140F0B8C8
#define instDynamicZone_x                                          0x140E68350 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E6839E
#define instExpeditionName_x                                       0x140E683DE
#define pinstDZMember_x                                            0x140E68468
#define pinstDZTimerInfo_x                                         0x140E68470
#define pinstEqLogin_x                                             0x140EE5590
#define instTribute_x                                              0x140D23D60
#define pinstDeviceInputProxy_x                                    0x140E6993C
#define pinstEQSoundManager_x                                      0x140DB23B0
#define pinstEQSpellStrings_x                                      0x140D95970
#define pinstSGraphicsEngine_x                                     0x140F0A8F8
#define pinstLocalPC_x                                             0x140E61D90
#define pinstLocalPlayer_x                                         0x140E62228
#define pinstCMercenaryClientManager_x                             0x140EE0778
#define pinstModelPlayer_x                                         0x140E62258
#define pinstRenderInterface_x                                     0x140F0A910
#define pinstSkillMgr_x                                            0x140EE2418
#define pinstSpawnManager_x                                        0x140EE0B40
#define pinstSpellManager_x                                        0x140EE2480
#define pinstStringTable_x                                         0x140E61D98
#define pinstSwitchManager_x                                       0x140E61CE0
#define pinstTarget_x                                              0x140E622D0
#define pinstTaskMember_x                                          0x140D23D50 // Part of g_taskManager
#define pinstTradeTarget_x                                         0x140E62250
#define instTributeActive_x                                        0x140D23D89
#define pinstViewActor_x                                           0x140DB11D0
#define pinstWorldData_x                                           0x140E62808
#define pinstPlayerPath_x                                          0x140EE0B68
#define pinstTargetIndicator_x                                     0x140EE2530
#define EQObject_Top_x                                             0x140E623E0

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140EF68C0
#define pinstCContainerMgr_x                                       0x140DB1208
#define pinstCContextMenuManager_x                                 0x140F0B5B0
#define pinstCInvSlotMgr_x                                         0x140DB11C8
#define pinstCItemDisplayManager_x                                 0x140EF9330
#define pinstCPopupWndManager_x                                    0x140EF9BC0
#define pinstCSpellDisplayMgr_x                                    0x140EFA210
#define pinstCTaskManager_x                                        0x140BECC90
#define pinstEQSuiteTextureLoader_x                                0x140D3A5B0
#define pinstItemIconCache_x                                       0x140EF6C20
#define pinstLootFiltersManager_x                                  0x140DB0828
#define pinstGFViewListener_x                                      0x140F0AD88


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x14024A130
#define __CastRay_x                                                0x1402423D0
#define __CastRay2_x                                               0x1402420D0
#define __compress_block_x                                         0x14053AF30
#define __ConvertItemTags_x                                        0x140242830
#define __CleanItemTags_x                                          0x14008A350
#define __CreateCascadeMenuItems_x                                 0x14018D830
#define __decompress_block_x                                       0x140581380
#define __DoesFileExist_x                                          0x140589A20
#define __EQGetTime_x                                              0x140586120
#define __ExecuteCmd_x                                             0x140217C60
#define __FixHeading_x                                             0x1406404A0
#define __FlushDxKeyboard_x                                        0x140343780
#define __get_bearing_x                                            0x14024C360
#define __get_melee_range_x                                        0x14024C450
#define __GetAnimationCache_x                                      0x1403C3440
#define __GetGaugeValueFromEQ_x                                    0x1404FA900
#define __GetLabelFromEQ_x                                         0x1404FBEF0
#define __GetXTargetType_x                                         0x140641780   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140640520
#define __HelpPath_x                                               0x140EDED58   // Why?
#define __NewUIINI_x                                               0x140507940   // Why?
#define __ProcessDeviceEvents_x                                    0x14028C930
#define __ProcessGameEvents_x                                      0x1402814B0
#define __ProcessKeyboardEvents_x                                  0x140344ED0
#define __ProcessMouseEvents_x                                     0x140282B90
#define __SaveColors_x                                             0x14019D860
#define __STMLToText_x                                             0x1405994C0
#define __WndProc_x                                                0x140341F70
#define CMemoryMappedFile__SetFile_x                               0x1407ED4C0
#define DrawNetStatus_x                                            0x1402CD250
#define Util__FastTime_x                                           0x140585650
#define __eq_delete_x                                              0x1406B9578
#define __eq_new_x                                                 0x1406B97D0
#define __CopyLayout_x                                             0x1402BB000
#define __ThrottleFrameRate_x                                      0x140270B61
#define __ThrottleFrameRateEnd_x                                   0x140270BC1

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140355240
#define CAAWnd__Update_x                                           0x140355540
#define CAAWnd__UpdateSelected_x                                   0x140356590

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AC890
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A5270
#define CAdvancedLootWnd__AddPlayerToList_x                        0x1408436B0
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AD1C0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401A8A20
#define AltAdvManager__IsAbilityReady_x                            0x1401A8EB0
#define AltAdvManager__GetAAById_x                                 0x1401A82F0
#define AltAdvManager__CanTrainAbility_x                           0x1401A80E0
#define AltAdvManager__CanSeeAbility_x                             0x1401A7DA0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D32B0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D4110
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D4360
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400E8BA0
#define CharacterZoneClient__CanUseItem_x                          0x1400E9160
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D4D30
#define CharacterZoneClient__CastSpell_x                           0x1400D4DD0
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E49A0
#define CharacterZoneClient__Cur_HP_x                              0x1400EA880
#define CharacterZoneClient__Cur_Mana_x                            0x1400EAA40
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D8140
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F10B0
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FF950  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D95E0
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E84A0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F2C60
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F1B40
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D9760
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C9A90
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400CB490
#define CharacterZoneClient__GetHPRegen_x                          0x1400F2280
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400EA4F0
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F2EF0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D97E0
#define CharacterZoneClient__GetManaRegen_x                        0x1400F3C70
#define CharacterZoneClient__GetModCap_x                           0x1400FB100
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D9A70
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D9C40
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CE620
#define CharacterZoneClient__HasSkill_x                            0x1400F6C40
#define CharacterZoneClient__HitBySpell_x                          0x1400DA6D0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DE040
#define CharacterZoneClient__MakeMeVisible_x                       0x1400FABE0
#define CharacterZoneClient__Max_Endurance_x                       0x1402E9AA0  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400FAF30
#define CharacterZoneClient__Max_Mana_x                            0x1402E9CC0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400FB390
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E14F0
#define CharacterZoneClient__SpellDuration_x                       0x1400E2220
#define CharacterZoneClient__TotalEffect_x                         0x1400E3580
#define CharacterZoneClient__UseSkill_x                            0x1401008D0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140373B60

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14037DEE0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140379D60
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14037D960

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140380650

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140ABE230

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403A34C0
#define CChatWindowManager__InitContextMenu_x                      0x1403A3650
#define CChatWindowManager__FreeChatWindow_x                       0x1403A2520
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403AB5B0
#define CChatWindowManager__CreateChatWindow_x                     0x1403A1F50

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140108E30

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403AC600
#define CChatWindow__Clear_x                                       0x1403AD5C0
#define CChatWindow__WndNotification_x                             0x1403AE7B0
#define CChatWindow__AddHistory_x                                  0x1403AD0C0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405C6D00
#define CContextMenu__RemoveMenuItem_x                             0x1405C70F0
#define CContextMenu__RemoveAllMenuItems_x                         0x1405C70C0
#define CContextMenu__CheckMenuItem_x                              0x1405C6F30
#define CContextMenu__SetMenuItem_x                                0x1405C7110
#define CContextMenu__AddSeparator_x                               0x1405C6E70

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405B8BC0
#define CContextMenuManager__RemoveMenu_x                          0x1405B91A0
#define CContextMenuManager__PopupMenu_x                           0x1405B8EE0
#define CContextMenuManager__Flush_x                               0x1405B8C40
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403BAFD0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x140693590
#define CChatService__GetFriendName_x                              0x1406935A0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405A9AC0
#define CComboWnd__Draw_x                                          0x1405A9BC0
#define CComboWnd__GetCurChoice_x                                  0x1405A9EA0  // unused
#define CComboWnd__GetListRect_x                                   0x1405A9F40
#define CComboWnd__InsertChoice_x                                  0x1405AA280
#define CComboWnd__SetColors_x                                     0x1405AA610
#define CComboWnd__SetChoice_x                                     0x1405AA5D0
#define CComboWnd__GetItemCount_x                                  0x1405A9F30
#define CComboWnd__GetCurChoiceText_x                              0x1405A9EE0  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405A9E70
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405AA340

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403B8CF0
#define CContainerWnd__SetContainer_x                              0x140410710
#define CContainerWnd__vftable_x                                   0x1409D4E60

// CDisplay
#define CDisplay__cameraType_x                                     0x140DB0F94
#define CDisplay__ZoneMainUI_x                                     0x1405E0E40
#define CDisplay__PreZoneMainUI_x                                  0x14019A780
#define CDisplay__CleanGameUI_x                                    0x14018C8F0
#define CDisplay__GetClickedActor_x                                0x140190AB0
#define CDisplay__GetUserDefinedColor_x                            0x140191720
#define CDisplay__InitCharSelectUI_x                               0x1401919D0
#define CDisplay__ReloadUI_x                                       0x14019CA80
#define CDisplay__RestartUI_x                                      0x1401FD4A0
#define CDisplay__WriteTextHD2_x                                   0x1401A3A60
#define CDisplay__TrueDistance_x                                   0x1401A3710
#define CDisplay__SetViewActor_x                                   0x14019FF80
#define CDisplay__GetFloorHeight_x                                 0x140190D10
#define CDisplay__ToggleScreenshotMode_x                           0x1401A3200
#define CDisplay__RealRender_World_x                               0x14019BE50

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405EB070
#define CEditWnd__DrawCaret_x                                      0x1405DCB40  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405DD000
#define CEditWnd__GetCaretPt_x                                     0x1405DD280  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405DD2C0
#define CEditWnd__GetDisplayString_x                               0x1405DD530
#define CEditWnd__GetHorzOffset_x                                  0x1405DD770
#define CEditWnd__GetLineForPrintableChar_x                        0x1405DD8C0
#define CEditWnd__GetSelStartPt_x                                  0x1405DDBA0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405DD9F0
#define CEditWnd__PointFromPrintableChar_x                         0x1405DE750
#define CEditWnd__ReplaceSelection_x                               0x1405DEB00
#define CEditWnd__SelectableCharFromPoint_x                        0x1405DEFA0
#define CEditWnd__SetEditable_x                                    0x1405DF230
#define CEditWnd__SetWindowText_x                                  0x1405DF260

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140271C70
#define CEverQuest__ClickedPlayer_x                                0x140265CD0
#define CEverQuest__CreateTargetIndicator_x                        0x140266590
#define CEverQuest__DoTellWindow_x                                 0x140108B40 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140109410 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140273660
#define CEverQuest__dsp_chat_x                                     0x140108580 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x14029E840
#define CEverQuest__Emote_x                                        0x140274050
#define CEverQuest__GetBodyTypeDesc_x                              0x140274E30
#define CEverQuest__GetClassDesc_x                                 0x140274E90
#define CEverQuest__GetClassThreeLetterCode_x                      0x140275260
#define CEverQuest__GetDeityDesc_x                                 0x140275510
#define CEverQuest__GetLangDesc_x                                  0x140275940
#define CEverQuest__GetRaceDesc_x                                  0x140275CE0
#define CEverQuest__InterpretCmd_x                                 0x140277670
#define CEverQuest__LeftClickedOnPlayer_x                          0x14028C9A0
#define CEverQuest__LMouseUp_x                                     0x1402790E0
#define CEverQuest__RightClickedOnPlayer_x                         0x14028A060
#define CEverQuest__RMouseUp_x                                     0x140283720
#define CEverQuest__SetGameState_x                                 0x14028F910
#define CEverQuest__UPCNotificationFlush_x                         0x140295280 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140278D40
#define CEverQuest__ReportSuccessfulHeal_x                         0x140284AF0
#define CEverQuest__ReportSuccessfulHit_x                          0x140285910

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403CE390

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C3330
#define CGuild__GetGuildName_x                                     0x1400C3370

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403F1800

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402B09D0
#define CHotButton__SetCheck_x                                     0x1402B0CA0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140409420
#define CInvSlotMgr__MoveItem_x                                    0x140409600
#define CInvSlotMgr__SelectSlot_x                                  0x14040B030

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x140406620
#define CInvSlot__SliderComplete_x                                 0x140407B70
#define CInvSlot__GetItemBase_x                                    0x140401FC0
#define CInvSlot__UpdateItem_x                                     0x140408020

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x14040C3C0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x14042D900
#define CItemDisplayWnd__UpdateStrings_x                           0x1404304F0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x14042A0E0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x14042BA40
#define CItemDisplayWnd__RequestConvertItem_x                      0x14042CD10

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404F7370
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404F9100

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140534290

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1404267C0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140153950

// CLabel
#define CLabel__UpdateText_x                                       0x1404378E0

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405AD450
#define CListWnd__dCListWnd_x                                      0x1405AD8A0
#define CListWnd__vftable_x                                        0x140ABC380
#define CListWnd__AddColumn_x                                      0x1405ADF40
#define CListWnd__AddColumn1_x                                     0x1405ADFE0
#define CListWnd__AddLine_x                                        0x1405AE140
#define CListWnd__AddString_x                                      0x1405AE6D0
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405AEC40
#define CListWnd__CalculateVSBRange_x                              0x1405AEF20
#define CListWnd__ClearSel_x                                       0x1405AF0D0
#define CListWnd__ClearAllSel_x                                    0x1405AF070
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405AF130
#define CListWnd__Compare_x                                        0x1405AF2E0
#define CListWnd__Draw_x                                           0x1405AF7B0
#define CListWnd__DrawColumnSeparators_x                           0x1405B0360
#define CListWnd__DrawHeader_x                                     0x1405B0420
#define CListWnd__DrawItem_x                                       0x1405B0B00
#define CListWnd__DrawLine_x                                       0x1405B1480
#define CListWnd__DrawSeparator_x                                  0x1405B1940
#define CListWnd__EnableLine_x                                     0x1405B1D60
#define CListWnd__EnsureVisible_x                                  0x1405B1DC0
#define CListWnd__ExtendSel_x                                      0x1405B1EC0
#define CListWnd__GetColumnMinWidth_x                              0x1405B2250
#define CListWnd__GetColumnWidth_x                                 0x1405B22D0
#define CListWnd__GetCurSel_x                                      0x1405B23D0
#define CListWnd__GetItemData_x                                    0x1405B2750
#define CListWnd__GetItemHeight_x                                  0x1405B2790
#define CListWnd__GetItemRect_x                                    0x1405B29B0
#define CListWnd__GetItemText_x                                    0x1405B2C50
#define CListWnd__GetSelList_x                                     0x1405B2EA0
#define CListWnd__GetSeparatorRect_x                               0x1405B3090
#define CListWnd__InsertLine_x                                     0x1405B44F0
#define CListWnd__RemoveLine_x                                     0x1405B4B60
#define CListWnd__SetColors_x                                      0x1405B4F20
#define CListWnd__SetColumnJustification_x                         0x1405B4F40
#define CListWnd__SetColumnLabel_x                                 0x1405B4FC0
#define CListWnd__SetColumnWidth_x                                 0x1405B5160
#define CListWnd__SetCurSel_x                                      0x1405B5230
#define CListWnd__SetItemColor_x                                   0x1405B54A0
#define CListWnd__SetItemData_x                                    0x1405B5540
#define CListWnd__SetItemText_x                                    0x1405B5780
#define CListWnd__Sort_x                                           0x1405B5B90
#define CListWnd__ToggleSel_x                                      0x1405B5D00
#define CListWnd__SetColumnsSizable_x                              0x1405B51B0
#define CListWnd__SetItemWnd_x                                     0x1405B58B0
#define CListWnd__GetItemWnd_x                                     0x1405B2E30
#define CListWnd__SetItemIcon_x                                    0x1405B5580
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405AEA10
#define CListWnd__SetVScrollPos_x                                  0x1405B5AF0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x14044AB70

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A22040
#define MapViewMap__Clear_x                                        0x14044C6F0
#define MapViewMap__SetZoom_x                                      0x140452D60
#define MapViewMap__HandleLButtonDown_x                            0x14044F880

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140474460  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x14047AAA0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x14047B240
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14047EA70
#define CMerchantWnd__SelectBuySellSlot_x                          0x14047DDC0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140482D10

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14066E750
#define CPacketScrambler__hton_x                                   0x14066E740

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405D6400
#define CSidlManagerBase__FindAnimation1_x                         0x1405D6340
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405D6A30
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405D67E0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405D5740
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405D56D0
#define CSidlManagerBase__CreateXWnd_x                             0x1405D4D10

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404EA240
#define CSidlManager__CreateXWnd_x                                 0x1404EA400

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14059AFB0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14059B0E0
#define CSidlScreenWnd__ConvertToRes_x                             0x1405E55B0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14059B260
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14059A6E0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14059A7B0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14059A9C0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x14059B950
#define CSidlScreenWnd__EnableIniStorage_x                         0x14059BB80
#define CSidlScreenWnd__GetChildItem_x                             0x14059BD20
#define CSidlScreenWnd__GetSidlPiece_x                             0x14059BF70
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405A6030 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x14059C2E0
#define CSidlScreenWnd__LoadIniInfo_x                              0x14059C650
#define CSidlScreenWnd__LoadIniListWnd_x                           0x14059CF10
#define CSidlScreenWnd__LoadSidlScreen_x                           0x14059D910
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F0AC28
#define CSidlScreenWnd__StoreIniInfo_x                             0x14059DFA0
#define CSidlScreenWnd__StoreIniVis_x                              0x14059E790
#define CSidlScreenWnd__vftable_x                                  0x140ABB608
#define CSidlScreenWnd__WndNotification_x                          0x14059E7E0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14032C700 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14032CBA0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14032CAD0
#define CSkillMgr__IsActivatedSkill_x                              0x14032CF50
#define CSkillMgr__IsCombatSkill_x                                 0x14032CF90
#define CSkillMgr__GetSkillTimerDuration_x                         0x14032CEC0
#define CSkillMgr__GetSkillLastUsed_x                              0x14032CB20

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405B6670
#define CSliderWnd__SetValue_x                                     0x1405B6E80
#define CSliderWnd__SetNumTicks_x                                  0x1405B6D00

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404F0970

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405BB620
#define CStmlWnd__CalculateHSBRange_x                              0x1405A59E0
#define CStmlWnd__CalculateVSBRange_x                              0x1405BC4C0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405BCFC0
#define CStmlWnd__ForceParseNow_x                                  0x1405BD060
#define CStmlWnd__GetVisibleText_x                                 0x1405BD730
#define CStmlWnd__MakeStmlColorTag_x                               0x1405BF490
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405BF4D0
#define CStmlWnd__SetSTMLText_x                                    0x1405C64A0
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405C6650
#define CStmlWnd__UpdateHistoryString_x                            0x1405C69E0

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405B7250
#define CTabWnd__DrawCurrentPage_x                                 0x1405B72F0
#define CTabWnd__DrawTab_x                                         0x1405B76C0
#define CTabWnd__GetTabRect_x                                      0x1405B7D30
#define CTabWnd__InsertPage_x                                      0x1405B8000
#define CTabWnd__RemovePage_x                                      0x1405B8290
#define CTabWnd__SetPage_x                                         0x1405B83F0
#define CTabWnd__UpdatePage_x                                      0x1405B86F0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405DF6C0
#define CPageWnd__SetTabText_x                                     0x1405DF730

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BC940  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BCD50


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405CDDE0
#define CTextureFont__DrawWrappedText1_x                           0x1405CDCF0
#define CTextureFont__DrawWrappedText2_x                           0x1405CDF10
#define CTextureFont__GetTextExtent_x                              0x1405CE2C0
#define CTextureFont__GetHeight_x                                  0x1405CE280

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405E3D10

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x140597BB0

// CXStr
#define CXStr__gFreeLists_x                                        0x140D39F20
#define CXStr__gCXStrAccess_x                                      0x140F0A788

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405A1070
#define CXWnd__ClrFocus_x                                          0x1405A1360
#define CXWnd__Destroy_x                                           0x1405A14E0
#define CXWnd__DoAllDrawing_x                                      0x1405A15F0
#define CXWnd__DrawColoredRect_x                                   0x1405A1DC0
#define CXWnd__DrawTooltip_x                                       0x1405A3440
#define CXWnd__DrawTooltipAtPoint_x                                0x1405A34F0
#define CXWnd__GetChildItem_x                                      0x1405A3DF0
#define CXWnd__GetChildWndAt_x                                     0x1405A3EA0
#define CXWnd__GetClientRect_x                                     0x1405A4160
#define CXWnd__GetClientClipRect_x                                 0x1405A4010
#define CXWnd__GetRelativeRect_x                                   0x1405A5B20
#define CXWnd__GetScreenClipRect_x                                 0x1405A5C30
#define CXWnd__GetScreenRect_x                                     0x1405A5DB0
#define CXWnd__GetTooltipRect_x                                    0x1405A5F30
#define CXWnd__IsActive_x                                          0x1405A64F0
#define CXWnd__IsDescendantOf_x                                    0x1405A6520
#define CXWnd__IsReallyVisible_x                                   0x1405A6590
#define CXWnd__IsType_x                                            0x1405A65E0
#define CXWnd__Minimize_x                                          0x1405A66E0
#define CXWnd__ProcessTransition_x                                 0x1405A75F0
#define CXWnd__Resize_x                                            0x1405A7700
#define CXWnd__Right_x                                             0x1405A77A0
#define CXWnd__SetFocus_x                                          0x1405A7B50
#define CXWnd__SetFont_x                                           0x1405A7BA0
#define CXWnd__SetKeyTooltip_x                                     0x1405A7CA0
#define CXWnd__SetMouseOver_x                                      0x1405A7DE0
#define CXWnd__SetParent_x                                         0x1405A7E60
#define CXWnd__StartFade_x                                         0x1405A82B0
#define CXWnd__vftable_x                                           0x140ABBBE0
#define CXWnd__CXWnd_x                                             0x14059FC00
#define CXWnd__dCXWnd_x                                            0x1405A0550

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405EA7F0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405C82A0
#define CXWndManager__DrawCursor_x                                 0x1405C8580
#define CXWndManager__DrawWindows_x                                0x1405C87E0
#define CXWndManager__GetKeyboardFlags_x                           0x1405C8E30
#define CXWndManager__HandleKeyboardMsg_x                          0x1405C8E70
#define CXWndManager__RemoveWnd_x                                  0x1405CC4A0

// CDBStr
#define CDBStr__GetString_x                                        0x14018AAB0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1406785A0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D0DB0
#define CCharacterListWnd__EnterWorld_x                            0x1400CFDC0
#define CCharacterListWnd__Quit_x                                  0x1400D0D90
#define CCharacterListWnd__UpdateList_x                            0x1400D1C10

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140646890
#define ItemBase__CreateItemTagString_x                            0x140647300
#define ItemBase__GetImageNum_x                                    0x140649890
#define ItemBase__GetItemValue_x                                   0x14064B330
#define ItemBase__IsEmpty_x                                        0x14064CF60
#define ItemBase__IsKeyRingItem_x                                  0x14064D690
#define ItemBase__ValueSellMerchant_x                              0x140651920
#define ItemClient__CanDrop_x                                      0x1402B3290
#define ItemClient__CanGoInBag_x                                   0x1402B33C0
#define ItemClient__CreateItemClient_x                             0x1402B3640
#define ItemClient__dItemClient_x                                  0x1402B3100

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401AA3D0
#define EQ_LoadingS__Array_x                                       0x140D26230

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14065D6C0
#define PcBase__GetCombatAbility_x                                 0x14065DDB0
#define PcBase__GetCombatAbilityTimer_x                            0x14065DE50
#define PcBase__GetItemContainedRealEstateIds_x                    0x14065E5F0
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14065F130
#define PcClient__AlertInventoryChanged_x                          0x1402D5880
#define PcClient__GetConLevel_x                                    0x1402D5EA0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402D8620
#define PcClient__HasLoreItem_x                                    0x1402D96D0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402E6EA0
#define PcZoneClient__RemoveMyAffect_x                             0x1402EABE0

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x14021C3A0  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x14021C550  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x14021C6B0  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x14021C5F0  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x140257210  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x1401852A0

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140633720
#define PlayerBase__CanSee1_x                                      0x1406337F0
#define PlayerBase__GetVisibilityLineSegment_x                     0x140633CD0
#define PlayerBase__HasProperty_x                                  0x140633EA0
#define PlayerBase__IsTargetable_x                                 0x140633F60
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402F8960
#define PlayerClient__GetPcClient_x                                0x1402FB490
#define PlayerClient__PlayerClient_x                               0x1402F0CC0
#define PlayerClient__SetNameSpriteState_x                         0x1402FEBC0
#define PlayerClient__SetNameSpriteTint_x                          0x1402FFB80
#define PlayerZoneClient__ChangeHeight_x                           0x14030E5B0
#define PlayerZoneClient__DoAttack_x                               0x14030F2C0
#define PlayerZoneClient__GetLevel_x                               0x140312A00
#define PlayerZoneClient__IsValidTeleport_x                        0x140259FA0
#define PlayerZoneClient__LegalPlayerRace_x                        0x140199000

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x140307AB0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x140307B60  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x140307C60
#define PlayerManagerClient__CreatePlayer_x                        0x140307580
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x1406332E0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402B8500
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402B8100
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402B8170
#define KeypressHandler__ClearCommandStateArray_x                  0x1402B8490  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402B8620
#define KeypressHandler__HandleKeyUp_x                             0x1402B8740
#define KeypressHandler__SaveKeymapping_x                          0x1402B83A0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1406760C0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x14066FE90

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402DFC90  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402E4FE0
#define PcZoneClient__GetPcSkillLimit_x                            0x1402E7630
#define PcZoneClient__RemovePetEffect_x                            0x1402EAEC0
#define PcZoneClient__HasAlternateAbility_x                        0x1402E8210
#define PcZoneClient__CanEquipItem_x                               0x1402E32F0
#define PcZoneClient__GetItemByID_x                                0x1402E5F00
#define PcZoneClient__RemoveBuffEffect_x                           0x1402EAA60
#define PcZoneClient__BandolierSwap_x                              0x1402E2350

// Doors
#define EQSwitch__UseSwitch_x                                      0x14025EAD0

// IconCache
#define IconCache__GetIcon_x                                       0x1403C3470

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403B7AA0
#define CContainerMgr__CloseContainer_x                            0x1403B73E0
#define CContainerMgr__OpenExperimentContainer_x                   0x1403B7E20

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404AE410

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402AACD0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x14043EBC0
#define CLootWnd__RequestLootSlot_x                                0x14043FBF0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401D9880
#define EQ_Spell__SpellAffects_x                                   0x1401DAB60
#define EQ_Spell__SpellAffectBase_x                                0x1401DAAC0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D9DD0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D9D80
#define EQ_Spell__IsSPAStacking_x                                  0x1401DA790
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401DA340
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401D9C10

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C1E70

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x14050B140
#define CTargetWnd__RefreshTargetBuffs_x                           0x14050A850
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x14050A050

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1405127C0  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140181C50
#define CTaskManager__GetTaskStatus_x                              0x140181D60
#define CTaskManager__GetElementDescription_x                      0x1401818E0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401D7BA0
#define EqSoundManager__PlayScriptMp3_x                            0x1401D69E0
#define EqSoundManager__SoundAssistPlay_x                          0x140331D40  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140332080  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405A9050
#define CTextureAnimation__SetCurCell_x                            0x1405A9360

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402A8ED0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x140690C60
#define CharacterBase__GetItemByGlobalIndex1_x                     0x140690CE0
#define CharacterBase__IsExpansionFlag_x                           0x1401FCC60

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x1403940F0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140394B10
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140396060

// messages
#define msg_spell_worn_off_x                                       0x140212BC0
#define msg_new_text_x                                             0x14020E370
#define __msgTokenTextParam_x                                      0x140205A50
#define msgTokenText_x                                             0x140205960

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140333970
#define SpellManager__GetSpellByGroupAndRank_x                     0x140333890

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140641B60

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140438030

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403BC800
#define CCursorAttachment__IsOkToActivate_x                        0x1403BFAC0
#define CCursorAttachment__RemoveAttachment_x                      0x1403BFD70
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405E21B0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405E23A0
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405E23B0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x14014EB10
#define CFindItemWnd__Update_x                                     0x14014F4B0
#define CFindItemWnd__PickupSelectedItem_x                         0x140148F70

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x140158660
#define LootFiltersManager__GetItemFilterData_x                    0x140159170
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140159A10
#define LootFiltersManager__SetItemLootFilter_x                    0x140159CC0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x140490EA0

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x14032C2C0
#define CResolutionHandler__UpdateResolution_x                     0x14058E730

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403B3D80

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x140695060  // Rename..?
#define CDistillerInfo__Instance_x                                 0x140694F50  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403DA770
#define CGroupWnd__UpdateDisplay_x                                 0x1403DA350

// ItemBase
#define ItemBase__IsLore_x                                         0x14064D7C0
#define ItemBase__IsLoreEquipped_x                                 0x14064D850

#define MultipleItemMoveManager__ProcessMove_x                     0x1402CB340

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140257370
#define EQPlacedItemManager__GetItemByGuid_x                       0x140257300
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140257340

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140326700

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x1401267C0
#define FactionManagerClient__HandleFactionMessage_x               0x140126B70
#define FactionManagerClient__GetFactionStanding_x                 0x140125F90
#define FactionManagerClient__GetMaxFaction_x                      0x140125F90
#define FactionManagerClient__GetMinFaction_x                      0x140125E40

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AEEA0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140131F70

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401B2D50
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401B20D0
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401B2B70  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401B2AF0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x140338C70

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140326700

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x14021C740

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x14059EDD0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140086A10

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14034A510

// AchievementManager
#define AchievementManager__Instance_x                             0x14008EBD0

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x140679120
#define FreeToPlayClient__RestrictionInfo_x                        0x140AD0450

// UdpConnection
#define UdpConnection__GetStats_x                                  0x140541350

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x14082AE80
#define CGFScreenWnd__CGFScreenWnd_x                               0x140071380
#define CGFScreenWnd__CGFScreenWnd1_x                              0x140071510
#define CGFScreenWnd__dCGFScreenWnd_x                              0x1400716C0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
