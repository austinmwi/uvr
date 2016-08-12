#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// MoveSample
struct MoveSample_t395286779;
// RotateSample
struct RotateSample_t1766843141;
// SampleInfo
struct SampleInfo_t2136294808;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "AssemblyU2DCSharpU2Dfirstpass_U3CModuleU3E86524790.h"
#include "AssemblyU2DCSharpU2Dfirstpass_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_MoveSample395286779.h"
#include "AssemblyU2DCSharpU2Dfirstpass_MoveSample395286779MethodDeclarations.h"
#include "mscorlib_System_Void2779279689.h"
#include "UnityEngine_UnityEngine_MonoBehaviour3012272455MethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_RotateSample1766843141.h"
#include "AssemblyU2DCSharpU2Dfirstpass_RotateSample1766843141MethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SampleInfo2136294808.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SampleInfo2136294808MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GUILayout2490032242MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Application450040189MethodDeclarations.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_ArrayTypes.h"
#include "UnityEngine_UnityEngine_GUILayoutOption3151226183.h"
#include "mscorlib_System_Boolean211005341.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MoveSample::.ctor()
extern "C"  void MoveSample__ctor_m271738804 (MoveSample_t395286779 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoveSample::Start()
extern "C"  void MoveSample_Start_m3513843892 (MoveSample_t395286779 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void RotateSample::.ctor()
extern "C"  void RotateSample__ctor_m328697322 (RotateSample_t1766843141 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RotateSample::Start()
extern "C"  void RotateSample_Start_m3570802410 (RotateSample_t1766843141 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void SampleInfo::.ctor()
extern "C"  void SampleInfo__ctor_m3206060983 (SampleInfo_t2136294808 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SampleInfo::OnGUI()
extern TypeInfo* GUILayoutOptionU5BU5D_t1890718142_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral674476214;
extern Il2CppCodeGenString* _stringLiteral1074746247;
extern Il2CppCodeGenString* _stringLiteral1819779628;
extern const uint32_t SampleInfo_OnGUI_m2701459633_MetadataUsageId;
extern "C"  void SampleInfo_OnGUI_m2701459633 (SampleInfo_t2136294808 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (SampleInfo_OnGUI_m2701459633_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUILayout_Label_m925445731(NULL /*static, unused*/, _stringLiteral674476214, ((GUILayoutOptionU5BU5D_t1890718142*)SZArrayNew(GUILayoutOptionU5BU5D_t1890718142_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/NULL);
		GUILayout_BeginHorizontal_m722450062(NULL /*static, unused*/, ((GUILayoutOptionU5BU5D_t1890718142*)SZArrayNew(GUILayoutOptionU5BU5D_t1890718142_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/NULL);
		GUILayout_Label_m925445731(NULL /*static, unused*/, _stringLiteral1074746247, ((GUILayoutOptionU5BU5D_t1890718142*)SZArrayNew(GUILayoutOptionU5BU5D_t1890718142_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/NULL);
		bool L_0 = GUILayout_Button_m6468109(NULL /*static, unused*/, _stringLiteral1819779628, ((GUILayoutOptionU5BU5D_t1890718142*)SZArrayNew(GUILayoutOptionU5BU5D_t1890718142_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_004a;
		}
	}
	{
		Application_OpenURL_m1861717334(NULL /*static, unused*/, _stringLiteral1819779628, /*hidden argument*/NULL);
	}

IL_004a:
	{
		GUILayout_EndHorizontal_m556624369(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
