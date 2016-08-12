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

// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t2956870243;
// System.Net.IPHostEntry
struct IPHostEntry_t4205702573;
// System.Net.IPAddress
struct IPAddress_t3220500535;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t3494006030;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "System_System_Net_IPAddress3220500535.h"

// System.Void System.Net.Dns::.cctor()
extern "C"  void Dns__cctor_m2243593610 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Dns::GetHostByName_internal(System.String,System.String&,System.String[]&,System.String[]&)
extern "C"  bool Dns_GetHostByName_internal_m3697903137 (Il2CppObject * __this /* static, unused */, String_t* ___host, String_t** ___h_name, StringU5BU5D_t2956870243** ___h_aliases, StringU5BU5D_t2956870243** ___h_addr_list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Dns::GetHostByAddr_internal(System.String,System.String&,System.String[]&,System.String[]&)
extern "C"  bool Dns_GetHostByAddr_internal_m516933499 (Il2CppObject * __this /* static, unused */, String_t* ___addr, String_t** ___h_name, StringU5BU5D_t2956870243** ___h_aliases, StringU5BU5D_t2956870243** ___h_addr_list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::hostent_to_IPHostEntry(System.String,System.String[],System.String[])
extern "C"  IPHostEntry_t4205702573 * Dns_hostent_to_IPHostEntry_m818428846 (Il2CppObject * __this /* static, unused */, String_t* ___h_name, StringU5BU5D_t2956870243* ___h_aliases, StringU5BU5D_t2956870243* ___h_addrlist, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::GetHostByAddressFromString(System.String,System.Boolean)
extern "C"  IPHostEntry_t4205702573 * Dns_GetHostByAddressFromString_m1166485506 (Il2CppObject * __this /* static, unused */, String_t* ___address, bool ___parse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::GetHostEntry(System.String)
extern "C"  IPHostEntry_t4205702573 * Dns_GetHostEntry_m1150532033 (Il2CppObject * __this /* static, unused */, String_t* ___hostNameOrAddress, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::GetHostEntry(System.Net.IPAddress)
extern "C"  IPHostEntry_t4205702573 * Dns_GetHostEntry_m3712714308 (Il2CppObject * __this /* static, unused */, IPAddress_t3220500535 * ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress[] System.Net.Dns::GetHostAddresses(System.String)
extern "C"  IPAddressU5BU5D_t3494006030* Dns_GetHostAddresses_m1512328765 (Il2CppObject * __this /* static, unused */, String_t* ___hostNameOrAddress, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::GetHostByName(System.String)
extern "C"  IPHostEntry_t4205702573 * Dns_GetHostByName_m840368461 (Il2CppObject * __this /* static, unused */, String_t* ___hostName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
