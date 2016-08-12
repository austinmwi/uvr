#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GUIText
struct GUIText_t2614635829;
// UnityEngine.UI.Text
struct Text_t3286458198;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// displayFrames
struct  displayFrames_t2111008776  : public MonoBehaviour_t3012272455
{
public:
	// System.Single displayFrames::updateInterval
	float ___updateInterval_2;
	// System.Single displayFrames::accum
	float ___accum_3;
	// System.Int32 displayFrames::frames
	int32_t ___frames_4;
	// System.Single displayFrames::timeleft
	float ___timeleft_5;
	// UnityEngine.GUIText displayFrames::guiText
	GUIText_t2614635829 * ___guiText_6;
	// UnityEngine.UI.Text displayFrames::displayText
	Text_t3286458198 * ___displayText_7;

public:
	inline static int32_t get_offset_of_updateInterval_2() { return static_cast<int32_t>(offsetof(displayFrames_t2111008776, ___updateInterval_2)); }
	inline float get_updateInterval_2() const { return ___updateInterval_2; }
	inline float* get_address_of_updateInterval_2() { return &___updateInterval_2; }
	inline void set_updateInterval_2(float value)
	{
		___updateInterval_2 = value;
	}

	inline static int32_t get_offset_of_accum_3() { return static_cast<int32_t>(offsetof(displayFrames_t2111008776, ___accum_3)); }
	inline float get_accum_3() const { return ___accum_3; }
	inline float* get_address_of_accum_3() { return &___accum_3; }
	inline void set_accum_3(float value)
	{
		___accum_3 = value;
	}

	inline static int32_t get_offset_of_frames_4() { return static_cast<int32_t>(offsetof(displayFrames_t2111008776, ___frames_4)); }
	inline int32_t get_frames_4() const { return ___frames_4; }
	inline int32_t* get_address_of_frames_4() { return &___frames_4; }
	inline void set_frames_4(int32_t value)
	{
		___frames_4 = value;
	}

	inline static int32_t get_offset_of_timeleft_5() { return static_cast<int32_t>(offsetof(displayFrames_t2111008776, ___timeleft_5)); }
	inline float get_timeleft_5() const { return ___timeleft_5; }
	inline float* get_address_of_timeleft_5() { return &___timeleft_5; }
	inline void set_timeleft_5(float value)
	{
		___timeleft_5 = value;
	}

	inline static int32_t get_offset_of_guiText_6() { return static_cast<int32_t>(offsetof(displayFrames_t2111008776, ___guiText_6)); }
	inline GUIText_t2614635829 * get_guiText_6() const { return ___guiText_6; }
	inline GUIText_t2614635829 ** get_address_of_guiText_6() { return &___guiText_6; }
	inline void set_guiText_6(GUIText_t2614635829 * value)
	{
		___guiText_6 = value;
		Il2CppCodeGenWriteBarrier(&___guiText_6, value);
	}

	inline static int32_t get_offset_of_displayText_7() { return static_cast<int32_t>(offsetof(displayFrames_t2111008776, ___displayText_7)); }
	inline Text_t3286458198 * get_displayText_7() const { return ___displayText_7; }
	inline Text_t3286458198 ** get_address_of_displayText_7() { return &___displayText_7; }
	inline void set_displayText_7(Text_t3286458198 * value)
	{
		___displayText_7 = value;
		Il2CppCodeGenWriteBarrier(&___displayText_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
