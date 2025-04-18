#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Prj_Zapper2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function B_Prj_Zapper2.B_Prj_Zapper2_C.ExecuteUbergraph_B_Prj_Zapper2
// 0x0160 (0x0160 - 0x0000)
struct B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0004(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_12[0x2];                                       // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_Damage;                               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UDamageType*                      K2Node_Event_DamageType;                           // 0x0018(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                            K2Node_Event_InstigatedBy;                         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_DamageCauser;                         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_Hit;                                  // 0x0030(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_BA[0x2];                                       // 0x00BA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x00C4(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x00D0(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x00DC(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x00E8(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F4[0x4];                                       // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0108(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0120(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x012C(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0138(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue1;     // 0x0144(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0150(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2) == 0x000008, "Wrong alignment on B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2");
static_assert(sizeof(B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2) == 0x000160, "Wrong size on B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2");
static_assert(offsetof(B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2, EntryPoint) == 0x000000, "Member 'B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000004, "Member 'B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2, Temp_bool_Has_Been_Initd_Variable) == 0x000010, "Member 'B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2, Temp_bool_IsClosed_Variable) == 0x000011, "Member 'B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2, K2Node_Event_Damage) == 0x000014, "Member 'B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2::K2Node_Event_Damage' has a wrong offset!");
static_assert(offsetof(B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2, K2Node_Event_DamageType) == 0x000018, "Member 'B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2::K2Node_Event_DamageType' has a wrong offset!");
static_assert(offsetof(B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2, K2Node_Event_InstigatedBy) == 0x000020, "Member 'B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2::K2Node_Event_InstigatedBy' has a wrong offset!");
static_assert(offsetof(B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2, K2Node_Event_DamageCauser) == 0x000028, "Member 'B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2::K2Node_Event_DamageCauser' has a wrong offset!");
static_assert(offsetof(B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2, K2Node_Event_Hit) == 0x000030, "Member 'B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2::K2Node_Event_Hit' has a wrong offset!");
static_assert(offsetof(B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2, CallFunc_BreakHitResult_bBlockingHit) == 0x0000B8, "Member 'B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2, CallFunc_BreakHitResult_bInitialOverlap) == 0x0000B9, "Member 'B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2, CallFunc_BreakHitResult_Time) == 0x0000BC, "Member 'B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2, CallFunc_BreakHitResult_Distance) == 0x0000C0, "Member 'B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2, CallFunc_BreakHitResult_Location) == 0x0000C4, "Member 'B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2, CallFunc_BreakHitResult_ImpactPoint) == 0x0000D0, "Member 'B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2, CallFunc_BreakHitResult_Normal) == 0x0000DC, "Member 'B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2, CallFunc_BreakHitResult_ImpactNormal) == 0x0000E8, "Member 'B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2, CallFunc_BreakHitResult_PhysMat) == 0x0000F8, "Member 'B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2, CallFunc_BreakHitResult_HitActor) == 0x000100, "Member 'B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2, CallFunc_BreakHitResult_HitComponent) == 0x000108, "Member 'B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2, CallFunc_BreakHitResult_HitBoneName) == 0x000110, "Member 'B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2, CallFunc_BreakHitResult_HitItem) == 0x000118, "Member 'B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2, CallFunc_BreakHitResult_FaceIndex) == 0x00011C, "Member 'B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2, CallFunc_BreakHitResult_TraceStart) == 0x000120, "Member 'B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2, CallFunc_BreakHitResult_TraceEnd) == 0x00012C, "Member 'B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000138, "Member 'B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2, CallFunc_K2_GetComponentLocation_ReturnValue1) == 0x000144, "Member 'B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2::CallFunc_K2_GetComponentLocation_ReturnValue1' has a wrong offset!");
static_assert(offsetof(B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2, CallFunc_Add_VectorVector_ReturnValue) == 0x000150, "Member 'B_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");

// Function B_Prj_Zapper2.B_Prj_Zapper2_C.OnStop
// 0x0088 (0x0088 - 0x0000)
struct B_Prj_Zapper2_C_OnStop final
{
public:
	struct FHitResult                             Hit;                                               // 0x0000(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(B_Prj_Zapper2_C_OnStop) == 0x000008, "Wrong alignment on B_Prj_Zapper2_C_OnStop");
static_assert(sizeof(B_Prj_Zapper2_C_OnStop) == 0x000088, "Wrong size on B_Prj_Zapper2_C_OnStop");
static_assert(offsetof(B_Prj_Zapper2_C_OnStop, Hit) == 0x000000, "Member 'B_Prj_Zapper2_C_OnStop::Hit' has a wrong offset!");

// Function B_Prj_Zapper2.B_Prj_Zapper2_C.ReceiveAnyDamage
// 0x0020 (0x0020 - 0x0000)
struct B_Prj_Zapper2_C_ReceiveAnyDamage final
{
public:
	float                                         Damage;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class UDamageType*                      DamageType;                                        // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                            InstigatedBy;                                      // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 DamageCauser;                                      // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Prj_Zapper2_C_ReceiveAnyDamage) == 0x000008, "Wrong alignment on B_Prj_Zapper2_C_ReceiveAnyDamage");
static_assert(sizeof(B_Prj_Zapper2_C_ReceiveAnyDamage) == 0x000020, "Wrong size on B_Prj_Zapper2_C_ReceiveAnyDamage");
static_assert(offsetof(B_Prj_Zapper2_C_ReceiveAnyDamage, Damage) == 0x000000, "Member 'B_Prj_Zapper2_C_ReceiveAnyDamage::Damage' has a wrong offset!");
static_assert(offsetof(B_Prj_Zapper2_C_ReceiveAnyDamage, DamageType) == 0x000008, "Member 'B_Prj_Zapper2_C_ReceiveAnyDamage::DamageType' has a wrong offset!");
static_assert(offsetof(B_Prj_Zapper2_C_ReceiveAnyDamage, InstigatedBy) == 0x000010, "Member 'B_Prj_Zapper2_C_ReceiveAnyDamage::InstigatedBy' has a wrong offset!");
static_assert(offsetof(B_Prj_Zapper2_C_ReceiveAnyDamage, DamageCauser) == 0x000018, "Member 'B_Prj_Zapper2_C_ReceiveAnyDamage::DamageCauser' has a wrong offset!");

// Function B_Prj_Zapper2.B_Prj_Zapper2_C.OnRep_Impact Location
// 0x0008 (0x0008 - 0x0000)
struct B_Prj_Zapper2_C_OnRep_Impact_Location final
{
public:
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Prj_Zapper2_C_OnRep_Impact_Location) == 0x000008, "Wrong alignment on B_Prj_Zapper2_C_OnRep_Impact_Location");
static_assert(sizeof(B_Prj_Zapper2_C_OnRep_Impact_Location) == 0x000008, "Wrong size on B_Prj_Zapper2_C_OnRep_Impact_Location");
static_assert(offsetof(B_Prj_Zapper2_C_OnRep_Impact_Location, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000000, "Member 'B_Prj_Zapper2_C_OnRep_Impact_Location::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");

}

