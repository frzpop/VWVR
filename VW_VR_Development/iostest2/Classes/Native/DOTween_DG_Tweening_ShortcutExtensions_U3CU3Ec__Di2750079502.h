#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.LineRenderer
struct LineRenderer_t305781060;

#include "mscorlib_System_Object837106420.h"
#include "DOTween_DG_Tweening_Color23046135109.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.ShortcutExtensions/<>c__DisplayClass17_0
struct  U3CU3Ec__DisplayClass17_0_t2750079502  : public Il2CppObject
{
public:
	// DG.Tweening.Color2 DG.Tweening.ShortcutExtensions/<>c__DisplayClass17_0::startValue
	Color2_t3046135109  ___startValue_0;
	// UnityEngine.LineRenderer DG.Tweening.ShortcutExtensions/<>c__DisplayClass17_0::target
	LineRenderer_t305781060 * ___target_1;

public:
	inline static int32_t get_offset_of_startValue_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass17_0_t2750079502, ___startValue_0)); }
	inline Color2_t3046135109  get_startValue_0() const { return ___startValue_0; }
	inline Color2_t3046135109 * get_address_of_startValue_0() { return &___startValue_0; }
	inline void set_startValue_0(Color2_t3046135109  value)
	{
		___startValue_0 = value;
	}

	inline static int32_t get_offset_of_target_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass17_0_t2750079502, ___target_1)); }
	inline LineRenderer_t305781060 * get_target_1() const { return ___target_1; }
	inline LineRenderer_t305781060 ** get_address_of_target_1() { return &___target_1; }
	inline void set_target_1(LineRenderer_t305781060 * value)
	{
		___target_1 = value;
		Il2CppCodeGenWriteBarrier(&___target_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
