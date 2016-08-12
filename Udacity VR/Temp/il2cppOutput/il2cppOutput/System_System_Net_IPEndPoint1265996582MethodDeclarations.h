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

// System.Net.IPEndPoint
struct IPEndPoint_t1265996582;
// System.Net.IPAddress
struct IPAddress_t3220500535;
// System.Net.EndPoint
struct EndPoint_t1294049535;
// System.Net.SocketAddress
struct SocketAddress_t3972045899;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_IPAddress3220500535.h"
#include "System_System_Net_Sockets_AddressFamily1632127208.h"
#include "System_System_Net_SocketAddress3972045899.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.Net.IPEndPoint::.ctor(System.Net.IPAddress,System.Int32)
extern "C"  void IPEndPoint__ctor_m613724246 (IPEndPoint_t1265996582 * __this, IPAddress_t3220500535 * ___address, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPEndPoint::.ctor(System.Int64,System.Int32)
extern "C"  void IPEndPoint__ctor_m1788376007 (IPEndPoint_t1265996582 * __this, int64_t ___iaddr, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.IPEndPoint::get_Address()
extern "C"  IPAddress_t3220500535 * IPEndPoint_get_Address_m1282959913 (IPEndPoint_t1265996582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPEndPoint::set_Address(System.Net.IPAddress)
extern "C"  void IPEndPoint_set_Address_m3040556502 (IPEndPoint_t1265996582 * __this, IPAddress_t3220500535 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.AddressFamily System.Net.IPEndPoint::get_AddressFamily()
extern "C"  int32_t IPEndPoint_get_AddressFamily_m926301232 (IPEndPoint_t1265996582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPEndPoint::get_Port()
extern "C"  int32_t IPEndPoint_get_Port_m1670115040 (IPEndPoint_t1265996582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPEndPoint::set_Port(System.Int32)
extern "C"  void IPEndPoint_set_Port_m2374491605 (IPEndPoint_t1265996582 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.EndPoint System.Net.IPEndPoint::Create(System.Net.SocketAddress)
extern "C"  EndPoint_t1294049535 * IPEndPoint_Create_m287552515 (IPEndPoint_t1265996582 * __this, SocketAddress_t3972045899 * ___socketAddress, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.SocketAddress System.Net.IPEndPoint::Serialize()
extern "C"  SocketAddress_t3972045899 * IPEndPoint_Serialize_m130381674 (IPEndPoint_t1265996582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.IPEndPoint::ToString()
extern "C"  String_t* IPEndPoint_ToString_m2392184111 (IPEndPoint_t1265996582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPEndPoint::Equals(System.Object)
extern "C"  bool IPEndPoint_Equals_m2685723717 (IPEndPoint_t1265996582 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPEndPoint::GetHashCode()
extern "C"  int32_t IPEndPoint_GetHashCode_m2913619357 (IPEndPoint_t1265996582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
