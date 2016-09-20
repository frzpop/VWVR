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
// AudioPlayer
struct AudioPlayer_t2016416311;
// SceneChangeDelay
struct SceneChangeDelay_t2203174823;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_RaycastHit46221527.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SceneChangerTwoD
struct  SceneChangerTwoD_t2245161294  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject SceneChangerTwoD::leftEye
	GameObject_t4012695102 * ___leftEye_2;
	// UnityEngine.GameObject SceneChangerTwoD::leftEyeParent
	GameObject_t4012695102 * ___leftEyeParent_3;
	// UnityEngine.GameObject SceneChangerTwoD::rightEyeParent
	GameObject_t4012695102 * ___rightEyeParent_4;
	// UnityEngine.GameObject SceneChangerTwoD::rightCopyPrefab
	GameObject_t4012695102 * ___rightCopyPrefab_5;
	// UnityEngine.GameObject SceneChangerTwoD::target
	GameObject_t4012695102 * ___target_6;
	// UnityEngine.GameObject SceneChangerTwoD::startL
	GameObject_t4012695102 * ___startL_7;
	// UnityEngine.GameObject SceneChangerTwoD::startR
	GameObject_t4012695102 * ___startR_8;
	// UnityEngine.GameObject SceneChangerTwoD::ringPrefab
	GameObject_t4012695102 * ___ringPrefab_9;
	// UnityEngine.Vector3 SceneChangerTwoD::rightEyeOffset
	Vector3_t3525329789  ___rightEyeOffset_10;
	// System.Boolean SceneChangerTwoD::animate
	bool ___animate_11;
	// UnityEngine.GameObject SceneChangerTwoD::rightCopy
	GameObject_t4012695102 * ___rightCopy_12;
	// UnityEngine.GameObject SceneChangerTwoD::startLCopy
	GameObject_t4012695102 * ___startLCopy_13;
	// UnityEngine.GameObject SceneChangerTwoD::startRCopy
	GameObject_t4012695102 * ___startRCopy_14;
	// UnityEngine.GameObject SceneChangerTwoD::ring
	GameObject_t4012695102 * ___ring_15;
	// UnityEngine.GameObject SceneChangerTwoD::ringRightCopy
	GameObject_t4012695102 * ___ringRightCopy_16;
	// UnityEngine.RaycastHit SceneChangerTwoD::hit
	RaycastHit_t46221527  ___hit_17;
	// UnityEngine.Color SceneChangerTwoD::color
	Color_t1588175760  ___color_18;
	// UnityEngine.Color SceneChangerTwoD::ringColor
	Color_t1588175760  ___ringColor_19;
	// UnityEngine.Vector3 SceneChangerTwoD::travelDirection
	Vector3_t3525329789  ___travelDirection_20;
	// System.Single SceneChangerTwoD::fadeTimerMax
	float ___fadeTimerMax_21;
	// System.Single SceneChangerTwoD::fadeTimer
	float ___fadeTimer_22;
	// System.Single SceneChangerTwoD::distance
	float ___distance_23;
	// System.Single SceneChangerTwoD::scale
	float ___scale_24;
	// System.Single SceneChangerTwoD::timer
	float ___timer_25;
	// System.Single SceneChangerTwoD::timerLimit
	float ___timerLimit_26;
	// System.Boolean SceneChangerTwoD::changedPosition
	bool ___changedPosition_27;
	// System.Boolean SceneChangerTwoD::triggerMusic
	bool ___triggerMusic_28;
	// AudioPlayer SceneChangerTwoD::musicPlayer
	AudioPlayer_t2016416311 * ___musicPlayer_29;
	// SceneChangeDelay SceneChangerTwoD::delayScript
	SceneChangeDelay_t2203174823 * ___delayScript_30;

public:
	inline static int32_t get_offset_of_leftEye_2() { return static_cast<int32_t>(offsetof(SceneChangerTwoD_t2245161294, ___leftEye_2)); }
	inline GameObject_t4012695102 * get_leftEye_2() const { return ___leftEye_2; }
	inline GameObject_t4012695102 ** get_address_of_leftEye_2() { return &___leftEye_2; }
	inline void set_leftEye_2(GameObject_t4012695102 * value)
	{
		___leftEye_2 = value;
		Il2CppCodeGenWriteBarrier(&___leftEye_2, value);
	}

	inline static int32_t get_offset_of_leftEyeParent_3() { return static_cast<int32_t>(offsetof(SceneChangerTwoD_t2245161294, ___leftEyeParent_3)); }
	inline GameObject_t4012695102 * get_leftEyeParent_3() const { return ___leftEyeParent_3; }
	inline GameObject_t4012695102 ** get_address_of_leftEyeParent_3() { return &___leftEyeParent_3; }
	inline void set_leftEyeParent_3(GameObject_t4012695102 * value)
	{
		___leftEyeParent_3 = value;
		Il2CppCodeGenWriteBarrier(&___leftEyeParent_3, value);
	}

	inline static int32_t get_offset_of_rightEyeParent_4() { return static_cast<int32_t>(offsetof(SceneChangerTwoD_t2245161294, ___rightEyeParent_4)); }
	inline GameObject_t4012695102 * get_rightEyeParent_4() const { return ___rightEyeParent_4; }
	inline GameObject_t4012695102 ** get_address_of_rightEyeParent_4() { return &___rightEyeParent_4; }
	inline void set_rightEyeParent_4(GameObject_t4012695102 * value)
	{
		___rightEyeParent_4 = value;
		Il2CppCodeGenWriteBarrier(&___rightEyeParent_4, value);
	}

	inline static int32_t get_offset_of_rightCopyPrefab_5() { return static_cast<int32_t>(offsetof(SceneChangerTwoD_t2245161294, ___rightCopyPrefab_5)); }
	inline GameObject_t4012695102 * get_rightCopyPrefab_5() const { return ___rightCopyPrefab_5; }
	inline GameObject_t4012695102 ** get_address_of_rightCopyPrefab_5() { return &___rightCopyPrefab_5; }
	inline void set_rightCopyPrefab_5(GameObject_t4012695102 * value)
	{
		___rightCopyPrefab_5 = value;
		Il2CppCodeGenWriteBarrier(&___rightCopyPrefab_5, value);
	}

	inline static int32_t get_offset_of_target_6() { return static_cast<int32_t>(offsetof(SceneChangerTwoD_t2245161294, ___target_6)); }
	inline GameObject_t4012695102 * get_target_6() const { return ___target_6; }
	inline GameObject_t4012695102 ** get_address_of_target_6() { return &___target_6; }
	inline void set_target_6(GameObject_t4012695102 * value)
	{
		___target_6 = value;
		Il2CppCodeGenWriteBarrier(&___target_6, value);
	}

	inline static int32_t get_offset_of_startL_7() { return static_cast<int32_t>(offsetof(SceneChangerTwoD_t2245161294, ___startL_7)); }
	inline GameObject_t4012695102 * get_startL_7() const { return ___startL_7; }
	inline GameObject_t4012695102 ** get_address_of_startL_7() { return &___startL_7; }
	inline void set_startL_7(GameObject_t4012695102 * value)
	{
		___startL_7 = value;
		Il2CppCodeGenWriteBarrier(&___startL_7, value);
	}

	inline static int32_t get_offset_of_startR_8() { return static_cast<int32_t>(offsetof(SceneChangerTwoD_t2245161294, ___startR_8)); }
	inline GameObject_t4012695102 * get_startR_8() const { return ___startR_8; }
	inline GameObject_t4012695102 ** get_address_of_startR_8() { return &___startR_8; }
	inline void set_startR_8(GameObject_t4012695102 * value)
	{
		___startR_8 = value;
		Il2CppCodeGenWriteBarrier(&___startR_8, value);
	}

	inline static int32_t get_offset_of_ringPrefab_9() { return static_cast<int32_t>(offsetof(SceneChangerTwoD_t2245161294, ___ringPrefab_9)); }
	inline GameObject_t4012695102 * get_ringPrefab_9() const { return ___ringPrefab_9; }
	inline GameObject_t4012695102 ** get_address_of_ringPrefab_9() { return &___ringPrefab_9; }
	inline void set_ringPrefab_9(GameObject_t4012695102 * value)
	{
		___ringPrefab_9 = value;
		Il2CppCodeGenWriteBarrier(&___ringPrefab_9, value);
	}

	inline static int32_t get_offset_of_rightEyeOffset_10() { return static_cast<int32_t>(offsetof(SceneChangerTwoD_t2245161294, ___rightEyeOffset_10)); }
	inline Vector3_t3525329789  get_rightEyeOffset_10() const { return ___rightEyeOffset_10; }
	inline Vector3_t3525329789 * get_address_of_rightEyeOffset_10() { return &___rightEyeOffset_10; }
	inline void set_rightEyeOffset_10(Vector3_t3525329789  value)
	{
		___rightEyeOffset_10 = value;
	}

	inline static int32_t get_offset_of_animate_11() { return static_cast<int32_t>(offsetof(SceneChangerTwoD_t2245161294, ___animate_11)); }
	inline bool get_animate_11() const { return ___animate_11; }
	inline bool* get_address_of_animate_11() { return &___animate_11; }
	inline void set_animate_11(bool value)
	{
		___animate_11 = value;
	}

	inline static int32_t get_offset_of_rightCopy_12() { return static_cast<int32_t>(offsetof(SceneChangerTwoD_t2245161294, ___rightCopy_12)); }
	inline GameObject_t4012695102 * get_rightCopy_12() const { return ___rightCopy_12; }
	inline GameObject_t4012695102 ** get_address_of_rightCopy_12() { return &___rightCopy_12; }
	inline void set_rightCopy_12(GameObject_t4012695102 * value)
	{
		___rightCopy_12 = value;
		Il2CppCodeGenWriteBarrier(&___rightCopy_12, value);
	}

	inline static int32_t get_offset_of_startLCopy_13() { return static_cast<int32_t>(offsetof(SceneChangerTwoD_t2245161294, ___startLCopy_13)); }
	inline GameObject_t4012695102 * get_startLCopy_13() const { return ___startLCopy_13; }
	inline GameObject_t4012695102 ** get_address_of_startLCopy_13() { return &___startLCopy_13; }
	inline void set_startLCopy_13(GameObject_t4012695102 * value)
	{
		___startLCopy_13 = value;
		Il2CppCodeGenWriteBarrier(&___startLCopy_13, value);
	}

	inline static int32_t get_offset_of_startRCopy_14() { return static_cast<int32_t>(offsetof(SceneChangerTwoD_t2245161294, ___startRCopy_14)); }
	inline GameObject_t4012695102 * get_startRCopy_14() const { return ___startRCopy_14; }
	inline GameObject_t4012695102 ** get_address_of_startRCopy_14() { return &___startRCopy_14; }
	inline void set_startRCopy_14(GameObject_t4012695102 * value)
	{
		___startRCopy_14 = value;
		Il2CppCodeGenWriteBarrier(&___startRCopy_14, value);
	}

	inline static int32_t get_offset_of_ring_15() { return static_cast<int32_t>(offsetof(SceneChangerTwoD_t2245161294, ___ring_15)); }
	inline GameObject_t4012695102 * get_ring_15() const { return ___ring_15; }
	inline GameObject_t4012695102 ** get_address_of_ring_15() { return &___ring_15; }
	inline void set_ring_15(GameObject_t4012695102 * value)
	{
		___ring_15 = value;
		Il2CppCodeGenWriteBarrier(&___ring_15, value);
	}

	inline static int32_t get_offset_of_ringRightCopy_16() { return static_cast<int32_t>(offsetof(SceneChangerTwoD_t2245161294, ___ringRightCopy_16)); }
	inline GameObject_t4012695102 * get_ringRightCopy_16() const { return ___ringRightCopy_16; }
	inline GameObject_t4012695102 ** get_address_of_ringRightCopy_16() { return &___ringRightCopy_16; }
	inline void set_ringRightCopy_16(GameObject_t4012695102 * value)
	{
		___ringRightCopy_16 = value;
		Il2CppCodeGenWriteBarrier(&___ringRightCopy_16, value);
	}

	inline static int32_t get_offset_of_hit_17() { return static_cast<int32_t>(offsetof(SceneChangerTwoD_t2245161294, ___hit_17)); }
	inline RaycastHit_t46221527  get_hit_17() const { return ___hit_17; }
	inline RaycastHit_t46221527 * get_address_of_hit_17() { return &___hit_17; }
	inline void set_hit_17(RaycastHit_t46221527  value)
	{
		___hit_17 = value;
	}

	inline static int32_t get_offset_of_color_18() { return static_cast<int32_t>(offsetof(SceneChangerTwoD_t2245161294, ___color_18)); }
	inline Color_t1588175760  get_color_18() const { return ___color_18; }
	inline Color_t1588175760 * get_address_of_color_18() { return &___color_18; }
	inline void set_color_18(Color_t1588175760  value)
	{
		___color_18 = value;
	}

	inline static int32_t get_offset_of_ringColor_19() { return static_cast<int32_t>(offsetof(SceneChangerTwoD_t2245161294, ___ringColor_19)); }
	inline Color_t1588175760  get_ringColor_19() const { return ___ringColor_19; }
	inline Color_t1588175760 * get_address_of_ringColor_19() { return &___ringColor_19; }
	inline void set_ringColor_19(Color_t1588175760  value)
	{
		___ringColor_19 = value;
	}

	inline static int32_t get_offset_of_travelDirection_20() { return static_cast<int32_t>(offsetof(SceneChangerTwoD_t2245161294, ___travelDirection_20)); }
	inline Vector3_t3525329789  get_travelDirection_20() const { return ___travelDirection_20; }
	inline Vector3_t3525329789 * get_address_of_travelDirection_20() { return &___travelDirection_20; }
	inline void set_travelDirection_20(Vector3_t3525329789  value)
	{
		___travelDirection_20 = value;
	}

	inline static int32_t get_offset_of_fadeTimerMax_21() { return static_cast<int32_t>(offsetof(SceneChangerTwoD_t2245161294, ___fadeTimerMax_21)); }
	inline float get_fadeTimerMax_21() const { return ___fadeTimerMax_21; }
	inline float* get_address_of_fadeTimerMax_21() { return &___fadeTimerMax_21; }
	inline void set_fadeTimerMax_21(float value)
	{
		___fadeTimerMax_21 = value;
	}

	inline static int32_t get_offset_of_fadeTimer_22() { return static_cast<int32_t>(offsetof(SceneChangerTwoD_t2245161294, ___fadeTimer_22)); }
	inline float get_fadeTimer_22() const { return ___fadeTimer_22; }
	inline float* get_address_of_fadeTimer_22() { return &___fadeTimer_22; }
	inline void set_fadeTimer_22(float value)
	{
		___fadeTimer_22 = value;
	}

	inline static int32_t get_offset_of_distance_23() { return static_cast<int32_t>(offsetof(SceneChangerTwoD_t2245161294, ___distance_23)); }
	inline float get_distance_23() const { return ___distance_23; }
	inline float* get_address_of_distance_23() { return &___distance_23; }
	inline void set_distance_23(float value)
	{
		___distance_23 = value;
	}

	inline static int32_t get_offset_of_scale_24() { return static_cast<int32_t>(offsetof(SceneChangerTwoD_t2245161294, ___scale_24)); }
	inline float get_scale_24() const { return ___scale_24; }
	inline float* get_address_of_scale_24() { return &___scale_24; }
	inline void set_scale_24(float value)
	{
		___scale_24 = value;
	}

	inline static int32_t get_offset_of_timer_25() { return static_cast<int32_t>(offsetof(SceneChangerTwoD_t2245161294, ___timer_25)); }
	inline float get_timer_25() const { return ___timer_25; }
	inline float* get_address_of_timer_25() { return &___timer_25; }
	inline void set_timer_25(float value)
	{
		___timer_25 = value;
	}

	inline static int32_t get_offset_of_timerLimit_26() { return static_cast<int32_t>(offsetof(SceneChangerTwoD_t2245161294, ___timerLimit_26)); }
	inline float get_timerLimit_26() const { return ___timerLimit_26; }
	inline float* get_address_of_timerLimit_26() { return &___timerLimit_26; }
	inline void set_timerLimit_26(float value)
	{
		___timerLimit_26 = value;
	}

	inline static int32_t get_offset_of_changedPosition_27() { return static_cast<int32_t>(offsetof(SceneChangerTwoD_t2245161294, ___changedPosition_27)); }
	inline bool get_changedPosition_27() const { return ___changedPosition_27; }
	inline bool* get_address_of_changedPosition_27() { return &___changedPosition_27; }
	inline void set_changedPosition_27(bool value)
	{
		___changedPosition_27 = value;
	}

	inline static int32_t get_offset_of_triggerMusic_28() { return static_cast<int32_t>(offsetof(SceneChangerTwoD_t2245161294, ___triggerMusic_28)); }
	inline bool get_triggerMusic_28() const { return ___triggerMusic_28; }
	inline bool* get_address_of_triggerMusic_28() { return &___triggerMusic_28; }
	inline void set_triggerMusic_28(bool value)
	{
		___triggerMusic_28 = value;
	}

	inline static int32_t get_offset_of_musicPlayer_29() { return static_cast<int32_t>(offsetof(SceneChangerTwoD_t2245161294, ___musicPlayer_29)); }
	inline AudioPlayer_t2016416311 * get_musicPlayer_29() const { return ___musicPlayer_29; }
	inline AudioPlayer_t2016416311 ** get_address_of_musicPlayer_29() { return &___musicPlayer_29; }
	inline void set_musicPlayer_29(AudioPlayer_t2016416311 * value)
	{
		___musicPlayer_29 = value;
		Il2CppCodeGenWriteBarrier(&___musicPlayer_29, value);
	}

	inline static int32_t get_offset_of_delayScript_30() { return static_cast<int32_t>(offsetof(SceneChangerTwoD_t2245161294, ___delayScript_30)); }
	inline SceneChangeDelay_t2203174823 * get_delayScript_30() const { return ___delayScript_30; }
	inline SceneChangeDelay_t2203174823 ** get_address_of_delayScript_30() { return &___delayScript_30; }
	inline void set_delayScript_30(SceneChangeDelay_t2203174823 * value)
	{
		___delayScript_30 = value;
		Il2CppCodeGenWriteBarrier(&___delayScript_30, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
