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

#define __ClientDate                                               20250813u
#define __ExpectedVersionDate                                     "Aug 13 2025"
#define __ExpectedVersionTime                                     "17:15:27"
#define __ActualVersionDate_x                                      0x1409619E0
#define __ActualVersionTime_x                                      0x1409619D0
#define __ActualVersionBuild_x                                     0x1408F7490

// Memory Protection
#define __MemChecker0_x                                            0x1402BEC30
#define __MemChecker1_x                                            0x140585B50
#define __MemChecker4_x                                            0x14028C2C0
#define __EncryptPad0_x                                            0x140D31EA0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E6A8E0
#define instEQZoneInfo_x                                           0x140E6AAD4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x140220400
#define __gfMaxZoomCameraDistance_x                                0x1408F8708
#define __gfMaxCameraDistance_x                                    0x140A9FDF4
#define __CurrentSocial_x                                          0x140BED950 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D29720
#define g_eqCommandStates_x                                        0x140D2A790
#define __CommandList_x                                            0x140D2A9D0
#define __ScreenMode_x                                             0x140DB21EC
#define __gWorld_x                                                 0x140E62DA8
#define __gpbCommandEvent_x                                        0x140E63300
#define __ServerHost_x                                             0x140E634F8
#define __Guilds_x                                                 0x140E69490
#define __MemCheckBitmask_x                                        0x140E6AE1F
#define __MemCheckActive_x                                         0x140E6C525
#define __MouseEventTime_x                                         0x140EDFE90
#define DI8__MouseState_x                                          0x140EE40C8
#define __heqmain_x                                                0x140EE6568
#define DI8__Mouse_x                                               0x140EE4018
#define __HWnd_x                                                   0x140EE40A0
#define __Mouse_x                                                  0x140EE3FD4
#define DI8__Keyboard_x                                            0x140EE3FF0
#define __LoginName_x                                              0x140EE6C4C
#define __CurrentMapLabel_x                                        0x140EFA760
#define __LabelCache_x                                             0x140EFB330
#define __ChatFilterDefs_x                                         0x140A3A5F0
#define Teleport_Table_Size_x                                      0x140E63308
#define Teleport_Table_x                                           0x140E63820

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E65820
#define pinstActiveBanker_x                                        0x140E63248
#define pinstActiveCorpse_x                                        0x140E63238
#define pinstActiveGMaster_x                                       0x140E63240
#define pinstActiveMerchant_x                                      0x140E63230
#define pinstAltAdvManager_x                                       0x140DB3028
#define pinstCEverQuest_x                                          0x140EE4010
#define pinstCamActor_x                                            0x140DB21D8
#define pinstCDBStr_x                                              0x140DB1DE0
#define pinstCDisplay_x                                            0x140E62D60
#define pinstControlledPlayer_x                                    0x140E632D8
#define pinstCResolutionHandler_x                                  0x140F0BB68
#define pinstCSidlManager_x                                        0x140F0C8D0
#define pinstCXWndManager_x                                        0x140F0C8C8
#define instDynamicZone_x                                          0x140E69350 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E6939E
#define instExpeditionName_x                                       0x140E693DE
#define pinstDZMember_x                                            0x140E69468
#define pinstDZTimerInfo_x                                         0x140E69470
#define pinstEqLogin_x                                             0x140EE6590
#define instTribute_x                                              0x140D24D60
#define pinstDeviceInputProxy_x                                    0x140E6A93C
#define pinstEQSoundManager_x                                      0x140DB33B0
#define pinstEQSpellStrings_x                                      0x140D96970
#define pinstSGraphicsEngine_x                                     0x140F0B8F8
#define pinstLocalPC_x                                             0x140E62D90
#define pinstLocalPlayer_x                                         0x140E63228
#define pinstCMercenaryClientManager_x                             0x140EE1778
#define pinstModelPlayer_x                                         0x140E63258
#define pinstRenderInterface_x                                     0x140F0B910
#define pinstSkillMgr_x                                            0x140EE3418
#define pinstSpawnManager_x                                        0x140EE1B40
#define pinstSpellManager_x                                        0x140EE3480
#define pinstStringTable_x                                         0x140E62D98
#define pinstSwitchManager_x                                       0x140E62CE0
#define pinstTarget_x                                              0x140E632D0
#define pinstTaskMember_x                                          0x140D24D50 // Part of g_taskManager
#define pinstTradeTarget_x                                         0x140E63250
#define instTributeActive_x                                        0x140D24D89
#define pinstViewActor_x                                           0x140DB21D0
#define pinstWorldData_x                                           0x140E63808
#define pinstPlayerPath_x                                          0x140EE1B68
#define pinstTargetIndicator_x                                     0x140EE3530
#define EQObject_Top_x                                             0x140E633E0

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140EF78C0
#define pinstCContainerMgr_x                                       0x140DB2208
#define pinstCContextMenuManager_x                                 0x140F0C5B0
#define pinstCInvSlotMgr_x                                         0x140DB21C8
#define pinstCItemDisplayManager_x                                 0x140EFA330
#define pinstCPopupWndManager_x                                    0x140EFABC0
#define pinstCSpellDisplayMgr_x                                    0x140EFB210
#define pinstCTaskManager_x                                        0x140BEDC90
#define pinstEQSuiteTextureLoader_x                                0x140D3B5B0
#define pinstItemIconCache_x                                       0x140EF7C20
#define pinstLootFiltersManager_x                                  0x140DB1828
#define pinstGFViewListener_x                                      0x140F0BD88


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x14024A0F0
#define __CastRay_x                                                0x140242380
#define __CastRay2_x                                               0x140242080
#define __compress_block_x                                         0x14053AF10
#define __ConvertItemTags_x                                        0x1402427E0
#define __CleanItemTags_x                                          0x14008A330
#define __CreateCascadeMenuItems_x                                 0x14018D8C0
#define __decompress_block_x                                       0x140581360
#define __DoesFileExist_x                                          0x140589A00
#define __EQGetTime_x                                              0x140586100
#define __ExecuteCmd_x                                             0x140217C00
#define __FixHeading_x                                             0x140640F70
#define __FlushDxKeyboard_x                                        0x140343820
#define __get_bearing_x                                            0x14024C320
#define __get_melee_range_x                                        0x14024C410
#define __GetAnimationCache_x                                      0x1403C3510
#define __GetGaugeValueFromEQ_x                                    0x1404FAAA0
#define __GetLabelFromEQ_x                                         0x1404FC0A0
#define __GetXTargetType_x                                         0x140642250   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140640FF0
#define __HelpPath_x                                               0x140EDFD58   // Why?
#define __NewUIINI_x                                               0x140507AE0   // Why?
#define __ProcessDeviceEvents_x                                    0x14028C8D0
#define __ProcessGameEvents_x                                      0x140281450
#define __ProcessKeyboardEvents_x                                  0x140344F70
#define __ProcessMouseEvents_x                                     0x140282B30
#define __SaveColors_x                                             0x14019D8F0
#define __STMLToText_x                                             0x1405994A0
#define __WndProc_x                                                0x140342010
#define CMemoryMappedFile__SetFile_x                               0x1407EDF30
#define DrawNetStatus_x                                            0x1402CD2D0
#define Util__FastTime_x                                           0x140585630
#define __eq_delete_x                                              0x1406B9FD8
#define __eq_new_x                                                 0x1406BA230
#define __CopyLayout_x                                             0x1402BB030
#define __ThrottleFrameRate_x                                      0x140270B01
#define __ThrottleFrameRateEnd_x                                   0x140270B61

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x1403552E0
#define CAAWnd__Update_x                                           0x1403555E0
#define CAAWnd__UpdateSelected_x                                   0x140356630

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AC8A0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A5280
#define CAdvancedLootWnd__AddPlayerToList_x                        0x1408446B0
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AD1D0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401A8AC0
#define AltAdvManager__IsAbilityReady_x                            0x1401A8F50
#define AltAdvManager__GetAAById_x                                 0x1401A8390
#define AltAdvManager__CanTrainAbility_x                           0x1401A8180
#define AltAdvManager__CanSeeAbility_x                             0x1401A7E40

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D32D0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D4130
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D4380
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400E8BC0
#define CharacterZoneClient__CanUseItem_x                          0x1400E9180
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D4D50
#define CharacterZoneClient__CastSpell_x                           0x1400D4DF0
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E49C0
#define CharacterZoneClient__Cur_HP_x                              0x1400EA8A0
#define CharacterZoneClient__Cur_Mana_x                            0x1400EAA60
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D8160
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F10E0
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FF980  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D9600
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E84C0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F2C90
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F1B70
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D9780
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C9AB0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400CB4B0
#define CharacterZoneClient__GetHPRegen_x                          0x1400F22B0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400EA510
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F2F20
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D9800
#define CharacterZoneClient__GetManaRegen_x                        0x1400F3CA0
#define CharacterZoneClient__GetModCap_x                           0x1400FB130
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D9A90
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D9C60
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CE640
#define CharacterZoneClient__HasSkill_x                            0x1400F6C70
#define CharacterZoneClient__HitBySpell_x                          0x1400DA6F0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DE060
#define CharacterZoneClient__MakeMeVisible_x                       0x1400FAC10
#define CharacterZoneClient__Max_Endurance_x                       0x1402E9B70  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400FAF60
#define CharacterZoneClient__Max_Mana_x                            0x1402E9D90  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400FB3C0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E1510
#define CharacterZoneClient__SpellDuration_x                       0x1400E2240
#define CharacterZoneClient__TotalEffect_x                         0x1400E35A0
#define CharacterZoneClient__UseSkill_x                            0x140100900


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140373BF0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14037DFA0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140379E10
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14037DA20

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140380710

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140ABF230

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403A35C0
#define CChatWindowManager__InitContextMenu_x                      0x1403A3750
#define CChatWindowManager__FreeChatWindow_x                       0x1403A2620
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403AB6B0
#define CChatWindowManager__CreateChatWindow_x                     0x1403A2050

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140108E60

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403AC700
#define CChatWindow__Clear_x                                       0x1403AD6C0
#define CChatWindow__WndNotification_x                             0x1403AE8B0
#define CChatWindow__AddHistory_x                                  0x1403AD1C0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405C6B60
#define CContextMenu__RemoveMenuItem_x                             0x1405C6F50
#define CContextMenu__RemoveAllMenuItems_x                         0x1405C6F20
#define CContextMenu__CheckMenuItem_x                              0x1405C6D90
#define CContextMenu__SetMenuItem_x                                0x1405C6F70
#define CContextMenu__AddSeparator_x                               0x1405C6CD0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405B8A50
#define CContextMenuManager__RemoveMenu_x                          0x1405B9030
#define CContextMenuManager__PopupMenu_x                           0x1405B8D70
#define CContextMenuManager__Flush_x                               0x1405B8AD0
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403BB0B0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x140694000
#define CChatService__GetFriendName_x                              0x140694010

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405A9970
#define CComboWnd__Draw_x                                          0x1405A9A70
#define CComboWnd__GetCurChoice_x                                  0x1405A9D50  // unused
#define CComboWnd__GetListRect_x                                   0x1405A9DF0
#define CComboWnd__InsertChoice_x                                  0x1405AA130
#define CComboWnd__SetColors_x                                     0x1405AA4C0
#define CComboWnd__SetChoice_x                                     0x1405AA480
#define CComboWnd__GetItemCount_x                                  0x1405A9DE0
#define CComboWnd__GetCurChoiceText_x                              0x1405A9D90  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405A9D20
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405AA1F0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403B8DE0
#define CContainerWnd__SetContainer_x                              0x140410800
#define CContainerWnd__vftable_x                                   0x1409D5E60

// CDisplay
#define CDisplay__cameraType_x                                     0x140DB1F94
#define CDisplay__ZoneMainUI_x                                     0x1405E0C20
#define CDisplay__PreZoneMainUI_x                                  0x14019A810
#define CDisplay__CleanGameUI_x                                    0x14018C980
#define CDisplay__GetClickedActor_x                                0x140190B40
#define CDisplay__GetUserDefinedColor_x                            0x1401917B0
#define CDisplay__InitCharSelectUI_x                               0x140191A60
#define CDisplay__ReloadUI_x                                       0x14019CB10
#define CDisplay__RestartUI_x                                      0x1401FD430
#define CDisplay__WriteTextHD2_x                                   0x1401A3AF0
#define CDisplay__TrueDistance_x                                   0x1401A37A0
#define CDisplay__SetViewActor_x                                   0x1401A0010
#define CDisplay__GetFloorHeight_x                                 0x140190DA0
#define CDisplay__ToggleScreenshotMode_x                           0x1401A3290
#define CDisplay__RealRender_World_x                               0x14019BEE0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405EAE50
#define CEditWnd__DrawCaret_x                                      0x1405DC900  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405DCDC0
#define CEditWnd__GetCaretPt_x                                     0x1405DD040  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405DD080
#define CEditWnd__GetDisplayString_x                               0x1405DD2F0
#define CEditWnd__GetHorzOffset_x                                  0x1405DD530
#define CEditWnd__GetLineForPrintableChar_x                        0x1405DD680
#define CEditWnd__GetSelStartPt_x                                  0x1405DD960  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405DD7B0
#define CEditWnd__PointFromPrintableChar_x                         0x1405DE510
#define CEditWnd__ReplaceSelection_x                               0x1405DE8C0
#define CEditWnd__SelectableCharFromPoint_x                        0x1405DED60
#define CEditWnd__SetEditable_x                                    0x1405DEFF0
#define CEditWnd__SetWindowText_x                                  0x1405DF020

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140271C10
#define CEverQuest__ClickedPlayer_x                                0x140265CA0
#define CEverQuest__CreateTargetIndicator_x                        0x140266560
#define CEverQuest__DoTellWindow_x                                 0x140108B70 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140109440 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140273600
#define CEverQuest__dsp_chat_x                                     0x1401085B0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x14029E7E0
#define CEverQuest__Emote_x                                        0x140273FF0
#define CEverQuest__GetBodyTypeDesc_x                              0x140274DD0
#define CEverQuest__GetClassDesc_x                                 0x140274E30
#define CEverQuest__GetClassThreeLetterCode_x                      0x140275200
#define CEverQuest__GetDeityDesc_x                                 0x1402754B0
#define CEverQuest__GetLangDesc_x                                  0x1402758E0
#define CEverQuest__GetRaceDesc_x                                  0x140275C80
#define CEverQuest__InterpretCmd_x                                 0x140277610
#define CEverQuest__LeftClickedOnPlayer_x                          0x14028C940
#define CEverQuest__LMouseUp_x                                     0x140279080
#define CEverQuest__RightClickedOnPlayer_x                         0x14028A000
#define CEverQuest__RMouseUp_x                                     0x1402836C0
#define CEverQuest__SetGameState_x                                 0x14028F8B0
#define CEverQuest__UPCNotificationFlush_x                         0x140295220 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140278CE0
#define CEverQuest__ReportSuccessfulHeal_x                         0x140284A90
#define CEverQuest__ReportSuccessfulHit_x                          0x1402858B0

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403CE450

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C3340
#define CGuild__GetGuildName_x                                     0x1400C3380

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403F1860

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402B0980
#define CHotButton__SetCheck_x                                     0x1402B0C50

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140409500
#define CInvSlotMgr__MoveItem_x                                    0x1404096E0
#define CInvSlotMgr__SelectSlot_x                                  0x14040B110

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1404066F0
#define CInvSlot__SliderComplete_x                                 0x140407C40
#define CInvSlot__GetItemBase_x                                    0x140402070
#define CInvSlot__UpdateItem_x                                     0x140408100

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x14040C4A0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x14042DA00
#define CItemDisplayWnd__UpdateStrings_x                           0x1404305F0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x14042A1D0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x14042BB30
#define CItemDisplayWnd__RequestConvertItem_x                      0x14042CE10

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404F7510
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404F92A0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140534270

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1404268A0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140153A10

// CLabel
#define CLabel__UpdateText_x                                       0x1404379C0

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405AD300
#define CListWnd__dCListWnd_x                                      0x1405AD750
#define CListWnd__vftable_x                                        0x140ABD380
#define CListWnd__AddColumn_x                                      0x1405ADDF0
#define CListWnd__AddColumn1_x                                     0x1405ADE90
#define CListWnd__AddLine_x                                        0x1405ADFF0
#define CListWnd__AddString_x                                      0x1405AE580
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405AEAF0
#define CListWnd__CalculateVSBRange_x                              0x1405AEDD0
#define CListWnd__ClearSel_x                                       0x1405AEF80
#define CListWnd__ClearAllSel_x                                    0x1405AEF20
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405AEFE0
#define CListWnd__Compare_x                                        0x1405AF1A0
#define CListWnd__Draw_x                                           0x1405AF670
#define CListWnd__DrawColumnSeparators_x                           0x1405B0220
#define CListWnd__DrawHeader_x                                     0x1405B02E0
#define CListWnd__DrawItem_x                                       0x1405B09B0
#define CListWnd__DrawLine_x                                       0x1405B1330
#define CListWnd__DrawSeparator_x                                  0x1405B17F0
#define CListWnd__EnableLine_x                                     0x1405B1C10
#define CListWnd__EnsureVisible_x                                  0x1405B1C70
#define CListWnd__ExtendSel_x                                      0x1405B1D70
#define CListWnd__GetColumnMinWidth_x                              0x1405B2100
#define CListWnd__GetColumnWidth_x                                 0x1405B2180
#define CListWnd__GetCurSel_x                                      0x1405B2280
#define CListWnd__GetItemData_x                                    0x1405B2600
#define CListWnd__GetItemHeight_x                                  0x1405B2640
#define CListWnd__GetItemRect_x                                    0x1405B2860
#define CListWnd__GetItemText_x                                    0x1405B2B00
#define CListWnd__GetSelList_x                                     0x1405B2D50
#define CListWnd__GetSeparatorRect_x                               0x1405B2F40
#define CListWnd__InsertLine_x                                     0x1405B43A0
#define CListWnd__RemoveLine_x                                     0x1405B4A10
#define CListWnd__SetColors_x                                      0x1405B4DD0
#define CListWnd__SetColumnJustification_x                         0x1405B4DF0
#define CListWnd__SetColumnLabel_x                                 0x1405B4E70
#define CListWnd__SetColumnWidth_x                                 0x1405B5010
#define CListWnd__SetCurSel_x                                      0x1405B50E0
#define CListWnd__SetItemColor_x                                   0x1405B5350
#define CListWnd__SetItemData_x                                    0x1405B53F0
#define CListWnd__SetItemText_x                                    0x1405B5630
#define CListWnd__Sort_x                                           0x1405B5A40
#define CListWnd__ToggleSel_x                                      0x1405B5BB0
#define CListWnd__SetColumnsSizable_x                              0x1405B5060
#define CListWnd__SetItemWnd_x                                     0x1405B5760
#define CListWnd__GetItemWnd_x                                     0x1405B2CE0
#define CListWnd__SetItemIcon_x                                    0x1405B5430
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405AE8C0
#define CListWnd__SetVScrollPos_x                                  0x1405B59A0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x14044AC70

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A23040
#define MapViewMap__Clear_x                                        0x14044C7F0
#define MapViewMap__SetZoom_x                                      0x140452E60
#define MapViewMap__HandleLButtonDown_x                            0x14044F980

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x1404745A0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x14047AC00
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x14047B3B0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14047EC00
#define CMerchantWnd__SelectBuySellSlot_x                          0x14047DF50
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140482EB0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14066F1B0
#define CPacketScrambler__hton_x                                   0x14066F1A0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405D61C0
#define CSidlManagerBase__FindAnimation1_x                         0x1405D6100
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405D67F0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405D65A0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405D5500
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405D5490
#define CSidlManagerBase__CreateXWnd_x                             0x1405D4AD0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404EA3E0
#define CSidlManager__CreateXWnd_x                                 0x1404EA5A0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14059AF90
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14059B0B0
#define CSidlScreenWnd__ConvertToRes_x                             0x1405E5390 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14059B230
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14059A6C0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14059A790
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14059A9A0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x14059B920
#define CSidlScreenWnd__EnableIniStorage_x                         0x14059BB50
#define CSidlScreenWnd__GetChildItem_x                             0x14059BCF0
#define CSidlScreenWnd__GetSidlPiece_x                             0x14059BF40
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405A5FC0 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x14059C2B0
#define CSidlScreenWnd__LoadIniInfo_x                              0x14059C620
#define CSidlScreenWnd__LoadIniListWnd_x                           0x14059CEE0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x14059D8E0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F0BC28
#define CSidlScreenWnd__StoreIniInfo_x                             0x14059DF70
#define CSidlScreenWnd__StoreIniVis_x                              0x14059E760
#define CSidlScreenWnd__vftable_x                                  0x140ABC608
#define CSidlScreenWnd__WndNotification_x                          0x14059E7B0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14032C7A0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14032CC40 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14032CB70
#define CSkillMgr__IsActivatedSkill_x                              0x14032CFF0
#define CSkillMgr__IsCombatSkill_x                                 0x14032D030
#define CSkillMgr__GetSkillTimerDuration_x                         0x14032CF60
#define CSkillMgr__GetSkillLastUsed_x                              0x14032CBC0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405061C0
#define CSliderWnd__SetValue_x                                     0x1405B6D20
#define CSliderWnd__SetNumTicks_x                                  0x1405B6BA0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404F0B10

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405BB4B0
#define CStmlWnd__CalculateHSBRange_x                              0x1405A59C0
#define CStmlWnd__CalculateVSBRange_x                              0x1405BC350
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405BCE40
#define CStmlWnd__ForceParseNow_x                                  0x1405BCEE0
#define CStmlWnd__GetVisibleText_x                                 0x1405BD5B0
#define CStmlWnd__MakeStmlColorTag_x                               0x1405BF2F0
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405BF330
#define CStmlWnd__SetSTMLText_x                                    0x1405C6300
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405C64B0
#define CStmlWnd__UpdateHistoryString_x                            0x1405C6840

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405B70F0
#define CTabWnd__DrawCurrentPage_x                                 0x1405B7190
#define CTabWnd__DrawTab_x                                         0x1405B7560
#define CTabWnd__GetTabRect_x                                      0x1405B7BC0
#define CTabWnd__InsertPage_x                                      0x1405B7E90
#define CTabWnd__RemovePage_x                                      0x1405B8120
#define CTabWnd__SetPage_x                                         0x1405B8280
#define CTabWnd__UpdatePage_x                                      0x1405B8580

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405DF480
#define CPageWnd__SetTabText_x                                     0x1405DF4F0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BC960  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BCD70


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405CDB80
#define CTextureFont__DrawWrappedText1_x                           0x1405CDA90
#define CTextureFont__DrawWrappedText2_x                           0x1405CDCB0
#define CTextureFont__GetTextExtent_x                              0x1405CE060
#define CTextureFont__GetHeight_x                                  0x1405CE020

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405E3AF0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x140597B90

// CXStr
#define CXStr__gFreeLists_x                                        0x140D3AF20
#define CXStr__gCXStrAccess_x                                      0x140F0B788

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405A1030
#define CXWnd__ClrFocus_x                                          0x1405A1320
#define CXWnd__Destroy_x                                           0x1405A14A0
#define CXWnd__DoAllDrawing_x                                      0x1405A15B0
#define CXWnd__DrawColoredRect_x                                   0x1405A1D80
#define CXWnd__DrawTooltip_x                                       0x1405A3410
#define CXWnd__DrawTooltipAtPoint_x                                0x1405A34C0
#define CXWnd__GetChildItem_x                                      0x1405A3DD0
#define CXWnd__GetChildWndAt_x                                     0x1405A3E90
#define CXWnd__GetClientRect_x                                     0x1405A4130
#define CXWnd__GetClientClipRect_x                                 0x1405A4000
#define CXWnd__GetRelativeRect_x                                   0x1405A5AE0
#define CXWnd__GetScreenClipRect_x                                 0x1405A5BE0
#define CXWnd__GetScreenRect_x                                     0x1405A5D50
#define CXWnd__GetTooltipRect_x                                    0x1405A5EC0
#define CXWnd__IsActive_x                                          0x1405A6480
#define CXWnd__IsDescendantOf_x                                    0x1405A64B0
#define CXWnd__IsReallyVisible_x                                   0x1405A6520
#define CXWnd__IsType_x                                            0x1405A6570
#define CXWnd__Minimize_x                                          0x1405A6670
#define CXWnd__ProcessTransition_x                                 0x1405A74F0
#define CXWnd__Resize_x                                            0x1405A7600
#define CXWnd__Right_x                                             0x1405A76A0
#define CXWnd__SetFocus_x                                          0x1405A7A50
#define CXWnd__SetFont_x                                           0x1405A7AA0
#define CXWnd__SetKeyTooltip_x                                     0x1405A7B90
#define CXWnd__SetMouseOver_x                                      0x1405A7CD0
#define CXWnd__SetParent_x                                         0x1405A7D50
#define CXWnd__StartFade_x                                         0x1405A8190
#define CXWnd__vftable_x                                           0x140ABCBE0
#define CXWnd__CXWnd_x                                             0x14059FBD0
#define CXWnd__dCXWnd_x                                            0x1405A0500

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405EA5D0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405C8110
#define CXWndManager__DrawCursor_x                                 0x1405C83F0
#define CXWndManager__DrawWindows_x                                0x1405C8650
#define CXWndManager__GetKeyboardFlags_x                           0x1405C8CA0
#define CXWndManager__HandleKeyboardMsg_x                          0x1405C8CE0
#define CXWndManager__RemoveWnd_x                                  0x1405CC240

// CDBStr
#define CDBStr__GetString_x                                        0x14018AB40

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x140678FF0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D0DD0
#define CCharacterListWnd__EnterWorld_x                            0x1400CFDE0
#define CCharacterListWnd__Quit_x                                  0x1400D0DB0
#define CCharacterListWnd__UpdateList_x                            0x1400D1C30

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140647310
#define ItemBase__CreateItemTagString_x                            0x140647D80
#define ItemBase__GetImageNum_x                                    0x14064A2F0
#define ItemBase__GetItemValue_x                                   0x14064BE30
#define ItemBase__IsEmpty_x                                        0x14064D9B0
#define ItemBase__IsKeyRingItem_x                                  0x14064E0C0
#define ItemBase__ValueSellMerchant_x                              0x140652350
#define ItemClient__CanDrop_x                                      0x1402B32B0
#define ItemClient__CanGoInBag_x                                   0x1402B33E0
#define ItemClient__CreateItemClient_x                             0x1402B3660
#define ItemClient__dItemClient_x                                  0x1402B3120

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401AA470
#define EQ_LoadingS__Array_x                                       0x140D27230

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14065E120
#define PcBase__GetCombatAbility_x                                 0x14065E810
#define PcBase__GetCombatAbilityTimer_x                            0x14065E8B0
#define PcBase__GetItemContainedRealEstateIds_x                    0x14065F050
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14065FB90
#define PcClient__AlertInventoryChanged_x                          0x1402D58F0
#define PcClient__GetConLevel_x                                    0x1402D5F10  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402D8690
#define PcClient__HasLoreItem_x                                    0x1402D9740
#define PcZoneClient__GetItemRecastTimer_x                         0x1402E6F60
#define PcZoneClient__RemoveMyAffect_x                             0x1402EACB0

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x14021C340  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x14021C4F0  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x14021C650  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x14021C590  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x1402571E0  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140185390

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140633500
#define PlayerBase__CanSee1_x                                      0x1406335D0
#define PlayerBase__GetVisibilityLineSegment_x                     0x140633AB0
#define PlayerBase__HasProperty_x                                  0x140633C80
#define PlayerBase__IsTargetable_x                                 0x140633D40
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402F8A20
#define PlayerClient__GetPcClient_x                                0x1402FB550
#define PlayerClient__PlayerClient_x                               0x1402F0D90
#define PlayerClient__SetNameSpriteState_x                         0x1402FEC80
#define PlayerClient__SetNameSpriteTint_x                          0x1402FFC40
#define PlayerZoneClient__ChangeHeight_x                           0x14030E670
#define PlayerZoneClient__DoAttack_x                               0x14030F380
#define PlayerZoneClient__GetLevel_x                               0x140312AC0
#define PlayerZoneClient__IsValidTeleport_x                        0x140259F70
#define PlayerZoneClient__LegalPlayerRace_x                        0x140199090

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x140307B70  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x140307C20  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x140307D20
#define PlayerManagerClient__CreatePlayer_x                        0x140307640
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x1406330C0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402B8530
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402B8130
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402B81A0
#define KeypressHandler__ClearCommandStateArray_x                  0x1402B84C0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402B8650
#define KeypressHandler__HandleKeyUp_x                             0x1402B8770
#define KeypressHandler__SaveKeymapping_x                          0x1402B83D0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140676B10  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1406708F0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402DFD10  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402E5090
#define PcZoneClient__GetPcSkillLimit_x                            0x1402E76F0
#define PcZoneClient__RemovePetEffect_x                            0x1402EAF90
#define PcZoneClient__HasAlternateAbility_x                        0x1402E82E0
#define PcZoneClient__CanEquipItem_x                               0x1402E3390
#define PcZoneClient__GetItemByID_x                                0x1402E5FC0
#define PcZoneClient__RemoveBuffEffect_x                           0x1402EAB30
#define PcZoneClient__BandolierSwap_x                              0x1402E23E0

// Doors
#define EQSwitch__UseSwitch_x                                      0x14025EAA0

// IconCache
#define IconCache__GetIcon_x                                       0x1403C3540

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403B7B90
#define CContainerMgr__CloseContainer_x                            0x1403B74D0
#define CContainerMgr__OpenExperimentContainer_x                   0x1403B7F10

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404AE5D0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402AAC70

// CLootWnd
#define CLootWnd__LootAll_x                                        0x14043ECA0
#define CLootWnd__RequestLootSlot_x                                0x14043FCD0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401D9960
#define EQ_Spell__SpellAffects_x                                   0x1401DAC40
#define EQ_Spell__SpellAffectBase_x                                0x1401DABA0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D9DF0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D9DA0
#define EQ_Spell__IsSPAStacking_x                                  0x1401DA870
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401DA420
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401D9CF0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C1E80

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x14050B2D0
#define CTargetWnd__RefreshTargetBuffs_x                           0x14050A9E0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x14050A1E0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x140512960  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140181D30
#define CTaskManager__GetTaskStatus_x                              0x140181E40
#define CTaskManager__GetElementDescription_x                      0x1401819C0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401D7C80
#define EqSoundManager__PlayScriptMp3_x                            0x1401D6AC0
#define EqSoundManager__SoundAssistPlay_x                          0x140331DE0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140332120  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405A8F00
#define CTextureAnimation__SetCurCell_x                            0x1405A9210

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402A8E70

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1406916D0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x140691750
#define CharacterBase__IsExpansionFlag_x                           0x1401FCBF0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x1403941F0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140394C10
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140396160

// messages
#define msg_spell_worn_off_x                                       0x140212B60
#define msg_new_text_x                                             0x14020E310
#define __msgTokenTextParam_x                                      0x1402059E0
#define msgTokenText_x                                             0x1402058F0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140333A10
#define SpellManager__GetSpellByGroupAndRank_x                     0x140333930

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140642630

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140438110

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403BC8E0
#define CCursorAttachment__IsOkToActivate_x                        0x1403BFB90
#define CCursorAttachment__RemoveAttachment_x                      0x1403BFE40
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405E1F90
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405E2180
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405E2190

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x14014EBC0
#define CFindItemWnd__Update_x                                     0x14014F560
#define CFindItemWnd__PickupSelectedItem_x                         0x140149000

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x140158720
#define LootFiltersManager__GetItemFilterData_x                    0x140159240
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140159AE0
#define LootFiltersManager__SetItemLootFilter_x                    0x140159D90

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x140491050

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x14032C360
#define CResolutionHandler__UpdateResolution_x                     0x14058E710

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403B3E80

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x140695AC0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406959B0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403DA790
#define CGroupWnd__UpdateDisplay_x                                 0x1403DA370

// ItemBase
#define ItemBase__IsLore_x                                         0x14064E1F0
#define ItemBase__IsLoreEquipped_x                                 0x14064E280

#define MultipleItemMoveManager__ProcessMove_x                     0x1402CB3B0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140257340
#define EQPlacedItemManager__GetItemByGuid_x                       0x1402572D0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140257310

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1403267B0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140126800
#define FactionManagerClient__HandleFactionMessage_x               0x140126BB0
#define FactionManagerClient__GetFactionStanding_x                 0x140125FD0
#define FactionManagerClient__GetMaxFaction_x                      0x140125FD0
#define FactionManagerClient__GetMinFaction_x                      0x140125E80

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AEEB0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140131FB0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401B2E20
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401B21A0
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401B2C40  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401B2BC0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x140338D10

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1403267B0

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x14021C6E0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x14059EDA0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x1400869F0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14034A5B0

// AchievementManager
#define AchievementManager__Instance_x                             0x14008EBB0

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x140679B70
#define FreeToPlayClient__RestrictionInfo_x                        0x140AD1450

// UdpConnection
#define UdpConnection__GetStats_x                                  0x140541330

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x14082BE80
#define CGFScreenWnd__CGFScreenWnd_x                               0x140071380
#define CGFScreenWnd__CGFScreenWnd1_x                              0x140071510
#define CGFScreenWnd__dCGFScreenWnd_x                              0x1400716C0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
