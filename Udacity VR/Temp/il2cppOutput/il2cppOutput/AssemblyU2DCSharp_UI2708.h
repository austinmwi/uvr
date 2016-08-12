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
// UnityEngine.Material
struct Material_t1886596500;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_UI_UiState1214667325.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UI
struct  UI_t2708  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject UI::options_object
	GameObject_t4012695102 * ___options_object_2;
	// UnityEngine.GameObject UI::main_object
	GameObject_t4012695102 * ___main_object_3;
	// UnityEngine.GameObject UI::scenes_object
	GameObject_t4012695102 * ___scenes_object_4;
	// UnityEngine.GameObject UI::overlay_object
	GameObject_t4012695102 * ___overlay_object_5;
	// UnityEngine.GameObject UI::reticle_object
	GameObject_t4012695102 * ___reticle_object_6;
	// UnityEngine.Material UI::_reticle_material
	Material_t1886596500 * ____reticle_material_7;
	// UI/UiState UI::_state
	int32_t ____state_8;
	// UI/UiState UI::_state_previous
	int32_t ____state_previous_9;

public:
	inline static int32_t get_offset_of_options_object_2() { return static_cast<int32_t>(offsetof(UI_t2708, ___options_object_2)); }
	inline GameObject_t4012695102 * get_options_object_2() const { return ___options_object_2; }
	inline GameObject_t4012695102 ** get_address_of_options_object_2() { return &___options_object_2; }
	inline void set_options_object_2(GameObject_t4012695102 * value)
	{
		___options_object_2 = value;
		Il2CppCodeGenWriteBarrier(&___options_object_2, value);
	}

	inline static int32_t get_offset_of_main_object_3() { return static_cast<int32_t>(offsetof(UI_t2708, ___main_object_3)); }
	inline GameObject_t4012695102 * get_main_object_3() const { return ___main_object_3; }
	inline GameObject_t4012695102 ** get_address_of_main_object_3() { return &___main_object_3; }
	inline void set_main_object_3(GameObject_t4012695102 * value)
	{
		___main_object_3 = value;
		Il2CppCodeGenWriteBarrier(&___main_object_3, value);
	}

	inline static int32_t get_offset_of_scenes_object_4() { return static_cast<int32_t>(offsetof(UI_t2708, ___scenes_object_4)); }
	inline GameObject_t4012695102 * get_scenes_object_4() const { return ___scenes_object_4; }
	inline GameObject_t4012695102 ** get_address_of_scenes_object_4() { return &___scenes_object_4; }
	inline void set_scenes_object_4(GameObject_t4012695102 * value)
	{
		___scenes_object_4 = value;
		Il2CppCodeGenWriteBarrier(&___scenes_object_4, value);
	}

	inline static int32_t get_offset_of_overlay_object_5() { return static_cast<int32_t>(offsetof(UI_t2708, ___overlay_object_5)); }
	inline GameObject_t4012695102 * get_overlay_object_5() const { return ___overlay_object_5; }
	inline GameObject_t4012695102 ** get_address_of_overlay_object_5() { return &___overlay_object_5; }
	inline void set_overlay_object_5(GameObject_t4012695102 * value)
	{
		___overlay_object_5 = value;
		Il2CppCodeGenWriteBarrier(&___overlay_object_5, value);
	}

	inline static int32_t get_offset_of_reticle_object_6() { return static_cast<int32_t>(offsetof(UI_t2708, ___reticle_object_6)); }
	inline GameObject_t4012695102 * get_reticle_object_6() const { return ___reticle_object_6; }
	inline GameObject_t4012695102 ** get_address_of_reticle_object_6() { return &___reticle_object_6; }
	inline void set_reticle_object_6(GameObject_t4012695102 * value)
	{
		___reticle_object_6 = value;
		Il2CppCodeGenWriteBarrier(&___reticle_object_6, value);
	}

	inline static int32_t get_offset_of__reticle_material_7() { return static_cast<int32_t>(offsetof(UI_t2708, ____reticle_material_7)); }
	inline Material_t1886596500 * get__reticle_material_7() const { return ____reticle_material_7; }
	inline Material_t1886596500 ** get_address_of__reticle_material_7() { return &____reticle_material_7; }
	inline void set__reticle_material_7(Material_t1886596500 * value)
	{
		____reticle_material_7 = value;
		Il2CppCodeGenWriteBarrier(&____reticle_material_7, value);
	}

	inline static int32_t get_offset_of__state_8() { return static_cast<int32_t>(offsetof(UI_t2708, ____state_8)); }
	inline int32_t get__state_8() const { return ____state_8; }
	inline int32_t* get_address_of__state_8() { return &____state_8; }
	inline void set__state_8(int32_t value)
	{
		____state_8 = value;
	}

	inline static int32_t get_offset_of__state_previous_9() { return static_cast<int32_t>(offsetof(UI_t2708, ____state_previous_9)); }
	inline int32_t get__state_previous_9() const { return ____state_previous_9; }
	inline int32_t* get_address_of__state_previous_9() { return &____state_previous_9; }
	inline void set__state_previous_9(int32_t value)
	{
		____state_previous_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
