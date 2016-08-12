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
// System.Int32[,]
struct Int32U5BU2CU5D_t1809983123;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3227571696;
// System.Single[]
struct SingleU5BU5D_t1219431280;

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Vector43525329790.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Flock
struct  Flock_t67973745  : public Il2CppObject
{
public:

public:
};

struct Flock_t67973745_StaticFields
{
public:
	// UnityEngine.Material Flock::_material
	Material_t1886596500 * ____material_3;
	// System.Int32[,] Flock::vertex_indices
	Int32U5BU2CU5D_t1809983123* ___vertex_indices_4;
	// UnityEngine.Vector3[] Flock::vertex_line_directions
	Vector3U5BU5D_t3227571696* ___vertex_line_directions_5;
	// System.Single[] Flock::velocity
	SingleU5BU5D_t1219431280* ___velocity_6;
	// UnityEngine.Vector3[] Flock::prior_position
	Vector3U5BU5D_t3227571696* ___prior_position_7;
	// UnityEngine.Vector3[] Flock::position
	Vector3U5BU5D_t3227571696* ___position_8;
	// UnityEngine.Vector3[] Flock::prior_direction
	Vector3U5BU5D_t3227571696* ___prior_direction_9;
	// UnityEngine.Vector3[] Flock::direction
	Vector3U5BU5D_t3227571696* ___direction_10;
	// UnityEngine.Vector3[] Flock::direction_avoidance
	Vector3U5BU5D_t3227571696* ___direction_avoidance_11;
	// UnityEngine.Vector3[] Flock::direction_alignment
	Vector3U5BU5D_t3227571696* ___direction_alignment_12;
	// UnityEngine.Vector3[] Flock::direction_neighborhood
	Vector3U5BU5D_t3227571696* ___direction_neighborhood_13;
	// UnityEngine.Vector3 Flock::center_of_flock
	Vector3_t3525329789  ___center_of_flock_14;
	// UnityEngine.Vector4 Flock::color_near
	Vector4_t3525329790  ___color_near_15;
	// UnityEngine.Vector4 Flock::color_far
	Vector4_t3525329790  ___color_far_16;
	// UnityEngine.Vector4 Flock::mouse
	Vector4_t3525329790  ___mouse_17;
	// System.Int32 Flock::max_neighbors
	int32_t ___max_neighbors_18;
	// System.Single Flock::neighborhood_radius
	float ___neighborhood_radius_19;
	// System.Single Flock::boundary
	float ___boundary_20;
	// System.Single Flock::avoidance
	float ___avoidance_21;
	// System.Single Flock::alignment
	float ___alignment_22;
	// System.Single Flock::cohesion
	float ___cohesion_23;
	// System.Single Flock::gather
	float ___gather_24;
	// System.Single Flock::home
	float ___home_25;
	// System.Single Flock::lerp
	float ___lerp_26;
	// System.Single Flock::velocity_multiplier
	float ___velocity_multiplier_27;
	// System.Single Flock::velocity_max
	float ___velocity_max_28;
	// System.Int32 Flock::update_interval
	int32_t ___update_interval_29;
	// System.Single Flock::comparison_frequency
	float ___comparison_frequency_30;
	// System.Single Flock::direction_frequency
	float ___direction_frequency_31;
	// System.Int32 Flock::camera_index
	int32_t ___camera_index_32;
	// System.Boolean Flock::attach_camera
	bool ___attach_camera_33;
	// System.Boolean Flock::draw_neighborhood_lines
	bool ___draw_neighborhood_lines_34;
	// System.Boolean Flock::draw_direction_lines
	bool ___draw_direction_lines_35;
	// System.Boolean Flock::debug_origin
	bool ___debug_origin_36;
	// System.Boolean Flock::interactive_origin
	bool ___interactive_origin_37;
	// UnityEngine.Vector3 Flock::origin
	Vector3_t3525329789  ___origin_38;

public:
	inline static int32_t get_offset_of__material_3() { return static_cast<int32_t>(offsetof(Flock_t67973745_StaticFields, ____material_3)); }
	inline Material_t1886596500 * get__material_3() const { return ____material_3; }
	inline Material_t1886596500 ** get_address_of__material_3() { return &____material_3; }
	inline void set__material_3(Material_t1886596500 * value)
	{
		____material_3 = value;
		Il2CppCodeGenWriteBarrier(&____material_3, value);
	}

	inline static int32_t get_offset_of_vertex_indices_4() { return static_cast<int32_t>(offsetof(Flock_t67973745_StaticFields, ___vertex_indices_4)); }
	inline Int32U5BU2CU5D_t1809983123* get_vertex_indices_4() const { return ___vertex_indices_4; }
	inline Int32U5BU2CU5D_t1809983123** get_address_of_vertex_indices_4() { return &___vertex_indices_4; }
	inline void set_vertex_indices_4(Int32U5BU2CU5D_t1809983123* value)
	{
		___vertex_indices_4 = value;
		Il2CppCodeGenWriteBarrier(&___vertex_indices_4, value);
	}

	inline static int32_t get_offset_of_vertex_line_directions_5() { return static_cast<int32_t>(offsetof(Flock_t67973745_StaticFields, ___vertex_line_directions_5)); }
	inline Vector3U5BU5D_t3227571696* get_vertex_line_directions_5() const { return ___vertex_line_directions_5; }
	inline Vector3U5BU5D_t3227571696** get_address_of_vertex_line_directions_5() { return &___vertex_line_directions_5; }
	inline void set_vertex_line_directions_5(Vector3U5BU5D_t3227571696* value)
	{
		___vertex_line_directions_5 = value;
		Il2CppCodeGenWriteBarrier(&___vertex_line_directions_5, value);
	}

	inline static int32_t get_offset_of_velocity_6() { return static_cast<int32_t>(offsetof(Flock_t67973745_StaticFields, ___velocity_6)); }
	inline SingleU5BU5D_t1219431280* get_velocity_6() const { return ___velocity_6; }
	inline SingleU5BU5D_t1219431280** get_address_of_velocity_6() { return &___velocity_6; }
	inline void set_velocity_6(SingleU5BU5D_t1219431280* value)
	{
		___velocity_6 = value;
		Il2CppCodeGenWriteBarrier(&___velocity_6, value);
	}

	inline static int32_t get_offset_of_prior_position_7() { return static_cast<int32_t>(offsetof(Flock_t67973745_StaticFields, ___prior_position_7)); }
	inline Vector3U5BU5D_t3227571696* get_prior_position_7() const { return ___prior_position_7; }
	inline Vector3U5BU5D_t3227571696** get_address_of_prior_position_7() { return &___prior_position_7; }
	inline void set_prior_position_7(Vector3U5BU5D_t3227571696* value)
	{
		___prior_position_7 = value;
		Il2CppCodeGenWriteBarrier(&___prior_position_7, value);
	}

	inline static int32_t get_offset_of_position_8() { return static_cast<int32_t>(offsetof(Flock_t67973745_StaticFields, ___position_8)); }
	inline Vector3U5BU5D_t3227571696* get_position_8() const { return ___position_8; }
	inline Vector3U5BU5D_t3227571696** get_address_of_position_8() { return &___position_8; }
	inline void set_position_8(Vector3U5BU5D_t3227571696* value)
	{
		___position_8 = value;
		Il2CppCodeGenWriteBarrier(&___position_8, value);
	}

	inline static int32_t get_offset_of_prior_direction_9() { return static_cast<int32_t>(offsetof(Flock_t67973745_StaticFields, ___prior_direction_9)); }
	inline Vector3U5BU5D_t3227571696* get_prior_direction_9() const { return ___prior_direction_9; }
	inline Vector3U5BU5D_t3227571696** get_address_of_prior_direction_9() { return &___prior_direction_9; }
	inline void set_prior_direction_9(Vector3U5BU5D_t3227571696* value)
	{
		___prior_direction_9 = value;
		Il2CppCodeGenWriteBarrier(&___prior_direction_9, value);
	}

	inline static int32_t get_offset_of_direction_10() { return static_cast<int32_t>(offsetof(Flock_t67973745_StaticFields, ___direction_10)); }
	inline Vector3U5BU5D_t3227571696* get_direction_10() const { return ___direction_10; }
	inline Vector3U5BU5D_t3227571696** get_address_of_direction_10() { return &___direction_10; }
	inline void set_direction_10(Vector3U5BU5D_t3227571696* value)
	{
		___direction_10 = value;
		Il2CppCodeGenWriteBarrier(&___direction_10, value);
	}

	inline static int32_t get_offset_of_direction_avoidance_11() { return static_cast<int32_t>(offsetof(Flock_t67973745_StaticFields, ___direction_avoidance_11)); }
	inline Vector3U5BU5D_t3227571696* get_direction_avoidance_11() const { return ___direction_avoidance_11; }
	inline Vector3U5BU5D_t3227571696** get_address_of_direction_avoidance_11() { return &___direction_avoidance_11; }
	inline void set_direction_avoidance_11(Vector3U5BU5D_t3227571696* value)
	{
		___direction_avoidance_11 = value;
		Il2CppCodeGenWriteBarrier(&___direction_avoidance_11, value);
	}

	inline static int32_t get_offset_of_direction_alignment_12() { return static_cast<int32_t>(offsetof(Flock_t67973745_StaticFields, ___direction_alignment_12)); }
	inline Vector3U5BU5D_t3227571696* get_direction_alignment_12() const { return ___direction_alignment_12; }
	inline Vector3U5BU5D_t3227571696** get_address_of_direction_alignment_12() { return &___direction_alignment_12; }
	inline void set_direction_alignment_12(Vector3U5BU5D_t3227571696* value)
	{
		___direction_alignment_12 = value;
		Il2CppCodeGenWriteBarrier(&___direction_alignment_12, value);
	}

	inline static int32_t get_offset_of_direction_neighborhood_13() { return static_cast<int32_t>(offsetof(Flock_t67973745_StaticFields, ___direction_neighborhood_13)); }
	inline Vector3U5BU5D_t3227571696* get_direction_neighborhood_13() const { return ___direction_neighborhood_13; }
	inline Vector3U5BU5D_t3227571696** get_address_of_direction_neighborhood_13() { return &___direction_neighborhood_13; }
	inline void set_direction_neighborhood_13(Vector3U5BU5D_t3227571696* value)
	{
		___direction_neighborhood_13 = value;
		Il2CppCodeGenWriteBarrier(&___direction_neighborhood_13, value);
	}

	inline static int32_t get_offset_of_center_of_flock_14() { return static_cast<int32_t>(offsetof(Flock_t67973745_StaticFields, ___center_of_flock_14)); }
	inline Vector3_t3525329789  get_center_of_flock_14() const { return ___center_of_flock_14; }
	inline Vector3_t3525329789 * get_address_of_center_of_flock_14() { return &___center_of_flock_14; }
	inline void set_center_of_flock_14(Vector3_t3525329789  value)
	{
		___center_of_flock_14 = value;
	}

	inline static int32_t get_offset_of_color_near_15() { return static_cast<int32_t>(offsetof(Flock_t67973745_StaticFields, ___color_near_15)); }
	inline Vector4_t3525329790  get_color_near_15() const { return ___color_near_15; }
	inline Vector4_t3525329790 * get_address_of_color_near_15() { return &___color_near_15; }
	inline void set_color_near_15(Vector4_t3525329790  value)
	{
		___color_near_15 = value;
	}

	inline static int32_t get_offset_of_color_far_16() { return static_cast<int32_t>(offsetof(Flock_t67973745_StaticFields, ___color_far_16)); }
	inline Vector4_t3525329790  get_color_far_16() const { return ___color_far_16; }
	inline Vector4_t3525329790 * get_address_of_color_far_16() { return &___color_far_16; }
	inline void set_color_far_16(Vector4_t3525329790  value)
	{
		___color_far_16 = value;
	}

	inline static int32_t get_offset_of_mouse_17() { return static_cast<int32_t>(offsetof(Flock_t67973745_StaticFields, ___mouse_17)); }
	inline Vector4_t3525329790  get_mouse_17() const { return ___mouse_17; }
	inline Vector4_t3525329790 * get_address_of_mouse_17() { return &___mouse_17; }
	inline void set_mouse_17(Vector4_t3525329790  value)
	{
		___mouse_17 = value;
	}

	inline static int32_t get_offset_of_max_neighbors_18() { return static_cast<int32_t>(offsetof(Flock_t67973745_StaticFields, ___max_neighbors_18)); }
	inline int32_t get_max_neighbors_18() const { return ___max_neighbors_18; }
	inline int32_t* get_address_of_max_neighbors_18() { return &___max_neighbors_18; }
	inline void set_max_neighbors_18(int32_t value)
	{
		___max_neighbors_18 = value;
	}

	inline static int32_t get_offset_of_neighborhood_radius_19() { return static_cast<int32_t>(offsetof(Flock_t67973745_StaticFields, ___neighborhood_radius_19)); }
	inline float get_neighborhood_radius_19() const { return ___neighborhood_radius_19; }
	inline float* get_address_of_neighborhood_radius_19() { return &___neighborhood_radius_19; }
	inline void set_neighborhood_radius_19(float value)
	{
		___neighborhood_radius_19 = value;
	}

	inline static int32_t get_offset_of_boundary_20() { return static_cast<int32_t>(offsetof(Flock_t67973745_StaticFields, ___boundary_20)); }
	inline float get_boundary_20() const { return ___boundary_20; }
	inline float* get_address_of_boundary_20() { return &___boundary_20; }
	inline void set_boundary_20(float value)
	{
		___boundary_20 = value;
	}

	inline static int32_t get_offset_of_avoidance_21() { return static_cast<int32_t>(offsetof(Flock_t67973745_StaticFields, ___avoidance_21)); }
	inline float get_avoidance_21() const { return ___avoidance_21; }
	inline float* get_address_of_avoidance_21() { return &___avoidance_21; }
	inline void set_avoidance_21(float value)
	{
		___avoidance_21 = value;
	}

	inline static int32_t get_offset_of_alignment_22() { return static_cast<int32_t>(offsetof(Flock_t67973745_StaticFields, ___alignment_22)); }
	inline float get_alignment_22() const { return ___alignment_22; }
	inline float* get_address_of_alignment_22() { return &___alignment_22; }
	inline void set_alignment_22(float value)
	{
		___alignment_22 = value;
	}

	inline static int32_t get_offset_of_cohesion_23() { return static_cast<int32_t>(offsetof(Flock_t67973745_StaticFields, ___cohesion_23)); }
	inline float get_cohesion_23() const { return ___cohesion_23; }
	inline float* get_address_of_cohesion_23() { return &___cohesion_23; }
	inline void set_cohesion_23(float value)
	{
		___cohesion_23 = value;
	}

	inline static int32_t get_offset_of_gather_24() { return static_cast<int32_t>(offsetof(Flock_t67973745_StaticFields, ___gather_24)); }
	inline float get_gather_24() const { return ___gather_24; }
	inline float* get_address_of_gather_24() { return &___gather_24; }
	inline void set_gather_24(float value)
	{
		___gather_24 = value;
	}

	inline static int32_t get_offset_of_home_25() { return static_cast<int32_t>(offsetof(Flock_t67973745_StaticFields, ___home_25)); }
	inline float get_home_25() const { return ___home_25; }
	inline float* get_address_of_home_25() { return &___home_25; }
	inline void set_home_25(float value)
	{
		___home_25 = value;
	}

	inline static int32_t get_offset_of_lerp_26() { return static_cast<int32_t>(offsetof(Flock_t67973745_StaticFields, ___lerp_26)); }
	inline float get_lerp_26() const { return ___lerp_26; }
	inline float* get_address_of_lerp_26() { return &___lerp_26; }
	inline void set_lerp_26(float value)
	{
		___lerp_26 = value;
	}

	inline static int32_t get_offset_of_velocity_multiplier_27() { return static_cast<int32_t>(offsetof(Flock_t67973745_StaticFields, ___velocity_multiplier_27)); }
	inline float get_velocity_multiplier_27() const { return ___velocity_multiplier_27; }
	inline float* get_address_of_velocity_multiplier_27() { return &___velocity_multiplier_27; }
	inline void set_velocity_multiplier_27(float value)
	{
		___velocity_multiplier_27 = value;
	}

	inline static int32_t get_offset_of_velocity_max_28() { return static_cast<int32_t>(offsetof(Flock_t67973745_StaticFields, ___velocity_max_28)); }
	inline float get_velocity_max_28() const { return ___velocity_max_28; }
	inline float* get_address_of_velocity_max_28() { return &___velocity_max_28; }
	inline void set_velocity_max_28(float value)
	{
		___velocity_max_28 = value;
	}

	inline static int32_t get_offset_of_update_interval_29() { return static_cast<int32_t>(offsetof(Flock_t67973745_StaticFields, ___update_interval_29)); }
	inline int32_t get_update_interval_29() const { return ___update_interval_29; }
	inline int32_t* get_address_of_update_interval_29() { return &___update_interval_29; }
	inline void set_update_interval_29(int32_t value)
	{
		___update_interval_29 = value;
	}

	inline static int32_t get_offset_of_comparison_frequency_30() { return static_cast<int32_t>(offsetof(Flock_t67973745_StaticFields, ___comparison_frequency_30)); }
	inline float get_comparison_frequency_30() const { return ___comparison_frequency_30; }
	inline float* get_address_of_comparison_frequency_30() { return &___comparison_frequency_30; }
	inline void set_comparison_frequency_30(float value)
	{
		___comparison_frequency_30 = value;
	}

	inline static int32_t get_offset_of_direction_frequency_31() { return static_cast<int32_t>(offsetof(Flock_t67973745_StaticFields, ___direction_frequency_31)); }
	inline float get_direction_frequency_31() const { return ___direction_frequency_31; }
	inline float* get_address_of_direction_frequency_31() { return &___direction_frequency_31; }
	inline void set_direction_frequency_31(float value)
	{
		___direction_frequency_31 = value;
	}

	inline static int32_t get_offset_of_camera_index_32() { return static_cast<int32_t>(offsetof(Flock_t67973745_StaticFields, ___camera_index_32)); }
	inline int32_t get_camera_index_32() const { return ___camera_index_32; }
	inline int32_t* get_address_of_camera_index_32() { return &___camera_index_32; }
	inline void set_camera_index_32(int32_t value)
	{
		___camera_index_32 = value;
	}

	inline static int32_t get_offset_of_attach_camera_33() { return static_cast<int32_t>(offsetof(Flock_t67973745_StaticFields, ___attach_camera_33)); }
	inline bool get_attach_camera_33() const { return ___attach_camera_33; }
	inline bool* get_address_of_attach_camera_33() { return &___attach_camera_33; }
	inline void set_attach_camera_33(bool value)
	{
		___attach_camera_33 = value;
	}

	inline static int32_t get_offset_of_draw_neighborhood_lines_34() { return static_cast<int32_t>(offsetof(Flock_t67973745_StaticFields, ___draw_neighborhood_lines_34)); }
	inline bool get_draw_neighborhood_lines_34() const { return ___draw_neighborhood_lines_34; }
	inline bool* get_address_of_draw_neighborhood_lines_34() { return &___draw_neighborhood_lines_34; }
	inline void set_draw_neighborhood_lines_34(bool value)
	{
		___draw_neighborhood_lines_34 = value;
	}

	inline static int32_t get_offset_of_draw_direction_lines_35() { return static_cast<int32_t>(offsetof(Flock_t67973745_StaticFields, ___draw_direction_lines_35)); }
	inline bool get_draw_direction_lines_35() const { return ___draw_direction_lines_35; }
	inline bool* get_address_of_draw_direction_lines_35() { return &___draw_direction_lines_35; }
	inline void set_draw_direction_lines_35(bool value)
	{
		___draw_direction_lines_35 = value;
	}

	inline static int32_t get_offset_of_debug_origin_36() { return static_cast<int32_t>(offsetof(Flock_t67973745_StaticFields, ___debug_origin_36)); }
	inline bool get_debug_origin_36() const { return ___debug_origin_36; }
	inline bool* get_address_of_debug_origin_36() { return &___debug_origin_36; }
	inline void set_debug_origin_36(bool value)
	{
		___debug_origin_36 = value;
	}

	inline static int32_t get_offset_of_interactive_origin_37() { return static_cast<int32_t>(offsetof(Flock_t67973745_StaticFields, ___interactive_origin_37)); }
	inline bool get_interactive_origin_37() const { return ___interactive_origin_37; }
	inline bool* get_address_of_interactive_origin_37() { return &___interactive_origin_37; }
	inline void set_interactive_origin_37(bool value)
	{
		___interactive_origin_37 = value;
	}

	inline static int32_t get_offset_of_origin_38() { return static_cast<int32_t>(offsetof(Flock_t67973745_StaticFields, ___origin_38)); }
	inline Vector3_t3525329789  get_origin_38() const { return ___origin_38; }
	inline Vector3_t3525329789 * get_address_of_origin_38() { return &___origin_38; }
	inline void set_origin_38(Vector3_t3525329789  value)
	{
		___origin_38 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
