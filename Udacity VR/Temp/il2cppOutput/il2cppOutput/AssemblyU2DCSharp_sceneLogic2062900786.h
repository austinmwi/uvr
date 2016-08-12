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

// sceneLogic
struct  sceneLogic_t2062900786  : public MonoBehaviour_t3012272455
{
public:
	// System.String sceneLogic::nextScene
	String_t* ___nextScene_2;
	// UnityEngine.GameObject[] sceneLogic::wayPoints
	GameObjectU5BU5D_t3499186955* ___wayPoints_3;
	// UnityEngine.GameObject sceneLogic::player
	GameObject_t4012695102 * ___player_4;
	// System.Int32 sceneLogic::currentWaypoint
	int32_t ___currentWaypoint_5;
	// System.Single sceneLogic::speed
	float ___speed_6;
	// System.Boolean sceneLogic::autoMovement
	bool ___autoMovement_7;
	// System.Boolean sceneLogic::teleportation
	bool ___teleportation_8;
	// UnityEngine.GameObject sceneLogic::movementTarget
	GameObject_t4012695102 * ___movementTarget_9;
	// System.Boolean sceneLogic::manualMovementActive
	bool ___manualMovementActive_10;
	// UnityEngine.GameObject sceneLogic::toolTipSet
	GameObject_t4012695102 * ___toolTipSet_11;

public:
	inline static int32_t get_offset_of_nextScene_2() { return static_cast<int32_t>(offsetof(sceneLogic_t2062900786, ___nextScene_2)); }
	inline String_t* get_nextScene_2() const { return ___nextScene_2; }
	inline String_t** get_address_of_nextScene_2() { return &___nextScene_2; }
	inline void set_nextScene_2(String_t* value)
	{
		___nextScene_2 = value;
		Il2CppCodeGenWriteBarrier(&___nextScene_2, value);
	}

	inline static int32_t get_offset_of_wayPoints_3() { return static_cast<int32_t>(offsetof(sceneLogic_t2062900786, ___wayPoints_3)); }
	inline GameObjectU5BU5D_t3499186955* get_wayPoints_3() const { return ___wayPoints_3; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_wayPoints_3() { return &___wayPoints_3; }
	inline void set_wayPoints_3(GameObjectU5BU5D_t3499186955* value)
	{
		___wayPoints_3 = value;
		Il2CppCodeGenWriteBarrier(&___wayPoints_3, value);
	}

	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(sceneLogic_t2062900786, ___player_4)); }
	inline GameObject_t4012695102 * get_player_4() const { return ___player_4; }
	inline GameObject_t4012695102 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(GameObject_t4012695102 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier(&___player_4, value);
	}

	inline static int32_t get_offset_of_currentWaypoint_5() { return static_cast<int32_t>(offsetof(sceneLogic_t2062900786, ___currentWaypoint_5)); }
	inline int32_t get_currentWaypoint_5() const { return ___currentWaypoint_5; }
	inline int32_t* get_address_of_currentWaypoint_5() { return &___currentWaypoint_5; }
	inline void set_currentWaypoint_5(int32_t value)
	{
		___currentWaypoint_5 = value;
	}

	inline static int32_t get_offset_of_speed_6() { return static_cast<int32_t>(offsetof(sceneLogic_t2062900786, ___speed_6)); }
	inline float get_speed_6() const { return ___speed_6; }
	inline float* get_address_of_speed_6() { return &___speed_6; }
	inline void set_speed_6(float value)
	{
		___speed_6 = value;
	}

	inline static int32_t get_offset_of_autoMovement_7() { return static_cast<int32_t>(offsetof(sceneLogic_t2062900786, ___autoMovement_7)); }
	inline bool get_autoMovement_7() const { return ___autoMovement_7; }
	inline bool* get_address_of_autoMovement_7() { return &___autoMovement_7; }
	inline void set_autoMovement_7(bool value)
	{
		___autoMovement_7 = value;
	}

	inline static int32_t get_offset_of_teleportation_8() { return static_cast<int32_t>(offsetof(sceneLogic_t2062900786, ___teleportation_8)); }
	inline bool get_teleportation_8() const { return ___teleportation_8; }
	inline bool* get_address_of_teleportation_8() { return &___teleportation_8; }
	inline void set_teleportation_8(bool value)
	{
		___teleportation_8 = value;
	}

	inline static int32_t get_offset_of_movementTarget_9() { return static_cast<int32_t>(offsetof(sceneLogic_t2062900786, ___movementTarget_9)); }
	inline GameObject_t4012695102 * get_movementTarget_9() const { return ___movementTarget_9; }
	inline GameObject_t4012695102 ** get_address_of_movementTarget_9() { return &___movementTarget_9; }
	inline void set_movementTarget_9(GameObject_t4012695102 * value)
	{
		___movementTarget_9 = value;
		Il2CppCodeGenWriteBarrier(&___movementTarget_9, value);
	}

	inline static int32_t get_offset_of_manualMovementActive_10() { return static_cast<int32_t>(offsetof(sceneLogic_t2062900786, ___manualMovementActive_10)); }
	inline bool get_manualMovementActive_10() const { return ___manualMovementActive_10; }
	inline bool* get_address_of_manualMovementActive_10() { return &___manualMovementActive_10; }
	inline void set_manualMovementActive_10(bool value)
	{
		___manualMovementActive_10 = value;
	}

	inline static int32_t get_offset_of_toolTipSet_11() { return static_cast<int32_t>(offsetof(sceneLogic_t2062900786, ___toolTipSet_11)); }
	inline GameObject_t4012695102 * get_toolTipSet_11() const { return ___toolTipSet_11; }
	inline GameObject_t4012695102 ** get_address_of_toolTipSet_11() { return &___toolTipSet_11; }
	inline void set_toolTipSet_11(GameObject_t4012695102 * value)
	{
		___toolTipSet_11 = value;
		Il2CppCodeGenWriteBarrier(&___toolTipSet_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
