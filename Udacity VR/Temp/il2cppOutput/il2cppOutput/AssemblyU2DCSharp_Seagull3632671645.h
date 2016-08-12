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

// Seagull
struct  Seagull_t3632671645  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Vector3 Seagull::_position
	Vector3_t3525329789  ____position_5;
	// UnityEngine.Vector3 Seagull::_direction
	Vector3_t3525329789  ____direction_6;
	// System.Single Seagull::_velocity
	float ____velocity_7;
	// System.Single Seagull::_seed
	float ____seed_8;
	// System.Single Seagull::_vertical_drift
	float ____vertical_drift_9;

public:
	inline static int32_t get_offset_of__position_5() { return static_cast<int32_t>(offsetof(Seagull_t3632671645, ____position_5)); }
	inline Vector3_t3525329789  get__position_5() const { return ____position_5; }
	inline Vector3_t3525329789 * get_address_of__position_5() { return &____position_5; }
	inline void set__position_5(Vector3_t3525329789  value)
	{
		____position_5 = value;
	}

	inline static int32_t get_offset_of__direction_6() { return static_cast<int32_t>(offsetof(Seagull_t3632671645, ____direction_6)); }
	inline Vector3_t3525329789  get__direction_6() const { return ____direction_6; }
	inline Vector3_t3525329789 * get_address_of__direction_6() { return &____direction_6; }
	inline void set__direction_6(Vector3_t3525329789  value)
	{
		____direction_6 = value;
	}

	inline static int32_t get_offset_of__velocity_7() { return static_cast<int32_t>(offsetof(Seagull_t3632671645, ____velocity_7)); }
	inline float get__velocity_7() const { return ____velocity_7; }
	inline float* get_address_of__velocity_7() { return &____velocity_7; }
	inline void set__velocity_7(float value)
	{
		____velocity_7 = value;
	}

	inline static int32_t get_offset_of__seed_8() { return static_cast<int32_t>(offsetof(Seagull_t3632671645, ____seed_8)); }
	inline float get__seed_8() const { return ____seed_8; }
	inline float* get_address_of__seed_8() { return &____seed_8; }
	inline void set__seed_8(float value)
	{
		____seed_8 = value;
	}

	inline static int32_t get_offset_of__vertical_drift_9() { return static_cast<int32_t>(offsetof(Seagull_t3632671645, ____vertical_drift_9)); }
	inline float get__vertical_drift_9() const { return ____vertical_drift_9; }
	inline float* get_address_of__vertical_drift_9() { return &____vertical_drift_9; }
	inline void set__vertical_drift_9(float value)
	{
		____vertical_drift_9 = value;
	}
};

struct Seagull_t3632671645_StaticFields
{
public:
	// UnityEngine.Vector3 Seagull::ORIGIN
	Vector3_t3525329789  ___ORIGIN_4;

public:
	inline static int32_t get_offset_of_ORIGIN_4() { return static_cast<int32_t>(offsetof(Seagull_t3632671645_StaticFields, ___ORIGIN_4)); }
	inline Vector3_t3525329789  get_ORIGIN_4() const { return ___ORIGIN_4; }
	inline Vector3_t3525329789 * get_address_of_ORIGIN_4() { return &___ORIGIN_4; }
	inline void set_ORIGIN_4(Vector3_t3525329789  value)
	{
		___ORIGIN_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
