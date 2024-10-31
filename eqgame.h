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

#define __ClientDate                                               20241030u
#define __ExpectedVersionDate                                     "Oct 30 2024"
#define __ExpectedVersionTime                                     "09:34:21"
#define __ActualVersionDate_x                                      0x140946CC0
#define __ActualVersionTime_x                                      0x140946CB0
#define __ActualVersionBuild_x                                     0x1408DD640

// Memory Protection
#define __MemChecker0_x                                            0x1402B0F80
#define __MemChecker1_x                                            0x14056D5B0
#define __MemChecker4_x                                            0x14027F840
#define __EncryptPad0_x                                            0x140D13E50

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E4CAA0
#define instEQZoneInfo_x                                           0x140E4CC94 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x1402165A0
#define __gfMaxZoomCameraDistance_x                                0x1408DE8B8
#define __gfMaxCameraDistance_x                                    0x140A83458
#define __CurrentSocial_x                                          0x140BCF940 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D0B720
#define g_eqCommandStates_x                                        0x140D0C790
#define __CommandList_x                                            0x140D0C9D0
#define __ScreenMode_x                                             0x140D9434C
#define __gWorld_x                                                 0x140E473D8
#define __gpbCommandEvent_x                                        0x140E473E4
#define __ServerHost_x                                             0x140E475C8
#define __Guilds_x                                                 0x140E4B660
#define __MemCheckBitmask_x                                        0x140E4CFD7
#define __MemCheckActive_x                                         0x140E4E6C5
#define __MouseEventTime_x                                         0x140EC2010
#define DI8__MouseState_x                                          0x140EC6258
#define __heqmain_x                                                0x140EC86F8
#define DI8__Mouse_x                                               0x140EC61A8
#define __HWnd_x                                                   0x140EC6230
#define __Mouse_x                                                  0x140EC6164
#define DI8__Keyboard_x                                            0x140EC6180
#define __LoginName_x                                              0x140EC8DDC
#define __CurrentMapLabel_x                                        0x140EDC5E0
#define __LabelCache_x                                             0x140EDD1B0
#define __ChatFilterDefs_x                                         0x140A1E570
#define Teleport_Table_Size_x                                      0x140E47470
#define Teleport_Table_x                                           0x140E44F20

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E479F0
#define pinstActiveBanker_x                                        0x140E47900
#define pinstActiveCorpse_x                                        0x140E478F0
#define pinstActiveGMaster_x                                       0x140E478F8
#define pinstActiveMerchant_x                                      0x140E478E8
#define pinstAltAdvManager_x                                       0x140D951F8
#define pinstCEverQuest_x                                          0x140EC61A0
#define pinstCamActor_x                                            0x140D94338
#define pinstCDBStr_x                                              0x140D93FB0
#define pinstCDisplay_x                                            0x140E479D8
#define pinstControlledPlayer_x                                    0x140E47990
#define pinstCResolutionHandler_x                                  0x14154D978
#define pinstCSidlManager_x                                        0x140EEE4B0
#define pinstCXWndManager_x                                        0x140EEE4A8
#define instDynamicZone_x                                          0x140E4B520 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E4B56E
#define instExpeditionName_x                                       0x140E4B5AE
#define pinstDZMember_x                                            0x140E4B638
#define pinstDZTimerInfo_x                                         0x140E4B640
#define pinstEqLogin_x                                             0x140EC8720
#define instTribute_x                                              0x140D06D50
#define pinstDeviceInputProxy_x                                    0x140E4CAFC
#define pinstEQSoundManager_x                                      0x140D95578
#define pinstEQSpellStrings_x                                      0x140D78B80
#define pinstSGraphicsEngine_x                                     0x14154D6F8
#define pinstLocalPC_x                                             0x140E479C0
#define pinstLocalPlayer_x                                         0x140E478E0
#define pinstCMercenaryClientManager_x                             0x140EC38F8
#define pinstModelPlayer_x                                         0x140E47910
#define pinstRenderInterface_x                                     0x14154D710
#define pinstSkillMgr_x                                            0x140EC55A0
#define pinstSpawnManager_x                                        0x140EC3CC0
#define pinstSpellManager_x                                        0x140EC5608
#define pinstStringTable_x                                         0x140E479E0
#define pinstSwitchManager_x                                       0x140E44EA0
#define pinstTarget_x                                              0x140E47988
#define pinstTaskMember_x                                          0x140D06D40 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140E47998
#define pinstTradeTarget_x                                         0x140E47908
#define instTributeActive_x                                        0x140D06D79
#define pinstViewActor_x                                           0x140D94330
#define pinstWorldData_x                                           0x140E479C8
#define pinstPlayerPath_x                                          0x140EC3CE8
#define pinstTargetIndicator_x                                     0x140EC56B8
#define EQObject_Top_x                                             0x140E479B0

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140ED9738
#define pinstCContainerMgr_x                                       0x140D93FF8
#define pinstCContextMenuManager_x                                 0x140EEE190
#define pinstCInvSlotMgr_x                                         0x140D93FF0
#define pinstCItemDisplayManager_x                                 0x140EDC1B0
#define pinstCPopupWndManager_x                                    0x140EDCA40
#define pinstCSpellDisplayMgr_x                                    0x140EDD090
#define pinstCTaskManager_x                                        0x140BCFC80
#define pinstEQSuiteTextureLoader_x                                0x140D1D550
#define pinstItemIconCache_x                                       0x140ED9A98
#define pinstLootFiltersManager_x                                  0x140D939F8
#define pinstGFViewListener_x                                      0x140EED968


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x14023F5F0
#define __CastRay_x                                                0x140237A40
#define __CastRay2_x                                               0x140237740
#define __compress_block_x                                         0x140522C50
#define __ConvertItemTags_x                                        0x140237EA0
#define __CleanItemTags_x                                          0x1400880D0
#define __CreateCascadeMenuItems_x                                 0x140186910
#define __decompress_block_x                                       0x140568E20
#define __DoesFileExist_x                                          0x140571460
#define __EQGetTime_x                                              0x14056DB60
#define __ExecuteCmd_x                                             0x14020DEB0
#define __FixHeading_x                                             0x14069B0A0
#define __FlushDxKeyboard_x                                        0x140332A80
#define __get_bearing_x                                            0x1402417E0
#define __get_melee_range_x                                        0x1402418D0
#define __GetAnimationCache_x                                      0x1403B00D0
#define __GetGaugeValueFromEQ_x                                    0x1404E3CE0
#define __GetLabelFromEQ_x                                         0x1404E52F0
#define __GetXTargetType_x                                         0x14069C380   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14069B120
#define __HelpPath_x                                               0x140EC1ED8   // Why?
#define __NewUIINI_x                                               0x1404F0D80   // Why?
#define __ProcessDeviceEvents_x                                    0x14027FE50
#define __ProcessGameEvents_x                                      0x140274B80
#define __ProcessKeyboardEvents_x                                  0x1403341D0
#define __ProcessMouseEvents_x                                     0x140276250
#define __SaveColors_x                                             0x140196910
#define __STMLToText_x                                             0x140575DB0
#define __WndProc_x                                                0x1403312B0
#define CMemoryMappedFile__SetFile_x                               0x1407D6FC0
#define DrawNetStatus_x                                            0x1402BF3D0
#define Util__FastTime_x                                           0x14056D0F0
#define __eq_delete_x                                              0x1406A3044
#define __eq_new_x                                                 0x1406A3000
#define __CopyLayout_x                                             0x1402AD390
#define __ThrottleFrameRate_x                                      0x1402643A4
#define __ThrottleFrameRateEnd_x                                   0x140264404

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140343B80
#define CAAWnd__Update_x                                           0x140343E80
#define CAAWnd__UpdateSelected_x                                   0x140344EC0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AA4E0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A2DD0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x14082BB68
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AADD0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401A1A40
#define AltAdvManager__IsAbilityReady_x                            0x1401A1CC0
#define AltAdvManager__GetAAById_x                                 0x1401A1310
#define AltAdvManager__CanTrainAbility_x                           0x1401A1120
#define AltAdvManager__CanSeeAbility_x                             0x1401A0DE0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D0D10
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D1B50
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D1DA0
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400E5C30
#define CharacterZoneClient__CanUseItem_x                          0x1400E6060
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D2770
#define CharacterZoneClient__CastSpell_x                           0x1400D2810
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E1B90
#define CharacterZoneClient__Cur_HP_x                              0x1400E7730
#define CharacterZoneClient__Cur_Mana_x                            0x1400E78F0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D55A0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400EDDB0
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FC7E0  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D6A50
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E5530
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400EF970
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400EE840
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D6C20
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C7130
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C8B00
#define CharacterZoneClient__GetHPRegen_x                          0x1400EEF80
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E73A0
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400EFC00
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D6CA0
#define CharacterZoneClient__GetManaRegen_x                        0x1400F09E0
#define CharacterZoneClient__GetModCap_x                           0x1400F7FA0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D6F30
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D7140
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CBC70
#define CharacterZoneClient__HasSkill_x                            0x1400F39D0
#define CharacterZoneClient__HitBySpell_x                          0x1400D7BF0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DB390
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F7A80
#define CharacterZoneClient__Max_Endurance_x                       0x1402DBA70  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F7DD0
#define CharacterZoneClient__Max_Mana_x                            0x1402DBC90  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F8230
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DE720
#define CharacterZoneClient__SpellDuration_x                       0x1400DF420
#define CharacterZoneClient__TotalEffect_x                         0x1400E0770
#define CharacterZoneClient__UseSkill_x                            0x1400FD750


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140362050

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14036C380

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140368220
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14036BE00

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14036EA50

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AA21E0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140391940
#define CChatWindowManager__InitContextMenu_x                      0x140391AD0
#define CChatWindowManager__FreeChatWindow_x                       0x1403909C0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403996B0
#define CChatWindowManager__CreateChatWindow_x                     0x140390300

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140105C90

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x14039A6F0
#define CChatWindow__Clear_x                                       0x14039B6A0
#define CChatWindow__WndNotification_x                             0x14039C890
#define CChatWindow__AddHistory_x                                  0x14039B1A0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405AAFD0
#define CContextMenu__RemoveMenuItem_x                             0x1405AB3C0
#define CContextMenu__RemoveAllMenuItems_x                         0x1405AB390
#define CContextMenu__CheckMenuItem_x                              0x1405AB200
#define CContextMenu__SetMenuItem_x                                0x1405AB3E0
#define CContextMenu__AddSeparator_x                               0x1405AB140

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x14059CEB0
#define CContextMenuManager__RemoveMenu_x                          0x14059D490
#define CContextMenuManager__PopupMenu_x                           0x14059D1D0
#define CContextMenuManager__Flush_x                               0x14059CF30
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403A8010

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1406645D0
#define CChatService__GetFriendName_x                              0x1406645E0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14058DC50
#define CComboWnd__Draw_x                                          0x14058DD50
#define CComboWnd__GetCurChoice_x                                  0x14058E030  // unused
#define CComboWnd__GetListRect_x                                   0x14058E0D0
#define CComboWnd__InsertChoice_x                                  0x14058E410
#define CComboWnd__SetColors_x                                     0x14058E7A0
#define CComboWnd__SetChoice_x                                     0x14058E760
#define CComboWnd__GetItemCount_x                                  0x14058E0C0
#define CComboWnd__GetCurChoiceText_x                              0x14058E070  // unused
#define CComboWnd__GetChoiceText_x                                 0x14058E000
#define CComboWnd__InsertChoiceAtIndex_x                           0x14058E4D0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403A5D80
#define CContainerWnd__SetContainer_x                              0x1403FB510
#define CContainerWnd__vftable_x                                   0x1409BA6D8

// CDisplay
#define CDisplay__cameraType_x                                     0x140D940EC
#define CDisplay__ZoneMainUI_x                                     0x1405C50C0
#define CDisplay__PreZoneMainUI_x                                  0x140193840
#define CDisplay__CleanGameUI_x                                    0x1401859D0
#define CDisplay__GetClickedActor_x                                0x140189B80
#define CDisplay__GetUserDefinedColor_x                            0x14018A7F0
#define CDisplay__InitCharSelectUI_x                               0x14018AAA0
#define CDisplay__ReloadUI_x                                       0x140195B30
#define CDisplay__RestartUI_x                                      0x1401F44D0
#define CDisplay__WriteTextHD2_x                                   0x14019CB40
#define CDisplay__TrueDistance_x                                   0x14019C7F0
#define CDisplay__SetViewActor_x                                   0x140199030
#define CDisplay__GetFloorHeight_x                                 0x140189DE0
#define CDisplay__ToggleScreenshotMode_x                           0x14019C2E0
#define CDisplay__RealRender_World_x                               0x140194F10

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405CF2F0
#define CEditWnd__DrawCaret_x                                      0x1405C0DB0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405C1270
#define CEditWnd__GetCaretPt_x                                     0x1405C14F0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405C1530
#define CEditWnd__GetDisplayString_x                               0x1405C17A0
#define CEditWnd__GetHorzOffset_x                                  0x1405C19E0
#define CEditWnd__GetLineForPrintableChar_x                        0x1405C1B30
#define CEditWnd__GetSelStartPt_x                                  0x1405C1E10  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405C1C60
#define CEditWnd__PointFromPrintableChar_x                         0x1405C29C0
#define CEditWnd__ReplaceSelection_x                               0x1405C2D70
#define CEditWnd__SelectableCharFromPoint_x                        0x1405C3210
#define CEditWnd__SetEditable_x                                    0x1405C34A0
#define CEditWnd__SetWindowText_x                                  0x1405C34D0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x1402654B0
#define CEverQuest__ClickedPlayer_x                                0x14025AFA0
#define CEverQuest__CreateTargetIndicator_x                        0x14025B860
#define CEverQuest__DoTellWindow_x                                 0x1401059A0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140106260 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140266E70
#define CEverQuest__dsp_chat_x                                     0x1401053D0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x140291260
#define CEverQuest__Emote_x                                        0x140267850
#define CEverQuest__GetBodyTypeDesc_x                              0x140268600
#define CEverQuest__GetClassDesc_x                                 0x140268660
#define CEverQuest__GetClassThreeLetterCode_x                      0x140268A30
#define CEverQuest__GetDeityDesc_x                                 0x140268CE0
#define CEverQuest__GetLangDesc_x                                  0x140269110
#define CEverQuest__GetRaceDesc_x                                  0x1402694B0
#define CEverQuest__InterpretCmd_x                                 0x14026ADF0
#define CEverQuest__LeftClickedOnPlayer_x                          0x14027FEC0
#define CEverQuest__LMouseUp_x                                     0x14026C810
#define CEverQuest__RightClickedOnPlayer_x                         0x14027D6E0
#define CEverQuest__RMouseUp_x                                     0x140276DE0
#define CEverQuest__SetGameState_x                                 0x140282400
#define CEverQuest__UPCNotificationFlush_x                         0x140287D30 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14026C480
#define CEverQuest__ReportSuccessfulHeal_x                         0x140278190
#define CEverQuest__ReportSuccessfulHit_x                          0x140278FB0

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403BA4B0

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C0CB0
#define CGuild__GetGuildName_x                                     0x1400C0CF0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403DC9B0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402A2E50
#define CHotButton__SetCheck_x                                     0x1402A3120

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403F4290
#define CInvSlotMgr__MoveItem_x                                    0x1403F4470
#define CInvSlotMgr__SelectSlot_x                                  0x1403F5DF0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403F14C0
#define CInvSlot__SliderComplete_x                                 0x1403F2A10
#define CInvSlot__GetItemBase_x                                    0x1403ED0E0
#define CInvSlot__UpdateItem_x                                     0x1403F2EC0

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403F7180

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140418370
#define CItemDisplayWnd__UpdateStrings_x                           0x14041AC70
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140414E60
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140416600
#define CItemDisplayWnd__RequestConvertItem_x                      0x140417790

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404E0810
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404E2500

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x14051BFC0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1404115A0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14014DF20

// CLabel
#define CLabel__UpdateText_x                                       0x140422060

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405915E0
#define CListWnd__dCListWnd_x                                      0x140591A30
#define CListWnd__vftable_x                                        0x140AA0338
#define CListWnd__AddColumn_x                                      0x1405920D0
#define CListWnd__AddColumn1_x                                     0x140592170
#define CListWnd__AddLine_x                                        0x1405922D0
#define CListWnd__AddString_x                                      0x140592860
#define CListWnd__CalculateFirstVisibleLine_x                      0x140592DD0
#define CListWnd__CalculateVSBRange_x                              0x1405930B0
#define CListWnd__ClearSel_x                                       0x140593260
#define CListWnd__ClearAllSel_x                                    0x140593200
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405932C0
#define CListWnd__Compare_x                                        0x140593480
#define CListWnd__Draw_x                                           0x140593950
#define CListWnd__DrawColumnSeparators_x                           0x140594500
#define CListWnd__DrawHeader_x                                     0x1405945C0
#define CListWnd__DrawItem_x                                       0x140594CA0
#define CListWnd__DrawLine_x                                       0x140595620
#define CListWnd__DrawSeparator_x                                  0x140595AE0
#define CListWnd__EnableLine_x                                     0x140595F00
#define CListWnd__EnsureVisible_x                                  0x140595F60
#define CListWnd__ExtendSel_x                                      0x140596060
#define CListWnd__GetColumnMinWidth_x                              0x140596390
#define CListWnd__GetColumnWidth_x                                 0x140596410
#define CListWnd__GetCurSel_x                                      0x140596510
#define CListWnd__GetItemData_x                                    0x140596890
#define CListWnd__GetItemHeight_x                                  0x1405968D0
#define CListWnd__GetItemRect_x                                    0x140596AF0
#define CListWnd__GetItemText_x                                    0x140596D90
#define CListWnd__GetSelList_x                                     0x140596FE0
#define CListWnd__GetSeparatorRect_x                               0x1405971D0
#define CListWnd__InsertLine_x                                     0x140598640
#define CListWnd__RemoveLine_x                                     0x140598CB0
#define CListWnd__SetColors_x                                      0x140599070
#define CListWnd__SetColumnJustification_x                         0x140599090
#define CListWnd__SetColumnLabel_x                                 0x140599110
#define CListWnd__SetColumnWidth_x                                 0x1405992B0
#define CListWnd__SetCurSel_x                                      0x140599380
#define CListWnd__SetItemColor_x                                   0x1405995F0
#define CListWnd__SetItemData_x                                    0x140599690
#define CListWnd__SetItemText_x                                    0x1405998D0
#define CListWnd__Sort_x                                           0x140599CE0
#define CListWnd__ToggleSel_x                                      0x140599E50
#define CListWnd__SetColumnsSizable_x                              0x140599300
#define CListWnd__SetItemWnd_x                                     0x140599A00
#define CListWnd__GetItemWnd_x                                     0x140596F70
#define CListWnd__SetItemIcon_x                                    0x1405996D0
#define CListWnd__CalculateCustomWindowPositions_x                 0x140592BA0
#define CListWnd__SetVScrollPos_x                                  0x140599C40

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140435320

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A07168
#define MapViewMap__Clear_x                                        0x140436E90
#define MapViewMap__SetZoom_x                                      0x14043D4E0
#define MapViewMap__HandleLButtonDown_x                            0x14043A020

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14045EB80  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140465110
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x1404658B0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x1404690B0
#define CMerchantWnd__SelectBuySellSlot_x                          0x140468400
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14046D340

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14063FB80
#define CPacketScrambler__hton_x                                   0x14063FB70

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405BA6A0
#define CSidlManagerBase__FindAnimation1_x                         0x1405BA5E0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405BACD0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405BAA80
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405B99E0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405B9970
#define CSidlManagerBase__CreateXWnd_x                             0x1405B8FD0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404D3800
#define CSidlManager__CreateXWnd_x                                 0x1404D39C0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14057F130
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14057F240
#define CSidlScreenWnd__ConvertToRes_x                             0x1405C9830 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14057F3C0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14057E860
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14057E930
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14057EB40
#define CSidlScreenWnd__DrawSidlPiece_x                            0x14057FAB0
#define CSidlScreenWnd__EnableIniStorage_x                         0x14057FCE0
#define CSidlScreenWnd__GetChildItem_x                             0x14057FE80
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405800D0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x14058A210 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x140580440
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405807B0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140581060
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140581A50
#define CSidlScreenWnd__m_layoutCopy_x                             0x140EED808
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405820C0
#define CSidlScreenWnd__StoreIniVis_x                              0x1405828B0
#define CSidlScreenWnd__vftable_x                                  0x140A9F5A8
#define CSidlScreenWnd__WndNotification_x                          0x140582900

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14031BF90 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14031C430 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14031C360
#define CSkillMgr__IsActivatedSkill_x                              0x14031C7E0
#define CSkillMgr__IsCombatSkill_x                                 0x14031C820
#define CSkillMgr__GetSkillTimerDuration_x                         0x14031C750
#define CSkillMgr__GetSkillLastUsed_x                              0x14031C3B0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1404E3C00
#define CSliderWnd__SetValue_x                                     0x14059AFC0
#define CSliderWnd__SetNumTicks_x                                  0x14059AE40

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404D9E60

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x14059F910
#define CStmlWnd__CalculateHSBRange_x                              0x140589BD0
#define CStmlWnd__CalculateVSBRange_x                              0x1405A07B0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405A12A0
#define CStmlWnd__ForceParseNow_x                                  0x1405A1340
#define CStmlWnd__GetVisibleText_x                                 0x1405A1A10
#define CStmlWnd__MakeStmlColorTag_x                               0x1405A3770
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405A37B0
#define CStmlWnd__SetSTMLText_x                                    0x1405AA780
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405AA930
#define CStmlWnd__UpdateHistoryString_x                            0x1405AACC0

// CTabWnd
#define CTabWnd__Draw_x                                            0x14059B570
#define CTabWnd__DrawCurrentPage_x                                 0x14059B610
#define CTabWnd__DrawTab_x                                         0x14059B9E0
#define CTabWnd__GetTabRect_x                                      0x14059C040
#define CTabWnd__InsertPage_x                                      0x14059C310
#define CTabWnd__RemovePage_x                                      0x14059C590
#define CTabWnd__SetPage_x                                         0x14059C6F0
#define CTabWnd__UpdatePage_x                                      0x14059C9F0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405C3920
#define CPageWnd__SetTabText_x                                     0x1405C3990

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BA3F0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BA800


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405B2080
#define CTextureFont__DrawWrappedText1_x                           0x1405B1F90
#define CTextureFont__DrawWrappedText2_x                           0x1405B21B0
#define CTextureFont__GetTextExtent_x                              0x1405B2560
#define CTextureFont__GetHeight_x                                  0x1405B2520

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405C7F90

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x14057E440

// CXStr
#define CXStr__gFreeLists_x                                        0x140D1CEC0
#define CXStr__gCXStrAccess_x                                      0x140EED608

// CXWnd
#define CXWnd__BringToTop_x                                        0x140585320
#define CXWnd__ClrFocus_x                                          0x140585610
#define CXWnd__Destroy_x                                           0x140585790
#define CXWnd__DoAllDrawing_x                                      0x1405858A0
#define CXWnd__DrawColoredRect_x                                   0x140586050
#define CXWnd__DrawTooltip_x                                       0x1405876B0
#define CXWnd__DrawTooltipAtPoint_x                                0x140587760
#define CXWnd__GetChildItem_x                                      0x140588070
#define CXWnd__GetChildWndAt_x                                     0x140588130
#define CXWnd__GetClientRect_x                                     0x1405883E0
#define CXWnd__GetClientClipRect_x                                 0x140588290
#define CXWnd__GetRelativeRect_x                                   0x140589D10
#define CXWnd__GetScreenClipRect_x                                 0x140589E10
#define CXWnd__GetScreenRect_x                                     0x140589F90
#define CXWnd__GetTooltipRect_x                                    0x14058A110
#define CXWnd__IsActive_x                                          0x14058A6C0
#define CXWnd__IsDescendantOf_x                                    0x14058A6F0
#define CXWnd__IsReallyVisible_x                                   0x14058A760
#define CXWnd__IsType_x                                            0x14058A7A0
#define CXWnd__Minimize_x                                          0x14058A8A0
#define CXWnd__ProcessTransition_x                                 0x14058B770
#define CXWnd__Resize_x                                            0x14058B880
#define CXWnd__Right_x                                             0x14058B920
#define CXWnd__SetFocus_x                                          0x14058BCE0
#define CXWnd__SetFont_x                                           0x14058BD30
#define CXWnd__SetKeyTooltip_x                                     0x14058BE40
#define CXWnd__SetMouseOver_x                                      0x14058BF80
#define CXWnd__SetParent_x                                         0x14058C000
#define CXWnd__StartFade_x                                         0x14058C440
#define CXWnd__vftable_x                                           0x140A9FB98
#define CXWnd__CXWnd_x                                             0x140583EA0
#define CXWnd__dCXWnd_x                                            0x140584810

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405CEA70

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405AC570
#define CXWndManager__DrawCursor_x                                 0x1405AC850
#define CXWndManager__DrawWindows_x                                0x1405ACAB0
#define CXWndManager__GetKeyboardFlags_x                           0x1405AD170
#define CXWndManager__HandleKeyboardMsg_x                          0x1405AD1B0
#define CXWndManager__RemoveWnd_x                                  0x1405B0740

// CDBStr
#define CDBStr__GetString_x                                        0x140183B90

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x140649980

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CE890
#define CCharacterListWnd__EnterWorld_x                            0x1400CD590
#define CCharacterListWnd__Quit_x                                  0x1400CE870
#define CCharacterListWnd__UpdateList_x                            0x1400CF700

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x1406174B0
#define ItemBase__CreateItemTagString_x                            0x140617F10
#define ItemBase__GetImageNum_x                                    0x14061A490
#define ItemBase__GetItemValue_x                                   0x14061BF10
#define ItemBase__IsEmpty_x                                        0x14061DB20
#define ItemBase__IsKeyRingItem_x                                  0x14061E260
#define ItemBase__ValueSellMerchant_x                              0x140622410
#define ItemClient__CanDrop_x                                      0x1402A5430
#define ItemClient__CanGoInBag_x                                   0x1402A5560
#define ItemClient__CreateItemClient_x                             0x1402A5840
#define ItemClient__dItemClient_x                                  0x1402A52A0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401A31E0
#define EQ_LoadingS__Array_x                                       0x140D09230

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14062EDA0
#define PcBase__GetCombatAbility_x                                 0x14062F490
#define PcBase__GetCombatAbilityTimer_x                            0x14062F530
#define PcBase__GetItemContainedRealEstateIds_x                    0x14062FC80
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x140630770
#define PcClient__AlertInventoryChanged_x                          0x1402C79B0
#define PcClient__GetConLevel_x                                    0x1402C7FD0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402CA770
#define PcClient__HasLoreItem_x                                    0x1402CB740
#define PcZoneClient__GetItemRecastTimer_x                         0x1402D8FC0
#define PcZoneClient__RemoveMyAffect_x                             0x1402DCBB0

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x1402125C0  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x140212770  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x1402128D0  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x140212810  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x14024C580  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14017E3C0

// PlayerClient
#define PlayerBase__CanSee_x                                       0x14068DB80
#define PlayerBase__CanSee1_x                                      0x14068DC50
#define PlayerBase__GetVisibilityLineSegment_x                     0x14068E110
#define PlayerBase__HasProperty_x                                  0x14068E2E0
#define PlayerBase__IsTargetable_x                                 0x14068E3A0
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402E96A0
#define PlayerClient__GetPcClient_x                                0x1402EBED0
#define PlayerClient__PlayerClient_x                               0x1402E2970
#define PlayerClient__SetNameSpriteState_x                         0x1402EF320
#define PlayerClient__SetNameSpriteTint_x                          0x1402F02E0
#define PlayerZoneClient__ChangeHeight_x                           0x1402FE760
#define PlayerZoneClient__DoAttack_x                               0x1402FF470
#define PlayerZoneClient__GetLevel_x                               0x140302BA0
#define PlayerZoneClient__IsValidTeleport_x                        0x14024F310
#define PlayerZoneClient__LegalPlayerRace_x                        0x1401920C0

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402F8080  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402F8130  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402F8230
#define PlayerManagerClient__CreatePlayer_x                        0x1402F7B50
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x14068D740

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402AA890
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402AA490
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402AA500
#define KeypressHandler__ClearCommandStateArray_x                  0x1402AA820  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402AA9B0
#define KeypressHandler__HandleKeyUp_x                             0x1402AAAD0
#define KeypressHandler__SaveKeymapping_x                          0x1402AA730  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1406474C0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1406412B0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402D1CF0  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402D7000
#define PcZoneClient__GetPcSkillLimit_x                            0x1402D96C0
#define PcZoneClient__RemovePetEffect_x                            0x1402DCCB0
#define PcZoneClient__HasAlternateAbility_x                        0x1402DA2A0
#define PcZoneClient__CanEquipItem_x                               0x1402D5350
#define PcZoneClient__GetItemByID_x                                0x1402D8090
#define PcZoneClient__RemoveBuffEffect_x                           0x1402DCA30
#define PcZoneClient__BandolierSwap_x                              0x1402D43A0

// Doors
#define EQSwitch__UseSwitch_x                                      0x140253E40

// IconCache
#define IconCache__GetIcon_x                                       0x1403B0100

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403A4B30
#define CContainerMgr__CloseContainer_x                            0x1403A4470
#define CContainerMgr__OpenExperimentContainer_x                   0x1403A4EB0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x140498520

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x14029D620

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140429330
#define CLootWnd__RequestLootSlot_x                                0x14042A350

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401D2570
#define EQ_Spell__SpellAffects_x                                   0x1401D3830
#define EQ_Spell__SpellAffectBase_x                                0x1401D3790
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D7310
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D72C0
#define EQ_Spell__IsSPAStacking_x                                  0x1401D3450
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401D3010
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401D28E0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400BF8F0

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1404F4530
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404F3C40
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404F3440

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404FBBA0  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x14017AD80
#define CTaskManager__GetTaskStatus_x                              0x14017AE90
#define CTaskManager__GetElementDescription_x                      0x14017AA10

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401D08E0
#define EqSoundManager__PlayScriptMp3_x                            0x1401CF720
#define EqSoundManager__SoundAssistPlay_x                          0x1403215E0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140321920  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x14058D1E0
#define CTextureAnimation__SetCurCell_x                            0x14058D4F0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x14029B880

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x140661D10
#define CharacterBase__GetItemByGlobalIndex1_x                     0x140661D90
#define CharacterBase__IsExpansionFlag_x                           0x1401F3D30

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x1403828A0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140383210
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140384750

// messages
#define msg_spell_worn_off_x                                       0x140208EF0
#define msg_new_text_x                                             0x140204780
#define __msgTokenTextParam_x                                      0x1401FC2C0
#define msgTokenText_x                                             0x1401FC1E0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140322FA0
#define SpellManager__GetSpellByGroupAndRank_x                     0x140322EC0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x14069C760

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1404227B0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403A9810
#define CCursorAttachment__IsOkToActivate_x                        0x1403AC780
#define CCursorAttachment__RemoveAttachment_x                      0x1403ACA30
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405C6430
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405C6620
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405C6630

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x1401491C0
#define CFindItemWnd__Update_x                                     0x140149B60
#define CFindItemWnd__PickupSelectedItem_x                         0x140143690

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x140152A20
#define LootFiltersManager__GetItemFilterData_x                    0x140153530
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140153DD0
#define LootFiltersManager__SetItemLootFilter_x                    0x140154080

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14047B300

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x14031BB50
#define CResolutionHandler__UpdateResolution_x                     0x1406A0FC0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403A0E20

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x140666090  // Rename..?
#define CDistillerInfo__Instance_x                                 0x140665F80  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403C5B30
#define CGroupWnd__UpdateDisplay_x                                 0x1403C5710

// ItemBase
#define ItemBase__IsLore_x                                         0x14061E330
#define ItemBase__IsLoreEquipped_x                                 0x14061E3C0

#define MultipleItemMoveManager__ProcessMove_x                     0x1402BD5F0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14024C6E0
#define EQPlacedItemManager__GetItemByGuid_x                       0x14024C670
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14024C6B0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140316130

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x1401235A0
#define FactionManagerClient__HandleFactionMessage_x               0x140123950
#define FactionManagerClient__GetFactionStanding_x                 0x140122D70
#define FactionManagerClient__GetMaxFaction_x                      0x140122D70
#define FactionManagerClient__GetMinFaction_x                      0x140122C20

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AC980

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x14012ED40

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401ABB40
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401AAEC0
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401AB960  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401AB8E0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x140328000

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140316130

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x140212960

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140582EF0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140084F80

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140339AD0

// AchievementManager
#define AchievementManager__Instance_x                             0x14008C950

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x14064A500
#define FreeToPlayClient__RestrictionInfo_x                        0x140AB3BF0

// UdpConnection
#define UdpConnection__GetStats_x                                  0x140529070

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
