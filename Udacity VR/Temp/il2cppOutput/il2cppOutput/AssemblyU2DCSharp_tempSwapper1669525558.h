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

// tempSwapper
struct  tempSwapper_t1669525558  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject[] tempSwapper::monoObjects
	GameObjectU5BU5D_t3499186955* ___monoObjects_2;
	// UnityEngine.GameObject[] tempSwapper::stereoObjects
	GameObjectU5BU5D_t3499186955* ___stereoObjects_3;
	// UnityEngine.GameObject tempSwapper::cardboard
	GameObject_t4012695102 * ___cardboard_4;
	// System.Boolean tempSwapper::startInVR
	bool ___startInVR_5;

public:
	inline static int32_t get_offset_of_monoObjects_2() { return static_cast<int32_t>(offsetof(tempSwapper_t1669525558, ___monoObjects_2)); }
	inline GameObjectU5BU5D_t3499186955* get_monoObjects_2() const { return ___monoObjects_2; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_monoObjects_2() { return &___monoObjects_2; }
	inline void set_monoObjects_2(GameObjectU5BU5D_t3499186955* value)
	{
		___monoObjects_2 = value;
		Il2CppCodeGenWriteBarrier(&___monoObjects_2, value);
	}

	inline static int32_t get_offset_of_stereoObjects_3() { return static_cast<int32_t>(offsetof(tempSwapper_t1669525558, ___stereoObjects_3)); }
	inline GameObjectU5BU5D_t3499186955* get_stereoObjects_3() const { return ___stereoObjects_3; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_stereoObjects_3() { return &___stereoObjects_3; }
	inline void set_stereoObjects_3(GameObjectU5BU5D_t3499186955* value)
	{
		___stereoObjects_3 = value;
		Il2CppCodeGenWriteBarrier(&___stereoObjects_3, value);
	}

	inline static int32_t get_offset_of_cardboard_4() { return static_cast<int32_t>(offsetof(tempSwapper_t1669525558, ___cardboard_4)); }
	inline GameObject_t4012695102 * get_cardboard_4() const { return ___cardboard_4; }
	inline GameObject_t4012695102 ** get_address_of_cardboard_4() { return &___cardboard_4; }
	inline void set_cardboard_4(GameObject_t4012695102 * value)
	{
		___cardboard_4 = value;
		Il2CppCodeGenWriteBarrier(&___cardboard_4, value);
	}

	inline static int32_t get_offset_of_startInVR_5() { return static_cast<int32_t>(offsetof(tempSwapper_t1669525558, ___startInVR_5)); }
	inline bool get_startInVR_5() const { return ___startInVR_5; }
	inline bool* get_address_of_startInVR_5() { return &___startInVR_5; }
	inline void set_startInVR_5(bool value)
	{
		___startInVR_5 = value;
	}
};

struct tempSwapper_t1669525558_StaticFields
{
public:
	// System.Boolean tempSwapper::VRModeOn
	bool ___VRModeOn_6;

public:
	inline static int32_t get_offset_of_VRModeOn_6() { return static_cast<int32_t>(offsetof(tempSwapper_t1669525558_StaticFields, ___VRModeOn_6)); }
	inline bool get_VRModeOn_6() const { return ___VRModeOn_6; }
	inline bool* get_address_of_VRModeOn_6() { return &___VRModeOn_6; }
	inline void set_VRModeOn_6(bool value)
	{
		___VRModeOn_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
