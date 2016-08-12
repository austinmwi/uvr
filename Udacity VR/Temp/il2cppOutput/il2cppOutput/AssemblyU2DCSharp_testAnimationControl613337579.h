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
// UnityEngine.AnimationClip
struct AnimationClip_t57566497;
// UnityEngine.Animation
struct Animation_t350396337;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// testAnimationControl
struct  testAnimationControl_t613337579  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject testAnimationControl::animatedObject
	GameObject_t4012695102 * ___animatedObject_2;
	// UnityEngine.AnimationClip testAnimationControl::clip
	AnimationClip_t57566497 * ___clip_3;
	// UnityEngine.Animation testAnimationControl::test
	Animation_t350396337 * ___test_4;

public:
	inline static int32_t get_offset_of_animatedObject_2() { return static_cast<int32_t>(offsetof(testAnimationControl_t613337579, ___animatedObject_2)); }
	inline GameObject_t4012695102 * get_animatedObject_2() const { return ___animatedObject_2; }
	inline GameObject_t4012695102 ** get_address_of_animatedObject_2() { return &___animatedObject_2; }
	inline void set_animatedObject_2(GameObject_t4012695102 * value)
	{
		___animatedObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___animatedObject_2, value);
	}

	inline static int32_t get_offset_of_clip_3() { return static_cast<int32_t>(offsetof(testAnimationControl_t613337579, ___clip_3)); }
	inline AnimationClip_t57566497 * get_clip_3() const { return ___clip_3; }
	inline AnimationClip_t57566497 ** get_address_of_clip_3() { return &___clip_3; }
	inline void set_clip_3(AnimationClip_t57566497 * value)
	{
		___clip_3 = value;
		Il2CppCodeGenWriteBarrier(&___clip_3, value);
	}

	inline static int32_t get_offset_of_test_4() { return static_cast<int32_t>(offsetof(testAnimationControl_t613337579, ___test_4)); }
	inline Animation_t350396337 * get_test_4() const { return ___test_4; }
	inline Animation_t350396337 ** get_address_of_test_4() { return &___test_4; }
	inline void set_test_4(Animation_t350396337 * value)
	{
		___test_4 = value;
		Il2CppCodeGenWriteBarrier(&___test_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
