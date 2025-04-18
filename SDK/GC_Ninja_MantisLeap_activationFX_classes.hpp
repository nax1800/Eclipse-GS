#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Ninja_MantisLeap_activationFX

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_Ninja_MantisLeap_activationFX.GC_Ninja_MantisLeap_ActivationFX_C
// 0x0030 (0x00E0 - 0x00B0)
class UGC_Ninja_MantisLeap_ActivationFX_C final : public UFortGameplayCueNotify_Simple
{
public:
	class UParticleSystem*                        MantisLeapEffect;                                  // 0x00B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   FootSocketL;                                       // 0x00B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   FootSocketR;                                       // 0x00C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             MantisLeapCue;                                     // 0x00C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackEffect*                   MantisLeapForceFeedback;                           // 0x00D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_Ninja_MantisLeap_ActivationFX_C">();
	}
	static class UGC_Ninja_MantisLeap_ActivationFX_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGC_Ninja_MantisLeap_ActivationFX_C>();
	}
};
static_assert(alignof(UGC_Ninja_MantisLeap_ActivationFX_C) == 0x000010, "Wrong alignment on UGC_Ninja_MantisLeap_ActivationFX_C");
static_assert(sizeof(UGC_Ninja_MantisLeap_ActivationFX_C) == 0x0000E0, "Wrong size on UGC_Ninja_MantisLeap_ActivationFX_C");
static_assert(offsetof(UGC_Ninja_MantisLeap_ActivationFX_C, MantisLeapEffect) == 0x0000B0, "Member 'UGC_Ninja_MantisLeap_ActivationFX_C::MantisLeapEffect' has a wrong offset!");
static_assert(offsetof(UGC_Ninja_MantisLeap_ActivationFX_C, FootSocketL) == 0x0000B8, "Member 'UGC_Ninja_MantisLeap_ActivationFX_C::FootSocketL' has a wrong offset!");
static_assert(offsetof(UGC_Ninja_MantisLeap_ActivationFX_C, FootSocketR) == 0x0000C0, "Member 'UGC_Ninja_MantisLeap_ActivationFX_C::FootSocketR' has a wrong offset!");
static_assert(offsetof(UGC_Ninja_MantisLeap_ActivationFX_C, MantisLeapCue) == 0x0000C8, "Member 'UGC_Ninja_MantisLeap_ActivationFX_C::MantisLeapCue' has a wrong offset!");
static_assert(offsetof(UGC_Ninja_MantisLeap_ActivationFX_C, MantisLeapForceFeedback) == 0x0000D0, "Member 'UGC_Ninja_MantisLeap_ActivationFX_C::MantisLeapForceFeedback' has a wrong offset!");

}

