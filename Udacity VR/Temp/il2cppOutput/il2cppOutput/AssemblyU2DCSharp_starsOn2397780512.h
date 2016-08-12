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

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// starsOn
struct  starsOn_t2397780512  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject[] starsOn::objectsOff
	GameObjectU5BU5D_t3499186955* ___objectsOff_2;
	// UnityEngine.GameObject[] starsOn::objectsOn
	GameObjectU5BU5D_t3499186955* ___objectsOn_3;

public:
	inline static int32_t get_offset_of_objectsOff_2() { return static_cast<int32_t>(offsetof(starsOn_t2397780512, ___objectsOff_2)); }
	inline GameObjectU5BU5D_t3499186955* get_objectsOff_2() const { return ___objectsOff_2; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_objectsOff_2() { return &___objectsOff_2; }
	inline void set_objectsOff_2(GameObjectU5BU5D_t3499186955* value)
	{
		___objectsOff_2 = value;
		Il2CppCodeGenWriteBarrier(&___objectsOff_2, value);
	}

	inline static int32_t get_offset_of_objectsOn_3() { return static_cast<int32_t>(offsetof(starsOn_t2397780512, ___objectsOn_3)); }
	inline GameObjectU5BU5D_t3499186955* get_objectsOn_3() const { return ___objectsOn_3; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_objectsOn_3() { return &___objectsOn_3; }
	inline void set_objectsOn_3(GameObjectU5BU5D_t3499186955* value)
	{
		___objectsOn_3 = value;
		Il2CppCodeGenWriteBarrier(&___objectsOn_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
