#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// InfoCanvas
struct InfoCanvas_t700704710;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Verification
struct  Verification_t2974886459  : public MonoBehaviour_t3012272455
{
public:
	// System.String Verification::input
	String_t* ___input_3;
	// System.String Verification::output
	String_t* ___output_4;
	// InfoCanvas Verification::infoCanvas
	InfoCanvas_t700704710 * ___infoCanvas_5;
	// System.String Verification::_cypher
	String_t* ____cypher_6;
	// System.String Verification::_display
	String_t* ____display_7;
	// System.Int32 Verification::_salt
	int32_t ____salt_8;

public:
	inline static int32_t get_offset_of_input_3() { return static_cast<int32_t>(offsetof(Verification_t2974886459, ___input_3)); }
	inline String_t* get_input_3() const { return ___input_3; }
	inline String_t** get_address_of_input_3() { return &___input_3; }
	inline void set_input_3(String_t* value)
	{
		___input_3 = value;
		Il2CppCodeGenWriteBarrier(&___input_3, value);
	}

	inline static int32_t get_offset_of_output_4() { return static_cast<int32_t>(offsetof(Verification_t2974886459, ___output_4)); }
	inline String_t* get_output_4() const { return ___output_4; }
	inline String_t** get_address_of_output_4() { return &___output_4; }
	inline void set_output_4(String_t* value)
	{
		___output_4 = value;
		Il2CppCodeGenWriteBarrier(&___output_4, value);
	}

	inline static int32_t get_offset_of_infoCanvas_5() { return static_cast<int32_t>(offsetof(Verification_t2974886459, ___infoCanvas_5)); }
	inline InfoCanvas_t700704710 * get_infoCanvas_5() const { return ___infoCanvas_5; }
	inline InfoCanvas_t700704710 ** get_address_of_infoCanvas_5() { return &___infoCanvas_5; }
	inline void set_infoCanvas_5(InfoCanvas_t700704710 * value)
	{
		___infoCanvas_5 = value;
		Il2CppCodeGenWriteBarrier(&___infoCanvas_5, value);
	}

	inline static int32_t get_offset_of__cypher_6() { return static_cast<int32_t>(offsetof(Verification_t2974886459, ____cypher_6)); }
	inline String_t* get__cypher_6() const { return ____cypher_6; }
	inline String_t** get_address_of__cypher_6() { return &____cypher_6; }
	inline void set__cypher_6(String_t* value)
	{
		____cypher_6 = value;
		Il2CppCodeGenWriteBarrier(&____cypher_6, value);
	}

	inline static int32_t get_offset_of__display_7() { return static_cast<int32_t>(offsetof(Verification_t2974886459, ____display_7)); }
	inline String_t* get__display_7() const { return ____display_7; }
	inline String_t** get_address_of__display_7() { return &____display_7; }
	inline void set__display_7(String_t* value)
	{
		____display_7 = value;
		Il2CppCodeGenWriteBarrier(&____display_7, value);
	}

	inline static int32_t get_offset_of__salt_8() { return static_cast<int32_t>(offsetof(Verification_t2974886459, ____salt_8)); }
	inline int32_t get__salt_8() const { return ____salt_8; }
	inline int32_t* get_address_of__salt_8() { return &____salt_8; }
	inline void set__salt_8(int32_t value)
	{
		____salt_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
