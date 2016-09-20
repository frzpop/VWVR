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

// UnityEngine.WaitForFixedUpdate
struct WaitForFixedUpdate_t896427542;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t1291133240;
struct WaitForSeconds_t1291133240_marshaled_pinvoke;
// UnityEngine.WrapperlessIcall
struct WrapperlessIcall_t4003675496;
// UnityEngine.WritableAttribute
struct WritableAttribute_t1716006665;
// UnityEngine.WWW
struct WWW_t1522972100;
// System.String
struct String_t;
// UnityEngine.AssetBundle
struct AssetBundle_t3959431103;
// UnityEngine.YieldInstruction
struct YieldInstruction_t3557331758;
struct YieldInstruction_t3557331758_marshaled_pinvoke;
// UnityEngineInternal.GenericStack
struct GenericStack_t2344941421;
// System.Delegate
struct Delegate_t3660574010;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// UnityEngineInternal.TypeInferenceRuleAttribute
struct TypeInferenceRuleAttribute_t471424957;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "UnityEngine_UnityEngine_WaitForFixedUpdate896427542.h"
#include "UnityEngine_UnityEngine_WaitForFixedUpdate896427542MethodDeclarations.h"
#include "mscorlib_System_Void2779279689.h"
#include "UnityEngine_UnityEngine_YieldInstruction3557331758MethodDeclarations.h"
#include "UnityEngine_UnityEngine_WaitForSeconds1291133240.h"
#include "UnityEngine_UnityEngine_WaitForSeconds1291133240MethodDeclarations.h"
#include "mscorlib_System_Single958209021.h"
#include "UnityEngine_UnityEngine_WrapperlessIcall4003675496.h"
#include "UnityEngine_UnityEngine_WrapperlessIcall4003675496MethodDeclarations.h"
#include "mscorlib_System_Attribute498693649MethodDeclarations.h"
#include "UnityEngine_UnityEngine_WritableAttribute1716006665.h"
#include "UnityEngine_UnityEngine_WritableAttribute1716006665MethodDeclarations.h"
#include "UnityEngine_UnityEngine_WWW1522972100.h"
#include "UnityEngine_UnityEngine_WWW1522972100MethodDeclarations.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Hash1283885020822.h"
#include "mscorlib_System_UInt32985925326.h"
#include "mscorlib_System_Object837106420MethodDeclarations.h"
#include "mscorlib_System_Boolean211005341.h"
#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_AssetBundle3959431103.h"
#include "mscorlib_System_Int322847414787.h"
#include "UnityEngine_UnityEngine_Hash1283885020822MethodDeclarations.h"
#include "UnityEngine_UnityEngine_YieldInstruction3557331758.h"
#include "UnityEngine_UnityEngineInternal_GenericStack2344941421.h"
#include "UnityEngine_UnityEngineInternal_GenericStack2344941421MethodDeclarations.h"
#include "mscorlib_System_Collections_Stack1623036922MethodDeclarations.h"
#include "UnityEngine_UnityEngineInternal_MathfInternal681132919.h"
#include "UnityEngine_UnityEngineInternal_MathfInternal681132919MethodDeclarations.h"
#include "UnityEngine_UnityEngineInternal_NetFxCoreExtension3785516670.h"
#include "UnityEngine_UnityEngineInternal_NetFxCoreExtension3785516670MethodDeclarations.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Delegate3660574010.h"
#include "mscorlib_System_Delegate3660574010MethodDeclarations.h"
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAt471424957.h"
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAt471424957MethodDeclarations.h"
#include "UnityEngine_UnityEngineInternal_TypeInferenceRules435505844.h"
#include "mscorlib_System_Enum2778772662MethodDeclarations.h"
#include "mscorlib_System_Enum2778772662.h"
#include "UnityEngine_UnityEngineInternal_TypeInferenceRules435505844MethodDeclarations.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.WaitForFixedUpdate::.ctor()
extern "C"  void WaitForFixedUpdate__ctor_m2916734308 (WaitForFixedUpdate_t896427542 * __this, const MethodInfo* method)
{
	{
		YieldInstruction__ctor_m539393484(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C"  void WaitForSeconds__ctor_m3184996201 (WaitForSeconds_t1291133240 * __this, float ___seconds0, const MethodInfo* method)
{
	{
		YieldInstruction__ctor_m539393484(__this, /*hidden argument*/NULL);
		float L_0 = ___seconds0;
		__this->set_m_Seconds_0(L_0);
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.WaitForSeconds
extern "C" void WaitForSeconds_t1291133240_marshal_pinvoke(const WaitForSeconds_t1291133240& unmarshaled, WaitForSeconds_t1291133240_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Seconds_0 = unmarshaled.get_m_Seconds_0();
}
extern "C" void WaitForSeconds_t1291133240_marshal_pinvoke_back(const WaitForSeconds_t1291133240_marshaled_pinvoke& marshaled, WaitForSeconds_t1291133240& unmarshaled)
{
	float unmarshaled_m_Seconds_temp = 0.0f;
	unmarshaled_m_Seconds_temp = marshaled.___m_Seconds_0;
	unmarshaled.set_m_Seconds_0(unmarshaled_m_Seconds_temp);
}
// Conversion method for clean up from marshalling of: UnityEngine.WaitForSeconds
extern "C" void WaitForSeconds_t1291133240_marshal_pinvoke_cleanup(WaitForSeconds_t1291133240_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.WaitForSeconds
extern "C" void WaitForSeconds_t1291133240_marshal_com(const WaitForSeconds_t1291133240& unmarshaled, WaitForSeconds_t1291133240_marshaled_com& marshaled)
{
	marshaled.___m_Seconds_0 = unmarshaled.get_m_Seconds_0();
}
extern "C" void WaitForSeconds_t1291133240_marshal_com_back(const WaitForSeconds_t1291133240_marshaled_com& marshaled, WaitForSeconds_t1291133240& unmarshaled)
{
	float unmarshaled_m_Seconds_temp = 0.0f;
	unmarshaled_m_Seconds_temp = marshaled.___m_Seconds_0;
	unmarshaled.set_m_Seconds_0(unmarshaled_m_Seconds_temp);
}
// Conversion method for clean up from marshalling of: UnityEngine.WaitForSeconds
extern "C" void WaitForSeconds_t1291133240_marshal_com_cleanup(WaitForSeconds_t1291133240_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.WrapperlessIcall::.ctor()
extern "C"  void WrapperlessIcall__ctor_m1888400594 (WrapperlessIcall_t4003675496 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m2985353781(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.WritableAttribute::.ctor()
extern "C"  void WritableAttribute__ctor_m2205809533 (WritableAttribute_t1716006665 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m2985353781(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.WWW::.ctor(System.String,UnityEngine.Hash128,System.UInt32)
extern "C"  void WWW__ctor_m649419502 (WWW_t1522972100 * __this, String_t* ___url0, Hash128_t3885020822  ___hash1, uint32_t ___crc2, const MethodInfo* method)
{
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___url0;
		uint32_t L_1 = ___crc2;
		WWW_INTERNAL_CALL_WWW_m2558106608(NULL /*static, unused*/, __this, L_0, (&___hash1), L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.WWW::Dispose()
extern "C"  void WWW_Dispose_m2446678367 (WWW_t1522972100 * __this, const MethodInfo* method)
{
	{
		WWW_DestroyWWW_m300967382(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.WWW::Finalize()
extern "C"  void WWW_Finalize_m1793349504 (WWW_t1522972100 * __this, const MethodInfo* method)
{
	Exception_t1967233988 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1967233988 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		WWW_DestroyWWW_m300967382(__this, (bool)0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1967233988 *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_m3027285644(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_JUMP_TBL(0x13, IL_0013)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1967233988 *)
	}

IL_0013:
	{
		return;
	}
}
// System.Void UnityEngine.WWW::DestroyWWW(System.Boolean)
extern "C"  void WWW_DestroyWWW_m300967382 (WWW_t1522972100 * __this, bool ___cancel0, const MethodInfo* method)
{
	typedef void (*WWW_DestroyWWW_m300967382_ftn) (WWW_t1522972100 *, bool);
	static WWW_DestroyWWW_m300967382_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WWW_DestroyWWW_m300967382_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::DestroyWWW(System.Boolean)");
	_il2cpp_icall_func(__this, ___cancel0);
}
// System.String UnityEngine.WWW::get_error()
extern "C"  String_t* WWW_get_error_m1787423074 (WWW_t1522972100 * __this, const MethodInfo* method)
{
	typedef String_t* (*WWW_get_error_m1787423074_ftn) (WWW_t1522972100 *);
	static WWW_get_error_m1787423074_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WWW_get_error_m1787423074_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::get_error()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.WWW::get_progress()
extern "C"  float WWW_get_progress_m3186358572 (WWW_t1522972100 * __this, const MethodInfo* method)
{
	typedef float (*WWW_get_progress_m3186358572_ftn) (WWW_t1522972100 *);
	static WWW_get_progress_m3186358572_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WWW_get_progress_m3186358572_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::get_progress()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.AssetBundle UnityEngine.WWW::get_assetBundle()
extern "C"  AssetBundle_t3959431103 * WWW_get_assetBundle_m2674678273 (WWW_t1522972100 * __this, const MethodInfo* method)
{
	typedef AssetBundle_t3959431103 * (*WWW_get_assetBundle_m2674678273_ftn) (WWW_t1522972100 *);
	static WWW_get_assetBundle_m2674678273_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WWW_get_assetBundle_m2674678273_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::get_assetBundle()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.WWW::INTERNAL_CALL_WWW(UnityEngine.WWW,System.String,UnityEngine.Hash128&,System.UInt32)
extern "C"  void WWW_INTERNAL_CALL_WWW_m2558106608 (Il2CppObject * __this /* static, unused */, WWW_t1522972100 * ___self0, String_t* ___url1, Hash128_t3885020822 * ___hash2, uint32_t ___crc3, const MethodInfo* method)
{
	typedef void (*WWW_INTERNAL_CALL_WWW_m2558106608_ftn) (WWW_t1522972100 *, String_t*, Hash128_t3885020822 *, uint32_t);
	static WWW_INTERNAL_CALL_WWW_m2558106608_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WWW_INTERNAL_CALL_WWW_m2558106608_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::INTERNAL_CALL_WWW(UnityEngine.WWW,System.String,UnityEngine.Hash128&,System.UInt32)");
	_il2cpp_icall_func(___self0, ___url1, ___hash2, ___crc3);
}
// UnityEngine.WWW UnityEngine.WWW::LoadFromCacheOrDownload(System.String,System.Int32)
extern "C"  WWW_t1522972100 * WWW_LoadFromCacheOrDownload_m197364101 (Il2CppObject * __this /* static, unused */, String_t* ___url0, int32_t ___version1, const MethodInfo* method)
{
	uint32_t V_0 = 0;
	{
		V_0 = 0;
		String_t* L_0 = ___url0;
		int32_t L_1 = ___version1;
		uint32_t L_2 = V_0;
		WWW_t1522972100 * L_3 = WWW_LoadFromCacheOrDownload_m101644025(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.WWW UnityEngine.WWW::LoadFromCacheOrDownload(System.String,System.Int32,System.UInt32)
extern "C"  WWW_t1522972100 * WWW_LoadFromCacheOrDownload_m101644025 (Il2CppObject * __this /* static, unused */, String_t* ___url0, int32_t ___version1, uint32_t ___crc2, const MethodInfo* method)
{
	Hash128_t3885020822  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___version1;
		Hash128__ctor_m425960966((&V_0), 0, 0, 0, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___url0;
		Hash128_t3885020822  L_2 = V_0;
		uint32_t L_3 = ___crc2;
		WWW_t1522972100 * L_4 = WWW_LoadFromCacheOrDownload_m2606851680(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.WWW UnityEngine.WWW::LoadFromCacheOrDownload(System.String,UnityEngine.Hash128,System.UInt32)
extern Il2CppClass* WWW_t1522972100_il2cpp_TypeInfo_var;
extern const uint32_t WWW_LoadFromCacheOrDownload_m2606851680_MetadataUsageId;
extern "C"  WWW_t1522972100 * WWW_LoadFromCacheOrDownload_m2606851680 (Il2CppObject * __this /* static, unused */, String_t* ___url0, Hash128_t3885020822  ___hash1, uint32_t ___crc2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (WWW_LoadFromCacheOrDownload_m2606851680_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___url0;
		Hash128_t3885020822  L_1 = ___hash1;
		uint32_t L_2 = ___crc2;
		WWW_t1522972100 * L_3 = (WWW_t1522972100 *)il2cpp_codegen_object_new(WWW_t1522972100_il2cpp_TypeInfo_var);
		WWW__ctor_m649419502(L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void UnityEngine.YieldInstruction::.ctor()
extern "C"  void YieldInstruction__ctor_m539393484 (YieldInstruction_t3557331758 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.YieldInstruction
extern "C" void YieldInstruction_t3557331758_marshal_pinvoke(const YieldInstruction_t3557331758& unmarshaled, YieldInstruction_t3557331758_marshaled_pinvoke& marshaled)
{
}
extern "C" void YieldInstruction_t3557331758_marshal_pinvoke_back(const YieldInstruction_t3557331758_marshaled_pinvoke& marshaled, YieldInstruction_t3557331758& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.YieldInstruction
extern "C" void YieldInstruction_t3557331758_marshal_pinvoke_cleanup(YieldInstruction_t3557331758_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.YieldInstruction
extern "C" void YieldInstruction_t3557331758_marshal_com(const YieldInstruction_t3557331758& unmarshaled, YieldInstruction_t3557331758_marshaled_com& marshaled)
{
}
extern "C" void YieldInstruction_t3557331758_marshal_com_back(const YieldInstruction_t3557331758_marshaled_com& marshaled, YieldInstruction_t3557331758& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.YieldInstruction
extern "C" void YieldInstruction_t3557331758_marshal_com_cleanup(YieldInstruction_t3557331758_marshaled_com& marshaled)
{
}
// System.Void UnityEngineInternal.GenericStack::.ctor()
extern "C"  void GenericStack__ctor_m2328546233 (GenericStack_t2344941421 * __this, const MethodInfo* method)
{
	{
		Stack__ctor_m1821673314(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngineInternal.MathfInternal::.cctor()
extern Il2CppClass* MathfInternal_t681132919_il2cpp_TypeInfo_var;
extern const uint32_t MathfInternal__cctor_m2600550988_MetadataUsageId;
extern "C"  void MathfInternal__cctor_m2600550988 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MathfInternal__cctor_m2600550988_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		il2cpp_codegen_memory_barrier();
		((MathfInternal_t681132919_StaticFields*)MathfInternal_t681132919_il2cpp_TypeInfo_var->static_fields)->set_FloatMinNormal_0((1.17549435E-38f));
		il2cpp_codegen_memory_barrier();
		((MathfInternal_t681132919_StaticFields*)MathfInternal_t681132919_il2cpp_TypeInfo_var->static_fields)->set_FloatMinDenormal_1((1.401298E-45f));
		((MathfInternal_t681132919_StaticFields*)MathfInternal_t681132919_il2cpp_TypeInfo_var->static_fields)->set_IsFlushToZeroEnabled_2((bool)1);
		return;
	}
}
// Conversion methods for marshalling of: UnityEngineInternal.MathfInternal
extern "C" void MathfInternal_t681132919_marshal_pinvoke(const MathfInternal_t681132919& unmarshaled, MathfInternal_t681132919_marshaled_pinvoke& marshaled)
{
}
extern "C" void MathfInternal_t681132919_marshal_pinvoke_back(const MathfInternal_t681132919_marshaled_pinvoke& marshaled, MathfInternal_t681132919& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngineInternal.MathfInternal
extern "C" void MathfInternal_t681132919_marshal_pinvoke_cleanup(MathfInternal_t681132919_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngineInternal.MathfInternal
extern "C" void MathfInternal_t681132919_marshal_com(const MathfInternal_t681132919& unmarshaled, MathfInternal_t681132919_marshaled_com& marshaled)
{
}
extern "C" void MathfInternal_t681132919_marshal_com_back(const MathfInternal_t681132919_marshaled_com& marshaled, MathfInternal_t681132919& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngineInternal.MathfInternal
extern "C" void MathfInternal_t681132919_marshal_com_cleanup(MathfInternal_t681132919_marshaled_com& marshaled)
{
}
// System.Delegate UnityEngineInternal.NetFxCoreExtensions::CreateDelegate(System.Reflection.MethodInfo,System.Type,System.Object)
extern "C"  Delegate_t3660574010 * NetFxCoreExtensions_CreateDelegate_m3408605866 (Il2CppObject * __this /* static, unused */, MethodInfo_t * ___self0, Type_t * ___delegateType1, Il2CppObject * ___target2, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___delegateType1;
		Il2CppObject * L_1 = ___target2;
		MethodInfo_t * L_2 = ___self0;
		Delegate_t3660574010 * L_3 = Delegate_CreateDelegate_m3460497746(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Reflection.MethodInfo UnityEngineInternal.NetFxCoreExtensions::GetMethodInfo(System.Delegate)
extern "C"  MethodInfo_t * NetFxCoreExtensions_GetMethodInfo_m1628849205 (Il2CppObject * __this /* static, unused */, Delegate_t3660574010 * ___self0, const MethodInfo* method)
{
	{
		Delegate_t3660574010 * L_0 = ___self0;
		NullCheck(L_0);
		MethodInfo_t * L_1 = Delegate_get_Method_m669548326(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(UnityEngineInternal.TypeInferenceRules)
extern Il2CppClass* TypeInferenceRules_t435505844_il2cpp_TypeInfo_var;
extern const uint32_t TypeInferenceRuleAttribute__ctor_m1168575159_MetadataUsageId;
extern "C"  void TypeInferenceRuleAttribute__ctor_m1168575159 (TypeInferenceRuleAttribute_t471424957 * __this, int32_t ___rule0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TypeInferenceRuleAttribute__ctor_m1168575159_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___rule0;
		int32_t L_1 = L_0;
		Il2CppObject * L_2 = Box(TypeInferenceRules_t435505844_il2cpp_TypeInfo_var, &L_1);
		NullCheck((Enum_t2778772662 *)L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, (Enum_t2778772662 *)L_2);
		TypeInferenceRuleAttribute__ctor_m2173394041(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(System.String)
extern "C"  void TypeInferenceRuleAttribute__ctor_m2173394041 (TypeInferenceRuleAttribute_t471424957 * __this, String_t* ___rule0, const MethodInfo* method)
{
	{
		Attribute__ctor_m2985353781(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___rule0;
		__this->set__rule_0(L_0);
		return;
	}
}
// System.String UnityEngineInternal.TypeInferenceRuleAttribute::ToString()
extern "C"  String_t* TypeInferenceRuleAttribute_ToString_m318752778 (TypeInferenceRuleAttribute_t471424957 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = __this->get__rule_0();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
