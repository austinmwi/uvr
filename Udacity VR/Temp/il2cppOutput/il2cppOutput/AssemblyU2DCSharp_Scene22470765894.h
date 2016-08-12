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

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Scene2
struct  Scene2_t2470765894  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Material Scene2::ocean_material
	Material_t1886596500 * ___ocean_material_2;
	// UnityEngine.Material Scene2::cloud_material
	Material_t1886596500 * ___cloud_material_3;

public:
	inline static int32_t get_offset_of_ocean_material_2() { return static_cast<int32_t>(offsetof(Scene2_t2470765894, ___ocean_material_2)); }
	inline Material_t1886596500 * get_ocean_material_2() const { return ___ocean_material_2; }
	inline Material_t1886596500 ** get_address_of_ocean_material_2() { return &___ocean_material_2; }
	inline void set_ocean_material_2(Material_t1886596500 * value)
	{
		___ocean_material_2 = value;
		Il2CppCodeGenWriteBarrier(&___ocean_material_2, value);
	}

	inline static int32_t get_offset_of_cloud_material_3() { return static_cast<int32_t>(offsetof(Scene2_t2470765894, ___cloud_material_3)); }
	inline Material_t1886596500 * get_cloud_material_3() const { return ___cloud_material_3; }
	inline Material_t1886596500 ** get_address_of_cloud_material_3() { return &___cloud_material_3; }
	inline void set_cloud_material_3(Material_t1886596500 * value)
	{
		___cloud_material_3 = value;
		Il2CppCodeGenWriteBarrier(&___cloud_material_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
