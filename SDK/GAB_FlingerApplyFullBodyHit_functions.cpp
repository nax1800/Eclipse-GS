#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_FlingerApplyFullBodyHit

#include "Basic.hpp"

#include "GAB_FlingerApplyFullBodyHit_classes.hpp"
#include "GAB_FlingerApplyFullBodyHit_parameters.hpp"


namespace SDK
{

// Function GAB_FlingerApplyFullBodyHit.GAB_FlingerApplyFullBodyHit_C.ExecuteUbergraph_GAB_FlingerApplyFullBodyHit
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_FlingerApplyFullBodyHit_C::ExecuteUbergraph_GAB_FlingerApplyFullBodyHit(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_FlingerApplyFullBodyHit_C", "ExecuteUbergraph_GAB_FlingerApplyFullBodyHit");

	Params::GAB_FlingerApplyFullBodyHit_C_ExecuteUbergraph_GAB_FlingerApplyFullBodyHit Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_FlingerApplyFullBodyHit.GAB_FlingerApplyFullBodyHit_C.PickFullBodyHitMontageSection
// (BlueprintCallable, BlueprintEvent)

void UGAB_FlingerApplyFullBodyHit_C::PickFullBodyHitMontageSection()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_FlingerApplyFullBodyHit_C", "PickFullBodyHitMontageSection");

	UObject::ProcessEvent(Func, nullptr);
}

}

