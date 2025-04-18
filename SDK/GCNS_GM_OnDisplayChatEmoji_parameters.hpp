#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNS_GM_OnDisplayChatEmoji

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GCNS_GM_OnDisplayChatEmoji.GCNS_GM_OnDisplayChatEmoji_C.OnStartParticleSystemSpawned
// 0x01A0 (0x01A0 - 0x0000)
struct GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned final
{
public:
	class UParticleSystemComponent*               SpawnedParticleSysComponent;                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaEmojiItemDefinition*             K2Node_DynamicCast_AsAthena_Emoji_Item_Definition; // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawnAthena*                  K2Node_DynamicCast_AsFort_Player_Pawn_Athena;      // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess1;                      // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E1[0x7];                                       // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstance*                      CallFunc_GetMaterialInstance_ReturnValue;          // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               K2Node_DynamicCast_AsMaterial_Instance_Dynamic;    // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess12;                     // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_FA[0x6];                                       // 0x00FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess123;                    // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_109[0x3];                                      // 0x0109(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x010C(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x0118(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned) == 0x000008, "Wrong alignment on GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned");
static_assert(sizeof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned) == 0x0001A0, "Wrong size on GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, SpawnedParticleSysComponent) == 0x000000, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::SpawnedParticleSysComponent' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, Parameters) == 0x000008, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::Parameters' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, CallFunc_GetPlayerPawn_ReturnValue) == 0x0000C0, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, K2Node_DynamicCast_AsAthena_Emoji_Item_Definition) == 0x0000C8, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::K2Node_DynamicCast_AsAthena_Emoji_Item_Definition' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, K2Node_DynamicCast_bSuccess) == 0x0000D0, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, K2Node_DynamicCast_AsFort_Player_Pawn_Athena) == 0x0000D8, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::K2Node_DynamicCast_AsFort_Player_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, K2Node_DynamicCast_bSuccess1) == 0x0000E0, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::K2Node_DynamicCast_bSuccess1' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, CallFunc_GetMaterialInstance_ReturnValue) == 0x0000E8, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::CallFunc_GetMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, K2Node_DynamicCast_AsMaterial_Instance_Dynamic) == 0x0000F0, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::K2Node_DynamicCast_AsMaterial_Instance_Dynamic' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, K2Node_DynamicCast_bSuccess12) == 0x0000F8, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::K2Node_DynamicCast_bSuccess12' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0000F9, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, K2Node_DynamicCast_AsTexture_2D) == 0x000100, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, K2Node_DynamicCast_bSuccess123) == 0x000108, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::K2Node_DynamicCast_bSuccess123' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, CallFunc_Add_VectorVector_ReturnValue) == 0x00010C, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000118, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");

}

