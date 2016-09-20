#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AudioPlayer
struct  AudioPlayer_t2016416311  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject AudioPlayer::leftEye
	GameObject_t4012695102 * ___leftEye_2;
	// System.Boolean AudioPlayer::playing
	bool ___playing_3;
	// System.Boolean AudioPlayer::trigger
	bool ___trigger_4;

public:
	inline static int32_t get_offset_of_leftEye_2() { return static_cast<int32_t>(offsetof(AudioPlayer_t2016416311, ___leftEye_2)); }
	inline GameObject_t4012695102 * get_leftEye_2() const { return ___leftEye_2; }
	inline GameObject_t4012695102 ** get_address_of_leftEye_2() { return &___leftEye_2; }
	inline void set_leftEye_2(GameObject_t4012695102 * value)
	{
		___leftEye_2 = value;
		Il2CppCodeGenWriteBarrier(&___leftEye_2, value);
	}

	inline static int32_t get_offset_of_playing_3() { return static_cast<int32_t>(offsetof(AudioPlayer_t2016416311, ___playing_3)); }
	inline bool get_playing_3() const { return ___playing_3; }
	inline bool* get_address_of_playing_3() { return &___playing_3; }
	inline void set_playing_3(bool value)
	{
		___playing_3 = value;
	}

	inline static int32_t get_offset_of_trigger_4() { return static_cast<int32_t>(offsetof(AudioPlayer_t2016416311, ___trigger_4)); }
	inline bool get_trigger_4() const { return ___trigger_4; }
	inline bool* get_address_of_trigger_4() { return &___trigger_4; }
	inline void set_trigger_4(bool value)
	{
		___trigger_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
