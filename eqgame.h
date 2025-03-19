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

#define __ClientDate                                               20250317u
#define __ExpectedVersionDate                                     "Mar 17 2025"
#define __ExpectedVersionTime                                     "18:32:44"
#define __ActualVersionDate_x                                      0x140954180
#define __ActualVersionTime_x                                      0x140954170
#define __ActualVersionBuild_x                                     0x1408EA840

// Memory Protection
#define __MemChecker0_x                                            0x1402B7E90
#define __MemChecker1_x                                            0x14057BCB0
#define __MemChecker4_x                                            0x140285770
#define __EncryptPad0_x                                            0x140D22E70

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E5BAA0
#define instEQZoneInfo_x                                           0x140E5BC94 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x14021C020
#define __gfMaxZoomCameraDistance_x                                0x1408EBAB8
#define __gfMaxCameraDistance_x                                    0x140A909D8
#define __CurrentSocial_x                                          0x140BDE940 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D1A710
#define g_eqCommandStates_x                                        0x140D1B780
#define __CommandList_x                                            0x140D1B9C0
#define __ScreenMode_x                                             0x140DA33AC
#define __gWorld_x                                                 0x140E55F60
#define __gpbCommandEvent_x                                        0x140E564CC
#define __ServerHost_x                                             0x140E566B8
#define __Guilds_x                                                 0x140E5A650
#define __MemCheckBitmask_x                                        0x140E5BFDF
#define __MemCheckActive_x                                         0x140E5D6DD
#define __MouseEventTime_x                                         0x140ED1028
#define DI8__MouseState_x                                          0x140ED5188
#define __heqmain_x                                                0x140ED7618
#define DI8__Mouse_x                                               0x140ED7630
#define __HWnd_x                                                   0x140ED7638
#define __Mouse_x                                                  0x140ED7640
#define DI8__Keyboard_x                                            0x140ED7660
#define __LoginName_x                                              0x140ED7DCC
#define __CurrentMapLabel_x                                        0x140EEB660
#define __LabelCache_x                                             0x140EEC230
#define __ChatFilterDefs_x                                         0x140A2BAD0
#define Teleport_Table_Size_x                                      0x140E56554
#define Teleport_Table_x                                           0x140E53F30

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E569E0
#define pinstActiveBanker_x                                        0x140E56410
#define pinstActiveCorpse_x                                        0x140E56400
#define pinstActiveGMaster_x                                       0x140E56408
#define pinstActiveMerchant_x                                      0x140E563F8
#define pinstAltAdvManager_x                                       0x140DA41E8
#define pinstCEverQuest_x                                          0x140ED7678
#define pinstCamActor_x                                            0x140DA3398
#define pinstCDBStr_x                                              0x140DA2FA0
#define pinstCDisplay_x                                            0x140E53F10
#define pinstControlledPlayer_x                                    0x140E564A0
#define pinstCResolutionHandler_x                                  0x140EFCA68
#define pinstCSidlManager_x                                        0x140EFD7D0
#define pinstCXWndManager_x                                        0x140EFD7C8
#define instDynamicZone_x                                          0x140E5A510 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E5A55E
#define instExpeditionName_x                                       0x140E5A59E
#define pinstDZMember_x                                            0x140E5A628
#define pinstDZTimerInfo_x                                         0x140E5A630
#define pinstEqLogin_x                                             0x140ED7710
#define instTribute_x                                              0x140D15D50
#define pinstDeviceInputProxy_x                                    0x140E5BAFC
#define pinstEQSoundManager_x                                      0x140DA4568
#define pinstEQSpellStrings_x                                      0x140D87B70
#define pinstSGraphicsEngine_x                                     0x140EFC7E8
#define pinstLocalPC_x                                             0x140E53F20
#define pinstLocalPlayer_x                                         0x140E563F0
#define pinstCMercenaryClientManager_x                             0x140ED2908
#define pinstModelPlayer_x                                         0x140E56420
#define pinstRenderInterface_x                                     0x140EFC800
#define pinstSkillMgr_x                                            0x140ED45A8
#define pinstSpawnManager_x                                        0x140ED2CD0
#define pinstSpellManager_x                                        0x140ED4610
#define pinstStringTable_x                                         0x140E55F58
#define pinstSwitchManager_x                                       0x140E53E90
#define pinstTarget_x                                              0x140E56498
#define pinstTaskMember_x                                          0x140D15D40 // Part of g_taskManager
#define pinstTradeTarget_x                                         0x140E56418
#define instTributeActive_x                                        0x140D15D79
#define pinstViewActor_x                                           0x140DA3390
#define pinstWorldData_x                                           0x140E564B0
#define pinstPlayerPath_x                                          0x140ED2CF8
#define pinstTargetIndicator_x                                     0x140ED46C0
#define EQObject_Top_x                                             0x140E569D0

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140EE87B8
#define pinstCContainerMgr_x                                       0x140DA33E0
#define pinstCContextMenuManager_x                                 0x140EFD4B0
#define pinstCInvSlotMgr_x                                         0x140DA33C0
#define pinstCItemDisplayManager_x                                 0x140EEB230
#define pinstCPopupWndManager_x                                    0x140EEBAC0
#define pinstCSpellDisplayMgr_x                                    0x140EEC110
#define pinstCTaskManager_x                                        0x140BDEC80
#define pinstEQSuiteTextureLoader_x                                0x140D2C580
#define pinstItemIconCache_x                                       0x140EE8B18
#define pinstLootFiltersManager_x                                  0x140DA29E8
#define pinstGFViewListener_x                                      0x140EFCC88


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x1402452B0
#define __CastRay_x                                                0x14023D640
#define __CastRay2_x                                               0x14023D340
#define __compress_block_x                                         0x140531360
#define __ConvertItemTags_x                                        0x14023DAA0
#define __CleanItemTags_x                                          0x1400899C0
#define __CreateCascadeMenuItems_x                                 0x14018B160
#define __decompress_block_x                                       0x140577520
#define __DoesFileExist_x                                          0x14057FB60
#define __EQGetTime_x                                              0x14057C260
#define __ExecuteCmd_x                                             0x140213930
#define __FixHeading_x                                             0x140637060
#define __FlushDxKeyboard_x                                        0x14033B8A0
#define __get_bearing_x                                            0x1402474A0
#define __get_melee_range_x                                        0x140247590
#define __GetAnimationCache_x                                      0x1403BA370
#define __GetGaugeValueFromEQ_x                                    0x1404F1000
#define __GetLabelFromEQ_x                                         0x1404F2610
#define __GetXTargetType_x                                         0x140638340   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x1406370E0
#define __HelpPath_x                                               0x140ED0EF0   // Why?
#define __NewUIINI_x                                               0x1404FE060   // Why?
#define __ProcessDeviceEvents_x                                    0x140285D80
#define __ProcessGameEvents_x                                      0x14027AAB0
#define __ProcessKeyboardEvents_x                                  0x14033CFF0
#define __ProcessMouseEvents_x                                     0x14027C180
#define __SaveColors_x                                             0x14019B180
#define __STMLToText_x                                             0x140587DA0
#define __WndProc_x                                                0x14033A0A0
#define CMemoryMappedFile__SetFile_x                               0x1407E4130
#define DrawNetStatus_x                                            0x1402C63D0
#define Util__FastTime_x                                           0x140578440
#define __eq_delete_x                                              0x1406B0124
#define __eq_new_x                                                 0x1406B00E0
#define __CopyLayout_x                                             0x1402B4280
#define __ThrottleFrameRate_x                                      0x14026A2D4
#define __ThrottleFrameRateEnd_x                                   0x14026A334

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x14034C6F0
#define CAAWnd__Update_x                                           0x14034C9F0
#define CAAWnd__UpdateSelected_x                                   0x14034DA40

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400ABDC0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A46C0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140838BE8
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AC6F0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401A62A0
#define AltAdvManager__IsAbilityReady_x                            0x1401A6730
#define AltAdvManager__GetAAById_x                                 0x1401A5B70
#define AltAdvManager__CanTrainAbility_x                           0x1401A5980
#define AltAdvManager__CanSeeAbility_x                             0x1401A5640

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D2910
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D3770
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D39C0
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400E7EB0
#define CharacterZoneClient__CanUseItem_x                          0x1400E82E0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D4390
#define CharacterZoneClient__CastSpell_x                           0x1400D4430
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E3E10
#define CharacterZoneClient__Cur_HP_x                              0x1400E99F0
#define CharacterZoneClient__Cur_Mana_x                            0x1400E9BB0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D7630
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F0080
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FEAB0  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D8AD0
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E77B0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F1C30
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F0B10
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D8C50
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C8DF0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400CA7F0
#define CharacterZoneClient__GetHPRegen_x                          0x1400F1250
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E9660
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F1EC0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D8CD0
#define CharacterZoneClient__GetManaRegen_x                        0x1400F2CA0
#define CharacterZoneClient__GetModCap_x                           0x1400FA270
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D8F60
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D9130
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CD980
#define CharacterZoneClient__HasSkill_x                            0x1400F5CA0
#define CharacterZoneClient__HitBySpell_x                          0x1400D9BC0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DD4E0
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F9D50
#define CharacterZoneClient__Max_Endurance_x                       0x1402E2BD0  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400FA0A0
#define CharacterZoneClient__Max_Mana_x                            0x1402E2DF0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400FA500
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E0970
#define CharacterZoneClient__SpellDuration_x                       0x1400E16A0
#define CharacterZoneClient__TotalEffect_x                         0x1400E29F0
#define CharacterZoneClient__UseSkill_x                            0x1400FFA20


// CBankWnd
#define CBankWnd__WndNotification_x                                0x14036AF50

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x1403752B0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140371140
#define CBarterSearchWnd__UpdateInventoryList_x                    0x140374D30

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140377970

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AAFD90

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x14039A8A0
#define CChatWindowManager__InitContextMenu_x                      0x14039AA30
#define CChatWindowManager__FreeChatWindow_x                       0x140399920
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403A2610
#define CChatWindowManager__CreateChatWindow_x                     0x140399350

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140107EF0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403A3660
#define CChatWindow__Clear_x                                       0x1403A4620
#define CChatWindow__WndNotification_x                             0x1403A5810
#define CChatWindow__AddHistory_x                                  0x1403A4120

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405BCDB0
#define CContextMenu__RemoveMenuItem_x                             0x1405BD1A0
#define CContextMenu__RemoveAllMenuItems_x                         0x1405BD170
#define CContextMenu__CheckMenuItem_x                              0x1405BCFE0
#define CContextMenu__SetMenuItem_x                                0x1405BD1C0
#define CContextMenu__AddSeparator_x                               0x1405BCF20

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405AECA0
#define CContextMenuManager__RemoveMenu_x                          0x1405AF280
#define CContextMenuManager__PopupMenu_x                           0x1405AEFC0
#define CContextMenuManager__Flush_x                               0x1405AED20
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403B1F00

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1406424E0
#define CChatService__GetFriendName_x                              0x14068AC30

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14059FB90
#define CComboWnd__Draw_x                                          0x14059FC90
#define CComboWnd__GetCurChoice_x                                  0x14059FF70  // unused
#define CComboWnd__GetListRect_x                                   0x1405A0010
#define CComboWnd__InsertChoice_x                                  0x1405A0350
#define CComboWnd__SetColors_x                                     0x1405A06E0
#define CComboWnd__SetChoice_x                                     0x1405A06A0
#define CComboWnd__GetItemCount_x                                  0x1405A0000
#define CComboWnd__GetCurChoiceText_x                              0x14059FFB0  // unused
#define CComboWnd__GetChoiceText_x                                 0x14059FF40
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405A0410

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403AFC80
#define CContainerWnd__SetContainer_x                              0x140407520
#define CContainerWnd__vftable_x                                   0x1409C7BB8

// CDisplay
#define CDisplay__cameraType_x                                     0x140DA315C
#define CDisplay__ZoneMainUI_x                                     0x1405D6FD0
#define CDisplay__PreZoneMainUI_x                                  0x1401980B0
#define CDisplay__CleanGameUI_x                                    0x14018A220
#define CDisplay__GetClickedActor_x                                0x14018E3E0
#define CDisplay__GetUserDefinedColor_x                            0x14018F050
#define CDisplay__InitCharSelectUI_x                               0x14018F300
#define CDisplay__ReloadUI_x                                       0x14019A3A0
#define CDisplay__RestartUI_x                                      0x1401F9AE0
#define CDisplay__WriteTextHD2_x                                   0x1401A13B0
#define CDisplay__TrueDistance_x                                   0x1401A1060
#define CDisplay__SetViewActor_x                                   0x14019D8A0
#define CDisplay__GetFloorHeight_x                                 0x14018E640
#define CDisplay__ToggleScreenshotMode_x                           0x1401A0B50
#define CDisplay__RealRender_World_x                               0x140199780

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405E1200
#define CEditWnd__DrawCaret_x                                      0x1405D2CC0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405D3180
#define CEditWnd__GetCaretPt_x                                     0x1405D3400  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405D3440
#define CEditWnd__GetDisplayString_x                               0x1405D36B0
#define CEditWnd__GetHorzOffset_x                                  0x1405D38F0
#define CEditWnd__GetLineForPrintableChar_x                        0x1405D3A40
#define CEditWnd__GetSelStartPt_x                                  0x1405D3D20  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405D3B70
#define CEditWnd__PointFromPrintableChar_x                         0x1405D48D0
#define CEditWnd__ReplaceSelection_x                               0x1405D4C80
#define CEditWnd__SelectableCharFromPoint_x                        0x1405D5120
#define CEditWnd__SetEditable_x                                    0x1405D53B0
#define CEditWnd__SetWindowText_x                                  0x1405D53E0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14026B3E0
#define CEverQuest__ClickedPlayer_x                                0x140260D30
#define CEverQuest__CreateTargetIndicator_x                        0x1402615F0
#define CEverQuest__DoTellWindow_x                                 0x140107C00 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1401084C0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14026CDA0
#define CEverQuest__dsp_chat_x                                     0x140107630 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x140297B60
#define CEverQuest__Emote_x                                        0x14026D780
#define CEverQuest__GetBodyTypeDesc_x                              0x14026E530
#define CEverQuest__GetClassDesc_x                                 0x14026E590
#define CEverQuest__GetClassThreeLetterCode_x                      0x14026E960
#define CEverQuest__GetDeityDesc_x                                 0x14026EC10
#define CEverQuest__GetLangDesc_x                                  0x14026F040
#define CEverQuest__GetRaceDesc_x                                  0x14026F3E0
#define CEverQuest__InterpretCmd_x                                 0x140270D20
#define CEverQuest__LeftClickedOnPlayer_x                          0x140285DF0
#define CEverQuest__LMouseUp_x                                     0x140272740
#define CEverQuest__RightClickedOnPlayer_x                         0x140283610
#define CEverQuest__RMouseUp_x                                     0x14027CD10
#define CEverQuest__SetGameState_x                                 0x140288D00
#define CEverQuest__UPCNotificationFlush_x                         0x14028E630 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x1402723B0
#define CEverQuest__ReportSuccessfulHeal_x                         0x14027E0C0
#define CEverQuest__ReportSuccessfulHit_x                          0x14027EEE0

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403C52B0

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C27C0
#define CGuild__GetGuildName_x                                     0x1400C2800

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403E8710

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402A9C10
#define CHotButton__SetCheck_x                                     0x1402A9EE0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140400290
#define CInvSlotMgr__MoveItem_x                                    0x140400470
#define CInvSlotMgr__SelectSlot_x                                  0x140401E70

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403FD4B0
#define CInvSlot__SliderComplete_x                                 0x1403FEA00
#define CInvSlot__GetItemBase_x                                    0x1403F8F00
#define CInvSlot__UpdateItem_x                                     0x1403FEEC0

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x140403200

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1404246F0
#define CItemDisplayWnd__UpdateStrings_x                           0x140427240
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140420F40
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140422890
#define CItemDisplayWnd__RequestConvertItem_x                      0x140423B20

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404EDB10
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404EF800

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x14052A6C0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x14041D660

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x1401526A0

// CLabel
#define CLabel__UpdateText_x                                       0x14042E610

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405A3520
#define CListWnd__dCListWnd_x                                      0x1405A3970
#define CListWnd__vftable_x                                        0x140AADEE0
#define CListWnd__AddColumn_x                                      0x1405A4010
#define CListWnd__AddColumn1_x                                     0x1405A40B0
#define CListWnd__AddLine_x                                        0x1405A4210
#define CListWnd__AddString_x                                      0x1405A47A0
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405A4D10
#define CListWnd__CalculateVSBRange_x                              0x1405A4FF0
#define CListWnd__ClearSel_x                                       0x1405A51A0
#define CListWnd__ClearAllSel_x                                    0x1405A5140
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405A5200
#define CListWnd__Compare_x                                        0x1405A53C0
#define CListWnd__Draw_x                                           0x1405A5890
#define CListWnd__DrawColumnSeparators_x                           0x1405A6440
#define CListWnd__DrawHeader_x                                     0x1405A6500
#define CListWnd__DrawItem_x                                       0x1405A6BD0
#define CListWnd__DrawLine_x                                       0x1405A7550
#define CListWnd__DrawSeparator_x                                  0x1405A7A10
#define CListWnd__EnableLine_x                                     0x1405A7E30
#define CListWnd__EnsureVisible_x                                  0x1405A7E90
#define CListWnd__ExtendSel_x                                      0x1405A7F90
#define CListWnd__GetColumnMinWidth_x                              0x1405A8320
#define CListWnd__GetColumnWidth_x                                 0x1405A83A0
#define CListWnd__GetCurSel_x                                      0x1405A84A0
#define CListWnd__GetItemData_x                                    0x1405A8820
#define CListWnd__GetItemHeight_x                                  0x1405A8860
#define CListWnd__GetItemRect_x                                    0x1405A8A80
#define CListWnd__GetItemText_x                                    0x1405A8D20
#define CListWnd__GetSelList_x                                     0x1405A8F70
#define CListWnd__GetSeparatorRect_x                               0x1405A9160
#define CListWnd__InsertLine_x                                     0x1405AA5C0
#define CListWnd__RemoveLine_x                                     0x1405AAC30
#define CListWnd__SetColors_x                                      0x1405AAFF0
#define CListWnd__SetColumnJustification_x                         0x1405AB010
#define CListWnd__SetColumnLabel_x                                 0x1405AB090
#define CListWnd__SetColumnWidth_x                                 0x1405AB230
#define CListWnd__SetCurSel_x                                      0x1405AB300
#define CListWnd__SetItemColor_x                                   0x1405AB570
#define CListWnd__SetItemData_x                                    0x1405AB610
#define CListWnd__SetItemText_x                                    0x1405AB850
#define CListWnd__Sort_x                                           0x1405ABC60
#define CListWnd__ToggleSel_x                                      0x1405ABDD0
#define CListWnd__SetColumnsSizable_x                              0x1405AB280
#define CListWnd__SetItemWnd_x                                     0x1405AB980
#define CListWnd__GetItemWnd_x                                     0x1405A8F00
#define CListWnd__SetItemIcon_x                                    0x1405AB650
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405A4AE0
#define CListWnd__SetVScrollPos_x                                  0x1405ABBC0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x1404418E0

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A146D8
#define MapViewMap__Clear_x                                        0x140443460
#define MapViewMap__SetZoom_x                                      0x140449AB0
#define MapViewMap__HandleLButtonDown_x                            0x1404465F0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14046B170  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140471720
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140471EC0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x1404756C0
#define CMerchantWnd__SelectBuySellSlot_x                          0x140474A10
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140479970

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x140665F40
#define CPacketScrambler__hton_x                                   0x140665F30

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405CC580
#define CSidlManagerBase__FindAnimation1_x                         0x1405CC4C0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405CCBB0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405CC960
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405CB8C0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405CB850
#define CSidlManagerBase__CreateXWnd_x                             0x1405CAE90

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404E0A70
#define CSidlManager__CreateXWnd_x                                 0x1404E0C30

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x140591120
#define CSidlScreenWnd__CalculateVSBRange_x                        0x140591240
#define CSidlScreenWnd__ConvertToRes_x                             0x1405DB740 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x1405913C0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x140590850
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x140590920
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x140590B30
#define CSidlScreenWnd__DrawSidlPiece_x                            0x140591AB0
#define CSidlScreenWnd__EnableIniStorage_x                         0x140591CE0
#define CSidlScreenWnd__GetChildItem_x                             0x140591E80
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405920D0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x14059C190 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x140592440
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405927B0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140593070
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140593A70
#define CSidlScreenWnd__m_layoutCopy_x                             0x140EFCB28
#define CSidlScreenWnd__StoreIniInfo_x                             0x140594100
#define CSidlScreenWnd__StoreIniVis_x                              0x1405948F0
#define CSidlScreenWnd__vftable_x                                  0x140AAD168
#define CSidlScreenWnd__WndNotification_x                          0x140594940

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x140324C20 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x1403250C0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x140324FF0
#define CSkillMgr__IsActivatedSkill_x                              0x140325470
#define CSkillMgr__IsCombatSkill_x                                 0x1403254B0
#define CSkillMgr__GetSkillTimerDuration_x                         0x1403253E0
#define CSkillMgr__GetSkillLastUsed_x                              0x140325040

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405AC750
#define CSliderWnd__SetValue_x                                     0x1405ACF60
#define CSliderWnd__SetNumTicks_x                                  0x1405ACDE0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404E7130

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405B1700
#define CStmlWnd__CalculateHSBRange_x                              0x14059BB60
#define CStmlWnd__CalculateVSBRange_x                              0x1405B25A0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405B3090
#define CStmlWnd__ForceParseNow_x                                  0x1405B3130
#define CStmlWnd__GetVisibleText_x                                 0x1405B3800
#define CStmlWnd__MakeStmlColorTag_x                               0x1405B5540
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405B5580
#define CStmlWnd__SetSTMLText_x                                    0x1405BC550
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405BC700
#define CStmlWnd__UpdateHistoryString_x                            0x1405BCA90

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405AD330
#define CTabWnd__DrawCurrentPage_x                                 0x1405AD3D0
#define CTabWnd__DrawTab_x                                         0x1405AD7A0
#define CTabWnd__GetTabRect_x                                      0x1405ADE10
#define CTabWnd__InsertPage_x                                      0x1405AE0E0
#define CTabWnd__RemovePage_x                                      0x1405AE370
#define CTabWnd__SetPage_x                                         0x1405AE4D0
#define CTabWnd__UpdatePage_x                                      0x1405AE7D0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405D5830
#define CPageWnd__SetTabText_x                                     0x1405D58A0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BBE20  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BC230


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405C3F40
#define CTextureFont__DrawWrappedText1_x                           0x1405C3E50
#define CTextureFont__DrawWrappedText2_x                           0x1405C4070
#define CTextureFont__GetTextExtent_x                              0x1405C4420
#define CTextureFont__GetHeight_x                                  0x1405C43E0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405D9EA0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x140590430

// CXStr
#define CXStr__gFreeLists_x                                        0x140D2BEF0
#define CXStr__gCXStrAccess_x                                      0x140EFC688

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405971D0
#define CXWnd__ClrFocus_x                                          0x1405974C0
#define CXWnd__Destroy_x                                           0x140597640
#define CXWnd__DoAllDrawing_x                                      0x140597750
#define CXWnd__DrawColoredRect_x                                   0x140597F20
#define CXWnd__DrawTooltip_x                                       0x1405995A0
#define CXWnd__DrawTooltipAtPoint_x                                0x140599650
#define CXWnd__GetChildItem_x                                      0x140599F50
#define CXWnd__GetChildWndAt_x                                     0x14059A010
#define CXWnd__GetClientRect_x                                     0x14059A2C0
#define CXWnd__GetClientClipRect_x                                 0x14059A180
#define CXWnd__GetRelativeRect_x                                   0x14059BC90
#define CXWnd__GetScreenClipRect_x                                 0x14059BDA0
#define CXWnd__GetScreenRect_x                                     0x14059BF10
#define CXWnd__GetTooltipRect_x                                    0x14059C090
#define CXWnd__IsActive_x                                          0x14059C650
#define CXWnd__IsDescendantOf_x                                    0x14059C680
#define CXWnd__IsReallyVisible_x                                   0x14059C6F0
#define CXWnd__IsType_x                                            0x14059C730
#define CXWnd__Minimize_x                                          0x14059C830
#define CXWnd__ProcessTransition_x                                 0x14059D6F0
#define CXWnd__Resize_x                                            0x14059D7F0
#define CXWnd__Right_x                                             0x14059D890
#define CXWnd__SetFocus_x                                          0x14059DC40
#define CXWnd__SetFont_x                                           0x14059DC90
#define CXWnd__SetKeyTooltip_x                                     0x14059DD80
#define CXWnd__SetMouseOver_x                                      0x14059DEC0
#define CXWnd__SetParent_x                                         0x14059DF40
#define CXWnd__StartFade_x                                         0x14059E380
#define CXWnd__vftable_x                                           0x140AAD740
#define CXWnd__CXWnd_x                                             0x140595D60
#define CXWnd__dCXWnd_x                                            0x1405966B0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405E0980

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405BE370
#define CXWndManager__DrawCursor_x                                 0x1405BE650
#define CXWndManager__DrawWindows_x                                0x1405BE8B0
#define CXWndManager__GetKeyboardFlags_x                           0x1405BEF80
#define CXWndManager__HandleKeyboardMsg_x                          0x1405BEFC0
#define CXWndManager__RemoveWnd_x                                  0x1405C2600

// CDBStr
#define CDBStr__GetString_x                                        0x1401883E0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x14066FD80

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D05B0
#define CCharacterListWnd__EnterWorld_x                            0x1400CF2B0
#define CCharacterListWnd__Quit_x                                  0x1400D0590
#define CCharacterListWnd__UpdateList_x                            0x1400D1410

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x14063D3D0
#define ItemBase__CreateItemTagString_x                            0x14063DE20
#define ItemBase__GetImageNum_x                                    0x140640320
#define ItemBase__GetItemValue_x                                   0x140641E20
#define ItemBase__IsEmpty_x                                        0x1406439A0
#define ItemBase__IsKeyRingItem_x                                  0x1406440B0
#define ItemBase__ValueSellMerchant_x                              0x140648290
#define ItemClient__CanDrop_x                                      0x1402AC500
#define ItemClient__CanGoInBag_x                                   0x1402AC630
#define ItemClient__CreateItemClient_x                             0x1402AC8B0
#define ItemClient__dItemClient_x                                  0x1402AC370

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401A7C50
#define EQ_LoadingS__Array_x                                       0x140D18220

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140654C40
#define PcBase__GetCombatAbility_x                                 0x140655330
#define PcBase__GetCombatAbilityTimer_x                            0x1406553D0
#define PcBase__GetItemContainedRealEstateIds_x                    0x140655B70
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x1406566B0
#define PcClient__AlertInventoryChanged_x                          0x1402CE9A0
#define PcClient__GetConLevel_x                                    0x1402CEFC0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402D1750
#define PcClient__HasLoreItem_x                                    0x1402D27B0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402E00B0
#define PcZoneClient__RemoveMyAffect_x                             0x1402E3D10

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x140218040  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x1402181F0  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x140218350  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x140218290  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x1402522C0  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140182C30

// PlayerClient
#define PlayerBase__CanSee_x                                       0x1406298B0
#define PlayerBase__CanSee1_x                                      0x140629980
#define PlayerBase__GetVisibilityLineSegment_x                     0x140629E60
#define PlayerBase__HasProperty_x                                  0x14062A030
#define PlayerBase__IsTargetable_x                                 0x14062A0F0
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402F15E0
#define PlayerClient__GetPcClient_x                                0x1402F3E10
#define PlayerClient__PlayerClient_x                               0x1402E9DE0
#define PlayerClient__SetNameSpriteState_x                         0x1402F74B0
#define PlayerClient__SetNameSpriteTint_x                          0x1402F8470
#define PlayerZoneClient__ChangeHeight_x                           0x140306D00
#define PlayerZoneClient__DoAttack_x                               0x140307A10
#define PlayerZoneClient__GetLevel_x                               0x14030B130
#define PlayerZoneClient__IsValidTeleport_x                        0x140255050
#define PlayerZoneClient__LegalPlayerRace_x                        0x140196930

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x140300470  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x140300520  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x140300620
#define PlayerManagerClient__CreatePlayer_x                        0x1402FFF40
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140629470

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402B1780
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402B1380
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402B13F0
#define KeypressHandler__ClearCommandStateArray_x                  0x1402B1710  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402B18A0
#define KeypressHandler__HandleKeyUp_x                             0x1402B19C0
#define KeypressHandler__SaveKeymapping_x                          0x1402B1620  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x14066D8A0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x140667670

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402D8D50  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402DE080
#define PcZoneClient__GetPcSkillLimit_x                            0x1402E0830
#define PcZoneClient__RemovePetEffect_x                            0x1402E3FF0
#define PcZoneClient__HasAlternateAbility_x                        0x1402E1400
#define PcZoneClient__CanEquipItem_x                               0x1402DC3B0
#define PcZoneClient__GetItemByID_x                                0x1402DF110
#define PcZoneClient__RemoveBuffEffect_x                           0x1402E3B90
#define PcZoneClient__BandolierSwap_x                              0x1402DB410

// Doors
#define EQSwitch__UseSwitch_x                                      0x140259B80

// IconCache
#define IconCache__GetIcon_x                                       0x1403BA3A0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403AEA30
#define CContainerMgr__CloseContainer_x                            0x1403AE370
#define CContainerMgr__OpenExperimentContainer_x                   0x1403AEDB0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404A4D80

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402A3F20

// CLootWnd
#define CLootWnd__LootAll_x                                        0x1404358F0
#define CLootWnd__RequestLootSlot_x                                0x140436910

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401D70D0
#define EQ_Spell__SpellAffects_x                                   0x1401D8380
#define EQ_Spell__SpellAffectBase_x                                0x1401D82E0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D92C0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D9270
#define EQ_Spell__IsSPAStacking_x                                  0x1401D7FB0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401D7B70
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401D7440

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C1310

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x140501870
#define CTargetWnd__RefreshTargetBuffs_x                           0x140500F80
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x140500780

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x140508EE0  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x14017F5F0
#define CTaskManager__GetTaskStatus_x                              0x14017F700
#define CTaskManager__GetElementDescription_x                      0x14017F280

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401D5400
#define EqSoundManager__PlayScriptMp3_x                            0x1401D4240
#define EqSoundManager__SoundAssistPlay_x                          0x14032A260  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x14032A5A0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x14059F120
#define CTextureAnimation__SetCurCell_x                            0x14059F430

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402A2180

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x140688300
#define CharacterBase__GetItemByGlobalIndex1_x                     0x140688380
#define CharacterBase__IsExpansionFlag_x                           0x1401F9310

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x14038B7C0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x14038C180
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x14038D6D0

// messages
#define msg_spell_worn_off_x                                       0x14020E950
#define msg_new_text_x                                             0x14020A1C0
#define __msgTokenTextParam_x                                      0x140201B00
#define msgTokenText_x                                             0x140201A20

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x14032BC10
#define SpellManager__GetSpellByGroupAndRank_x                     0x14032BB30

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140638720

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x14042ED60

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403B3730
#define CCursorAttachment__IsOkToActivate_x                        0x1403B69F0
#define CCursorAttachment__RemoveAttachment_x                      0x1403B6CA0
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405D8340
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405D8530
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405D8540

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x14014D870
#define CFindItemWnd__Update_x                                     0x14014E210
#define CFindItemWnd__PickupSelectedItem_x                         0x140147CF0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x1401572B0
#define LootFiltersManager__GetItemFilterData_x                    0x140157DC0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140158660
#define LootFiltersManager__SetItemLootFilter_x                    0x140158910

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x140487990

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x1403247E0
#define CResolutionHandler__UpdateResolution_x                     0x140584870

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403AAD10

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x14068C6F0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x14068C5E0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403D1670
#define CGroupWnd__UpdateDisplay_x                                 0x1403D1250

// ItemBase
#define ItemBase__IsLore_x                                         0x1406441E0
#define ItemBase__IsLoreEquipped_x                                 0x140644270

#define MultipleItemMoveManager__ProcessMove_x                     0x1402C4560

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140252420
#define EQPlacedItemManager__GetItemByGuid_x                       0x1402523B0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x1402523F0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14031EC50

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x1401255A0
#define FactionManagerClient__HandleFactionMessage_x               0x140125950
#define FactionManagerClient__GetFactionStanding_x                 0x140124D70
#define FactionManagerClient__GetMaxFaction_x                      0x140124D70
#define FactionManagerClient__GetMinFaction_x                      0x140124C20

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AE3D0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140130D30

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401B05C0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401AF940
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401B03E0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401B0360  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x140330DF0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14031EC50

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x1402183E0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140594F30

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140086870

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140342630

// AchievementManager
#define AchievementManager__Instance_x                             0x14008E240

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x140670900
#define FreeToPlayClient__RestrictionInfo_x                        0x140AC1E00

// UdpConnection
#define UdpConnection__GetStats_x                                  0x140537780

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x140820578
#define CGFScreenWnd__CGFScreenWnd_x                               0x140071260
#define CGFScreenWnd__CGFScreenWnd1_x                              0x1400713F0
#define CGFScreenWnd__dCGFScreenWnd_x                              0x1400715A0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
