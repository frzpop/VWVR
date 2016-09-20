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
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleSceneChanger
struct  SimpleSceneChanger_t1138406280  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Color SimpleSceneChanger::color
	Color_t1588175760  ___color_2;
	// System.Boolean SimpleSceneChanger::changedPosition
	bool ___changedPosition_3;
	// System.Single SimpleSceneChanger::fadeTimer
	float ___fadeTimer_4;
	// System.Single SimpleSceneChanger::fadeTimerMax
	float ___fadeTimerMax_5;
	// UnityEngine.GameObject SimpleSceneChanger::target
	GameObject_t4012695102 * ___target_6;
	// UnityEngine.GameObject SimpleSceneChanger::startL
	GameObject_t4012695102 * ___startL_7;
	// UnityEngine.GameObject SimpleSceneChanger::startR
	GameObject_t4012695102 * ___startR_8;
	// UnityEngine.GameObject SimpleSceneChanger::leftEyeParent
	GameObject_t4012695102 * ___leftEyeParent_9;
	// UnityEngine.GameObject SimpleSceneChanger::rightEyeParent
	GameObject_t4012695102 * ___rightEyeParent_10;
	// UnityEngine.GameObject SimpleSceneChanger::startLCopy
	GameObject_t4012695102 * ___startLCopy_11;
	// UnityEngine.GameObject SimpleSceneChanger::startRCopy
	GameObject_t4012695102 * ___startRCopy_12;
	// UnityEngine.Vector3 SimpleSceneChanger::travelDirection
	Vector3_t3525329789  ___travelDirection_13;
	// UnityEngine.Vector3 SimpleSceneChanger::rightEyeOffset
	Vector3_t3525329789  ___rightEyeOffset_14;

public:
	inline static int32_t get_offset_of_color_2() { return static_cast<int32_t>(offsetof(SimpleSceneChanger_t1138406280, ___color_2)); }
	inline Color_t1588175760  get_color_2() const { return ___color_2; }
	inline Color_t1588175760 * get_address_of_color_2() { return &___color_2; }
	inline void set_color_2(Color_t1588175760  value)
	{
		___color_2 = value;
	}

	inline static int32_t get_offset_of_changedPosition_3() { return static_cast<int32_t>(offsetof(SimpleSceneChanger_t1138406280, ___changedPosition_3)); }
	inline bool get_changedPosition_3() const { return ___changedPosition_3; }
	inline bool* get_address_of_changedPosition_3() { return &___changedPosition_3; }
	inline void set_changedPosition_3(bool value)
	{
		___changedPosition_3 = value;
	}

	inline static int32_t get_offset_of_fadeTimer_4() { return static_cast<int32_t>(offsetof(SimpleSceneChanger_t1138406280, ___fadeTimer_4)); }
	inline float get_fadeTimer_4() const { return ___fadeTimer_4; }
	inline float* get_address_of_fadeTimer_4() { return &___fadeTimer_4; }
	inline void set_fadeTimer_4(float value)
	{
		___fadeTimer_4 = value;
	}

	inline static int32_t get_offset_of_fadeTimerMax_5() { return static_cast<int32_t>(offsetof(SimpleSceneChanger_t1138406280, ___fadeTimerMax_5)); }
	inline float get_fadeTimerMax_5() const { return ___fadeTimerMax_5; }
	inline float* get_address_of_fadeTimerMax_5() { return &___fadeTimerMax_5; }
	inline void set_fadeTimerMax_5(float value)
	{
		___fadeTimerMax_5 = value;
	}

	inline static int32_t get_offset_of_target_6() { return static_cast<int32_t>(offsetof(SimpleSceneChanger_t1138406280, ___target_6)); }
	inline GameObject_t4012695102 * get_target_6() const { return ___target_6; }
	inline GameObject_t4012695102 ** get_address_of_target_6() { return &___target_6; }
	inline void set_target_6(GameObject_t4012695102 * value)
	{
		___target_6 = value;
		Il2CppCodeGenWriteBarrier(&___target_6, value);
	}

	inline static int32_t get_offset_of_startL_7() { return static_cast<int32_t>(offsetof(SimpleSceneChanger_t1138406280, ___startL_7)); }
	inline GameObject_t4012695102 * get_startL_7() const { return ___startL_7; }
	inline GameObject_t4012695102 ** get_address_of_startL_7() { return &___startL_7; }
	inline void set_startL_7(GameObject_t4012695102 * value)
	{
		___startL_7 = value;
		Il2CppCodeGenWriteBarrier(&___startL_7, value);
	}

	inline static int32_t get_offset_of_startR_8() { return static_cast<int32_t>(offsetof(SimpleSceneChanger_t1138406280, ___startR_8)); }
	inline GameObject_t4012695102 * get_startR_8() const { return ___startR_8; }
	inline GameObject_t4012695102 ** get_address_of_startR_8() { return &___startR_8; }
	inline void set_startR_8(GameObject_t4012695102 * value)
	{
		___startR_8 = value;
		Il2CppCodeGenWriteBarrier(&___startR_8, value);
	}

	inline static int32_t get_offset_of_leftEyeParent_9() { return static_cast<int32_t>(offsetof(SimpleSceneChanger_t1138406280, ___leftEyeParent_9)); }
	inline GameObject_t4012695102 * get_leftEyeParent_9() const { return ___leftEyeParent_9; }
	inline GameObject_t4012695102 ** get_address_of_leftEyeParent_9() { return &___leftEyeParent_9; }
	inline void set_leftEyeParent_9(GameObject_t4012695102 * value)
	{
		___leftEyeParent_9 = value;
		Il2CppCodeGenWriteBarrier(&___leftEyeParent_9, value);
	}

	inline static int32_t get_offset_of_rightEyeParent_10() { return static_cast<int32_t>(offsetof(SimpleSceneChanger_t1138406280, ___rightEyeParent_10)); }
	inline GameObject_t4012695102 * get_rightEyeParent_10() const { return ___rightEyeParent_10; }
	inline GameObject_t4012695102 ** get_address_of_rightEyeParent_10() { return &___rightEyeParent_10; }
	inline void set_rightEyeParent_10(GameObject_t4012695102 * value)
	{
		___rightEyeParent_10 = value;
		Il2CppCodeGenWriteBarrier(&___rightEyeParent_10, value);
	}

	inline static int32_t get_offset_of_startLCopy_11() { return static_cast<int32_t>(offsetof(SimpleSceneChanger_t1138406280, ___startLCopy_11)); }
	inline GameObject_t4012695102 * get_startLCopy_11() const { return ___startLCopy_11; }
	inline GameObject_t4012695102 ** get_address_of_startLCopy_11() { return &___startLCopy_11; }
	inline void set_startLCopy_11(GameObject_t4012695102 * value)
	{
		___startLCopy_11 = value;
		Il2CppCodeGenWriteBarrier(&___startLCopy_11, value);
	}

	inline static int32_t get_offset_of_startRCopy_12() { return static_cast<int32_t>(offsetof(SimpleSceneChanger_t1138406280, ___startRCopy_12)); }
	inline GameObject_t4012695102 * get_startRCopy_12() const { return ___startRCopy_12; }
	inline GameObject_t4012695102 ** get_address_of_startRCopy_12() { return &___startRCopy_12; }
	inline void set_startRCopy_12(GameObject_t4012695102 * value)
	{
		___startRCopy_12 = value;
		Il2CppCodeGenWriteBarrier(&___startRCopy_12, value);
	}

	inline static int32_t get_offset_of_travelDirection_13() { return static_cast<int32_t>(offsetof(SimpleSceneChanger_t1138406280, ___travelDirection_13)); }
	inline Vector3_t3525329789  get_travelDirection_13() const { return ___travelDirection_13; }
	inline Vector3_t3525329789 * get_address_of_travelDirection_13() { return &___travelDirection_13; }
	inline void set_travelDirection_13(Vector3_t3525329789  value)
	{
		___travelDirection_13 = value;
	}

	inline static int32_t get_offset_of_rightEyeOffset_14() { return static_cast<int32_t>(offsetof(SimpleSceneChanger_t1138406280, ___rightEyeOffset_14)); }
	inline Vector3_t3525329789  get_rightEyeOffset_14() const { return ___rightEyeOffset_14; }
	inline Vector3_t3525329789 * get_address_of_rightEyeOffset_14() { return &___rightEyeOffset_14; }
	inline void set_rightEyeOffset_14(Vector3_t3525329789  value)
	{
		___rightEyeOffset_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
