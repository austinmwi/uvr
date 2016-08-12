#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture2D
struct Texture2D_t2509538522;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// sceneTransition
struct  sceneTransition_t3970179841  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Texture2D sceneTransition::fadeOutTexture
	Texture2D_t2509538522 * ___fadeOutTexture_2;
	// System.Single sceneTransition::fadeSpeed
	float ___fadeSpeed_3;
	// System.Int32 sceneTransition::drawDepth
	int32_t ___drawDepth_4;
	// System.Single sceneTransition::alpha
	float ___alpha_5;
	// System.Int32 sceneTransition::fadeDir
	int32_t ___fadeDir_6;

public:
	inline static int32_t get_offset_of_fadeOutTexture_2() { return static_cast<int32_t>(offsetof(sceneTransition_t3970179841, ___fadeOutTexture_2)); }
	inline Texture2D_t2509538522 * get_fadeOutTexture_2() const { return ___fadeOutTexture_2; }
	inline Texture2D_t2509538522 ** get_address_of_fadeOutTexture_2() { return &___fadeOutTexture_2; }
	inline void set_fadeOutTexture_2(Texture2D_t2509538522 * value)
	{
		___fadeOutTexture_2 = value;
		Il2CppCodeGenWriteBarrier(&___fadeOutTexture_2, value);
	}

	inline static int32_t get_offset_of_fadeSpeed_3() { return static_cast<int32_t>(offsetof(sceneTransition_t3970179841, ___fadeSpeed_3)); }
	inline float get_fadeSpeed_3() const { return ___fadeSpeed_3; }
	inline float* get_address_of_fadeSpeed_3() { return &___fadeSpeed_3; }
	inline void set_fadeSpeed_3(float value)
	{
		___fadeSpeed_3 = value;
	}

	inline static int32_t get_offset_of_drawDepth_4() { return static_cast<int32_t>(offsetof(sceneTransition_t3970179841, ___drawDepth_4)); }
	inline int32_t get_drawDepth_4() const { return ___drawDepth_4; }
	inline int32_t* get_address_of_drawDepth_4() { return &___drawDepth_4; }
	inline void set_drawDepth_4(int32_t value)
	{
		___drawDepth_4 = value;
	}

	inline static int32_t get_offset_of_alpha_5() { return static_cast<int32_t>(offsetof(sceneTransition_t3970179841, ___alpha_5)); }
	inline float get_alpha_5() const { return ___alpha_5; }
	inline float* get_address_of_alpha_5() { return &___alpha_5; }
	inline void set_alpha_5(float value)
	{
		___alpha_5 = value;
	}

	inline static int32_t get_offset_of_fadeDir_6() { return static_cast<int32_t>(offsetof(sceneTransition_t3970179841, ___fadeDir_6)); }
	inline int32_t get_fadeDir_6() const { return ___fadeDir_6; }
	inline int32_t* get_address_of_fadeDir_6() { return &___fadeDir_6; }
	inline void set_fadeDir_6(int32_t value)
	{
		___fadeDir_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
