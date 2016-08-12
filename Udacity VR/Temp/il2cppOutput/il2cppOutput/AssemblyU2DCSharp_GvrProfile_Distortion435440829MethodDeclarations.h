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

// System.Single[]
struct SingleU5BU5D_t1219431280;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GvrProfile_Distortion435440829.h"

// System.Single[] GvrProfile/Distortion::get_Coef()
extern "C"  SingleU5BU5D_t1219431280* Distortion_get_Coef_m177042795 (Distortion_t435440829 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrProfile/Distortion::set_Coef(System.Single[])
extern "C"  void Distortion_set_Coef_m4180484256 (Distortion_t435440829 * __this, SingleU5BU5D_t1219431280* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GvrProfile/Distortion::distort(System.Single)
extern "C"  float Distortion_distort_m950147313 (Distortion_t435440829 * __this, float ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GvrProfile/Distortion::distortInv(System.Single)
extern "C"  float Distortion_distortInv_m553222738 (Distortion_t435440829 * __this, float ___radius, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Distortion_t435440829;
struct Distortion_t435440829_marshaled_pinvoke;

extern "C" void Distortion_t435440829_marshal_pinvoke(const Distortion_t435440829& unmarshaled, Distortion_t435440829_marshaled_pinvoke& marshaled);
extern "C" void Distortion_t435440829_marshal_pinvoke_back(const Distortion_t435440829_marshaled_pinvoke& marshaled, Distortion_t435440829& unmarshaled);
extern "C" void Distortion_t435440829_marshal_pinvoke_cleanup(Distortion_t435440829_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Distortion_t435440829;
struct Distortion_t435440829_marshaled_com;

extern "C" void Distortion_t435440829_marshal_com(const Distortion_t435440829& unmarshaled, Distortion_t435440829_marshaled_com& marshaled);
extern "C" void Distortion_t435440829_marshal_com_back(const Distortion_t435440829_marshaled_com& marshaled, Distortion_t435440829& unmarshaled);
extern "C" void Distortion_t435440829_marshal_com_cleanup(Distortion_t435440829_marshaled_com& marshaled);
