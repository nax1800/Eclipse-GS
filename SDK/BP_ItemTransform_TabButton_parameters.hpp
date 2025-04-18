#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ItemTransform_TabButton

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.ExecuteUbergraph_BP_ItemTransform_TabButton
// 0x01F0 (0x01F0 - 0x0000)
struct BP_ItemTransform_TabButton_C_ExecuteUbergraph_BP_ItemTransform_TabButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_GetCurrentTextStyleClass_ReturnValue;     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_GetCurrentTextStyleClass_ReturnValue1;    // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortTabButtonLabelInfo                K2Node_Event_TabLabelInfo;                         // 0x0020(0x00A0)(ConstParm)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_Create_Basic_Tooltip_Output;              // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetSelected_ReturnValue;                  // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetSelected_ReturnValue1;                 // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D2[0x6];                                       // 0x00D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x00D8(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor1;                     // 0x0100(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor12;                    // 0x0128(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor123;                   // 0x0150(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor1234;                  // 0x0178(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor12345;                 // 0x01A0(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor123456;                // 0x01C8(0x0028)()
};
static_assert(alignof(BP_ItemTransform_TabButton_C_ExecuteUbergraph_BP_ItemTransform_TabButton) == 0x000008, "Wrong alignment on BP_ItemTransform_TabButton_C_ExecuteUbergraph_BP_ItemTransform_TabButton");
static_assert(sizeof(BP_ItemTransform_TabButton_C_ExecuteUbergraph_BP_ItemTransform_TabButton) == 0x0001F0, "Wrong size on BP_ItemTransform_TabButton_C_ExecuteUbergraph_BP_ItemTransform_TabButton");
static_assert(offsetof(BP_ItemTransform_TabButton_C_ExecuteUbergraph_BP_ItemTransform_TabButton, EntryPoint) == 0x000000, "Member 'BP_ItemTransform_TabButton_C_ExecuteUbergraph_BP_ItemTransform_TabButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ItemTransform_TabButton_C_ExecuteUbergraph_BP_ItemTransform_TabButton, CallFunc_GetCurrentTextStyleClass_ReturnValue) == 0x000008, "Member 'BP_ItemTransform_TabButton_C_ExecuteUbergraph_BP_ItemTransform_TabButton::CallFunc_GetCurrentTextStyleClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemTransform_TabButton_C_ExecuteUbergraph_BP_ItemTransform_TabButton, CallFunc_GetCurrentTextStyleClass_ReturnValue1) == 0x000010, "Member 'BP_ItemTransform_TabButton_C_ExecuteUbergraph_BP_ItemTransform_TabButton::CallFunc_GetCurrentTextStyleClass_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BP_ItemTransform_TabButton_C_ExecuteUbergraph_BP_ItemTransform_TabButton, K2Node_Event_IsDesignTime) == 0x000018, "Member 'BP_ItemTransform_TabButton_C_ExecuteUbergraph_BP_ItemTransform_TabButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(BP_ItemTransform_TabButton_C_ExecuteUbergraph_BP_ItemTransform_TabButton, K2Node_Event_TabLabelInfo) == 0x000020, "Member 'BP_ItemTransform_TabButton_C_ExecuteUbergraph_BP_ItemTransform_TabButton::K2Node_Event_TabLabelInfo' has a wrong offset!");
static_assert(offsetof(BP_ItemTransform_TabButton_C_ExecuteUbergraph_BP_ItemTransform_TabButton, CallFunc_GetOwningPlayer_ReturnValue) == 0x0000C0, "Member 'BP_ItemTransform_TabButton_C_ExecuteUbergraph_BP_ItemTransform_TabButton::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemTransform_TabButton_C_ExecuteUbergraph_BP_ItemTransform_TabButton, CallFunc_Create_Basic_Tooltip_Output) == 0x0000C8, "Member 'BP_ItemTransform_TabButton_C_ExecuteUbergraph_BP_ItemTransform_TabButton::CallFunc_Create_Basic_Tooltip_Output' has a wrong offset!");
static_assert(offsetof(BP_ItemTransform_TabButton_C_ExecuteUbergraph_BP_ItemTransform_TabButton, CallFunc_GetSelected_ReturnValue) == 0x0000D0, "Member 'BP_ItemTransform_TabButton_C_ExecuteUbergraph_BP_ItemTransform_TabButton::CallFunc_GetSelected_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemTransform_TabButton_C_ExecuteUbergraph_BP_ItemTransform_TabButton, CallFunc_GetSelected_ReturnValue1) == 0x0000D1, "Member 'BP_ItemTransform_TabButton_C_ExecuteUbergraph_BP_ItemTransform_TabButton::CallFunc_GetSelected_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BP_ItemTransform_TabButton_C_ExecuteUbergraph_BP_ItemTransform_TabButton, K2Node_MakeStruct_SlateColor) == 0x0000D8, "Member 'BP_ItemTransform_TabButton_C_ExecuteUbergraph_BP_ItemTransform_TabButton::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(BP_ItemTransform_TabButton_C_ExecuteUbergraph_BP_ItemTransform_TabButton, K2Node_MakeStruct_SlateColor1) == 0x000100, "Member 'BP_ItemTransform_TabButton_C_ExecuteUbergraph_BP_ItemTransform_TabButton::K2Node_MakeStruct_SlateColor1' has a wrong offset!");
static_assert(offsetof(BP_ItemTransform_TabButton_C_ExecuteUbergraph_BP_ItemTransform_TabButton, K2Node_MakeStruct_SlateColor12) == 0x000128, "Member 'BP_ItemTransform_TabButton_C_ExecuteUbergraph_BP_ItemTransform_TabButton::K2Node_MakeStruct_SlateColor12' has a wrong offset!");
static_assert(offsetof(BP_ItemTransform_TabButton_C_ExecuteUbergraph_BP_ItemTransform_TabButton, K2Node_MakeStruct_SlateColor123) == 0x000150, "Member 'BP_ItemTransform_TabButton_C_ExecuteUbergraph_BP_ItemTransform_TabButton::K2Node_MakeStruct_SlateColor123' has a wrong offset!");
static_assert(offsetof(BP_ItemTransform_TabButton_C_ExecuteUbergraph_BP_ItemTransform_TabButton, K2Node_MakeStruct_SlateColor1234) == 0x000178, "Member 'BP_ItemTransform_TabButton_C_ExecuteUbergraph_BP_ItemTransform_TabButton::K2Node_MakeStruct_SlateColor1234' has a wrong offset!");
static_assert(offsetof(BP_ItemTransform_TabButton_C_ExecuteUbergraph_BP_ItemTransform_TabButton, K2Node_MakeStruct_SlateColor12345) == 0x0001A0, "Member 'BP_ItemTransform_TabButton_C_ExecuteUbergraph_BP_ItemTransform_TabButton::K2Node_MakeStruct_SlateColor12345' has a wrong offset!");
static_assert(offsetof(BP_ItemTransform_TabButton_C_ExecuteUbergraph_BP_ItemTransform_TabButton, K2Node_MakeStruct_SlateColor123456) == 0x0001C8, "Member 'BP_ItemTransform_TabButton_C_ExecuteUbergraph_BP_ItemTransform_TabButton::K2Node_MakeStruct_SlateColor123456' has a wrong offset!");

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.SetTabLabelInfo
// 0x00A0 (0x00A0 - 0x0000)
struct BP_ItemTransform_TabButton_C_SetTabLabelInfo final
{
public:
	struct FFortTabButtonLabelInfo                TabLabelInfo;                                      // 0x0000(0x00A0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_ItemTransform_TabButton_C_SetTabLabelInfo) == 0x000008, "Wrong alignment on BP_ItemTransform_TabButton_C_SetTabLabelInfo");
static_assert(sizeof(BP_ItemTransform_TabButton_C_SetTabLabelInfo) == 0x0000A0, "Wrong size on BP_ItemTransform_TabButton_C_SetTabLabelInfo");
static_assert(offsetof(BP_ItemTransform_TabButton_C_SetTabLabelInfo, TabLabelInfo) == 0x000000, "Member 'BP_ItemTransform_TabButton_C_SetTabLabelInfo::TabLabelInfo' has a wrong offset!");

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct BP_ItemTransform_TabButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ItemTransform_TabButton_C_PreConstruct) == 0x000001, "Wrong alignment on BP_ItemTransform_TabButton_C_PreConstruct");
static_assert(sizeof(BP_ItemTransform_TabButton_C_PreConstruct) == 0x000001, "Wrong size on BP_ItemTransform_TabButton_C_PreConstruct");
static_assert(offsetof(BP_ItemTransform_TabButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'BP_ItemTransform_TabButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Set Text
// 0x0028 (0x0028 - 0x0000)
struct BP_ItemTransform_TabButton_C_Set_Text final
{
public:
	class FText                                   Param_ButtonText;                                  // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_Create_Basic_Tooltip_Output;              // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ItemTransform_TabButton_C_Set_Text) == 0x000008, "Wrong alignment on BP_ItemTransform_TabButton_C_Set_Text");
static_assert(sizeof(BP_ItemTransform_TabButton_C_Set_Text) == 0x000028, "Wrong size on BP_ItemTransform_TabButton_C_Set_Text");
static_assert(offsetof(BP_ItemTransform_TabButton_C_Set_Text, Param_ButtonText) == 0x000000, "Member 'BP_ItemTransform_TabButton_C_Set_Text::Param_ButtonText' has a wrong offset!");
static_assert(offsetof(BP_ItemTransform_TabButton_C_Set_Text, CallFunc_GetOwningPlayer_ReturnValue) == 0x000018, "Member 'BP_ItemTransform_TabButton_C_Set_Text::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemTransform_TabButton_C_Set_Text, CallFunc_Create_Basic_Tooltip_Output) == 0x000020, "Member 'BP_ItemTransform_TabButton_C_Set_Text::CallFunc_Create_Basic_Tooltip_Output' has a wrong offset!");

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Set Icon
// 0x0088 (0x0088 - 0x0000)
struct BP_ItemTransform_TabButton_C_Set_Icon final
{
public:
	struct FSlateBrush                            Param_IconBrush;                                   // 0x0000(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(BP_ItemTransform_TabButton_C_Set_Icon) == 0x000008, "Wrong alignment on BP_ItemTransform_TabButton_C_Set_Icon");
static_assert(sizeof(BP_ItemTransform_TabButton_C_Set_Icon) == 0x000088, "Wrong size on BP_ItemTransform_TabButton_C_Set_Icon");
static_assert(offsetof(BP_ItemTransform_TabButton_C_Set_Icon, Param_IconBrush) == 0x000000, "Member 'BP_ItemTransform_TabButton_C_Set_Icon::Param_IconBrush' has a wrong offset!");

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Refresh Bang State
// 0x0020 (0x0020 - 0x0000)
struct BP_ItemTransform_TabButton_C_Refresh_Bang_State final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_K2_IsTimerActiveHandle_ReturnValue;       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0018(0x0008)(NoDestructor)
};
static_assert(alignof(BP_ItemTransform_TabButton_C_Refresh_Bang_State) == 0x000008, "Wrong alignment on BP_ItemTransform_TabButton_C_Refresh_Bang_State");
static_assert(sizeof(BP_ItemTransform_TabButton_C_Refresh_Bang_State) == 0x000020, "Wrong size on BP_ItemTransform_TabButton_C_Refresh_Bang_State");
static_assert(offsetof(BP_ItemTransform_TabButton_C_Refresh_Bang_State, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'BP_ItemTransform_TabButton_C_Refresh_Bang_State::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_ItemTransform_TabButton_C_Refresh_Bang_State, CallFunc_K2_IsTimerActiveHandle_ReturnValue) == 0x000010, "Member 'BP_ItemTransform_TabButton_C_Refresh_Bang_State::CallFunc_K2_IsTimerActiveHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemTransform_TabButton_C_Refresh_Bang_State, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'BP_ItemTransform_TabButton_C_Refresh_Bang_State::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Set Tab Id
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x08) BP_ItemTransform_TabButton_C_Set_Tab_Id final
{
public:
	class FName                                   Param_TabId;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ItemTransform_TabButton_C_Set_Tab_Id) == 0x000008, "Wrong alignment on BP_ItemTransform_TabButton_C_Set_Tab_Id");
static_assert(sizeof(BP_ItemTransform_TabButton_C_Set_Tab_Id) == 0x000008, "Wrong size on BP_ItemTransform_TabButton_C_Set_Tab_Id");
static_assert(offsetof(BP_ItemTransform_TabButton_C_Set_Tab_Id, Param_TabId) == 0x000000, "Member 'BP_ItemTransform_TabButton_C_Set_Tab_Id::Param_TabId' has a wrong offset!");

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Get Tab Id as Request Type
// 0x0003 (0x0003 - 0x0000)
struct BP_ItemTransform_TabButton_C_Get_Tab_Id_as_Request_Type final
{
public:
	EConversionControlKeyRequest                  ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue1;         // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ItemTransform_TabButton_C_Get_Tab_Id_as_Request_Type) == 0x000001, "Wrong alignment on BP_ItemTransform_TabButton_C_Get_Tab_Id_as_Request_Type");
static_assert(sizeof(BP_ItemTransform_TabButton_C_Get_Tab_Id_as_Request_Type) == 0x000003, "Wrong size on BP_ItemTransform_TabButton_C_Get_Tab_Id_as_Request_Type");
static_assert(offsetof(BP_ItemTransform_TabButton_C_Get_Tab_Id_as_Request_Type, ReturnValue) == 0x000000, "Member 'BP_ItemTransform_TabButton_C_Get_Tab_Id_as_Request_Type::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemTransform_TabButton_C_Get_Tab_Id_as_Request_Type, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000001, "Member 'BP_ItemTransform_TabButton_C_Get_Tab_Id_as_Request_Type::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemTransform_TabButton_C_Get_Tab_Id_as_Request_Type, CallFunc_EqualEqual_NameName_ReturnValue1) == 0x000002, "Member 'BP_ItemTransform_TabButton_C_Get_Tab_Id_as_Request_Type::CallFunc_EqualEqual_NameName_ReturnValue1' has a wrong offset!");

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Refresh Bang State Internal
// 0x0028 (0x0028 - 0x0000)
struct BP_ItemTransform_TabButton_C_Refresh_Bang_State_Internal final
{
public:
	EConversionControlKeyRequest                  CallFunc_Get_Tab_Id_as_Request_Type_ReturnValue;   // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortInventoryContext*                  CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortAccountItem*>               CallFunc_GetUnseenTransformKeys_TransformKeys;     // 0x0010(0x0010)(ZeroConstructor, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ItemTransform_TabButton_C_Refresh_Bang_State_Internal) == 0x000008, "Wrong alignment on BP_ItemTransform_TabButton_C_Refresh_Bang_State_Internal");
static_assert(sizeof(BP_ItemTransform_TabButton_C_Refresh_Bang_State_Internal) == 0x000028, "Wrong size on BP_ItemTransform_TabButton_C_Refresh_Bang_State_Internal");
static_assert(offsetof(BP_ItemTransform_TabButton_C_Refresh_Bang_State_Internal, CallFunc_Get_Tab_Id_as_Request_Type_ReturnValue) == 0x000000, "Member 'BP_ItemTransform_TabButton_C_Refresh_Bang_State_Internal::CallFunc_Get_Tab_Id_as_Request_Type_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemTransform_TabButton_C_Refresh_Bang_State_Internal, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'BP_ItemTransform_TabButton_C_Refresh_Bang_State_Internal::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemTransform_TabButton_C_Refresh_Bang_State_Internal, CallFunc_GetUnseenTransformKeys_TransformKeys) == 0x000010, "Member 'BP_ItemTransform_TabButton_C_Refresh_Bang_State_Internal::CallFunc_GetUnseenTransformKeys_TransformKeys' has a wrong offset!");
static_assert(offsetof(BP_ItemTransform_TabButton_C_Refresh_Bang_State_Internal, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'BP_ItemTransform_TabButton_C_Refresh_Bang_State_Internal::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemTransform_TabButton_C_Refresh_Bang_State_Internal, CallFunc_Greater_IntInt_ReturnValue) == 0x000024, "Member 'BP_ItemTransform_TabButton_C_Refresh_Bang_State_Internal::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

}

