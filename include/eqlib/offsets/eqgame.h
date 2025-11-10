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

#define __ClientDate                                               20251103u
#define __ExpectedVersionDate                                     "Nov  3 2025"
#define __ExpectedVersionTime                                     "13:06:52"
#define __ActualVersionDate_x                                      0x1409708F8
#define __ActualVersionTime_x                                      0x1409708E8
#define __ActualVersionBuild_x                                     0x140905A90

// Memory Protection
#define __MemChecker0_x                                            0x1402C3EC0
#define __MemChecker1_x                                            0x140592650
#define __MemChecker4_x                                            0x140291650
#define __EncryptPad0_x                                            0x140D43EE0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E7C930
#define instEQZoneInfo_x                                           0x140E7CB24 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x140225280
#define __gfMaxZoomCameraDistance_x                                0x140906D38
#define __gfMaxCameraDistance_x                                    0x140AB0C84
#define __CurrentSocial_x                                          0x140BFF95C // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D3B720
#define g_eqCommandStates_x                                        0x140D3C7C0
#define __CommandList_x                                            0x140D3CA00
#define __ScreenMode_x                                             0x140DC42E4
#define __gWorld_x                                                 0x140E77328
#define __gpbCommandEvent_x                                        0x140E74DC8
#define __ServerHost_x                                             0x140E74FB8
#define __Guilds_x                                                 0x140E7B4F0
#define __MemCheckBitmask_x                                        0x140E7CE6F
#define __MemCheckActive_x                                         0x140E7E585
#define __MouseEventTime_x                                         0x140EF1F00
#define DI8__MouseState_x                                          0x140EF6188
#define __heqmain_x                                                0x140EF8628
#define DI8__Mouse_x                                               0x140EF60D0
#define __HWnd_x                                                   0x140EF60D8
#define __Mouse_x                                                  0x140EF6094
#define DI8__Keyboard_x                                            0x140EF60B0
#define __LoginName_x                                              0x140EF8D0C
#define __CurrentMapLabel_x                                        0x140F0C820
#define __LabelCache_x                                             0x140F0D3F0
#define __ChatFilterDefs_x                                         0x140A4AB40
#define Teleport_Table_Size_x                                      0x140E74E58
#define Teleport_Table_x                                           0x140E752E0

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E77880
#define pinstActiveBanker_x                                        0x140E77750
#define pinstActiveCorpse_x                                        0x140E77740
#define pinstActiveGMaster_x                                       0x140E77748
#define pinstActiveMerchant_x                                      0x140E77738
#define pinstAltAdvManager_x                                       0x140DC5088
#define pinstCEverQuest_x                                          0x140EF60E0
#define pinstCamActor_x                                            0x140DC42D0
#define pinstCDBStr_x                                              0x140DC3E40
#define pinstCDisplay_x                                            0x140E772E0
#define pinstControlledPlayer_x                                    0x140E777E0
#define pinstCResolutionHandler_x                                  0x140F1DC28
#define pinstCSidlManager_x                                        0x140F1E990
#define pinstCXWndManager_x                                        0x140F1E988
#define instDynamicZone_x                                          0x140E7B3B0 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E7B3FE
#define instExpeditionName_x                                       0x140E7B43E
#define pinstDZMember_x                                            0x140E7B4C8
#define pinstDZTimerInfo_x                                         0x140E7B4D0
#define pinstEqLogin_x                                             0x140EF8650
#define instTribute_x                                              0x140D36D60
#define pinstDeviceInputProxy_x                                    0x140E7C98C
#define pinstEQSoundManager_x                                      0x140DC5410
#define pinstEQSpellStrings_x                                      0x140DA89D0
#define pinstSGraphicsEngine_x                                     0x140F1D9B8
#define pinstLocalPC_x                                             0x140E77310
#define pinstLocalPlayer_x                                         0x140E77730
#define pinstCMercenaryClientManager_x                             0x140EF3828
#define pinstModelPlayer_x                                         0x140E77760
#define pinstRenderInterface_x                                     0x140F1D9D0
#define pinstSkillMgr_x                                            0x140EF54D8
#define pinstSpawnManager_x                                        0x140EF3BE0
#define pinstSpellManager_x                                        0x140EF5540
#define pinstStringTable_x                                         0x140E77320
#define pinstSwitchManager_x                                       0x140E74D40
#define pinstTarget_x                                              0x140E777D8
#define pinstTaskMember_x                                          0x140D36D50 // Part of g_taskManager
#define pinstTradeTarget_x                                         0x140E77758
#define instTributeActive_x                                        0x140D36D89
#define pinstViewActor_x                                           0x140DC42C8
#define pinstWorldData_x                                           0x140E752C8
#define pinstPlayerPath_x                                          0x140EF3C08
#define pinstTargetIndicator_x                                     0x140EF55F0
#define EQObject_Top_x                                             0x140E74E50

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140F09980
#define pinstCContainerMgr_x                                       0x140DC4310
#define pinstCContextMenuManager_x                                 0x140F1E670
#define pinstCInvSlotMgr_x                                         0x140DC42F8
#define pinstCItemDisplayManager_x                                 0x140F0C3F0
#define pinstCPopupWndManager_x                                    0x140F0CC80
#define pinstCSpellDisplayMgr_x                                    0x140F0D2D0
#define pinstCTaskManager_x                                        0x140BFFC90
#define pinstEQSuiteTextureLoader_x                                0x140D4D600
#define pinstItemIconCache_x                                       0x140F09CE0
#define pinstLootFiltersManager_x                                  0x140DC3888
#define pinstGFViewListener_x                                      0x140F1DE48


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x14024F010
#define __CastRay_x                                                0x140247250
#define __CastRay2_x                                               0x140246F50
#define __compress_block_x                                         0x140547A10
#define __ConvertItemTags_x                                        0x1402476B0
#define __CleanItemTags_x                                          0x14008A7B0
#define __CreateCascadeMenuItems_x                                 0x1401900B0
#define __decompress_block_x                                       0x14058DE60
#define __DoesFileExist_x                                          0x140596500
#define __EQGetTime_x                                              0x140592C00
#define __ExecuteCmd_x                                             0x14021C810
#define __FixHeading_x                                             0x14064D690
#define __FlushDxKeyboard_x                                        0x140348A10
#define __get_bearing_x                                            0x140251240
#define __get_melee_range_x                                        0x140251330
#define __GetAnimationCache_x                                      0x1403CA6E0
#define __GetGaugeValueFromEQ_x                                    0x1405074D0
#define __GetLabelFromEQ_x                                         0x140508AD0
#define __GetXTargetType_x                                         0x14064E970   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14064D710
#define __HelpPath_x                                               0x140EF1DC8   // Why?
#define __NewUIINI_x                                               0x140514520   // Why?
#define __ProcessDeviceEvents_x                                    0x140291C60
#define __ProcessGameEvents_x                                      0x140286680
#define __ProcessKeyboardEvents_x                                  0x14034A160
#define __ProcessMouseEvents_x                                     0x140287D90
#define __SaveColors_x                                             0x1401A00D0
#define __STMLToText_x                                             0x1405A6100
#define __WndProc_x                                                0x1403471B0
#define CMemoryMappedFile__SetFile_x                               0x1407FB070
#define DrawNetStatus_x                                            0x1402D3260
#define Util__FastTime_x                                           0x140592130
#define __eq_delete_x                                              0x1406C7028
#define __eq_new_x                                                 0x1406C7280
#define __CopyLayout_x                                             0x1402C02C0
#define __ThrottleFrameRate_x                                      0x140275C4C
#define __ThrottleFrameRateEnd_x                                   0x140275C52

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140359F50
#define CAAWnd__Update_x                                           0x14035A250
#define CAAWnd__UpdateSelected_x                                   0x14035B440

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AD470
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A5E50
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140851A30
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400ADDA0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401AB330
#define AltAdvManager__IsAbilityReady_x                            0x1401AB7C0
#define AltAdvManager__GetAAById_x                                 0x1401AAC00
#define AltAdvManager__CanTrainAbility_x                           0x1401AA9F0
#define AltAdvManager__CanSeeAbility_x                             0x1401AA6B0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D3EC0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D4D20
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D4F70
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400E9290
#define CharacterZoneClient__CanUseItem_x                          0x1400E9850
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D5940
#define CharacterZoneClient__CastSpell_x                           0x1400D59E0
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E5760
#define CharacterZoneClient__Cur_HP_x                              0x1400EAF70
#define CharacterZoneClient__Cur_Mana_x                            0x1400EB130
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D8C50
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F17F0
#define CharacterZoneClient__GetBaseSkill_x                        0x140100090  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400DA0F0
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E8B90
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F33A0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F2280
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400DA270
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400CA6A0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400CC0A0
#define CharacterZoneClient__GetHPRegen_x                          0x1400F29C0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400EABE0
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F3630
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400DA2F0
#define CharacterZoneClient__GetManaRegen_x                        0x1400F43B0
#define CharacterZoneClient__GetModCap_x                           0x1400FB840
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400DA580
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400DA750
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CF230
#define CharacterZoneClient__HasSkill_x                            0x1400F7380
#define CharacterZoneClient__HitBySpell_x                          0x1400DB1E0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DEB50
#define CharacterZoneClient__MakeMeVisible_x                       0x1400FB320
#define CharacterZoneClient__Max_Endurance_x                       0x1402EEA30  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400FB670
#define CharacterZoneClient__Max_Mana_x                            0x1402EEC50  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400FBAD0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E21A0
#define CharacterZoneClient__SpellDuration_x                       0x1400E2ED0
#define CharacterZoneClient__TotalEffect_x                         0x1400E42B0
#define CharacterZoneClient__UseSkill_x                            0x140101010


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140378E30

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140383440

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14037F2B0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x140382EC0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140385BA0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AD0320

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403A8920
#define CChatWindowManager__InitContextMenu_x                      0x1403A8AB0
#define CChatWindowManager__FreeChatWindow_x                       0x1403A7970
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403B0A70
#define CChatWindowManager__CreateChatWindow_x                     0x1403A73A0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x1401095A0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403B1AC0
#define CChatWindow__Clear_x                                       0x1403B2A80
#define CChatWindow__WndNotification_x                             0x1403B3C50
#define CChatWindow__AddHistory_x                                  0x1403B2580

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405D3920
#define CContextMenu__RemoveMenuItem_x                             0x1405D3D10
#define CContextMenu__RemoveAllMenuItems_x                         0x1405D3CE0
#define CContextMenu__CheckMenuItem_x                              0x1405D3B50
#define CContextMenu__SetMenuItem_x                                0x1405D3D30
#define CContextMenu__AddSeparator_x                               0x1405D3A90

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405C5820
#define CContextMenuManager__RemoveMenu_x                          0x1405C5E00
#define CContextMenuManager__PopupMenu_x                           0x1405C5B40
#define CContextMenuManager__Flush_x                               0x1405C58A0
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403C20D0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x140655DE0
#define CChatService__GetFriendName_x                              0x1406A0E80

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405B6730
#define CComboWnd__Draw_x                                          0x1405B6830
#define CComboWnd__GetCurChoice_x                                  0x1405B6B10  // unused
#define CComboWnd__GetListRect_x                                   0x1405B6BB0
#define CComboWnd__InsertChoice_x                                  0x1405B6EF0
#define CComboWnd__SetColors_x                                     0x1405B7280
#define CComboWnd__SetChoice_x                                     0x1405B7240
#define CComboWnd__GetItemCount_x                                  0x1405B6BA0
#define CComboWnd__GetCurChoiceText_x                              0x1405B6B50  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405B6AE0
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405B6FB0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403BFDE0
#define CContainerWnd__SetContainer_x                              0x14041BAA0
#define CContainerWnd__vftable_x                                   0x1409E5958

// CDisplay
#define CDisplay__cameraType_x                                     0x140DC408C
#define CDisplay__ZoneMainUI_x                                     0x1405EDCF0
#define CDisplay__PreZoneMainUI_x                                  0x14019CFD0
#define CDisplay__CleanGameUI_x                                    0x14018F170
#define CDisplay__GetClickedActor_x                                0x140193340
#define CDisplay__GetUserDefinedColor_x                            0x140193FB0
#define CDisplay__InitCharSelectUI_x                               0x140194260
#define CDisplay__ReloadUI_x                                       0x14019F2D0
#define CDisplay__RestartUI_x                                      0x1402010A0
#define CDisplay__WriteTextHD2_x                                   0x1401A62E0
#define CDisplay__TrueDistance_x                                   0x1401A5F90
#define CDisplay__SetViewActor_x                                   0x1401A2800
#define CDisplay__GetFloorHeight_x                                 0x1401935A0
#define CDisplay__ToggleScreenshotMode_x                           0x1401A5A80
#define CDisplay__RealRender_World_x                               0x14019E6A0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405F7F20
#define CEditWnd__DrawCaret_x                                      0x1405E9960  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405E9E10
#define CEditWnd__GetCaretPt_x                                     0x1405EA090  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405EA0D0
#define CEditWnd__GetDisplayString_x                               0x1405EA340
#define CEditWnd__GetHorzOffset_x                                  0x1405EA580
#define CEditWnd__GetLineForPrintableChar_x                        0x1405EA6D0
#define CEditWnd__GetSelStartPt_x                                  0x1405EA9B0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405EA800
#define CEditWnd__PointFromPrintableChar_x                         0x1405EB5E0
#define CEditWnd__ReplaceSelection_x                               0x1405EB990
#define CEditWnd__SelectableCharFromPoint_x                        0x1405EBE30
#define CEditWnd__SetEditable_x                                    0x1405EC0C0
#define CEditWnd__SetWindowText_x                                  0x1405EC0F0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140276D20
#define CEverQuest__ClickedPlayer_x                                0x14026AD10
#define CEverQuest__CreateTargetIndicator_x                        0x14026B5D0
#define CEverQuest__DoTellWindow_x                                 0x1401092B0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140109B90 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140278710
#define CEverQuest__dsp_chat_x                                     0x140108CF0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402A3690
#define CEverQuest__Emote_x                                        0x140279100
#define CEverQuest__GetBodyTypeDesc_x                              0x140279EE0
#define CEverQuest__GetClassDesc_x                                 0x140279F40
#define CEverQuest__GetClassThreeLetterCode_x                      0x14027A310
#define CEverQuest__GetDeityDesc_x                                 0x14027A5C0
#define CEverQuest__GetLangDesc_x                                  0x14027A9F0
#define CEverQuest__GetRaceDesc_x                                  0x14027AD90
#define CEverQuest__InterpretCmd_x                                 0x14027C720
#define CEverQuest__LeftClickedOnPlayer_x                          0x140291CD0
#define CEverQuest__LMouseUp_x                                     0x14027E1A0
#define CEverQuest__RightClickedOnPlayer_x                         0x14028F260
#define CEverQuest__RMouseUp_x                                     0x140288920
#define CEverQuest__SetGameState_x                                 0x140294750
#define CEverQuest__UPCNotificationFlush_x                         0x14029A0C0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14027DE00
#define CEverQuest__ReportSuccessfulHeal_x                         0x140289CF0
#define CEverQuest__ReportSuccessfulHit_x                          0x14028AB10

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403D55B0

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C3F30
#define CGuild__GetGuildName_x                                     0x1400C3F70

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403F8AA0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402B5990
#define CHotButton__SetCheck_x                                     0x1402B5C60

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1404126A0
#define CInvSlotMgr__MoveItem_x                                    0x140413230
#define CInvSlotMgr__SelectSlot_x                                  0x140415550

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x14040F700
#define CInvSlot__SliderComplete_x                                 0x140410D00
#define CInvSlot__GetItemBase_x                                    0x14040AEF0
#define CInvSlot__UpdateItem_x                                     0x1404111C0

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x140417750

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140439170
#define CItemDisplayWnd__UpdateStrings_x                           0x14043BD30
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140435970
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x1404372D0
#define CItemDisplayWnd__RequestConvertItem_x                      0x140438590

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x140503F50
#define CSpellDisplayWnd__UpdateStrings_x                          0x140505CE0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140540D70

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140432050

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140155C70

// CLabel
#define CLabel__UpdateText_x                                       0x140443110

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405BA0C0
#define CListWnd__dCListWnd_x                                      0x1405BA510
#define CListWnd__vftable_x                                        0x140ACE470
#define CListWnd__AddColumn_x                                      0x1405BABB0
#define CListWnd__AddColumn1_x                                     0x1405BAC50
#define CListWnd__AddLine_x                                        0x1405BADB0
#define CListWnd__AddString_x                                      0x1405BB340
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405BB8B0
#define CListWnd__CalculateVSBRange_x                              0x1405BBB90
#define CListWnd__ClearSel_x                                       0x1405BBD30
#define CListWnd__ClearAllSel_x                                    0x1405BBCD0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405BBD90
#define CListWnd__Compare_x                                        0x1405BBF50
#define CListWnd__Draw_x                                           0x1405BC420
#define CListWnd__DrawColumnSeparators_x                           0x1405BCFD0
#define CListWnd__DrawHeader_x                                     0x1405BD090
#define CListWnd__DrawItem_x                                       0x1405BD770
#define CListWnd__DrawLine_x                                       0x1405BE0F0
#define CListWnd__DrawSeparator_x                                  0x1405BE5B0
#define CListWnd__EnableLine_x                                     0x1405BE9D0
#define CListWnd__EnsureVisible_x                                  0x1405BEA30
#define CListWnd__ExtendSel_x                                      0x1405BEB20
#define CListWnd__GetColumnMinWidth_x                              0x1405BEEB0
#define CListWnd__GetColumnWidth_x                                 0x1405BEF30
#define CListWnd__GetCurSel_x                                      0x1405BF030
#define CListWnd__GetItemData_x                                    0x1405BF3B0
#define CListWnd__GetItemHeight_x                                  0x1405BF3F0
#define CListWnd__GetItemRect_x                                    0x1405BF610
#define CListWnd__GetItemText_x                                    0x1405BF8B0
#define CListWnd__GetSelList_x                                     0x1405BFB00
#define CListWnd__GetSeparatorRect_x                               0x1405BFCF0
#define CListWnd__InsertLine_x                                     0x1405C1150
#define CListWnd__RemoveLine_x                                     0x1405C17C0
#define CListWnd__SetColors_x                                      0x1405C1B80
#define CListWnd__SetColumnJustification_x                         0x1405C1BA0
#define CListWnd__SetColumnLabel_x                                 0x1405C1C20
#define CListWnd__SetColumnWidth_x                                 0x1405C1DC0
#define CListWnd__SetCurSel_x                                      0x1405C1E90
#define CListWnd__SetItemColor_x                                   0x1405C2100
#define CListWnd__SetItemData_x                                    0x1405C21A0
#define CListWnd__SetItemText_x                                    0x1405C23E0
#define CListWnd__Sort_x                                           0x1405C27F0
#define CListWnd__ToggleSel_x                                      0x1405C2960
#define CListWnd__SetColumnsSizable_x                              0x1405C1E10
#define CListWnd__SetItemWnd_x                                     0x1405C2510
#define CListWnd__GetItemWnd_x                                     0x1405BFA90
#define CListWnd__SetItemIcon_x                                    0x1405C21E0
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405BB680
#define CListWnd__SetVScrollPos_x                                  0x1405C2750

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140456630

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A33368
#define MapViewMap__Clear_x                                        0x1404581B0
#define MapViewMap__SetZoom_x                                      0x14045E800
#define MapViewMap__HandleLButtonDown_x                            0x14045B340

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140480040  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x1404868D0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x1404870A0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14048A980
#define CMerchantWnd__SelectBuySellSlot_x                          0x140489CD0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14048ED70

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14067BFD0
#define CPacketScrambler__hton_x                                   0x14067BFC0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405E3220
#define CSidlManagerBase__FindAnimation1_x                         0x1405E3160
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405E3850
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405E3600
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405E2560
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405E24F0
#define CSidlManagerBase__CreateXWnd_x                             0x1405E1B30

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404F6EE0
#define CSidlManager__CreateXWnd_x                                 0x1404F70A0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405A7BF0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x1405A7D20
#define CSidlScreenWnd__ConvertToRes_x                             0x1405F2460 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x1405A7E90
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x1405A7320
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x1405A73F0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1405A7600
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1405A8570
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405A87A0
#define CSidlScreenWnd__GetChildItem_x                             0x1405A8940
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405A8B90
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405B2C90 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405A8F00
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405A9270
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405A9B30
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405AA530
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F1DCE8
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405AABB0
#define CSidlScreenWnd__StoreIniVis_x                              0x1405AB3A0
#define CSidlScreenWnd__vftable_x                                  0x140ACD6F8
#define CSidlScreenWnd__WndNotification_x                          0x1405AB3F0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x140331990 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140331E30 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x140331D60
#define CSkillMgr__IsActivatedSkill_x                              0x1403321E0
#define CSkillMgr__IsCombatSkill_x                                 0x140332220
#define CSkillMgr__GetSkillTimerDuration_x                         0x140332150
#define CSkillMgr__GetSkillLastUsed_x                              0x140331DB0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405C32E0
#define CSliderWnd__SetValue_x                                     0x1405C3AF0
#define CSliderWnd__SetNumTicks_x                                  0x1405C3970

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404FD680

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405C8280
#define CStmlWnd__CalculateHSBRange_x                              0x1405B2640
#define CStmlWnd__CalculateVSBRange_x                              0x1405C9120
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405C9C00
#define CStmlWnd__ForceParseNow_x                                  0x1405C9CA0
#define CStmlWnd__GetVisibleText_x                                 0x1405CA360
#define CStmlWnd__MakeStmlColorTag_x                               0x1405CC0B0
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405CC0F0
#define CStmlWnd__SetSTMLText_x                                    0x1405D30C0
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405D3270
#define CStmlWnd__UpdateHistoryString_x                            0x1405D3600

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405C3EC0
#define CTabWnd__DrawCurrentPage_x                                 0x1405C3F60
#define CTabWnd__DrawTab_x                                         0x1405C4330
#define CTabWnd__GetTabRect_x                                      0x1405C4990
#define CTabWnd__InsertPage_x                                      0x1405C4C60
#define CTabWnd__RemovePage_x                                      0x1405C4EF0
#define CTabWnd__SetPage_x                                         0x1405C5050
#define CTabWnd__UpdatePage_x                                      0x1405C5350

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405EC550
#define CPageWnd__SetTabText_x                                     0x1405EC5C0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BD4D0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BD8E0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405DABE0
#define CTextureFont__DrawWrappedText1_x                           0x1405DAAF0
#define CTextureFont__DrawWrappedText2_x                           0x1405DAD10
#define CTextureFont__GetTextExtent_x                              0x1405DB0C0
#define CTextureFont__GetHeight_x                                  0x1405DB080

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405F0BC0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405A47F0

// CXStr
#define CXStr__gFreeLists_x                                        0x140D4CF70
#define CXStr__gCXStrAccess_x                                      0x140F1D848

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405ADC70
#define CXWnd__ClrFocus_x                                          0x1405ADF60
#define CXWnd__Destroy_x                                           0x1405AE0E0
#define CXWnd__DoAllDrawing_x                                      0x1405AE1F0
#define CXWnd__DrawColoredRect_x                                   0x1405AE9C0
#define CXWnd__DrawTooltip_x                                       0x1405B0040
#define CXWnd__DrawTooltipAtPoint_x                                0x1405B00F0
#define CXWnd__GetChildItem_x                                      0x1405B0A00
#define CXWnd__GetChildWndAt_x                                     0x1405B0AC0
#define CXWnd__GetClientRect_x                                     0x1405B0D80
#define CXWnd__GetClientClipRect_x                                 0x1405B0C30
#define CXWnd__GetRelativeRect_x                                   0x1405B2780
#define CXWnd__GetScreenClipRect_x                                 0x1405B2890
#define CXWnd__GetScreenRect_x                                     0x1405B2A10
#define CXWnd__GetTooltipRect_x                                    0x1405B2B90
#define CXWnd__IsActive_x                                          0x1405B3150
#define CXWnd__IsDescendantOf_x                                    0x1405B3180
#define CXWnd__IsReallyVisible_x                                   0x1405B31F0
#define CXWnd__IsType_x                                            0x1405B3240
#define CXWnd__Minimize_x                                          0x1405B3340
#define CXWnd__ProcessTransition_x                                 0x1405B4240
#define CXWnd__Resize_x                                            0x1405B4360
#define CXWnd__Right_x                                             0x1405B4400
#define CXWnd__SetFocus_x                                          0x1405B47B0
#define CXWnd__SetFont_x                                           0x1405B4800
#define CXWnd__SetKeyTooltip_x                                     0x1405B4900
#define CXWnd__SetMouseOver_x                                      0x1405B4A40
#define CXWnd__SetParent_x                                         0x1405B4AC0
#define CXWnd__StartFade_x                                         0x1405B4EF0
#define CXWnd__vftable_x                                           0x140ACDCD0
#define CXWnd__CXWnd_x                                             0x1405AC810
#define CXWnd__dCXWnd_x                                            0x1405AD150

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405F76A0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405D4EE0
#define CXWndManager__DrawCursor_x                                 0x1405D51C0
#define CXWndManager__DrawWindows_x                                0x1405D5420
#define CXWndManager__GetKeyboardFlags_x                           0x1405D5A70
#define CXWndManager__HandleKeyboardMsg_x                          0x1405D5AB0
#define CXWndManager__RemoveWnd_x                                  0x1405D92B0

// CDBStr
#define CDBStr__GetString_x                                        0x14018D330

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x140685E20

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D19C0
#define CCharacterListWnd__EnterWorld_x                            0x1400D09D0
#define CCharacterListWnd__Quit_x                                  0x1400D19A0
#define CCharacterListWnd__UpdateList_x                            0x1400D2820

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140653720
#define ItemBase__CreateItemTagString_x                            0x140654180
#define ItemBase__GetImageNum_x                                    0x140656890
#define ItemBase__GetItemValue_x                                   0x1406583B0
#define ItemBase__IsEmpty_x                                        0x14065A090
#define ItemBase__IsKeyRingItem_x                                  0x14065A7A0
#define ItemBase__ValueSellMerchant_x                              0x14065E9F0
#define ItemClient__CanDrop_x                                      0x1402B8280
#define ItemClient__CanGoInBag_x                                   0x1402B83B0
#define ItemClient__CreateItemClient_x                             0x1402B8640
#define ItemClient__dItemClient_x                                  0x1402B80F0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401ACCE0
#define EQ_LoadingS__Array_x                                       0x140D39230

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14066AAC0
#define PcBase__GetCombatAbility_x                                 0x14066B1B0
#define PcBase__GetCombatAbilityTimer_x                            0x14066B250
#define PcBase__GetItemContainedRealEstateIds_x                    0x14066B9F0
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14066C4C0
#define PcClient__AlertInventoryChanged_x                          0x1402DB4A0
#define PcClient__GetConLevel_x                                    0x1402DBAB0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402DE240
#define PcClient__HasLoreItem_x                                    0x1402DF300
#define PcZoneClient__GetItemRecastTimer_x                         0x1402EC6A0
#define PcZoneClient__RemoveMyAffect_x                             0x1402EFB70

// EQGroundItemListManager
#define EQGroundItem__EQGroundItem_x                               0x140221210
#define EQGroundItemListManager__Add_x                             0x1402213C0
#define EQGroundItemListManager__Clear_x                           0x140221460
#define EQGroundItemListManager__Delete_x                          0x140221520
#define EQGroundItemListManager__Instance_x                        0x1402215B0

// EQPlacedItemManager
#define EQPlacedItemManager__Add_x                                 0x14025C0F0

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140187B20

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140640210
#define PlayerBase__CanSee1_x                                      0x1406402E0
#define PlayerBase__GetVisibilityLineSegment_x                     0x1406407C0
#define PlayerBase__HasProperty_x                                  0x140640990
#define PlayerBase__IsTargetable_x                                 0x140640A50
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402FD810
#define PlayerClient__GetPcClient_x                                0x140300340
#define PlayerClient__PlayerClient_x                               0x1402F5B60
#define PlayerClient__SetNameSpriteState_x                         0x140303A70
#define PlayerClient__SetNameSpriteTint_x                          0x140304A30
#define PlayerZoneClient__ChangeHeight_x                           0x140313560
#define PlayerZoneClient__DoAttack_x                               0x140314270
#define PlayerZoneClient__GetLevel_x                               0x1403179B0
#define PlayerZoneClient__IsValidTeleport_x                        0x14025EE90
#define PlayerZoneClient__LegalPlayerRace_x                        0x14019B850

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x14030CA60  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x14030CB10  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x14030CC10
#define PlayerManagerClient__CreatePlayer_x                        0x14030C530
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x14063FDD0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402BD7E0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402BD110
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402BD180
#define KeypressHandler__ClearCommandStateArray_x                  0x1402BD770  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402BD900
#define KeypressHandler__HandleKeyUp_x                             0x1402BDA20
#define KeypressHandler__SaveKeymapping_x                          0x1402BD600  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140683940  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x14067D710

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402E53C0  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402EA7E0
#define PcZoneClient__GetPcSkillLimit_x                            0x1402ED780
#define PcZoneClient__RemovePetEffect_x                            0x1402EFE50
#define PcZoneClient__HasAlternateAbility_x                        0x1402EE360
#define PcZoneClient__CanEquipItem_x                               0x1402E8AD0
#define PcZoneClient__GetItemByID_x                                0x1402EB700
#define PcZoneClient__RemoveBuffEffect_x                           0x1402EF9F0
#define PcZoneClient__BandolierSwap_x                              0x1402E7AE0

// Doors
#define EQSwitch__UseSwitch_x                                      0x1402639C0

// IconCache
#define IconCache__GetIcon_x                                       0x1403CA710

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403BEB90
#define CContainerMgr__CloseContainer_x                            0x1403BE4B0
#define CContainerMgr__OpenExperimentContainer_x                   0x1403BEF10

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404BAAF0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402AFB80

// CLootWnd
#define CLootWnd__LootAll_x                                        0x14044A440
#define CLootWnd__RequestLootSlot_x                                0x14044B490

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401DC6B0
#define EQ_Spell__SpellAffects_x                                   0x1401DD980
#define EQ_Spell__SpellAffectBase_x                                0x1401DD8E0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400DA8E0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400DA890
#define EQ_Spell__IsSPAStacking_x                                  0x1401DD5B0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401DD160
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401DCA30

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C2A70

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x140517D30
#define CTargetWnd__RefreshTargetBuffs_x                           0x140517440
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x140516C40

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x14051F3D0  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x1401844D0
#define CTaskManager__GetTaskStatus_x                              0x1401845E0
#define CTaskManager__GetElementDescription_x                      0x140184160

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401DA9D0
#define EqSoundManager__PlayScriptMp3_x                            0x1401D9810
#define EqSoundManager__SoundAssistPlay_x                          0x140336FD0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140337310  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405B5CC0
#define CTextureAnimation__SetCurCell_x                            0x1405B5FD0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402ADD80

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x14069E550
#define CharacterBase__GetItemByGlobalIndex1_x                     0x14069E5D0
#define CharacterBase__IsExpansionFlag_x                           0x140200700

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140399A00
#define CCastSpellWnd__IsBardSongPlaying_x                         0x14039A470
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x14039B9C0

// messages
#define msg_spell_worn_off_x                                       0x140217750
#define msg_new_text_x                                             0x140212F10
#define __msgTokenTextParam_x                                      0x14020A440
#define msgTokenText_x                                             0x14020A350

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140338C00
#define SpellManager__GetSpellByGroupAndRank_x                     0x140338B20

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x14064ED50

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140443860

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403C38F0
#define CCursorAttachment__IsOkToActivate_x                        0x1403C6D60
#define CCursorAttachment__RemoveAttachment_x                      0x1403C7010
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405EF060
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405EF250
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405EF260

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x1401505B0
#define CFindItemWnd__Update_x                                     0x140150F50
#define CFindItemWnd__PickupSelectedItem_x                         0x140149F00

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14015AD30
#define LootFiltersManager__GetItemFilterData_x                    0x14015B840
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14015C0E0
#define LootFiltersManager__SetItemLootFilter_x                    0x14015C390

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14049D3C0

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x140331550
#define CResolutionHandler__UpdateResolution_x                     0x14059B1A0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403BAE50

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406A29F0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406A28E0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403E1920
#define CGroupWnd__UpdateDisplay_x                                 0x1403E1500

// ItemBase
#define ItemBase__IsLore_x                                         0x14065A8E0
#define ItemBase__IsLoreEquipped_x                                 0x14065A970

#define MultipleItemMoveManager__ProcessMove_x                     0x1402D0FE0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14025C250
#define EQPlacedItemManager__GetItemByGuid_x                       0x14025C1E0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14025C220

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14032B9A0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140126FC0
#define FactionManagerClient__HandleFactionMessage_x               0x1401273A0
#define FactionManagerClient__GetFactionStanding_x                 0x140126790
#define FactionManagerClient__GetMaxFaction_x                      0x140126790
#define FactionManagerClient__GetMinFaction_x                      0x140126640

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AFA80

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x1401327A0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401B58A0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401B4A60
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401B56C0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401B5640  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x14033DEB0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14032B9A0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405AB9E0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140086E70

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14034FAA0

// AchievementManager
#define AchievementManager__Instance_x                             0x14008F310

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x1406869A0
#define FreeToPlayClient__RestrictionInfo_x                        0x140AE2680

// UdpConnection
#define UdpConnection__GetStats_x                                  0x14054DE30

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x140839068
#define CGFScreenWnd__CGFScreenWnd_x                               0x140071550
#define CGFScreenWnd__CGFScreenWnd1_x                              0x1400716E0
#define CGFScreenWnd__dCGFScreenWnd_x                              0x140071890

#if __has_include("../../../../private/eqgame-private.h")
#include "../../../../private/eqgame-private.h"
#endif
