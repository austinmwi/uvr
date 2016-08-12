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
// System.Object
struct Il2CppObject;
// sceneTransition
struct sceneTransition_t3970179841;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// sceneTransition/<sceneFader>c__Iterator3
struct  U3CsceneFaderU3Ec__Iterator3_t705517754  : public Il2CppObject
{
public:
	// System.Single sceneTransition/<sceneFader>c__Iterator3::<fadeTime>__0
	float ___U3CfadeTimeU3E__0_0;
	// System.String sceneTransition/<sceneFader>c__Iterator3::sceneName
	String_t* ___sceneName_1;
	// System.Int32 sceneTransition/<sceneFader>c__Iterator3::$PC
	int32_t ___U24PC_2;
	// System.Object sceneTransition/<sceneFader>c__Iterator3::$current
	Il2CppObject * ___U24current_3;
	// System.String sceneTransition/<sceneFader>c__Iterator3::<$>sceneName
	String_t* ___U3CU24U3EsceneName_4;
	// sceneTransition sceneTransition/<sceneFader>c__Iterator3::<>f__this
	sceneTransition_t3970179841 * ___U3CU3Ef__this_5;

public:
	inline static int32_t get_offset_of_U3CfadeTimeU3E__0_0() { return static_cast<int32_t>(offsetof(U3CsceneFaderU3Ec__Iterator3_t705517754, ___U3CfadeTimeU3E__0_0)); }
	inline float get_U3CfadeTimeU3E__0_0() const { return ___U3CfadeTimeU3E__0_0; }
	inline float* get_address_of_U3CfadeTimeU3E__0_0() { return &___U3CfadeTimeU3E__0_0; }
	inline void set_U3CfadeTimeU3E__0_0(float value)
	{
		___U3CfadeTimeU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_sceneName_1() { return static_cast<int32_t>(offsetof(U3CsceneFaderU3Ec__Iterator3_t705517754, ___sceneName_1)); }
	inline String_t* get_sceneName_1() const { return ___sceneName_1; }
	inline String_t** get_address_of_sceneName_1() { return &___sceneName_1; }
	inline void set_sceneName_1(String_t* value)
	{
		___sceneName_1 = value;
		Il2CppCodeGenWriteBarrier(&___sceneName_1, value);
	}

	inline static int32_t get_offset_of_U24PC_2() { return static_cast<int32_t>(offsetof(U3CsceneFaderU3Ec__Iterator3_t705517754, ___U24PC_2)); }
	inline int32_t get_U24PC_2() const { return ___U24PC_2; }
	inline int32_t* get_address_of_U24PC_2() { return &___U24PC_2; }
	inline void set_U24PC_2(int32_t value)
	{
		___U24PC_2 = value;
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CsceneFaderU3Ec__Iterator3_t705517754, ___U24current_3)); }
	inline Il2CppObject * get_U24current_3() const { return ___U24current_3; }
	inline Il2CppObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(Il2CppObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_3, value);
	}

	inline static int32_t get_offset_of_U3CU24U3EsceneName_4() { return static_cast<int32_t>(offsetof(U3CsceneFaderU3Ec__Iterator3_t705517754, ___U3CU24U3EsceneName_4)); }
	inline String_t* get_U3CU24U3EsceneName_4() const { return ___U3CU24U3EsceneName_4; }
	inline String_t** get_address_of_U3CU24U3EsceneName_4() { return &___U3CU24U3EsceneName_4; }
	inline void set_U3CU24U3EsceneName_4(String_t* value)
	{
		___U3CU24U3EsceneName_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU24U3EsceneName_4, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_5() { return static_cast<int32_t>(offsetof(U3CsceneFaderU3Ec__Iterator3_t705517754, ___U3CU3Ef__this_5)); }
	inline sceneTransition_t3970179841 * get_U3CU3Ef__this_5() const { return ___U3CU3Ef__this_5; }
	inline sceneTransition_t3970179841 ** get_address_of_U3CU3Ef__this_5() { return &___U3CU3Ef__this_5; }
	inline void set_U3CU3Ef__this_5(sceneTransition_t3970179841 * value)
	{
		___U3CU3Ef__this_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
