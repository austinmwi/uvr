#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// lightsOff
struct  lightsOff_t686568978  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject[] lightsOff::mainLights
	GameObjectU5BU5D_t3499186955* ___mainLights_2;
	// UnityEngine.GameObject lightsOff::specialLight
	GameObject_t4012695102 * ___specialLight_3;

public:
	inline static int32_t get_offset_of_mainLights_2() { return static_cast<int32_t>(offsetof(lightsOff_t686568978, ___mainLights_2)); }
	inline GameObjectU5BU5D_t3499186955* get_mainLights_2() const { return ___mainLights_2; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_mainLights_2() { return &___mainLights_2; }
	inline void set_mainLights_2(GameObjectU5BU5D_t3499186955* value)
	{
		___mainLights_2 = value;
		Il2CppCodeGenWriteBarrier(&___mainLights_2, value);
	}

	inline static int32_t get_offset_of_specialLight_3() { return static_cast<int32_t>(offsetof(lightsOff_t686568978, ___specialLight_3)); }
	inline GameObject_t4012695102 * get_specialLight_3() const { return ___specialLight_3; }
	inline GameObject_t4012695102 ** get_address_of_specialLight_3() { return &___specialLight_3; }
	inline void set_specialLight_3(GameObject_t4012695102 * value)
	{
		___specialLight_3 = value;
		Il2CppCodeGenWriteBarrier(&___specialLight_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
