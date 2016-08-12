#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Island
struct  Island_t2199447093  : public Il2CppObject
{
public:

public:
};

struct Island_t2199447093_StaticFields
{
public:
	// UnityEngine.GameObject Island::_ocean_object
	GameObject_t4012695102 * ____ocean_object_2;
	// UnityEngine.GameObject Island::_game_object
	GameObject_t4012695102 * ____game_object_3;

public:
	inline static int32_t get_offset_of__ocean_object_2() { return static_cast<int32_t>(offsetof(Island_t2199447093_StaticFields, ____ocean_object_2)); }
	inline GameObject_t4012695102 * get__ocean_object_2() const { return ____ocean_object_2; }
	inline GameObject_t4012695102 ** get_address_of__ocean_object_2() { return &____ocean_object_2; }
	inline void set__ocean_object_2(GameObject_t4012695102 * value)
	{
		____ocean_object_2 = value;
		Il2CppCodeGenWriteBarrier(&____ocean_object_2, value);
	}

	inline static int32_t get_offset_of__game_object_3() { return static_cast<int32_t>(offsetof(Island_t2199447093_StaticFields, ____game_object_3)); }
	inline GameObject_t4012695102 * get__game_object_3() const { return ____game_object_3; }
	inline GameObject_t4012695102 ** get_address_of__game_object_3() { return &____game_object_3; }
	inline void set__game_object_3(GameObject_t4012695102 * value)
	{
		____game_object_3 = value;
		Il2CppCodeGenWriteBarrier(&____game_object_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
