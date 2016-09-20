#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.WWW
struct WWW_t1522972100;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t3623042065;
// UnityEngine.Texture[]
struct TextureU5BU5D_t3618347161;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955;
// Cardboard
struct Cardboard_t1761541558;
// UnityEngine.TextMesh
struct TextMesh_t583678247;
// UnityEngine.AssetBundle
struct AssetBundle_t3959431103;
// UnityEngine.Object[]
struct ObjectU5BU5D_t3051965477;
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t2265160319;
// System.String[]
struct StringU5BU5D_t2956870243;
// System.Action
struct Action_t437523947;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TextureLoader
struct  TextureLoader_t887857390  : public MonoBehaviour_t3012272455
{
public:
	// System.String TextureLoader::path
	String_t* ___path_2;
	// System.Int32 TextureLoader::version
	int32_t ___version_3;
	// UnityEngine.WWW TextureLoader::www
	WWW_t1522972100 * ___www_4;
	// UnityEngine.Renderer[] TextureLoader::cubes
	RendererU5BU5D_t3623042065* ___cubes_5;
	// UnityEngine.Renderer[] TextureLoader::introCubesRend
	RendererU5BU5D_t3623042065* ___introCubesRend_6;
	// UnityEngine.Texture[] TextureLoader::engIntroCubeTex
	TextureU5BU5D_t3618347161* ___engIntroCubeTex_7;
	// UnityEngine.GameObject[] TextureLoader::popups
	GameObjectU5BU5D_t3499186955* ___popups_8;
	// Cardboard TextureLoader::cb
	Cardboard_t1761541558 * ___cb_9;
	// UnityEngine.TextMesh TextureLoader::textMesh
	TextMesh_t583678247 * ___textMesh_10;
	// UnityEngine.TextMesh TextureLoader::textMeshRightCopy
	TextMesh_t583678247 * ___textMeshRightCopy_11;
	// System.String TextureLoader::text
	String_t* ___text_12;
	// System.String TextureLoader::suffix
	String_t* ___suffix_13;
	// UnityEngine.AssetBundle TextureLoader::bundle
	AssetBundle_t3959431103 * ___bundle_14;
	// UnityEngine.Object[] TextureLoader::objs
	ObjectU5BU5D_t3051965477* ___objs_15;
	// UnityEngine.Texture2D[] TextureLoader::textures
	Texture2DU5BU5D_t2265160319* ___textures_16;
	// System.Boolean TextureLoader::load
	bool ___load_17;
	// System.Boolean TextureLoader::done
	bool ___done_18;
	// System.String[] TextureLoader::names
	StringU5BU5D_t2956870243* ___names_19;

public:
	inline static int32_t get_offset_of_path_2() { return static_cast<int32_t>(offsetof(TextureLoader_t887857390, ___path_2)); }
	inline String_t* get_path_2() const { return ___path_2; }
	inline String_t** get_address_of_path_2() { return &___path_2; }
	inline void set_path_2(String_t* value)
	{
		___path_2 = value;
		Il2CppCodeGenWriteBarrier(&___path_2, value);
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(TextureLoader_t887857390, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_www_4() { return static_cast<int32_t>(offsetof(TextureLoader_t887857390, ___www_4)); }
	inline WWW_t1522972100 * get_www_4() const { return ___www_4; }
	inline WWW_t1522972100 ** get_address_of_www_4() { return &___www_4; }
	inline void set_www_4(WWW_t1522972100 * value)
	{
		___www_4 = value;
		Il2CppCodeGenWriteBarrier(&___www_4, value);
	}

	inline static int32_t get_offset_of_cubes_5() { return static_cast<int32_t>(offsetof(TextureLoader_t887857390, ___cubes_5)); }
	inline RendererU5BU5D_t3623042065* get_cubes_5() const { return ___cubes_5; }
	inline RendererU5BU5D_t3623042065** get_address_of_cubes_5() { return &___cubes_5; }
	inline void set_cubes_5(RendererU5BU5D_t3623042065* value)
	{
		___cubes_5 = value;
		Il2CppCodeGenWriteBarrier(&___cubes_5, value);
	}

	inline static int32_t get_offset_of_introCubesRend_6() { return static_cast<int32_t>(offsetof(TextureLoader_t887857390, ___introCubesRend_6)); }
	inline RendererU5BU5D_t3623042065* get_introCubesRend_6() const { return ___introCubesRend_6; }
	inline RendererU5BU5D_t3623042065** get_address_of_introCubesRend_6() { return &___introCubesRend_6; }
	inline void set_introCubesRend_6(RendererU5BU5D_t3623042065* value)
	{
		___introCubesRend_6 = value;
		Il2CppCodeGenWriteBarrier(&___introCubesRend_6, value);
	}

	inline static int32_t get_offset_of_engIntroCubeTex_7() { return static_cast<int32_t>(offsetof(TextureLoader_t887857390, ___engIntroCubeTex_7)); }
	inline TextureU5BU5D_t3618347161* get_engIntroCubeTex_7() const { return ___engIntroCubeTex_7; }
	inline TextureU5BU5D_t3618347161** get_address_of_engIntroCubeTex_7() { return &___engIntroCubeTex_7; }
	inline void set_engIntroCubeTex_7(TextureU5BU5D_t3618347161* value)
	{
		___engIntroCubeTex_7 = value;
		Il2CppCodeGenWriteBarrier(&___engIntroCubeTex_7, value);
	}

	inline static int32_t get_offset_of_popups_8() { return static_cast<int32_t>(offsetof(TextureLoader_t887857390, ___popups_8)); }
	inline GameObjectU5BU5D_t3499186955* get_popups_8() const { return ___popups_8; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_popups_8() { return &___popups_8; }
	inline void set_popups_8(GameObjectU5BU5D_t3499186955* value)
	{
		___popups_8 = value;
		Il2CppCodeGenWriteBarrier(&___popups_8, value);
	}

	inline static int32_t get_offset_of_cb_9() { return static_cast<int32_t>(offsetof(TextureLoader_t887857390, ___cb_9)); }
	inline Cardboard_t1761541558 * get_cb_9() const { return ___cb_9; }
	inline Cardboard_t1761541558 ** get_address_of_cb_9() { return &___cb_9; }
	inline void set_cb_9(Cardboard_t1761541558 * value)
	{
		___cb_9 = value;
		Il2CppCodeGenWriteBarrier(&___cb_9, value);
	}

	inline static int32_t get_offset_of_textMesh_10() { return static_cast<int32_t>(offsetof(TextureLoader_t887857390, ___textMesh_10)); }
	inline TextMesh_t583678247 * get_textMesh_10() const { return ___textMesh_10; }
	inline TextMesh_t583678247 ** get_address_of_textMesh_10() { return &___textMesh_10; }
	inline void set_textMesh_10(TextMesh_t583678247 * value)
	{
		___textMesh_10 = value;
		Il2CppCodeGenWriteBarrier(&___textMesh_10, value);
	}

	inline static int32_t get_offset_of_textMeshRightCopy_11() { return static_cast<int32_t>(offsetof(TextureLoader_t887857390, ___textMeshRightCopy_11)); }
	inline TextMesh_t583678247 * get_textMeshRightCopy_11() const { return ___textMeshRightCopy_11; }
	inline TextMesh_t583678247 ** get_address_of_textMeshRightCopy_11() { return &___textMeshRightCopy_11; }
	inline void set_textMeshRightCopy_11(TextMesh_t583678247 * value)
	{
		___textMeshRightCopy_11 = value;
		Il2CppCodeGenWriteBarrier(&___textMeshRightCopy_11, value);
	}

	inline static int32_t get_offset_of_text_12() { return static_cast<int32_t>(offsetof(TextureLoader_t887857390, ___text_12)); }
	inline String_t* get_text_12() const { return ___text_12; }
	inline String_t** get_address_of_text_12() { return &___text_12; }
	inline void set_text_12(String_t* value)
	{
		___text_12 = value;
		Il2CppCodeGenWriteBarrier(&___text_12, value);
	}

	inline static int32_t get_offset_of_suffix_13() { return static_cast<int32_t>(offsetof(TextureLoader_t887857390, ___suffix_13)); }
	inline String_t* get_suffix_13() const { return ___suffix_13; }
	inline String_t** get_address_of_suffix_13() { return &___suffix_13; }
	inline void set_suffix_13(String_t* value)
	{
		___suffix_13 = value;
		Il2CppCodeGenWriteBarrier(&___suffix_13, value);
	}

	inline static int32_t get_offset_of_bundle_14() { return static_cast<int32_t>(offsetof(TextureLoader_t887857390, ___bundle_14)); }
	inline AssetBundle_t3959431103 * get_bundle_14() const { return ___bundle_14; }
	inline AssetBundle_t3959431103 ** get_address_of_bundle_14() { return &___bundle_14; }
	inline void set_bundle_14(AssetBundle_t3959431103 * value)
	{
		___bundle_14 = value;
		Il2CppCodeGenWriteBarrier(&___bundle_14, value);
	}

	inline static int32_t get_offset_of_objs_15() { return static_cast<int32_t>(offsetof(TextureLoader_t887857390, ___objs_15)); }
	inline ObjectU5BU5D_t3051965477* get_objs_15() const { return ___objs_15; }
	inline ObjectU5BU5D_t3051965477** get_address_of_objs_15() { return &___objs_15; }
	inline void set_objs_15(ObjectU5BU5D_t3051965477* value)
	{
		___objs_15 = value;
		Il2CppCodeGenWriteBarrier(&___objs_15, value);
	}

	inline static int32_t get_offset_of_textures_16() { return static_cast<int32_t>(offsetof(TextureLoader_t887857390, ___textures_16)); }
	inline Texture2DU5BU5D_t2265160319* get_textures_16() const { return ___textures_16; }
	inline Texture2DU5BU5D_t2265160319** get_address_of_textures_16() { return &___textures_16; }
	inline void set_textures_16(Texture2DU5BU5D_t2265160319* value)
	{
		___textures_16 = value;
		Il2CppCodeGenWriteBarrier(&___textures_16, value);
	}

	inline static int32_t get_offset_of_load_17() { return static_cast<int32_t>(offsetof(TextureLoader_t887857390, ___load_17)); }
	inline bool get_load_17() const { return ___load_17; }
	inline bool* get_address_of_load_17() { return &___load_17; }
	inline void set_load_17(bool value)
	{
		___load_17 = value;
	}

	inline static int32_t get_offset_of_done_18() { return static_cast<int32_t>(offsetof(TextureLoader_t887857390, ___done_18)); }
	inline bool get_done_18() const { return ___done_18; }
	inline bool* get_address_of_done_18() { return &___done_18; }
	inline void set_done_18(bool value)
	{
		___done_18 = value;
	}

	inline static int32_t get_offset_of_names_19() { return static_cast<int32_t>(offsetof(TextureLoader_t887857390, ___names_19)); }
	inline StringU5BU5D_t2956870243* get_names_19() const { return ___names_19; }
	inline StringU5BU5D_t2956870243** get_address_of_names_19() { return &___names_19; }
	inline void set_names_19(StringU5BU5D_t2956870243* value)
	{
		___names_19 = value;
		Il2CppCodeGenWriteBarrier(&___names_19, value);
	}
};

struct TextureLoader_t887857390_StaticFields
{
public:
	// System.Action TextureLoader::<>f__am$cache12
	Action_t437523947 * ___U3CU3Ef__amU24cache12_20;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache12_20() { return static_cast<int32_t>(offsetof(TextureLoader_t887857390_StaticFields, ___U3CU3Ef__amU24cache12_20)); }
	inline Action_t437523947 * get_U3CU3Ef__amU24cache12_20() const { return ___U3CU3Ef__amU24cache12_20; }
	inline Action_t437523947 ** get_address_of_U3CU3Ef__amU24cache12_20() { return &___U3CU3Ef__amU24cache12_20; }
	inline void set_U3CU3Ef__amU24cache12_20(Action_t437523947 * value)
	{
		___U3CU3Ef__amU24cache12_20 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache12_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
