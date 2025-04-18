#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"
#include "ImmediatePhysics_structs.hpp"
#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint.Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C
// 0x0680 (0x0AB0 - 0x0430)
class UPickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C final : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0430(0x0008)(Transient, DuplicateTransient)
	struct FAnimNode_SubInput                     AnimGraphNode_SubInput_070E9EDA451C23C20742F1A3CEA36E92; // 0x0438(0x0068)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_151ADE244279A7A42130649830A169AC; // 0x04A0(0x0048)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_F8CB432B4692B3C54E96EAB243541C63; // 0x04E8(0x0048)()
	struct FAnimNode_Root                         AnimGraphNode_Root_EC80E3A14FFEF078D3064A8578FD21FF; // 0x0530(0x0048)()
	uint8                                         Pad_578[0x8];                                      // 0x0578(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_RigidBody                    AnimGraphNode_RigidBody_A4C70D374ADF4261AD134E800DC2E8CD; // 0x0580(0x0520)()
	class USkeletalMeshComponent*                 MeshToCopy;                                        // 0x0AA0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C">();
	}
	static class UPickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C>();
	}
};
static_assert(alignof(UPickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C) == 0x000010, "Wrong alignment on UPickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C");
static_assert(sizeof(UPickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C) == 0x000AB0, "Wrong size on UPickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C");
static_assert(offsetof(UPickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C, UberGraphFrame) == 0x000430, "Member 'UPickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C, AnimGraphNode_SubInput_070E9EDA451C23C20742F1A3CEA36E92) == 0x000438, "Member 'UPickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C::AnimGraphNode_SubInput_070E9EDA451C23C20742F1A3CEA36E92' has a wrong offset!");
static_assert(offsetof(UPickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C, AnimGraphNode_LocalToComponentSpace_151ADE244279A7A42130649830A169AC) == 0x0004A0, "Member 'UPickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C::AnimGraphNode_LocalToComponentSpace_151ADE244279A7A42130649830A169AC' has a wrong offset!");
static_assert(offsetof(UPickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C, AnimGraphNode_ComponentToLocalSpace_F8CB432B4692B3C54E96EAB243541C63) == 0x0004E8, "Member 'UPickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C::AnimGraphNode_ComponentToLocalSpace_F8CB432B4692B3C54E96EAB243541C63' has a wrong offset!");
static_assert(offsetof(UPickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C, AnimGraphNode_Root_EC80E3A14FFEF078D3064A8578FD21FF) == 0x000530, "Member 'UPickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C::AnimGraphNode_Root_EC80E3A14FFEF078D3064A8578FD21FF' has a wrong offset!");
static_assert(offsetof(UPickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C, AnimGraphNode_RigidBody_A4C70D374ADF4261AD134E800DC2E8CD) == 0x000580, "Member 'UPickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C::AnimGraphNode_RigidBody_A4C70D374ADF4261AD134E800DC2E8CD' has a wrong offset!");
static_assert(offsetof(UPickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C, MeshToCopy) == 0x000AA0, "Member 'UPickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C::MeshToCopy' has a wrong offset!");

}

