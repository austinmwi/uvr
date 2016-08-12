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

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PhysicsStuff
struct  PhysicsStuff_t3477757965  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Rigidbody PhysicsStuff::_rigid_body
	Rigidbody_t1972007546 * ____rigid_body_2;
	// System.Single PhysicsStuff::force
	float ___force_3;
	// System.Single PhysicsStuff::radius
	float ___radius_4;

public:
	inline static int32_t get_offset_of__rigid_body_2() { return static_cast<int32_t>(offsetof(PhysicsStuff_t3477757965, ____rigid_body_2)); }
	inline Rigidbody_t1972007546 * get__rigid_body_2() const { return ____rigid_body_2; }
	inline Rigidbody_t1972007546 ** get_address_of__rigid_body_2() { return &____rigid_body_2; }
	inline void set__rigid_body_2(Rigidbody_t1972007546 * value)
	{
		____rigid_body_2 = value;
		Il2CppCodeGenWriteBarrier(&____rigid_body_2, value);
	}

	inline static int32_t get_offset_of_force_3() { return static_cast<int32_t>(offsetof(PhysicsStuff_t3477757965, ___force_3)); }
	inline float get_force_3() const { return ___force_3; }
	inline float* get_address_of_force_3() { return &___force_3; }
	inline void set_force_3(float value)
	{
		___force_3 = value;
	}

	inline static int32_t get_offset_of_radius_4() { return static_cast<int32_t>(offsetof(PhysicsStuff_t3477757965, ___radius_4)); }
	inline float get_radius_4() const { return ___radius_4; }
	inline float* get_address_of_radius_4() { return &___radius_4; }
	inline void set_radius_4(float value)
	{
		___radius_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
