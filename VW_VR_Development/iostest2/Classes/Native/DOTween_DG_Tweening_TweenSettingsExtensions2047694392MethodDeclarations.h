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

// DG.Tweening.Sequence
struct Sequence_t2436335575;
// DG.Tweening.Tween
struct Tween_t1103364673;
// DG.Tweening.TweenCallback
struct TweenCallback_t3786476454;
// DG.Tweening.Tweener
struct Tweener_t1766303790;
// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>
struct TweenerCore_3_t2841494226;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_t753146263;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_t2905908171;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_t763702783;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>
struct TweenerCore_3_t3741400174;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>
struct TweenerCore_3_t4289140679;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions>
struct TweenerCore_3_t2274666266;
// DG.Tweening.Core.TweenerCore`3<System.String,System.String,DG.Tweening.Plugins.Options.StringOptions>
struct TweenerCore_3_t1100577297;
// System.String
struct String_t;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3[],DG.Tweening.Plugins.Options.Vector3ArrayOptions>
struct TweenerCore_3_t1715509190;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>
struct TweenerCore_3_t3204927250;
// UnityEngine.Transform
struct Transform_t284553113;

#include "codegen/il2cpp-codegen.h"
#include "DOTween_DG_Tweening_Sequence2436335575.h"
#include "DOTween_DG_Tweening_Tween1103364673.h"
#include "DOTween_DG_Tweening_TweenCallback3786476454.h"
#include "DOTween_DG_Tweening_AxisConstraint3652844660.h"
#include "DOTween_DG_Tweening_ScrambleMode2140863014.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "mscorlib_System_Nullable_1_gen2116400401.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"

// DG.Tweening.Sequence DG.Tweening.TweenSettingsExtensions::Append(DG.Tweening.Sequence,DG.Tweening.Tween)
extern "C"  Sequence_t2436335575 * TweenSettingsExtensions_Append_m2918914375 (Il2CppObject * __this /* static, unused */, Sequence_t2436335575 * ___s0, Tween_t1103364673 * ___t1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Sequence DG.Tweening.TweenSettingsExtensions::Prepend(DG.Tweening.Sequence,DG.Tweening.Tween)
extern "C"  Sequence_t2436335575 * TweenSettingsExtensions_Prepend_m814535011 (Il2CppObject * __this /* static, unused */, Sequence_t2436335575 * ___s0, Tween_t1103364673 * ___t1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Sequence DG.Tweening.TweenSettingsExtensions::Join(DG.Tweening.Sequence,DG.Tweening.Tween)
extern "C"  Sequence_t2436335575 * TweenSettingsExtensions_Join_m2978849367 (Il2CppObject * __this /* static, unused */, Sequence_t2436335575 * ___s0, Tween_t1103364673 * ___t1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Sequence DG.Tweening.TweenSettingsExtensions::Insert(DG.Tweening.Sequence,System.Single,DG.Tweening.Tween)
extern "C"  Sequence_t2436335575 * TweenSettingsExtensions_Insert_m2914125259 (Il2CppObject * __this /* static, unused */, Sequence_t2436335575 * ___s0, float ___atPosition1, Tween_t1103364673 * ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Sequence DG.Tweening.TweenSettingsExtensions::AppendInterval(DG.Tweening.Sequence,System.Single)
extern "C"  Sequence_t2436335575 * TweenSettingsExtensions_AppendInterval_m4146052196 (Il2CppObject * __this /* static, unused */, Sequence_t2436335575 * ___s0, float ___interval1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Sequence DG.Tweening.TweenSettingsExtensions::PrependInterval(DG.Tweening.Sequence,System.Single)
extern "C"  Sequence_t2436335575 * TweenSettingsExtensions_PrependInterval_m3953133184 (Il2CppObject * __this /* static, unused */, Sequence_t2436335575 * ___s0, float ___interval1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Sequence DG.Tweening.TweenSettingsExtensions::AppendCallback(DG.Tweening.Sequence,DG.Tweening.TweenCallback)
extern "C"  Sequence_t2436335575 * TweenSettingsExtensions_AppendCallback_m1381368807 (Il2CppObject * __this /* static, unused */, Sequence_t2436335575 * ___s0, TweenCallback_t3786476454 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Sequence DG.Tweening.TweenSettingsExtensions::PrependCallback(DG.Tweening.Sequence,DG.Tweening.TweenCallback)
extern "C"  Sequence_t2436335575 * TweenSettingsExtensions_PrependCallback_m2097939459 (Il2CppObject * __this /* static, unused */, Sequence_t2436335575 * ___s0, TweenCallback_t3786476454 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Sequence DG.Tweening.TweenSettingsExtensions::InsertCallback(DG.Tweening.Sequence,System.Single,DG.Tweening.TweenCallback)
extern "C"  Sequence_t2436335575 * TweenSettingsExtensions_InsertCallback_m3335604395 (Il2CppObject * __this /* static, unused */, Sequence_t2436335575 * ___s0, float ___atPosition1, TweenCallback_t3786476454 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Tweener DG.Tweening.TweenSettingsExtensions::SetOptions(DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>,System.Boolean)
extern "C"  Tweener_t1766303790 * TweenSettingsExtensions_SetOptions_m1020225306 (Il2CppObject * __this /* static, unused */, TweenerCore_3_t2841494226 * ___t0, bool ___snapping1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Tweener DG.Tweening.TweenSettingsExtensions::SetOptions(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>,System.Boolean)
extern "C"  Tweener_t1766303790 * TweenSettingsExtensions_SetOptions_m3448577035 (Il2CppObject * __this /* static, unused */, TweenerCore_3_t753146263 * ___t0, bool ___snapping1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Tweener DG.Tweening.TweenSettingsExtensions::SetOptions(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>,DG.Tweening.AxisConstraint,System.Boolean)
extern "C"  Tweener_t1766303790 * TweenSettingsExtensions_SetOptions_m1757104211 (Il2CppObject * __this /* static, unused */, TweenerCore_3_t753146263 * ___t0, int32_t ___axisConstraint1, bool ___snapping2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Tweener DG.Tweening.TweenSettingsExtensions::SetOptions(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>,System.Boolean)
extern "C"  Tweener_t1766303790 * TweenSettingsExtensions_SetOptions_m2978237769 (Il2CppObject * __this /* static, unused */, TweenerCore_3_t2905908171 * ___t0, bool ___snapping1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Tweener DG.Tweening.TweenSettingsExtensions::SetOptions(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>,DG.Tweening.AxisConstraint,System.Boolean)
extern "C"  Tweener_t1766303790 * TweenSettingsExtensions_SetOptions_m393035861 (Il2CppObject * __this /* static, unused */, TweenerCore_3_t2905908171 * ___t0, int32_t ___axisConstraint1, bool ___snapping2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Tweener DG.Tweening.TweenSettingsExtensions::SetOptions(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>,System.Boolean)
extern "C"  Tweener_t1766303790 * TweenSettingsExtensions_SetOptions_m2507898503 (Il2CppObject * __this /* static, unused */, TweenerCore_3_t763702783 * ___t0, bool ___snapping1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Tweener DG.Tweening.TweenSettingsExtensions::SetOptions(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>,DG.Tweening.AxisConstraint,System.Boolean)
extern "C"  Tweener_t1766303790 * TweenSettingsExtensions_SetOptions_m3323934807 (Il2CppObject * __this /* static, unused */, TweenerCore_3_t763702783 * ___t0, int32_t ___axisConstraint1, bool ___snapping2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Tweener DG.Tweening.TweenSettingsExtensions::SetOptions(DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>,System.Boolean)
extern "C"  Tweener_t1766303790 * TweenSettingsExtensions_SetOptions_m917764484 (Il2CppObject * __this /* static, unused */, TweenerCore_3_t3741400174 * ___t0, bool ___useShortest360Route1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Tweener DG.Tweening.TweenSettingsExtensions::SetOptions(DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>,System.Boolean)
extern "C"  Tweener_t1766303790 * TweenSettingsExtensions_SetOptions_m3779418923 (Il2CppObject * __this /* static, unused */, TweenerCore_3_t4289140679 * ___t0, bool ___alphaOnly1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Tweener DG.Tweening.TweenSettingsExtensions::SetOptions(DG.Tweening.Core.TweenerCore`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions>,System.Boolean)
extern "C"  Tweener_t1766303790 * TweenSettingsExtensions_SetOptions_m1841004644 (Il2CppObject * __this /* static, unused */, TweenerCore_3_t2274666266 * ___t0, bool ___snapping1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Tweener DG.Tweening.TweenSettingsExtensions::SetOptions(DG.Tweening.Core.TweenerCore`3<System.String,System.String,DG.Tweening.Plugins.Options.StringOptions>,System.Boolean,DG.Tweening.ScrambleMode,System.String)
extern "C"  Tweener_t1766303790 * TweenSettingsExtensions_SetOptions_m3006666717 (Il2CppObject * __this /* static, unused */, TweenerCore_3_t1100577297 * ___t0, bool ___richTextEnabled1, int32_t ___scrambleMode2, String_t* ___scrambleChars3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Tweener DG.Tweening.TweenSettingsExtensions::SetOptions(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3[],DG.Tweening.Plugins.Options.Vector3ArrayOptions>,System.Boolean)
extern "C"  Tweener_t1766303790 * TweenSettingsExtensions_SetOptions_m160142157 (Il2CppObject * __this /* static, unused */, TweenerCore_3_t1715509190 * ___t0, bool ___snapping1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Tweener DG.Tweening.TweenSettingsExtensions::SetOptions(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3[],DG.Tweening.Plugins.Options.Vector3ArrayOptions>,DG.Tweening.AxisConstraint,System.Boolean)
extern "C"  Tweener_t1766303790 * TweenSettingsExtensions_SetOptions_m3729676241 (Il2CppObject * __this /* static, unused */, TweenerCore_3_t1715509190 * ___t0, int32_t ___axisConstraint1, bool ___snapping2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DG.Tweening.TweenSettingsExtensions::SetOptions(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>,DG.Tweening.AxisConstraint,DG.Tweening.AxisConstraint)
extern "C"  TweenerCore_3_t3204927250 * TweenSettingsExtensions_SetOptions_m532257052 (Il2CppObject * __this /* static, unused */, TweenerCore_3_t3204927250 * ___t0, int32_t ___lockPosition1, int32_t ___lockRotation2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DG.Tweening.TweenSettingsExtensions::SetOptions(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>,System.Boolean,DG.Tweening.AxisConstraint,DG.Tweening.AxisConstraint)
extern "C"  TweenerCore_3_t3204927250 * TweenSettingsExtensions_SetOptions_m858971169 (Il2CppObject * __this /* static, unused */, TweenerCore_3_t3204927250 * ___t0, bool ___closePath1, int32_t ___lockPosition2, int32_t ___lockRotation3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DG.Tweening.TweenSettingsExtensions::SetLookAt(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>,UnityEngine.Vector3,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<UnityEngine.Vector3>)
extern "C"  TweenerCore_3_t3204927250 * TweenSettingsExtensions_SetLookAt_m3343484119 (Il2CppObject * __this /* static, unused */, TweenerCore_3_t3204927250 * ___t0, Vector3_t3525329789  ___lookAtPosition1, Nullable_1_t2116400401  ___forwardDirection2, Nullable_1_t2116400401  ___up3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DG.Tweening.TweenSettingsExtensions::SetLookAt(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>,UnityEngine.Transform,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<UnityEngine.Vector3>)
extern "C"  TweenerCore_3_t3204927250 * TweenSettingsExtensions_SetLookAt_m1099587003 (Il2CppObject * __this /* static, unused */, TweenerCore_3_t3204927250 * ___t0, Transform_t284553113 * ___lookAtTransform1, Nullable_1_t2116400401  ___forwardDirection2, Nullable_1_t2116400401  ___up3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DG.Tweening.TweenSettingsExtensions::SetLookAt(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>,System.Single,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<UnityEngine.Vector3>)
extern "C"  TweenerCore_3_t3204927250 * TweenSettingsExtensions_SetLookAt_m4092569001 (Il2CppObject * __this /* static, unused */, TweenerCore_3_t3204927250 * ___t0, float ___lookAhead1, Nullable_1_t2116400401  ___forwardDirection2, Nullable_1_t2116400401  ___up3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.TweenSettingsExtensions::SetPathForwardDirection(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<UnityEngine.Vector3>)
extern "C"  void TweenSettingsExtensions_SetPathForwardDirection_m225715529 (Il2CppObject * __this /* static, unused */, TweenerCore_3_t3204927250 * ___t0, Nullable_1_t2116400401  ___forwardDirection1, Nullable_1_t2116400401  ___up2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
