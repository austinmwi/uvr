#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t1886596500;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FadeEffect
struct  FadeEffect_t3898182477  : public Il2CppObject
{
public:

public:
};

struct FadeEffect_t3898182477_StaticFields
{
public:
	// System.Single FadeEffect::_fade
	float ____fade_0;
	// System.Single FadeEffect::_speed
	float ____speed_1;
	// UnityEngine.Material FadeEffect::_material
	Material_t1886596500 * ____material_2;

public:
	inline static int32_t get_offset_of__fade_0() { return static_cast<int32_t>(offsetof(FadeEffect_t3898182477_StaticFields, ____fade_0)); }
	inline float get__fade_0() const { return ____fade_0; }
	inline float* get_address_of__fade_0() { return &____fade_0; }
	inline void set__fade_0(float value)
	{
		____fade_0 = value;
	}

	inline static int32_t get_offset_of__speed_1() { return static_cast<int32_t>(offsetof(FadeEffect_t3898182477_StaticFields, ____speed_1)); }
	inline float get__speed_1() const { return ____speed_1; }
	inline float* get_address_of__speed_1() { return &____speed_1; }
	inline void set__speed_1(float value)
	{
		____speed_1 = value;
	}

	inline static int32_t get_offset_of__material_2() { return static_cast<int32_t>(offsetof(FadeEffect_t3898182477_StaticFields, ____material_2)); }
	inline Material_t1886596500 * get__material_2() const { return ____material_2; }
	inline Material_t1886596500 ** get_address_of__material_2() { return &____material_2; }
	inline void set__material_2(Material_t1886596500 * value)
	{
		____material_2 = value;
		Il2CppCodeGenWriteBarrier(&____material_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
