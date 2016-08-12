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
#include "UnityEngine_UnityEngine_Color1588175760.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// fadeMaterials
struct  fadeMaterials_t484381968  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject fadeMaterials::fadeObject
	GameObject_t4012695102 * ___fadeObject_2;
	// UnityEngine.Color fadeMaterials::originalColor
	Color_t1588175760  ___originalColor_3;
	// UnityEngine.Color fadeMaterials::currentColor
	Color_t1588175760  ___currentColor_4;

public:
	inline static int32_t get_offset_of_fadeObject_2() { return static_cast<int32_t>(offsetof(fadeMaterials_t484381968, ___fadeObject_2)); }
	inline GameObject_t4012695102 * get_fadeObject_2() const { return ___fadeObject_2; }
	inline GameObject_t4012695102 ** get_address_of_fadeObject_2() { return &___fadeObject_2; }
	inline void set_fadeObject_2(GameObject_t4012695102 * value)
	{
		___fadeObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___fadeObject_2, value);
	}

	inline static int32_t get_offset_of_originalColor_3() { return static_cast<int32_t>(offsetof(fadeMaterials_t484381968, ___originalColor_3)); }
	inline Color_t1588175760  get_originalColor_3() const { return ___originalColor_3; }
	inline Color_t1588175760 * get_address_of_originalColor_3() { return &___originalColor_3; }
	inline void set_originalColor_3(Color_t1588175760  value)
	{
		___originalColor_3 = value;
	}

	inline static int32_t get_offset_of_currentColor_4() { return static_cast<int32_t>(offsetof(fadeMaterials_t484381968, ___currentColor_4)); }
	inline Color_t1588175760  get_currentColor_4() const { return ___currentColor_4; }
	inline Color_t1588175760 * get_address_of_currentColor_4() { return &___currentColor_4; }
	inline void set_currentColor_4(Color_t1588175760  value)
	{
		___currentColor_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
