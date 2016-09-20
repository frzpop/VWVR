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

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PopupRaycaster
struct  PopupRaycaster_t3557466538  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject PopupRaycaster::leftEye
	GameObject_t4012695102 * ___leftEye_2;
	// UnityEngine.GameObject PopupRaycaster::lookingAt
	GameObject_t4012695102 * ___lookingAt_3;
	// System.Boolean PopupRaycaster::looking
	bool ___looking_4;
	// System.Boolean PopupRaycaster::popup
	bool ___popup_5;

public:
	inline static int32_t get_offset_of_leftEye_2() { return static_cast<int32_t>(offsetof(PopupRaycaster_t3557466538, ___leftEye_2)); }
	inline GameObject_t4012695102 * get_leftEye_2() const { return ___leftEye_2; }
	inline GameObject_t4012695102 ** get_address_of_leftEye_2() { return &___leftEye_2; }
	inline void set_leftEye_2(GameObject_t4012695102 * value)
	{
		___leftEye_2 = value;
		Il2CppCodeGenWriteBarrier(&___leftEye_2, value);
	}

	inline static int32_t get_offset_of_lookingAt_3() { return static_cast<int32_t>(offsetof(PopupRaycaster_t3557466538, ___lookingAt_3)); }
	inline GameObject_t4012695102 * get_lookingAt_3() const { return ___lookingAt_3; }
	inline GameObject_t4012695102 ** get_address_of_lookingAt_3() { return &___lookingAt_3; }
	inline void set_lookingAt_3(GameObject_t4012695102 * value)
	{
		___lookingAt_3 = value;
		Il2CppCodeGenWriteBarrier(&___lookingAt_3, value);
	}

	inline static int32_t get_offset_of_looking_4() { return static_cast<int32_t>(offsetof(PopupRaycaster_t3557466538, ___looking_4)); }
	inline bool get_looking_4() const { return ___looking_4; }
	inline bool* get_address_of_looking_4() { return &___looking_4; }
	inline void set_looking_4(bool value)
	{
		___looking_4 = value;
	}

	inline static int32_t get_offset_of_popup_5() { return static_cast<int32_t>(offsetof(PopupRaycaster_t3557466538, ___popup_5)); }
	inline bool get_popup_5() const { return ___popup_5; }
	inline bool* get_address_of_popup_5() { return &___popup_5; }
	inline void set_popup_5(bool value)
	{
		___popup_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
