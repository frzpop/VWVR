#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType4014882752.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Plugins.Core.PathCore.ControlPoint
struct  ControlPoint_t2502913174 
{
public:
	// UnityEngine.Vector3 DG.Tweening.Plugins.Core.PathCore.ControlPoint::a
	Vector3_t3525329789  ___a_0;
	// UnityEngine.Vector3 DG.Tweening.Plugins.Core.PathCore.ControlPoint::b
	Vector3_t3525329789  ___b_1;

public:
	inline static int32_t get_offset_of_a_0() { return static_cast<int32_t>(offsetof(ControlPoint_t2502913174, ___a_0)); }
	inline Vector3_t3525329789  get_a_0() const { return ___a_0; }
	inline Vector3_t3525329789 * get_address_of_a_0() { return &___a_0; }
	inline void set_a_0(Vector3_t3525329789  value)
	{
		___a_0 = value;
	}

	inline static int32_t get_offset_of_b_1() { return static_cast<int32_t>(offsetof(ControlPoint_t2502913174, ___b_1)); }
	inline Vector3_t3525329789  get_b_1() const { return ___b_1; }
	inline Vector3_t3525329789 * get_address_of_b_1() { return &___b_1; }
	inline void set_b_1(Vector3_t3525329789  value)
	{
		___b_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: DG.Tweening.Plugins.Core.PathCore.ControlPoint
struct ControlPoint_t2502913174_marshaled_pinvoke
{
	Vector3_t3525329789_marshaled_pinvoke ___a_0;
	Vector3_t3525329789_marshaled_pinvoke ___b_1;
};
// Native definition for marshalling of: DG.Tweening.Plugins.Core.PathCore.ControlPoint
struct ControlPoint_t2502913174_marshaled_com
{
	Vector3_t3525329789_marshaled_com ___a_0;
	Vector3_t3525329789_marshaled_com ___b_1;
};
