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

#define __ClientDate                                               20251007u
#define __ExpectedVersionDate                                     "Oct  7 2025"
#define __ExpectedVersionTime                                     "15:58:25"
#define __ActualVersionDate_x                                      0x140964AC0
#define __ActualVersionTime_x                                      0x140964AB0
#define __ActualVersionBuild_x                                     0x1408FA690

// Memory Protection
#define __MemChecker0_x                                            0x1402C0650
#define __MemChecker1_x                                            0x1405892B0
#define __MemChecker4_x                                            0x14028DF90
#define __EncryptPad0_x                                            0x140D34ED0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E6D910
#define instEQZoneInfo_x                                           0x140E6DB04 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x140221E90
#define __gfMaxZoomCameraDistance_x                                0x1408FB938
#define __gfMaxCameraDistance_x                                    0x140AA3194
#define __CurrentSocial_x                                          0x140BF0950 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D2C720
#define g_eqCommandStates_x                                        0x140D2D7B0
#define __CommandList_x                                            0x140D2D9F0
#define __ScreenMode_x                                             0x140DB5224
#define __gWorld_x                                                 0x140E65DD8
#define __gpbCommandEvent_x                                        0x140E66330
#define __ServerHost_x                                             0x140E66528
#define __Guilds_x                                                 0x140E6C4C0
#define __MemCheckBitmask_x                                        0x140E6DE4F
#define __MemCheckActive_x                                         0x140E6F559
#define __MouseEventTime_x                                         0x140EE2EC8
#define DI8__MouseState_x                                          0x140EE7128
#define __heqmain_x                                                0x140EE95C8
#define DI8__Mouse_x                                               0x140EE7078
#define __HWnd_x                                                   0x140EE7100
#define __Mouse_x                                                  0x140EE7034
#define DI8__Keyboard_x                                            0x140EE7050
#define __LoginName_x                                              0x140EE9CAC
#define __CurrentMapLabel_x                                        0x140EFD7C0
#define __LabelCache_x                                             0x140EFE390
#define __ChatFilterDefs_x                                         0x140A3D8F0
#define Teleport_Table_Size_x                                      0x140E663C0
#define Teleport_Table_x                                           0x140E66850

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E68850
#define pinstActiveBanker_x                                        0x140E66208
#define pinstActiveCorpse_x                                        0x140E661F8
#define pinstActiveGMaster_x                                       0x140E66200
#define pinstActiveMerchant_x                                      0x140E661F0
#define pinstAltAdvManager_x                                       0x140DB6058
#define pinstCEverQuest_x                                          0x140EE7070
#define pinstCamActor_x                                            0x140DB5210
#define pinstCDBStr_x                                              0x140DB4E10
#define pinstCDisplay_x                                            0x140E65D90
#define pinstControlledPlayer_x                                    0x140E66298
#define pinstCResolutionHandler_x                                  0x140F0EBC8
#define pinstCSidlManager_x                                        0x140F0F930
#define pinstCXWndManager_x                                        0x140F0F928
#define instDynamicZone_x                                          0x140E6C380 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E6C3CE
#define instExpeditionName_x                                       0x140E6C40E
#define pinstDZMember_x                                            0x140E6C498
#define pinstDZTimerInfo_x                                         0x140E6C4A0
#define pinstEqLogin_x                                             0x140EE95F0
#define instTribute_x                                              0x140D27D60
#define pinstDeviceInputProxy_x                                    0x140E6D96C
#define pinstEQSoundManager_x                                      0x140DB63E0
#define pinstEQSpellStrings_x                                      0x140D999A0
#define pinstSGraphicsEngine_x                                     0x140F0E958
#define pinstLocalPC_x                                             0x140E65DC0
#define pinstLocalPlayer_x                                         0x140E661E8
#define pinstCMercenaryClientManager_x                             0x140EE47D8
#define pinstModelPlayer_x                                         0x140E66218
#define pinstRenderInterface_x                                     0x140F0E970
#define pinstSkillMgr_x                                            0x140EE6478
#define pinstSpawnManager_x                                        0x140EE4BA0
#define pinstSpellManager_x                                        0x140EE64E0
#define pinstStringTable_x                                         0x140E65DC8
#define pinstSwitchManager_x                                       0x140E65D10
#define pinstTarget_x                                              0x140E66290
#define pinstTaskMember_x                                          0x140D27D50 // Part of g_taskManager
#define pinstTradeTarget_x                                         0x140E66210
#define instTributeActive_x                                        0x140D27D89
#define pinstViewActor_x                                           0x140DB5208
#define pinstWorldData_x                                           0x140E66418
#define pinstPlayerPath_x                                          0x140EE4BC8
#define pinstTargetIndicator_x                                     0x140EE6590
#define EQObject_Top_x                                             0x140E66338

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140EFA920
#define pinstCContainerMgr_x                                       0x140DB5240
#define pinstCContextMenuManager_x                                 0x140F0F610
#define pinstCInvSlotMgr_x                                         0x140DB51F8
#define pinstCItemDisplayManager_x                                 0x140EFD390
#define pinstCPopupWndManager_x                                    0x140EFDC20
#define pinstCSpellDisplayMgr_x                                    0x140EFE270
#define pinstCTaskManager_x                                        0x140BF0C90
#define pinstEQSuiteTextureLoader_x                                0x140D3E5E0
#define pinstItemIconCache_x                                       0x140EFAC80
#define pinstLootFiltersManager_x                                  0x140DB4858
#define pinstGFViewListener_x                                      0x140F0EDE8


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x14024BB80
#define __CastRay_x                                                0x140243E10
#define __CastRay2_x                                               0x140243B10
#define __compress_block_x                                         0x14053E670
#define __ConvertItemTags_x                                        0x140244270
#define __CleanItemTags_x                                          0x14008A750
#define __CreateCascadeMenuItems_x                                 0x14018E4C0
#define __decompress_block_x                                       0x140584AC0
#define __DoesFileExist_x                                          0x14058D160
#define __EQGetTime_x                                              0x140589860
#define __ExecuteCmd_x                                             0x1402194F0
#define __FixHeading_x                                             0x140643EA0
#define __FlushDxKeyboard_x                                        0x140344790
#define __get_bearing_x                                            0x14024DDB0
#define __get_melee_range_x                                        0x14024DEA0
#define __GetAnimationCache_x                                      0x1403C5AC0
#define __GetGaugeValueFromEQ_x                                    0x1404FE1D0
#define __GetLabelFromEQ_x                                         0x1404FF7D0
#define __GetXTargetType_x                                         0x140645180   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140643F20
#define __HelpPath_x                                               0x140EE2D90   // Why?
#define __NewUIINI_x                                               0x14050B220   // Why?
#define __ProcessDeviceEvents_x                                    0x14028E5A0
#define __ProcessGameEvents_x                                      0x1402830B0
#define __ProcessKeyboardEvents_x                                  0x140345EE0
#define __ProcessMouseEvents_x                                     0x1402847C0
#define __SaveColors_x                                             0x14019E4E0
#define __STMLToText_x                                             0x14059CD20
#define __WndProc_x                                                0x140342F30
#define CMemoryMappedFile__SetFile_x                               0x1407F0F80
#define DrawNetStatus_x                                            0x1402CED40
#define Util__FastTime_x                                           0x140588D90
#define __eq_delete_x                                              0x1406BCFA8
#define __eq_new_x                                                 0x1406BD200
#define __CopyLayout_x                                             0x1402BCA70
#define __ThrottleFrameRate_x                                      0x140272752
#define __ThrottleFrameRateEnd_x                                   0x1402727B2

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x1403559C0
#define CAAWnd__Update_x                                           0x140355CC0
#define CAAWnd__UpdateSelected_x                                   0x140356EC0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400ACCF0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A56D0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140847768
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AD620

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401A9740
#define AltAdvManager__IsAbilityReady_x                            0x1401A9BD0
#define AltAdvManager__GetAAById_x                                 0x1401A9010
#define AltAdvManager__CanTrainAbility_x                           0x1401A8E00
#define AltAdvManager__CanSeeAbility_x                             0x1401A8AC0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D3680
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D44E0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D4730
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400E8F70
#define CharacterZoneClient__CanUseItem_x                          0x1400E9530
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D5100
#define CharacterZoneClient__CastSpell_x                           0x1400D51A0
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E4D70
#define CharacterZoneClient__Cur_HP_x                              0x1400EAC50
#define CharacterZoneClient__Cur_Mana_x                            0x1400EAE10
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D8510
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F1490
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FFD30  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D99B0
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E8870
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F3040
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F1F20
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D9B30
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C9E60
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400CB860
#define CharacterZoneClient__GetHPRegen_x                          0x1400F2660
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400EA8C0
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F32D0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D9BB0
#define CharacterZoneClient__GetManaRegen_x                        0x1400F4050
#define CharacterZoneClient__GetModCap_x                           0x1400FB4E0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D9E40
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400DA010
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CE9F0
#define CharacterZoneClient__HasSkill_x                            0x1400F7020
#define CharacterZoneClient__HitBySpell_x                          0x1400DAAA0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DE410
#define CharacterZoneClient__MakeMeVisible_x                       0x1400FAFC0
#define CharacterZoneClient__Max_Endurance_x                       0x1402EABA0  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400FB310
#define CharacterZoneClient__Max_Mana_x                            0x1402EADC0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400FB770
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E18C0
#define CharacterZoneClient__SpellDuration_x                       0x1400E25F0
#define CharacterZoneClient__TotalEffect_x                         0x1400E3950
#define CharacterZoneClient__UseSkill_x                            0x140100CB0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140374690

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14037EA20

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14037A8B0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14037E4A0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140381190

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AC2650

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403A3FF0
#define CChatWindowManager__InitContextMenu_x                      0x1403A4180
#define CChatWindowManager__FreeChatWindow_x                       0x1403A3050
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403AC0D0
#define CChatWindowManager__CreateChatWindow_x                     0x1403A2A90

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x1401091F0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403AD120
#define CChatWindow__Clear_x                                       0x1403AE0D0
#define CChatWindow__WndNotification_x                             0x1403AF2B0
#define CChatWindow__AddHistory_x                                  0x1403ADBD0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405CA4F0
#define CContextMenu__RemoveMenuItem_x                             0x1405CA8E0
#define CContextMenu__RemoveAllMenuItems_x                         0x1405CA8B0
#define CContextMenu__CheckMenuItem_x                              0x1405CA720
#define CContextMenu__SetMenuItem_x                                0x1405CA900
#define CContextMenu__AddSeparator_x                               0x1405CA660

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405BC3B0
#define CContextMenuManager__RemoveMenu_x                          0x1405BC990
#define CContextMenuManager__PopupMenu_x                           0x1405BC6D0
#define CContextMenuManager__Flush_x                               0x1405BC430
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403BD670

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x140696F50
#define CChatService__GetFriendName_x                              0x140696F60

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405AD2E0
#define CComboWnd__Draw_x                                          0x1405AD3E0
#define CComboWnd__GetCurChoice_x                                  0x1405AD6C0  // unused
#define CComboWnd__GetListRect_x                                   0x1405AD760
#define CComboWnd__InsertChoice_x                                  0x1405ADAA0
#define CComboWnd__SetColors_x                                     0x1405ADE30
#define CComboWnd__SetChoice_x                                     0x1405ADDF0
#define CComboWnd__GetItemCount_x                                  0x1405AD750
#define CComboWnd__GetCurChoiceText_x                              0x1405AD700  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405AD690
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405ADB60

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403BB3A0
#define CContainerWnd__SetContainer_x                              0x140413710
#define CContainerWnd__vftable_x                                   0x1409D8FC0

// CDisplay
#define CDisplay__cameraType_x                                     0x140DB4FCC
#define CDisplay__ZoneMainUI_x                                     0x1405E4720
#define CDisplay__PreZoneMainUI_x                                  0x14019B3E0
#define CDisplay__CleanGameUI_x                                    0x14018D580
#define CDisplay__GetClickedActor_x                                0x140191750
#define CDisplay__GetUserDefinedColor_x                            0x1401923C0
#define CDisplay__InitCharSelectUI_x                               0x140192670
#define CDisplay__ReloadUI_x                                       0x14019D6E0
#define CDisplay__RestartUI_x                                      0x1401FE1B0
#define CDisplay__WriteTextHD2_x                                   0x1401A46F0
#define CDisplay__TrueDistance_x                                   0x1401A43A0
#define CDisplay__SetViewActor_x                                   0x1401A0C10
#define CDisplay__GetFloorHeight_x                                 0x1401919B0
#define CDisplay__ToggleScreenshotMode_x                           0x1401A3E90
#define CDisplay__RealRender_World_x                               0x14019CAB0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405EE950
#define CEditWnd__DrawCaret_x                                      0x1405E0440  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405E08E0
#define CEditWnd__GetCaretPt_x                                     0x1405E0B60  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405E0BA0
#define CEditWnd__GetDisplayString_x                               0x1405E0E10
#define CEditWnd__GetHorzOffset_x                                  0x1405E1040
#define CEditWnd__GetLineForPrintableChar_x                        0x1405E1190
#define CEditWnd__GetSelStartPt_x                                  0x1405E1470  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405E12C0
#define CEditWnd__PointFromPrintableChar_x                         0x1405E2020
#define CEditWnd__ReplaceSelection_x                               0x1405E23D0
#define CEditWnd__SelectableCharFromPoint_x                        0x1405E2870
#define CEditWnd__SetEditable_x                                    0x1405E2AF0
#define CEditWnd__SetWindowText_x                                  0x1405E2B20

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140273860
#define CEverQuest__ClickedPlayer_x                                0x140267820
#define CEverQuest__CreateTargetIndicator_x                        0x1402680E0
#define CEverQuest__DoTellWindow_x                                 0x140108F00 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1401097D0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140275250
#define CEverQuest__dsp_chat_x                                     0x140108940 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x14029FFC0
#define CEverQuest__Emote_x                                        0x140275C40
#define CEverQuest__GetBodyTypeDesc_x                              0x140276A20
#define CEverQuest__GetClassDesc_x                                 0x140276A80
#define CEverQuest__GetClassThreeLetterCode_x                      0x140276E50
#define CEverQuest__GetDeityDesc_x                                 0x140277100
#define CEverQuest__GetLangDesc_x                                  0x140277530
#define CEverQuest__GetRaceDesc_x                                  0x1402778D0
#define CEverQuest__InterpretCmd_x                                 0x140279260
#define CEverQuest__LeftClickedOnPlayer_x                          0x14028E610
#define CEverQuest__LMouseUp_x                                     0x14027ACE0
#define CEverQuest__RightClickedOnPlayer_x                         0x14028BC90
#define CEverQuest__RMouseUp_x                                     0x140285350
#define CEverQuest__SetGameState_x                                 0x140291080
#define CEverQuest__UPCNotificationFlush_x                         0x1402969F0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14027A940
#define CEverQuest__ReportSuccessfulHeal_x                         0x140286720
#define CEverQuest__ReportSuccessfulHit_x                          0x140287540

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403D09B0

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C36D0
#define CGuild__GetGuildName_x                                     0x1400C3710

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403F3DB0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402B2130
#define CHotButton__SetCheck_x                                     0x1402B2400

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x14040C420
#define CInvSlotMgr__MoveItem_x                                    0x14040C600
#define CInvSlotMgr__SelectSlot_x                                  0x14040E030

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x140409610
#define CInvSlot__SliderComplete_x                                 0x14040AB60
#define CInvSlot__GetItemBase_x                                    0x140404FA0
#define CInvSlot__UpdateItem_x                                     0x14040B020

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x14040F3C0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1404308B0
#define CItemDisplayWnd__UpdateStrings_x                           0x1404334C0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x14042D080
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x14042E9F0
#define CItemDisplayWnd__RequestConvertItem_x                      0x14042FCC0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404FAC50
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404FC9E0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x1405379D0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140429740

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x1401542A0

// CLabel
#define CLabel__UpdateText_x                                       0x14043A8B0

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405B0C70
#define CListWnd__dCListWnd_x                                      0x1405B10C0
#define CListWnd__vftable_x                                        0x140AC07A0
#define CListWnd__AddColumn_x                                      0x1405B1760
#define CListWnd__AddColumn1_x                                     0x1405B1800
#define CListWnd__AddLine_x                                        0x1405B1960
#define CListWnd__AddString_x                                      0x1405B1EF0
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405B2460
#define CListWnd__CalculateVSBRange_x                              0x1405B2740
#define CListWnd__ClearSel_x                                       0x1405B28F0
#define CListWnd__ClearAllSel_x                                    0x1405B2890
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405B2950
#define CListWnd__Compare_x                                        0x1405B2B00
#define CListWnd__Draw_x                                           0x1405B2FD0
#define CListWnd__DrawColumnSeparators_x                           0x1405B3B80
#define CListWnd__DrawHeader_x                                     0x1405B3C40
#define CListWnd__DrawItem_x                                       0x1405B4310
#define CListWnd__DrawLine_x                                       0x1405B4C90
#define CListWnd__DrawSeparator_x                                  0x1405B5150
#define CListWnd__EnableLine_x                                     0x1405B5570
#define CListWnd__EnsureVisible_x                                  0x1405B55D0
#define CListWnd__ExtendSel_x                                      0x1405B56D0
#define CListWnd__GetColumnMinWidth_x                              0x1405B5A60
#define CListWnd__GetColumnWidth_x                                 0x1405B5AE0
#define CListWnd__GetCurSel_x                                      0x1405B5BE0
#define CListWnd__GetItemData_x                                    0x1405B5F60
#define CListWnd__GetItemHeight_x                                  0x1405B5FA0
#define CListWnd__GetItemRect_x                                    0x1405B61C0
#define CListWnd__GetItemText_x                                    0x1405B6460
#define CListWnd__GetSelList_x                                     0x1405B66B0
#define CListWnd__GetSeparatorRect_x                               0x1405B68A0
#define CListWnd__InsertLine_x                                     0x1405B7D00
#define CListWnd__RemoveLine_x                                     0x1405B8370
#define CListWnd__SetColors_x                                      0x1405B8730
#define CListWnd__SetColumnJustification_x                         0x1405B8750
#define CListWnd__SetColumnLabel_x                                 0x1405B87D0
#define CListWnd__SetColumnWidth_x                                 0x1405B8970
#define CListWnd__SetCurSel_x                                      0x1405B8A40
#define CListWnd__SetItemColor_x                                   0x1405B8CB0
#define CListWnd__SetItemData_x                                    0x1405B8D50
#define CListWnd__SetItemText_x                                    0x1405B8F90
#define CListWnd__Sort_x                                           0x1405B93A0
#define CListWnd__ToggleSel_x                                      0x1405B9510
#define CListWnd__SetColumnsSizable_x                              0x1405B89C0
#define CListWnd__SetItemWnd_x                                     0x1405B90C0
#define CListWnd__GetItemWnd_x                                     0x1405B6640
#define CListWnd__SetItemIcon_x                                    0x1405B8D90
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405B2230
#define CListWnd__SetVScrollPos_x                                  0x1405B9300

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x14044DD00

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A262F0
#define MapViewMap__Clear_x                                        0x14044F880
#define MapViewMap__SetZoom_x                                      0x140455ED0
#define MapViewMap__HandleLButtonDown_x                            0x140452A10

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140477620  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x14047DDF0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x14047E590
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140481DE0
#define CMerchantWnd__SelectBuySellSlot_x                          0x140481130
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140486090

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x140672100
#define CPacketScrambler__hton_x                                   0x1406720F0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405D9D00
#define CSidlManagerBase__FindAnimation1_x                         0x1405D9C40
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405DA330
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405DA0E0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405D9040
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405D8FD0
#define CSidlManagerBase__CreateXWnd_x                             0x1405D8610

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404EDC50
#define CSidlManager__CreateXWnd_x                                 0x1404EDE10

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14059E810
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14059E940
#define CSidlScreenWnd__ConvertToRes_x                             0x1405E8E90 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14059EAC0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14059DF40
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14059E010
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14059E220
#define CSidlScreenWnd__DrawSidlPiece_x                            0x14059F1B0
#define CSidlScreenWnd__EnableIniStorage_x                         0x14059F3E0
#define CSidlScreenWnd__GetChildItem_x                             0x14059F580
#define CSidlScreenWnd__GetSidlPiece_x                             0x14059F7D0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405A9840 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x14059FB40
#define CSidlScreenWnd__LoadIniInfo_x                              0x14059FEB0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405A0770
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405A1170
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F0EC88
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405A1800
#define CSidlScreenWnd__StoreIniVis_x                              0x1405A1FF0
#define CSidlScreenWnd__vftable_x                                  0x140ABFA28
#define CSidlScreenWnd__WndNotification_x                          0x1405A2040

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14032D6A0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14032DB40 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14032DA70
#define CSkillMgr__IsActivatedSkill_x                              0x14032DEF0
#define CSkillMgr__IsCombatSkill_x                                 0x14032DF30
#define CSkillMgr__GetSkillTimerDuration_x                         0x14032DE60
#define CSkillMgr__GetSkillLastUsed_x                              0x14032DAC0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x140509900
#define CSliderWnd__SetValue_x                                     0x1405BA680
#define CSliderWnd__SetNumTicks_x                                  0x1405BA500

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404F43A0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405BEE10
#define CStmlWnd__CalculateHSBRange_x                              0x1405A9210
#define CStmlWnd__CalculateVSBRange_x                              0x1405BFCB0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405C07B0
#define CStmlWnd__ForceParseNow_x                                  0x1405C0850
#define CStmlWnd__GetVisibleText_x                                 0x1405C0F20
#define CStmlWnd__MakeStmlColorTag_x                               0x1405C2C80
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405C2CC0
#define CStmlWnd__SetSTMLText_x                                    0x1405C9C90
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405C9E40
#define CStmlWnd__UpdateHistoryString_x                            0x1405CA1D0

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405BAA50
#define CTabWnd__DrawCurrentPage_x                                 0x1405BAAF0
#define CTabWnd__DrawTab_x                                         0x1405BAEC0
#define CTabWnd__GetTabRect_x                                      0x1405BB520
#define CTabWnd__InsertPage_x                                      0x1405BB7F0
#define CTabWnd__RemovePage_x                                      0x1405BBA80
#define CTabWnd__SetPage_x                                         0x1405BBBE0
#define CTabWnd__UpdatePage_x                                      0x1405BBEE0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405E2F80
#define CPageWnd__SetTabText_x                                     0x1405E2FF0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BCCE0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BD0F0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405D16F0
#define CTextureFont__DrawWrappedText1_x                           0x1405D1600
#define CTextureFont__DrawWrappedText2_x                           0x1405D1820
#define CTextureFont__GetTextExtent_x                              0x1405D1BD0
#define CTextureFont__GetHeight_x                                  0x1405D1B90

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405E75F0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x14059B410

// CXStr
#define CXStr__gFreeLists_x                                        0x140D3DF50
#define CXStr__gCXStrAccess_x                                      0x140F0E7E8

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405A48C0
#define CXWnd__ClrFocus_x                                          0x1405A4BB0
#define CXWnd__Destroy_x                                           0x1405A4D30
#define CXWnd__DoAllDrawing_x                                      0x1405A4E30
#define CXWnd__DrawColoredRect_x                                   0x1405A5600
#define CXWnd__DrawTooltip_x                                       0x1405A6C80
#define CXWnd__DrawTooltipAtPoint_x                                0x1405A6D30
#define CXWnd__GetChildItem_x                                      0x1405A7640
#define CXWnd__GetChildWndAt_x                                     0x1405A76F0
#define CXWnd__GetClientRect_x                                     0x1405A79A0
#define CXWnd__GetClientClipRect_x                                 0x1405A7860
#define CXWnd__GetRelativeRect_x                                   0x1405A9340
#define CXWnd__GetScreenClipRect_x                                 0x1405A9450
#define CXWnd__GetScreenRect_x                                     0x1405A95C0
#define CXWnd__GetTooltipRect_x                                    0x1405A9740
#define CXWnd__IsActive_x                                          0x1405A9D00
#define CXWnd__IsDescendantOf_x                                    0x1405A9D30
#define CXWnd__IsReallyVisible_x                                   0x1405A9DA0
#define CXWnd__IsType_x                                            0x1405A9DF0
#define CXWnd__Minimize_x                                          0x1405A9EF0
#define CXWnd__ProcessTransition_x                                 0x1405AADC0
#define CXWnd__Resize_x                                            0x1405AAEE0
#define CXWnd__Right_x                                             0x1405AAF80
#define CXWnd__SetFocus_x                                          0x1405AB340
#define CXWnd__SetFont_x                                           0x1405AB390
#define CXWnd__SetKeyTooltip_x                                     0x1405AB4A0
#define CXWnd__SetMouseOver_x                                      0x1405AB5E0
#define CXWnd__SetParent_x                                         0x1405AB660
#define CXWnd__StartFade_x                                         0x1405ABAA0
#define CXWnd__vftable_x                                           0x140AC0000
#define CXWnd__CXWnd_x                                             0x1405A3460
#define CXWnd__dCXWnd_x                                            0x1405A3DB0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405EE0D0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405CBAB0
#define CXWndManager__DrawCursor_x                                 0x1405CBD90
#define CXWndManager__DrawWindows_x                                0x1405CBFF0
#define CXWndManager__GetKeyboardFlags_x                           0x1405CC640
#define CXWndManager__HandleKeyboardMsg_x                          0x1405CC680
#define CXWndManager__RemoveWnd_x                                  0x1405CFDC0

// CDBStr
#define CDBStr__GetString_x                                        0x14018B740

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x14067BF50

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D1180
#define CCharacterListWnd__EnterWorld_x                            0x1400D0190
#define CCharacterListWnd__Quit_x                                  0x1400D1160
#define CCharacterListWnd__UpdateList_x                            0x1400D1FE0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140649EE0
#define ItemBase__CreateItemTagString_x                            0x14064A940
#define ItemBase__GetImageNum_x                                    0x14064CEE0
#define ItemBase__GetItemValue_x                                   0x14064EDA0
#define ItemBase__IsEmpty_x                                        0x1406509B0
#define ItemBase__IsKeyRingItem_x                                  0x1406510C0
#define ItemBase__ValueSellMerchant_x                              0x1406552D0
#define ItemClient__CanDrop_x                                      0x1402B4A20
#define ItemClient__CanGoInBag_x                                   0x1402B4B50
#define ItemClient__CreateItemClient_x                             0x1402B4DD0
#define ItemClient__dItemClient_x                                  0x1402B4890

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401AB0F0
#define EQ_LoadingS__Array_x                                       0x140D2A230

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140661070
#define PcBase__GetCombatAbility_x                                 0x140661760
#define PcBase__GetCombatAbilityTimer_x                            0x140661800
#define PcBase__GetItemContainedRealEstateIds_x                    0x140661FA0
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x140662AE0
#define PcClient__AlertInventoryChanged_x                          0x1402D6F70
#define PcClient__GetConLevel_x                                    0x1402D7580  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402D9D00
#define PcClient__HasLoreItem_x                                    0x1402DADB0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402E7EE0
#define PcZoneClient__RemoveMyAffect_x                             0x1402EBCE0

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x14021DE30  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x14021DFE0  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x14021E140  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x14021E080  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x140258C70  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140185F70

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140636C40
#define PlayerBase__CanSee1_x                                      0x140636D10
#define PlayerBase__GetVisibilityLineSegment_x                     0x1406371F0
#define PlayerBase__HasProperty_x                                  0x1406373C0
#define PlayerBase__IsTargetable_x                                 0x140637480
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402F9870
#define PlayerClient__GetPcClient_x                                0x1402FC3A0
#define PlayerClient__PlayerClient_x                               0x1402F1BC0
#define PlayerClient__SetNameSpriteState_x                         0x1402FFAD0
#define PlayerClient__SetNameSpriteTint_x                          0x140300A90
#define PlayerZoneClient__ChangeHeight_x                           0x14030F5C0
#define PlayerZoneClient__DoAttack_x                               0x1403102D0
#define PlayerZoneClient__GetLevel_x                               0x140313A10
#define PlayerZoneClient__IsValidTeleport_x                        0x14025BA00
#define PlayerZoneClient__LegalPlayerRace_x                        0x140199C60

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x140308AC0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x140308B70  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x140308C70
#define PlayerManagerClient__CreatePlayer_x                        0x140308590
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140636800

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402B9F90
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402B9890
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402B9900
#define KeypressHandler__ClearCommandStateArray_x                  0x1402B9F20  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402BA0B0
#define KeypressHandler__HandleKeyUp_x                             0x1402BA1D0
#define KeypressHandler__SaveKeymapping_x                          0x1402B9DB0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140679A70  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x140673840

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402E0C80  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402E6000
#define PcZoneClient__GetPcSkillLimit_x                            0x1402E8670
#define PcZoneClient__RemovePetEffect_x                            0x1402EBFC0
#define PcZoneClient__HasAlternateAbility_x                        0x1402E9260
#define PcZoneClient__CanEquipItem_x                               0x1402E4300
#define PcZoneClient__GetItemByID_x                                0x1402E6F30
#define PcZoneClient__RemoveBuffEffect_x                           0x1402EBB60
#define PcZoneClient__BandolierSwap_x                              0x1402E3350

// Doors
#define EQSwitch__UseSwitch_x                                      0x140260530

// IconCache
#define IconCache__GetIcon_x                                       0x1403C5AF0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403BA150
#define CContainerMgr__CloseContainer_x                            0x1403B9A90
#define CContainerMgr__OpenExperimentContainer_x                   0x1403BA4D0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404B1880

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402AC450

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140441BA0
#define CLootWnd__RequestLootSlot_x                                0x140442BD0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401DA800
#define EQ_Spell__SpellAffects_x                                   0x1401DBAD0
#define EQ_Spell__SpellAffectBase_x                                0x1401DBA30
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400DA1A0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400DA150
#define EQ_Spell__IsSPAStacking_x                                  0x1401DB700
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401DB2B0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401DAB80

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C2250

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x14050EA00
#define CTargetWnd__RefreshTargetBuffs_x                           0x14050E110
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x14050D920

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1405160A0  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140182920
#define CTaskManager__GetTaskStatus_x                              0x140182A30
#define CTaskManager__GetElementDescription_x                      0x1401825B0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401D8B20
#define EqSoundManager__PlayScriptMp3_x                            0x1401D7960
#define EqSoundManager__SoundAssistPlay_x                          0x140332CE0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140333020  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405AC870
#define CTextureAnimation__SetCurCell_x                            0x1405ACB80

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402AA650

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x140694620
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1406946A0
#define CharacterBase__IsExpansionFlag_x                           0x1401FD820

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140394C30
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140395650
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140396BA0

// messages
#define msg_spell_worn_off_x                                       0x140214450
#define msg_new_text_x                                             0x14020FC00
#define __msgTokenTextParam_x                                      0x1402072E0
#define msgTokenText_x                                             0x1402071F0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140334910
#define SpellManager__GetSpellByGroupAndRank_x                     0x140334830

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140645560

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x14043AFF0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403BEEA0
#define CCursorAttachment__IsOkToActivate_x                        0x1403C2160
#define CCursorAttachment__RemoveAttachment_x                      0x1403C2410
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405E5A90
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405E5C80
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405E5C90

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x14014EFF0
#define CFindItemWnd__Update_x                                     0x14014F990
#define CFindItemWnd__PickupSelectedItem_x                         0x140149430

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x1401591E0
#define LootFiltersManager__GetItemFilterData_x                    0x140159CF0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14015A590
#define LootFiltersManager__SetItemLootFilter_x                    0x14015A840

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x140494250

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x14032D260
#define CResolutionHandler__UpdateResolution_x                     0x140591DC0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403B6460

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x140698AA0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x140698990  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403DCCE0
#define CGroupWnd__UpdateDisplay_x                                 0x1403DC8C0

// ItemBase
#define ItemBase__IsLore_x                                         0x1406511F0
#define ItemBase__IsLoreEquipped_x                                 0x140651280

#define MultipleItemMoveManager__ProcessMove_x                     0x1402CCE20

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140258DD0
#define EQPlacedItemManager__GetItemByGuid_x                       0x140258D60
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140258DA0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1403276E0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140126BC0
#define FactionManagerClient__HandleFactionMessage_x               0x140126FA0
#define FactionManagerClient__GetFactionStanding_x                 0x140126390
#define FactionManagerClient__GetMaxFaction_x                      0x140126390
#define FactionManagerClient__GetMinFaction_x                      0x140126240

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AF300

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x1401323A0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401B3C60
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401B2E20
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401B3A80  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401B3A00  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x140339C30

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1403276E0

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x14021E1D0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405A2630

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140086E10

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14034B520

// AchievementManager
#define AchievementManager__Instance_x                             0x14008EFD0

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x14067CAD0
#define FreeToPlayClient__RestrictionInfo_x                        0x140AD48E0

// UdpConnection
#define UdpConnection__GetStats_x                                  0x140544A90

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x14082EF90
#define CGFScreenWnd__CGFScreenWnd_x                               0x140071500
#define CGFScreenWnd__CGFScreenWnd1_x                              0x140071690
#define CGFScreenWnd__dCGFScreenWnd_x                              0x140071840

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
