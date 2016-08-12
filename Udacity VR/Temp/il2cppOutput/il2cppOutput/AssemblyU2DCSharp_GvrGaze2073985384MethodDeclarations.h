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

// GvrGaze
struct GvrGaze_t2073985384;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Camera
struct Camera_t3533968274;
// IGvrGazeResponder
struct IGvrGazeResponder_t4177935811;
// IGvrGazePointer
struct IGvrGazePointer_t1822538814;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3012272455;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "UnityEngine_UnityEngine_Camera3533968274.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

// System.Void GvrGaze::.ctor()
extern "C"  void GvrGaze__ctor_m2820784899 (GvrGaze_t2073985384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject GvrGaze::get_PointerObject()
extern "C"  GameObject_t4012695102 * GvrGaze_get_PointerObject_m188477257 (GvrGaze_t2073985384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrGaze::set_PointerObject(UnityEngine.GameObject)
extern "C"  void GvrGaze_set_PointerObject_m3100422808 (GvrGaze_t2073985384 * __this, GameObject_t4012695102 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera GvrGaze::get_cam()
extern "C"  Camera_t3533968274 * GvrGaze_get_cam_m608989896 (GvrGaze_t2073985384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrGaze::set_cam(UnityEngine.Camera)
extern "C"  void GvrGaze_set_cam_m2193343511 (GvrGaze_t2073985384 * __this, Camera_t3533968274 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrGaze::Awake()
extern "C"  void GvrGaze_Awake_m3058390118 (GvrGaze_t2073985384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrGaze::OnEnable()
extern "C"  void GvrGaze_OnEnable_m744391075 (GvrGaze_t2073985384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrGaze::OnDisable()
extern "C"  void GvrGaze_OnDisable_m2042224106 (GvrGaze_t2073985384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrGaze::LateUpdate()
extern "C"  void GvrGaze_LateUpdate_m2205413680 (GvrGaze_t2073985384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrGaze::HandleGaze()
extern "C"  void GvrGaze_HandleGaze_m4102877806 (GvrGaze_t2073985384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject GvrGaze::FindGazeTarget(System.Single,IGvrGazeResponder&,UnityEngine.Vector3&)
extern "C"  GameObject_t4012695102 * GvrGaze_FindGazeTarget_m459366918 (GvrGaze_t2073985384 * __this, float ___radius, Il2CppObject ** ___responder, Vector3_t3525329789 * ___intersectPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrGaze::IsGazeNearObject(System.Single,UnityEngine.GameObject,UnityEngine.Vector3&)
extern "C"  bool GvrGaze_IsGazeNearObject_m1651993731 (GvrGaze_t2073985384 * __this, float ___radius, GameObject_t4012695102 * ___target, Vector3_t3525329789 * ___intersectPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrGaze::HandleTrigger()
extern "C"  void GvrGaze_HandleTrigger_m2403987089 (GvrGaze_t2073985384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// IGvrGazePointer GvrGaze::<set_PointerObject>m__3(UnityEngine.MonoBehaviour)
extern "C"  Il2CppObject * GvrGaze_U3Cset_PointerObjectU3Em__3_m4221113560 (Il2CppObject * __this /* static, unused */, MonoBehaviour_t3012272455 * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrGaze::<set_PointerObject>m__4(IGvrGazePointer)
extern "C"  bool GvrGaze_U3Cset_PointerObjectU3Em__4_m1971744413 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
