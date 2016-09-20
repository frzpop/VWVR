#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t2265160319;
// PopupRaycaster
struct PopupRaycaster_t3557466538;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// RightCopier
struct RightCopier_t794544110;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Popup
struct  Popup_t77299852  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 Popup::myID
	int32_t ___myID_2;
	// UnityEngine.Texture2D[] Popup::textures
	Texture2DU5BU5D_t2265160319* ___textures_3;
	// PopupRaycaster Popup::raycaster
	PopupRaycaster_t3557466538 * ___raycaster_4;
	// UnityEngine.GameObject Popup::leftEye
	GameObject_t4012695102 * ___leftEye_5;
	// UnityEngine.GameObject Popup::popupObj
	GameObject_t4012695102 * ___popupObj_6;
	// RightCopier Popup::copier
	RightCopier_t794544110 * ___copier_7;
	// UnityEngine.GameObject Popup::myRing
	GameObject_t4012695102 * ___myRing_8;
	// UnityEngine.GameObject Popup::myPopupObjCopy
	GameObject_t4012695102 * ___myPopupObjCopy_9;
	// UnityEngine.GameObject Popup::myRingCopy
	GameObject_t4012695102 * ___myRingCopy_10;
	// UnityEngine.Color Popup::ringColor
	Color_t1588175760  ___ringColor_11;
	// UnityEngine.Vector3 Popup::texScale
	Vector3_t3525329789  ___texScale_12;
	// UnityEngine.GameObject Popup::rightCopy
	GameObject_t4012695102 * ___rightCopy_13;
	// System.Single Popup::timer
	float ___timer_14;
	// System.Single Popup::limit
	float ___limit_15;
	// System.Single Popup::offLimit
	float ___offLimit_16;
	// System.Boolean Popup::popup
	bool ___popup_17;
	// System.Boolean Popup::done
	bool ___done_18;
	// System.Boolean Popup::lookingAtMe
	bool ___lookingAtMe_19;

public:
	inline static int32_t get_offset_of_myID_2() { return static_cast<int32_t>(offsetof(Popup_t77299852, ___myID_2)); }
	inline int32_t get_myID_2() const { return ___myID_2; }
	inline int32_t* get_address_of_myID_2() { return &___myID_2; }
	inline void set_myID_2(int32_t value)
	{
		___myID_2 = value;
	}

	inline static int32_t get_offset_of_textures_3() { return static_cast<int32_t>(offsetof(Popup_t77299852, ___textures_3)); }
	inline Texture2DU5BU5D_t2265160319* get_textures_3() const { return ___textures_3; }
	inline Texture2DU5BU5D_t2265160319** get_address_of_textures_3() { return &___textures_3; }
	inline void set_textures_3(Texture2DU5BU5D_t2265160319* value)
	{
		___textures_3 = value;
		Il2CppCodeGenWriteBarrier(&___textures_3, value);
	}

	inline static int32_t get_offset_of_raycaster_4() { return static_cast<int32_t>(offsetof(Popup_t77299852, ___raycaster_4)); }
	inline PopupRaycaster_t3557466538 * get_raycaster_4() const { return ___raycaster_4; }
	inline PopupRaycaster_t3557466538 ** get_address_of_raycaster_4() { return &___raycaster_4; }
	inline void set_raycaster_4(PopupRaycaster_t3557466538 * value)
	{
		___raycaster_4 = value;
		Il2CppCodeGenWriteBarrier(&___raycaster_4, value);
	}

	inline static int32_t get_offset_of_leftEye_5() { return static_cast<int32_t>(offsetof(Popup_t77299852, ___leftEye_5)); }
	inline GameObject_t4012695102 * get_leftEye_5() const { return ___leftEye_5; }
	inline GameObject_t4012695102 ** get_address_of_leftEye_5() { return &___leftEye_5; }
	inline void set_leftEye_5(GameObject_t4012695102 * value)
	{
		___leftEye_5 = value;
		Il2CppCodeGenWriteBarrier(&___leftEye_5, value);
	}

	inline static int32_t get_offset_of_popupObj_6() { return static_cast<int32_t>(offsetof(Popup_t77299852, ___popupObj_6)); }
	inline GameObject_t4012695102 * get_popupObj_6() const { return ___popupObj_6; }
	inline GameObject_t4012695102 ** get_address_of_popupObj_6() { return &___popupObj_6; }
	inline void set_popupObj_6(GameObject_t4012695102 * value)
	{
		___popupObj_6 = value;
		Il2CppCodeGenWriteBarrier(&___popupObj_6, value);
	}

	inline static int32_t get_offset_of_copier_7() { return static_cast<int32_t>(offsetof(Popup_t77299852, ___copier_7)); }
	inline RightCopier_t794544110 * get_copier_7() const { return ___copier_7; }
	inline RightCopier_t794544110 ** get_address_of_copier_7() { return &___copier_7; }
	inline void set_copier_7(RightCopier_t794544110 * value)
	{
		___copier_7 = value;
		Il2CppCodeGenWriteBarrier(&___copier_7, value);
	}

	inline static int32_t get_offset_of_myRing_8() { return static_cast<int32_t>(offsetof(Popup_t77299852, ___myRing_8)); }
	inline GameObject_t4012695102 * get_myRing_8() const { return ___myRing_8; }
	inline GameObject_t4012695102 ** get_address_of_myRing_8() { return &___myRing_8; }
	inline void set_myRing_8(GameObject_t4012695102 * value)
	{
		___myRing_8 = value;
		Il2CppCodeGenWriteBarrier(&___myRing_8, value);
	}

	inline static int32_t get_offset_of_myPopupObjCopy_9() { return static_cast<int32_t>(offsetof(Popup_t77299852, ___myPopupObjCopy_9)); }
	inline GameObject_t4012695102 * get_myPopupObjCopy_9() const { return ___myPopupObjCopy_9; }
	inline GameObject_t4012695102 ** get_address_of_myPopupObjCopy_9() { return &___myPopupObjCopy_9; }
	inline void set_myPopupObjCopy_9(GameObject_t4012695102 * value)
	{
		___myPopupObjCopy_9 = value;
		Il2CppCodeGenWriteBarrier(&___myPopupObjCopy_9, value);
	}

	inline static int32_t get_offset_of_myRingCopy_10() { return static_cast<int32_t>(offsetof(Popup_t77299852, ___myRingCopy_10)); }
	inline GameObject_t4012695102 * get_myRingCopy_10() const { return ___myRingCopy_10; }
	inline GameObject_t4012695102 ** get_address_of_myRingCopy_10() { return &___myRingCopy_10; }
	inline void set_myRingCopy_10(GameObject_t4012695102 * value)
	{
		___myRingCopy_10 = value;
		Il2CppCodeGenWriteBarrier(&___myRingCopy_10, value);
	}

	inline static int32_t get_offset_of_ringColor_11() { return static_cast<int32_t>(offsetof(Popup_t77299852, ___ringColor_11)); }
	inline Color_t1588175760  get_ringColor_11() const { return ___ringColor_11; }
	inline Color_t1588175760 * get_address_of_ringColor_11() { return &___ringColor_11; }
	inline void set_ringColor_11(Color_t1588175760  value)
	{
		___ringColor_11 = value;
	}

	inline static int32_t get_offset_of_texScale_12() { return static_cast<int32_t>(offsetof(Popup_t77299852, ___texScale_12)); }
	inline Vector3_t3525329789  get_texScale_12() const { return ___texScale_12; }
	inline Vector3_t3525329789 * get_address_of_texScale_12() { return &___texScale_12; }
	inline void set_texScale_12(Vector3_t3525329789  value)
	{
		___texScale_12 = value;
	}

	inline static int32_t get_offset_of_rightCopy_13() { return static_cast<int32_t>(offsetof(Popup_t77299852, ___rightCopy_13)); }
	inline GameObject_t4012695102 * get_rightCopy_13() const { return ___rightCopy_13; }
	inline GameObject_t4012695102 ** get_address_of_rightCopy_13() { return &___rightCopy_13; }
	inline void set_rightCopy_13(GameObject_t4012695102 * value)
	{
		___rightCopy_13 = value;
		Il2CppCodeGenWriteBarrier(&___rightCopy_13, value);
	}

	inline static int32_t get_offset_of_timer_14() { return static_cast<int32_t>(offsetof(Popup_t77299852, ___timer_14)); }
	inline float get_timer_14() const { return ___timer_14; }
	inline float* get_address_of_timer_14() { return &___timer_14; }
	inline void set_timer_14(float value)
	{
		___timer_14 = value;
	}

	inline static int32_t get_offset_of_limit_15() { return static_cast<int32_t>(offsetof(Popup_t77299852, ___limit_15)); }
	inline float get_limit_15() const { return ___limit_15; }
	inline float* get_address_of_limit_15() { return &___limit_15; }
	inline void set_limit_15(float value)
	{
		___limit_15 = value;
	}

	inline static int32_t get_offset_of_offLimit_16() { return static_cast<int32_t>(offsetof(Popup_t77299852, ___offLimit_16)); }
	inline float get_offLimit_16() const { return ___offLimit_16; }
	inline float* get_address_of_offLimit_16() { return &___offLimit_16; }
	inline void set_offLimit_16(float value)
	{
		___offLimit_16 = value;
	}

	inline static int32_t get_offset_of_popup_17() { return static_cast<int32_t>(offsetof(Popup_t77299852, ___popup_17)); }
	inline bool get_popup_17() const { return ___popup_17; }
	inline bool* get_address_of_popup_17() { return &___popup_17; }
	inline void set_popup_17(bool value)
	{
		___popup_17 = value;
	}

	inline static int32_t get_offset_of_done_18() { return static_cast<int32_t>(offsetof(Popup_t77299852, ___done_18)); }
	inline bool get_done_18() const { return ___done_18; }
	inline bool* get_address_of_done_18() { return &___done_18; }
	inline void set_done_18(bool value)
	{
		___done_18 = value;
	}

	inline static int32_t get_offset_of_lookingAtMe_19() { return static_cast<int32_t>(offsetof(Popup_t77299852, ___lookingAtMe_19)); }
	inline bool get_lookingAtMe_19() const { return ___lookingAtMe_19; }
	inline bool* get_address_of_lookingAtMe_19() { return &___lookingAtMe_19; }
	inline void set_lookingAtMe_19(bool value)
	{
		___lookingAtMe_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
