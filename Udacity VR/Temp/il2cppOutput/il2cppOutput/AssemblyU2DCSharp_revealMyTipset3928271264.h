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

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// revealMyTipset
struct  revealMyTipset_t3928271264  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject revealMyTipset::player
	GameObject_t4012695102 * ___player_2;
	// UnityEngine.Vector3 revealMyTipset::activeSize
	Vector3_t3525329789  ___activeSize_3;
	// System.Single revealMyTipset::distanceFromPlayer
	float ___distanceFromPlayer_4;
	// System.Single revealMyTipset::enlargeTime
	float ___enlargeTime_5;
	// System.Boolean revealMyTipset::smoothTransitions
	bool ___smoothTransitions_6;
	// UnityEngine.GameObject[] revealMyTipset::animatedObjects
	GameObjectU5BU5D_t3499186955* ___animatedObjects_7;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(revealMyTipset_t3928271264, ___player_2)); }
	inline GameObject_t4012695102 * get_player_2() const { return ___player_2; }
	inline GameObject_t4012695102 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(GameObject_t4012695102 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}

	inline static int32_t get_offset_of_activeSize_3() { return static_cast<int32_t>(offsetof(revealMyTipset_t3928271264, ___activeSize_3)); }
	inline Vector3_t3525329789  get_activeSize_3() const { return ___activeSize_3; }
	inline Vector3_t3525329789 * get_address_of_activeSize_3() { return &___activeSize_3; }
	inline void set_activeSize_3(Vector3_t3525329789  value)
	{
		___activeSize_3 = value;
	}

	inline static int32_t get_offset_of_distanceFromPlayer_4() { return static_cast<int32_t>(offsetof(revealMyTipset_t3928271264, ___distanceFromPlayer_4)); }
	inline float get_distanceFromPlayer_4() const { return ___distanceFromPlayer_4; }
	inline float* get_address_of_distanceFromPlayer_4() { return &___distanceFromPlayer_4; }
	inline void set_distanceFromPlayer_4(float value)
	{
		___distanceFromPlayer_4 = value;
	}

	inline static int32_t get_offset_of_enlargeTime_5() { return static_cast<int32_t>(offsetof(revealMyTipset_t3928271264, ___enlargeTime_5)); }
	inline float get_enlargeTime_5() const { return ___enlargeTime_5; }
	inline float* get_address_of_enlargeTime_5() { return &___enlargeTime_5; }
	inline void set_enlargeTime_5(float value)
	{
		___enlargeTime_5 = value;
	}

	inline static int32_t get_offset_of_smoothTransitions_6() { return static_cast<int32_t>(offsetof(revealMyTipset_t3928271264, ___smoothTransitions_6)); }
	inline bool get_smoothTransitions_6() const { return ___smoothTransitions_6; }
	inline bool* get_address_of_smoothTransitions_6() { return &___smoothTransitions_6; }
	inline void set_smoothTransitions_6(bool value)
	{
		___smoothTransitions_6 = value;
	}

	inline static int32_t get_offset_of_animatedObjects_7() { return static_cast<int32_t>(offsetof(revealMyTipset_t3928271264, ___animatedObjects_7)); }
	inline GameObjectU5BU5D_t3499186955* get_animatedObjects_7() const { return ___animatedObjects_7; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_animatedObjects_7() { return &___animatedObjects_7; }
	inline void set_animatedObjects_7(GameObjectU5BU5D_t3499186955* value)
	{
		___animatedObjects_7 = value;
		Il2CppCodeGenWriteBarrier(&___animatedObjects_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
