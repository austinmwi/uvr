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

// System.Net.Sockets.Socket/SocketAsyncResult
struct SocketAsyncResult_t4227111974;
// System.Net.Sockets.Socket
struct Socket_t150013987;
// System.Object
struct Il2CppObject;
// System.AsyncCallback
struct AsyncCallback_t1363551830;
// System.Collections.Queue
struct Queue_t1621224067;
// System.Net.Sockets.Socket/SocketAsyncCall
struct SocketAsyncCall_t106740903;
// System.Net.Sockets.Socket/Worker
struct Worker_t2596749214;
// System.Exception
struct Exception_t1967233988;
// System.Threading.WaitHandle
struct WaitHandle_t361062656;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Sockets_Socket150013987.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_AsyncCallback1363551830.h"
#include "System_System_Net_Sockets_Socket_SocketOperation3477618452.h"
#include "mscorlib_System_Collections_Queue1621224067.h"
#include "System_System_Net_Sockets_Socket_Worker2596749214.h"
#include "mscorlib_System_Exception1967233988.h"
#include "System_System_Net_Sockets_SocketError291509957.h"

// System.Void System.Net.Sockets.Socket/SocketAsyncResult::.ctor(System.Net.Sockets.Socket,System.Object,System.AsyncCallback,System.Net.Sockets.Socket/SocketOperation)
extern "C"  void SocketAsyncResult__ctor_m3387632877 (SocketAsyncResult_t4227111974 * __this, Socket_t150013987 * ___sock, Il2CppObject * ___state, AsyncCallback_t1363551830 * ___callback, int32_t ___operation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::CheckIfThrowDelayedException()
extern "C"  void SocketAsyncResult_CheckIfThrowDelayedException_m3077626800 (SocketAsyncResult_t4227111974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::CompleteAllOnDispose(System.Collections.Queue)
extern "C"  void SocketAsyncResult_CompleteAllOnDispose_m1491762849 (SocketAsyncResult_t4227111974 * __this, Queue_t1621224067 * ___queue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::CompleteDisposed(System.Object)
extern "C"  void SocketAsyncResult_CompleteDisposed_m4085393076 (SocketAsyncResult_t4227111974 * __this, Il2CppObject * ___unused, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::Complete()
extern "C"  void SocketAsyncResult_Complete_m3226188763 (SocketAsyncResult_t4227111974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket/SocketAsyncCall System.Net.Sockets.Socket/SocketAsyncResult::GetDelegate(System.Net.Sockets.Socket/Worker,System.Net.Sockets.Socket/SocketOperation)
extern "C"  SocketAsyncCall_t106740903 * SocketAsyncResult_GetDelegate_m3647662143 (SocketAsyncResult_t4227111974 * __this, Worker_t2596749214 * ___worker, int32_t ___op, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::Complete(System.Int32)
extern "C"  void SocketAsyncResult_Complete_m2117042348 (SocketAsyncResult_t4227111974 * __this, int32_t ___total, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::Complete(System.Exception)
extern "C"  void SocketAsyncResult_Complete_m3130013323 (SocketAsyncResult_t4227111974 * __this, Exception_t1967233988 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.Sockets.Socket/SocketAsyncResult::get_AsyncState()
extern "C"  Il2CppObject * SocketAsyncResult_get_AsyncState_m2775447499 (SocketAsyncResult_t4227111974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.Net.Sockets.Socket/SocketAsyncResult::get_AsyncWaitHandle()
extern "C"  WaitHandle_t361062656 * SocketAsyncResult_get_AsyncWaitHandle_m1788904497 (SocketAsyncResult_t4227111974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket/SocketAsyncResult::get_IsCompleted()
extern "C"  bool SocketAsyncResult_get_IsCompleted_m3245275886 (SocketAsyncResult_t4227111974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::set_IsCompleted(System.Boolean)
extern "C"  void SocketAsyncResult_set_IsCompleted_m1869173595 (SocketAsyncResult_t4227111974 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket/SocketAsyncResult::get_Total()
extern "C"  int32_t SocketAsyncResult_get_Total_m2584191947 (SocketAsyncResult_t4227111974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::set_Total(System.Int32)
extern "C"  void SocketAsyncResult_set_Total_m1350627192 (SocketAsyncResult_t4227111974 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.SocketError System.Net.Sockets.Socket/SocketAsyncResult::get_ErrorCode()
extern "C"  int32_t SocketAsyncResult_get_ErrorCode_m2754211572 (SocketAsyncResult_t4227111974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
