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

#define __ClientDate                                       20260624u
#define __ExpectedVersionDate                              "Jun 24 2026"   /*PE-timestamp-derived; runtime-confirm on first test*/
#define __ExpectedVersionTime                              "02:19:25"   /*PE-timestamp-derived; runtime-confirm on first test*/
#define __ActualVersionDate_x                              0x14098f338
#define __ActualVersionTime_x                              0x14098f328
#define __ActualVersionBuild_x                             0x1409244f0

// Memory Protection
#define __MemChecker0_x                                    0x1402cf850
#define __MemChecker1_x                                    0x1405a9aa0
#define __MemChecker4_x                                    0x14029cb00
#define __EncryptPad0_x                                    0x140d6cc40

// EverQuestInfo
#define pinstEverQuestInfo_x                               0x140eb55e0
#define instEQZoneInfo_x                                   0x140eb57d4

// Misc Globals
#define __do_loot_x                                        0x14022f380
#define __gfMaxZoomCameraDistance_x                        0x1409257a8
#define __gfMaxCameraDistance_x                            0x140acf284
#define __CurrentSocial_x                                  0x140c210e4
#define __BindList_x                                       0x0  /*TERMINAL-ABSENT*/
#define g_eqCommandStates_x                                0x140d61a10
#define __CommandList_x                                    0x140d61c50
#define __ScreenMode_x                                     0x140dfce64
#define __gWorld_x                                         0x140eadf10
#define __gpbCommandEvent_x                                0x140eae008
#define __ServerHost_x                                     0x140eae1f8
#define __Guilds_x                                         0x140eb3ba0
#define __MemCheckBitmask_x                                0x140eb5b23
#define __MemCheckActive_x                                 0x140eb723d
#define __MouseEventTime_x                                 0x140f2abb0
#define DI8__MouseState_x                                  0x140f2ed98
#define __heqmain_x                                        0x140f31228
#define DI8__Mouse_x                                       0x140f31240
#define __HWnd_x                                           0x140f31248
#define __Mouse_x                                          0x140f31250
#define DI8__Keyboard_x                                    0x140f31270
#define __LoginName_x                                      0x140f319dc
#define __CurrentMapLabel_x                                0x140f45510
#define __LabelCache_x                                     0x140f46010
#define __ChatFilterDefs_x                                 0x140a691d0
#define Teleport_Table_Size_x                              0x140eae094
#define Teleport_Table_x                                   0x140eae520

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                        0x140eb0520
#define pinstActiveBanker_x                                0x140eadf38
#define pinstActiveCorpse_x                                0x140eadf28
#define pinstActiveGMaster_x                               0x140eadf30
#define pinstActiveMerchant_x                              0x140eadf20
#define pinstAltAdvManager_x                               0x140dfdd08
#define pinstCEverQuest_x                                  0x140f31288
#define pinstCamActor_x                                    0x140dfce50
#define pinstCDBStr_x                                      0x140dfcac0
#define pinstCDisplay_x                                    0x140f577e8
#define pinstControlledPlayer_x                            0x140eadfc8
#define pinstCResolutionHandler_x                          0x140f56688
#define pinstCSidlManager_x                                0x140f57690
#define pinstCXWndManager_x                                0x140f57688
#define instDynamicZone_x                                  0x140eb4050
#define instExpeditionLeader_x                             0x140eb409e
#define instExpeditionName_x                               0x140eb40de
#define pinstDZMember_x                                    0x140eb4168
#define pinstDZTimerInfo_x                                 0x140eb4170
#define pinstEqLogin_x                                     0x140f30210
#define instTribute_x                                      0x140d59880
#define pinstDeviceInputProxy_x                            0x140eb563c
#define pinstEQSoundManager_x                              0x140dfe090
#define pinstEQSpellStrings_x                              0x140de1640
#define pinstSGraphicsEngine_x                             0x140f566b8
#define pinstLocalPC_x                                     0x140eada88
#define pinstLocalPlayer_x                                 0x140eadf18
#define pinstCMercenaryClientManager_x                     0x140f2c4c8
#define pinstModelPlayer_x                                 0x140eadf48
#define pinstRenderInterface_x                             0x140f566d0
#define pinstSkillMgr_x                                    0x140f2e1a8
#define pinstSpawnManager_x                                0x140f2c8a8
#define pinstSpellManager_x                                0x140f2e218
#define pinstStringTable_x                                 0x140eada90
#define pinstSwitchManager_x                               0x140ead9c0
#define pinstTarget_x                                      0x140eadfc0
#define pinstTaskMember_x                                  0x140d59870
#define pinstTradeTarget_x                                 0x140eadf40
#define instTributeActive_x                                0x140d598a9
#define pinstViewActor_x                                   0x140dfce48
#define pinstWorldData_x                                   0x140eada50
#define pinstPlayerPath_x                                  0x140f2c8d0
#define pinstTargetIndicator_x                             0x140f2e2c8
#define EQObject_Top_x                                     0x140eadff0

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                          0x140f42660
#define pinstCContainerMgr_x                               0x140dfd018
#define pinstCContextMenuManager_x                         0x140f57360
#define pinstCInvSlotMgr_x                                 0x140dfd000
#define pinstCItemDisplayManager_x                         0x140f450e0
#define pinstCPopupWndManager_x                            0x140f45970
#define pinstCSpellDisplayMgr_x                            0x140f45fc0
#define pinstCTaskManager_x                                0x140c227b0
#define pinstEQSuiteTextureLoader_x                        0x140d826f0
#define pinstItemIconCache_x                               0x140f429c8
#define pinstLootFiltersManager_x                          0x140dfc508
#define pinstGFViewListener_x                              0x140f56b38


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                              0x140259d20
#define __CastRay_x                                        0x140251d80
#define __CastRay2_x                                       0x140251a70
#define __compress_block_x                                 0x14055f720
#define __ConvertItemTags_x                                0x140252210
#define __CleanItemTags_x                                  0x14008d490
#define __CreateCascadeMenuItems_x                         0x1401984a0
#define __decompress_block_x                               0x1405a5290
#define __DoesFileExist_x                                  0x1405adb10
#define __EQGetTime_x                                      0x1405aad70
#define __ExecuteCmd_x                                     0x140226820
#define __FixHeading_x                                     0x1406671f0
#define __FlushDxKeyboard_x                                0x140354870
#define __get_bearing_x                                    0x14025c030
#define __get_melee_range_x                                0x14025c120
#define __GetAnimationCache_x                              0x1403db7c0
#define __GetGaugeValueFromEQ_x                            0x14051e500
#define __GetLabelFromEQ_x                                 0x14051faf0
#define __GetXTargetType_x                                 0x140669580
#define __HeadingDiff_x                                    0x1406671f0
#define __HelpPath_x                                       0x140f2aa78
#define __NewUIINI_x                                       0x0  /*TERMINAL-ABSENT*/
#define __ProcessDeviceEvents_x                            0x14029d100
#define __ProcessGameEvents_x                              0x1402918c0
#define __ProcessKeyboardEvents_x                          0x140356050
#define __ProcessMouseEvents_x                             0x140293020
#define __SaveColors_x                                     0x1401a8610
#define __STMLToText_x                                     0x1405be3a0
#define __WndProc_x                                        0x140353030
#define CMemoryMappedFile__SetFile_x                       0x140816430
#define DrawNetStatus_x                                    0x1402dee20
#define Util__FastTime_x                                   0x1405aa230
#define __eq_delete_x                                      0x1406e24e8
#define __eq_new_x                                         0x1406e26b0
#define __CopyLayout_x                                     0x1402cbc30
#define __ThrottleFrameRate_x                              0x1402809d5
#define __ThrottleFrameRateEnd_x                           0x1402809db

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                              0x140365eb0
#define CAAWnd__Update_x                                   0x1403673d0
#define CAAWnd__UpdateSelected_x                           0x1403673d0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                0x1400b2160
#define CAdvancedLootWnd__DoSharedAdvLootAction_x          0x1400b1c10
#define CAdvancedLootWnd__AddPlayerToList_x                0x1400a6e60
#define CAdvancedLootWnd__UpdateMasterLooter_x             0x1400b2ac0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                0x1401b3890
#define AltAdvManager__IsAbilityReady_x                    0x1401b3d30
#define AltAdvManager__GetAAById_x                         0x1401b54b0
#define AltAdvManager__CanTrainAbility_x                   0x1401b2f20
#define AltAdvManager__CanSeeAbility_x                     0x1401b2bd0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                0x1400d9d40
#define CharacterZoneClient__CalcAffectChange_x            0x1400dac00
#define CharacterZoneClient__CalcAffectChangeGeneric_x     0x1400dae50
#define CharacterZoneClient__CanMedOnHorse_x               0x1400ef1f0
#define CharacterZoneClient__CanUseItem_x                  0x1400ef7b0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x    0x1400db830
#define CharacterZoneClient__CastSpell_x                   0x1400de590
#define CharacterZoneClient__CharacterZoneClient_x         0x1400eb670
#define CharacterZoneClient__Cur_HP_x                      0x1400f0f40
#define CharacterZoneClient__Cur_Mana_x                    0x1400f1100
#define CharacterZoneClient__FindAffectSlot_x              0x1400debc0
#define CharacterZoneClient__GetAdjustedSkill_x            0x1400f7850
#define CharacterZoneClient__GetBaseSkill_x                0x140105dc0
#define CharacterZoneClient__GetCastingTimeModifier_x      0x1400e0060
#define CharacterZoneClient__GetCurrentMod_x               0x1400eeaf0
#define CharacterZoneClient__GetCursorItemCount_x          0x1400f90e0
#define CharacterZoneClient__GetEnduranceRegen_x           0x1400f7fd0
#define CharacterZoneClient__GetFirstEffectSlot_x          0x1400e01e0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x 0x1400cf810
#define CharacterZoneClient__GetFocusDurationMod_x         0x1400d16e0
#define CharacterZoneClient__GetHPRegen_x                  0x1400f8700
#define CharacterZoneClient__GetItemCountInInventory_x     0x1400f0b90
#define CharacterZoneClient__GetItemCountWorn_x            0x1400f91b0
#define CharacterZoneClient__GetLastEffectSlot_x           0x1400e0260
#define CharacterZoneClient__GetManaRegen_x                0x1400f9f70
#define CharacterZoneClient__GetModCap_x                   0x140101c70
#define CharacterZoneClient__GetOpenEffectSlot_x           0x1400e04f0
#define CharacterZoneClient__GetPCSpellAffect_x            0x1400e06c0
#define CharacterZoneClient__GetPctModAndMin_x             0x1400d4d60
#define CharacterZoneClient__HasSkill_x                    0x1400fd0a0
#define CharacterZoneClient__HitBySpell_x                  0x1400e1130
#define CharacterZoneClient__IsStackBlocked_x              0x1400e4ad0
#define CharacterZoneClient__MakeMeVisible_x               0x140101050
#define CharacterZoneClient__Max_Endurance_x               0x1402f9d20
#define CharacterZoneClient__Max_HP_x                      0x1401013a0
#define CharacterZoneClient__Max_Mana_x                    0x1402f9f40
#define CharacterZoneClient__NotifyPCAffectChange_x        0x140101800
#define CharacterZoneClient__RemovePCAffectex_x            0x1400e8110
#define CharacterZoneClient__SpellDuration_x               0x1400e8e40
#define CharacterZoneClient__TotalEffect_x                 0x1400ea2d0
#define CharacterZoneClient__UseSkill_x                    0x140106df0


// CBankWnd
#define CBankWnd__WndNotification_x                        0x1400b3000

// CBarterWnd
#define CBarterWnd__WndNotification_x                      0x140392080

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                0x14038dd40
#define CBarterSearchWnd__UpdateInventoryList_x            0x140391af0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x            0x1403948f0

// CButtonWnd
#define CButtonWnd__vftable_x                              0x140aeed10

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x             0x1403b7b50
#define CChatWindowManager__InitContextMenu_x              0x1403b7ce0
#define CChatWindowManager__FreeChatWindow_x               0x1403b6b50
#define CChatWindowManager__SetLockedActiveChatWindow_x    0x1403c1b50
#define CChatWindowManager__CreateChatWindow_x             0x1403b6580

// ChatManagerClient
#define ChatManagerClient__Instance_x                      0x14010f3f0

// CChatWindow
#define CChatWindow__CChatWindow_x                         0x1403c10d0
#define CChatWindow__Clear_x                               0x1403c20d0
#define CChatWindow__WndNotification_x                     0x1403c3320
#define CChatWindow__AddHistory_x                          0x1403c1be0

// CContextMenu
#define CContextMenu__AddMenuItem_x                        0x1405ebce0
#define CContextMenu__RemoveMenuItem_x                     0x1405ec0f0
#define CContextMenu__RemoveAllMenuItems_x                 0x1405ec0c0
#define CContextMenu__CheckMenuItem_x                      0x1405ebf30
#define CContextMenu__SetMenuItem_x                        0x1405ec110
#define CContextMenu__AddSeparator_x                       0x1405ebe60

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                     0x1405dda70
#define CContextMenuManager__RemoveMenu_x                  0x1405de050
#define CContextMenuManager__PopupMenu_x                   0x1405dea20
#define CContextMenuManager__Flush_x                       0x1405ddaf0
#define CContextMenuManager__CreateDefaultMenu_x           0x1403d1a90

// CChatService
#define CChatService__GetNumberOfFriends_x                 0x1406bc0e0
#define CChatService__GetFriendName_x                      0x1406bc0e0

// CComboWnd
#define CComboWnd__DeleteAll_x                             0x1405ce980
#define CComboWnd__Draw_x                                  0x1405cea80
#define CComboWnd__GetCurChoice_x                          0x1405cedb0
#define CComboWnd__GetListRect_x                           0x1405cee10
#define CComboWnd__InsertChoice_x                          0x1405cf150
#define CComboWnd__SetColors_x                             0x1405cf4e0
#define CComboWnd__SetChoice_x                             0x1405d0060
#define CComboWnd__GetItemCount_x                          0x1405cfa20
#define CComboWnd__GetCurChoiceText_x                      0x1405cedb0
#define CComboWnd__GetChoiceText_x                         0x1405ced40
#define CComboWnd__InsertChoiceAtIndex_x                   0x1405cf210

// CContainerWnd
#define CContainerWnd__HandleCombine_x                     0x1403cf790
#define CContainerWnd__SetContainer_x                      0x14042f7a0
#define CContainerWnd__vftable_x                           0x140a040b0

// CDisplay
#define CDisplay__cameraType_x                             0x140dfcbcc
#define CDisplay__ZoneMainUI_x                             0x140606430
#define CDisplay__PreZoneMainUI_x                          0x1401a7810
#define CDisplay__CleanGameUI_x                            0x140197560
#define CDisplay__GetClickedActor_x                        0x14019b780
#define CDisplay__GetUserDefinedColor_x                    0x14019d480
#define CDisplay__InitCharSelectUI_x                       0x14019c6a0
#define CDisplay__ReloadUI_x                               0x1401a7810
#define CDisplay__RestartUI_x                              0x14020ac20
#define CDisplay__WriteTextHD2_x                           0x1401b0e10
#define CDisplay__TrueDistance_x                           0x14030b080
#define CDisplay__SetViewActor_x                           0x1401aad40
#define CDisplay__GetFloorHeight_x                         0x14019b9e0
#define CDisplay__ToggleScreenshotMode_x                   0x1401adf40
#define CDisplay__RealRender_World_x                       0x1401a6be0

// CEditWnd
#define CEditBaseWnd__SetSel_x                             0x140611520
#define CEditWnd__DrawCaret_x                              0x1405f7450
#define CEditWnd__EnsureCaretVisible_x                     0x1406030d0
#define CEditWnd__GetCaretPt_x                             0x140602790
#define CEditWnd__GetCharIndexPt_x                         0x140603250
#define CEditWnd__GetDisplayString_x                       0x140602a30
#define CEditWnd__GetHorzOffset_x                          0x140602c80
#define CEditWnd__GetLineForPrintableChar_x                0x140602de0
#define CEditWnd__GetSelStartPt_x                          0x1406030d0
#define CEditWnd__GetSTMLSafeText_x                        0x140602f10
#define CEditWnd__PointFromPrintableChar_x                 0x140604820
#define CEditWnd__ReplaceSelection_x                       0x1406040c0
#define CEditWnd__SelectableCharFromPoint_x                0x140605040
#define CEditWnd__SetEditable_x                            0x140604820
#define CEditWnd__SetWindowText_x                          0x140604850

// CEverQuest
#define CEverQuest__DoPercentConvert_x                     0x140281ab0
#define CEverQuest__ClickedPlayer_x                        0x140275c60
#define CEverQuest__CreateTargetIndicator_x                0x140276560
#define CEverQuest__DoTellWindow_x                         0x14010f0f0
#define CEverQuest__OutputTextToLog_x                      0x14010f9e0
#define CEverQuest__DropHeldItemOnGround_x                 0x1402834a0
#define CEverQuest__dsp_chat_x                             0x14010eb20
#define CEverQuest__trimName_x                             0x1402aecf0
#define CEverQuest__Emote_x                                0x140283e30
#define CEverQuest__GetBodyTypeDesc_x                      0x140284c10
#define CEverQuest__GetClassDesc_x                         0x140286b20
#define CEverQuest__GetClassThreeLetterCode_x              0x140286cd0
#define CEverQuest__GetDeityDesc_x                         0x140286e90
#define CEverQuest__GetLangDesc_x                          0x140673720
#define CEverQuest__GetRaceDesc_x                          0x140285ac0
#define CEverQuest__InterpretCmd_x                         0x140287700
#define CEverQuest__LeftClickedOnPlayer_x                  0x14029d170
#define CEverQuest__LMouseUp_x                             0x140289210
#define CEverQuest__RightClickedOnPlayer_x                 0x14029a510
#define CEverQuest__RMouseUp_x                             0x140293bb0
#define CEverQuest__SetGameState_x                         0x14029fc30
#define CEverQuest__UPCNotificationFlush_x                 0x1402a5670
#define CEverQuest__IssuePetCommand_x                      0x140288df0
#define CEverQuest__ReportSuccessfulHeal_x                 0x140294fa0
#define CEverQuest__ReportSuccessfulHit_x                  0x140295dc0

// CGaugeWnd
#define CGaugeWnd__Draw_x                                  0x1403e5400

// CGuild
#define CGuild__FindMemberByName_x                         0x1400cacd0
#define CGuild__GetGuildName_x                             0x1400c8ff0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                       0x14040c240

//CHotButton
#define CHotButton__SetButtonSize_x                        0x1402c12b0
#define CHotButton__SetCheck_x                             0x1402c15a0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                         0x140426400
#define CInvSlotMgr__MoveItem_x                            0x140428b80
#define CInvSlotMgr__SelectSlot_x                          0x1404294b0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                        0x140423010
#define CInvSlot__SliderComplete_x                         0x140426510
#define CInvSlot__GetItemBase_x                            0x14041e4b0
#define CInvSlot__UpdateItem_x                             0x140426dc0

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                         0x14042b6c0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                         0x14044cdf0
#define CItemDisplayWnd__UpdateStrings_x                   0x14044fff0
#define CItemDisplayWnd__InsertAugmentRequest_x            0x14044b000
#define CItemDisplayWnd__RemoveAugmentRequest_x            0x14044b000
#define CItemDisplayWnd__RequestConvertItem_x              0x14044c210

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                       0x14051af60
#define CSpellDisplayWnd__UpdateStrings_x                  0x14051ccf0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                   0x1405587a0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x        0x140370380

// CSpellDisplayManager
#define CSpellDisplayManager__ShowSpell_x                  0x14051cb30

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                   0x14015c380

// CLabel
#define CLabel__UpdateText_x                               0x140457600

// CListWnd
#define CListWnd__CListWnd_x                               0x1405d2320
#define CListWnd__dCListWnd_x                              0x1405d2760
#define CListWnd__vftable_x                                0x140aece60 /*re-derived 6-24 ctor-store @0x1405d2320; was 0x1405cfa20 (.text collision w/ CComboWnd__GetItemCount)*/
#define CListWnd__AddColumn_x                              0x1405d2df0
#define CListWnd__AddColumn1_x                             0x1405d2e90
#define CListWnd__AddLine_x                                0x1405d2ff0
#define CListWnd__AddString_x                              0x1405d3590
#define CListWnd__CalculateFirstVisibleLine_x              0x1405d4660
#define CListWnd__CalculateVSBRange_x                      0x1405d4660
#define CListWnd__ClearSel_x                               0x1405d3f80
#define CListWnd__ClearAllSel_x                            0x1405d3f20
#define CListWnd__CloseAndUpdateEditWindow_x               0x1405d3fe0
#define CListWnd__Compare_x                                0x1405d41a0
#define CListWnd__Draw_x                                   0x1405d51f0
#define CListWnd__DrawColumnSeparators_x                   0x1405d51f0
#define CListWnd__DrawHeader_x                             0x1405d52b0
#define CListWnd__DrawItem_x                               0x1405d5990
#define CListWnd__DrawLine_x                               0x1405d6ee0
#define CListWnd__DrawSeparator_x                          0x1405d7400
#define CListWnd__EnableLine_x                             0x1405d6c10
#define CListWnd__EnsureVisible_x                          0x1405d7860
#define CListWnd__ExtendSel_x                              0x1405d6d60
#define CListWnd__GetColumnMinWidth_x                      0x1405d70f0
#define CListWnd__GetColumnWidth_x                         0x1405d7170
#define CListWnd__GetCurSel_x                              0x1405d7f50
#define CListWnd__GetItemData_x                            0x1405d75f0
#define CListWnd__GetItemHeight_x                          0x1405d7630
#define CListWnd__GetItemRect_x                            0x1405d8170
#define CListWnd__GetItemText_x                            0x1405d7b00
#define CListWnd__GetSelList_x                             0x1405d7d60
#define CListWnd__GetSeparatorRect_x                       0x1405d7f50
#define CListWnd__InsertLine_x                             0x1405d9fd0
#define CListWnd__RemoveLine_x                             0x1405d9a20
#define CListWnd__SetColors_x                              0x1405da9e0
#define CListWnd__SetColumnJustification_x                 0x1405d9e00
#define CListWnd__SetColumnLabel_x                         0x1405d9e80
#define CListWnd__SetColumnWidth_x                         0x1405da020
#define CListWnd__SetCurSel_x                              0x1405dac80
#define CListWnd__SetItemColor_x                           0x1405da360
#define CListWnd__SetItemData_x                            0x1405da400
#define CListWnd__SetItemText_x                            0x1405da640
#define CListWnd__Sort_x                                   0x1405daa50
#define CListWnd__ToggleSel_x                              0x1405dabc0
#define CListWnd__SetColumnsSizable_x                      0x1405da070
#define CListWnd__SetItemWnd_x                             0x1405da770
#define CListWnd__GetItemWnd_x                             0x1405d7cf0
#define CListWnd__SetItemIcon_x                            0x1405da440
#define CListWnd__CalculateCustomWindowPositions_x         0x1405d38d0
#define CListWnd__SetVScrollPos_x                          0x1405da9b0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                         0x14046afe0

// MapViewMap
#define MapViewMap__vftable_x                              0x140a4fb70
#define MapViewMap__Clear_x                                0x14046cca0
#define MapViewMap__SetZoom_x                              0x140475080
#define MapViewMap__HandleLButtonDown_x                    0x14046fe80

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x              0x140495460
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x 0x14049bdc0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x 0x14049c590
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x 0x14049fed0
#define CMerchantWnd__SelectBuySellSlot_x                  0x1404a0b90
#define CMerchantWnd__PurchasePageHandler__UpdateList_x    0x1404a6820

// CPacketScrambler
#define CPacketScrambler__ntoh_x                           0x140697160
#define CPacketScrambler__hton_x                           0x140697160

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x         0x1405fb880
#define CSidlManagerBase__FindAnimation1_x                 0x1405fb7c0
#define CSidlManagerBase__FindScreenPieceTemplate_x        0x1405fbc60
#define CSidlManagerBase__FindScreenPieceTemplate1_x       0x1405fbc60
#define CSidlManagerBase__CreateXWndFromTemplate_x         0x1405fab50
#define CSidlManagerBase__CreateXWndFromTemplate1_x        0x1405fab50
#define CSidlManagerBase__CreateXWnd_x                     0x1405fa190

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                 0x14050dda0
#define CSidlManager__CreateXWnd_x                         0x14050df60

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                0x1405c0a50
#define CSidlScreenWnd__CalculateVSBRange_x                0x1405bfe90
#define CSidlScreenWnd__ConvertToRes_x                     0x14060ac30
#define CSidlScreenWnd__CreateChildrenFromSidl_x           0x1405c0130
#define CSidlScreenWnd__CSidlScreenWnd1_x                  0x1405bf5d0
#define CSidlScreenWnd__CSidlScreenWnd2_x                  0x1405bf6a0
#define CSidlScreenWnd__dCSidlScreenWnd_x                  0x1405bf910
#define CSidlScreenWnd__DrawSidlPiece_x                    0x1405c0820
#define CSidlScreenWnd__EnableIniStorage_x                 0x1405c0a50
#define CSidlScreenWnd__GetChildItem_x                     0x1405c0bf0
#define CSidlScreenWnd__GetSidlPiece_x                     0x1405c0e40
#define CSidlScreenWnd__HandleLButtonUp_x                  0x1405cbcf0
#define CSidlScreenWnd__Init1_x                            0x1405c11b0
#define CSidlScreenWnd__LoadIniInfo_x                      0x1405c2100
#define CSidlScreenWnd__LoadIniListWnd_x                   0x1405c1df0
#define CSidlScreenWnd__LoadSidlScreen_x                   0x1405c27f0
#define CSidlScreenWnd__m_layoutCopy_x                     0x140f569d8
#define CSidlScreenWnd__StoreIniInfo_x                     0x1405c3940
#define CSidlScreenWnd__StoreIniVis_x                      0x1405c3660
#define CSidlScreenWnd__vftable_x                          0x140a6ae78
#define CSidlScreenWnd__WndNotification_x                  0x1405c36b0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                           0x14033f380
#define CSkillMgr__GetSkillCap_x                           0x14033db20
#define CSkillMgr__GetNameToken_x                          0x14033f660
#define CSkillMgr__IsActivatedSkill_x                      0x14033faf0
#define CSkillMgr__IsCombatSkill_x                         0x14033faf0
#define CSkillMgr__GetSkillTimerDuration_x                 0x14033faf0
#define CSkillMgr__GetSkillLastUsed_x                      0x14033f660

// CSliderWnd
#define CSliderWnd__GetValue_x                             0x1405dc190
#define CSliderWnd__SetValue_x                             0x1405dc970
#define CSliderWnd__SetNumTicks_x                          0x1405dbba0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                       0x140514630

// CStmlWnd
#define CStmlWnd__AppendSTML_x                             0x1405e1200
#define CStmlWnd__CalculateHSBRange_x                      0x1405ca890
#define CStmlWnd__CalculateVSBRange_x                      0x1405e13a0
#define CStmlWnd__FastForwardToEndOfTag_x                  0x1405e1eb0
#define CStmlWnd__ForceParseNow_x                          0x1405e2df0
#define CStmlWnd__GetVisibleText_x                         0x1405e33c0
#define CStmlWnd__MakeStmlColorTag_x                       0x1405e4390
#define CStmlWnd__MakeWndNotificationTag_x                 0x1405e43d0
#define CStmlWnd__SetSTMLText_x                            0x1405eb460
#define CStmlWnd__StripFirstSTMLLines_x                    0x1405eb610
#define CStmlWnd__UpdateHistoryString_x                    0x1405eb9b0

// CTabWnd
#define CTabWnd__Draw_x                                    0x1405dc0f0
#define CTabWnd__DrawCurrentPage_x                         0x1405dc190
#define CTabWnd__DrawTab_x                                 0x1405dc560
#define CTabWnd__GetTabRect_x                              0x1405dcbe0
#define CTabWnd__InsertPage_x                              0x1405dceb0
#define CTabWnd__RemovePage_x                              0x1405dd140
#define CTabWnd__SetPage_x                                 0x1405dd2a0
#define CTabWnd__UpdatePage_x                              0x1405dd5a0

// CPageWnd
#define CPageWnd__FlashTab_x                               0x140604cb0
#define CPageWnd__SetTabText_x                             0x140604cb0

// CTextOverlay
#define CTextOverlay__DisplayText_x                        0x1400c24d0
#define CBroadcast__Get_x                                  0x1400c2900


// CTextureFont
#define CTextureFont__DrawWrappedText_x                    0x1405f2f30
#define CTextureFont__DrawWrappedText1_x                   0x1405f2f30
#define CTextureFont__DrawWrappedText2_x                   0x1405f3160
#define CTextureFont__GetTextExtent_x                      0x1405f41c0
#define CTextureFont__GetHeight_x                          0x1405f41c0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                      0x140609c30

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                     0x1405bca20

// CXStr
#define CXStr__gFreeLists_x                                0x140d82060
#define CXStr__gCXStrAccess_x                              0x140f56538

// CXWnd
#define CXWnd__BringToTop_x                                0x1405c6a80
#define CXWnd__ClrFocus_x                                  0x1405c61c0
#define CXWnd__Destroy_x                                   0x1405c6ce0
#define CXWnd__DoAllDrawing_x                              0x1405c7160
#define CXWnd__DrawColoredRect_x                           0x1405c6c10
#define CXWnd__DrawTooltip_x                               0x1405c8280
#define CXWnd__DrawTooltipAtPoint_x                        0x1405c8340
#define CXWnd__GetChildItem_x                              0x1405c8c50
#define CXWnd__GetChildWndAt_x                             0x1405c8d10
#define CXWnd__GetClientRect_x                             0x1405c8fd0
#define CXWnd__GetClientClipRect_x                         0x1405c8e80
#define CXWnd__GetRelativeRect_x                           0x1405cb590
#define CXWnd__GetScreenClipRect_x                         0x1405caae0
#define CXWnd__GetScreenRect_x                             0x1405cb880
#define CXWnd__GetTooltipRect_x                            0x1405cade0
#define CXWnd__IsActive_x                                  0x1405cbf20
#define CXWnd__IsDescendantOf_x                            0x1405cbfb0
#define CXWnd__IsReallyVisible_x                           0x1405cbfb0
#define CXWnd__IsType_x                                    0x1405cb490
#define CXWnd__Minimize_x                                  0x1405cc1c0
#define CXWnd__ProcessTransition_x                         0x1402e1c10
#define CXWnd__Resize_x                                    0x1405cc590
#define CXWnd__Right_x                                     0x1405c5e50
#define CXWnd__SetFocus_x                                  0x1405cc9f0
#define CXWnd__SetFont_x                                   0x1405cca40
#define CXWnd__SetKeyTooltip_x                             0x1405ccb50
#define CXWnd__SetMouseOver_x                              0x1405cd8a0
#define CXWnd__SetParent_x                                 0x1405cd970
#define CXWnd__StartFade_x                                 0x1405cddf0
#define CXWnd__vftable_x                                   0x140aec6c0
#define CXWnd__CXWnd_x                                     0x1405c56c0
#define CXWnd__dCXWnd_x                                    0x1405c5fa0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                     0x140610080

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                  0x1405edec0
#define CXWndManager__DrawCursor_x                         0x1405ed5b0
#define CXWndManager__DrawWindows_x                        0x1405ed810
#define CXWndManager__GetKeyboardFlags_x                   0x1405eee10
#define CXWndManager__HandleKeyboardMsg_x                  0x1405edec0
#define CXWndManager__RemoveWnd_x                          0x1405f2140

// CDBStr
#define CDBStr__GetString_x                                0x140195720

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                0x1406a0ff0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x               0x1400d76d0
#define CCharacterListWnd__EnterWorld_x                    0x1400d64d0
#define CCharacterListWnd__Quit_x                          0x14012dea0
#define CCharacterListWnd__UpdateList_x                    0x1400d8410

// ItemClient
#define ItemBase__CanGemFitInSlot_x                        0x14066e3c0
#define ItemBase__CreateItemTagString_x                    0x14066ed90
#define ItemBase__GetImageNum_x                            0x140672ee0
#define ItemBase__GetItemValue_x                           0x1406730f0
#define ItemBase__IsEmpty_x                                0x140674d70
#define ItemBase__IsKeyRingItem_x                          0x1406754e0
#define ItemBase__ValueSellMerchant_x                      0x140679690
#define ItemClient__CanDrop_x                              0x1402c3b00
#define ItemClient__CanGoInBag_x                           0x1402c3c30
#define ItemClient__CreateItemClient_x                     0x1402c3ec0
#define ItemClient__dItemClient_x                          0x1402c3980

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                      0x1401b5500
#define EQ_LoadingS__Array_x                               0x140d5bd60

// PcClient
#define PcBase__GetAlternateAbilityId_x                    0x140685790
#define PcBase__GetCombatAbility_x                         0x140685e80
#define PcBase__GetCombatAbilityTimer_x                    0x140685f20
#define PcBase__GetItemContainedRealEstateIds_x            0x1406866f0
#define PcBase__GetNonArchivedOwnedRealEstates_x           0x140687170
#define PcClient__AlertInventoryChanged_x                  0x1402e7110
#define PcClient__GetConLevel_x                            0x1402e7860
#define PcClient__GetMeleeSpellFromSkillIndex_x            0x1402e9f60
#define PcClient__HasLoreItem_x                            0x1402eb010
#define PcZoneClient__GetItemRecastTimer_x                 0x1402f7990
#define PcZoneClient__RemoveMyAffect_x                     0x1402fae50

// EQGroundItemListManager
#define EQGroundItem__EQGroundItem_x                       0x14022b300
#define EQGroundItemListManager__Add_x                     0x14022d250
#define EQGroundItemListManager__Clear_x                   0x14022b550
#define EQGroundItemListManager__Delete_x                  0x14022d250
#define EQGroundItemListManager__Instance_x                0x14022b6a0

// EQPlacedItemManager
#define EQPlacedItemManager__Add_x                         0x140268c80

// CTribute
#define CTribute__GetActiveFavorCost_x                     0x14018fe50

// PlayerClient
#define PlayerBase__CanSee_x                               0x1406596d0
#define PlayerBase__CanSee1_x                              0x1406597b0
#define PlayerBase__GetVisibilityLineSegment_x             0x140659ca0
#define PlayerBase__HasProperty_x                          0x140670cb0
#define PlayerBase__IsTargetable_x                         0x140659f40
#define PlayerClient__ChangeBoneStringSprite_x             0x140308c00
#define PlayerClient__GetPcClient_x                        0x14030d500
#define PlayerClient__PlayerClient_x                       0x140300f20
#define PlayerClient__SetNameSpriteState_x                 0x14030ee70
#define PlayerClient__SetNameSpriteTint_x                  0x14030fe30
#define PlayerZoneClient__ChangeHeight_x                   0x14031ea40
#define PlayerZoneClient__DoAttack_x                       0x14031f750
#define PlayerZoneClient__GetLevel_x                       0x140322f00
#define PlayerZoneClient__IsValidTeleport_x                0x140269cb0
#define PlayerZoneClient__LegalPlayerRace_x                0x1401a3bd0

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                0x140317f10
#define PlayerManagerClient__GetSpawnByName_x              0x140317fc0
#define PlayerManagerClient__GetPlayerFromPartialName_x    0x1403180c0
#define PlayerManagerClient__CreatePlayer_x                0x1403179d0
#define PlayerManagerBase__PrepForDestroyPlayer_x          0x1406591e0

// KeyPressHandler
#define KeypressHandler__Get_x                             0x1402c9120
#define KeypressHandler__AttachAltKeyToEqCommand_x         0x1402c8a30
#define KeypressHandler__AttachKeyToEqCommand_x            0x1402c8aa0
#define KeypressHandler__ClearCommandStateArray_x          0x1402caa70
#define KeypressHandler__HandleKeyDown_x                   0x1402c9240
#define KeypressHandler__HandleKeyUp_x                     0x1402c9360
#define KeypressHandler__SaveKeymapping_x                  0x1402c8f30

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x               0x14069ec10

// StringTable
#define StringTable__getString_x                           0x140698800

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                    0x1402f1130
#define PcZoneClient__DestroyHeldItemOrMoney_x             0x1402f5ac0
#define PcZoneClient__GetPcSkillLimit_x                    0x1402f8a70
#define PcZoneClient__RemovePetEffect_x                    0x1402fb130
#define PcZoneClient__HasAlternateAbility_x                0x1402f9650
#define PcZoneClient__CanEquipItem_x                       0x1402f3d50
#define PcZoneClient__GetItemByID_x                        0x1402f6a10
#define PcZoneClient__RemoveBuffEffect_x                   0x1402face0
#define PcZoneClient__BandolierSwap_x                      0x1402e71c0

// Doors
#define EQSwitch__UseSwitch_x                              0x14026e920

// IconCache
#define IconCache__GetIcon_x                               0x1400aa1a0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                     0x1403ce4e0
#define CContainerMgr__CloseContainer_x                    0x1403cde00
#define CContainerMgr__OpenExperimentContainer_x           0x1403ce880

// CQuantityWnd
#define CQuantityWnd__Open_x                               0x1404d1020

// CHelpWnd
#define CHelpWnd__SetFile_x                                0x1402bb030

// CLootWnd
#define CLootWnd__LootAll_x                                0x1404608f0
#define CLootWnd__RequestLootSlot_x                        0x14045fbd0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                    0x1401e7da0
#define EQ_Spell__SpellAffects_x                           0x1401e6f20
#define EQ_Spell__SpellAffectBase_x                        0x1401e6e80
#define EQ_Spell__GetSpellAffectBySlot_x                   0x1400e0850
#define EQ_Spell__GetSpellAffectByIndex_x                  0x1400e1130
#define EQ_Spell__IsSPAStacking_x                          0x1401e87f0
#define EQ_Spell__IsSPAIgnoredByStacking_x                 0x1401e6700
#define EQ_Spell__IsDegeneratingLevelMod_x                 0x1401e7da0

// EQSpellStrings
#define EQSpellStrings__GetString_x                        0x1400c94d0

// CTargetWnd
#define CTargetWnd__WndNotification_x                      0x14052ed90
#define CTargetWnd__RefreshTargetBuffs_x                   0x14052e4b0
#define CTargetWnd__HandleBuffRemoveRequest_x              0x14052f7c0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                       0x140536640

// CTaskManager
#define CTaskManager__GetEntry_x                           0x14018ec30
#define CTaskManager__GetTaskStatus_x                      0x14018ec30
#define CTaskManager__GetElementDescription_x              0x14018c560

// EqSoundManager
#define EqSoundManager__WavePlay_x                         0x1401e3f60
#define EqSoundManager__PlayScriptMp3_x                    0x1401e2cf0
#define EqSoundManager__SoundAssistPlay_x                  0x140342bd0
#define EqSoundManager__WaveInstancePlay_x                 0x140342f10

// CTextureAnimation
#define CTextureAnimation__Draw_x                          0x1405cdf20
#define CTextureAnimation__SetCurCell_x                    0x1405ce230

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                     0x1402b9220

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x              0x1406b9840
#define CharacterBase__GetItemByGlobalIndex1_x             0x1406b98c0
#define CharacterBase__IsExpansionFlag_x                   0x14020c0c0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x              0x1403a8a70
#define CCastSpellWnd__IsBardSongPlaying_x                 0x1403a94e0
#define CCastSpellWnd__RefreshSpellGemButtons_x            0x1403aaa50

// messages
#define msg_spell_worn_off_x                               0x14049b970
#define msg_new_text_x                                     0x14021ccc0
#define __msgTokenTextParam_x                              0x140214050
#define msgTokenText_x                                     0x140213f60

// SpellManager
#define Spellmanager__LoadTextSpells_x                     0x140344940
#define SpellManager__GetSpellByGroupAndRank_x             0x140344840

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140669b30

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                            0x140457d90

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                0x1403d5ca0
#define CCursorAttachment__IsOkToActivate_x                0x1403d67f0
#define CCursorAttachment__RemoveAttachment_x              0x1403d6aa0
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x             0x1406077b0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x          0x140608480
#define CEQSuiteTextureLoader__GetTexture_x                0x1406079c0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                    0x140156cb0
#define CFindItemWnd__Update_x                             0x140157670
#define CFindItemWnd__PickupSelectedItem_x                 0x140150300

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x            0x140161860
#define LootFiltersManager__GetItemFilterData_x            0x140163a20
#define LootFiltersManager__RemoveItemLootFilter_x         0x140162c30
#define LootFiltersManager__SetItemLootFilter_x            0x140162ee0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                  0x1404b2e00

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x             0x14033f290
#define CResolutionHandler__UpdateResolution_x             0x1405b2570

// CColorPickerWnd
#define CColorPickerWnd__Open_x                            0x1403ca600

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x               0x1406bdb50
#define CDistillerInfo__Instance_x                         0x1406bdb50

// CGroupWnd
#define CGroupWnd__WndNotification_x                       0x1403f49f0
#define CGroupWnd__UpdateDisplay_x                         0x1403f3b80

// ItemBase
#define ItemBase__IsLore_x                                 0x140675620
#define ItemBase__IsLoreEquipped_x                         0x1406756b0

#define MultipleItemMoveManager__ProcessMove_x             0x1402dcc50

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                    0x140267080
#define EQPlacedItemManager__GetItemByGuid_x               0x140268c80
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140268c80

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                0x1403375a0

// FactionManagerClient
#define FactionManagerClient__Instance_x                   0x14012ce50
#define FactionManagerClient__HandleFactionMessage_x       0x14012d230
#define FactionManagerClient__GetFactionStanding_x         0x14012dea0
#define FactionManagerClient__GetMaxFaction_x              0x14012dea0
#define FactionManagerClient__GetMinFaction_x              0x14012dea0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                0x1400b61b0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                   0x140138800

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x 0x1401be540
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x 0x1401bd6d0
#define CAltAbilityData__GetMercCurrentRank_x              0x1401c06b0
#define CAltAbilityData__GetMercMaxRank_x                  0x1401c0510

// CTargetManager
#define CTargetManager__Get_x                              0x14034b840

// KeyCombo
#define KeyCombo__GetTextDescription_x                     0x1405c3cb0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                    0x14008a800

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                 0x14035b7f0

// AchievementManager
#define AchievementManager__Instance_x                     0x140092d20

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                       0x1406a1c60
#define FreeToPlayClient__RestrictionInfo_x                0x140b01000

// UdpConnection
#define UdpConnection__GetStats_x                          0x140565b40

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                            0x1408568d8
#define CGFScreenWnd__CGFScreenWnd_x                       0x140072ad0
#define CGFScreenWnd__CGFScreenWnd1_x                      0x140072c60
#define CGFScreenWnd__dCGFScreenWnd_x                      0x140072e10

#if __has_include("../../../../private/eqgame-private.h")
#include "../../../../private/eqgame-private.h"
#endif
