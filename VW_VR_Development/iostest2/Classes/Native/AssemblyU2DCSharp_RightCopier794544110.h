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
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RightCopier
struct  RightCopier_t794544110  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject RightCopier::copyPrefab
	GameObject_t4012695102 * ___copyPrefab_2;
	// UnityEngine.GameObject RightCopier::rightEyeParent
	GameObject_t4012695102 * ___rightEyeParent_3;
	// UnityEngine.GameObject RightCopier::copy
	GameObject_t4012695102 * ___copy_4;
	// UnityEngine.Vector3 RightCopier::offset
	Vector3_t3525329789  ___offset_5;

public:
	inline static int32_t get_offset_of_copyPrefab_2() { return static_cast<int32_t>(offsetof(RightCopier_t794544110, ___copyPrefab_2)); }
	inline GameObject_t4012695102 * get_copyPrefab_2() const { return ___copyPrefab_2; }
	inline GameObject_t4012695102 ** get_address_of_copyPrefab_2() { return &___copyPrefab_2; }
	inline void set_copyPrefab_2(GameObject_t4012695102 * value)
	{
		___copyPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___copyPrefab_2, value);
	}

	inline static int32_t get_offset_of_rightEyeParent_3() { return static_cast<int32_t>(offsetof(RightCopier_t794544110, ___rightEyeParent_3)); }
	inline GameObject_t4012695102 * get_rightEyeParent_3() const { return ___rightEyeParent_3; }
	inline GameObject_t4012695102 ** get_address_of_rightEyeParent_3() { return &___rightEyeParent_3; }
	inline void set_rightEyeParent_3(GameObject_t4012695102 * value)
	{
		___rightEyeParent_3 = value;
		Il2CppCodeGenWriteBarrier(&___rightEyeParent_3, value);
	}

	inline static int32_t get_offset_of_copy_4() { return static_cast<int32_t>(offsetof(RightCopier_t794544110, ___copy_4)); }
	inline GameObject_t4012695102 * get_copy_4() const { return ___copy_4; }
	inline GameObject_t4012695102 ** get_address_of_copy_4() { return &___copy_4; }
	inline void set_copy_4(GameObject_t4012695102 * value)
	{
		___copy_4 = value;
		Il2CppCodeGenWriteBarrier(&___copy_4, value);
	}

	inline static int32_t get_offset_of_offset_5() { return static_cast<int32_t>(offsetof(RightCopier_t794544110, ___offset_5)); }
	inline Vector3_t3525329789  get_offset_5() const { return ___offset_5; }
	inline Vector3_t3525329789 * get_address_of_offset_5() { return &___offset_5; }
	inline void set_offset_5(Vector3_t3525329789  value)
	{
		___offset_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
