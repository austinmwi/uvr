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
	// UnityEngine.Material fadeMaterials::material1
	Material_t1886596500 * ___material1_3;
	// UnityEngine.Material fadeMaterials::material2
	Material_t1886596500 * ___material2_4;
	// UnityEngine.Color fadeMaterials::originalColor
	Color_t1588175760  ___originalColor_5;
	// UnityEngine.Color fadeMaterials::currentColor
	Color_t1588175760  ___currentColor_6;

public:
	inline static int32_t get_offset_of_fadeObject_2() { return static_cast<int32_t>(offsetof(fadeMaterials_t484381968, ___fadeObject_2)); }
	inline GameObject_t4012695102 * get_fadeObject_2() const { return ___fadeObject_2; }
	inline GameObject_t4012695102 ** get_address_of_fadeObject_2() { return &___fadeObject_2; }
	inline void set_fadeObject_2(GameObject_t4012695102 * value)
	{
		___fadeObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___fadeObject_2, value);
	}

	inline static int32_t get_offset_of_material1_3() { return static_cast<int32_t>(offsetof(fadeMaterials_t484381968, ___material1_3)); }
	inline Material_t1886596500 * get_material1_3() const { return ___material1_3; }
	inline Material_t1886596500 ** get_address_of_material1_3() { return &___material1_3; }
	inline void set_material1_3(Material_t1886596500 * value)
	{
		___material1_3 = value;
		Il2CppCodeGenWriteBarrier(&___material1_3, value);
	}

	inline static int32_t get_offset_of_material2_4() { return static_cast<int32_t>(offsetof(fadeMaterials_t484381968, ___material2_4)); }
	inline Material_t1886596500 * get_material2_4() const { return ___material2_4; }
	inline Material_t1886596500 ** get_address_of_material2_4() { return &___material2_4; }
	inline void set_material2_4(Material_t1886596500 * value)
	{
		___material2_4 = value;
		Il2CppCodeGenWriteBarrier(&___material2_4, value);
	}

	inline static int32_t get_offset_of_originalColor_5() { return static_cast<int32_t>(offsetof(fadeMaterials_t484381968, ___originalColor_5)); }
	inline Color_t1588175760  get_originalColor_5() const { return ___originalColor_5; }
	inline Color_t1588175760 * get_address_of_originalColor_5() { return &___originalColor_5; }
	inline void set_originalColor_5(Color_t1588175760  value)
	{
		___originalColor_5 = value;
	}

	inline static int32_t get_offset_of_currentColor_6() { return static_cast<int32_t>(offsetof(fadeMaterials_t484381968, ___currentColor_6)); }
	inline Color_t1588175760  get_currentColor_6() const { return ___currentColor_6; }
	inline Color_t1588175760 * get_address_of_currentColor_6() { return &___currentColor_6; }
	inline void set_currentColor_6(Color_t1588175760  value)
	{
		___currentColor_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
