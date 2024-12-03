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

#define __ClientDate                                               20241125u
#define __ExpectedVersionDate                                     "Nov 25 2024"
#define __ExpectedVersionTime                                     "08:55:48"
#define __ActualVersionDate_x                                      0x14094B010
#define __ActualVersionTime_x                                      0x14094B000
#define __ActualVersionBuild_x                                     0x1408E1760

// Memory Protection
#define __MemChecker0_x                                            0x1402B1B60
#define __MemChecker1_x                                            0x140571180
#define __MemChecker4_x                                            0x140280650
#define __EncryptPad0_x                                            0x140D17E50

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E50AC0
#define instEQZoneInfo_x                                           0x140E50CB4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x1402173B0
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
#define __allowslashcommand_x                                      0x140240400
#define __CastRay_x                                                0x140238840
#define __CastRay2_x                                               0x140238540
#define __compress_block_x                                         0x140526820
#define __ConvertItemTags_x                                        0x140238CA0
#define __CleanItemTags_x                                          0x140088BD0
#define __CreateCascadeMenuItems_x                                 0x140187A60
#define __decompress_block_x                                       0x14056C9F0
#define __DoesFileExist_x                                          0x140575030
#define __EQGetTime_x                                              0x140571730
#define __ExecuteCmd_x                                             0x14020ECE0
#define __FixHeading_x                                             0x14069E6A0
#define __FlushDxKeyboard_x                                        0x140333A20
#define __get_bearing_x                                            0x1402425F0
#define __get_melee_range_x                                        0x1402426E0
#define __GetAnimationCache_x                                      0x1403B1050
#define __GetGaugeValueFromEQ_x                                    0x1404E6530
#define __GetLabelFromEQ_x                                         0x1404E7B40
#define __GetXTargetType_x                                         0x14069F980   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14069E720
#define __HelpPath_x                                               0x140EC5F00   // Why?
#define __NewUIINI_x                                               0x1404F35C0   // Why?
#define __ProcessDeviceEvents_x                                    0x140280C60
#define __ProcessGameEvents_x                                      0x140275980
#define __ProcessKeyboardEvents_x                                  0x140335170
#define __ProcessMouseEvents_x                                     0x140277060
#define __SaveColors_x                                             0x140197A70
#define __STMLToText_x                                             0x140579980
#define __WndProc_x                                                0x140332230
#define CMemoryMappedFile__SetFile_x                               0x1407DA740
#define DrawNetStatus_x                                            0x1402C0030
#define Util__FastTime_x                                           0x140570CC0
#define __eq_delete_x                                              0x1406A67D4
#define __eq_new_x                                                 0x1406A6790
#define __CopyLayout_x                                             0x1402ADF60
#define __ThrottleFrameRate_x                                      0x1402651B4
#define __ThrottleFrameRateEnd_x                                   0x140265214

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140344B30
#define CAAWnd__Update_x                                           0x140344E30
#define CAAWnd__UpdateSelected_x                                   0x140345E70

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AAF60
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A3870
#define CAdvancedLootWnd__AddPlayerToList_x                        0x14082FBB8
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AB890

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401A2B90
#define AltAdvManager__IsAbilityReady_x                            0x1401A2E10
#define AltAdvManager__GetAAById_x                                 0x1401A2460
#define AltAdvManager__CanTrainAbility_x                           0x1401A2270
#define AltAdvManager__CanSeeAbility_x                             0x1401A1F30

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D1920
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D2760
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D29B0
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400E6860
#define CharacterZoneClient__CanUseItem_x                          0x1400E6C90
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D3380
#define CharacterZoneClient__CastSpell_x                           0x1400D3420
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E27C0
#define CharacterZoneClient__Cur_HP_x                              0x1400E8360
#define CharacterZoneClient__Cur_Mana_x                            0x1400E8520
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D61B0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400EE9E0
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FD410  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D7660
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E6160
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F05A0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400EF470
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D7830
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C7D30
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C9700
#define CharacterZoneClient__GetHPRegen_x                          0x1400EFBB0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E7FD0
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F0830
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D78B0
#define CharacterZoneClient__GetManaRegen_x                        0x1400F1610
#define CharacterZoneClient__GetModCap_x                           0x1400F8BD0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D7B40
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D7D50
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CC870
#define CharacterZoneClient__HasSkill_x                            0x1400F4600
#define CharacterZoneClient__HitBySpell_x                          0x1400D8800
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DBFA0
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F86B0
#define CharacterZoneClient__Max_Endurance_x                       0x1402DC730  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F8A00
#define CharacterZoneClient__Max_Mana_x                            0x1402DC950  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F8E60
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DF350
#define CharacterZoneClient__SpellDuration_x                       0x1400E0050
#define CharacterZoneClient__TotalEffect_x                         0x1400E13A0
#define CharacterZoneClient__UseSkill_x                            0x1400FE380


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140362FB0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14036D2D0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140369170
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14036CD50

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14036F990

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AA6590

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140392890
#define CChatWindowManager__InitContextMenu_x                      0x140392A20
#define CChatWindowManager__FreeChatWindow_x                       0x140391910
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x14039A600
#define CChatWindowManager__CreateChatWindow_x                     0x140391250

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140106850

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x14039B650
#define CChatWindow__Clear_x                                       0x14039C610
#define CChatWindow__WndNotification_x                             0x14039D800
#define CChatWindow__AddHistory_x                                  0x14039C110

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405AEA10
#define CContextMenu__RemoveMenuItem_x                             0x1405AEE00
#define CContextMenu__RemoveAllMenuItems_x                         0x1405AEDD0
#define CContextMenu__CheckMenuItem_x                              0x1405AEC40
#define CContextMenu__SetMenuItem_x                                0x1405AEE20
#define CContextMenu__AddSeparator_x                               0x1405AEB80

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405A08E0
#define CContextMenuManager__RemoveMenu_x                          0x1405A0EC0
#define CContextMenuManager__PopupMenu_x                           0x1405A0C00
#define CContextMenuManager__Flush_x                               0x1405A0960
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403A8F80

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x140668400
#define CChatService__GetFriendName_x                              0x140668410

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405917F0
#define CComboWnd__Draw_x                                          0x1405918F0
#define CComboWnd__GetCurChoice_x                                  0x140591BD0  // unused
#define CComboWnd__GetListRect_x                                   0x140591C70
#define CComboWnd__InsertChoice_x                                  0x140591FA0
#define CComboWnd__SetColors_x                                     0x140592330
#define CComboWnd__SetChoice_x                                     0x1405922F0
#define CComboWnd__GetItemCount_x                                  0x140591C60
#define CComboWnd__GetCurChoiceText_x                              0x140591C10  // unused
#define CComboWnd__GetChoiceText_x                                 0x140591BA0
#define CComboWnd__InsertChoiceAtIndex_x                           0x140592060

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403A6CF0
#define CContainerWnd__SetContainer_x                              0x1403FD2F0
#define CContainerWnd__vftable_x                                   0x1409BEA48

// CDisplay
#define CDisplay__cameraType_x                                     0x140D9811C
#define CDisplay__ZoneMainUI_x                                     0x1405C8C10
#define CDisplay__PreZoneMainUI_x                                  0x1401949B0
#define CDisplay__CleanGameUI_x                                    0x140186B20
#define CDisplay__GetClickedActor_x                                0x14018ACE0
#define CDisplay__GetUserDefinedColor_x                            0x14018B950
#define CDisplay__InitCharSelectUI_x                               0x14018BC00
#define CDisplay__ReloadUI_x                                       0x140196CA0
#define CDisplay__RestartUI_x                                      0x1401F52A0
#define CDisplay__WriteTextHD2_x                                   0x14019DCA0
#define CDisplay__TrueDistance_x                                   0x14019D950
#define CDisplay__SetViewActor_x                                   0x14019A190
#define CDisplay__GetFloorHeight_x                                 0x14018AF40
#define CDisplay__ToggleScreenshotMode_x                           0x14019D440
#define CDisplay__RealRender_World_x                               0x140196080

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405D2E40
#define CEditWnd__DrawCaret_x                                      0x1405C48F0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405C4DB0
#define CEditWnd__GetCaretPt_x                                     0x1405C5030  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405C5070
#define CEditWnd__GetDisplayString_x                               0x1405C52E0
#define CEditWnd__GetHorzOffset_x                                  0x1405C5520
#define CEditWnd__GetLineForPrintableChar_x                        0x1405C5670
#define CEditWnd__GetSelStartPt_x                                  0x1405C5950  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405C57A0
#define CEditWnd__PointFromPrintableChar_x                         0x1405C6500
#define CEditWnd__ReplaceSelection_x                               0x1405C68B0
#define CEditWnd__SelectableCharFromPoint_x                        0x1405C6D50
#define CEditWnd__SetEditable_x                                    0x1405C6FE0
#define CEditWnd__SetWindowText_x                                  0x1405C7010

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x1402662C0
#define CEverQuest__ClickedPlayer_x                                0x14025BD90
#define CEverQuest__CreateTargetIndicator_x                        0x14025C650
#define CEverQuest__DoTellWindow_x                                 0x140106560 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140106E20 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140267C80
#define CEverQuest__dsp_chat_x                                     0x140105F90 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x140292070
#define CEverQuest__Emote_x                                        0x140268660
#define CEverQuest__GetBodyTypeDesc_x                              0x140269410
#define CEverQuest__GetClassDesc_x                                 0x140269470
#define CEverQuest__GetClassThreeLetterCode_x                      0x140269840
#define CEverQuest__GetDeityDesc_x                                 0x140269AF0
#define CEverQuest__GetLangDesc_x                                  0x140269F20
#define CEverQuest__GetRaceDesc_x                                  0x14026A2C0
#define CEverQuest__InterpretCmd_x                                 0x14026BC00
#define CEverQuest__LeftClickedOnPlayer_x                          0x140280CD0
#define CEverQuest__LMouseUp_x                                     0x14026D620
#define CEverQuest__RightClickedOnPlayer_x                         0x14027E4F0
#define CEverQuest__RMouseUp_x                                     0x140277BF0
#define CEverQuest__SetGameState_x                                 0x140283210
#define CEverQuest__UPCNotificationFlush_x                         0x140288B40 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14026D290
#define CEverQuest__ReportSuccessfulHeal_x                         0x140278FA0
#define CEverQuest__ReportSuccessfulHit_x                          0x140279DC0

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403BB420

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C1870
#define CGuild__GetGuildName_x                                     0x1400C18B0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403DE660

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402A3D20
#define CHotButton__SetCheck_x                                     0x1402A3FF0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403F6050
#define CInvSlotMgr__MoveItem_x                                    0x1403F6230
#define CInvSlotMgr__SelectSlot_x                                  0x1403F7C50

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403F3260
#define CInvSlot__SliderComplete_x                                 0x1403F47B0
#define CInvSlot__GetItemBase_x                                    0x1403EEC90
#define CInvSlot__UpdateItem_x                                     0x1403F4C60

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403F8FD0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x14041A0E0
#define CItemDisplayWnd__UpdateStrings_x                           0x14041CA20
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140416B80
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140418340
#define CItemDisplayWnd__RequestConvertItem_x                      0x1404194F0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404E3050
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404E4D40

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x14051FB90

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1404132B0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14014EEB0

// CLabel
#define CLabel__UpdateText_x                                       0x140423E10

// CListWnd
#define CListWnd__CListWnd_x                                       0x140595170
#define CListWnd__dCListWnd_x                                      0x1405955C0
#define CListWnd__vftable_x                                        0x140AA46E8
#define CListWnd__AddColumn_x                                      0x140595C60
#define CListWnd__AddColumn1_x                                     0x140595D00
#define CListWnd__AddLine_x                                        0x140595E60
#define CListWnd__AddString_x                                      0x1405963F0
#define CListWnd__CalculateFirstVisibleLine_x                      0x140596960
#define CListWnd__CalculateVSBRange_x                              0x140596C40
#define CListWnd__ClearSel_x                                       0x140596DE0
#define CListWnd__ClearAllSel_x                                    0x140596D80
#define CListWnd__CloseAndUpdateEditWindow_x                       0x140596E40
#define CListWnd__Compare_x                                        0x140596FF0
#define CListWnd__Draw_x                                           0x1405974C0
#define CListWnd__DrawColumnSeparators_x                           0x140598070
#define CListWnd__DrawHeader_x                                     0x140598130
#define CListWnd__DrawItem_x                                       0x140598810
#define CListWnd__DrawLine_x                                       0x140599190
#define CListWnd__DrawSeparator_x                                  0x140599650
#define CListWnd__EnableLine_x                                     0x140599A70
#define CListWnd__EnsureVisible_x                                  0x140599AD0
#define CListWnd__ExtendSel_x                                      0x140599BD0
#define CListWnd__GetColumnMinWidth_x                              0x140599F60
#define CListWnd__GetColumnWidth_x                                 0x140599FE0
#define CListWnd__GetCurSel_x                                      0x14059A0E0
#define CListWnd__GetItemData_x                                    0x14059A460
#define CListWnd__GetItemHeight_x                                  0x14059A4A0
#define CListWnd__GetItemRect_x                                    0x14059A6C0
#define CListWnd__GetItemText_x                                    0x14059A960
#define CListWnd__GetSelList_x                                     0x14059ABB0
#define CListWnd__GetSeparatorRect_x                               0x14059ADA0
#define CListWnd__InsertLine_x                                     0x14059C200
#define CListWnd__RemoveLine_x                                     0x14059C870
#define CListWnd__SetColors_x                                      0x14059CC30
#define CListWnd__SetColumnJustification_x                         0x14059CC50
#define CListWnd__SetColumnLabel_x                                 0x14059CCD0
#define CListWnd__SetColumnWidth_x                                 0x14059CE70
#define CListWnd__SetCurSel_x                                      0x14059CF40
#define CListWnd__SetItemColor_x                                   0x14059D1B0
#define CListWnd__SetItemData_x                                    0x14059D250
#define CListWnd__SetItemText_x                                    0x14059D490
#define CListWnd__Sort_x                                           0x14059D8A0
#define CListWnd__ToggleSel_x                                      0x14059DA10
#define CListWnd__SetColumnsSizable_x                              0x14059CEC0
#define CListWnd__SetItemWnd_x                                     0x14059D5C0
#define CListWnd__GetItemWnd_x                                     0x14059AB40
#define CListWnd__SetItemIcon_x                                    0x14059D290
#define CListWnd__CalculateCustomWindowPositions_x                 0x140596730
#define CListWnd__SetVScrollPos_x                                  0x14059D800

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x1404370C0

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A0B4F8
#define MapViewMap__Clear_x                                        0x140438C40
#define MapViewMap__SetZoom_x                                      0x14043F290
#define MapViewMap__HandleLButtonDown_x                            0x14043BDD0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140460930  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140466EB0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140467650
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14046AE50
#define CMerchantWnd__SelectBuySellSlot_x                          0x14046A1A0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14046F0E0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x140643750
#define CPacketScrambler__hton_x                                   0x140643740

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405BE1E0
#define CSidlManagerBase__FindAnimation1_x                         0x1405BE120
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405BE810
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405BE5C0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405BD520
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405BD4B0
#define CSidlManagerBase__CreateXWnd_x                             0x1405BCAF0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404D6040
#define CSidlManager__CreateXWnd_x                                 0x1404D6200

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x140582D00
#define CSidlScreenWnd__CalculateVSBRange_x                        0x140582E20
#define CSidlScreenWnd__ConvertToRes_x                             0x1405CD380 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x140582F90
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x140582430
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x140582500
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x140582710
#define CSidlScreenWnd__DrawSidlPiece_x                            0x140583680
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405838B0
#define CSidlScreenWnd__GetChildItem_x                             0x140583A50
#define CSidlScreenWnd__GetSidlPiece_x                             0x140583CA0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x14058DE80 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x140584010
#define CSidlScreenWnd__LoadIniInfo_x                              0x140584380
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140584C30
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140585630
#define CSidlScreenWnd__m_layoutCopy_x                             0x140EF18A8
#define CSidlScreenWnd__StoreIniInfo_x                             0x140585CB0
#define CSidlScreenWnd__StoreIniVis_x                              0x1405864A0
#define CSidlScreenWnd__vftable_x                                  0x140AA3958
#define CSidlScreenWnd__WndNotification_x                          0x1405864F0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14031CF10 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14031D3B0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14031D2E0
#define CSkillMgr__IsActivatedSkill_x                              0x14031D760
#define CSkillMgr__IsCombatSkill_x                                 0x14031D7A0
#define CSkillMgr__GetSkillTimerDuration_x                         0x14031D6D0
#define CSkillMgr__GetSkillLastUsed_x                              0x14031D330

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x14059E390
#define CSliderWnd__SetValue_x                                     0x14059EBA0
#define CSliderWnd__SetNumTicks_x                                  0x14059EA20

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404DC6B0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405A3340
#define CStmlWnd__CalculateHSBRange_x                              0x14058D850
#define CStmlWnd__CalculateVSBRange_x                              0x1405A4260
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405A4CD0
#define CStmlWnd__ForceParseNow_x                                  0x1405A4D70
#define CStmlWnd__GetVisibleText_x                                 0x1405A5440
#define CStmlWnd__MakeStmlColorTag_x                               0x1405A71A0
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405A71E0
#define CStmlWnd__SetSTMLText_x                                    0x1405AE1B0
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405AE360
#define CStmlWnd__UpdateHistoryString_x                            0x1405AE6F0

// CTabWnd
#define CTabWnd__Draw_x                                            0x14059EF70
#define CTabWnd__DrawCurrentPage_x                                 0x14059F010
#define CTabWnd__DrawTab_x                                         0x14059F3E0
#define CTabWnd__GetTabRect_x                                      0x14059FA50
#define CTabWnd__InsertPage_x                                      0x14059FD20
#define CTabWnd__RemovePage_x                                      0x14059FFB0
#define CTabWnd__SetPage_x                                         0x1405A0110
#define CTabWnd__UpdatePage_x                                      0x1405A0410

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405C7470
#define CPageWnd__SetTabText_x                                     0x1405C74E0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BAFD0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BB3E0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405B5BA0
#define CTextureFont__DrawWrappedText1_x                           0x1405B5AB0
#define CTextureFont__DrawWrappedText2_x                           0x1405B5CD0
#define CTextureFont__GetTextExtent_x                              0x1405B6080
#define CTextureFont__GetHeight_x                                  0x1405B6040

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405CBAE0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x140582010

// CXStr
#define CXStr__gFreeLists_x                                        0x140D20ED0
#define CXStr__gCXStrAccess_x                                      0x140EF16A8

// CXWnd
#define CXWnd__BringToTop_x                                        0x140588F00
#define CXWnd__ClrFocus_x                                          0x1405891F0
#define CXWnd__Destroy_x                                           0x140589370
#define CXWnd__DoAllDrawing_x                                      0x140589470
#define CXWnd__DrawColoredRect_x                                   0x140589C40
#define CXWnd__DrawTooltip_x                                       0x14058B2C0
#define CXWnd__DrawTooltipAtPoint_x                                0x14058B370
#define CXWnd__GetChildItem_x                                      0x14058BC80
#define CXWnd__GetChildWndAt_x                                     0x14058BD30
#define CXWnd__GetClientRect_x                                     0x14058BFF0
#define CXWnd__GetClientClipRect_x                                 0x14058BEA0
#define CXWnd__GetRelativeRect_x                                   0x14058D990
#define CXWnd__GetScreenClipRect_x                                 0x14058DA90
#define CXWnd__GetScreenRect_x                                     0x14058DC10
#define CXWnd__GetTooltipRect_x                                    0x14058DD80
#define CXWnd__IsActive_x                                          0x14058E340
#define CXWnd__IsDescendantOf_x                                    0x14058E370
#define CXWnd__IsReallyVisible_x                                   0x14058E3D0
#define CXWnd__IsType_x                                            0x14058E410
#define CXWnd__Minimize_x                                          0x14058E510
#define CXWnd__ProcessTransition_x                                 0x14058F370
#define CXWnd__Resize_x                                            0x14058F480
#define CXWnd__Right_x                                             0x14058F520
#define CXWnd__SetFocus_x                                          0x14058F8E0
#define CXWnd__SetFont_x                                           0x14058F930
#define CXWnd__SetKeyTooltip_x                                     0x14058FA40
#define CXWnd__SetMouseOver_x                                      0x14058FB80
#define CXWnd__SetParent_x                                         0x14058FC00
#define CXWnd__StartFade_x                                         0x140590030
#define CXWnd__vftable_x                                           0x140AA3F48
#define CXWnd__CXWnd_x                                             0x140587A90
#define CXWnd__dCXWnd_x                                            0x1405883F0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405D25C0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405AFFD0
#define CXWndManager__DrawCursor_x                                 0x1405B02B0
#define CXWndManager__DrawWindows_x                                0x1405B0510
#define CXWndManager__GetKeyboardFlags_x                           0x1405B0BE0
#define CXWndManager__HandleKeyboardMsg_x                          0x1405B0C20
#define CXWndManager__RemoveWnd_x                                  0x1405B4260

// CDBStr
#define CDBStr__GetString_x                                        0x140184CE0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x14064D570

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CF4A0
#define CCharacterListWnd__EnterWorld_x                            0x1400CE1A0
#define CCharacterListWnd__Quit_x                                  0x1400CF480
#define CCharacterListWnd__UpdateList_x                            0x1400D0310

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x14061AFD0
#define ItemBase__CreateItemTagString_x                            0x14061BA40
#define ItemBase__GetImageNum_x                                    0x14061DFC0
#define ItemBase__GetItemValue_x                                   0x14061FA70
#define ItemBase__IsEmpty_x                                        0x1406216A0
#define ItemBase__IsKeyRingItem_x                                  0x140621DD0
#define ItemBase__ValueSellMerchant_x                              0x140625FD0
#define ItemClient__CanDrop_x                                      0x1402A6200
#define ItemClient__CanGoInBag_x                                   0x1402A6330
#define ItemClient__CreateItemClient_x                             0x1402A65B0
#define ItemClient__dItemClient_x                                  0x1402A6070

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401A4330
#define EQ_LoadingS__Array_x                                       0x140D0D230

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x1406328C0
#define PcBase__GetCombatAbility_x                                 0x140632FB0
#define PcBase__GetCombatAbilityTimer_x                            0x140633050
#define PcBase__GetItemContainedRealEstateIds_x                    0x1406337F0
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x140634330
#define PcClient__AlertInventoryChanged_x                          0x1402C8610
#define PcClient__GetConLevel_x                                    0x1402C8C30  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402CB400
#define PcClient__HasLoreItem_x                                    0x1402CC3C0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402D9C70
#define PcZoneClient__RemoveMyAffect_x                             0x1402DD870

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x1402133D0  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x140213580  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x1402136E0  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x140213620  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x14024D380  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14017F530

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140691410
#define PlayerBase__CanSee1_x                                      0x1406914E0
#define PlayerBase__GetVisibilityLineSegment_x                     0x1406919A0
#define PlayerBase__HasProperty_x                                  0x140691B70
#define PlayerBase__IsTargetable_x                                 0x140691C30
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402EA570
#define PlayerClient__GetPcClient_x                                0x1402ECDA0
#define PlayerClient__PlayerClient_x                               0x1402E3830
#define PlayerClient__SetNameSpriteState_x                         0x1402F01F0
#define PlayerClient__SetNameSpriteTint_x                          0x1402F11B0
#define PlayerZoneClient__ChangeHeight_x                           0x1402FF720
#define PlayerZoneClient__DoAttack_x                               0x140300430
#define PlayerZoneClient__GetLevel_x                               0x140303B70
#define PlayerZoneClient__IsValidTeleport_x                        0x140250110
#define PlayerZoneClient__LegalPlayerRace_x                        0x140193230

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402F9040  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402F90F0  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402F91F0
#define PlayerManagerClient__CreatePlayer_x                        0x1402F8B10
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140690FD0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402AB460
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402AB060
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402AB0D0
#define KeypressHandler__ClearCommandStateArray_x                  0x1402AB3F0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402AB580
#define KeypressHandler__HandleKeyUp_x                             0x1402AB6A0
#define KeypressHandler__SaveKeymapping_x                          0x1402AB300  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x14064B0B0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x140644E80

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402D2970  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402D7CA0
#define PcZoneClient__GetPcSkillLimit_x                            0x1402DA370
#define PcZoneClient__RemovePetEffect_x                            0x1402DDB50
#define PcZoneClient__HasAlternateAbility_x                        0x1402DAF60
#define PcZoneClient__CanEquipItem_x                               0x1402D5FD0
#define PcZoneClient__GetItemByID_x                                0x1402D8D40
#define PcZoneClient__RemoveBuffEffect_x                           0x1402DD6F0
#define PcZoneClient__BandolierSwap_x                              0x1402D5020

// Doors
#define EQSwitch__UseSwitch_x                                      0x140254C40

// IconCache
#define IconCache__GetIcon_x                                       0x1403B1080

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403A5AA0
#define CContainerMgr__CloseContainer_x                            0x1403A53E0
#define CContainerMgr__OpenExperimentContainer_x                   0x1403A5E20

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x14049A3C0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x14029E440

// CLootWnd
#define CLootWnd__LootAll_x                                        0x14042B0E0
#define CLootWnd__RequestLootSlot_x                                0x14042C100

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401D3630
#define EQ_Spell__SpellAffects_x                                   0x1401D48F0
#define EQ_Spell__SpellAffectBase_x                                0x1401D4850
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D7F20
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D7ED0
#define EQ_Spell__IsSPAStacking_x                                  0x1401D4510
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401D40D0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401D39A0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C04B0

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1404F6D80
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404F6490
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404F5C90

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404FE3E0  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x14017BEF0
#define CTaskManager__GetTaskStatus_x                              0x14017C000
#define CTaskManager__GetElementDescription_x                      0x14017BB80

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401D19A0
#define EqSoundManager__PlayScriptMp3_x                            0x1401D07E0
#define EqSoundManager__SoundAssistPlay_x                          0x140322550  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140322890  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x140590D80
#define CTextureAnimation__SetCurCell_x                            0x140591090

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x14029C6A0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x140665AD0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x140665B50
#define CharacterBase__IsExpansionFlag_x                           0x1401F4AF0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x1403837B0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140384120
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140385660

// messages
#define msg_spell_worn_off_x                                       0x140209D20
#define msg_new_text_x                                             0x1402055A0
#define __msgTokenTextParam_x                                      0x1401FD090
#define msgTokenText_x                                             0x1401FCFB0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140323F10
#define SpellManager__GetSpellByGroupAndRank_x                     0x140323E30

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x14069FD60

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140424560

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403AA790
#define CCursorAttachment__IsOkToActivate_x                        0x1403AD6E0
#define CCursorAttachment__RemoveAttachment_x                      0x1403AD990
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405C9F80
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405CA170
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405CA180

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x14014A060
#define CFindItemWnd__Update_x                                     0x14014AA00
#define CFindItemWnd__PickupSelectedItem_x                         0x1401444F0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x140153BB0
#define LootFiltersManager__GetItemFilterData_x                    0x1401546C0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140154F60
#define LootFiltersManager__SetItemLootFilter_x                    0x140155210

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14047D0E0

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x14031CAD0
#define CResolutionHandler__UpdateResolution_x                     0x1406A45C0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403A1DA0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x140669ED0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x140669DC0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403C77B0
#define CGroupWnd__UpdateDisplay_x                                 0x1403C7390

// ItemBase
#define ItemBase__IsLore_x                                         0x140621F00
#define ItemBase__IsLoreEquipped_x                                 0x140621F90

#define MultipleItemMoveManager__ProcessMove_x                     0x1402BE1D0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14024D4E0
#define EQPlacedItemManager__GetItemByGuid_x                       0x14024D470
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14024D4B0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140316F20

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140124040
#define FactionManagerClient__HandleFactionMessage_x               0x1401243F0
#define FactionManagerClient__GetFactionStanding_x                 0x140123810
#define FactionManagerClient__GetMaxFaction_x                      0x140123810
#define FactionManagerClient__GetMinFaction_x                      0x1401236C0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AD570

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x14012F7F0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401ACC70
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401ABFF0
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401ACA90  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401ACA10  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x140328F80

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140316F20

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x140213770

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140586AE0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140085A80

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14033AA80

// AchievementManager
#define AchievementManager__Instance_x                             0x14008D450

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x14064E0F0
#define FreeToPlayClient__RestrictionInfo_x                        0x140AB7FE0

// UdpConnection
#define UdpConnection__GetStats_x                                  0x14052CC40

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x140817548
#define CGFScreenWnd__CGFScreenWnd_x                               0x1400703C0
#define CGFScreenWnd__CGFScreenWnd1_x                              0x140070550
#define CGFScreenWnd__dCGFScreenWnd_x                              0x140070700

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
