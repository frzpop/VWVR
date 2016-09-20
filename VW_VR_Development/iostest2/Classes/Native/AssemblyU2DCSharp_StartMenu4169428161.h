#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t3354615620;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t503173063;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StartMenu
struct  StartMenu_t4169428161  : public MonoBehaviour_t3012272455
{
public:
	// System.Single StartMenu::delay
	float ___delay_2;
	// UnityEngine.UI.Image StartMenu::bgImg
	Image_t3354615620 * ___bgImg_3;
	// UnityEngine.Sprite[] StartMenu::loadingSprites
	SpriteU5BU5D_t503173063* ___loadingSprites_4;
	// UnityEngine.GameObject[] StartMenu::buttons
	GameObjectU5BU5D_t3499186955* ___buttons_5;

public:
	inline static int32_t get_offset_of_delay_2() { return static_cast<int32_t>(offsetof(StartMenu_t4169428161, ___delay_2)); }
	inline float get_delay_2() const { return ___delay_2; }
	inline float* get_address_of_delay_2() { return &___delay_2; }
	inline void set_delay_2(float value)
	{
		___delay_2 = value;
	}

	inline static int32_t get_offset_of_bgImg_3() { return static_cast<int32_t>(offsetof(StartMenu_t4169428161, ___bgImg_3)); }
	inline Image_t3354615620 * get_bgImg_3() const { return ___bgImg_3; }
	inline Image_t3354615620 ** get_address_of_bgImg_3() { return &___bgImg_3; }
	inline void set_bgImg_3(Image_t3354615620 * value)
	{
		___bgImg_3 = value;
		Il2CppCodeGenWriteBarrier(&___bgImg_3, value);
	}

	inline static int32_t get_offset_of_loadingSprites_4() { return static_cast<int32_t>(offsetof(StartMenu_t4169428161, ___loadingSprites_4)); }
	inline SpriteU5BU5D_t503173063* get_loadingSprites_4() const { return ___loadingSprites_4; }
	inline SpriteU5BU5D_t503173063** get_address_of_loadingSprites_4() { return &___loadingSprites_4; }
	inline void set_loadingSprites_4(SpriteU5BU5D_t503173063* value)
	{
		___loadingSprites_4 = value;
		Il2CppCodeGenWriteBarrier(&___loadingSprites_4, value);
	}

	inline static int32_t get_offset_of_buttons_5() { return static_cast<int32_t>(offsetof(StartMenu_t4169428161, ___buttons_5)); }
	inline GameObjectU5BU5D_t3499186955* get_buttons_5() const { return ___buttons_5; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_buttons_5() { return &___buttons_5; }
	inline void set_buttons_5(GameObjectU5BU5D_t3499186955* value)
	{
		___buttons_5 = value;
		Il2CppCodeGenWriteBarrier(&___buttons_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
