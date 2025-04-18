#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CareerScreen

#include "Basic.hpp"

#include "CareerScreen_classes.hpp"
#include "CareerScreen_parameters.hpp"


namespace SDK
{

// Function CareerScreen.CareerScreen_C.ExecuteUbergraph_CareerScreen
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCareerScreen_C::ExecuteUbergraph_CareerScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CareerScreen_C", "ExecuteUbergraph_CareerScreen");

	Params::CareerScreen_C_ExecuteUbergraph_CareerScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CareerScreen.CareerScreen_C.BndEvt__PanelButton_0_K2Node_ComponentBoundEvent_71_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCareerScreen_C::BndEvt__PanelButton_0_K2Node_ComponentBoundEvent_71_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CareerScreen_C", "BndEvt__PanelButton_0_K2Node_ComponentBoundEvent_71_CommonButtonClicked__DelegateSignature");

	Params::CareerScreen_C_BndEvt__PanelButton_0_K2Node_ComponentBoundEvent_71_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CareerScreen.CareerScreen_C.BndEvt__ProfileButton_K2Node_ComponentBoundEvent_126_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCareerScreen_C::BndEvt__ProfileButton_K2Node_ComponentBoundEvent_126_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CareerScreen_C", "BndEvt__ProfileButton_K2Node_ComponentBoundEvent_126_CommonButtonClicked__DelegateSignature");

	Params::CareerScreen_C_BndEvt__ProfileButton_K2Node_ComponentBoundEvent_126_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CareerScreen.CareerScreen_C.BndEvt__ReplaysButton_K2Node_ComponentBoundEvent_54_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCareerScreen_C::BndEvt__ReplaysButton_K2Node_ComponentBoundEvent_54_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CareerScreen_C", "BndEvt__ReplaysButton_K2Node_ComponentBoundEvent_54_CommonButtonClicked__DelegateSignature");

	Params::CareerScreen_C_BndEvt__ReplaysButton_K2Node_ComponentBoundEvent_54_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CareerScreen.CareerScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCareerScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CareerScreen_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CareerScreen.CareerScreen_C.DisableHotFixedOffButtons
// (BlueprintCallable, BlueprintEvent)

void UCareerScreen_C::DisableHotFixedOffButtons()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CareerScreen_C", "DisableHotFixedOffButtons");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CareerScreen.CareerScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UCareerScreen_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CareerScreen_C", "OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CareerScreen.CareerScreen_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UCareerScreen_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CareerScreen_C", "OnDeactivated");

	UObject::ProcessEvent(Func, nullptr);
}

}

