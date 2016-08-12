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

// Gvr.Internal.EmulatorManager/OnButtonEvent
struct OnButtonEvent_t3789669129;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorButtonEvent2646560587.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorButtonEvent2646560587MethodDeclarations.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void Gvr.Internal.EmulatorManager/OnButtonEvent::.ctor(System.Object,System.IntPtr)
extern "C"  void OnButtonEvent__ctor_m2800235603 (OnButtonEvent_t3789669129 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager/OnButtonEvent::Invoke(Gvr.Internal.EmulatorButtonEvent)
extern "C"  void OnButtonEvent_Invoke_m1938588608 (OnButtonEvent_t3789669129 * __this, EmulatorButtonEvent_t2646560587  ___buttonEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnButtonEvent_t3789669129(Il2CppObject* delegate, EmulatorButtonEvent_t2646560587  ___buttonEvent);
// System.IAsyncResult Gvr.Internal.EmulatorManager/OnButtonEvent::BeginInvoke(Gvr.Internal.EmulatorButtonEvent,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnButtonEvent_BeginInvoke_m531591797 (OnButtonEvent_t3789669129 * __this, EmulatorButtonEvent_t2646560587  ___buttonEvent, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager/OnButtonEvent::EndInvoke(System.IAsyncResult)
extern "C"  void OnButtonEvent_EndInvoke_m475056099 (OnButtonEvent_t3789669129 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
