#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.AudioClip
struct AudioClip_t3714538611;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ocean
struct  Ocean_t76007646  : public Il2CppObject
{
public:

public:
};

struct Ocean_t76007646_StaticFields
{
public:
	// UnityEngine.GameObject Ocean::_gameObject
	GameObject_t4012695102 * ____gameObject_2;
	// UnityEngine.GameObject Ocean::_audio_object
	GameObject_t4012695102 * ____audio_object_3;
	// UnityEngine.AudioClip Ocean::_audio_clip
	AudioClip_t3714538611 * ____audio_clip_4;
	// System.Single Ocean::_pitch
	float ____pitch_5;
	// UnityEngine.AudioSource Ocean::_audio_source
	AudioSource_t3628549054 * ____audio_source_6;

public:
	inline static int32_t get_offset_of__gameObject_2() { return static_cast<int32_t>(offsetof(Ocean_t76007646_StaticFields, ____gameObject_2)); }
	inline GameObject_t4012695102 * get__gameObject_2() const { return ____gameObject_2; }
	inline GameObject_t4012695102 ** get_address_of__gameObject_2() { return &____gameObject_2; }
	inline void set__gameObject_2(GameObject_t4012695102 * value)
	{
		____gameObject_2 = value;
		Il2CppCodeGenWriteBarrier(&____gameObject_2, value);
	}

	inline static int32_t get_offset_of__audio_object_3() { return static_cast<int32_t>(offsetof(Ocean_t76007646_StaticFields, ____audio_object_3)); }
	inline GameObject_t4012695102 * get__audio_object_3() const { return ____audio_object_3; }
	inline GameObject_t4012695102 ** get_address_of__audio_object_3() { return &____audio_object_3; }
	inline void set__audio_object_3(GameObject_t4012695102 * value)
	{
		____audio_object_3 = value;
		Il2CppCodeGenWriteBarrier(&____audio_object_3, value);
	}

	inline static int32_t get_offset_of__audio_clip_4() { return static_cast<int32_t>(offsetof(Ocean_t76007646_StaticFields, ____audio_clip_4)); }
	inline AudioClip_t3714538611 * get__audio_clip_4() const { return ____audio_clip_4; }
	inline AudioClip_t3714538611 ** get_address_of__audio_clip_4() { return &____audio_clip_4; }
	inline void set__audio_clip_4(AudioClip_t3714538611 * value)
	{
		____audio_clip_4 = value;
		Il2CppCodeGenWriteBarrier(&____audio_clip_4, value);
	}

	inline static int32_t get_offset_of__pitch_5() { return static_cast<int32_t>(offsetof(Ocean_t76007646_StaticFields, ____pitch_5)); }
	inline float get__pitch_5() const { return ____pitch_5; }
	inline float* get_address_of__pitch_5() { return &____pitch_5; }
	inline void set__pitch_5(float value)
	{
		____pitch_5 = value;
	}

	inline static int32_t get_offset_of__audio_source_6() { return static_cast<int32_t>(offsetof(Ocean_t76007646_StaticFields, ____audio_source_6)); }
	inline AudioSource_t3628549054 * get__audio_source_6() const { return ____audio_source_6; }
	inline AudioSource_t3628549054 ** get_address_of__audio_source_6() { return &____audio_source_6; }
	inline void set__audio_source_6(AudioSource_t3628549054 * value)
	{
		____audio_source_6 = value;
		Il2CppCodeGenWriteBarrier(&____audio_source_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
