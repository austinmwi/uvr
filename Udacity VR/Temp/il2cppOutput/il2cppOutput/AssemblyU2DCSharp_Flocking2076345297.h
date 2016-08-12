#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Vector43525329790.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Flocking
struct  Flocking_t2076345297  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 Flocking::max_neighbors
	int32_t ___max_neighbors_2;
	// System.Single Flocking::neighborhood_radius
	float ___neighborhood_radius_3;
	// System.Single Flocking::boundary
	float ___boundary_4;
	// System.Single Flocking::avoidance
	float ___avoidance_5;
	// System.Single Flocking::alignment
	float ___alignment_6;
	// System.Single Flocking::cohesion
	float ___cohesion_7;
	// System.Single Flocking::gather
	float ___gather_8;
	// System.Single Flocking::home
	float ___home_9;
	// System.Single Flocking::lerp
	float ___lerp_10;
	// System.Int32 Flocking::update_interval
	int32_t ___update_interval_11;
	// System.Single Flocking::comparison_frequency
	float ___comparison_frequency_12;
	// System.Single Flocking::direction_frequency
	float ___direction_frequency_13;
	// System.Int32 Flocking::camera_index
	int32_t ___camera_index_14;
	// System.Boolean Flocking::attach_camera
	bool ___attach_camera_15;
	// System.Boolean Flocking::draw_neighborhood_lines
	bool ___draw_neighborhood_lines_16;
	// System.Boolean Flocking::draw_direction_lines
	bool ___draw_direction_lines_17;
	// System.Boolean Flocking::debug_origin
	bool ___debug_origin_18;
	// System.Single Flocking::velocity
	float ___velocity_19;
	// System.Single Flocking::velocity_max
	float ___velocity_max_20;
	// System.Boolean Flocking::interactive_origin
	bool ___interactive_origin_21;
	// UnityEngine.Vector3 Flocking::origin
	Vector3_t3525329789  ___origin_22;
	// UnityEngine.Vector4 Flocking::color_near
	Vector4_t3525329790  ___color_near_23;
	// UnityEngine.Vector4 Flocking::color_far
	Vector4_t3525329790  ___color_far_24;

public:
	inline static int32_t get_offset_of_max_neighbors_2() { return static_cast<int32_t>(offsetof(Flocking_t2076345297, ___max_neighbors_2)); }
	inline int32_t get_max_neighbors_2() const { return ___max_neighbors_2; }
	inline int32_t* get_address_of_max_neighbors_2() { return &___max_neighbors_2; }
	inline void set_max_neighbors_2(int32_t value)
	{
		___max_neighbors_2 = value;
	}

	inline static int32_t get_offset_of_neighborhood_radius_3() { return static_cast<int32_t>(offsetof(Flocking_t2076345297, ___neighborhood_radius_3)); }
	inline float get_neighborhood_radius_3() const { return ___neighborhood_radius_3; }
	inline float* get_address_of_neighborhood_radius_3() { return &___neighborhood_radius_3; }
	inline void set_neighborhood_radius_3(float value)
	{
		___neighborhood_radius_3 = value;
	}

	inline static int32_t get_offset_of_boundary_4() { return static_cast<int32_t>(offsetof(Flocking_t2076345297, ___boundary_4)); }
	inline float get_boundary_4() const { return ___boundary_4; }
	inline float* get_address_of_boundary_4() { return &___boundary_4; }
	inline void set_boundary_4(float value)
	{
		___boundary_4 = value;
	}

	inline static int32_t get_offset_of_avoidance_5() { return static_cast<int32_t>(offsetof(Flocking_t2076345297, ___avoidance_5)); }
	inline float get_avoidance_5() const { return ___avoidance_5; }
	inline float* get_address_of_avoidance_5() { return &___avoidance_5; }
	inline void set_avoidance_5(float value)
	{
		___avoidance_5 = value;
	}

	inline static int32_t get_offset_of_alignment_6() { return static_cast<int32_t>(offsetof(Flocking_t2076345297, ___alignment_6)); }
	inline float get_alignment_6() const { return ___alignment_6; }
	inline float* get_address_of_alignment_6() { return &___alignment_6; }
	inline void set_alignment_6(float value)
	{
		___alignment_6 = value;
	}

	inline static int32_t get_offset_of_cohesion_7() { return static_cast<int32_t>(offsetof(Flocking_t2076345297, ___cohesion_7)); }
	inline float get_cohesion_7() const { return ___cohesion_7; }
	inline float* get_address_of_cohesion_7() { return &___cohesion_7; }
	inline void set_cohesion_7(float value)
	{
		___cohesion_7 = value;
	}

	inline static int32_t get_offset_of_gather_8() { return static_cast<int32_t>(offsetof(Flocking_t2076345297, ___gather_8)); }
	inline float get_gather_8() const { return ___gather_8; }
	inline float* get_address_of_gather_8() { return &___gather_8; }
	inline void set_gather_8(float value)
	{
		___gather_8 = value;
	}

	inline static int32_t get_offset_of_home_9() { return static_cast<int32_t>(offsetof(Flocking_t2076345297, ___home_9)); }
	inline float get_home_9() const { return ___home_9; }
	inline float* get_address_of_home_9() { return &___home_9; }
	inline void set_home_9(float value)
	{
		___home_9 = value;
	}

	inline static int32_t get_offset_of_lerp_10() { return static_cast<int32_t>(offsetof(Flocking_t2076345297, ___lerp_10)); }
	inline float get_lerp_10() const { return ___lerp_10; }
	inline float* get_address_of_lerp_10() { return &___lerp_10; }
	inline void set_lerp_10(float value)
	{
		___lerp_10 = value;
	}

	inline static int32_t get_offset_of_update_interval_11() { return static_cast<int32_t>(offsetof(Flocking_t2076345297, ___update_interval_11)); }
	inline int32_t get_update_interval_11() const { return ___update_interval_11; }
	inline int32_t* get_address_of_update_interval_11() { return &___update_interval_11; }
	inline void set_update_interval_11(int32_t value)
	{
		___update_interval_11 = value;
	}

	inline static int32_t get_offset_of_comparison_frequency_12() { return static_cast<int32_t>(offsetof(Flocking_t2076345297, ___comparison_frequency_12)); }
	inline float get_comparison_frequency_12() const { return ___comparison_frequency_12; }
	inline float* get_address_of_comparison_frequency_12() { return &___comparison_frequency_12; }
	inline void set_comparison_frequency_12(float value)
	{
		___comparison_frequency_12 = value;
	}

	inline static int32_t get_offset_of_direction_frequency_13() { return static_cast<int32_t>(offsetof(Flocking_t2076345297, ___direction_frequency_13)); }
	inline float get_direction_frequency_13() const { return ___direction_frequency_13; }
	inline float* get_address_of_direction_frequency_13() { return &___direction_frequency_13; }
	inline void set_direction_frequency_13(float value)
	{
		___direction_frequency_13 = value;
	}

	inline static int32_t get_offset_of_camera_index_14() { return static_cast<int32_t>(offsetof(Flocking_t2076345297, ___camera_index_14)); }
	inline int32_t get_camera_index_14() const { return ___camera_index_14; }
	inline int32_t* get_address_of_camera_index_14() { return &___camera_index_14; }
	inline void set_camera_index_14(int32_t value)
	{
		___camera_index_14 = value;
	}

	inline static int32_t get_offset_of_attach_camera_15() { return static_cast<int32_t>(offsetof(Flocking_t2076345297, ___attach_camera_15)); }
	inline bool get_attach_camera_15() const { return ___attach_camera_15; }
	inline bool* get_address_of_attach_camera_15() { return &___attach_camera_15; }
	inline void set_attach_camera_15(bool value)
	{
		___attach_camera_15 = value;
	}

	inline static int32_t get_offset_of_draw_neighborhood_lines_16() { return static_cast<int32_t>(offsetof(Flocking_t2076345297, ___draw_neighborhood_lines_16)); }
	inline bool get_draw_neighborhood_lines_16() const { return ___draw_neighborhood_lines_16; }
	inline bool* get_address_of_draw_neighborhood_lines_16() { return &___draw_neighborhood_lines_16; }
	inline void set_draw_neighborhood_lines_16(bool value)
	{
		___draw_neighborhood_lines_16 = value;
	}

	inline static int32_t get_offset_of_draw_direction_lines_17() { return static_cast<int32_t>(offsetof(Flocking_t2076345297, ___draw_direction_lines_17)); }
	inline bool get_draw_direction_lines_17() const { return ___draw_direction_lines_17; }
	inline bool* get_address_of_draw_direction_lines_17() { return &___draw_direction_lines_17; }
	inline void set_draw_direction_lines_17(bool value)
	{
		___draw_direction_lines_17 = value;
	}

	inline static int32_t get_offset_of_debug_origin_18() { return static_cast<int32_t>(offsetof(Flocking_t2076345297, ___debug_origin_18)); }
	inline bool get_debug_origin_18() const { return ___debug_origin_18; }
	inline bool* get_address_of_debug_origin_18() { return &___debug_origin_18; }
	inline void set_debug_origin_18(bool value)
	{
		___debug_origin_18 = value;
	}

	inline static int32_t get_offset_of_velocity_19() { return static_cast<int32_t>(offsetof(Flocking_t2076345297, ___velocity_19)); }
	inline float get_velocity_19() const { return ___velocity_19; }
	inline float* get_address_of_velocity_19() { return &___velocity_19; }
	inline void set_velocity_19(float value)
	{
		___velocity_19 = value;
	}

	inline static int32_t get_offset_of_velocity_max_20() { return static_cast<int32_t>(offsetof(Flocking_t2076345297, ___velocity_max_20)); }
	inline float get_velocity_max_20() const { return ___velocity_max_20; }
	inline float* get_address_of_velocity_max_20() { return &___velocity_max_20; }
	inline void set_velocity_max_20(float value)
	{
		___velocity_max_20 = value;
	}

	inline static int32_t get_offset_of_interactive_origin_21() { return static_cast<int32_t>(offsetof(Flocking_t2076345297, ___interactive_origin_21)); }
	inline bool get_interactive_origin_21() const { return ___interactive_origin_21; }
	inline bool* get_address_of_interactive_origin_21() { return &___interactive_origin_21; }
	inline void set_interactive_origin_21(bool value)
	{
		___interactive_origin_21 = value;
	}

	inline static int32_t get_offset_of_origin_22() { return static_cast<int32_t>(offsetof(Flocking_t2076345297, ___origin_22)); }
	inline Vector3_t3525329789  get_origin_22() const { return ___origin_22; }
	inline Vector3_t3525329789 * get_address_of_origin_22() { return &___origin_22; }
	inline void set_origin_22(Vector3_t3525329789  value)
	{
		___origin_22 = value;
	}

	inline static int32_t get_offset_of_color_near_23() { return static_cast<int32_t>(offsetof(Flocking_t2076345297, ___color_near_23)); }
	inline Vector4_t3525329790  get_color_near_23() const { return ___color_near_23; }
	inline Vector4_t3525329790 * get_address_of_color_near_23() { return &___color_near_23; }
	inline void set_color_near_23(Vector4_t3525329790  value)
	{
		___color_near_23 = value;
	}

	inline static int32_t get_offset_of_color_far_24() { return static_cast<int32_t>(offsetof(Flocking_t2076345297, ___color_far_24)); }
	inline Vector4_t3525329790  get_color_far_24() const { return ___color_far_24; }
	inline Vector4_t3525329790 * get_address_of_color_far_24() { return &___color_far_24; }
	inline void set_color_far_24(Vector4_t3525329790  value)
	{
		___color_far_24 = value;
	}
};

struct Flocking_t2076345297_StaticFields
{
public:
	// UnityEngine.Vector4 Flocking::_mouse
	Vector4_t3525329790  ____mouse_25;

public:
	inline static int32_t get_offset_of__mouse_25() { return static_cast<int32_t>(offsetof(Flocking_t2076345297_StaticFields, ____mouse_25)); }
	inline Vector4_t3525329790  get__mouse_25() const { return ____mouse_25; }
	inline Vector4_t3525329790 * get_address_of__mouse_25() { return &____mouse_25; }
	inline void set__mouse_25(Vector4_t3525329790  value)
	{
		____mouse_25 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
