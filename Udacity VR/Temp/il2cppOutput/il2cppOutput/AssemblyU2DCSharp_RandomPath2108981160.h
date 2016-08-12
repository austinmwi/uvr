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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RandomPath
struct  RandomPath_t2108981160  : public MonoBehaviour_t3012272455
{
public:
	// System.Single RandomPath::movement_speed
	float ___movement_speed_2;
	// System.Single RandomPath::turn_speed
	float ___turn_speed_3;
	// System.Single RandomPath::radius
	float ___radius_4;
	// System.Int32 RandomPath::target_duration
	int32_t ___target_duration_5;
	// UnityEngine.Vector3 RandomPath::_origin
	Vector3_t3525329789  ____origin_6;
	// UnityEngine.Vector3 RandomPath::_position
	Vector3_t3525329789  ____position_7;
	// UnityEngine.Vector3 RandomPath::_direction
	Vector3_t3525329789  ____direction_8;
	// UnityEngine.Vector3 RandomPath::_target
	Vector3_t3525329789  ____target_9;
	// UnityEngine.Vector3 RandomPath::_direction_to_target
	Vector3_t3525329789  ____direction_to_target_10;
	// System.Boolean RandomPath::debug_lines
	bool ___debug_lines_11;

public:
	inline static int32_t get_offset_of_movement_speed_2() { return static_cast<int32_t>(offsetof(RandomPath_t2108981160, ___movement_speed_2)); }
	inline float get_movement_speed_2() const { return ___movement_speed_2; }
	inline float* get_address_of_movement_speed_2() { return &___movement_speed_2; }
	inline void set_movement_speed_2(float value)
	{
		___movement_speed_2 = value;
	}

	inline static int32_t get_offset_of_turn_speed_3() { return static_cast<int32_t>(offsetof(RandomPath_t2108981160, ___turn_speed_3)); }
	inline float get_turn_speed_3() const { return ___turn_speed_3; }
	inline float* get_address_of_turn_speed_3() { return &___turn_speed_3; }
	inline void set_turn_speed_3(float value)
	{
		___turn_speed_3 = value;
	}

	inline static int32_t get_offset_of_radius_4() { return static_cast<int32_t>(offsetof(RandomPath_t2108981160, ___radius_4)); }
	inline float get_radius_4() const { return ___radius_4; }
	inline float* get_address_of_radius_4() { return &___radius_4; }
	inline void set_radius_4(float value)
	{
		___radius_4 = value;
	}

	inline static int32_t get_offset_of_target_duration_5() { return static_cast<int32_t>(offsetof(RandomPath_t2108981160, ___target_duration_5)); }
	inline int32_t get_target_duration_5() const { return ___target_duration_5; }
	inline int32_t* get_address_of_target_duration_5() { return &___target_duration_5; }
	inline void set_target_duration_5(int32_t value)
	{
		___target_duration_5 = value;
	}

	inline static int32_t get_offset_of__origin_6() { return static_cast<int32_t>(offsetof(RandomPath_t2108981160, ____origin_6)); }
	inline Vector3_t3525329789  get__origin_6() const { return ____origin_6; }
	inline Vector3_t3525329789 * get_address_of__origin_6() { return &____origin_6; }
	inline void set__origin_6(Vector3_t3525329789  value)
	{
		____origin_6 = value;
	}

	inline static int32_t get_offset_of__position_7() { return static_cast<int32_t>(offsetof(RandomPath_t2108981160, ____position_7)); }
	inline Vector3_t3525329789  get__position_7() const { return ____position_7; }
	inline Vector3_t3525329789 * get_address_of__position_7() { return &____position_7; }
	inline void set__position_7(Vector3_t3525329789  value)
	{
		____position_7 = value;
	}

	inline static int32_t get_offset_of__direction_8() { return static_cast<int32_t>(offsetof(RandomPath_t2108981160, ____direction_8)); }
	inline Vector3_t3525329789  get__direction_8() const { return ____direction_8; }
	inline Vector3_t3525329789 * get_address_of__direction_8() { return &____direction_8; }
	inline void set__direction_8(Vector3_t3525329789  value)
	{
		____direction_8 = value;
	}

	inline static int32_t get_offset_of__target_9() { return static_cast<int32_t>(offsetof(RandomPath_t2108981160, ____target_9)); }
	inline Vector3_t3525329789  get__target_9() const { return ____target_9; }
	inline Vector3_t3525329789 * get_address_of__target_9() { return &____target_9; }
	inline void set__target_9(Vector3_t3525329789  value)
	{
		____target_9 = value;
	}

	inline static int32_t get_offset_of__direction_to_target_10() { return static_cast<int32_t>(offsetof(RandomPath_t2108981160, ____direction_to_target_10)); }
	inline Vector3_t3525329789  get__direction_to_target_10() const { return ____direction_to_target_10; }
	inline Vector3_t3525329789 * get_address_of__direction_to_target_10() { return &____direction_to_target_10; }
	inline void set__direction_to_target_10(Vector3_t3525329789  value)
	{
		____direction_to_target_10 = value;
	}

	inline static int32_t get_offset_of_debug_lines_11() { return static_cast<int32_t>(offsetof(RandomPath_t2108981160, ___debug_lines_11)); }
	inline bool get_debug_lines_11() const { return ___debug_lines_11; }
	inline bool* get_address_of_debug_lines_11() { return &___debug_lines_11; }
	inline void set_debug_lines_11(bool value)
	{
		___debug_lines_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
