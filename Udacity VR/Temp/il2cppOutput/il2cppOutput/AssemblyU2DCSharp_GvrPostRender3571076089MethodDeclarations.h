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

// GvrPostRender
struct GvrPostRender_t3571076089;
// UnityEngine.Camera
struct Camera_t3533968274;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3227571696;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t2741383957;
// UnityEngine.Color[]
struct ColorU5BU5D_t3477081137;
// System.Int32[]
struct Int32U5BU5D_t1809983122;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Camera3533968274.h"

// System.Void GvrPostRender::.ctor()
extern "C"  void GvrPostRender__ctor_m112426386 (GvrPostRender_t3571076089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPostRender::.cctor()
extern "C"  void GvrPostRender__cctor_m3003121755 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera GvrPostRender::get_cam()
extern "C"  Camera_t3533968274 * GvrPostRender_get_cam_m2485717207 (GvrPostRender_t3571076089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPostRender::set_cam(UnityEngine.Camera)
extern "C"  void GvrPostRender_set_cam_m446538022 (GvrPostRender_t3571076089 * __this, Camera_t3533968274 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPostRender::Reset()
extern "C"  void GvrPostRender_Reset_m2053826623 (GvrPostRender_t3571076089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPostRender::Awake()
extern "C"  void GvrPostRender_Awake_m350031605 (GvrPostRender_t3571076089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPostRender::OnRenderObject()
extern "C"  void GvrPostRender_OnRenderObject_m3090563878 (GvrPostRender_t3571076089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPostRender::RebuildDistortionMesh()
extern "C"  void GvrPostRender_RebuildDistortionMesh_m2426467477 (GvrPostRender_t3571076089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPostRender::ComputeMeshPoints(System.Int32,System.Int32,System.Boolean,UnityEngine.Vector3[]&,UnityEngine.Vector2[]&)
extern "C"  void GvrPostRender_ComputeMeshPoints_m793392493 (Il2CppObject * __this /* static, unused */, int32_t ___width, int32_t ___height, bool ___distortVertices, Vector3U5BU5D_t3227571696** ___vertices, Vector2U5BU5D_t2741383957** ___tex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color[] GvrPostRender::ComputeMeshColors(System.Int32,System.Int32,UnityEngine.Vector2[],System.Int32[],System.Boolean)
extern "C"  ColorU5BU5D_t3477081137* GvrPostRender_ComputeMeshColors_m3590560471 (Il2CppObject * __this /* static, unused */, int32_t ___width, int32_t ___height, Vector2U5BU5D_t2741383957* ___tex, Int32U5BU5D_t1809983122* ___indices, bool ___distortVertices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] GvrPostRender::ComputeMeshIndices(System.Int32,System.Int32,System.Boolean)
extern "C"  Int32U5BU5D_t1809983122* GvrPostRender_ComputeMeshIndices_m1680264416 (Il2CppObject * __this /* static, unused */, int32_t ___width, int32_t ___height, bool ___distortVertices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPostRender::DrawUILayer()
extern "C"  void GvrPostRender_DrawUILayer_m2462852745 (GvrPostRender_t3571076089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPostRender::ComputeUIMatrix()
extern "C"  void GvrPostRender_ComputeUIMatrix_m712247708 (GvrPostRender_t3571076089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPostRender::DrawSettingsButton()
extern "C"  void GvrPostRender_DrawSettingsButton_m3551458571 (GvrPostRender_t3571076089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPostRender::DrawAlignmentMarker()
extern "C"  void GvrPostRender_DrawAlignmentMarker_m1201825865 (GvrPostRender_t3571076089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPostRender::DrawVRBackButton()
extern "C"  void GvrPostRender_DrawVRBackButton_m1997575115 (GvrPostRender_t3571076089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
