#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// DG.Tweening.Core.DOGetter`1<System.String>
struct DOGetter_1_t3957617179;
// DG.Tweening.Core.DOSetter`1<System.String>
struct DOSetter_1_t699289711;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.String,System.String,DG.Tweening.Plugins.Options.StringOptions>
struct ABSTweenPlugin_3_t1993456272;

#include "DOTween_DG_Tweening_Tweener1766303790.h"
#include "DOTween_DG_Tweening_Plugins_Options_StringOptions2623536697.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Core.TweenerCore`3<System.String,System.String,DG.Tweening.Plugins.Options.StringOptions>
struct  TweenerCore_3_t1100577297  : public Tweener_t1766303790
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	String_t* ___startValue_53;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	String_t* ___endValue_54;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	String_t* ___changeValue_55;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	StringOptions_t2623536697  ___plugOptions_56;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t3957617179 * ___getter_57;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t699289711 * ___setter_58;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t1993456272 * ___tweenPlugin_59;

public:
	inline static int32_t get_offset_of_startValue_53() { return static_cast<int32_t>(offsetof(TweenerCore_3_t1100577297, ___startValue_53)); }
	inline String_t* get_startValue_53() const { return ___startValue_53; }
	inline String_t** get_address_of_startValue_53() { return &___startValue_53; }
	inline void set_startValue_53(String_t* value)
	{
		___startValue_53 = value;
		Il2CppCodeGenWriteBarrier(&___startValue_53, value);
	}

	inline static int32_t get_offset_of_endValue_54() { return static_cast<int32_t>(offsetof(TweenerCore_3_t1100577297, ___endValue_54)); }
	inline String_t* get_endValue_54() const { return ___endValue_54; }
	inline String_t** get_address_of_endValue_54() { return &___endValue_54; }
	inline void set_endValue_54(String_t* value)
	{
		___endValue_54 = value;
		Il2CppCodeGenWriteBarrier(&___endValue_54, value);
	}

	inline static int32_t get_offset_of_changeValue_55() { return static_cast<int32_t>(offsetof(TweenerCore_3_t1100577297, ___changeValue_55)); }
	inline String_t* get_changeValue_55() const { return ___changeValue_55; }
	inline String_t** get_address_of_changeValue_55() { return &___changeValue_55; }
	inline void set_changeValue_55(String_t* value)
	{
		___changeValue_55 = value;
		Il2CppCodeGenWriteBarrier(&___changeValue_55, value);
	}

	inline static int32_t get_offset_of_plugOptions_56() { return static_cast<int32_t>(offsetof(TweenerCore_3_t1100577297, ___plugOptions_56)); }
	inline StringOptions_t2623536697  get_plugOptions_56() const { return ___plugOptions_56; }
	inline StringOptions_t2623536697 * get_address_of_plugOptions_56() { return &___plugOptions_56; }
	inline void set_plugOptions_56(StringOptions_t2623536697  value)
	{
		___plugOptions_56 = value;
	}

	inline static int32_t get_offset_of_getter_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_t1100577297, ___getter_57)); }
	inline DOGetter_1_t3957617179 * get_getter_57() const { return ___getter_57; }
	inline DOGetter_1_t3957617179 ** get_address_of_getter_57() { return &___getter_57; }
	inline void set_getter_57(DOGetter_1_t3957617179 * value)
	{
		___getter_57 = value;
		Il2CppCodeGenWriteBarrier(&___getter_57, value);
	}

	inline static int32_t get_offset_of_setter_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_t1100577297, ___setter_58)); }
	inline DOSetter_1_t699289711 * get_setter_58() const { return ___setter_58; }
	inline DOSetter_1_t699289711 ** get_address_of_setter_58() { return &___setter_58; }
	inline void set_setter_58(DOSetter_1_t699289711 * value)
	{
		___setter_58 = value;
		Il2CppCodeGenWriteBarrier(&___setter_58, value);
	}

	inline static int32_t get_offset_of_tweenPlugin_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_t1100577297, ___tweenPlugin_59)); }
	inline ABSTweenPlugin_3_t1993456272 * get_tweenPlugin_59() const { return ___tweenPlugin_59; }
	inline ABSTweenPlugin_3_t1993456272 ** get_address_of_tweenPlugin_59() { return &___tweenPlugin_59; }
	inline void set_tweenPlugin_59(ABSTweenPlugin_3_t1993456272 * value)
	{
		___tweenPlugin_59 = value;
		Il2CppCodeGenWriteBarrier(&___tweenPlugin_59, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
