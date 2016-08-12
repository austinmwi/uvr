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

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// revealTooltip
struct  revealTooltip_t1644466038  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject revealTooltip::player
	GameObject_t4012695102 * ___player_2;
	// System.Single revealTooltip::minDistance
	float ___minDistance_3;
	// System.Single revealTooltip::maxDistance
	float ___maxDistance_4;
	// System.Single revealTooltip::manualMoveRevealDistance
	float ___manualMoveRevealDistance_5;
	// System.Boolean revealTooltip::tooltipShowing
	bool ___tooltipShowing_6;
	// UnityEngine.Vector3 revealTooltip::activeSize
	Vector3_t3525329789  ___activeSize_7;
	// UnityEngine.Vector3 revealTooltip::scaledSize
	Vector3_t3525329789  ___scaledSize_8;
	// System.Boolean revealTooltip::doneTransitioning
	bool ___doneTransitioning_9;
	// System.Single revealTooltip::distanceFromPlayer
	float ___distanceFromPlayer_10;
	// UnityEngine.GameObject revealTooltip::myparent
	GameObject_t4012695102 * ___myparent_11;
	// UnityEngine.GameObject revealTooltip::sceneLogic
	GameObject_t4012695102 * ___sceneLogic_12;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(revealTooltip_t1644466038, ___player_2)); }
	inline GameObject_t4012695102 * get_player_2() const { return ___player_2; }
	inline GameObject_t4012695102 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(GameObject_t4012695102 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}

	inline static int32_t get_offset_of_minDistance_3() { return static_cast<int32_t>(offsetof(revealTooltip_t1644466038, ___minDistance_3)); }
	inline float get_minDistance_3() const { return ___minDistance_3; }
	inline float* get_address_of_minDistance_3() { return &___minDistance_3; }
	inline void set_minDistance_3(float value)
	{
		___minDistance_3 = value;
	}

	inline static int32_t get_offset_of_maxDistance_4() { return static_cast<int32_t>(offsetof(revealTooltip_t1644466038, ___maxDistance_4)); }
	inline float get_maxDistance_4() const { return ___maxDistance_4; }
	inline float* get_address_of_maxDistance_4() { return &___maxDistance_4; }
	inline void set_maxDistance_4(float value)
	{
		___maxDistance_4 = value;
	}

	inline static int32_t get_offset_of_manualMoveRevealDistance_5() { return static_cast<int32_t>(offsetof(revealTooltip_t1644466038, ___manualMoveRevealDistance_5)); }
	inline float get_manualMoveRevealDistance_5() const { return ___manualMoveRevealDistance_5; }
	inline float* get_address_of_manualMoveRevealDistance_5() { return &___manualMoveRevealDistance_5; }
	inline void set_manualMoveRevealDistance_5(float value)
	{
		___manualMoveRevealDistance_5 = value;
	}

	inline static int32_t get_offset_of_tooltipShowing_6() { return static_cast<int32_t>(offsetof(revealTooltip_t1644466038, ___tooltipShowing_6)); }
	inline bool get_tooltipShowing_6() const { return ___tooltipShowing_6; }
	inline bool* get_address_of_tooltipShowing_6() { return &___tooltipShowing_6; }
	inline void set_tooltipShowing_6(bool value)
	{
		___tooltipShowing_6 = value;
	}

	inline static int32_t get_offset_of_activeSize_7() { return static_cast<int32_t>(offsetof(revealTooltip_t1644466038, ___activeSize_7)); }
	inline Vector3_t3525329789  get_activeSize_7() const { return ___activeSize_7; }
	inline Vector3_t3525329789 * get_address_of_activeSize_7() { return &___activeSize_7; }
	inline void set_activeSize_7(Vector3_t3525329789  value)
	{
		___activeSize_7 = value;
	}

	inline static int32_t get_offset_of_scaledSize_8() { return static_cast<int32_t>(offsetof(revealTooltip_t1644466038, ___scaledSize_8)); }
	inline Vector3_t3525329789  get_scaledSize_8() const { return ___scaledSize_8; }
	inline Vector3_t3525329789 * get_address_of_scaledSize_8() { return &___scaledSize_8; }
	inline void set_scaledSize_8(Vector3_t3525329789  value)
	{
		___scaledSize_8 = value;
	}

	inline static int32_t get_offset_of_doneTransitioning_9() { return static_cast<int32_t>(offsetof(revealTooltip_t1644466038, ___doneTransitioning_9)); }
	inline bool get_doneTransitioning_9() const { return ___doneTransitioning_9; }
	inline bool* get_address_of_doneTransitioning_9() { return &___doneTransitioning_9; }
	inline void set_doneTransitioning_9(bool value)
	{
		___doneTransitioning_9 = value;
	}

	inline static int32_t get_offset_of_distanceFromPlayer_10() { return static_cast<int32_t>(offsetof(revealTooltip_t1644466038, ___distanceFromPlayer_10)); }
	inline float get_distanceFromPlayer_10() const { return ___distanceFromPlayer_10; }
	inline float* get_address_of_distanceFromPlayer_10() { return &___distanceFromPlayer_10; }
	inline void set_distanceFromPlayer_10(float value)
	{
		___distanceFromPlayer_10 = value;
	}

	inline static int32_t get_offset_of_myparent_11() { return static_cast<int32_t>(offsetof(revealTooltip_t1644466038, ___myparent_11)); }
	inline GameObject_t4012695102 * get_myparent_11() const { return ___myparent_11; }
	inline GameObject_t4012695102 ** get_address_of_myparent_11() { return &___myparent_11; }
	inline void set_myparent_11(GameObject_t4012695102 * value)
	{
		___myparent_11 = value;
		Il2CppCodeGenWriteBarrier(&___myparent_11, value);
	}

	inline static int32_t get_offset_of_sceneLogic_12() { return static_cast<int32_t>(offsetof(revealTooltip_t1644466038, ___sceneLogic_12)); }
	inline GameObject_t4012695102 * get_sceneLogic_12() const { return ___sceneLogic_12; }
	inline GameObject_t4012695102 ** get_address_of_sceneLogic_12() { return &___sceneLogic_12; }
	inline void set_sceneLogic_12(GameObject_t4012695102 * value)
	{
		___sceneLogic_12 = value;
		Il2CppCodeGenWriteBarrier(&___sceneLogic_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
