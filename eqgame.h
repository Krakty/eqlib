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

#define __ClientDate                                               20250515u
#define __ExpectedVersionDate                                     "May 15 2025"
#define __ExpectedVersionTime                                     "11:50:24"
#define __ActualVersionDate_x                                      0x14095BD20
#define __ActualVersionTime_x                                      0x14095BD10
#define __ActualVersionBuild_x                                     0x1408F1AA0

// Memory Protection
#define __MemChecker0_x                                            0x1402BB880
#define __MemChecker1_x                                            0x140580E60
#define __MemChecker4_x                                            0x140288FF0
#define __EncryptPad0_x                                            0x140D2BE80

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E64AF0
#define instEQZoneInfo_x                                           0x140E64CE4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x14021EA50
#define __gfMaxZoomCameraDistance_x                                0x1408F2D18
#define __gfMaxCameraDistance_x                                    0x140A9A068
#define __CurrentSocial_x                                          0x140BE7950 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D23720
#define g_eqCommandStates_x                                        0x140D24790
#define __CommandList_x                                            0x140D249C0
#define __ScreenMode_x                                             0x140DAC5C4
#define __gWorld_x                                                 0x140E5FA30
#define __gpbCommandEvent_x                                        0x140E5D4D4
#define __ServerHost_x                                             0x140E5D6B8
#define __Guilds_x                                                 0x140E636B0
#define __MemCheckBitmask_x                                        0x140E6502F
#define __MemCheckActive_x                                         0x140E66735
#define __MouseEventTime_x                                         0x140EDA080
#define DI8__MouseState_x                                          0x140EDE2B8
#define __heqmain_x                                                0x140EE0758
#define DI8__Mouse_x                                               0x140EDE208
#define __HWnd_x                                                   0x140EDE290
#define __Mouse_x                                                  0x140EDE1C4
#define DI8__Keyboard_x                                            0x140EDE1E0
#define __LoginName_x                                              0x140EE0E3C
#define __CurrentMapLabel_x                                        0x140EF48C0
#define __LabelCache_x                                             0x140EF5490
#define __ChatFilterDefs_x                                         0x140A348D0
#define Teleport_Table_Size_x                                      0x140E5D560
#define Teleport_Table_x                                           0x140E5D9F0

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E5FA40
#define pinstActiveBanker_x                                        0x140E5D418
#define pinstActiveCorpse_x                                        0x140E5D408
#define pinstActiveGMaster_x                                       0x140E5D410
#define pinstActiveMerchant_x                                      0x140E5D400
#define pinstAltAdvManager_x                                       0x140DAD240
#define pinstCEverQuest_x                                          0x140EDE200
#define pinstCamActor_x                                            0x140DAC5B0
#define pinstCDBStr_x                                              0x140DABFF0
#define pinstCDisplay_x                                            0x140E5D9E8
#define pinstControlledPlayer_x                                    0x140E5D4A8
#define pinstCResolutionHandler_x                                  0x140F05CC8
#define pinstCSidlManager_x                                        0x140F06A30
#define pinstCXWndManager_x                                        0x140F06A28
#define instDynamicZone_x                                          0x140E63570 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E635BE
#define instExpeditionName_x                                       0x140E635FE
#define pinstDZMember_x                                            0x140E63688
#define pinstDZTimerInfo_x                                         0x140E63690
#define pinstEqLogin_x                                             0x140EE0780
#define instTribute_x                                              0x140D1ED60
#define pinstDeviceInputProxy_x                                    0x140E64B4C
#define pinstEQSoundManager_x                                      0x140DAD5C0
#define pinstEQSpellStrings_x                                      0x140D90B80
#define pinstSGraphicsEngine_x                                     0x140F05A48
#define pinstLocalPC_x                                             0x140E5FA18
#define pinstLocalPlayer_x                                         0x140E5D3F8
#define pinstCMercenaryClientManager_x                             0x140EDB978
#define pinstModelPlayer_x                                         0x140E5D428
#define pinstRenderInterface_x                                     0x140F05A60
#define pinstSkillMgr_x                                            0x140EDD608
#define pinstSpawnManager_x                                        0x140EDBD30
#define pinstSpellManager_x                                        0x140EDD670
#define pinstStringTable_x                                         0x140E5FA28
#define pinstSwitchManager_x                                       0x140E5CEF0
#define pinstTarget_x                                              0x140E5D4A0
#define pinstTaskMember_x                                          0x140D1ED50 // Part of g_taskManager
#define pinstTradeTarget_x                                         0x140E5D420
#define instTributeActive_x                                        0x140D1ED89
#define pinstViewActor_x                                           0x140DAC5A8
#define pinstWorldData_x                                           0x140E5D4C8
#define pinstPlayerPath_x                                          0x140EDBD58
#define pinstTargetIndicator_x                                     0x140EDD720
#define EQObject_Top_x                                             0x140E5D7C0

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140EF1A20
#define pinstCContainerMgr_x                                       0x140DAC610
#define pinstCContextMenuManager_x                                 0x140F06710
#define pinstCInvSlotMgr_x                                         0x140DAC5E0
#define pinstCItemDisplayManager_x                                 0x140EF4490
#define pinstCPopupWndManager_x                                    0x140EF4D20
#define pinstCSpellDisplayMgr_x                                    0x140EF5370
#define pinstCTaskManager_x                                        0x140BE7C90
#define pinstEQSuiteTextureLoader_x                                0x140D35590
#define pinstItemIconCache_x                                       0x140EF1D80
#define pinstLootFiltersManager_x                                  0x140DABA38
#define pinstGFViewListener_x                                      0x140F05EE8


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x140248780
#define __CastRay_x                                                0x140240A10
#define __CastRay2_x                                               0x140240710
#define __compress_block_x                                         0x1405363F0
#define __ConvertItemTags_x                                        0x140240E70
#define __CleanItemTags_x                                          0x14008A200
#define __CreateCascadeMenuItems_x                                 0x14018D280
#define __decompress_block_x                                       0x14057C670
#define __DoesFileExist_x                                          0x140584D10
#define __EQGetTime_x                                              0x140581410
#define __ExecuteCmd_x                                             0x140216250
#define __FixHeading_x                                             0x14063BF90
#define __FlushDxKeyboard_x                                        0x14033FF90
#define __get_bearing_x                                            0x14024A9B0
#define __get_melee_range_x                                        0x14024AAA0
#define __GetAnimationCache_x                                      0x1403BED30
#define __GetGaugeValueFromEQ_x                                    0x1404F5F60
#define __GetLabelFromEQ_x                                         0x1404F7570
#define __GetXTargetType_x                                         0x14063D270   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14063C010
#define __HelpPath_x                                               0x140ED9F48   // Why?
#define __NewUIINI_x                                               0x140502FA0   // Why?
#define __ProcessDeviceEvents_x                                    0x140289600
#define __ProcessGameEvents_x                                      0x14027E2C0
#define __ProcessKeyboardEvents_x                                  0x1403416E0
#define __ProcessMouseEvents_x                                     0x14027F990
#define __SaveColors_x                                             0x14019D290
#define __STMLToText_x                                             0x14058CF50
#define __WndProc_x                                                0x14033E760
#define CMemoryMappedFile__SetFile_x                               0x1407E9A70
#define DrawNetStatus_x                                            0x1402C9E80
#define Util__FastTime_x                                           0x14057D590
#define __eq_delete_x                                              0x1406B5A94
#define __eq_new_x                                                 0x1406B5A50
#define __CopyLayout_x                                             0x1402B7C90
#define __ThrottleFrameRate_x                                      0x14026D9A4
#define __ThrottleFrameRateEnd_x                                   0x14026DA04

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140351110
#define CAAWnd__Update_x                                           0x140351410
#define CAAWnd__UpdateSelected_x                                   0x140352450

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AC760
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A5140
#define CAdvancedLootWnd__AddPlayerToList_x                        0x14083EE48
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AD090

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401A83F0
#define AltAdvManager__IsAbilityReady_x                            0x1401A8880
#define AltAdvManager__GetAAById_x                                 0x1401A7CC0
#define AltAdvManager__CanTrainAbility_x                           0x1401A7AB0
#define AltAdvManager__CanSeeAbility_x                             0x1401A7770

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D3130
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D3F90
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D41E0
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400E89E0
#define CharacterZoneClient__CanUseItem_x                          0x1400E8FA0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D4BB0
#define CharacterZoneClient__CastSpell_x                           0x1400D4C50
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E47E0
#define CharacterZoneClient__Cur_HP_x                              0x1400EA6B0
#define CharacterZoneClient__Cur_Mana_x                            0x1400EA870
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D7FB0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F0EF0
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FF730  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D9450
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E82E0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F2AA0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F1980
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D95D0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C9910
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400CB310
#define CharacterZoneClient__GetHPRegen_x                          0x1400F20C0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400EA320
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F2D30
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D9650
#define CharacterZoneClient__GetManaRegen_x                        0x1400F3AB0
#define CharacterZoneClient__GetModCap_x                           0x1400FAEE0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D98E0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D9AB0
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CE4A0
#define CharacterZoneClient__HasSkill_x                            0x1400F6A80
#define CharacterZoneClient__HitBySpell_x                          0x1400DA540
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DDEB0
#define CharacterZoneClient__MakeMeVisible_x                       0x1400FA9C0
#define CharacterZoneClient__Max_Endurance_x                       0x1402E6550  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400FAD10
#define CharacterZoneClient__Max_Mana_x                            0x1402E6770  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400FB170
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E1340
#define CharacterZoneClient__SpellDuration_x                       0x1400E2070
#define CharacterZoneClient__TotalEffect_x                         0x1400E33C0
#define CharacterZoneClient__UseSkill_x                            0x1401006B0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x14036F9E0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140379D90

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140375C00
#define CBarterSearchWnd__UpdateInventoryList_x                    0x140379810

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14037C460

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AB95A0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x14039F1A0
#define CChatWindowManager__InitContextMenu_x                      0x14039F330
#define CChatWindowManager__FreeChatWindow_x                       0x14039E210
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403A6F70
#define CChatWindowManager__CreateChatWindow_x                     0x14039DC40

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140108C00

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403A7FC0
#define CChatWindow__Clear_x                                       0x1403A8F70
#define CChatWindow__WndNotification_x                             0x1403AA140
#define CChatWindow__AddHistory_x                                  0x1403A8A70

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405C1FA0
#define CContextMenu__RemoveMenuItem_x                             0x1405C2390
#define CContextMenu__RemoveAllMenuItems_x                         0x1405C2360
#define CContextMenu__CheckMenuItem_x                              0x1405C21D0
#define CContextMenu__SetMenuItem_x                                0x1405C23B0
#define CContextMenu__AddSeparator_x                               0x1405C2110

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405B3EA0
#define CContextMenuManager__RemoveMenu_x                          0x1405B4480
#define CContextMenuManager__PopupMenu_x                           0x1405B41C0
#define CContextMenuManager__Flush_x                               0x1405B3F20
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403B68D0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x140646490
#define CChatService__GetFriendName_x                              0x14068FC60

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405A4DC0
#define CComboWnd__Draw_x                                          0x1405A4EC0
#define CComboWnd__GetCurChoice_x                                  0x1405A51A0  // unused
#define CComboWnd__GetListRect_x                                   0x1405A5240
#define CComboWnd__InsertChoice_x                                  0x1405A5580
#define CComboWnd__SetColors_x                                     0x1405A5910
#define CComboWnd__SetChoice_x                                     0x1405A58D0
#define CComboWnd__GetItemCount_x                                  0x1405A5230
#define CComboWnd__GetCurChoiceText_x                              0x1405A51E0  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405A5170
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405A5640

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403B45F0
#define CContainerWnd__SetContainer_x                              0x14040BF70
#define CContainerWnd__vftable_x                                   0x1409D0128

// CDisplay
#define CDisplay__cameraType_x                                     0x140DAC38C
#define CDisplay__ZoneMainUI_x                                     0x1405DC1C0
#define CDisplay__PreZoneMainUI_x                                  0x14019A1C0
#define CDisplay__CleanGameUI_x                                    0x14018C340
#define CDisplay__GetClickedActor_x                                0x140190500
#define CDisplay__GetUserDefinedColor_x                            0x140191160
#define CDisplay__InitCharSelectUI_x                               0x140191410
#define CDisplay__ReloadUI_x                                       0x14019C4B0
#define CDisplay__RestartUI_x                                      0x1401FBFA0
#define CDisplay__WriteTextHD2_x                                   0x1401A34C0
#define CDisplay__TrueDistance_x                                   0x1401A3170
#define CDisplay__SetViewActor_x                                   0x14019F9B0
#define CDisplay__GetFloorHeight_x                                 0x140190760
#define CDisplay__ToggleScreenshotMode_x                           0x1401A2C60
#define CDisplay__RealRender_World_x                               0x14019B890

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405E63F0
#define CEditWnd__DrawCaret_x                                      0x1405D7E40  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405D82F0
#define CEditWnd__GetCaretPt_x                                     0x1405D8570  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405D85B0
#define CEditWnd__GetDisplayString_x                               0x1405D8820
#define CEditWnd__GetHorzOffset_x                                  0x1405D8A60
#define CEditWnd__GetLineForPrintableChar_x                        0x1405D8BB0
#define CEditWnd__GetSelStartPt_x                                  0x1405D8E90  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405D8CE0
#define CEditWnd__PointFromPrintableChar_x                         0x1405D9AC0
#define CEditWnd__ReplaceSelection_x                               0x1405D9E70
#define CEditWnd__SelectableCharFromPoint_x                        0x1405DA310
#define CEditWnd__SetEditable_x                                    0x1405DA5A0
#define CEditWnd__SetWindowText_x                                  0x1405DA5D0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14026EAB0
#define CEverQuest__ClickedPlayer_x                                0x140264330
#define CEverQuest__CreateTargetIndicator_x                        0x140264BF0
#define CEverQuest__DoTellWindow_x                                 0x140108910 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1401091E0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x1402704A0
#define CEverQuest__dsp_chat_x                                     0x140108350 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x14029B500
#define CEverQuest__Emote_x                                        0x140270E90
#define CEverQuest__GetBodyTypeDesc_x                              0x140271C70
#define CEverQuest__GetClassDesc_x                                 0x140271CD0
#define CEverQuest__GetClassThreeLetterCode_x                      0x1402720A0
#define CEverQuest__GetDeityDesc_x                                 0x140272350
#define CEverQuest__GetLangDesc_x                                  0x140272780
#define CEverQuest__GetRaceDesc_x                                  0x140272B20
#define CEverQuest__InterpretCmd_x                                 0x140274490
#define CEverQuest__LeftClickedOnPlayer_x                          0x140289670
#define CEverQuest__LMouseUp_x                                     0x140275EF0
#define CEverQuest__RightClickedOnPlayer_x                         0x140286E60
#define CEverQuest__RMouseUp_x                                     0x140280520
#define CEverQuest__SetGameState_x                                 0x14028C5E0
#define CEverQuest__UPCNotificationFlush_x                         0x140291F40 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140275B50
#define CEverQuest__ReportSuccessfulHeal_x                         0x1402818F0
#define CEverQuest__ReportSuccessfulHit_x                          0x140282710

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403C9C70

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C31F0
#define CGuild__GetGuildName_x                                     0x1400C3230

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403ED0F0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402AD620
#define CHotButton__SetCheck_x                                     0x1402AD8F0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140404CD0
#define CInvSlotMgr__MoveItem_x                                    0x140404EB0
#define CInvSlotMgr__SelectSlot_x                                  0x1404068C0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x140401EF0
#define CInvSlot__SliderComplete_x                                 0x140403440
#define CInvSlot__GetItemBase_x                                    0x1403FD900
#define CInvSlot__UpdateItem_x                                     0x140403900

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x140407C50

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140429080
#define CItemDisplayWnd__UpdateStrings_x                           0x14042BBD0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x1404258D0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140427210
#define CItemDisplayWnd__RequestConvertItem_x                      0x1404284A0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404F29E0
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404F4770

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x14052F750

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140421FD0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x1401534B0

// CLabel
#define CLabel__UpdateText_x                                       0x140432F90

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405A8750
#define CListWnd__dCListWnd_x                                      0x1405A8BA0
#define CListWnd__vftable_x                                        0x140AB76F0
#define CListWnd__AddColumn_x                                      0x1405A9240
#define CListWnd__AddColumn1_x                                     0x1405A92E0
#define CListWnd__AddLine_x                                        0x1405A9440
#define CListWnd__AddString_x                                      0x1405A99D0
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405A9F40
#define CListWnd__CalculateVSBRange_x                              0x1405AA220
#define CListWnd__ClearSel_x                                       0x1405AA3C0
#define CListWnd__ClearAllSel_x                                    0x1405AA360
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405AA420
#define CListWnd__Compare_x                                        0x1405AA5E0
#define CListWnd__Draw_x                                           0x1405AAAB0
#define CListWnd__DrawColumnSeparators_x                           0x1405AB660
#define CListWnd__DrawHeader_x                                     0x1405AB720
#define CListWnd__DrawItem_x                                       0x1405ABE00
#define CListWnd__DrawLine_x                                       0x1405AC780
#define CListWnd__DrawSeparator_x                                  0x1405ACC40
#define CListWnd__EnableLine_x                                     0x1405AD060
#define CListWnd__EnsureVisible_x                                  0x1405AD0C0
#define CListWnd__ExtendSel_x                                      0x1405AD1B0
#define CListWnd__GetColumnMinWidth_x                              0x1405AD540
#define CListWnd__GetColumnWidth_x                                 0x1405AD5C0
#define CListWnd__GetCurSel_x                                      0x1405AD6C0
#define CListWnd__GetItemData_x                                    0x1405ADA40
#define CListWnd__GetItemHeight_x                                  0x1405ADA80
#define CListWnd__GetItemRect_x                                    0x1405ADCA0
#define CListWnd__GetItemText_x                                    0x1405ADF40
#define CListWnd__GetSelList_x                                     0x1405AE190
#define CListWnd__GetSeparatorRect_x                               0x1405AE380
#define CListWnd__InsertLine_x                                     0x1405AF7E0
#define CListWnd__RemoveLine_x                                     0x1405AFE50
#define CListWnd__SetColors_x                                      0x1405B0210
#define CListWnd__SetColumnJustification_x                         0x1405B0230
#define CListWnd__SetColumnLabel_x                                 0x1405B02B0
#define CListWnd__SetColumnWidth_x                                 0x1405B0450
#define CListWnd__SetCurSel_x                                      0x1405B0520
#define CListWnd__SetItemColor_x                                   0x1405B0790
#define CListWnd__SetItemData_x                                    0x1405B0830
#define CListWnd__SetItemText_x                                    0x1405B0A70
#define CListWnd__Sort_x                                           0x1405B0E80
#define CListWnd__ToggleSel_x                                      0x1405B0FF0
#define CListWnd__SetColumnsSizable_x                              0x1405B04A0
#define CListWnd__SetItemWnd_x                                     0x1405B0BA0
#define CListWnd__GetItemWnd_x                                     0x1405AE120
#define CListWnd__SetItemIcon_x                                    0x1405B0870
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405A9D10
#define CListWnd__SetVScrollPos_x                                  0x1405B0DE0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140446250

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A1D320
#define MapViewMap__Clear_x                                        0x140447DD0
#define MapViewMap__SetZoom_x                                      0x14044E440
#define MapViewMap__HandleLButtonDown_x                            0x14044AF60

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14046FB80  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x1404761C0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140476960
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14047A1B0
#define CMerchantWnd__SelectBuySellSlot_x                          0x1404794F0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14047E450

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14066AEA0
#define CPacketScrambler__hton_x                                   0x14066AE90

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405D1700
#define CSidlManagerBase__FindAnimation1_x                         0x1405D1640
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405D1D30
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405D1AE0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405D0A40
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405D09D0
#define CSidlManagerBase__CreateXWnd_x                             0x1405D0030

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404E58B0
#define CSidlManager__CreateXWnd_x                                 0x1404E5A70

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405962D0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x140596400
#define CSidlScreenWnd__ConvertToRes_x                             0x1405E0930 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x140596570
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x140595A00
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x140595AD0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x140595CE0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x140596C50
#define CSidlScreenWnd__EnableIniStorage_x                         0x140596E80
#define CSidlScreenWnd__GetChildItem_x                             0x140597020
#define CSidlScreenWnd__GetSidlPiece_x                             0x140597270
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405A1330 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405975E0
#define CSidlScreenWnd__LoadIniInfo_x                              0x140597950
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140598220
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140598C20
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F05D88
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405992B0
#define CSidlScreenWnd__StoreIniVis_x                              0x140599AA0
#define CSidlScreenWnd__vftable_x                                  0x140AB6978
#define CSidlScreenWnd__WndNotification_x                          0x140599AF0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x140328EF0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140329390 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x1403292C0
#define CSkillMgr__IsActivatedSkill_x                              0x140329740
#define CSkillMgr__IsCombatSkill_x                                 0x140329780
#define CSkillMgr__GetSkillTimerDuration_x                         0x1403296B0
#define CSkillMgr__GetSkillLastUsed_x                              0x140329310

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x140501240
#define CSliderWnd__SetValue_x                                     0x1405B2160
#define CSliderWnd__SetNumTicks_x                                  0x1405B1FE0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404EBFE0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405B6900
#define CStmlWnd__CalculateHSBRange_x                              0x1405A0D20
#define CStmlWnd__CalculateVSBRange_x                              0x1405B7820
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405B8280
#define CStmlWnd__ForceParseNow_x                                  0x1405B8320
#define CStmlWnd__GetVisibleText_x                                 0x1405B89E0
#define CStmlWnd__MakeStmlColorTag_x                               0x1405BA730
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405BA770
#define CStmlWnd__SetSTMLText_x                                    0x1405C1740
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405C18F0
#define CStmlWnd__UpdateHistoryString_x                            0x1405C1C80

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405B2530
#define CTabWnd__DrawCurrentPage_x                                 0x1405B25D0
#define CTabWnd__DrawTab_x                                         0x1405B29A0
#define CTabWnd__GetTabRect_x                                      0x1405B3010
#define CTabWnd__InsertPage_x                                      0x1405B32E0
#define CTabWnd__RemovePage_x                                      0x1405B3570
#define CTabWnd__SetPage_x                                         0x1405B36D0
#define CTabWnd__UpdatePage_x                                      0x1405B39D0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405DAA30
#define CPageWnd__SetTabText_x                                     0x1405DAAA0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BC800  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BCC10


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405C90E0
#define CTextureFont__DrawWrappedText1_x                           0x1405C8FF0
#define CTextureFont__DrawWrappedText2_x                           0x1405C9210
#define CTextureFont__GetTextExtent_x                              0x1405C95C0
#define CTextureFont__GetHeight_x                                  0x1405C9580

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405DF090

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405955E0

// CXStr
#define CXStr__gFreeLists_x                                        0x140D34F00
#define CXStr__gCXStrAccess_x                                      0x140F058E8

// CXWnd
#define CXWnd__BringToTop_x                                        0x14059C390
#define CXWnd__ClrFocus_x                                          0x14059C680
#define CXWnd__Destroy_x                                           0x14059C800
#define CXWnd__DoAllDrawing_x                                      0x14059C910
#define CXWnd__DrawColoredRect_x                                   0x14059D0E0
#define CXWnd__DrawTooltip_x                                       0x14059E760
#define CXWnd__DrawTooltipAtPoint_x                                0x14059E810
#define CXWnd__GetChildItem_x                                      0x14059F110
#define CXWnd__GetChildWndAt_x                                     0x14059F1D0
#define CXWnd__GetClientRect_x                                     0x14059F490
#define CXWnd__GetClientClipRect_x                                 0x14059F340
#define CXWnd__GetRelativeRect_x                                   0x1405A0E60
#define CXWnd__GetScreenClipRect_x                                 0x1405A0F60
#define CXWnd__GetScreenRect_x                                     0x1405A10B0
#define CXWnd__GetTooltipRect_x                                    0x1405A1230
#define CXWnd__IsActive_x                                          0x140310840
#define CXWnd__IsDescendantOf_x                                    0x1405A1810
#define CXWnd__IsReallyVisible_x                                   0x1405A1880
#define CXWnd__IsType_x                                            0x1405A18C0
#define CXWnd__Minimize_x                                          0x1405A19C0
#define CXWnd__ProcessTransition_x                                 0x1405A28C0
#define CXWnd__Resize_x                                            0x1405A29E0
#define CXWnd__Right_x                                             0x1405A2A80
#define CXWnd__SetFocus_x                                          0x1405A2E20
#define CXWnd__SetFont_x                                           0x1405A2E70
#define CXWnd__SetKeyTooltip_x                                     0x1405A2F80
#define CXWnd__SetMouseOver_x                                      0x1405A30C0
#define CXWnd__SetParent_x                                         0x1405A3140
#define CXWnd__StartFade_x                                         0x1405A3580
#define CXWnd__vftable_x                                           0x140AB6F50
#define CXWnd__CXWnd_x                                             0x14059AF10
#define CXWnd__dCXWnd_x                                            0x14059B870

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405E5B70

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405C3550
#define CXWndManager__DrawCursor_x                                 0x1405C3830
#define CXWndManager__DrawWindows_x                                0x1405C3A90
#define CXWndManager__GetKeyboardFlags_x                           0x1405C4160
#define CXWndManager__HandleKeyboardMsg_x                          0x1405C41A0
#define CXWndManager__RemoveWnd_x                                  0x1405C77B0

// CDBStr
#define CDBStr__GetString_x                                        0x14018A500

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x140674CF0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D0C30
#define CCharacterListWnd__EnterWorld_x                            0x1400CFC40
#define CCharacterListWnd__Quit_x                                  0x1400D0C10
#define CCharacterListWnd__UpdateList_x                            0x1400D1A90

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140642320
#define ItemBase__CreateItemTagString_x                            0x140642D70
#define ItemBase__GetImageNum_x                                    0x140645280
#define ItemBase__GetItemValue_x                                   0x140646DC0
#define ItemBase__IsEmpty_x                                        0x140648950
#define ItemBase__IsKeyRingItem_x                                  0x140649060
#define ItemBase__ValueSellMerchant_x                              0x14064D2D0
#define ItemClient__CanDrop_x                                      0x1402AFF10
#define ItemClient__CanGoInBag_x                                   0x1402B0040
#define ItemClient__CreateItemClient_x                             0x1402B02C0
#define ItemClient__dItemClient_x                                  0x1402AFD80

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401A9DA0
#define EQ_LoadingS__Array_x                                       0x140D21230

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140659BA0
#define PcBase__GetCombatAbility_x                                 0x14065A290
#define PcBase__GetCombatAbilityTimer_x                            0x14065A330
#define PcBase__GetItemContainedRealEstateIds_x                    0x14065AAD0
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14065B610
#define PcClient__AlertInventoryChanged_x                          0x1402D2450
#define PcClient__GetConLevel_x                                    0x1402D2A70  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402D5200
#define PcClient__HasLoreItem_x                                    0x1402D6270
#define PcZoneClient__GetItemRecastTimer_x                         0x1402E3A20
#define PcZoneClient__RemoveMyAffect_x                             0x1402E7690

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x14021A990  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x14021AB40  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x14021ACA0  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x14021ABE0  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x140255870  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140184D40

// PlayerClient
#define PlayerBase__CanSee_x                                       0x14062EAA0
#define PlayerBase__CanSee1_x                                      0x14062EB70
#define PlayerBase__GetVisibilityLineSegment_x                     0x14062F040
#define PlayerBase__HasProperty_x                                  0x14062F210
#define PlayerBase__IsTargetable_x                                 0x14062F2D0
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402F53A0
#define PlayerClient__GetPcClient_x                                0x1402F7EC0
#define PlayerClient__PlayerClient_x                               0x1402ED700
#define PlayerClient__SetNameSpriteState_x                         0x1402FB5E0
#define PlayerClient__SetNameSpriteTint_x                          0x1402FC5A0
#define PlayerZoneClient__ChangeHeight_x                           0x14030ADB0
#define PlayerZoneClient__DoAttack_x                               0x14030BAC0
#define PlayerZoneClient__GetLevel_x                               0x14030F200
#define PlayerZoneClient__IsValidTeleport_x                        0x140258600
#define PlayerZoneClient__LegalPlayerRace_x                        0x140198A40

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1403044D0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x140304580  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x140304680
#define PlayerManagerClient__CreatePlayer_x                        0x140303FA0
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x14062E660

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402B5190
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402B4D90
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402B4E00
#define KeypressHandler__ClearCommandStateArray_x                  0x1402B5120  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402B52B0
#define KeypressHandler__HandleKeyUp_x                             0x1402B53D0
#define KeypressHandler__SaveKeymapping_x                          0x1402B5030  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140672810  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x14066C5E0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402DC810  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402E1B60
#define PcZoneClient__GetPcSkillLimit_x                            0x1402E41A0
#define PcZoneClient__RemovePetEffect_x                            0x1402E7970
#define PcZoneClient__HasAlternateAbility_x                        0x1402E4D70
#define PcZoneClient__CanEquipItem_x                               0x1402DFE80
#define PcZoneClient__GetItemByID_x                                0x1402E2A80
#define PcZoneClient__RemoveBuffEffect_x                           0x1402E7510
#define PcZoneClient__BandolierSwap_x                              0x1402DEEE0

// Doors
#define EQSwitch__UseSwitch_x                                      0x14025D130

// IconCache
#define IconCache__GetIcon_x                                       0x1403BED60

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403B33A0
#define CContainerMgr__CloseContainer_x                            0x1403B2CE0
#define CContainerMgr__OpenExperimentContainer_x                   0x1403B3720

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404A9AE0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402A7930

// CLootWnd
#define CLootWnd__LootAll_x                                        0x14043A270
#define CLootWnd__RequestLootSlot_x                                0x14043B2A0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401D92C0
#define EQ_Spell__SpellAffects_x                                   0x1401DA5A0
#define EQ_Spell__SpellAffectBase_x                                0x1401DA500
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D9C40
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D9BF0
#define EQ_Spell__IsSPAStacking_x                                  0x1401DA1D0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401D9D80
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401D9650

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C1D30

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1405067C0
#define CTargetWnd__RefreshTargetBuffs_x                           0x140505ED0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1405056D0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x14050DE50  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x1401816E0
#define CTaskManager__GetTaskStatus_x                              0x1401817F0
#define CTaskManager__GetElementDescription_x                      0x140181370

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401D75E0
#define EqSoundManager__PlayScriptMp3_x                            0x1401D6420
#define EqSoundManager__SoundAssistPlay_x                          0x14032E530  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x14032E870  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405A4350
#define CTextureAnimation__SetCurCell_x                            0x1405A4660

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402A5B30

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x14068D330
#define CharacterBase__GetItemByGlobalIndex1_x                     0x14068D3B0
#define CharacterBase__IsExpansionFlag_x                           0x1401FB7D0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x14038FE00
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140390800
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140391D50

// messages
#define msg_spell_worn_off_x                                       0x1402111A0
#define msg_new_text_x                                             0x14020C950
#define __msgTokenTextParam_x                                      0x140204020
#define msgTokenText_x                                             0x140203F30

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140330160
#define SpellManager__GetSpellByGroupAndRank_x                     0x140330080

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x14063D650

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1404336E0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403B80F0
#define CCursorAttachment__IsOkToActivate_x                        0x1403BB3B0
#define CCursorAttachment__RemoveAttachment_x                      0x1403BB660
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405DD530
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405DD720
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405DD730

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x14014E680
#define CFindItemWnd__Update_x                                     0x14014F020
#define CFindItemWnd__PickupSelectedItem_x                         0x140148AD0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x140158110
#define LootFiltersManager__GetItemFilterData_x                    0x140158C20
#define LootFiltersManager__RemoveItemLootFilter_x                 0x1401594C0
#define LootFiltersManager__SetItemLootFilter_x                    0x140159770

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14048C520

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x140328AB0
#define CResolutionHandler__UpdateResolution_x                     0x140589A20

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403AF680

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x140691710  // Rename..?
#define CDistillerInfo__Instance_x                                 0x140691600  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403D6030
#define CGroupWnd__UpdateDisplay_x                                 0x1403D5C10

// ItemBase
#define ItemBase__IsLore_x                                         0x140649190
#define ItemBase__IsLoreEquipped_x                                 0x140649220

#define MultipleItemMoveManager__ProcessMove_x                     0x1402C8000

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x1402559D0
#define EQPlacedItemManager__GetItemByGuid_x                       0x140255960
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x1402559A0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140322F10

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140126350
#define FactionManagerClient__HandleFactionMessage_x               0x140126700
#define FactionManagerClient__GetFactionStanding_x                 0x140125B20
#define FactionManagerClient__GetMaxFaction_x                      0x140125B20
#define FactionManagerClient__GetMinFaction_x                      0x1401259D0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AED70

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140131B00

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401B2730
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401B1AB0
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401B2550  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401B24D0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x140335460

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140322F10

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x14021AD30

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x14059A0E0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x1400868C0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140347020

// AchievementManager
#define AchievementManager__Instance_x                             0x14008EA80

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x140675870
#define FreeToPlayClient__RestrictionInfo_x                        0x140ACB6A0

// UdpConnection
#define UdpConnection__GetStats_x                                  0x14053C810

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x140826610
#define CGFScreenWnd__CGFScreenWnd_x                               0x140071260
#define CGFScreenWnd__CGFScreenWnd1_x                              0x1400713F0
#define CGFScreenWnd__dCGFScreenWnd_x                              0x1400715A0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
