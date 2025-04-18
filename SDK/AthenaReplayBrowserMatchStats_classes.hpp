#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaReplayBrowserMatchStats

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaReplayBrowserMatchStats.AthenaReplayBrowserMatchStats_C
// 0x0108 (0x0320 - 0x0218)
class UAthenaReplayBrowserMatchStats_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0218(0x0008)(Transient, DuplicateTransient)
	class UCommonTextBlock*                       Accuracy;                                          // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Assists;                                           // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       ChestsOpened;                                      // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       DamagePlayers;                                     // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       DamageStructures;                                  // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       DamageTaken;                                       // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Distance;                                          // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Finish;                                            // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Headshots;                                         // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Hits;                                              // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Kills;                                             // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       MaterialsGathered;                                 // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       MaterialsUsed;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Revives;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FAthenaReplayBrowserRowData            ReplayInfo;                                        // 0x0290(0x0090)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_AthenaReplayBrowserMatchStats(int32 EntryPoint);
	void Clear();
	void Construct();
	void Refresh();
	void SetReplayInfo(class UAthenaReplayBrowserRowProxyInstance* Param_ReplayInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaReplayBrowserMatchStats_C">();
	}
	static class UAthenaReplayBrowserMatchStats_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaReplayBrowserMatchStats_C>();
	}
};
static_assert(alignof(UAthenaReplayBrowserMatchStats_C) == 0x000008, "Wrong alignment on UAthenaReplayBrowserMatchStats_C");
static_assert(sizeof(UAthenaReplayBrowserMatchStats_C) == 0x000320, "Wrong size on UAthenaReplayBrowserMatchStats_C");
static_assert(offsetof(UAthenaReplayBrowserMatchStats_C, UberGraphFrame) == 0x000218, "Member 'UAthenaReplayBrowserMatchStats_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaReplayBrowserMatchStats_C, Accuracy) == 0x000220, "Member 'UAthenaReplayBrowserMatchStats_C::Accuracy' has a wrong offset!");
static_assert(offsetof(UAthenaReplayBrowserMatchStats_C, Assists) == 0x000228, "Member 'UAthenaReplayBrowserMatchStats_C::Assists' has a wrong offset!");
static_assert(offsetof(UAthenaReplayBrowserMatchStats_C, ChestsOpened) == 0x000230, "Member 'UAthenaReplayBrowserMatchStats_C::ChestsOpened' has a wrong offset!");
static_assert(offsetof(UAthenaReplayBrowserMatchStats_C, DamagePlayers) == 0x000238, "Member 'UAthenaReplayBrowserMatchStats_C::DamagePlayers' has a wrong offset!");
static_assert(offsetof(UAthenaReplayBrowserMatchStats_C, DamageStructures) == 0x000240, "Member 'UAthenaReplayBrowserMatchStats_C::DamageStructures' has a wrong offset!");
static_assert(offsetof(UAthenaReplayBrowserMatchStats_C, DamageTaken) == 0x000248, "Member 'UAthenaReplayBrowserMatchStats_C::DamageTaken' has a wrong offset!");
static_assert(offsetof(UAthenaReplayBrowserMatchStats_C, Distance) == 0x000250, "Member 'UAthenaReplayBrowserMatchStats_C::Distance' has a wrong offset!");
static_assert(offsetof(UAthenaReplayBrowserMatchStats_C, Finish) == 0x000258, "Member 'UAthenaReplayBrowserMatchStats_C::Finish' has a wrong offset!");
static_assert(offsetof(UAthenaReplayBrowserMatchStats_C, Headshots) == 0x000260, "Member 'UAthenaReplayBrowserMatchStats_C::Headshots' has a wrong offset!");
static_assert(offsetof(UAthenaReplayBrowserMatchStats_C, Hits) == 0x000268, "Member 'UAthenaReplayBrowserMatchStats_C::Hits' has a wrong offset!");
static_assert(offsetof(UAthenaReplayBrowserMatchStats_C, Kills) == 0x000270, "Member 'UAthenaReplayBrowserMatchStats_C::Kills' has a wrong offset!");
static_assert(offsetof(UAthenaReplayBrowserMatchStats_C, MaterialsGathered) == 0x000278, "Member 'UAthenaReplayBrowserMatchStats_C::MaterialsGathered' has a wrong offset!");
static_assert(offsetof(UAthenaReplayBrowserMatchStats_C, MaterialsUsed) == 0x000280, "Member 'UAthenaReplayBrowserMatchStats_C::MaterialsUsed' has a wrong offset!");
static_assert(offsetof(UAthenaReplayBrowserMatchStats_C, Revives) == 0x000288, "Member 'UAthenaReplayBrowserMatchStats_C::Revives' has a wrong offset!");
static_assert(offsetof(UAthenaReplayBrowserMatchStats_C, ReplayInfo) == 0x000290, "Member 'UAthenaReplayBrowserMatchStats_C::ReplayInfo' has a wrong offset!");

}

