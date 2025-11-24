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

#define __ClientDate                                               20251119u
#define __ExpectedVersionDate                                     "Nov 19 2025"
#define __ExpectedVersionTime                                     "13:14:36"
#define __ActualVersionDate_x                                      0x14096F888
#define __ActualVersionTime_x                                      0x14096F878
#define __ActualVersionBuild_x                                     0x140904A50

// Memory Protection
#define __MemChecker0_x                                            0x1402C4410
#define __MemChecker1_x                                            0x140591DE0
#define __MemChecker4_x                                            0x140291BA0
#define __EncryptPad0_x                                            0x140D41F20

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E7A990
#define instEQZoneInfo_x                                           0x140E7AB84 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x1402257C0
#define __gfMaxZoomCameraDistance_x                                0x140905CF8
#define __gfMaxCameraDistance_x                                    0x140AAFC34
#define __CurrentSocial_x                                          0x140BFD950 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D39730
#define g_eqCommandStates_x                                        0x140D3A7D0
#define __CommandList_x                                            0x140D3AA00
#define __ScreenMode_x                                             0x140DC22DC
#define __gWorld_x                                                 0x140E74E70
#define __gpbCommandEvent_x                                        0x140E753C8
#define __ServerHost_x                                             0x140E755C8
#define __Guilds_x                                                 0x140E79550
#define __MemCheckBitmask_x                                        0x140E7AECF
#define __MemCheckActive_x                                         0x140E7C5E5
#define __MouseEventTime_x                                         0x140EEFF60
#define DI8__MouseState_x                                          0x140EF41A0
#define __heqmain_x                                                0x140EF6630
#define DI8__Mouse_x                                               0x140EF6648
#define __HWnd_x                                                   0x140EF6650
#define __Mouse_x                                                  0x140EF6658
#define DI8__Keyboard_x                                            0x140EF6678
#define __LoginName_x                                              0x140EF6D5C
#define __CurrentMapLabel_x                                        0x140F0A870
#define __LabelCache_x                                             0x140F0B440
#define __ChatFilterDefs_x                                         0x140A49AF0
#define Teleport_Table_Size_x                                      0x140E7545C
#define Teleport_Table_x                                           0x140E72E30

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E758E0
#define pinstActiveBanker_x                                        0x140E75310
#define pinstActiveCorpse_x                                        0x140E75300
#define pinstActiveGMaster_x                                       0x140E75308
#define pinstActiveMerchant_x                                      0x140E752F8
#define pinstAltAdvManager_x                                       0x140DC30D8
#define pinstCEverQuest_x                                          0x140EF40F8
#define pinstCamActor_x                                            0x140DC22C8
#define pinstCDBStr_x                                              0x140DC1E90
#define pinstCDisplay_x                                            0x140E72E28
#define pinstControlledPlayer_x                                    0x140E753A0
#define pinstCResolutionHandler_x                                  0x140F1BC78
#define pinstCSidlManager_x                                        0x140F1C9E0
#define pinstCXWndManager_x                                        0x140F1C9D8
#define instDynamicZone_x                                          0x140E79410 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E7945E
#define instExpeditionName_x                                       0x140E7949E
#define pinstDZMember_x                                            0x140E79528
#define pinstDZTimerInfo_x                                         0x140E79530
#define pinstEqLogin_x                                             0x140EF66A0
#define instTribute_x                                              0x140D34D60
#define pinstDeviceInputProxy_x                                    0x140E7A9EC
#define pinstEQSoundManager_x                                      0x140DC3460
#define pinstEQSpellStrings_x                                      0x140DA6A20
#define pinstSGraphicsEngine_x                                     0x140F1BA08
#define pinstLocalPC_x                                             0x140E74E58
#define pinstLocalPlayer_x                                         0x140E752F0
#define pinstCMercenaryClientManager_x                             0x140EF1888
#define pinstModelPlayer_x                                         0x140E75320
#define pinstRenderInterface_x                                     0x140F1BA20
#define pinstSkillMgr_x                                            0x140EF3538
#define pinstSpawnManager_x                                        0x140EF1C40
#define pinstSpellManager_x                                        0x140EF35A0
#define pinstStringTable_x                                         0x140E74E60
#define pinstSwitchManager_x                                       0x140E72D90
#define pinstTarget_x                                              0x140E75398
#define pinstTaskMember_x                                          0x140D34D50 // Part of g_taskManager
#define pinstTradeTarget_x                                         0x140E75318
#define instTributeActive_x                                        0x140D34D89
#define pinstViewActor_x                                           0x140DC22C0
#define pinstWorldData_x                                           0x140E72E20
#define pinstPlayerPath_x                                          0x140EF1C68
#define pinstTargetIndicator_x                                     0x140EF3650
#define EQObject_Top_x                                             0x140E75450

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140F079D0
#define pinstCContainerMgr_x                                       0x140DC2330
#define pinstCContextMenuManager_x                                 0x140F1C6C0
#define pinstCInvSlotMgr_x                                         0x140DC2310
#define pinstCItemDisplayManager_x                                 0x140F0A440
#define pinstCPopupWndManager_x                                    0x140F0ACD0
#define pinstCSpellDisplayMgr_x                                    0x140F0B320
#define pinstCTaskManager_x                                        0x140BFDC90
#define pinstEQSuiteTextureLoader_x                                0x140D4B640
#define pinstItemIconCache_x                                       0x140F07D30
#define pinstLootFiltersManager_x                                  0x140DC18D8
#define pinstGFViewListener_x                                      0x140F1BE98


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x14024F530
#define __CastRay_x                                                0x1402477A0
#define __CastRay2_x                                               0x1402474A0
#define __compress_block_x                                         0x1405471A0
#define __ConvertItemTags_x                                        0x140247C00
#define __CleanItemTags_x                                          0x14008A7B0
#define __CreateCascadeMenuItems_x                                 0x140190C00
#define __decompress_block_x                                       0x14058D5F0
#define __DoesFileExist_x                                          0x140595C90
#define __EQGetTime_x                                              0x140592390
#define __ExecuteCmd_x                                             0x14021CD50
#define __FixHeading_x                                             0x14064BE90
#define __FlushDxKeyboard_x                                        0x1403482A0
#define __get_bearing_x                                            0x140251760
#define __get_melee_range_x                                        0x140251850
#define __GetAnimationCache_x                                      0x1403C9D30
#define __GetGaugeValueFromEQ_x                                    0x140506C20
#define __GetLabelFromEQ_x                                         0x140508220
#define __GetXTargetType_x                                         0x14064D170   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14064BF10
#define __HelpPath_x                                               0x140EEFE28   // Why?
#define __NewUIINI_x                                               0x140513C60   // Why?
#define __ProcessDeviceEvents_x                                    0x1402921B0
#define __ProcessGameEvents_x                                      0x140286BC0
#define __ProcessKeyboardEvents_x                                  0x1403499F0
#define __ProcessMouseEvents_x                                     0x1402882E0
#define __SaveColors_x                                             0x1401A0B00
#define __STMLToText_x                                             0x1405A5890
#define __WndProc_x                                                0x140346A40
#define CMemoryMappedFile__SetFile_x                               0x1407F9E30
#define DrawNetStatus_x                                            0x1402D3750
#define Util__FastTime_x                                           0x1405918C0
#define __eq_delete_x                                              0x1406C5DD8
#define __eq_new_x                                                 0x1406C6030
#define __CopyLayout_x                                             0x1402C0810
#define __ThrottleFrameRate_x                                      0x14027618C
#define __ThrottleFrameRateEnd_x                                   0x140276192

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x1403594F0
#define CAAWnd__Update_x                                           0x1403597F0
#define CAAWnd__UpdateSelected_x                                   0x14035A9F0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AD1D0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A5BB0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140850A10
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400ADB00

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401ABD70
#define AltAdvManager__IsAbilityReady_x                            0x1401AC200
#define AltAdvManager__GetAAById_x                                 0x1401AB640
#define AltAdvManager__CanTrainAbility_x                           0x1401AB430
#define AltAdvManager__CanSeeAbility_x                             0x1401AB0F0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D45B0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D5420
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D5670
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400E99C0
#define CharacterZoneClient__CanUseItem_x                          0x1400E9F80
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D6040
#define CharacterZoneClient__CastSpell_x                           0x1400D60E0
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E5E90
#define CharacterZoneClient__Cur_HP_x                              0x1400EB6A0
#define CharacterZoneClient__Cur_Mana_x                            0x1400EB860
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D9350
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F1F20
#define CharacterZoneClient__GetBaseSkill_x                        0x1401005F0  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400DA7F0
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E92C0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F37C0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F26A0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400DA970
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400CA3C0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400CC290
#define CharacterZoneClient__GetHPRegen_x                          0x1400F2DE0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400EB310
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F3A50
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400DA9F0
#define CharacterZoneClient__GetManaRegen_x                        0x1400F47D0
#define CharacterZoneClient__GetModCap_x                           0x1400FBDA0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400DAC80
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400DAE50
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CF920
#define CharacterZoneClient__HasSkill_x                            0x1400F78E0
#define CharacterZoneClient__HitBySpell_x                          0x1400DB8E0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DF260
#define CharacterZoneClient__MakeMeVisible_x                       0x1400FB880
#define CharacterZoneClient__Max_Endurance_x                       0x1402EE4D0  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400FBBD0
#define CharacterZoneClient__Max_Mana_x                            0x1402EE6F0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400FC030
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E28D0
#define CharacterZoneClient__SpellDuration_x                       0x1400E3600
#define CharacterZoneClient__TotalEffect_x                         0x1400E49E0
#define CharacterZoneClient__UseSkill_x                            0x140101560


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140378410

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140382A30

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14037E890
#define CBarterSearchWnd__UpdateInventoryList_x                    0x1403824B0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x1403851B0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140ACF2C0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403A7F10
#define CChatWindowManager__InitContextMenu_x                      0x1403A80A0
#define CChatWindowManager__FreeChatWindow_x                       0x1403A6F60
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403B0060
#define CChatWindowManager__CreateChatWindow_x                     0x1403A6990

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140109B00

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403B10B0
#define CChatWindow__Clear_x                                       0x1403B2060
#define CChatWindow__WndNotification_x                             0x1403B3250
#define CChatWindow__AddHistory_x                                  0x1403B1B60

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405D2F80
#define CContextMenu__RemoveMenuItem_x                             0x1405D3360
#define CContextMenu__RemoveAllMenuItems_x                         0x1405D3330
#define CContextMenu__CheckMenuItem_x                              0x1405D31A0
#define CContextMenu__SetMenuItem_x                                0x1405D3380
#define CContextMenu__AddSeparator_x                               0x1405D30E0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405C4E70
#define CContextMenuManager__RemoveMenu_x                          0x1405C5440
#define CContextMenuManager__PopupMenu_x                           0x1405C5180
#define CContextMenuManager__Flush_x                               0x1405C4EF0
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403C16D0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x14069FBF0
#define CChatService__GetFriendName_x                              0x14069FC00

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405B5DF0
#define CComboWnd__Draw_x                                          0x1405B5EE0
#define CComboWnd__GetCurChoice_x                                  0x1405B61B0  // unused
#define CComboWnd__GetListRect_x                                   0x1405B6250
#define CComboWnd__InsertChoice_x                                  0x1405B6570
#define CComboWnd__SetColors_x                                     0x1405B6900
#define CComboWnd__SetChoice_x                                     0x1405B68C0
#define CComboWnd__GetItemCount_x                                  0x1405B6240
#define CComboWnd__GetCurChoiceText_x                              0x1405B61F0  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405B6180
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405B6630

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403BF3F0
#define CContainerWnd__SetContainer_x                              0x14041B160
#define CContainerWnd__vftable_x                                   0x1409E4908

// CDisplay
#define CDisplay__cameraType_x                                     0x140DC204C
#define CDisplay__ZoneMainUI_x                                     0x1405ED150
#define CDisplay__PreZoneMainUI_x                                  0x14019DA00
#define CDisplay__CleanGameUI_x                                    0x14018FCC0
#define CDisplay__GetClickedActor_x                                0x140193E90
#define CDisplay__GetUserDefinedColor_x                            0x140194B00
#define CDisplay__InitCharSelectUI_x                               0x140194DB0
#define CDisplay__ReloadUI_x                                       0x14019FD00
#define CDisplay__RestartUI_x                                      0x1402015B0
#define CDisplay__WriteTextHD2_x                                   0x1401A6D10
#define CDisplay__TrueDistance_x                                   0x1401A69C0
#define CDisplay__SetViewActor_x                                   0x1401A3230
#define CDisplay__GetFloorHeight_x                                 0x1401940F0
#define CDisplay__ToggleScreenshotMode_x                           0x1401A64B0
#define CDisplay__RealRender_World_x                               0x14019F0D0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405F7380
#define CEditWnd__DrawCaret_x                                      0x1405E8EB0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405E9340
#define CEditWnd__GetCaretPt_x                                     0x1405E95C0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405E9600
#define CEditWnd__GetDisplayString_x                               0x1405E9860
#define CEditWnd__GetHorzOffset_x                                  0x1405E9AA0
#define CEditWnd__GetLineForPrintableChar_x                        0x1405E9BE0
#define CEditWnd__GetSelStartPt_x                                  0x1405E9EC0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405E9D10
#define CEditWnd__PointFromPrintableChar_x                         0x1405EAA70
#define CEditWnd__ReplaceSelection_x                               0x1405EAE10
#define CEditWnd__SelectableCharFromPoint_x                        0x1405EB2B0
#define CEditWnd__SetEditable_x                                    0x1405EB540
#define CEditWnd__SetWindowText_x                                  0x1405EB570

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140277260
#define CEverQuest__ClickedPlayer_x                                0x14026B250
#define CEverQuest__CreateTargetIndicator_x                        0x14026BB10
#define CEverQuest__DoTellWindow_x                                 0x140109810 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x14010A0F0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140278C50
#define CEverQuest__dsp_chat_x                                     0x140109250 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402A3BE0
#define CEverQuest__Emote_x                                        0x140279640
#define CEverQuest__GetBodyTypeDesc_x                              0x14027A420
#define CEverQuest__GetClassDesc_x                                 0x14027A480
#define CEverQuest__GetClassThreeLetterCode_x                      0x14027A850
#define CEverQuest__GetDeityDesc_x                                 0x14027AB00
#define CEverQuest__GetLangDesc_x                                  0x14027AF30
#define CEverQuest__GetRaceDesc_x                                  0x14027B2D0
#define CEverQuest__InterpretCmd_x                                 0x14027CC60
#define CEverQuest__LeftClickedOnPlayer_x                          0x140292220
#define CEverQuest__LMouseUp_x                                     0x14027E6E0
#define CEverQuest__RightClickedOnPlayer_x                         0x14028F7B0
#define CEverQuest__RMouseUp_x                                     0x140288E70
#define CEverQuest__SetGameState_x                                 0x140294CA0
#define CEverQuest__UPCNotificationFlush_x                         0x14029A610 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14027E340
#define CEverQuest__ReportSuccessfulHeal_x                         0x14028A240
#define CEverQuest__ReportSuccessfulHit_x                          0x14028B060

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403D4C10

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C3C60
#define CGuild__GetGuildName_x                                     0x1400C3CA0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403F8100

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402B5EE0
#define CHotButton__SetCheck_x                                     0x1402B61B0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140411D50
#define CInvSlotMgr__MoveItem_x                                    0x1404128E0
#define CInvSlotMgr__SelectSlot_x                                  0x140414C10

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x14040ED90
#define CInvSlot__SliderComplete_x                                 0x140410390
#define CInvSlot__GetItemBase_x                                    0x14040A590
#define CInvSlot__UpdateItem_x                                     0x140410850

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x140416E00

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1404387E0
#define CItemDisplayWnd__UpdateStrings_x                           0x14043B400
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140434F80
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140436900
#define CItemDisplayWnd__RequestConvertItem_x                      0x140437BF0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1405036B0
#define CSpellDisplayWnd__UpdateStrings_x                          0x140505440

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140540500

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140431630

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140156270

// CLabel
#define CLabel__UpdateText_x                                       0x1404427F0

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405B9740
#define CListWnd__dCListWnd_x                                      0x1405B9B80
#define CListWnd__vftable_x                                        0x140ACD410
#define CListWnd__AddColumn_x                                      0x1405BA220
#define CListWnd__AddColumn1_x                                     0x1405BA2C0
#define CListWnd__AddLine_x                                        0x1405BA420
#define CListWnd__AddString_x                                      0x1405BA9B0
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405BAF20
#define CListWnd__CalculateVSBRange_x                              0x1405BB200
#define CListWnd__ClearSel_x                                       0x1405BB3B0
#define CListWnd__ClearAllSel_x                                    0x1405BB350
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405BB410
#define CListWnd__Compare_x                                        0x1405BB5D0
#define CListWnd__Draw_x                                           0x1405BBAA0
#define CListWnd__DrawColumnSeparators_x                           0x1405BC640
#define CListWnd__DrawHeader_x                                     0x1405BC700
#define CListWnd__DrawItem_x                                       0x1405BCDD0
#define CListWnd__DrawLine_x                                       0x1405BD740
#define CListWnd__DrawSeparator_x                                  0x1405BDC00
#define CListWnd__EnableLine_x                                     0x1405BE020
#define CListWnd__EnsureVisible_x                                  0x1405BE080
#define CListWnd__ExtendSel_x                                      0x1405BE180
#define CListWnd__GetColumnMinWidth_x                              0x1405BE510
#define CListWnd__GetColumnWidth_x                                 0x1405BE590
#define CListWnd__GetCurSel_x                                      0x1405BE690
#define CListWnd__GetItemData_x                                    0x1405BEA10
#define CListWnd__GetItemHeight_x                                  0x1405BEA50
#define CListWnd__GetItemRect_x                                    0x1405BEC70
#define CListWnd__GetItemText_x                                    0x1405BEF10
#define CListWnd__GetSelList_x                                     0x1405BF160
#define CListWnd__GetSeparatorRect_x                               0x1405BF350
#define CListWnd__InsertLine_x                                     0x1405C07B0
#define CListWnd__RemoveLine_x                                     0x1405C0E20
#define CListWnd__SetColors_x                                      0x1405C11E0
#define CListWnd__SetColumnJustification_x                         0x1405C1200
#define CListWnd__SetColumnLabel_x                                 0x1405C1280
#define CListWnd__SetColumnWidth_x                                 0x1405C1420
#define CListWnd__SetCurSel_x                                      0x1405C14F0
#define CListWnd__SetItemColor_x                                   0x1405C1760
#define CListWnd__SetItemData_x                                    0x1405C1800
#define CListWnd__SetItemText_x                                    0x1405C1A40
#define CListWnd__Sort_x                                           0x1405C1E50
#define CListWnd__ToggleSel_x                                      0x1405C1FC0
#define CListWnd__SetColumnsSizable_x                              0x1405C1470
#define CListWnd__SetItemWnd_x                                     0x1405C1B70
#define CListWnd__GetItemWnd_x                                     0x1405BF0F0
#define CListWnd__SetItemIcon_x                                    0x1405C1840
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405BACF0
#define CListWnd__SetVScrollPos_x                                  0x1405C1DB0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140455D10

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A32318
#define MapViewMap__Clear_x                                        0x140457890
#define MapViewMap__SetZoom_x                                      0x14045DEE0
#define MapViewMap__HandleLButtonDown_x                            0x14045AA20

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14047F720  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140485FC0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140486790
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14048A080
#define CMerchantWnd__SelectBuySellSlot_x                          0x1404893D0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14048E480

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14067ABE0
#define CPacketScrambler__hton_x                                   0x14067ABD0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405E2770
#define CSidlManagerBase__FindAnimation1_x                         0x1405E26B0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405E2DA0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405E2B50
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405E1AB0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405E1A40
#define CSidlManagerBase__CreateXWnd_x                             0x1405E1080

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404F6640
#define CSidlManager__CreateXWnd_x                                 0x1404F6800

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405A7380
#define CSidlScreenWnd__CalculateVSBRange_x                        0x1405A7490
#define CSidlScreenWnd__ConvertToRes_x                             0x1405F18C0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x1405A7610
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x1405A6AB0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x1405A6B80
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1405A6D90
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1405A7D00
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405A7F30
#define CSidlScreenWnd__GetChildItem_x                             0x1405A80D0
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405A8320
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405B23A0 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405A8690
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405A8A00
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405A92B0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405A9CB0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F1BD38
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405AA330
#define CSidlScreenWnd__StoreIniVis_x                              0x1405AAB20
#define CSidlScreenWnd__vftable_x                                  0x140ACC698
#define CSidlScreenWnd__WndNotification_x                          0x1405AAB70

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x140331420 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140331740 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x140331670
#define CSkillMgr__IsActivatedSkill_x                              0x140331B00
#define CSkillMgr__IsCombatSkill_x                                 0x140331B40
#define CSkillMgr__GetSkillTimerDuration_x                         0x140331A70
#define CSkillMgr__GetSkillLastUsed_x                              0x1403316C0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405069E0
#define CSliderWnd__SetValue_x                                     0x1405C3130
#define CSliderWnd__SetNumTicks_x                                  0x1405C2FB0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404FCDE0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405C78C0
#define CStmlWnd__CalculateHSBRange_x                              0x1405B1D50
#define CStmlWnd__CalculateVSBRange_x                              0x1405C87E0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405C9260
#define CStmlWnd__ForceParseNow_x                                  0x1405C9300
#define CStmlWnd__GetVisibleText_x                                 0x1405C99D0
#define CStmlWnd__MakeStmlColorTag_x                               0x1405CB730
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405CB770
#define CStmlWnd__SetSTMLText_x                                    0x1405D2730
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405D28E0
#define CStmlWnd__UpdateHistoryString_x                            0x1405D2C70

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405C3500
#define CTabWnd__DrawCurrentPage_x                                 0x1405C35A0
#define CTabWnd__DrawTab_x                                         0x1405C3970
#define CTabWnd__GetTabRect_x                                      0x1405C3FE0
#define CTabWnd__InsertPage_x                                      0x1405C42B0
#define CTabWnd__RemovePage_x                                      0x1405C4540
#define CTabWnd__SetPage_x                                         0x1405C46A0
#define CTabWnd__UpdatePage_x                                      0x1405C49A0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405EB9D0
#define CPageWnd__SetTabText_x                                     0x1405EBA40

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BD220  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BD630


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405DA160
#define CTextureFont__DrawWrappedText1_x                           0x1405DA070
#define CTextureFont__DrawWrappedText2_x                           0x1405DA290
#define CTextureFont__GetTextExtent_x                              0x1405DA640
#define CTextureFont__GetHeight_x                                  0x1405DA600

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405F0020

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405A3F80

// CXStr
#define CXStr__gFreeLists_x                                        0x140D4AFB0
#define CXStr__gCXStrAccess_x                                      0x140F1B898

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405AD3E0
#define CXWnd__ClrFocus_x                                          0x1405AD6D0
#define CXWnd__Destroy_x                                           0x1405AD850
#define CXWnd__DoAllDrawing_x                                      0x1405AD950
#define CXWnd__DrawColoredRect_x                                   0x1405AE120
#define CXWnd__DrawTooltip_x                                       0x1405AF790
#define CXWnd__DrawTooltipAtPoint_x                                0x1405AF840
#define CXWnd__GetChildItem_x                                      0x1405B0140
#define CXWnd__GetChildWndAt_x                                     0x1405B0200
#define CXWnd__GetClientRect_x                                     0x1405B04B0
#define CXWnd__GetClientClipRect_x                                 0x1405B0360
#define CXWnd__GetRelativeRect_x                                   0x1405B1E90
#define CXWnd__GetScreenClipRect_x                                 0x1405B1FA0
#define CXWnd__GetScreenRect_x                                     0x1405B2120
#define CXWnd__GetTooltipRect_x                                    0x1405B22A0
#define CXWnd__IsActive_x                                          0x1405B2860
#define CXWnd__IsDescendantOf_x                                    0x1405B2890
#define CXWnd__IsReallyVisible_x                                   0x1405B2900
#define CXWnd__IsType_x                                            0x1405B2950
#define CXWnd__Minimize_x                                          0x1405B2A50
#define CXWnd__ProcessTransition_x                                 0x1405B3910
#define CXWnd__Resize_x                                            0x1405B3A30
#define CXWnd__Right_x                                             0x1405B3AD0
#define CXWnd__SetFocus_x                                          0x1405B3E80
#define CXWnd__SetFont_x                                           0x1405B3ED0
#define CXWnd__SetKeyTooltip_x                                     0x1405B3FD0
#define CXWnd__SetMouseOver_x                                      0x1405B4110
#define CXWnd__SetParent_x                                         0x1405B4190
#define CXWnd__StartFade_x                                         0x1405B45E0
#define CXWnd__vftable_x                                           0x140ACCC70
#define CXWnd__CXWnd_x                                             0x1405ABF90
#define CXWnd__dCXWnd_x                                            0x1405AC8C0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405F6B00

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405D4530
#define CXWndManager__DrawCursor_x                                 0x1405D4810
#define CXWndManager__DrawWindows_x                                0x1405D4A70
#define CXWndManager__GetKeyboardFlags_x                           0x1405D50C0
#define CXWndManager__HandleKeyboardMsg_x                          0x1405D5100
#define CXWndManager__RemoveWnd_x                                  0x1405D8820

// CDBStr
#define CDBStr__GetString_x                                        0x14018DE80

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x140684A30

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D20B0
#define CCharacterListWnd__EnterWorld_x                            0x1400D10C0
#define CCharacterListWnd__Quit_x                                  0x1400D2090
#define CCharacterListWnd__UpdateList_x                            0x1400D2F10

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140651EE0
#define ItemBase__CreateItemTagString_x                            0x140652970
#define ItemBase__GetImageNum_x                                    0x140655030
#define ItemBase__GetItemValue_x                                   0x140656F00
#define ItemBase__IsEmpty_x                                        0x140658BF0
#define ItemBase__IsKeyRingItem_x                                  0x140659300
#define ItemBase__ValueSellMerchant_x                              0x14065D520
#define ItemClient__CanDrop_x                                      0x1402B87E0
#define ItemClient__CanGoInBag_x                                   0x1402B8910
#define ItemClient__CreateItemClient_x                             0x1402B8BA0
#define ItemClient__dItemClient_x                                  0x1402B8650

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401AD720
#define EQ_LoadingS__Array_x                                       0x140D37240

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140669570
#define PcBase__GetCombatAbility_x                                 0x140669C60
#define PcBase__GetCombatAbilityTimer_x                            0x140669D00
#define PcBase__GetItemContainedRealEstateIds_x                    0x14066A4A0
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14066AF20
#define PcClient__AlertInventoryChanged_x                          0x1402DB990
#define PcClient__GetConLevel_x                                    0x1402DC0E0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402DE870
#define PcClient__HasLoreItem_x                                    0x1402DF8C0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402EC140
#define PcZoneClient__RemoveMyAffect_x                             0x1402EF610

// EQGroundItemListManager
#define EQGroundItem__EQGroundItem_x                               0x140221750
#define EQGroundItemListManager__Add_x                             0x140221900
#define EQGroundItemListManager__Clear_x                           0x1402219A0
#define EQGroundItemListManager__Delete_x                          0x140221A60
#define EQGroundItemListManager__Instance_x                        0x140221AF0

// EQPlacedItemManager
#define EQPlacedItemManager__Add_x                                 0x14025C620

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140188660

// PlayerClient
#define PlayerBase__CanSee_x                                       0x14063F330
#define PlayerBase__CanSee1_x                                      0x14063F400
#define PlayerBase__GetVisibilityLineSegment_x                     0x14063F8E0
#define PlayerBase__HasProperty_x                                  0x14063FAB0
#define PlayerBase__IsTargetable_x                                 0x14063FB70
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402FD2B0
#define PlayerClient__GetPcClient_x                                0x1402FFDE0
#define PlayerClient__PlayerClient_x                               0x1402F5600
#define PlayerClient__SetNameSpriteState_x                         0x140303510
#define PlayerClient__SetNameSpriteTint_x                          0x1403044D0
#define PlayerZoneClient__ChangeHeight_x                           0x140312FF0
#define PlayerZoneClient__DoAttack_x                               0x140313D00
#define PlayerZoneClient__GetLevel_x                               0x140317430
#define PlayerZoneClient__IsValidTeleport_x                        0x14025F3C0
#define PlayerZoneClient__LegalPlayerRace_x                        0x14019C280

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x14030C4F0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x14030C5A0  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x14030C6A0
#define PlayerManagerClient__CreatePlayer_x                        0x14030BFC0
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x14063EEF0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402BDD30
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402BD660
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402BD6D0
#define KeypressHandler__ClearCommandStateArray_x                  0x1402BDCC0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402BDE50
#define KeypressHandler__HandleKeyUp_x                             0x1402BDF70
#define KeypressHandler__SaveKeymapping_x                          0x1402BDB50  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140682550  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x14067C320

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402E5980  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402EA260
#define PcZoneClient__GetPcSkillLimit_x                            0x1402ED220
#define PcZoneClient__RemovePetEffect_x                            0x1402EF8F0
#define PcZoneClient__HasAlternateAbility_x                        0x1402EDE00
#define PcZoneClient__CanEquipItem_x                               0x1402E8550
#define PcZoneClient__GetItemByID_x                                0x1402EB180
#define PcZoneClient__RemoveBuffEffect_x                           0x1402EF490
#define PcZoneClient__BandolierSwap_x                              0x1402DBA40

// Doors
#define EQSwitch__UseSwitch_x                                      0x140263EF0

// IconCache
#define IconCache__GetIcon_x                                       0x1403C9D60

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403BE1A0
#define CContainerMgr__CloseContainer_x                            0x1403BDAC0
#define CContainerMgr__OpenExperimentContainer_x                   0x1403BE520

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404BA230

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402B00D0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140449B20
#define CLootWnd__RequestLootSlot_x                                0x14044AB70

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401DD0D0
#define EQ_Spell__SpellAffects_x                                   0x1401DE3B0
#define EQ_Spell__SpellAffectBase_x                                0x1401DE310
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400DAFE0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400DAF90
#define EQ_Spell__IsSPAStacking_x                                  0x1401DDFE0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401DDB90
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401DD450

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C27A0

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x140517480
#define CTargetWnd__RefreshTargetBuffs_x                           0x140516B90
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x140516390

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x14051EB20  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140185000
#define CTaskManager__GetTaskStatus_x                              0x140185110
#define CTaskManager__GetElementDescription_x                      0x140184C90

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401DB3F0
#define EqSoundManager__PlayScriptMp3_x                            0x1401DA230
#define EqSoundManager__SoundAssistPlay_x                          0x140336860  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140336BA0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405B5380
#define CTextureAnimation__SetCurCell_x                            0x1405B5690

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402AE2D0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x14069D2B0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x14069D330
#define CharacterBase__IsExpansionFlag_x                           0x140200C10

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140398FF0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140399A60
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x14039AFB0

// messages
#define msg_spell_worn_off_x                                       0x140217C90
#define msg_new_text_x                                             0x140213450
#define __msgTokenTextParam_x                                      0x14020A940
#define msgTokenText_x                                             0x14020A850

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140338490
#define SpellManager__GetSpellByGroupAndRank_x                     0x1403383B0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x14064D550

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140442F40

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403C2F00
#define CCursorAttachment__IsOkToActivate_x                        0x1403C63A0
#define CCursorAttachment__RemoveAttachment_x                      0x1403C6650
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405EE4C0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405EE6B0
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405EE6C0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140150B90
#define CFindItemWnd__Update_x                                     0x140151530
#define CFindItemWnd__PickupSelectedItem_x                         0x14014A4D0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14015B330
#define LootFiltersManager__GetItemFilterData_x                    0x14015BE40
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14015C6E0
#define LootFiltersManager__SetItemLootFilter_x                    0x14015C990

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14049CAD0

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x140330FE0
#define CResolutionHandler__UpdateResolution_x                     0x14059A930

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403BA450

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406A1770  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406A1660  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403E0F90
#define CGroupWnd__UpdateDisplay_x                                 0x1403E0B70

// ItemBase
#define ItemBase__IsLore_x                                         0x140659440
#define ItemBase__IsLoreEquipped_x                                 0x1406594D0

#define MultipleItemMoveManager__ProcessMove_x                     0x1402D1530

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14025C780
#define EQPlacedItemManager__GetItemByGuid_x                       0x14025C710
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14025C750

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14032B430

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140127550
#define FactionManagerClient__HandleFactionMessage_x               0x140127930
#define FactionManagerClient__GetFactionStanding_x                 0x140126D20
#define FactionManagerClient__GetMaxFaction_x                      0x140126D20
#define FactionManagerClient__GetMinFaction_x                      0x140126BD0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AF7E0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140132D30

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401B62F0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401B54B0
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401B6110  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401B6090  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x14033D740

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14032B430

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405AB160

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140086E70

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14034F040

// AchievementManager
#define AchievementManager__Instance_x                             0x14008F190

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x1406855B0
#define FreeToPlayClient__RestrictionInfo_x                        0x140AE15F0

// UdpConnection
#define UdpConnection__GetStats_x                                  0x14054D5C0

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x140838058
#define CGFScreenWnd__CGFScreenWnd_x                               0x140071550
#define CGFScreenWnd__CGFScreenWnd1_x                              0x1400716E0
#define CGFScreenWnd__dCGFScreenWnd_x                              0x140071890

#if __has_include("../../../../private/eqgame-private.h")
#include "../../../../private/eqgame-private.h"
#endif
