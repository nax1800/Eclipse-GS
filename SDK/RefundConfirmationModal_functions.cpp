#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RefundConfirmationModal

#include "Basic.hpp"

#include "RefundConfirmationModal_classes.hpp"
#include "RefundConfirmationModal_parameters.hpp"


namespace SDK
{

// Function RefundConfirmationModal.RefundConfirmationModal_C.ExecuteUbergraph_RefundConfirmationModal
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URefundConfirmationModal_C::ExecuteUbergraph_RefundConfirmationModal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RefundConfirmationModal_C", "ExecuteUbergraph_RefundConfirmationModal");

	Params::RefundConfirmationModal_C_ExecuteUbergraph_RefundConfirmationModal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RefundConfirmationModal.RefundConfirmationModal_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URefundConfirmationModal_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RefundConfirmationModal_C", "PreConstruct");

	Params::RefundConfirmationModal_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

