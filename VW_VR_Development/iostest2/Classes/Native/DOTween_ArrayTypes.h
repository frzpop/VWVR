#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// DG.Tweening.TweenCallback
struct TweenCallback_t3786476454;
// DG.Tweening.Tween
struct Tween_t1103364673;
// DG.Tweening.Core.ABSSequentiable
struct ABSSequentiable_t2598715689;
// DG.Tweening.Plugins.Core.ITweenPlugin
struct ITweenPlugin_t4001397720;

#include "mscorlib_System_Array2840145358.h"
#include "DOTween_DG_Tweening_TweenCallback3786476454.h"
#include "DOTween_DG_Tweening_Tween1103364673.h"
#include "DOTween_DG_Tweening_Core_ABSSequentiable2598715689.h"
#include "DOTween_DG_Tweening_Plugins_Core_PathCore_ControlP2502913174.h"

#pragma once
// DG.Tweening.TweenCallback[]
struct TweenCallbackU5BU5D_t2750415619  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) TweenCallback_t3786476454 * m_Items[1];

public:
	inline TweenCallback_t3786476454 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline TweenCallback_t3786476454 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, TweenCallback_t3786476454 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// DG.Tweening.Tween[]
struct TweenU5BU5D_t2610237340  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Tween_t1103364673 * m_Items[1];

public:
	inline Tween_t1103364673 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Tween_t1103364673 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Tween_t1103364673 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// DG.Tweening.Core.ABSSequentiable[]
struct ABSSequentiableU5BU5D_t3009720340  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) ABSSequentiable_t2598715689 * m_Items[1];

public:
	inline ABSSequentiable_t2598715689 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline ABSSequentiable_t2598715689 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, ABSSequentiable_t2598715689 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// DG.Tweening.Plugins.Core.ITweenPlugin[]
struct ITweenPluginU5BU5D_t3879248329  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Il2CppObject * m_Items[1];

public:
	inline Il2CppObject * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Il2CppObject ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Il2CppObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// DG.Tweening.Plugins.Core.PathCore.ControlPoint[]
struct ControlPointU5BU5D_t348442707  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) ControlPoint_t2502913174  m_Items[1];

public:
	inline ControlPoint_t2502913174  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline ControlPoint_t2502913174 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, ControlPoint_t2502913174  value)
	{
		m_Items[index] = value;
	}
};
