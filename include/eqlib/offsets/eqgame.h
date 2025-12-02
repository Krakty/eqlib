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

#define __ClientDate                                               20251124u
#define __ExpectedVersionDate                                     "Nov 24 2025"
#define __ExpectedVersionTime                                     "12:41:52"
#define __ActualVersionDate_x                                      0x140970898
#define __ActualVersionTime_x                                      0x140970888
#define __ActualVersionBuild_x                                     0x140905A50

// Memory Protection
#define __MemChecker0_x                                            0x1402C4900
#define __MemChecker1_x                                            0x140592050
#define __MemChecker4_x                                            0x140292120
#define __EncryptPad0_x                                            0x140D43F20

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E7C990
#define instEQZoneInfo_x                                           0x140E7CB84 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x140225D60
#define __gfMaxZoomCameraDistance_x                                0x140906CF8
#define __gfMaxCameraDistance_x                                    0x140AB0C44
#define __CurrentSocial_x                                          0x140BFF950 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D3B730
#define g_eqCommandStates_x                                        0x140D3C7D0
#define __CommandList_x                                            0x140D3CA00
#define __ScreenMode_x                                             0x140DC42E4
#define __gWorld_x                                                 0x140E76E70
#define __gpbCommandEvent_x                                        0x140E773C8
#define __ServerHost_x                                             0x140E775C8
#define __Guilds_x                                                 0x140E7B550
#define __MemCheckBitmask_x                                        0x140E7CECF
#define __MemCheckActive_x                                         0x140E7E5E5
#define __MouseEventTime_x                                         0x140EF1F60
#define DI8__MouseState_x                                          0x140EF61B0
#define __heqmain_x                                                0x140EF8640
#define DI8__Mouse_x                                               0x140EF8658
#define __HWnd_x                                                   0x140EF8660
#define __Mouse_x                                                  0x140EF8668
#define DI8__Keyboard_x                                            0x140EF8688
#define __LoginName_x                                              0x140EF8D6C
#define __CurrentMapLabel_x                                        0x140F0C880
#define __LabelCache_x                                             0x140F0D450
#define __ChatFilterDefs_x                                         0x140A4AB00
#define Teleport_Table_Size_x                                      0x140E7745C
#define Teleport_Table_x                                           0x140E74E30

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E778E0
#define pinstActiveBanker_x                                        0x140E77310
#define pinstActiveCorpse_x                                        0x140E77300
#define pinstActiveGMaster_x                                       0x140E77308
#define pinstActiveMerchant_x                                      0x140E772F8
#define pinstAltAdvManager_x                                       0x140DC50D8
#define pinstCEverQuest_x                                          0x140EF6108
#define pinstCamActor_x                                            0x140DC42D0
#define pinstCDBStr_x                                              0x140DC3E90
#define pinstCDisplay_x                                            0x140E74E28
#define pinstControlledPlayer_x                                    0x140E773A0
#define pinstCResolutionHandler_x                                  0x140F1DC88
#define pinstCSidlManager_x                                        0x140F1E9F0
#define pinstCXWndManager_x                                        0x140F1E9E8
#define instDynamicZone_x                                          0x140E7B410 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E7B45E
#define instExpeditionName_x                                       0x140E7B49E
#define pinstDZMember_x                                            0x140E7B528
#define pinstDZTimerInfo_x                                         0x140E7B530
#define pinstEqLogin_x                                             0x140EF86B0
#define instTribute_x                                              0x140D36D60
#define pinstDeviceInputProxy_x                                    0x140E7C9EC
#define pinstEQSoundManager_x                                      0x140DC5460
#define pinstEQSpellStrings_x                                      0x140DA8A20
#define pinstSGraphicsEngine_x                                     0x140F1DA18
#define pinstLocalPC_x                                             0x140E76E58
#define pinstLocalPlayer_x                                         0x140E772F0
#define pinstCMercenaryClientManager_x                             0x140EF3898
#define pinstModelPlayer_x                                         0x140E77320
#define pinstRenderInterface_x                                     0x140F1DA30
#define pinstSkillMgr_x                                            0x140EF5548
#define pinstSpawnManager_x                                        0x140EF3C50
#define pinstSpellManager_x                                        0x140EF55B0
#define pinstStringTable_x                                         0x140E76E60
#define pinstSwitchManager_x                                       0x140E74D90
#define pinstTarget_x                                              0x140E77398
#define pinstTaskMember_x                                          0x140D36D50 // Part of g_taskManager
#define pinstTradeTarget_x                                         0x140E77318
#define instTributeActive_x                                        0x140D36D89
#define pinstViewActor_x                                           0x140DC42C8
#define pinstWorldData_x                                           0x140E74E20
#define pinstPlayerPath_x                                          0x140EF3C78
#define pinstTargetIndicator_x                                     0x140EF5660
#define EQObject_Top_x                                             0x140E77450

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140F099E0
#define pinstCContainerMgr_x                                       0x140DC4338
#define pinstCContextMenuManager_x                                 0x140F1E6D0
#define pinstCInvSlotMgr_x                                         0x140DC4318
#define pinstCItemDisplayManager_x                                 0x140F0C450
#define pinstCPopupWndManager_x                                    0x140F0CCE0
#define pinstCSpellDisplayMgr_x                                    0x140F0D330
#define pinstCTaskManager_x                                        0x140BFFC90
#define pinstEQSuiteTextureLoader_x                                0x140D4D640
#define pinstItemIconCache_x                                       0x140F09D40
#define pinstLootFiltersManager_x                                  0x140DC38D8
#define pinstGFViewListener_x                                      0x140F1DEA8


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x14024FAD0
#define __CastRay_x                                                0x140247D40
#define __CastRay2_x                                               0x140247A40
#define __compress_block_x                                         0x140547410
#define __ConvertItemTags_x                                        0x1402481A0
#define __CleanItemTags_x                                          0x14008A7B0
#define __CreateCascadeMenuItems_x                                 0x140190AA0
#define __decompress_block_x                                       0x14058D860
#define __DoesFileExist_x                                          0x140595F00
#define __EQGetTime_x                                              0x140592600
#define __ExecuteCmd_x                                             0x14021D2F0
#define __FixHeading_x                                             0x14064CE60
#define __FlushDxKeyboard_x                                        0x140348780
#define __get_bearing_x                                            0x140251D00
#define __get_melee_range_x                                        0x140251DF0
#define __GetAnimationCache_x                                      0x1403CA100
#define __GetGaugeValueFromEQ_x                                    0x140506E70
#define __GetLabelFromEQ_x                                         0x140508470
#define __GetXTargetType_x                                         0x14064E140   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14064CEE0
#define __HelpPath_x                                               0x140EF1E28   // Why?
#define __NewUIINI_x                                               0x140513EA0   // Why?
#define __ProcessDeviceEvents_x                                    0x140292730
#define __ProcessGameEvents_x                                      0x140287150
#define __ProcessKeyboardEvents_x                                  0x140349ED0
#define __ProcessMouseEvents_x                                     0x140288860
#define __SaveColors_x                                             0x1401A09A0
#define __STMLToText_x                                             0x1405A5B00
#define __WndProc_x                                                0x140346F20
#define CMemoryMappedFile__SetFile_x                               0x1407FACE0
#define DrawNetStatus_x                                            0x1402D3C40
#define Util__FastTime_x                                           0x140591B30
#define __eq_delete_x                                              0x1406C6C98
#define __eq_new_x                                                 0x1406C6EF0
#define __CopyLayout_x                                             0x1402C0D20
#define __ThrottleFrameRate_x                                      0x14027671C
#define __ThrottleFrameRateEnd_x                                   0x140276722

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x1403599C0
#define CAAWnd__Update_x                                           0x140359CC0
#define CAAWnd__UpdateSelected_x                                   0x14035AEC0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AD1A0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A5B80
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140851A10
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400ADAD0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401ABC00
#define AltAdvManager__IsAbilityReady_x                            0x1401AC090
#define AltAdvManager__GetAAById_x                                 0x1401AB4D0
#define AltAdvManager__CanTrainAbility_x                           0x1401AB2C0
#define AltAdvManager__CanSeeAbility_x                             0x1401AAF80

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D4590
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D5400
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D5650
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400E9980
#define CharacterZoneClient__CanUseItem_x                          0x1400E9F40
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D6020
#define CharacterZoneClient__CastSpell_x                           0x1400D60C0
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E5E50
#define CharacterZoneClient__Cur_HP_x                              0x1400EB660
#define CharacterZoneClient__Cur_Mana_x                            0x1400EB820
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D9330
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F1EE0
#define CharacterZoneClient__GetBaseSkill_x                        0x1401005B0  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400DA7D0
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E9280
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F3780
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F2660
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400DA950
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400CA3A0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400CC270
#define CharacterZoneClient__GetHPRegen_x                          0x1400F2DA0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400EB2D0
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F3A10
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400DA9D0
#define CharacterZoneClient__GetManaRegen_x                        0x1400F4790
#define CharacterZoneClient__GetModCap_x                           0x1400FBD60
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400DAC60
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400DAE30
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CF900
#define CharacterZoneClient__HasSkill_x                            0x1400F78A0
#define CharacterZoneClient__HitBySpell_x                          0x1400DB8C0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DF240
#define CharacterZoneClient__MakeMeVisible_x                       0x1400FB840
#define CharacterZoneClient__Max_Endurance_x                       0x1402EE9C0  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400FBB90
#define CharacterZoneClient__Max_Mana_x                            0x1402EEBE0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400FBFF0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E2890
#define CharacterZoneClient__SpellDuration_x                       0x1400E35C0
#define CharacterZoneClient__TotalEffect_x                         0x1400E49A0
#define CharacterZoneClient__UseSkill_x                            0x140101520


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140378850

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140382E70

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14037ECD0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x1403828F0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x1403855D0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AD02D0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403A8320
#define CChatWindowManager__InitContextMenu_x                      0x1403A84B0
#define CChatWindowManager__FreeChatWindow_x                       0x1403A7370
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403B0460
#define CChatWindowManager__CreateChatWindow_x                     0x1403A6DB0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140109A90

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403B14B0
#define CChatWindow__Clear_x                                       0x1403B2470
#define CChatWindow__WndNotification_x                             0x1403B3650
#define CChatWindow__AddHistory_x                                  0x1403B1F70

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405D3380
#define CContextMenu__RemoveMenuItem_x                             0x1405D3770
#define CContextMenu__RemoveAllMenuItems_x                         0x1405D3740
#define CContextMenu__CheckMenuItem_x                              0x1405D35B0
#define CContextMenu__SetMenuItem_x                                0x1405D3790
#define CContextMenu__AddSeparator_x                               0x1405D34F0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405C5240
#define CContextMenuManager__RemoveMenu_x                          0x1405C5820
#define CContextMenuManager__PopupMenu_x                           0x1405C5560
#define CContextMenuManager__Flush_x                               0x1405C52C0
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403C1AD0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1406A0AB0
#define CChatService__GetFriendName_x                              0x1406A0AC0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405B6150
#define CComboWnd__Draw_x                                          0x1405B6250
#define CComboWnd__GetCurChoice_x                                  0x1405B6530  // unused
#define CComboWnd__GetListRect_x                                   0x1405B65D0
#define CComboWnd__InsertChoice_x                                  0x1405B6910
#define CComboWnd__SetColors_x                                     0x1405B6CA0
#define CComboWnd__SetChoice_x                                     0x1405B6C60
#define CComboWnd__GetItemCount_x                                  0x1405B65C0
#define CComboWnd__GetCurChoiceText_x                              0x1405B6570  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405B6500
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405B69D0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403BF7D0
#define CContainerWnd__SetContainer_x                              0x14041B4D0
#define CContainerWnd__vftable_x                                   0x1409E5918

// CDisplay
#define CDisplay__cameraType_x                                     0x140DC4054
#define CDisplay__ZoneMainUI_x                                     0x1405ED670
#define CDisplay__PreZoneMainUI_x                                  0x14019D8A0
#define CDisplay__CleanGameUI_x                                    0x14018FB60
#define CDisplay__GetClickedActor_x                                0x140193D30
#define CDisplay__GetUserDefinedColor_x                            0x1401949A0
#define CDisplay__InitCharSelectUI_x                               0x140194C50
#define CDisplay__ReloadUI_x                                       0x14019FBA0
#define CDisplay__RestartUI_x                                      0x140201B80
#define CDisplay__WriteTextHD2_x                                   0x1401A6BB0
#define CDisplay__TrueDistance_x                                   0x1401A6860
#define CDisplay__SetViewActor_x                                   0x1401A30D0
#define CDisplay__GetFloorHeight_x                                 0x140193F90
#define CDisplay__ToggleScreenshotMode_x                           0x1401A6350
#define CDisplay__RealRender_World_x                               0x14019EF70

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405F78A0
#define CEditWnd__DrawCaret_x                                      0x1405E9390  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405E9830
#define CEditWnd__GetCaretPt_x                                     0x1405E9AB0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405E9AF0
#define CEditWnd__GetDisplayString_x                               0x1405E9D60
#define CEditWnd__GetHorzOffset_x                                  0x1405E9F90
#define CEditWnd__GetLineForPrintableChar_x                        0x1405EA0E0
#define CEditWnd__GetSelStartPt_x                                  0x1405EA3C0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405EA210
#define CEditWnd__PointFromPrintableChar_x                         0x1405EAF70
#define CEditWnd__ReplaceSelection_x                               0x1405EB320
#define CEditWnd__SelectableCharFromPoint_x                        0x1405EB7C0
#define CEditWnd__SetEditable_x                                    0x1405EBA40
#define CEditWnd__SetWindowText_x                                  0x1405EBA70

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x1402777F0
#define CEverQuest__ClickedPlayer_x                                0x14026B7E0
#define CEverQuest__CreateTargetIndicator_x                        0x14026C0A0
#define CEverQuest__DoTellWindow_x                                 0x1401097A0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x14010A080 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x1402791E0
#define CEverQuest__dsp_chat_x                                     0x1401091E0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402A4160
#define CEverQuest__Emote_x                                        0x140279BD0
#define CEverQuest__GetBodyTypeDesc_x                              0x14027A9B0
#define CEverQuest__GetClassDesc_x                                 0x14027AA10
#define CEverQuest__GetClassThreeLetterCode_x                      0x14027ADE0
#define CEverQuest__GetDeityDesc_x                                 0x14027B090
#define CEverQuest__GetLangDesc_x                                  0x14027B4C0
#define CEverQuest__GetRaceDesc_x                                  0x14027B860
#define CEverQuest__InterpretCmd_x                                 0x14027D1F0
#define CEverQuest__LeftClickedOnPlayer_x                          0x1402927A0
#define CEverQuest__LMouseUp_x                                     0x14027EC70
#define CEverQuest__RightClickedOnPlayer_x                         0x14028FD30
#define CEverQuest__RMouseUp_x                                     0x1402893F0
#define CEverQuest__SetGameState_x                                 0x140295220
#define CEverQuest__UPCNotificationFlush_x                         0x14029AB90 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14027E8D0
#define CEverQuest__ReportSuccessfulHeal_x                         0x14028A7C0
#define CEverQuest__ReportSuccessfulHit_x                          0x14028B5E0

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403D4FF0

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C3C30
#define CGuild__GetGuildName_x                                     0x1400C3C70

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403F84E0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402B6440
#define CHotButton__SetCheck_x                                     0x1402B6710

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1404120F0
#define CInvSlotMgr__MoveItem_x                                    0x140412C80
#define CInvSlotMgr__SelectSlot_x                                  0x140414FA0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x14040F150
#define CInvSlot__SliderComplete_x                                 0x140410750
#define CInvSlot__GetItemBase_x                                    0x14040A940
#define CInvSlot__UpdateItem_x                                     0x140410C10

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x140417190

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140438B00
#define CItemDisplayWnd__UpdateStrings_x                           0x14043B6D0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140435300
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140436C60
#define CItemDisplayWnd__RequestConvertItem_x                      0x140437F20

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1405038E0
#define CSpellDisplayWnd__UpdateStrings_x                          0x140505670

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140540770

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1404319D0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140156190

// CLabel
#define CLabel__UpdateText_x                                       0x140442AC0

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405B9AE0
#define CListWnd__dCListWnd_x                                      0x1405B9F30
#define CListWnd__vftable_x                                        0x140ACE420
#define CListWnd__AddColumn_x                                      0x1405BA5D0
#define CListWnd__AddColumn1_x                                     0x1405BA670
#define CListWnd__AddLine_x                                        0x1405BA7D0
#define CListWnd__AddString_x                                      0x1405BAD60
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405BB2D0
#define CListWnd__CalculateVSBRange_x                              0x1405BB5B0
#define CListWnd__ClearSel_x                                       0x1405BB760
#define CListWnd__ClearAllSel_x                                    0x1405BB700
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405BB7C0
#define CListWnd__Compare_x                                        0x1405BB970
#define CListWnd__Draw_x                                           0x1405BBE40
#define CListWnd__DrawColumnSeparators_x                           0x1405BC9F0
#define CListWnd__DrawHeader_x                                     0x1405BCAB0
#define CListWnd__DrawItem_x                                       0x1405BD180
#define CListWnd__DrawLine_x                                       0x1405BDB00
#define CListWnd__DrawSeparator_x                                  0x1405BDFC0
#define CListWnd__EnableLine_x                                     0x1405BE3E0
#define CListWnd__EnsureVisible_x                                  0x1405BE440
#define CListWnd__ExtendSel_x                                      0x1405BE540
#define CListWnd__GetColumnMinWidth_x                              0x1405BE8D0
#define CListWnd__GetColumnWidth_x                                 0x1405BE950
#define CListWnd__GetCurSel_x                                      0x1405BEA50
#define CListWnd__GetItemData_x                                    0x1405BEDD0
#define CListWnd__GetItemHeight_x                                  0x1405BEE10
#define CListWnd__GetItemRect_x                                    0x1405BF030
#define CListWnd__GetItemText_x                                    0x1405BF2D0
#define CListWnd__GetSelList_x                                     0x1405BF520
#define CListWnd__GetSeparatorRect_x                               0x1405BF710
#define CListWnd__InsertLine_x                                     0x1405C0B70
#define CListWnd__RemoveLine_x                                     0x1405C11E0
#define CListWnd__SetColors_x                                      0x1405C15A0
#define CListWnd__SetColumnJustification_x                         0x1405C15C0
#define CListWnd__SetColumnLabel_x                                 0x1405C1640
#define CListWnd__SetColumnWidth_x                                 0x1405C17E0
#define CListWnd__SetCurSel_x                                      0x1405C18B0
#define CListWnd__SetItemColor_x                                   0x1405C1B20
#define CListWnd__SetItemData_x                                    0x1405C1BC0
#define CListWnd__SetItemText_x                                    0x1405C1E00
#define CListWnd__Sort_x                                           0x1405C2210
#define CListWnd__ToggleSel_x                                      0x1405C2380
#define CListWnd__SetColumnsSizable_x                              0x1405C1830
#define CListWnd__SetItemWnd_x                                     0x1405C1F30
#define CListWnd__GetItemWnd_x                                     0x1405BF4B0
#define CListWnd__SetItemIcon_x                                    0x1405C1C00
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405BB0A0
#define CListWnd__SetVScrollPos_x                                  0x1405C2170

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140455FE0

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A33328
#define MapViewMap__Clear_x                                        0x140457B60
#define MapViewMap__SetZoom_x                                      0x14045E1B0
#define MapViewMap__HandleLButtonDown_x                            0x14045ACF0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14047F9E0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140486270
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140486A40
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14048A330
#define CMerchantWnd__SelectBuySellSlot_x                          0x140489670
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14048E730

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14067BA80
#define CPacketScrambler__hton_x                                   0x14067BA70

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405E2C50
#define CSidlManagerBase__FindAnimation1_x                         0x1405E2B90
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405E3280
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405E3030
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405E1F90
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405E1F20
#define CSidlManagerBase__CreateXWnd_x                             0x1405E1580

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404F6880
#define CSidlManager__CreateXWnd_x                                 0x1404F6A40

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405A75F0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x1405A7720
#define CSidlScreenWnd__ConvertToRes_x                             0x1405F1DE0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x1405A78A0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x1405A6D20
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x1405A6DF0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1405A7000
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1405A7F90
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405A81C0
#define CSidlScreenWnd__GetChildItem_x                             0x1405A8360
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405A85B0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405B26D0 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405A8920
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405A8C90
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405A9560
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405A9F60
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F1DD48
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405AA5F0
#define CSidlScreenWnd__StoreIniVis_x                              0x1405AADE0
#define CSidlScreenWnd__vftable_x                                  0x140ACD6A8
#define CSidlScreenWnd__WndNotification_x                          0x1405AAE30

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x140331900 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140331C20 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x140331B50
#define CSkillMgr__IsActivatedSkill_x                              0x140331FE0
#define CSkillMgr__IsCombatSkill_x                                 0x140332020
#define CSkillMgr__GetSkillTimerDuration_x                         0x140331F50
#define CSkillMgr__GetSkillLastUsed_x                              0x140331BA0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405C2D00
#define CSliderWnd__SetValue_x                                     0x1405C3510
#define CSliderWnd__SetNumTicks_x                                  0x1405C3390

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404FD010

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405C7CA0
#define CStmlWnd__CalculateHSBRange_x                              0x1405B2090
#define CStmlWnd__CalculateVSBRange_x                              0x1405C8BC0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405C9640
#define CStmlWnd__ForceParseNow_x                                  0x1405C96E0
#define CStmlWnd__GetVisibleText_x                                 0x1405C9DB0
#define CStmlWnd__MakeStmlColorTag_x                               0x1405CBB10
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405CBB50
#define CStmlWnd__SetSTMLText_x                                    0x1405D2B20
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405D2CD0
#define CStmlWnd__UpdateHistoryString_x                            0x1405D3060

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405C38E0
#define CTabWnd__DrawCurrentPage_x                                 0x1405C3980
#define CTabWnd__DrawTab_x                                         0x1405C3D50
#define CTabWnd__GetTabRect_x                                      0x1405C43B0
#define CTabWnd__InsertPage_x                                      0x1405C4680
#define CTabWnd__RemovePage_x                                      0x1405C4910
#define CTabWnd__SetPage_x                                         0x1405C4A70
#define CTabWnd__UpdatePage_x                                      0x1405C4D70

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405EBED0
#define CPageWnd__SetTabText_x                                     0x1405EBF40

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BD1D0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BD5E0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405DA630
#define CTextureFont__DrawWrappedText1_x                           0x1405DA540
#define CTextureFont__DrawWrappedText2_x                           0x1405DA760
#define CTextureFont__GetTextExtent_x                              0x1405DAB10
#define CTextureFont__GetHeight_x                                  0x1405DAAD0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405F0540

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405A41F0

// CXStr
#define CXStr__gFreeLists_x                                        0x140D4CFB0
#define CXStr__gCXStrAccess_x                                      0x140F1D8A8

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405AD6E0
#define CXWnd__ClrFocus_x                                          0x1405AD9D0
#define CXWnd__Destroy_x                                           0x1405ADB50
#define CXWnd__DoAllDrawing_x                                      0x1405ADC60
#define CXWnd__DrawColoredRect_x                                   0x1405AE430
#define CXWnd__DrawTooltip_x                                       0x1405AFAC0
#define CXWnd__DrawTooltipAtPoint_x                                0x1405AFB70
#define CXWnd__GetChildItem_x                                      0x1405B0480
#define CXWnd__GetChildWndAt_x                                     0x1405B0530
#define CXWnd__GetClientRect_x                                     0x1405B07F0
#define CXWnd__GetClientClipRect_x                                 0x1405B06A0
#define CXWnd__GetRelativeRect_x                                   0x1405B21C0
#define CXWnd__GetScreenClipRect_x                                 0x1405B22D0
#define CXWnd__GetScreenRect_x                                     0x1405B2450
#define CXWnd__GetTooltipRect_x                                    0x1405B25D0
#define CXWnd__IsActive_x                                          0x1405B2B90
#define CXWnd__IsDescendantOf_x                                    0x1405B2BC0
#define CXWnd__IsReallyVisible_x                                   0x1405B2C30
#define CXWnd__IsType_x                                            0x1405B2C80
#define CXWnd__Minimize_x                                          0x1405B2D80
#define CXWnd__ProcessTransition_x                                 0x1405B3C60
#define CXWnd__Resize_x                                            0x1405B3D80
#define CXWnd__Right_x                                             0x1405B3E20
#define CXWnd__SetFocus_x                                          0x1405B41E0
#define CXWnd__SetFont_x                                           0x1405B4230
#define CXWnd__SetKeyTooltip_x                                     0x1405B4340
#define CXWnd__SetMouseOver_x                                      0x1405B4480
#define CXWnd__SetParent_x                                         0x1405B4500
#define CXWnd__StartFade_x                                         0x1405B4950
#define CXWnd__vftable_x                                           0x140ACDC80
#define CXWnd__CXWnd_x                                             0x1405AC250
#define CXWnd__dCXWnd_x                                            0x1405ACBC0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405F7020

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405D4920
#define CXWndManager__DrawCursor_x                                 0x1405D4C00
#define CXWndManager__DrawWindows_x                                0x1405D4E60
#define CXWndManager__GetKeyboardFlags_x                           0x1405D54B0
#define CXWndManager__HandleKeyboardMsg_x                          0x1405D54F0
#define CXWndManager__RemoveWnd_x                                  0x1405D8D10

// CDBStr
#define CDBStr__GetString_x                                        0x14018DD20

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1406858E0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D2090
#define CCharacterListWnd__EnterWorld_x                            0x1400D10A0
#define CCharacterListWnd__Quit_x                                  0x1400D2070
#define CCharacterListWnd__UpdateList_x                            0x1400D2EF0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140652F20
#define ItemBase__CreateItemTagString_x                            0x1406539C0
#define ItemBase__GetImageNum_x                                    0x140656110
#define ItemBase__GetItemValue_x                                   0x140657BE0
#define ItemBase__IsEmpty_x                                        0x140659980
#define ItemBase__IsKeyRingItem_x                                  0x14065A0C0
#define ItemBase__ValueSellMerchant_x                              0x14065E390
#define ItemClient__CanDrop_x                                      0x1402B8D00
#define ItemClient__CanGoInBag_x                                   0x1402B8E30
#define ItemClient__CreateItemClient_x                             0x1402B90C0
#define ItemClient__dItemClient_x                                  0x1402B8B70

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401AD5B0
#define EQ_LoadingS__Array_x                                       0x140D39240

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14066A3E0
#define PcBase__GetCombatAbility_x                                 0x14066AAD0
#define PcBase__GetCombatAbilityTimer_x                            0x14066AB70
#define PcBase__GetItemContainedRealEstateIds_x                    0x14066B310
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14066BD90
#define PcClient__AlertInventoryChanged_x                          0x1402DBE90
#define PcClient__GetConLevel_x                                    0x1402DC5E0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402DED70
#define PcClient__HasLoreItem_x                                    0x1402DFDC0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402EC630
#define PcZoneClient__RemoveMyAffect_x                             0x1402EFB00

// EQGroundItemListManager
#define EQGroundItem__EQGroundItem_x                               0x140221CF0
#define EQGroundItemListManager__Add_x                             0x140221EA0
#define EQGroundItemListManager__Clear_x                           0x140221F40
#define EQGroundItemListManager__Delete_x                          0x140222000
#define EQGroundItemListManager__Instance_x                        0x140222090

// EQPlacedItemManager
#define EQPlacedItemManager__Add_x                                 0x14025CBB0

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140188530

// PlayerClient
#define PlayerBase__CanSee_x                                       0x14063F850
#define PlayerBase__CanSee1_x                                      0x14063F920
#define PlayerBase__GetVisibilityLineSegment_x                     0x14063FE00
#define PlayerBase__HasProperty_x                                  0x14063FFD0
#define PlayerBase__IsTargetable_x                                 0x140640090
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402FD7A0
#define PlayerClient__GetPcClient_x                                0x1403002D0
#define PlayerClient__PlayerClient_x                               0x1402F5AF0
#define PlayerClient__SetNameSpriteState_x                         0x140303A00
#define PlayerClient__SetNameSpriteTint_x                          0x1403049C0
#define PlayerZoneClient__ChangeHeight_x                           0x1403134F0
#define PlayerZoneClient__DoAttack_x                               0x140314200
#define PlayerZoneClient__GetLevel_x                               0x140317930
#define PlayerZoneClient__IsValidTeleport_x                        0x14025F950
#define PlayerZoneClient__LegalPlayerRace_x                        0x14019C120

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x14030C9F0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x14030CAA0  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x14030CBA0
#define PlayerManagerClient__CreatePlayer_x                        0x14030C4C0
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x14063F410

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402BE240
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402BDB70
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402BDBE0
#define KeypressHandler__ClearCommandStateArray_x                  0x1402BE1D0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402BE360
#define KeypressHandler__HandleKeyUp_x                             0x1402BE480
#define KeypressHandler__SaveKeymapping_x                          0x1402BE060  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140683400  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x14067D1C0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402E5E80  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402EA760
#define PcZoneClient__GetPcSkillLimit_x                            0x1402ED710
#define PcZoneClient__RemovePetEffect_x                            0x1402EFDE0
#define PcZoneClient__HasAlternateAbility_x                        0x1402EE2F0
#define PcZoneClient__CanEquipItem_x                               0x1402E8A50
#define PcZoneClient__GetItemByID_x                                0x1402EB680
#define PcZoneClient__RemoveBuffEffect_x                           0x1402EF980
#define PcZoneClient__BandolierSwap_x                              0x1402DBF40

// Doors
#define EQSwitch__UseSwitch_x                                      0x140264480

// IconCache
#define IconCache__GetIcon_x                                       0x1403CA130

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403BE580
#define CContainerMgr__CloseContainer_x                            0x1403BDEA0
#define CContainerMgr__OpenExperimentContainer_x                   0x1403BE900

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404BA490

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402B0650

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140449DF0
#define CLootWnd__RequestLootSlot_x                                0x14044AE40

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401DCF90
#define EQ_Spell__SpellAffects_x                                   0x1401DE270
#define EQ_Spell__SpellAffectBase_x                                0x1401DE1D0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400DAFC0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400DAF70
#define EQ_Spell__IsSPAStacking_x                                  0x1401DDEA0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401DDA50
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401DD310

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C2770

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1405176A0
#define CTargetWnd__RefreshTargetBuffs_x                           0x140516DB0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1405165B0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x14051ED40  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140184EF0
#define CTaskManager__GetTaskStatus_x                              0x140185000
#define CTaskManager__GetElementDescription_x                      0x140184B80

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401DB2B0
#define EqSoundManager__PlayScriptMp3_x                            0x1401DA0F0
#define EqSoundManager__SoundAssistPlay_x                          0x140336D40  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140337080  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405B56E0
#define CTextureAnimation__SetCurCell_x                            0x1405B59F0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402AE850

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x14069E170
#define CharacterBase__GetItemByGlobalIndex1_x                     0x14069E1F0
#define CharacterBase__IsExpansionFlag_x                           0x1402011E0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140399400
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140399E70
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x14039B3C0

// messages
#define msg_spell_worn_off_x                                       0x140218230
#define msg_new_text_x                                             0x1402139F0
#define __msgTokenTextParam_x                                      0x14020AF10
#define msgTokenText_x                                             0x14020AE20

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140338970
#define SpellManager__GetSpellByGroupAndRank_x                     0x140338890

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x14064E520

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140443210

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403C3300
#define CCursorAttachment__IsOkToActivate_x                        0x1403C6790
#define CCursorAttachment__RemoveAttachment_x                      0x1403C6A40
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405EE9E0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405EEBD0
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405EEBE0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140150AD0
#define CFindItemWnd__Update_x                                     0x140151470
#define CFindItemWnd__PickupSelectedItem_x                         0x14014A420

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14015B250
#define LootFiltersManager__GetItemFilterData_x                    0x14015BD60
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14015C600
#define LootFiltersManager__SetItemLootFilter_x                    0x14015C8B0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14049CD80

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x1403314C0
#define CResolutionHandler__UpdateResolution_x                     0x14059ABA0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403BA850

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406A2630  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406A2520  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403E1360
#define CGroupWnd__UpdateDisplay_x                                 0x1403E0F40

// ItemBase
#define ItemBase__IsLore_x                                         0x14065A200
#define ItemBase__IsLoreEquipped_x                                 0x14065A290

#define MultipleItemMoveManager__ProcessMove_x                     0x1402D1A20

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14025CD10
#define EQPlacedItemManager__GetItemByGuid_x                       0x14025CCA0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14025CCE0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14032B930

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x1401274B0
#define FactionManagerClient__HandleFactionMessage_x               0x140127890
#define FactionManagerClient__GetFactionStanding_x                 0x140126C80
#define FactionManagerClient__GetMaxFaction_x                      0x140126C80
#define FactionManagerClient__GetMinFaction_x                      0x140126B30

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AF7B0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140132C90

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401B6160
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401B5320
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401B5F80  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401B5F00  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x14033DC20

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14032B930

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405AB420

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140086E70

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14034F510

// AchievementManager
#define AchievementManager__Instance_x                             0x14008F190

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x140686460
#define FreeToPlayClient__RestrictionInfo_x                        0x140AE2600

// UdpConnection
#define UdpConnection__GetStats_x                                  0x14054D830

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x140839058
#define CGFScreenWnd__CGFScreenWnd_x                               0x140071550
#define CGFScreenWnd__CGFScreenWnd1_x                              0x1400716E0
#define CGFScreenWnd__dCGFScreenWnd_x                              0x140071890

#if __has_include("../../../../private/eqgame-private.h")
#include "../../../../private/eqgame-private.h"
#endif
