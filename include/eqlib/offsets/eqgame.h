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

#define __ClientDate                                               20260113u
#define __ExpectedVersionDate                                     "Jan 13 2026"
#define __ExpectedVersionTime                                     "12:25:20"
#define __ActualVersionDate_x                                      0x140978968
#define __ActualVersionTime_x                                      0x140978958
#define __ActualVersionBuild_x                                     0x14090DAF0

// Memory Protection
#define __MemChecker0_x                                            0x1402C7F00
#define __MemChecker1_x                                            0x140598A80
#define __MemChecker4_x                                            0x1402958A0
#define __EncryptPad0_x                                            0x140D4AFA0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E83AB0
#define instEQZoneInfo_x                                           0x140E83CA4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x140228E80
#define __gfMaxZoomCameraDistance_x                                0x14090EDA8
#define __gfMaxCameraDistance_x                                    0x140AB8C14
#define __CurrentSocial_x                                          0x140C069BC // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D42790
#define g_eqCommandStates_x                                        0x140D43830
#define __CommandList_x                                            0x140D43A60
#define __ScreenMode_x                                             0x140DCB514
#define __gWorld_x                                                 0x140E7E558
#define __gpbCommandEvent_x                                        0x140E7C028
#define __ServerHost_x                                             0x140E7C208
#define __Guilds_x                                                 0x140E82660
#define __MemCheckBitmask_x                                        0x140E83FEF
#define __MemCheckActive_x                                         0x140E8570D
#define __MouseEventTime_x                                         0x140EF9080
#define DI8__MouseState_x                                          0x140EFD248
#define __heqmain_x                                                0x140EFF6D8
#define DI8__Mouse_x                                               0x140EFF6F0
#define __HWnd_x                                                   0x140EFF6F8
#define __Mouse_x                                                  0x140EFF700
#define DI8__Keyboard_x                                            0x140EFF720
#define __LoginName_x                                              0x140EFFE8C
#define __CurrentMapLabel_x                                        0x140F139A0
#define __LabelCache_x                                             0x140F14570
#define __ChatFilterDefs_x                                         0x140A52AA0
#define Teleport_Table_Size_x                                      0x140E7C0B0
#define Teleport_Table_x                                           0x140E7C530

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E7E9F0
#define pinstActiveBanker_x                                        0x140E7BF60
#define pinstActiveCorpse_x                                        0x140E7BF50
#define pinstActiveGMaster_x                                       0x140E7BF58
#define pinstActiveMerchant_x                                      0x140E7BF48
#define pinstAltAdvManager_x                                       0x140DCC200
#define pinstCEverQuest_x                                          0x140EFF738
#define pinstCamActor_x                                            0x140DCB500
#define pinstCDBStr_x                                              0x140DCAFB0
#define pinstCDisplay_x                                            0x140E7C010
#define pinstControlledPlayer_x                                    0x140E7BFF0
#define pinstCResolutionHandler_x                                  0x140F24DA8
#define pinstCSidlManager_x                                        0x140F25B10
#define pinstCXWndManager_x                                        0x140F25B08
#define instDynamicZone_x                                          0x140E82520 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E8256E
#define instExpeditionName_x                                       0x140E825AE
#define pinstDZMember_x                                            0x140E82638
#define pinstDZTimerInfo_x                                         0x140E82640
#define pinstEqLogin_x                                             0x140EFF7D0
#define instTribute_x                                              0x140D3DDC0
#define pinstDeviceInputProxy_x                                    0x140E83B0C
#define pinstEQSoundManager_x                                      0x140DCC580
#define pinstEQSpellStrings_x                                      0x140DAFB40
#define pinstSGraphicsEngine_x                                     0x140F24B38
#define pinstLocalPC_x                                             0x140E7E568
#define pinstLocalPlayer_x                                         0x140E7BF40
#define pinstCMercenaryClientManager_x                             0x140EFA9B8
#define pinstModelPlayer_x                                         0x140E7BF70
#define pinstRenderInterface_x                                     0x140F24B50
#define pinstSkillMgr_x                                            0x140EFC668
#define pinstSpawnManager_x                                        0x140EFAD70
#define pinstSpellManager_x                                        0x140EFC6D0
#define pinstStringTable_x                                         0x140E7E5E0
#define pinstSwitchManager_x                                       0x140E7BEB0
#define pinstTarget_x                                              0x140E7BFE8
#define pinstTaskMember_x                                          0x140D3DDB0 // Part of g_taskManager
#define pinstTradeTarget_x                                         0x140E7BF68
#define instTributeActive_x                                        0x140D3DDE9
#define pinstViewActor_x                                           0x140DCB4F8
#define pinstWorldData_x                                           0x140E7BF38
#define pinstPlayerPath_x                                          0x140EFAD98
#define pinstTargetIndicator_x                                     0x140EFC780
#define EQObject_Top_x                                             0x140E7C018

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140F10B00
#define pinstCContainerMgr_x                                       0x140DCB5A0
#define pinstCContextMenuManager_x                                 0x140F257F0
#define pinstCInvSlotMgr_x                                         0x140DCB580
#define pinstCItemDisplayManager_x                                 0x140F13570
#define pinstCPopupWndManager_x                                    0x140F13E00
#define pinstCSpellDisplayMgr_x                                    0x140F14450
#define pinstCTaskManager_x                                        0x140C06CF0
#define pinstEQSuiteTextureLoader_x                                0x140D546C0
#define pinstItemIconCache_x                                       0x140F10E60
#define pinstLootFiltersManager_x                                  0x140DCA9F8
#define pinstGFViewListener_x                                      0x140F24FC8


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x140253110
#define __CastRay_x                                                0x14024B310
#define __CastRay2_x                                               0x14024B010
#define __compress_block_x                                         0x14054DE10
#define __ConvertItemTags_x                                        0x14024B770
#define __CleanItemTags_x                                          0x14008A7C0
#define __CreateCascadeMenuItems_x                                 0x140192CB0
#define __decompress_block_x                                       0x140594260
#define __DoesFileExist_x                                          0x14059C940
#define __EQGetTime_x                                              0x140599030
#define __ExecuteCmd_x                                             0x140220410
#define __FixHeading_x                                             0x140653750
#define __FlushDxKeyboard_x                                        0x14034C610
#define __get_bearing_x                                            0x140255340
#define __get_melee_range_x                                        0x140255430
#define __GetAnimationCache_x                                      0x1403CFBC0
#define __GetGaugeValueFromEQ_x                                    0x14050D6A0
#define __GetLabelFromEQ_x                                         0x14050ECA0
#define __GetXTargetType_x                                         0x140655950   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x1406537D0
#define __HelpPath_x                                               0x140EF8F48   // Why?
#define __NewUIINI_x                                               0x14051A6E0   // Why?
#define __ProcessDeviceEvents_x                                    0x140295EB0
#define __ProcessGameEvents_x                                      0x14028A8B0
#define __ProcessKeyboardEvents_x                                  0x14034DD60
#define __ProcessMouseEvents_x                                     0x14028C000
#define __SaveColors_x                                             0x1401A2BA0
#define __STMLToText_x                                             0x1405AC7C0
#define __WndProc_x                                                0x14034ADB0
#define CMemoryMappedFile__SetFile_x                               0x140802350
#define DrawNetStatus_x                                            0x1402D7370
#define Util__FastTime_x                                           0x140598530
#define __eq_delete_x                                              0x1406CE2F8
#define __eq_new_x                                                 0x1406CE550
#define __CopyLayout_x                                             0x1402C4320
#define __ThrottleFrameRate_x                                      0x140279B97
#define __ThrottleFrameRateEnd_x                                   0x140279B9D

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x14035D5B0
#define CAAWnd__Update_x                                           0x14035D8B0
#define CAAWnd__UpdateSelected_x                                   0x14035EAB0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AE7D0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A71B0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140859A10
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AF100

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401ADE90
#define AltAdvManager__IsAbilityReady_x                            0x1401AE330
#define AltAdvManager__GetAAById_x                                 0x1401AD730
#define AltAdvManager__CanTrainAbility_x                           0x1401AD530
#define AltAdvManager__CanSeeAbility_x                             0x1401AD1E0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D5F90
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D6E50
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D70A0
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400EB3E0
#define CharacterZoneClient__CanUseItem_x                          0x1400EB9A0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D7A70
#define CharacterZoneClient__CastSpell_x                           0x1400D7B10
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E78A0
#define CharacterZoneClient__Cur_HP_x                              0x1400ED0E0
#define CharacterZoneClient__Cur_Mana_x                            0x1400ED2A0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400DAD80
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F39C0
#define CharacterZoneClient__GetBaseSkill_x                        0x140101F10  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400DC220
#define CharacterZoneClient__GetCurrentMod_x                       0x1400EACE0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F5250
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F4140
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400DC3A0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400CBB40
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400CDA10
#define CharacterZoneClient__GetHPRegen_x                          0x1400F4870
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400ECD30
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F3A60
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400DC420
#define CharacterZoneClient__GetManaRegen_x                        0x1400F60E0
#define CharacterZoneClient__GetModCap_x                           0x1400FD6C0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400DC6B0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400DC880
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400D10A0
#define CharacterZoneClient__HasSkill_x                            0x1400F9200
#define CharacterZoneClient__HitBySpell_x                          0x1400DD310
#define CharacterZoneClient__IsStackBlocked_x                      0x1400E0CE0
#define CharacterZoneClient__MakeMeVisible_x                       0x1400FD1A0
#define CharacterZoneClient__Max_Endurance_x                       0x1402F2180  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400FD4F0
#define CharacterZoneClient__Max_Mana_x                            0x1402F23A0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400FD950
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E4350
#define CharacterZoneClient__SpellDuration_x                       0x1400E5080
#define CharacterZoneClient__TotalEffect_x                         0x1400E6470
#define CharacterZoneClient__UseSkill_x                            0x140102E90


// CBankWnd
#define CBankWnd__WndNotification_x                                0x14037DBF0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140388820

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140384640
#define CBarterSearchWnd__UpdateInventoryList_x                    0x1403882A0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14038AF80

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AD8590

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403ADDD0
#define CChatWindowManager__InitContextMenu_x                      0x1403ADF60
#define CChatWindowManager__FreeChatWindow_x                       0x1403ACE20
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403B5F10
#define CChatWindowManager__CreateChatWindow_x                     0x1403AC860

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x14010B400

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403B6F60
#define CChatWindow__Clear_x                                       0x1403B7F10
#define CChatWindow__WndNotification_x                             0x1403B90F0
#define CChatWindow__AddHistory_x                                  0x1403B7A10

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405DA060
#define CContextMenu__RemoveMenuItem_x                             0x1405DA450
#define CContextMenu__RemoveAllMenuItems_x                         0x1405DA420
#define CContextMenu__CheckMenuItem_x                              0x1405DA290
#define CContextMenu__SetMenuItem_x                                0x1405DA470
#define CContextMenu__AddSeparator_x                               0x1405DA1D0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405CBF50
#define CContextMenuManager__RemoveMenu_x                          0x1405CC520
#define CContextMenuManager__PopupMenu_x                           0x1405CC270
#define CContextMenuManager__Flush_x                               0x1405CBFD0
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403C7590

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1406A8080
#define CChatService__GetFriendName_x                              0x1406A8090

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405BCC70
#define CComboWnd__Draw_x                                          0x1405BCD70
#define CComboWnd__GetCurChoice_x                                  0x1405BD050  // unused
#define CComboWnd__GetListRect_x                                   0x1405BD0F0
#define CComboWnd__InsertChoice_x                                  0x1405BD430
#define CComboWnd__SetColors_x                                     0x1405BD7C0
#define CComboWnd__SetChoice_x                                     0x1405BD780
#define CComboWnd__GetItemCount_x                                  0x1405BD0E0
#define CComboWnd__GetCurChoiceText_x                              0x1405BD090  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405BD020
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405BD4F0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403C5290
#define CContainerWnd__SetContainer_x                              0x140421260
#define CContainerWnd__vftable_x                                   0x1409ED8B8

// CDisplay
#define CDisplay__cameraType_x                                     0x140DCB214
#define CDisplay__ZoneMainUI_x                                     0x1405F4300
#define CDisplay__PreZoneMainUI_x                                  0x14019FAA0
#define CDisplay__CleanGameUI_x                                    0x140191D70
#define CDisplay__GetClickedActor_x                                0x140195F30
#define CDisplay__GetUserDefinedColor_x                            0x140196BA0
#define CDisplay__InitCharSelectUI_x                               0x140196E50
#define CDisplay__ReloadUI_x                                       0x1401A1DA0
#define CDisplay__RestartUI_x                                      0x1402049E0
#define CDisplay__WriteTextHD2_x                                   0x1401A8DB0
#define CDisplay__TrueDistance_x                                   0x1401A8A60
#define CDisplay__SetViewActor_x                                   0x1401A52D0
#define CDisplay__GetFloorHeight_x                                 0x140196190
#define CDisplay__ToggleScreenshotMode_x                           0x1401A8550
#define CDisplay__RealRender_World_x                               0x1401A1170

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405FE540
#define CEditWnd__DrawCaret_x                                      0x1405F0020  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405F04C0
#define CEditWnd__GetCaretPt_x                                     0x1405F0740  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405F0780
#define CEditWnd__GetDisplayString_x                               0x1405F09F0
#define CEditWnd__GetHorzOffset_x                                  0x1405F0C20
#define CEditWnd__GetLineForPrintableChar_x                        0x1405F0D70
#define CEditWnd__GetSelStartPt_x                                  0x1405F1050  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405F0EA0
#define CEditWnd__PointFromPrintableChar_x                         0x1405F1C00
#define CEditWnd__ReplaceSelection_x                               0x1405F1FB0
#define CEditWnd__SelectableCharFromPoint_x                        0x1405F2450
#define CEditWnd__SetEditable_x                                    0x1405F26D0
#define CEditWnd__SetWindowText_x                                  0x1405F2700

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14027AC60
#define CEverQuest__ClickedPlayer_x                                0x14026EE50
#define CEverQuest__CreateTargetIndicator_x                        0x14026F710
#define CEverQuest__DoTellWindow_x                                 0x14010B110 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x14010B9F0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14027C650
#define CEverQuest__dsp_chat_x                                     0x14010AB50 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402A7960
#define CEverQuest__Emote_x                                        0x14027D040
#define CEverQuest__GetBodyTypeDesc_x                              0x14027DE20
#define CEverQuest__GetClassDesc_x                                 0x14027DE80
#define CEverQuest__GetClassThreeLetterCode_x                      0x14027E250
#define CEverQuest__GetDeityDesc_x                                 0x14027E500
#define CEverQuest__GetLangDesc_x                                  0x14027E930
#define CEverQuest__GetRaceDesc_x                                  0x14027ECD0
#define CEverQuest__InterpretCmd_x                                 0x140280910
#define CEverQuest__LeftClickedOnPlayer_x                          0x140295F20
#define CEverQuest__LMouseUp_x                                     0x140282390
#define CEverQuest__RightClickedOnPlayer_x                         0x1402934D0
#define CEverQuest__RMouseUp_x                                     0x14028CB90
#define CEverQuest__SetGameState_x                                 0x1402989A0
#define CEverQuest__UPCNotificationFlush_x                         0x14029E320 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140281FF0
#define CEverQuest__ReportSuccessfulHeal_x                         0x14028DF60
#define CEverQuest__ReportSuccessfulHit_x                          0x14028ED80

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403DAB00

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C5320
#define CGuild__GetGuildName_x                                     0x1400C5360

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403FDE90

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402B99D0
#define CHotButton__SetCheck_x                                     0x1402B9CA0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140417E10
#define CInvSlotMgr__MoveItem_x                                    0x1404189A0
#define CInvSlotMgr__SelectSlot_x                                  0x14041ACE0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x140414BE0
#define CInvSlot__SliderComplete_x                                 0x140416410
#define CInvSlot__GetItemBase_x                                    0x140410250
#define CInvSlot__UpdateItem_x                                     0x1404168C0

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x14041CEF0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x14043E9C0
#define CItemDisplayWnd__UpdateStrings_x                           0x140441680
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x14043B1C0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x14043CAD0
#define CItemDisplayWnd__RequestConvertItem_x                      0x14043DDD0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x14050A130
#define CSpellDisplayWnd__UpdateStrings_x                          0x14050BEC0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140547170

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140437870

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140157DC0

// CLabel
#define CLabel__UpdateText_x                                       0x140448A80

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405C0600
#define CListWnd__dCListWnd_x                                      0x1405C0A50
#define CListWnd__vftable_x                                        0x140AD66E0
#define CListWnd__AddColumn_x                                      0x1405C10F0
#define CListWnd__AddColumn1_x                                     0x1405C1190
#define CListWnd__AddLine_x                                        0x1405C12F0
#define CListWnd__AddString_x                                      0x1405C1880
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405C1DF0
#define CListWnd__CalculateVSBRange_x                              0x1405C20D0
#define CListWnd__ClearSel_x                                       0x1405C2280
#define CListWnd__ClearAllSel_x                                    0x1405C2220
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405C22E0
#define CListWnd__Compare_x                                        0x1405C24A0
#define CListWnd__Draw_x                                           0x1405C2970
#define CListWnd__DrawColumnSeparators_x                           0x1405C3520
#define CListWnd__DrawHeader_x                                     0x1405C35E0
#define CListWnd__DrawItem_x                                       0x1405C3CB0
#define CListWnd__DrawLine_x                                       0x1405C4630
#define CListWnd__DrawSeparator_x                                  0x1405C4AF0
#define CListWnd__EnableLine_x                                     0x1405C4F10
#define CListWnd__EnsureVisible_x                                  0x1405C4F70
#define CListWnd__ExtendSel_x                                      0x1405C5070
#define CListWnd__GetColumnMinWidth_x                              0x1405C5400
#define CListWnd__GetColumnWidth_x                                 0x1405C5480
#define CListWnd__GetCurSel_x                                      0x1405C5580
#define CListWnd__GetItemData_x                                    0x1405C5900
#define CListWnd__GetItemHeight_x                                  0x1405C5940
#define CListWnd__GetItemRect_x                                    0x1405C5B60
#define CListWnd__GetItemText_x                                    0x1405C5E00
#define CListWnd__GetSelList_x                                     0x1405C6050
#define CListWnd__GetSeparatorRect_x                               0x1405C6240
#define CListWnd__InsertLine_x                                     0x1405C76B0
#define CListWnd__RemoveLine_x                                     0x1405C7D20
#define CListWnd__SetColors_x                                      0x1405C80E0
#define CListWnd__SetColumnJustification_x                         0x1405C8100
#define CListWnd__SetColumnLabel_x                                 0x1405C8180
#define CListWnd__SetColumnWidth_x                                 0x1405C8320
#define CListWnd__SetCurSel_x                                      0x1405C83F0
#define CListWnd__SetItemColor_x                                   0x1405C8660
#define CListWnd__SetItemData_x                                    0x1405C8700
#define CListWnd__SetItemText_x                                    0x1405C8940
#define CListWnd__Sort_x                                           0x1405C8D50
#define CListWnd__ToggleSel_x                                      0x1405C8EC0
#define CListWnd__SetColumnsSizable_x                              0x1405C8370
#define CListWnd__SetItemWnd_x                                     0x1405C8A70
#define CListWnd__GetItemWnd_x                                     0x1405C5FE0
#define CListWnd__SetItemIcon_x                                    0x1405C8740
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405C1BC0
#define CListWnd__SetVScrollPos_x                                  0x1405C8CB0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x14045BF70

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A3B2C8
#define MapViewMap__Clear_x                                        0x14045DAE0
#define MapViewMap__SetZoom_x                                      0x140464130
#define MapViewMap__HandleLButtonDown_x                            0x140460C70

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140485900  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x14048C210
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x14048C9E0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x1404902A0
#define CMerchantWnd__SelectBuySellSlot_x                          0x14048F5F0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x1404946D0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x140683650
#define CPacketScrambler__hton_x                                   0x140683640

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405E9910
#define CSidlManagerBase__FindAnimation1_x                         0x1405E9850
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405E9F40
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405E9CF0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405E8C50
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405E8BE0
#define CSidlManagerBase__CreateXWnd_x                             0x1405E8240

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404FD0A0
#define CSidlManager__CreateXWnd_x                                 0x1404FD260

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405AE2B0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x1405AE3D0
#define CSidlScreenWnd__ConvertToRes_x                             0x1405F8A70 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x1405AE550
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x1405AD9E0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x1405ADAB0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1405ADCC0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1405AEC40
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405AEE70
#define CSidlScreenWnd__GetChildItem_x                             0x1405AF010
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405AF260
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405B9240 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405AF5D0
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405AF940
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405B0200
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405B0BF0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F24E68
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405B1270
#define CSidlScreenWnd__StoreIniVis_x                              0x1405B1A60
#define CSidlScreenWnd__vftable_x                                  0x140AD5968
#define CSidlScreenWnd__WndNotification_x                          0x1405B1AB0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x140335670 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140335990 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x1403358C0
#define CSkillMgr__IsActivatedSkill_x                              0x140335D50
#define CSkillMgr__IsCombatSkill_x                                 0x140335D90
#define CSkillMgr__GetSkillTimerDuration_x                         0x140335CC0
#define CSkillMgr__GetSkillLastUsed_x                              0x140335910

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405C9840
#define CSliderWnd__SetValue_x                                     0x1405CA050
#define CSliderWnd__SetNumTicks_x                                  0x1405C9ED0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x140503860

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405CE9A0
#define CStmlWnd__CalculateHSBRange_x                              0x1405B8C50
#define CStmlWnd__CalculateVSBRange_x                              0x1405CF8C0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405D0330
#define CStmlWnd__ForceParseNow_x                                  0x1405D03D0
#define CStmlWnd__GetVisibleText_x                                 0x1405D0AA0
#define CStmlWnd__MakeStmlColorTag_x                               0x1405D2800
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405D2840
#define CStmlWnd__SetSTMLText_x                                    0x1405D9810
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405D99C0
#define CStmlWnd__UpdateHistoryString_x                            0x1405D9D50

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405CA600
#define CTabWnd__DrawCurrentPage_x                                 0x1405CA6A0
#define CTabWnd__DrawTab_x                                         0x1405CAA70
#define CTabWnd__GetTabRect_x                                      0x1405CB0E0
#define CTabWnd__InsertPage_x                                      0x1405CB3B0
#define CTabWnd__RemovePage_x                                      0x1405CB630
#define CTabWnd__SetPage_x                                         0x1405CB790
#define CTabWnd__UpdatePage_x                                      0x1405CBA90

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405F2B50
#define CPageWnd__SetTabText_x                                     0x1405F2BC0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BE890  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BECA0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405E1300
#define CTextureFont__DrawWrappedText1_x                           0x1405E1210
#define CTextureFont__DrawWrappedText2_x                           0x1405E1430
#define CTextureFont__GetTextExtent_x                              0x1405E17E0
#define CTextureFont__GetHeight_x                                  0x1405E17A0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405F71D0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405AAEA0

// CXStr
#define CXStr__gFreeLists_x                                        0x140D54030
#define CXStr__gCXStrAccess_x                                      0x140F249C8

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405B4320
#define CXWnd__ClrFocus_x                                          0x1405B4610
#define CXWnd__Destroy_x                                           0x1405B4790
#define CXWnd__DoAllDrawing_x                                      0x1405B4890
#define CXWnd__DrawColoredRect_x                                   0x1405B5050
#define CXWnd__DrawTooltip_x                                       0x1405B66A0
#define CXWnd__DrawTooltipAtPoint_x                                0x1405B6750
#define CXWnd__GetChildItem_x                                      0x1405B7050
#define CXWnd__GetChildWndAt_x                                     0x1405B7110
#define CXWnd__GetClientRect_x                                     0x1405B73B0
#define CXWnd__GetClientClipRect_x                                 0x1405B7270
#define CXWnd__GetRelativeRect_x                                   0x1405B8D70
#define CXWnd__GetScreenClipRect_x                                 0x1405B8E70
#define CXWnd__GetScreenRect_x                                     0x1405B8FE0
#define CXWnd__GetTooltipRect_x                                    0x1405B9150
#define CXWnd__IsActive_x                                          0x1405B9700
#define CXWnd__IsDescendantOf_x                                    0x1405B9730
#define CXWnd__IsReallyVisible_x                                   0x1405B97A0
#define CXWnd__IsType_x                                            0x1405B97F0
#define CXWnd__Minimize_x                                          0x1405B98F0
#define CXWnd__ProcessTransition_x                                 0x1405BA7B0
#define CXWnd__Resize_x                                            0x1405BA8C0
#define CXWnd__Right_x                                             0x1405BA960
#define CXWnd__SetFocus_x                                          0x1405BAD20
#define CXWnd__SetFont_x                                           0x1405BAD70
#define CXWnd__SetKeyTooltip_x                                     0x1405BAE80
#define CXWnd__SetMouseOver_x                                      0x1405BAFC0
#define CXWnd__SetParent_x                                         0x1405BB040
#define CXWnd__StartFade_x                                         0x1405BB470
#define CXWnd__vftable_x                                           0x140AD5F40
#define CXWnd__CXWnd_x                                             0x1405B2ED0
#define CXWnd__dCXWnd_x                                            0x1405B3820

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405FDCC0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405DB620
#define CXWndManager__DrawCursor_x                                 0x1405DB900
#define CXWndManager__DrawWindows_x                                0x1405DBB60
#define CXWndManager__GetKeyboardFlags_x                           0x1405DC1A0
#define CXWndManager__HandleKeyboardMsg_x                          0x1405DC1E0
#define CXWndManager__RemoveWnd_x                                  0x1405DF9D0

// CDBStr
#define CDBStr__GetString_x                                        0x14018FF20

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x14068D600

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D3830
#define CCharacterListWnd__EnterWorld_x                            0x1400D2840
#define CCharacterListWnd__Quit_x                                  0x1400D3810
#define CCharacterListWnd__UpdateList_x                            0x1400D4690

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x14065A660
#define ItemBase__CreateItemTagString_x                            0x14065B0E0
#define ItemBase__GetImageNum_x                                    0x14065D7E0
#define ItemBase__GetItemValue_x                                   0x14065F6C0
#define ItemBase__IsEmpty_x                                        0x1406613D0
#define ItemBase__IsKeyRingItem_x                                  0x140661AE0
#define ItemBase__ValueSellMerchant_x                              0x140665D00
#define ItemClient__CanDrop_x                                      0x1402BC2C0
#define ItemClient__CanGoInBag_x                                   0x1402BC3F0
#define ItemClient__CreateItemClient_x                             0x1402BC680
#define ItemClient__dItemClient_x                                  0x1402BC130

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401AF860
#define EQ_LoadingS__Array_x                                       0x140D402A0

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140671E00
#define PcBase__GetCombatAbility_x                                 0x140672500
#define PcBase__GetCombatAbilityTimer_x                            0x1406725A0
#define PcBase__GetItemContainedRealEstateIds_x                    0x140672D70
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x1406737E0
#define PcClient__AlertInventoryChanged_x                          0x1402DF610
#define PcClient__GetConLevel_x                                    0x1402DFD30  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402E2450
#define PcClient__HasLoreItem_x                                    0x1402E34D0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402EFDD0
#define PcZoneClient__RemoveMyAffect_x                             0x1402F32C0

// EQGroundItemListManager
#define EQGroundItem__EQGroundItem_x                               0x140224E10
#define EQGroundItemListManager__Add_x                             0x140224FC0
#define EQGroundItemListManager__Clear_x                           0x140225060
#define EQGroundItemListManager__Delete_x                          0x140225120
#define EQGroundItemListManager__Instance_x                        0x1402251B0

// EQPlacedItemManager
#define EQPlacedItemManager__Add_x                                 0x140260200

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14018A630

// PlayerClient
#define PlayerBase__CanSee_x                                       0x1406461D0
#define PlayerBase__CanSee1_x                                      0x1406462A0
#define PlayerBase__GetVisibilityLineSegment_x                     0x140646780
#define PlayerBase__HasProperty_x                                  0x140646950
#define PlayerBase__IsTargetable_x                                 0x140646A10
#define PlayerClient__ChangeBoneStringSprite_x                     0x140300F90
#define PlayerClient__GetPcClient_x                                0x140303AA0
#define PlayerClient__PlayerClient_x                               0x1402F92B0
#define PlayerClient__SetNameSpriteState_x                         0x1403071D0
#define PlayerClient__SetNameSpriteTint_x                          0x140308190
#define PlayerZoneClient__ChangeHeight_x                           0x140316BC0
#define PlayerZoneClient__DoAttack_x                               0x1403178D0
#define PlayerZoneClient__GetLevel_x                               0x14031B000
#define PlayerZoneClient__IsValidTeleport_x                        0x140262FA0
#define PlayerZoneClient__LegalPlayerRace_x                        0x14019E320

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1403100C0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x140310170  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x140310270
#define PlayerManagerClient__CreatePlayer_x                        0x14030FB90
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140645D90

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402C1840
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402C1170
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402C11E0
#define KeypressHandler__ClearCommandStateArray_x                  0x1402C17D0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402C1960
#define KeypressHandler__HandleKeyUp_x                             0x1402C1A80
#define KeypressHandler__SaveKeymapping_x                          0x1402C1660  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x14068B110  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x140684D90

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402E95C0  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402EDEE0
#define PcZoneClient__GetPcSkillLimit_x                            0x1402F0EC0
#define PcZoneClient__RemovePetEffect_x                            0x1402F35A0
#define PcZoneClient__HasAlternateAbility_x                        0x1402F1AB0
#define PcZoneClient__CanEquipItem_x                               0x1402EC1A0
#define PcZoneClient__GetItemByID_x                                0x1402EEE10
#define PcZoneClient__RemoveBuffEffect_x                           0x1402F3140
#define PcZoneClient__BandolierSwap_x                              0x1402DF6C0

// Doors
#define EQSwitch__UseSwitch_x                                      0x140267AE0

// IconCache
#define IconCache__GetIcon_x                                       0x1403CFBF0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403C4030
#define CContainerMgr__CloseContainer_x                            0x1403C3950
#define CContainerMgr__OpenExperimentContainer_x                   0x1403C43D0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404C0600

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402B3BF0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x14044FDA0
#define CLootWnd__RequestLootSlot_x                                0x140450DF0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401DF420
#define EQ_Spell__SpellAffects_x                                   0x1401E0700
#define EQ_Spell__SpellAffectBase_x                                0x1401E0660
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400DCA10
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400DC9C0
#define EQ_Spell__IsSPAStacking_x                                  0x1401E0330
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401DFEE0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401DF7A0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C3E20

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x14051DED0
#define CTargetWnd__RefreshTargetBuffs_x                           0x14051D5E0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x14051CDE0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1405255A0  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140187040
#define CTaskManager__GetTaskStatus_x                              0x140187150
#define CTaskManager__GetElementDescription_x                      0x140186CD0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401DD740
#define EqSoundManager__PlayScriptMp3_x                            0x1401DC580
#define EqSoundManager__SoundAssistPlay_x                          0x14033AAB0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x14033ADF0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405BC200
#define CTextureAnimation__SetCurCell_x                            0x1405BC510

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402B1DF0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1406A57F0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1406A5870
#define CharacterBase__IsExpansionFlag_x                           0x140204040

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x14039EEE0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x14039F950
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x1403A0EA0

// messages
#define msg_spell_worn_off_x                                       0x14021B140
#define msg_new_text_x                                             0x140216900
#define __msgTokenTextParam_x                                      0x14020DD90
#define msgTokenText_x                                             0x14020DCA0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x14033C710
#define SpellManager__GetSpellByGroupAndRank_x                     0x14033C610

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140655D30

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1404491D0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403C8DC0
#define CCursorAttachment__IsOkToActivate_x                        0x1403CC240
#define CCursorAttachment__RemoveAttachment_x                      0x1403CC4F0
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405F5670
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405F5860
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405F5870

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140152730
#define CFindItemWnd__Update_x                                     0x1401530F0
#define CFindItemWnd__PickupSelectedItem_x                         0x14014BF20

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14015CEE0
#define LootFiltersManager__GetItemFilterData_x                    0x14015D9F0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14015E290
#define LootFiltersManager__SetItemLootFilter_x                    0x14015E540

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x1404A2DD0

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x140335230
#define CResolutionHandler__UpdateResolution_x                     0x1405A1660

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403C0300

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406A9C00  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406A9AF0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403E6CE0
#define CGroupWnd__UpdateDisplay_x                                 0x1403E68C0

// ItemBase
#define ItemBase__IsLore_x                                         0x140661C20
#define ItemBase__IsLoreEquipped_x                                 0x140661CB0

#define MultipleItemMoveManager__ProcessMove_x                     0x1402D5170

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140260360
#define EQPlacedItemManager__GetItemByGuid_x                       0x1402602F0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140260330

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14032F550

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140128E40
#define FactionManagerClient__HandleFactionMessage_x               0x140129220
#define FactionManagerClient__GetFactionStanding_x                 0x140128610
#define FactionManagerClient__GetMaxFaction_x                      0x140128610
#define FactionManagerClient__GetMinFaction_x                      0x1401284C0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400B0DE0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x1401346F0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401B8460
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401B7620
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401B8280  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401B8200  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x1403419F0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14032F550

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405B20A0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140086E80

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140353110

// AchievementManager
#define AchievementManager__Instance_x                             0x14008FF90

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x14068E180
#define FreeToPlayClient__RestrictionInfo_x                        0x140AEA8D0

// UdpConnection
#define UdpConnection__GetStats_x                                  0x140554230

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x140840068
#define CGFScreenWnd__CGFScreenWnd_x                               0x140071550
#define CGFScreenWnd__CGFScreenWnd1_x                              0x1400716E0
#define CGFScreenWnd__dCGFScreenWnd_x                              0x140071890

#if __has_include("../../../../private/eqgame-private.h")
#include "../../../../private/eqgame-private.h"
#endif
