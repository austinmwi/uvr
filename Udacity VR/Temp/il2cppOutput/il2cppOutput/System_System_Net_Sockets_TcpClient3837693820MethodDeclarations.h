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

// System.Net.Sockets.TcpClient
struct TcpClient_t3837693820;
// System.String
struct String_t;
// System.Net.Sockets.LingerOption
struct LingerOption_t2251437608;
// System.Net.IPEndPoint
struct IPEndPoint_t1265996582;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t3494006030;
// System.Net.Sockets.NetworkStream
struct NetworkStream_t1815209918;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "System_System_Net_Sockets_AddressFamily1632127208.h"
#include "System_System_Net_Sockets_LingerOption2251437608.h"
#include "System_System_Net_IPEndPoint1265996582.h"

// System.Void System.Net.Sockets.TcpClient::.ctor(System.String,System.Int32)
extern "C"  void TcpClient__ctor_m547039555 (TcpClient_t3837693820 * __this, String_t* ___hostname, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::System.IDisposable.Dispose()
extern "C"  void TcpClient_System_IDisposable_Dispose_m1529033393 (TcpClient_t3837693820 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::Init(System.Net.Sockets.AddressFamily)
extern "C"  void TcpClient_Init_m1684374668 (TcpClient_t3837693820 * __this, int32_t ___family, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::set_LingerState(System.Net.Sockets.LingerOption)
extern "C"  void TcpClient_set_LingerState_m1499166943 (TcpClient_t3837693820 * __this, LingerOption_t2251437608 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::set_NoDelay(System.Boolean)
extern "C"  void TcpClient_set_NoDelay_m3138919016 (TcpClient_t3837693820 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::set_ReceiveBufferSize(System.Int32)
extern "C"  void TcpClient_set_ReceiveBufferSize_m3392743652 (TcpClient_t3837693820 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::set_ReceiveTimeout(System.Int32)
extern "C"  void TcpClient_set_ReceiveTimeout_m999985314 (TcpClient_t3837693820 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::set_SendBufferSize(System.Int32)
extern "C"  void TcpClient_set_SendBufferSize_m1257770605 (TcpClient_t3837693820 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::set_SendTimeout(System.Int32)
extern "C"  void TcpClient_set_SendTimeout_m1738784697 (TcpClient_t3837693820 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::Close()
extern "C"  void TcpClient_Close_m3504618180 (TcpClient_t3837693820 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::Connect(System.Net.IPEndPoint)
extern "C"  void TcpClient_Connect_m3648393008 (TcpClient_t3837693820 * __this, IPEndPoint_t1265996582 * ___remote_end_point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::SetOptions()
extern "C"  void TcpClient_SetOptions_m1482391282 (TcpClient_t3837693820 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::Connect(System.String,System.Int32)
extern "C"  void TcpClient_Connect_m1905935371 (TcpClient_t3837693820 * __this, String_t* ___hostname, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::Connect(System.Net.IPAddress[],System.Int32)
extern "C"  void TcpClient_Connect_m2922000384 (TcpClient_t3837693820 * __this, IPAddressU5BU5D_t3494006030* ___ipAddresses, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::Dispose(System.Boolean)
extern "C"  void TcpClient_Dispose_m635923618 (TcpClient_t3837693820 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::Finalize()
extern "C"  void TcpClient_Finalize_m4277961716 (TcpClient_t3837693820 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.NetworkStream System.Net.Sockets.TcpClient::GetStream()
extern "C"  NetworkStream_t1815209918 * TcpClient_GetStream_m1239965747 (TcpClient_t3837693820 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::CheckDisposed()
extern "C"  void TcpClient_CheckDisposed_m940490713 (TcpClient_t3837693820 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
