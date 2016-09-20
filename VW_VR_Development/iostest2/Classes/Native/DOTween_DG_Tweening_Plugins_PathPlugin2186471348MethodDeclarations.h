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

// DG.Tweening.Plugins.PathPlugin
struct PathPlugin_t2186471348;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>
struct TweenerCore_3_t3204927250;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>
struct ABSTweenPlugin_3_t4097806225;
// DG.Tweening.Plugins.Core.PathCore.Path
struct Path_t3978043016;
// DG.Tweening.Tween
struct Tween_t1103364673;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>
struct DOGetter_1_t2219490770;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>
struct DOSetter_1_t3256130598;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "DOTween_DG_Tweening_Plugins_Options_PathOptions1144419237.h"
#include "DOTween_DG_Tweening_Plugins_Core_PathCore_Path3978043016.h"
#include "DOTween_DG_Tweening_Tween1103364673.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateNotice384566358.h"

// System.Void DG.Tweening.Plugins.PathPlugin::Reset(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>)
extern "C"  void PathPlugin_Reset_m849982479 (PathPlugin_t2186471348 * __this, TweenerCore_3_t3204927250 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.PathPlugin::SetFrom(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>,System.Boolean)
extern "C"  void PathPlugin_SetFrom_m1136053393 (PathPlugin_t2186471348 * __this, TweenerCore_3_t3204927250 * ___t0, bool ___isRelative1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DG.Tweening.Plugins.PathPlugin::Get()
extern "C"  ABSTweenPlugin_3_t4097806225 * PathPlugin_Get_m3361625602 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Plugins.Core.PathCore.Path DG.Tweening.Plugins.PathPlugin::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>,UnityEngine.Vector3)
extern "C"  Path_t3978043016 * PathPlugin_ConvertToStartValue_m2059156489 (PathPlugin_t2186471348 * __this, TweenerCore_3_t3204927250 * ___t0, Vector3_t3525329789  ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.PathPlugin::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>)
extern "C"  void PathPlugin_SetRelativeEndValue_m3885196036 (PathPlugin_t2186471348 * __this, TweenerCore_3_t3204927250 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.PathPlugin::SetChangeValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>)
extern "C"  void PathPlugin_SetChangeValue_m2688024047 (PathPlugin_t2186471348 * __this, TweenerCore_3_t3204927250 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.Plugins.PathPlugin::GetSpeedBasedDuration(DG.Tweening.Plugins.Options.PathOptions,System.Single,DG.Tweening.Plugins.Core.PathCore.Path)
extern "C"  float PathPlugin_GetSpeedBasedDuration_m843470247 (PathPlugin_t2186471348 * __this, PathOptions_t1144419237  ___options0, float ___unitsXSecond1, Path_t3978043016 * ___changeValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.PathPlugin::EvaluateAndApply(DG.Tweening.Plugins.Options.PathOptions,DG.Tweening.Tween,System.Boolean,DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>,DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>,System.Single,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Core.PathCore.Path,System.Single,System.Boolean,DG.Tweening.Core.Enums.UpdateNotice)
extern "C"  void PathPlugin_EvaluateAndApply_m205930117 (PathPlugin_t2186471348 * __this, PathOptions_t1144419237  ___options0, Tween_t1103364673 * ___t1, bool ___isRelative2, DOGetter_1_t2219490770 * ___getter3, DOSetter_1_t3256130598 * ___setter4, float ___elapsed5, Path_t3978043016 * ___startValue6, Path_t3978043016 * ___changeValue7, float ___duration8, bool ___usingInversePosition9, int32_t ___updateNotice10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.PathPlugin::SetOrientation(DG.Tweening.Plugins.Options.PathOptions,DG.Tweening.Tween,DG.Tweening.Plugins.Core.PathCore.Path,System.Single,UnityEngine.Vector3,DG.Tweening.Core.Enums.UpdateNotice)
extern "C"  void PathPlugin_SetOrientation_m3933453335 (PathPlugin_t2186471348 * __this, PathOptions_t1144419237  ___options0, Tween_t1103364673 * ___t1, Path_t3978043016 * ___path2, float ___pathPerc3, Vector3_t3525329789  ___tPos4, int32_t ___updateNotice5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.PathPlugin::.ctor()
extern "C"  void PathPlugin__ctor_m1551721147 (PathPlugin_t2186471348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
