#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Prj_Athena_KnockGrenade

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Prj_Athena_KnockGrenade.B_Prj_Athena_KnockGrenade_C
// 0x00A8 (0x08C0 - 0x0818)
class AB_Prj_Athena_KnockGrenade_C final : public AFortProjectileBase
{
public:
	uint8                                         Pad_818[0x8];                                      // 0x0818(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0820(0x0008)(Transient, DuplicateTransient)
	class UAudioComponent*                        BeepTimer;                                         // 0x0828(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      OverlapCapsule;                                    // 0x0830(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URotatingMovementComponent*             RotatingMovement;                                  // 0x0838(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Fuse_Particle;                                     // 0x0840(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Mesh;                                              // 0x0848(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        GrenadeFuse_AudioComponent;                        // 0x0850(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Effect_Distance;                                   // 0x0858(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        P_Explosion;                                       // 0x0860(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Cue_DistantSound;                                  // 0x0868(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Cue_CloseSound;                                    // 0x0870(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Cue_GrenadeFuseSound;                              // 0x0878(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitLocation;                                       // 0x0880(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         VerticalPop;                                       // 0x088C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                              Target;                                            // 0x0890(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ImpactNormal;                                      // 0x0898(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A4[0x4];                                      // 0x08A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             BeepSound;                                         // 0x08A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitNormal;                                         // 0x08B0(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DelayBeforeExplode;                                // 0x08BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_Prj_Athena_KnockGrenade(int32 EntryPoint);
	void BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnExploded(const TArray<class AActor*>& HitActors, const TArray<struct FHitResult>& HitResults);
	void Stop_Rotation();
	void OnStop(const struct FHitResult& Hit);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void Handle_Pawn_Detach_RC();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Prj_Athena_KnockGrenade_C">();
	}
	static class AB_Prj_Athena_KnockGrenade_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Prj_Athena_KnockGrenade_C>();
	}
};
static_assert(alignof(AB_Prj_Athena_KnockGrenade_C) == 0x000008, "Wrong alignment on AB_Prj_Athena_KnockGrenade_C");
static_assert(sizeof(AB_Prj_Athena_KnockGrenade_C) == 0x0008C0, "Wrong size on AB_Prj_Athena_KnockGrenade_C");
static_assert(offsetof(AB_Prj_Athena_KnockGrenade_C, UberGraphFrame) == 0x000820, "Member 'AB_Prj_Athena_KnockGrenade_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_KnockGrenade_C, BeepTimer) == 0x000828, "Member 'AB_Prj_Athena_KnockGrenade_C::BeepTimer' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_KnockGrenade_C, OverlapCapsule) == 0x000830, "Member 'AB_Prj_Athena_KnockGrenade_C::OverlapCapsule' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_KnockGrenade_C, RotatingMovement) == 0x000838, "Member 'AB_Prj_Athena_KnockGrenade_C::RotatingMovement' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_KnockGrenade_C, Fuse_Particle) == 0x000840, "Member 'AB_Prj_Athena_KnockGrenade_C::Fuse_Particle' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_KnockGrenade_C, Mesh) == 0x000848, "Member 'AB_Prj_Athena_KnockGrenade_C::Mesh' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_KnockGrenade_C, GrenadeFuse_AudioComponent) == 0x000850, "Member 'AB_Prj_Athena_KnockGrenade_C::GrenadeFuse_AudioComponent' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_KnockGrenade_C, Effect_Distance) == 0x000858, "Member 'AB_Prj_Athena_KnockGrenade_C::Effect_Distance' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_KnockGrenade_C, P_Explosion) == 0x000860, "Member 'AB_Prj_Athena_KnockGrenade_C::P_Explosion' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_KnockGrenade_C, Cue_DistantSound) == 0x000868, "Member 'AB_Prj_Athena_KnockGrenade_C::Cue_DistantSound' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_KnockGrenade_C, Cue_CloseSound) == 0x000870, "Member 'AB_Prj_Athena_KnockGrenade_C::Cue_CloseSound' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_KnockGrenade_C, Cue_GrenadeFuseSound) == 0x000878, "Member 'AB_Prj_Athena_KnockGrenade_C::Cue_GrenadeFuseSound' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_KnockGrenade_C, HitLocation) == 0x000880, "Member 'AB_Prj_Athena_KnockGrenade_C::HitLocation' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_KnockGrenade_C, VerticalPop) == 0x00088C, "Member 'AB_Prj_Athena_KnockGrenade_C::VerticalPop' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_KnockGrenade_C, Target) == 0x000890, "Member 'AB_Prj_Athena_KnockGrenade_C::Target' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_KnockGrenade_C, ImpactNormal) == 0x000898, "Member 'AB_Prj_Athena_KnockGrenade_C::ImpactNormal' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_KnockGrenade_C, BeepSound) == 0x0008A8, "Member 'AB_Prj_Athena_KnockGrenade_C::BeepSound' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_KnockGrenade_C, HitNormal) == 0x0008B0, "Member 'AB_Prj_Athena_KnockGrenade_C::HitNormal' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_KnockGrenade_C, DelayBeforeExplode) == 0x0008BC, "Member 'AB_Prj_Athena_KnockGrenade_C::DelayBeforeExplode' has a wrong offset!");

}

