#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.Stream
struct Stream_t219029575;

#include "mscorlib_System_IO_Stream219029575.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Google.ProtocolBuffers.AbstractBuilderLite`2/LimitedInputStream<System.Object,System.Object>
struct  LimitedInputStream_t2505048487  : public Stream_t219029575
{
public:
	// System.IO.Stream Google.ProtocolBuffers.AbstractBuilderLite`2/LimitedInputStream::proxied
	Stream_t219029575 * ___proxied_1;
	// System.Int32 Google.ProtocolBuffers.AbstractBuilderLite`2/LimitedInputStream::bytesLeft
	int32_t ___bytesLeft_2;

public:
	inline static int32_t get_offset_of_proxied_1() { return static_cast<int32_t>(offsetof(LimitedInputStream_t2505048487, ___proxied_1)); }
	inline Stream_t219029575 * get_proxied_1() const { return ___proxied_1; }
	inline Stream_t219029575 ** get_address_of_proxied_1() { return &___proxied_1; }
	inline void set_proxied_1(Stream_t219029575 * value)
	{
		___proxied_1 = value;
		Il2CppCodeGenWriteBarrier(&___proxied_1, value);
	}

	inline static int32_t get_offset_of_bytesLeft_2() { return static_cast<int32_t>(offsetof(LimitedInputStream_t2505048487, ___bytesLeft_2)); }
	inline int32_t get_bytesLeft_2() const { return ___bytesLeft_2; }
	inline int32_t* get_address_of_bytesLeft_2() { return &___bytesLeft_2; }
	inline void set_bytesLeft_2(int32_t value)
	{
		___bytesLeft_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
