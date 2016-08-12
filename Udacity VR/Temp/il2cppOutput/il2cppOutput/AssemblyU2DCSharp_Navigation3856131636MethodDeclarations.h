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

// Navigation
struct Navigation_t3856131636;
// Waypoint[]
struct WaypointU5BU5D_t2459722300;
// Waypoint
struct Waypoint_t765160481;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Waypoint765160481.h"

// System.Void Navigation::.ctor()
extern "C"  void Navigation__ctor_m4066471143 (Navigation_t3856131636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Navigation::Start()
extern "C"  void Navigation_Start_m3013608935 (Navigation_t3856131636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Navigation::Update()
extern "C"  void Navigation_Update_m3233415942 (Navigation_t3856131636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Waypoint[] Navigation::FindAll()
extern "C"  WaypointU5BU5D_t2459722300* Navigation_FindAll_m899247059 (Navigation_t3856131636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Navigation::MoveTo(Waypoint)
extern "C"  void Navigation_MoveTo_m2222074792 (Navigation_t3856131636 * __this, Waypoint_t765160481 * ___waypoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Waypoint Navigation::Nearest()
extern "C"  Waypoint_t765160481 * Navigation_Nearest_m4245879463 (Navigation_t3856131636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Navigation::UpdateAll()
extern "C"  void Navigation_UpdateAll_m3487969821 (Navigation_t3856131636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
