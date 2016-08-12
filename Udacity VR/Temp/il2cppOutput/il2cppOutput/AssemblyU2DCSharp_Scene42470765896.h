#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Light
struct Light_t1596303683;
// UnityEngine.Material
struct Material_t1886596500;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Scene4
struct  Scene4_t2470765896  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject Scene4::boat_object
	GameObject_t4012695102 * ___boat_object_2;
	// UnityEngine.Light Scene4::directional_light
	Light_t1596303683 * ___directional_light_3;
	// UnityEngine.Material Scene4::ocean_material
	Material_t1886596500 * ___ocean_material_4;
	// System.Boolean Scene4::_rendering
	bool ____rendering_5;

public:
	inline static int32_t get_offset_of_boat_object_2() { return static_cast<int32_t>(offsetof(Scene4_t2470765896, ___boat_object_2)); }
	inline GameObject_t4012695102 * get_boat_object_2() const { return ___boat_object_2; }
	inline GameObject_t4012695102 ** get_address_of_boat_object_2() { return &___boat_object_2; }
	inline void set_boat_object_2(GameObject_t4012695102 * value)
	{
		___boat_object_2 = value;
		Il2CppCodeGenWriteBarrier(&___boat_object_2, value);
	}

	inline static int32_t get_offset_of_directional_light_3() { return static_cast<int32_t>(offsetof(Scene4_t2470765896, ___directional_light_3)); }
	inline Light_t1596303683 * get_directional_light_3() const { return ___directional_light_3; }
	inline Light_t1596303683 ** get_address_of_directional_light_3() { return &___directional_light_3; }
	inline void set_directional_light_3(Light_t1596303683 * value)
	{
		___directional_light_3 = value;
		Il2CppCodeGenWriteBarrier(&___directional_light_3, value);
	}

	inline static int32_t get_offset_of_ocean_material_4() { return static_cast<int32_t>(offsetof(Scene4_t2470765896, ___ocean_material_4)); }
	inline Material_t1886596500 * get_ocean_material_4() const { return ___ocean_material_4; }
	inline Material_t1886596500 ** get_address_of_ocean_material_4() { return &___ocean_material_4; }
	inline void set_ocean_material_4(Material_t1886596500 * value)
	{
		___ocean_material_4 = value;
		Il2CppCodeGenWriteBarrier(&___ocean_material_4, value);
	}

	inline static int32_t get_offset_of__rendering_5() { return static_cast<int32_t>(offsetof(Scene4_t2470765896, ____rendering_5)); }
	inline bool get__rendering_5() const { return ____rendering_5; }
	inline bool* get_address_of__rendering_5() { return &____rendering_5; }
	inline void set__rendering_5(bool value)
	{
		____rendering_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
