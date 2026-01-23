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

#define __ClientDate                                               20260122u
#define __ExpectedVersionDate                                     "Jan 22 2026"
#define __ExpectedVersionTime                                     "16:01:28"
#define __ActualVersionDate_x                                      0x140978968
#define __ActualVersionTime_x                                      0x140978958
#define __ActualVersionBuild_x                                     0x14090DAF0

// Memory Protection
#define __MemChecker0_x                                            0x1402C7960
#define __MemChecker1_x                                            0x1405988C0
#define __MemChecker4_x                                            0x140295340
#define __EncryptPad0_x                                            0x140D4AFA0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E83AB0
#define instEQZoneInfo_x                                           0x140E83CA4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x140228970
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
#define __allowslashcommand_x                                      0x140252C20
#define __CastRay_x                                                0x14024AE10
#define __CastRay2_x                                               0x14024AB10
#define __compress_block_x                                         0x14054DC60
#define __ConvertItemTags_x                                        0x14024B270
#define __CleanItemTags_x                                          0x14008A7C0
#define __CreateCascadeMenuItems_x                                 0x140192C50
#define __decompress_block_x                                       0x1405940A0
#define __DoesFileExist_x                                          0x14059C780
#define __EQGetTime_x                                              0x140598E70
#define __ExecuteCmd_x                                             0x14021FF00
#define __FixHeading_x                                             0x140653150
#define __FlushDxKeyboard_x                                        0x14034C180
#define __get_bearing_x                                            0x140254E50
#define __get_melee_range_x                                        0x140254F40
#define __GetAnimationCache_x                                      0x1403CFB20
#define __GetGaugeValueFromEQ_x                                    0x14050D4A0
#define __GetLabelFromEQ_x                                         0x14050EA90
#define __GetXTargetType_x                                         0x140655350   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x1406531D0
#define __HelpPath_x                                               0x140EF8F48   // Why?
#define __NewUIINI_x                                               0x14051A4C0   // Why?
#define __ProcessDeviceEvents_x                                    0x140295950
#define __ProcessGameEvents_x                                      0x14028A360
#define __ProcessKeyboardEvents_x                                  0x14034D8D0
#define __ProcessMouseEvents_x                                     0x14028BAA0
#define __SaveColors_x                                             0x1401A2B40
#define __STMLToText_x                                             0x1405AC600
#define __WndProc_x                                                0x14034A920
#define CMemoryMappedFile__SetFile_x                               0x140801B50
#define DrawNetStatus_x                                            0x1402D6E00
#define Util__FastTime_x                                           0x140598370
#define __eq_delete_x                                              0x1406CDB08
#define __eq_new_x                                                 0x1406CDD60
#define __CopyLayout_x                                             0x1402C3D70
#define __ThrottleFrameRate_x                                      0x140279647
#define __ThrottleFrameRateEnd_x                                   0x14027964D

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x14035D410
#define CAAWnd__Update_x                                           0x14035D710
#define CAAWnd__UpdateSelected_x                                   0x14035E900

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AE7C0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A71A0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140859A10
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AF0F0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401ADE20
#define AltAdvManager__IsAbilityReady_x                            0x1401AE2C0
#define AltAdvManager__GetAAById_x                                 0x1401AD6C0
#define AltAdvManager__CanTrainAbility_x                           0x1401AD4C0
#define AltAdvManager__CanSeeAbility_x                             0x1401AD170

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D5FB0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D6E70
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D70C0
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400EB3E0
#define CharacterZoneClient__CanUseItem_x                          0x1400EB9A0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D7A90
#define CharacterZoneClient__CastSpell_x                           0x1400D7B30
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E78A0
#define CharacterZoneClient__Cur_HP_x                              0x1400ED0E0
#define CharacterZoneClient__Cur_Mana_x                            0x1400ED2A0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400DADA0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F39C0
#define CharacterZoneClient__GetBaseSkill_x                        0x140101F10  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400DC240
#define CharacterZoneClient__GetCurrentMod_x                       0x1400EACE0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F5250
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F4140
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400DC3C0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400CBB60
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400CDA30
#define CharacterZoneClient__GetHPRegen_x                          0x1400F4870
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400ECD30
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F3A60
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400DC440
#define CharacterZoneClient__GetManaRegen_x                        0x1400F60E0
#define CharacterZoneClient__GetModCap_x                           0x1400FD6C0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400DC6D0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400DC8A0
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400D10C0
#define CharacterZoneClient__HasSkill_x                            0x1400F9200
#define CharacterZoneClient__HitBySpell_x                          0x1400DD330
#define CharacterZoneClient__IsStackBlocked_x                      0x1400E0D00
#define CharacterZoneClient__MakeMeVisible_x                       0x1400FD1A0
#define CharacterZoneClient__Max_Endurance_x                       0x1402F1B90  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400FD4F0
#define CharacterZoneClient__Max_Mana_x                            0x1402F1DB0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400FD950
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E4350
#define CharacterZoneClient__SpellDuration_x                       0x1400E5080
#define CharacterZoneClient__TotalEffect_x                         0x1400E6470
#define CharacterZoneClient__UseSkill_x                            0x140102E90


// CBankWnd
#define CBankWnd__WndNotification_x                                0x14037DAA0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x1403886D0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x1403844E0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x140388150

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14038AE40

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AD8590

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403ADCC0
#define CChatWindowManager__InitContextMenu_x                      0x1403ADE50
#define CChatWindowManager__FreeChatWindow_x                       0x1403ACD10
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403B5E10
#define CChatWindowManager__CreateChatWindow_x                     0x1403AC740

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x14010B410

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403B6E60
#define CChatWindow__Clear_x                                       0x1403B7E10
#define CChatWindow__WndNotification_x                             0x1403B8FE0
#define CChatWindow__AddHistory_x                                  0x1403B7910

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405D9BC0
#define CContextMenu__RemoveMenuItem_x                             0x1405D9FA0
#define CContextMenu__RemoveAllMenuItems_x                         0x1405D9F70
#define CContextMenu__CheckMenuItem_x                              0x1405D9DE0
#define CContextMenu__SetMenuItem_x                                0x1405D9FC0
#define CContextMenu__AddSeparator_x                               0x1405D9D20

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405CBB40
#define CContextMenuManager__RemoveMenu_x                          0x1405CC110
#define CContextMenuManager__PopupMenu_x                           0x1405CBE60
#define CContextMenuManager__Flush_x                               0x1405CBBC0
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403C74C0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1406A7890
#define CChatService__GetFriendName_x                              0x1406A78A0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405BC9A0
#define CComboWnd__Draw_x                                          0x1405BCA90
#define CComboWnd__GetCurChoice_x                                  0x1405BCD60  // unused
#define CComboWnd__GetListRect_x                                   0x1405BCE00
#define CComboWnd__InsertChoice_x                                  0x1405BD120
#define CComboWnd__SetColors_x                                     0x1405BD4B0
#define CComboWnd__SetChoice_x                                     0x1405BD470
#define CComboWnd__GetItemCount_x                                  0x1405BCDF0
#define CComboWnd__GetCurChoiceText_x                              0x1405BCDA0  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405BCD30
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405BD1E0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403C51A0
#define CContainerWnd__SetContainer_x                              0x1404211C0
#define CContainerWnd__vftable_x                                   0x1409ED8B8

// CDisplay
#define CDisplay__cameraType_x                                     0x140DCB214
#define CDisplay__ZoneMainUI_x                                     0x1405F3D70
#define CDisplay__PreZoneMainUI_x                                  0x14019FA40
#define CDisplay__CleanGameUI_x                                    0x140191D10
#define CDisplay__GetClickedActor_x                                0x140195ED0
#define CDisplay__GetUserDefinedColor_x                            0x140196B40
#define CDisplay__InitCharSelectUI_x                               0x140196DF0
#define CDisplay__ReloadUI_x                                       0x1401A1D40
#define CDisplay__RestartUI_x                                      0x1402044F0
#define CDisplay__WriteTextHD2_x                                   0x1401A8D50
#define CDisplay__TrueDistance_x                                   0x1401A8A00
#define CDisplay__SetViewActor_x                                   0x1401A5270
#define CDisplay__GetFloorHeight_x                                 0x140196130
#define CDisplay__ToggleScreenshotMode_x                           0x1401A84F0
#define CDisplay__RealRender_World_x                               0x1401A1110

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405FDFB0
#define CEditWnd__DrawCaret_x                                      0x1405EFA80  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405EFF10
#define CEditWnd__GetCaretPt_x                                     0x1405F0180  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405F01C0
#define CEditWnd__GetDisplayString_x                               0x1405F0420
#define CEditWnd__GetHorzOffset_x                                  0x1405F0660
#define CEditWnd__GetLineForPrintableChar_x                        0x1405F07A0
#define CEditWnd__GetSelStartPt_x                                  0x1405F0A80  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405F08D0
#define CEditWnd__PointFromPrintableChar_x                         0x1405F16B0
#define CEditWnd__ReplaceSelection_x                               0x1405F1A50
#define CEditWnd__SelectableCharFromPoint_x                        0x1405F1EF0
#define CEditWnd__SetEditable_x                                    0x1405F2170
#define CEditWnd__SetWindowText_x                                  0x1405F21A0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14027A710
#define CEverQuest__ClickedPlayer_x                                0x14026E950
#define CEverQuest__CreateTargetIndicator_x                        0x14026F210
#define CEverQuest__DoTellWindow_x                                 0x14010B120 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x14010BA00 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14027C100
#define CEverQuest__dsp_chat_x                                     0x14010AB60 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402A7400
#define CEverQuest__Emote_x                                        0x14027CAF0
#define CEverQuest__GetBodyTypeDesc_x                              0x14027D8D0
#define CEverQuest__GetClassDesc_x                                 0x14027D930
#define CEverQuest__GetClassThreeLetterCode_x                      0x14027DD00
#define CEverQuest__GetDeityDesc_x                                 0x14027DFB0
#define CEverQuest__GetLangDesc_x                                  0x14027E3E0
#define CEverQuest__GetRaceDesc_x                                  0x14027E780
#define CEverQuest__InterpretCmd_x                                 0x1402803C0
#define CEverQuest__LeftClickedOnPlayer_x                          0x1402959C0
#define CEverQuest__LMouseUp_x                                     0x140281E40
#define CEverQuest__RightClickedOnPlayer_x                         0x140292F70
#define CEverQuest__RMouseUp_x                                     0x14028C630
#define CEverQuest__SetGameState_x                                 0x140298440
#define CEverQuest__UPCNotificationFlush_x                         0x14029DDC0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140281AA0
#define CEverQuest__ReportSuccessfulHeal_x                         0x14028DA00
#define CEverQuest__ReportSuccessfulHit_x                          0x14028E820

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403DAA50

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C5370
#define CGuild__GetGuildName_x                                     0x1400C53B0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403FDEC0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402B9470
#define CHotButton__SetCheck_x                                     0x1402B9740

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140417DE0
#define CInvSlotMgr__MoveItem_x                                    0x140418970
#define CInvSlotMgr__SelectSlot_x                                  0x14041AC70

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x140414BE0
#define CInvSlot__SliderComplete_x                                 0x140416410
#define CInvSlot__GetItemBase_x                                    0x140410250
#define CInvSlot__UpdateItem_x                                     0x1404168D0

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x14041CE80

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x14043E770
#define CItemDisplayWnd__UpdateStrings_x                           0x140441400
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x14043AFE0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x14043C8C0
#define CItemDisplayWnd__RequestConvertItem_x                      0x14043DB90

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x140509F10
#define CSpellDisplayWnd__UpdateStrings_x                          0x14050BCA0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140546FC0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1404376C0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140157DC0

// CLabel
#define CLabel__UpdateText_x                                       0x140448800

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405C02F0
#define CListWnd__dCListWnd_x                                      0x1405C0730
#define CListWnd__vftable_x                                        0x140AD66E0
#define CListWnd__AddColumn_x                                      0x1405C0DD0
#define CListWnd__AddColumn1_x                                     0x1405C0E70
#define CListWnd__AddLine_x                                        0x1405C0FD0
#define CListWnd__AddString_x                                      0x1405C1560
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405C1AD0
#define CListWnd__CalculateVSBRange_x                              0x1405C1DB0
#define CListWnd__ClearSel_x                                       0x1405C1F50
#define CListWnd__ClearAllSel_x                                    0x1405C1EF0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405C1FB0
#define CListWnd__Compare_x                                        0x1405C2170
#define CListWnd__Draw_x                                           0x1405C2640
#define CListWnd__DrawColumnSeparators_x                           0x1405C31C0
#define CListWnd__DrawHeader_x                                     0x1405C3280
#define CListWnd__DrawItem_x                                       0x1405C3940
#define CListWnd__DrawLine_x                                       0x1405C42B0
#define CListWnd__DrawSeparator_x                                  0x1405C4760
#define CListWnd__EnableLine_x                                     0x1405C4B70
#define CListWnd__EnsureVisible_x                                  0x1405C4BD0
#define CListWnd__ExtendSel_x                                      0x1405C4CC0
#define CListWnd__GetColumnMinWidth_x                              0x1405C5050
#define CListWnd__GetColumnWidth_x                                 0x1405C50D0
#define CListWnd__GetCurSel_x                                      0x1405C51D0
#define CListWnd__GetItemData_x                                    0x1405C5540
#define CListWnd__GetItemHeight_x                                  0x1405C5580
#define CListWnd__GetItemRect_x                                    0x1405C57A0
#define CListWnd__GetItemText_x                                    0x1405C5A30
#define CListWnd__GetSelList_x                                     0x1405C5C80
#define CListWnd__GetSeparatorRect_x                               0x1405C5E70
#define CListWnd__InsertLine_x                                     0x1405C72B0
#define CListWnd__RemoveLine_x                                     0x1405C7920
#define CListWnd__SetColors_x                                      0x1405C7CE0
#define CListWnd__SetColumnJustification_x                         0x1405C7D00
#define CListWnd__SetColumnLabel_x                                 0x1405C7D80
#define CListWnd__SetColumnWidth_x                                 0x1405C7F20
#define CListWnd__SetCurSel_x                                      0x1405C7FF0
#define CListWnd__SetItemColor_x                                   0x1405C8260
#define CListWnd__SetItemData_x                                    0x1405C8300
#define CListWnd__SetItemText_x                                    0x1405C8540
#define CListWnd__Sort_x                                           0x1405C8950
#define CListWnd__ToggleSel_x                                      0x1405C8AC0
#define CListWnd__SetColumnsSizable_x                              0x1405C7F70
#define CListWnd__SetItemWnd_x                                     0x1405C8670
#define CListWnd__GetItemWnd_x                                     0x1405C5C10
#define CListWnd__SetItemIcon_x                                    0x1405C8340
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405C18A0
#define CListWnd__SetVScrollPos_x                                  0x1405C88B0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x14045BD10

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A3B2C8
#define MapViewMap__Clear_x                                        0x14045D880
#define MapViewMap__SetZoom_x                                      0x140463ED0
#define MapViewMap__HandleLButtonDown_x                            0x140460A10

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x1404856A0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x14048BFC0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x14048C7A0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140490080
#define CMerchantWnd__SelectBuySellSlot_x                          0x14048F3C0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x1404944B0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x140682E60
#define CPacketScrambler__hton_x                                   0x140682E50

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405E9380
#define CSidlManagerBase__FindAnimation1_x                         0x1405E92C0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405E99B0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405E9760
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405E86C0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405E8650
#define CSidlManagerBase__CreateXWnd_x                             0x1405E7CB0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404FCE70
#define CSidlManager__CreateXWnd_x                                 0x1404FD030

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405AE0F0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x1405AE200
#define CSidlScreenWnd__ConvertToRes_x                             0x1405F84E0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x1405AE370
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x1405AD820
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x1405AD8F0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1405ADB00
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1405AEA60
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405AEC90
#define CSidlScreenWnd__GetChildItem_x                             0x1405AEE20
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405AF070
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405B9000 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405AF3E0
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405AF750
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405B0000
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405B09F0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F24E68
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405B1050
#define CSidlScreenWnd__StoreIniVis_x                              0x1405B1840
#define CSidlScreenWnd__vftable_x                                  0x140AD5968
#define CSidlScreenWnd__WndNotification_x                          0x1405B1890

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x1403351E0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140335500 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x140335430
#define CSkillMgr__IsActivatedSkill_x                              0x1403358C0
#define CSkillMgr__IsCombatSkill_x                                 0x140335900
#define CSkillMgr__GetSkillTimerDuration_x                         0x140335830
#define CSkillMgr__GetSkillLastUsed_x                              0x140335480

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405C9430
#define CSliderWnd__SetValue_x                                     0x1405C9C40
#define CSliderWnd__SetNumTicks_x                                  0x1405C9AC0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x140503640

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405CE590
#define CStmlWnd__CalculateHSBRange_x                              0x1405B89F0
#define CStmlWnd__CalculateVSBRange_x                              0x1405CF4A0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405CFEE0
#define CStmlWnd__ForceParseNow_x                                  0x1405CFF80
#define CStmlWnd__GetVisibleText_x                                 0x1405D0640
#define CStmlWnd__MakeStmlColorTag_x                               0x1405D2370
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405D23B0
#define CStmlWnd__SetSTMLText_x                                    0x1405D9370
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405D9520
#define CStmlWnd__UpdateHistoryString_x                            0x1405D98B0

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405CA1F0
#define CTabWnd__DrawCurrentPage_x                                 0x1405CA290
#define CTabWnd__DrawTab_x                                         0x1405CA660
#define CTabWnd__GetTabRect_x                                      0x1405CACD0
#define CTabWnd__InsertPage_x                                      0x1405CAFA0
#define CTabWnd__RemovePage_x                                      0x1405CB220
#define CTabWnd__SetPage_x                                         0x1405CB380
#define CTabWnd__UpdatePage_x                                      0x1405CB680

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405F25F0
#define CPageWnd__SetTabText_x                                     0x1405F2660

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BE8E0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BECF0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405E0D60
#define CTextureFont__DrawWrappedText1_x                           0x1405E0C70
#define CTextureFont__DrawWrappedText2_x                           0x1405E0E90
#define CTextureFont__GetTextExtent_x                              0x1405E1240
#define CTextureFont__GetHeight_x                                  0x1405E1200

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405F6C40

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405AACE0

// CXStr
#define CXStr__gFreeLists_x                                        0x140D54030
#define CXStr__gCXStrAccess_x                                      0x140F249C8

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405B4110
#define CXWnd__ClrFocus_x                                          0x1405B4400
#define CXWnd__Destroy_x                                           0x1405B4580
#define CXWnd__DoAllDrawing_x                                      0x1405B4690
#define CXWnd__DrawColoredRect_x                                   0x1405B4E40
#define CXWnd__DrawTooltip_x                                       0x1405B64A0
#define CXWnd__DrawTooltipAtPoint_x                                0x1405B6550
#define CXWnd__GetChildItem_x                                      0x1405B6E50
#define CXWnd__GetChildWndAt_x                                     0x1405B6F10
#define CXWnd__GetClientRect_x                                     0x1405B71B0
#define CXWnd__GetClientClipRect_x                                 0x1405B7060
#define CXWnd__GetRelativeRect_x                                   0x1405B8B30
#define CXWnd__GetScreenClipRect_x                                 0x1405B8C40
#define CXWnd__GetScreenRect_x                                     0x1405B8D90
#define CXWnd__GetTooltipRect_x                                    0x1405B8F00
#define CXWnd__IsActive_x                                          0x1405B94C0
#define CXWnd__IsDescendantOf_x                                    0x1405B94F0
#define CXWnd__IsReallyVisible_x                                   0x1405B9560
#define CXWnd__IsType_x                                            0x1405B95B0
#define CXWnd__Minimize_x                                          0x1405B96B0
#define CXWnd__ProcessTransition_x                                 0x1405BA550
#define CXWnd__Resize_x                                            0x1405BA660
#define CXWnd__Right_x                                             0x1405BA700
#define CXWnd__SetFocus_x                                          0x1405BAAB0
#define CXWnd__SetFont_x                                           0x1405BAB00
#define CXWnd__SetKeyTooltip_x                                     0x1405BABF0
#define CXWnd__SetMouseOver_x                                      0x1405BAD30
#define CXWnd__SetParent_x                                         0x1405BADB0
#define CXWnd__StartFade_x                                         0x1405BB1E0
#define CXWnd__vftable_x                                           0x140AD5F40
#define CXWnd__CXWnd_x                                             0x1405B2CB0
#define CXWnd__dCXWnd_x                                            0x1405B3600

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405FD730

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405DB170
#define CXWndManager__DrawCursor_x                                 0x1405DB450
#define CXWndManager__DrawWindows_x                                0x1405DB6B0
#define CXWndManager__GetKeyboardFlags_x                           0x1405DBD00
#define CXWndManager__HandleKeyboardMsg_x                          0x1405DBD40
#define CXWndManager__RemoveWnd_x                                  0x1405DF440

// CDBStr
#define CDBStr__GetString_x                                        0x14018FEC0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x14068CE10

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D3850
#define CCharacterListWnd__EnterWorld_x                            0x1400D2860
#define CCharacterListWnd__Quit_x                                  0x1400D3830
#define CCharacterListWnd__UpdateList_x                            0x1400D46B0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x14065A0B0
#define ItemBase__CreateItemTagString_x                            0x14065AB40
#define ItemBase__GetImageNum_x                                    0x14065D290
#define ItemBase__GetItemValue_x                                   0x14065ED60
#define ItemBase__IsEmpty_x                                        0x140660AF0
#define ItemBase__IsKeyRingItem_x                                  0x140661220
#define ItemBase__ValueSellMerchant_x                              0x1406654D0
#define ItemClient__CanDrop_x                                      0x1402BBD30
#define ItemClient__CanGoInBag_x                                   0x1402BBE60
#define ItemClient__CreateItemClient_x                             0x1402BC0F0
#define ItemClient__dItemClient_x                                  0x1402BBBA0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401AF7F0
#define EQ_LoadingS__Array_x                                       0x140D402A0

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x1406715F0
#define PcBase__GetCombatAbility_x                                 0x140671CF0
#define PcBase__GetCombatAbilityTimer_x                            0x140671D90
#define PcBase__GetItemContainedRealEstateIds_x                    0x140672560
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x140672FD0
#define PcClient__AlertInventoryChanged_x                          0x1402DF0B0
#define PcClient__GetConLevel_x                                    0x1402DF7D0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402E1EF0
#define PcClient__HasLoreItem_x                                    0x1402E2F70
#define PcZoneClient__GetItemRecastTimer_x                         0x1402EF830
#define PcZoneClient__RemoveMyAffect_x                             0x1402F2CD0

// EQGroundItemListManager
#define EQGroundItem__EQGroundItem_x                               0x140224900
#define EQGroundItemListManager__Add_x                             0x140224AB0
#define EQGroundItemListManager__Clear_x                           0x140224B50
#define EQGroundItemListManager__Delete_x                          0x140224C10
#define EQGroundItemListManager__Instance_x                        0x140224CA0

// EQPlacedItemManager
#define EQPlacedItemManager__Add_x                                 0x14025FD10

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14018A620

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140645C40
#define PlayerBase__CanSee1_x                                      0x140645D10
#define PlayerBase__GetVisibilityLineSegment_x                     0x1406461F0
#define PlayerBase__HasProperty_x                                  0x1406463C0
#define PlayerBase__IsTargetable_x                                 0x140646480
#define PlayerClient__ChangeBoneStringSprite_x                     0x140300990
#define PlayerClient__GetPcClient_x                                0x1403034A0
#define PlayerClient__PlayerClient_x                               0x1402F8CC0
#define PlayerClient__SetNameSpriteState_x                         0x140306BD0
#define PlayerClient__SetNameSpriteTint_x                          0x140307B90
#define PlayerZoneClient__ChangeHeight_x                           0x1403166C0
#define PlayerZoneClient__DoAttack_x                               0x1403173D0
#define PlayerZoneClient__GetLevel_x                               0x14031AB00
#define PlayerZoneClient__IsValidTeleport_x                        0x140262AA0
#define PlayerZoneClient__LegalPlayerRace_x                        0x14019E2C0

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x14030FBC0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x14030FC70  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x14030FD70
#define PlayerManagerClient__CreatePlayer_x                        0x14030F690
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140645800

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402C1290
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402C0BC0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402C0C30
#define KeypressHandler__ClearCommandStateArray_x                  0x1402C1220  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402C13B0
#define KeypressHandler__HandleKeyUp_x                             0x1402C14D0
#define KeypressHandler__SaveKeymapping_x                          0x1402C10B0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x14068A920  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1406845A0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402E9040  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402ED960
#define PcZoneClient__GetPcSkillLimit_x                            0x1402F08F0
#define PcZoneClient__RemovePetEffect_x                            0x1402F2FB0
#define PcZoneClient__HasAlternateAbility_x                        0x1402F14C0
#define PcZoneClient__CanEquipItem_x                               0x1402EBC20
#define PcZoneClient__GetItemByID_x                                0x1402EE880
#define PcZoneClient__RemoveBuffEffect_x                           0x1402F2B50
#define PcZoneClient__BandolierSwap_x                              0x1402DF160

// Doors
#define EQSwitch__UseSwitch_x                                      0x1402675E0

// IconCache
#define IconCache__GetIcon_x                                       0x1403CFB50

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403C3F30
#define CContainerMgr__CloseContainer_x                            0x1403C3850
#define CContainerMgr__OpenExperimentContainer_x                   0x1403C42D0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404C0430

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402B3690

// CLootWnd
#define CLootWnd__LootAll_x                                        0x14044FB30
#define CLootWnd__RequestLootSlot_x                                0x140450B80

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401DF3B0
#define EQ_Spell__SpellAffects_x                                   0x1401E0690
#define EQ_Spell__SpellAffectBase_x                                0x1401E05F0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400DCA30
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400DC9E0
#define EQ_Spell__IsSPAStacking_x                                  0x1401E02C0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401DFE70
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401DF730

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C3E70

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x14051DCB0
#define CTargetWnd__RefreshTargetBuffs_x                           0x14051D3C0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x14051CBC0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x140525380  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140187020
#define CTaskManager__GetTaskStatus_x                              0x140187130
#define CTaskManager__GetElementDescription_x                      0x140186CB0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401DD6D0
#define EqSoundManager__PlayScriptMp3_x                            0x1401DC510
#define EqSoundManager__SoundAssistPlay_x                          0x14033A620  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x14033A960  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405BBF30
#define CTextureAnimation__SetCurCell_x                            0x1405BC240

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402B1890

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1406A5000
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1406A5080
#define CharacterBase__IsExpansionFlag_x                           0x140203B50

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x14039EDB0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x14039F820
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x1403A0D70

// messages
#define msg_spell_worn_off_x                                       0x14021AC30
#define msg_new_text_x                                             0x1402163F0
#define __msgTokenTextParam_x                                      0x14020D890
#define msgTokenText_x                                             0x14020D7A0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x14033C280
#define SpellManager__GetSpellByGroupAndRank_x                     0x14033C180

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140655730

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140448F50

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403C8CF0
#define CCursorAttachment__IsOkToActivate_x                        0x1403CC190
#define CCursorAttachment__RemoveAttachment_x                      0x1403CC440
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405F50E0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405F52D0
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405F52E0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140152740
#define CFindItemWnd__Update_x                                     0x140153100
#define CFindItemWnd__PickupSelectedItem_x                         0x14014BF20

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14015CEE0
#define LootFiltersManager__GetItemFilterData_x                    0x14015DA00
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14015E2A0
#define LootFiltersManager__SetItemLootFilter_x                    0x14015E550

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x1404A2BC0

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x140334DA0
#define CResolutionHandler__UpdateResolution_x                     0x1405A14A0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403C01F0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406A9410  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406A9300  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403E6CF0
#define CGroupWnd__UpdateDisplay_x                                 0x1403E68D0

// ItemBase
#define ItemBase__IsLore_x                                         0x140661360
#define ItemBase__IsLoreEquipped_x                                 0x1406613F0

#define MultipleItemMoveManager__ProcessMove_x                     0x1402D4BF0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14025FE70
#define EQPlacedItemManager__GetItemByGuid_x                       0x14025FE00
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14025FE40

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14032F070

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140128E70
#define FactionManagerClient__HandleFactionMessage_x               0x140129250
#define FactionManagerClient__GetFactionStanding_x                 0x140128640
#define FactionManagerClient__GetMaxFaction_x                      0x140128640
#define FactionManagerClient__GetMinFaction_x                      0x1401284F0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400B0DD0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140134720

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401B83F0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401B75B0
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401B8210  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401B8190  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x140341560

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14032F070

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405B1E80

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140086E80

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140352F70

// AchievementManager
#define AchievementManager__Instance_x                             0x14008FF90

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x14068D990
#define FreeToPlayClient__RestrictionInfo_x                        0x140AEA8D0

// UdpConnection
#define UdpConnection__GetStats_x                                  0x140554070

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x140840068
#define CGFScreenWnd__CGFScreenWnd_x                               0x140071550
#define CGFScreenWnd__CGFScreenWnd1_x                              0x1400716E0
#define CGFScreenWnd__dCGFScreenWnd_x                              0x140071890

#if __has_include("../../../../private/eqgame-private.h")
#include "../../../../private/eqgame-private.h"
#endif
