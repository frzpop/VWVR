#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t3533968274;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AlwaysOnTopCamera
struct  AlwaysOnTopCamera_t1732206604  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Camera AlwaysOnTopCamera::cam
	Camera_t3533968274 * ___cam_2;

public:
	inline static int32_t get_offset_of_cam_2() { return static_cast<int32_t>(offsetof(AlwaysOnTopCamera_t1732206604, ___cam_2)); }
	inline Camera_t3533968274 * get_cam_2() const { return ___cam_2; }
	inline Camera_t3533968274 ** get_address_of_cam_2() { return &___cam_2; }
	inline void set_cam_2(Camera_t3533968274 * value)
	{
		___cam_2 = value;
		Il2CppCodeGenWriteBarrier(&___cam_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
