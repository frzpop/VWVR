#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector2>
struct DOGetter_1_t2219490769;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector2>
struct DOSetter_1_t3256130597;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>
struct ABSTweenPlugin_3_t1646025238;
// System.String
struct String_t;

#include "DOTween_DG_Tweening_Tweener1766303790.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "DOTween_DG_Tweening_Plugins_Options_VectorOptions3308462279.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>
struct  TweenerCore_3_t753146263  : public Tweener_t1766303790
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Vector2_t3525329788  ___startValue_53;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Vector2_t3525329788  ___endValue_54;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Vector2_t3525329788  ___changeValue_55;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	VectorOptions_t3308462279  ___plugOptions_56;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t2219490769 * ___getter_57;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t3256130597 * ___setter_58;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t1646025238 * ___tweenPlugin_59;

public:
	inline static int32_t get_offset_of_startValue_53() { return static_cast<int32_t>(offsetof(TweenerCore_3_t753146263, ___startValue_53)); }
	inline Vector2_t3525329788  get_startValue_53() const { return ___startValue_53; }
	inline Vector2_t3525329788 * get_address_of_startValue_53() { return &___startValue_53; }
	inline void set_startValue_53(Vector2_t3525329788  value)
	{
		___startValue_53 = value;
	}

	inline static int32_t get_offset_of_endValue_54() { return static_cast<int32_t>(offsetof(TweenerCore_3_t753146263, ___endValue_54)); }
	inline Vector2_t3525329788  get_endValue_54() const { return ___endValue_54; }
	inline Vector2_t3525329788 * get_address_of_endValue_54() { return &___endValue_54; }
	inline void set_endValue_54(Vector2_t3525329788  value)
	{
		___endValue_54 = value;
	}

	inline static int32_t get_offset_of_changeValue_55() { return static_cast<int32_t>(offsetof(TweenerCore_3_t753146263, ___changeValue_55)); }
	inline Vector2_t3525329788  get_changeValue_55() const { return ___changeValue_55; }
	inline Vector2_t3525329788 * get_address_of_changeValue_55() { return &___changeValue_55; }
	inline void set_changeValue_55(Vector2_t3525329788  value)
	{
		___changeValue_55 = value;
	}

	inline static int32_t get_offset_of_plugOptions_56() { return static_cast<int32_t>(offsetof(TweenerCore_3_t753146263, ___plugOptions_56)); }
	inline VectorOptions_t3308462279  get_plugOptions_56() const { return ___plugOptions_56; }
	inline VectorOptions_t3308462279 * get_address_of_plugOptions_56() { return &___plugOptions_56; }
	inline void set_plugOptions_56(VectorOptions_t3308462279  value)
	{
		___plugOptions_56 = value;
	}

	inline static int32_t get_offset_of_getter_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_t753146263, ___getter_57)); }
	inline DOGetter_1_t2219490769 * get_getter_57() const { return ___getter_57; }
	inline DOGetter_1_t2219490769 ** get_address_of_getter_57() { return &___getter_57; }
	inline void set_getter_57(DOGetter_1_t2219490769 * value)
	{
		___getter_57 = value;
		Il2CppCodeGenWriteBarrier(&___getter_57, value);
	}

	inline static int32_t get_offset_of_setter_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_t753146263, ___setter_58)); }
	inline DOSetter_1_t3256130597 * get_setter_58() const { return ___setter_58; }
	inline DOSetter_1_t3256130597 ** get_address_of_setter_58() { return &___setter_58; }
	inline void set_setter_58(DOSetter_1_t3256130597 * value)
	{
		___setter_58 = value;
		Il2CppCodeGenWriteBarrier(&___setter_58, value);
	}

	inline static int32_t get_offset_of_tweenPlugin_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_t753146263, ___tweenPlugin_59)); }
	inline ABSTweenPlugin_3_t1646025238 * get_tweenPlugin_59() const { return ___tweenPlugin_59; }
	inline ABSTweenPlugin_3_t1646025238 ** get_address_of_tweenPlugin_59() { return &___tweenPlugin_59; }
	inline void set_tweenPlugin_59(ABSTweenPlugin_3_t1646025238 * value)
	{
		___tweenPlugin_59 = value;
		Il2CppCodeGenWriteBarrier(&___tweenPlugin_59, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
