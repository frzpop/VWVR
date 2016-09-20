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

// UnityEngine.AssetBundle
struct AssetBundle_t3959431103;
// UnityEngine.Object
struct Object_t3878351788;
struct Object_t3878351788_marshaled_pinvoke;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.String[]
struct StringU5BU5D_t2956870243;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Type2779229935.h"

// UnityEngine.Object UnityEngine.AssetBundle::LoadAsset(System.String,System.Type)
extern "C"  Object_t3878351788 * AssetBundle_LoadAsset_m3749681325 (AssetBundle_t3959431103 * __this, String_t* ___name0, Type_t * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.AssetBundle::LoadAsset_Internal(System.String,System.Type)
extern "C"  Object_t3878351788 * AssetBundle_LoadAsset_Internal_m1258146911 (AssetBundle_t3959431103 * __this, String_t* ___name0, Type_t * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] UnityEngine.AssetBundle::GetAllAssetNames()
extern "C"  StringU5BU5D_t2956870243* AssetBundle_GetAllAssetNames_m3257385279 (AssetBundle_t3959431103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
