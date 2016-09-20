#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t284553113;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Recticle
struct  Recticle_t3564726295  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Transform Recticle::cam
	Transform_t284553113 * ___cam_2;
	// UnityEngine.Transform Recticle::copy
	Transform_t284553113 * ___copy_3;
	// UnityEngine.Vector3 Recticle::target
	Vector3_t3525329789  ___target_4;
	// UnityEngine.Vector3 Recticle::targetCopy
	Vector3_t3525329789  ___targetCopy_5;
	// System.Single Recticle::distance
	float ___distance_6;
	// System.Single Recticle::offset
	float ___offset_7;

public:
	inline static int32_t get_offset_of_cam_2() { return static_cast<int32_t>(offsetof(Recticle_t3564726295, ___cam_2)); }
	inline Transform_t284553113 * get_cam_2() const { return ___cam_2; }
	inline Transform_t284553113 ** get_address_of_cam_2() { return &___cam_2; }
	inline void set_cam_2(Transform_t284553113 * value)
	{
		___cam_2 = value;
		Il2CppCodeGenWriteBarrier(&___cam_2, value);
	}

	inline static int32_t get_offset_of_copy_3() { return static_cast<int32_t>(offsetof(Recticle_t3564726295, ___copy_3)); }
	inline Transform_t284553113 * get_copy_3() const { return ___copy_3; }
	inline Transform_t284553113 ** get_address_of_copy_3() { return &___copy_3; }
	inline void set_copy_3(Transform_t284553113 * value)
	{
		___copy_3 = value;
		Il2CppCodeGenWriteBarrier(&___copy_3, value);
	}

	inline static int32_t get_offset_of_target_4() { return static_cast<int32_t>(offsetof(Recticle_t3564726295, ___target_4)); }
	inline Vector3_t3525329789  get_target_4() const { return ___target_4; }
	inline Vector3_t3525329789 * get_address_of_target_4() { return &___target_4; }
	inline void set_target_4(Vector3_t3525329789  value)
	{
		___target_4 = value;
	}

	inline static int32_t get_offset_of_targetCopy_5() { return static_cast<int32_t>(offsetof(Recticle_t3564726295, ___targetCopy_5)); }
	inline Vector3_t3525329789  get_targetCopy_5() const { return ___targetCopy_5; }
	inline Vector3_t3525329789 * get_address_of_targetCopy_5() { return &___targetCopy_5; }
	inline void set_targetCopy_5(Vector3_t3525329789  value)
	{
		___targetCopy_5 = value;
	}

	inline static int32_t get_offset_of_distance_6() { return static_cast<int32_t>(offsetof(Recticle_t3564726295, ___distance_6)); }
	inline float get_distance_6() const { return ___distance_6; }
	inline float* get_address_of_distance_6() { return &___distance_6; }
	inline void set_distance_6(float value)
	{
		___distance_6 = value;
	}

	inline static int32_t get_offset_of_offset_7() { return static_cast<int32_t>(offsetof(Recticle_t3564726295, ___offset_7)); }
	inline float get_offset_7() const { return ___offset_7; }
	inline float* get_address_of_offset_7() { return &___offset_7; }
	inline void set_offset_7(float value)
	{
		___offset_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
