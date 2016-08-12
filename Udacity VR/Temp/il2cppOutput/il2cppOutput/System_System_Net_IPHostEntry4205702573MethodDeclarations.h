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

// System.Net.IPHostEntry
struct IPHostEntry_t4205702573;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t3494006030;
// System.String[]
struct StringU5BU5D_t2956870243;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Net.IPHostEntry::.ctor()
extern "C"  void IPHostEntry__ctor_m252317065 (IPHostEntry_t4205702573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress[] System.Net.IPHostEntry::get_AddressList()
extern "C"  IPAddressU5BU5D_t3494006030* IPHostEntry_get_AddressList_m65927120 (IPHostEntry_t4205702573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPHostEntry::set_AddressList(System.Net.IPAddress[])
extern "C"  void IPHostEntry_set_AddressList_m1503802237 (IPHostEntry_t4205702573 * __this, IPAddressU5BU5D_t3494006030* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPHostEntry::set_Aliases(System.String[])
extern "C"  void IPHostEntry_set_Aliases_m1514906264 (IPHostEntry_t4205702573 * __this, StringU5BU5D_t2956870243* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPHostEntry::set_HostName(System.String)
extern "C"  void IPHostEntry_set_HostName_m2760895671 (IPHostEntry_t4205702573 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
