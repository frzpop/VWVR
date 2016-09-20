﻿#pragma once

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
// DG.Tweening.Core.ABSSequentiable
struct ABSSequentiable_t2598715689;

#include "codegen/il2cpp-codegen.h"
#include "DOTween_DG_Tweening_Sequence2436335575.h"
#include "DOTween_DG_Tweening_Tween1103364673.h"
#include "DOTween_DG_Tweening_TweenCallback3786476454.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateMode3005523297.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateNotice384566358.h"
#include "DOTween_DG_Tweening_Core_ABSSequentiable2598715689.h"

// System.Void DG.Tweening.Sequence::.ctor()
extern "C"  void Sequence__ctor_m3796450752 (Sequence_t2436335575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Sequence DG.Tweening.Sequence::DoPrepend(DG.Tweening.Sequence,DG.Tweening.Tween)
extern "C"  Sequence_t2436335575 * Sequence_DoPrepend_m1661837869 (Il2CppObject * __this /* static, unused */, Sequence_t2436335575 * ___inSequence0, Tween_t1103364673 * ___t1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Sequence DG.Tweening.Sequence::DoInsert(DG.Tweening.Sequence,DG.Tweening.Tween,System.Single)
extern "C"  Sequence_t2436335575 * Sequence_DoInsert_m190532033 (Il2CppObject * __this /* static, unused */, Sequence_t2436335575 * ___inSequence0, Tween_t1103364673 * ___t1, float ___atPosition2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Sequence DG.Tweening.Sequence::DoAppendInterval(DG.Tweening.Sequence,System.Single)
extern "C"  Sequence_t2436335575 * Sequence_DoAppendInterval_m327728986 (Il2CppObject * __this /* static, unused */, Sequence_t2436335575 * ___inSequence0, float ___interval1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Sequence DG.Tweening.Sequence::DoPrependInterval(DG.Tweening.Sequence,System.Single)
extern "C"  Sequence_t2436335575 * Sequence_DoPrependInterval_m1549230666 (Il2CppObject * __this /* static, unused */, Sequence_t2436335575 * ___inSequence0, float ___interval1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Sequence DG.Tweening.Sequence::DoInsertCallback(DG.Tweening.Sequence,DG.Tweening.TweenCallback,System.Single)
extern "C"  Sequence_t2436335575 * Sequence_DoInsertCallback_m240308833 (Il2CppObject * __this /* static, unused */, Sequence_t2436335575 * ___inSequence0, TweenCallback_t3786476454 * ___callback1, float ___atPosition2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Sequence::Reset()
extern "C"  void Sequence_Reset_m1442883693 (Sequence_t2436335575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DG.Tweening.Sequence::Validate()
extern "C"  bool Sequence_Validate_m2115366962 (Sequence_t2436335575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DG.Tweening.Sequence::Startup()
extern "C"  bool Sequence_Startup_m3760323907 (Sequence_t2436335575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DG.Tweening.Sequence::ApplyTween(System.Single,System.Int32,System.Int32,System.Boolean,DG.Tweening.Core.Enums.UpdateMode,DG.Tweening.Core.Enums.UpdateNotice)
extern "C"  bool Sequence_ApplyTween_m3701436728 (Sequence_t2436335575 * __this, float ___prevPosition0, int32_t ___prevCompletedLoops1, int32_t ___newCompletedSteps2, bool ___useInversePosition3, int32_t ___updateMode4, int32_t ___updateNotice5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Sequence::Setup(DG.Tweening.Sequence)
extern "C"  void Sequence_Setup_m2454394158 (Il2CppObject * __this /* static, unused */, Sequence_t2436335575 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DG.Tweening.Sequence::DoStartup(DG.Tweening.Sequence)
extern "C"  bool Sequence_DoStartup_m3491414603 (Il2CppObject * __this /* static, unused */, Sequence_t2436335575 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DG.Tweening.Sequence::DoApplyTween(DG.Tweening.Sequence,System.Single,System.Int32,System.Int32,System.Boolean,DG.Tweening.Core.Enums.UpdateMode)
extern "C"  bool Sequence_DoApplyTween_m2558479618 (Il2CppObject * __this /* static, unused */, Sequence_t2436335575 * ___s0, float ___prevPosition1, int32_t ___prevCompletedLoops2, int32_t ___newCompletedSteps3, bool ___useInversePosition4, int32_t ___updateMode5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DG.Tweening.Sequence::ApplyInternalCycle(DG.Tweening.Sequence,System.Single,System.Single,DG.Tweening.Core.Enums.UpdateMode,System.Boolean,System.Boolean,System.Boolean)
extern "C"  bool Sequence_ApplyInternalCycle_m307622696 (Il2CppObject * __this /* static, unused */, Sequence_t2436335575 * ___s0, float ___fromPos1, float ___toPos2, int32_t ___updateMode3, bool ___useInverse4, bool ___prevPosIsInverse5, bool ___multiCycleStep6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DG.Tweening.Sequence::SortSequencedObjs(DG.Tweening.Core.ABSSequentiable,DG.Tweening.Core.ABSSequentiable)
extern "C"  int32_t Sequence_SortSequencedObjs_m2575238361 (Il2CppObject * __this /* static, unused */, ABSSequentiable_t2598715689 * ___a0, ABSSequentiable_t2598715689 * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
