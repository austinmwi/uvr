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

// sceneLogic
struct sceneLogic_t2062900786;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "mscorlib_System_String968488902.h"

// System.Void sceneLogic::.ctor()
extern "C"  void sceneLogic__ctor_m1381503657 (sceneLogic_t2062900786 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void sceneLogic::Start()
extern "C"  void sceneLogic_Start_m328641449 (sceneLogic_t2062900786 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void sceneLogic::Update()
extern "C"  void sceneLogic_Update_m1603802500 (sceneLogic_t2062900786 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void sceneLogic::beginManualMovement(UnityEngine.GameObject)
extern "C"  void sceneLogic_beginManualMovement_m254755645 (sceneLogic_t2062900786 * __this, GameObject_t4012695102 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void sceneLogic::stopManualMovement()
extern "C"  void sceneLogic_stopManualMovement_m3395251538 (sceneLogic_t2062900786 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void sceneLogic::hideDistantWaypoints()
extern "C"  void sceneLogic_hideDistantWaypoints_m481158414 (sceneLogic_t2062900786 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void sceneLogic::changeScene(System.String)
extern "C"  void sceneLogic_changeScene_m1721618623 (sceneLogic_t2062900786 * __this, String_t* ___sceneName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void sceneLogic::goToWebsite(System.String)
extern "C"  void sceneLogic_goToWebsite_m2222673507 (sceneLogic_t2062900786 * __this, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
