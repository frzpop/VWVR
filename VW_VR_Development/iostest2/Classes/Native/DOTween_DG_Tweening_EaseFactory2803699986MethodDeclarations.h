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

// DG.Tweening.EaseFunction
struct EaseFunction_t1285385724;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3342907448;
struct AnimationCurve_t3342907448_marshaled_pinvoke;
// DG.Tweening.EaseFactory
struct EaseFactory_t2803699986;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Nullable_1_gen3910333848.h"
#include "UnityEngine_UnityEngine_AnimationCurve3342907448.h"
#include "DOTween_DG_Tweening_EaseFunction1285385724.h"

// DG.Tweening.EaseFunction DG.Tweening.EaseFactory::StopMotion(System.Int32,System.Nullable`1<DG.Tweening.Ease>)
extern "C"  EaseFunction_t1285385724 * EaseFactory_StopMotion_m994607432 (Il2CppObject * __this /* static, unused */, int32_t ___motionFps0, Nullable_1_t3910333848  ___ease1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.EaseFunction DG.Tweening.EaseFactory::StopMotion(System.Int32,UnityEngine.AnimationCurve)
extern "C"  EaseFunction_t1285385724 * EaseFactory_StopMotion_m785759695 (Il2CppObject * __this /* static, unused */, int32_t ___motionFps0, AnimationCurve_t3342907448 * ___animCurve1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.EaseFunction DG.Tweening.EaseFactory::StopMotion(System.Int32,DG.Tweening.EaseFunction)
extern "C"  EaseFunction_t1285385724 * EaseFactory_StopMotion_m3703527647 (Il2CppObject * __this /* static, unused */, int32_t ___motionFps0, EaseFunction_t1285385724 * ___customEase1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.EaseFactory::.ctor()
extern "C"  void EaseFactory__ctor_m3466982953 (EaseFactory_t2803699986 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
