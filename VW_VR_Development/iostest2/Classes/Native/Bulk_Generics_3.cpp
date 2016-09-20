#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// System.Collections.Generic.GenericEqualityComparer`1<System.Object>
struct GenericEqualityComparer_1_t4063070029;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>
struct GenericEqualityComparer_1_t3989826501;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "mscorlib_System_Collections_Generic_GenericEqualit4063070029.h"
#include "mscorlib_System_Collections_Generic_GenericEqualit4063070029MethodDeclarations.h"
#include "mscorlib_System_Void2779279689.h"
#include "mscorlib_System_Collections_Generic_EqualityCompare271497070MethodDeclarations.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Int322847414787.h"
#include "mscorlib_System_Object837106420MethodDeclarations.h"
#include "mscorlib_System_Boolean211005341.h"
#include "mscorlib_System_Collections_Generic_GenericEqualit3989826501.h"
#include "mscorlib_System_Collections_Generic_GenericEqualit3989826501MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_EqualityCompare198253542MethodDeclarations.h"
#include "mscorlib_System_TimeSpan763862892.h"
#include "mscorlib_System_TimeSpan763862892MethodDeclarations.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Object>::.ctor()
extern "C"  void GenericEqualityComparer_1__ctor_m1097371640_gshared (GenericEqualityComparer_1_t4063070029 * __this, const MethodInfo* method)
{
	{
		NullCheck((EqualityComparer_1_t271497070 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		((  void (*) (EqualityComparer_1_t271497070 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t271497070 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Object>::GetHashCode(T)
extern "C"  int32_t GenericEqualityComparer_1_GetHashCode_m4022924795_gshared (GenericEqualityComparer_1_t4063070029 * __this, Il2CppObject * ___obj0, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		NullCheck((Il2CppObject *)(*(&___obj0)));
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (Il2CppObject *)(*(&___obj0)));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Object>::Equals(T,T)
extern "C"  bool GenericEqualityComparer_1_Equals_m2036593421_gshared (GenericEqualityComparer_1_t4063070029 * __this, Il2CppObject * ___x0, Il2CppObject * ___y1, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = ___x0;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Il2CppObject * L_1 = ___y1;
		return (bool)((((Il2CppObject*)(Il2CppObject *)L_1) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
	}

IL_0015:
	{
		Il2CppObject * L_2 = ___y1;
		NullCheck((Il2CppObject*)(*(&___x0)));
		bool L_3 = InterfaceFuncInvoker1< bool, Il2CppObject * >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Object>::Equals(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Il2CppObject*)(*(&___x0)), (Il2CppObject *)L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::.ctor()
extern "C"  void GenericEqualityComparer_1__ctor_m1135065456_gshared (GenericEqualityComparer_1_t3989826501 * __this, const MethodInfo* method)
{
	{
		NullCheck((EqualityComparer_1_t198253542 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		((  void (*) (EqualityComparer_1_t198253542 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t198253542 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::GetHashCode(T)
extern "C"  int32_t GenericEqualityComparer_1_GetHashCode_m1043508355_gshared (GenericEqualityComparer_1_t3989826501 * __this, TimeSpan_t763862892  ___obj0, const MethodInfo* method)
{
	{
		goto IL_000d;
	}
	{
		return 0;
	}

IL_000d:
	{
		int32_t L_1 = TimeSpan_GetHashCode_m3188156777((TimeSpan_t763862892 *)(&___obj0), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::Equals(T,T)
extern "C"  bool GenericEqualityComparer_1_Equals_m275441669_gshared (GenericEqualityComparer_1_t3989826501 * __this, TimeSpan_t763862892  ___x0, TimeSpan_t763862892  ___y1, const MethodInfo* method)
{
	{
		goto IL_0015;
	}
	{
		TimeSpan_t763862892  L_1 = ___y1;
		TimeSpan_t763862892  L_2 = L_1;
		Il2CppObject * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return (bool)((((Il2CppObject*)(Il2CppObject *)L_3) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
	}

IL_0015:
	{
		TimeSpan_t763862892  L_4 = ___y1;
		bool L_5 = TimeSpan_Equals_m3271948249((TimeSpan_t763862892 *)(&___x0), (TimeSpan_t763862892 )L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
