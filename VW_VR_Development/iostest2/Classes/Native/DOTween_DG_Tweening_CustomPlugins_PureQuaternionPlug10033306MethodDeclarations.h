#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// DG.Tweening.CustomPlugins.PureQuaternionPlugin
struct PureQuaternionPlugin_t10033306;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Quaternion,DG.Tweening.Plugins.Options.NoOptions>
struct TweenerCore_3_t1968778341;
// DG.Tweening.Tween
struct Tween_t1103364673;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Quaternion>
struct DOGetter_1_t585876960;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Quaternion>
struct DOSetter_1_t1622516788;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"
#include "DOTween_DG_Tweening_Plugins_Options_NoOptions32144009.h"
#include "DOTween_DG_Tweening_Tween1103364673.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateNotice384566358.h"

// DG.Tweening.CustomPlugins.PureQuaternionPlugin DG.Tweening.CustomPlugins.PureQuaternionPlugin::Plug()
extern "C"  PureQuaternionPlugin_t10033306 * PureQuaternionPlugin_Plug_m1814436134 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.CustomPlugins.PureQuaternionPlugin::Reset(DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Quaternion,DG.Tweening.Plugins.Options.NoOptions>)
extern "C"  void PureQuaternionPlugin_Reset_m3020557772 (PureQuaternionPlugin_t10033306 * __this, TweenerCore_3_t1968778341 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.CustomPlugins.PureQuaternionPlugin::SetFrom(DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Quaternion,DG.Tweening.Plugins.Options.NoOptions>,System.Boolean)
extern "C"  void PureQuaternionPlugin_SetFrom_m117113358 (PureQuaternionPlugin_t10033306 * __this, TweenerCore_3_t1968778341 * ___t0, bool ___isRelative1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion DG.Tweening.CustomPlugins.PureQuaternionPlugin::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Quaternion,DG.Tweening.Plugins.Options.NoOptions>,UnityEngine.Quaternion)
extern "C"  Quaternion_t1891715979  PureQuaternionPlugin_ConvertToStartValue_m45537703 (PureQuaternionPlugin_t10033306 * __this, TweenerCore_3_t1968778341 * ___t0, Quaternion_t1891715979  ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.CustomPlugins.PureQuaternionPlugin::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Quaternion,DG.Tweening.Plugins.Options.NoOptions>)
extern "C"  void PureQuaternionPlugin_SetRelativeEndValue_m1201750007 (PureQuaternionPlugin_t10033306 * __this, TweenerCore_3_t1968778341 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.CustomPlugins.PureQuaternionPlugin::SetChangeValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Quaternion,DG.Tweening.Plugins.Options.NoOptions>)
extern "C"  void PureQuaternionPlugin_SetChangeValue_m2883770472 (PureQuaternionPlugin_t10033306 * __this, TweenerCore_3_t1968778341 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.CustomPlugins.PureQuaternionPlugin::GetSpeedBasedDuration(DG.Tweening.Plugins.Options.NoOptions,System.Single,UnityEngine.Quaternion)
extern "C"  float PureQuaternionPlugin_GetSpeedBasedDuration_m2562104974 (PureQuaternionPlugin_t10033306 * __this, NoOptions_t32144009  ___options0, float ___unitsXSecond1, Quaternion_t1891715979  ___changeValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.CustomPlugins.PureQuaternionPlugin::EvaluateAndApply(DG.Tweening.Plugins.Options.NoOptions,DG.Tweening.Tween,System.Boolean,DG.Tweening.Core.DOGetter`1<UnityEngine.Quaternion>,DG.Tweening.Core.DOSetter`1<UnityEngine.Quaternion>,System.Single,UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single,System.Boolean,DG.Tweening.Core.Enums.UpdateNotice)
extern "C"  void PureQuaternionPlugin_EvaluateAndApply_m3643858173 (PureQuaternionPlugin_t10033306 * __this, NoOptions_t32144009  ___options0, Tween_t1103364673 * ___t1, bool ___isRelative2, DOGetter_1_t585876960 * ___getter3, DOSetter_1_t1622516788 * ___setter4, float ___elapsed5, Quaternion_t1891715979  ___startValue6, Quaternion_t1891715979  ___changeValue7, float ___duration8, bool ___usingInversePosition9, int32_t ___updateNotice10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.CustomPlugins.PureQuaternionPlugin::.ctor()
extern "C"  void PureQuaternionPlugin__ctor_m2253602585 (PureQuaternionPlugin_t10033306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
