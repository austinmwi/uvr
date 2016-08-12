#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// qualityAdjustment
struct  qualityAdjustment_t2774046668  : public MonoBehaviour_t3012272455
{
public:
	// System.Single qualityAdjustment::targetFrameRate
	float ___targetFrameRate_2;
	// System.Single qualityAdjustment::updateInterval
	float ___updateInterval_3;
	// System.Single qualityAdjustment::accum
	float ___accum_4;
	// System.Int32 qualityAdjustment::frames
	int32_t ___frames_5;
	// System.Single qualityAdjustment::timeleft
	float ___timeleft_6;

public:
	inline static int32_t get_offset_of_targetFrameRate_2() { return static_cast<int32_t>(offsetof(qualityAdjustment_t2774046668, ___targetFrameRate_2)); }
	inline float get_targetFrameRate_2() const { return ___targetFrameRate_2; }
	inline float* get_address_of_targetFrameRate_2() { return &___targetFrameRate_2; }
	inline void set_targetFrameRate_2(float value)
	{
		___targetFrameRate_2 = value;
	}

	inline static int32_t get_offset_of_updateInterval_3() { return static_cast<int32_t>(offsetof(qualityAdjustment_t2774046668, ___updateInterval_3)); }
	inline float get_updateInterval_3() const { return ___updateInterval_3; }
	inline float* get_address_of_updateInterval_3() { return &___updateInterval_3; }
	inline void set_updateInterval_3(float value)
	{
		___updateInterval_3 = value;
	}

	inline static int32_t get_offset_of_accum_4() { return static_cast<int32_t>(offsetof(qualityAdjustment_t2774046668, ___accum_4)); }
	inline float get_accum_4() const { return ___accum_4; }
	inline float* get_address_of_accum_4() { return &___accum_4; }
	inline void set_accum_4(float value)
	{
		___accum_4 = value;
	}

	inline static int32_t get_offset_of_frames_5() { return static_cast<int32_t>(offsetof(qualityAdjustment_t2774046668, ___frames_5)); }
	inline int32_t get_frames_5() const { return ___frames_5; }
	inline int32_t* get_address_of_frames_5() { return &___frames_5; }
	inline void set_frames_5(int32_t value)
	{
		___frames_5 = value;
	}

	inline static int32_t get_offset_of_timeleft_6() { return static_cast<int32_t>(offsetof(qualityAdjustment_t2774046668, ___timeleft_6)); }
	inline float get_timeleft_6() const { return ___timeleft_6; }
	inline float* get_address_of_timeleft_6() { return &___timeleft_6; }
	inline void set_timeleft_6(float value)
	{
		___timeleft_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
