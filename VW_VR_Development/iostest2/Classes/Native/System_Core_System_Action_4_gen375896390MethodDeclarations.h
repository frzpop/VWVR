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

// System.Action`4<System.Object,System.Object,System.Boolean,System.Int32>
struct Action_4_t375896390;
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

// System.Void System.Action`4<System.Object,System.Object,System.Boolean,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_4__ctor_m1434218450_gshared (Action_4_t375896390 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Action_4__ctor_m1434218450(__this, ___object0, ___method1, method) ((  void (*) (Action_4_t375896390 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_4__ctor_m1434218450_gshared)(__this, ___object0, ___method1, method)
// System.Void System.Action`4<System.Object,System.Object,System.Boolean,System.Int32>::Invoke(T1,T2,T3,T4)
extern "C"  void Action_4_Invoke_m315683096_gshared (Action_4_t375896390 * __this, Il2CppObject * ___arg10, Il2CppObject * ___arg21, bool ___arg32, int32_t ___arg43, const MethodInfo* method);
#define Action_4_Invoke_m315683096(__this, ___arg10, ___arg21, ___arg32, ___arg43, method) ((  void (*) (Action_4_t375896390 *, Il2CppObject *, Il2CppObject *, bool, int32_t, const MethodInfo*))Action_4_Invoke_m315683096_gshared)(__this, ___arg10, ___arg21, ___arg32, ___arg43, method)
// System.IAsyncResult System.Action`4<System.Object,System.Object,System.Boolean,System.Int32>::BeginInvoke(T1,T2,T3,T4,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_4_BeginInvoke_m1896037785_gshared (Action_4_t375896390 * __this, Il2CppObject * ___arg10, Il2CppObject * ___arg21, bool ___arg32, int32_t ___arg43, AsyncCallback_t1363551830 * ___callback4, Il2CppObject * ___object5, const MethodInfo* method);
#define Action_4_BeginInvoke_m1896037785(__this, ___arg10, ___arg21, ___arg32, ___arg43, ___callback4, ___object5, method) ((  Il2CppObject * (*) (Action_4_t375896390 *, Il2CppObject *, Il2CppObject *, bool, int32_t, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Action_4_BeginInvoke_m1896037785_gshared)(__this, ___arg10, ___arg21, ___arg32, ___arg43, ___callback4, ___object5, method)
// System.Void System.Action`4<System.Object,System.Object,System.Boolean,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_4_EndInvoke_m1192532706_gshared (Action_4_t375896390 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Action_4_EndInvoke_m1192532706(__this, ___result0, method) ((  void (*) (Action_4_t375896390 *, Il2CppObject *, const MethodInfo*))Action_4_EndInvoke_m1192532706_gshared)(__this, ___result0, method)
