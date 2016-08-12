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

// GvrReticle
struct GvrReticle_t4275820913;
// UnityEngine.Camera
struct Camera_t3533968274;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Camera3533968274.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void GvrReticle::.ctor()
extern "C"  void GvrReticle__ctor_m949931594 (GvrReticle_t4275820913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrReticle::Start()
extern "C"  void GvrReticle_Start_m4192036682 (GvrReticle_t4275820913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrReticle::OnEnable()
extern "C"  void GvrReticle_OnEnable_m1944182012 (GvrReticle_t4275820913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrReticle::OnDisable()
extern "C"  void GvrReticle_OnDisable_m581037489 (GvrReticle_t4275820913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrReticle::Update()
extern "C"  void GvrReticle_Update_m1109970435 (GvrReticle_t4275820913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrReticle::OnGazeEnabled()
extern "C"  void GvrReticle_OnGazeEnabled_m138786757 (GvrReticle_t4275820913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrReticle::OnGazeDisabled()
extern "C"  void GvrReticle_OnGazeDisabled_m789845274 (GvrReticle_t4275820913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrReticle::OnGazeStart(UnityEngine.Camera,UnityEngine.GameObject,UnityEngine.Vector3,System.Boolean)
extern "C"  void GvrReticle_OnGazeStart_m602486102 (GvrReticle_t4275820913 * __this, Camera_t3533968274 * ___camera, GameObject_t4012695102 * ___targetObject, Vector3_t3525329789  ___intersectionPosition, bool ___isInteractive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrReticle::OnGazeStay(UnityEngine.Camera,UnityEngine.GameObject,UnityEngine.Vector3,System.Boolean)
extern "C"  void GvrReticle_OnGazeStay_m1858694823 (GvrReticle_t4275820913 * __this, Camera_t3533968274 * ___camera, GameObject_t4012695102 * ___targetObject, Vector3_t3525329789  ___intersectionPosition, bool ___isInteractive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrReticle::OnGazeExit(UnityEngine.Camera,UnityEngine.GameObject)
extern "C"  void GvrReticle_OnGazeExit_m4123333662 (GvrReticle_t4275820913 * __this, Camera_t3533968274 * ___camera, GameObject_t4012695102 * ___targetObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrReticle::OnGazeTriggerStart(UnityEngine.Camera)
extern "C"  void GvrReticle_OnGazeTriggerStart_m2973582540 (GvrReticle_t4275820913 * __this, Camera_t3533968274 * ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrReticle::OnGazeTriggerEnd(UnityEngine.Camera)
extern "C"  void GvrReticle_OnGazeTriggerEnd_m3980578821 (GvrReticle_t4275820913 * __this, Camera_t3533968274 * ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrReticle::GetPointerRadius(System.Single&,System.Single&)
extern "C"  void GvrReticle_GetPointerRadius_m2201644371 (GvrReticle_t4275820913 * __this, float* ___innerRadius, float* ___outerRadius, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrReticle::CreateReticleVertices()
extern "C"  void GvrReticle_CreateReticleVertices_m1117581529 (GvrReticle_t4275820913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrReticle::UpdateDiameters()
extern "C"  void GvrReticle_UpdateDiameters_m259365413 (GvrReticle_t4275820913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrReticle::SetGazeTarget(UnityEngine.Vector3,System.Boolean)
extern "C"  void GvrReticle_SetGazeTarget_m2610460260 (GvrReticle_t4275820913 * __this, Vector3_t3525329789  ___target, bool ___interactive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
