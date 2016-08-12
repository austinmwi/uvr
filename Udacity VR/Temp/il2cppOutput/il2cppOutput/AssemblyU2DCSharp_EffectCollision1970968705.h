#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.ParticleSystem
struct ParticleSystem_t56787138;
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_t808643063;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EffectCollision
struct  EffectCollision_t1970968705  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.ParticleSystem EffectCollision::particle_system
	ParticleSystem_t56787138 * ___particle_system_3;
	// System.Int32 EffectCollision::_index
	int32_t ____index_5;

public:
	inline static int32_t get_offset_of_particle_system_3() { return static_cast<int32_t>(offsetof(EffectCollision_t1970968705, ___particle_system_3)); }
	inline ParticleSystem_t56787138 * get_particle_system_3() const { return ___particle_system_3; }
	inline ParticleSystem_t56787138 ** get_address_of_particle_system_3() { return &___particle_system_3; }
	inline void set_particle_system_3(ParticleSystem_t56787138 * value)
	{
		___particle_system_3 = value;
		Il2CppCodeGenWriteBarrier(&___particle_system_3, value);
	}

	inline static int32_t get_offset_of__index_5() { return static_cast<int32_t>(offsetof(EffectCollision_t1970968705, ____index_5)); }
	inline int32_t get__index_5() const { return ____index_5; }
	inline int32_t* get_address_of__index_5() { return &____index_5; }
	inline void set__index_5(int32_t value)
	{
		____index_5 = value;
	}
};

struct EffectCollision_t1970968705_StaticFields
{
public:
	// UnityEngine.ParticleSystem[] EffectCollision::_particle_system
	ParticleSystemU5BU5D_t808643063* ____particle_system_4;

public:
	inline static int32_t get_offset_of__particle_system_4() { return static_cast<int32_t>(offsetof(EffectCollision_t1970968705_StaticFields, ____particle_system_4)); }
	inline ParticleSystemU5BU5D_t808643063* get__particle_system_4() const { return ____particle_system_4; }
	inline ParticleSystemU5BU5D_t808643063** get_address_of__particle_system_4() { return &____particle_system_4; }
	inline void set__particle_system_4(ParticleSystemU5BU5D_t808643063* value)
	{
		____particle_system_4 = value;
		Il2CppCodeGenWriteBarrier(&____particle_system_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
