#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ButtonStyleMinusHighlight

#include "Basic.hpp"

#include "ButtonStyleMinusMediumTransparentNoCues_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ButtonStyle-Highlight.ButtonStyle-Highlight_C
// 0x0000 (0x04F0 - 0x04F0)
class UButtonStyleMinusHighlight_C final : public UButtonStyleMinusMediumTransparentNoCues_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ButtonStyle-Highlight_C">();
	}
	static class UButtonStyleMinusHighlight_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UButtonStyleMinusHighlight_C>();
	}
};
static_assert(alignof(UButtonStyleMinusHighlight_C) == 0x000008, "Wrong alignment on UButtonStyleMinusHighlight_C");
static_assert(sizeof(UButtonStyleMinusHighlight_C) == 0x0004F0, "Wrong size on UButtonStyleMinusHighlight_C");

}

