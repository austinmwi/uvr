#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// stereoWebsiteTransfer
struct  stereoWebsiteTransfer_t3888997006  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject stereoWebsiteTransfer::transferPanel
	GameObject_t4012695102 * ___transferPanel_2;
	// UnityEngine.GameObject[] stereoWebsiteTransfer::normalPanels
	GameObjectU5BU5D_t3499186955* ___normalPanels_3;
	// System.Single stereoWebsiteTransfer::timeToTransition
	float ___timeToTransition_4;

public:
	inline static int32_t get_offset_of_transferPanel_2() { return static_cast<int32_t>(offsetof(stereoWebsiteTransfer_t3888997006, ___transferPanel_2)); }
	inline GameObject_t4012695102 * get_transferPanel_2() const { return ___transferPanel_2; }
	inline GameObject_t4012695102 ** get_address_of_transferPanel_2() { return &___transferPanel_2; }
	inline void set_transferPanel_2(GameObject_t4012695102 * value)
	{
		___transferPanel_2 = value;
		Il2CppCodeGenWriteBarrier(&___transferPanel_2, value);
	}

	inline static int32_t get_offset_of_normalPanels_3() { return static_cast<int32_t>(offsetof(stereoWebsiteTransfer_t3888997006, ___normalPanels_3)); }
	inline GameObjectU5BU5D_t3499186955* get_normalPanels_3() const { return ___normalPanels_3; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_normalPanels_3() { return &___normalPanels_3; }
	inline void set_normalPanels_3(GameObjectU5BU5D_t3499186955* value)
	{
		___normalPanels_3 = value;
		Il2CppCodeGenWriteBarrier(&___normalPanels_3, value);
	}

	inline static int32_t get_offset_of_timeToTransition_4() { return static_cast<int32_t>(offsetof(stereoWebsiteTransfer_t3888997006, ___timeToTransition_4)); }
	inline float get_timeToTransition_4() const { return ___timeToTransition_4; }
	inline float* get_address_of_timeToTransition_4() { return &___timeToTransition_4; }
	inline void set_timeToTransition_4(float value)
	{
		___timeToTransition_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
