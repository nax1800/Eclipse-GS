#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IsStandingOnActor

#include "Basic.hpp"

#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass IsStandingOnActor.IsStandingOnActor_C
// 0x0028 (0x00C8 - 0x00A0)
class UIsStandingOnActor_C final : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                 ActorToCheck;                                      // 0x00A0(0x0028)(Edit, BlueprintVisible)

public:
	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IsStandingOnActor_C">();
	}
	static class UIsStandingOnActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIsStandingOnActor_C>();
	}
};
static_assert(alignof(UIsStandingOnActor_C) == 0x000008, "Wrong alignment on UIsStandingOnActor_C");
static_assert(sizeof(UIsStandingOnActor_C) == 0x0000C8, "Wrong size on UIsStandingOnActor_C");
static_assert(offsetof(UIsStandingOnActor_C, ActorToCheck) == 0x0000A0, "Member 'UIsStandingOnActor_C::ActorToCheck' has a wrong offset!");

}

