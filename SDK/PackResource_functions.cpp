#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PackResource

#include "Basic.hpp"

#include "PackResource_classes.hpp"
#include "PackResource_parameters.hpp"


namespace SDK
{

// Function PackResource.PackResource_C.ExecuteUbergraph_PackResource
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPackResource_C::ExecuteUbergraph_PackResource(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PackResource_C", "ExecuteUbergraph_PackResource");

	Params::PackResource_C_ExecuteUbergraph_PackResource Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PackResource.PackResource_C.On Material Change
// (BlueprintCallable, BlueprintEvent)

void UPackResource_C::On_Material_Change()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PackResource_C", "On Material Change");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PackResource.PackResource_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPackResource_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PackResource_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PackResource.PackResource_C.UpdateCount
// (Public, BlueprintCallable, BlueprintEvent)

void UPackResource_C::UpdateCount()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PackResource_C", "UpdateCount");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PackResource.PackResource_C.UpdateType
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortResourceType                       Param_ResourceType                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPackResource_C::UpdateType(EFortResourceType Param_ResourceType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PackResource_C", "UpdateType");

	Params::PackResource_C_UpdateType Parms{};

	Parms.Param_ResourceType = Param_ResourceType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PackResource.PackResource_C.TryUpdateBackground
// (Private, BlueprintCallable, BlueprintEvent)

void UPackResource_C::TryUpdateBackground()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PackResource_C", "TryUpdateBackground");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PackResource.PackResource_C.TryUpdateCount
// (Private, BlueprintCallable, BlueprintEvent)

void UPackResource_C::TryUpdateCount()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PackResource_C", "TryUpdateCount");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PackResource.PackResource_C.SetImageSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    UseLargeIcon                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPackResource_C::SetImageSize(bool UseLargeIcon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PackResource_C", "SetImageSize");

	Params::PackResource_C_SetImageSize Parms{};

	Parms.UseLargeIcon = UseLargeIcon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PackResource.PackResource_C.OnTouchStarted
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    InTouchEvent                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UPackResource_C::OnTouchStarted(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PackResource_C", "OnTouchStarted");

	Params::PackResource_C_OnTouchStarted Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InTouchEvent = std::move(InTouchEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function PackResource.PackResource_C.Change Material
// (Public, BlueprintCallable, BlueprintEvent)

void UPackResource_C::Change_Material()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PackResource_C", "Change Material");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PackResource.PackResource_C.RefreshSmallerCountLayout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPackResource_C::RefreshSmallerCountLayout()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PackResource_C", "RefreshSmallerCountLayout");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PackResource.PackResource_C.RefreshLargerCountLayout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPackResource_C::RefreshLargerCountLayout()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PackResource_C", "RefreshLargerCountLayout");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PackResource.PackResource_C.GetCountOpacity
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor                      SlateColor                                             (Parm, OutParm)

void UPackResource_C::GetCountOpacity(struct FSlateColor* SlateColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PackResource_C", "GetCountOpacity");

	Params::PackResource_C_GetCountOpacity Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SlateColor != nullptr)
		*SlateColor = std::move(Parms.SlateColor);
}

}

