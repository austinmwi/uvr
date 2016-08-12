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
// UnityEngine.ParticleSystem/Particle[]
struct ParticleU5BU5D_t2043625475;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExampleParticles
struct  ExampleParticles_t2840505475  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.ParticleSystem ExampleParticles::_particle_system
	ParticleSystem_t56787138 * ____particle_system_3;
	// UnityEngine.ParticleSystem/Particle[] ExampleParticles::_particles
	ParticleU5BU5D_t2043625475* ____particles_4;
	// System.Int32 ExampleParticles::_time_index
	int32_t ____time_index_5;
	// System.Int32 ExampleParticles::_last_index
	int32_t ____last_index_6;

public:
	inline static int32_t get_offset_of__particle_system_3() { return static_cast<int32_t>(offsetof(ExampleParticles_t2840505475, ____particle_system_3)); }
	inline ParticleSystem_t56787138 * get__particle_system_3() const { return ____particle_system_3; }
	inline ParticleSystem_t56787138 ** get_address_of__particle_system_3() { return &____particle_system_3; }
	inline void set__particle_system_3(ParticleSystem_t56787138 * value)
	{
		____particle_system_3 = value;
		Il2CppCodeGenWriteBarrier(&____particle_system_3, value);
	}

	inline static int32_t get_offset_of__particles_4() { return static_cast<int32_t>(offsetof(ExampleParticles_t2840505475, ____particles_4)); }
	inline ParticleU5BU5D_t2043625475* get__particles_4() const { return ____particles_4; }
	inline ParticleU5BU5D_t2043625475** get_address_of__particles_4() { return &____particles_4; }
	inline void set__particles_4(ParticleU5BU5D_t2043625475* value)
	{
		____particles_4 = value;
		Il2CppCodeGenWriteBarrier(&____particles_4, value);
	}

	inline static int32_t get_offset_of__time_index_5() { return static_cast<int32_t>(offsetof(ExampleParticles_t2840505475, ____time_index_5)); }
	inline int32_t get__time_index_5() const { return ____time_index_5; }
	inline int32_t* get_address_of__time_index_5() { return &____time_index_5; }
	inline void set__time_index_5(int32_t value)
	{
		____time_index_5 = value;
	}

	inline static int32_t get_offset_of__last_index_6() { return static_cast<int32_t>(offsetof(ExampleParticles_t2840505475, ____last_index_6)); }
	inline int32_t get__last_index_6() const { return ____last_index_6; }
	inline int32_t* get_address_of__last_index_6() { return &____last_index_6; }
	inline void set__last_index_6(int32_t value)
	{
		____last_index_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
