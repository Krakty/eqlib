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

#define __ClientDate                                               20260303u
#define __ExpectedVersionDate                                     "Mar  3 2026"
#define __ExpectedVersionTime                                     "11:35:58"
#define __ActualVersionDate_x                                      0x140988148
#define __ActualVersionTime_x                                      0x140988138
#define __ActualVersionBuild_x                                     0x14091D300

// Memory Protection
#define __MemChecker0_x                                            0x1402CB900
#define __MemChecker1_x                                            0x1405A44A0
#define __MemChecker4_x                                            0x140298D80
#define __EncryptPad0_x                                            0x140D5AFC0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E93AE0
#define instEQZoneInfo_x                                           0x140E93CD4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x14022BD80
#define __gfMaxZoomCameraDistance_x                                0x14091E5B8
#define __gfMaxCameraDistance_x                                    0x140AC8098
#define __CurrentSocial_x                                          0x140C169B0 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D52790
#define g_eqCommandStates_x                                        0x140D53830
#define __CommandList_x                                            0x140D53A60
#define __ScreenMode_x                                             0x140DDB4FC
#define __gWorld_x                                                 0x140E8E998
#define __gpbCommandEvent_x                                        0x140E8C46C
#define __ServerHost_x                                             0x140E8C658
#define __Guilds_x                                                 0x140E926A0
#define __MemCheckBitmask_x                                        0x140E94023
#define __MemCheckActive_x                                         0x140E9573D
#define __MouseEventTime_x                                         0x140F090B8
#define DI8__MouseState_x                                          0x140F0D268
#define __heqmain_x                                                0x140F0F6F8
#define DI8__Mouse_x                                               0x140F0F710
#define __HWnd_x                                                   0x140F0F718
#define __Mouse_x                                                  0x140F0F720
#define DI8__Keyboard_x                                            0x140F0F740
#define __LoginName_x                                              0x140F0FEAC
#define __CurrentMapLabel_x                                        0x140F239C0
#define __LabelCache_x                                             0x140F24590
#define __ChatFilterDefs_x                                         0x140A61FE0
#define Teleport_Table_Size_x                                      0x140E8C4F4
#define Teleport_Table_x                                           0x140E8C970

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E8EA30
#define pinstActiveBanker_x                                        0x140E8C3A0
#define pinstActiveCorpse_x                                        0x140E8C390
#define pinstActiveGMaster_x                                       0x140E8C398
#define pinstActiveMerchant_x                                      0x140E8C388
#define pinstAltAdvManager_x                                       0x140DDC240
#define pinstCEverQuest_x                                          0x140F0F758
#define pinstCamActor_x                                            0x140DDB4E8
#define pinstCDBStr_x                                              0x140DDAFF0
#define pinstCDisplay_x                                            0x140E8C450
#define pinstControlledPlayer_x                                    0x140E8C430
#define pinstCResolutionHandler_x                                  0x140F34B38
#define pinstCSidlManager_x                                        0x140F35B30
#define pinstCXWndManager_x                                        0x140F35B28
#define instDynamicZone_x                                          0x140E92560 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E925AE
#define instExpeditionName_x                                       0x140E925EE
#define pinstDZMember_x                                            0x140E92678
#define pinstDZTimerInfo_x                                         0x140E92680
#define pinstEqLogin_x                                             0x140F0F7F0
#define instTribute_x                                              0x140D4DDC0
#define pinstDeviceInputProxy_x                                    0x140E93B3C
#define pinstEQSoundManager_x                                      0x140DDC5C0
#define pinstEQSpellStrings_x                                      0x140DBFB80
#define pinstSGraphicsEngine_x                                     0x140F34B68
#define pinstLocalPC_x                                             0x140E8E9A8
#define pinstLocalPlayer_x                                         0x140E8C380
#define pinstCMercenaryClientManager_x                             0x140F0A9D8
#define pinstModelPlayer_x                                         0x140E8C3B0
#define pinstRenderInterface_x                                     0x140F34B80
#define pinstSkillMgr_x                                            0x140F0C688
#define pinstSpawnManager_x                                        0x140F0AD90
#define pinstSpellManager_x                                        0x140F0C6F0
#define pinstStringTable_x                                         0x140E8EA20
#define pinstSwitchManager_x                                       0x140E8BEF0
#define pinstTarget_x                                              0x140E8C428
#define pinstTaskMember_x                                          0x140D4DDB0 // Part of g_taskManager
#define pinstTradeTarget_x                                         0x140E8C3A8
#define instTributeActive_x                                        0x140D4DDE9
#define pinstViewActor_x                                           0x140DDB4E0
#define pinstWorldData_x                                           0x140E8C178
#define pinstPlayerPath_x                                          0x140F0ADB8
#define pinstTargetIndicator_x                                     0x140F0C7A0
#define EQObject_Top_x                                             0x140E8C458

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140F20B20
#define pinstCContainerMgr_x                                       0x140DDB608
#define pinstCContextMenuManager_x                                 0x140F35810
#define pinstCInvSlotMgr_x                                         0x140DDB5F0
#define pinstCItemDisplayManager_x                                 0x140F23590
#define pinstCPopupWndManager_x                                    0x140F23E20
#define pinstCSpellDisplayMgr_x                                    0x140F24470
#define pinstCTaskManager_x                                        0x140C16CF0
#define pinstEQSuiteTextureLoader_x                                0x140D646E0
#define pinstItemIconCache_x                                       0x140F20E80
#define pinstLootFiltersManager_x                                  0x140DDAA38
#define pinstGFViewListener_x                                      0x140F34FE8


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x1402561E0
#define __CastRay_x                                                0x14024E360
#define __CastRay2_x                                               0x14024E050
#define __compress_block_x                                         0x140559840
#define __ConvertItemTags_x                                        0x14024E7C0
#define __CleanItemTags_x                                          0x14008C730
#define __CreateCascadeMenuItems_x                                 0x140195D90
#define __decompress_block_x                                       0x14059FC90
#define __DoesFileExist_x                                          0x1405A8510
#define __EQGetTime_x                                              0x1405A4A50
#define __ExecuteCmd_x                                             0x140223260
#define __FixHeading_x                                             0x140660550
#define __FlushDxKeyboard_x                                        0x1403502B0
#define __get_bearing_x                                            0x140258500
#define __get_melee_range_x                                        0x1402585F0
#define __GetAnimationCache_x                                      0x1403D4F40
#define __GetGaugeValueFromEQ_x                                    0x140518A20
#define __GetLabelFromEQ_x                                         0x14051A010
#define __GetXTargetType_x                                         0x140662A40   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x1406605D0
#define __HelpPath_x                                               0x140F08F80   // Why?
#define __NewUIINI_x                                               0x140525A60   // Why?
#define __ProcessDeviceEvents_x                                    0x140299380
#define __ProcessGameEvents_x                                      0x14028DD60
#define __ProcessKeyboardEvents_x                                  0x140351A00
#define __ProcessMouseEvents_x                                     0x14028F4A0
#define __SaveColors_x                                             0x1401A5CE0
#define __STMLToText_x                                             0x1405B8CB0
#define __WndProc_x                                                0x14034EA50
#define CMemoryMappedFile__SetFile_x                               0x14080F530
#define DrawNetStatus_x                                            0x1402DAED0
#define Util__FastTime_x                                           0x1405A3F60
#define __eq_delete_x                                              0x1406DB4F8
#define __eq_new_x                                                 0x1406DB750
#define __CopyLayout_x                                             0x1402C7CD0
#define __ThrottleFrameRate_x                                      0x14027CE97
#define __ThrottleFrameRateEnd_x                                   0x14027CE9D

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140361490
#define CAAWnd__Update_x                                           0x140361790
#define CAAWnd__UpdateSelected_x                                   0x1403629B0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400B0840
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A9150
#define CAdvancedLootWnd__AddPlayerToList_x                        0x1408692D0
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400B11A0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401B0FD0
#define AltAdvManager__IsAbilityReady_x                            0x1401B1470
#define AltAdvManager__GetAAById_x                                 0x1401B0860
#define AltAdvManager__CanTrainAbility_x                           0x1401B0660
#define AltAdvManager__CanSeeAbility_x                             0x1401B0310

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D8350
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D9210
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D9460
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400ED790
#define CharacterZoneClient__CanUseItem_x                          0x1400EDD50
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D9E40
#define CharacterZoneClient__CastSpell_x                           0x1400D9EE0
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E9C50
#define CharacterZoneClient__Cur_HP_x                              0x1400EF490
#define CharacterZoneClient__Cur_Mana_x                            0x1400EF650
#define CharacterZoneClient__FindAffectSlot_x                      0x1400DD150
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F5D70
#define CharacterZoneClient__GetBaseSkill_x                        0x1401042C0  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400DE5F0
#define CharacterZoneClient__GetCurrentMod_x                       0x1400ED090
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F7600
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F64F0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400DE770
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400CDDD0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400CFCA0
#define CharacterZoneClient__GetHPRegen_x                          0x1400F6C20
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400EF0E0
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F5E10
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400DE7F0
#define CharacterZoneClient__GetManaRegen_x                        0x1400F8490
#define CharacterZoneClient__GetModCap_x                           0x1400FFA70
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400DEA80
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400DEC50
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400D3330
#define CharacterZoneClient__HasSkill_x                            0x1400FB5B0
#define CharacterZoneClient__HitBySpell_x                          0x1400DF6E0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400E30B0
#define CharacterZoneClient__MakeMeVisible_x                       0x1400FF550
#define CharacterZoneClient__Max_Endurance_x                       0x1402F5C40  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400FF8A0
#define CharacterZoneClient__Max_Mana_x                            0x1402F5E60  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400FFD00
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E6700
#define CharacterZoneClient__SpellDuration_x                       0x1400E7430
#define CharacterZoneClient__TotalEffect_x                         0x1400E8820
#define CharacterZoneClient__UseSkill_x                            0x140105240


// CBankWnd
#define CBankWnd__WndNotification_x                                0x1403821D0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14038CFB0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140388C70
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14038CA20

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14038F810

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AE7B10

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403B29D0
#define CChatWindowManager__InitContextMenu_x                      0x1403B2B60
#define CChatWindowManager__FreeChatWindow_x                       0x1403B19D0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403BAED0
#define CChatWindowManager__CreateChatWindow_x                     0x1403B1410

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x14010D820

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403BBF40
#define CChatWindow__Clear_x                                       0x1403BCF50
#define CChatWindow__WndNotification_x                             0x1403BE1B0
#define CChatWindow__AddHistory_x                                  0x1403BCA50

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405E6540
#define CContextMenu__RemoveMenuItem_x                             0x1405E6950
#define CContextMenu__RemoveAllMenuItems_x                         0x1405E6920
#define CContextMenu__CheckMenuItem_x                              0x1405E6790
#define CContextMenu__SetMenuItem_x                                0x1405E6970
#define CContextMenu__AddSeparator_x                               0x1405E66C0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405D82D0
#define CContextMenuManager__RemoveMenu_x                          0x1405D88A0
#define CContextMenuManager__PopupMenu_x                           0x1405D85E0
#define CContextMenuManager__Flush_x                               0x1405D8350
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403CC7F0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1406B5350
#define CChatService__GetFriendName_x                              0x1406B5360

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405C91B0
#define CComboWnd__Draw_x                                          0x1405C92B0
#define CComboWnd__GetCurChoice_x                                  0x1405C95A0  // unused
#define CComboWnd__GetListRect_x                                   0x1405C9640
#define CComboWnd__InsertChoice_x                                  0x1405C9970
#define CComboWnd__SetColors_x                                     0x1405C9D00
#define CComboWnd__SetChoice_x                                     0x1405C9CC0
#define CComboWnd__GetItemCount_x                                  0x1405C9630
#define CComboWnd__GetCurChoiceText_x                              0x1405C95E0  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405C9570
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405C9A30

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403CA4E0
#define CContainerWnd__SetContainer_x                              0x14042A180
#define CContainerWnd__vftable_x                                   0x1409FCEC0

// CDisplay
#define CDisplay__cameraType_x                                     0x140DDB244
#define CDisplay__ZoneMainUI_x                                     0x140600A50
#define CDisplay__PreZoneMainUI_x                                  0x1401A2BF0
#define CDisplay__CleanGameUI_x                                    0x140194E50
#define CDisplay__GetClickedActor_x                                0x140199070
#define CDisplay__GetUserDefinedColor_x                            0x140199CE0
#define CDisplay__InitCharSelectUI_x                               0x140199F90
#define CDisplay__ReloadUI_x                                       0x1401A4EF0
#define CDisplay__RestartUI_x                                      0x1402077E0
#define CDisplay__WriteTextHD2_x                                   0x1401ABF00
#define CDisplay__TrueDistance_x                                   0x1401ABBA0
#define CDisplay__SetViewActor_x                                   0x1401A8410
#define CDisplay__GetFloorHeight_x                                 0x1401992D0
#define CDisplay__ToggleScreenshotMode_x                           0x1401AB690
#define CDisplay__RealRender_World_x                               0x1401A42C0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x14060AF10
#define CEditWnd__DrawCaret_x                                      0x1405FC6C0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405FCBD0
#define CEditWnd__GetCaretPt_x                                     0x1405FCE70  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405FCEB0
#define CEditWnd__GetDisplayString_x                               0x1405FD110
#define CEditWnd__GetHorzOffset_x                                  0x1405FD360
#define CEditWnd__GetLineForPrintableChar_x                        0x1405FD4C0
#define CEditWnd__GetSelStartPt_x                                  0x1405FD7B0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405FD5F0
#define CEditWnd__PointFromPrintableChar_x                         0x1405FE370
#define CEditWnd__ReplaceSelection_x                               0x1405FE720
#define CEditWnd__SelectableCharFromPoint_x                        0x1405FEBE0
#define CEditWnd__SetEditable_x                                    0x1405FEE60
#define CEditWnd__SetWindowText_x                                  0x1405FEE90

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14027DF70
#define CEverQuest__ClickedPlayer_x                                0x140272190
#define CEverQuest__CreateTargetIndicator_x                        0x140272A60
#define CEverQuest__DoTellWindow_x                                 0x14010D520 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x14010DE10 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14027F960
#define CEverQuest__dsp_chat_x                                     0x14010CF50 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402AAE70
#define CEverQuest__Emote_x                                        0x140280350
#define CEverQuest__GetBodyTypeDesc_x                              0x140281130
#define CEverQuest__GetClassDesc_x                                 0x140281190
#define CEverQuest__GetClassThreeLetterCode_x                      0x140281560
#define CEverQuest__GetDeityDesc_x                                 0x140281810
#define CEverQuest__GetLangDesc_x                                  0x140281C40
#define CEverQuest__GetRaceDesc_x                                  0x140281FE0
#define CEverQuest__InterpretCmd_x                                 0x140283C20
#define CEverQuest__LeftClickedOnPlayer_x                          0x1402993F0
#define CEverQuest__LMouseUp_x                                     0x140285730
#define CEverQuest__RightClickedOnPlayer_x                         0x140296990
#define CEverQuest__RMouseUp_x                                     0x140290030
#define CEverQuest__SetGameState_x                                 0x14029BE60
#define CEverQuest__UPCNotificationFlush_x                         0x1402A17F0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140285310
#define CEverQuest__ReportSuccessfulHeal_x                         0x140291420
#define CEverQuest__ReportSuccessfulHit_x                          0x140292240

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403E0100

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C7590
#define CGuild__GetGuildName_x                                     0x1400C75D0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x140406E70

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402BD3B0
#define CHotButton__SetCheck_x                                     0x1402BD680

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140420CE0
#define CInvSlotMgr__MoveItem_x                                    0x140421870
#define CInvSlotMgr__SelectSlot_x                                  0x140423B70

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x14041DAB0
#define CInvSlot__SliderComplete_x                                 0x14041F2E0
#define CInvSlot__GetItemBase_x                                    0x140419110
#define CInvSlot__UpdateItem_x                                     0x14041F7A0

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x140425D80

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140447A50
#define CItemDisplayWnd__UpdateStrings_x                           0x14044A6D0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140444310
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140445C50
#define CItemDisplayWnd__RequestConvertItem_x                      0x140446E70

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x140515490
#define CSpellDisplayWnd__UpdateStrings_x                          0x140517220

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140552BA0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1404409A0

// CSpellDisplayManager
#define CSpellDisplayManager__ShowSpell_x                          0x1405139B0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14015A820

// CLabel
#define CLabel__UpdateText_x                                       0x140451CF0

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405CCB40
#define CListWnd__dCListWnd_x                                      0x1405CCF80
#define CListWnd__vftable_x                                        0x140AE5C60
#define CListWnd__AddColumn_x                                      0x1405CD610
#define CListWnd__AddColumn1_x                                     0x1405CD6B0
#define CListWnd__AddLine_x                                        0x1405CD810
#define CListWnd__AddString_x                                      0x1405CDDB0
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405CE320
#define CListWnd__CalculateVSBRange_x                              0x1405CE600
#define CListWnd__ClearSel_x                                       0x1405CE7B0
#define CListWnd__ClearAllSel_x                                    0x1405CE750
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405CE810
#define CListWnd__Compare_x                                        0x1405CE9D0
#define CListWnd__Draw_x                                           0x1405CEE90
#define CListWnd__DrawColumnSeparators_x                           0x1405CFA20
#define CListWnd__DrawHeader_x                                     0x1405CFAE0
#define CListWnd__DrawItem_x                                       0x1405D01B0
#define CListWnd__DrawLine_x                                       0x1405D0B50
#define CListWnd__DrawSeparator_x                                  0x1405D1010
#define CListWnd__EnableLine_x                                     0x1405D1430
#define CListWnd__EnsureVisible_x                                  0x1405D1490
#define CListWnd__ExtendSel_x                                      0x1405D1590
#define CListWnd__GetColumnMinWidth_x                              0x1405D1920
#define CListWnd__GetColumnWidth_x                                 0x1405D19A0
#define CListWnd__GetCurSel_x                                      0x1405D1AA0
#define CListWnd__GetItemData_x                                    0x1405D1E20
#define CListWnd__GetItemHeight_x                                  0x1405D1E60
#define CListWnd__GetItemRect_x                                    0x1405D2090
#define CListWnd__GetItemText_x                                    0x1405D2330
#define CListWnd__GetSelList_x                                     0x1405D2590
#define CListWnd__GetSeparatorRect_x                               0x1405D2780
#define CListWnd__InsertLine_x                                     0x1405D3BF0
#define CListWnd__RemoveLine_x                                     0x1405D4260
#define CListWnd__SetColors_x                                      0x1405D4620
#define CListWnd__SetColumnJustification_x                         0x1405D4640
#define CListWnd__SetColumnLabel_x                                 0x1405D46C0
#define CListWnd__SetColumnWidth_x                                 0x1405D4860
#define CListWnd__SetCurSel_x                                      0x1405D4930
#define CListWnd__SetItemColor_x                                   0x1405D4BA0
#define CListWnd__SetItemData_x                                    0x1405D4C40
#define CListWnd__SetItemText_x                                    0x1405D4E80
#define CListWnd__Sort_x                                           0x1405D5290
#define CListWnd__ToggleSel_x                                      0x1405D5400
#define CListWnd__SetColumnsSizable_x                              0x1405D48B0
#define CListWnd__SetItemWnd_x                                     0x1405D4FB0
#define CListWnd__GetItemWnd_x                                     0x1405D2520
#define CListWnd__SetItemIcon_x                                    0x1405D4C80
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405CE0F0
#define CListWnd__SetVScrollPos_x                                  0x1405D51F0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140465680

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A4A850
#define MapViewMap__Clear_x                                        0x140467340
#define MapViewMap__SetZoom_x                                      0x14046DA20
#define MapViewMap__HandleLButtonDown_x                            0x14046A520

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14048FAA0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140496400
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140496BE0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14049A510
#define CMerchantWnd__SelectBuySellSlot_x                          0x140499810
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14049E9A0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x140690730
#define CPacketScrambler__hton_x                                   0x140690720

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405F5FA0
#define CSidlManagerBase__FindAnimation1_x                         0x1405F5EE0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405F65E0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405F6380
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405F52E0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405F5270
#define CSidlManagerBase__CreateXWnd_x                             0x1405F48B0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x140508310
#define CSidlManager__CreateXWnd_x                                 0x1405084D0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405BA8C0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x1405BA7A0
#define CSidlScreenWnd__ConvertToRes_x                             0x140605250 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x1405BAA40
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x1405B9EE0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x1405B9FB0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1405BA1C0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1405BB130
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405BB360
#define CSidlScreenWnd__GetChildItem_x                             0x1405BB500
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405BB750
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405C5790 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405BBAC0
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405BBE30
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405BC6F0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405BD0F0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F34E88
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405BD770
#define CSidlScreenWnd__StoreIniVis_x                              0x1405BDF60
#define CSidlScreenWnd__vftable_x                                  0x140AE4EE8
#define CSidlScreenWnd__WndNotification_x                          0x1405BDFB0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x1403392F0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140339610 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x140339540
#define CSkillMgr__IsActivatedSkill_x                              0x1403399D0
#define CSkillMgr__IsCombatSkill_x                                 0x140339A10
#define CSkillMgr__GetSkillTimerDuration_x                         0x140339940
#define CSkillMgr__GetSkillLastUsed_x                              0x140339590

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405D5D70
#define CSliderWnd__SetValue_x                                     0x1405D6580
#define CSliderWnd__SetNumTicks_x                                  0x1405D6400

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x14050EB70

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405DAD20
#define CStmlWnd__CalculateHSBRange_x                              0x1405C5150
#define CStmlWnd__CalculateVSBRange_x                              0x1405DBC50
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405DC6F0
#define CStmlWnd__ForceParseNow_x                                  0x1405DC790
#define CStmlWnd__GetVisibleText_x                                 0x1405DCE60
#define CStmlWnd__MakeStmlColorTag_x                               0x1405DEBF0
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405DEC30
#define CStmlWnd__SetSTMLText_x                                    0x1405E5CC0
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405E5E70
#define CStmlWnd__UpdateHistoryString_x                            0x1405E6210

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405D6950
#define CTabWnd__DrawCurrentPage_x                                 0x1405D69F0
#define CTabWnd__DrawTab_x                                         0x1405D6DC0
#define CTabWnd__GetTabRect_x                                      0x1405D7440
#define CTabWnd__InsertPage_x                                      0x1405D7710
#define CTabWnd__RemovePage_x                                      0x1405D79A0
#define CTabWnd__SetPage_x                                         0x1405D7B00
#define CTabWnd__UpdatePage_x                                      0x1405D7E00

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405FF2E0
#define CPageWnd__SetTabText_x                                     0x1405FF350

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400C0A90  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400C0EC0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405ED7C0
#define CTextureFont__DrawWrappedText1_x                           0x1405ED6C0
#define CTextureFont__DrawWrappedText2_x                           0x1405ED8F0
#define CTextureFont__GetTextExtent_x                              0x1405EDCA0
#define CTextureFont__GetHeight_x                                  0x1405EDC60

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x140603970

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405B7330

// CXStr
#define CXStr__gFreeLists_x                                        0x140D64050
#define CXStr__gCXStrAccess_x                                      0x140F349E8

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405C07B0
#define CXWnd__ClrFocus_x                                          0x1405C0AA0
#define CXWnd__Destroy_x                                           0x1405C0C20
#define CXWnd__DoAllDrawing_x                                      0x1405C0D20
#define CXWnd__DrawColoredRect_x                                   0x1405C14F0
#define CXWnd__DrawTooltip_x                                       0x1405C2B80
#define CXWnd__DrawTooltipAtPoint_x                                0x1405C2C40
#define CXWnd__GetChildItem_x                                      0x1405C3550
#define CXWnd__GetChildWndAt_x                                     0x1405C3610
#define CXWnd__GetClientRect_x                                     0x1405C38D0
#define CXWnd__GetClientClipRect_x                                 0x1405C3780
#define CXWnd__GetRelativeRect_x                                   0x1405C5290
#define CXWnd__GetScreenClipRect_x                                 0x1405C53A0
#define CXWnd__GetScreenRect_x                                     0x1405C5510
#define CXWnd__GetTooltipRect_x                                    0x1405C5690
#define CXWnd__IsActive_x                                          0x1405C5C50
#define CXWnd__IsDescendantOf_x                                    0x1405C5C80
#define CXWnd__IsReallyVisible_x                                   0x1405C5CE0
#define CXWnd__IsType_x                                            0x1405C5D30
#define CXWnd__Minimize_x                                          0x1405C5E30
#define CXWnd__ProcessTransition_x                                 0x1405C6CE0
#define CXWnd__Resize_x                                            0x1405C6E00
#define CXWnd__Right_x                                             0x1405C6EA0
#define CXWnd__SetFocus_x                                          0x1405C7270
#define CXWnd__SetFont_x                                           0x1405C72C0
#define CXWnd__SetKeyTooltip_x                                     0x1405C73C0
#define CXWnd__SetMouseOver_x                                      0x1405C7510
#define CXWnd__SetParent_x                                         0x1405C7590
#define CXWnd__StartFade_x                                         0x1405C79D0
#define CXWnd__vftable_x                                           0x140AE54C0
#define CXWnd__CXWnd_x                                             0x1405BF3D0
#define CXWnd__dCXWnd_x                                            0x1405BFD00

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x14060A6A0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405E7B30
#define CXWndManager__DrawCursor_x                                 0x1405E7E10
#define CXWndManager__DrawWindows_x                                0x1405E8070
#define CXWndManager__GetKeyboardFlags_x                           0x1405E86D0
#define CXWndManager__HandleKeyboardMsg_x                          0x1405E8710
#define CXWndManager__RemoveWnd_x                                  0x1405EBE50

// CDBStr
#define CDBStr__GetString_x                                        0x140193010

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x14069A720

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D5CE0
#define CCharacterListWnd__EnterWorld_x                            0x1400D4AE0
#define CCharacterListWnd__Quit_x                                  0x1400D5CC0
#define CCharacterListWnd__UpdateList_x                            0x1400D6A20

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140667700
#define ItemBase__CreateItemTagString_x                            0x140668180
#define ItemBase__GetImageNum_x                                    0x14066A810
#define ItemBase__GetItemValue_x                                   0x14066C710
#define ItemBase__IsEmpty_x                                        0x14066E410
#define ItemBase__IsKeyRingItem_x                                  0x14066EB20
#define ItemBase__ValueSellMerchant_x                              0x140672DB0
#define ItemClient__CanDrop_x                                      0x1402BFC20
#define ItemClient__CanGoInBag_x                                   0x1402BFD50
#define ItemClient__CreateItemClient_x                             0x1402BFFE0
#define ItemClient__dItemClient_x                                  0x1402BFA90

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401B29A0
#define EQ_LoadingS__Array_x                                       0x140D502A0

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14067EED0
#define PcBase__GetCombatAbility_x                                 0x14067F5D0
#define PcBase__GetCombatAbilityTimer_x                            0x14067F670
#define PcBase__GetItemContainedRealEstateIds_x                    0x14067FE40
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x1406808A0
#define PcClient__AlertInventoryChanged_x                          0x1402E3150
#define PcClient__GetConLevel_x                                    0x1402E3870  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402E5FA0
#define PcClient__HasLoreItem_x                                    0x1402E7020
#define PcZoneClient__GetItemRecastTimer_x                         0x1402F38E0
#define PcZoneClient__RemoveMyAffect_x                             0x1402F6D70

// EQGroundItemListManager
#define EQGroundItem__EQGroundItem_x                               0x140227D00
#define EQGroundItemListManager__Add_x                             0x140227EB0
#define EQGroundItemListManager__Clear_x                           0x140227F50
#define EQGroundItemListManager__Delete_x                          0x140228010
#define EQGroundItemListManager__Instance_x                        0x1402280A0

// EQPlacedItemManager
#define EQPlacedItemManager__Add_x                                 0x1402633F0

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14018D730

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140653890
#define PlayerBase__CanSee1_x                                      0x140653970
#define PlayerBase__GetVisibilityLineSegment_x                     0x140653E60
#define PlayerBase__HasProperty_x                                  0x140654040
#define PlayerBase__IsTargetable_x                                 0x140654100
#define PlayerClient__ChangeBoneStringSprite_x                     0x140304A70
#define PlayerClient__GetPcClient_x                                0x140307580
#define PlayerClient__PlayerClient_x                               0x1402FCDA0
#define PlayerClient__SetNameSpriteState_x                         0x14030ACB0
#define PlayerClient__SetNameSpriteTint_x                          0x14030BC70
#define PlayerZoneClient__ChangeHeight_x                           0x14031A7A0
#define PlayerZoneClient__DoAttack_x                               0x14031B4B0
#define PlayerZoneClient__GetLevel_x                               0x14031EC00
#define PlayerZoneClient__IsValidTeleport_x                        0x140266170
#define PlayerZoneClient__LegalPlayerRace_x                        0x1401A1470

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x140313C70  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x140313D20  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x140313E20
#define PlayerManagerClient__CreatePlayer_x                        0x140313730
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140653450

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402C51C0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402C4AD0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402C4B40
#define KeypressHandler__ClearCommandStateArray_x                  0x1402C5150  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402C52E0
#define KeypressHandler__HandleKeyUp_x                             0x1402C5400
#define KeypressHandler__SaveKeymapping_x                          0x1402C4FD0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140698230  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x140691E50

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402ED0F0  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402F1A10
#define PcZoneClient__GetPcSkillLimit_x                            0x1402F49A0
#define PcZoneClient__RemovePetEffect_x                            0x1402F7050
#define PcZoneClient__HasAlternateAbility_x                        0x1402F5570
#define PcZoneClient__CanEquipItem_x                               0x1402EFCD0
#define PcZoneClient__GetItemByID_x                                0x1402F2960
#define PcZoneClient__RemoveBuffEffect_x                           0x1402F6C00
#define PcZoneClient__BandolierSwap_x                              0x1402E3200

// Doors
#define EQSwitch__UseSwitch_x                                      0x14026AD00

// IconCache
#define IconCache__GetIcon_x                                       0x1403D4F70

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403C9230
#define CContainerMgr__CloseContainer_x                            0x1403C8B50
#define CContainerMgr__OpenExperimentContainer_x                   0x1403C95D0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404CB630

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402B71B0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140459220
#define CLootWnd__RequestLootSlot_x                                0x14045A270

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401E2CB0
#define EQ_Spell__SpellAffects_x                                   0x1401E3F90
#define EQ_Spell__SpellAffectBase_x                                0x1401E3EF0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400DEDE0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400DED90
#define EQ_Spell__IsSPAStacking_x                                  0x1401E3BC0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401E3770
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401E3030

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C6090

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1405292A0
#define CTargetWnd__RefreshTargetBuffs_x                           0x1405289C0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1405281C0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x140530B40  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x14018A1B0
#define CTaskManager__GetTaskStatus_x                              0x14018A2C0
#define CTaskManager__GetElementDescription_x                      0x140189E40

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401E0FD0
#define EqSoundManager__PlayScriptMp3_x                            0x1401DFE10
#define EqSoundManager__SoundAssistPlay_x                          0x14033E730  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x14033EA70  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405C8750
#define CTextureAnimation__SetCurCell_x                            0x1405C8A60

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402B53A0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1406B2AC0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1406B2B40
#define CharacterBase__IsExpansionFlag_x                           0x140206E40

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x1403A38C0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x1403A4330
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x1403A5890

// messages
#define msg_spell_worn_off_x                                       0x14021DF80
#define msg_new_text_x                                             0x140219760
#define __msgTokenTextParam_x                                      0x140210BA0
#define msgTokenText_x                                             0x140210AB0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140340390
#define SpellManager__GetSpellByGroupAndRank_x                     0x140340290

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140662E20

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140452470

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403CE080
#define CCursorAttachment__IsOkToActivate_x                        0x1403D1510
#define CCursorAttachment__RemoveAttachment_x                      0x1403D17C0
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x140601DD0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x140601FD0
#define CEQSuiteTextureLoader__GetTexture_x                        0x140601FE0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x1401550A0
#define CFindItemWnd__Update_x                                     0x140155A60
#define CFindItemWnd__PickupSelectedItem_x                         0x14014E740

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14015FCB0
#define LootFiltersManager__GetItemFilterData_x                    0x1401607E0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140161090
#define LootFiltersManager__SetItemLootFilter_x                    0x140161340

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x1404AD440

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x140338EB0
#define CResolutionHandler__UpdateResolution_x                     0x1405ACF70

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403C5490

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406B6EE0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406B6DD0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403EF660
#define CGroupWnd__UpdateDisplay_x                                 0x1403EE7F0

// ItemBase
#define ItemBase__IsLore_x                                         0x14066EC60
#define ItemBase__IsLoreEquipped_x                                 0x14066ECF0

#define MultipleItemMoveManager__ProcessMove_x                     0x1402D8CC0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140263550
#define EQPlacedItemManager__GetItemByGuid_x                       0x1402634E0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140263520

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140333130

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x14012B350
#define FactionManagerClient__HandleFactionMessage_x               0x14012B730
#define FactionManagerClient__GetFactionStanding_x                 0x14012AB20
#define FactionManagerClient__GetMaxFaction_x                      0x14012AB20
#define FactionManagerClient__GetMinFaction_x                      0x14012A9D0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400B2EA0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140136D00

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401BB700
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401BA8A0
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401BB520  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401BB4A0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x1403456A0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140333130

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405BE5A0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140088E10

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140356DE0

// AchievementManager
#define AchievementManager__Instance_x                             0x140091FC0

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x14069B2B0
#define FreeToPlayClient__RestrictionInfo_x                        0x140AF9E70

// UdpConnection
#define UdpConnection__GetStats_x                                  0x14055FC60

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x14084F8E8
#define CGFScreenWnd__CGFScreenWnd_x                               0x140072AC0
#define CGFScreenWnd__CGFScreenWnd1_x                              0x140072C50
#define CGFScreenWnd__dCGFScreenWnd_x                              0x140072E00

#if __has_include("../../../../private/eqgame-private.h")
#include "../../../../private/eqgame-private.h"
#endif
