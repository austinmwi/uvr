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

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// onboardingScreenController
struct  onboardingScreenController_t3301330275  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject onboardingScreenController::screenCanvas
	GameObject_t4012695102 * ___screenCanvas_2;
	// System.Int32 onboardingScreenController::screenCount
	int32_t ___screenCount_3;
	// System.Int32 onboardingScreenController::currentScreen
	int32_t ___currentScreen_4;
	// System.Int32 onboardingScreenController::scrollLine
	int32_t ___scrollLine_5;

public:
	inline static int32_t get_offset_of_screenCanvas_2() { return static_cast<int32_t>(offsetof(onboardingScreenController_t3301330275, ___screenCanvas_2)); }
	inline GameObject_t4012695102 * get_screenCanvas_2() const { return ___screenCanvas_2; }
	inline GameObject_t4012695102 ** get_address_of_screenCanvas_2() { return &___screenCanvas_2; }
	inline void set_screenCanvas_2(GameObject_t4012695102 * value)
	{
		___screenCanvas_2 = value;
		Il2CppCodeGenWriteBarrier(&___screenCanvas_2, value);
	}

	inline static int32_t get_offset_of_screenCount_3() { return static_cast<int32_t>(offsetof(onboardingScreenController_t3301330275, ___screenCount_3)); }
	inline int32_t get_screenCount_3() const { return ___screenCount_3; }
	inline int32_t* get_address_of_screenCount_3() { return &___screenCount_3; }
	inline void set_screenCount_3(int32_t value)
	{
		___screenCount_3 = value;
	}

	inline static int32_t get_offset_of_currentScreen_4() { return static_cast<int32_t>(offsetof(onboardingScreenController_t3301330275, ___currentScreen_4)); }
	inline int32_t get_currentScreen_4() const { return ___currentScreen_4; }
	inline int32_t* get_address_of_currentScreen_4() { return &___currentScreen_4; }
	inline void set_currentScreen_4(int32_t value)
	{
		___currentScreen_4 = value;
	}

	inline static int32_t get_offset_of_scrollLine_5() { return static_cast<int32_t>(offsetof(onboardingScreenController_t3301330275, ___scrollLine_5)); }
	inline int32_t get_scrollLine_5() const { return ___scrollLine_5; }
	inline int32_t* get_address_of_scrollLine_5() { return &___scrollLine_5; }
	inline void set_scrollLine_5(int32_t value)
	{
		___scrollLine_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
