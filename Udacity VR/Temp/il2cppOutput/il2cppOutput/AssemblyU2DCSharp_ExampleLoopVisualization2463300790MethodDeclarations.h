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

// ExampleLoopVisualization
struct ExampleLoopVisualization_t2463300790;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3227571696;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void ExampleLoopVisualization::.ctor()
extern "C"  void ExampleLoopVisualization__ctor_m4064312997 (ExampleLoopVisualization_t2463300790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExampleLoopVisualization::Start()
extern "C"  void ExampleLoopVisualization_Start_m3011450789 (ExampleLoopVisualization_t2463300790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExampleLoopVisualization::Update()
extern "C"  void ExampleLoopVisualization_Update_m3166513416 (ExampleLoopVisualization_t2463300790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExampleLoopVisualization::Operate(UnityEngine.GameObject,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void ExampleLoopVisualization_Operate_m1133862053 (ExampleLoopVisualization_t2463300790 * __this, GameObject_t4012695102 * ___g, Vector3_t3525329789  ___origin, Vector3_t3525329789  ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExampleLoopVisualization::UpdateElement(UnityEngine.GameObject[],UnityEngine.Vector3[])
extern "C"  void ExampleLoopVisualization_UpdateElement_m911041661 (ExampleLoopVisualization_t2463300790 * __this, GameObjectU5BU5D_t3499186955* ___game_object, Vector3U5BU5D_t3227571696* ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExampleLoopVisualization::SetColor(UnityEngine.GameObject)
extern "C"  void ExampleLoopVisualization_SetColor_m2869299800 (ExampleLoopVisualization_t2463300790 * __this, GameObject_t4012695102 * ___g, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExampleLoopVisualization::OnGUI()
extern "C"  void ExampleLoopVisualization_OnGUI_m3559711647 (ExampleLoopVisualization_t2463300790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
