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

// Gvr.Internal.GvrDevice
struct GvrDevice_t1224326321;
// System.Uri
struct Uri_t2776692961;
// UnityEngine.RenderTexture
struct RenderTexture_t12905170;
// System.Single[]
struct SingleU5BU5D_t1219431280;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri2776692961.h"
#include "UnityEngine_UnityEngine_RenderTexture12905170.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"

// System.Void Gvr.Internal.GvrDevice::.ctor()
extern "C"  void GvrDevice__ctor_m1423398856 (GvrDevice_t1224326321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.GvrDevice::SetDistortionCorrectionEnabled(System.Boolean)
extern "C"  void GvrDevice_SetDistortionCorrectionEnabled_m2913670743 (GvrDevice_t1224326321 * __this, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.GvrDevice::SetNeckModelScale(System.Single)
extern "C"  void GvrDevice_SetNeckModelScale_m3331390307 (GvrDevice_t1224326321 * __this, float ___scale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.GvrDevice::SetAutoDriftCorrectionEnabled(System.Boolean)
extern "C"  void GvrDevice_SetAutoDriftCorrectionEnabled_m1682738888 (GvrDevice_t1224326321 * __this, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.GvrDevice::SetElectronicDisplayStabilizationEnabled(System.Boolean)
extern "C"  void GvrDevice_SetElectronicDisplayStabilizationEnabled_m4050788441 (GvrDevice_t1224326321 * __this, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Gvr.Internal.GvrDevice::SetDefaultDeviceProfile(System.Uri)
extern "C"  bool GvrDevice_SetDefaultDeviceProfile_m2521560537 (GvrDevice_t1224326321 * __this, Uri_t2776692961 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.GvrDevice::Init()
extern "C"  void GvrDevice_Init_m3184041356 (GvrDevice_t1224326321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.GvrDevice::UpdateState()
extern "C"  void GvrDevice_UpdateState_m465173614 (GvrDevice_t1224326321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.GvrDevice::UpdateScreenData()
extern "C"  void GvrDevice_UpdateScreenData_m1629150235 (GvrDevice_t1224326321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.GvrDevice::Recenter()
extern "C"  void GvrDevice_Recenter_m2568174916 (GvrDevice_t1224326321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.GvrDevice::PostRender(UnityEngine.RenderTexture)
extern "C"  void GvrDevice_PostRender_m416398930 (GvrDevice_t1224326321 * __this, RenderTexture_t12905170 * ___stereoScreen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.GvrDevice::OnPause(System.Boolean)
extern "C"  void GvrDevice_OnPause_m4205322228 (GvrDevice_t1224326321 * __this, bool ___pause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.GvrDevice::OnApplicationQuit()
extern "C"  void GvrDevice_OnApplicationQuit_m2498910534 (GvrDevice_t1224326321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.GvrDevice::UpdateView()
extern "C"  void GvrDevice_UpdateView_m4247274442 (GvrDevice_t1224326321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.GvrDevice::UpdateProfile()
extern "C"  void GvrDevice_UpdateProfile_m1437107334 (GvrDevice_t1224326321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Gvr.Internal.GvrDevice::ExtractMatrix(UnityEngine.Matrix4x4&,System.Single[],System.Int32)
extern "C"  int32_t GvrDevice_ExtractMatrix_m3201518632 (Il2CppObject * __this /* static, unused */, Matrix4x4_t277289660 * ___mat, SingleU5BU5D_t1219431280* ___data, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.GvrDevice::ProcessEvents()
extern "C"  void GvrDevice_ProcessEvents_m3177491022 (GvrDevice_t1224326321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.GvrDevice::Start()
extern "C"  void GvrDevice_Start_m370536648 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.GvrDevice::SetTextureId(System.Int32)
extern "C"  void GvrDevice_SetTextureId_m4167450401 (Il2CppObject * __this /* static, unused */, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Gvr.Internal.GvrDevice::SetDefaultProfile(System.Byte[],System.Int32)
extern "C"  bool GvrDevice_SetDefaultProfile_m2779261322 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___uri, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.GvrDevice::SetUnityVersion(System.Byte[],System.Int32)
extern "C"  void GvrDevice_SetUnityVersion_m2985827961 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___version_str, int32_t ___version_length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.GvrDevice::EnableDistortionCorrection(System.Boolean)
extern "C"  void GvrDevice_EnableDistortionCorrection_m2970387633 (Il2CppObject * __this /* static, unused */, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.GvrDevice::EnableAutoDriftCorrection(System.Boolean)
extern "C"  void GvrDevice_EnableAutoDriftCorrection_m1568065810 (Il2CppObject * __this /* static, unused */, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.GvrDevice::EnableElectronicDisplayStabilization(System.Boolean)
extern "C"  void GvrDevice_EnableElectronicDisplayStabilization_m24518703 (Il2CppObject * __this /* static, unused */, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.GvrDevice::SetNeckModelFactor(System.Single)
extern "C"  void GvrDevice_SetNeckModelFactor_m2688982488 (Il2CppObject * __this /* static, unused */, float ___factor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.GvrDevice::ResetHeadTracker()
extern "C"  void GvrDevice_ResetHeadTracker_m780803621 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Gvr.Internal.GvrDevice::GetEventFlags()
extern "C"  int32_t GvrDevice_GetEventFlags_m3801919835 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.GvrDevice::GetProfile(System.Single[])
extern "C"  void GvrDevice_GetProfile_m1117619514 (Il2CppObject * __this /* static, unused */, SingleU5BU5D_t1219431280* ___profile, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.GvrDevice::GetHeadPose(System.Single[])
extern "C"  void GvrDevice_GetHeadPose_m2173297404 (Il2CppObject * __this /* static, unused */, SingleU5BU5D_t1219431280* ___pose, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.GvrDevice::GetViewParameters(System.Single[])
extern "C"  void GvrDevice_GetViewParameters_m1914175262 (Il2CppObject * __this /* static, unused */, SingleU5BU5D_t1219431280* ___viewParams, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.GvrDevice::Pause()
extern "C"  void GvrDevice_Pause_m1477524828 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.GvrDevice::Resume()
extern "C"  void GvrDevice_Resume_m1244183209 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.GvrDevice::Stop()
extern "C"  void GvrDevice_Stop_m3476048894 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
