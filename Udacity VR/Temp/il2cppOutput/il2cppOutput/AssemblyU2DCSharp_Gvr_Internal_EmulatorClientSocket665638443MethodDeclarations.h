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

// Gvr.Internal.EmulatorClientSocket
struct EmulatorClientSocket_t665638443;
// Gvr.Internal.EmulatorManager
struct EmulatorManager_t556192240;
// System.Net.Sockets.TcpClient
struct TcpClient_t3837693820;
// System.Net.Sockets.NetworkStream
struct NetworkStream_t1815209918;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager556192240.h"
#include "System_System_Net_Sockets_TcpClient3837693820.h"
#include "System_System_Net_Sockets_NetworkStream1815209918.h"

// System.Void Gvr.Internal.EmulatorClientSocket::.ctor()
extern "C"  void EmulatorClientSocket__ctor_m1954127762 (EmulatorClientSocket_t665638443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorClientSocket::.cctor()
extern "C"  void EmulatorClientSocket__cctor_m4261289563 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Gvr.Internal.EmulatorClientSocket::get_connected()
extern "C"  bool EmulatorClientSocket_get_connected_m2774235364 (EmulatorClientSocket_t665638443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorClientSocket::set_connected(System.Boolean)
extern "C"  void EmulatorClientSocket_set_connected_m1301755571 (EmulatorClientSocket_t665638443 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorClientSocket::Init(Gvr.Internal.EmulatorManager)
extern "C"  void EmulatorClientSocket_Init_m2774358864 (EmulatorClientSocket_t665638443 * __this, EmulatorManager_t556192240 * ___remote, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorClientSocket::setupPortForwarding(System.Int32)
extern "C"  void EmulatorClientSocket_setupPortForwarding_m3538072284 (EmulatorClientSocket_t665638443 * __this, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorClientSocket::phoneEventSocketLoop()
extern "C"  void EmulatorClientSocket_phoneEventSocketLoop_m1374140469 (EmulatorClientSocket_t665638443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorClientSocket::ProcessConnection(System.Net.Sockets.TcpClient)
extern "C"  void EmulatorClientSocket_ProcessConnection_m575269935 (EmulatorClientSocket_t665638443 * __this, TcpClient_t3837693820 * ___tcpClient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Gvr.Internal.EmulatorClientSocket::blockingRead(System.Net.Sockets.NetworkStream,System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t EmulatorClientSocket_blockingRead_m12540386 (EmulatorClientSocket_t665638443 * __this, NetworkStream_t1815209918 * ___stream, ByteU5BU5D_t58506160* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorClientSocket::OnDestroy()
extern "C"  void EmulatorClientSocket_OnDestroy_m3899480971 (EmulatorClientSocket_t665638443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Gvr.Internal.EmulatorClientSocket::unpack32bits(System.Byte[],System.Int32)
extern "C"  int32_t EmulatorClientSocket_unpack32bits_m1107198665 (EmulatorClientSocket_t665638443 * __this, ByteU5BU5D_t58506160* ___array, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Gvr.Internal.EmulatorClientSocket::correctEndianness(System.Byte[])
extern "C"  ByteU5BU5D_t58506160* EmulatorClientSocket_correctEndianness_m1698232403 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
