#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Hashtable
struct Hashtable_t3875263730;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.StringDictionary
struct  StringDictionary_t2792775730  : public Il2CppObject
{
public:
	// System.Collections.Hashtable System.Collections.Specialized.StringDictionary::contents
	Hashtable_t3875263730 * ___contents_0;

public:
	inline static int32_t get_offset_of_contents_0() { return static_cast<int32_t>(offsetof(StringDictionary_t2792775730, ___contents_0)); }
	inline Hashtable_t3875263730 * get_contents_0() const { return ___contents_0; }
	inline Hashtable_t3875263730 ** get_address_of_contents_0() { return &___contents_0; }
	inline void set_contents_0(Hashtable_t3875263730 * value)
	{
		___contents_0 = value;
		Il2CppCodeGenWriteBarrier(&___contents_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
