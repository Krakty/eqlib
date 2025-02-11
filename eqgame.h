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

#define __ClientDate                                               20250203u
#define __ExpectedVersionDate                                     "Feb  3 2025"
#define __ExpectedVersionTime                                     "10:55:07"
#define __ActualVersionDate_x                                      0x140952110
#define __ActualVersionTime_x                                      0x140952100
#define __ActualVersionBuild_x                                     0x1408E87E0

// Memory Protection
#define __MemChecker0_x                                            0x1402B6A70
#define __MemChecker1_x                                            0x140579940
#define __MemChecker4_x                                            0x140284330
#define __EncryptPad0_x                                            0x140D1FE70

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E58A70
#define instEQZoneInfo_x                                           0x140E58C64 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x14021AC20
#define __gfMaxZoomCameraDistance_x                                0x1408E9A58
#define __gfMaxCameraDistance_x                                    0x140A8E948
#define __CurrentSocial_x                                          0x140BDB940 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D17710
#define g_eqCommandStates_x                                        0x140D18780
#define __CommandList_x                                            0x140D189C0
#define __ScreenMode_x                                             0x140DA0374
#define __gWorld_x                                                 0x140E52F30
#define __gpbCommandEvent_x                                        0x140E5349C
#define __ServerHost_x                                             0x140E53688
#define __Guilds_x                                                 0x140E57620
#define __MemCheckBitmask_x                                        0x140E58FAF
#define __MemCheckActive_x                                         0x140E5A6A5
#define __MouseEventTime_x                                         0x140ECDFF0
#define DI8__MouseState_x                                          0x140ED2158
#define __heqmain_x                                                0x140ED45E8
#define DI8__Mouse_x                                               0x140ED4600
#define __HWnd_x                                                   0x140ED4608
#define __Mouse_x                                                  0x140ED4610
#define DI8__Keyboard_x                                            0x140ED4630
#define __LoginName_x                                              0x140ED4D9C
#define __CurrentMapLabel_x                                        0x140EE8630
#define __LabelCache_x                                             0x140EE9200
#define __ChatFilterDefs_x                                         0x140A29A40
#define Teleport_Table_Size_x                                      0x140E53524
#define Teleport_Table_x                                           0x140E50F00

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E539B0
#define pinstActiveBanker_x                                        0x140E533E0
#define pinstActiveCorpse_x                                        0x140E533D0
#define pinstActiveGMaster_x                                       0x140E533D8
#define pinstActiveMerchant_x                                      0x140E533C8
#define pinstAltAdvManager_x                                       0x140DA11B8
#define pinstCEverQuest_x                                          0x140ED4648
#define pinstCamActor_x                                            0x140DA0360
#define pinstCDBStr_x                                              0x140D9FF70
#define pinstCDisplay_x                                            0x140E50EE0
#define pinstControlledPlayer_x                                    0x140E53470
#define pinstCResolutionHandler_x                                  0x1415599A8
#define pinstCSidlManager_x                                        0x140EFA500
#define pinstCXWndManager_x                                        0x140EFA4F8
#define instDynamicZone_x                                          0x140E574E0 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E5752E
#define instExpeditionName_x                                       0x140E5756E
#define pinstDZMember_x                                            0x140E575F8
#define pinstDZTimerInfo_x                                         0x140E57600
#define pinstEqLogin_x                                             0x140ED46E0
#define instTribute_x                                              0x140D12D50
#define pinstDeviceInputProxy_x                                    0x140E58ACC
#define pinstEQSoundManager_x                                      0x140DA1538
#define pinstEQSpellStrings_x                                      0x140D84B40
#define pinstSGraphicsEngine_x                                     0x141559728
#define pinstLocalPC_x                                             0x140E50EF0
#define pinstLocalPlayer_x                                         0x140E533C0
#define pinstCMercenaryClientManager_x                             0x140ECF8D8
#define pinstModelPlayer_x                                         0x140E533F0
#define pinstRenderInterface_x                                     0x141559740
#define pinstSkillMgr_x                                            0x140ED1578
#define pinstSpawnManager_x                                        0x140ECFCA0
#define pinstSpellManager_x                                        0x140ED15E0
#define pinstStringTable_x                                         0x140E52F28
#define pinstSwitchManager_x                                       0x140E50E60
#define pinstTarget_x                                              0x140E53468
#define pinstTaskMember_x                                          0x140D12D40 // Part of g_taskManager
#define pinstTradeTarget_x                                         0x140E533E8
#define instTributeActive_x                                        0x140D12D79
#define pinstViewActor_x                                           0x140DA0358
#define pinstWorldData_x                                           0x140E53480
#define pinstPlayerPath_x                                          0x140ECFCC8
#define pinstTargetIndicator_x                                     0x140ED1690
#define EQObject_Top_x                                             0x140E539A0

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140EE5788
#define pinstCContainerMgr_x                                       0x140DA03B8
#define pinstCContextMenuManager_x                                 0x140EFA1E0
#define pinstCInvSlotMgr_x                                         0x140DA0390
#define pinstCItemDisplayManager_x                                 0x140EE8200
#define pinstCPopupWndManager_x                                    0x140EE8A90
#define pinstCSpellDisplayMgr_x                                    0x140EE90E0
#define pinstCTaskManager_x                                        0x140BDBC80
#define pinstEQSuiteTextureLoader_x                                0x140D29580
#define pinstItemIconCache_x                                       0x140EE5AE8
#define pinstLootFiltersManager_x                                  0x140D9F9B8
#define pinstGFViewListener_x                                      0x140EF99B8


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x140243E90
#define __CastRay_x                                                0x14023C220
#define __CastRay2_x                                               0x14023BF20
#define __compress_block_x                                         0x14052EFE0
#define __ConvertItemTags_x                                        0x14023C680
#define __CleanItemTags_x                                          0x140088C30
#define __CreateCascadeMenuItems_x                                 0x14018A620
#define __decompress_block_x                                       0x1405751B0
#define __DoesFileExist_x                                          0x14057D7F0
#define __EQGetTime_x                                              0x140579EF0
#define __ExecuteCmd_x                                             0x140212530
#define __FixHeading_x                                             0x1406A5E10
#define __FlushDxKeyboard_x                                        0x14033A510
#define __get_bearing_x                                            0x140246080
#define __get_melee_range_x                                        0x140246170
#define __GetAnimationCache_x                                      0x1403B80E0
#define __GetGaugeValueFromEQ_x                                    0x1404EECC0
#define __GetLabelFromEQ_x                                         0x1404F02D0
#define __GetXTargetType_x                                         0x1406A70F0   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x1406A5E90
#define __HelpPath_x                                               0x140ECDEB8   // Why?
#define __NewUIINI_x                                               0x1404FBD20   // Why?
#define __ProcessDeviceEvents_x                                    0x140284940
#define __ProcessGameEvents_x                                      0x140279660
#define __ProcessKeyboardEvents_x                                  0x14033BC60
#define __ProcessMouseEvents_x                                     0x14027AD40
#define __SaveColors_x                                             0x14019A640
#define __STMLToText_x                                             0x140582140
#define __WndProc_x                                                0x140338D10
#define CMemoryMappedFile__SetFile_x                               0x1407E1E50
#define DrawNetStatus_x                                            0x1402C4FB0
#define Util__FastTime_x                                           0x140579480
#define __eq_delete_x                                              0x1406ADF24
#define __eq_new_x                                                 0x1406ADEE0
#define __CopyLayout_x                                             0x1402B2E80
#define __ThrottleFrameRate_x                                      0x140268E84
#define __ThrottleFrameRateEnd_x                                   0x140268EE4

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x14034B360
#define CAAWnd__Update_x                                           0x14034B660
#define CAAWnd__UpdateSelected_x                                   0x14034C6B0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AAFF0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A38F0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140836BA8
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AB920

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401A5780
#define AltAdvManager__IsAbilityReady_x                            0x1401A5C10
#define AltAdvManager__GetAAById_x                                 0x1401A5050
#define AltAdvManager__CanTrainAbility_x                           0x1401A4E60
#define AltAdvManager__CanSeeAbility_x                             0x1401A4B20

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D19B0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D2810
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D2A60
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400E6F60
#define CharacterZoneClient__CanUseItem_x                          0x1400E7390
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D3430
#define CharacterZoneClient__CastSpell_x                           0x1400D34D0
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E2EC0
#define CharacterZoneClient__Cur_HP_x                              0x1400E8AA0
#define CharacterZoneClient__Cur_Mana_x                            0x1400E8C60
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D66D0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400EF130
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FDB60  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D7B70
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E6860
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F0CE0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400EFBC0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D7CF0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C7D80
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C9780
#define CharacterZoneClient__GetHPRegen_x                          0x1400F0300
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E8710
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F0F70
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D7D70
#define CharacterZoneClient__GetManaRegen_x                        0x1400F1D50
#define CharacterZoneClient__GetModCap_x                           0x1400F9320
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D8000
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D81D0
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CC910
#define CharacterZoneClient__HasSkill_x                            0x1400F4D50
#define CharacterZoneClient__HitBySpell_x                          0x1400D8C60
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DC580
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F8E00
#define CharacterZoneClient__Max_Endurance_x                       0x1402E1880  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F9150
#define CharacterZoneClient__Max_Mana_x                            0x1402E1AA0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F95B0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DFA10
#define CharacterZoneClient__SpellDuration_x                       0x1400E0740
#define CharacterZoneClient__TotalEffect_x                         0x1400E1AA0
#define CharacterZoneClient__UseSkill_x                            0x1400FEAD0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140369B90

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140373EF0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14036FD80
#define CBarterSearchWnd__UpdateInventoryList_x                    0x140373970

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x1403765D0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AAD6C0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140399510
#define CChatWindowManager__InitContextMenu_x                      0x1403996A0
#define CChatWindowManager__FreeChatWindow_x                       0x140398590
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403A1280
#define CChatWindowManager__CreateChatWindow_x                     0x140397FC0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140106FB0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403A22D0
#define CChatWindow__Clear_x                                       0x1403A3290
#define CChatWindow__WndNotification_x                             0x1403A4480
#define CChatWindow__AddHistory_x                                  0x1403A2D90

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405B7200
#define CContextMenu__RemoveMenuItem_x                             0x1405B75F0
#define CContextMenu__RemoveAllMenuItems_x                         0x1405B75C0
#define CContextMenu__CheckMenuItem_x                              0x1405B7430
#define CContextMenu__SetMenuItem_x                                0x1405B7610
#define CContextMenu__AddSeparator_x                               0x1405B7370

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405A90D0
#define CContextMenuManager__RemoveMenu_x                          0x1405A96A0
#define CContextMenuManager__PopupMenu_x                           0x1405A93E0
#define CContextMenuManager__Flush_x                               0x1405A9150
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403AFC70

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x14066FBA0
#define CChatService__GetFriendName_x                              0x14066FBB0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x140599FE0
#define CComboWnd__Draw_x                                          0x14059A0E0
#define CComboWnd__GetCurChoice_x                                  0x14059A3C0  // unused
#define CComboWnd__GetListRect_x                                   0x14059A460
#define CComboWnd__InsertChoice_x                                  0x14059A7A0
#define CComboWnd__SetColors_x                                     0x14059AB30
#define CComboWnd__SetChoice_x                                     0x14059AAF0
#define CComboWnd__GetItemCount_x                                  0x14059A450
#define CComboWnd__GetCurChoiceText_x                              0x14059A400  // unused
#define CComboWnd__GetChoiceText_x                                 0x14059A390
#define CComboWnd__InsertChoiceAtIndex_x                           0x14059A860

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403AD9F0
#define CContainerWnd__SetContainer_x                              0x140405170
#define CContainerWnd__vftable_x                                   0x1409C5B48

// CDisplay
#define CDisplay__cameraType_x                                     0x140DA013C
#define CDisplay__ZoneMainUI_x                                     0x1405D1340
#define CDisplay__PreZoneMainUI_x                                  0x140197570
#define CDisplay__CleanGameUI_x                                    0x1401896E0
#define CDisplay__GetClickedActor_x                                0x14018D8A0
#define CDisplay__GetUserDefinedColor_x                            0x14018E510
#define CDisplay__InitCharSelectUI_x                               0x14018E7C0
#define CDisplay__ReloadUI_x                                       0x140199860
#define CDisplay__RestartUI_x                                      0x1401F8900
#define CDisplay__WriteTextHD2_x                                   0x1401A0870
#define CDisplay__TrueDistance_x                                   0x1401A0520
#define CDisplay__SetViewActor_x                                   0x14019CD60
#define CDisplay__GetFloorHeight_x                                 0x14018DB00
#define CDisplay__ToggleScreenshotMode_x                           0x1401A0010
#define CDisplay__RealRender_World_x                               0x140198C40

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405DB570
#define CEditWnd__DrawCaret_x                                      0x1405CD020  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405CD4E0
#define CEditWnd__GetCaretPt_x                                     0x1405CD760  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405CD7A0
#define CEditWnd__GetDisplayString_x                               0x1405CDA10
#define CEditWnd__GetHorzOffset_x                                  0x1405CDC50
#define CEditWnd__GetLineForPrintableChar_x                        0x1405CDDA0
#define CEditWnd__GetSelStartPt_x                                  0x1405CE080  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405CDED0
#define CEditWnd__PointFromPrintableChar_x                         0x1405CEC30
#define CEditWnd__ReplaceSelection_x                               0x1405CEFE0
#define CEditWnd__SelectableCharFromPoint_x                        0x1405CF480
#define CEditWnd__SetEditable_x                                    0x1405CF710
#define CEditWnd__SetWindowText_x                                  0x1405CF740

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140269F90
#define CEverQuest__ClickedPlayer_x                                0x14025F8E0
#define CEverQuest__CreateTargetIndicator_x                        0x1402601A0
#define CEverQuest__DoTellWindow_x                                 0x140106CC0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140107580 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14026B950
#define CEverQuest__dsp_chat_x                                     0x1401066F0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x140296720
#define CEverQuest__Emote_x                                        0x14026C330
#define CEverQuest__GetBodyTypeDesc_x                              0x14026D0E0
#define CEverQuest__GetClassDesc_x                                 0x14026D140
#define CEverQuest__GetClassThreeLetterCode_x                      0x14026D510
#define CEverQuest__GetDeityDesc_x                                 0x14026D7C0
#define CEverQuest__GetLangDesc_x                                  0x14026DBF0
#define CEverQuest__GetRaceDesc_x                                  0x14026DF90
#define CEverQuest__InterpretCmd_x                                 0x14026F8D0
#define CEverQuest__LeftClickedOnPlayer_x                          0x1402849B0
#define CEverQuest__LMouseUp_x                                     0x1402712F0
#define CEverQuest__RightClickedOnPlayer_x                         0x1402821D0
#define CEverQuest__RMouseUp_x                                     0x14027B8D0
#define CEverQuest__SetGameState_x                                 0x1402878C0
#define CEverQuest__UPCNotificationFlush_x                         0x14028D1F0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140270F60
#define CEverQuest__ReportSuccessfulHeal_x                         0x14027CC80
#define CEverQuest__ReportSuccessfulHit_x                          0x14027DAA0

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403C3020

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C1910
#define CGuild__GetGuildName_x                                     0x1400C1950

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403E62C0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402A87F0
#define CHotButton__SetCheck_x                                     0x1402A8AC0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403FDE90
#define CInvSlotMgr__MoveItem_x                                    0x1403FE070
#define CInvSlotMgr__SelectSlot_x                                  0x1403FFAA0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403FB080
#define CInvSlot__SliderComplete_x                                 0x1403FC5D0
#define CInvSlot__GetItemBase_x                                    0x1403F6AC0
#define CInvSlot__UpdateItem_x                                     0x1403FCA90

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x140400E30

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1404223E0
#define CItemDisplayWnd__UpdateStrings_x                           0x140424EB0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x14041EBE0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140420540
#define CItemDisplayWnd__RequestConvertItem_x                      0x1404217F0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404EB7D0
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404ED4C0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140528350

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x14041B2E0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x1401518F0

// CLabel
#define CLabel__UpdateText_x                                       0x14042C290

// CListWnd
#define CListWnd__CListWnd_x                                       0x14059D970
#define CListWnd__dCListWnd_x                                      0x14059DDC0
#define CListWnd__vftable_x                                        0x140AAB810
#define CListWnd__AddColumn_x                                      0x14059E460
#define CListWnd__AddColumn1_x                                     0x14059E500
#define CListWnd__AddLine_x                                        0x14059E660
#define CListWnd__AddString_x                                      0x14059EBF0
#define CListWnd__CalculateFirstVisibleLine_x                      0x14059F160
#define CListWnd__CalculateVSBRange_x                              0x14059F440
#define CListWnd__ClearSel_x                                       0x14059F5F0
#define CListWnd__ClearAllSel_x                                    0x14059F590
#define CListWnd__CloseAndUpdateEditWindow_x                       0x14059F650
#define CListWnd__Compare_x                                        0x14059F800
#define CListWnd__Draw_x                                           0x14059FCD0
#define CListWnd__DrawColumnSeparators_x                           0x1405A0880
#define CListWnd__DrawHeader_x                                     0x1405A0940
#define CListWnd__DrawItem_x                                       0x1405A1020
#define CListWnd__DrawLine_x                                       0x1405A19A0
#define CListWnd__DrawSeparator_x                                  0x1405A1E60
#define CListWnd__EnableLine_x                                     0x1405A2280
#define CListWnd__EnsureVisible_x                                  0x1405A22E0
#define CListWnd__ExtendSel_x                                      0x1405A23E0
#define CListWnd__GetColumnMinWidth_x                              0x1405A2770
#define CListWnd__GetColumnWidth_x                                 0x1405A27F0
#define CListWnd__GetCurSel_x                                      0x1405A28F0
#define CListWnd__GetItemData_x                                    0x1405A2C70
#define CListWnd__GetItemHeight_x                                  0x1405A2CB0
#define CListWnd__GetItemRect_x                                    0x1405A2ED0
#define CListWnd__GetItemText_x                                    0x1405A3170
#define CListWnd__GetSelList_x                                     0x1405A33C0
#define CListWnd__GetSeparatorRect_x                               0x1405A35B0
#define CListWnd__InsertLine_x                                     0x1405A4A10
#define CListWnd__RemoveLine_x                                     0x1405A5080
#define CListWnd__SetColors_x                                      0x1405A5440
#define CListWnd__SetColumnJustification_x                         0x1405A5460
#define CListWnd__SetColumnLabel_x                                 0x1405A54E0
#define CListWnd__SetColumnWidth_x                                 0x1405A5680
#define CListWnd__SetCurSel_x                                      0x1405A5750
#define CListWnd__SetItemColor_x                                   0x1405A59C0
#define CListWnd__SetItemData_x                                    0x1405A5A60
#define CListWnd__SetItemText_x                                    0x1405A5CA0
#define CListWnd__Sort_x                                           0x1405A60B0
#define CListWnd__ToggleSel_x                                      0x1405A6220
#define CListWnd__SetColumnsSizable_x                              0x1405A56D0
#define CListWnd__SetItemWnd_x                                     0x1405A5DD0
#define CListWnd__GetItemWnd_x                                     0x1405A3350
#define CListWnd__SetItemIcon_x                                    0x1405A5AA0
#define CListWnd__CalculateCustomWindowPositions_x                 0x14059EF30
#define CListWnd__SetVScrollPos_x                                  0x1405A6010

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x14043F560

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A12648
#define MapViewMap__Clear_x                                        0x1404410E0
#define MapViewMap__SetZoom_x                                      0x140447730
#define MapViewMap__HandleLButtonDown_x                            0x140444270

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140468DE0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x14046F380
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x14046FB20
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140473330
#define CMerchantWnd__SelectBuySellSlot_x                          0x140472680
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x1404775E0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14064AEE0
#define CPacketScrambler__hton_x                                   0x14064AED0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405C68E0
#define CSidlManagerBase__FindAnimation1_x                         0x1405C6820
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405C6F10
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405C6CC0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405C5C20
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405C5BB0
#define CSidlManagerBase__CreateXWnd_x                             0x1405C51F0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404DE730
#define CSidlManager__CreateXWnd_x                                 0x1404DE8F0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14058B4C0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14058B5F0
#define CSidlScreenWnd__ConvertToRes_x                             0x1405D5AB0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14058B770
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14058ABF0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14058ACC0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14058AED0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x14058BE60
#define CSidlScreenWnd__EnableIniStorage_x                         0x14058C090
#define CSidlScreenWnd__GetChildItem_x                             0x14058C230
#define CSidlScreenWnd__GetSidlPiece_x                             0x14058C480
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140596550 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x14058C7F0
#define CSidlScreenWnd__LoadIniInfo_x                              0x14058CB60
#define CSidlScreenWnd__LoadIniListWnd_x                           0x14058D420
#define CSidlScreenWnd__LoadSidlScreen_x                           0x14058DE20
#define CSidlScreenWnd__m_layoutCopy_x                             0x140EF9858
#define CSidlScreenWnd__StoreIniInfo_x                             0x14058E4B0
#define CSidlScreenWnd__StoreIniVis_x                              0x14058ECA0
#define CSidlScreenWnd__vftable_x                                  0x140AAAA98
#define CSidlScreenWnd__WndNotification_x                          0x14058ECF0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x140323890 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140323D30 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x140323C60
#define CSkillMgr__IsActivatedSkill_x                              0x1403240E0
#define CSkillMgr__IsCombatSkill_x                                 0x140324120
#define CSkillMgr__GetSkillTimerDuration_x                         0x140324050
#define CSkillMgr__GetSkillLastUsed_x                              0x140323CB0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1404EEC90
#define CSliderWnd__SetValue_x                                     0x1405A7390
#define CSliderWnd__SetNumTicks_x                                  0x1405A7210

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404E4DF0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405ABB20
#define CStmlWnd__CalculateHSBRange_x                              0x140595F00
#define CStmlWnd__CalculateVSBRange_x                              0x1405ACA40
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405AD4C0
#define CStmlWnd__ForceParseNow_x                                  0x1405AD560
#define CStmlWnd__GetVisibleText_x                                 0x1405ADC30
#define CStmlWnd__MakeStmlColorTag_x                               0x1405AF990
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405AF9D0
#define CStmlWnd__SetSTMLText_x                                    0x1405B69A0
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405B6B50
#define CStmlWnd__UpdateHistoryString_x                            0x1405B6EE0

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405A7760
#define CTabWnd__DrawCurrentPage_x                                 0x1405A7800
#define CTabWnd__DrawTab_x                                         0x1405A7BD0
#define CTabWnd__GetTabRect_x                                      0x1405A8240
#define CTabWnd__InsertPage_x                                      0x1405A8510
#define CTabWnd__RemovePage_x                                      0x1405A87A0
#define CTabWnd__SetPage_x                                         0x1405A8900
#define CTabWnd__UpdatePage_x                                      0x1405A8C00

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405CFBA0
#define CPageWnd__SetTabText_x                                     0x1405CFC10

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BB050  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BB460


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405BE2A0
#define CTextureFont__DrawWrappedText1_x                           0x1405BE1B0
#define CTextureFont__DrawWrappedText2_x                           0x1405BE3D0
#define CTextureFont__GetTextExtent_x                              0x1405BE780
#define CTextureFont__GetHeight_x                                  0x1405BE740

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405D4210

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x14058A7D0

// CXStr
#define CXStr__gFreeLists_x                                        0x140D28EF0
#define CXStr__gCXStrAccess_x                                      0x140EF9658

// CXWnd
#define CXWnd__BringToTop_x                                        0x140591580
#define CXWnd__ClrFocus_x                                          0x140591870
#define CXWnd__Destroy_x                                           0x1405919F0
#define CXWnd__DoAllDrawing_x                                      0x140591B00
#define CXWnd__DrawColoredRect_x                                   0x1405922D0
#define CXWnd__DrawTooltip_x                                       0x140593950
#define CXWnd__DrawTooltipAtPoint_x                                0x140593A00
#define CXWnd__GetChildItem_x                                      0x140594300
#define CXWnd__GetChildWndAt_x                                     0x1405943B0
#define CXWnd__GetClientRect_x                                     0x140594670
#define CXWnd__GetClientClipRect_x                                 0x140594520
#define CXWnd__GetRelativeRect_x                                   0x140596040
#define CXWnd__GetScreenClipRect_x                                 0x140596150
#define CXWnd__GetScreenRect_x                                     0x1405962D0
#define CXWnd__GetTooltipRect_x                                    0x140596450
#define CXWnd__IsActive_x                                          0x140596A10
#define CXWnd__IsDescendantOf_x                                    0x140596A40
#define CXWnd__IsReallyVisible_x                                   0x140596AB0
#define CXWnd__IsType_x                                            0x140596AF0
#define CXWnd__Minimize_x                                          0x140596BF0
#define CXWnd__ProcessTransition_x                                 0x140597AD0
#define CXWnd__Resize_x                                            0x140597BF0
#define CXWnd__Right_x                                             0x140597C90
#define CXWnd__SetFocus_x                                          0x140598040
#define CXWnd__SetFont_x                                           0x140598090
#define CXWnd__SetKeyTooltip_x                                     0x140598190
#define CXWnd__SetMouseOver_x                                      0x1405982D0
#define CXWnd__SetParent_x                                         0x140598350
#define CXWnd__StartFade_x                                         0x1405987A0
#define CXWnd__vftable_x                                           0x140AAB070
#define CXWnd__CXWnd_x                                             0x140590110
#define CXWnd__dCXWnd_x                                            0x140590A60

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405DACF0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405B87C0
#define CXWndManager__DrawCursor_x                                 0x1405B8AA0
#define CXWndManager__DrawWindows_x                                0x1405B8D00
#define CXWndManager__GetKeyboardFlags_x                           0x1405B93D0
#define CXWndManager__HandleKeyboardMsg_x                          0x1405B9410
#define CXWndManager__RemoveWnd_x                                  0x1405BC970

// CDBStr
#define CDBStr__GetString_x                                        0x1401878A0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x140654CF0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CF540
#define CCharacterListWnd__EnterWorld_x                            0x1400CE240
#define CCharacterListWnd__Quit_x                                  0x1400CF520
#define CCharacterListWnd__UpdateList_x                            0x1400D03A0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140622430
#define ItemBase__CreateItemTagString_x                            0x140622EA0
#define ItemBase__GetImageNum_x                                    0x1406253D0
#define ItemBase__GetItemValue_x                                   0x140626EF0
#define ItemBase__IsEmpty_x                                        0x140628A60
#define ItemBase__IsKeyRingItem_x                                  0x140629180
#define ItemBase__ValueSellMerchant_x                              0x14062D340
#define ItemClient__CanDrop_x                                      0x1402AB100
#define ItemClient__CanGoInBag_x                                   0x1402AB230
#define ItemClient__CreateItemClient_x                             0x1402AB4B0
#define ItemClient__dItemClient_x                                  0x1402AAF70

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401A7130
#define EQ_LoadingS__Array_x                                       0x140D15220

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140639C00
#define PcBase__GetCombatAbility_x                                 0x14063A2F0
#define PcBase__GetCombatAbilityTimer_x                            0x14063A390
#define PcBase__GetItemContainedRealEstateIds_x                    0x14063AB30
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14063B670
#define PcClient__AlertInventoryChanged_x                          0x1402CD580
#define PcClient__GetConLevel_x                                    0x1402CDBA0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402D0380
#define PcClient__HasLoreItem_x                                    0x1402D13D0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402DED20
#define PcZoneClient__RemoveMyAffect_x                             0x1402E29C0

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x140216C40  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x140216DF0  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x140216F50  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x140216E90  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x140250EB0  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140182100

// PlayerClient
#define PlayerBase__CanSee_x                                       0x1406988C0
#define PlayerBase__CanSee1_x                                      0x140698990
#define PlayerBase__GetVisibilityLineSegment_x                     0x140698E50
#define PlayerBase__HasProperty_x                                  0x140699020
#define PlayerBase__IsTargetable_x                                 0x1406990E0
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402F0270
#define PlayerClient__GetPcClient_x                                0x1402F2AA0
#define PlayerClient__PlayerClient_x                               0x1402E8A80
#define PlayerClient__SetNameSpriteState_x                         0x1402F6140
#define PlayerClient__SetNameSpriteTint_x                          0x1402F7100
#define PlayerZoneClient__ChangeHeight_x                           0x140305960
#define PlayerZoneClient__DoAttack_x                               0x140306670
#define PlayerZoneClient__GetLevel_x                               0x140309D90
#define PlayerZoneClient__IsValidTeleport_x                        0x140253C40
#define PlayerZoneClient__LegalPlayerRace_x                        0x140195DF0

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402FF0D0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402FF180  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402FF280
#define PlayerManagerClient__CreatePlayer_x                        0x1402FEBA0
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140698480

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402B0380
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402AFF80
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402AFFF0
#define KeypressHandler__ClearCommandStateArray_x                  0x1402B0310  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402B04A0
#define KeypressHandler__HandleKeyUp_x                             0x1402B05C0
#define KeypressHandler__SaveKeymapping_x                          0x1402B0220  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140652840  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x14064C610

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402D7990  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402DCCD0
#define PcZoneClient__GetPcSkillLimit_x                            0x1402DF4B0
#define PcZoneClient__RemovePetEffect_x                            0x1402E2CA0
#define PcZoneClient__HasAlternateAbility_x                        0x1402E00A0
#define PcZoneClient__CanEquipItem_x                               0x1402DB000
#define PcZoneClient__GetItemByID_x                                0x1402DDD70
#define PcZoneClient__RemoveBuffEffect_x                           0x1402E2840
#define PcZoneClient__BandolierSwap_x                              0x1402DA050

// Doors
#define EQSwitch__UseSwitch_x                                      0x140258770

// IconCache
#define IconCache__GetIcon_x                                       0x1403B8110

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403AC7A0
#define CContainerMgr__CloseContainer_x                            0x1403AC0E0
#define CContainerMgr__OpenExperimentContainer_x                   0x1403ACB20

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404A29D0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402A2AE0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140433570
#define CLootWnd__RequestLootSlot_x                                0x140434590

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401D6510
#define EQ_Spell__SpellAffects_x                                   0x1401D77C0
#define EQ_Spell__SpellAffectBase_x                                0x1401D7720
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D8360
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D8310
#define EQ_Spell__IsSPAStacking_x                                  0x1401D73F0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401D6FB0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401D6880

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C0550

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1404FF500
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404FEC10
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404FE420

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x140506B60  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x14017EAC0
#define CTaskManager__GetTaskStatus_x                              0x14017EBD0
#define CTaskManager__GetElementDescription_x                      0x14017E750

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401D4840
#define EqSoundManager__PlayScriptMp3_x                            0x1401D3680
#define EqSoundManager__SoundAssistPlay_x                          0x140328ED0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140329210  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x140599570
#define CTextureAnimation__SetCurCell_x                            0x140599880

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402A0D40

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x14066D270
#define CharacterBase__GetItemByGlobalIndex1_x                     0x14066D2F0
#define CharacterBase__IsExpansionFlag_x                           0x1401F8130

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x14038A440
#define CCastSpellWnd__IsBardSongPlaying_x                         0x14038AE00
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x14038C350

// messages
#define msg_spell_worn_off_x                                       0x14020D570
#define msg_new_text_x                                             0x140208DE0
#define __msgTokenTextParam_x                                      0x140200720
#define msgTokenText_x                                             0x140200640

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x14032A880
#define SpellManager__GetSpellByGroupAndRank_x                     0x14032A7A0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x1406A74D0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x14042C9E0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403B14A0
#define CCursorAttachment__IsOkToActivate_x                        0x1403B4760
#define CCursorAttachment__RemoveAttachment_x                      0x1403B4A10
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405D26B0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405D28A0
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405D28B0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x14014CAA0
#define CFindItemWnd__Update_x                                     0x14014D440
#define CFindItemWnd__PickupSelectedItem_x                         0x140146F10

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x1401565F0
#define LootFiltersManager__GetItemFilterData_x                    0x140157100
#define LootFiltersManager__RemoveItemLootFilter_x                 0x1401579A0
#define LootFiltersManager__SetItemLootFilter_x                    0x140157C50

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x140485610

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x140323450
#define CResolutionHandler__UpdateResolution_x                     0x1406ABD30

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403A8A80

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x140671670  // Rename..?
#define CDistillerInfo__Instance_x                                 0x140671560  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403CF3F0
#define CGroupWnd__UpdateDisplay_x                                 0x1403CEFD0

// ItemBase
#define ItemBase__IsLore_x                                         0x1406292B0
#define ItemBase__IsLoreEquipped_x                                 0x140629340

#define MultipleItemMoveManager__ProcessMove_x                     0x1402C3140

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140251010
#define EQPlacedItemManager__GetItemByGuid_x                       0x140250FA0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140250FE0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14031D890

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x1401247E0
#define FactionManagerClient__HandleFactionMessage_x               0x140124B90
#define FactionManagerClient__GetFactionStanding_x                 0x140123FB0
#define FactionManagerClient__GetMaxFaction_x                      0x140123FB0
#define FactionManagerClient__GetMinFaction_x                      0x140123E60

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AD600

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x14012FF60

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401AFA80
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401AEE00
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401AF8A0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401AF820  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x14032FA60

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14031D890

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x140216FE0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x14058F2E0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140085AE0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140341290

// AchievementManager
#define AchievementManager__Instance_x                             0x14008D4B0

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x140655870
#define FreeToPlayClient__RestrictionInfo_x                        0x140ABF140

// UdpConnection
#define UdpConnection__GetStats_x                                  0x140535400

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x14081E538
#define CGFScreenWnd__CGFScreenWnd_x                               0x140070400
#define CGFScreenWnd__CGFScreenWnd1_x                              0x140070590
#define CGFScreenWnd__dCGFScreenWnd_x                              0x140070740

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
