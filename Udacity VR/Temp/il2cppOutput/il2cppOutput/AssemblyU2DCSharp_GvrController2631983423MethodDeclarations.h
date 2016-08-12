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

// GvrController
struct GvrController_t2631983423;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GvrConnectionState356483216.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

// System.Void GvrController::.ctor()
extern "C"  void GvrController__ctor_m1884911372 (GvrController_t2631983423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GvrConnectionState GvrController::get_State()
extern "C"  int32_t GvrController_get_State_m2128122303 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion GvrController::get_Orientation()
extern "C"  Quaternion_t1891715979  GvrController_get_Orientation_m3803969689 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 GvrController::get_Gyro()
extern "C"  Vector3_t3525329789  GvrController_get_Gyro_m2241143030 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 GvrController::get_Accel()
extern "C"  Vector3_t3525329789  GvrController_get_Accel_m3376943011 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrController::get_IsTouching()
extern "C"  bool GvrController_get_IsTouching_m3074449754 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrController::get_TouchDown()
extern "C"  bool GvrController_get_TouchDown_m1749684150 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrController::get_TouchUp()
extern "C"  bool GvrController_get_TouchUp_m2639194159 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 GvrController::get_TouchPos()
extern "C"  Vector2_t3525329788  GvrController_get_TouchPos_m941489179 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrController::get_Recentering()
extern "C"  bool GvrController_get_Recentering_m2662566543 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrController::get_Recentered()
extern "C"  bool GvrController_get_Recentered_m85758516 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrController::get_ClickButton()
extern "C"  bool GvrController_get_ClickButton_m3142312655 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrController::get_ClickButtonDown()
extern "C"  bool GvrController_get_ClickButtonDown_m3452550161 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrController::get_ClickButtonUp()
extern "C"  bool GvrController_get_ClickButtonUp_m401862474 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrController::get_AppButton()
extern "C"  bool GvrController_get_AppButton_m135904104 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrController::get_AppButtonDown()
extern "C"  bool GvrController_get_AppButtonDown_m3629621290 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrController::get_AppButtonUp()
extern "C"  bool GvrController_get_AppButtonUp_m1756235171 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GvrController::get_ErrorDetails()
extern "C"  String_t* GvrController_get_ErrorDetails_m473217304 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrController::Awake()
extern "C"  void GvrController_Awake_m2122516591 (GvrController_t2631983423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrController::OnDestroy()
extern "C"  void GvrController_OnDestroy_m3108038149 (GvrController_t2631983423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrController::UpdateController()
extern "C"  void GvrController_UpdateController_m221634109 (GvrController_t2631983423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrController::OnApplicationPause(System.Boolean)
extern "C"  void GvrController_OnApplicationPause_m2400938100 (GvrController_t2631983423 * __this, bool ___paused, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrController::OnEnable()
extern "C"  void GvrController_OnEnable_m3063833850 (GvrController_t2631983423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrController::OnDisable()
extern "C"  void GvrController_OnDisable_m930506099 (GvrController_t2631983423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GvrController::EndOfFrame()
extern "C"  Il2CppObject * GvrController_EndOfFrame_m192876011 (GvrController_t2631983423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
