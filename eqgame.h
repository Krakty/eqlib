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

#define __ClientDate                                               20250310u
#define __ExpectedVersionDate                                     "Mar 10 2025"
#define __ExpectedVersionTime                                     "10:51:12"
#define __ActualVersionDate_x                                      0x140954170
#define __ActualVersionTime_x                                      0x140954160
#define __ActualVersionBuild_x                                     0x1408EA830

// Memory Protection
#define __MemChecker0_x                                            0x1402B7ED0
#define __MemChecker1_x                                            0x14057BE90
#define __MemChecker4_x                                            0x140285790
#define __EncryptPad0_x                                            0x140D22E70

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E5BAA0
#define instEQZoneInfo_x                                           0x140E5BC94 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x14021C070
#define __gfMaxZoomCameraDistance_x                                0x1408EBAA8
#define __gfMaxCameraDistance_x                                    0x140A909C8
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
#define __ChatFilterDefs_x                                         0x140A2BAC0
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
#define __allowslashcommand_x                                      0x1402452E0
#define __CastRay_x                                                0x14023D670
#define __CastRay2_x                                               0x14023D370
#define __compress_block_x                                         0x140531530
#define __ConvertItemTags_x                                        0x14023DAD0
#define __CleanItemTags_x                                          0x1400899C0
#define __CreateCascadeMenuItems_x                                 0x14018B210
#define __decompress_block_x                                       0x140577700
#define __DoesFileExist_x                                          0x14057FD40
#define __EQGetTime_x                                              0x14057C440
#define __ExecuteCmd_x                                             0x140213980
#define __FixHeading_x                                             0x140636AE0
#define __FlushDxKeyboard_x                                        0x14033B930
#define __get_bearing_x                                            0x1402474D0
#define __get_melee_range_x                                        0x1402475C0
#define __GetAnimationCache_x                                      0x1403BA450
#define __GetGaugeValueFromEQ_x                                    0x1404F11B0
#define __GetLabelFromEQ_x                                         0x1404F27B0
#define __GetXTargetType_x                                         0x140637DC0   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140636B60
#define __HelpPath_x                                               0x140ED0EF0   // Why?
#define __NewUIINI_x                                               0x1404FE210   // Why?
#define __ProcessDeviceEvents_x                                    0x140285DA0
#define __ProcessGameEvents_x                                      0x14027AAC0
#define __ProcessKeyboardEvents_x                                  0x14033D080
#define __ProcessMouseEvents_x                                     0x14027C1A0
#define __SaveColors_x                                             0x14019B230
#define __STMLToText_x                                             0x140587F80
#define __WndProc_x                                                0x14033A130
#define CMemoryMappedFile__SetFile_x                               0x1407E3C10
#define DrawNetStatus_x                                            0x1402C6410
#define Util__FastTime_x                                           0x140578620
#define __eq_delete_x                                              0x1406AFBF4
#define __eq_new_x                                                 0x1406AFBB0
#define __CopyLayout_x                                             0x1402B42E0
#define __ThrottleFrameRate_x                                      0x14026A2E4
#define __ThrottleFrameRateEnd_x                                   0x14026A344

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x14034C790
#define CAAWnd__Update_x                                           0x14034CA90
#define CAAWnd__UpdateSelected_x                                   0x14034DAE0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400ABDB0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A46B0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140838BD8
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AC6E0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401A6360
#define AltAdvManager__IsAbilityReady_x                            0x1401A67F0
#define AltAdvManager__GetAAById_x                                 0x1401A5C30
#define AltAdvManager__CanTrainAbility_x                           0x1401A5A40
#define AltAdvManager__CanSeeAbility_x                             0x1401A5700

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D2910
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D3770
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D39C0
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400E7EC0
#define CharacterZoneClient__CanUseItem_x                          0x1400E82F0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D4390
#define CharacterZoneClient__CastSpell_x                           0x1400D4430
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E3E20
#define CharacterZoneClient__Cur_HP_x                              0x1400E9A00
#define CharacterZoneClient__Cur_Mana_x                            0x1400E9BC0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D7630
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F0090
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FEAC0  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D8AD0
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E77C0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F1C40
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F0B20
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D8C50
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C8DF0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400CA7F0
#define CharacterZoneClient__GetHPRegen_x                          0x1400F1260
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E9670
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F1ED0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D8CD0
#define CharacterZoneClient__GetManaRegen_x                        0x1400F2CB0
#define CharacterZoneClient__GetModCap_x                           0x1400FA280
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D8F60
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D9130
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CD980
#define CharacterZoneClient__HasSkill_x                            0x1400F5CB0
#define CharacterZoneClient__HitBySpell_x                          0x1400D9BC0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DD4E0
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F9D60
#define CharacterZoneClient__Max_Endurance_x                       0x1402E2C80  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400FA0B0
#define CharacterZoneClient__Max_Mana_x                            0x1402E2EA0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400FA510
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E0970
#define CharacterZoneClient__SpellDuration_x                       0x1400E16A0
#define CharacterZoneClient__TotalEffect_x                         0x1400E2A00
#define CharacterZoneClient__UseSkill_x                            0x1400FFA30


// CBankWnd
#define CBankWnd__WndNotification_x                                0x14036B010

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140375370

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140371200
#define CBarterSearchWnd__UpdateInventoryList_x                    0x140374DF0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140377A40

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AAFD80

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x14039A990
#define CChatWindowManager__InitContextMenu_x                      0x14039AB20
#define CChatWindowManager__FreeChatWindow_x                       0x140399A10
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403A2700
#define CChatWindowManager__CreateChatWindow_x                     0x140399440

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140107F10

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403A3750
#define CChatWindow__Clear_x                                       0x1403A4710
#define CChatWindow__WndNotification_x                             0x1403A5900
#define CChatWindow__AddHistory_x                                  0x1403A4210

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405BCF00
#define CContextMenu__RemoveMenuItem_x                             0x1405BD2F0
#define CContextMenu__RemoveAllMenuItems_x                         0x1405BD2C0
#define CContextMenu__CheckMenuItem_x                              0x1405BD130
#define CContextMenu__SetMenuItem_x                                0x1405BD310
#define CContextMenu__AddSeparator_x                               0x1405BD070

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405AEDD0
#define CContextMenuManager__RemoveMenu_x                          0x1405AF3B0
#define CContextMenuManager__PopupMenu_x                           0x1405AF0F0
#define CContextMenuManager__Flush_x                               0x1405AEE50
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403B1FE0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x14068A6F0
#define CChatService__GetFriendName_x                              0x14068A700

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14059FCC0
#define CComboWnd__Draw_x                                          0x14059FDC0
#define CComboWnd__GetCurChoice_x                                  0x1405A00A0  // unused
#define CComboWnd__GetListRect_x                                   0x1405A0140
#define CComboWnd__InsertChoice_x                                  0x1405A0480
#define CComboWnd__SetColors_x                                     0x1405A0810
#define CComboWnd__SetChoice_x                                     0x1405A07D0
#define CComboWnd__GetItemCount_x                                  0x1405A0130
#define CComboWnd__GetCurChoiceText_x                              0x1405A00E0  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405A0070
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405A0540

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403AFD60
#define CContainerWnd__SetContainer_x                              0x140407670
#define CContainerWnd__vftable_x                                   0x1409C7BA8

// CDisplay
#define CDisplay__cameraType_x                                     0x140DA315C
#define CDisplay__ZoneMainUI_x                                     0x1405D70C0
#define CDisplay__PreZoneMainUI_x                                  0x140198160
#define CDisplay__CleanGameUI_x                                    0x14018A2D0
#define CDisplay__GetClickedActor_x                                0x14018E490
#define CDisplay__GetUserDefinedColor_x                            0x14018F100
#define CDisplay__InitCharSelectUI_x                               0x14018F3B0
#define CDisplay__ReloadUI_x                                       0x14019A450
#define CDisplay__RestartUI_x                                      0x1401F9AE0
#define CDisplay__WriteTextHD2_x                                   0x1401A1460
#define CDisplay__TrueDistance_x                                   0x1401A1110
#define CDisplay__SetViewActor_x                                   0x14019D950
#define CDisplay__GetFloorHeight_x                                 0x14018E6F0
#define CDisplay__ToggleScreenshotMode_x                           0x1401A0C00
#define CDisplay__RealRender_World_x                               0x140199830

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405E12F0
#define CEditWnd__DrawCaret_x                                      0x1405D2DC0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405D3280
#define CEditWnd__GetCaretPt_x                                     0x1405D3500  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405D3540
#define CEditWnd__GetDisplayString_x                               0x1405D37B0
#define CEditWnd__GetHorzOffset_x                                  0x1405D39F0
#define CEditWnd__GetLineForPrintableChar_x                        0x1405D3B40
#define CEditWnd__GetSelStartPt_x                                  0x1405D3E20  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405D3C70
#define CEditWnd__PointFromPrintableChar_x                         0x1405D49D0
#define CEditWnd__ReplaceSelection_x                               0x1405D4D80
#define CEditWnd__SelectableCharFromPoint_x                        0x1405D5220
#define CEditWnd__SetEditable_x                                    0x1405D54B0
#define CEditWnd__SetWindowText_x                                  0x1405D54E0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14026B3F0
#define CEverQuest__ClickedPlayer_x                                0x140260D60
#define CEverQuest__CreateTargetIndicator_x                        0x140261620
#define CEverQuest__DoTellWindow_x                                 0x140107C20 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1401084E0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14026CDB0
#define CEverQuest__dsp_chat_x                                     0x140107650 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x140297B80
#define CEverQuest__Emote_x                                        0x14026D790
#define CEverQuest__GetBodyTypeDesc_x                              0x14026E540
#define CEverQuest__GetClassDesc_x                                 0x14026E5A0
#define CEverQuest__GetClassThreeLetterCode_x                      0x14026E970
#define CEverQuest__GetDeityDesc_x                                 0x14026EC20
#define CEverQuest__GetLangDesc_x                                  0x14026F050
#define CEverQuest__GetRaceDesc_x                                  0x14026F3F0
#define CEverQuest__InterpretCmd_x                                 0x140270D30
#define CEverQuest__LeftClickedOnPlayer_x                          0x140285E10
#define CEverQuest__LMouseUp_x                                     0x140272750
#define CEverQuest__RightClickedOnPlayer_x                         0x140283630
#define CEverQuest__RMouseUp_x                                     0x14027CD30
#define CEverQuest__SetGameState_x                                 0x140288D20
#define CEverQuest__UPCNotificationFlush_x                         0x14028E650 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x1402723C0
#define CEverQuest__ReportSuccessfulHeal_x                         0x14027E0E0
#define CEverQuest__ReportSuccessfulHit_x                          0x14027EF00

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403C5390

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C27A0
#define CGuild__GetGuildName_x                                     0x1400C27E0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403E87F0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402A9C50
#define CHotButton__SetCheck_x                                     0x1402A9F20

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140400390
#define CInvSlotMgr__MoveItem_x                                    0x140400570
#define CInvSlotMgr__SelectSlot_x                                  0x140401FA0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403FD580
#define CInvSlot__SliderComplete_x                                 0x1403FEAD0
#define CInvSlot__GetItemBase_x                                    0x1403F8FC0
#define CInvSlot__UpdateItem_x                                     0x1403FEF90

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x140403330

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1404247C0
#define CItemDisplayWnd__UpdateStrings_x                           0x140427350
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140420FC0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140422920
#define CItemDisplayWnd__RequestConvertItem_x                      0x140423BD0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404EDCC0
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404EF9B0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x14052A890

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x14041D6C0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140152700

// CLabel
#define CLabel__UpdateText_x                                       0x14042E730

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405A3650
#define CListWnd__dCListWnd_x                                      0x1405A3AA0
#define CListWnd__vftable_x                                        0x140AADED0
#define CListWnd__AddColumn_x                                      0x1405A4140
#define CListWnd__AddColumn1_x                                     0x1405A41E0
#define CListWnd__AddLine_x                                        0x1405A4340
#define CListWnd__AddString_x                                      0x1405A48D0
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405A4E40
#define CListWnd__CalculateVSBRange_x                              0x1405A5120
#define CListWnd__ClearSel_x                                       0x1405A52C0
#define CListWnd__ClearAllSel_x                                    0x1405A5260
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405A5320
#define CListWnd__Compare_x                                        0x1405A54E0
#define CListWnd__Draw_x                                           0x1405A59B0
#define CListWnd__DrawColumnSeparators_x                           0x1405A6560
#define CListWnd__DrawHeader_x                                     0x1405A6620
#define CListWnd__DrawItem_x                                       0x1405A6D00
#define CListWnd__DrawLine_x                                       0x1405A7680
#define CListWnd__DrawSeparator_x                                  0x1405A7B40
#define CListWnd__EnableLine_x                                     0x1405A7F60
#define CListWnd__EnsureVisible_x                                  0x1405A7FC0
#define CListWnd__ExtendSel_x                                      0x1405A80C0
#define CListWnd__GetColumnMinWidth_x                              0x1405A8450
#define CListWnd__GetColumnWidth_x                                 0x1405A84D0
#define CListWnd__GetCurSel_x                                      0x1405A85D0
#define CListWnd__GetItemData_x                                    0x1405A8950
#define CListWnd__GetItemHeight_x                                  0x1405A8990
#define CListWnd__GetItemRect_x                                    0x1405A8BB0
#define CListWnd__GetItemText_x                                    0x1405A8E50
#define CListWnd__GetSelList_x                                     0x1405A90A0
#define CListWnd__GetSeparatorRect_x                               0x1405A9290
#define CListWnd__InsertLine_x                                     0x1405AA700
#define CListWnd__RemoveLine_x                                     0x1405AAD70
#define CListWnd__SetColors_x                                      0x1405AB130
#define CListWnd__SetColumnJustification_x                         0x1405AB150
#define CListWnd__SetColumnLabel_x                                 0x1405AB1D0
#define CListWnd__SetColumnWidth_x                                 0x1405AB370
#define CListWnd__SetCurSel_x                                      0x1405AB440
#define CListWnd__SetItemColor_x                                   0x1405AB6B0
#define CListWnd__SetItemData_x                                    0x1405AB750
#define CListWnd__SetItemText_x                                    0x1405AB990
#define CListWnd__Sort_x                                           0x1405ABDA0
#define CListWnd__ToggleSel_x                                      0x1405ABF10
#define CListWnd__SetColumnsSizable_x                              0x1405AB3C0
#define CListWnd__SetItemWnd_x                                     0x1405ABAC0
#define CListWnd__GetItemWnd_x                                     0x1405A9030
#define CListWnd__SetItemIcon_x                                    0x1405AB790
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405A4C10
#define CListWnd__SetVScrollPos_x                                  0x1405ABD00

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140441A20

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A146C8
#define MapViewMap__Clear_x                                        0x1404435A0
#define MapViewMap__SetZoom_x                                      0x140449BF0
#define MapViewMap__HandleLButtonDown_x                            0x140446730

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14046B2B0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140471850
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140471FF0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140475810
#define CMerchantWnd__SelectBuySellSlot_x                          0x140474B50
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140479AC0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x140665A00
#define CPacketScrambler__hton_x                                   0x1406659F0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405CC6A0
#define CSidlManagerBase__FindAnimation1_x                         0x1405CC5E0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405CCCD0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405CCA80
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405CB9D0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405CB960
#define CSidlManagerBase__CreateXWnd_x                             0x1405CAFA0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404E0C20
#define CSidlManager__CreateXWnd_x                                 0x1404E0DE0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x140591300
#define CSidlScreenWnd__CalculateVSBRange_x                        0x140591420
#define CSidlScreenWnd__ConvertToRes_x                             0x1405DB830 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x140591590
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x140590A30
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x140590B00
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x140590D10
#define CSidlScreenWnd__DrawSidlPiece_x                            0x140591C80
#define CSidlScreenWnd__EnableIniStorage_x                         0x140591EB0
#define CSidlScreenWnd__GetChildItem_x                             0x140592050
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405922A0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x14059C250 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x140592610
#define CSidlScreenWnd__LoadIniInfo_x                              0x140592980
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140593230
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140593C30
#define CSidlScreenWnd__m_layoutCopy_x                             0x140EFCB28
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405942B0
#define CSidlScreenWnd__StoreIniVis_x                              0x140594AA0
#define CSidlScreenWnd__vftable_x                                  0x140AAD158
#define CSidlScreenWnd__WndNotification_x                          0x140594AF0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x140324CB0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140325150 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x140325080
#define CSkillMgr__IsActivatedSkill_x                              0x140325500
#define CSkillMgr__IsCombatSkill_x                                 0x140325540
#define CSkillMgr__GetSkillTimerDuration_x                         0x140325470
#define CSkillMgr__GetSkillLastUsed_x                              0x1403250D0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405AC880
#define CSliderWnd__SetValue_x                                     0x1405AD090
#define CSliderWnd__SetNumTicks_x                                  0x1405ACF10

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404E72E0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405B1830
#define CStmlWnd__CalculateHSBRange_x                              0x14059BC30
#define CStmlWnd__CalculateVSBRange_x                              0x1405B2750
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405B31C0
#define CStmlWnd__ForceParseNow_x                                  0x1405B3260
#define CStmlWnd__GetVisibleText_x                                 0x1405B3930
#define CStmlWnd__MakeStmlColorTag_x                               0x1405B5690
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405B56D0
#define CStmlWnd__SetSTMLText_x                                    0x1405BC6A0
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405BC850
#define CStmlWnd__UpdateHistoryString_x                            0x1405BCBE0

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405AD460
#define CTabWnd__DrawCurrentPage_x                                 0x1405AD500
#define CTabWnd__DrawTab_x                                         0x1405AD8D0
#define CTabWnd__GetTabRect_x                                      0x1405ADF40
#define CTabWnd__InsertPage_x                                      0x1405AE210
#define CTabWnd__RemovePage_x                                      0x1405AE4A0
#define CTabWnd__SetPage_x                                         0x1405AE600
#define CTabWnd__UpdatePage_x                                      0x1405AE900

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405D5940
#define CPageWnd__SetTabText_x                                     0x1405D59B0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BBE40  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BC250


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405C4050
#define CTextureFont__DrawWrappedText1_x                           0x1405C3F60
#define CTextureFont__DrawWrappedText2_x                           0x1405C4180
#define CTextureFont__GetTextExtent_x                              0x1405C4530
#define CTextureFont__GetHeight_x                                  0x1405C44F0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405D9F90

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x140590610

// CXStr
#define CXStr__gFreeLists_x                                        0x140D2BEF0
#define CXStr__gCXStrAccess_x                                      0x140EFC688

// CXWnd
#define CXWnd__BringToTop_x                                        0x140597350
#define CXWnd__ClrFocus_x                                          0x140597640
#define CXWnd__Destroy_x                                           0x1405977C0
#define CXWnd__DoAllDrawing_x                                      0x1405978D0
#define CXWnd__DrawColoredRect_x                                   0x140598090
#define CXWnd__DrawTooltip_x                                       0x1405996F0
#define CXWnd__DrawTooltipAtPoint_x                                0x1405997A0
#define CXWnd__GetChildItem_x                                      0x14059A0A0
#define CXWnd__GetChildWndAt_x                                     0x14059A160
#define CXWnd__GetClientRect_x                                     0x14059A410
#define CXWnd__GetClientClipRect_x                                 0x14059A2C0
#define CXWnd__GetRelativeRect_x                                   0x14059BD70
#define CXWnd__GetScreenClipRect_x                                 0x14059BE80
#define CXWnd__GetScreenRect_x                                     0x14059BFD0
#define CXWnd__GetTooltipRect_x                                    0x14059C150
#define CXWnd__IsActive_x                                          0x14059C710
#define CXWnd__IsDescendantOf_x                                    0x14059C740
#define CXWnd__IsReallyVisible_x                                   0x14059C7B0
#define CXWnd__IsType_x                                            0x14059C7F0
#define CXWnd__Minimize_x                                          0x14059C8F0
#define CXWnd__ProcessTransition_x                                 0x14059D7E0
#define CXWnd__Resize_x                                            0x14059D8F0
#define CXWnd__Right_x                                             0x14059D990
#define CXWnd__SetFocus_x                                          0x14059DD50
#define CXWnd__SetFont_x                                           0x14059DDA0
#define CXWnd__SetKeyTooltip_x                                     0x14059DEA0
#define CXWnd__SetMouseOver_x                                      0x14059DFE0
#define CXWnd__SetParent_x                                         0x14059E060
#define CXWnd__StartFade_x                                         0x14059E4A0
#define CXWnd__vftable_x                                           0x140AAD730
#define CXWnd__CXWnd_x                                             0x140595F10
#define CXWnd__dCXWnd_x                                            0x140596860

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405E0A70

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405BE4A0
#define CXWndManager__DrawCursor_x                                 0x1405BE780
#define CXWndManager__DrawWindows_x                                0x1405BE9E0
#define CXWndManager__GetKeyboardFlags_x                           0x1405BF0B0
#define CXWndManager__HandleKeyboardMsg_x                          0x1405BF0F0
#define CXWndManager__RemoveWnd_x                                  0x1405C2720

// CDBStr
#define CDBStr__GetString_x                                        0x140188490

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x14066F840

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D05B0
#define CCharacterListWnd__EnterWorld_x                            0x1400CF2B0
#define CCharacterListWnd__Quit_x                                  0x1400D0590
#define CCharacterListWnd__UpdateList_x                            0x1400D1410

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x14063CE20
#define ItemBase__CreateItemTagString_x                            0x14063D880
#define ItemBase__GetImageNum_x                                    0x14063FDA0
#define ItemBase__GetItemValue_x                                   0x1406418A0
#define ItemBase__IsEmpty_x                                        0x140643410
#define ItemBase__IsKeyRingItem_x                                  0x140643B30
#define ItemBase__ValueSellMerchant_x                              0x140647CE0
#define ItemClient__CanDrop_x                                      0x1402AC560
#define ItemClient__CanGoInBag_x                                   0x1402AC690
#define ItemClient__CreateItemClient_x                             0x1402AC910
#define ItemClient__dItemClient_x                                  0x1402AC3D0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401A7D10
#define EQ_LoadingS__Array_x                                       0x140D18220

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x1406546F0
#define PcBase__GetCombatAbility_x                                 0x140654DE0
#define PcBase__GetCombatAbilityTimer_x                            0x140654E80
#define PcBase__GetItemContainedRealEstateIds_x                    0x140655620
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x140656160
#define PcClient__AlertInventoryChanged_x                          0x1402CE9E0
#define PcClient__GetConLevel_x                                    0x1402CF000  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402D1790
#define PcClient__HasLoreItem_x                                    0x1402D27F0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402E0130
#define PcZoneClient__RemoveMyAffect_x                             0x1402E3DC0

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x140218090  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x140218240  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x1402183A0  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x1402182E0  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x140252300  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140182CC0

// PlayerClient
#define PlayerBase__CanSee_x                                       0x1406299A0
#define PlayerBase__CanSee1_x                                      0x140629A70
#define PlayerBase__GetVisibilityLineSegment_x                     0x140629F50
#define PlayerBase__HasProperty_x                                  0x14062A120
#define PlayerBase__IsTargetable_x                                 0x14062A1E0
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402F1660
#define PlayerClient__GetPcClient_x                                0x1402F3E90
#define PlayerClient__PlayerClient_x                               0x1402E9E70
#define PlayerClient__SetNameSpriteState_x                         0x1402F7530
#define PlayerClient__SetNameSpriteTint_x                          0x1402F84F0
#define PlayerZoneClient__ChangeHeight_x                           0x140306D80
#define PlayerZoneClient__DoAttack_x                               0x140307A90
#define PlayerZoneClient__GetLevel_x                               0x14030B1B0
#define PlayerZoneClient__IsValidTeleport_x                        0x140255080
#define PlayerZoneClient__LegalPlayerRace_x                        0x1401969E0

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1403004F0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1403005A0  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1403006A0
#define PlayerManagerClient__CreatePlayer_x                        0x1402FFFC0
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140629560

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402B17E0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402B13E0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402B1450
#define KeypressHandler__ClearCommandStateArray_x                  0x1402B1770  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402B1900
#define KeypressHandler__HandleKeyUp_x                             0x1402B1A20
#define KeypressHandler__SaveKeymapping_x                          0x1402B1680  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x14066D360  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x140667130

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402D8DB0  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402DE0E0
#define PcZoneClient__GetPcSkillLimit_x                            0x1402E08C0
#define PcZoneClient__RemovePetEffect_x                            0x1402E40A0
#define PcZoneClient__HasAlternateAbility_x                        0x1402E14B0
#define PcZoneClient__CanEquipItem_x                               0x1402DC410
#define PcZoneClient__GetItemByID_x                                0x1402DF180
#define PcZoneClient__RemoveBuffEffect_x                           0x1402E3C40
#define PcZoneClient__BandolierSwap_x                              0x1402DB470

// Doors
#define EQSwitch__UseSwitch_x                                      0x140259BB0

// IconCache
#define IconCache__GetIcon_x                                       0x1403BA480

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403AEB10
#define CContainerMgr__CloseContainer_x                            0x1403AE450
#define CContainerMgr__OpenExperimentContainer_x                   0x1403AEE90

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404A4ED0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402A3F40

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140435A10
#define CLootWnd__RequestLootSlot_x                                0x140436A30

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401D7110
#define EQ_Spell__SpellAffects_x                                   0x1401D83C0
#define EQ_Spell__SpellAffectBase_x                                0x1401D8320
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D92C0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D9270
#define EQ_Spell__IsSPAStacking_x                                  0x1401D7FF0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401D7BB0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401D7480

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C1330

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x140501A00
#define CTargetWnd__RefreshTargetBuffs_x                           0x140501110
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x140500920

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x140509070  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x14017F670
#define CTaskManager__GetTaskStatus_x                              0x14017F780
#define CTaskManager__GetElementDescription_x                      0x14017F300

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401D5440
#define EqSoundManager__PlayScriptMp3_x                            0x1401D4280
#define EqSoundManager__SoundAssistPlay_x                          0x14032A2F0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x14032A630  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x14059F250
#define CTextureAnimation__SetCurCell_x                            0x14059F560

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402A21A0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x140687DC0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x140687E40
#define CharacterBase__IsExpansionFlag_x                           0x1401F9310

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x14038B8B0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x14038C270
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x14038D7C0

// messages
#define msg_spell_worn_off_x                                       0x14020E9A0
#define msg_new_text_x                                             0x14020A210
#define __msgTokenTextParam_x                                      0x140201B20
#define msgTokenText_x                                             0x140201A40

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x14032BCA0
#define SpellManager__GetSpellByGroupAndRank_x                     0x14032BBC0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x1406381A0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x14042EE80

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403B3810
#define CCursorAttachment__IsOkToActivate_x                        0x1403B6AD0
#define CCursorAttachment__RemoveAttachment_x                      0x1403B6D80
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405D8430
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405D8620
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405D8630

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x14014D8B0
#define CFindItemWnd__Update_x                                     0x14014E250
#define CFindItemWnd__PickupSelectedItem_x                         0x140147D20

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x140157310
#define LootFiltersManager__GetItemFilterData_x                    0x140157E20
#define LootFiltersManager__RemoveItemLootFilter_x                 0x1401586C0
#define LootFiltersManager__SetItemLootFilter_x                    0x140158970

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x140487AF0

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x140324870
#define CResolutionHandler__UpdateResolution_x                     0x140584A50

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403AAE00

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x14068C1C0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x14068C0B0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403D1760
#define CGroupWnd__UpdateDisplay_x                                 0x1403D1340

// ItemBase
#define ItemBase__IsLore_x                                         0x140643C60
#define ItemBase__IsLoreEquipped_x                                 0x140643CF0

#define MultipleItemMoveManager__ProcessMove_x                     0x1402C45A0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140252460
#define EQPlacedItemManager__GetItemByGuid_x                       0x1402523F0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140252430

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14031ECE0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x1401255C0
#define FactionManagerClient__HandleFactionMessage_x               0x140125970
#define FactionManagerClient__GetFactionStanding_x                 0x140124D90
#define FactionManagerClient__GetMaxFaction_x                      0x140124D90
#define FactionManagerClient__GetMinFaction_x                      0x140124C40

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AE3C0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140130D50

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401B0670
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401AF9F0
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401B0490  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401B0410  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x140330E80

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14031ECE0

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x140218430

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405950E0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140086870

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x1403426C0

// AchievementManager
#define AchievementManager__Instance_x                             0x14008E240

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x1406703C0
#define FreeToPlayClient__RestrictionInfo_x                        0x140AC1DF0

// UdpConnection
#define UdpConnection__GetStats_x                                  0x140537950

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x140820568
#define CGFScreenWnd__CGFScreenWnd_x                               0x140071260
#define CGFScreenWnd__CGFScreenWnd1_x                              0x1400713F0
#define CGFScreenWnd__dCGFScreenWnd_x                              0x1400715A0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
