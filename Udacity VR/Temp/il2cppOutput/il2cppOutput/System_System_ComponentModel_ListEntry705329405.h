#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;
// System.Delegate
struct Delegate_t3660574010;
// System.ComponentModel.ListEntry
struct ListEntry_t705329405;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListEntry
struct  ListEntry_t705329405  : public Il2CppObject
{
public:
	// System.Object System.ComponentModel.ListEntry::key
	Il2CppObject * ___key_0;
	// System.Delegate System.ComponentModel.ListEntry::value
	Delegate_t3660574010 * ___value_1;
	// System.ComponentModel.ListEntry System.ComponentModel.ListEntry::next
	ListEntry_t705329405 * ___next_2;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(ListEntry_t705329405, ___key_0)); }
	inline Il2CppObject * get_key_0() const { return ___key_0; }
	inline Il2CppObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Il2CppObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ListEntry_t705329405, ___value_1)); }
	inline Delegate_t3660574010 * get_value_1() const { return ___value_1; }
	inline Delegate_t3660574010 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Delegate_t3660574010 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}

	inline static int32_t get_offset_of_next_2() { return static_cast<int32_t>(offsetof(ListEntry_t705329405, ___next_2)); }
	inline ListEntry_t705329405 * get_next_2() const { return ___next_2; }
	inline ListEntry_t705329405 ** get_address_of_next_2() { return &___next_2; }
	inline void set_next_2(ListEntry_t705329405 * value)
	{
		___next_2 = value;
		Il2CppCodeGenWriteBarrier(&___next_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
