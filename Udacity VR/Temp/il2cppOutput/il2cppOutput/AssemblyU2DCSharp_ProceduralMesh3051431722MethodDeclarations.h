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

// ProceduralMesh
struct ProceduralMesh_t3051431722;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Texture2D
struct Texture2D_t2509538522;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "UnityEngine_UnityEngine_Texture2D2509538522.h"

// System.Void ProceduralMesh::.ctor()
extern "C"  void ProceduralMesh__ctor_m27071665 (ProceduralMesh_t3051431722 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProceduralMesh::Plane(System.Int32,UnityEngine.GameObject)
extern "C"  void ProceduralMesh_Plane_m710455810 (Il2CppObject * __this /* static, unused */, int32_t ___resolution, GameObject_t4012695102 * ___gameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProceduralMesh::HeightMap(UnityEngine.Texture2D,UnityEngine.GameObject)
extern "C"  void ProceduralMesh_HeightMap_m3439890470 (Il2CppObject * __this /* static, unused */, Texture2D_t2509538522 * ___heightmap, GameObject_t4012695102 * ___gameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProceduralMesh::Circle(System.Int32,UnityEngine.GameObject)
extern "C"  void ProceduralMesh_Circle_m3912582506 (Il2CppObject * __this /* static, unused */, int32_t ___resolution, GameObject_t4012695102 * ___gameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
