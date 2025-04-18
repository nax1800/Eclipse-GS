#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Default_KilledEnemy

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Default_KilledEnemy.GA_Default_KilledEnemy_C
// 0x0010 (0x0AF8 - 0x0AE8)
class UGA_Default_KilledEnemy_C final : public UFortGameplayAbility
{
public:
	uint8                                         Pad_AE8[0x8];                                      // 0x0AE8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0AF0(0x0008)(Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GA_Default_KilledEnemy(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Default_KilledEnemy_C">();
	}
	static class UGA_Default_KilledEnemy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Default_KilledEnemy_C>();
	}
};
static_assert(alignof(UGA_Default_KilledEnemy_C) == 0x000008, "Wrong alignment on UGA_Default_KilledEnemy_C");
static_assert(sizeof(UGA_Default_KilledEnemy_C) == 0x000AF8, "Wrong size on UGA_Default_KilledEnemy_C");
static_assert(offsetof(UGA_Default_KilledEnemy_C, UberGraphFrame) == 0x000AF0, "Member 'UGA_Default_KilledEnemy_C::UberGraphFrame' has a wrong offset!");

}

