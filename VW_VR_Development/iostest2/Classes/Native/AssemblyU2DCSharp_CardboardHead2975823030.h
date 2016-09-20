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
// CardboardHead/HeadUpdatedDelegate
struct HeadUpdatedDelegate_t3342363968;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CardboardHead
struct  CardboardHead_t2975823030  : public MonoBehaviour_t3012272455
{
public:
	// System.Boolean CardboardHead::trackRotation
	bool ___trackRotation_2;
	// System.Boolean CardboardHead::trackPosition
	bool ___trackPosition_3;
	// System.Boolean CardboardHead::rightEye
	bool ___rightEye_4;
	// UnityEngine.Transform CardboardHead::target
	Transform_t284553113 * ___target_5;
	// System.Boolean CardboardHead::updateEarly
	bool ___updateEarly_6;
	// System.Boolean CardboardHead::updated
	bool ___updated_7;
	// CardboardHead/HeadUpdatedDelegate CardboardHead::OnHeadUpdated
	HeadUpdatedDelegate_t3342363968 * ___OnHeadUpdated_8;

public:
	inline static int32_t get_offset_of_trackRotation_2() { return static_cast<int32_t>(offsetof(CardboardHead_t2975823030, ___trackRotation_2)); }
	inline bool get_trackRotation_2() const { return ___trackRotation_2; }
	inline bool* get_address_of_trackRotation_2() { return &___trackRotation_2; }
	inline void set_trackRotation_2(bool value)
	{
		___trackRotation_2 = value;
	}

	inline static int32_t get_offset_of_trackPosition_3() { return static_cast<int32_t>(offsetof(CardboardHead_t2975823030, ___trackPosition_3)); }
	inline bool get_trackPosition_3() const { return ___trackPosition_3; }
	inline bool* get_address_of_trackPosition_3() { return &___trackPosition_3; }
	inline void set_trackPosition_3(bool value)
	{
		___trackPosition_3 = value;
	}

	inline static int32_t get_offset_of_rightEye_4() { return static_cast<int32_t>(offsetof(CardboardHead_t2975823030, ___rightEye_4)); }
	inline bool get_rightEye_4() const { return ___rightEye_4; }
	inline bool* get_address_of_rightEye_4() { return &___rightEye_4; }
	inline void set_rightEye_4(bool value)
	{
		___rightEye_4 = value;
	}

	inline static int32_t get_offset_of_target_5() { return static_cast<int32_t>(offsetof(CardboardHead_t2975823030, ___target_5)); }
	inline Transform_t284553113 * get_target_5() const { return ___target_5; }
	inline Transform_t284553113 ** get_address_of_target_5() { return &___target_5; }
	inline void set_target_5(Transform_t284553113 * value)
	{
		___target_5 = value;
		Il2CppCodeGenWriteBarrier(&___target_5, value);
	}

	inline static int32_t get_offset_of_updateEarly_6() { return static_cast<int32_t>(offsetof(CardboardHead_t2975823030, ___updateEarly_6)); }
	inline bool get_updateEarly_6() const { return ___updateEarly_6; }
	inline bool* get_address_of_updateEarly_6() { return &___updateEarly_6; }
	inline void set_updateEarly_6(bool value)
	{
		___updateEarly_6 = value;
	}

	inline static int32_t get_offset_of_updated_7() { return static_cast<int32_t>(offsetof(CardboardHead_t2975823030, ___updated_7)); }
	inline bool get_updated_7() const { return ___updated_7; }
	inline bool* get_address_of_updated_7() { return &___updated_7; }
	inline void set_updated_7(bool value)
	{
		___updated_7 = value;
	}

	inline static int32_t get_offset_of_OnHeadUpdated_8() { return static_cast<int32_t>(offsetof(CardboardHead_t2975823030, ___OnHeadUpdated_8)); }
	inline HeadUpdatedDelegate_t3342363968 * get_OnHeadUpdated_8() const { return ___OnHeadUpdated_8; }
	inline HeadUpdatedDelegate_t3342363968 ** get_address_of_OnHeadUpdated_8() { return &___OnHeadUpdated_8; }
	inline void set_OnHeadUpdated_8(HeadUpdatedDelegate_t3342363968 * value)
	{
		___OnHeadUpdated_8 = value;
		Il2CppCodeGenWriteBarrier(&___OnHeadUpdated_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
