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

#define __ClientDate                                               20250207u
#define __ExpectedVersionDate                                     "Feb  7 2025"
#define __ExpectedVersionTime                                     "11:48:05"
#define __ActualVersionDate_x                                      0x140952110
#define __ActualVersionTime_x                                      0x140952100
#define __ActualVersionBuild_x                                     0x1408E87E0

// Memory Protection
#define __MemChecker0_x                                            0x1402B6AF0
#define __MemChecker1_x                                            0x140579570
#define __MemChecker4_x                                            0x140284450
#define __EncryptPad0_x                                            0x140D1EE70

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E57A70
#define instEQZoneInfo_x                                           0x140E57C64 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x14021AD50
#define __gfMaxZoomCameraDistance_x                                0x1408E9A58
#define __gfMaxCameraDistance_x                                    0x140A8E948
#define __CurrentSocial_x                                          0x140BDA940 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D16710
#define g_eqCommandStates_x                                        0x140D17780
#define __CommandList_x                                            0x140D179C0
#define __ScreenMode_x                                             0x140D9F374
#define __gWorld_x                                                 0x140E51F30
#define __gpbCommandEvent_x                                        0x140E5249C
#define __ServerHost_x                                             0x140E52688
#define __Guilds_x                                                 0x140E56620
#define __MemCheckBitmask_x                                        0x140E57FAF
#define __MemCheckActive_x                                         0x140E596A5
#define __MouseEventTime_x                                         0x140ECCFF0
#define DI8__MouseState_x                                          0x140ED1158
#define __heqmain_x                                                0x140ED35E8
#define DI8__Mouse_x                                               0x140ED3600
#define __HWnd_x                                                   0x140ED3608
#define __Mouse_x                                                  0x140ED3610
#define DI8__Keyboard_x                                            0x140ED3630
#define __LoginName_x                                              0x140ED3D9C
#define __CurrentMapLabel_x                                        0x140EE7630
#define __LabelCache_x                                             0x140EE8200
#define __ChatFilterDefs_x                                         0x140A29A40
#define Teleport_Table_Size_x                                      0x140E52524
#define Teleport_Table_x                                           0x140E4FF00

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E529B0
#define pinstActiveBanker_x                                        0x140E523E0
#define pinstActiveCorpse_x                                        0x140E523D0
#define pinstActiveGMaster_x                                       0x140E523D8
#define pinstActiveMerchant_x                                      0x140E523C8
#define pinstAltAdvManager_x                                       0x140DA01B8
#define pinstCEverQuest_x                                          0x140ED3648
#define pinstCamActor_x                                            0x140D9F360
#define pinstCDBStr_x                                              0x140D9EF70
#define pinstCDisplay_x                                            0x140E4FEE0
#define pinstControlledPlayer_x                                    0x140E52470
#define pinstCResolutionHandler_x                                  0x1415589A8
#define pinstCSidlManager_x                                        0x140EF9500
#define pinstCXWndManager_x                                        0x140EF94F8
#define instDynamicZone_x                                          0x140E564E0 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E5652E
#define instExpeditionName_x                                       0x140E5656E
#define pinstDZMember_x                                            0x140E565F8
#define pinstDZTimerInfo_x                                         0x140E56600
#define pinstEqLogin_x                                             0x140ED36E0
#define instTribute_x                                              0x140D11D50
#define pinstDeviceInputProxy_x                                    0x140E57ACC
#define pinstEQSoundManager_x                                      0x140DA0538
#define pinstEQSpellStrings_x                                      0x140D83B40
#define pinstSGraphicsEngine_x                                     0x141558728
#define pinstLocalPC_x                                             0x140E4FEF0
#define pinstLocalPlayer_x                                         0x140E523C0
#define pinstCMercenaryClientManager_x                             0x140ECE8D8
#define pinstModelPlayer_x                                         0x140E523F0
#define pinstRenderInterface_x                                     0x141558740
#define pinstSkillMgr_x                                            0x140ED0578
#define pinstSpawnManager_x                                        0x140ECECA0
#define pinstSpellManager_x                                        0x140ED05E0
#define pinstStringTable_x                                         0x140E51F28
#define pinstSwitchManager_x                                       0x140E4FE60
#define pinstTarget_x                                              0x140E52468
#define pinstTaskMember_x                                          0x140D11D40 // Part of g_taskManager
#define pinstTradeTarget_x                                         0x140E523E8
#define instTributeActive_x                                        0x140D11D79
#define pinstViewActor_x                                           0x140D9F358
#define pinstWorldData_x                                           0x140E52480
#define pinstPlayerPath_x                                          0x140ECECC8
#define pinstTargetIndicator_x                                     0x140ED0690
#define EQObject_Top_x                                             0x140E529A0

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140EE4788
#define pinstCContainerMgr_x                                       0x140D9F3B8
#define pinstCContextMenuManager_x                                 0x140EF91E0
#define pinstCInvSlotMgr_x                                         0x140D9F390
#define pinstCItemDisplayManager_x                                 0x140EE7200
#define pinstCPopupWndManager_x                                    0x140EE7A90
#define pinstCSpellDisplayMgr_x                                    0x140EE80E0
#define pinstCTaskManager_x                                        0x140BDAC80
#define pinstEQSuiteTextureLoader_x                                0x140D28580
#define pinstItemIconCache_x                                       0x140EE4AE8
#define pinstLootFiltersManager_x                                  0x140D9E9B8
#define pinstGFViewListener_x                                      0x140EF89B8


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x140243FC0
#define __CastRay_x                                                0x14023C360
#define __CastRay2_x                                               0x14023C060
#define __compress_block_x                                         0x14052EC10
#define __ConvertItemTags_x                                        0x14023C7C0
#define __CleanItemTags_x                                          0x140088C30
#define __CreateCascadeMenuItems_x                                 0x14018A5A0
#define __decompress_block_x                                       0x140574DE0
#define __DoesFileExist_x                                          0x14057D420
#define __EQGetTime_x                                              0x140579B20
#define __ExecuteCmd_x                                             0x140212660
#define __FixHeading_x                                             0x1406A5920
#define __FlushDxKeyboard_x                                        0x14033A490
#define __get_bearing_x                                            0x1402461B0
#define __get_melee_range_x                                        0x1402462A0
#define __GetAnimationCache_x                                      0x1403B7FA0
#define __GetGaugeValueFromEQ_x                                    0x1404EE8D0
#define __GetLabelFromEQ_x                                         0x1404EFEE0
#define __GetXTargetType_x                                         0x1406A6C00   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x1406A59A0
#define __HelpPath_x                                               0x140ECCEB8   // Why?
#define __NewUIINI_x                                               0x1404FB940   // Why?
#define __ProcessDeviceEvents_x                                    0x140284A60
#define __ProcessGameEvents_x                                      0x140279790
#define __ProcessKeyboardEvents_x                                  0x14033BBE0
#define __ProcessMouseEvents_x                                     0x14027AE60
#define __SaveColors_x                                             0x14019A5C0
#define __STMLToText_x                                             0x140581D70
#define __WndProc_x                                                0x140338C90
#define CMemoryMappedFile__SetFile_x                               0x1407E1960
#define DrawNetStatus_x                                            0x1402C4FE0
#define Util__FastTime_x                                           0x1405790B0
#define __eq_delete_x                                              0x1406ADA34
#define __eq_new_x                                                 0x1406AD9F0
#define __CopyLayout_x                                             0x1402B2F10
#define __ThrottleFrameRate_x                                      0x140268FB4
#define __ThrottleFrameRateEnd_x                                   0x140269014

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x14034B2D0
#define CAAWnd__Update_x                                           0x14034B5D0
#define CAAWnd__UpdateSelected_x                                   0x14034C620

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AB020
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A3920
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140836BA8
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AB950

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401A56E0
#define AltAdvManager__IsAbilityReady_x                            0x1401A5B70
#define AltAdvManager__GetAAById_x                                 0x1401A4FB0
#define AltAdvManager__CanTrainAbility_x                           0x1401A4DC0
#define AltAdvManager__CanSeeAbility_x                             0x1401A4A80

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D19E0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D2840
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D2A90
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400E6F70
#define CharacterZoneClient__CanUseItem_x                          0x1400E73A0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D3460
#define CharacterZoneClient__CastSpell_x                           0x1400D3500
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E2ED0
#define CharacterZoneClient__Cur_HP_x                              0x1400E8AB0
#define CharacterZoneClient__Cur_Mana_x                            0x1400E8C70
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D66F0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400EF130
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FDB60  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D7B90
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E6870
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F0CE0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400EFBC0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D7D10
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C7DB0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C97B0
#define CharacterZoneClient__GetHPRegen_x                          0x1400F0300
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E8720
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F0F70
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D7D90
#define CharacterZoneClient__GetManaRegen_x                        0x1400F1D50
#define CharacterZoneClient__GetModCap_x                           0x1400F9320
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D8020
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D81F0
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CC940
#define CharacterZoneClient__HasSkill_x                            0x1400F4D50
#define CharacterZoneClient__HitBySpell_x                          0x1400D8C80
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DC5A0
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F8E00
#define CharacterZoneClient__Max_Endurance_x                       0x1402E1830  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F9150
#define CharacterZoneClient__Max_Mana_x                            0x1402E1A50  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F95B0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DFA30
#define CharacterZoneClient__SpellDuration_x                       0x1400E0760
#define CharacterZoneClient__TotalEffect_x                         0x1400E1AB0
#define CharacterZoneClient__UseSkill_x                            0x1400FEAD0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140369B10

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140373E30

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14036FCE0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x1403738B0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x1403764F0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AAD6C0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140399410
#define CChatWindowManager__InitContextMenu_x                      0x1403995A0
#define CChatWindowManager__FreeChatWindow_x                       0x140398490
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403A1180
#define CChatWindowManager__CreateChatWindow_x                     0x140397EC0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140106FA0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403A21D0
#define CChatWindow__Clear_x                                       0x1403A3180
#define CChatWindow__WndNotification_x                             0x1403A4370
#define CChatWindow__AddHistory_x                                  0x1403A2C80

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405B6E30
#define CContextMenu__RemoveMenuItem_x                             0x1405B7220
#define CContextMenu__RemoveAllMenuItems_x                         0x1405B71F0
#define CContextMenu__CheckMenuItem_x                              0x1405B7060
#define CContextMenu__SetMenuItem_x                                0x1405B7240
#define CContextMenu__AddSeparator_x                               0x1405B6FA0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405A8D00
#define CContextMenuManager__RemoveMenu_x                          0x1405A92E0
#define CContextMenuManager__PopupMenu_x                           0x1405A9020
#define CContextMenuManager__Flush_x                               0x1405A8D80
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403AFB30

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x14066F910
#define CChatService__GetFriendName_x                              0x14066F920

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x140599BD0
#define CComboWnd__Draw_x                                          0x140599CD0
#define CComboWnd__GetCurChoice_x                                  0x140599FB0  // unused
#define CComboWnd__GetListRect_x                                   0x14059A050
#define CComboWnd__InsertChoice_x                                  0x14059A390
#define CComboWnd__SetColors_x                                     0x14059A720
#define CComboWnd__SetChoice_x                                     0x14059A6E0
#define CComboWnd__GetItemCount_x                                  0x14059A040
#define CComboWnd__GetCurChoiceText_x                              0x140599FF0  // unused
#define CComboWnd__GetChoiceText_x                                 0x140599F80
#define CComboWnd__InsertChoiceAtIndex_x                           0x14059A450

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403AD8B0
#define CContainerWnd__SetContainer_x                              0x140404EC0
#define CContainerWnd__vftable_x                                   0x1409C5B48

// CDisplay
#define CDisplay__cameraType_x                                     0x140D9F13C
#define CDisplay__ZoneMainUI_x                                     0x1405D0FE0
#define CDisplay__PreZoneMainUI_x                                  0x1401974F0
#define CDisplay__CleanGameUI_x                                    0x140189660
#define CDisplay__GetClickedActor_x                                0x14018D820
#define CDisplay__GetUserDefinedColor_x                            0x14018E490
#define CDisplay__InitCharSelectUI_x                               0x14018E740
#define CDisplay__ReloadUI_x                                       0x1401997E0
#define CDisplay__RestartUI_x                                      0x1401F8A70
#define CDisplay__WriteTextHD2_x                                   0x1401A07F0
#define CDisplay__TrueDistance_x                                   0x1401A04A0
#define CDisplay__SetViewActor_x                                   0x14019CCE0
#define CDisplay__GetFloorHeight_x                                 0x14018DA80
#define CDisplay__ToggleScreenshotMode_x                           0x14019FF90
#define CDisplay__RealRender_World_x                               0x140198BC0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405DB210
#define CEditWnd__DrawCaret_x                                      0x1405CCCD0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405CD180
#define CEditWnd__GetCaretPt_x                                     0x1405CD400  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405CD440
#define CEditWnd__GetDisplayString_x                               0x1405CD6B0
#define CEditWnd__GetHorzOffset_x                                  0x1405CD8F0
#define CEditWnd__GetLineForPrintableChar_x                        0x1405CDA40
#define CEditWnd__GetSelStartPt_x                                  0x1405CDD20  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405CDB70
#define CEditWnd__PointFromPrintableChar_x                         0x1405CE8D0
#define CEditWnd__ReplaceSelection_x                               0x1405CEC80
#define CEditWnd__SelectableCharFromPoint_x                        0x1405CF120
#define CEditWnd__SetEditable_x                                    0x1405CF3B0
#define CEditWnd__SetWindowText_x                                  0x1405CF3E0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14026A0C0
#define CEverQuest__ClickedPlayer_x                                0x14025FA10
#define CEverQuest__CreateTargetIndicator_x                        0x1402602D0
#define CEverQuest__DoTellWindow_x                                 0x140106CB0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140107570 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14026BA80
#define CEverQuest__dsp_chat_x                                     0x1401066E0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x140296840
#define CEverQuest__Emote_x                                        0x14026C460
#define CEverQuest__GetBodyTypeDesc_x                              0x14026D210
#define CEverQuest__GetClassDesc_x                                 0x14026D270
#define CEverQuest__GetClassThreeLetterCode_x                      0x14026D640
#define CEverQuest__GetDeityDesc_x                                 0x14026D8F0
#define CEverQuest__GetLangDesc_x                                  0x14026DD20
#define CEverQuest__GetRaceDesc_x                                  0x14026E0C0
#define CEverQuest__InterpretCmd_x                                 0x14026FA00
#define CEverQuest__LeftClickedOnPlayer_x                          0x140284AD0
#define CEverQuest__LMouseUp_x                                     0x140271420
#define CEverQuest__RightClickedOnPlayer_x                         0x1402822F0
#define CEverQuest__RMouseUp_x                                     0x14027B9F0
#define CEverQuest__SetGameState_x                                 0x1402879E0
#define CEverQuest__UPCNotificationFlush_x                         0x14028D310 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140271090
#define CEverQuest__ReportSuccessfulHeal_x                         0x14027CDA0
#define CEverQuest__ReportSuccessfulHit_x                          0x14027DBC0

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403C2EE0

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C1920
#define CGuild__GetGuildName_x                                     0x1400C1960

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403E60E0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402A88F0
#define CHotButton__SetCheck_x                                     0x1402A8BC0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403FDC40
#define CInvSlotMgr__MoveItem_x                                    0x1403FDE20
#define CInvSlotMgr__SelectSlot_x                                  0x1403FF810

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403FAE70
#define CInvSlot__SliderComplete_x                                 0x1403FC3C0
#define CInvSlot__GetItemBase_x                                    0x1403F68C0
#define CInvSlot__UpdateItem_x                                     0x1403FC870

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x140400BA0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1404221E0
#define CItemDisplayWnd__UpdateStrings_x                           0x140424C80
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x14041EA50
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140420380
#define CItemDisplayWnd__RequestConvertItem_x                      0x140421610

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404EB410
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404ED100

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140527F80

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x14041B170

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x1401518B0

// CLabel
#define CLabel__UpdateText_x                                       0x14042C060

// CListWnd
#define CListWnd__CListWnd_x                                       0x14059D560
#define CListWnd__dCListWnd_x                                      0x14059D9B0
#define CListWnd__vftable_x                                        0x140AAB810
#define CListWnd__AddColumn_x                                      0x14059E050
#define CListWnd__AddColumn1_x                                     0x14059E0F0
#define CListWnd__AddLine_x                                        0x14059E250
#define CListWnd__AddString_x                                      0x14059E7E0
#define CListWnd__CalculateFirstVisibleLine_x                      0x14059ED50
#define CListWnd__CalculateVSBRange_x                              0x14059F030
#define CListWnd__ClearSel_x                                       0x14059F1E0
#define CListWnd__ClearAllSel_x                                    0x14059F180
#define CListWnd__CloseAndUpdateEditWindow_x                       0x14059F240
#define CListWnd__Compare_x                                        0x14059F400
#define CListWnd__Draw_x                                           0x14059F8D0
#define CListWnd__DrawColumnSeparators_x                           0x1405A0480
#define CListWnd__DrawHeader_x                                     0x1405A0540
#define CListWnd__DrawItem_x                                       0x1405A0C20
#define CListWnd__DrawLine_x                                       0x1405A15A0
#define CListWnd__DrawSeparator_x                                  0x1405A1A60
#define CListWnd__EnableLine_x                                     0x1405A1E80
#define CListWnd__EnsureVisible_x                                  0x1405A1EE0
#define CListWnd__ExtendSel_x                                      0x1405A1FE0
#define CListWnd__GetColumnMinWidth_x                              0x1405A2370
#define CListWnd__GetColumnWidth_x                                 0x1405A23F0
#define CListWnd__GetCurSel_x                                      0x1405A24F0
#define CListWnd__GetItemData_x                                    0x1405A2870
#define CListWnd__GetItemHeight_x                                  0x1405A28B0
#define CListWnd__GetItemRect_x                                    0x1405A2AD0
#define CListWnd__GetItemText_x                                    0x1405A2D70
#define CListWnd__GetSelList_x                                     0x1405A2FC0
#define CListWnd__GetSeparatorRect_x                               0x1405A31B0
#define CListWnd__InsertLine_x                                     0x1405A4620
#define CListWnd__RemoveLine_x                                     0x1405A4C90
#define CListWnd__SetColors_x                                      0x1405A5050
#define CListWnd__SetColumnJustification_x                         0x1405A5070
#define CListWnd__SetColumnLabel_x                                 0x1405A50F0
#define CListWnd__SetColumnWidth_x                                 0x1405A5290
#define CListWnd__SetCurSel_x                                      0x1405A5360
#define CListWnd__SetItemColor_x                                   0x1405A55D0
#define CListWnd__SetItemData_x                                    0x1405A5670
#define CListWnd__SetItemText_x                                    0x1405A58B0
#define CListWnd__Sort_x                                           0x1405A5CC0
#define CListWnd__ToggleSel_x                                      0x1405A5E30
#define CListWnd__SetColumnsSizable_x                              0x1405A52E0
#define CListWnd__SetItemWnd_x                                     0x1405A59E0
#define CListWnd__GetItemWnd_x                                     0x1405A2F50
#define CListWnd__SetItemIcon_x                                    0x1405A56B0
#define CListWnd__CalculateCustomWindowPositions_x                 0x14059EB20
#define CListWnd__SetVScrollPos_x                                  0x1405A5C20

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x14043F310

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A12648
#define MapViewMap__Clear_x                                        0x140440E90
#define MapViewMap__SetZoom_x                                      0x1404474E0
#define MapViewMap__HandleLButtonDown_x                            0x140444020

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140468B90  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x14046F130
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x14046F8D0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x1404730E0
#define CMerchantWnd__SelectBuySellSlot_x                          0x140472420
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140477380

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14064AC50
#define CPacketScrambler__hton_x                                   0x14064AC40

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405C65B0
#define CSidlManagerBase__FindAnimation1_x                         0x1405C64F0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405C6BE0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405C6990
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405C58F0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405C5880
#define CSidlManagerBase__CreateXWnd_x                             0x1405C4EC0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404DE3A0
#define CSidlManager__CreateXWnd_x                                 0x1404DE560

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14058B0F0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14058B220
#define CSidlScreenWnd__ConvertToRes_x                             0x1405D5750 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14058B3A0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14058A820
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14058A8F0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14058AB00
#define CSidlScreenWnd__DrawSidlPiece_x                            0x14058BA90
#define CSidlScreenWnd__EnableIniStorage_x                         0x14058BCC0
#define CSidlScreenWnd__GetChildItem_x                             0x14058BE60
#define CSidlScreenWnd__GetSidlPiece_x                             0x14058C0B0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140596110 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x14058C420
#define CSidlScreenWnd__LoadIniInfo_x                              0x14058C790
#define CSidlScreenWnd__LoadIniListWnd_x                           0x14058D050
#define CSidlScreenWnd__LoadSidlScreen_x                           0x14058DA50
#define CSidlScreenWnd__m_layoutCopy_x                             0x140EF8858
#define CSidlScreenWnd__StoreIniInfo_x                             0x14058E0E0
#define CSidlScreenWnd__StoreIniVis_x                              0x14058E8D0
#define CSidlScreenWnd__vftable_x                                  0x140AAAA98
#define CSidlScreenWnd__WndNotification_x                          0x14058E920

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x140323810 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140323CB0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x140323BE0
#define CSkillMgr__IsActivatedSkill_x                              0x140324060
#define CSkillMgr__IsCombatSkill_x                                 0x1403240A0
#define CSkillMgr__GetSkillTimerDuration_x                         0x140323FD0
#define CSkillMgr__GetSkillLastUsed_x                              0x140323C30

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405A67B0
#define CSliderWnd__SetValue_x                                     0x1405A6FC0
#define CSliderWnd__SetNumTicks_x                                  0x1405A6E40

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404E4A30

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405AB760
#define CStmlWnd__CalculateHSBRange_x                              0x140595AF0
#define CStmlWnd__CalculateVSBRange_x                              0x1405AC680
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405AD100
#define CStmlWnd__ForceParseNow_x                                  0x1405AD1A0
#define CStmlWnd__GetVisibleText_x                                 0x1405AD870
#define CStmlWnd__MakeStmlColorTag_x                               0x1405AF5D0
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405AF610
#define CStmlWnd__SetSTMLText_x                                    0x1405B65E0
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405B6790
#define CStmlWnd__UpdateHistoryString_x                            0x1405B6B20

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405A7390
#define CTabWnd__DrawCurrentPage_x                                 0x1405A7430
#define CTabWnd__DrawTab_x                                         0x1405A7800
#define CTabWnd__GetTabRect_x                                      0x1405A7E70
#define CTabWnd__InsertPage_x                                      0x1405A8140
#define CTabWnd__RemovePage_x                                      0x1405A83D0
#define CTabWnd__SetPage_x                                         0x1405A8530
#define CTabWnd__UpdatePage_x                                      0x1405A8830

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405CF840
#define CPageWnd__SetTabText_x                                     0x1405CF8B0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BB060  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BB470


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405BDF90
#define CTextureFont__DrawWrappedText1_x                           0x1405BDEA0
#define CTextureFont__DrawWrappedText2_x                           0x1405BE0C0
#define CTextureFont__GetTextExtent_x                              0x1405BE470
#define CTextureFont__GetHeight_x                                  0x1405BE430

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405D3EB0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x14058A400

// CXStr
#define CXStr__gFreeLists_x                                        0x140D27EF0
#define CXStr__gCXStrAccess_x                                      0x140EF8658

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405911A0
#define CXWnd__ClrFocus_x                                          0x140591490
#define CXWnd__Destroy_x                                           0x140591610
#define CXWnd__DoAllDrawing_x                                      0x140591710
#define CXWnd__DrawColoredRect_x                                   0x140591ED0
#define CXWnd__DrawTooltip_x                                       0x140593530
#define CXWnd__DrawTooltipAtPoint_x                                0x1405935E0
#define CXWnd__GetChildItem_x                                      0x140593EE0
#define CXWnd__GetChildWndAt_x                                     0x140593FA0
#define CXWnd__GetClientRect_x                                     0x140594260
#define CXWnd__GetClientClipRect_x                                 0x140594110
#define CXWnd__GetRelativeRect_x                                   0x140595C30
#define CXWnd__GetScreenClipRect_x                                 0x140595D40
#define CXWnd__GetScreenRect_x                                     0x140595E90
#define CXWnd__GetTooltipRect_x                                    0x140596010
#define CXWnd__IsActive_x                                          0x1405965D0
#define CXWnd__IsDescendantOf_x                                    0x140596600
#define CXWnd__IsReallyVisible_x                                   0x140596670
#define CXWnd__IsType_x                                            0x1405966B0
#define CXWnd__Minimize_x                                          0x1405967B0
#define CXWnd__ProcessTransition_x                                 0x1405976A0
#define CXWnd__Resize_x                                            0x1405977C0
#define CXWnd__Right_x                                             0x140597860
#define CXWnd__SetFocus_x                                          0x140597C30
#define CXWnd__SetFont_x                                           0x140597C80
#define CXWnd__SetKeyTooltip_x                                     0x140597D90
#define CXWnd__SetMouseOver_x                                      0x140597ED0
#define CXWnd__SetParent_x                                         0x140597F50
#define CXWnd__StartFade_x                                         0x1405983A0
#define CXWnd__vftable_x                                           0x140AAB070
#define CXWnd__CXWnd_x                                             0x14058FD40
#define CXWnd__dCXWnd_x                                            0x140590690

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405DA990

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405B83F0
#define CXWndManager__DrawCursor_x                                 0x1405B86D0
#define CXWndManager__DrawWindows_x                                0x1405B8930
#define CXWndManager__GetKeyboardFlags_x                           0x1405B9000
#define CXWndManager__HandleKeyboardMsg_x                          0x1405B9040
#define CXWndManager__RemoveWnd_x                                  0x1405BC660

// CDBStr
#define CDBStr__GetString_x                                        0x140187820

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x140654A70

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CF570
#define CCharacterListWnd__EnterWorld_x                            0x1400CE270
#define CCharacterListWnd__Quit_x                                  0x1400CF550
#define CCharacterListWnd__UpdateList_x                            0x1400D03D0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140622130
#define ItemBase__CreateItemTagString_x                            0x140622B80
#define ItemBase__GetImageNum_x                                    0x1406250F0
#define ItemBase__GetItemValue_x                                   0x140626B80
#define ItemBase__IsEmpty_x                                        0x140628780
#define ItemBase__IsKeyRingItem_x                                  0x140628EB0
#define ItemBase__ValueSellMerchant_x                              0x14062D100
#define ItemClient__CanDrop_x                                      0x1402AB1B0
#define ItemClient__CanGoInBag_x                                   0x1402AB2E0
#define ItemClient__CreateItemClient_x                             0x1402AB560
#define ItemClient__dItemClient_x                                  0x1402AB020

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401A7090
#define EQ_LoadingS__Array_x                                       0x140D14220

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140639980
#define PcBase__GetCombatAbility_x                                 0x14063A070
#define PcBase__GetCombatAbilityTimer_x                            0x14063A110
#define PcBase__GetItemContainedRealEstateIds_x                    0x14063A8B0
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14063B3F0
#define PcClient__AlertInventoryChanged_x                          0x1402CD5C0
#define PcClient__GetConLevel_x                                    0x1402CDBE0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402D03C0
#define PcClient__HasLoreItem_x                                    0x1402D1420
#define PcZoneClient__GetItemRecastTimer_x                         0x1402DED10
#define PcZoneClient__RemoveMyAffect_x                             0x1402E2970

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x140216D70  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x140216F20  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x140217080  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x140216FC0  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x140250FE0  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140182090

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140698630
#define PlayerBase__CanSee1_x                                      0x140698700
#define PlayerBase__GetVisibilityLineSegment_x                     0x140698BC0
#define PlayerBase__HasProperty_x                                  0x140698D90
#define PlayerBase__IsTargetable_x                                 0x140698E50
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402F0230
#define PlayerClient__GetPcClient_x                                0x1402F2A60
#define PlayerClient__PlayerClient_x                               0x1402E8A40
#define PlayerClient__SetNameSpriteState_x                         0x1402F6100
#define PlayerClient__SetNameSpriteTint_x                          0x1402F70C0
#define PlayerZoneClient__ChangeHeight_x                           0x140305920
#define PlayerZoneClient__DoAttack_x                               0x140306630
#define PlayerZoneClient__GetLevel_x                               0x140309D50
#define PlayerZoneClient__IsValidTeleport_x                        0x140253D70
#define PlayerZoneClient__LegalPlayerRace_x                        0x140195D70

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402FF090  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402FF140  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402FF240
#define PlayerManagerClient__CreatePlayer_x                        0x1402FEB60
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x1406981F0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402B0410
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402B0010
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402B0080
#define KeypressHandler__ClearCommandStateArray_x                  0x1402B03A0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402B0530
#define KeypressHandler__HandleKeyUp_x                             0x1402B0650
#define KeypressHandler__SaveKeymapping_x                          0x1402B02B0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1406525B0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x14064C380

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402D79C0  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402DCCE0
#define PcZoneClient__GetPcSkillLimit_x                            0x1402DF490
#define PcZoneClient__RemovePetEffect_x                            0x1402E2C50
#define PcZoneClient__HasAlternateAbility_x                        0x1402E0060
#define PcZoneClient__CanEquipItem_x                               0x1402DB020
#define PcZoneClient__GetItemByID_x                                0x1402DDD70
#define PcZoneClient__RemoveBuffEffect_x                           0x1402E27F0
#define PcZoneClient__BandolierSwap_x                              0x1402DA070

// Doors
#define EQSwitch__UseSwitch_x                                      0x1402588A0

// IconCache
#define IconCache__GetIcon_x                                       0x1403B7FD0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403AC660
#define CContainerMgr__CloseContainer_x                            0x1403ABFA0
#define CContainerMgr__OpenExperimentContainer_x                   0x1403AC9E0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404A2770

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402A2C00

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140433340
#define CLootWnd__RequestLootSlot_x                                0x140434350

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401D64D0
#define EQ_Spell__SpellAffects_x                                   0x1401D7780
#define EQ_Spell__SpellAffectBase_x                                0x1401D76E0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D8380
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D8330
#define EQ_Spell__IsSPAStacking_x                                  0x1401D73B0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401D6F70
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401D6840

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C0560

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1404FF140
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404FE850
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404FE050

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1405067B0  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x14017EA60
#define CTaskManager__GetTaskStatus_x                              0x14017EB70
#define CTaskManager__GetElementDescription_x                      0x14017E6F0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401D4800
#define EqSoundManager__PlayScriptMp3_x                            0x1401D3640
#define EqSoundManager__SoundAssistPlay_x                          0x140328E50  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140329190  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x140599160
#define CTextureAnimation__SetCurCell_x                            0x140599470

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402A0E60

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x14066CFE0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x14066D060
#define CharacterBase__IsExpansionFlag_x                           0x1401F82A0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x14038A330
#define CCastSpellWnd__IsBardSongPlaying_x                         0x14038ACF0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x14038C240

// messages
#define msg_spell_worn_off_x                                       0x14020D6A0
#define msg_new_text_x                                             0x140208F10
#define __msgTokenTextParam_x                                      0x140200860
#define msgTokenText_x                                             0x140200780

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x14032A800
#define SpellManager__GetSpellByGroupAndRank_x                     0x14032A720

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x1406A6FE0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x14042C7B0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403B1360
#define CCursorAttachment__IsOkToActivate_x                        0x1403B4620
#define CCursorAttachment__RemoveAttachment_x                      0x1403B48D0
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405D2350
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405D2540
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405D2550

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x14014CA80
#define CFindItemWnd__Update_x                                     0x14014D420
#define CFindItemWnd__PickupSelectedItem_x                         0x140146F00

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x1401565B0
#define LootFiltersManager__GetItemFilterData_x                    0x1401570C0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140157960
#define LootFiltersManager__SetItemLootFilter_x                    0x140157C10

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x1404853A0

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x1403233D0
#define CResolutionHandler__UpdateResolution_x                     0x1406AB840

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403A8960

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406713E0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406712D0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403CF200
#define CGroupWnd__UpdateDisplay_x                                 0x1403CEDE0

// ItemBase
#define ItemBase__IsLore_x                                         0x140628FE0
#define ItemBase__IsLoreEquipped_x                                 0x140629070

#define MultipleItemMoveManager__ProcessMove_x                     0x1402C3180

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140251140
#define EQPlacedItemManager__GetItemByGuid_x                       0x1402510D0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140251110

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14031D830

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x1401247E0
#define FactionManagerClient__HandleFactionMessage_x               0x140124B90
#define FactionManagerClient__GetFactionStanding_x                 0x140123FB0
#define FactionManagerClient__GetMaxFaction_x                      0x140123FB0
#define FactionManagerClient__GetMinFaction_x                      0x140123E60

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AD630

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x14012FF70

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401AF9F0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401AED70
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401AF810  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401AF790  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x14032F9E0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14031D830

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x140217110

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x14058EF10

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140085AE0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140341210

// AchievementManager
#define AchievementManager__Instance_x                             0x14008D4B0

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x1406555F0
#define FreeToPlayClient__RestrictionInfo_x                        0x140ABF140

// UdpConnection
#define UdpConnection__GetStats_x                                  0x140535030

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x14081E538
#define CGFScreenWnd__CGFScreenWnd_x                               0x140070400
#define CGFScreenWnd__CGFScreenWnd1_x                              0x140070590
#define CGFScreenWnd__dCGFScreenWnd_x                              0x140070740

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
