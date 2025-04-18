#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Assault_Hydraulic_Drum_Athena

#include "Basic.hpp"

#include "B_Assault_Bulletswarm_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Assault_Hydraulic_Drum_Athena.B_Assault_Hydraulic_Drum_Athena_C
// 0x0018 (0x0E70 - 0x0E58)
class AB_Assault_Hydraulic_Drum_Athena_C final : public AB_Assault_Bulletswarm_C
{
public:
	struct FVector                                LaserScaleUntargeted;                              // 0x0E54(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LaserScaleTargeted;                                // 0x0E60(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Assault_Hydraulic_Drum_Athena_C">();
	}
	static class AB_Assault_Hydraulic_Drum_Athena_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Assault_Hydraulic_Drum_Athena_C>();
	}
};
static_assert(alignof(AB_Assault_Hydraulic_Drum_Athena_C) == 0x000008, "Wrong alignment on AB_Assault_Hydraulic_Drum_Athena_C");
static_assert(sizeof(AB_Assault_Hydraulic_Drum_Athena_C) == 0x000E70, "Wrong size on AB_Assault_Hydraulic_Drum_Athena_C");
static_assert(offsetof(AB_Assault_Hydraulic_Drum_Athena_C, LaserScaleUntargeted) == 0x000E54, "Member 'AB_Assault_Hydraulic_Drum_Athena_C::LaserScaleUntargeted' has a wrong offset!");
static_assert(offsetof(AB_Assault_Hydraulic_Drum_Athena_C, LaserScaleTargeted) == 0x000E60, "Member 'AB_Assault_Hydraulic_Drum_Athena_C::LaserScaleTargeted' has a wrong offset!");

}

