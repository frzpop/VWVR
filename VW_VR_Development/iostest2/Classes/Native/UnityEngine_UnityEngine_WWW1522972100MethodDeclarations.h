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

// UnityEngine.WWW
struct WWW_t1522972100;
// System.String
struct String_t;
// UnityEngine.AssetBundle
struct AssetBundle_t3959431103;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Hash1283885020822.h"
#include "UnityEngine_UnityEngine_WWW1522972100.h"

// System.Void UnityEngine.WWW::.ctor(System.String,UnityEngine.Hash128,System.UInt32)
extern "C"  void WWW__ctor_m649419502 (WWW_t1522972100 * __this, String_t* ___url0, Hash128_t3885020822  ___hash1, uint32_t ___crc2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::Dispose()
extern "C"  void WWW_Dispose_m2446678367 (WWW_t1522972100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::Finalize()
extern "C"  void WWW_Finalize_m1793349504 (WWW_t1522972100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::DestroyWWW(System.Boolean)
extern "C"  void WWW_DestroyWWW_m300967382 (WWW_t1522972100 * __this, bool ___cancel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_error()
extern "C"  String_t* WWW_get_error_m1787423074 (WWW_t1522972100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.WWW::get_progress()
extern "C"  float WWW_get_progress_m3186358572 (WWW_t1522972100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AssetBundle UnityEngine.WWW::get_assetBundle()
extern "C"  AssetBundle_t3959431103 * WWW_get_assetBundle_m2674678273 (WWW_t1522972100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::INTERNAL_CALL_WWW(UnityEngine.WWW,System.String,UnityEngine.Hash128&,System.UInt32)
extern "C"  void WWW_INTERNAL_CALL_WWW_m2558106608 (Il2CppObject * __this /* static, unused */, WWW_t1522972100 * ___self0, String_t* ___url1, Hash128_t3885020822 * ___hash2, uint32_t ___crc3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.WWW UnityEngine.WWW::LoadFromCacheOrDownload(System.String,System.Int32)
extern "C"  WWW_t1522972100 * WWW_LoadFromCacheOrDownload_m197364101 (Il2CppObject * __this /* static, unused */, String_t* ___url0, int32_t ___version1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.WWW UnityEngine.WWW::LoadFromCacheOrDownload(System.String,System.Int32,System.UInt32)
extern "C"  WWW_t1522972100 * WWW_LoadFromCacheOrDownload_m101644025 (Il2CppObject * __this /* static, unused */, String_t* ___url0, int32_t ___version1, uint32_t ___crc2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.WWW UnityEngine.WWW::LoadFromCacheOrDownload(System.String,UnityEngine.Hash128,System.UInt32)
extern "C"  WWW_t1522972100 * WWW_LoadFromCacheOrDownload_m2606851680 (Il2CppObject * __this /* static, unused */, String_t* ___url0, Hash128_t3885020822  ___hash1, uint32_t ___crc2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
