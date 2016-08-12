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
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeafAnimation
struct  LeafAnimation_t1376007590  : public MonoBehaviour_t3012272455
{
public:
	// System.Single LeafAnimation::blend
	float ___blend_2;
	// System.Single LeafAnimation::force
	float ___force_3;
	// System.Single LeafAnimation::speed
	float ___speed_4;
	// UnityEngine.Vector3 LeafAnimation::_seed
	Vector3_t3525329789  ____seed_5;
	// UnityEngine.Quaternion LeafAnimation::_origional_rotation
	Quaternion_t1891715979  ____origional_rotation_6;

public:
	inline static int32_t get_offset_of_blend_2() { return static_cast<int32_t>(offsetof(LeafAnimation_t1376007590, ___blend_2)); }
	inline float get_blend_2() const { return ___blend_2; }
	inline float* get_address_of_blend_2() { return &___blend_2; }
	inline void set_blend_2(float value)
	{
		___blend_2 = value;
	}

	inline static int32_t get_offset_of_force_3() { return static_cast<int32_t>(offsetof(LeafAnimation_t1376007590, ___force_3)); }
	inline float get_force_3() const { return ___force_3; }
	inline float* get_address_of_force_3() { return &___force_3; }
	inline void set_force_3(float value)
	{
		___force_3 = value;
	}

	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(LeafAnimation_t1376007590, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of__seed_5() { return static_cast<int32_t>(offsetof(LeafAnimation_t1376007590, ____seed_5)); }
	inline Vector3_t3525329789  get__seed_5() const { return ____seed_5; }
	inline Vector3_t3525329789 * get_address_of__seed_5() { return &____seed_5; }
	inline void set__seed_5(Vector3_t3525329789  value)
	{
		____seed_5 = value;
	}

	inline static int32_t get_offset_of__origional_rotation_6() { return static_cast<int32_t>(offsetof(LeafAnimation_t1376007590, ____origional_rotation_6)); }
	inline Quaternion_t1891715979  get__origional_rotation_6() const { return ____origional_rotation_6; }
	inline Quaternion_t1891715979 * get_address_of__origional_rotation_6() { return &____origional_rotation_6; }
	inline void set__origional_rotation_6(Quaternion_t1891715979  value)
	{
		____origional_rotation_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
