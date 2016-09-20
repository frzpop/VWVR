#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<DG.Tweening.Tween>
struct List_1_t1900323642;
// System.Collections.Generic.List`1<DG.Tweening.Core.ABSSequentiable>
struct List_1_t3395674658;

#include "DOTween_DG_Tweening_Tween1103364673.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Sequence
struct  Sequence_t2436335575  : public Tween_t1103364673
{
public:
	// System.Collections.Generic.List`1<DG.Tweening.Tween> DG.Tweening.Sequence::sequencedTweens
	List_1_t1900323642 * ___sequencedTweens_51;
	// System.Collections.Generic.List`1<DG.Tweening.Core.ABSSequentiable> DG.Tweening.Sequence::_sequencedObjs
	List_1_t3395674658 * ____sequencedObjs_52;
	// System.Single DG.Tweening.Sequence::lastTweenInsertTime
	float ___lastTweenInsertTime_53;

public:
	inline static int32_t get_offset_of_sequencedTweens_51() { return static_cast<int32_t>(offsetof(Sequence_t2436335575, ___sequencedTweens_51)); }
	inline List_1_t1900323642 * get_sequencedTweens_51() const { return ___sequencedTweens_51; }
	inline List_1_t1900323642 ** get_address_of_sequencedTweens_51() { return &___sequencedTweens_51; }
	inline void set_sequencedTweens_51(List_1_t1900323642 * value)
	{
		___sequencedTweens_51 = value;
		Il2CppCodeGenWriteBarrier(&___sequencedTweens_51, value);
	}

	inline static int32_t get_offset_of__sequencedObjs_52() { return static_cast<int32_t>(offsetof(Sequence_t2436335575, ____sequencedObjs_52)); }
	inline List_1_t3395674658 * get__sequencedObjs_52() const { return ____sequencedObjs_52; }
	inline List_1_t3395674658 ** get_address_of__sequencedObjs_52() { return &____sequencedObjs_52; }
	inline void set__sequencedObjs_52(List_1_t3395674658 * value)
	{
		____sequencedObjs_52 = value;
		Il2CppCodeGenWriteBarrier(&____sequencedObjs_52, value);
	}

	inline static int32_t get_offset_of_lastTweenInsertTime_53() { return static_cast<int32_t>(offsetof(Sequence_t2436335575, ___lastTweenInsertTime_53)); }
	inline float get_lastTweenInsertTime_53() const { return ___lastTweenInsertTime_53; }
	inline float* get_address_of_lastTweenInsertTime_53() { return &___lastTweenInsertTime_53; }
	inline void set_lastTweenInsertTime_53(float value)
	{
		___lastTweenInsertTime_53 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
