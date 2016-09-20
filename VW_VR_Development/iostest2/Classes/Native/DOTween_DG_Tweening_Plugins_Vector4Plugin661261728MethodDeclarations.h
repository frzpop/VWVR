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

// DG.Tweening.Plugins.Vector4Plugin
struct Vector4Plugin_t661261728;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_t763702783;
// DG.Tweening.Tween
struct Tween_t1103364673;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector4>
struct DOGetter_1_t2219490771;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector4>
struct DOSetter_1_t3256130599;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector43525329790.h"
#include "DOTween_DG_Tweening_Plugins_Options_VectorOptions3308462279.h"
#include "DOTween_DG_Tweening_Tween1103364673.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateNotice384566358.h"

// System.Void DG.Tweening.Plugins.Vector4Plugin::Reset(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>)
extern "C"  void Vector4Plugin_Reset_m3930902256 (Vector4Plugin_t661261728 * __this, TweenerCore_3_t763702783 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Vector4Plugin::SetFrom(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>,System.Boolean)
extern "C"  void Vector4Plugin_SetFrom_m474987050 (Vector4Plugin_t661261728 * __this, TweenerCore_3_t763702783 * ___t0, bool ___isRelative1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 DG.Tweening.Plugins.Vector4Plugin::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>,UnityEngine.Vector4)
extern "C"  Vector4_t3525329790  Vector4Plugin_ConvertToStartValue_m2536893915 (Vector4Plugin_t661261728 * __this, TweenerCore_3_t763702783 * ___t0, Vector4_t3525329790  ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Vector4Plugin::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>)
extern "C"  void Vector4Plugin_SetRelativeEndValue_m309780059 (Vector4Plugin_t661261728 * __this, TweenerCore_3_t763702783 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Vector4Plugin::SetChangeValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>)
extern "C"  void Vector4Plugin_SetChangeValue_m2424942712 (Vector4Plugin_t661261728 * __this, TweenerCore_3_t763702783 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.Plugins.Vector4Plugin::GetSpeedBasedDuration(DG.Tweening.Plugins.Options.VectorOptions,System.Single,UnityEngine.Vector4)
extern "C"  float Vector4Plugin_GetSpeedBasedDuration_m3464488745 (Vector4Plugin_t661261728 * __this, VectorOptions_t3308462279  ___options0, float ___unitsXSecond1, Vector4_t3525329790  ___changeValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Vector4Plugin::EvaluateAndApply(DG.Tweening.Plugins.Options.VectorOptions,DG.Tweening.Tween,System.Boolean,DG.Tweening.Core.DOGetter`1<UnityEngine.Vector4>,DG.Tweening.Core.DOSetter`1<UnityEngine.Vector4>,System.Single,UnityEngine.Vector4,UnityEngine.Vector4,System.Single,System.Boolean,DG.Tweening.Core.Enums.UpdateNotice)
extern "C"  void Vector4Plugin_EvaluateAndApply_m3465087315 (Vector4Plugin_t661261728 * __this, VectorOptions_t3308462279  ___options0, Tween_t1103364673 * ___t1, bool ___isRelative2, DOGetter_1_t2219490771 * ___getter3, DOSetter_1_t3256130599 * ___setter4, float ___elapsed5, Vector4_t3525329790  ___startValue6, Vector4_t3525329790  ___changeValue7, float ___duration8, bool ___usingInversePosition9, int32_t ___updateNotice10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Vector4Plugin::.ctor()
extern "C"  void Vector4Plugin__ctor_m972564015 (Vector4Plugin_t661261728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
