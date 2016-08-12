#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>


#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

// System.Void UnityEngine.Random::set_seed(System.Int32)
extern "C"  void Random_set_seed_m58891993 (Il2CppObject * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
extern "C"  float Random_Range_m3362417303 (Il2CppObject * __this /* static, unused */, float ___min, float ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Random::get_value()
extern "C"  float Random_get_value_m2402066692 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Random::get_insideUnitSphere()
extern "C"  Vector3_t3525329789  Random_get_insideUnitSphere_m1884270890 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Random::INTERNAL_get_insideUnitSphere(UnityEngine.Vector3&)
extern "C"  void Random_INTERNAL_get_insideUnitSphere_m1119768947 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Random::GetRandomUnitCircle(UnityEngine.Vector2&)
extern "C"  void Random_GetRandomUnitCircle_m3555525383 (Il2CppObject * __this /* static, unused */, Vector2_t3525329788 * ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Random::get_insideUnitCircle()
extern "C"  Vector2_t3525329788  Random_get_insideUnitCircle_m3455477774 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Random::get_onUnitSphere()
extern "C"  Vector3_t3525329789  Random_get_onUnitSphere_m1999405197 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Random::INTERNAL_get_onUnitSphere(UnityEngine.Vector3&)
extern "C"  void Random_INTERNAL_get_onUnitSphere_m1824529494 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Random::get_rotation()
extern "C"  Quaternion_t1891715979  Random_get_rotation_m390819995 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Random::INTERNAL_get_rotation(UnityEngine.Quaternion&)
extern "C"  void Random_INTERNAL_get_rotation_m757737008 (Il2CppObject * __this /* static, unused */, Quaternion_t1891715979 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Random::ColorHSV()
extern "C"  Color_t1588175760  Random_ColorHSV_m3233070633 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Random::ColorHSV(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  Color_t1588175760  Random_ColorHSV_m1574526501 (Il2CppObject * __this /* static, unused */, float ___hueMin, float ___hueMax, float ___saturationMin, float ___saturationMax, float ___valueMin, float ___valueMax, float ___alphaMin, float ___alphaMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
