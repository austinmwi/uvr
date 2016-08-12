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

// System.Net.Sockets.Socket/Worker
struct Worker_t2596749214;
// System.Net.Sockets.Socket/SocketAsyncResult
struct SocketAsyncResult_t4227111974;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Sockets_Socket_SocketAsyncResult4227111974.h"

// System.Void System.Net.Sockets.Socket/Worker::.ctor(System.Net.Sockets.Socket/SocketAsyncResult)
extern "C"  void Worker__ctor_m2662848394 (Worker_t2596749214 * __this, SocketAsyncResult_t4227111974 * ___ares, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::.ctor(System.Net.Sockets.Socket/SocketAsyncResult,System.Boolean)
extern "C"  void Worker__ctor_m1637955251 (Worker_t2596749214 * __this, SocketAsyncResult_t4227111974 * ___ares, bool ___requireSocketSecurity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::Receive()
extern "C"  void Worker_Receive_m963409729 (Worker_t2596749214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::ReceiveFrom()
extern "C"  void Worker_ReceiveFrom_m1800870027 (Worker_t2596749214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::UpdateSendValues(System.Int32)
extern "C"  void Worker_UpdateSendValues_m836072456 (Worker_t2596749214 * __this, int32_t ___last_sent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::Send()
extern "C"  void Worker_Send_m1311810444 (Worker_t2596749214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::SendTo()
extern "C"  void Worker_SendTo_m2225798311 (Worker_t2596749214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
