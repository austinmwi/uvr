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
// UnityEngine.CanvasRenderer[]
struct CanvasRendererU5BU5D_t2901501369;
// UnityEngine.UI.Text
struct Text_t3286458198;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InfoCanvas
struct  InfoCanvas_t700704710  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject[] InfoCanvas::collision
	GameObjectU5BU5D_t3499186955* ___collision_2;
	// UnityEngine.CanvasRenderer[] InfoCanvas::_canvas_renderer
	CanvasRendererU5BU5D_t2901501369* ____canvas_renderer_3;
	// System.Single InfoCanvas::_opacity
	float ____opacity_4;
	// System.Boolean InfoCanvas::_fade
	bool ____fade_5;
	// System.Single InfoCanvas::_fade_rate
	float ____fade_rate_6;
	// UnityEngine.UI.Text InfoCanvas::_text
	Text_t3286458198 * ____text_7;
	// UnityEngine.UI.Text InfoCanvas::_title
	Text_t3286458198 * ____title_8;

public:
	inline static int32_t get_offset_of_collision_2() { return static_cast<int32_t>(offsetof(InfoCanvas_t700704710, ___collision_2)); }
	inline GameObjectU5BU5D_t3499186955* get_collision_2() const { return ___collision_2; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_collision_2() { return &___collision_2; }
	inline void set_collision_2(GameObjectU5BU5D_t3499186955* value)
	{
		___collision_2 = value;
		Il2CppCodeGenWriteBarrier(&___collision_2, value);
	}

	inline static int32_t get_offset_of__canvas_renderer_3() { return static_cast<int32_t>(offsetof(InfoCanvas_t700704710, ____canvas_renderer_3)); }
	inline CanvasRendererU5BU5D_t2901501369* get__canvas_renderer_3() const { return ____canvas_renderer_3; }
	inline CanvasRendererU5BU5D_t2901501369** get_address_of__canvas_renderer_3() { return &____canvas_renderer_3; }
	inline void set__canvas_renderer_3(CanvasRendererU5BU5D_t2901501369* value)
	{
		____canvas_renderer_3 = value;
		Il2CppCodeGenWriteBarrier(&____canvas_renderer_3, value);
	}

	inline static int32_t get_offset_of__opacity_4() { return static_cast<int32_t>(offsetof(InfoCanvas_t700704710, ____opacity_4)); }
	inline float get__opacity_4() const { return ____opacity_4; }
	inline float* get_address_of__opacity_4() { return &____opacity_4; }
	inline void set__opacity_4(float value)
	{
		____opacity_4 = value;
	}

	inline static int32_t get_offset_of__fade_5() { return static_cast<int32_t>(offsetof(InfoCanvas_t700704710, ____fade_5)); }
	inline bool get__fade_5() const { return ____fade_5; }
	inline bool* get_address_of__fade_5() { return &____fade_5; }
	inline void set__fade_5(bool value)
	{
		____fade_5 = value;
	}

	inline static int32_t get_offset_of__fade_rate_6() { return static_cast<int32_t>(offsetof(InfoCanvas_t700704710, ____fade_rate_6)); }
	inline float get__fade_rate_6() const { return ____fade_rate_6; }
	inline float* get_address_of__fade_rate_6() { return &____fade_rate_6; }
	inline void set__fade_rate_6(float value)
	{
		____fade_rate_6 = value;
	}

	inline static int32_t get_offset_of__text_7() { return static_cast<int32_t>(offsetof(InfoCanvas_t700704710, ____text_7)); }
	inline Text_t3286458198 * get__text_7() const { return ____text_7; }
	inline Text_t3286458198 ** get_address_of__text_7() { return &____text_7; }
	inline void set__text_7(Text_t3286458198 * value)
	{
		____text_7 = value;
		Il2CppCodeGenWriteBarrier(&____text_7, value);
	}

	inline static int32_t get_offset_of__title_8() { return static_cast<int32_t>(offsetof(InfoCanvas_t700704710, ____title_8)); }
	inline Text_t3286458198 * get__title_8() const { return ____title_8; }
	inline Text_t3286458198 ** get_address_of__title_8() { return &____title_8; }
	inline void set__title_8(Text_t3286458198 * value)
	{
		____title_8 = value;
		Il2CppCodeGenWriteBarrier(&____title_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
