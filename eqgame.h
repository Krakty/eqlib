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

#define __ClientDate                                               20250414u
#define __ExpectedVersionDate                                     "Apr 14 2025"
#define __ExpectedVersionTime                                     "13:35:38"
#define __ActualVersionDate_x                                      0x14095ACD0
#define __ActualVersionTime_x                                      0x14095ACC0
#define __ActualVersionBuild_x                                     0x1408F0A40

// Memory Protection
#define __MemChecker0_x                                            0x1402BBCA0
#define __MemChecker1_x                                            0x140580D80
#define __MemChecker4_x                                            0x140289470
#define __EncryptPad0_x                                            0x140D2AE80

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E63AE0
#define instEQZoneInfo_x                                           0x140E63CD4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x14021F090
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
#define DI8__MouseState_x                                          0x140EDD2A8
#define __heqmain_x                                                0x140EDF748
#define DI8__Mouse_x                                               0x140EDD1F8
#define __HWnd_x                                                   0x140EDD280
#define __Mouse_x                                                  0x140EDD1B4
#define DI8__Keyboard_x                                            0x140EDD1D0
#define __LoginName_x                                              0x140EDFE2C
#define __CurrentMapLabel_x                                        0x140EF38B0
#define __LabelCache_x                                             0x140EF4480
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
#define pinstCEverQuest_x                                          0x140EDD1F0
#define pinstCamActor_x                                            0x140DAB5A8
#define pinstCDBStr_x                                              0x140DAAFF0
#define pinstCDisplay_x                                            0x140E5C9D8
#define pinstControlledPlayer_x                                    0x140E5C498
#define pinstCResolutionHandler_x                                  0x140F04CB8
#define pinstCSidlManager_x                                        0x140F05A20
#define pinstCXWndManager_x                                        0x140F05A18
#define instDynamicZone_x                                          0x140E62560 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E625AE
#define instExpeditionName_x                                       0x140E625EE
#define pinstDZMember_x                                            0x140E62678
#define pinstDZTimerInfo_x                                         0x140E62680
#define pinstEqLogin_x                                             0x140EDF770
#define instTribute_x                                              0x140D1DD60
#define pinstDeviceInputProxy_x                                    0x140E63B3C
#define pinstEQSoundManager_x                                      0x140DAC5B8
#define pinstEQSpellStrings_x                                      0x140D8FB80
#define pinstSGraphicsEngine_x                                     0x140F04A38
#define pinstLocalPC_x                                             0x140E5EA08
#define pinstLocalPlayer_x                                         0x140E5C3E8
#define pinstCMercenaryClientManager_x                             0x140EDA968
#define pinstModelPlayer_x                                         0x140E5C418
#define pinstRenderInterface_x                                     0x140F04A50
#define pinstSkillMgr_x                                            0x140EDC5F8
#define pinstSpawnManager_x                                        0x140EDAD20
#define pinstSpellManager_x                                        0x140EDC660
#define pinstStringTable_x                                         0x140E5EA18
#define pinstSwitchManager_x                                       0x140E5BEE0
#define pinstTarget_x                                              0x140E5C490
#define pinstTaskMember_x                                          0x140D1DD50 // Part of g_taskManager
#define pinstTradeTarget_x                                         0x140E5C410
#define instTributeActive_x                                        0x140D1DD89
#define pinstViewActor_x                                           0x140DAB5A0
#define pinstWorldData_x                                           0x140E5C4B8
#define pinstPlayerPath_x                                          0x140EDAD48
#define pinstTargetIndicator_x                                     0x140EDC710
#define EQObject_Top_x                                             0x140E5C9B8

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140EF0A10
#define pinstCContainerMgr_x                                       0x140DAB608
#define pinstCContextMenuManager_x                                 0x140F05700
#define pinstCInvSlotMgr_x                                         0x140DAB5D8
#define pinstCItemDisplayManager_x                                 0x140EF3480
#define pinstCPopupWndManager_x                                    0x140EF3D10
#define pinstCSpellDisplayMgr_x                                    0x140EF4360
#define pinstCTaskManager_x                                        0x140BE6C90
#define pinstEQSuiteTextureLoader_x                                0x140D34590
#define pinstItemIconCache_x                                       0x140EF0D70
#define pinstLootFiltersManager_x                                  0x140DAAA38
#define pinstGFViewListener_x                                      0x140F04ED8


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x140248CF0
#define __CastRay_x                                                0x140240FB0
#define __CastRay2_x                                               0x140240CB0
#define __compress_block_x                                         0x140536370
#define __ConvertItemTags_x                                        0x140241410
#define __CleanItemTags_x                                          0x14008A200
#define __CreateCascadeMenuItems_x                                 0x14018D630
#define __decompress_block_x                                       0x14057C5F0
#define __DoesFileExist_x                                          0x140584C30
#define __EQGetTime_x                                              0x140581330
#define __ExecuteCmd_x                                             0x140216890
#define __FixHeading_x                                             0x14063B880
#define __FlushDxKeyboard_x                                        0x14033FED0
#define __get_bearing_x                                            0x14024AF20
#define __get_melee_range_x                                        0x14024B010
#define __GetAnimationCache_x                                      0x1403BEEC0
#define __GetGaugeValueFromEQ_x                                    0x1404F5ED0
#define __GetLabelFromEQ_x                                         0x1404F74D0
#define __GetXTargetType_x                                         0x14063CB60   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14063B900
#define __HelpPath_x                                               0x140ED8F30   // Why?
#define __NewUIINI_x                                               0x140502F30   // Why?
#define __ProcessDeviceEvents_x                                    0x140289A80
#define __ProcessGameEvents_x                                      0x14027E740
#define __ProcessKeyboardEvents_x                                  0x140341620
#define __ProcessMouseEvents_x                                     0x14027FE10
#define __SaveColors_x                                             0x14019D650
#define __STMLToText_x                                             0x14058CE70
#define __WndProc_x                                                0x14033E6D0
#define CMemoryMappedFile__SetFile_x                               0x1407E92E0
#define DrawNetStatus_x                                            0x1402CA230
#define Util__FastTime_x                                           0x14057D510
#define __eq_delete_x                                              0x1406B52D4
#define __eq_new_x                                                 0x1406B5290
#define __CopyLayout_x                                             0x1402B80B0
#define __ThrottleFrameRate_x                                      0x14026DE58
#define __ThrottleFrameRateEnd_x                                   0x14026DEB8

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140350D60
#define CAAWnd__Update_x                                           0x140351060
#define CAAWnd__UpdateSelected_x                                   0x1403520B0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AC760
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A5140
#define CAdvancedLootWnd__AddPlayerToList_x                        0x14083DE38
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AD090

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401A87D0
#define AltAdvManager__IsAbilityReady_x                            0x1401A8C60
#define AltAdvManager__GetAAById_x                                 0x1401A80A0
#define AltAdvManager__CanTrainAbility_x                           0x1401A7E90
#define AltAdvManager__CanSeeAbility_x                             0x1401A7B50

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D34F0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D4350
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D45A0
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400E8C50
#define CharacterZoneClient__CanUseItem_x                          0x1400E9210
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D4F70
#define CharacterZoneClient__CastSpell_x                           0x1400D5010
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E4BA0
#define CharacterZoneClient__Cur_HP_x                              0x1400EA930
#define CharacterZoneClient__Cur_Mana_x                            0x1400EAAF0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D8370
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F1130
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FFA70  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D9810
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E8550
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F2CE0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F1BC0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D9990
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C9870
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400CB270
#define CharacterZoneClient__GetHPRegen_x                          0x1400F2300
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400EA5A0
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F2F70
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D9A10
#define CharacterZoneClient__GetManaRegen_x                        0x1400F3D60
#define CharacterZoneClient__GetModCap_x                           0x1400FB210
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D9CA0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D9E70
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CE400
#define CharacterZoneClient__HasSkill_x                            0x1400F6D90
#define CharacterZoneClient__HitBySpell_x                          0x1400DA900
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DE270
#define CharacterZoneClient__MakeMeVisible_x                       0x1400FACF0
#define CharacterZoneClient__Max_Endurance_x                       0x1402E6900  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400FB040
#define CharacterZoneClient__Max_Mana_x                            0x1402E6B20  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400FB4A0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E1700
#define CharacterZoneClient__SpellDuration_x                       0x1400E2430
#define CharacterZoneClient__TotalEffect_x                         0x1400E3780
#define CharacterZoneClient__UseSkill_x                            0x1401009F0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x14036F620

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x1403799A0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140375820
#define CBarterSearchWnd__UpdateInventoryList_x                    0x140379420

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14037C070

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AB84D0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x14039F2F0
#define CChatWindowManager__InitContextMenu_x                      0x14039F480
#define CChatWindowManager__FreeChatWindow_x                       0x14039E360
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403A70C0
#define CChatWindowManager__CreateChatWindow_x                     0x14039DD90

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140108F40

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403A8110
#define CChatWindow__Clear_x                                       0x1403A90D0
#define CChatWindow__WndNotification_x                             0x1403AA2C0
#define CChatWindow__AddHistory_x                                  0x1403A8BD0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405C1F80
#define CContextMenu__RemoveMenuItem_x                             0x1405C2370
#define CContextMenu__RemoveAllMenuItems_x                         0x1405C2340
#define CContextMenu__CheckMenuItem_x                              0x1405C21B0
#define CContextMenu__SetMenuItem_x                                0x1405C2390
#define CContextMenu__AddSeparator_x                               0x1405C20F0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405B3E40
#define CContextMenuManager__RemoveMenu_x                          0x1405B4420
#define CContextMenuManager__PopupMenu_x                           0x1405B4160
#define CContextMenuManager__Flush_x                               0x1405B3EC0
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403B6A50

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x14068F480
#define CChatService__GetFriendName_x                              0x14068F490

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405A4D20
#define CComboWnd__Draw_x                                          0x1405A4E20
#define CComboWnd__GetCurChoice_x                                  0x1405A5100  // unused
#define CComboWnd__GetListRect_x                                   0x1405A51A0
#define CComboWnd__InsertChoice_x                                  0x1405A54E0
#define CComboWnd__SetColors_x                                     0x1405A5870
#define CComboWnd__SetChoice_x                                     0x1405A5830
#define CComboWnd__GetItemCount_x                                  0x1405A5190
#define CComboWnd__GetCurChoiceText_x                              0x1405A5140  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405A50D0
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405A55A0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403B4770
#define CContainerWnd__SetContainer_x                              0x14040C0D0
#define CContainerWnd__vftable_x                                   0x1409CF0B8

// CDisplay
#define CDisplay__cameraType_x                                     0x140DAB384
#define CDisplay__ZoneMainUI_x                                     0x1405DC170
#define CDisplay__PreZoneMainUI_x                                  0x14019A580
#define CDisplay__CleanGameUI_x                                    0x14018C6F0
#define CDisplay__GetClickedActor_x                                0x1401908B0
#define CDisplay__GetUserDefinedColor_x                            0x140191520
#define CDisplay__InitCharSelectUI_x                               0x1401917D0
#define CDisplay__ReloadUI_x                                       0x14019C870
#define CDisplay__RestartUI_x                                      0x1401FC7F0
#define CDisplay__WriteTextHD2_x                                   0x1401A3880
#define CDisplay__TrueDistance_x                                   0x1401A3530
#define CDisplay__SetViewActor_x                                   0x14019FD70
#define CDisplay__GetFloorHeight_x                                 0x140190B10
#define CDisplay__ToggleScreenshotMode_x                           0x1401A3020
#define CDisplay__RealRender_World_x                               0x14019BC50

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405E6390
#define CEditWnd__DrawCaret_x                                      0x1405D7E70  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405D8330
#define CEditWnd__GetCaretPt_x                                     0x1405D85B0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405D85F0
#define CEditWnd__GetDisplayString_x                               0x1405D8860
#define CEditWnd__GetHorzOffset_x                                  0x1405D8AA0
#define CEditWnd__GetLineForPrintableChar_x                        0x1405D8BF0
#define CEditWnd__GetSelStartPt_x                                  0x1405D8ED0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405D8D20
#define CEditWnd__PointFromPrintableChar_x                         0x1405D9A80
#define CEditWnd__ReplaceSelection_x                               0x1405D9E30
#define CEditWnd__SelectableCharFromPoint_x                        0x1405DA2D0
#define CEditWnd__SetEditable_x                                    0x1405DA560
#define CEditWnd__SetWindowText_x                                  0x1405DA590

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14026EF70
#define CEverQuest__ClickedPlayer_x                                0x140264870
#define CEverQuest__CreateTargetIndicator_x                        0x140265130
#define CEverQuest__DoTellWindow_x                                 0x140108C50 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140109520 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140270960
#define CEverQuest__dsp_chat_x                                     0x140108690 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x14029B930
#define CEverQuest__Emote_x                                        0x140271350
#define CEverQuest__GetBodyTypeDesc_x                              0x140272120
#define CEverQuest__GetClassDesc_x                                 0x140272180
#define CEverQuest__GetClassThreeLetterCode_x                      0x140272550
#define CEverQuest__GetDeityDesc_x                                 0x140272800
#define CEverQuest__GetLangDesc_x                                  0x140272C30
#define CEverQuest__GetRaceDesc_x                                  0x140272FD0
#define CEverQuest__InterpretCmd_x                                 0x140274940
#define CEverQuest__LeftClickedOnPlayer_x                          0x140289AF0
#define CEverQuest__LMouseUp_x                                     0x140276390
#define CEverQuest__RightClickedOnPlayer_x                         0x1402872E0
#define CEverQuest__RMouseUp_x                                     0x1402809A0
#define CEverQuest__SetGameState_x                                 0x14028CA10
#define CEverQuest__UPCNotificationFlush_x                         0x140292370 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140275FF0
#define CEverQuest__ReportSuccessfulHeal_x                         0x140281D70
#define CEverQuest__ReportSuccessfulHit_x                          0x140282B90

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403C9E10

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C31E0
#define CGuild__GetGuildName_x                                     0x1400C3220

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403ED2B0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402ADA50
#define CHotButton__SetCheck_x                                     0x1402ADD20

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140404E40
#define CInvSlotMgr__MoveItem_x                                    0x140405020
#define CInvSlotMgr__SelectSlot_x                                  0x140406A20

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x140402080
#define CInvSlot__SliderComplete_x                                 0x1404035D0
#define CInvSlot__GetItemBase_x                                    0x1403FDA80
#define CInvSlot__UpdateItem_x                                     0x140403A80

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x140407DB0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140429210
#define CItemDisplayWnd__UpdateStrings_x                           0x14042BD70
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140425A30
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140427380
#define CItemDisplayWnd__RequestConvertItem_x                      0x140428630

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404F29E0
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404F46D0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x14052F6D0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140422100

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140153840

// CLabel
#define CLabel__UpdateText_x                                       0x140433150

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405A86B0
#define CListWnd__dCListWnd_x                                      0x1405A8B00
#define CListWnd__vftable_x                                        0x140AB6620
#define CListWnd__AddColumn_x                                      0x1405A91A0
#define CListWnd__AddColumn1_x                                     0x1405A9240
#define CListWnd__AddLine_x                                        0x1405A93A0
#define CListWnd__AddString_x                                      0x1405A9930
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405A9EA0
#define CListWnd__CalculateVSBRange_x                              0x1405AA180
#define CListWnd__ClearSel_x                                       0x1405AA330
#define CListWnd__ClearAllSel_x                                    0x1405AA2D0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405AA390
#define CListWnd__Compare_x                                        0x1405AA550
#define CListWnd__Draw_x                                           0x1405AAA20
#define CListWnd__DrawColumnSeparators_x                           0x1405AB5D0
#define CListWnd__DrawHeader_x                                     0x1405AB690
#define CListWnd__DrawItem_x                                       0x1405ABD70
#define CListWnd__DrawLine_x                                       0x1405AC6F0
#define CListWnd__DrawSeparator_x                                  0x1405ACBB0
#define CListWnd__EnableLine_x                                     0x1405ACFD0
#define CListWnd__EnsureVisible_x                                  0x1405AD030
#define CListWnd__ExtendSel_x                                      0x1405AD130
#define CListWnd__GetColumnMinWidth_x                              0x1405AD4C0
#define CListWnd__GetColumnWidth_x                                 0x1405AD540
#define CListWnd__GetCurSel_x                                      0x1405AD640
#define CListWnd__GetItemData_x                                    0x1405AD9C0
#define CListWnd__GetItemHeight_x                                  0x1405ADA00
#define CListWnd__GetItemRect_x                                    0x1405ADC20
#define CListWnd__GetItemText_x                                    0x1405ADEC0
#define CListWnd__GetSelList_x                                     0x1405AE110
#define CListWnd__GetSeparatorRect_x                               0x1405AE300
#define CListWnd__InsertLine_x                                     0x1405AF770
#define CListWnd__RemoveLine_x                                     0x1405AFDE0
#define CListWnd__SetColors_x                                      0x1405B01A0
#define CListWnd__SetColumnJustification_x                         0x1405B01C0
#define CListWnd__SetColumnLabel_x                                 0x1405B0240
#define CListWnd__SetColumnWidth_x                                 0x1405B03E0
#define CListWnd__SetCurSel_x                                      0x1405B04B0
#define CListWnd__SetItemColor_x                                   0x1405B0720
#define CListWnd__SetItemData_x                                    0x1405B07C0
#define CListWnd__SetItemText_x                                    0x1405B0A00
#define CListWnd__Sort_x                                           0x1405B0E10
#define CListWnd__ToggleSel_x                                      0x1405B0F80
#define CListWnd__SetColumnsSizable_x                              0x1405B0430
#define CListWnd__SetItemWnd_x                                     0x1405B0B30
#define CListWnd__GetItemWnd_x                                     0x1405AE0A0
#define CListWnd__SetItemIcon_x                                    0x1405B0800
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405A9C70
#define CListWnd__SetVScrollPos_x                                  0x1405B0D70

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x1404463F0

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A1C2B0
#define MapViewMap__Clear_x                                        0x140447F70
#define MapViewMap__SetZoom_x                                      0x14044E5E0
#define MapViewMap__HandleLButtonDown_x                            0x14044B100

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14046FD20  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140476380
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140476B30
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14047A350
#define CMerchantWnd__SelectBuySellSlot_x                          0x1404796A0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14047E600

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14066A760
#define CPacketScrambler__hton_x                                   0x14066A750

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405D1730
#define CSidlManagerBase__FindAnimation1_x                         0x1405D1670
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405D1D60
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405D1B10
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405D0A70
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405D0A00
#define CSidlManagerBase__CreateXWnd_x                             0x1405D0040

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404E58C0
#define CSidlManager__CreateXWnd_x                                 0x1404E5A80

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405961F0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x140596320
#define CSidlScreenWnd__ConvertToRes_x                             0x1405E08D0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x1405964A0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x140595920
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x1405959F0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x140595C00
#define CSidlScreenWnd__DrawSidlPiece_x                            0x140596B90
#define CSidlScreenWnd__EnableIniStorage_x                         0x140596DC0
#define CSidlScreenWnd__GetChildItem_x                             0x140596F60
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405971B0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405A1280 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x140597520
#define CSidlScreenWnd__LoadIniInfo_x                              0x140597890
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140598160
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140598B60
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F04D78
#define CSidlScreenWnd__StoreIniInfo_x                             0x140599200
#define CSidlScreenWnd__StoreIniVis_x                              0x1405999F0
#define CSidlScreenWnd__vftable_x                                  0x140AB58A8
#define CSidlScreenWnd__WndNotification_x                          0x140599A40

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x140328E60 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140329300 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x140329230
#define CSkillMgr__IsActivatedSkill_x                              0x1403296B0
#define CSkillMgr__IsCombatSkill_x                                 0x1403296F0
#define CSkillMgr__GetSkillTimerDuration_x                         0x140329620
#define CSkillMgr__GetSkillLastUsed_x                              0x140329280

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405B18F0
#define CSliderWnd__SetValue_x                                     0x1405B2100
#define CSliderWnd__SetNumTicks_x                                  0x1405B1F80

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404EBFE0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405B68A0
#define CStmlWnd__CalculateHSBRange_x                              0x1405A0C60
#define CStmlWnd__CalculateVSBRange_x                              0x1405B7740
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405B8240
#define CStmlWnd__ForceParseNow_x                                  0x1405B82E0
#define CStmlWnd__GetVisibleText_x                                 0x1405B89B0
#define CStmlWnd__MakeStmlColorTag_x                               0x1405BA710
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405BA750
#define CStmlWnd__SetSTMLText_x                                    0x1405C1720
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405C18D0
#define CStmlWnd__UpdateHistoryString_x                            0x1405C1C60

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405B24D0
#define CTabWnd__DrawCurrentPage_x                                 0x1405B2570
#define CTabWnd__DrawTab_x                                         0x1405B2940
#define CTabWnd__GetTabRect_x                                      0x1405B2FB0
#define CTabWnd__InsertPage_x                                      0x1405B3280
#define CTabWnd__RemovePage_x                                      0x1405B3510
#define CTabWnd__SetPage_x                                         0x1405B3670
#define CTabWnd__UpdatePage_x                                      0x1405B3970

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405DA9F0
#define CPageWnd__SetTabText_x                                     0x1405DAA60

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BC800  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BCC10


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405C90F0
#define CTextureFont__DrawWrappedText1_x                           0x1405C9000
#define CTextureFont__DrawWrappedText2_x                           0x1405C9220
#define CTextureFont__GetTextExtent_x                              0x1405C95D0
#define CTextureFont__GetHeight_x                                  0x1405C9590

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405DF030

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x140595500

// CXStr
#define CXStr__gFreeLists_x                                        0x140D33F00
#define CXStr__gCXStrAccess_x                                      0x140F048D8

// CXWnd
#define CXWnd__BringToTop_x                                        0x14059C2D0
#define CXWnd__ClrFocus_x                                          0x14059C5C0
#define CXWnd__Destroy_x                                           0x14059C740
#define CXWnd__DoAllDrawing_x                                      0x14059C840
#define CXWnd__DrawColoredRect_x                                   0x14059D010
#define CXWnd__DrawTooltip_x                                       0x14059E690
#define CXWnd__DrawTooltipAtPoint_x                                0x14059E740
#define CXWnd__GetChildItem_x                                      0x14059F050
#define CXWnd__GetChildWndAt_x                                     0x14059F110
#define CXWnd__GetClientRect_x                                     0x14059F3B0
#define CXWnd__GetClientClipRect_x                                 0x14059F280
#define CXWnd__GetRelativeRect_x                                   0x1405A0D80
#define CXWnd__GetScreenClipRect_x                                 0x1405A0E90
#define CXWnd__GetScreenRect_x                                     0x1405A1000
#define CXWnd__GetTooltipRect_x                                    0x1405A1180
#define CXWnd__IsActive_x                                          0x1405A1740
#define CXWnd__IsDescendantOf_x                                    0x1405A1770
#define CXWnd__IsReallyVisible_x                                   0x1405A17E0
#define CXWnd__IsType_x                                            0x1405A1820
#define CXWnd__Minimize_x                                          0x1405A1920
#define CXWnd__ProcessTransition_x                                 0x1405A2830
#define CXWnd__Resize_x                                            0x1405A2940
#define CXWnd__Right_x                                             0x1405A29E0
#define CXWnd__SetFocus_x                                          0x1405A2DA0
#define CXWnd__SetFont_x                                           0x1405A2DF0
#define CXWnd__SetKeyTooltip_x                                     0x1405A2F00
#define CXWnd__SetMouseOver_x                                      0x1405A3040
#define CXWnd__SetParent_x                                         0x1405A30C0
#define CXWnd__StartFade_x                                         0x1405A3510
#define CXWnd__vftable_x                                           0x140AB5E80
#define CXWnd__CXWnd_x                                             0x14059AE60
#define CXWnd__dCXWnd_x                                            0x14059B7C0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405E5B10

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405C3540
#define CXWndManager__DrawCursor_x                                 0x1405C3820
#define CXWndManager__DrawWindows_x                                0x1405C3A80
#define CXWndManager__GetKeyboardFlags_x                           0x1405C4150
#define CXWndManager__HandleKeyboardMsg_x                          0x1405C4190
#define CXWndManager__RemoveWnd_x                                  0x1405C77B0

// CDBStr
#define CDBStr__GetString_x                                        0x14018A8B0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1406745A0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D0FF0
#define CCharacterListWnd__EnterWorld_x                            0x1400CFCF0
#define CCharacterListWnd__Quit_x                                  0x1400D0FD0
#define CCharacterListWnd__UpdateList_x                            0x1400D1E50

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140641BA0
#define ItemBase__CreateItemTagString_x                            0x1406425F0
#define ItemBase__GetImageNum_x                                    0x140644AE0
#define ItemBase__GetItemValue_x                                   0x1406465F0
#define ItemBase__IsEmpty_x                                        0x1406481A0
#define ItemBase__IsKeyRingItem_x                                  0x1406488D0
#define ItemBase__ValueSellMerchant_x                              0x14064CAD0
#define ItemClient__CanDrop_x                                      0x1402B0340
#define ItemClient__CanGoInBag_x                                   0x1402B0470
#define ItemClient__CreateItemClient_x                             0x1402B06F0
#define ItemClient__dItemClient_x                                  0x1402B01B0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401AA180
#define EQ_LoadingS__Array_x                                       0x140D20230

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140659460
#define PcBase__GetCombatAbility_x                                 0x140659B50
#define PcBase__GetCombatAbilityTimer_x                            0x140659BF0
#define PcBase__GetItemContainedRealEstateIds_x                    0x14065A390
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14065AED0
#define PcClient__AlertInventoryChanged_x                          0x1402D2810
#define PcClient__GetConLevel_x                                    0x1402D2E30  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402D55C0
#define PcClient__HasLoreItem_x                                    0x1402D6620
#define PcZoneClient__GetItemRecastTimer_x                         0x1402E3DD0
#define PcZoneClient__RemoveMyAffect_x                             0x1402E7A40

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x14021AFD0  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x14021B180  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x14021B2E0  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x14021B220  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x140255DE0  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x1401850D0

// PlayerClient
#define PlayerBase__CanSee_x                                       0x14062EA40
#define PlayerBase__CanSee1_x                                      0x14062EB10
#define PlayerBase__GetVisibilityLineSegment_x                     0x14062EFF0
#define PlayerBase__HasProperty_x                                  0x14062F1C0
#define PlayerBase__IsTargetable_x                                 0x14062F280
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402F5720
#define PlayerClient__GetPcClient_x                                0x1402F7F70
#define PlayerClient__PlayerClient_x                               0x1402EDAC0
#define PlayerClient__SetNameSpriteState_x                         0x1402FB610
#define PlayerClient__SetNameSpriteTint_x                          0x1402FC5D0
#define PlayerZoneClient__ChangeHeight_x                           0x14030AE80
#define PlayerZoneClient__DoAttack_x                               0x14030BB90
#define PlayerZoneClient__GetLevel_x                               0x14030F2D0
#define PlayerZoneClient__IsValidTeleport_x                        0x140258B60
#define PlayerZoneClient__LegalPlayerRace_x                        0x140198E00

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1403045A0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x140304650  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x140304750
#define PlayerManagerClient__CreatePlayer_x                        0x140304070
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x14062E600

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402B55B0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402B51B0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402B5220
#define KeypressHandler__ClearCommandStateArray_x                  0x1402B5540  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402B56D0
#define KeypressHandler__HandleKeyUp_x                             0x1402B57F0
#define KeypressHandler__SaveKeymapping_x                          0x1402B5450  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1406720C0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x14066BE90

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402DCBE0  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402E1F10
#define PcZoneClient__GetPcSkillLimit_x                            0x1402E4560
#define PcZoneClient__RemovePetEffect_x                            0x1402E7D20
#define PcZoneClient__HasAlternateAbility_x                        0x1402E5140
#define PcZoneClient__CanEquipItem_x                               0x1402E0240
#define PcZoneClient__GetItemByID_x                                0x1402E2E30
#define PcZoneClient__RemoveBuffEffect_x                           0x1402E78C0
#define PcZoneClient__BandolierSwap_x                              0x1402DF2A0

// Doors
#define EQSwitch__UseSwitch_x                                      0x14025D690

// IconCache
#define IconCache__GetIcon_x                                       0x1403BEEF0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403B3520
#define CContainerMgr__CloseContainer_x                            0x1403B2E60
#define CContainerMgr__OpenExperimentContainer_x                   0x1403B38A0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404A9B30

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402A7D40

// CLootWnd
#define CLootWnd__LootAll_x                                        0x14043A430
#define CLootWnd__RequestLootSlot_x                                0x14043B460

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401D97D0
#define EQ_Spell__SpellAffects_x                                   0x1401DAAB0
#define EQ_Spell__SpellAffectBase_x                                0x1401DAA10
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400DA000
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D9FB0
#define EQ_Spell__IsSPAStacking_x                                  0x1401DA6E0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401DA290
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401D9B60

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C1D20

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x140506740
#define CTargetWnd__RefreshTargetBuffs_x                           0x140505E50
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x140505650

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x14050DDD0  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140181A80
#define CTaskManager__GetTaskStatus_x                              0x140181B90
#define CTaskManager__GetElementDescription_x                      0x140181710

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401D7AF0
#define EqSoundManager__PlayScriptMp3_x                            0x1401D6930
#define EqSoundManager__SoundAssistPlay_x                          0x14032E4A0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x14032E7E0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405A42B0
#define CTextureAnimation__SetCurCell_x                            0x1405A45C0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402A5F60

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x14068CB50
#define CharacterBase__GetItemByGlobalIndex1_x                     0x14068CBD0
#define CharacterBase__IsExpansionFlag_x                           0x1401FC020

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x14038FF70
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140390950
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140391EA0

// messages
#define msg_spell_worn_off_x                                       0x140211840
#define msg_new_text_x                                             0x14020CFF0
#define __msgTokenTextParam_x                                      0x140204880
#define msgTokenText_x                                             0x140204790

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x1403300D0
#define SpellManager__GetSpellByGroupAndRank_x                     0x14032FFF0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x14063CF40

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1404338A0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403B8280
#define CCursorAttachment__IsOkToActivate_x                        0x1403BB540
#define CCursorAttachment__RemoveAttachment_x                      0x1403BB7F0
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405DD4D0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405DD6C0
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405DD6D0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x14014EA10
#define CFindItemWnd__Update_x                                     0x14014F3B0
#define CFindItemWnd__PickupSelectedItem_x                         0x140148E60

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x1401584A0
#define LootFiltersManager__GetItemFilterData_x                    0x140158FC0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140159860
#define LootFiltersManager__SetItemLootFilter_x                    0x140159B10

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14048C660

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x140328A20
#define CResolutionHandler__UpdateResolution_x                     0x140589940

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403AF800

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x140690F50  // Rename..?
#define CDistillerInfo__Instance_x                                 0x140690E40  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403D61E0
#define CGroupWnd__UpdateDisplay_x                                 0x1403D5DC0

// ItemBase
#define ItemBase__IsLore_x                                         0x140648A00
#define ItemBase__IsLoreEquipped_x                                 0x140648A90

#define MultipleItemMoveManager__ProcessMove_x                     0x1402C83C0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140255F40
#define EQPlacedItemManager__GetItemByGuid_x                       0x140255ED0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140255F10

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140322E60

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x1401266B0
#define FactionManagerClient__HandleFactionMessage_x               0x140126A60
#define FactionManagerClient__GetFactionStanding_x                 0x140125E80
#define FactionManagerClient__GetMaxFaction_x                      0x140125E80
#define FactionManagerClient__GetMinFaction_x                      0x140125D30

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AED70

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140131E60

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401B2B20
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401B1EA0
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401B2940  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401B28C0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x1403353D0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140322E60

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x14021B370

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x14059A030

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x1400868C0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140346C70

// AchievementManager
#define AchievementManager__Instance_x                             0x14008EA80

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x140675120
#define FreeToPlayClient__RestrictionInfo_x                        0x140ACA5A0

// UdpConnection
#define UdpConnection__GetStats_x                                  0x14053C790

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x140825600
#define CGFScreenWnd__CGFScreenWnd_x                               0x140071260
#define CGFScreenWnd__CGFScreenWnd1_x                              0x1400713F0
#define CGFScreenWnd__dCGFScreenWnd_x                              0x1400715A0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
