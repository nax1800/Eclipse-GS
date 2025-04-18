#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_SmasherApplyFullBodyHit

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GAB_GenericApplyFullBodyHit_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GAB_SmasherApplyFullBodyHit.GAB_SmasherApplyFullBodyHit_C
// 0x0018 (0x0B60 - 0x0B48)
class UGAB_SmasherApplyFullBodyHit_C final : public UGAB_GenericApplyFullBodyHit_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GAB_SmasherApplyFullBodyHit_C;      // 0x0B48(0x0008)(Transient, DuplicateTransient)
	class FName                                   Front;                                             // 0x0B50(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentNum;                                        // 0x0B58(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PreviousNum;                                       // 0x0B5C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GAB_SmasherApplyFullBodyHit(int32 EntryPoint);
	void PickFullBodyHitMontageSection();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAB_SmasherApplyFullBodyHit_C">();
	}
	static class UGAB_SmasherApplyFullBodyHit_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAB_SmasherApplyFullBodyHit_C>();
	}
};
static_assert(alignof(UGAB_SmasherApplyFullBodyHit_C) == 0x000008, "Wrong alignment on UGAB_SmasherApplyFullBodyHit_C");
static_assert(sizeof(UGAB_SmasherApplyFullBodyHit_C) == 0x000B60, "Wrong size on UGAB_SmasherApplyFullBodyHit_C");
static_assert(offsetof(UGAB_SmasherApplyFullBodyHit_C, UberGraphFrame_GAB_SmasherApplyFullBodyHit_C) == 0x000B48, "Member 'UGAB_SmasherApplyFullBodyHit_C::UberGraphFrame_GAB_SmasherApplyFullBodyHit_C' has a wrong offset!");
static_assert(offsetof(UGAB_SmasherApplyFullBodyHit_C, Front) == 0x000B50, "Member 'UGAB_SmasherApplyFullBodyHit_C::Front' has a wrong offset!");
static_assert(offsetof(UGAB_SmasherApplyFullBodyHit_C, CurrentNum) == 0x000B58, "Member 'UGAB_SmasherApplyFullBodyHit_C::CurrentNum' has a wrong offset!");
static_assert(offsetof(UGAB_SmasherApplyFullBodyHit_C, PreviousNum) == 0x000B5C, "Member 'UGAB_SmasherApplyFullBodyHit_C::PreviousNum' has a wrong offset!");

}

