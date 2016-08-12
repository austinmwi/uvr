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
// UnityEngine.Material
struct Material_t1886596500;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector43525329790.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Scene0
struct  Scene0_t2470765892  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject Scene0::main_object
	GameObject_t4012695102 * ___main_object_2;
	// UnityEngine.GameObject Scene0::seat_object
	GameObject_t4012695102 * ___seat_object_3;
	// UnityEngine.GameObject Scene0::boat_object
	GameObject_t4012695102 * ___boat_object_4;
	// UnityEngine.Material Scene0::ocean_material
	Material_t1886596500 * ___ocean_material_5;
	// UnityEngine.Material Scene0::ocean_collision_material
	Material_t1886596500 * ___ocean_collision_material_6;
	// System.Single Scene0::animation_speed
	float ___animation_speed_7;
	// System.Single Scene0::animation_scale
	float ___animation_scale_8;
	// UnityEngine.Vector4 Scene0::normal
	Vector4_t3525329790  ___normal_9;

public:
	inline static int32_t get_offset_of_main_object_2() { return static_cast<int32_t>(offsetof(Scene0_t2470765892, ___main_object_2)); }
	inline GameObject_t4012695102 * get_main_object_2() const { return ___main_object_2; }
	inline GameObject_t4012695102 ** get_address_of_main_object_2() { return &___main_object_2; }
	inline void set_main_object_2(GameObject_t4012695102 * value)
	{
		___main_object_2 = value;
		Il2CppCodeGenWriteBarrier(&___main_object_2, value);
	}

	inline static int32_t get_offset_of_seat_object_3() { return static_cast<int32_t>(offsetof(Scene0_t2470765892, ___seat_object_3)); }
	inline GameObject_t4012695102 * get_seat_object_3() const { return ___seat_object_3; }
	inline GameObject_t4012695102 ** get_address_of_seat_object_3() { return &___seat_object_3; }
	inline void set_seat_object_3(GameObject_t4012695102 * value)
	{
		___seat_object_3 = value;
		Il2CppCodeGenWriteBarrier(&___seat_object_3, value);
	}

	inline static int32_t get_offset_of_boat_object_4() { return static_cast<int32_t>(offsetof(Scene0_t2470765892, ___boat_object_4)); }
	inline GameObject_t4012695102 * get_boat_object_4() const { return ___boat_object_4; }
	inline GameObject_t4012695102 ** get_address_of_boat_object_4() { return &___boat_object_4; }
	inline void set_boat_object_4(GameObject_t4012695102 * value)
	{
		___boat_object_4 = value;
		Il2CppCodeGenWriteBarrier(&___boat_object_4, value);
	}

	inline static int32_t get_offset_of_ocean_material_5() { return static_cast<int32_t>(offsetof(Scene0_t2470765892, ___ocean_material_5)); }
	inline Material_t1886596500 * get_ocean_material_5() const { return ___ocean_material_5; }
	inline Material_t1886596500 ** get_address_of_ocean_material_5() { return &___ocean_material_5; }
	inline void set_ocean_material_5(Material_t1886596500 * value)
	{
		___ocean_material_5 = value;
		Il2CppCodeGenWriteBarrier(&___ocean_material_5, value);
	}

	inline static int32_t get_offset_of_ocean_collision_material_6() { return static_cast<int32_t>(offsetof(Scene0_t2470765892, ___ocean_collision_material_6)); }
	inline Material_t1886596500 * get_ocean_collision_material_6() const { return ___ocean_collision_material_6; }
	inline Material_t1886596500 ** get_address_of_ocean_collision_material_6() { return &___ocean_collision_material_6; }
	inline void set_ocean_collision_material_6(Material_t1886596500 * value)
	{
		___ocean_collision_material_6 = value;
		Il2CppCodeGenWriteBarrier(&___ocean_collision_material_6, value);
	}

	inline static int32_t get_offset_of_animation_speed_7() { return static_cast<int32_t>(offsetof(Scene0_t2470765892, ___animation_speed_7)); }
	inline float get_animation_speed_7() const { return ___animation_speed_7; }
	inline float* get_address_of_animation_speed_7() { return &___animation_speed_7; }
	inline void set_animation_speed_7(float value)
	{
		___animation_speed_7 = value;
	}

	inline static int32_t get_offset_of_animation_scale_8() { return static_cast<int32_t>(offsetof(Scene0_t2470765892, ___animation_scale_8)); }
	inline float get_animation_scale_8() const { return ___animation_scale_8; }
	inline float* get_address_of_animation_scale_8() { return &___animation_scale_8; }
	inline void set_animation_scale_8(float value)
	{
		___animation_scale_8 = value;
	}

	inline static int32_t get_offset_of_normal_9() { return static_cast<int32_t>(offsetof(Scene0_t2470765892, ___normal_9)); }
	inline Vector4_t3525329790  get_normal_9() const { return ___normal_9; }
	inline Vector4_t3525329790 * get_address_of_normal_9() { return &___normal_9; }
	inline void set_normal_9(Vector4_t3525329790  value)
	{
		___normal_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
