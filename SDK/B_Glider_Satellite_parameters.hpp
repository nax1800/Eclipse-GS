#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Glider_Satellite

#include "Basic.hpp"


namespace SDK::Params
{

// Function B_Glider_Satellite.B_Glider_Satellite_C.ExecuteUbergraph_B_Glider_Satellite
// 0x0018 (0x0018 - 0x0000)
struct B_Glider_Satellite_C_ExecuteUbergraph_B_Glider_Satellite final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_MovementLengthSquared;                // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_ForwardDot;                           // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_RightDot;                             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_RotationalMovementAcceleration;       // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(B_Glider_Satellite_C_ExecuteUbergraph_B_Glider_Satellite) == 0x000004, "Wrong alignment on B_Glider_Satellite_C_ExecuteUbergraph_B_Glider_Satellite");
static_assert(sizeof(B_Glider_Satellite_C_ExecuteUbergraph_B_Glider_Satellite) == 0x000018, "Wrong size on B_Glider_Satellite_C_ExecuteUbergraph_B_Glider_Satellite");
static_assert(offsetof(B_Glider_Satellite_C_ExecuteUbergraph_B_Glider_Satellite, EntryPoint) == 0x000000, "Member 'B_Glider_Satellite_C_ExecuteUbergraph_B_Glider_Satellite::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_Glider_Satellite_C_ExecuteUbergraph_B_Glider_Satellite, K2Node_Event_MovementLengthSquared) == 0x000004, "Member 'B_Glider_Satellite_C_ExecuteUbergraph_B_Glider_Satellite::K2Node_Event_MovementLengthSquared' has a wrong offset!");
static_assert(offsetof(B_Glider_Satellite_C_ExecuteUbergraph_B_Glider_Satellite, K2Node_Event_ForwardDot) == 0x000008, "Member 'B_Glider_Satellite_C_ExecuteUbergraph_B_Glider_Satellite::K2Node_Event_ForwardDot' has a wrong offset!");
static_assert(offsetof(B_Glider_Satellite_C_ExecuteUbergraph_B_Glider_Satellite, K2Node_Event_RightDot) == 0x00000C, "Member 'B_Glider_Satellite_C_ExecuteUbergraph_B_Glider_Satellite::K2Node_Event_RightDot' has a wrong offset!");
static_assert(offsetof(B_Glider_Satellite_C_ExecuteUbergraph_B_Glider_Satellite, K2Node_Event_RotationalMovementAcceleration) == 0x000010, "Member 'B_Glider_Satellite_C_ExecuteUbergraph_B_Glider_Satellite::K2Node_Event_RotationalMovementAcceleration' has a wrong offset!");
static_assert(offsetof(B_Glider_Satellite_C_ExecuteUbergraph_B_Glider_Satellite, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000014, "Member 'B_Glider_Satellite_C_ExecuteUbergraph_B_Glider_Satellite::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Glider_Satellite_C_ExecuteUbergraph_B_Glider_Satellite, CallFunc_BooleanAND_ReturnValue) == 0x000015, "Member 'B_Glider_Satellite_C_ExecuteUbergraph_B_Glider_Satellite::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function B_Glider_Satellite.B_Glider_Satellite_C.OnParachuteTrailUpdated
// 0x0010 (0x0010 - 0x0000)
struct B_Glider_Satellite_C_OnParachuteTrailUpdated final
{
public:
	float                                         MovementLengthSquared;                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ForwardDot;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RightDot;                                          // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RotationalMovementAcceleration;                    // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Glider_Satellite_C_OnParachuteTrailUpdated) == 0x000004, "Wrong alignment on B_Glider_Satellite_C_OnParachuteTrailUpdated");
static_assert(sizeof(B_Glider_Satellite_C_OnParachuteTrailUpdated) == 0x000010, "Wrong size on B_Glider_Satellite_C_OnParachuteTrailUpdated");
static_assert(offsetof(B_Glider_Satellite_C_OnParachuteTrailUpdated, MovementLengthSquared) == 0x000000, "Member 'B_Glider_Satellite_C_OnParachuteTrailUpdated::MovementLengthSquared' has a wrong offset!");
static_assert(offsetof(B_Glider_Satellite_C_OnParachuteTrailUpdated, ForwardDot) == 0x000004, "Member 'B_Glider_Satellite_C_OnParachuteTrailUpdated::ForwardDot' has a wrong offset!");
static_assert(offsetof(B_Glider_Satellite_C_OnParachuteTrailUpdated, RightDot) == 0x000008, "Member 'B_Glider_Satellite_C_OnParachuteTrailUpdated::RightDot' has a wrong offset!");
static_assert(offsetof(B_Glider_Satellite_C_OnParachuteTrailUpdated, RotationalMovementAcceleration) == 0x00000C, "Member 'B_Glider_Satellite_C_OnParachuteTrailUpdated::RotationalMovementAcceleration' has a wrong offset!");

}

