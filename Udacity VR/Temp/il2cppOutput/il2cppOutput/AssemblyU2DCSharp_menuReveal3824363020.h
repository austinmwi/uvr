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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// menuReveal
struct  menuReveal_t3824363020  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject menuReveal::menuOverlay
	GameObject_t4012695102 * ___menuOverlay_2;
	// UnityEngine.GameObject[] menuReveal::hideItems
	GameObjectU5BU5D_t3499186955* ___hideItems_3;
	// System.Boolean menuReveal::menuActive
	bool ___menuActive_4;

public:
	inline static int32_t get_offset_of_menuOverlay_2() { return static_cast<int32_t>(offsetof(menuReveal_t3824363020, ___menuOverlay_2)); }
	inline GameObject_t4012695102 * get_menuOverlay_2() const { return ___menuOverlay_2; }
	inline GameObject_t4012695102 ** get_address_of_menuOverlay_2() { return &___menuOverlay_2; }
	inline void set_menuOverlay_2(GameObject_t4012695102 * value)
	{
		___menuOverlay_2 = value;
		Il2CppCodeGenWriteBarrier(&___menuOverlay_2, value);
	}

	inline static int32_t get_offset_of_hideItems_3() { return static_cast<int32_t>(offsetof(menuReveal_t3824363020, ___hideItems_3)); }
	inline GameObjectU5BU5D_t3499186955* get_hideItems_3() const { return ___hideItems_3; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_hideItems_3() { return &___hideItems_3; }
	inline void set_hideItems_3(GameObjectU5BU5D_t3499186955* value)
	{
		___hideItems_3 = value;
		Il2CppCodeGenWriteBarrier(&___hideItems_3, value);
	}

	inline static int32_t get_offset_of_menuActive_4() { return static_cast<int32_t>(offsetof(menuReveal_t3824363020, ___menuActive_4)); }
	inline bool get_menuActive_4() const { return ___menuActive_4; }
	inline bool* get_address_of_menuActive_4() { return &___menuActive_4; }
	inline void set_menuActive_4(bool value)
	{
		___menuActive_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
