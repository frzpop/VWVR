#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Light
struct Light_t1596303683;

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.ShortcutExtensions/<>c__DisplayClass70_0
struct  U3CU3Ec__DisplayClass70_0_t2750251521  : public Il2CppObject
{
public:
	// UnityEngine.Color DG.Tweening.ShortcutExtensions/<>c__DisplayClass70_0::to
	Color_t1588175760  ___to_0;
	// UnityEngine.Light DG.Tweening.ShortcutExtensions/<>c__DisplayClass70_0::target
	Light_t1596303683 * ___target_1;

public:
	inline static int32_t get_offset_of_to_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass70_0_t2750251521, ___to_0)); }
	inline Color_t1588175760  get_to_0() const { return ___to_0; }
	inline Color_t1588175760 * get_address_of_to_0() { return &___to_0; }
	inline void set_to_0(Color_t1588175760  value)
	{
		___to_0 = value;
	}

	inline static int32_t get_offset_of_target_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass70_0_t2750251521, ___target_1)); }
	inline Light_t1596303683 * get_target_1() const { return ___target_1; }
	inline Light_t1596303683 ** get_address_of_target_1() { return &___target_1; }
	inline void set_target_1(Light_t1596303683 * value)
	{
		___target_1 = value;
		Il2CppCodeGenWriteBarrier(&___target_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
