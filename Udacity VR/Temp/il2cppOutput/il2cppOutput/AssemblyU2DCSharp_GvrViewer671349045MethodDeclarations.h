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

// GvrViewer
struct GvrViewer_t671349045;
// GvrViewer/StereoScreenChangeDelegate
struct StereoScreenChangeDelegate_t4234461465;
// System.Action
struct Action_t437523947;
// StereoController
struct StereoController_t1637909972;
// UnityEngine.RenderTexture
struct RenderTexture_t12905170;
// GvrProfile
struct GvrProfile_t2868291302;
// Pose3D
struct Pose3D_t2396367586;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GvrViewer_StereoScreenChangeDele4234461465.h"
#include "System_Core_System_Action437523947.h"
#include "AssemblyU2DCSharp_GvrViewer_DistortionCorrectionMe3847017660.h"
#include "AssemblyU2DCSharp_GvrViewer_BackButtonModes756131735.h"
#include "UnityEngine_UnityEngine_RenderTexture12905170.h"
#include "AssemblyU2DCSharp_GvrViewer_Eye70161.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"
#include "AssemblyU2DCSharp_GvrViewer_Distortion435440829.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

// System.Void GvrViewer::.ctor()
extern "C"  void GvrViewer__ctor_m2863900630 (GvrViewer_t671349045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::.cctor()
extern "C"  void GvrViewer__cctor_m2399477399 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::add_OnStereoScreenChanged(GvrViewer/StereoScreenChangeDelegate)
extern "C"  void GvrViewer_add_OnStereoScreenChanged_m3193520116 (GvrViewer_t671349045 * __this, StereoScreenChangeDelegate_t4234461465 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::remove_OnStereoScreenChanged(GvrViewer/StereoScreenChangeDelegate)
extern "C"  void GvrViewer_remove_OnStereoScreenChanged_m1594367569 (GvrViewer_t671349045 * __this, StereoScreenChangeDelegate_t4234461465 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::add_OnTrigger(System.Action)
extern "C"  void GvrViewer_add_OnTrigger_m4121957870 (GvrViewer_t671349045 * __this, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::remove_OnTrigger(System.Action)
extern "C"  void GvrViewer_remove_OnTrigger_m3859278001 (GvrViewer_t671349045 * __this, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::add_OnTilt(System.Action)
extern "C"  void GvrViewer_add_OnTilt_m452450677 (GvrViewer_t671349045 * __this, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::remove_OnTilt(System.Action)
extern "C"  void GvrViewer_remove_OnTilt_m458208658 (GvrViewer_t671349045 * __this, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::add_OnProfileChange(System.Action)
extern "C"  void GvrViewer_add_OnProfileChange_m3583128397 (GvrViewer_t671349045 * __this, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::remove_OnProfileChange(System.Action)
extern "C"  void GvrViewer_remove_OnProfileChange_m279160784 (GvrViewer_t671349045 * __this, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::add_OnBackButton(System.Action)
extern "C"  void GvrViewer_add_OnBackButton_m2267610425 (GvrViewer_t671349045 * __this, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::remove_OnBackButton(System.Action)
extern "C"  void GvrViewer_remove_OnBackButton_m2202046358 (GvrViewer_t671349045 * __this, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GvrViewer GvrViewer::get_Instance()
extern "C"  GvrViewer_t671349045 * GvrViewer_get_Instance_m3566439310 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::Create()
extern "C"  void GvrViewer_Create_m811289962 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// StereoController GvrViewer::get_Controller()
extern "C"  StereoController_t1637909972 * GvrViewer_get_Controller_m902507338 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrViewer::get_UILayerEnabled()
extern "C"  bool GvrViewer_get_UILayerEnabled_m3519260871 (GvrViewer_t671349045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::set_UILayerEnabled(System.Boolean)
extern "C"  void GvrViewer_set_UILayerEnabled_m3926442406 (GvrViewer_t671349045 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrViewer::get_VRModeEnabled()
extern "C"  bool GvrViewer_get_VRModeEnabled_m548071585 (GvrViewer_t671349045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::set_VRModeEnabled(System.Boolean)
extern "C"  void GvrViewer_set_VRModeEnabled_m1055428528 (GvrViewer_t671349045 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GvrViewer/DistortionCorrectionMethod GvrViewer::get_DistortionCorrection()
extern "C"  int32_t GvrViewer_get_DistortionCorrection_m736177803 (GvrViewer_t671349045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::set_DistortionCorrection(GvrViewer/DistortionCorrectionMethod)
extern "C"  void GvrViewer_set_DistortionCorrection_m4058061360 (GvrViewer_t671349045 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrViewer::get_EnableAlignmentMarker()
extern "C"  bool GvrViewer_get_EnableAlignmentMarker_m3124859065 (GvrViewer_t671349045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::set_EnableAlignmentMarker(System.Boolean)
extern "C"  void GvrViewer_set_EnableAlignmentMarker_m2252494280 (GvrViewer_t671349045 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrViewer::get_EnableSettingsButton()
extern "C"  bool GvrViewer_get_EnableSettingsButton_m2505113243 (GvrViewer_t671349045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::set_EnableSettingsButton(System.Boolean)
extern "C"  void GvrViewer_set_EnableSettingsButton_m1340339834 (GvrViewer_t671349045 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GvrViewer/BackButtonModes GvrViewer::get_BackButtonMode()
extern "C"  int32_t GvrViewer_get_BackButtonMode_m4011460349 (GvrViewer_t671349045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::set_BackButtonMode(GvrViewer/BackButtonModes)
extern "C"  void GvrViewer_set_BackButtonMode_m1306691470 (GvrViewer_t671349045 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GvrViewer::get_NeckModelScale()
extern "C"  float GvrViewer_get_NeckModelScale_m3334493387 (GvrViewer_t671349045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::set_NeckModelScale(System.Single)
extern "C"  void GvrViewer_set_NeckModelScale_m1980679168 (GvrViewer_t671349045 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrViewer::get_AutoDriftCorrection()
extern "C"  bool GvrViewer_get_AutoDriftCorrection_m3731276535 (GvrViewer_t671349045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::set_AutoDriftCorrection(System.Boolean)
extern "C"  void GvrViewer_set_AutoDriftCorrection_m3936729478 (GvrViewer_t671349045 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrViewer::get_ElectronicDisplayStabilization()
extern "C"  bool GvrViewer_get_ElectronicDisplayStabilization_m3459747612 (GvrViewer_t671349045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::set_ElectronicDisplayStabilization(System.Boolean)
extern "C"  void GvrViewer_set_ElectronicDisplayStabilization_m319823675 (GvrViewer_t671349045 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrViewer::get_NativeDistortionCorrectionSupported()
extern "C"  bool GvrViewer_get_NativeDistortionCorrectionSupported_m2478077435 (GvrViewer_t671349045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::set_NativeDistortionCorrectionSupported(System.Boolean)
extern "C"  void GvrViewer_set_NativeDistortionCorrectionSupported_m2620794250 (GvrViewer_t671349045 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrViewer::get_NativeUILayerSupported()
extern "C"  bool GvrViewer_get_NativeUILayerSupported_m1604532395 (GvrViewer_t671349045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::set_NativeUILayerSupported(System.Boolean)
extern "C"  void GvrViewer_set_NativeUILayerSupported_m1515883146 (GvrViewer_t671349045 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GvrViewer::get_StereoScreenScale()
extern "C"  float GvrViewer_get_StereoScreenScale_m2991826429 (GvrViewer_t671349045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::set_StereoScreenScale(System.Single)
extern "C"  void GvrViewer_set_StereoScreenScale_m43254158 (GvrViewer_t671349045 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture GvrViewer::get_StereoScreen()
extern "C"  RenderTexture_t12905170 * GvrViewer_get_StereoScreen_m1239568278 (GvrViewer_t671349045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::set_StereoScreen(UnityEngine.RenderTexture)
extern "C"  void GvrViewer_set_StereoScreen_m3538168789 (GvrViewer_t671349045 * __this, RenderTexture_t12905170 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GvrProfile GvrViewer::get_Profile()
extern "C"  GvrProfile_t2868291302 * GvrViewer_get_Profile_m2014631115 (GvrViewer_t671349045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pose3D GvrViewer::get_HeadPose()
extern "C"  Pose3D_t2396367586 * GvrViewer_get_HeadPose_m1174844813 (GvrViewer_t671349045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pose3D GvrViewer::EyePose(GvrViewer/Eye)
extern "C"  Pose3D_t2396367586 * GvrViewer_EyePose_m3312190474 (GvrViewer_t671349045 * __this, int32_t ___eye, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 GvrViewer::Projection(GvrViewer/Eye,GvrViewer/Distortion)
extern "C"  Matrix4x4_t277289660  GvrViewer_Projection_m2298415254 (GvrViewer_t671349045 * __this, int32_t ___eye, int32_t ___distortion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect GvrViewer::Viewport(GvrViewer/Eye,GvrViewer/Distortion)
extern "C"  Rect_t1525428817  GvrViewer_Viewport_m3951102502 (GvrViewer_t671349045 * __this, int32_t ___eye, int32_t ___distortion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 GvrViewer::get_ComfortableViewingRange()
extern "C"  Vector2_t3525329788  GvrViewer_get_ComfortableViewingRange_m2367934028 (GvrViewer_t671349045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::InitDevice()
extern "C"  void GvrViewer_InitDevice_m2301204212 (GvrViewer_t671349045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::Awake()
extern "C"  void GvrViewer_Awake_m3101505849 (GvrViewer_t671349045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::Start()
extern "C"  void GvrViewer_Start_m1811038422 (GvrViewer_t671349045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::AddPrePostRenderStages()
extern "C"  void GvrViewer_AddPrePostRenderStages_m3666641851 (GvrViewer_t671349045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrViewer::get_Triggered()
extern "C"  bool GvrViewer_get_Triggered_m895829718 (GvrViewer_t671349045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::set_Triggered(System.Boolean)
extern "C"  void GvrViewer_set_Triggered_m1610144037 (GvrViewer_t671349045 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrViewer::get_Tilted()
extern "C"  bool GvrViewer_get_Tilted_m1271751583 (GvrViewer_t671349045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::set_Tilted(System.Boolean)
extern "C"  void GvrViewer_set_Tilted_m140561022 (GvrViewer_t671349045 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrViewer::get_ProfileChanged()
extern "C"  bool GvrViewer_get_ProfileChanged_m62889614 (GvrViewer_t671349045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::set_ProfileChanged(System.Boolean)
extern "C"  void GvrViewer_set_ProfileChanged_m1594068781 (GvrViewer_t671349045 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrViewer::get_BackButtonPressed()
extern "C"  bool GvrViewer_get_BackButtonPressed_m3965489896 (GvrViewer_t671349045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::set_BackButtonPressed(System.Boolean)
extern "C"  void GvrViewer_set_BackButtonPressed_m4218668471 (GvrViewer_t671349045 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::UpdateState()
extern "C"  void GvrViewer_UpdateState_m1941015036 (GvrViewer_t671349045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::DispatchEvents()
extern "C"  void GvrViewer_DispatchEvents_m2972175329 (GvrViewer_t671349045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::PostRender(UnityEngine.RenderTexture)
extern "C"  void GvrViewer_PostRender_m2835153376 (GvrViewer_t671349045 * __this, RenderTexture_t12905170 * ___stereoScreen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::Recenter()
extern "C"  void GvrViewer_Recenter_m1243302518 (GvrViewer_t671349045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::ShowSettingsDialog()
extern "C"  void GvrViewer_ShowSettingsDialog_m2408930710 (GvrViewer_t671349045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::OnEnable()
extern "C"  void GvrViewer_OnEnable_m1009911792 (GvrViewer_t671349045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::OnDisable()
extern "C"  void GvrViewer_OnDisable_m1683431741 (GvrViewer_t671349045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::OnApplicationPause(System.Boolean)
extern "C"  void GvrViewer_OnApplicationPause_m3805481322 (GvrViewer_t671349045 * __this, bool ___pause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::OnApplicationFocus(System.Boolean)
extern "C"  void GvrViewer_OnApplicationFocus_m2351313996 (GvrViewer_t671349045 * __this, bool ___focus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::OnLevelWasLoaded(System.Int32)
extern "C"  void GvrViewer_OnLevelWasLoaded_m2530795688 (GvrViewer_t671349045 * __this, int32_t ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::OnApplicationQuit()
extern "C"  void GvrViewer_OnApplicationQuit_m4261479508 (GvrViewer_t671349045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::OnDestroy()
extern "C"  void GvrViewer_OnDestroy_m3860963791 (GvrViewer_t671349045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
