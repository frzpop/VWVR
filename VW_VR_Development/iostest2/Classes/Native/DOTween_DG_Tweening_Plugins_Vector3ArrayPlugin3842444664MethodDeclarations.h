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

// DG.Tweening.Plugins.Vector3ArrayPlugin
struct Vector3ArrayPlugin_t3842444664;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3[],DG.Tweening.Plugins.Options.Vector3ArrayOptions>
struct TweenerCore_3_t1715509190;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3227571696;
// DG.Tweening.Tween
struct Tween_t1103364673;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>
struct DOGetter_1_t2219490770;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>
struct DOSetter_1_t3256130598;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "DOTween_DG_Tweening_Plugins_Options_Vector3ArrayOpt939984481.h"
#include "DOTween_DG_Tweening_Tween1103364673.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateNotice384566358.h"

// System.Void DG.Tweening.Plugins.Vector3ArrayPlugin::Reset(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3[],DG.Tweening.Plugins.Options.Vector3ArrayOptions>)
extern "C"  void Vector3ArrayPlugin_Reset_m754977442 (Vector3ArrayPlugin_t3842444664 * __this, TweenerCore_3_t1715509190 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Vector3ArrayPlugin::SetFrom(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3[],DG.Tweening.Plugins.Options.Vector3ArrayOptions>,System.Boolean)
extern "C"  void Vector3ArrayPlugin_SetFrom_m1926153528 (Vector3ArrayPlugin_t3842444664 * __this, TweenerCore_3_t1715509190 * ___t0, bool ___isRelative1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] DG.Tweening.Plugins.Vector3ArrayPlugin::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3[],DG.Tweening.Plugins.Options.Vector3ArrayOptions>,UnityEngine.Vector3)
extern "C"  Vector3U5BU5D_t3227571696* Vector3ArrayPlugin_ConvertToStartValue_m3999950783 (Vector3ArrayPlugin_t3842444664 * __this, TweenerCore_3_t1715509190 * ___t0, Vector3_t3525329789  ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Vector3ArrayPlugin::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3[],DG.Tweening.Plugins.Options.Vector3ArrayOptions>)
extern "C"  void Vector3ArrayPlugin_SetRelativeEndValue_m2293439757 (Vector3ArrayPlugin_t3842444664 * __this, TweenerCore_3_t1715509190 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Vector3ArrayPlugin::SetChangeValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3[],DG.Tweening.Plugins.Options.Vector3ArrayOptions>)
extern "C"  void Vector3ArrayPlugin_SetChangeValue_m3959887802 (Vector3ArrayPlugin_t3842444664 * __this, TweenerCore_3_t1715509190 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.Plugins.Vector3ArrayPlugin::GetSpeedBasedDuration(DG.Tweening.Plugins.Options.Vector3ArrayOptions,System.Single,UnityEngine.Vector3[])
extern "C"  float Vector3ArrayPlugin_GetSpeedBasedDuration_m3606001438 (Vector3ArrayPlugin_t3842444664 * __this, Vector3ArrayOptions_t939984481  ___options0, float ___unitsXSecond1, Vector3U5BU5D_t3227571696* ___changeValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Vector3ArrayPlugin::EvaluateAndApply(DG.Tweening.Plugins.Options.Vector3ArrayOptions,DG.Tweening.Tween,System.Boolean,DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>,DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>,System.Single,UnityEngine.Vector3[],UnityEngine.Vector3[],System.Single,System.Boolean,DG.Tweening.Core.Enums.UpdateNotice)
extern "C"  void Vector3ArrayPlugin_EvaluateAndApply_m1477747427 (Vector3ArrayPlugin_t3842444664 * __this, Vector3ArrayOptions_t939984481  ___options0, Tween_t1103364673 * ___t1, bool ___isRelative2, DOGetter_1_t2219490770 * ___getter3, DOSetter_1_t3256130598 * ___setter4, float ___elapsed5, Vector3U5BU5D_t3227571696* ___startValue6, Vector3U5BU5D_t3227571696* ___changeValue7, float ___duration8, bool ___usingInversePosition9, int32_t ___updateNotice10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Vector3ArrayPlugin::.ctor()
extern "C"  void Vector3ArrayPlugin__ctor_m3342952823 (Vector3ArrayPlugin_t3842444664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
