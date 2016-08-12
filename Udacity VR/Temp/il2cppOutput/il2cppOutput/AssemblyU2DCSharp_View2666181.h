#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_RaycastHit46221527.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// View
struct  View_t2666181  : public MonoBehaviour_t3012272455
{
public:
	// System.Boolean View::focused
	bool ___focused_2;
	// UnityEngine.RaycastHit View::focus
	RaycastHit_t46221527  ___focus_3;
	// System.Boolean View::fade
	bool ___fade_4;
	// System.Boolean View::mouselook
	bool ___mouselook_5;

public:
	inline static int32_t get_offset_of_focused_2() { return static_cast<int32_t>(offsetof(View_t2666181, ___focused_2)); }
	inline bool get_focused_2() const { return ___focused_2; }
	inline bool* get_address_of_focused_2() { return &___focused_2; }
	inline void set_focused_2(bool value)
	{
		___focused_2 = value;
	}

	inline static int32_t get_offset_of_focus_3() { return static_cast<int32_t>(offsetof(View_t2666181, ___focus_3)); }
	inline RaycastHit_t46221527  get_focus_3() const { return ___focus_3; }
	inline RaycastHit_t46221527 * get_address_of_focus_3() { return &___focus_3; }
	inline void set_focus_3(RaycastHit_t46221527  value)
	{
		___focus_3 = value;
	}

	inline static int32_t get_offset_of_fade_4() { return static_cast<int32_t>(offsetof(View_t2666181, ___fade_4)); }
	inline bool get_fade_4() const { return ___fade_4; }
	inline bool* get_address_of_fade_4() { return &___fade_4; }
	inline void set_fade_4(bool value)
	{
		___fade_4 = value;
	}

	inline static int32_t get_offset_of_mouselook_5() { return static_cast<int32_t>(offsetof(View_t2666181, ___mouselook_5)); }
	inline bool get_mouselook_5() const { return ___mouselook_5; }
	inline bool* get_address_of_mouselook_5() { return &___mouselook_5; }
	inline void set_mouselook_5(bool value)
	{
		___mouselook_5 = value;
	}
};

struct View_t2666181_StaticFields
{
public:
	// UnityEngine.Vector2 View::_mouse
	Vector2_t3525329788  ____mouse_6;
	// UnityEngine.Vector2 View::_delta
	Vector2_t3525329788  ____delta_7;
	// UnityEngine.Vector2 View::_sensitivity
	Vector2_t3525329788  ____sensitivity_8;

public:
	inline static int32_t get_offset_of__mouse_6() { return static_cast<int32_t>(offsetof(View_t2666181_StaticFields, ____mouse_6)); }
	inline Vector2_t3525329788  get__mouse_6() const { return ____mouse_6; }
	inline Vector2_t3525329788 * get_address_of__mouse_6() { return &____mouse_6; }
	inline void set__mouse_6(Vector2_t3525329788  value)
	{
		____mouse_6 = value;
	}

	inline static int32_t get_offset_of__delta_7() { return static_cast<int32_t>(offsetof(View_t2666181_StaticFields, ____delta_7)); }
	inline Vector2_t3525329788  get__delta_7() const { return ____delta_7; }
	inline Vector2_t3525329788 * get_address_of__delta_7() { return &____delta_7; }
	inline void set__delta_7(Vector2_t3525329788  value)
	{
		____delta_7 = value;
	}

	inline static int32_t get_offset_of__sensitivity_8() { return static_cast<int32_t>(offsetof(View_t2666181_StaticFields, ____sensitivity_8)); }
	inline Vector2_t3525329788  get__sensitivity_8() const { return ____sensitivity_8; }
	inline Vector2_t3525329788 * get_address_of__sensitivity_8() { return &____sensitivity_8; }
	inline void set__sensitivity_8(Vector2_t3525329788  value)
	{
		____sensitivity_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
