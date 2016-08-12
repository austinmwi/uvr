#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Font
struct Font_t1525081276;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TransformPreviewer
struct  TransformPreviewer_t3956975753  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Font TransformPreviewer::font
	Font_t1525081276 * ___font_2;

public:
	inline static int32_t get_offset_of_font_2() { return static_cast<int32_t>(offsetof(TransformPreviewer_t3956975753, ___font_2)); }
	inline Font_t1525081276 * get_font_2() const { return ___font_2; }
	inline Font_t1525081276 ** get_address_of_font_2() { return &___font_2; }
	inline void set_font_2(Font_t1525081276 * value)
	{
		___font_2 = value;
		Il2CppCodeGenWriteBarrier(&___font_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
