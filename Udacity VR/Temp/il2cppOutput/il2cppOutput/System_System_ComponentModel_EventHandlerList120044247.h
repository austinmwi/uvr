#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.ComponentModel.ListEntry
struct ListEntry_t705329405;
// System.Delegate
struct Delegate_t3660574010;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EventHandlerList
struct  EventHandlerList_t120044247  : public Il2CppObject
{
public:
	// System.ComponentModel.ListEntry System.ComponentModel.EventHandlerList::entries
	ListEntry_t705329405 * ___entries_0;
	// System.Delegate System.ComponentModel.EventHandlerList::null_entry
	Delegate_t3660574010 * ___null_entry_1;

public:
	inline static int32_t get_offset_of_entries_0() { return static_cast<int32_t>(offsetof(EventHandlerList_t120044247, ___entries_0)); }
	inline ListEntry_t705329405 * get_entries_0() const { return ___entries_0; }
	inline ListEntry_t705329405 ** get_address_of_entries_0() { return &___entries_0; }
	inline void set_entries_0(ListEntry_t705329405 * value)
	{
		___entries_0 = value;
		Il2CppCodeGenWriteBarrier(&___entries_0, value);
	}

	inline static int32_t get_offset_of_null_entry_1() { return static_cast<int32_t>(offsetof(EventHandlerList_t120044247, ___null_entry_1)); }
	inline Delegate_t3660574010 * get_null_entry_1() const { return ___null_entry_1; }
	inline Delegate_t3660574010 ** get_address_of_null_entry_1() { return &___null_entry_1; }
	inline void set_null_entry_1(Delegate_t3660574010 * value)
	{
		___null_entry_1 = value;
		Il2CppCodeGenWriteBarrier(&___null_entry_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
