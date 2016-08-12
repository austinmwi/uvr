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

// Gvr.Internal.EmulatorControllerProvider
struct EmulatorControllerProvider_t2215418106;
// Gvr.Internal.ControllerState
struct ControllerState_t3958628717;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GvrController_EmulatorConnectionM707866678.h"
#include "AssemblyU2DCSharp_Gvr_Internal_ControllerState3958628717.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorTouchEvent4130889448.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorOrientation3633305399.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorButtonEvent2646560587.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorGyroEvent536468654.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorAccelEvent73037535.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void Gvr.Internal.EmulatorControllerProvider::.ctor(GvrController/EmulatorConnectionMode,System.Boolean,System.Boolean)
extern "C"  void EmulatorControllerProvider__ctor_m3175471741 (EmulatorControllerProvider_t2215418106 * __this, int32_t ___connectionMode, bool ___enableGyro, bool ___enableAccel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorControllerProvider::ReadState(Gvr.Internal.ControllerState)
extern "C"  void EmulatorControllerProvider_ReadState_m3768787725 (EmulatorControllerProvider_t2215418106 * __this, ControllerState_t3958628717 * ___outState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorControllerProvider::OnPause()
extern "C"  void EmulatorControllerProvider_OnPause_m2568284888 (EmulatorControllerProvider_t2215418106 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorControllerProvider::OnResume()
extern "C"  void EmulatorControllerProvider_OnResume_m698006701 (EmulatorControllerProvider_t2215418106 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorControllerProvider::HandleTouchEvent(Gvr.Internal.EmulatorTouchEvent)
extern "C"  void EmulatorControllerProvider_HandleTouchEvent_m332279960 (EmulatorControllerProvider_t2215418106 * __this, EmulatorTouchEvent_t4130889448  ___touchEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorControllerProvider::HandleOrientationEvent(Gvr.Internal.EmulatorOrientationEvent)
extern "C"  void EmulatorControllerProvider_HandleOrientationEvent_m271881722 (EmulatorControllerProvider_t2215418106 * __this, EmulatorOrientationEvent_t3633305399  ___orientationEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorControllerProvider::HandleButtonEvent(Gvr.Internal.EmulatorButtonEvent)
extern "C"  void EmulatorControllerProvider_HandleButtonEvent_m2116400596 (EmulatorControllerProvider_t2215418106 * __this, EmulatorButtonEvent_t2646560587  ___buttonEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorControllerProvider::HandleGyroEvent(Gvr.Internal.EmulatorGyroEvent)
extern "C"  void EmulatorControllerProvider_HandleGyroEvent_m1056460020 (EmulatorControllerProvider_t2215418106 * __this, EmulatorGyroEvent_t536468654  ___gyroEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorControllerProvider::HandleAccelEvent(Gvr.Internal.EmulatorAccelEvent)
extern "C"  void EmulatorControllerProvider_HandleAccelEvent_m1548884586 (EmulatorControllerProvider_t2215418106 * __this, EmulatorAccelEvent_t73037535  ___accelEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Gvr.Internal.EmulatorControllerProvider::ConvertEmulatorQuaternion(UnityEngine.Quaternion)
extern "C"  Quaternion_t1891715979  EmulatorControllerProvider_ConvertEmulatorQuaternion_m623505530 (Il2CppObject * __this /* static, unused */, Quaternion_t1891715979  ___emulatorQuat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Gvr.Internal.EmulatorControllerProvider::ConvertEmulatorGyro(UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  EmulatorControllerProvider_ConvertEmulatorGyro_m2568741479 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___emulatorGyro, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Gvr.Internal.EmulatorControllerProvider::ConvertEmulatorAccel(UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  EmulatorControllerProvider_ConvertEmulatorAccel_m3099251858 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___emulatorAccel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorControllerProvider::Recenter()
extern "C"  void EmulatorControllerProvider_Recenter_m2909363977 (EmulatorControllerProvider_t2215418106 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
