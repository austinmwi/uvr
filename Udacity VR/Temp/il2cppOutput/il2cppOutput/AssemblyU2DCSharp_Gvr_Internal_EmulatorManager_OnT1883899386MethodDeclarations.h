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

// Gvr.Internal.EmulatorManager/OnTouchEvent
struct OnTouchEvent_t1883899386;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorTouchEvent4130889448.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void Gvr.Internal.EmulatorManager/OnTouchEvent::.ctor(System.Object,System.IntPtr)
extern "C"  void OnTouchEvent__ctor_m3489699150 (OnTouchEvent_t1883899386 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager/OnTouchEvent::Invoke(Gvr.Internal.EmulatorTouchEvent)
extern "C"  void OnTouchEvent_Invoke_m2049058772 (OnTouchEvent_t1883899386 * __this, EmulatorTouchEvent_t4130889448  ___touchEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnTouchEvent_t1883899386(Il2CppObject* delegate, EmulatorTouchEvent_t4130889448  ___touchEvent);
// System.IAsyncResult Gvr.Internal.EmulatorManager/OnTouchEvent::BeginInvoke(Gvr.Internal.EmulatorTouchEvent,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnTouchEvent_BeginInvoke_m2002393069 (OnTouchEvent_t1883899386 * __this, EmulatorTouchEvent_t4130889448  ___touchEvent, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager/OnTouchEvent::EndInvoke(System.IAsyncResult)
extern "C"  void OnTouchEvent_EndInvoke_m1604247134 (OnTouchEvent_t1883899386 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
