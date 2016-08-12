#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t1886596500;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EffectHilight
struct  EffectHilight_t281115076  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Color EffectHilight::hilight_color
	Color_t1588175760  ___hilight_color_2;
	// System.Single EffectHilight::speed
	float ___speed_3;
	// UnityEngine.Color EffectHilight::_origional_color
	Color_t1588175760  ____origional_color_4;
	// System.Single EffectHilight::_hilight
	float ____hilight_5;
	// System.Single EffectHilight::_hilight_fade_speed
	float ____hilight_fade_speed_6;
	// System.Boolean EffectHilight::_focused
	bool ____focused_7;
	// UnityEngine.Material EffectHilight::_material
	Material_t1886596500 * ____material_8;

public:
	inline static int32_t get_offset_of_hilight_color_2() { return static_cast<int32_t>(offsetof(EffectHilight_t281115076, ___hilight_color_2)); }
	inline Color_t1588175760  get_hilight_color_2() const { return ___hilight_color_2; }
	inline Color_t1588175760 * get_address_of_hilight_color_2() { return &___hilight_color_2; }
	inline void set_hilight_color_2(Color_t1588175760  value)
	{
		___hilight_color_2 = value;
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(EffectHilight_t281115076, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of__origional_color_4() { return static_cast<int32_t>(offsetof(EffectHilight_t281115076, ____origional_color_4)); }
	inline Color_t1588175760  get__origional_color_4() const { return ____origional_color_4; }
	inline Color_t1588175760 * get_address_of__origional_color_4() { return &____origional_color_4; }
	inline void set__origional_color_4(Color_t1588175760  value)
	{
		____origional_color_4 = value;
	}

	inline static int32_t get_offset_of__hilight_5() { return static_cast<int32_t>(offsetof(EffectHilight_t281115076, ____hilight_5)); }
	inline float get__hilight_5() const { return ____hilight_5; }
	inline float* get_address_of__hilight_5() { return &____hilight_5; }
	inline void set__hilight_5(float value)
	{
		____hilight_5 = value;
	}

	inline static int32_t get_offset_of__hilight_fade_speed_6() { return static_cast<int32_t>(offsetof(EffectHilight_t281115076, ____hilight_fade_speed_6)); }
	inline float get__hilight_fade_speed_6() const { return ____hilight_fade_speed_6; }
	inline float* get_address_of__hilight_fade_speed_6() { return &____hilight_fade_speed_6; }
	inline void set__hilight_fade_speed_6(float value)
	{
		____hilight_fade_speed_6 = value;
	}

	inline static int32_t get_offset_of__focused_7() { return static_cast<int32_t>(offsetof(EffectHilight_t281115076, ____focused_7)); }
	inline bool get__focused_7() const { return ____focused_7; }
	inline bool* get_address_of__focused_7() { return &____focused_7; }
	inline void set__focused_7(bool value)
	{
		____focused_7 = value;
	}

	inline static int32_t get_offset_of__material_8() { return static_cast<int32_t>(offsetof(EffectHilight_t281115076, ____material_8)); }
	inline Material_t1886596500 * get__material_8() const { return ____material_8; }
	inline Material_t1886596500 ** get_address_of__material_8() { return &____material_8; }
	inline void set__material_8(Material_t1886596500 * value)
	{
		____material_8 = value;
		Il2CppCodeGenWriteBarrier(&____material_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
