#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;
// UnityEngine.Material
struct Material_t1886596500;
// Waypoint[]
struct WaypointU5BU5D_t2459722300;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Waypoint
struct  Waypoint_t765160481  : public MonoBehaviour_t3012272455
{
public:
	// System.Boolean Waypoint::occupied
	bool ___occupied_2;
	// System.Boolean Waypoint::active
	bool ___active_3;
	// System.Boolean Waypoint::focused
	bool ___focused_4;
	// System.Boolean Waypoint::triggered
	bool ___triggered_5;
	// UnityEngine.Color Waypoint::active_color
	Color_t1588175760  ___active_color_6;
	// UnityEngine.Color Waypoint::hilight_color
	Color_t1588175760  ___hilight_color_7;
	// UnityEngine.Color Waypoint::disabled_color
	Color_t1588175760  ___disabled_color_8;
	// System.Single Waypoint::animation_scale
	float ___animation_scale_9;
	// System.Single Waypoint::animation_speed
	float ___animation_speed_10;
	// UnityEngine.Vector3 Waypoint::_origional_scale
	Vector3_t3525329789  ____origional_scale_11;
	// System.Single Waypoint::_hilight
	float ____hilight_12;
	// System.Single Waypoint::_hilight_fade_speed
	float ____hilight_fade_speed_13;
	// UnityEngine.Rigidbody Waypoint::rigid_body
	Rigidbody_t1972007546 * ___rigid_body_14;
	// UnityEngine.Material Waypoint::_material
	Material_t1886596500 * ____material_15;
	// UnityEngine.Vector3 Waypoint::position
	Vector3_t3525329789  ___position_16;
	// Waypoint[] Waypoint::neighborhood
	WaypointU5BU5D_t2459722300* ___neighborhood_17;

public:
	inline static int32_t get_offset_of_occupied_2() { return static_cast<int32_t>(offsetof(Waypoint_t765160481, ___occupied_2)); }
	inline bool get_occupied_2() const { return ___occupied_2; }
	inline bool* get_address_of_occupied_2() { return &___occupied_2; }
	inline void set_occupied_2(bool value)
	{
		___occupied_2 = value;
	}

	inline static int32_t get_offset_of_active_3() { return static_cast<int32_t>(offsetof(Waypoint_t765160481, ___active_3)); }
	inline bool get_active_3() const { return ___active_3; }
	inline bool* get_address_of_active_3() { return &___active_3; }
	inline void set_active_3(bool value)
	{
		___active_3 = value;
	}

	inline static int32_t get_offset_of_focused_4() { return static_cast<int32_t>(offsetof(Waypoint_t765160481, ___focused_4)); }
	inline bool get_focused_4() const { return ___focused_4; }
	inline bool* get_address_of_focused_4() { return &___focused_4; }
	inline void set_focused_4(bool value)
	{
		___focused_4 = value;
	}

	inline static int32_t get_offset_of_triggered_5() { return static_cast<int32_t>(offsetof(Waypoint_t765160481, ___triggered_5)); }
	inline bool get_triggered_5() const { return ___triggered_5; }
	inline bool* get_address_of_triggered_5() { return &___triggered_5; }
	inline void set_triggered_5(bool value)
	{
		___triggered_5 = value;
	}

	inline static int32_t get_offset_of_active_color_6() { return static_cast<int32_t>(offsetof(Waypoint_t765160481, ___active_color_6)); }
	inline Color_t1588175760  get_active_color_6() const { return ___active_color_6; }
	inline Color_t1588175760 * get_address_of_active_color_6() { return &___active_color_6; }
	inline void set_active_color_6(Color_t1588175760  value)
	{
		___active_color_6 = value;
	}

	inline static int32_t get_offset_of_hilight_color_7() { return static_cast<int32_t>(offsetof(Waypoint_t765160481, ___hilight_color_7)); }
	inline Color_t1588175760  get_hilight_color_7() const { return ___hilight_color_7; }
	inline Color_t1588175760 * get_address_of_hilight_color_7() { return &___hilight_color_7; }
	inline void set_hilight_color_7(Color_t1588175760  value)
	{
		___hilight_color_7 = value;
	}

	inline static int32_t get_offset_of_disabled_color_8() { return static_cast<int32_t>(offsetof(Waypoint_t765160481, ___disabled_color_8)); }
	inline Color_t1588175760  get_disabled_color_8() const { return ___disabled_color_8; }
	inline Color_t1588175760 * get_address_of_disabled_color_8() { return &___disabled_color_8; }
	inline void set_disabled_color_8(Color_t1588175760  value)
	{
		___disabled_color_8 = value;
	}

	inline static int32_t get_offset_of_animation_scale_9() { return static_cast<int32_t>(offsetof(Waypoint_t765160481, ___animation_scale_9)); }
	inline float get_animation_scale_9() const { return ___animation_scale_9; }
	inline float* get_address_of_animation_scale_9() { return &___animation_scale_9; }
	inline void set_animation_scale_9(float value)
	{
		___animation_scale_9 = value;
	}

	inline static int32_t get_offset_of_animation_speed_10() { return static_cast<int32_t>(offsetof(Waypoint_t765160481, ___animation_speed_10)); }
	inline float get_animation_speed_10() const { return ___animation_speed_10; }
	inline float* get_address_of_animation_speed_10() { return &___animation_speed_10; }
	inline void set_animation_speed_10(float value)
	{
		___animation_speed_10 = value;
	}

	inline static int32_t get_offset_of__origional_scale_11() { return static_cast<int32_t>(offsetof(Waypoint_t765160481, ____origional_scale_11)); }
	inline Vector3_t3525329789  get__origional_scale_11() const { return ____origional_scale_11; }
	inline Vector3_t3525329789 * get_address_of__origional_scale_11() { return &____origional_scale_11; }
	inline void set__origional_scale_11(Vector3_t3525329789  value)
	{
		____origional_scale_11 = value;
	}

	inline static int32_t get_offset_of__hilight_12() { return static_cast<int32_t>(offsetof(Waypoint_t765160481, ____hilight_12)); }
	inline float get__hilight_12() const { return ____hilight_12; }
	inline float* get_address_of__hilight_12() { return &____hilight_12; }
	inline void set__hilight_12(float value)
	{
		____hilight_12 = value;
	}

	inline static int32_t get_offset_of__hilight_fade_speed_13() { return static_cast<int32_t>(offsetof(Waypoint_t765160481, ____hilight_fade_speed_13)); }
	inline float get__hilight_fade_speed_13() const { return ____hilight_fade_speed_13; }
	inline float* get_address_of__hilight_fade_speed_13() { return &____hilight_fade_speed_13; }
	inline void set__hilight_fade_speed_13(float value)
	{
		____hilight_fade_speed_13 = value;
	}

	inline static int32_t get_offset_of_rigid_body_14() { return static_cast<int32_t>(offsetof(Waypoint_t765160481, ___rigid_body_14)); }
	inline Rigidbody_t1972007546 * get_rigid_body_14() const { return ___rigid_body_14; }
	inline Rigidbody_t1972007546 ** get_address_of_rigid_body_14() { return &___rigid_body_14; }
	inline void set_rigid_body_14(Rigidbody_t1972007546 * value)
	{
		___rigid_body_14 = value;
		Il2CppCodeGenWriteBarrier(&___rigid_body_14, value);
	}

	inline static int32_t get_offset_of__material_15() { return static_cast<int32_t>(offsetof(Waypoint_t765160481, ____material_15)); }
	inline Material_t1886596500 * get__material_15() const { return ____material_15; }
	inline Material_t1886596500 ** get_address_of__material_15() { return &____material_15; }
	inline void set__material_15(Material_t1886596500 * value)
	{
		____material_15 = value;
		Il2CppCodeGenWriteBarrier(&____material_15, value);
	}

	inline static int32_t get_offset_of_position_16() { return static_cast<int32_t>(offsetof(Waypoint_t765160481, ___position_16)); }
	inline Vector3_t3525329789  get_position_16() const { return ___position_16; }
	inline Vector3_t3525329789 * get_address_of_position_16() { return &___position_16; }
	inline void set_position_16(Vector3_t3525329789  value)
	{
		___position_16 = value;
	}

	inline static int32_t get_offset_of_neighborhood_17() { return static_cast<int32_t>(offsetof(Waypoint_t765160481, ___neighborhood_17)); }
	inline WaypointU5BU5D_t2459722300* get_neighborhood_17() const { return ___neighborhood_17; }
	inline WaypointU5BU5D_t2459722300** get_address_of_neighborhood_17() { return &___neighborhood_17; }
	inline void set_neighborhood_17(WaypointU5BU5D_t2459722300* value)
	{
		___neighborhood_17 = value;
		Il2CppCodeGenWriteBarrier(&___neighborhood_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
