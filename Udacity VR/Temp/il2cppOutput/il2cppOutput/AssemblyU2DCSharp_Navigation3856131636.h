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
// Waypoint[]
struct WaypointU5BU5D_t2459722300;
// Waypoint
struct Waypoint_t765160481;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Navigation
struct  Navigation_t3856131636  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject Navigation::view_object
	GameObject_t4012695102 * ___view_object_2;
	// System.Single Navigation::speed
	float ___speed_3;
	// Waypoint[] Navigation::_waypoint
	WaypointU5BU5D_t2459722300* ____waypoint_4;
	// Waypoint Navigation::_current
	Waypoint_t765160481 * ____current_5;

public:
	inline static int32_t get_offset_of_view_object_2() { return static_cast<int32_t>(offsetof(Navigation_t3856131636, ___view_object_2)); }
	inline GameObject_t4012695102 * get_view_object_2() const { return ___view_object_2; }
	inline GameObject_t4012695102 ** get_address_of_view_object_2() { return &___view_object_2; }
	inline void set_view_object_2(GameObject_t4012695102 * value)
	{
		___view_object_2 = value;
		Il2CppCodeGenWriteBarrier(&___view_object_2, value);
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(Navigation_t3856131636, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of__waypoint_4() { return static_cast<int32_t>(offsetof(Navigation_t3856131636, ____waypoint_4)); }
	inline WaypointU5BU5D_t2459722300* get__waypoint_4() const { return ____waypoint_4; }
	inline WaypointU5BU5D_t2459722300** get_address_of__waypoint_4() { return &____waypoint_4; }
	inline void set__waypoint_4(WaypointU5BU5D_t2459722300* value)
	{
		____waypoint_4 = value;
		Il2CppCodeGenWriteBarrier(&____waypoint_4, value);
	}

	inline static int32_t get_offset_of__current_5() { return static_cast<int32_t>(offsetof(Navigation_t3856131636, ____current_5)); }
	inline Waypoint_t765160481 * get__current_5() const { return ____current_5; }
	inline Waypoint_t765160481 ** get_address_of__current_5() { return &____current_5; }
	inline void set__current_5(Waypoint_t765160481 * value)
	{
		____current_5 = value;
		Il2CppCodeGenWriteBarrier(&____current_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
