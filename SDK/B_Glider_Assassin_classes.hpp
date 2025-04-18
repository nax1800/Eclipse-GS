#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Glider_Assassin

#include "Basic.hpp"

#include "B_EmptyBaseGlider_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Glider_Assassin.B_Glider_Assassin_C
// 0x0030 (0x0398 - 0x0368)
class AB_Glider_Assassin_C final : public AB_EmptyBaseGlider_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0368(0x0008)(Transient, DuplicateTransient)
	class USkeletalMeshComponent*                 Bits;                                              // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         TailLightSequence_NewTrack_0_6E32E5FA4A1356E95FC72B929F136156; // 0x0378(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            TailLightSequence__Direction_6E32E5FA4A1356E95FC72B929F136156; // 0x037C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37D[0x3];                                      // 0x037D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     TailLightSequence;                                 // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NewVar_0;                                          // 0x0388(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_389[0x7];                                      // 0x0389(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               Mid;                                               // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_Glider_Assassin(int32 EntryPoint);
	void OnParachuteTrailUpdated(float MovementLengthSquared, float ForwardDot, float RightDot, float RotationalMovementAcceleration);
	void ReceiveBeginPlay();
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_0(float AxisValue);
	void TailLightSequence__FinishedFunc();
	void TailLightSequence__UpdateFunc();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Glider_Assassin_C">();
	}
	static class AB_Glider_Assassin_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Glider_Assassin_C>();
	}
};
static_assert(alignof(AB_Glider_Assassin_C) == 0x000008, "Wrong alignment on AB_Glider_Assassin_C");
static_assert(sizeof(AB_Glider_Assassin_C) == 0x000398, "Wrong size on AB_Glider_Assassin_C");
static_assert(offsetof(AB_Glider_Assassin_C, UberGraphFrame) == 0x000368, "Member 'AB_Glider_Assassin_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_Glider_Assassin_C, Bits) == 0x000370, "Member 'AB_Glider_Assassin_C::Bits' has a wrong offset!");
static_assert(offsetof(AB_Glider_Assassin_C, TailLightSequence_NewTrack_0_6E32E5FA4A1356E95FC72B929F136156) == 0x000378, "Member 'AB_Glider_Assassin_C::TailLightSequence_NewTrack_0_6E32E5FA4A1356E95FC72B929F136156' has a wrong offset!");
static_assert(offsetof(AB_Glider_Assassin_C, TailLightSequence__Direction_6E32E5FA4A1356E95FC72B929F136156) == 0x00037C, "Member 'AB_Glider_Assassin_C::TailLightSequence__Direction_6E32E5FA4A1356E95FC72B929F136156' has a wrong offset!");
static_assert(offsetof(AB_Glider_Assassin_C, TailLightSequence) == 0x000380, "Member 'AB_Glider_Assassin_C::TailLightSequence' has a wrong offset!");
static_assert(offsetof(AB_Glider_Assassin_C, NewVar_0) == 0x000388, "Member 'AB_Glider_Assassin_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(AB_Glider_Assassin_C, Mid) == 0x000390, "Member 'AB_Glider_Assassin_C::Mid' has a wrong offset!");

}

