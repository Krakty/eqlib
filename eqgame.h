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

#define __ClientDate                                               20250513u
#define __ExpectedVersionDate                                     "May 13 2025"
#define __ExpectedVersionTime                                     "13:14:29"
#define __ActualVersionDate_x                                      0x14095AD20
#define __ActualVersionTime_x                                      0x14095AD10
#define __ActualVersionBuild_x                                     0x1408F0AA0

// Memory Protection
#define __MemChecker0_x                                            0x1402BBCC0
#define __MemChecker1_x                                            0x140581050
#define __MemChecker4_x                                            0x1402893F0
#define __EncryptPad0_x                                            0x140D29E80

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E62AF0
#define instEQZoneInfo_x                                           0x140E62CE4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x14021EE50
#define __gfMaxZoomCameraDistance_x                                0x1408F1D18
#define __gfMaxCameraDistance_x                                    0x140A99068
#define __CurrentSocial_x                                          0x140BE5950 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D21720
#define g_eqCommandStates_x                                        0x140D22790
#define __CommandList_x                                            0x140D229C0
#define __ScreenMode_x                                             0x140DAA5C4
#define __gWorld_x                                                 0x140E5DA30
#define __gpbCommandEvent_x                                        0x140E5B4D4
#define __ServerHost_x                                             0x140E5B6B8
#define __Guilds_x                                                 0x140E616B0
#define __MemCheckBitmask_x                                        0x140E6302F
#define __MemCheckActive_x                                         0x140E64735
#define __MouseEventTime_x                                         0x140ED8080
#define DI8__MouseState_x                                          0x140EDC2C8
#define __heqmain_x                                                0x140EDE768
#define DI8__Mouse_x                                               0x140EDC218
#define __HWnd_x                                                   0x140EDC2A0
#define __Mouse_x                                                  0x140EDC1D4
#define DI8__Keyboard_x                                            0x140EDC1F0
#define __LoginName_x                                              0x140EDEE4C
#define __CurrentMapLabel_x                                        0x140EF28D0
#define __LabelCache_x                                             0x140EF34A0
#define __ChatFilterDefs_x                                         0x140A338D0
#define Teleport_Table_Size_x                                      0x140E5B560
#define Teleport_Table_x                                           0x140E5B9F0

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E5DA40
#define pinstActiveBanker_x                                        0x140E5B418
#define pinstActiveCorpse_x                                        0x140E5B408
#define pinstActiveGMaster_x                                       0x140E5B410
#define pinstActiveMerchant_x                                      0x140E5B400
#define pinstAltAdvManager_x                                       0x140DAB240
#define pinstCEverQuest_x                                          0x140EDC210
#define pinstCamActor_x                                            0x140DAA5B0
#define pinstCDBStr_x                                              0x140DA9FF0
#define pinstCDisplay_x                                            0x140E5B9E8
#define pinstControlledPlayer_x                                    0x140E5B4A8
#define pinstCResolutionHandler_x                                  0x140F03CD8
#define pinstCSidlManager_x                                        0x140F04A40
#define pinstCXWndManager_x                                        0x140F04A38
#define instDynamicZone_x                                          0x140E61570 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E615BE
#define instExpeditionName_x                                       0x140E615FE
#define pinstDZMember_x                                            0x140E61688
#define pinstDZTimerInfo_x                                         0x140E61690
#define pinstEqLogin_x                                             0x140EDE790
#define instTribute_x                                              0x140D1CD60
#define pinstDeviceInputProxy_x                                    0x140E62B4C
#define pinstEQSoundManager_x                                      0x140DAB5C0
#define pinstEQSpellStrings_x                                      0x140D8EB80
#define pinstSGraphicsEngine_x                                     0x140F03A58
#define pinstLocalPC_x                                             0x140E5DA18
#define pinstLocalPlayer_x                                         0x140E5B3F8
#define pinstCMercenaryClientManager_x                             0x140ED9988
#define pinstModelPlayer_x                                         0x140E5B428
#define pinstRenderInterface_x                                     0x140F03A70
#define pinstSkillMgr_x                                            0x140EDB618
#define pinstSpawnManager_x                                        0x140ED9D40
#define pinstSpellManager_x                                        0x140EDB680
#define pinstStringTable_x                                         0x140E5DA28
#define pinstSwitchManager_x                                       0x140E5AEF0
#define pinstTarget_x                                              0x140E5B4A0
#define pinstTaskMember_x                                          0x140D1CD50 // Part of g_taskManager
#define pinstTradeTarget_x                                         0x140E5B420
#define instTributeActive_x                                        0x140D1CD89
#define pinstViewActor_x                                           0x140DAA5A8
#define pinstWorldData_x                                           0x140E5B4C8
#define pinstPlayerPath_x                                          0x140ED9D68
#define pinstTargetIndicator_x                                     0x140EDB730
#define EQObject_Top_x                                             0x140E5B7C0

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140EEFA30
#define pinstCContainerMgr_x                                       0x140DAA610
#define pinstCContextMenuManager_x                                 0x140F04720
#define pinstCInvSlotMgr_x                                         0x140DAA5E0
#define pinstCItemDisplayManager_x                                 0x140EF24A0
#define pinstCPopupWndManager_x                                    0x140EF2D30
#define pinstCSpellDisplayMgr_x                                    0x140EF3380
#define pinstCTaskManager_x                                        0x140BE5C90
#define pinstEQSuiteTextureLoader_x                                0x140D33590
#define pinstItemIconCache_x                                       0x140EEFD90
#define pinstLootFiltersManager_x                                  0x140DA9A38
#define pinstGFViewListener_x                                      0x140F03EF8


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x140248B70
#define __CastRay_x                                                0x140240E10
#define __CastRay2_x                                               0x140240B10
#define __compress_block_x                                         0x1405365E0
#define __ConvertItemTags_x                                        0x140241270
#define __CleanItemTags_x                                          0x14008A1F0
#define __CreateCascadeMenuItems_x                                 0x14018D320
#define __decompress_block_x                                       0x14057C860
#define __DoesFileExist_x                                          0x140584F00
#define __EQGetTime_x                                              0x140581600
#define __ExecuteCmd_x                                             0x140216650
#define __FixHeading_x                                             0x14063B2F0
#define __FlushDxKeyboard_x                                        0x140340360
#define __get_bearing_x                                            0x14024ADA0
#define __get_melee_range_x                                        0x14024AE90
#define __GetAnimationCache_x                                      0x1403BEDC0
#define __GetGaugeValueFromEQ_x                                    0x1404F6150
#define __GetLabelFromEQ_x                                         0x1404F7750
#define __GetXTargetType_x                                         0x14063C5D0   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14063B370
#define __HelpPath_x                                               0x140ED7F48   // Why?
#define __NewUIINI_x                                               0x1405031B0   // Why?
#define __ProcessDeviceEvents_x                                    0x140289A00
#define __ProcessGameEvents_x                                      0x14027E6B0
#define __ProcessKeyboardEvents_x                                  0x140341AB0
#define __ProcessMouseEvents_x                                     0x14027FD90
#define __SaveColors_x                                             0x14019D340
#define __STMLToText_x                                             0x14058D140
#define __WndProc_x                                                0x14033EB30
#define CMemoryMappedFile__SetFile_x                               0x1407E8E60
#define DrawNetStatus_x                                            0x1402CA260
#define Util__FastTime_x                                           0x14057D780
#define __eq_delete_x                                              0x1406B4E64
#define __eq_new_x                                                 0x1406B4E20
#define __CopyLayout_x                                             0x1402B80C0
#define __ThrottleFrameRate_x                                      0x14026DD94
#define __ThrottleFrameRateEnd_x                                   0x14026DDF4

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x1403511F0
#define CAAWnd__Update_x                                           0x1403514F0
#define CAAWnd__UpdateSelected_x                                   0x140352540

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AC750
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A5130
#define CAdvancedLootWnd__AddPlayerToList_x                        0x14083DE48
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AD080

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401A84B0
#define AltAdvManager__IsAbilityReady_x                            0x1401A8940
#define AltAdvManager__GetAAById_x                                 0x1401A7D80
#define AltAdvManager__CanTrainAbility_x                           0x1401A7B70
#define AltAdvManager__CanSeeAbility_x                             0x1401A7830

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D3140
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D3FA0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D41F0
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400E8A00
#define CharacterZoneClient__CanUseItem_x                          0x1400E8FC0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D4BC0
#define CharacterZoneClient__CastSpell_x                           0x1400D4C60
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E4800
#define CharacterZoneClient__Cur_HP_x                              0x1400EA6D0
#define CharacterZoneClient__Cur_Mana_x                            0x1400EA890
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D7FC0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F0F00
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FF740  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D9460
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E8300
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F2AB0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F1990
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D95E0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C9920
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400CB320
#define CharacterZoneClient__GetHPRegen_x                          0x1400F20D0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400EA340
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F2D40
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D9660
#define CharacterZoneClient__GetManaRegen_x                        0x1400F3AC0
#define CharacterZoneClient__GetModCap_x                           0x1400FAEF0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D98F0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D9AC0
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CE4B0
#define CharacterZoneClient__HasSkill_x                            0x1400F6A90
#define CharacterZoneClient__HitBySpell_x                          0x1400DA550
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DDEC0
#define CharacterZoneClient__MakeMeVisible_x                       0x1400FA9D0
#define CharacterZoneClient__Max_Endurance_x                       0x1402E6940  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400FAD20
#define CharacterZoneClient__Max_Mana_x                            0x1402E6B60  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400FB180
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E1350
#define CharacterZoneClient__SpellDuration_x                       0x1400E2080
#define CharacterZoneClient__TotalEffect_x                         0x1400E33E0
#define CharacterZoneClient__UseSkill_x                            0x1401006C0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x14036FAA0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140379E20

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140375CA0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x1403798A0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14037C4F0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AB85A0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x14039F210
#define CChatWindowManager__InitContextMenu_x                      0x14039F3A0
#define CChatWindowManager__FreeChatWindow_x                       0x14039E280
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403A6FE0
#define CChatWindowManager__CreateChatWindow_x                     0x14039DCB0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140108C20

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403A8030
#define CChatWindow__Clear_x                                       0x1403A8FE0
#define CChatWindow__WndNotification_x                             0x1403AA1D0
#define CChatWindow__AddHistory_x                                  0x1403A8AE0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405C21D0
#define CContextMenu__RemoveMenuItem_x                             0x1405C25C0
#define CContextMenu__RemoveAllMenuItems_x                         0x1405C2590
#define CContextMenu__CheckMenuItem_x                              0x1405C2400
#define CContextMenu__SetMenuItem_x                                0x1405C25E0
#define CContextMenu__AddSeparator_x                               0x1405C2340

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405B4090
#define CContextMenuManager__RemoveMenu_x                          0x1405B4670
#define CContextMenuManager__PopupMenu_x                           0x1405B43B0
#define CContextMenuManager__Flush_x                               0x1405B4110
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403B6950

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x14068F020
#define CChatService__GetFriendName_x                              0x14068F030

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405A4F70
#define CComboWnd__Draw_x                                          0x1405A5070
#define CComboWnd__GetCurChoice_x                                  0x1405A5350  // unused
#define CComboWnd__GetListRect_x                                   0x1405A53F0
#define CComboWnd__InsertChoice_x                                  0x1405A5730
#define CComboWnd__SetColors_x                                     0x1405A5AC0
#define CComboWnd__SetChoice_x                                     0x1405A5A80
#define CComboWnd__GetItemCount_x                                  0x1405A53E0
#define CComboWnd__GetCurChoiceText_x                              0x1405A5390  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405A5320
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405A57F0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403B4680
#define CContainerWnd__SetContainer_x                              0x14040C040
#define CContainerWnd__vftable_x                                   0x1409CF128

// CDisplay
#define CDisplay__cameraType_x                                     0x140DAA38C
#define CDisplay__ZoneMainUI_x                                     0x1405DC3C0
#define CDisplay__PreZoneMainUI_x                                  0x14019A270
#define CDisplay__CleanGameUI_x                                    0x14018C3E0
#define CDisplay__GetClickedActor_x                                0x1401905A0
#define CDisplay__GetUserDefinedColor_x                            0x140191210
#define CDisplay__InitCharSelectUI_x                               0x1401914C0
#define CDisplay__ReloadUI_x                                       0x14019C560
#define CDisplay__RestartUI_x                                      0x1401FC370
#define CDisplay__WriteTextHD2_x                                   0x1401A3570
#define CDisplay__TrueDistance_x                                   0x1401A3220
#define CDisplay__SetViewActor_x                                   0x14019FA60
#define CDisplay__GetFloorHeight_x                                 0x140190800
#define CDisplay__ToggleScreenshotMode_x                           0x1401A2D10
#define CDisplay__RealRender_World_x                               0x14019B940

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405E65E0
#define CEditWnd__DrawCaret_x                                      0x1405D80C0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405D8580
#define CEditWnd__GetCaretPt_x                                     0x1405D8800  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405D8840
#define CEditWnd__GetDisplayString_x                               0x1405D8AB0
#define CEditWnd__GetHorzOffset_x                                  0x1405D8CF0
#define CEditWnd__GetLineForPrintableChar_x                        0x1405D8E40
#define CEditWnd__GetSelStartPt_x                                  0x1405D9120  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405D8F70
#define CEditWnd__PointFromPrintableChar_x                         0x1405D9CD0
#define CEditWnd__ReplaceSelection_x                               0x1405DA080
#define CEditWnd__SelectableCharFromPoint_x                        0x1405DA520
#define CEditWnd__SetEditable_x                                    0x1405DA7B0
#define CEditWnd__SetWindowText_x                                  0x1405DA7E0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14026EEA0
#define CEverQuest__ClickedPlayer_x                                0x140264720
#define CEverQuest__CreateTargetIndicator_x                        0x140264FE0
#define CEverQuest__DoTellWindow_x                                 0x140108930 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140109200 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140270890
#define CEverQuest__dsp_chat_x                                     0x140108370 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x14029B900
#define CEverQuest__Emote_x                                        0x140271280
#define CEverQuest__GetBodyTypeDesc_x                              0x140272060
#define CEverQuest__GetClassDesc_x                                 0x1402720C0
#define CEverQuest__GetClassThreeLetterCode_x                      0x140272490
#define CEverQuest__GetDeityDesc_x                                 0x140272740
#define CEverQuest__GetLangDesc_x                                  0x140272B70
#define CEverQuest__GetRaceDesc_x                                  0x140272F10
#define CEverQuest__InterpretCmd_x                                 0x140274880
#define CEverQuest__LeftClickedOnPlayer_x                          0x140289A70
#define CEverQuest__LMouseUp_x                                     0x1402762E0
#define CEverQuest__RightClickedOnPlayer_x                         0x140287260
#define CEverQuest__RMouseUp_x                                     0x140280920
#define CEverQuest__SetGameState_x                                 0x14028C9E0
#define CEverQuest__UPCNotificationFlush_x                         0x140292340 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140275F40
#define CEverQuest__ReportSuccessfulHeal_x                         0x140281CF0
#define CEverQuest__ReportSuccessfulHit_x                          0x140282B10

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403C9D00

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C3220
#define CGuild__GetGuildName_x                                     0x1400C3260

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403ED1A0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402ADA40
#define CHotButton__SetCheck_x                                     0x1402ADD10

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140404D60
#define CInvSlotMgr__MoveItem_x                                    0x140404F40
#define CInvSlotMgr__SelectSlot_x                                  0x140406970

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x140401F60
#define CInvSlot__SliderComplete_x                                 0x1404034B0
#define CInvSlot__GetItemBase_x                                    0x1403FD960
#define CInvSlot__UpdateItem_x                                     0x140403960

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x140407D00

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140429220
#define CItemDisplayWnd__UpdateStrings_x                           0x14042BDD0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x1404259F0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140427360
#define CItemDisplayWnd__RequestConvertItem_x                      0x140428630

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404F2BC0
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404F4950

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x14052F940

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1404220B0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140153540

// CLabel
#define CLabel__UpdateText_x                                       0x1404331D0

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405A8900
#define CListWnd__dCListWnd_x                                      0x1405A8D50
#define CListWnd__vftable_x                                        0x140AB66F0
#define CListWnd__AddColumn_x                                      0x1405A93F0
#define CListWnd__AddColumn1_x                                     0x1405A9490
#define CListWnd__AddLine_x                                        0x1405A95F0
#define CListWnd__AddString_x                                      0x1405A9B80
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405AA0F0
#define CListWnd__CalculateVSBRange_x                              0x1405AA3D0
#define CListWnd__ClearSel_x                                       0x1405AA580
#define CListWnd__ClearAllSel_x                                    0x1405AA520
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405AA5E0
#define CListWnd__Compare_x                                        0x1405AA7A0
#define CListWnd__Draw_x                                           0x1405AAC70
#define CListWnd__DrawColumnSeparators_x                           0x1405AB820
#define CListWnd__DrawHeader_x                                     0x1405AB8E0
#define CListWnd__DrawItem_x                                       0x1405ABFC0
#define CListWnd__DrawLine_x                                       0x1405AC940
#define CListWnd__DrawSeparator_x                                  0x1405ACE00
#define CListWnd__EnableLine_x                                     0x1405AD220
#define CListWnd__EnsureVisible_x                                  0x1405AD280
#define CListWnd__ExtendSel_x                                      0x1405AD380
#define CListWnd__GetColumnMinWidth_x                              0x1405AD710
#define CListWnd__GetColumnWidth_x                                 0x1405AD790
#define CListWnd__GetCurSel_x                                      0x1405AD890
#define CListWnd__GetItemData_x                                    0x1405ADC10
#define CListWnd__GetItemHeight_x                                  0x1405ADC50
#define CListWnd__GetItemRect_x                                    0x1405ADE70
#define CListWnd__GetItemText_x                                    0x1405AE110
#define CListWnd__GetSelList_x                                     0x1405AE360
#define CListWnd__GetSeparatorRect_x                               0x1405AE550
#define CListWnd__InsertLine_x                                     0x1405AF9C0
#define CListWnd__RemoveLine_x                                     0x1405B0030
#define CListWnd__SetColors_x                                      0x1405B03F0
#define CListWnd__SetColumnJustification_x                         0x1405B0410
#define CListWnd__SetColumnLabel_x                                 0x1405B0490
#define CListWnd__SetColumnWidth_x                                 0x1405B0630
#define CListWnd__SetCurSel_x                                      0x1405B0700
#define CListWnd__SetItemColor_x                                   0x1405B0970
#define CListWnd__SetItemData_x                                    0x1405B0A10
#define CListWnd__SetItemText_x                                    0x1405B0C50
#define CListWnd__Sort_x                                           0x1405B1060
#define CListWnd__ToggleSel_x                                      0x1405B11D0
#define CListWnd__SetColumnsSizable_x                              0x1405B0680
#define CListWnd__SetItemWnd_x                                     0x1405B0D80
#define CListWnd__GetItemWnd_x                                     0x1405AE2F0
#define CListWnd__SetItemIcon_x                                    0x1405B0A50
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405A9EC0
#define CListWnd__SetVScrollPos_x                                  0x1405B0FC0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140446450

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A1C320
#define MapViewMap__Clear_x                                        0x140447FD0
#define MapViewMap__SetZoom_x                                      0x14044E640
#define MapViewMap__HandleLButtonDown_x                            0x14044B160

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14046FD70  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x1404763E0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140476B90
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14047A3C0
#define CMerchantWnd__SelectBuySellSlot_x                          0x140479710
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14047E670

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14066A250
#define CPacketScrambler__hton_x                                   0x14066A240

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405D1980
#define CSidlManagerBase__FindAnimation1_x                         0x1405D18C0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405D1FB0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405D1D60
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405D0CC0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405D0C50
#define CSidlManagerBase__CreateXWnd_x                             0x1405D0290

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404E5AA0
#define CSidlManager__CreateXWnd_x                                 0x1404E5C60

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405964C0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x1405965D0
#define CSidlScreenWnd__ConvertToRes_x                             0x1405E0B20 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x140596750
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x140595BF0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x140595CC0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x140595ED0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x140596E40
#define CSidlScreenWnd__EnableIniStorage_x                         0x140597070
#define CSidlScreenWnd__GetChildItem_x                             0x140597210
#define CSidlScreenWnd__GetSidlPiece_x                             0x140597460
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405A14E0 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405977D0
#define CSidlScreenWnd__LoadIniInfo_x                              0x140597B40
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140598410
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140598E10
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F03D98
#define CSidlScreenWnd__StoreIniInfo_x                             0x140599490
#define CSidlScreenWnd__StoreIniVis_x                              0x140599C80
#define CSidlScreenWnd__vftable_x                                  0x140AB5978
#define CSidlScreenWnd__WndNotification_x                          0x140599CD0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x1403292C0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140329760 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x140329690
#define CSkillMgr__IsActivatedSkill_x                              0x140329B10
#define CSkillMgr__IsCombatSkill_x                                 0x140329B50
#define CSkillMgr__GetSkillTimerDuration_x                         0x140329A80
#define CSkillMgr__GetSkillLastUsed_x                              0x1403296E0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405B1B40
#define CSliderWnd__SetValue_x                                     0x1405B2350
#define CSliderWnd__SetNumTicks_x                                  0x1405B21D0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404EC1C0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405B6AF0
#define CStmlWnd__CalculateHSBRange_x                              0x1405A0EB0
#define CStmlWnd__CalculateVSBRange_x                              0x1405B7990
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405B8490
#define CStmlWnd__ForceParseNow_x                                  0x1405B8530
#define CStmlWnd__GetVisibleText_x                                 0x1405B8C00
#define CStmlWnd__MakeStmlColorTag_x                               0x1405BA960
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405BA9A0
#define CStmlWnd__SetSTMLText_x                                    0x1405C1970
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405C1B20
#define CStmlWnd__UpdateHistoryString_x                            0x1405C1EB0

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405B2720
#define CTabWnd__DrawCurrentPage_x                                 0x1405B27C0
#define CTabWnd__DrawTab_x                                         0x1405B2B90
#define CTabWnd__GetTabRect_x                                      0x1405B3200
#define CTabWnd__InsertPage_x                                      0x1405B34D0
#define CTabWnd__RemovePage_x                                      0x1405B3760
#define CTabWnd__SetPage_x                                         0x1405B38C0
#define CTabWnd__UpdatePage_x                                      0x1405B3BC0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405DAC40
#define CPageWnd__SetTabText_x                                     0x1405DACB0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BC820  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BCC30


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405C9340
#define CTextureFont__DrawWrappedText1_x                           0x1405C9250
#define CTextureFont__DrawWrappedText2_x                           0x1405C9470
#define CTextureFont__GetTextExtent_x                              0x1405C9820
#define CTextureFont__GetHeight_x                                  0x1405C97E0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405DF280

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405957D0

// CXStr
#define CXStr__gFreeLists_x                                        0x140D32F00
#define CXStr__gCXStrAccess_x                                      0x140F038F8

// CXWnd
#define CXWnd__BringToTop_x                                        0x14059C540
#define CXWnd__ClrFocus_x                                          0x14059C830
#define CXWnd__Destroy_x                                           0x14059C9B0
#define CXWnd__DoAllDrawing_x                                      0x14059CAB0
#define CXWnd__DrawColoredRect_x                                   0x14059D280
#define CXWnd__DrawTooltip_x                                       0x14059E8F0
#define CXWnd__DrawTooltipAtPoint_x                                0x14059E9A0
#define CXWnd__GetChildItem_x                                      0x14059F2B0
#define CXWnd__GetChildWndAt_x                                     0x14059F370
#define CXWnd__GetClientRect_x                                     0x14059F610
#define CXWnd__GetClientClipRect_x                                 0x14059F4E0
#define CXWnd__GetRelativeRect_x                                   0x1405A0FD0
#define CXWnd__GetScreenClipRect_x                                 0x1405A10E0
#define CXWnd__GetScreenRect_x                                     0x1405A1260
#define CXWnd__GetTooltipRect_x                                    0x1405A13E0
#define CXWnd__IsActive_x                                          0x1405A19A0
#define CXWnd__IsDescendantOf_x                                    0x1405A19D0
#define CXWnd__IsReallyVisible_x                                   0x1405A1A40
#define CXWnd__IsType_x                                            0x1405A1A80
#define CXWnd__Minimize_x                                          0x1405A1B80
#define CXWnd__ProcessTransition_x                                 0x1405A2A70
#define CXWnd__Resize_x                                            0x1405A2B90
#define CXWnd__Right_x                                             0x1405A2C30
#define CXWnd__SetFocus_x                                          0x1405A2FF0
#define CXWnd__SetFont_x                                           0x1405A3040
#define CXWnd__SetKeyTooltip_x                                     0x1405A3150
#define CXWnd__SetMouseOver_x                                      0x1405A3290
#define CXWnd__SetParent_x                                         0x1405A3310
#define CXWnd__StartFade_x                                         0x1405A3750
#define CXWnd__vftable_x                                           0x140AB5F50
#define CXWnd__CXWnd_x                                             0x14059B0F0
#define CXWnd__dCXWnd_x                                            0x14059BA20

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405E5D60

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405C3790
#define CXWndManager__DrawCursor_x                                 0x1405C3A70
#define CXWndManager__DrawWindows_x                                0x1405C3CD0
#define CXWndManager__GetKeyboardFlags_x                           0x1405C43A0
#define CXWndManager__HandleKeyboardMsg_x                          0x1405C43E0
#define CXWndManager__RemoveWnd_x                                  0x1405C7A00

// CDBStr
#define CDBStr__GetString_x                                        0x14018A5A0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1406740A0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D0C40
#define CCharacterListWnd__EnterWorld_x                            0x1400CFC50
#define CCharacterListWnd__Quit_x                                  0x1400D0C20
#define CCharacterListWnd__UpdateList_x                            0x1400D1AA0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140641670
#define ItemBase__CreateItemTagString_x                            0x1406420D0
#define ItemBase__GetImageNum_x                                    0x140644640
#define ItemBase__GetItemValue_x                                   0x140646190
#define ItemBase__IsEmpty_x                                        0x140647D10
#define ItemBase__IsKeyRingItem_x                                  0x140648410
#define ItemBase__ValueSellMerchant_x                              0x14064C620
#define ItemClient__CanDrop_x                                      0x1402B0340
#define ItemClient__CanGoInBag_x                                   0x1402B0470
#define ItemClient__CreateItemClient_x                             0x1402B06F0
#define ItemClient__dItemClient_x                                  0x1402B01B0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401A9E60
#define EQ_LoadingS__Array_x                                       0x140D1F230

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140658F60
#define PcBase__GetCombatAbility_x                                 0x140659650
#define PcBase__GetCombatAbilityTimer_x                            0x1406596F0
#define PcBase__GetItemContainedRealEstateIds_x                    0x140659E90
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14065A9D0
#define PcClient__AlertInventoryChanged_x                          0x1402D2830
#define PcClient__GetConLevel_x                                    0x1402D2E50  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402D55E0
#define PcClient__HasLoreItem_x                                    0x1402D6650
#define PcZoneClient__GetItemRecastTimer_x                         0x1402E3E00
#define PcZoneClient__RemoveMyAffect_x                             0x1402E7A80

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x14021AD90  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x14021AF40  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x14021B0A0  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x14021AFE0  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x140255C60  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140184DE0

// PlayerClient
#define PlayerBase__CanSee_x                                       0x14062EC90
#define PlayerBase__CanSee1_x                                      0x14062ED60
#define PlayerBase__GetVisibilityLineSegment_x                     0x14062F240
#define PlayerBase__HasProperty_x                                  0x14062F410
#define PlayerBase__IsTargetable_x                                 0x14062F4D0
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402F57A0
#define PlayerClient__GetPcClient_x                                0x1402F82C0
#define PlayerClient__PlayerClient_x                               0x1402EDB00
#define PlayerClient__SetNameSpriteState_x                         0x1402FB9E0
#define PlayerClient__SetNameSpriteTint_x                          0x1402FC9A0
#define PlayerZoneClient__ChangeHeight_x                           0x14030B170
#define PlayerZoneClient__DoAttack_x                               0x14030BE80
#define PlayerZoneClient__GetLevel_x                               0x14030F5C0
#define PlayerZoneClient__IsValidTeleport_x                        0x1402589F0
#define PlayerZoneClient__LegalPlayerRace_x                        0x140198AF0

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x140304890  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x140304940  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x140304A40
#define PlayerManagerClient__CreatePlayer_x                        0x140304360
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x14062E850

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402B55C0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402B51C0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402B5230
#define KeypressHandler__ClearCommandStateArray_x                  0x1402B5550  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402B56E0
#define KeypressHandler__HandleKeyUp_x                             0x1402B5800
#define KeypressHandler__SaveKeymapping_x                          0x1402B5460  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140671BC0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x14066B990

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402DCC00  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402E1F30
#define PcZoneClient__GetPcSkillLimit_x                            0x1402E4590
#define PcZoneClient__RemovePetEffect_x                            0x1402E7D60
#define PcZoneClient__HasAlternateAbility_x                        0x1402E5170
#define PcZoneClient__CanEquipItem_x                               0x1402E0260
#define PcZoneClient__GetItemByID_x                                0x1402E2E50
#define PcZoneClient__RemoveBuffEffect_x                           0x1402E7900
#define PcZoneClient__BandolierSwap_x                              0x1402DF2C0

// Doors
#define EQSwitch__UseSwitch_x                                      0x14025D520

// IconCache
#define IconCache__GetIcon_x                                       0x1403BEDF0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403B3430
#define CContainerMgr__CloseContainer_x                            0x1403B2D70
#define CContainerMgr__OpenExperimentContainer_x                   0x1403B37B0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404A9CE0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402A7D30

// CLootWnd
#define CLootWnd__LootAll_x                                        0x14043A4B0
#define CLootWnd__RequestLootSlot_x                                0x14043B4E0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401D9390
#define EQ_Spell__SpellAffects_x                                   0x1401DA670
#define EQ_Spell__SpellAffectBase_x                                0x1401DA5D0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D9C50
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D9C00
#define EQ_Spell__IsSPAStacking_x                                  0x1401DA2A0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401D9E50
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401D9720

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C1D60

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1405069C0
#define CTargetWnd__RefreshTargetBuffs_x                           0x1405060D0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1405058D0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x14050E050  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x1401817B0
#define CTaskManager__GetTaskStatus_x                              0x1401818C0
#define CTaskManager__GetElementDescription_x                      0x140181440

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401D76B0
#define EqSoundManager__PlayScriptMp3_x                            0x1401D64F0
#define EqSoundManager__SoundAssistPlay_x                          0x14032E900  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x14032EC40  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405A4500
#define CTextureAnimation__SetCurCell_x                            0x1405A4810

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402A5F30

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x14068C6F0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x14068C770
#define CharacterBase__IsExpansionFlag_x                           0x1401FBBA0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x14038FE70
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140390870
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140391DC0

// messages
#define msg_spell_worn_off_x                                       0x1402115A0
#define msg_new_text_x                                             0x14020CD50
#define __msgTokenTextParam_x                                      0x140204410
#define msgTokenText_x                                             0x140204320

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140330530
#define SpellManager__GetSpellByGroupAndRank_x                     0x140330450

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x14063C9B0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140433920

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403B8180
#define CCursorAttachment__IsOkToActivate_x                        0x1403BB440
#define CCursorAttachment__RemoveAttachment_x                      0x1403BB6F0
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405DD720
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405DD910
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405DD920

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x14014E700
#define CFindItemWnd__Update_x                                     0x14014F0A0
#define CFindItemWnd__PickupSelectedItem_x                         0x140148B40

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x1401581A0
#define LootFiltersManager__GetItemFilterData_x                    0x140158CC0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140159560
#define LootFiltersManager__SetItemLootFilter_x                    0x140159810

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14048C740

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x140328E80
#define CResolutionHandler__UpdateResolution_x                     0x140589C10

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403AF710

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x140690AE0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406909D0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403D60D0
#define CGroupWnd__UpdateDisplay_x                                 0x1403D5CB0

// ItemBase
#define ItemBase__IsLore_x                                         0x140648540
#define ItemBase__IsLoreEquipped_x                                 0x1406485D0

#define MultipleItemMoveManager__ProcessMove_x                     0x1402C83F0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140255DC0
#define EQPlacedItemManager__GetItemByGuid_x                       0x140255D50
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140255D90

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1403232D0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140126390
#define FactionManagerClient__HandleFactionMessage_x               0x140126740
#define FactionManagerClient__GetFactionStanding_x                 0x140125B60
#define FactionManagerClient__GetMaxFaction_x                      0x140125B60
#define FactionManagerClient__GetMinFaction_x                      0x140125A10

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AED60

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140131B40

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401B2810
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401B1B90
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401B2630  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401B25B0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x140335830

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1403232D0

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x14021B130

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x14059A2C0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x1400868B0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140347100

// AchievementManager
#define AchievementManager__Instance_x                             0x14008EA70

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x140674C20
#define FreeToPlayClient__RestrictionInfo_x                        0x140ACA6A0

// UdpConnection
#define UdpConnection__GetStats_x                                  0x14053CA00

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x140825610
#define CGFScreenWnd__CGFScreenWnd_x                               0x140071260
#define CGFScreenWnd__CGFScreenWnd1_x                              0x1400713F0
#define CGFScreenWnd__dCGFScreenWnd_x                              0x1400715A0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
