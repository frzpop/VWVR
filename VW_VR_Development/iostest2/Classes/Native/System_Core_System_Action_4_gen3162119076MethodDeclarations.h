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

// System.Action`4<System.Object,System.Object,System.Object,System.Object>
struct Action_4_t3162119076;
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

// System.Void System.Action`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_4__ctor_m620347252_gshared (Action_4_t3162119076 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Action_4__ctor_m620347252(__this, ___object0, ___method1, method) ((  void (*) (Action_4_t3162119076 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_4__ctor_m620347252_gshared)(__this, ___object0, ___method1, method)
// System.Void System.Action`4<System.Object,System.Object,System.Object,System.Object>::Invoke(T1,T2,T3,T4)
extern "C"  void Action_4_Invoke_m157716918_gshared (Action_4_t3162119076 * __this, Il2CppObject * ___arg10, Il2CppObject * ___arg21, Il2CppObject * ___arg32, Il2CppObject * ___arg43, const MethodInfo* method);
#define Action_4_Invoke_m157716918(__this, ___arg10, ___arg21, ___arg32, ___arg43, method) ((  void (*) (Action_4_t3162119076 *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Action_4_Invoke_m157716918_gshared)(__this, ___arg10, ___arg21, ___arg32, ___arg43, method)
// System.IAsyncResult System.Action`4<System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,T3,T4,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_4_BeginInvoke_m1414752311_gshared (Action_4_t3162119076 * __this, Il2CppObject * ___arg10, Il2CppObject * ___arg21, Il2CppObject * ___arg32, Il2CppObject * ___arg43, AsyncCallback_t1363551830 * ___callback4, Il2CppObject * ___object5, const MethodInfo* method);
#define Action_4_BeginInvoke_m1414752311(__this, ___arg10, ___arg21, ___arg32, ___arg43, ___callback4, ___object5, method) ((  Il2CppObject * (*) (Action_4_t3162119076 *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Action_4_BeginInvoke_m1414752311_gshared)(__this, ___arg10, ___arg21, ___arg32, ___arg43, ___callback4, ___object5, method)
// System.Void System.Action`4<System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_4_EndInvoke_m2556365700_gshared (Action_4_t3162119076 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Action_4_EndInvoke_m2556365700(__this, ___result0, method) ((  void (*) (Action_4_t3162119076 *, Il2CppObject *, const MethodInfo*))Action_4_EndInvoke_m2556365700_gshared)(__this, ___result0, method)
