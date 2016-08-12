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

// Google.ProtocolBuffers.AbstractBuilderLite`2/LimitedInputStream<System.Object,System.Object>
struct LimitedInputStream_t2505048487;
// System.IO.Stream
struct Stream_t219029575;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "mscorlib_System_IO_SeekOrigin3506139269.h"

// System.Void Google.ProtocolBuffers.AbstractBuilderLite`2/LimitedInputStream<System.Object,System.Object>::.ctor(System.IO.Stream,System.Int32)
extern "C"  void LimitedInputStream__ctor_m808532265_gshared (LimitedInputStream_t2505048487 * __this, Stream_t219029575 * ___proxied, int32_t ___size, const MethodInfo* method);
#define LimitedInputStream__ctor_m808532265(__this, ___proxied, ___size, method) ((  void (*) (LimitedInputStream_t2505048487 *, Stream_t219029575 *, int32_t, const MethodInfo*))LimitedInputStream__ctor_m808532265_gshared)(__this, ___proxied, ___size, method)
// System.Boolean Google.ProtocolBuffers.AbstractBuilderLite`2/LimitedInputStream<System.Object,System.Object>::get_CanRead()
extern "C"  bool LimitedInputStream_get_CanRead_m3694121134_gshared (LimitedInputStream_t2505048487 * __this, const MethodInfo* method);
#define LimitedInputStream_get_CanRead_m3694121134(__this, method) ((  bool (*) (LimitedInputStream_t2505048487 *, const MethodInfo*))LimitedInputStream_get_CanRead_m3694121134_gshared)(__this, method)
// System.Boolean Google.ProtocolBuffers.AbstractBuilderLite`2/LimitedInputStream<System.Object,System.Object>::get_CanSeek()
extern "C"  bool LimitedInputStream_get_CanSeek_m3722876176_gshared (LimitedInputStream_t2505048487 * __this, const MethodInfo* method);
#define LimitedInputStream_get_CanSeek_m3722876176(__this, method) ((  bool (*) (LimitedInputStream_t2505048487 *, const MethodInfo*))LimitedInputStream_get_CanSeek_m3722876176_gshared)(__this, method)
// System.Boolean Google.ProtocolBuffers.AbstractBuilderLite`2/LimitedInputStream<System.Object,System.Object>::get_CanWrite()
extern "C"  bool LimitedInputStream_get_CanWrite_m3371258985_gshared (LimitedInputStream_t2505048487 * __this, const MethodInfo* method);
#define LimitedInputStream_get_CanWrite_m3371258985(__this, method) ((  bool (*) (LimitedInputStream_t2505048487 *, const MethodInfo*))LimitedInputStream_get_CanWrite_m3371258985_gshared)(__this, method)
// System.Void Google.ProtocolBuffers.AbstractBuilderLite`2/LimitedInputStream<System.Object,System.Object>::Flush()
extern "C"  void LimitedInputStream_Flush_m1267825913_gshared (LimitedInputStream_t2505048487 * __this, const MethodInfo* method);
#define LimitedInputStream_Flush_m1267825913(__this, method) ((  void (*) (LimitedInputStream_t2505048487 *, const MethodInfo*))LimitedInputStream_Flush_m1267825913_gshared)(__this, method)
// System.Int64 Google.ProtocolBuffers.AbstractBuilderLite`2/LimitedInputStream<System.Object,System.Object>::get_Length()
extern "C"  int64_t LimitedInputStream_get_Length_m2283639035_gshared (LimitedInputStream_t2505048487 * __this, const MethodInfo* method);
#define LimitedInputStream_get_Length_m2283639035(__this, method) ((  int64_t (*) (LimitedInputStream_t2505048487 *, const MethodInfo*))LimitedInputStream_get_Length_m2283639035_gshared)(__this, method)
// System.Int64 Google.ProtocolBuffers.AbstractBuilderLite`2/LimitedInputStream<System.Object,System.Object>::get_Position()
extern "C"  int64_t LimitedInputStream_get_Position_m70325630_gshared (LimitedInputStream_t2505048487 * __this, const MethodInfo* method);
#define LimitedInputStream_get_Position_m70325630(__this, method) ((  int64_t (*) (LimitedInputStream_t2505048487 *, const MethodInfo*))LimitedInputStream_get_Position_m70325630_gshared)(__this, method)
// System.Void Google.ProtocolBuffers.AbstractBuilderLite`2/LimitedInputStream<System.Object,System.Object>::set_Position(System.Int64)
extern "C"  void LimitedInputStream_set_Position_m924439493_gshared (LimitedInputStream_t2505048487 * __this, int64_t ___value, const MethodInfo* method);
#define LimitedInputStream_set_Position_m924439493(__this, ___value, method) ((  void (*) (LimitedInputStream_t2505048487 *, int64_t, const MethodInfo*))LimitedInputStream_set_Position_m924439493_gshared)(__this, ___value, method)
// System.Int32 Google.ProtocolBuffers.AbstractBuilderLite`2/LimitedInputStream<System.Object,System.Object>::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t LimitedInputStream_Read_m1285978792_gshared (LimitedInputStream_t2505048487 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method);
#define LimitedInputStream_Read_m1285978792(__this, ___buffer, ___offset, ___count, method) ((  int32_t (*) (LimitedInputStream_t2505048487 *, ByteU5BU5D_t58506160*, int32_t, int32_t, const MethodInfo*))LimitedInputStream_Read_m1285978792_gshared)(__this, ___buffer, ___offset, ___count, method)
// System.Int64 Google.ProtocolBuffers.AbstractBuilderLite`2/LimitedInputStream<System.Object,System.Object>::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t LimitedInputStream_Seek_m4056020489_gshared (LimitedInputStream_t2505048487 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method);
#define LimitedInputStream_Seek_m4056020489(__this, ___offset, ___origin, method) ((  int64_t (*) (LimitedInputStream_t2505048487 *, int64_t, int32_t, const MethodInfo*))LimitedInputStream_Seek_m4056020489_gshared)(__this, ___offset, ___origin, method)
// System.Void Google.ProtocolBuffers.AbstractBuilderLite`2/LimitedInputStream<System.Object,System.Object>::SetLength(System.Int64)
extern "C"  void LimitedInputStream_SetLength_m2992893487_gshared (LimitedInputStream_t2505048487 * __this, int64_t ___value, const MethodInfo* method);
#define LimitedInputStream_SetLength_m2992893487(__this, ___value, method) ((  void (*) (LimitedInputStream_t2505048487 *, int64_t, const MethodInfo*))LimitedInputStream_SetLength_m2992893487_gshared)(__this, ___value, method)
// System.Void Google.ProtocolBuffers.AbstractBuilderLite`2/LimitedInputStream<System.Object,System.Object>::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void LimitedInputStream_Write_m4157431381_gshared (LimitedInputStream_t2505048487 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method);
#define LimitedInputStream_Write_m4157431381(__this, ___buffer, ___offset, ___count, method) ((  void (*) (LimitedInputStream_t2505048487 *, ByteU5BU5D_t58506160*, int32_t, int32_t, const MethodInfo*))LimitedInputStream_Write_m4157431381_gshared)(__this, ___buffer, ___offset, ___count, method)
