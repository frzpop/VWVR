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

// CardboardReticle
struct CardboardReticle_t626826654;
// UnityEngine.Camera
struct Camera_t3533968274;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Camera3533968274.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void CardboardReticle::.ctor()
extern "C"  void CardboardReticle__ctor_m3660380861 (CardboardReticle_t626826654 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardReticle::Start()
extern "C"  void CardboardReticle_Start_m2607518653 (CardboardReticle_t626826654 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardReticle::OnEnable()
extern "C"  void CardboardReticle_OnEnable_m3553130409 (CardboardReticle_t626826654 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardReticle::OnDisable()
extern "C"  void CardboardReticle_OnDisable_m3213797540 (CardboardReticle_t626826654 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardReticle::Update()
extern "C"  void CardboardReticle_Update_m3529519088 (CardboardReticle_t626826654 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardReticle::OnGazeEnabled()
extern "C"  void CardboardReticle_OnGazeEnabled_m2577776952 (CardboardReticle_t626826654 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardReticle::OnGazeDisabled()
extern "C"  void CardboardReticle_OnGazeDisabled_m3384097287 (CardboardReticle_t626826654 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardReticle::OnGazeStart(UnityEngine.Camera,UnityEngine.GameObject,UnityEngine.Vector3)
extern "C"  void CardboardReticle_OnGazeStart_m2185198068 (CardboardReticle_t626826654 * __this, Camera_t3533968274 * ___camera0, GameObject_t4012695102 * ___targetObject1, Vector3_t3525329789  ___intersectionPosition2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardReticle::OnGazeStay(UnityEngine.Camera,UnityEngine.GameObject,UnityEngine.Vector3)
extern "C"  void CardboardReticle_OnGazeStay_m1131084233 (CardboardReticle_t626826654 * __this, Camera_t3533968274 * ___camera0, GameObject_t4012695102 * ___targetObject1, Vector3_t3525329789  ___intersectionPosition2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardReticle::OnGazeExit(UnityEngine.Camera,UnityEngine.GameObject)
extern "C"  void CardboardReticle_OnGazeExit_m3544543057 (CardboardReticle_t626826654 * __this, Camera_t3533968274 * ___camera0, GameObject_t4012695102 * ___targetObject1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardReticle::OnGazeTriggerStart(UnityEngine.Camera)
extern "C"  void CardboardReticle_OnGazeTriggerStart_m3600173561 (CardboardReticle_t626826654 * __this, Camera_t3533968274 * ___camera0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardReticle::OnGazeTriggerEnd(UnityEngine.Camera)
extern "C"  void CardboardReticle_OnGazeTriggerEnd_m428162162 (CardboardReticle_t626826654 * __this, Camera_t3533968274 * ___camera0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardReticle::CreateReticleVertices()
extern "C"  void CardboardReticle_CreateReticleVertices_m1990317900 (CardboardReticle_t626826654 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardReticle::UpdateDiameters()
extern "C"  void CardboardReticle_UpdateDiameters_m3371766488 (CardboardReticle_t626826654 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardReticle::SetGazeTarget(UnityEngine.Vector3)
extern "C"  void CardboardReticle_SetGazeTarget_m608563110 (CardboardReticle_t626826654 * __this, Vector3_t3525329789  ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;