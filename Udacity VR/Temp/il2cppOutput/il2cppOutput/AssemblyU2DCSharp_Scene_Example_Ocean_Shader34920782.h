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

// Scene_Example_Ocean_Shader
struct  Scene_Example_Ocean_Shader_t34920782  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Material Scene_Example_Ocean_Shader::ocean_material
	Material_t1886596500 * ___ocean_material_2;

public:
	inline static int32_t get_offset_of_ocean_material_2() { return static_cast<int32_t>(offsetof(Scene_Example_Ocean_Shader_t34920782, ___ocean_material_2)); }
	inline Material_t1886596500 * get_ocean_material_2() const { return ___ocean_material_2; }
	inline Material_t1886596500 ** get_address_of_ocean_material_2() { return &___ocean_material_2; }
	inline void set_ocean_material_2(Material_t1886596500 * value)
	{
		___ocean_material_2 = value;
		Il2CppCodeGenWriteBarrier(&___ocean_material_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
