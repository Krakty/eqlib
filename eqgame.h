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

#define __ClientDate                                               20250304u
#define __ExpectedVersionDate                                     "Mar  4 2025"
#define __ExpectedVersionTime                                     "15:27:34"
#define __ActualVersionDate_x                                      0x140954170
#define __ActualVersionTime_x                                      0x140954160
#define __ActualVersionBuild_x                                     0x1408EA830

// Memory Protection
#define __MemChecker0_x                                            0x1402B7C20
#define __MemChecker1_x                                            0x14057B980
#define __MemChecker4_x                                            0x1402854E0
#define __EncryptPad0_x                                            0x140D22E70

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E5BAA0
#define instEQZoneInfo_x                                           0x140E5BC94 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x14021BD90
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
#define __allowslashcommand_x                                      0x140245000
#define __CastRay_x                                                0x14023D3A0
#define __CastRay2_x                                               0x14023D0A0
#define __compress_block_x                                         0x140531030
#define __ConvertItemTags_x                                        0x14023D800
#define __CleanItemTags_x                                          0x1400899C0
#define __CreateCascadeMenuItems_x                                 0x14018B180
#define __decompress_block_x                                       0x1405771F0
#define __DoesFileExist_x                                          0x14057F830
#define __EQGetTime_x                                              0x14057BF30
#define __ExecuteCmd_x                                             0x1402136A0
#define __FixHeading_x                                             0x140636450
#define __FlushDxKeyboard_x                                        0x14033B500
#define __get_bearing_x                                            0x1402471F0
#define __get_melee_range_x                                        0x1402472E0
#define __GetAnimationCache_x                                      0x1403BA010
#define __GetGaugeValueFromEQ_x                                    0x1404F0CE0
#define __GetLabelFromEQ_x                                         0x1404F22E0
#define __GetXTargetType_x                                         0x140637730   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x1406364D0
#define __HelpPath_x                                               0x140ED0EF0   // Why?
#define __NewUIINI_x                                               0x1404FDD20   // Why?
#define __ProcessDeviceEvents_x                                    0x140285AF0
#define __ProcessGameEvents_x                                      0x14027A810
#define __ProcessKeyboardEvents_x                                  0x14033CC50
#define __ProcessMouseEvents_x                                     0x14027BEF0
#define __SaveColors_x                                             0x14019B1A0
#define __STMLToText_x                                             0x140587A70
#define __WndProc_x                                                0x140339D00
#define CMemoryMappedFile__SetFile_x                               0x1407E3990
#define DrawNetStatus_x                                            0x1402C60F0
#define Util__FastTime_x                                           0x140578110
#define __eq_delete_x                                              0x1406AF994
#define __eq_new_x                                                 0x1406AF950
#define __CopyLayout_x                                             0x1402B4020
#define __ThrottleFrameRate_x                                      0x14026A034
#define __ThrottleFrameRateEnd_x                                   0x14026A094

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x14034C360
#define CAAWnd__Update_x                                           0x14034C660
#define CAAWnd__UpdateSelected_x                                   0x14034D6B0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400ABDC0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A46C0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140838BD8
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AC6F0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401A62D0
#define AltAdvManager__IsAbilityReady_x                            0x1401A6760
#define AltAdvManager__GetAAById_x                                 0x1401A5BA0
#define AltAdvManager__CanTrainAbility_x                           0x1401A59B0
#define AltAdvManager__CanSeeAbility_x                             0x1401A5670

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D28E0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D3740
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D3990
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400E7E80
#define CharacterZoneClient__CanUseItem_x                          0x1400E82B0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D4360
#define CharacterZoneClient__CastSpell_x                           0x1400D4400
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E3DE0
#define CharacterZoneClient__Cur_HP_x                              0x1400E99C0
#define CharacterZoneClient__Cur_Mana_x                            0x1400E9B80
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D75F0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F0040
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FEA70  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D8A90
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E7780
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F1BF0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F0AD0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D8C10
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C8DC0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400CA7C0
#define CharacterZoneClient__GetHPRegen_x                          0x1400F1210
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E9630
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F1E80
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D8C90
#define CharacterZoneClient__GetManaRegen_x                        0x1400F2C60
#define CharacterZoneClient__GetModCap_x                           0x1400FA230
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D8F20
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D90F0
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CD950
#define CharacterZoneClient__HasSkill_x                            0x1400F5C60
#define CharacterZoneClient__HitBySpell_x                          0x1400D9B80
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DD4A0
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F9D10
#define CharacterZoneClient__Max_Endurance_x                       0x1402E2920  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400FA060
#define CharacterZoneClient__Max_Mana_x                            0x1402E2B40  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400FA4C0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E0930
#define CharacterZoneClient__SpellDuration_x                       0x1400E1660
#define CharacterZoneClient__TotalEffect_x                         0x1400E29C0
#define CharacterZoneClient__UseSkill_x                            0x1400FF9E0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x14036ABF0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140374F20

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140370DC0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x1403749A0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x1403775F0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AAFD80

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x14039A560
#define CChatWindowManager__InitContextMenu_x                      0x14039A6F0
#define CChatWindowManager__FreeChatWindow_x                       0x1403995E0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403A22D0
#define CChatWindowManager__CreateChatWindow_x                     0x140399010

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140107EC0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403A3320
#define CChatWindow__Clear_x                                       0x1403A42E0
#define CChatWindow__WndNotification_x                             0x1403A54D0
#define CChatWindow__AddHistory_x                                  0x1403A3DE0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405BCA70
#define CContextMenu__RemoveMenuItem_x                             0x1405BCE60
#define CContextMenu__RemoveAllMenuItems_x                         0x1405BCE30
#define CContextMenu__CheckMenuItem_x                              0x1405BCCA0
#define CContextMenu__SetMenuItem_x                                0x1405BCE80
#define CContextMenu__AddSeparator_x                               0x1405BCBE0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405AE960
#define CContextMenuManager__RemoveMenu_x                          0x1405AEF40
#define CContextMenuManager__PopupMenu_x                           0x1405AEC80
#define CContextMenuManager__Flush_x                               0x1405AE9E0
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403B1BC0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x14068A490
#define CChatService__GetFriendName_x                              0x14068A4A0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14059F850
#define CComboWnd__Draw_x                                          0x14059F950
#define CComboWnd__GetCurChoice_x                                  0x14059FC30  // unused
#define CComboWnd__GetListRect_x                                   0x14059FCD0
#define CComboWnd__InsertChoice_x                                  0x1405A0010
#define CComboWnd__SetColors_x                                     0x1405A03A0
#define CComboWnd__SetChoice_x                                     0x1405A0360
#define CComboWnd__GetItemCount_x                                  0x14059FCC0
#define CComboWnd__GetCurChoiceText_x                              0x14059FC70  // unused
#define CComboWnd__GetChoiceText_x                                 0x14059FC00
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405A00D0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403AF940
#define CContainerWnd__SetContainer_x                              0x140407200
#define CContainerWnd__vftable_x                                   0x1409C7BA8

// CDisplay
#define CDisplay__cameraType_x                                     0x140DA315C
#define CDisplay__ZoneMainUI_x                                     0x1405D6B80
#define CDisplay__PreZoneMainUI_x                                  0x1401980D0
#define CDisplay__CleanGameUI_x                                    0x14018A240
#define CDisplay__GetClickedActor_x                                0x14018E400
#define CDisplay__GetUserDefinedColor_x                            0x14018F070
#define CDisplay__InitCharSelectUI_x                               0x14018F320
#define CDisplay__ReloadUI_x                                       0x14019A3C0
#define CDisplay__RestartUI_x                                      0x1401F9820
#define CDisplay__WriteTextHD2_x                                   0x1401A13D0
#define CDisplay__TrueDistance_x                                   0x1401A1080
#define CDisplay__SetViewActor_x                                   0x14019D8C0
#define CDisplay__GetFloorHeight_x                                 0x14018E660
#define CDisplay__ToggleScreenshotMode_x                           0x1401A0B70
#define CDisplay__RealRender_World_x                               0x1401997A0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405E0DA0
#define CEditWnd__DrawCaret_x                                      0x1405D2880  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405D2D40
#define CEditWnd__GetCaretPt_x                                     0x1405D2FC0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405D3000
#define CEditWnd__GetDisplayString_x                               0x1405D3270
#define CEditWnd__GetHorzOffset_x                                  0x1405D34B0
#define CEditWnd__GetLineForPrintableChar_x                        0x1405D3600
#define CEditWnd__GetSelStartPt_x                                  0x1405D38E0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405D3730
#define CEditWnd__PointFromPrintableChar_x                         0x1405D4490
#define CEditWnd__ReplaceSelection_x                               0x1405D4840
#define CEditWnd__SelectableCharFromPoint_x                        0x1405D4CE0
#define CEditWnd__SetEditable_x                                    0x1405D4F70
#define CEditWnd__SetWindowText_x                                  0x1405D4FA0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14026B140
#define CEverQuest__ClickedPlayer_x                                0x140260A90
#define CEverQuest__CreateTargetIndicator_x                        0x140261350
#define CEverQuest__DoTellWindow_x                                 0x140107BD0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140108490 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14026CB00
#define CEverQuest__dsp_chat_x                                     0x140107600 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402978D0
#define CEverQuest__Emote_x                                        0x14026D4E0
#define CEverQuest__GetBodyTypeDesc_x                              0x14026E290
#define CEverQuest__GetClassDesc_x                                 0x14026E2F0
#define CEverQuest__GetClassThreeLetterCode_x                      0x14026E6C0
#define CEverQuest__GetDeityDesc_x                                 0x14026E970
#define CEverQuest__GetLangDesc_x                                  0x14026EDA0
#define CEverQuest__GetRaceDesc_x                                  0x14026F140
#define CEverQuest__InterpretCmd_x                                 0x140270A80
#define CEverQuest__LeftClickedOnPlayer_x                          0x140285B60
#define CEverQuest__LMouseUp_x                                     0x1402724A0
#define CEverQuest__RightClickedOnPlayer_x                         0x140283380
#define CEverQuest__RMouseUp_x                                     0x14027CA80
#define CEverQuest__SetGameState_x                                 0x140288A70
#define CEverQuest__UPCNotificationFlush_x                         0x14028E3A0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140272110
#define CEverQuest__ReportSuccessfulHeal_x                         0x14027DE30
#define CEverQuest__ReportSuccessfulHit_x                          0x14027EC50

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403C4F40

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C2790
#define CGuild__GetGuildName_x                                     0x1400C27D0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403E83B0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402A99A0
#define CHotButton__SetCheck_x                                     0x1402A9C70

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403FFF30
#define CInvSlotMgr__MoveItem_x                                    0x140400110
#define CInvSlotMgr__SelectSlot_x                                  0x140401B30

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403FD130
#define CInvSlot__SliderComplete_x                                 0x1403FE680
#define CInvSlot__GetItemBase_x                                    0x1403F8B70
#define CInvSlot__UpdateItem_x                                     0x1403FEB30

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x140402EC0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140424360
#define CItemDisplayWnd__UpdateStrings_x                           0x140426EF0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140420B50
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x1404224B0
#define CItemDisplayWnd__RequestConvertItem_x                      0x140423770

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404ED800
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404EF4F0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x14052A390

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x14041D250

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x1401526C0

// CLabel
#define CLabel__UpdateText_x                                       0x14042E2D0

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405A31E0
#define CListWnd__dCListWnd_x                                      0x1405A3630
#define CListWnd__vftable_x                                        0x140AADED0
#define CListWnd__AddColumn_x                                      0x1405A3CD0
#define CListWnd__AddColumn1_x                                     0x1405A3D70
#define CListWnd__AddLine_x                                        0x1405A3ED0
#define CListWnd__AddString_x                                      0x1405A4460
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405A49D0
#define CListWnd__CalculateVSBRange_x                              0x1405A4CB0
#define CListWnd__ClearSel_x                                       0x1405A4E50
#define CListWnd__ClearAllSel_x                                    0x1405A4DF0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405A4EB0
#define CListWnd__Compare_x                                        0x1405A5070
#define CListWnd__Draw_x                                           0x1405A5540
#define CListWnd__DrawColumnSeparators_x                           0x1405A60F0
#define CListWnd__DrawHeader_x                                     0x1405A61B0
#define CListWnd__DrawItem_x                                       0x1405A6890
#define CListWnd__DrawLine_x                                       0x1405A7210
#define CListWnd__DrawSeparator_x                                  0x1405A76D0
#define CListWnd__EnableLine_x                                     0x1405A7AF0
#define CListWnd__EnsureVisible_x                                  0x1405A7B50
#define CListWnd__ExtendSel_x                                      0x1405A7C50
#define CListWnd__GetColumnMinWidth_x                              0x1405A7FE0
#define CListWnd__GetColumnWidth_x                                 0x1405A8060
#define CListWnd__GetCurSel_x                                      0x1405A8160
#define CListWnd__GetItemData_x                                    0x1405A84E0
#define CListWnd__GetItemHeight_x                                  0x1405A8520
#define CListWnd__GetItemRect_x                                    0x1405A8740
#define CListWnd__GetItemText_x                                    0x1405A89E0
#define CListWnd__GetSelList_x                                     0x1405A8C30
#define CListWnd__GetSeparatorRect_x                               0x1405A8E20
#define CListWnd__InsertLine_x                                     0x1405AA290
#define CListWnd__RemoveLine_x                                     0x1405AA900
#define CListWnd__SetColors_x                                      0x1405AACC0
#define CListWnd__SetColumnJustification_x                         0x1405AACE0
#define CListWnd__SetColumnLabel_x                                 0x1405AAD60
#define CListWnd__SetColumnWidth_x                                 0x1405AAF00
#define CListWnd__SetCurSel_x                                      0x1405AAFD0
#define CListWnd__SetItemColor_x                                   0x1405AB240
#define CListWnd__SetItemData_x                                    0x1405AB2E0
#define CListWnd__SetItemText_x                                    0x1405AB520
#define CListWnd__Sort_x                                           0x1405AB930
#define CListWnd__ToggleSel_x                                      0x1405ABAA0
#define CListWnd__SetColumnsSizable_x                              0x1405AAF50
#define CListWnd__SetItemWnd_x                                     0x1405AB650
#define CListWnd__GetItemWnd_x                                     0x1405A8BC0
#define CListWnd__SetItemIcon_x                                    0x1405AB320
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405A47A0
#define CListWnd__SetVScrollPos_x                                  0x1405AB890

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x1404415B0

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A146C8
#define MapViewMap__Clear_x                                        0x140443130
#define MapViewMap__SetZoom_x                                      0x140449780
#define MapViewMap__HandleLButtonDown_x                            0x1404462C0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14046AE40  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x1404713F0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140471B90
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x1404753B0
#define CMerchantWnd__SelectBuySellSlot_x                          0x1404746F0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140479660

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x140665790
#define CPacketScrambler__hton_x                                   0x140665780

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405CC140
#define CSidlManagerBase__FindAnimation1_x                         0x1405CC080
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405CC770
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405CC520
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405CB480
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405CB410
#define CSidlManagerBase__CreateXWnd_x                             0x1405CAA50

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404E0760
#define CSidlManager__CreateXWnd_x                                 0x1404E0920

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x140590DF0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x140590F00
#define CSidlScreenWnd__ConvertToRes_x                             0x1405DB2E0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x140591070
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x140590520
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x1405905F0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x140590800
#define CSidlScreenWnd__DrawSidlPiece_x                            0x140591760
#define CSidlScreenWnd__EnableIniStorage_x                         0x140591990
#define CSidlScreenWnd__GetChildItem_x                             0x140591B30
#define CSidlScreenWnd__GetSidlPiece_x                             0x140591D80
#define CSidlScreenWnd__HandleLButtonUp_x                          0x14059BE00 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405920F0
#define CSidlScreenWnd__LoadIniInfo_x                              0x140592460
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140592D20
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140593720
#define CSidlScreenWnd__m_layoutCopy_x                             0x140EFCB28
#define CSidlScreenWnd__StoreIniInfo_x                             0x140593D90
#define CSidlScreenWnd__StoreIniVis_x                              0x140594580
#define CSidlScreenWnd__vftable_x                                  0x140AAD158
#define CSidlScreenWnd__WndNotification_x                          0x1405945D0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x140324880 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140324D20 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x140324C50
#define CSkillMgr__IsActivatedSkill_x                              0x1403250D0
#define CSkillMgr__IsCombatSkill_x                                 0x140325110
#define CSkillMgr__GetSkillTimerDuration_x                         0x140325040
#define CSkillMgr__GetSkillLastUsed_x                              0x140324CA0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405AC410
#define CSliderWnd__SetValue_x                                     0x1405ACC20
#define CSliderWnd__SetNumTicks_x                                  0x1405ACAA0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404E6E20

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405B13B0
#define CStmlWnd__CalculateHSBRange_x                              0x14059B7B0
#define CStmlWnd__CalculateVSBRange_x                              0x1405B22C0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405B2D30
#define CStmlWnd__ForceParseNow_x                                  0x1405B2DD0
#define CStmlWnd__GetVisibleText_x                                 0x1405B34A0
#define CStmlWnd__MakeStmlColorTag_x                               0x1405B5200
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405B5240
#define CStmlWnd__SetSTMLText_x                                    0x1405BC210
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405BC3C0
#define CStmlWnd__UpdateHistoryString_x                            0x1405BC750

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405ACFF0
#define CTabWnd__DrawCurrentPage_x                                 0x1405AD090
#define CTabWnd__DrawTab_x                                         0x1405AD460
#define CTabWnd__GetTabRect_x                                      0x1405ADAD0
#define CTabWnd__InsertPage_x                                      0x1405ADDA0
#define CTabWnd__RemovePage_x                                      0x1405AE030
#define CTabWnd__SetPage_x                                         0x1405AE190
#define CTabWnd__UpdatePage_x                                      0x1405AE490

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405D5400
#define CPageWnd__SetTabText_x                                     0x1405D5470

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BBE30  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BC240


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405C3B00
#define CTextureFont__DrawWrappedText1_x                           0x1405C3A10
#define CTextureFont__DrawWrappedText2_x                           0x1405C3C30
#define CTextureFont__GetTextExtent_x                              0x1405C3FE0
#define CTextureFont__GetHeight_x                                  0x1405C3FA0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405D9A40

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x140590100

// CXStr
#define CXStr__gFreeLists_x                                        0x140D2BEF0
#define CXStr__gCXStrAccess_x                                      0x140EFC688

// CXWnd
#define CXWnd__BringToTop_x                                        0x140596E50
#define CXWnd__ClrFocus_x                                          0x140597140
#define CXWnd__Destroy_x                                           0x1405972C0
#define CXWnd__DoAllDrawing_x                                      0x1405973D0
#define CXWnd__DrawColoredRect_x                                   0x140597BA0
#define CXWnd__DrawTooltip_x                                       0x140599220
#define CXWnd__DrawTooltipAtPoint_x                                0x1405992D0
#define CXWnd__GetChildItem_x                                      0x140599BE0
#define CXWnd__GetChildWndAt_x                                     0x140599CA0
#define CXWnd__GetClientRect_x                                     0x140599F60
#define CXWnd__GetClientClipRect_x                                 0x140599E10
#define CXWnd__GetRelativeRect_x                                   0x14059B8F0
#define CXWnd__GetScreenClipRect_x                                 0x14059BA00
#define CXWnd__GetScreenRect_x                                     0x14059BB80
#define CXWnd__GetTooltipRect_x                                    0x14059BD00
#define CXWnd__IsActive_x                                          0x14059C2C0
#define CXWnd__IsDescendantOf_x                                    0x14059C2F0
#define CXWnd__IsReallyVisible_x                                   0x14059C360
#define CXWnd__IsType_x                                            0x14059C3A0
#define CXWnd__Minimize_x                                          0x14059C4A0
#define CXWnd__ProcessTransition_x                                 0x14059D380
#define CXWnd__Resize_x                                            0x14059D4A0
#define CXWnd__Right_x                                             0x14059D540
#define CXWnd__SetFocus_x                                          0x14059D900
#define CXWnd__SetFont_x                                           0x14059D950
#define CXWnd__SetKeyTooltip_x                                     0x14059DA40
#define CXWnd__SetMouseOver_x                                      0x14059DB80
#define CXWnd__SetParent_x                                         0x14059DC00
#define CXWnd__StartFade_x                                         0x14059E030
#define CXWnd__vftable_x                                           0x140AAD730
#define CXWnd__CXWnd_x                                             0x1405959F0
#define CXWnd__dCXWnd_x                                            0x140596330

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405E0520

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405BE020
#define CXWndManager__DrawCursor_x                                 0x1405BE300
#define CXWndManager__DrawWindows_x                                0x1405BE560
#define CXWndManager__GetKeyboardFlags_x                           0x1405BEC30
#define CXWndManager__HandleKeyboardMsg_x                          0x1405BEC70
#define CXWndManager__RemoveWnd_x                                  0x1405C21C0

// CDBStr
#define CDBStr__GetString_x                                        0x140188400

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x14066F5D0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D0580
#define CCharacterListWnd__EnterWorld_x                            0x1400CF280
#define CCharacterListWnd__Quit_x                                  0x1400D0560
#define CCharacterListWnd__UpdateList_x                            0x1400D13E0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x14063C7A0
#define ItemBase__CreateItemTagString_x                            0x14063D200
#define ItemBase__GetImageNum_x                                    0x14063F770
#define ItemBase__GetItemValue_x                                   0x140641630
#define ItemBase__IsEmpty_x                                        0x1406431B0
#define ItemBase__IsKeyRingItem_x                                  0x1406438C0
#define ItemBase__ValueSellMerchant_x                              0x140647A60
#define ItemClient__CanDrop_x                                      0x1402AC2A0
#define ItemClient__CanGoInBag_x                                   0x1402AC3D0
#define ItemClient__CreateItemClient_x                             0x1402AC650
#define ItemClient__dItemClient_x                                  0x1402AC110

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401A7C80
#define EQ_LoadingS__Array_x                                       0x140D18220

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x1406544A0
#define PcBase__GetCombatAbility_x                                 0x140654B90
#define PcBase__GetCombatAbilityTimer_x                            0x140654C30
#define PcBase__GetItemContainedRealEstateIds_x                    0x1406553D0
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x140655F10
#define PcClient__AlertInventoryChanged_x                          0x1402CE6C0
#define PcClient__GetConLevel_x                                    0x1402CECE0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402D1470
#define PcClient__HasLoreItem_x                                    0x1402D24C0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402DFDE0
#define PcZoneClient__RemoveMyAffect_x                             0x1402E3A60

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x140217DB0  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x140217F60  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x1402180C0  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x140218000  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x140252020  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140182C60

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140629450
#define PlayerBase__CanSee1_x                                      0x140629520
#define PlayerBase__GetVisibilityLineSegment_x                     0x140629A00
#define PlayerBase__HasProperty_x                                  0x140629BD0
#define PlayerBase__IsTargetable_x                                 0x140629C90
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402F1330
#define PlayerClient__GetPcClient_x                                0x1402F3B60
#define PlayerClient__PlayerClient_x                               0x1402E9B30
#define PlayerClient__SetNameSpriteState_x                         0x1402F7200
#define PlayerClient__SetNameSpriteTint_x                          0x1402F81C0
#define PlayerZoneClient__ChangeHeight_x                           0x140306950
#define PlayerZoneClient__DoAttack_x                               0x140307660
#define PlayerZoneClient__GetLevel_x                               0x14030AD80
#define PlayerZoneClient__IsValidTeleport_x                        0x140254DB0
#define PlayerZoneClient__LegalPlayerRace_x                        0x140196950

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1403000C0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x140300170  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x140300270
#define PlayerManagerClient__CreatePlayer_x                        0x1402FFB90
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140629010

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402B1520
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402B1120
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402B1190
#define KeypressHandler__ClearCommandStateArray_x                  0x1402B14B0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402B1640
#define KeypressHandler__HandleKeyUp_x                             0x1402B1760
#define KeypressHandler__SaveKeymapping_x                          0x1402B13C0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x14066D0F0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x140666EC0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402D8A80  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402DDD90
#define PcZoneClient__GetPcSkillLimit_x                            0x1402E0570
#define PcZoneClient__RemovePetEffect_x                            0x1402E3D40
#define PcZoneClient__HasAlternateAbility_x                        0x1402E1160
#define PcZoneClient__CanEquipItem_x                               0x1402DC0D0
#define PcZoneClient__GetItemByID_x                                0x1402DEE30
#define PcZoneClient__RemoveBuffEffect_x                           0x1402E38E0
#define PcZoneClient__BandolierSwap_x                              0x1402DB130

// Doors
#define EQSwitch__UseSwitch_x                                      0x1402598E0

// IconCache
#define IconCache__GetIcon_x                                       0x1403BA040

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403AE6F0
#define CContainerMgr__CloseContainer_x                            0x1403AE030
#define CContainerMgr__OpenExperimentContainer_x                   0x1403AEA70

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404A4A80

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402A3C90

// CLootWnd
#define CLootWnd__LootAll_x                                        0x1404355B0
#define CLootWnd__RequestLootSlot_x                                0x1404365D0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401D7040
#define EQ_Spell__SpellAffects_x                                   0x1401D82F0
#define EQ_Spell__SpellAffectBase_x                                0x1401D8250
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D9280
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D9230
#define EQ_Spell__IsSPAStacking_x                                  0x1401D7F20
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401D7AE0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401D73B0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C1320

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x140501530
#define CTargetWnd__RefreshTargetBuffs_x                           0x140500C40
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x140500440

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x140508BA0  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x14017F640
#define CTaskManager__GetTaskStatus_x                              0x14017F750
#define CTaskManager__GetElementDescription_x                      0x14017F2D0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401D5370
#define EqSoundManager__PlayScriptMp3_x                            0x1401D41B0
#define EqSoundManager__SoundAssistPlay_x                          0x140329EC0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x14032A200  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x14059EDE0
#define CTextureAnimation__SetCurCell_x                            0x14059F0F0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402A1EF0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x140687B60
#define CharacterBase__GetItemByGlobalIndex1_x                     0x140687BE0
#define CharacterBase__IsExpansionFlag_x                           0x1401F9050

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x14038B480
#define CCastSpellWnd__IsBardSongPlaying_x                         0x14038BE40
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x14038D390

// messages
#define msg_spell_worn_off_x                                       0x14020E6C0
#define msg_new_text_x                                             0x140209F30
#define __msgTokenTextParam_x                                      0x140201860
#define msgTokenText_x                                             0x140201780

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x14032B870
#define SpellManager__GetSpellByGroupAndRank_x                     0x14032B790

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140637B10

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x14042EA20

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403B33F0
#define CCursorAttachment__IsOkToActivate_x                        0x1403B6690
#define CCursorAttachment__RemoveAttachment_x                      0x1403B6940
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405D7EE0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405D80D0
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405D80E0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x14014D870
#define CFindItemWnd__Update_x                                     0x14014E210
#define CFindItemWnd__PickupSelectedItem_x                         0x140147CD0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x1401572E0
#define LootFiltersManager__GetItemFilterData_x                    0x140157DF0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140158690
#define LootFiltersManager__SetItemLootFilter_x                    0x140158940

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x140487690

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x140324440
#define CResolutionHandler__UpdateResolution_x                     0x140584540

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403AA9D0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x14068BF60  // Rename..?
#define CDistillerInfo__Instance_x                                 0x14068BE50  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403D1310
#define CGroupWnd__UpdateDisplay_x                                 0x1403D0EF0

// ItemBase
#define ItemBase__IsLore_x                                         0x1406439F0
#define ItemBase__IsLoreEquipped_x                                 0x140643A80

#define MultipleItemMoveManager__ProcessMove_x                     0x1402C4290

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140252180
#define EQPlacedItemManager__GetItemByGuid_x                       0x140252110
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140252150

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14031E8A0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140125580
#define FactionManagerClient__HandleFactionMessage_x               0x140125930
#define FactionManagerClient__GetFactionStanding_x                 0x140124D50
#define FactionManagerClient__GetMaxFaction_x                      0x140124D50
#define FactionManagerClient__GetMinFaction_x                      0x140124C00

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AE3D0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140130D00

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401B05F0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401AF970
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401B0410  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401B0390  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x140330A50

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14031E8A0

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x140218150

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140594BC0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140086870

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140342290

// AchievementManager
#define AchievementManager__Instance_x                             0x14008E240

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x140670150
#define FreeToPlayClient__RestrictionInfo_x                        0x140AC1DF0

// UdpConnection
#define UdpConnection__GetStats_x                                  0x140537450

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x140820568
#define CGFScreenWnd__CGFScreenWnd_x                               0x140071260
#define CGFScreenWnd__CGFScreenWnd1_x                              0x1400713F0
#define CGFScreenWnd__dCGFScreenWnd_x                              0x1400715A0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
