#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t3286458198;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FPS
struct  FPS_t69833  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.UI.Text FPS::textField
	Text_t3286458198 * ___textField_2;
	// System.Single FPS::fps
	float ___fps_3;

public:
	inline static int32_t get_offset_of_textField_2() { return static_cast<int32_t>(offsetof(FPS_t69833, ___textField_2)); }
	inline Text_t3286458198 * get_textField_2() const { return ___textField_2; }
	inline Text_t3286458198 ** get_address_of_textField_2() { return &___textField_2; }
	inline void set_textField_2(Text_t3286458198 * value)
	{
		___textField_2 = value;
		Il2CppCodeGenWriteBarrier(&___textField_2, value);
	}

	inline static int32_t get_offset_of_fps_3() { return static_cast<int32_t>(offsetof(FPS_t69833, ___fps_3)); }
	inline float get_fps_3() const { return ___fps_3; }
	inline float* get_address_of_fps_3() { return &___fps_3; }
	inline void set_fps_3(float value)
	{
		___fps_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
