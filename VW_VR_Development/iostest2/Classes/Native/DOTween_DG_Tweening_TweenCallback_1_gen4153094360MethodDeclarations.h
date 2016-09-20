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

// DG.Tweening.TweenCallback`1<System.Object>
struct TweenCallback_1_t4153094360;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void DG.Tweening.TweenCallback`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void TweenCallback_1__ctor_m3780798908_gshared (TweenCallback_1_t4153094360 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define TweenCallback_1__ctor_m3780798908(__this, ___object0, ___method1, method) ((  void (*) (TweenCallback_1_t4153094360 *, Il2CppObject *, IntPtr_t, const MethodInfo*))TweenCallback_1__ctor_m3780798908_gshared)(__this, ___object0, ___method1, method)
// System.Void DG.Tweening.TweenCallback`1<System.Object>::Invoke(T)
extern "C"  void TweenCallback_1_Invoke_m857956104_gshared (TweenCallback_1_t4153094360 * __this, Il2CppObject * ___value0, const MethodInfo* method);
#define TweenCallback_1_Invoke_m857956104(__this, ___value0, method) ((  void (*) (TweenCallback_1_t4153094360 *, Il2CppObject *, const MethodInfo*))TweenCallback_1_Invoke_m857956104_gshared)(__this, ___value0, method)
// System.IAsyncResult DG.Tweening.TweenCallback`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * TweenCallback_1_BeginInvoke_m2140545749_gshared (TweenCallback_1_t4153094360 * __this, Il2CppObject * ___value0, AsyncCallback_t1363551830 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define TweenCallback_1_BeginInvoke_m2140545749(__this, ___value0, ___callback1, ___object2, method) ((  Il2CppObject * (*) (TweenCallback_1_t4153094360 *, Il2CppObject *, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))TweenCallback_1_BeginInvoke_m2140545749_gshared)(__this, ___value0, ___callback1, ___object2, method)
// System.Void DG.Tweening.TweenCallback`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  void TweenCallback_1_EndInvoke_m1140857292_gshared (TweenCallback_1_t4153094360 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define TweenCallback_1_EndInvoke_m1140857292(__this, ___result0, method) ((  void (*) (TweenCallback_1_t4153094360 *, Il2CppObject *, const MethodInfo*))TweenCallback_1_EndInvoke_m1140857292_gshared)(__this, ___result0, method)
