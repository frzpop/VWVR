#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DG.Tweening.Core.DOGetter`1<UnityEngine.Color>
struct DOGetter_1_t282336741;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Color>
struct DOSetter_1_t1318976569;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>
struct ABSTweenPlugin_3_t887052358;
// System.String
struct String_t;

#include "DOTween_DG_Tweening_Tweener1766303790.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "DOTween_DG_Tweening_Plugins_Options_ColorOptions4161000167.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>
struct  TweenerCore_3_t4289140679  : public Tweener_t1766303790
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Color_t1588175760  ___startValue_53;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Color_t1588175760  ___endValue_54;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Color_t1588175760  ___changeValue_55;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	ColorOptions_t4161000167  ___plugOptions_56;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t282336741 * ___getter_57;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t1318976569 * ___setter_58;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t887052358 * ___tweenPlugin_59;

public:
	inline static int32_t get_offset_of_startValue_53() { return static_cast<int32_t>(offsetof(TweenerCore_3_t4289140679, ___startValue_53)); }
	inline Color_t1588175760  get_startValue_53() const { return ___startValue_53; }
	inline Color_t1588175760 * get_address_of_startValue_53() { return &___startValue_53; }
	inline void set_startValue_53(Color_t1588175760  value)
	{
		___startValue_53 = value;
	}

	inline static int32_t get_offset_of_endValue_54() { return static_cast<int32_t>(offsetof(TweenerCore_3_t4289140679, ___endValue_54)); }
	inline Color_t1588175760  get_endValue_54() const { return ___endValue_54; }
	inline Color_t1588175760 * get_address_of_endValue_54() { return &___endValue_54; }
	inline void set_endValue_54(Color_t1588175760  value)
	{
		___endValue_54 = value;
	}

	inline static int32_t get_offset_of_changeValue_55() { return static_cast<int32_t>(offsetof(TweenerCore_3_t4289140679, ___changeValue_55)); }
	inline Color_t1588175760  get_changeValue_55() const { return ___changeValue_55; }
	inline Color_t1588175760 * get_address_of_changeValue_55() { return &___changeValue_55; }
	inline void set_changeValue_55(Color_t1588175760  value)
	{
		___changeValue_55 = value;
	}

	inline static int32_t get_offset_of_plugOptions_56() { return static_cast<int32_t>(offsetof(TweenerCore_3_t4289140679, ___plugOptions_56)); }
	inline ColorOptions_t4161000167  get_plugOptions_56() const { return ___plugOptions_56; }
	inline ColorOptions_t4161000167 * get_address_of_plugOptions_56() { return &___plugOptions_56; }
	inline void set_plugOptions_56(ColorOptions_t4161000167  value)
	{
		___plugOptions_56 = value;
	}

	inline static int32_t get_offset_of_getter_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_t4289140679, ___getter_57)); }
	inline DOGetter_1_t282336741 * get_getter_57() const { return ___getter_57; }
	inline DOGetter_1_t282336741 ** get_address_of_getter_57() { return &___getter_57; }
	inline void set_getter_57(DOGetter_1_t282336741 * value)
	{
		___getter_57 = value;
		Il2CppCodeGenWriteBarrier(&___getter_57, value);
	}

	inline static int32_t get_offset_of_setter_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_t4289140679, ___setter_58)); }
	inline DOSetter_1_t1318976569 * get_setter_58() const { return ___setter_58; }
	inline DOSetter_1_t1318976569 ** get_address_of_setter_58() { return &___setter_58; }
	inline void set_setter_58(DOSetter_1_t1318976569 * value)
	{
		___setter_58 = value;
		Il2CppCodeGenWriteBarrier(&___setter_58, value);
	}

	inline static int32_t get_offset_of_tweenPlugin_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_t4289140679, ___tweenPlugin_59)); }
	inline ABSTweenPlugin_3_t887052358 * get_tweenPlugin_59() const { return ___tweenPlugin_59; }
	inline ABSTweenPlugin_3_t887052358 ** get_address_of_tweenPlugin_59() { return &___tweenPlugin_59; }
	inline void set_tweenPlugin_59(ABSTweenPlugin_3_t887052358 * value)
	{
		___tweenPlugin_59 = value;
		Il2CppCodeGenWriteBarrier(&___tweenPlugin_59, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
