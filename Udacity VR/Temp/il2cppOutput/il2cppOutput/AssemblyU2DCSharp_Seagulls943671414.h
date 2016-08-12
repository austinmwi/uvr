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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t2889538658;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Seagulls
struct  Seagulls_t943671414  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject Seagulls::seagull_prefab
	GameObject_t4012695102 * ___seagull_prefab_3;
	// UnityEngine.GameObject Seagulls::_seagulls_object
	GameObject_t4012695102 * ____seagulls_object_5;
	// UnityEngine.AudioClip[] Seagulls::seagull_sounds
	AudioClipU5BU5D_t2889538658* ___seagull_sounds_6;
	// UnityEngine.GameObject[] Seagulls::_sound_object
	GameObjectU5BU5D_t3499186955* ____sound_object_7;
	// System.Int32 Seagulls::sound_frame_delay
	int32_t ___sound_frame_delay_8;
	// System.Int32 Seagulls::_sound_frame
	int32_t ____sound_frame_9;

public:
	inline static int32_t get_offset_of_seagull_prefab_3() { return static_cast<int32_t>(offsetof(Seagulls_t943671414, ___seagull_prefab_3)); }
	inline GameObject_t4012695102 * get_seagull_prefab_3() const { return ___seagull_prefab_3; }
	inline GameObject_t4012695102 ** get_address_of_seagull_prefab_3() { return &___seagull_prefab_3; }
	inline void set_seagull_prefab_3(GameObject_t4012695102 * value)
	{
		___seagull_prefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___seagull_prefab_3, value);
	}

	inline static int32_t get_offset_of__seagulls_object_5() { return static_cast<int32_t>(offsetof(Seagulls_t943671414, ____seagulls_object_5)); }
	inline GameObject_t4012695102 * get__seagulls_object_5() const { return ____seagulls_object_5; }
	inline GameObject_t4012695102 ** get_address_of__seagulls_object_5() { return &____seagulls_object_5; }
	inline void set__seagulls_object_5(GameObject_t4012695102 * value)
	{
		____seagulls_object_5 = value;
		Il2CppCodeGenWriteBarrier(&____seagulls_object_5, value);
	}

	inline static int32_t get_offset_of_seagull_sounds_6() { return static_cast<int32_t>(offsetof(Seagulls_t943671414, ___seagull_sounds_6)); }
	inline AudioClipU5BU5D_t2889538658* get_seagull_sounds_6() const { return ___seagull_sounds_6; }
	inline AudioClipU5BU5D_t2889538658** get_address_of_seagull_sounds_6() { return &___seagull_sounds_6; }
	inline void set_seagull_sounds_6(AudioClipU5BU5D_t2889538658* value)
	{
		___seagull_sounds_6 = value;
		Il2CppCodeGenWriteBarrier(&___seagull_sounds_6, value);
	}

	inline static int32_t get_offset_of__sound_object_7() { return static_cast<int32_t>(offsetof(Seagulls_t943671414, ____sound_object_7)); }
	inline GameObjectU5BU5D_t3499186955* get__sound_object_7() const { return ____sound_object_7; }
	inline GameObjectU5BU5D_t3499186955** get_address_of__sound_object_7() { return &____sound_object_7; }
	inline void set__sound_object_7(GameObjectU5BU5D_t3499186955* value)
	{
		____sound_object_7 = value;
		Il2CppCodeGenWriteBarrier(&____sound_object_7, value);
	}

	inline static int32_t get_offset_of_sound_frame_delay_8() { return static_cast<int32_t>(offsetof(Seagulls_t943671414, ___sound_frame_delay_8)); }
	inline int32_t get_sound_frame_delay_8() const { return ___sound_frame_delay_8; }
	inline int32_t* get_address_of_sound_frame_delay_8() { return &___sound_frame_delay_8; }
	inline void set_sound_frame_delay_8(int32_t value)
	{
		___sound_frame_delay_8 = value;
	}

	inline static int32_t get_offset_of__sound_frame_9() { return static_cast<int32_t>(offsetof(Seagulls_t943671414, ____sound_frame_9)); }
	inline int32_t get__sound_frame_9() const { return ____sound_frame_9; }
	inline int32_t* get_address_of__sound_frame_9() { return &____sound_frame_9; }
	inline void set__sound_frame_9(int32_t value)
	{
		____sound_frame_9 = value;
	}
};

struct Seagulls_t943671414_StaticFields
{
public:
	// UnityEngine.GameObject[] Seagulls::seagull_object
	GameObjectU5BU5D_t3499186955* ___seagull_object_4;

public:
	inline static int32_t get_offset_of_seagull_object_4() { return static_cast<int32_t>(offsetof(Seagulls_t943671414_StaticFields, ___seagull_object_4)); }
	inline GameObjectU5BU5D_t3499186955* get_seagull_object_4() const { return ___seagull_object_4; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_seagull_object_4() { return &___seagull_object_4; }
	inline void set_seagull_object_4(GameObjectU5BU5D_t3499186955* value)
	{
		___seagull_object_4 = value;
		Il2CppCodeGenWriteBarrier(&___seagull_object_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
