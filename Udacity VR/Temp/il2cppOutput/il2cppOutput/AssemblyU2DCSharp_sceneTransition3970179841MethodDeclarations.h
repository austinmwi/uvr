#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// sceneTransition
struct sceneTransition_t3970179841;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void sceneTransition::.ctor()
extern "C"  void sceneTransition__ctor_m3703862666 (sceneTransition_t3970179841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void sceneTransition::OnGUI()
extern "C"  void sceneTransition_OnGUI_m3199261316 (sceneTransition_t3970179841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single sceneTransition::beginFade(System.Int32)
extern "C"  float sceneTransition_beginFade_m1826421610 (sceneTransition_t3970179841 * __this, int32_t ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void sceneTransition::OnLevelWasLoaded()
extern "C"  void sceneTransition_OnLevelWasLoaded_m976064419 (sceneTransition_t3970179841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator sceneTransition::sceneFader(System.String)
extern "C"  Il2CppObject * sceneTransition_sceneFader_m2054446182 (sceneTransition_t3970179841 * __this, String_t* ___sceneName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void sceneTransition::changeScene(System.String)
extern "C"  void sceneTransition_changeScene_m2516555838 (sceneTransition_t3970179841 * __this, String_t* ___sceneName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
