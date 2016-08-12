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


#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_ParticleSystem_Particle1253495462.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Color324137084207.h"

// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::get_position()
extern "C"  Vector3_t3525329789  Particle_get_position_m2605477763 (Particle_t1253495462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/Particle::set_position(UnityEngine.Vector3)
extern "C"  void Particle_set_position_m2501716104 (Particle_t1253495462 * __this, Vector3_t3525329789  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/Particle::set_startSize(System.Single)
extern "C"  void Particle_set_startSize_m1900722158 (Particle_t1253495462 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32 UnityEngine.ParticleSystem/Particle::get_startColor()
extern "C"  Color32_t4137084207  Particle_get_startColor_m1590199917 (Particle_t1253495462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/Particle::set_startColor(UnityEngine.Color32)
extern "C"  void Particle_set_startColor_m3122931422 (Particle_t1253495462 * __this, Color32_t4137084207  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Particle_t1253495462;
struct Particle_t1253495462_marshaled_pinvoke;

extern "C" void Particle_t1253495462_marshal_pinvoke(const Particle_t1253495462& unmarshaled, Particle_t1253495462_marshaled_pinvoke& marshaled);
extern "C" void Particle_t1253495462_marshal_pinvoke_back(const Particle_t1253495462_marshaled_pinvoke& marshaled, Particle_t1253495462& unmarshaled);
extern "C" void Particle_t1253495462_marshal_pinvoke_cleanup(Particle_t1253495462_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Particle_t1253495462;
struct Particle_t1253495462_marshaled_com;

extern "C" void Particle_t1253495462_marshal_com(const Particle_t1253495462& unmarshaled, Particle_t1253495462_marshaled_com& marshaled);
extern "C" void Particle_t1253495462_marshal_com_back(const Particle_t1253495462_marshaled_com& marshaled, Particle_t1253495462& unmarshaled);
extern "C" void Particle_t1253495462_marshal_com_cleanup(Particle_t1253495462_marshaled_com& marshaled);
