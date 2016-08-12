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

// UnityEngine.Mesh
struct Mesh_t1525280346;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_CombineInstance4218708769.h"
#include "UnityEngine_UnityEngine_Mesh1525280346.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"

// System.Void UnityEngine.CombineInstance::set_mesh(UnityEngine.Mesh)
extern "C"  void CombineInstance_set_mesh_m991002533 (CombineInstance_t4218708769 * __this, Mesh_t1525280346 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CombineInstance::set_transform(UnityEngine.Matrix4x4)
extern "C"  void CombineInstance_set_transform_m3266216072 (CombineInstance_t4218708769 * __this, Matrix4x4_t277289660  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct CombineInstance_t4218708769;
struct CombineInstance_t4218708769_marshaled_pinvoke;

extern "C" void CombineInstance_t4218708769_marshal_pinvoke(const CombineInstance_t4218708769& unmarshaled, CombineInstance_t4218708769_marshaled_pinvoke& marshaled);
extern "C" void CombineInstance_t4218708769_marshal_pinvoke_back(const CombineInstance_t4218708769_marshaled_pinvoke& marshaled, CombineInstance_t4218708769& unmarshaled);
extern "C" void CombineInstance_t4218708769_marshal_pinvoke_cleanup(CombineInstance_t4218708769_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct CombineInstance_t4218708769;
struct CombineInstance_t4218708769_marshaled_com;

extern "C" void CombineInstance_t4218708769_marshal_com(const CombineInstance_t4218708769& unmarshaled, CombineInstance_t4218708769_marshaled_com& marshaled);
extern "C" void CombineInstance_t4218708769_marshal_com_back(const CombineInstance_t4218708769_marshaled_com& marshaled, CombineInstance_t4218708769& unmarshaled);
extern "C" void CombineInstance_t4218708769_marshal_com_cleanup(CombineInstance_t4218708769_marshaled_com& marshaled);
