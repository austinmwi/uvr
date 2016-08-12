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

#include "System_System_Collections_Specialized_StringDictio2792775730.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ProcessStringDictionary
struct  ProcessStringDictionary_t1971034241  : public StringDictionary_t2792775730
{
public:
	// System.Collections.Hashtable System.Collections.Specialized.ProcessStringDictionary::table
	Hashtable_t3875263730 * ___table_1;

public:
	inline static int32_t get_offset_of_table_1() { return static_cast<int32_t>(offsetof(ProcessStringDictionary_t1971034241, ___table_1)); }
	inline Hashtable_t3875263730 * get_table_1() const { return ___table_1; }
	inline Hashtable_t3875263730 ** get_address_of_table_1() { return &___table_1; }
	inline void set_table_1(Hashtable_t3875263730 * value)
	{
		___table_1 = value;
		Il2CppCodeGenWriteBarrier(&___table_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
