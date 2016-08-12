#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Gvr.Internal.EmulatorManager
struct EmulatorManager_t556192240;
// System.Collections.Queue
struct Queue_t1621224067;
// Gvr.Internal.EmulatorClientSocket
struct EmulatorClientSocket_t665638443;
// Gvr.Internal.EmulatorManager/OnGyroEvent
struct OnGyroEvent_t1920898540;
// Gvr.Internal.EmulatorManager/OnAccelEvent
struct OnAccelEvent_t2121014769;
// Gvr.Internal.EmulatorManager/OnTouchEvent
struct OnTouchEvent_t1883899386;
// Gvr.Internal.EmulatorManager/OnOrientationEvent
struct OnOrientationEvent_t2132287177;
// Gvr.Internal.EmulatorManager/OnButtonEvent
struct OnButtonEvent_t3789669129;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorGyroEvent536468654.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorAccelEvent73037535.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorTouchEvent4130889448.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorOrientation3633305399.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorButtonEvent2646560587.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gvr.Internal.EmulatorManager
struct  EmulatorManager_t556192240  : public MonoBehaviour_t3012272455
{
public:
	// Gvr.Internal.EmulatorGyroEvent Gvr.Internal.EmulatorManager::currentGyroEvent
	EmulatorGyroEvent_t536468654  ___currentGyroEvent_3;
	// Gvr.Internal.EmulatorAccelEvent Gvr.Internal.EmulatorManager::currentAccelEvent
	EmulatorAccelEvent_t73037535  ___currentAccelEvent_4;
	// Gvr.Internal.EmulatorTouchEvent Gvr.Internal.EmulatorManager::currentTouchEvent
	EmulatorTouchEvent_t4130889448  ___currentTouchEvent_5;
	// Gvr.Internal.EmulatorOrientationEvent Gvr.Internal.EmulatorManager::currentOrientationEvent
	EmulatorOrientationEvent_t3633305399  ___currentOrientationEvent_6;
	// Gvr.Internal.EmulatorButtonEvent Gvr.Internal.EmulatorManager::currentButtonEvent
	EmulatorButtonEvent_t2646560587  ___currentButtonEvent_7;
	// System.Collections.Queue Gvr.Internal.EmulatorManager::pendingEvents
	Queue_t1621224067 * ___pendingEvents_8;
	// Gvr.Internal.EmulatorClientSocket Gvr.Internal.EmulatorManager::socket
	EmulatorClientSocket_t665638443 * ___socket_9;
	// System.Int64 Gvr.Internal.EmulatorManager::lastDownTimeMs
	int64_t ___lastDownTimeMs_10;
	// Gvr.Internal.EmulatorManager/OnGyroEvent Gvr.Internal.EmulatorManager::gyroEventListenersInternal
	OnGyroEvent_t1920898540 * ___gyroEventListenersInternal_11;
	// Gvr.Internal.EmulatorManager/OnAccelEvent Gvr.Internal.EmulatorManager::accelEventListenersInternal
	OnAccelEvent_t2121014769 * ___accelEventListenersInternal_12;
	// Gvr.Internal.EmulatorManager/OnTouchEvent Gvr.Internal.EmulatorManager::touchEventListenersInternal
	OnTouchEvent_t1883899386 * ___touchEventListenersInternal_13;
	// Gvr.Internal.EmulatorManager/OnOrientationEvent Gvr.Internal.EmulatorManager::orientationEventListenersInternal
	OnOrientationEvent_t2132287177 * ___orientationEventListenersInternal_14;
	// Gvr.Internal.EmulatorManager/OnButtonEvent Gvr.Internal.EmulatorManager::buttonEventListenersInternal
	OnButtonEvent_t3789669129 * ___buttonEventListenersInternal_15;

public:
	inline static int32_t get_offset_of_currentGyroEvent_3() { return static_cast<int32_t>(offsetof(EmulatorManager_t556192240, ___currentGyroEvent_3)); }
	inline EmulatorGyroEvent_t536468654  get_currentGyroEvent_3() const { return ___currentGyroEvent_3; }
	inline EmulatorGyroEvent_t536468654 * get_address_of_currentGyroEvent_3() { return &___currentGyroEvent_3; }
	inline void set_currentGyroEvent_3(EmulatorGyroEvent_t536468654  value)
	{
		___currentGyroEvent_3 = value;
	}

	inline static int32_t get_offset_of_currentAccelEvent_4() { return static_cast<int32_t>(offsetof(EmulatorManager_t556192240, ___currentAccelEvent_4)); }
	inline EmulatorAccelEvent_t73037535  get_currentAccelEvent_4() const { return ___currentAccelEvent_4; }
	inline EmulatorAccelEvent_t73037535 * get_address_of_currentAccelEvent_4() { return &___currentAccelEvent_4; }
	inline void set_currentAccelEvent_4(EmulatorAccelEvent_t73037535  value)
	{
		___currentAccelEvent_4 = value;
	}

	inline static int32_t get_offset_of_currentTouchEvent_5() { return static_cast<int32_t>(offsetof(EmulatorManager_t556192240, ___currentTouchEvent_5)); }
	inline EmulatorTouchEvent_t4130889448  get_currentTouchEvent_5() const { return ___currentTouchEvent_5; }
	inline EmulatorTouchEvent_t4130889448 * get_address_of_currentTouchEvent_5() { return &___currentTouchEvent_5; }
	inline void set_currentTouchEvent_5(EmulatorTouchEvent_t4130889448  value)
	{
		___currentTouchEvent_5 = value;
	}

	inline static int32_t get_offset_of_currentOrientationEvent_6() { return static_cast<int32_t>(offsetof(EmulatorManager_t556192240, ___currentOrientationEvent_6)); }
	inline EmulatorOrientationEvent_t3633305399  get_currentOrientationEvent_6() const { return ___currentOrientationEvent_6; }
	inline EmulatorOrientationEvent_t3633305399 * get_address_of_currentOrientationEvent_6() { return &___currentOrientationEvent_6; }
	inline void set_currentOrientationEvent_6(EmulatorOrientationEvent_t3633305399  value)
	{
		___currentOrientationEvent_6 = value;
	}

	inline static int32_t get_offset_of_currentButtonEvent_7() { return static_cast<int32_t>(offsetof(EmulatorManager_t556192240, ___currentButtonEvent_7)); }
	inline EmulatorButtonEvent_t2646560587  get_currentButtonEvent_7() const { return ___currentButtonEvent_7; }
	inline EmulatorButtonEvent_t2646560587 * get_address_of_currentButtonEvent_7() { return &___currentButtonEvent_7; }
	inline void set_currentButtonEvent_7(EmulatorButtonEvent_t2646560587  value)
	{
		___currentButtonEvent_7 = value;
	}

	inline static int32_t get_offset_of_pendingEvents_8() { return static_cast<int32_t>(offsetof(EmulatorManager_t556192240, ___pendingEvents_8)); }
	inline Queue_t1621224067 * get_pendingEvents_8() const { return ___pendingEvents_8; }
	inline Queue_t1621224067 ** get_address_of_pendingEvents_8() { return &___pendingEvents_8; }
	inline void set_pendingEvents_8(Queue_t1621224067 * value)
	{
		___pendingEvents_8 = value;
		Il2CppCodeGenWriteBarrier(&___pendingEvents_8, value);
	}

	inline static int32_t get_offset_of_socket_9() { return static_cast<int32_t>(offsetof(EmulatorManager_t556192240, ___socket_9)); }
	inline EmulatorClientSocket_t665638443 * get_socket_9() const { return ___socket_9; }
	inline EmulatorClientSocket_t665638443 ** get_address_of_socket_9() { return &___socket_9; }
	inline void set_socket_9(EmulatorClientSocket_t665638443 * value)
	{
		___socket_9 = value;
		Il2CppCodeGenWriteBarrier(&___socket_9, value);
	}

	inline static int32_t get_offset_of_lastDownTimeMs_10() { return static_cast<int32_t>(offsetof(EmulatorManager_t556192240, ___lastDownTimeMs_10)); }
	inline int64_t get_lastDownTimeMs_10() const { return ___lastDownTimeMs_10; }
	inline int64_t* get_address_of_lastDownTimeMs_10() { return &___lastDownTimeMs_10; }
	inline void set_lastDownTimeMs_10(int64_t value)
	{
		___lastDownTimeMs_10 = value;
	}

	inline static int32_t get_offset_of_gyroEventListenersInternal_11() { return static_cast<int32_t>(offsetof(EmulatorManager_t556192240, ___gyroEventListenersInternal_11)); }
	inline OnGyroEvent_t1920898540 * get_gyroEventListenersInternal_11() const { return ___gyroEventListenersInternal_11; }
	inline OnGyroEvent_t1920898540 ** get_address_of_gyroEventListenersInternal_11() { return &___gyroEventListenersInternal_11; }
	inline void set_gyroEventListenersInternal_11(OnGyroEvent_t1920898540 * value)
	{
		___gyroEventListenersInternal_11 = value;
		Il2CppCodeGenWriteBarrier(&___gyroEventListenersInternal_11, value);
	}

	inline static int32_t get_offset_of_accelEventListenersInternal_12() { return static_cast<int32_t>(offsetof(EmulatorManager_t556192240, ___accelEventListenersInternal_12)); }
	inline OnAccelEvent_t2121014769 * get_accelEventListenersInternal_12() const { return ___accelEventListenersInternal_12; }
	inline OnAccelEvent_t2121014769 ** get_address_of_accelEventListenersInternal_12() { return &___accelEventListenersInternal_12; }
	inline void set_accelEventListenersInternal_12(OnAccelEvent_t2121014769 * value)
	{
		___accelEventListenersInternal_12 = value;
		Il2CppCodeGenWriteBarrier(&___accelEventListenersInternal_12, value);
	}

	inline static int32_t get_offset_of_touchEventListenersInternal_13() { return static_cast<int32_t>(offsetof(EmulatorManager_t556192240, ___touchEventListenersInternal_13)); }
	inline OnTouchEvent_t1883899386 * get_touchEventListenersInternal_13() const { return ___touchEventListenersInternal_13; }
	inline OnTouchEvent_t1883899386 ** get_address_of_touchEventListenersInternal_13() { return &___touchEventListenersInternal_13; }
	inline void set_touchEventListenersInternal_13(OnTouchEvent_t1883899386 * value)
	{
		___touchEventListenersInternal_13 = value;
		Il2CppCodeGenWriteBarrier(&___touchEventListenersInternal_13, value);
	}

	inline static int32_t get_offset_of_orientationEventListenersInternal_14() { return static_cast<int32_t>(offsetof(EmulatorManager_t556192240, ___orientationEventListenersInternal_14)); }
	inline OnOrientationEvent_t2132287177 * get_orientationEventListenersInternal_14() const { return ___orientationEventListenersInternal_14; }
	inline OnOrientationEvent_t2132287177 ** get_address_of_orientationEventListenersInternal_14() { return &___orientationEventListenersInternal_14; }
	inline void set_orientationEventListenersInternal_14(OnOrientationEvent_t2132287177 * value)
	{
		___orientationEventListenersInternal_14 = value;
		Il2CppCodeGenWriteBarrier(&___orientationEventListenersInternal_14, value);
	}

	inline static int32_t get_offset_of_buttonEventListenersInternal_15() { return static_cast<int32_t>(offsetof(EmulatorManager_t556192240, ___buttonEventListenersInternal_15)); }
	inline OnButtonEvent_t3789669129 * get_buttonEventListenersInternal_15() const { return ___buttonEventListenersInternal_15; }
	inline OnButtonEvent_t3789669129 ** get_address_of_buttonEventListenersInternal_15() { return &___buttonEventListenersInternal_15; }
	inline void set_buttonEventListenersInternal_15(OnButtonEvent_t3789669129 * value)
	{
		___buttonEventListenersInternal_15 = value;
		Il2CppCodeGenWriteBarrier(&___buttonEventListenersInternal_15, value);
	}
};

struct EmulatorManager_t556192240_StaticFields
{
public:
	// Gvr.Internal.EmulatorManager Gvr.Internal.EmulatorManager::instance
	EmulatorManager_t556192240 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(EmulatorManager_t556192240_StaticFields, ___instance_2)); }
	inline EmulatorManager_t556192240 * get_instance_2() const { return ___instance_2; }
	inline EmulatorManager_t556192240 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(EmulatorManager_t556192240 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
