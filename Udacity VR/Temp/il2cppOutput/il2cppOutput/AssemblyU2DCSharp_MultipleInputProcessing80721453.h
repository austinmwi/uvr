#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.EventSystems.BaseInputModule[]
struct BaseInputModuleU5BU5D_t667390433;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MultipleInputProcessing
struct  MultipleInputProcessing_t80721453  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.EventSystems.BaseInputModule[] MultipleInputProcessing::_module
	BaseInputModuleU5BU5D_t667390433* ____module_2;

public:
	inline static int32_t get_offset_of__module_2() { return static_cast<int32_t>(offsetof(MultipleInputProcessing_t80721453, ____module_2)); }
	inline BaseInputModuleU5BU5D_t667390433* get__module_2() const { return ____module_2; }
	inline BaseInputModuleU5BU5D_t667390433** get_address_of__module_2() { return &____module_2; }
	inline void set__module_2(BaseInputModuleU5BU5D_t667390433* value)
	{
		____module_2 = value;
		Il2CppCodeGenWriteBarrier(&____module_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
