#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Glider_TestStaticParts

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Glider_TestStaticParts.B_Glider_TestStaticParts_C
// 0x0008 (0x0368 - 0x0360)
class AB_Glider_TestStaticParts_C final : public AFortPlayerParachute
{
public:
	class UStaticMeshComponent*                   GliderStaticParts;                                 // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Glider_TestStaticParts_C">();
	}
	static class AB_Glider_TestStaticParts_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Glider_TestStaticParts_C>();
	}
};
static_assert(alignof(AB_Glider_TestStaticParts_C) == 0x000008, "Wrong alignment on AB_Glider_TestStaticParts_C");
static_assert(sizeof(AB_Glider_TestStaticParts_C) == 0x000368, "Wrong size on AB_Glider_TestStaticParts_C");
static_assert(offsetof(AB_Glider_TestStaticParts_C, GliderStaticParts) == 0x000360, "Member 'AB_Glider_TestStaticParts_C::GliderStaticParts' has a wrong offset!");

}

