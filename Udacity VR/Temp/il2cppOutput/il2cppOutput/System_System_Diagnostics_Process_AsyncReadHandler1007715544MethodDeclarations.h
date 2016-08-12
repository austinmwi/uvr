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

// System.Diagnostics.Process/AsyncReadHandler
struct AsyncReadHandler_t1007715544;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Diagnostics.Process/AsyncReadHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void AsyncReadHandler__ctor_m3034715025 (AsyncReadHandler_t1007715544 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process/AsyncReadHandler::Invoke()
extern "C"  void AsyncReadHandler_Invoke_m3917452075 (AsyncReadHandler_t1007715544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_AsyncReadHandler_t1007715544(Il2CppObject* delegate);
// System.IAsyncResult System.Diagnostics.Process/AsyncReadHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * AsyncReadHandler_BeginInvoke_m4261064960 (AsyncReadHandler_t1007715544 * __this, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process/AsyncReadHandler::EndInvoke(System.IAsyncResult)
extern "C"  void AsyncReadHandler_EndInvoke_m1646786081 (AsyncReadHandler_t1007715544 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
