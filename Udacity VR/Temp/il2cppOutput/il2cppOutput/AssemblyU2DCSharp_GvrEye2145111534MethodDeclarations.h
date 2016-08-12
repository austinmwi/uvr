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

// GvrEye
struct GvrEye_t2145111534;
// StereoController
struct StereoController_t1637909972;
// GvrHead
struct GvrHead_t2074018243;
// UnityEngine.Camera
struct Camera_t3533968274;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Camera3533968274.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"
#include "AssemblyU2DCSharp_StereoController1637909972.h"

// System.Void GvrEye::.ctor()
extern "C"  void GvrEye__ctor_m1588159085 (GvrEye_t2145111534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// StereoController GvrEye::get_Controller()
extern "C"  StereoController_t1637909972 * GvrEye_get_Controller_m3778449925 (GvrEye_t2145111534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GvrHead GvrEye::get_Head()
extern "C"  GvrHead_t2074018243 * GvrEye_get_Head_m1627607248 (GvrEye_t2145111534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera GvrEye::get_cam()
extern "C"  Camera_t3533968274 * GvrEye_get_cam_m3922732624 (GvrEye_t2145111534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrEye::set_cam(UnityEngine.Camera)
extern "C"  void GvrEye_set_cam_m3885206145 (GvrEye_t2145111534 * __this, Camera_t3533968274 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrEye::Awake()
extern "C"  void GvrEye_Awake_m1825764304 (GvrEye_t2145111534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrEye::Start()
extern "C"  void GvrEye_Start_m535296877 (GvrEye_t2145111534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrEye::FixProjection(UnityEngine.Matrix4x4&)
extern "C"  void GvrEye_FixProjection_m2747394593 (GvrEye_t2145111534 * __this, Matrix4x4_t277289660 * ___proj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect GvrEye::FixViewport(UnityEngine.Rect)
extern "C"  Rect_t1525428817  GvrEye_FixViewport_m3066308777 (GvrEye_t2145111534 * __this, Rect_t1525428817  ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrEye::UpdateStereoValues()
extern "C"  void GvrEye_UpdateStereoValues_m2534016154 (GvrEye_t2145111534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrEye::SetupStereo()
extern "C"  void GvrEye_SetupStereo_m1664582560 (GvrEye_t2145111534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrEye::OnPreCull()
extern "C"  void GvrEye_OnPreCull_m3734157537 (GvrEye_t2145111534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrEye::OnPostRender()
extern "C"  void GvrEye_OnPostRender_m1936150412 (GvrEye_t2145111534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrEye::CopyCameraAndMakeSideBySide(StereoController,System.Single,System.Single)
extern "C"  void GvrEye_CopyCameraAndMakeSideBySide_m3601211953 (GvrEye_t2145111534 * __this, StereoController_t1637909972 * ___controller, float ___parx, float ___pary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
