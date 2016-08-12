#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Google.ProtocolBuffers.ByteString
struct ByteString_t960030907;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Google.ProtocolBuffers.ByteString
struct  ByteString_t960030907  : public Il2CppObject
{
public:
	// System.Byte[] Google.ProtocolBuffers.ByteString::bytes
	ByteU5BU5D_t58506160* ___bytes_1;

public:
	inline static int32_t get_offset_of_bytes_1() { return static_cast<int32_t>(offsetof(ByteString_t960030907, ___bytes_1)); }
	inline ByteU5BU5D_t58506160* get_bytes_1() const { return ___bytes_1; }
	inline ByteU5BU5D_t58506160** get_address_of_bytes_1() { return &___bytes_1; }
	inline void set_bytes_1(ByteU5BU5D_t58506160* value)
	{
		___bytes_1 = value;
		Il2CppCodeGenWriteBarrier(&___bytes_1, value);
	}
};

struct ByteString_t960030907_StaticFields
{
public:
	// Google.ProtocolBuffers.ByteString Google.ProtocolBuffers.ByteString::empty
	ByteString_t960030907 * ___empty_0;

public:
	inline static int32_t get_offset_of_empty_0() { return static_cast<int32_t>(offsetof(ByteString_t960030907_StaticFields, ___empty_0)); }
	inline ByteString_t960030907 * get_empty_0() const { return ___empty_0; }
	inline ByteString_t960030907 ** get_address_of_empty_0() { return &___empty_0; }
	inline void set_empty_0(ByteString_t960030907 * value)
	{
		___empty_0 = value;
		Il2CppCodeGenWriteBarrier(&___empty_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
