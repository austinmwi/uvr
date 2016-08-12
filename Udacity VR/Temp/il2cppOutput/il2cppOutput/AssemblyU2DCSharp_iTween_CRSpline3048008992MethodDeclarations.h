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

// iTween/CRSpline
struct CRSpline_t3048008992;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3227571696;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void iTween/CRSpline::.ctor(UnityEngine.Vector3[])
extern "C"  void CRSpline__ctor_m817551993 (CRSpline_t3048008992 * __this, Vector3U5BU5D_t3227571696* ___pts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 iTween/CRSpline::Interp(System.Single)
extern "C"  Vector3_t3525329789  CRSpline_Interp_m2688759947 (CRSpline_t3048008992 * __this, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
