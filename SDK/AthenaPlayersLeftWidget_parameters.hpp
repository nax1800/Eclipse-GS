#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaPlayersLeftWidget

#include "Basic.hpp"


namespace SDK::Params
{

// Function AthenaPlayersLeftWidget.AthenaPlayersLeftWidget_C.ExecuteUbergraph_AthenaPlayersLeftWidget
// 0x0020 (0x0020 - 0x0000)
struct AthenaPlayersLeftWidget_C_ExecuteUbergraph_AthenaPlayersLeftWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Event_PlayersText;                          // 0x0008(0x0018)(ConstParm)
};
static_assert(alignof(AthenaPlayersLeftWidget_C_ExecuteUbergraph_AthenaPlayersLeftWidget) == 0x000008, "Wrong alignment on AthenaPlayersLeftWidget_C_ExecuteUbergraph_AthenaPlayersLeftWidget");
static_assert(sizeof(AthenaPlayersLeftWidget_C_ExecuteUbergraph_AthenaPlayersLeftWidget) == 0x000020, "Wrong size on AthenaPlayersLeftWidget_C_ExecuteUbergraph_AthenaPlayersLeftWidget");
static_assert(offsetof(AthenaPlayersLeftWidget_C_ExecuteUbergraph_AthenaPlayersLeftWidget, EntryPoint) == 0x000000, "Member 'AthenaPlayersLeftWidget_C_ExecuteUbergraph_AthenaPlayersLeftWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaPlayersLeftWidget_C_ExecuteUbergraph_AthenaPlayersLeftWidget, K2Node_Event_PlayersText) == 0x000008, "Member 'AthenaPlayersLeftWidget_C_ExecuteUbergraph_AthenaPlayersLeftWidget::K2Node_Event_PlayersText' has a wrong offset!");

// Function AthenaPlayersLeftWidget.AthenaPlayersLeftWidget_C.SetPlayersLeftText
// 0x0018 (0x0018 - 0x0000)
struct AthenaPlayersLeftWidget_C_SetPlayersLeftText final
{
public:
	class FText                                   PlayersText;                                       // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(AthenaPlayersLeftWidget_C_SetPlayersLeftText) == 0x000008, "Wrong alignment on AthenaPlayersLeftWidget_C_SetPlayersLeftText");
static_assert(sizeof(AthenaPlayersLeftWidget_C_SetPlayersLeftText) == 0x000018, "Wrong size on AthenaPlayersLeftWidget_C_SetPlayersLeftText");
static_assert(offsetof(AthenaPlayersLeftWidget_C_SetPlayersLeftText, PlayersText) == 0x000000, "Member 'AthenaPlayersLeftWidget_C_SetPlayersLeftText::PlayersText' has a wrong offset!");

}

