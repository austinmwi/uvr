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

// System.IO.StringWriter
struct StringWriter_t2384730283;
// System.Text.StringBuilder
struct StringBuilder_t3822575854;
// System.IFormatProvider
struct IFormatProvider_t3436592966;
// System.Text.Encoding
struct Encoding_t180559927;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t3416858730;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Text_StringBuilder3822575854.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.IO.StringWriter::.ctor()
extern "C"  void StringWriter__ctor_m3428223077 (StringWriter_t2384730283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::.ctor(System.Text.StringBuilder)
extern "C"  void StringWriter__ctor_m3379070757 (StringWriter_t2384730283 * __this, StringBuilder_t3822575854 * ___sb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::.ctor(System.Text.StringBuilder,System.IFormatProvider)
extern "C"  void StringWriter__ctor_m2916801583 (StringWriter_t2384730283 * __this, StringBuilder_t3822575854 * ___sb, Il2CppObject * ___formatProvider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.IO.StringWriter::get_Encoding()
extern "C"  Encoding_t180559927 * StringWriter_get_Encoding_m2439380529 (StringWriter_t2384730283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::Close()
extern "C"  void StringWriter_Close_m844115323 (StringWriter_t2384730283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::Dispose(System.Boolean)
extern "C"  void StringWriter_Dispose_m2392658265 (StringWriter_t2384730283 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.StringWriter::ToString()
extern "C"  String_t* StringWriter_ToString_m2255216590 (StringWriter_t2384730283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::Write(System.Char)
extern "C"  void StringWriter_Write_m3681074171 (StringWriter_t2384730283 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::Write(System.String)
extern "C"  void StringWriter_Write_m133434528 (StringWriter_t2384730283 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C"  void StringWriter_Write_m2891913337 (StringWriter_t2384730283 * __this, CharU5BU5D_t3416858730* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
