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
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// UnityEngine.Animation
struct Animation_t3648466861;
// UnityEngine.Behaviour
struct Behaviour_t1437897464;
// UnityEngine.AnimationClip
struct AnimationClip_t2318505987;
// System.String
struct String_t;
// UnityEngine.AnimationState
struct AnimationState_t1108360407;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// UnityEngine.Animation/Enumerator
struct Enumerator_t1136361084;
// UnityEngine.TrackedReference
struct TrackedReference_t1199777556;
// UnityEngine.Motion
struct Motion_t1110556653;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// System.Type
struct Type_t;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3046754366;
// UnityEngine.AnimationEvent
struct AnimationEvent_t1536042487;
// System.ArgumentNullException
struct ArgumentNullException_t1615371798;
// UnityEngine.AnimationEvent[]
struct AnimationEventU5BU5D_t1574357070;
// UnityEngine.Object
struct Object_t631007953;
// System.InvalidCastException
struct InvalidCastException_t3927145244;
// System.InvalidOperationException
struct InvalidOperationException_t56020091;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.Animator
struct Animator_t434523843;
// UnityEngine.StateMachineBehaviour[]
struct StateMachineBehaviourU5BU5D_t1747573118;
// UnityEngine.StateMachineBehaviour
struct StateMachineBehaviour_t957311111;
// UnityEngine.AnimatorClipInfo[]
struct AnimatorClipInfoU5BU5D_t855299250;
// System.Collections.Generic.List`1<UnityEngine.AnimatorClipInfo>
struct List_1_t333824601;
// UnityEngine.AnimatorControllerParameter[]
struct AnimatorControllerParameterU5BU5D_t846601295;
// UnityEngine.AnimatorControllerParameter
struct AnimatorControllerParameter_t1758260042;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t1578797820;
// UnityEngine.RuntimeAnimatorController
struct RuntimeAnimatorController_t2933699135;
// UnityEngine.Avatar
struct Avatar_t2902216466;
// UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;

extern RuntimeClass* Enumerator_t1136361084_il2cpp_TypeInfo_var;
extern const uint32_t Animation_GetEnumerator_m1233868201_MetadataUsageId;
extern RuntimeClass* ArgumentNullException_t1615371798_il2cpp_TypeInfo_var;
extern const RuntimeMethod* AnimationClip_AddEvent_m2908172157_RuntimeMethod_var;
extern String_t* _stringLiteral2554200833;
extern const uint32_t AnimationClip_AddEvent_m2908172157_MetadataUsageId;
extern RuntimeClass* AnimationEventU5BU5D_t1574357070_il2cpp_TypeInfo_var;
extern const uint32_t AnimationClip_get_events_m3948822571_MetadataUsageId;
struct Object_t631007953_marshaled_pinvoke;
struct Object_t631007953;;
struct Object_t631007953_marshaled_pinvoke;;
struct Object_t631007953_marshaled_com;
struct Object_t631007953_marshaled_com;;
extern String_t* _stringLiteral757602046;
extern const uint32_t AnimationEvent__ctor_m234009954_MetadataUsageId;
extern RuntimeClass* InvalidCastException_t3927145244_il2cpp_TypeInfo_var;
extern const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_t3631223897_m201603007_RuntimeMethod_var;
extern const RuntimeMethod* AnimationLayerMixerPlayable__ctor_m860721801_RuntimeMethod_var;
extern String_t* _stringLiteral1913092913;
extern const uint32_t AnimationLayerMixerPlayable__ctor_m860721801_MetadataUsageId;
extern RuntimeClass* AnimationLayerMixerPlayable_t3631223897_il2cpp_TypeInfo_var;
extern const uint32_t AnimationLayerMixerPlayable__cctor_m4086299972_MetadataUsageId;
extern const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t2887420414_m2033286094_RuntimeMethod_var;
extern const RuntimeMethod* AnimationOffsetPlayable__ctor_m577157274_RuntimeMethod_var;
extern String_t* _stringLiteral783105886;
extern const uint32_t AnimationOffsetPlayable__ctor_m577157274_MetadataUsageId;
extern RuntimeClass* PlayableHandle_t1095853803_il2cpp_TypeInfo_var;
extern RuntimeClass* AnimationOffsetPlayable_t2887420414_il2cpp_TypeInfo_var;
extern const uint32_t AnimationOffsetPlayable_Equals_m2902253045_MetadataUsageId;
extern const uint32_t AnimationOffsetPlayable__cctor_m1029460816_MetadataUsageId;
extern RuntimeClass* InvalidOperationException_t56020091_il2cpp_TypeInfo_var;
extern const RuntimeMethod* AnimatorControllerPlayable_SetHandle_m2260644454_RuntimeMethod_var;
extern const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_t1015767841_m3416945299_RuntimeMethod_var;
extern String_t* _stringLiteral3786669396;
extern String_t* _stringLiteral2761492165;
extern const uint32_t AnimatorControllerPlayable_SetHandle_m2260644454_MetadataUsageId;
extern RuntimeClass* AnimatorControllerPlayable_t1015767841_il2cpp_TypeInfo_var;
extern const uint32_t AnimatorControllerPlayable__cctor_m3439442711_MetadataUsageId;
extern const RuntimeType* StateMachineBehaviour_t957311111_0_0_0_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern const uint32_t Animator_GetBehaviours_m3191869605_MetadataUsageId;
extern const RuntimeMethod* Animator_GetCurrentAnimatorClipInfo_m574614487_RuntimeMethod_var;
extern String_t* _stringLiteral2716074639;
extern const uint32_t Animator_GetCurrentAnimatorClipInfo_m574614487_MetadataUsageId;
extern const RuntimeMethod* Animator_GetNextAnimatorClipInfo_m1200680582_RuntimeMethod_var;
extern const uint32_t Animator_GetNextAnimatorClipInfo_m1200680582_MetadataUsageId;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* IndexOutOfRangeException_t1578797820_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Animator_GetParameter_m3987887005_RuntimeMethod_var;
extern String_t* _stringLiteral513759309;
extern const uint32_t Animator_GetParameter_m3987887005_MetadataUsageId;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3380224547;
extern const uint32_t Animator_CheckIfInIKPass_m1701567706_MetadataUsageId;
extern const uint32_t AnimatorControllerParameter__ctor_m1078906152_MetadataUsageId;
extern RuntimeClass* AnimatorControllerParameter_t1758260042_il2cpp_TypeInfo_var;
extern const uint32_t AnimatorControllerParameter_Equals_m581940217_MetadataUsageId;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern const uint32_t Avatar__ctor_m4254148338_MetadataUsageId;
extern const uint32_t Motion__ctor_m1337281595_MetadataUsageId;
extern const uint32_t RuntimeAnimatorController__ctor_m3991471855_MetadataUsageId;

struct AnimationEventU5BU5D_t1574357070;
struct StateMachineBehaviourU5BU5D_t1747573118;
struct AnimatorClipInfoU5BU5D_t855299250;
struct AnimatorControllerParameterU5BU5D_t846601295;


#ifndef U3CMODULEU3E_T692745538_H
#define U3CMODULEU3E_T692745538_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745538 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745538_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef ENUMERATOR_T1136361084_H
#define ENUMERATOR_T1136361084_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animation/Enumerator
struct  Enumerator_t1136361084  : public RuntimeObject
{
public:
	// UnityEngine.Animation UnityEngine.Animation/Enumerator::m_Outer
	Animation_t3648466861 * ___m_Outer_0;
	// System.Int32 UnityEngine.Animation/Enumerator::m_CurrentIndex
	int32_t ___m_CurrentIndex_1;

public:
	inline static int32_t get_offset_of_m_Outer_0() { return static_cast<int32_t>(offsetof(Enumerator_t1136361084, ___m_Outer_0)); }
	inline Animation_t3648466861 * get_m_Outer_0() const { return ___m_Outer_0; }
	inline Animation_t3648466861 ** get_address_of_m_Outer_0() { return &___m_Outer_0; }
	inline void set_m_Outer_0(Animation_t3648466861 * value)
	{
		___m_Outer_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Outer_0), value);
	}

	inline static int32_t get_offset_of_m_CurrentIndex_1() { return static_cast<int32_t>(offsetof(Enumerator_t1136361084, ___m_CurrentIndex_1)); }
	inline int32_t get_m_CurrentIndex_1() const { return ___m_CurrentIndex_1; }
	inline int32_t* get_address_of_m_CurrentIndex_1() { return &___m_CurrentIndex_1; }
	inline void set_m_CurrentIndex_1(int32_t value)
	{
		___m_CurrentIndex_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T1136361084_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef LIST_1_T333824601_H
#define LIST_1_T333824601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.AnimatorClipInfo>
struct  List_1_t333824601  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	AnimatorClipInfoU5BU5D_t855299250* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t333824601, ____items_1)); }
	inline AnimatorClipInfoU5BU5D_t855299250* get__items_1() const { return ____items_1; }
	inline AnimatorClipInfoU5BU5D_t855299250** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(AnimatorClipInfoU5BU5D_t855299250* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t333824601, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t333824601, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t333824601_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	AnimatorClipInfoU5BU5D_t855299250* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t333824601_StaticFields, ___EmptyArray_4)); }
	inline AnimatorClipInfoU5BU5D_t855299250* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline AnimatorClipInfoU5BU5D_t855299250** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(AnimatorClipInfoU5BU5D_t855299250* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T333824601_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef ATTRIBUTE_T861562559_H
#define ATTRIBUTE_T861562559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t861562559  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T861562559_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef SHAREDBETWEENANIMATORSATTRIBUTE_T2857104338_H
#define SHAREDBETWEENANIMATORSATTRIBUTE_T2857104338_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SharedBetweenAnimatorsAttribute
struct  SharedBetweenAnimatorsAttribute_t2857104338  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHAREDBETWEENANIMATORSATTRIBUTE_T2857104338_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef ANIMATORSTATEINFO_T509032636_H
#define ANIMATORSTATEINFO_T509032636_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorStateInfo
struct  AnimatorStateInfo_t509032636 
{
public:
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Name
	int32_t ___m_Name_0;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Path
	int32_t ___m_Path_1;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_FullPath
	int32_t ___m_FullPath_2;
	// System.Single UnityEngine.AnimatorStateInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Single UnityEngine.AnimatorStateInfo::m_Length
	float ___m_Length_4;
	// System.Single UnityEngine.AnimatorStateInfo::m_Speed
	float ___m_Speed_5;
	// System.Single UnityEngine.AnimatorStateInfo::m_SpeedMultiplier
	float ___m_SpeedMultiplier_6;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Tag
	int32_t ___m_Tag_7;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Loop
	int32_t ___m_Loop_8;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t509032636, ___m_Name_0)); }
	inline int32_t get_m_Name_0() const { return ___m_Name_0; }
	inline int32_t* get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(int32_t value)
	{
		___m_Name_0 = value;
	}

	inline static int32_t get_offset_of_m_Path_1() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t509032636, ___m_Path_1)); }
	inline int32_t get_m_Path_1() const { return ___m_Path_1; }
	inline int32_t* get_address_of_m_Path_1() { return &___m_Path_1; }
	inline void set_m_Path_1(int32_t value)
	{
		___m_Path_1 = value;
	}

	inline static int32_t get_offset_of_m_FullPath_2() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t509032636, ___m_FullPath_2)); }
	inline int32_t get_m_FullPath_2() const { return ___m_FullPath_2; }
	inline int32_t* get_address_of_m_FullPath_2() { return &___m_FullPath_2; }
	inline void set_m_FullPath_2(int32_t value)
	{
		___m_FullPath_2 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedTime_3() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t509032636, ___m_NormalizedTime_3)); }
	inline float get_m_NormalizedTime_3() const { return ___m_NormalizedTime_3; }
	inline float* get_address_of_m_NormalizedTime_3() { return &___m_NormalizedTime_3; }
	inline void set_m_NormalizedTime_3(float value)
	{
		___m_NormalizedTime_3 = value;
	}

	inline static int32_t get_offset_of_m_Length_4() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t509032636, ___m_Length_4)); }
	inline float get_m_Length_4() const { return ___m_Length_4; }
	inline float* get_address_of_m_Length_4() { return &___m_Length_4; }
	inline void set_m_Length_4(float value)
	{
		___m_Length_4 = value;
	}

	inline static int32_t get_offset_of_m_Speed_5() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t509032636, ___m_Speed_5)); }
	inline float get_m_Speed_5() const { return ___m_Speed_5; }
	inline float* get_address_of_m_Speed_5() { return &___m_Speed_5; }
	inline void set_m_Speed_5(float value)
	{
		___m_Speed_5 = value;
	}

	inline static int32_t get_offset_of_m_SpeedMultiplier_6() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t509032636, ___m_SpeedMultiplier_6)); }
	inline float get_m_SpeedMultiplier_6() const { return ___m_SpeedMultiplier_6; }
	inline float* get_address_of_m_SpeedMultiplier_6() { return &___m_SpeedMultiplier_6; }
	inline void set_m_SpeedMultiplier_6(float value)
	{
		___m_SpeedMultiplier_6 = value;
	}

	inline static int32_t get_offset_of_m_Tag_7() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t509032636, ___m_Tag_7)); }
	inline int32_t get_m_Tag_7() const { return ___m_Tag_7; }
	inline int32_t* get_address_of_m_Tag_7() { return &___m_Tag_7; }
	inline void set_m_Tag_7(int32_t value)
	{
		___m_Tag_7 = value;
	}

	inline static int32_t get_offset_of_m_Loop_8() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t509032636, ___m_Loop_8)); }
	inline int32_t get_m_Loop_8() const { return ___m_Loop_8; }
	inline int32_t* get_address_of_m_Loop_8() { return &___m_Loop_8; }
	inline void set_m_Loop_8(int32_t value)
	{
		___m_Loop_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATORSTATEINFO_T509032636_H
#ifndef ANIMATORCLIPINFO_T3156717155_H
#define ANIMATORCLIPINFO_T3156717155_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorClipInfo
struct  AnimatorClipInfo_t3156717155 
{
public:
	// System.Int32 UnityEngine.AnimatorClipInfo::m_ClipInstanceID
	int32_t ___m_ClipInstanceID_0;
	// System.Single UnityEngine.AnimatorClipInfo::m_Weight
	float ___m_Weight_1;

public:
	inline static int32_t get_offset_of_m_ClipInstanceID_0() { return static_cast<int32_t>(offsetof(AnimatorClipInfo_t3156717155, ___m_ClipInstanceID_0)); }
	inline int32_t get_m_ClipInstanceID_0() const { return ___m_ClipInstanceID_0; }
	inline int32_t* get_address_of_m_ClipInstanceID_0() { return &___m_ClipInstanceID_0; }
	inline void set_m_ClipInstanceID_0(int32_t value)
	{
		___m_ClipInstanceID_0 = value;
	}

	inline static int32_t get_offset_of_m_Weight_1() { return static_cast<int32_t>(offsetof(AnimatorClipInfo_t3156717155, ___m_Weight_1)); }
	inline float get_m_Weight_1() const { return ___m_Weight_1; }
	inline float* get_address_of_m_Weight_1() { return &___m_Weight_1; }
	inline void set_m_Weight_1(float value)
	{
		___m_Weight_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATORCLIPINFO_T3156717155_H
#ifndef ANIMATORTRANSITIONINFO_T2534804151_H
#define ANIMATORTRANSITIONINFO_T2534804151_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorTransitionInfo
struct  AnimatorTransitionInfo_t2534804151 
{
public:
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_FullPath
	int32_t ___m_FullPath_0;
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_UserName
	int32_t ___m_UserName_1;
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_Name
	int32_t ___m_Name_2;
	// System.Boolean UnityEngine.AnimatorTransitionInfo::m_HasFixedDuration
	bool ___m_HasFixedDuration_3;
	// System.Single UnityEngine.AnimatorTransitionInfo::m_Duration
	float ___m_Duration_4;
	// System.Single UnityEngine.AnimatorTransitionInfo::m_NormalizedTime
	float ___m_NormalizedTime_5;
	// System.Boolean UnityEngine.AnimatorTransitionInfo::m_AnyState
	bool ___m_AnyState_6;
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_TransitionType
	int32_t ___m_TransitionType_7;

public:
	inline static int32_t get_offset_of_m_FullPath_0() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t2534804151, ___m_FullPath_0)); }
	inline int32_t get_m_FullPath_0() const { return ___m_FullPath_0; }
	inline int32_t* get_address_of_m_FullPath_0() { return &___m_FullPath_0; }
	inline void set_m_FullPath_0(int32_t value)
	{
		___m_FullPath_0 = value;
	}

	inline static int32_t get_offset_of_m_UserName_1() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t2534804151, ___m_UserName_1)); }
	inline int32_t get_m_UserName_1() const { return ___m_UserName_1; }
	inline int32_t* get_address_of_m_UserName_1() { return &___m_UserName_1; }
	inline void set_m_UserName_1(int32_t value)
	{
		___m_UserName_1 = value;
	}

	inline static int32_t get_offset_of_m_Name_2() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t2534804151, ___m_Name_2)); }
	inline int32_t get_m_Name_2() const { return ___m_Name_2; }
	inline int32_t* get_address_of_m_Name_2() { return &___m_Name_2; }
	inline void set_m_Name_2(int32_t value)
	{
		___m_Name_2 = value;
	}

	inline static int32_t get_offset_of_m_HasFixedDuration_3() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t2534804151, ___m_HasFixedDuration_3)); }
	inline bool get_m_HasFixedDuration_3() const { return ___m_HasFixedDuration_3; }
	inline bool* get_address_of_m_HasFixedDuration_3() { return &___m_HasFixedDuration_3; }
	inline void set_m_HasFixedDuration_3(bool value)
	{
		___m_HasFixedDuration_3 = value;
	}

	inline static int32_t get_offset_of_m_Duration_4() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t2534804151, ___m_Duration_4)); }
	inline float get_m_Duration_4() const { return ___m_Duration_4; }
	inline float* get_address_of_m_Duration_4() { return &___m_Duration_4; }
	inline void set_m_Duration_4(float value)
	{
		___m_Duration_4 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedTime_5() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t2534804151, ___m_NormalizedTime_5)); }
	inline float get_m_NormalizedTime_5() const { return ___m_NormalizedTime_5; }
	inline float* get_address_of_m_NormalizedTime_5() { return &___m_NormalizedTime_5; }
	inline void set_m_NormalizedTime_5(float value)
	{
		___m_NormalizedTime_5 = value;
	}

	inline static int32_t get_offset_of_m_AnyState_6() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t2534804151, ___m_AnyState_6)); }
	inline bool get_m_AnyState_6() const { return ___m_AnyState_6; }
	inline bool* get_address_of_m_AnyState_6() { return &___m_AnyState_6; }
	inline void set_m_AnyState_6(bool value)
	{
		___m_AnyState_6 = value;
	}

	inline static int32_t get_offset_of_m_TransitionType_7() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t2534804151, ___m_TransitionType_7)); }
	inline int32_t get_m_TransitionType_7() const { return ___m_TransitionType_7; }
	inline int32_t* get_address_of_m_TransitionType_7() { return &___m_TransitionType_7; }
	inline void set_m_TransitionType_7(int32_t value)
	{
		___m_TransitionType_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AnimatorTransitionInfo
struct AnimatorTransitionInfo_t2534804151_marshaled_pinvoke
{
	int32_t ___m_FullPath_0;
	int32_t ___m_UserName_1;
	int32_t ___m_Name_2;
	int32_t ___m_HasFixedDuration_3;
	float ___m_Duration_4;
	float ___m_NormalizedTime_5;
	int32_t ___m_AnyState_6;
	int32_t ___m_TransitionType_7;
};
// Native definition for COM marshalling of UnityEngine.AnimatorTransitionInfo
struct AnimatorTransitionInfo_t2534804151_marshaled_com
{
	int32_t ___m_FullPath_0;
	int32_t ___m_UserName_1;
	int32_t ___m_Name_2;
	int32_t ___m_HasFixedDuration_3;
	float ___m_Duration_4;
	float ___m_NormalizedTime_5;
	int32_t ___m_AnyState_6;
	int32_t ___m_TransitionType_7;
};
#endif // ANIMATORTRANSITIONINFO_T2534804151_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef HUMANLIMIT_T2901552972_H
#define HUMANLIMIT_T2901552972_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HumanLimit
struct  HumanLimit_t2901552972 
{
public:
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Min
	Vector3_t3722313464  ___m_Min_0;
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Max
	Vector3_t3722313464  ___m_Max_1;
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Center
	Vector3_t3722313464  ___m_Center_2;
	// System.Single UnityEngine.HumanLimit::m_AxisLength
	float ___m_AxisLength_3;
	// System.Int32 UnityEngine.HumanLimit::m_UseDefaultValues
	int32_t ___m_UseDefaultValues_4;

public:
	inline static int32_t get_offset_of_m_Min_0() { return static_cast<int32_t>(offsetof(HumanLimit_t2901552972, ___m_Min_0)); }
	inline Vector3_t3722313464  get_m_Min_0() const { return ___m_Min_0; }
	inline Vector3_t3722313464 * get_address_of_m_Min_0() { return &___m_Min_0; }
	inline void set_m_Min_0(Vector3_t3722313464  value)
	{
		___m_Min_0 = value;
	}

	inline static int32_t get_offset_of_m_Max_1() { return static_cast<int32_t>(offsetof(HumanLimit_t2901552972, ___m_Max_1)); }
	inline Vector3_t3722313464  get_m_Max_1() const { return ___m_Max_1; }
	inline Vector3_t3722313464 * get_address_of_m_Max_1() { return &___m_Max_1; }
	inline void set_m_Max_1(Vector3_t3722313464  value)
	{
		___m_Max_1 = value;
	}

	inline static int32_t get_offset_of_m_Center_2() { return static_cast<int32_t>(offsetof(HumanLimit_t2901552972, ___m_Center_2)); }
	inline Vector3_t3722313464  get_m_Center_2() const { return ___m_Center_2; }
	inline Vector3_t3722313464 * get_address_of_m_Center_2() { return &___m_Center_2; }
	inline void set_m_Center_2(Vector3_t3722313464  value)
	{
		___m_Center_2 = value;
	}

	inline static int32_t get_offset_of_m_AxisLength_3() { return static_cast<int32_t>(offsetof(HumanLimit_t2901552972, ___m_AxisLength_3)); }
	inline float get_m_AxisLength_3() const { return ___m_AxisLength_3; }
	inline float* get_address_of_m_AxisLength_3() { return &___m_AxisLength_3; }
	inline void set_m_AxisLength_3(float value)
	{
		___m_AxisLength_3 = value;
	}

	inline static int32_t get_offset_of_m_UseDefaultValues_4() { return static_cast<int32_t>(offsetof(HumanLimit_t2901552972, ___m_UseDefaultValues_4)); }
	inline int32_t get_m_UseDefaultValues_4() const { return ___m_UseDefaultValues_4; }
	inline int32_t* get_address_of_m_UseDefaultValues_4() { return &___m_UseDefaultValues_4; }
	inline void set_m_UseDefaultValues_4(int32_t value)
	{
		___m_UseDefaultValues_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HUMANLIMIT_T2901552972_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef HUMANBODYBONES_T600150811_H
#define HUMANBODYBONES_T600150811_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HumanBodyBones
struct  HumanBodyBones_t600150811 
{
public:
	// System.Int32 UnityEngine.HumanBodyBones::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(HumanBodyBones_t600150811, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HUMANBODYBONES_T600150811_H
#ifndef AVATARIKHINT_T1819370074_H
#define AVATARIKHINT_T1819370074_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AvatarIKHint
struct  AvatarIKHint_t1819370074 
{
public:
	// System.Int32 UnityEngine.AvatarIKHint::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AvatarIKHint_t1819370074, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AVATARIKHINT_T1819370074_H
#ifndef AVATARIKGOAL_T2138471376_H
#define AVATARIKGOAL_T2138471376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AvatarIKGoal
struct  AvatarIKGoal_t2138471376 
{
public:
	// System.Int32 UnityEngine.AvatarIKGoal::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AvatarIKGoal_t2138471376, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AVATARIKGOAL_T2138471376_H
#ifndef ANIMATORUPDATEMODE_T3445530896_H
#define ANIMATORUPDATEMODE_T3445530896_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorUpdateMode
struct  AnimatorUpdateMode_t3445530896 
{
public:
	// System.Int32 UnityEngine.AnimatorUpdateMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AnimatorUpdateMode_t3445530896, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATORUPDATEMODE_T3445530896_H
#ifndef PLAYABLEOUTPUTHANDLE_T4208053793_H
#define PLAYABLEOUTPUTHANDLE_T4208053793_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableOutputHandle
struct  PlayableOutputHandle_t4208053793 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t4208053793, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t4208053793, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEOUTPUTHANDLE_T4208053793_H
#ifndef INVALIDOPERATIONEXCEPTION_T56020091_H
#define INVALIDOPERATIONEXCEPTION_T56020091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t56020091  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T56020091_H
#ifndef INDEXOUTOFRANGEEXCEPTION_T1578797820_H
#define INDEXOUTOFRANGEEXCEPTION_T1578797820_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IndexOutOfRangeException
struct  IndexOutOfRangeException_t1578797820  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INDEXOUTOFRANGEEXCEPTION_T1578797820_H
#ifndef DURATIONUNIT_T67755549_H
#define DURATIONUNIT_T67755549_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DurationUnit
struct  DurationUnit_t67755549 
{
public:
	// System.Int32 UnityEngine.DurationUnit::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DurationUnit_t67755549, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DURATIONUNIT_T67755549_H
#ifndef ANIMATORCONTROLLERPARAMETERTYPE_T3317225440_H
#define ANIMATORCONTROLLERPARAMETERTYPE_T3317225440_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorControllerParameterType
struct  AnimatorControllerParameterType_t3317225440 
{
public:
	// System.Int32 UnityEngine.AnimatorControllerParameterType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AnimatorControllerParameterType_t3317225440, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATORCONTROLLERPARAMETERTYPE_T3317225440_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef ANIMATORRECORDERMODE_T3856306556_H
#define ANIMATORRECORDERMODE_T3856306556_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorRecorderMode
struct  AnimatorRecorderMode_t3856306556 
{
public:
	// System.Int32 UnityEngine.AnimatorRecorderMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AnimatorRecorderMode_t3856306556, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATORRECORDERMODE_T3856306556_H
#ifndef ANIMATORCULLINGMODE_T1291874113_H
#define ANIMATORCULLINGMODE_T1291874113_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorCullingMode
struct  AnimatorCullingMode_t1291874113 
{
public:
	// System.Int32 UnityEngine.AnimatorCullingMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AnimatorCullingMode_t1291874113, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATORCULLINGMODE_T1291874113_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T2721792723_H
#ifndef SKELETONBONE_T4134054672_H
#define SKELETONBONE_T4134054672_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SkeletonBone
struct  SkeletonBone_t4134054672 
{
public:
	// System.String UnityEngine.SkeletonBone::name
	String_t* ___name_0;
	// System.String UnityEngine.SkeletonBone::parentName
	String_t* ___parentName_1;
	// UnityEngine.Vector3 UnityEngine.SkeletonBone::position
	Vector3_t3722313464  ___position_2;
	// UnityEngine.Quaternion UnityEngine.SkeletonBone::rotation
	Quaternion_t2301928331  ___rotation_3;
	// UnityEngine.Vector3 UnityEngine.SkeletonBone::scale
	Vector3_t3722313464  ___scale_4;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(SkeletonBone_t4134054672, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_parentName_1() { return static_cast<int32_t>(offsetof(SkeletonBone_t4134054672, ___parentName_1)); }
	inline String_t* get_parentName_1() const { return ___parentName_1; }
	inline String_t** get_address_of_parentName_1() { return &___parentName_1; }
	inline void set_parentName_1(String_t* value)
	{
		___parentName_1 = value;
		Il2CppCodeGenWriteBarrier((&___parentName_1), value);
	}

	inline static int32_t get_offset_of_position_2() { return static_cast<int32_t>(offsetof(SkeletonBone_t4134054672, ___position_2)); }
	inline Vector3_t3722313464  get_position_2() const { return ___position_2; }
	inline Vector3_t3722313464 * get_address_of_position_2() { return &___position_2; }
	inline void set_position_2(Vector3_t3722313464  value)
	{
		___position_2 = value;
	}

	inline static int32_t get_offset_of_rotation_3() { return static_cast<int32_t>(offsetof(SkeletonBone_t4134054672, ___rotation_3)); }
	inline Quaternion_t2301928331  get_rotation_3() const { return ___rotation_3; }
	inline Quaternion_t2301928331 * get_address_of_rotation_3() { return &___rotation_3; }
	inline void set_rotation_3(Quaternion_t2301928331  value)
	{
		___rotation_3 = value;
	}

	inline static int32_t get_offset_of_scale_4() { return static_cast<int32_t>(offsetof(SkeletonBone_t4134054672, ___scale_4)); }
	inline Vector3_t3722313464  get_scale_4() const { return ___scale_4; }
	inline Vector3_t3722313464 * get_address_of_scale_4() { return &___scale_4; }
	inline void set_scale_4(Vector3_t3722313464  value)
	{
		___scale_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SkeletonBone
struct SkeletonBone_t4134054672_marshaled_pinvoke
{
	char* ___name_0;
	char* ___parentName_1;
	Vector3_t3722313464  ___position_2;
	Quaternion_t2301928331  ___rotation_3;
	Vector3_t3722313464  ___scale_4;
};
// Native definition for COM marshalling of UnityEngine.SkeletonBone
struct SkeletonBone_t4134054672_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___parentName_1;
	Vector3_t3722313464  ___position_2;
	Quaternion_t2301928331  ___rotation_3;
	Vector3_t3722313464  ___scale_4;
};
#endif // SKELETONBONE_T4134054672_H
#ifndef MATCHTARGETWEIGHTMASK_T554846203_H
#define MATCHTARGETWEIGHTMASK_T554846203_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MatchTargetWeightMask
struct  MatchTargetWeightMask_t554846203 
{
public:
	// UnityEngine.Vector3 UnityEngine.MatchTargetWeightMask::m_PositionXYZWeight
	Vector3_t3722313464  ___m_PositionXYZWeight_0;
	// System.Single UnityEngine.MatchTargetWeightMask::m_RotationWeight
	float ___m_RotationWeight_1;

public:
	inline static int32_t get_offset_of_m_PositionXYZWeight_0() { return static_cast<int32_t>(offsetof(MatchTargetWeightMask_t554846203, ___m_PositionXYZWeight_0)); }
	inline Vector3_t3722313464  get_m_PositionXYZWeight_0() const { return ___m_PositionXYZWeight_0; }
	inline Vector3_t3722313464 * get_address_of_m_PositionXYZWeight_0() { return &___m_PositionXYZWeight_0; }
	inline void set_m_PositionXYZWeight_0(Vector3_t3722313464  value)
	{
		___m_PositionXYZWeight_0 = value;
	}

	inline static int32_t get_offset_of_m_RotationWeight_1() { return static_cast<int32_t>(offsetof(MatchTargetWeightMask_t554846203, ___m_RotationWeight_1)); }
	inline float get_m_RotationWeight_1() const { return ___m_RotationWeight_1; }
	inline float* get_address_of_m_RotationWeight_1() { return &___m_RotationWeight_1; }
	inline void set_m_RotationWeight_1(float value)
	{
		___m_RotationWeight_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATCHTARGETWEIGHTMASK_T554846203_H
#ifndef AVATARTARGET_T2782276764_H
#define AVATARTARGET_T2782276764_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AvatarTarget
struct  AvatarTarget_t2782276764 
{
public:
	// System.Int32 UnityEngine.AvatarTarget::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AvatarTarget_t2782276764, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AVATARTARGET_T2782276764_H
#ifndef PLAYABLEGRAPH_T3515989261_H
#define PLAYABLEGRAPH_T3515989261_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableGraph
struct  PlayableGraph_t3515989261 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableGraph::m_Handle
	intptr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableGraph::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableGraph_t3515989261, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableGraph_t3515989261, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEGRAPH_T3515989261_H
#ifndef ANIMATIONCURVE_T3046754366_H
#define ANIMATIONCURVE_T3046754366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationCurve
struct  AnimationCurve_t3046754366  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_t3046754366, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t3046754366_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t3046754366_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // ANIMATIONCURVE_T3046754366_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef ANIMATIONEVENTSOURCE_T3045280095_H
#define ANIMATIONEVENTSOURCE_T3045280095_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationEventSource
struct  AnimationEventSource_t3045280095 
{
public:
	// System.Int32 UnityEngine.AnimationEventSource::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AnimationEventSource_t3045280095, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONEVENTSOURCE_T3045280095_H
#ifndef PLAYABLEHANDLE_T1095853803_H
#define PLAYABLEHANDLE_T1095853803_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableHandle
struct  PlayableHandle_t1095853803 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableHandle::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableHandle_t1095853803, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableHandle_t1095853803, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEHANDLE_T1095853803_H
#ifndef INVALIDCASTEXCEPTION_T3927145244_H
#define INVALIDCASTEXCEPTION_T3927145244_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidCastException
struct  InvalidCastException_t3927145244  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDCASTEXCEPTION_T3927145244_H
#ifndef ANIMATIONBLENDMODE_T656007753_H
#define ANIMATIONBLENDMODE_T656007753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationBlendMode
struct  AnimationBlendMode_t656007753 
{
public:
	// System.Int32 UnityEngine.AnimationBlendMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AnimationBlendMode_t656007753, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONBLENDMODE_T656007753_H
#ifndef WRAPMODE_T730450702_H
#define WRAPMODE_T730450702_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WrapMode
struct  WrapMode_t730450702 
{
public:
	// System.Int32 UnityEngine.WrapMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(WrapMode_t730450702, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRAPMODE_T730450702_H
#ifndef PLAYMODE_T3051407859_H
#define PLAYMODE_T3051407859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PlayMode
struct  PlayMode_t3051407859 
{
public:
	// System.Int32 UnityEngine.PlayMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PlayMode_t3051407859, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYMODE_T3051407859_H
#ifndef BOUNDS_T2266837910_H
#define BOUNDS_T2266837910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Bounds
struct  Bounds_t2266837910 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t3722313464  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t3722313464  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t2266837910, ___m_Center_0)); }
	inline Vector3_t3722313464  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t3722313464 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t3722313464  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t2266837910, ___m_Extents_1)); }
	inline Vector3_t3722313464  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t3722313464 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t3722313464  value)
	{
		___m_Extents_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDS_T2266837910_H
#ifndef ANIMATIONCULLINGTYPE_T4202248747_H
#define ANIMATIONCULLINGTYPE_T4202248747_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationCullingType
struct  AnimationCullingType_t4202248747 
{
public:
	// System.Int32 UnityEngine.AnimationCullingType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AnimationCullingType_t4202248747, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONCULLINGTYPE_T4202248747_H
#ifndef QUEUEMODE_T4140807126_H
#define QUEUEMODE_T4140807126_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.QueueMode
struct  QueueMode_t4140807126 
{
public:
	// System.Int32 UnityEngine.QueueMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(QueueMode_t4140807126, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUEUEMODE_T4140807126_H
#ifndef TRACKEDREFERENCE_T1199777556_H
#define TRACKEDREFERENCE_T1199777556_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TrackedReference
struct  TrackedReference_t1199777556  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.TrackedReference::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(TrackedReference_t1199777556, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.TrackedReference
struct TrackedReference_t1199777556_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.TrackedReference
struct TrackedReference_t1199777556_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // TRACKEDREFERENCE_T1199777556_H
#ifndef HUMANBONE_T2465339518_H
#define HUMANBONE_T2465339518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HumanBone
struct  HumanBone_t2465339518 
{
public:
	// System.String UnityEngine.HumanBone::m_BoneName
	String_t* ___m_BoneName_0;
	// System.String UnityEngine.HumanBone::m_HumanName
	String_t* ___m_HumanName_1;
	// UnityEngine.HumanLimit UnityEngine.HumanBone::limit
	HumanLimit_t2901552972  ___limit_2;

public:
	inline static int32_t get_offset_of_m_BoneName_0() { return static_cast<int32_t>(offsetof(HumanBone_t2465339518, ___m_BoneName_0)); }
	inline String_t* get_m_BoneName_0() const { return ___m_BoneName_0; }
	inline String_t** get_address_of_m_BoneName_0() { return &___m_BoneName_0; }
	inline void set_m_BoneName_0(String_t* value)
	{
		___m_BoneName_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_BoneName_0), value);
	}

	inline static int32_t get_offset_of_m_HumanName_1() { return static_cast<int32_t>(offsetof(HumanBone_t2465339518, ___m_HumanName_1)); }
	inline String_t* get_m_HumanName_1() const { return ___m_HumanName_1; }
	inline String_t** get_address_of_m_HumanName_1() { return &___m_HumanName_1; }
	inline void set_m_HumanName_1(String_t* value)
	{
		___m_HumanName_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_HumanName_1), value);
	}

	inline static int32_t get_offset_of_limit_2() { return static_cast<int32_t>(offsetof(HumanBone_t2465339518, ___limit_2)); }
	inline HumanLimit_t2901552972  get_limit_2() const { return ___limit_2; }
	inline HumanLimit_t2901552972 * get_address_of_limit_2() { return &___limit_2; }
	inline void set_limit_2(HumanLimit_t2901552972  value)
	{
		___limit_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.HumanBone
struct HumanBone_t2465339518_marshaled_pinvoke
{
	char* ___m_BoneName_0;
	char* ___m_HumanName_1;
	HumanLimit_t2901552972  ___limit_2;
};
// Native definition for COM marshalling of UnityEngine.HumanBone
struct HumanBone_t2465339518_marshaled_com
{
	Il2CppChar* ___m_BoneName_0;
	Il2CppChar* ___m_HumanName_1;
	HumanLimit_t2901552972  ___limit_2;
};
#endif // HUMANBONE_T2465339518_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t426314064 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t426314064 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef MOTION_T1110556653_H
#define MOTION_T1110556653_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Motion
struct  Motion_t1110556653  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOTION_T1110556653_H
#ifndef SCRIPTABLEOBJECT_T2528358522_H
#define SCRIPTABLEOBJECT_T2528358522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t2528358522  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_pinvoke : public Object_t631007953_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_com : public Object_t631007953_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T2528358522_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef ANIMATIONEVENT_T1536042487_H
#define ANIMATIONEVENT_T1536042487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationEvent
struct  AnimationEvent_t1536042487  : public RuntimeObject
{
public:
	// System.Single UnityEngine.AnimationEvent::m_Time
	float ___m_Time_0;
	// System.String UnityEngine.AnimationEvent::m_FunctionName
	String_t* ___m_FunctionName_1;
	// System.String UnityEngine.AnimationEvent::m_StringParameter
	String_t* ___m_StringParameter_2;
	// UnityEngine.Object UnityEngine.AnimationEvent::m_ObjectReferenceParameter
	Object_t631007953 * ___m_ObjectReferenceParameter_3;
	// System.Single UnityEngine.AnimationEvent::m_FloatParameter
	float ___m_FloatParameter_4;
	// System.Int32 UnityEngine.AnimationEvent::m_IntParameter
	int32_t ___m_IntParameter_5;
	// System.Int32 UnityEngine.AnimationEvent::m_MessageOptions
	int32_t ___m_MessageOptions_6;
	// UnityEngine.AnimationEventSource UnityEngine.AnimationEvent::m_Source
	int32_t ___m_Source_7;
	// UnityEngine.AnimationState UnityEngine.AnimationEvent::m_StateSender
	AnimationState_t1108360407 * ___m_StateSender_8;
	// UnityEngine.AnimatorStateInfo UnityEngine.AnimationEvent::m_AnimatorStateInfo
	AnimatorStateInfo_t509032636  ___m_AnimatorStateInfo_9;
	// UnityEngine.AnimatorClipInfo UnityEngine.AnimationEvent::m_AnimatorClipInfo
	AnimatorClipInfo_t3156717155  ___m_AnimatorClipInfo_10;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(AnimationEvent_t1536042487, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_FunctionName_1() { return static_cast<int32_t>(offsetof(AnimationEvent_t1536042487, ___m_FunctionName_1)); }
	inline String_t* get_m_FunctionName_1() const { return ___m_FunctionName_1; }
	inline String_t** get_address_of_m_FunctionName_1() { return &___m_FunctionName_1; }
	inline void set_m_FunctionName_1(String_t* value)
	{
		___m_FunctionName_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_FunctionName_1), value);
	}

	inline static int32_t get_offset_of_m_StringParameter_2() { return static_cast<int32_t>(offsetof(AnimationEvent_t1536042487, ___m_StringParameter_2)); }
	inline String_t* get_m_StringParameter_2() const { return ___m_StringParameter_2; }
	inline String_t** get_address_of_m_StringParameter_2() { return &___m_StringParameter_2; }
	inline void set_m_StringParameter_2(String_t* value)
	{
		___m_StringParameter_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_StringParameter_2), value);
	}

	inline static int32_t get_offset_of_m_ObjectReferenceParameter_3() { return static_cast<int32_t>(offsetof(AnimationEvent_t1536042487, ___m_ObjectReferenceParameter_3)); }
	inline Object_t631007953 * get_m_ObjectReferenceParameter_3() const { return ___m_ObjectReferenceParameter_3; }
	inline Object_t631007953 ** get_address_of_m_ObjectReferenceParameter_3() { return &___m_ObjectReferenceParameter_3; }
	inline void set_m_ObjectReferenceParameter_3(Object_t631007953 * value)
	{
		___m_ObjectReferenceParameter_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_ObjectReferenceParameter_3), value);
	}

	inline static int32_t get_offset_of_m_FloatParameter_4() { return static_cast<int32_t>(offsetof(AnimationEvent_t1536042487, ___m_FloatParameter_4)); }
	inline float get_m_FloatParameter_4() const { return ___m_FloatParameter_4; }
	inline float* get_address_of_m_FloatParameter_4() { return &___m_FloatParameter_4; }
	inline void set_m_FloatParameter_4(float value)
	{
		___m_FloatParameter_4 = value;
	}

	inline static int32_t get_offset_of_m_IntParameter_5() { return static_cast<int32_t>(offsetof(AnimationEvent_t1536042487, ___m_IntParameter_5)); }
	inline int32_t get_m_IntParameter_5() const { return ___m_IntParameter_5; }
	inline int32_t* get_address_of_m_IntParameter_5() { return &___m_IntParameter_5; }
	inline void set_m_IntParameter_5(int32_t value)
	{
		___m_IntParameter_5 = value;
	}

	inline static int32_t get_offset_of_m_MessageOptions_6() { return static_cast<int32_t>(offsetof(AnimationEvent_t1536042487, ___m_MessageOptions_6)); }
	inline int32_t get_m_MessageOptions_6() const { return ___m_MessageOptions_6; }
	inline int32_t* get_address_of_m_MessageOptions_6() { return &___m_MessageOptions_6; }
	inline void set_m_MessageOptions_6(int32_t value)
	{
		___m_MessageOptions_6 = value;
	}

	inline static int32_t get_offset_of_m_Source_7() { return static_cast<int32_t>(offsetof(AnimationEvent_t1536042487, ___m_Source_7)); }
	inline int32_t get_m_Source_7() const { return ___m_Source_7; }
	inline int32_t* get_address_of_m_Source_7() { return &___m_Source_7; }
	inline void set_m_Source_7(int32_t value)
	{
		___m_Source_7 = value;
	}

	inline static int32_t get_offset_of_m_StateSender_8() { return static_cast<int32_t>(offsetof(AnimationEvent_t1536042487, ___m_StateSender_8)); }
	inline AnimationState_t1108360407 * get_m_StateSender_8() const { return ___m_StateSender_8; }
	inline AnimationState_t1108360407 ** get_address_of_m_StateSender_8() { return &___m_StateSender_8; }
	inline void set_m_StateSender_8(AnimationState_t1108360407 * value)
	{
		___m_StateSender_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_StateSender_8), value);
	}

	inline static int32_t get_offset_of_m_AnimatorStateInfo_9() { return static_cast<int32_t>(offsetof(AnimationEvent_t1536042487, ___m_AnimatorStateInfo_9)); }
	inline AnimatorStateInfo_t509032636  get_m_AnimatorStateInfo_9() const { return ___m_AnimatorStateInfo_9; }
	inline AnimatorStateInfo_t509032636 * get_address_of_m_AnimatorStateInfo_9() { return &___m_AnimatorStateInfo_9; }
	inline void set_m_AnimatorStateInfo_9(AnimatorStateInfo_t509032636  value)
	{
		___m_AnimatorStateInfo_9 = value;
	}

	inline static int32_t get_offset_of_m_AnimatorClipInfo_10() { return static_cast<int32_t>(offsetof(AnimationEvent_t1536042487, ___m_AnimatorClipInfo_10)); }
	inline AnimatorClipInfo_t3156717155  get_m_AnimatorClipInfo_10() const { return ___m_AnimatorClipInfo_10; }
	inline AnimatorClipInfo_t3156717155 * get_address_of_m_AnimatorClipInfo_10() { return &___m_AnimatorClipInfo_10; }
	inline void set_m_AnimatorClipInfo_10(AnimatorClipInfo_t3156717155  value)
	{
		___m_AnimatorClipInfo_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AnimationEvent
struct AnimationEvent_t1536042487_marshaled_pinvoke
{
	float ___m_Time_0;
	char* ___m_FunctionName_1;
	char* ___m_StringParameter_2;
	Object_t631007953_marshaled_pinvoke ___m_ObjectReferenceParameter_3;
	float ___m_FloatParameter_4;
	int32_t ___m_IntParameter_5;
	int32_t ___m_MessageOptions_6;
	int32_t ___m_Source_7;
	AnimationState_t1108360407 * ___m_StateSender_8;
	AnimatorStateInfo_t509032636  ___m_AnimatorStateInfo_9;
	AnimatorClipInfo_t3156717155  ___m_AnimatorClipInfo_10;
};
// Native definition for COM marshalling of UnityEngine.AnimationEvent
struct AnimationEvent_t1536042487_marshaled_com
{
	float ___m_Time_0;
	Il2CppChar* ___m_FunctionName_1;
	Il2CppChar* ___m_StringParameter_2;
	Object_t631007953_marshaled_com* ___m_ObjectReferenceParameter_3;
	float ___m_FloatParameter_4;
	int32_t ___m_IntParameter_5;
	int32_t ___m_MessageOptions_6;
	int32_t ___m_Source_7;
	AnimationState_t1108360407 * ___m_StateSender_8;
	AnimatorStateInfo_t509032636  ___m_AnimatorStateInfo_9;
	AnimatorClipInfo_t3156717155  ___m_AnimatorClipInfo_10;
};
#endif // ANIMATIONEVENT_T1536042487_H
#ifndef ANIMATORCONTROLLERPLAYABLE_T1015767841_H
#define ANIMATORCONTROLLERPLAYABLE_T1015767841_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimatorControllerPlayable
struct  AnimatorControllerPlayable_t1015767841 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimatorControllerPlayable::m_Handle
	PlayableHandle_t1095853803  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimatorControllerPlayable_t1015767841, ___m_Handle_0)); }
	inline PlayableHandle_t1095853803  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t1095853803 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t1095853803  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimatorControllerPlayable_t1015767841_StaticFields
{
public:
	// UnityEngine.Animations.AnimatorControllerPlayable UnityEngine.Animations.AnimatorControllerPlayable::m_NullPlayable
	AnimatorControllerPlayable_t1015767841  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimatorControllerPlayable_t1015767841_StaticFields, ___m_NullPlayable_1)); }
	inline AnimatorControllerPlayable_t1015767841  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimatorControllerPlayable_t1015767841 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimatorControllerPlayable_t1015767841  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATORCONTROLLERPLAYABLE_T1015767841_H
#ifndef ANIMATIONPLAYABLEOUTPUT_T1918618239_H
#define ANIMATIONPLAYABLEOUTPUT_T1918618239_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationPlayableOutput
struct  AnimationPlayableOutput_t1918618239 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Animations.AnimationPlayableOutput::m_Handle
	PlayableOutputHandle_t4208053793  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationPlayableOutput_t1918618239, ___m_Handle_0)); }
	inline PlayableOutputHandle_t4208053793  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t4208053793 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t4208053793  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONPLAYABLEOUTPUT_T1918618239_H
#ifndef ANIMATIONOFFSETPLAYABLE_T2887420414_H
#define ANIMATIONOFFSETPLAYABLE_T2887420414_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationOffsetPlayable
struct  AnimationOffsetPlayable_t2887420414 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationOffsetPlayable::m_Handle
	PlayableHandle_t1095853803  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationOffsetPlayable_t2887420414, ___m_Handle_0)); }
	inline PlayableHandle_t1095853803  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t1095853803 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t1095853803  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationOffsetPlayable_t2887420414_StaticFields
{
public:
	// UnityEngine.Animations.AnimationOffsetPlayable UnityEngine.Animations.AnimationOffsetPlayable::m_NullPlayable
	AnimationOffsetPlayable_t2887420414  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationOffsetPlayable_t2887420414_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationOffsetPlayable_t2887420414  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationOffsetPlayable_t2887420414 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationOffsetPlayable_t2887420414  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONOFFSETPLAYABLE_T2887420414_H
#ifndef ANIMATIONMOTIONXTODELTAPLAYABLE_T272231551_H
#define ANIMATIONMOTIONXTODELTAPLAYABLE_T272231551_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationMotionXToDeltaPlayable
struct  AnimationMotionXToDeltaPlayable_t272231551 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMotionXToDeltaPlayable::m_Handle
	PlayableHandle_t1095853803  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationMotionXToDeltaPlayable_t272231551, ___m_Handle_0)); }
	inline PlayableHandle_t1095853803  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t1095853803 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t1095853803  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONMOTIONXTODELTAPLAYABLE_T272231551_H
#ifndef ANIMATIONMIXERPLAYABLE_T821371386_H
#define ANIMATIONMIXERPLAYABLE_T821371386_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationMixerPlayable
struct  AnimationMixerPlayable_t821371386 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMixerPlayable::m_Handle
	PlayableHandle_t1095853803  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationMixerPlayable_t821371386, ___m_Handle_0)); }
	inline PlayableHandle_t1095853803  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t1095853803 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t1095853803  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONMIXERPLAYABLE_T821371386_H
#ifndef ANIMATORCONTROLLERPARAMETER_T1758260042_H
#define ANIMATORCONTROLLERPARAMETER_T1758260042_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorControllerParameter
struct  AnimatorControllerParameter_t1758260042  : public RuntimeObject
{
public:
	// System.String UnityEngine.AnimatorControllerParameter::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.AnimatorControllerParameterType UnityEngine.AnimatorControllerParameter::m_Type
	int32_t ___m_Type_1;
	// System.Single UnityEngine.AnimatorControllerParameter::m_DefaultFloat
	float ___m_DefaultFloat_2;
	// System.Int32 UnityEngine.AnimatorControllerParameter::m_DefaultInt
	int32_t ___m_DefaultInt_3;
	// System.Boolean UnityEngine.AnimatorControllerParameter::m_DefaultBool
	bool ___m_DefaultBool_4;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(AnimatorControllerParameter_t1758260042, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Name_0), value);
	}

	inline static int32_t get_offset_of_m_Type_1() { return static_cast<int32_t>(offsetof(AnimatorControllerParameter_t1758260042, ___m_Type_1)); }
	inline int32_t get_m_Type_1() const { return ___m_Type_1; }
	inline int32_t* get_address_of_m_Type_1() { return &___m_Type_1; }
	inline void set_m_Type_1(int32_t value)
	{
		___m_Type_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultFloat_2() { return static_cast<int32_t>(offsetof(AnimatorControllerParameter_t1758260042, ___m_DefaultFloat_2)); }
	inline float get_m_DefaultFloat_2() const { return ___m_DefaultFloat_2; }
	inline float* get_address_of_m_DefaultFloat_2() { return &___m_DefaultFloat_2; }
	inline void set_m_DefaultFloat_2(float value)
	{
		___m_DefaultFloat_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultInt_3() { return static_cast<int32_t>(offsetof(AnimatorControllerParameter_t1758260042, ___m_DefaultInt_3)); }
	inline int32_t get_m_DefaultInt_3() const { return ___m_DefaultInt_3; }
	inline int32_t* get_address_of_m_DefaultInt_3() { return &___m_DefaultInt_3; }
	inline void set_m_DefaultInt_3(int32_t value)
	{
		___m_DefaultInt_3 = value;
	}

	inline static int32_t get_offset_of_m_DefaultBool_4() { return static_cast<int32_t>(offsetof(AnimatorControllerParameter_t1758260042, ___m_DefaultBool_4)); }
	inline bool get_m_DefaultBool_4() const { return ___m_DefaultBool_4; }
	inline bool* get_address_of_m_DefaultBool_4() { return &___m_DefaultBool_4; }
	inline void set_m_DefaultBool_4(bool value)
	{
		___m_DefaultBool_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATORCONTROLLERPARAMETER_T1758260042_H
#ifndef ARGUMENTNULLEXCEPTION_T1615371798_H
#define ARGUMENTNULLEXCEPTION_T1615371798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t1615371798  : public ArgumentException_t132251570
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T1615371798_H
#ifndef AVATAR_T2902216466_H
#define AVATAR_T2902216466_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Avatar
struct  Avatar_t2902216466  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AVATAR_T2902216466_H
#ifndef RUNTIMEANIMATORCONTROLLER_T2933699135_H
#define RUNTIMEANIMATORCONTROLLER_T2933699135_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RuntimeAnimatorController
struct  RuntimeAnimatorController_t2933699135  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEANIMATORCONTROLLER_T2933699135_H
#ifndef ANIMATIONCLIPPLAYABLE_T3189118652_H
#define ANIMATIONCLIPPLAYABLE_T3189118652_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationClipPlayable
struct  AnimationClipPlayable_t3189118652 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationClipPlayable::m_Handle
	PlayableHandle_t1095853803  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationClipPlayable_t3189118652, ___m_Handle_0)); }
	inline PlayableHandle_t1095853803  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t1095853803 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t1095853803  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONCLIPPLAYABLE_T3189118652_H
#ifndef ANIMATIONSTATE_T1108360407_H
#define ANIMATIONSTATE_T1108360407_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationState
struct  AnimationState_t1108360407  : public TrackedReference_t1199777556
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONSTATE_T1108360407_H
#ifndef ANIMATIONLAYERMIXERPLAYABLE_T3631223897_H
#define ANIMATIONLAYERMIXERPLAYABLE_T3631223897_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationLayerMixerPlayable
struct  AnimationLayerMixerPlayable_t3631223897 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationLayerMixerPlayable::m_Handle
	PlayableHandle_t1095853803  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationLayerMixerPlayable_t3631223897, ___m_Handle_0)); }
	inline PlayableHandle_t1095853803  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t1095853803 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t1095853803  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationLayerMixerPlayable_t3631223897_StaticFields
{
public:
	// UnityEngine.Animations.AnimationLayerMixerPlayable UnityEngine.Animations.AnimationLayerMixerPlayable::m_NullPlayable
	AnimationLayerMixerPlayable_t3631223897  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationLayerMixerPlayable_t3631223897_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationLayerMixerPlayable_t3631223897  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationLayerMixerPlayable_t3631223897 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationLayerMixerPlayable_t3631223897  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONLAYERMIXERPLAYABLE_T3631223897_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef STATEMACHINEBEHAVIOUR_T957311111_H
#define STATEMACHINEBEHAVIOUR_T957311111_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.StateMachineBehaviour
struct  StateMachineBehaviour_t957311111  : public ScriptableObject_t2528358522
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATEMACHINEBEHAVIOUR_T957311111_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef ANIMATIONCLIP_T2318505987_H
#define ANIMATIONCLIP_T2318505987_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationClip
struct  AnimationClip_t2318505987  : public Motion_t1110556653
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONCLIP_T2318505987_H
#ifndef ANIMATOR_T434523843_H
#define ANIMATOR_T434523843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animator
struct  Animator_t434523843  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATOR_T434523843_H
#ifndef ANIMATION_T3648466861_H
#define ANIMATION_T3648466861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animation
struct  Animation_t3648466861  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATION_T3648466861_H
// UnityEngine.AnimationEvent[]
struct AnimationEventU5BU5D_t1574357070  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AnimationEvent_t1536042487 * m_Items[1];

public:
	inline AnimationEvent_t1536042487 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AnimationEvent_t1536042487 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AnimationEvent_t1536042487 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline AnimationEvent_t1536042487 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AnimationEvent_t1536042487 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AnimationEvent_t1536042487 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.StateMachineBehaviour[]
struct StateMachineBehaviourU5BU5D_t1747573118  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) StateMachineBehaviour_t957311111 * m_Items[1];

public:
	inline StateMachineBehaviour_t957311111 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StateMachineBehaviour_t957311111 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StateMachineBehaviour_t957311111 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline StateMachineBehaviour_t957311111 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StateMachineBehaviour_t957311111 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StateMachineBehaviour_t957311111 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.AnimatorClipInfo[]
struct AnimatorClipInfoU5BU5D_t855299250  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AnimatorClipInfo_t3156717155  m_Items[1];

public:
	inline AnimatorClipInfo_t3156717155  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AnimatorClipInfo_t3156717155 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AnimatorClipInfo_t3156717155  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline AnimatorClipInfo_t3156717155  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AnimatorClipInfo_t3156717155 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AnimatorClipInfo_t3156717155  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.AnimatorControllerParameter[]
struct AnimatorControllerParameterU5BU5D_t846601295  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AnimatorControllerParameter_t1758260042 * m_Items[1];

public:
	inline AnimatorControllerParameter_t1758260042 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AnimatorControllerParameter_t1758260042 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AnimatorControllerParameter_t1758260042 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline AnimatorControllerParameter_t1758260042 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AnimatorControllerParameter_t1758260042 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AnimatorControllerParameter_t1758260042 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};

extern "C" void Object_t631007953_marshal_pinvoke(const Object_t631007953& unmarshaled, Object_t631007953_marshaled_pinvoke& marshaled);
extern "C" void Object_t631007953_marshal_pinvoke_back(const Object_t631007953_marshaled_pinvoke& marshaled, Object_t631007953& unmarshaled);
extern "C" void Object_t631007953_marshal_pinvoke_cleanup(Object_t631007953_marshaled_pinvoke& marshaled);
extern "C" void Object_t631007953_marshal_com(const Object_t631007953& unmarshaled, Object_t631007953_marshaled_com& marshaled);
extern "C" void Object_t631007953_marshal_com_back(const Object_t631007953_marshaled_com& marshaled, Object_t631007953& unmarshaled);
extern "C" void Object_t631007953_marshal_com_cleanup(Object_t631007953_marshaled_com& marshaled);

// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationLayerMixerPlayable>()
extern "C" IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_t3631223897_m201603007_gshared (PlayableHandle_t1095853803 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationOffsetPlayable>()
extern "C" IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t2887420414_m2033286094_gshared (PlayableHandle_t1095853803 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimatorControllerPlayable>()
extern "C" IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_t1015767841_m3416945299_gshared (PlayableHandle_t1095853803 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.Behaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Behaviour__ctor_m346897018 (Behaviour_t1437897464 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Animation::INTERNAL_CALL_Stop(UnityEngine.Animation)
extern "C" IL2CPP_METHOD_ATTR void Animation_INTERNAL_CALL_Stop_m1587721271 (RuntimeObject * __this /* static, unused */, Animation_t3648466861 * ___self0, const RuntimeMethod* method);
// System.Void UnityEngine.Animation::Internal_StopByName(System.String)
extern "C" IL2CPP_METHOD_ATTR void Animation_Internal_StopByName_m2571804745 (Animation_t3648466861 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Animation::Internal_RewindByName(System.String)
extern "C" IL2CPP_METHOD_ATTR void Animation_Internal_RewindByName_m3260795103 (Animation_t3648466861 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Animation::INTERNAL_CALL_Rewind(UnityEngine.Animation)
extern "C" IL2CPP_METHOD_ATTR void Animation_INTERNAL_CALL_Rewind_m3833711821 (RuntimeObject * __this /* static, unused */, Animation_t3648466861 * ___self0, const RuntimeMethod* method);
// System.Void UnityEngine.Animation::INTERNAL_CALL_Sample(UnityEngine.Animation)
extern "C" IL2CPP_METHOD_ATTR void Animation_INTERNAL_CALL_Sample_m1174923994 (RuntimeObject * __this /* static, unused */, Animation_t3648466861 * ___self0, const RuntimeMethod* method);
// UnityEngine.AnimationState UnityEngine.Animation::GetState(System.String)
extern "C" IL2CPP_METHOD_ATTR AnimationState_t1108360407 * Animation_GetState_m2252204496 (Animation_t3648466861 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animation::Play(UnityEngine.PlayMode)
extern "C" IL2CPP_METHOD_ATTR bool Animation_Play_m577412913 (Animation_t3648466861 * __this, int32_t ___mode0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animation::PlayDefaultAnimation(UnityEngine.PlayMode)
extern "C" IL2CPP_METHOD_ATTR bool Animation_PlayDefaultAnimation_m3369546080 (Animation_t3648466861 * __this, int32_t ___mode0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animation::Play(System.String,UnityEngine.PlayMode)
extern "C" IL2CPP_METHOD_ATTR bool Animation_Play_m10633183 (Animation_t3648466861 * __this, String_t* ___animation0, int32_t ___mode1, const RuntimeMethod* method);
// System.Void UnityEngine.Animation::CrossFade(System.String,System.Single,UnityEngine.PlayMode)
extern "C" IL2CPP_METHOD_ATTR void Animation_CrossFade_m3062450341 (Animation_t3648466861 * __this, String_t* ___animation0, float ___fadeLength1, int32_t ___mode2, const RuntimeMethod* method);
// System.Void UnityEngine.Animation::Blend(System.String,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animation_Blend_m1353791016 (Animation_t3648466861 * __this, String_t* ___animation0, float ___targetWeight1, float ___fadeLength2, const RuntimeMethod* method);
// UnityEngine.AnimationState UnityEngine.Animation::CrossFadeQueued(System.String,System.Single,UnityEngine.QueueMode,UnityEngine.PlayMode)
extern "C" IL2CPP_METHOD_ATTR AnimationState_t1108360407 * Animation_CrossFadeQueued_m1554946458 (Animation_t3648466861 * __this, String_t* ___animation0, float ___fadeLength1, int32_t ___queue2, int32_t ___mode3, const RuntimeMethod* method);
// UnityEngine.AnimationState UnityEngine.Animation::PlayQueued(System.String,UnityEngine.QueueMode,UnityEngine.PlayMode)
extern "C" IL2CPP_METHOD_ATTR AnimationState_t1108360407 * Animation_PlayQueued_m613765632 (Animation_t3648466861 * __this, String_t* ___animation0, int32_t ___queue1, int32_t ___mode2, const RuntimeMethod* method);
// System.Void UnityEngine.Animation::AddClip(UnityEngine.AnimationClip,System.String,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Animation_AddClip_m131581775 (Animation_t3648466861 * __this, AnimationClip_t2318505987 * ___clip0, String_t* ___newName1, int32_t ___firstFrame2, int32_t ___lastFrame3, const RuntimeMethod* method);
// System.Void UnityEngine.Animation::AddClip(UnityEngine.AnimationClip,System.String,System.Int32,System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Animation_AddClip_m2043891899 (Animation_t3648466861 * __this, AnimationClip_t2318505987 * ___clip0, String_t* ___newName1, int32_t ___firstFrame2, int32_t ___lastFrame3, bool ___addLoopFrame4, const RuntimeMethod* method);
// System.Void UnityEngine.Animation::RemoveClip2(System.String)
extern "C" IL2CPP_METHOD_ATTR void Animation_RemoveClip2_m384163394 (Animation_t3648466861 * __this, String_t* ___clipName0, const RuntimeMethod* method);
// System.Void UnityEngine.Animation::INTERNAL_CALL_SyncLayer(UnityEngine.Animation,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Animation_INTERNAL_CALL_SyncLayer_m2483795310 (RuntimeObject * __this /* static, unused */, Animation_t3648466861 * ___self0, int32_t ___layer1, const RuntimeMethod* method);
// System.Void UnityEngine.Animation/Enumerator::.ctor(UnityEngine.Animation)
extern "C" IL2CPP_METHOD_ATTR void Enumerator__ctor_m1737537150 (Enumerator_t1136361084 * __this, Animation_t3648466861 * ___outer0, const RuntimeMethod* method);
// System.Boolean UnityEngine.TrackedReference::op_Implicit(UnityEngine.TrackedReference)
extern "C" IL2CPP_METHOD_ATTR bool TrackedReference_op_Implicit_m166179420 (RuntimeObject * __this /* static, unused */, TrackedReference_t1199777556 * p0, const RuntimeMethod* method);
// UnityEngine.AnimationClip UnityEngine.AnimationState::get_clip()
extern "C" IL2CPP_METHOD_ATTR AnimationClip_t2318505987 * AnimationState_get_clip_m3280372436 (AnimationState_t1108360407 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Animation::INTERNAL_get_localBounds(UnityEngine.Bounds&)
extern "C" IL2CPP_METHOD_ATTR void Animation_INTERNAL_get_localBounds_m603415822 (Animation_t3648466861 * __this, Bounds_t2266837910 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Animation::INTERNAL_set_localBounds(UnityEngine.Bounds&)
extern "C" IL2CPP_METHOD_ATTR void Animation_INTERNAL_set_localBounds_m731214248 (Animation_t3648466861 * __this, Bounds_t2266837910 * ___value0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.AnimationState UnityEngine.Animation::GetStateAtIndex(System.Int32)
extern "C" IL2CPP_METHOD_ATTR AnimationState_t1108360407 * Animation_GetStateAtIndex_m3906320186 (Animation_t3648466861 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Animation::GetStateCount()
extern "C" IL2CPP_METHOD_ATTR int32_t Animation_GetStateCount_m3809146648 (Animation_t3648466861 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Motion::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Motion__ctor_m1337281595 (Motion_t1110556653 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationClip::Internal_CreateAnimationClip(UnityEngine.AnimationClip)
extern "C" IL2CPP_METHOD_ATTR void AnimationClip_Internal_CreateAnimationClip_m2711711193 (RuntimeObject * __this /* static, unused */, AnimationClip_t2318505987 * ___self0, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationClip::INTERNAL_CALL_EnsureQuaternionContinuity(UnityEngine.AnimationClip)
extern "C" IL2CPP_METHOD_ATTR void AnimationClip_INTERNAL_CALL_EnsureQuaternionContinuity_m2697853944 (RuntimeObject * __this /* static, unused */, AnimationClip_t2318505987 * ___self0, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationClip::INTERNAL_CALL_ClearCurves(UnityEngine.AnimationClip)
extern "C" IL2CPP_METHOD_ATTR void AnimationClip_INTERNAL_CALL_ClearCurves_m3477964794 (RuntimeObject * __this /* static, unused */, AnimationClip_t2318505987 * ___self0, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationClip::INTERNAL_get_localBounds(UnityEngine.Bounds&)
extern "C" IL2CPP_METHOD_ATTR void AnimationClip_INTERNAL_get_localBounds_m1463573593 (AnimationClip_t2318505987 * __this, Bounds_t2266837910 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationClip::INTERNAL_set_localBounds(UnityEngine.Bounds&)
extern "C" IL2CPP_METHOD_ATTR void AnimationClip_INTERNAL_set_localBounds_m654473758 (AnimationClip_t2318505987 * __this, Bounds_t2266837910 * ___value0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m1170824041 (ArgumentNullException_t1615371798 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationClip::AddEventInternal(System.Object)
extern "C" IL2CPP_METHOD_ATTR void AnimationClip_AddEventInternal_m2044999587 (AnimationClip_t2318505987 * __this, RuntimeObject * ___evt0, const RuntimeMethod* method);
// System.Array UnityEngine.AnimationClip::GetEventsInternal()
extern "C" IL2CPP_METHOD_ATTR RuntimeArray * AnimationClip_GetEventsInternal_m1187308418 (AnimationClip_t2318505987 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationClip::SetEventsInternal(System.Array)
extern "C" IL2CPP_METHOD_ATTR void AnimationClip_SetEventsInternal_m1082453756 (AnimationClip_t2318505987 * __this, RuntimeArray * ___value0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationClipPlayable::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t1095853803  AnimationClipPlayable_GetHandle_m3441351653 (AnimationClipPlayable_t3189118652 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::op_Equality(UnityEngine.Playables.PlayableHandle,UnityEngine.Playables.PlayableHandle)
extern "C" IL2CPP_METHOD_ATTR bool PlayableHandle_op_Equality_m3344837515 (RuntimeObject * __this /* static, unused */, PlayableHandle_t1095853803  p0, PlayableHandle_t1095853803  p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationClipPlayable::Equals(UnityEngine.Animations.AnimationClipPlayable)
extern "C" IL2CPP_METHOD_ATTR bool AnimationClipPlayable_Equals_m1031707451 (AnimationClipPlayable_t3189118652 * __this, AnimationClipPlayable_t3189118652  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsValid()
extern "C" IL2CPP_METHOD_ATTR bool PlayableHandle_IsValid_m777349566 (PlayableHandle_t1095853803 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationLayerMixerPlayable>()
#define PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_t3631223897_m201603007(__this, method) ((  bool (*) (PlayableHandle_t1095853803 *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_t3631223897_m201603007_gshared)(__this, method)
// System.Void System.InvalidCastException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void InvalidCastException__ctor_m318645277 (InvalidCastException_t3927145244 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
extern "C" IL2CPP_METHOD_ATTR void AnimationLayerMixerPlayable__ctor_m860721801 (AnimationLayerMixerPlayable_t3631223897 * __this, PlayableHandle_t1095853803  ___handle0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationLayerMixerPlayable::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t1095853803  AnimationLayerMixerPlayable_GetHandle_m3854437798 (AnimationLayerMixerPlayable_t3631223897 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationLayerMixerPlayable::Equals(UnityEngine.Animations.AnimationLayerMixerPlayable)
extern "C" IL2CPP_METHOD_ATTR bool AnimationLayerMixerPlayable_Equals_m4271416323 (AnimationLayerMixerPlayable_t3631223897 * __this, AnimationLayerMixerPlayable_t3631223897  ___other0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::get_Null()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t1095853803  PlayableHandle_get_Null_m218234861 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMixerPlayable::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t1095853803  AnimationMixerPlayable_GetHandle_m2198358075 (AnimationMixerPlayable_t821371386 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationMixerPlayable::Equals(UnityEngine.Animations.AnimationMixerPlayable)
extern "C" IL2CPP_METHOD_ATTR bool AnimationMixerPlayable_Equals_m3971478909 (AnimationMixerPlayable_t821371386 * __this, AnimationMixerPlayable_t821371386  ___other0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMotionXToDeltaPlayable::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t1095853803  AnimationMotionXToDeltaPlayable_GetHandle_m1319190040 (AnimationMotionXToDeltaPlayable_t272231551 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationMotionXToDeltaPlayable::Equals(UnityEngine.Animations.AnimationMotionXToDeltaPlayable)
extern "C" IL2CPP_METHOD_ATTR bool AnimationMotionXToDeltaPlayable_Equals_m3896842955 (AnimationMotionXToDeltaPlayable_t272231551 * __this, AnimationMotionXToDeltaPlayable_t272231551  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationOffsetPlayable>()
#define PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t2887420414_m2033286094(__this, method) ((  bool (*) (PlayableHandle_t1095853803 *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t2887420414_m2033286094_gshared)(__this, method)
// System.Void UnityEngine.Animations.AnimationOffsetPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
extern "C" IL2CPP_METHOD_ATTR void AnimationOffsetPlayable__ctor_m577157274 (AnimationOffsetPlayable_t2887420414 * __this, PlayableHandle_t1095853803  ___handle0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationOffsetPlayable::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t1095853803  AnimationOffsetPlayable_GetHandle_m449079993 (AnimationOffsetPlayable_t2887420414 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationOffsetPlayable::Equals(UnityEngine.Animations.AnimationOffsetPlayable)
extern "C" IL2CPP_METHOD_ATTR bool AnimationOffsetPlayable_Equals_m2902253045 (AnimationOffsetPlayable_t2887420414 * __this, AnimationOffsetPlayable_t2887420414  ___other0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::SetHandle(UnityEngine.Playables.PlayableHandle)
extern "C" IL2CPP_METHOD_ATTR void AnimatorControllerPlayable_SetHandle_m2260644454 (AnimatorControllerPlayable_t1015767841 * __this, PlayableHandle_t1095853803  ___handle0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
extern "C" IL2CPP_METHOD_ATTR void AnimatorControllerPlayable__ctor_m3584989806 (AnimatorControllerPlayable_t1015767841 * __this, PlayableHandle_t1095853803  ___handle0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimatorControllerPlayable::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t1095853803  AnimatorControllerPlayable_GetHandle_m2425630109 (AnimatorControllerPlayable_t1015767841 * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m237278729 (InvalidOperationException_t56020091 * __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimatorControllerPlayable>()
#define PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_t1015767841_m3416945299(__this, method) ((  bool (*) (PlayableHandle_t1095853803 *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_t1015767841_m3416945299_gshared)(__this, method)
// System.Boolean UnityEngine.Animations.AnimatorControllerPlayable::Equals(UnityEngine.Animations.AnimatorControllerPlayable)
extern "C" IL2CPP_METHOD_ATTR bool AnimatorControllerPlayable_Equals_m3421642688 (AnimatorControllerPlayable_t1015767841 * __this, AnimatorControllerPlayable_t1015767841  ___other0, const RuntimeMethod* method);
// System.Void UnityEngine.TrackedReference::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TrackedReference__ctor_m3086593239 (TrackedReference_t1199777556 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationState::AddMixingTransform(UnityEngine.Transform,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void AnimationState_AddMixingTransform_m3342983193 (AnimationState_t1108360407 * __this, Transform_t3600365921 * ___mix0, bool ___recursive1, const RuntimeMethod* method);
// System.Single UnityEngine.Animator::GetFloatString(System.String)
extern "C" IL2CPP_METHOD_ATTR float Animator_GetFloatString_m3180836206 (Animator_t434523843 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Single UnityEngine.Animator::GetFloatID(System.Int32)
extern "C" IL2CPP_METHOD_ATTR float Animator_GetFloatID_m3658774233 (Animator_t434523843 * __this, int32_t ___id0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetFloatString(System.String,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetFloatString_m417479335 (Animator_t434523843 * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetFloatStringDamp(System.String,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetFloatStringDamp_m1913837802 (Animator_t434523843 * __this, String_t* ___name0, float ___value1, float ___dampTime2, float ___deltaTime3, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetFloatID(System.Int32,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetFloatID_m759961653 (Animator_t434523843 * __this, int32_t ___id0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetFloatIDDamp(System.Int32,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetFloatIDDamp_m1611756056 (Animator_t434523843 * __this, int32_t ___id0, float ___value1, float ___dampTime2, float ___deltaTime3, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animator::GetBoolString(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Animator_GetBoolString_m4261382084 (Animator_t434523843 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animator::GetBoolID(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Animator_GetBoolID_m3211650753 (Animator_t434523843 * __this, int32_t ___id0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetBoolString(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetBoolString_m1913721706 (Animator_t434523843 * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetBoolID_m2106676274 (Animator_t434523843 * __this, int32_t ___id0, bool ___value1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Animator::GetIntegerString(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t Animator_GetIntegerString_m2483385635 (Animator_t434523843 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Animator::GetIntegerID(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Animator_GetIntegerID_m3539387357 (Animator_t434523843 * __this, int32_t ___id0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetIntegerString(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetIntegerString_m3069556331 (Animator_t434523843 * __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetIntegerID(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetIntegerID_m1197891907 (Animator_t434523843 * __this, int32_t ___id0, int32_t ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetTriggerString(System.String)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetTriggerString_m2612407758 (Animator_t434523843 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetTriggerID(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetTriggerID_m9043433 (Animator_t434523843 * __this, int32_t ___id0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::ResetTriggerString(System.String)
extern "C" IL2CPP_METHOD_ATTR void Animator_ResetTriggerString_m394341254 (Animator_t434523843 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::ResetTriggerID(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Animator_ResetTriggerID_m1779548927 (Animator_t434523843 * __this, int32_t ___id0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animator::IsParameterControlledByCurveString(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Animator_IsParameterControlledByCurveString_m3449841540 (Animator_t434523843 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animator::IsParameterControlledByCurveID(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Animator_IsParameterControlledByCurveID_m1238520650 (Animator_t434523843 * __this, int32_t ___id0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::INTERNAL_get_deltaPosition(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Animator_INTERNAL_get_deltaPosition_m3497372174 (Animator_t434523843 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::INTERNAL_get_deltaRotation(UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR void Animator_INTERNAL_get_deltaRotation_m909153325 (Animator_t434523843 * __this, Quaternion_t2301928331 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::INTERNAL_get_velocity(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Animator_INTERNAL_get_velocity_m895058586 (Animator_t434523843 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::INTERNAL_get_angularVelocity(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Animator_INTERNAL_get_angularVelocity_m3997922647 (Animator_t434523843 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::INTERNAL_get_rootPosition(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Animator_INTERNAL_get_rootPosition_m4000532020 (Animator_t434523843 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::INTERNAL_set_rootPosition(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Animator_INTERNAL_set_rootPosition_m937559408 (Animator_t434523843 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::INTERNAL_get_rootRotation(UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR void Animator_INTERNAL_get_rootRotation_m1431856062 (Animator_t434523843 * __this, Quaternion_t2301928331 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::INTERNAL_set_rootRotation(UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR void Animator_INTERNAL_set_rootRotation_m2517397836 (Animator_t434523843 * __this, Quaternion_t2301928331 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::CheckIfInIKPass()
extern "C" IL2CPP_METHOD_ATTR void Animator_CheckIfInIKPass_m1701567706 (Animator_t434523843 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Animator::GetBodyPositionInternal()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Animator_GetBodyPositionInternal_m3916025324 (Animator_t434523843 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetBodyPositionInternal(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetBodyPositionInternal_m190439183 (Animator_t434523843 * __this, Vector3_t3722313464  ___bodyPosition0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::INTERNAL_CALL_GetBodyPositionInternal(UnityEngine.Animator,UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Animator_INTERNAL_CALL_GetBodyPositionInternal_m2321400488 (RuntimeObject * __this /* static, unused */, Animator_t434523843 * ___self0, Vector3_t3722313464 * ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::INTERNAL_CALL_SetBodyPositionInternal(UnityEngine.Animator,UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Animator_INTERNAL_CALL_SetBodyPositionInternal_m2953883619 (RuntimeObject * __this /* static, unused */, Animator_t434523843 * ___self0, Vector3_t3722313464 * ___bodyPosition1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Animator::GetBodyRotationInternal()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Animator_GetBodyRotationInternal_m2352017373 (Animator_t434523843 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetBodyRotationInternal(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetBodyRotationInternal_m1739652811 (Animator_t434523843 * __this, Quaternion_t2301928331  ___bodyRotation0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::INTERNAL_CALL_GetBodyRotationInternal(UnityEngine.Animator,UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR void Animator_INTERNAL_CALL_GetBodyRotationInternal_m2466536780 (RuntimeObject * __this /* static, unused */, Animator_t434523843 * ___self0, Quaternion_t2301928331 * ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::INTERNAL_CALL_SetBodyRotationInternal(UnityEngine.Animator,UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR void Animator_INTERNAL_CALL_SetBodyRotationInternal_m4252621940 (RuntimeObject * __this /* static, unused */, Animator_t434523843 * ___self0, Quaternion_t2301928331 * ___bodyRotation1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Animator::GetIKPositionInternal(UnityEngine.AvatarIKGoal)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Animator_GetIKPositionInternal_m125839593 (Animator_t434523843 * __this, int32_t ___goal0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::INTERNAL_CALL_GetIKPositionInternal(UnityEngine.Animator,UnityEngine.AvatarIKGoal,UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Animator_INTERNAL_CALL_GetIKPositionInternal_m4175269722 (RuntimeObject * __this /* static, unused */, Animator_t434523843 * ___self0, int32_t ___goal1, Vector3_t3722313464 * ___value2, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetIKPositionInternal(UnityEngine.AvatarIKGoal,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetIKPositionInternal_m3440485583 (Animator_t434523843 * __this, int32_t ___goal0, Vector3_t3722313464  ___goalPosition1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::INTERNAL_CALL_SetIKPositionInternal(UnityEngine.Animator,UnityEngine.AvatarIKGoal,UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Animator_INTERNAL_CALL_SetIKPositionInternal_m448071741 (RuntimeObject * __this /* static, unused */, Animator_t434523843 * ___self0, int32_t ___goal1, Vector3_t3722313464 * ___goalPosition2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Animator::GetIKRotationInternal(UnityEngine.AvatarIKGoal)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Animator_GetIKRotationInternal_m3867958926 (Animator_t434523843 * __this, int32_t ___goal0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::INTERNAL_CALL_GetIKRotationInternal(UnityEngine.Animator,UnityEngine.AvatarIKGoal,UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR void Animator_INTERNAL_CALL_GetIKRotationInternal_m3385869276 (RuntimeObject * __this /* static, unused */, Animator_t434523843 * ___self0, int32_t ___goal1, Quaternion_t2301928331 * ___value2, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetIKRotationInternal(UnityEngine.AvatarIKGoal,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetIKRotationInternal_m2365419064 (Animator_t434523843 * __this, int32_t ___goal0, Quaternion_t2301928331  ___goalRotation1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::INTERNAL_CALL_SetIKRotationInternal(UnityEngine.Animator,UnityEngine.AvatarIKGoal,UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR void Animator_INTERNAL_CALL_SetIKRotationInternal_m3058115891 (RuntimeObject * __this /* static, unused */, Animator_t434523843 * ___self0, int32_t ___goal1, Quaternion_t2301928331 * ___goalRotation2, const RuntimeMethod* method);
// System.Single UnityEngine.Animator::GetIKPositionWeightInternal(UnityEngine.AvatarIKGoal)
extern "C" IL2CPP_METHOD_ATTR float Animator_GetIKPositionWeightInternal_m3579271787 (Animator_t434523843 * __this, int32_t ___goal0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetIKPositionWeightInternal(UnityEngine.AvatarIKGoal,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetIKPositionWeightInternal_m2208928065 (Animator_t434523843 * __this, int32_t ___goal0, float ___value1, const RuntimeMethod* method);
// System.Single UnityEngine.Animator::GetIKRotationWeightInternal(UnityEngine.AvatarIKGoal)
extern "C" IL2CPP_METHOD_ATTR float Animator_GetIKRotationWeightInternal_m2330604556 (Animator_t434523843 * __this, int32_t ___goal0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetIKRotationWeightInternal(UnityEngine.AvatarIKGoal,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetIKRotationWeightInternal_m358851637 (Animator_t434523843 * __this, int32_t ___goal0, float ___value1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Animator::GetIKHintPositionInternal(UnityEngine.AvatarIKHint)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Animator_GetIKHintPositionInternal_m1487077595 (Animator_t434523843 * __this, int32_t ___hint0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::INTERNAL_CALL_GetIKHintPositionInternal(UnityEngine.Animator,UnityEngine.AvatarIKHint,UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Animator_INTERNAL_CALL_GetIKHintPositionInternal_m1002037478 (RuntimeObject * __this /* static, unused */, Animator_t434523843 * ___self0, int32_t ___hint1, Vector3_t3722313464 * ___value2, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetIKHintPositionInternal(UnityEngine.AvatarIKHint,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetIKHintPositionInternal_m3493246906 (Animator_t434523843 * __this, int32_t ___hint0, Vector3_t3722313464  ___hintPosition1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::INTERNAL_CALL_SetIKHintPositionInternal(UnityEngine.Animator,UnityEngine.AvatarIKHint,UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Animator_INTERNAL_CALL_SetIKHintPositionInternal_m3350640131 (RuntimeObject * __this /* static, unused */, Animator_t434523843 * ___self0, int32_t ___hint1, Vector3_t3722313464 * ___hintPosition2, const RuntimeMethod* method);
// System.Single UnityEngine.Animator::GetHintWeightPositionInternal(UnityEngine.AvatarIKHint)
extern "C" IL2CPP_METHOD_ATTR float Animator_GetHintWeightPositionInternal_m1585346795 (Animator_t434523843 * __this, int32_t ___hint0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetIKHintPositionWeightInternal(UnityEngine.AvatarIKHint,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetIKHintPositionWeightInternal_m381336006 (Animator_t434523843 * __this, int32_t ___hint0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetLookAtPositionInternal(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetLookAtPositionInternal_m1039545480 (Animator_t434523843 * __this, Vector3_t3722313464  ___lookAtPosition0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::INTERNAL_CALL_SetLookAtPositionInternal(UnityEngine.Animator,UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Animator_INTERNAL_CALL_SetLookAtPositionInternal_m921807281 (RuntimeObject * __this /* static, unused */, Animator_t434523843 * ___self0, Vector3_t3722313464 * ___lookAtPosition1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetLookAtWeight(System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetLookAtWeight_m4069750608 (Animator_t434523843 * __this, float ___weight0, float ___bodyWeight1, float ___headWeight2, float ___eyesWeight3, float ___clampWeight4, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetLookAtWeightInternal(System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetLookAtWeightInternal_m1957339916 (Animator_t434523843 * __this, float ___weight0, float ___bodyWeight1, float ___headWeight2, float ___eyesWeight3, float ___clampWeight4, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetBoneLocalRotationInternal(System.Int32,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetBoneLocalRotationInternal_m3358027282 (Animator_t434523843 * __this, int32_t ___humanBoneId0, Quaternion_t2301928331  ___rotation1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::INTERNAL_CALL_SetBoneLocalRotationInternal(UnityEngine.Animator,System.Int32,UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR void Animator_INTERNAL_CALL_SetBoneLocalRotationInternal_m2795698770 (RuntimeObject * __this /* static, unused */, Animator_t434523843 * ___self0, int32_t ___humanBoneId1, Quaternion_t2301928331 * ___rotation2, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method);
// UnityEngine.StateMachineBehaviour[] UnityEngine.Animator::InternalGetBehavioursByKey(System.Int32,System.Int32,System.Type)
extern "C" IL2CPP_METHOD_ATTR StateMachineBehaviourU5BU5D_t1747573118* Animator_InternalGetBehavioursByKey_m3087212251 (Animator_t434523843 * __this, int32_t ___fullPathHash0, int32_t ___layerIndex1, Type_t * ___type2, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::GetAnimatorTransitionInfo(System.Int32,UnityEngine.AnimatorTransitionInfo&)
extern "C" IL2CPP_METHOD_ATTR void Animator_GetAnimatorTransitionInfo_m4215243493 (Animator_t434523843 * __this, int32_t ___layerIndex0, AnimatorTransitionInfo_t2534804151 * ___info1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::GetAnimatorClipInfoInternal(System.Int32,System.Boolean,System.Object)
extern "C" IL2CPP_METHOD_ATTR void Animator_GetAnimatorClipInfoInternal_m1014080763 (Animator_t434523843 * __this, int32_t ___layerIndex0, bool ___isCurrent1, RuntimeObject * ___clips2, const RuntimeMethod* method);
// UnityEngine.AnimatorControllerParameter[] UnityEngine.Animator::get_parameters()
extern "C" IL2CPP_METHOD_ATTR AnimatorControllerParameterU5BU5D_t846601295* Animator_get_parameters_m1100246053 (Animator_t434523843 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.IndexOutOfRangeException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_m3408750441 (IndexOutOfRangeException_t1578797820 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::INTERNAL_get_pivotPosition(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Animator_INTERNAL_get_pivotPosition_m307868141 (Animator_t434523843 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::INTERNAL_CALL_MatchTarget(UnityEngine.Animator,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.AvatarTarget,UnityEngine.MatchTargetWeightMask&,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_INTERNAL_CALL_MatchTarget_m1009381457 (RuntimeObject * __this /* static, unused */, Animator_t434523843 * ___self0, Vector3_t3722313464 * ___matchPosition1, Quaternion_t2301928331 * ___matchRotation2, int32_t ___targetBodyPart3, MatchTargetWeightMask_t554846203 * ___weightMask4, float ___startNormalizedTime5, float ___targetNormalizedTime6, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::InterruptMatchTarget(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Animator_InterruptMatchTarget_m1619794578 (Animator_t434523843 * __this, bool ___completeMatch0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::CrossFadeInFixedTime(System.String,System.Single,System.Int32,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_CrossFadeInFixedTime_m2901818328 (Animator_t434523843 * __this, String_t* ___stateName0, float ___fixedTransitionDuration1, int32_t ___layer2, float ___fixedTimeOffset3, float ___normalizedTransitionTime4, const RuntimeMethod* method);
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t Animator_StringToHash_m1666053228 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::CrossFadeInFixedTime(System.Int32,System.Single,System.Int32,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_CrossFadeInFixedTime_m3847498994 (Animator_t434523843 * __this, int32_t ___stateHashName0, float ___fixedTransitionDuration1, int32_t ___layer2, float ___fixedTimeOffset3, float ___normalizedTransitionTime4, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::CrossFade(System.String,System.Single,System.Int32,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_CrossFade_m633499242 (Animator_t434523843 * __this, String_t* ___stateName0, float ___normalizedTransitionDuration1, int32_t ___layer2, float ___normalizedTimeOffset3, float ___normalizedTransitionTime4, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::CrossFade(System.Int32,System.Single,System.Int32,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_CrossFade_m2328649388 (Animator_t434523843 * __this, int32_t ___stateHashName0, float ___normalizedTransitionDuration1, int32_t ___layer2, float ___normalizedTimeOffset3, float ___normalizedTransitionTime4, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::PlayInFixedTime(System.String,System.Int32,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_PlayInFixedTime_m3866807394 (Animator_t434523843 * __this, String_t* ___stateName0, int32_t ___layer1, float ___fixedTime2, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::PlayInFixedTime(System.Int32,System.Int32,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_PlayInFixedTime_m3646156550 (Animator_t434523843 * __this, int32_t ___stateNameHash0, int32_t ___layer1, float ___fixedTime2, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::Play(System.String,System.Int32,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_Play_m2835034014 (Animator_t434523843 * __this, String_t* ___stateName0, int32_t ___layer1, float ___normalizedTime2, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_Play_m1207279914 (Animator_t434523843 * __this, int32_t ___stateNameHash0, int32_t ___layer1, float ___normalizedTime2, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::INTERNAL_get_targetPosition(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Animator_INTERNAL_get_targetPosition_m1270930816 (Animator_t434523843 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::INTERNAL_get_targetRotation(UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR void Animator_INTERNAL_get_targetRotation_m3838368899 (Animator_t434523843 * __this, Quaternion_t2301928331 * ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Animator::GetBoneTransformInternal(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Animator_GetBoneTransformInternal_m528051545 (Animator_t434523843 * __this, int32_t ___humanBoneId0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::InternalGetCurrentGraph(UnityEngine.Playables.PlayableGraph&)
extern "C" IL2CPP_METHOD_ATTR void Animator_InternalGetCurrentGraph_m900393272 (Animator_t434523843 * __this, PlayableGraph_t3515989261 * ___graph0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::INTERNAL_CALL_InternalGetCurrentGraph(UnityEngine.Animator,UnityEngine.Playables.PlayableGraph&)
extern "C" IL2CPP_METHOD_ATTR void Animator_INTERNAL_CALL_InternalGetCurrentGraph_m533700740 (RuntimeObject * __this /* static, unused */, Animator_t434523843 * ___self0, PlayableGraph_t3515989261 * ___graph1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animator::get_logWarnings()
extern "C" IL2CPP_METHOD_ATTR bool Animator_get_logWarnings_m3175887280 (Animator_t434523843 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animator::CheckIfInIKPassInternal()
extern "C" IL2CPP_METHOD_ATTR bool Animator_CheckIfInIKPassInternal_m973388907 (Animator_t434523843 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogWarning_m3752629331 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.String UnityEngine.AnimatorControllerParameter::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* AnimatorControllerParameter_get_name_m2392457225 (AnimatorControllerParameter_t1758260042 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.AnimatorStateInfo::get_fullPathHash()
extern "C" IL2CPP_METHOD_ATTR int32_t AnimatorStateInfo_get_fullPathHash_m2978085309 (AnimatorStateInfo_t509032636 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.AnimatorStateInfo::get_nameHash()
extern "C" IL2CPP_METHOD_ATTR int32_t AnimatorStateInfo_get_nameHash_m4064958502 (AnimatorStateInfo_t509032636 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.AnimatorStateInfo::get_shortNameHash()
extern "C" IL2CPP_METHOD_ATTR int32_t AnimatorStateInfo_get_shortNameHash_m3578045446 (AnimatorStateInfo_t509032636 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AnimatorStateInfo::get_normalizedTime()
extern "C" IL2CPP_METHOD_ATTR float AnimatorStateInfo_get_normalizedTime_m2701390466 (AnimatorStateInfo_t509032636 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AnimatorStateInfo::get_length()
extern "C" IL2CPP_METHOD_ATTR float AnimatorStateInfo_get_length_m130221364 (AnimatorStateInfo_t509032636 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AnimatorStateInfo::get_speed()
extern "C" IL2CPP_METHOD_ATTR float AnimatorStateInfo_get_speed_m241119581 (AnimatorStateInfo_t509032636 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AnimatorStateInfo::get_speedMultiplier()
extern "C" IL2CPP_METHOD_ATTR float AnimatorStateInfo_get_speedMultiplier_m803921333 (AnimatorStateInfo_t509032636 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.AnimatorStateInfo::get_tagHash()
extern "C" IL2CPP_METHOD_ATTR int32_t AnimatorStateInfo_get_tagHash_m1760199943 (AnimatorStateInfo_t509032636 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AnimatorStateInfo::get_loop()
extern "C" IL2CPP_METHOD_ATTR bool AnimatorStateInfo_get_loop_m3780967345 (AnimatorStateInfo_t509032636 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_fullPathHash()
extern "C" IL2CPP_METHOD_ATTR int32_t AnimatorTransitionInfo_get_fullPathHash_m1909440967 (AnimatorTransitionInfo_t2534804151 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_nameHash()
extern "C" IL2CPP_METHOD_ATTR int32_t AnimatorTransitionInfo_get_nameHash_m3336626857 (AnimatorTransitionInfo_t2534804151 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_userNameHash()
extern "C" IL2CPP_METHOD_ATTR int32_t AnimatorTransitionInfo_get_userNameHash_m2248997669 (AnimatorTransitionInfo_t2534804151 * __this, const RuntimeMethod* method);
// UnityEngine.DurationUnit UnityEngine.AnimatorTransitionInfo::get_durationUnit()
extern "C" IL2CPP_METHOD_ATTR int32_t AnimatorTransitionInfo_get_durationUnit_m518834263 (AnimatorTransitionInfo_t2534804151 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AnimatorTransitionInfo::get_duration()
extern "C" IL2CPP_METHOD_ATTR float AnimatorTransitionInfo_get_duration_m3801171545 (AnimatorTransitionInfo_t2534804151 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AnimatorTransitionInfo::get_normalizedTime()
extern "C" IL2CPP_METHOD_ATTR float AnimatorTransitionInfo_get_normalizedTime_m1885586090 (AnimatorTransitionInfo_t2534804151 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_anyState()
extern "C" IL2CPP_METHOD_ATTR bool AnimatorTransitionInfo_get_anyState_m1016241302 (AnimatorTransitionInfo_t2534804151 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_entry()
extern "C" IL2CPP_METHOD_ATTR bool AnimatorTransitionInfo_get_entry_m3876778991 (AnimatorTransitionInfo_t2534804151 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_exit()
extern "C" IL2CPP_METHOD_ATTR bool AnimatorTransitionInfo_get_exit_m2939894432 (AnimatorTransitionInfo_t2534804151 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m1087895580 (Object_t631007953 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ScriptableObject::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m1310743131 (ScriptableObject_t2528358522 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Animation::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Animation__ctor_m3789945480 (Animation_t3648466861 * __this, const RuntimeMethod* method)
{
	{
		Behaviour__ctor_m346897018(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.AnimationClip UnityEngine.Animation::get_clip()
extern "C" IL2CPP_METHOD_ATTR AnimationClip_t2318505987 * Animation_get_clip_m1019546398 (Animation_t3648466861 * __this, const RuntimeMethod* method)
{
	typedef AnimationClip_t2318505987 * (*Animation_get_clip_m1019546398_ftn) (Animation_t3648466861 *);
	static Animation_get_clip_m1019546398_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_get_clip_m1019546398_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::get_clip()");
	AnimationClip_t2318505987 * retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Animation::set_clip(UnityEngine.AnimationClip)
extern "C" IL2CPP_METHOD_ATTR void Animation_set_clip_m2768026374 (Animation_t3648466861 * __this, AnimationClip_t2318505987 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Animation_set_clip_m2768026374_ftn) (Animation_t3648466861 *, AnimationClip_t2318505987 *);
	static Animation_set_clip_m2768026374_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_set_clip_m2768026374_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::set_clip(UnityEngine.AnimationClip)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.Animation::get_playAutomatically()
extern "C" IL2CPP_METHOD_ATTR bool Animation_get_playAutomatically_m2573482634 (Animation_t3648466861 * __this, const RuntimeMethod* method)
{
	typedef bool (*Animation_get_playAutomatically_m2573482634_ftn) (Animation_t3648466861 *);
	static Animation_get_playAutomatically_m2573482634_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_get_playAutomatically_m2573482634_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::get_playAutomatically()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Animation::set_playAutomatically(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Animation_set_playAutomatically_m3664844654 (Animation_t3648466861 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*Animation_set_playAutomatically_m3664844654_ftn) (Animation_t3648466861 *, bool);
	static Animation_set_playAutomatically_m3664844654_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_set_playAutomatically_m3664844654_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::set_playAutomatically(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.WrapMode UnityEngine.Animation::get_wrapMode()
extern "C" IL2CPP_METHOD_ATTR int32_t Animation_get_wrapMode_m2809058369 (Animation_t3648466861 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*Animation_get_wrapMode_m2809058369_ftn) (Animation_t3648466861 *);
	static Animation_get_wrapMode_m2809058369_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_get_wrapMode_m2809058369_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::get_wrapMode()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Animation::set_wrapMode(UnityEngine.WrapMode)
extern "C" IL2CPP_METHOD_ATTR void Animation_set_wrapMode_m2823425410 (Animation_t3648466861 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*Animation_set_wrapMode_m2823425410_ftn) (Animation_t3648466861 *, int32_t);
	static Animation_set_wrapMode_m2823425410_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_set_wrapMode_m2823425410_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::set_wrapMode(UnityEngine.WrapMode)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Animation::Stop()
extern "C" IL2CPP_METHOD_ATTR void Animation_Stop_m195768787 (Animation_t3648466861 * __this, const RuntimeMethod* method)
{
	{
		Animation_INTERNAL_CALL_Stop_m1587721271(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animation::INTERNAL_CALL_Stop(UnityEngine.Animation)
extern "C" IL2CPP_METHOD_ATTR void Animation_INTERNAL_CALL_Stop_m1587721271 (RuntimeObject * __this /* static, unused */, Animation_t3648466861 * ___self0, const RuntimeMethod* method)
{
	typedef void (*Animation_INTERNAL_CALL_Stop_m1587721271_ftn) (Animation_t3648466861 *);
	static Animation_INTERNAL_CALL_Stop_m1587721271_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_INTERNAL_CALL_Stop_m1587721271_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::INTERNAL_CALL_Stop(UnityEngine.Animation)");
	_il2cpp_icall_func(___self0);
}
// System.Void UnityEngine.Animation::Stop(System.String)
extern "C" IL2CPP_METHOD_ATTR void Animation_Stop_m126566212 (Animation_t3648466861 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		Animation_Internal_StopByName_m2571804745(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animation::Internal_StopByName(System.String)
extern "C" IL2CPP_METHOD_ATTR void Animation_Internal_StopByName_m2571804745 (Animation_t3648466861 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	typedef void (*Animation_Internal_StopByName_m2571804745_ftn) (Animation_t3648466861 *, String_t*);
	static Animation_Internal_StopByName_m2571804745_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_Internal_StopByName_m2571804745_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::Internal_StopByName(System.String)");
	_il2cpp_icall_func(__this, ___name0);
}
// System.Void UnityEngine.Animation::Rewind(System.String)
extern "C" IL2CPP_METHOD_ATTR void Animation_Rewind_m1690774295 (Animation_t3648466861 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		Animation_Internal_RewindByName_m3260795103(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animation::Internal_RewindByName(System.String)
extern "C" IL2CPP_METHOD_ATTR void Animation_Internal_RewindByName_m3260795103 (Animation_t3648466861 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	typedef void (*Animation_Internal_RewindByName_m3260795103_ftn) (Animation_t3648466861 *, String_t*);
	static Animation_Internal_RewindByName_m3260795103_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_Internal_RewindByName_m3260795103_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::Internal_RewindByName(System.String)");
	_il2cpp_icall_func(__this, ___name0);
}
// System.Void UnityEngine.Animation::Rewind()
extern "C" IL2CPP_METHOD_ATTR void Animation_Rewind_m1757258007 (Animation_t3648466861 * __this, const RuntimeMethod* method)
{
	{
		Animation_INTERNAL_CALL_Rewind_m3833711821(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animation::INTERNAL_CALL_Rewind(UnityEngine.Animation)
extern "C" IL2CPP_METHOD_ATTR void Animation_INTERNAL_CALL_Rewind_m3833711821 (RuntimeObject * __this /* static, unused */, Animation_t3648466861 * ___self0, const RuntimeMethod* method)
{
	typedef void (*Animation_INTERNAL_CALL_Rewind_m3833711821_ftn) (Animation_t3648466861 *);
	static Animation_INTERNAL_CALL_Rewind_m3833711821_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_INTERNAL_CALL_Rewind_m3833711821_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::INTERNAL_CALL_Rewind(UnityEngine.Animation)");
	_il2cpp_icall_func(___self0);
}
// System.Void UnityEngine.Animation::Sample()
extern "C" IL2CPP_METHOD_ATTR void Animation_Sample_m562269191 (Animation_t3648466861 * __this, const RuntimeMethod* method)
{
	{
		Animation_INTERNAL_CALL_Sample_m1174923994(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animation::INTERNAL_CALL_Sample(UnityEngine.Animation)
extern "C" IL2CPP_METHOD_ATTR void Animation_INTERNAL_CALL_Sample_m1174923994 (RuntimeObject * __this /* static, unused */, Animation_t3648466861 * ___self0, const RuntimeMethod* method)
{
	typedef void (*Animation_INTERNAL_CALL_Sample_m1174923994_ftn) (Animation_t3648466861 *);
	static Animation_INTERNAL_CALL_Sample_m1174923994_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_INTERNAL_CALL_Sample_m1174923994_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::INTERNAL_CALL_Sample(UnityEngine.Animation)");
	_il2cpp_icall_func(___self0);
}
// System.Boolean UnityEngine.Animation::get_isPlaying()
extern "C" IL2CPP_METHOD_ATTR bool Animation_get_isPlaying_m1022540967 (Animation_t3648466861 * __this, const RuntimeMethod* method)
{
	typedef bool (*Animation_get_isPlaying_m1022540967_ftn) (Animation_t3648466861 *);
	static Animation_get_isPlaying_m1022540967_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_get_isPlaying_m1022540967_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::get_isPlaying()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.Animation::IsPlaying(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Animation_IsPlaying_m4012807256 (Animation_t3648466861 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	typedef bool (*Animation_IsPlaying_m4012807256_ftn) (Animation_t3648466861 *, String_t*);
	static Animation_IsPlaying_m4012807256_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_IsPlaying_m4012807256_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::IsPlaying(System.String)");
	bool retVal = _il2cpp_icall_func(__this, ___name0);
	return retVal;
}
// UnityEngine.AnimationState UnityEngine.Animation::get_Item(System.String)
extern "C" IL2CPP_METHOD_ATTR AnimationState_t1108360407 * Animation_get_Item_m2435218778 (Animation_t3648466861 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	AnimationState_t1108360407 * V_0 = NULL;
	{
		String_t* L_0 = ___name0;
		AnimationState_t1108360407 * L_1 = Animation_GetState_m2252204496(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		AnimationState_t1108360407 * L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Animation::Play()
extern "C" IL2CPP_METHOD_ATTR bool Animation_Play_m2798573761 (Animation_t3648466861 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		V_0 = 0;
		int32_t L_0 = V_0;
		bool L_1 = Animation_Play_m577412913(__this, L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_2 = V_1;
		return L_2;
	}
}
// System.Boolean UnityEngine.Animation::Play(UnityEngine.PlayMode)
extern "C" IL2CPP_METHOD_ATTR bool Animation_Play_m577412913 (Animation_t3648466861 * __this, int32_t ___mode0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = ___mode0;
		bool L_1 = Animation_PlayDefaultAnimation_m3369546080(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Animation::Play(System.String,UnityEngine.PlayMode)
extern "C" IL2CPP_METHOD_ATTR bool Animation_Play_m10633183 (Animation_t3648466861 * __this, String_t* ___animation0, int32_t ___mode1, const RuntimeMethod* method)
{
	typedef bool (*Animation_Play_m10633183_ftn) (Animation_t3648466861 *, String_t*, int32_t);
	static Animation_Play_m10633183_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_Play_m10633183_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::Play(System.String,UnityEngine.PlayMode)");
	bool retVal = _il2cpp_icall_func(__this, ___animation0, ___mode1);
	return retVal;
}
// System.Boolean UnityEngine.Animation::Play(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Animation_Play_m27531216 (Animation_t3648466861 * __this, String_t* ___animation0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		V_0 = 0;
		String_t* L_0 = ___animation0;
		int32_t L_1 = V_0;
		bool L_2 = Animation_Play_m10633183(__this, L_0, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		goto IL_0011;
	}

IL_0011:
	{
		bool L_3 = V_1;
		return L_3;
	}
}
// System.Void UnityEngine.Animation::CrossFade(System.String,System.Single,UnityEngine.PlayMode)
extern "C" IL2CPP_METHOD_ATTR void Animation_CrossFade_m3062450341 (Animation_t3648466861 * __this, String_t* ___animation0, float ___fadeLength1, int32_t ___mode2, const RuntimeMethod* method)
{
	typedef void (*Animation_CrossFade_m3062450341_ftn) (Animation_t3648466861 *, String_t*, float, int32_t);
	static Animation_CrossFade_m3062450341_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_CrossFade_m3062450341_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::CrossFade(System.String,System.Single,UnityEngine.PlayMode)");
	_il2cpp_icall_func(__this, ___animation0, ___fadeLength1, ___mode2);
}
// System.Void UnityEngine.Animation::CrossFade(System.String,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animation_CrossFade_m3511917098 (Animation_t3648466861 * __this, String_t* ___animation0, float ___fadeLength1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		String_t* L_0 = ___animation0;
		float L_1 = ___fadeLength1;
		int32_t L_2 = V_0;
		Animation_CrossFade_m3062450341(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animation::CrossFade(System.String)
extern "C" IL2CPP_METHOD_ATTR void Animation_CrossFade_m2177301990 (Animation_t3648466861 * __this, String_t* ___animation0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		V_0 = 0;
		V_1 = (0.3f);
		String_t* L_0 = ___animation0;
		float L_1 = V_1;
		int32_t L_2 = V_0;
		Animation_CrossFade_m3062450341(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animation::Blend(System.String,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animation_Blend_m1353791016 (Animation_t3648466861 * __this, String_t* ___animation0, float ___targetWeight1, float ___fadeLength2, const RuntimeMethod* method)
{
	typedef void (*Animation_Blend_m1353791016_ftn) (Animation_t3648466861 *, String_t*, float, float);
	static Animation_Blend_m1353791016_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_Blend_m1353791016_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::Blend(System.String,System.Single,System.Single)");
	_il2cpp_icall_func(__this, ___animation0, ___targetWeight1, ___fadeLength2);
}
// System.Void UnityEngine.Animation::Blend(System.String,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animation_Blend_m2881351092 (Animation_t3648466861 * __this, String_t* ___animation0, float ___targetWeight1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (0.3f);
		String_t* L_0 = ___animation0;
		float L_1 = ___targetWeight1;
		float L_2 = V_0;
		Animation_Blend_m1353791016(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animation::Blend(System.String)
extern "C" IL2CPP_METHOD_ATTR void Animation_Blend_m3652490855 (Animation_t3648466861 * __this, String_t* ___animation0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (0.3f);
		V_1 = (1.0f);
		String_t* L_0 = ___animation0;
		float L_1 = V_1;
		float L_2 = V_0;
		Animation_Blend_m1353791016(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.AnimationState UnityEngine.Animation::CrossFadeQueued(System.String,System.Single,UnityEngine.QueueMode,UnityEngine.PlayMode)
extern "C" IL2CPP_METHOD_ATTR AnimationState_t1108360407 * Animation_CrossFadeQueued_m1554946458 (Animation_t3648466861 * __this, String_t* ___animation0, float ___fadeLength1, int32_t ___queue2, int32_t ___mode3, const RuntimeMethod* method)
{
	typedef AnimationState_t1108360407 * (*Animation_CrossFadeQueued_m1554946458_ftn) (Animation_t3648466861 *, String_t*, float, int32_t, int32_t);
	static Animation_CrossFadeQueued_m1554946458_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_CrossFadeQueued_m1554946458_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::CrossFadeQueued(System.String,System.Single,UnityEngine.QueueMode,UnityEngine.PlayMode)");
	AnimationState_t1108360407 * retVal = _il2cpp_icall_func(__this, ___animation0, ___fadeLength1, ___queue2, ___mode3);
	return retVal;
}
// UnityEngine.AnimationState UnityEngine.Animation::CrossFadeQueued(System.String,System.Single,UnityEngine.QueueMode)
extern "C" IL2CPP_METHOD_ATTR AnimationState_t1108360407 * Animation_CrossFadeQueued_m2560703516 (Animation_t3648466861 * __this, String_t* ___animation0, float ___fadeLength1, int32_t ___queue2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	AnimationState_t1108360407 * V_1 = NULL;
	{
		V_0 = 0;
		String_t* L_0 = ___animation0;
		float L_1 = ___fadeLength1;
		int32_t L_2 = ___queue2;
		int32_t L_3 = V_0;
		AnimationState_t1108360407 * L_4 = Animation_CrossFadeQueued_m1554946458(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_0013;
	}

IL_0013:
	{
		AnimationState_t1108360407 * L_5 = V_1;
		return L_5;
	}
}
// UnityEngine.AnimationState UnityEngine.Animation::CrossFadeQueued(System.String,System.Single)
extern "C" IL2CPP_METHOD_ATTR AnimationState_t1108360407 * Animation_CrossFadeQueued_m1763543631 (Animation_t3648466861 * __this, String_t* ___animation0, float ___fadeLength1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AnimationState_t1108360407 * V_2 = NULL;
	{
		V_0 = 0;
		V_1 = 0;
		String_t* L_0 = ___animation0;
		float L_1 = ___fadeLength1;
		int32_t L_2 = V_1;
		int32_t L_3 = V_0;
		AnimationState_t1108360407 * L_4 = Animation_CrossFadeQueued_m1554946458(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		AnimationState_t1108360407 * L_5 = V_2;
		return L_5;
	}
}
// UnityEngine.AnimationState UnityEngine.Animation::CrossFadeQueued(System.String)
extern "C" IL2CPP_METHOD_ATTR AnimationState_t1108360407 * Animation_CrossFadeQueued_m1096148142 (Animation_t3648466861 * __this, String_t* ___animation0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	AnimationState_t1108360407 * V_3 = NULL;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = (0.3f);
		String_t* L_0 = ___animation0;
		float L_1 = V_2;
		int32_t L_2 = V_1;
		int32_t L_3 = V_0;
		AnimationState_t1108360407 * L_4 = Animation_CrossFadeQueued_m1554946458(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_3 = L_4;
		goto IL_001b;
	}

IL_001b:
	{
		AnimationState_t1108360407 * L_5 = V_3;
		return L_5;
	}
}
// UnityEngine.AnimationState UnityEngine.Animation::PlayQueued(System.String,UnityEngine.QueueMode,UnityEngine.PlayMode)
extern "C" IL2CPP_METHOD_ATTR AnimationState_t1108360407 * Animation_PlayQueued_m613765632 (Animation_t3648466861 * __this, String_t* ___animation0, int32_t ___queue1, int32_t ___mode2, const RuntimeMethod* method)
{
	typedef AnimationState_t1108360407 * (*Animation_PlayQueued_m613765632_ftn) (Animation_t3648466861 *, String_t*, int32_t, int32_t);
	static Animation_PlayQueued_m613765632_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_PlayQueued_m613765632_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::PlayQueued(System.String,UnityEngine.QueueMode,UnityEngine.PlayMode)");
	AnimationState_t1108360407 * retVal = _il2cpp_icall_func(__this, ___animation0, ___queue1, ___mode2);
	return retVal;
}
// UnityEngine.AnimationState UnityEngine.Animation::PlayQueued(System.String,UnityEngine.QueueMode)
extern "C" IL2CPP_METHOD_ATTR AnimationState_t1108360407 * Animation_PlayQueued_m2313930694 (Animation_t3648466861 * __this, String_t* ___animation0, int32_t ___queue1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	AnimationState_t1108360407 * V_1 = NULL;
	{
		V_0 = 0;
		String_t* L_0 = ___animation0;
		int32_t L_1 = ___queue1;
		int32_t L_2 = V_0;
		AnimationState_t1108360407 * L_3 = Animation_PlayQueued_m613765632(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_0012;
	}

IL_0012:
	{
		AnimationState_t1108360407 * L_4 = V_1;
		return L_4;
	}
}
// UnityEngine.AnimationState UnityEngine.Animation::PlayQueued(System.String)
extern "C" IL2CPP_METHOD_ATTR AnimationState_t1108360407 * Animation_PlayQueued_m3723777040 (Animation_t3648466861 * __this, String_t* ___animation0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AnimationState_t1108360407 * V_2 = NULL;
	{
		V_0 = 0;
		V_1 = 0;
		String_t* L_0 = ___animation0;
		int32_t L_1 = V_1;
		int32_t L_2 = V_0;
		AnimationState_t1108360407 * L_3 = Animation_PlayQueued_m613765632(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		AnimationState_t1108360407 * L_4 = V_2;
		return L_4;
	}
}
// System.Void UnityEngine.Animation::AddClip(UnityEngine.AnimationClip,System.String)
extern "C" IL2CPP_METHOD_ATTR void Animation_AddClip_m2720317275 (Animation_t3648466861 * __this, AnimationClip_t2318505987 * ___clip0, String_t* ___newName1, const RuntimeMethod* method)
{
	{
		AnimationClip_t2318505987 * L_0 = ___clip0;
		String_t* L_1 = ___newName1;
		Animation_AddClip_m131581775(__this, L_0, L_1, ((int32_t)-2147483648LL), ((int32_t)2147483647LL), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animation::AddClip(UnityEngine.AnimationClip,System.String,System.Int32,System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Animation_AddClip_m2043891899 (Animation_t3648466861 * __this, AnimationClip_t2318505987 * ___clip0, String_t* ___newName1, int32_t ___firstFrame2, int32_t ___lastFrame3, bool ___addLoopFrame4, const RuntimeMethod* method)
{
	typedef void (*Animation_AddClip_m2043891899_ftn) (Animation_t3648466861 *, AnimationClip_t2318505987 *, String_t*, int32_t, int32_t, bool);
	static Animation_AddClip_m2043891899_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_AddClip_m2043891899_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::AddClip(UnityEngine.AnimationClip,System.String,System.Int32,System.Int32,System.Boolean)");
	_il2cpp_icall_func(__this, ___clip0, ___newName1, ___firstFrame2, ___lastFrame3, ___addLoopFrame4);
}
// System.Void UnityEngine.Animation::AddClip(UnityEngine.AnimationClip,System.String,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Animation_AddClip_m131581775 (Animation_t3648466861 * __this, AnimationClip_t2318505987 * ___clip0, String_t* ___newName1, int32_t ___firstFrame2, int32_t ___lastFrame3, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		AnimationClip_t2318505987 * L_0 = ___clip0;
		String_t* L_1 = ___newName1;
		int32_t L_2 = ___firstFrame2;
		int32_t L_3 = ___lastFrame3;
		bool L_4 = V_0;
		Animation_AddClip_m2043891899(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animation::RemoveClip(UnityEngine.AnimationClip)
extern "C" IL2CPP_METHOD_ATTR void Animation_RemoveClip_m1952057413 (Animation_t3648466861 * __this, AnimationClip_t2318505987 * ___clip0, const RuntimeMethod* method)
{
	typedef void (*Animation_RemoveClip_m1952057413_ftn) (Animation_t3648466861 *, AnimationClip_t2318505987 *);
	static Animation_RemoveClip_m1952057413_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_RemoveClip_m1952057413_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::RemoveClip(UnityEngine.AnimationClip)");
	_il2cpp_icall_func(__this, ___clip0);
}
// System.Void UnityEngine.Animation::RemoveClip(System.String)
extern "C" IL2CPP_METHOD_ATTR void Animation_RemoveClip_m482305499 (Animation_t3648466861 * __this, String_t* ___clipName0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___clipName0;
		Animation_RemoveClip2_m384163394(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.Animation::GetClipCount()
extern "C" IL2CPP_METHOD_ATTR int32_t Animation_GetClipCount_m398829705 (Animation_t3648466861 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*Animation_GetClipCount_m398829705_ftn) (Animation_t3648466861 *);
	static Animation_GetClipCount_m398829705_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_GetClipCount_m398829705_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::GetClipCount()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Animation::RemoveClip2(System.String)
extern "C" IL2CPP_METHOD_ATTR void Animation_RemoveClip2_m384163394 (Animation_t3648466861 * __this, String_t* ___clipName0, const RuntimeMethod* method)
{
	typedef void (*Animation_RemoveClip2_m384163394_ftn) (Animation_t3648466861 *, String_t*);
	static Animation_RemoveClip2_m384163394_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_RemoveClip2_m384163394_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::RemoveClip2(System.String)");
	_il2cpp_icall_func(__this, ___clipName0);
}
// System.Boolean UnityEngine.Animation::PlayDefaultAnimation(UnityEngine.PlayMode)
extern "C" IL2CPP_METHOD_ATTR bool Animation_PlayDefaultAnimation_m3369546080 (Animation_t3648466861 * __this, int32_t ___mode0, const RuntimeMethod* method)
{
	typedef bool (*Animation_PlayDefaultAnimation_m3369546080_ftn) (Animation_t3648466861 *, int32_t);
	static Animation_PlayDefaultAnimation_m3369546080_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_PlayDefaultAnimation_m3369546080_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::PlayDefaultAnimation(UnityEngine.PlayMode)");
	bool retVal = _il2cpp_icall_func(__this, ___mode0);
	return retVal;
}
// System.Void UnityEngine.Animation::SyncLayer(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Animation_SyncLayer_m327720572 (Animation_t3648466861 * __this, int32_t ___layer0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___layer0;
		Animation_INTERNAL_CALL_SyncLayer_m2483795310(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animation::INTERNAL_CALL_SyncLayer(UnityEngine.Animation,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Animation_INTERNAL_CALL_SyncLayer_m2483795310 (RuntimeObject * __this /* static, unused */, Animation_t3648466861 * ___self0, int32_t ___layer1, const RuntimeMethod* method)
{
	typedef void (*Animation_INTERNAL_CALL_SyncLayer_m2483795310_ftn) (Animation_t3648466861 *, int32_t);
	static Animation_INTERNAL_CALL_SyncLayer_m2483795310_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_INTERNAL_CALL_SyncLayer_m2483795310_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::INTERNAL_CALL_SyncLayer(UnityEngine.Animation,System.Int32)");
	_il2cpp_icall_func(___self0, ___layer1);
}
// System.Collections.IEnumerator UnityEngine.Animation::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Animation_GetEnumerator_m1233868201 (Animation_t3648466861 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Animation_GetEnumerator_m1233868201_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		Enumerator_t1136361084 * L_0 = (Enumerator_t1136361084 *)il2cpp_codegen_object_new(Enumerator_t1136361084_il2cpp_TypeInfo_var);
		Enumerator__ctor_m1737537150(L_0, __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.AnimationState UnityEngine.Animation::GetState(System.String)
extern "C" IL2CPP_METHOD_ATTR AnimationState_t1108360407 * Animation_GetState_m2252204496 (Animation_t3648466861 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	typedef AnimationState_t1108360407 * (*Animation_GetState_m2252204496_ftn) (Animation_t3648466861 *, String_t*);
	static Animation_GetState_m2252204496_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_GetState_m2252204496_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::GetState(System.String)");
	AnimationState_t1108360407 * retVal = _il2cpp_icall_func(__this, ___name0);
	return retVal;
}
// UnityEngine.AnimationState UnityEngine.Animation::GetStateAtIndex(System.Int32)
extern "C" IL2CPP_METHOD_ATTR AnimationState_t1108360407 * Animation_GetStateAtIndex_m3906320186 (Animation_t3648466861 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	typedef AnimationState_t1108360407 * (*Animation_GetStateAtIndex_m3906320186_ftn) (Animation_t3648466861 *, int32_t);
	static Animation_GetStateAtIndex_m3906320186_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_GetStateAtIndex_m3906320186_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::GetStateAtIndex(System.Int32)");
	AnimationState_t1108360407 * retVal = _il2cpp_icall_func(__this, ___index0);
	return retVal;
}
// System.Int32 UnityEngine.Animation::GetStateCount()
extern "C" IL2CPP_METHOD_ATTR int32_t Animation_GetStateCount_m3809146648 (Animation_t3648466861 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*Animation_GetStateCount_m3809146648_ftn) (Animation_t3648466861 *);
	static Animation_GetStateCount_m3809146648_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_GetStateCount_m3809146648_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::GetStateCount()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.AnimationClip UnityEngine.Animation::GetClip(System.String)
extern "C" IL2CPP_METHOD_ATTR AnimationClip_t2318505987 * Animation_GetClip_m732294439 (Animation_t3648466861 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	AnimationState_t1108360407 * V_0 = NULL;
	AnimationClip_t2318505987 * V_1 = NULL;
	{
		String_t* L_0 = ___name0;
		AnimationState_t1108360407 * L_1 = Animation_GetState_m2252204496(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		AnimationState_t1108360407 * L_2 = V_0;
		bool L_3 = TrackedReference_op_Implicit_m166179420(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		AnimationState_t1108360407 * L_4 = V_0;
		NullCheck(L_4);
		AnimationClip_t2318505987 * L_5 = AnimationState_get_clip_m3280372436(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		goto IL_0027;
	}

IL_0020:
	{
		V_1 = (AnimationClip_t2318505987 *)NULL;
		goto IL_0027;
	}

IL_0027:
	{
		AnimationClip_t2318505987 * L_6 = V_1;
		return L_6;
	}
}
// System.Boolean UnityEngine.Animation::get_animatePhysics()
extern "C" IL2CPP_METHOD_ATTR bool Animation_get_animatePhysics_m3119922132 (Animation_t3648466861 * __this, const RuntimeMethod* method)
{
	typedef bool (*Animation_get_animatePhysics_m3119922132_ftn) (Animation_t3648466861 *);
	static Animation_get_animatePhysics_m3119922132_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_get_animatePhysics_m3119922132_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::get_animatePhysics()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Animation::set_animatePhysics(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Animation_set_animatePhysics_m1201366197 (Animation_t3648466861 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*Animation_set_animatePhysics_m1201366197_ftn) (Animation_t3648466861 *, bool);
	static Animation_set_animatePhysics_m1201366197_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_set_animatePhysics_m1201366197_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::set_animatePhysics(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.AnimationCullingType UnityEngine.Animation::get_cullingType()
extern "C" IL2CPP_METHOD_ATTR int32_t Animation_get_cullingType_m3673918152 (Animation_t3648466861 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*Animation_get_cullingType_m3673918152_ftn) (Animation_t3648466861 *);
	static Animation_get_cullingType_m3673918152_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_get_cullingType_m3673918152_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::get_cullingType()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Animation::set_cullingType(UnityEngine.AnimationCullingType)
extern "C" IL2CPP_METHOD_ATTR void Animation_set_cullingType_m309686333 (Animation_t3648466861 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*Animation_set_cullingType_m309686333_ftn) (Animation_t3648466861 *, int32_t);
	static Animation_set_cullingType_m309686333_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_set_cullingType_m309686333_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::set_cullingType(UnityEngine.AnimationCullingType)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Bounds UnityEngine.Animation::get_localBounds()
extern "C" IL2CPP_METHOD_ATTR Bounds_t2266837910  Animation_get_localBounds_m2392879259 (Animation_t3648466861 * __this, const RuntimeMethod* method)
{
	Bounds_t2266837910  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Bounds_t2266837910  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Animation_INTERNAL_get_localBounds_m603415822(__this, (&V_0), /*hidden argument*/NULL);
		Bounds_t2266837910  L_0 = V_0;
		V_1 = L_0;
		goto IL_0010;
	}

IL_0010:
	{
		Bounds_t2266837910  L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.Animation::set_localBounds(UnityEngine.Bounds)
extern "C" IL2CPP_METHOD_ATTR void Animation_set_localBounds_m2046629953 (Animation_t3648466861 * __this, Bounds_t2266837910  ___value0, const RuntimeMethod* method)
{
	{
		Animation_INTERNAL_set_localBounds_m731214248(__this, (&___value0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animation::INTERNAL_get_localBounds(UnityEngine.Bounds&)
extern "C" IL2CPP_METHOD_ATTR void Animation_INTERNAL_get_localBounds_m603415822 (Animation_t3648466861 * __this, Bounds_t2266837910 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Animation_INTERNAL_get_localBounds_m603415822_ftn) (Animation_t3648466861 *, Bounds_t2266837910 *);
	static Animation_INTERNAL_get_localBounds_m603415822_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_INTERNAL_get_localBounds_m603415822_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::INTERNAL_get_localBounds(UnityEngine.Bounds&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Animation::INTERNAL_set_localBounds(UnityEngine.Bounds&)
extern "C" IL2CPP_METHOD_ATTR void Animation_INTERNAL_set_localBounds_m731214248 (Animation_t3648466861 * __this, Bounds_t2266837910 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Animation_INTERNAL_set_localBounds_m731214248_ftn) (Animation_t3648466861 *, Bounds_t2266837910 *);
	static Animation_INTERNAL_set_localBounds_m731214248_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_INTERNAL_set_localBounds_m731214248_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::INTERNAL_set_localBounds(UnityEngine.Bounds&)");
	_il2cpp_icall_func(__this, ___value0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Animation/Enumerator::.ctor(UnityEngine.Animation)
extern "C" IL2CPP_METHOD_ATTR void Enumerator__ctor_m1737537150 (Enumerator_t1136361084 * __this, Animation_t3648466861 * ___outer0, const RuntimeMethod* method)
{
	{
		__this->set_m_CurrentIndex_1((-1));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		Animation_t3648466861 * L_0 = ___outer0;
		__this->set_m_Outer_0(L_0);
		return;
	}
}
// System.Object UnityEngine.Animation/Enumerator::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m3574888872 (Enumerator_t1136361084 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		Animation_t3648466861 * L_0 = __this->get_m_Outer_0();
		int32_t L_1 = __this->get_m_CurrentIndex_1();
		NullCheck(L_0);
		AnimationState_t1108360407 * L_2 = Animation_GetStateAtIndex_m3906320186(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0018;
	}

IL_0018:
	{
		RuntimeObject * L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.Animation/Enumerator::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m4249399726 (Enumerator_t1136361084 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		Animation_t3648466861 * L_0 = __this->get_m_Outer_0();
		NullCheck(L_0);
		int32_t L_1 = Animation_GetStateCount_m3809146648(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = __this->get_m_CurrentIndex_1();
		__this->set_m_CurrentIndex_1(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		int32_t L_3 = __this->get_m_CurrentIndex_1();
		int32_t L_4 = V_0;
		V_1 = (bool)((((int32_t)L_3) < ((int32_t)L_4))? 1 : 0);
		goto IL_002a;
	}

IL_002a:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Void UnityEngine.Animation/Enumerator::Reset()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Reset_m2475628812 (Enumerator_t1136361084 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_CurrentIndex_1((-1));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.AnimationClip::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AnimationClip__ctor_m583690604 (AnimationClip_t2318505987 * __this, const RuntimeMethod* method)
{
	{
		Motion__ctor_m1337281595(__this, /*hidden argument*/NULL);
		AnimationClip_Internal_CreateAnimationClip_m2711711193(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AnimationClip::SampleAnimation(UnityEngine.GameObject,System.Single)
extern "C" IL2CPP_METHOD_ATTR void AnimationClip_SampleAnimation_m123775921 (AnimationClip_t2318505987 * __this, GameObject_t1113636619 * ___go0, float ___time1, const RuntimeMethod* method)
{
	typedef void (*AnimationClip_SampleAnimation_m123775921_ftn) (AnimationClip_t2318505987 *, GameObject_t1113636619 *, float);
	static AnimationClip_SampleAnimation_m123775921_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_SampleAnimation_m123775921_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::SampleAnimation(UnityEngine.GameObject,System.Single)");
	_il2cpp_icall_func(__this, ___go0, ___time1);
}
// System.Void UnityEngine.AnimationClip::Internal_CreateAnimationClip(UnityEngine.AnimationClip)
extern "C" IL2CPP_METHOD_ATTR void AnimationClip_Internal_CreateAnimationClip_m2711711193 (RuntimeObject * __this /* static, unused */, AnimationClip_t2318505987 * ___self0, const RuntimeMethod* method)
{
	typedef void (*AnimationClip_Internal_CreateAnimationClip_m2711711193_ftn) (AnimationClip_t2318505987 *);
	static AnimationClip_Internal_CreateAnimationClip_m2711711193_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_Internal_CreateAnimationClip_m2711711193_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::Internal_CreateAnimationClip(UnityEngine.AnimationClip)");
	_il2cpp_icall_func(___self0);
}
// System.Single UnityEngine.AnimationClip::get_length()
extern "C" IL2CPP_METHOD_ATTR float AnimationClip_get_length_m3296085482 (AnimationClip_t2318505987 * __this, const RuntimeMethod* method)
{
	typedef float (*AnimationClip_get_length_m3296085482_ftn) (AnimationClip_t2318505987 *);
	static AnimationClip_get_length_m3296085482_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_length_m3296085482_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_length()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Single UnityEngine.AnimationClip::get_frameRate()
extern "C" IL2CPP_METHOD_ATTR float AnimationClip_get_frameRate_m1820704095 (AnimationClip_t2318505987 * __this, const RuntimeMethod* method)
{
	typedef float (*AnimationClip_get_frameRate_m1820704095_ftn) (AnimationClip_t2318505987 *);
	static AnimationClip_get_frameRate_m1820704095_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_frameRate_m1820704095_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_frameRate()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AnimationClip::set_frameRate(System.Single)
extern "C" IL2CPP_METHOD_ATTR void AnimationClip_set_frameRate_m2097049739 (AnimationClip_t2318505987 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*AnimationClip_set_frameRate_m2097049739_ftn) (AnimationClip_t2318505987 *, float);
	static AnimationClip_set_frameRate_m2097049739_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_set_frameRate_m2097049739_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::set_frameRate(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.AnimationClip::SetCurve(System.String,System.Type,System.String,UnityEngine.AnimationCurve)
extern "C" IL2CPP_METHOD_ATTR void AnimationClip_SetCurve_m2277705262 (AnimationClip_t2318505987 * __this, String_t* ___relativePath0, Type_t * ___type1, String_t* ___propertyName2, AnimationCurve_t3046754366 * ___curve3, const RuntimeMethod* method)
{
	typedef void (*AnimationClip_SetCurve_m2277705262_ftn) (AnimationClip_t2318505987 *, String_t*, Type_t *, String_t*, AnimationCurve_t3046754366 *);
	static AnimationClip_SetCurve_m2277705262_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_SetCurve_m2277705262_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::SetCurve(System.String,System.Type,System.String,UnityEngine.AnimationCurve)");
	_il2cpp_icall_func(__this, ___relativePath0, ___type1, ___propertyName2, ___curve3);
}
// System.Void UnityEngine.AnimationClip::EnsureQuaternionContinuity()
extern "C" IL2CPP_METHOD_ATTR void AnimationClip_EnsureQuaternionContinuity_m438482705 (AnimationClip_t2318505987 * __this, const RuntimeMethod* method)
{
	{
		AnimationClip_INTERNAL_CALL_EnsureQuaternionContinuity_m2697853944(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AnimationClip::INTERNAL_CALL_EnsureQuaternionContinuity(UnityEngine.AnimationClip)
extern "C" IL2CPP_METHOD_ATTR void AnimationClip_INTERNAL_CALL_EnsureQuaternionContinuity_m2697853944 (RuntimeObject * __this /* static, unused */, AnimationClip_t2318505987 * ___self0, const RuntimeMethod* method)
{
	typedef void (*AnimationClip_INTERNAL_CALL_EnsureQuaternionContinuity_m2697853944_ftn) (AnimationClip_t2318505987 *);
	static AnimationClip_INTERNAL_CALL_EnsureQuaternionContinuity_m2697853944_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_INTERNAL_CALL_EnsureQuaternionContinuity_m2697853944_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::INTERNAL_CALL_EnsureQuaternionContinuity(UnityEngine.AnimationClip)");
	_il2cpp_icall_func(___self0);
}
// System.Void UnityEngine.AnimationClip::ClearCurves()
extern "C" IL2CPP_METHOD_ATTR void AnimationClip_ClearCurves_m1689460420 (AnimationClip_t2318505987 * __this, const RuntimeMethod* method)
{
	{
		AnimationClip_INTERNAL_CALL_ClearCurves_m3477964794(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AnimationClip::INTERNAL_CALL_ClearCurves(UnityEngine.AnimationClip)
extern "C" IL2CPP_METHOD_ATTR void AnimationClip_INTERNAL_CALL_ClearCurves_m3477964794 (RuntimeObject * __this /* static, unused */, AnimationClip_t2318505987 * ___self0, const RuntimeMethod* method)
{
	typedef void (*AnimationClip_INTERNAL_CALL_ClearCurves_m3477964794_ftn) (AnimationClip_t2318505987 *);
	static AnimationClip_INTERNAL_CALL_ClearCurves_m3477964794_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_INTERNAL_CALL_ClearCurves_m3477964794_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::INTERNAL_CALL_ClearCurves(UnityEngine.AnimationClip)");
	_il2cpp_icall_func(___self0);
}
// UnityEngine.WrapMode UnityEngine.AnimationClip::get_wrapMode()
extern "C" IL2CPP_METHOD_ATTR int32_t AnimationClip_get_wrapMode_m334804228 (AnimationClip_t2318505987 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*AnimationClip_get_wrapMode_m334804228_ftn) (AnimationClip_t2318505987 *);
	static AnimationClip_get_wrapMode_m334804228_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_wrapMode_m334804228_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_wrapMode()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AnimationClip::set_wrapMode(UnityEngine.WrapMode)
extern "C" IL2CPP_METHOD_ATTR void AnimationClip_set_wrapMode_m3764684575 (AnimationClip_t2318505987 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*AnimationClip_set_wrapMode_m3764684575_ftn) (AnimationClip_t2318505987 *, int32_t);
	static AnimationClip_set_wrapMode_m3764684575_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_set_wrapMode_m3764684575_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::set_wrapMode(UnityEngine.WrapMode)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Bounds UnityEngine.AnimationClip::get_localBounds()
extern "C" IL2CPP_METHOD_ATTR Bounds_t2266837910  AnimationClip_get_localBounds_m15049785 (AnimationClip_t2318505987 * __this, const RuntimeMethod* method)
{
	Bounds_t2266837910  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Bounds_t2266837910  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		AnimationClip_INTERNAL_get_localBounds_m1463573593(__this, (&V_0), /*hidden argument*/NULL);
		Bounds_t2266837910  L_0 = V_0;
		V_1 = L_0;
		goto IL_0010;
	}

IL_0010:
	{
		Bounds_t2266837910  L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.AnimationClip::set_localBounds(UnityEngine.Bounds)
extern "C" IL2CPP_METHOD_ATTR void AnimationClip_set_localBounds_m3945435772 (AnimationClip_t2318505987 * __this, Bounds_t2266837910  ___value0, const RuntimeMethod* method)
{
	{
		AnimationClip_INTERNAL_set_localBounds_m654473758(__this, (&___value0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AnimationClip::INTERNAL_get_localBounds(UnityEngine.Bounds&)
extern "C" IL2CPP_METHOD_ATTR void AnimationClip_INTERNAL_get_localBounds_m1463573593 (AnimationClip_t2318505987 * __this, Bounds_t2266837910 * ___value0, const RuntimeMethod* method)
{
	typedef void (*AnimationClip_INTERNAL_get_localBounds_m1463573593_ftn) (AnimationClip_t2318505987 *, Bounds_t2266837910 *);
	static AnimationClip_INTERNAL_get_localBounds_m1463573593_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_INTERNAL_get_localBounds_m1463573593_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::INTERNAL_get_localBounds(UnityEngine.Bounds&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.AnimationClip::INTERNAL_set_localBounds(UnityEngine.Bounds&)
extern "C" IL2CPP_METHOD_ATTR void AnimationClip_INTERNAL_set_localBounds_m654473758 (AnimationClip_t2318505987 * __this, Bounds_t2266837910 * ___value0, const RuntimeMethod* method)
{
	typedef void (*AnimationClip_INTERNAL_set_localBounds_m654473758_ftn) (AnimationClip_t2318505987 *, Bounds_t2266837910 *);
	static AnimationClip_INTERNAL_set_localBounds_m654473758_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_INTERNAL_set_localBounds_m654473758_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::INTERNAL_set_localBounds(UnityEngine.Bounds&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.AnimationClip::get_legacy()
extern "C" IL2CPP_METHOD_ATTR bool AnimationClip_get_legacy_m310696710 (AnimationClip_t2318505987 * __this, const RuntimeMethod* method)
{
	typedef bool (*AnimationClip_get_legacy_m310696710_ftn) (AnimationClip_t2318505987 *);
	static AnimationClip_get_legacy_m310696710_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_legacy_m310696710_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_legacy()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AnimationClip::set_legacy(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void AnimationClip_set_legacy_m1671359110 (AnimationClip_t2318505987 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*AnimationClip_set_legacy_m1671359110_ftn) (AnimationClip_t2318505987 *, bool);
	static AnimationClip_set_legacy_m1671359110_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_set_legacy_m1671359110_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::set_legacy(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.AnimationClip::get_humanMotion()
extern "C" IL2CPP_METHOD_ATTR bool AnimationClip_get_humanMotion_m4193506234 (AnimationClip_t2318505987 * __this, const RuntimeMethod* method)
{
	typedef bool (*AnimationClip_get_humanMotion_m4193506234_ftn) (AnimationClip_t2318505987 *);
	static AnimationClip_get_humanMotion_m4193506234_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_humanMotion_m4193506234_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_humanMotion()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.AnimationClip::get_empty()
extern "C" IL2CPP_METHOD_ATTR bool AnimationClip_get_empty_m1093497191 (AnimationClip_t2318505987 * __this, const RuntimeMethod* method)
{
	typedef bool (*AnimationClip_get_empty_m1093497191_ftn) (AnimationClip_t2318505987 *);
	static AnimationClip_get_empty_m1093497191_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_empty_m1093497191_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_empty()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AnimationClip::AddEvent(UnityEngine.AnimationEvent)
extern "C" IL2CPP_METHOD_ATTR void AnimationClip_AddEvent_m2908172157 (AnimationClip_t2318505987 * __this, AnimationEvent_t1536042487 * ___evt0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationClip_AddEvent_m2908172157_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AnimationEvent_t1536042487 * L_0 = ___evt0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral2554200833, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,AnimationClip_AddEvent_m2908172157_RuntimeMethod_var);
	}

IL_0012:
	{
		AnimationEvent_t1536042487 * L_2 = ___evt0;
		AnimationClip_AddEventInternal_m2044999587(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AnimationClip::AddEventInternal(System.Object)
extern "C" IL2CPP_METHOD_ATTR void AnimationClip_AddEventInternal_m2044999587 (AnimationClip_t2318505987 * __this, RuntimeObject * ___evt0, const RuntimeMethod* method)
{
	typedef void (*AnimationClip_AddEventInternal_m2044999587_ftn) (AnimationClip_t2318505987 *, RuntimeObject *);
	static AnimationClip_AddEventInternal_m2044999587_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_AddEventInternal_m2044999587_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::AddEventInternal(System.Object)");
	_il2cpp_icall_func(__this, ___evt0);
}
// UnityEngine.AnimationEvent[] UnityEngine.AnimationClip::get_events()
extern "C" IL2CPP_METHOD_ATTR AnimationEventU5BU5D_t1574357070* AnimationClip_get_events_m3948822571 (AnimationClip_t2318505987 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationClip_get_events_m3948822571_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AnimationEventU5BU5D_t1574357070* V_0 = NULL;
	{
		RuntimeArray * L_0 = AnimationClip_GetEventsInternal_m1187308418(__this, /*hidden argument*/NULL);
		V_0 = ((AnimationEventU5BU5D_t1574357070*)Castclass((RuntimeObject*)L_0, AnimationEventU5BU5D_t1574357070_il2cpp_TypeInfo_var));
		goto IL_0012;
	}

IL_0012:
	{
		AnimationEventU5BU5D_t1574357070* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.AnimationClip::set_events(UnityEngine.AnimationEvent[])
extern "C" IL2CPP_METHOD_ATTR void AnimationClip_set_events_m3873519051 (AnimationClip_t2318505987 * __this, AnimationEventU5BU5D_t1574357070* ___value0, const RuntimeMethod* method)
{
	{
		AnimationEventU5BU5D_t1574357070* L_0 = ___value0;
		AnimationClip_SetEventsInternal_m1082453756(__this, (RuntimeArray *)(RuntimeArray *)L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AnimationClip::SetEventsInternal(System.Array)
extern "C" IL2CPP_METHOD_ATTR void AnimationClip_SetEventsInternal_m1082453756 (AnimationClip_t2318505987 * __this, RuntimeArray * ___value0, const RuntimeMethod* method)
{
	typedef void (*AnimationClip_SetEventsInternal_m1082453756_ftn) (AnimationClip_t2318505987 *, RuntimeArray *);
	static AnimationClip_SetEventsInternal_m1082453756_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_SetEventsInternal_m1082453756_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::SetEventsInternal(System.Array)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Array UnityEngine.AnimationClip::GetEventsInternal()
extern "C" IL2CPP_METHOD_ATTR RuntimeArray * AnimationClip_GetEventsInternal_m1187308418 (AnimationClip_t2318505987 * __this, const RuntimeMethod* method)
{
	typedef RuntimeArray * (*AnimationClip_GetEventsInternal_m1187308418_ftn) (AnimationClip_t2318505987 *);
	static AnimationClip_GetEventsInternal_m1187308418_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_GetEventsInternal_m1187308418_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::GetEventsInternal()");
	RuntimeArray * retVal = _il2cpp_icall_func(__this);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: UnityEngine.AnimationEvent
extern "C" void AnimationEvent_t1536042487_marshal_pinvoke(const AnimationEvent_t1536042487& unmarshaled, AnimationEvent_t1536042487_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_StateSender_8Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_StateSender' of type 'AnimationEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_StateSender_8Exception,NULL);
}
extern "C" void AnimationEvent_t1536042487_marshal_pinvoke_back(const AnimationEvent_t1536042487_marshaled_pinvoke& marshaled, AnimationEvent_t1536042487& unmarshaled)
{
	Exception_t* ___m_StateSender_8Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_StateSender' of type 'AnimationEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_StateSender_8Exception,NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimationEvent
extern "C" void AnimationEvent_t1536042487_marshal_pinvoke_cleanup(AnimationEvent_t1536042487_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: UnityEngine.AnimationEvent
extern "C" void AnimationEvent_t1536042487_marshal_com(const AnimationEvent_t1536042487& unmarshaled, AnimationEvent_t1536042487_marshaled_com& marshaled)
{
	Exception_t* ___m_StateSender_8Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_StateSender' of type 'AnimationEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_StateSender_8Exception,NULL);
}
extern "C" void AnimationEvent_t1536042487_marshal_com_back(const AnimationEvent_t1536042487_marshaled_com& marshaled, AnimationEvent_t1536042487& unmarshaled)
{
	Exception_t* ___m_StateSender_8Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_StateSender' of type 'AnimationEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_StateSender_8Exception,NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimationEvent
extern "C" void AnimationEvent_t1536042487_marshal_com_cleanup(AnimationEvent_t1536042487_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.AnimationEvent::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AnimationEvent__ctor_m234009954 (AnimationEvent_t1536042487 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationEvent__ctor_m234009954_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		__this->set_m_Time_0((0.0f));
		__this->set_m_FunctionName_1(_stringLiteral757602046);
		__this->set_m_StringParameter_2(_stringLiteral757602046);
		__this->set_m_ObjectReferenceParameter_3((Object_t631007953 *)NULL);
		__this->set_m_FloatParameter_4((0.0f));
		__this->set_m_IntParameter_5(0);
		__this->set_m_MessageOptions_6(0);
		__this->set_m_Source_7(0);
		__this->set_m_StateSender_8((AnimationState_t1108360407 *)NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationClipPlayable::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t1095853803  AnimationClipPlayable_GetHandle_m3441351653 (AnimationClipPlayable_t3189118652 * __this, const RuntimeMethod* method)
{
	PlayableHandle_t1095853803  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		PlayableHandle_t1095853803  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		PlayableHandle_t1095853803  L_1 = V_0;
		return L_1;
	}
}
extern "C"  PlayableHandle_t1095853803  AnimationClipPlayable_GetHandle_m3441351653_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimationClipPlayable_t3189118652 * _thisAdjusted = reinterpret_cast<AnimationClipPlayable_t3189118652 *>(__this + 1);
	return AnimationClipPlayable_GetHandle_m3441351653(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Animations.AnimationClipPlayable::Equals(UnityEngine.Animations.AnimationClipPlayable)
extern "C" IL2CPP_METHOD_ATTR bool AnimationClipPlayable_Equals_m1031707451 (AnimationClipPlayable_t3189118652 * __this, AnimationClipPlayable_t3189118652  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		PlayableHandle_t1095853803  L_0 = AnimationClipPlayable_GetHandle_m3441351653(__this, /*hidden argument*/NULL);
		PlayableHandle_t1095853803  L_1 = AnimationClipPlayable_GetHandle_m3441351653((&___other0), /*hidden argument*/NULL);
		bool L_2 = PlayableHandle_op_Equality_m3344837515(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
extern "C"  bool AnimationClipPlayable_Equals_m1031707451_AdjustorThunk (RuntimeObject * __this, AnimationClipPlayable_t3189118652  ___other0, const RuntimeMethod* method)
{
	AnimationClipPlayable_t3189118652 * _thisAdjusted = reinterpret_cast<AnimationClipPlayable_t3189118652 *>(__this + 1);
	return AnimationClipPlayable_Equals_m1031707451(_thisAdjusted, ___other0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
extern "C" IL2CPP_METHOD_ATTR void AnimationLayerMixerPlayable__ctor_m860721801 (AnimationLayerMixerPlayable_t3631223897 * __this, PlayableHandle_t1095853803  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationLayerMixerPlayable__ctor_m860721801_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = PlayableHandle_IsValid_m777349566((&___handle0), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		bool L_1 = PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_t3631223897_m201603007((&___handle0), /*hidden argument*/PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_t3631223897_m201603007_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		InvalidCastException_t3927145244 * L_2 = (InvalidCastException_t3927145244 *)il2cpp_codegen_object_new(InvalidCastException_t3927145244_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m318645277(L_2, _stringLiteral1913092913, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,AnimationLayerMixerPlayable__ctor_m860721801_RuntimeMethod_var);
	}

IL_0025:
	{
	}

IL_0026:
	{
		PlayableHandle_t1095853803  L_3 = ___handle0;
		__this->set_m_Handle_0(L_3);
		return;
	}
}
extern "C"  void AnimationLayerMixerPlayable__ctor_m860721801_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t1095853803  ___handle0, const RuntimeMethod* method)
{
	AnimationLayerMixerPlayable_t3631223897 * _thisAdjusted = reinterpret_cast<AnimationLayerMixerPlayable_t3631223897 *>(__this + 1);
	AnimationLayerMixerPlayable__ctor_m860721801(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationLayerMixerPlayable::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t1095853803  AnimationLayerMixerPlayable_GetHandle_m3854437798 (AnimationLayerMixerPlayable_t3631223897 * __this, const RuntimeMethod* method)
{
	PlayableHandle_t1095853803  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		PlayableHandle_t1095853803  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		PlayableHandle_t1095853803  L_1 = V_0;
		return L_1;
	}
}
extern "C"  PlayableHandle_t1095853803  AnimationLayerMixerPlayable_GetHandle_m3854437798_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimationLayerMixerPlayable_t3631223897 * _thisAdjusted = reinterpret_cast<AnimationLayerMixerPlayable_t3631223897 *>(__this + 1);
	return AnimationLayerMixerPlayable_GetHandle_m3854437798(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Animations.AnimationLayerMixerPlayable::Equals(UnityEngine.Animations.AnimationLayerMixerPlayable)
extern "C" IL2CPP_METHOD_ATTR bool AnimationLayerMixerPlayable_Equals_m4271416323 (AnimationLayerMixerPlayable_t3631223897 * __this, AnimationLayerMixerPlayable_t3631223897  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		PlayableHandle_t1095853803  L_0 = AnimationLayerMixerPlayable_GetHandle_m3854437798(__this, /*hidden argument*/NULL);
		PlayableHandle_t1095853803  L_1 = AnimationLayerMixerPlayable_GetHandle_m3854437798((&___other0), /*hidden argument*/NULL);
		bool L_2 = PlayableHandle_op_Equality_m3344837515(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
extern "C"  bool AnimationLayerMixerPlayable_Equals_m4271416323_AdjustorThunk (RuntimeObject * __this, AnimationLayerMixerPlayable_t3631223897  ___other0, const RuntimeMethod* method)
{
	AnimationLayerMixerPlayable_t3631223897 * _thisAdjusted = reinterpret_cast<AnimationLayerMixerPlayable_t3631223897 *>(__this + 1);
	return AnimationLayerMixerPlayable_Equals_m4271416323(_thisAdjusted, ___other0, method);
}
// System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::.cctor()
extern "C" IL2CPP_METHOD_ATTR void AnimationLayerMixerPlayable__cctor_m4086299972 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationLayerMixerPlayable__cctor_m4086299972_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlayableHandle_t1095853803  L_0 = PlayableHandle_get_Null_m218234861(NULL /*static, unused*/, /*hidden argument*/NULL);
		AnimationLayerMixerPlayable_t3631223897  L_1;
		memset(&L_1, 0, sizeof(L_1));
		AnimationLayerMixerPlayable__ctor_m860721801((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationLayerMixerPlayable_t3631223897_StaticFields*)il2cpp_codegen_static_fields_for(AnimationLayerMixerPlayable_t3631223897_il2cpp_TypeInfo_var))->set_m_NullPlayable_1(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMixerPlayable::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t1095853803  AnimationMixerPlayable_GetHandle_m2198358075 (AnimationMixerPlayable_t821371386 * __this, const RuntimeMethod* method)
{
	PlayableHandle_t1095853803  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		PlayableHandle_t1095853803  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		PlayableHandle_t1095853803  L_1 = V_0;
		return L_1;
	}
}
extern "C"  PlayableHandle_t1095853803  AnimationMixerPlayable_GetHandle_m2198358075_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimationMixerPlayable_t821371386 * _thisAdjusted = reinterpret_cast<AnimationMixerPlayable_t821371386 *>(__this + 1);
	return AnimationMixerPlayable_GetHandle_m2198358075(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Animations.AnimationMixerPlayable::Equals(UnityEngine.Animations.AnimationMixerPlayable)
extern "C" IL2CPP_METHOD_ATTR bool AnimationMixerPlayable_Equals_m3971478909 (AnimationMixerPlayable_t821371386 * __this, AnimationMixerPlayable_t821371386  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		PlayableHandle_t1095853803  L_0 = AnimationMixerPlayable_GetHandle_m2198358075(__this, /*hidden argument*/NULL);
		PlayableHandle_t1095853803  L_1 = AnimationMixerPlayable_GetHandle_m2198358075((&___other0), /*hidden argument*/NULL);
		bool L_2 = PlayableHandle_op_Equality_m3344837515(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
extern "C"  bool AnimationMixerPlayable_Equals_m3971478909_AdjustorThunk (RuntimeObject * __this, AnimationMixerPlayable_t821371386  ___other0, const RuntimeMethod* method)
{
	AnimationMixerPlayable_t821371386 * _thisAdjusted = reinterpret_cast<AnimationMixerPlayable_t821371386 *>(__this + 1);
	return AnimationMixerPlayable_Equals_m3971478909(_thisAdjusted, ___other0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMotionXToDeltaPlayable::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t1095853803  AnimationMotionXToDeltaPlayable_GetHandle_m1319190040 (AnimationMotionXToDeltaPlayable_t272231551 * __this, const RuntimeMethod* method)
{
	PlayableHandle_t1095853803  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		PlayableHandle_t1095853803  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		PlayableHandle_t1095853803  L_1 = V_0;
		return L_1;
	}
}
extern "C"  PlayableHandle_t1095853803  AnimationMotionXToDeltaPlayable_GetHandle_m1319190040_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimationMotionXToDeltaPlayable_t272231551 * _thisAdjusted = reinterpret_cast<AnimationMotionXToDeltaPlayable_t272231551 *>(__this + 1);
	return AnimationMotionXToDeltaPlayable_GetHandle_m1319190040(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Animations.AnimationMotionXToDeltaPlayable::Equals(UnityEngine.Animations.AnimationMotionXToDeltaPlayable)
extern "C" IL2CPP_METHOD_ATTR bool AnimationMotionXToDeltaPlayable_Equals_m3896842955 (AnimationMotionXToDeltaPlayable_t272231551 * __this, AnimationMotionXToDeltaPlayable_t272231551  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		PlayableHandle_t1095853803  L_0 = AnimationMotionXToDeltaPlayable_GetHandle_m1319190040(__this, /*hidden argument*/NULL);
		PlayableHandle_t1095853803  L_1 = AnimationMotionXToDeltaPlayable_GetHandle_m1319190040((&___other0), /*hidden argument*/NULL);
		bool L_2 = PlayableHandle_op_Equality_m3344837515(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
extern "C"  bool AnimationMotionXToDeltaPlayable_Equals_m3896842955_AdjustorThunk (RuntimeObject * __this, AnimationMotionXToDeltaPlayable_t272231551  ___other0, const RuntimeMethod* method)
{
	AnimationMotionXToDeltaPlayable_t272231551 * _thisAdjusted = reinterpret_cast<AnimationMotionXToDeltaPlayable_t272231551 *>(__this + 1);
	return AnimationMotionXToDeltaPlayable_Equals_m3896842955(_thisAdjusted, ___other0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Animations.AnimationOffsetPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
extern "C" IL2CPP_METHOD_ATTR void AnimationOffsetPlayable__ctor_m577157274 (AnimationOffsetPlayable_t2887420414 * __this, PlayableHandle_t1095853803  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationOffsetPlayable__ctor_m577157274_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = PlayableHandle_IsValid_m777349566((&___handle0), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		bool L_1 = PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t2887420414_m2033286094((&___handle0), /*hidden argument*/PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t2887420414_m2033286094_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		InvalidCastException_t3927145244 * L_2 = (InvalidCastException_t3927145244 *)il2cpp_codegen_object_new(InvalidCastException_t3927145244_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m318645277(L_2, _stringLiteral783105886, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,AnimationOffsetPlayable__ctor_m577157274_RuntimeMethod_var);
	}

IL_0025:
	{
	}

IL_0026:
	{
		PlayableHandle_t1095853803  L_3 = ___handle0;
		__this->set_m_Handle_0(L_3);
		return;
	}
}
extern "C"  void AnimationOffsetPlayable__ctor_m577157274_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t1095853803  ___handle0, const RuntimeMethod* method)
{
	AnimationOffsetPlayable_t2887420414 * _thisAdjusted = reinterpret_cast<AnimationOffsetPlayable_t2887420414 *>(__this + 1);
	AnimationOffsetPlayable__ctor_m577157274(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationOffsetPlayable::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t1095853803  AnimationOffsetPlayable_GetHandle_m449079993 (AnimationOffsetPlayable_t2887420414 * __this, const RuntimeMethod* method)
{
	PlayableHandle_t1095853803  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		PlayableHandle_t1095853803  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		PlayableHandle_t1095853803  L_1 = V_0;
		return L_1;
	}
}
extern "C"  PlayableHandle_t1095853803  AnimationOffsetPlayable_GetHandle_m449079993_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimationOffsetPlayable_t2887420414 * _thisAdjusted = reinterpret_cast<AnimationOffsetPlayable_t2887420414 *>(__this + 1);
	return AnimationOffsetPlayable_GetHandle_m449079993(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Animations.AnimationOffsetPlayable::Equals(UnityEngine.Animations.AnimationOffsetPlayable)
extern "C" IL2CPP_METHOD_ATTR bool AnimationOffsetPlayable_Equals_m2902253045 (AnimationOffsetPlayable_t2887420414 * __this, AnimationOffsetPlayable_t2887420414  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationOffsetPlayable_Equals_m2902253045_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t1095853803  L_0 = AnimationOffsetPlayable_GetHandle_m449079993((&___other0), /*hidden argument*/NULL);
		PlayableHandle_t1095853803  L_1 = L_0;
		RuntimeObject * L_2 = Box(PlayableHandle_t1095853803_il2cpp_TypeInfo_var, &L_1);
		RuntimeObject * L_3 = Box(AnimationOffsetPlayable_t2887420414_il2cpp_TypeInfo_var, __this);
		NullCheck(L_3);
		bool L_4 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_3, L_2);
		*__this = *(AnimationOffsetPlayable_t2887420414 *)UnBox(L_3);
		V_0 = L_4;
		goto IL_001f;
	}

IL_001f:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
extern "C"  bool AnimationOffsetPlayable_Equals_m2902253045_AdjustorThunk (RuntimeObject * __this, AnimationOffsetPlayable_t2887420414  ___other0, const RuntimeMethod* method)
{
	AnimationOffsetPlayable_t2887420414 * _thisAdjusted = reinterpret_cast<AnimationOffsetPlayable_t2887420414 *>(__this + 1);
	return AnimationOffsetPlayable_Equals_m2902253045(_thisAdjusted, ___other0, method);
}
// System.Void UnityEngine.Animations.AnimationOffsetPlayable::.cctor()
extern "C" IL2CPP_METHOD_ATTR void AnimationOffsetPlayable__cctor_m1029460816 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationOffsetPlayable__cctor_m1029460816_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlayableHandle_t1095853803  L_0 = PlayableHandle_get_Null_m218234861(NULL /*static, unused*/, /*hidden argument*/NULL);
		AnimationOffsetPlayable_t2887420414  L_1;
		memset(&L_1, 0, sizeof(L_1));
		AnimationOffsetPlayable__ctor_m577157274((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationOffsetPlayable_t2887420414_StaticFields*)il2cpp_codegen_static_fields_for(AnimationOffsetPlayable_t2887420414_il2cpp_TypeInfo_var))->set_m_NullPlayable_1(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
extern "C" IL2CPP_METHOD_ATTR void AnimatorControllerPlayable__ctor_m3584989806 (AnimatorControllerPlayable_t1015767841 * __this, PlayableHandle_t1095853803  ___handle0, const RuntimeMethod* method)
{
	{
		PlayableHandle_t1095853803  L_0 = PlayableHandle_get_Null_m218234861(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_Handle_0(L_0);
		PlayableHandle_t1095853803  L_1 = ___handle0;
		AnimatorControllerPlayable_SetHandle_m2260644454(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void AnimatorControllerPlayable__ctor_m3584989806_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t1095853803  ___handle0, const RuntimeMethod* method)
{
	AnimatorControllerPlayable_t1015767841 * _thisAdjusted = reinterpret_cast<AnimatorControllerPlayable_t1015767841 *>(__this + 1);
	AnimatorControllerPlayable__ctor_m3584989806(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimatorControllerPlayable::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t1095853803  AnimatorControllerPlayable_GetHandle_m2425630109 (AnimatorControllerPlayable_t1015767841 * __this, const RuntimeMethod* method)
{
	PlayableHandle_t1095853803  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		PlayableHandle_t1095853803  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		PlayableHandle_t1095853803  L_1 = V_0;
		return L_1;
	}
}
extern "C"  PlayableHandle_t1095853803  AnimatorControllerPlayable_GetHandle_m2425630109_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimatorControllerPlayable_t1015767841 * _thisAdjusted = reinterpret_cast<AnimatorControllerPlayable_t1015767841 *>(__this + 1);
	return AnimatorControllerPlayable_GetHandle_m2425630109(_thisAdjusted, method);
}
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::SetHandle(UnityEngine.Playables.PlayableHandle)
extern "C" IL2CPP_METHOD_ATTR void AnimatorControllerPlayable_SetHandle_m2260644454 (AnimatorControllerPlayable_t1015767841 * __this, PlayableHandle_t1095853803  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimatorControllerPlayable_SetHandle_m2260644454_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlayableHandle_t1095853803 * L_0 = __this->get_address_of_m_Handle_0();
		bool L_1 = PlayableHandle_IsValid_m777349566(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		InvalidOperationException_t56020091 * L_2 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_2, _stringLiteral3786669396, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,AnimatorControllerPlayable_SetHandle_m2260644454_RuntimeMethod_var);
	}

IL_001c:
	{
		bool L_3 = PlayableHandle_IsValid_m777349566((&___handle0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0041;
		}
	}
	{
		bool L_4 = PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_t1015767841_m3416945299((&___handle0), /*hidden argument*/PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_t1015767841_m3416945299_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_0040;
		}
	}
	{
		InvalidCastException_t3927145244 * L_5 = (InvalidCastException_t3927145244 *)il2cpp_codegen_object_new(InvalidCastException_t3927145244_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m318645277(L_5, _stringLiteral2761492165, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5,AnimatorControllerPlayable_SetHandle_m2260644454_RuntimeMethod_var);
	}

IL_0040:
	{
	}

IL_0041:
	{
		PlayableHandle_t1095853803  L_6 = ___handle0;
		__this->set_m_Handle_0(L_6);
		return;
	}
}
extern "C"  void AnimatorControllerPlayable_SetHandle_m2260644454_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t1095853803  ___handle0, const RuntimeMethod* method)
{
	AnimatorControllerPlayable_t1015767841 * _thisAdjusted = reinterpret_cast<AnimatorControllerPlayable_t1015767841 *>(__this + 1);
	AnimatorControllerPlayable_SetHandle_m2260644454(_thisAdjusted, ___handle0, method);
}
// System.Boolean UnityEngine.Animations.AnimatorControllerPlayable::Equals(UnityEngine.Animations.AnimatorControllerPlayable)
extern "C" IL2CPP_METHOD_ATTR bool AnimatorControllerPlayable_Equals_m3421642688 (AnimatorControllerPlayable_t1015767841 * __this, AnimatorControllerPlayable_t1015767841  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		PlayableHandle_t1095853803  L_0 = AnimatorControllerPlayable_GetHandle_m2425630109(__this, /*hidden argument*/NULL);
		PlayableHandle_t1095853803  L_1 = AnimatorControllerPlayable_GetHandle_m2425630109((&___other0), /*hidden argument*/NULL);
		bool L_2 = PlayableHandle_op_Equality_m3344837515(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
extern "C"  bool AnimatorControllerPlayable_Equals_m3421642688_AdjustorThunk (RuntimeObject * __this, AnimatorControllerPlayable_t1015767841  ___other0, const RuntimeMethod* method)
{
	AnimatorControllerPlayable_t1015767841 * _thisAdjusted = reinterpret_cast<AnimatorControllerPlayable_t1015767841 *>(__this + 1);
	return AnimatorControllerPlayable_Equals_m3421642688(_thisAdjusted, ___other0, method);
}
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::.cctor()
extern "C" IL2CPP_METHOD_ATTR void AnimatorControllerPlayable__cctor_m3439442711 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimatorControllerPlayable__cctor_m3439442711_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlayableHandle_t1095853803  L_0 = PlayableHandle_get_Null_m218234861(NULL /*static, unused*/, /*hidden argument*/NULL);
		AnimatorControllerPlayable_t1015767841  L_1;
		memset(&L_1, 0, sizeof(L_1));
		AnimatorControllerPlayable__ctor_m3584989806((&L_1), L_0, /*hidden argument*/NULL);
		((AnimatorControllerPlayable_t1015767841_StaticFields*)il2cpp_codegen_static_fields_for(AnimatorControllerPlayable_t1015767841_il2cpp_TypeInfo_var))->set_m_NullPlayable_1(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.AnimationState::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AnimationState__ctor_m1160185825 (AnimationState_t1108360407 * __this, const RuntimeMethod* method)
{
	{
		TrackedReference__ctor_m3086593239(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.AnimationState::get_enabled()
extern "C" IL2CPP_METHOD_ATTR bool AnimationState_get_enabled_m1409471819 (AnimationState_t1108360407 * __this, const RuntimeMethod* method)
{
	typedef bool (*AnimationState_get_enabled_m1409471819_ftn) (AnimationState_t1108360407 *);
	static AnimationState_get_enabled_m1409471819_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_get_enabled_m1409471819_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::get_enabled()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AnimationState::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void AnimationState_set_enabled_m2387746852 (AnimationState_t1108360407 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*AnimationState_set_enabled_m2387746852_ftn) (AnimationState_t1108360407 *, bool);
	static AnimationState_set_enabled_m2387746852_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_set_enabled_m2387746852_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::set_enabled(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.AnimationState::get_weight()
extern "C" IL2CPP_METHOD_ATTR float AnimationState_get_weight_m3390467526 (AnimationState_t1108360407 * __this, const RuntimeMethod* method)
{
	typedef float (*AnimationState_get_weight_m3390467526_ftn) (AnimationState_t1108360407 *);
	static AnimationState_get_weight_m3390467526_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_get_weight_m3390467526_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::get_weight()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AnimationState::set_weight(System.Single)
extern "C" IL2CPP_METHOD_ATTR void AnimationState_set_weight_m907168059 (AnimationState_t1108360407 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*AnimationState_set_weight_m907168059_ftn) (AnimationState_t1108360407 *, float);
	static AnimationState_set_weight_m907168059_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_set_weight_m907168059_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::set_weight(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.WrapMode UnityEngine.AnimationState::get_wrapMode()
extern "C" IL2CPP_METHOD_ATTR int32_t AnimationState_get_wrapMode_m1186389710 (AnimationState_t1108360407 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*AnimationState_get_wrapMode_m1186389710_ftn) (AnimationState_t1108360407 *);
	static AnimationState_get_wrapMode_m1186389710_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_get_wrapMode_m1186389710_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::get_wrapMode()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AnimationState::set_wrapMode(UnityEngine.WrapMode)
extern "C" IL2CPP_METHOD_ATTR void AnimationState_set_wrapMode_m932751232 (AnimationState_t1108360407 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*AnimationState_set_wrapMode_m932751232_ftn) (AnimationState_t1108360407 *, int32_t);
	static AnimationState_set_wrapMode_m932751232_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_set_wrapMode_m932751232_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::set_wrapMode(UnityEngine.WrapMode)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.AnimationState::get_time()
extern "C" IL2CPP_METHOD_ATTR float AnimationState_get_time_m2889734845 (AnimationState_t1108360407 * __this, const RuntimeMethod* method)
{
	typedef float (*AnimationState_get_time_m2889734845_ftn) (AnimationState_t1108360407 *);
	static AnimationState_get_time_m2889734845_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_get_time_m2889734845_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::get_time()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AnimationState::set_time(System.Single)
extern "C" IL2CPP_METHOD_ATTR void AnimationState_set_time_m3753967308 (AnimationState_t1108360407 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*AnimationState_set_time_m3753967308_ftn) (AnimationState_t1108360407 *, float);
	static AnimationState_set_time_m3753967308_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_set_time_m3753967308_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::set_time(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.AnimationState::get_normalizedTime()
extern "C" IL2CPP_METHOD_ATTR float AnimationState_get_normalizedTime_m1675455451 (AnimationState_t1108360407 * __this, const RuntimeMethod* method)
{
	typedef float (*AnimationState_get_normalizedTime_m1675455451_ftn) (AnimationState_t1108360407 *);
	static AnimationState_get_normalizedTime_m1675455451_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_get_normalizedTime_m1675455451_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::get_normalizedTime()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AnimationState::set_normalizedTime(System.Single)
extern "C" IL2CPP_METHOD_ATTR void AnimationState_set_normalizedTime_m1781758901 (AnimationState_t1108360407 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*AnimationState_set_normalizedTime_m1781758901_ftn) (AnimationState_t1108360407 *, float);
	static AnimationState_set_normalizedTime_m1781758901_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_set_normalizedTime_m1781758901_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::set_normalizedTime(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.AnimationState::get_speed()
extern "C" IL2CPP_METHOD_ATTR float AnimationState_get_speed_m1122656433 (AnimationState_t1108360407 * __this, const RuntimeMethod* method)
{
	typedef float (*AnimationState_get_speed_m1122656433_ftn) (AnimationState_t1108360407 *);
	static AnimationState_get_speed_m1122656433_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_get_speed_m1122656433_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::get_speed()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AnimationState::set_speed(System.Single)
extern "C" IL2CPP_METHOD_ATTR void AnimationState_set_speed_m2787468711 (AnimationState_t1108360407 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*AnimationState_set_speed_m2787468711_ftn) (AnimationState_t1108360407 *, float);
	static AnimationState_set_speed_m2787468711_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_set_speed_m2787468711_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::set_speed(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.AnimationState::get_normalizedSpeed()
extern "C" IL2CPP_METHOD_ATTR float AnimationState_get_normalizedSpeed_m919446979 (AnimationState_t1108360407 * __this, const RuntimeMethod* method)
{
	typedef float (*AnimationState_get_normalizedSpeed_m919446979_ftn) (AnimationState_t1108360407 *);
	static AnimationState_get_normalizedSpeed_m919446979_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_get_normalizedSpeed_m919446979_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::get_normalizedSpeed()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AnimationState::set_normalizedSpeed(System.Single)
extern "C" IL2CPP_METHOD_ATTR void AnimationState_set_normalizedSpeed_m2421955570 (AnimationState_t1108360407 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*AnimationState_set_normalizedSpeed_m2421955570_ftn) (AnimationState_t1108360407 *, float);
	static AnimationState_set_normalizedSpeed_m2421955570_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_set_normalizedSpeed_m2421955570_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::set_normalizedSpeed(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.AnimationState::get_length()
extern "C" IL2CPP_METHOD_ATTR float AnimationState_get_length_m2177740858 (AnimationState_t1108360407 * __this, const RuntimeMethod* method)
{
	typedef float (*AnimationState_get_length_m2177740858_ftn) (AnimationState_t1108360407 *);
	static AnimationState_get_length_m2177740858_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_get_length_m2177740858_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::get_length()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Int32 UnityEngine.AnimationState::get_layer()
extern "C" IL2CPP_METHOD_ATTR int32_t AnimationState_get_layer_m2824709918 (AnimationState_t1108360407 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*AnimationState_get_layer_m2824709918_ftn) (AnimationState_t1108360407 *);
	static AnimationState_get_layer_m2824709918_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_get_layer_m2824709918_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::get_layer()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AnimationState::set_layer(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void AnimationState_set_layer_m2184847998 (AnimationState_t1108360407 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*AnimationState_set_layer_m2184847998_ftn) (AnimationState_t1108360407 *, int32_t);
	static AnimationState_set_layer_m2184847998_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_set_layer_m2184847998_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::set_layer(System.Int32)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.AnimationClip UnityEngine.AnimationState::get_clip()
extern "C" IL2CPP_METHOD_ATTR AnimationClip_t2318505987 * AnimationState_get_clip_m3280372436 (AnimationState_t1108360407 * __this, const RuntimeMethod* method)
{
	typedef AnimationClip_t2318505987 * (*AnimationState_get_clip_m3280372436_ftn) (AnimationState_t1108360407 *);
	static AnimationState_get_clip_m3280372436_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_get_clip_m3280372436_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::get_clip()");
	AnimationClip_t2318505987 * retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AnimationState::AddMixingTransform(UnityEngine.Transform,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void AnimationState_AddMixingTransform_m3342983193 (AnimationState_t1108360407 * __this, Transform_t3600365921 * ___mix0, bool ___recursive1, const RuntimeMethod* method)
{
	typedef void (*AnimationState_AddMixingTransform_m3342983193_ftn) (AnimationState_t1108360407 *, Transform_t3600365921 *, bool);
	static AnimationState_AddMixingTransform_m3342983193_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_AddMixingTransform_m3342983193_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::AddMixingTransform(UnityEngine.Transform,System.Boolean)");
	_il2cpp_icall_func(__this, ___mix0, ___recursive1);
}
// System.Void UnityEngine.AnimationState::AddMixingTransform(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void AnimationState_AddMixingTransform_m466153312 (AnimationState_t1108360407 * __this, Transform_t3600365921 * ___mix0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)1;
		Transform_t3600365921 * L_0 = ___mix0;
		bool L_1 = V_0;
		AnimationState_AddMixingTransform_m3342983193(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AnimationState::RemoveMixingTransform(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void AnimationState_RemoveMixingTransform_m89676512 (AnimationState_t1108360407 * __this, Transform_t3600365921 * ___mix0, const RuntimeMethod* method)
{
	typedef void (*AnimationState_RemoveMixingTransform_m89676512_ftn) (AnimationState_t1108360407 *, Transform_t3600365921 *);
	static AnimationState_RemoveMixingTransform_m89676512_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_RemoveMixingTransform_m89676512_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::RemoveMixingTransform(UnityEngine.Transform)");
	_il2cpp_icall_func(__this, ___mix0);
}
// System.String UnityEngine.AnimationState::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* AnimationState_get_name_m2426172525 (AnimationState_t1108360407 * __this, const RuntimeMethod* method)
{
	typedef String_t* (*AnimationState_get_name_m2426172525_ftn) (AnimationState_t1108360407 *);
	static AnimationState_get_name_m2426172525_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_get_name_m2426172525_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::get_name()");
	String_t* retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AnimationState::set_name(System.String)
extern "C" IL2CPP_METHOD_ATTR void AnimationState_set_name_m4122255825 (AnimationState_t1108360407 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	typedef void (*AnimationState_set_name_m4122255825_ftn) (AnimationState_t1108360407 *, String_t*);
	static AnimationState_set_name_m4122255825_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_set_name_m4122255825_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::set_name(System.String)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.AnimationBlendMode UnityEngine.AnimationState::get_blendMode()
extern "C" IL2CPP_METHOD_ATTR int32_t AnimationState_get_blendMode_m1507772301 (AnimationState_t1108360407 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*AnimationState_get_blendMode_m1507772301_ftn) (AnimationState_t1108360407 *);
	static AnimationState_get_blendMode_m1507772301_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_get_blendMode_m1507772301_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::get_blendMode()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AnimationState::set_blendMode(UnityEngine.AnimationBlendMode)
extern "C" IL2CPP_METHOD_ATTR void AnimationState_set_blendMode_m3481502353 (AnimationState_t1108360407 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*AnimationState_set_blendMode_m3481502353_ftn) (AnimationState_t1108360407 *, int32_t);
	static AnimationState_set_blendMode_m3481502353_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_set_blendMode_m3481502353_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::set_blendMode(UnityEngine.AnimationBlendMode)");
	_il2cpp_icall_func(__this, ___value0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Animator::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Animator__ctor_m4069340359 (Animator_t434523843 * __this, const RuntimeMethod* method)
{
	{
		Behaviour__ctor_m346897018(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Animator::get_isOptimizable()
extern "C" IL2CPP_METHOD_ATTR bool Animator_get_isOptimizable_m1228984575 (Animator_t434523843 * __this, const RuntimeMethod* method)
{
	typedef bool (*Animator_get_isOptimizable_m1228984575_ftn) (Animator_t434523843 *);
	static Animator_get_isOptimizable_m1228984575_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_isOptimizable_m1228984575_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_isOptimizable()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.Animator::get_isHuman()
extern "C" IL2CPP_METHOD_ATTR bool Animator_get_isHuman_m3044300138 (Animator_t434523843 * __this, const RuntimeMethod* method)
{
	typedef bool (*Animator_get_isHuman_m3044300138_ftn) (Animator_t434523843 *);
	static Animator_get_isHuman_m3044300138_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_isHuman_m3044300138_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_isHuman()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.Animator::get_hasRootMotion()
extern "C" IL2CPP_METHOD_ATTR bool Animator_get_hasRootMotion_m2448300759 (Animator_t434523843 * __this, const RuntimeMethod* method)
{
	typedef bool (*Animator_get_hasRootMotion_m2448300759_ftn) (Animator_t434523843 *);
	static Animator_get_hasRootMotion_m2448300759_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_hasRootMotion_m2448300759_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_hasRootMotion()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Single UnityEngine.Animator::get_humanScale()
extern "C" IL2CPP_METHOD_ATTR float Animator_get_humanScale_m2669489364 (Animator_t434523843 * __this, const RuntimeMethod* method)
{
	typedef float (*Animator_get_humanScale_m2669489364_ftn) (Animator_t434523843 *);
	static Animator_get_humanScale_m2669489364_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_humanScale_m2669489364_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_humanScale()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.Animator::get_isInitialized()
extern "C" IL2CPP_METHOD_ATTR bool Animator_get_isInitialized_m4178359594 (Animator_t434523843 * __this, const RuntimeMethod* method)
{
	typedef bool (*Animator_get_isInitialized_m4178359594_ftn) (Animator_t434523843 *);
	static Animator_get_isInitialized_m4178359594_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_isInitialized_m4178359594_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_isInitialized()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Single UnityEngine.Animator::GetFloat(System.String)
extern "C" IL2CPP_METHOD_ATTR float Animator_GetFloat_m2615459165 (Animator_t434523843 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		String_t* L_0 = ___name0;
		float L_1 = Animator_GetFloatString_m3180836206(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Animator::GetFloat(System.Int32)
extern "C" IL2CPP_METHOD_ATTR float Animator_GetFloat_m2180732288 (Animator_t434523843 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		int32_t L_0 = ___id0;
		float L_1 = Animator_GetFloatID_m3658774233(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetFloat_m1701463607 (Animator_t434523843 * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		float L_1 = ___value1;
		Animator_SetFloatString_m417479335(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetFloat_m2277095572 (Animator_t434523843 * __this, String_t* ___name0, float ___value1, float ___dampTime2, float ___deltaTime3, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		float L_1 = ___value1;
		float L_2 = ___dampTime2;
		float L_3 = ___deltaTime3;
		Animator_SetFloatStringDamp_m1913837802(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetFloat(System.Int32,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetFloat_m2677061968 (Animator_t434523843 * __this, int32_t ___id0, float ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___id0;
		float L_1 = ___value1;
		Animator_SetFloatID_m759961653(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetFloat(System.Int32,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetFloat_m2629623791 (Animator_t434523843 * __this, int32_t ___id0, float ___value1, float ___dampTime2, float ___deltaTime3, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___id0;
		float L_1 = ___value1;
		float L_2 = ___dampTime2;
		float L_3 = ___deltaTime3;
		Animator_SetFloatIDDamp_m1611756056(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Animator::GetBool(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Animator_GetBool_m2865822416 (Animator_t434523843 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		String_t* L_0 = ___name0;
		bool L_1 = Animator_GetBoolString_m4261382084(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Animator::GetBool(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Animator_GetBool_m2974171932 (Animator_t434523843 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = ___id0;
		bool L_1 = Animator_GetBoolID_m3211650753(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetBool_m234840832 (Animator_t434523843 * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		bool L_1 = ___value1;
		Animator_SetBoolString_m1913721706(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetBool(System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetBool_m2873262441 (Animator_t434523843 * __this, int32_t ___id0, bool ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___id0;
		bool L_1 = ___value1;
		Animator_SetBoolID_m2106676274(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.Animator::GetInteger(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t Animator_GetInteger_m961454402 (Animator_t434523843 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___name0;
		int32_t L_1 = Animator_GetIntegerString_m2483385635(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 UnityEngine.Animator::GetInteger(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Animator_GetInteger_m2539041872 (Animator_t434523843 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___id0;
		int32_t L_1 = Animator_GetIntegerID_m3539387357(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Animator::SetInteger(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetInteger_m2337695006 (Animator_t434523843 * __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		int32_t L_1 = ___value1;
		Animator_SetIntegerString_m3069556331(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetInteger(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetInteger_m1764346092 (Animator_t434523843 * __this, int32_t ___id0, int32_t ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___id0;
		int32_t L_1 = ___value1;
		Animator_SetIntegerID_m1197891907(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetTrigger(System.String)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetTrigger_m2134052629 (Animator_t434523843 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		Animator_SetTriggerString_m2612407758(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetTrigger(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetTrigger_m332916954 (Animator_t434523843 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___id0;
		Animator_SetTriggerID_m9043433(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::ResetTrigger(System.String)
extern "C" IL2CPP_METHOD_ATTR void Animator_ResetTrigger_m2321267720 (Animator_t434523843 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		Animator_ResetTriggerString_m394341254(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::ResetTrigger(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Animator_ResetTrigger_m4134087415 (Animator_t434523843 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___id0;
		Animator_ResetTriggerID_m1779548927(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Animator::IsParameterControlledByCurve(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Animator_IsParameterControlledByCurve_m4249345953 (Animator_t434523843 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		String_t* L_0 = ___name0;
		bool L_1 = Animator_IsParameterControlledByCurveString_m3449841540(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Animator::IsParameterControlledByCurve(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Animator_IsParameterControlledByCurve_m1804608779 (Animator_t434523843 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = ___id0;
		bool L_1 = Animator_IsParameterControlledByCurveID_m1238520650(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Vector3 UnityEngine.Animator::get_deltaPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Animator_get_deltaPosition_m3159651528 (Animator_t434523843 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Animator_INTERNAL_get_deltaPosition_m3497372174(__this, (&V_0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_0 = V_0;
		V_1 = L_0;
		goto IL_0010;
	}

IL_0010:
	{
		Vector3_t3722313464  L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.Animator::INTERNAL_get_deltaPosition(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Animator_INTERNAL_get_deltaPosition_m3497372174 (Animator_t434523843 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Animator_INTERNAL_get_deltaPosition_m3497372174_ftn) (Animator_t434523843 *, Vector3_t3722313464 *);
	static Animator_INTERNAL_get_deltaPosition_m3497372174_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_INTERNAL_get_deltaPosition_m3497372174_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::INTERNAL_get_deltaPosition(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Quaternion UnityEngine.Animator::get_deltaRotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Animator_get_deltaRotation_m2491030442 (Animator_t434523843 * __this, const RuntimeMethod* method)
{
	Quaternion_t2301928331  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Quaternion_t2301928331  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Animator_INTERNAL_get_deltaRotation_m909153325(__this, (&V_0), /*hidden argument*/NULL);
		Quaternion_t2301928331  L_0 = V_0;
		V_1 = L_0;
		goto IL_0010;
	}

IL_0010:
	{
		Quaternion_t2301928331  L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.Animator::INTERNAL_get_deltaRotation(UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR void Animator_INTERNAL_get_deltaRotation_m909153325 (Animator_t434523843 * __this, Quaternion_t2301928331 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Animator_INTERNAL_get_deltaRotation_m909153325_ftn) (Animator_t434523843 *, Quaternion_t2301928331 *);
	static Animator_INTERNAL_get_deltaRotation_m909153325_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_INTERNAL_get_deltaRotation_m909153325_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::INTERNAL_get_deltaRotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Vector3 UnityEngine.Animator::get_velocity()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Animator_get_velocity_m4047970592 (Animator_t434523843 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Animator_INTERNAL_get_velocity_m895058586(__this, (&V_0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_0 = V_0;
		V_1 = L_0;
		goto IL_0010;
	}

IL_0010:
	{
		Vector3_t3722313464  L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.Animator::INTERNAL_get_velocity(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Animator_INTERNAL_get_velocity_m895058586 (Animator_t434523843 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Animator_INTERNAL_get_velocity_m895058586_ftn) (Animator_t434523843 *, Vector3_t3722313464 *);
	static Animator_INTERNAL_get_velocity_m895058586_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_INTERNAL_get_velocity_m895058586_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::INTERNAL_get_velocity(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Vector3 UnityEngine.Animator::get_angularVelocity()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Animator_get_angularVelocity_m1374481490 (Animator_t434523843 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Animator_INTERNAL_get_angularVelocity_m3997922647(__this, (&V_0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_0 = V_0;
		V_1 = L_0;
		goto IL_0010;
	}

IL_0010:
	{
		Vector3_t3722313464  L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.Animator::INTERNAL_get_angularVelocity(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Animator_INTERNAL_get_angularVelocity_m3997922647 (Animator_t434523843 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Animator_INTERNAL_get_angularVelocity_m3997922647_ftn) (Animator_t434523843 *, Vector3_t3722313464 *);
	static Animator_INTERNAL_get_angularVelocity_m3997922647_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_INTERNAL_get_angularVelocity_m3997922647_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::INTERNAL_get_angularVelocity(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Vector3 UnityEngine.Animator::get_rootPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Animator_get_rootPosition_m3382778530 (Animator_t434523843 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Animator_INTERNAL_get_rootPosition_m4000532020(__this, (&V_0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_0 = V_0;
		V_1 = L_0;
		goto IL_0010;
	}

IL_0010:
	{
		Vector3_t3722313464  L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.Animator::set_rootPosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Animator_set_rootPosition_m4105074837 (Animator_t434523843 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	{
		Animator_INTERNAL_set_rootPosition_m937559408(__this, (&___value0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::INTERNAL_get_rootPosition(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Animator_INTERNAL_get_rootPosition_m4000532020 (Animator_t434523843 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Animator_INTERNAL_get_rootPosition_m4000532020_ftn) (Animator_t434523843 *, Vector3_t3722313464 *);
	static Animator_INTERNAL_get_rootPosition_m4000532020_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_INTERNAL_get_rootPosition_m4000532020_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::INTERNAL_get_rootPosition(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Animator::INTERNAL_set_rootPosition(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Animator_INTERNAL_set_rootPosition_m937559408 (Animator_t434523843 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Animator_INTERNAL_set_rootPosition_m937559408_ftn) (Animator_t434523843 *, Vector3_t3722313464 *);
	static Animator_INTERNAL_set_rootPosition_m937559408_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_INTERNAL_set_rootPosition_m937559408_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::INTERNAL_set_rootPosition(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Quaternion UnityEngine.Animator::get_rootRotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Animator_get_rootRotation_m1774376365 (Animator_t434523843 * __this, const RuntimeMethod* method)
{
	Quaternion_t2301928331  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Quaternion_t2301928331  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Animator_INTERNAL_get_rootRotation_m1431856062(__this, (&V_0), /*hidden argument*/NULL);
		Quaternion_t2301928331  L_0 = V_0;
		V_1 = L_0;
		goto IL_0010;
	}

IL_0010:
	{
		Quaternion_t2301928331  L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.Animator::set_rootRotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Animator_set_rootRotation_m36524659 (Animator_t434523843 * __this, Quaternion_t2301928331  ___value0, const RuntimeMethod* method)
{
	{
		Animator_INTERNAL_set_rootRotation_m2517397836(__this, (&___value0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::INTERNAL_get_rootRotation(UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR void Animator_INTERNAL_get_rootRotation_m1431856062 (Animator_t434523843 * __this, Quaternion_t2301928331 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Animator_INTERNAL_get_rootRotation_m1431856062_ftn) (Animator_t434523843 *, Quaternion_t2301928331 *);
	static Animator_INTERNAL_get_rootRotation_m1431856062_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_INTERNAL_get_rootRotation_m1431856062_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::INTERNAL_get_rootRotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Animator::INTERNAL_set_rootRotation(UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR void Animator_INTERNAL_set_rootRotation_m2517397836 (Animator_t434523843 * __this, Quaternion_t2301928331 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Animator_INTERNAL_set_rootRotation_m2517397836_ftn) (Animator_t434523843 *, Quaternion_t2301928331 *);
	static Animator_INTERNAL_set_rootRotation_m2517397836_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_INTERNAL_set_rootRotation_m2517397836_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::INTERNAL_set_rootRotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.Animator::get_applyRootMotion()
extern "C" IL2CPP_METHOD_ATTR bool Animator_get_applyRootMotion_m1347111243 (Animator_t434523843 * __this, const RuntimeMethod* method)
{
	typedef bool (*Animator_get_applyRootMotion_m1347111243_ftn) (Animator_t434523843 *);
	static Animator_get_applyRootMotion_m1347111243_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_applyRootMotion_m1347111243_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_applyRootMotion()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Animator::set_applyRootMotion(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Animator_set_applyRootMotion_m3182098314 (Animator_t434523843 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*Animator_set_applyRootMotion_m3182098314_ftn) (Animator_t434523843 *, bool);
	static Animator_set_applyRootMotion_m3182098314_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_applyRootMotion_m3182098314_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_applyRootMotion(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.Animator::get_linearVelocityBlending()
extern "C" IL2CPP_METHOD_ATTR bool Animator_get_linearVelocityBlending_m1673605818 (Animator_t434523843 * __this, const RuntimeMethod* method)
{
	typedef bool (*Animator_get_linearVelocityBlending_m1673605818_ftn) (Animator_t434523843 *);
	static Animator_get_linearVelocityBlending_m1673605818_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_linearVelocityBlending_m1673605818_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_linearVelocityBlending()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Animator::set_linearVelocityBlending(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Animator_set_linearVelocityBlending_m2078007212 (Animator_t434523843 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*Animator_set_linearVelocityBlending_m2078007212_ftn) (Animator_t434523843 *, bool);
	static Animator_set_linearVelocityBlending_m2078007212_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_linearVelocityBlending_m2078007212_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_linearVelocityBlending(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.AnimatorUpdateMode UnityEngine.Animator::get_updateMode()
extern "C" IL2CPP_METHOD_ATTR int32_t Animator_get_updateMode_m3290141822 (Animator_t434523843 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*Animator_get_updateMode_m3290141822_ftn) (Animator_t434523843 *);
	static Animator_get_updateMode_m3290141822_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_updateMode_m3290141822_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_updateMode()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Animator::set_updateMode(UnityEngine.AnimatorUpdateMode)
extern "C" IL2CPP_METHOD_ATTR void Animator_set_updateMode_m2468103335 (Animator_t434523843 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*Animator_set_updateMode_m2468103335_ftn) (Animator_t434523843 *, int32_t);
	static Animator_set_updateMode_m2468103335_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_updateMode_m2468103335_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_updateMode(UnityEngine.AnimatorUpdateMode)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.Animator::get_hasTransformHierarchy()
extern "C" IL2CPP_METHOD_ATTR bool Animator_get_hasTransformHierarchy_m4093971224 (Animator_t434523843 * __this, const RuntimeMethod* method)
{
	typedef bool (*Animator_get_hasTransformHierarchy_m4093971224_ftn) (Animator_t434523843 *);
	static Animator_get_hasTransformHierarchy_m4093971224_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_hasTransformHierarchy_m4093971224_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_hasTransformHierarchy()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Single UnityEngine.Animator::get_gravityWeight()
extern "C" IL2CPP_METHOD_ATTR float Animator_get_gravityWeight_m1523032652 (Animator_t434523843 * __this, const RuntimeMethod* method)
{
	typedef float (*Animator_get_gravityWeight_m1523032652_ftn) (Animator_t434523843 *);
	static Animator_get_gravityWeight_m1523032652_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_gravityWeight_m1523032652_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_gravityWeight()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.Vector3 UnityEngine.Animator::get_bodyPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Animator_get_bodyPosition_m2940112464 (Animator_t434523843 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Animator_CheckIfInIKPass_m1701567706(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_0 = Animator_GetBodyPositionInternal_m3916025324(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0013;
	}

IL_0013:
	{
		Vector3_t3722313464  L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Animator::set_bodyPosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Animator_set_bodyPosition_m1171301473 (Animator_t434523843 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	{
		Animator_CheckIfInIKPass_m1701567706(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_0 = ___value0;
		Animator_SetBodyPositionInternal_m190439183(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Animator::GetBodyPositionInternal()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Animator_GetBodyPositionInternal_m3916025324 (Animator_t434523843 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Animator_INTERNAL_CALL_GetBodyPositionInternal_m2321400488(NULL /*static, unused*/, __this, (&V_0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_0 = V_0;
		V_1 = L_0;
		goto IL_0010;
	}

IL_0010:
	{
		Vector3_t3722313464  L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.Animator::INTERNAL_CALL_GetBodyPositionInternal(UnityEngine.Animator,UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Animator_INTERNAL_CALL_GetBodyPositionInternal_m2321400488 (RuntimeObject * __this /* static, unused */, Animator_t434523843 * ___self0, Vector3_t3722313464 * ___value1, const RuntimeMethod* method)
{
	typedef void (*Animator_INTERNAL_CALL_GetBodyPositionInternal_m2321400488_ftn) (Animator_t434523843 *, Vector3_t3722313464 *);
	static Animator_INTERNAL_CALL_GetBodyPositionInternal_m2321400488_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_INTERNAL_CALL_GetBodyPositionInternal_m2321400488_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::INTERNAL_CALL_GetBodyPositionInternal(UnityEngine.Animator,UnityEngine.Vector3&)");
	_il2cpp_icall_func(___self0, ___value1);
}
// System.Void UnityEngine.Animator::SetBodyPositionInternal(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetBodyPositionInternal_m190439183 (Animator_t434523843 * __this, Vector3_t3722313464  ___bodyPosition0, const RuntimeMethod* method)
{
	{
		Animator_INTERNAL_CALL_SetBodyPositionInternal_m2953883619(NULL /*static, unused*/, __this, (&___bodyPosition0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::INTERNAL_CALL_SetBodyPositionInternal(UnityEngine.Animator,UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Animator_INTERNAL_CALL_SetBodyPositionInternal_m2953883619 (RuntimeObject * __this /* static, unused */, Animator_t434523843 * ___self0, Vector3_t3722313464 * ___bodyPosition1, const RuntimeMethod* method)
{
	typedef void (*Animator_INTERNAL_CALL_SetBodyPositionInternal_m2953883619_ftn) (Animator_t434523843 *, Vector3_t3722313464 *);
	static Animator_INTERNAL_CALL_SetBodyPositionInternal_m2953883619_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_INTERNAL_CALL_SetBodyPositionInternal_m2953883619_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::INTERNAL_CALL_SetBodyPositionInternal(UnityEngine.Animator,UnityEngine.Vector3&)");
	_il2cpp_icall_func(___self0, ___bodyPosition1);
}
// UnityEngine.Quaternion UnityEngine.Animator::get_bodyRotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Animator_get_bodyRotation_m2416179877 (Animator_t434523843 * __this, const RuntimeMethod* method)
{
	Quaternion_t2301928331  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Animator_CheckIfInIKPass_m1701567706(__this, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_0 = Animator_GetBodyRotationInternal_m2352017373(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0013;
	}

IL_0013:
	{
		Quaternion_t2301928331  L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Animator::set_bodyRotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Animator_set_bodyRotation_m252641853 (Animator_t434523843 * __this, Quaternion_t2301928331  ___value0, const RuntimeMethod* method)
{
	{
		Animator_CheckIfInIKPass_m1701567706(__this, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_0 = ___value0;
		Animator_SetBodyRotationInternal_m1739652811(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Quaternion UnityEngine.Animator::GetBodyRotationInternal()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Animator_GetBodyRotationInternal_m2352017373 (Animator_t434523843 * __this, const RuntimeMethod* method)
{
	Quaternion_t2301928331  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Quaternion_t2301928331  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Animator_INTERNAL_CALL_GetBodyRotationInternal_m2466536780(NULL /*static, unused*/, __this, (&V_0), /*hidden argument*/NULL);
		Quaternion_t2301928331  L_0 = V_0;
		V_1 = L_0;
		goto IL_0010;
	}

IL_0010:
	{
		Quaternion_t2301928331  L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.Animator::INTERNAL_CALL_GetBodyRotationInternal(UnityEngine.Animator,UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR void Animator_INTERNAL_CALL_GetBodyRotationInternal_m2466536780 (RuntimeObject * __this /* static, unused */, Animator_t434523843 * ___self0, Quaternion_t2301928331 * ___value1, const RuntimeMethod* method)
{
	typedef void (*Animator_INTERNAL_CALL_GetBodyRotationInternal_m2466536780_ftn) (Animator_t434523843 *, Quaternion_t2301928331 *);
	static Animator_INTERNAL_CALL_GetBodyRotationInternal_m2466536780_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_INTERNAL_CALL_GetBodyRotationInternal_m2466536780_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::INTERNAL_CALL_GetBodyRotationInternal(UnityEngine.Animator,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(___self0, ___value1);
}
// System.Void UnityEngine.Animator::SetBodyRotationInternal(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetBodyRotationInternal_m1739652811 (Animator_t434523843 * __this, Quaternion_t2301928331  ___bodyRotation0, const RuntimeMethod* method)
{
	{
		Animator_INTERNAL_CALL_SetBodyRotationInternal_m4252621940(NULL /*static, unused*/, __this, (&___bodyRotation0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::INTERNAL_CALL_SetBodyRotationInternal(UnityEngine.Animator,UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR void Animator_INTERNAL_CALL_SetBodyRotationInternal_m4252621940 (RuntimeObject * __this /* static, unused */, Animator_t434523843 * ___self0, Quaternion_t2301928331 * ___bodyRotation1, const RuntimeMethod* method)
{
	typedef void (*Animator_INTERNAL_CALL_SetBodyRotationInternal_m4252621940_ftn) (Animator_t434523843 *, Quaternion_t2301928331 *);
	static Animator_INTERNAL_CALL_SetBodyRotationInternal_m4252621940_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_INTERNAL_CALL_SetBodyRotationInternal_m4252621940_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::INTERNAL_CALL_SetBodyRotationInternal(UnityEngine.Animator,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(___self0, ___bodyRotation1);
}
// UnityEngine.Vector3 UnityEngine.Animator::GetIKPosition(UnityEngine.AvatarIKGoal)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Animator_GetIKPosition_m1659679920 (Animator_t434523843 * __this, int32_t ___goal0, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Animator_CheckIfInIKPass_m1701567706(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___goal0;
		Vector3_t3722313464  L_1 = Animator_GetIKPositionInternal_m125839593(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0014;
	}

IL_0014:
	{
		Vector3_t3722313464  L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Vector3 UnityEngine.Animator::GetIKPositionInternal(UnityEngine.AvatarIKGoal)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Animator_GetIKPositionInternal_m125839593 (Animator_t434523843 * __this, int32_t ___goal0, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		int32_t L_0 = ___goal0;
		Animator_INTERNAL_CALL_GetIKPositionInternal_m4175269722(NULL /*static, unused*/, __this, L_0, (&V_0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = V_0;
		V_1 = L_1;
		goto IL_0011;
	}

IL_0011:
	{
		Vector3_t3722313464  L_2 = V_1;
		return L_2;
	}
}
// System.Void UnityEngine.Animator::INTERNAL_CALL_GetIKPositionInternal(UnityEngine.Animator,UnityEngine.AvatarIKGoal,UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Animator_INTERNAL_CALL_GetIKPositionInternal_m4175269722 (RuntimeObject * __this /* static, unused */, Animator_t434523843 * ___self0, int32_t ___goal1, Vector3_t3722313464 * ___value2, const RuntimeMethod* method)
{
	typedef void (*Animator_INTERNAL_CALL_GetIKPositionInternal_m4175269722_ftn) (Animator_t434523843 *, int32_t, Vector3_t3722313464 *);
	static Animator_INTERNAL_CALL_GetIKPositionInternal_m4175269722_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_INTERNAL_CALL_GetIKPositionInternal_m4175269722_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::INTERNAL_CALL_GetIKPositionInternal(UnityEngine.Animator,UnityEngine.AvatarIKGoal,UnityEngine.Vector3&)");
	_il2cpp_icall_func(___self0, ___goal1, ___value2);
}
// System.Void UnityEngine.Animator::SetIKPosition(UnityEngine.AvatarIKGoal,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetIKPosition_m4054460200 (Animator_t434523843 * __this, int32_t ___goal0, Vector3_t3722313464  ___goalPosition1, const RuntimeMethod* method)
{
	{
		Animator_CheckIfInIKPass_m1701567706(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___goal0;
		Vector3_t3722313464  L_1 = ___goalPosition1;
		Animator_SetIKPositionInternal_m3440485583(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetIKPositionInternal(UnityEngine.AvatarIKGoal,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetIKPositionInternal_m3440485583 (Animator_t434523843 * __this, int32_t ___goal0, Vector3_t3722313464  ___goalPosition1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___goal0;
		Animator_INTERNAL_CALL_SetIKPositionInternal_m448071741(NULL /*static, unused*/, __this, L_0, (&___goalPosition1), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::INTERNAL_CALL_SetIKPositionInternal(UnityEngine.Animator,UnityEngine.AvatarIKGoal,UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Animator_INTERNAL_CALL_SetIKPositionInternal_m448071741 (RuntimeObject * __this /* static, unused */, Animator_t434523843 * ___self0, int32_t ___goal1, Vector3_t3722313464 * ___goalPosition2, const RuntimeMethod* method)
{
	typedef void (*Animator_INTERNAL_CALL_SetIKPositionInternal_m448071741_ftn) (Animator_t434523843 *, int32_t, Vector3_t3722313464 *);
	static Animator_INTERNAL_CALL_SetIKPositionInternal_m448071741_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_INTERNAL_CALL_SetIKPositionInternal_m448071741_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::INTERNAL_CALL_SetIKPositionInternal(UnityEngine.Animator,UnityEngine.AvatarIKGoal,UnityEngine.Vector3&)");
	_il2cpp_icall_func(___self0, ___goal1, ___goalPosition2);
}
// UnityEngine.Quaternion UnityEngine.Animator::GetIKRotation(UnityEngine.AvatarIKGoal)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Animator_GetIKRotation_m2892151993 (Animator_t434523843 * __this, int32_t ___goal0, const RuntimeMethod* method)
{
	Quaternion_t2301928331  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Animator_CheckIfInIKPass_m1701567706(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___goal0;
		Quaternion_t2301928331  L_1 = Animator_GetIKRotationInternal_m3867958926(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_t2301928331  L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Quaternion UnityEngine.Animator::GetIKRotationInternal(UnityEngine.AvatarIKGoal)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Animator_GetIKRotationInternal_m3867958926 (Animator_t434523843 * __this, int32_t ___goal0, const RuntimeMethod* method)
{
	Quaternion_t2301928331  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Quaternion_t2301928331  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		int32_t L_0 = ___goal0;
		Animator_INTERNAL_CALL_GetIKRotationInternal_m3385869276(NULL /*static, unused*/, __this, L_0, (&V_0), /*hidden argument*/NULL);
		Quaternion_t2301928331  L_1 = V_0;
		V_1 = L_1;
		goto IL_0011;
	}

IL_0011:
	{
		Quaternion_t2301928331  L_2 = V_1;
		return L_2;
	}
}
// System.Void UnityEngine.Animator::INTERNAL_CALL_GetIKRotationInternal(UnityEngine.Animator,UnityEngine.AvatarIKGoal,UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR void Animator_INTERNAL_CALL_GetIKRotationInternal_m3385869276 (RuntimeObject * __this /* static, unused */, Animator_t434523843 * ___self0, int32_t ___goal1, Quaternion_t2301928331 * ___value2, const RuntimeMethod* method)
{
	typedef void (*Animator_INTERNAL_CALL_GetIKRotationInternal_m3385869276_ftn) (Animator_t434523843 *, int32_t, Quaternion_t2301928331 *);
	static Animator_INTERNAL_CALL_GetIKRotationInternal_m3385869276_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_INTERNAL_CALL_GetIKRotationInternal_m3385869276_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::INTERNAL_CALL_GetIKRotationInternal(UnityEngine.Animator,UnityEngine.AvatarIKGoal,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(___self0, ___goal1, ___value2);
}
// System.Void UnityEngine.Animator::SetIKRotation(UnityEngine.AvatarIKGoal,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetIKRotation_m1010797409 (Animator_t434523843 * __this, int32_t ___goal0, Quaternion_t2301928331  ___goalRotation1, const RuntimeMethod* method)
{
	{
		Animator_CheckIfInIKPass_m1701567706(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___goal0;
		Quaternion_t2301928331  L_1 = ___goalRotation1;
		Animator_SetIKRotationInternal_m2365419064(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetIKRotationInternal(UnityEngine.AvatarIKGoal,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetIKRotationInternal_m2365419064 (Animator_t434523843 * __this, int32_t ___goal0, Quaternion_t2301928331  ___goalRotation1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___goal0;
		Animator_INTERNAL_CALL_SetIKRotationInternal_m3058115891(NULL /*static, unused*/, __this, L_0, (&___goalRotation1), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::INTERNAL_CALL_SetIKRotationInternal(UnityEngine.Animator,UnityEngine.AvatarIKGoal,UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR void Animator_INTERNAL_CALL_SetIKRotationInternal_m3058115891 (RuntimeObject * __this /* static, unused */, Animator_t434523843 * ___self0, int32_t ___goal1, Quaternion_t2301928331 * ___goalRotation2, const RuntimeMethod* method)
{
	typedef void (*Animator_INTERNAL_CALL_SetIKRotationInternal_m3058115891_ftn) (Animator_t434523843 *, int32_t, Quaternion_t2301928331 *);
	static Animator_INTERNAL_CALL_SetIKRotationInternal_m3058115891_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_INTERNAL_CALL_SetIKRotationInternal_m3058115891_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::INTERNAL_CALL_SetIKRotationInternal(UnityEngine.Animator,UnityEngine.AvatarIKGoal,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(___self0, ___goal1, ___goalRotation2);
}
// System.Single UnityEngine.Animator::GetIKPositionWeight(UnityEngine.AvatarIKGoal)
extern "C" IL2CPP_METHOD_ATTR float Animator_GetIKPositionWeight_m419253531 (Animator_t434523843 * __this, int32_t ___goal0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		Animator_CheckIfInIKPass_m1701567706(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___goal0;
		float L_1 = Animator_GetIKPositionWeightInternal_m3579271787(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0014;
	}

IL_0014:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Animator::GetIKPositionWeightInternal(UnityEngine.AvatarIKGoal)
extern "C" IL2CPP_METHOD_ATTR float Animator_GetIKPositionWeightInternal_m3579271787 (Animator_t434523843 * __this, int32_t ___goal0, const RuntimeMethod* method)
{
	typedef float (*Animator_GetIKPositionWeightInternal_m3579271787_ftn) (Animator_t434523843 *, int32_t);
	static Animator_GetIKPositionWeightInternal_m3579271787_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetIKPositionWeightInternal_m3579271787_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetIKPositionWeightInternal(UnityEngine.AvatarIKGoal)");
	float retVal = _il2cpp_icall_func(__this, ___goal0);
	return retVal;
}
// System.Void UnityEngine.Animator::SetIKPositionWeight(UnityEngine.AvatarIKGoal,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetIKPositionWeight_m2531330339 (Animator_t434523843 * __this, int32_t ___goal0, float ___value1, const RuntimeMethod* method)
{
	{
		Animator_CheckIfInIKPass_m1701567706(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___goal0;
		float L_1 = ___value1;
		Animator_SetIKPositionWeightInternal_m2208928065(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetIKPositionWeightInternal(UnityEngine.AvatarIKGoal,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetIKPositionWeightInternal_m2208928065 (Animator_t434523843 * __this, int32_t ___goal0, float ___value1, const RuntimeMethod* method)
{
	typedef void (*Animator_SetIKPositionWeightInternal_m2208928065_ftn) (Animator_t434523843 *, int32_t, float);
	static Animator_SetIKPositionWeightInternal_m2208928065_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetIKPositionWeightInternal_m2208928065_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetIKPositionWeightInternal(UnityEngine.AvatarIKGoal,System.Single)");
	_il2cpp_icall_func(__this, ___goal0, ___value1);
}
// System.Single UnityEngine.Animator::GetIKRotationWeight(UnityEngine.AvatarIKGoal)
extern "C" IL2CPP_METHOD_ATTR float Animator_GetIKRotationWeight_m1582869181 (Animator_t434523843 * __this, int32_t ___goal0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		Animator_CheckIfInIKPass_m1701567706(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___goal0;
		float L_1 = Animator_GetIKRotationWeightInternal_m2330604556(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0014;
	}

IL_0014:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Animator::GetIKRotationWeightInternal(UnityEngine.AvatarIKGoal)
extern "C" IL2CPP_METHOD_ATTR float Animator_GetIKRotationWeightInternal_m2330604556 (Animator_t434523843 * __this, int32_t ___goal0, const RuntimeMethod* method)
{
	typedef float (*Animator_GetIKRotationWeightInternal_m2330604556_ftn) (Animator_t434523843 *, int32_t);
	static Animator_GetIKRotationWeightInternal_m2330604556_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetIKRotationWeightInternal_m2330604556_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetIKRotationWeightInternal(UnityEngine.AvatarIKGoal)");
	float retVal = _il2cpp_icall_func(__this, ___goal0);
	return retVal;
}
// System.Void UnityEngine.Animator::SetIKRotationWeight(UnityEngine.AvatarIKGoal,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetIKRotationWeight_m1678977726 (Animator_t434523843 * __this, int32_t ___goal0, float ___value1, const RuntimeMethod* method)
{
	{
		Animator_CheckIfInIKPass_m1701567706(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___goal0;
		float L_1 = ___value1;
		Animator_SetIKRotationWeightInternal_m358851637(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetIKRotationWeightInternal(UnityEngine.AvatarIKGoal,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetIKRotationWeightInternal_m358851637 (Animator_t434523843 * __this, int32_t ___goal0, float ___value1, const RuntimeMethod* method)
{
	typedef void (*Animator_SetIKRotationWeightInternal_m358851637_ftn) (Animator_t434523843 *, int32_t, float);
	static Animator_SetIKRotationWeightInternal_m358851637_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetIKRotationWeightInternal_m358851637_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetIKRotationWeightInternal(UnityEngine.AvatarIKGoal,System.Single)");
	_il2cpp_icall_func(__this, ___goal0, ___value1);
}
// UnityEngine.Vector3 UnityEngine.Animator::GetIKHintPosition(UnityEngine.AvatarIKHint)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Animator_GetIKHintPosition_m3917591134 (Animator_t434523843 * __this, int32_t ___hint0, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Animator_CheckIfInIKPass_m1701567706(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___hint0;
		Vector3_t3722313464  L_1 = Animator_GetIKHintPositionInternal_m1487077595(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0014;
	}

IL_0014:
	{
		Vector3_t3722313464  L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Vector3 UnityEngine.Animator::GetIKHintPositionInternal(UnityEngine.AvatarIKHint)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Animator_GetIKHintPositionInternal_m1487077595 (Animator_t434523843 * __this, int32_t ___hint0, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		int32_t L_0 = ___hint0;
		Animator_INTERNAL_CALL_GetIKHintPositionInternal_m1002037478(NULL /*static, unused*/, __this, L_0, (&V_0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = V_0;
		V_1 = L_1;
		goto IL_0011;
	}

IL_0011:
	{
		Vector3_t3722313464  L_2 = V_1;
		return L_2;
	}
}
// System.Void UnityEngine.Animator::INTERNAL_CALL_GetIKHintPositionInternal(UnityEngine.Animator,UnityEngine.AvatarIKHint,UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Animator_INTERNAL_CALL_GetIKHintPositionInternal_m1002037478 (RuntimeObject * __this /* static, unused */, Animator_t434523843 * ___self0, int32_t ___hint1, Vector3_t3722313464 * ___value2, const RuntimeMethod* method)
{
	typedef void (*Animator_INTERNAL_CALL_GetIKHintPositionInternal_m1002037478_ftn) (Animator_t434523843 *, int32_t, Vector3_t3722313464 *);
	static Animator_INTERNAL_CALL_GetIKHintPositionInternal_m1002037478_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_INTERNAL_CALL_GetIKHintPositionInternal_m1002037478_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::INTERNAL_CALL_GetIKHintPositionInternal(UnityEngine.Animator,UnityEngine.AvatarIKHint,UnityEngine.Vector3&)");
	_il2cpp_icall_func(___self0, ___hint1, ___value2);
}
// System.Void UnityEngine.Animator::SetIKHintPosition(UnityEngine.AvatarIKHint,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetIKHintPosition_m2017097345 (Animator_t434523843 * __this, int32_t ___hint0, Vector3_t3722313464  ___hintPosition1, const RuntimeMethod* method)
{
	{
		Animator_CheckIfInIKPass_m1701567706(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___hint0;
		Vector3_t3722313464  L_1 = ___hintPosition1;
		Animator_SetIKHintPositionInternal_m3493246906(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetIKHintPositionInternal(UnityEngine.AvatarIKHint,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetIKHintPositionInternal_m3493246906 (Animator_t434523843 * __this, int32_t ___hint0, Vector3_t3722313464  ___hintPosition1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___hint0;
		Animator_INTERNAL_CALL_SetIKHintPositionInternal_m3350640131(NULL /*static, unused*/, __this, L_0, (&___hintPosition1), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::INTERNAL_CALL_SetIKHintPositionInternal(UnityEngine.Animator,UnityEngine.AvatarIKHint,UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Animator_INTERNAL_CALL_SetIKHintPositionInternal_m3350640131 (RuntimeObject * __this /* static, unused */, Animator_t434523843 * ___self0, int32_t ___hint1, Vector3_t3722313464 * ___hintPosition2, const RuntimeMethod* method)
{
	typedef void (*Animator_INTERNAL_CALL_SetIKHintPositionInternal_m3350640131_ftn) (Animator_t434523843 *, int32_t, Vector3_t3722313464 *);
	static Animator_INTERNAL_CALL_SetIKHintPositionInternal_m3350640131_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_INTERNAL_CALL_SetIKHintPositionInternal_m3350640131_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::INTERNAL_CALL_SetIKHintPositionInternal(UnityEngine.Animator,UnityEngine.AvatarIKHint,UnityEngine.Vector3&)");
	_il2cpp_icall_func(___self0, ___hint1, ___hintPosition2);
}
// System.Single UnityEngine.Animator::GetIKHintPositionWeight(UnityEngine.AvatarIKHint)
extern "C" IL2CPP_METHOD_ATTR float Animator_GetIKHintPositionWeight_m1919807291 (Animator_t434523843 * __this, int32_t ___hint0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		Animator_CheckIfInIKPass_m1701567706(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___hint0;
		float L_1 = Animator_GetHintWeightPositionInternal_m1585346795(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0014;
	}

IL_0014:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Animator::GetHintWeightPositionInternal(UnityEngine.AvatarIKHint)
extern "C" IL2CPP_METHOD_ATTR float Animator_GetHintWeightPositionInternal_m1585346795 (Animator_t434523843 * __this, int32_t ___hint0, const RuntimeMethod* method)
{
	typedef float (*Animator_GetHintWeightPositionInternal_m1585346795_ftn) (Animator_t434523843 *, int32_t);
	static Animator_GetHintWeightPositionInternal_m1585346795_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetHintWeightPositionInternal_m1585346795_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetHintWeightPositionInternal(UnityEngine.AvatarIKHint)");
	float retVal = _il2cpp_icall_func(__this, ___hint0);
	return retVal;
}
// System.Void UnityEngine.Animator::SetIKHintPositionWeight(UnityEngine.AvatarIKHint,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetIKHintPositionWeight_m2740939907 (Animator_t434523843 * __this, int32_t ___hint0, float ___value1, const RuntimeMethod* method)
{
	{
		Animator_CheckIfInIKPass_m1701567706(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___hint0;
		float L_1 = ___value1;
		Animator_SetIKHintPositionWeightInternal_m381336006(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetIKHintPositionWeightInternal(UnityEngine.AvatarIKHint,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetIKHintPositionWeightInternal_m381336006 (Animator_t434523843 * __this, int32_t ___hint0, float ___value1, const RuntimeMethod* method)
{
	typedef void (*Animator_SetIKHintPositionWeightInternal_m381336006_ftn) (Animator_t434523843 *, int32_t, float);
	static Animator_SetIKHintPositionWeightInternal_m381336006_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetIKHintPositionWeightInternal_m381336006_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetIKHintPositionWeightInternal(UnityEngine.AvatarIKHint,System.Single)");
	_il2cpp_icall_func(__this, ___hint0, ___value1);
}
// System.Void UnityEngine.Animator::SetLookAtPosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetLookAtPosition_m2184651521 (Animator_t434523843 * __this, Vector3_t3722313464  ___lookAtPosition0, const RuntimeMethod* method)
{
	{
		Animator_CheckIfInIKPass_m1701567706(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_0 = ___lookAtPosition0;
		Animator_SetLookAtPositionInternal_m1039545480(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetLookAtPositionInternal(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetLookAtPositionInternal_m1039545480 (Animator_t434523843 * __this, Vector3_t3722313464  ___lookAtPosition0, const RuntimeMethod* method)
{
	{
		Animator_INTERNAL_CALL_SetLookAtPositionInternal_m921807281(NULL /*static, unused*/, __this, (&___lookAtPosition0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::INTERNAL_CALL_SetLookAtPositionInternal(UnityEngine.Animator,UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Animator_INTERNAL_CALL_SetLookAtPositionInternal_m921807281 (RuntimeObject * __this /* static, unused */, Animator_t434523843 * ___self0, Vector3_t3722313464 * ___lookAtPosition1, const RuntimeMethod* method)
{
	typedef void (*Animator_INTERNAL_CALL_SetLookAtPositionInternal_m921807281_ftn) (Animator_t434523843 *, Vector3_t3722313464 *);
	static Animator_INTERNAL_CALL_SetLookAtPositionInternal_m921807281_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_INTERNAL_CALL_SetLookAtPositionInternal_m921807281_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::INTERNAL_CALL_SetLookAtPositionInternal(UnityEngine.Animator,UnityEngine.Vector3&)");
	_il2cpp_icall_func(___self0, ___lookAtPosition1);
}
// System.Void UnityEngine.Animator::SetLookAtWeight(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetLookAtWeight_m2190134726 (Animator_t434523843 * __this, float ___weight0, float ___bodyWeight1, float ___headWeight2, float ___eyesWeight3, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (0.5f);
		float L_0 = ___weight0;
		float L_1 = ___bodyWeight1;
		float L_2 = ___headWeight2;
		float L_3 = ___eyesWeight3;
		float L_4 = V_0;
		Animator_SetLookAtWeight_m4069750608(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetLookAtWeight(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetLookAtWeight_m3252672319 (Animator_t434523843 * __this, float ___weight0, float ___bodyWeight1, float ___headWeight2, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (0.5f);
		V_1 = (0.0f);
		float L_0 = ___weight0;
		float L_1 = ___bodyWeight1;
		float L_2 = ___headWeight2;
		float L_3 = V_1;
		float L_4 = V_0;
		Animator_SetLookAtWeight_m4069750608(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetLookAtWeight(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetLookAtWeight_m642062228 (Animator_t434523843 * __this, float ___weight0, float ___bodyWeight1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		V_0 = (0.5f);
		V_1 = (0.0f);
		V_2 = (1.0f);
		float L_0 = ___weight0;
		float L_1 = ___bodyWeight1;
		float L_2 = V_2;
		float L_3 = V_1;
		float L_4 = V_0;
		Animator_SetLookAtWeight_m4069750608(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetLookAtWeight(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetLookAtWeight_m1562921440 (Animator_t434523843 * __this, float ___weight0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		V_0 = (0.5f);
		V_1 = (0.0f);
		V_2 = (1.0f);
		V_3 = (0.0f);
		float L_0 = ___weight0;
		float L_1 = V_3;
		float L_2 = V_2;
		float L_3 = V_1;
		float L_4 = V_0;
		Animator_SetLookAtWeight_m4069750608(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetLookAtWeight(System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetLookAtWeight_m4069750608 (Animator_t434523843 * __this, float ___weight0, float ___bodyWeight1, float ___headWeight2, float ___eyesWeight3, float ___clampWeight4, const RuntimeMethod* method)
{
	{
		Animator_CheckIfInIKPass_m1701567706(__this, /*hidden argument*/NULL);
		float L_0 = ___weight0;
		float L_1 = ___bodyWeight1;
		float L_2 = ___headWeight2;
		float L_3 = ___eyesWeight3;
		float L_4 = ___clampWeight4;
		Animator_SetLookAtWeightInternal_m1957339916(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetLookAtWeightInternal(System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetLookAtWeightInternal_m1957339916 (Animator_t434523843 * __this, float ___weight0, float ___bodyWeight1, float ___headWeight2, float ___eyesWeight3, float ___clampWeight4, const RuntimeMethod* method)
{
	typedef void (*Animator_SetLookAtWeightInternal_m1957339916_ftn) (Animator_t434523843 *, float, float, float, float, float);
	static Animator_SetLookAtWeightInternal_m1957339916_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetLookAtWeightInternal_m1957339916_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetLookAtWeightInternal(System.Single,System.Single,System.Single,System.Single,System.Single)");
	_il2cpp_icall_func(__this, ___weight0, ___bodyWeight1, ___headWeight2, ___eyesWeight3, ___clampWeight4);
}
// System.Void UnityEngine.Animator::SetBoneLocalRotation(UnityEngine.HumanBodyBones,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetBoneLocalRotation_m2006857668 (Animator_t434523843 * __this, int32_t ___humanBoneId0, Quaternion_t2301928331  ___rotation1, const RuntimeMethod* method)
{
	{
		Animator_CheckIfInIKPass_m1701567706(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___humanBoneId0;
		Quaternion_t2301928331  L_1 = ___rotation1;
		Animator_SetBoneLocalRotationInternal_m3358027282(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetBoneLocalRotationInternal(System.Int32,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetBoneLocalRotationInternal_m3358027282 (Animator_t434523843 * __this, int32_t ___humanBoneId0, Quaternion_t2301928331  ___rotation1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___humanBoneId0;
		Animator_INTERNAL_CALL_SetBoneLocalRotationInternal_m2795698770(NULL /*static, unused*/, __this, L_0, (&___rotation1), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::INTERNAL_CALL_SetBoneLocalRotationInternal(UnityEngine.Animator,System.Int32,UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR void Animator_INTERNAL_CALL_SetBoneLocalRotationInternal_m2795698770 (RuntimeObject * __this /* static, unused */, Animator_t434523843 * ___self0, int32_t ___humanBoneId1, Quaternion_t2301928331 * ___rotation2, const RuntimeMethod* method)
{
	typedef void (*Animator_INTERNAL_CALL_SetBoneLocalRotationInternal_m2795698770_ftn) (Animator_t434523843 *, int32_t, Quaternion_t2301928331 *);
	static Animator_INTERNAL_CALL_SetBoneLocalRotationInternal_m2795698770_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_INTERNAL_CALL_SetBoneLocalRotationInternal_m2795698770_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::INTERNAL_CALL_SetBoneLocalRotationInternal(UnityEngine.Animator,System.Int32,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(___self0, ___humanBoneId1, ___rotation2);
}
// UnityEngine.StateMachineBehaviour[] UnityEngine.Animator::InternalGetBehavioursByKey(System.Int32,System.Int32,System.Type)
extern "C" IL2CPP_METHOD_ATTR StateMachineBehaviourU5BU5D_t1747573118* Animator_InternalGetBehavioursByKey_m3087212251 (Animator_t434523843 * __this, int32_t ___fullPathHash0, int32_t ___layerIndex1, Type_t * ___type2, const RuntimeMethod* method)
{
	typedef StateMachineBehaviourU5BU5D_t1747573118* (*Animator_InternalGetBehavioursByKey_m3087212251_ftn) (Animator_t434523843 *, int32_t, int32_t, Type_t *);
	static Animator_InternalGetBehavioursByKey_m3087212251_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_InternalGetBehavioursByKey_m3087212251_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::InternalGetBehavioursByKey(System.Int32,System.Int32,System.Type)");
	StateMachineBehaviourU5BU5D_t1747573118* retVal = _il2cpp_icall_func(__this, ___fullPathHash0, ___layerIndex1, ___type2);
	return retVal;
}
// UnityEngine.StateMachineBehaviour[] UnityEngine.Animator::GetBehaviours(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR StateMachineBehaviourU5BU5D_t1747573118* Animator_GetBehaviours_m3191869605 (Animator_t434523843 * __this, int32_t ___fullPathHash0, int32_t ___layerIndex1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Animator_GetBehaviours_m3191869605_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StateMachineBehaviourU5BU5D_t1747573118* V_0 = NULL;
	{
		int32_t L_0 = ___fullPathHash0;
		int32_t L_1 = ___layerIndex1;
		RuntimeTypeHandle_t3027515415  L_2 = { reinterpret_cast<intptr_t> (StateMachineBehaviour_t957311111_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		StateMachineBehaviourU5BU5D_t1747573118* L_4 = Animator_InternalGetBehavioursByKey_m3087212251(__this, L_0, L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0019;
	}

IL_0019:
	{
		StateMachineBehaviourU5BU5D_t1747573118* L_5 = V_0;
		return L_5;
	}
}
// System.Boolean UnityEngine.Animator::get_stabilizeFeet()
extern "C" IL2CPP_METHOD_ATTR bool Animator_get_stabilizeFeet_m2819536857 (Animator_t434523843 * __this, const RuntimeMethod* method)
{
	typedef bool (*Animator_get_stabilizeFeet_m2819536857_ftn) (Animator_t434523843 *);
	static Animator_get_stabilizeFeet_m2819536857_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_stabilizeFeet_m2819536857_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_stabilizeFeet()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Animator::set_stabilizeFeet(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Animator_set_stabilizeFeet_m3335720898 (Animator_t434523843 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*Animator_set_stabilizeFeet_m3335720898_ftn) (Animator_t434523843 *, bool);
	static Animator_set_stabilizeFeet_m3335720898_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_stabilizeFeet_m3335720898_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_stabilizeFeet(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Int32 UnityEngine.Animator::get_layerCount()
extern "C" IL2CPP_METHOD_ATTR int32_t Animator_get_layerCount_m3408248017 (Animator_t434523843 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*Animator_get_layerCount_m3408248017_ftn) (Animator_t434523843 *);
	static Animator_get_layerCount_m3408248017_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_layerCount_m3408248017_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_layerCount()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.String UnityEngine.Animator::GetLayerName(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* Animator_GetLayerName_m3348632109 (Animator_t434523843 * __this, int32_t ___layerIndex0, const RuntimeMethod* method)
{
	typedef String_t* (*Animator_GetLayerName_m3348632109_ftn) (Animator_t434523843 *, int32_t);
	static Animator_GetLayerName_m3348632109_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetLayerName_m3348632109_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetLayerName(System.Int32)");
	String_t* retVal = _il2cpp_icall_func(__this, ___layerIndex0);
	return retVal;
}
// System.Int32 UnityEngine.Animator::GetLayerIndex(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t Animator_GetLayerIndex_m3470999658 (Animator_t434523843 * __this, String_t* ___layerName0, const RuntimeMethod* method)
{
	typedef int32_t (*Animator_GetLayerIndex_m3470999658_ftn) (Animator_t434523843 *, String_t*);
	static Animator_GetLayerIndex_m3470999658_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetLayerIndex_m3470999658_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetLayerIndex(System.String)");
	int32_t retVal = _il2cpp_icall_func(__this, ___layerName0);
	return retVal;
}
// System.Single UnityEngine.Animator::GetLayerWeight(System.Int32)
extern "C" IL2CPP_METHOD_ATTR float Animator_GetLayerWeight_m2452831872 (Animator_t434523843 * __this, int32_t ___layerIndex0, const RuntimeMethod* method)
{
	typedef float (*Animator_GetLayerWeight_m2452831872_ftn) (Animator_t434523843 *, int32_t);
	static Animator_GetLayerWeight_m2452831872_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetLayerWeight_m2452831872_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetLayerWeight(System.Int32)");
	float retVal = _il2cpp_icall_func(__this, ___layerIndex0);
	return retVal;
}
// System.Void UnityEngine.Animator::SetLayerWeight(System.Int32,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetLayerWeight_m2632303547 (Animator_t434523843 * __this, int32_t ___layerIndex0, float ___weight1, const RuntimeMethod* method)
{
	typedef void (*Animator_SetLayerWeight_m2632303547_ftn) (Animator_t434523843 *, int32_t, float);
	static Animator_SetLayerWeight_m2632303547_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetLayerWeight_m2632303547_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetLayerWeight(System.Int32,System.Single)");
	_il2cpp_icall_func(__this, ___layerIndex0, ___weight1);
}
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)
extern "C" IL2CPP_METHOD_ATTR AnimatorStateInfo_t509032636  Animator_GetCurrentAnimatorStateInfo_m18694920 (Animator_t434523843 * __this, int32_t ___layerIndex0, const RuntimeMethod* method)
{
	typedef AnimatorStateInfo_t509032636  (*Animator_GetCurrentAnimatorStateInfo_m18694920_ftn) (Animator_t434523843 *, int32_t);
	static Animator_GetCurrentAnimatorStateInfo_m18694920_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetCurrentAnimatorStateInfo_m18694920_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)");
	AnimatorStateInfo_t509032636  retVal = _il2cpp_icall_func(__this, ___layerIndex0);
	return retVal;
}
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetNextAnimatorStateInfo(System.Int32)
extern "C" IL2CPP_METHOD_ATTR AnimatorStateInfo_t509032636  Animator_GetNextAnimatorStateInfo_m3619397528 (Animator_t434523843 * __this, int32_t ___layerIndex0, const RuntimeMethod* method)
{
	typedef AnimatorStateInfo_t509032636  (*Animator_GetNextAnimatorStateInfo_m3619397528_ftn) (Animator_t434523843 *, int32_t);
	static Animator_GetNextAnimatorStateInfo_m3619397528_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetNextAnimatorStateInfo_m3619397528_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetNextAnimatorStateInfo(System.Int32)");
	AnimatorStateInfo_t509032636  retVal = _il2cpp_icall_func(__this, ___layerIndex0);
	return retVal;
}
// UnityEngine.AnimatorTransitionInfo UnityEngine.Animator::GetAnimatorTransitionInfo(System.Int32)
extern "C" IL2CPP_METHOD_ATTR AnimatorTransitionInfo_t2534804151  Animator_GetAnimatorTransitionInfo_m2361892554 (Animator_t434523843 * __this, int32_t ___layerIndex0, const RuntimeMethod* method)
{
	AnimatorTransitionInfo_t2534804151  V_0;
	memset(&V_0, 0, sizeof(V_0));
	AnimatorTransitionInfo_t2534804151  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		int32_t L_0 = ___layerIndex0;
		Animator_GetAnimatorTransitionInfo_m4215243493(__this, L_0, (&V_0), /*hidden argument*/NULL);
		AnimatorTransitionInfo_t2534804151  L_1 = V_0;
		V_1 = L_1;
		goto IL_0011;
	}

IL_0011:
	{
		AnimatorTransitionInfo_t2534804151  L_2 = V_1;
		return L_2;
	}
}
// System.Void UnityEngine.Animator::GetAnimatorTransitionInfo(System.Int32,UnityEngine.AnimatorTransitionInfo&)
extern "C" IL2CPP_METHOD_ATTR void Animator_GetAnimatorTransitionInfo_m4215243493 (Animator_t434523843 * __this, int32_t ___layerIndex0, AnimatorTransitionInfo_t2534804151 * ___info1, const RuntimeMethod* method)
{
	typedef void (*Animator_GetAnimatorTransitionInfo_m4215243493_ftn) (Animator_t434523843 *, int32_t, AnimatorTransitionInfo_t2534804151 *);
	static Animator_GetAnimatorTransitionInfo_m4215243493_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetAnimatorTransitionInfo_m4215243493_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetAnimatorTransitionInfo(System.Int32,UnityEngine.AnimatorTransitionInfo&)");
	_il2cpp_icall_func(__this, ___layerIndex0, ___info1);
}
// System.Int32 UnityEngine.Animator::GetCurrentAnimatorClipInfoCount(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Animator_GetCurrentAnimatorClipInfoCount_m4271464594 (Animator_t434523843 * __this, int32_t ___layerIndex0, const RuntimeMethod* method)
{
	typedef int32_t (*Animator_GetCurrentAnimatorClipInfoCount_m4271464594_ftn) (Animator_t434523843 *, int32_t);
	static Animator_GetCurrentAnimatorClipInfoCount_m4271464594_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetCurrentAnimatorClipInfoCount_m4271464594_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetCurrentAnimatorClipInfoCount(System.Int32)");
	int32_t retVal = _il2cpp_icall_func(__this, ___layerIndex0);
	return retVal;
}
// UnityEngine.AnimatorClipInfo[] UnityEngine.Animator::GetCurrentAnimatorClipInfo(System.Int32)
extern "C" IL2CPP_METHOD_ATTR AnimatorClipInfoU5BU5D_t855299250* Animator_GetCurrentAnimatorClipInfo_m2224500876 (Animator_t434523843 * __this, int32_t ___layerIndex0, const RuntimeMethod* method)
{
	typedef AnimatorClipInfoU5BU5D_t855299250* (*Animator_GetCurrentAnimatorClipInfo_m2224500876_ftn) (Animator_t434523843 *, int32_t);
	static Animator_GetCurrentAnimatorClipInfo_m2224500876_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetCurrentAnimatorClipInfo_m2224500876_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetCurrentAnimatorClipInfo(System.Int32)");
	AnimatorClipInfoU5BU5D_t855299250* retVal = _il2cpp_icall_func(__this, ___layerIndex0);
	return retVal;
}
// System.Void UnityEngine.Animator::GetCurrentAnimatorClipInfo(System.Int32,System.Collections.Generic.List`1<UnityEngine.AnimatorClipInfo>)
extern "C" IL2CPP_METHOD_ATTR void Animator_GetCurrentAnimatorClipInfo_m574614487 (Animator_t434523843 * __this, int32_t ___layerIndex0, List_1_t333824601 * ___clips1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Animator_GetCurrentAnimatorClipInfo_m574614487_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t333824601 * L_0 = ___clips1;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral2716074639, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,Animator_GetCurrentAnimatorClipInfo_m574614487_RuntimeMethod_var);
	}

IL_0012:
	{
		int32_t L_2 = ___layerIndex0;
		List_1_t333824601 * L_3 = ___clips1;
		Animator_GetAnimatorClipInfoInternal_m1014080763(__this, L_2, (bool)1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::GetAnimatorClipInfoInternal(System.Int32,System.Boolean,System.Object)
extern "C" IL2CPP_METHOD_ATTR void Animator_GetAnimatorClipInfoInternal_m1014080763 (Animator_t434523843 * __this, int32_t ___layerIndex0, bool ___isCurrent1, RuntimeObject * ___clips2, const RuntimeMethod* method)
{
	typedef void (*Animator_GetAnimatorClipInfoInternal_m1014080763_ftn) (Animator_t434523843 *, int32_t, bool, RuntimeObject *);
	static Animator_GetAnimatorClipInfoInternal_m1014080763_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetAnimatorClipInfoInternal_m1014080763_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetAnimatorClipInfoInternal(System.Int32,System.Boolean,System.Object)");
	_il2cpp_icall_func(__this, ___layerIndex0, ___isCurrent1, ___clips2);
}
// System.Int32 UnityEngine.Animator::GetNextAnimatorClipInfoCount(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Animator_GetNextAnimatorClipInfoCount_m3917878991 (Animator_t434523843 * __this, int32_t ___layerIndex0, const RuntimeMethod* method)
{
	typedef int32_t (*Animator_GetNextAnimatorClipInfoCount_m3917878991_ftn) (Animator_t434523843 *, int32_t);
	static Animator_GetNextAnimatorClipInfoCount_m3917878991_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetNextAnimatorClipInfoCount_m3917878991_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetNextAnimatorClipInfoCount(System.Int32)");
	int32_t retVal = _il2cpp_icall_func(__this, ___layerIndex0);
	return retVal;
}
// UnityEngine.AnimatorClipInfo[] UnityEngine.Animator::GetNextAnimatorClipInfo(System.Int32)
extern "C" IL2CPP_METHOD_ATTR AnimatorClipInfoU5BU5D_t855299250* Animator_GetNextAnimatorClipInfo_m4058166940 (Animator_t434523843 * __this, int32_t ___layerIndex0, const RuntimeMethod* method)
{
	typedef AnimatorClipInfoU5BU5D_t855299250* (*Animator_GetNextAnimatorClipInfo_m4058166940_ftn) (Animator_t434523843 *, int32_t);
	static Animator_GetNextAnimatorClipInfo_m4058166940_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetNextAnimatorClipInfo_m4058166940_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetNextAnimatorClipInfo(System.Int32)");
	AnimatorClipInfoU5BU5D_t855299250* retVal = _il2cpp_icall_func(__this, ___layerIndex0);
	return retVal;
}
// System.Void UnityEngine.Animator::GetNextAnimatorClipInfo(System.Int32,System.Collections.Generic.List`1<UnityEngine.AnimatorClipInfo>)
extern "C" IL2CPP_METHOD_ATTR void Animator_GetNextAnimatorClipInfo_m1200680582 (Animator_t434523843 * __this, int32_t ___layerIndex0, List_1_t333824601 * ___clips1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Animator_GetNextAnimatorClipInfo_m1200680582_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t333824601 * L_0 = ___clips1;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral2716074639, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,Animator_GetNextAnimatorClipInfo_m1200680582_RuntimeMethod_var);
	}

IL_0012:
	{
		int32_t L_2 = ___layerIndex0;
		List_1_t333824601 * L_3 = ___clips1;
		Animator_GetAnimatorClipInfoInternal_m1014080763(__this, L_2, (bool)0, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Animator::IsInTransition(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Animator_IsInTransition_m2711427730 (Animator_t434523843 * __this, int32_t ___layerIndex0, const RuntimeMethod* method)
{
	typedef bool (*Animator_IsInTransition_m2711427730_ftn) (Animator_t434523843 *, int32_t);
	static Animator_IsInTransition_m2711427730_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_IsInTransition_m2711427730_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::IsInTransition(System.Int32)");
	bool retVal = _il2cpp_icall_func(__this, ___layerIndex0);
	return retVal;
}
// UnityEngine.AnimatorControllerParameter[] UnityEngine.Animator::get_parameters()
extern "C" IL2CPP_METHOD_ATTR AnimatorControllerParameterU5BU5D_t846601295* Animator_get_parameters_m1100246053 (Animator_t434523843 * __this, const RuntimeMethod* method)
{
	typedef AnimatorControllerParameterU5BU5D_t846601295* (*Animator_get_parameters_m1100246053_ftn) (Animator_t434523843 *);
	static Animator_get_parameters_m1100246053_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_parameters_m1100246053_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_parameters()");
	AnimatorControllerParameterU5BU5D_t846601295* retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Int32 UnityEngine.Animator::get_parameterCount()
extern "C" IL2CPP_METHOD_ATTR int32_t Animator_get_parameterCount_m929524745 (Animator_t434523843 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*Animator_get_parameterCount_m929524745_ftn) (Animator_t434523843 *);
	static Animator_get_parameterCount_m929524745_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_parameterCount_m929524745_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_parameterCount()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.AnimatorControllerParameter UnityEngine.Animator::GetParameter(System.Int32)
extern "C" IL2CPP_METHOD_ATTR AnimatorControllerParameter_t1758260042 * Animator_GetParameter_m3987887005 (Animator_t434523843 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Animator_GetParameter_m3987887005_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AnimatorControllerParameterU5BU5D_t846601295* V_0 = NULL;
	AnimatorControllerParameter_t1758260042 * V_1 = NULL;
	{
		AnimatorControllerParameterU5BU5D_t846601295* L_0 = Animator_get_parameters_m1100246053(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = ___index0;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_2 = ___index0;
		AnimatorControllerParameterU5BU5D_t846601295* L_3 = Animator_get_parameters_m1100246053(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		if ((((int32_t)L_2) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length)))))))
		{
			goto IL_003a;
		}
	}
	{
		AnimatorControllerParameterU5BU5D_t846601295* L_4 = Animator_get_parameters_m1100246053(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = (((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length))));
		RuntimeObject * L_6 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral513759309, L_6, /*hidden argument*/NULL);
		IndexOutOfRangeException_t1578797820 * L_8 = (IndexOutOfRangeException_t1578797820 *)il2cpp_codegen_object_new(IndexOutOfRangeException_t1578797820_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m3408750441(L_8, L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8,Animator_GetParameter_m3987887005_RuntimeMethod_var);
	}

IL_003a:
	{
		AnimatorControllerParameterU5BU5D_t846601295* L_9 = V_0;
		int32_t L_10 = ___index0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		AnimatorControllerParameter_t1758260042 * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_1 = L_12;
		goto IL_0043;
	}

IL_0043:
	{
		AnimatorControllerParameter_t1758260042 * L_13 = V_1;
		return L_13;
	}
}
// System.Single UnityEngine.Animator::get_feetPivotActive()
extern "C" IL2CPP_METHOD_ATTR float Animator_get_feetPivotActive_m1880684134 (Animator_t434523843 * __this, const RuntimeMethod* method)
{
	typedef float (*Animator_get_feetPivotActive_m1880684134_ftn) (Animator_t434523843 *);
	static Animator_get_feetPivotActive_m1880684134_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_feetPivotActive_m1880684134_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_feetPivotActive()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Animator::set_feetPivotActive(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_set_feetPivotActive_m195834639 (Animator_t434523843 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*Animator_set_feetPivotActive_m195834639_ftn) (Animator_t434523843 *, float);
	static Animator_set_feetPivotActive_m195834639_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_feetPivotActive_m195834639_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_feetPivotActive(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.Animator::get_pivotWeight()
extern "C" IL2CPP_METHOD_ATTR float Animator_get_pivotWeight_m2747931764 (Animator_t434523843 * __this, const RuntimeMethod* method)
{
	typedef float (*Animator_get_pivotWeight_m2747931764_ftn) (Animator_t434523843 *);
	static Animator_get_pivotWeight_m2747931764_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_pivotWeight_m2747931764_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_pivotWeight()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.Vector3 UnityEngine.Animator::get_pivotPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Animator_get_pivotPosition_m1592483982 (Animator_t434523843 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Animator_INTERNAL_get_pivotPosition_m307868141(__this, (&V_0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_0 = V_0;
		V_1 = L_0;
		goto IL_0010;
	}

IL_0010:
	{
		Vector3_t3722313464  L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.Animator::INTERNAL_get_pivotPosition(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Animator_INTERNAL_get_pivotPosition_m307868141 (Animator_t434523843 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Animator_INTERNAL_get_pivotPosition_m307868141_ftn) (Animator_t434523843 *, Vector3_t3722313464 *);
	static Animator_INTERNAL_get_pivotPosition_m307868141_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_INTERNAL_get_pivotPosition_m307868141_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::INTERNAL_get_pivotPosition(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Animator::MatchTarget(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.AvatarTarget,UnityEngine.MatchTargetWeightMask,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_MatchTarget_m606907320 (Animator_t434523843 * __this, Vector3_t3722313464  ___matchPosition0, Quaternion_t2301928331  ___matchRotation1, int32_t ___targetBodyPart2, MatchTargetWeightMask_t554846203  ___weightMask3, float ___startNormalizedTime4, float ___targetNormalizedTime5, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___targetBodyPart2;
		float L_1 = ___startNormalizedTime4;
		float L_2 = ___targetNormalizedTime5;
		Animator_INTERNAL_CALL_MatchTarget_m1009381457(NULL /*static, unused*/, __this, (&___matchPosition0), (&___matchRotation1), L_0, (&___weightMask3), L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::MatchTarget(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.AvatarTarget,UnityEngine.MatchTargetWeightMask,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_MatchTarget_m3707474767 (Animator_t434523843 * __this, Vector3_t3722313464  ___matchPosition0, Quaternion_t2301928331  ___matchRotation1, int32_t ___targetBodyPart2, MatchTargetWeightMask_t554846203  ___weightMask3, float ___startNormalizedTime4, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (1.0f);
		int32_t L_0 = ___targetBodyPart2;
		float L_1 = ___startNormalizedTime4;
		float L_2 = V_0;
		Animator_INTERNAL_CALL_MatchTarget_m1009381457(NULL /*static, unused*/, __this, (&___matchPosition0), (&___matchRotation1), L_0, (&___weightMask3), L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::INTERNAL_CALL_MatchTarget(UnityEngine.Animator,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.AvatarTarget,UnityEngine.MatchTargetWeightMask&,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_INTERNAL_CALL_MatchTarget_m1009381457 (RuntimeObject * __this /* static, unused */, Animator_t434523843 * ___self0, Vector3_t3722313464 * ___matchPosition1, Quaternion_t2301928331 * ___matchRotation2, int32_t ___targetBodyPart3, MatchTargetWeightMask_t554846203 * ___weightMask4, float ___startNormalizedTime5, float ___targetNormalizedTime6, const RuntimeMethod* method)
{
	typedef void (*Animator_INTERNAL_CALL_MatchTarget_m1009381457_ftn) (Animator_t434523843 *, Vector3_t3722313464 *, Quaternion_t2301928331 *, int32_t, MatchTargetWeightMask_t554846203 *, float, float);
	static Animator_INTERNAL_CALL_MatchTarget_m1009381457_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_INTERNAL_CALL_MatchTarget_m1009381457_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::INTERNAL_CALL_MatchTarget(UnityEngine.Animator,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.AvatarTarget,UnityEngine.MatchTargetWeightMask&,System.Single,System.Single)");
	_il2cpp_icall_func(___self0, ___matchPosition1, ___matchRotation2, ___targetBodyPart3, ___weightMask4, ___startNormalizedTime5, ___targetNormalizedTime6);
}
// System.Void UnityEngine.Animator::InterruptMatchTarget(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Animator_InterruptMatchTarget_m1619794578 (Animator_t434523843 * __this, bool ___completeMatch0, const RuntimeMethod* method)
{
	typedef void (*Animator_InterruptMatchTarget_m1619794578_ftn) (Animator_t434523843 *, bool);
	static Animator_InterruptMatchTarget_m1619794578_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_InterruptMatchTarget_m1619794578_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::InterruptMatchTarget(System.Boolean)");
	_il2cpp_icall_func(__this, ___completeMatch0);
}
// System.Void UnityEngine.Animator::InterruptMatchTarget()
extern "C" IL2CPP_METHOD_ATTR void Animator_InterruptMatchTarget_m495377640 (Animator_t434523843 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)1;
		bool L_0 = V_0;
		Animator_InterruptMatchTarget_m1619794578(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Animator::get_isMatchingTarget()
extern "C" IL2CPP_METHOD_ATTR bool Animator_get_isMatchingTarget_m2727169323 (Animator_t434523843 * __this, const RuntimeMethod* method)
{
	typedef bool (*Animator_get_isMatchingTarget_m2727169323_ftn) (Animator_t434523843 *);
	static Animator_get_isMatchingTarget_m2727169323_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_isMatchingTarget_m2727169323_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_isMatchingTarget()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Single UnityEngine.Animator::get_speed()
extern "C" IL2CPP_METHOD_ATTR float Animator_get_speed_m2084108235 (Animator_t434523843 * __this, const RuntimeMethod* method)
{
	typedef float (*Animator_get_speed_m2084108235_ftn) (Animator_t434523843 *);
	static Animator_get_speed_m2084108235_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_speed_m2084108235_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_speed()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Animator::set_speed(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_set_speed_m1181320995 (Animator_t434523843 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*Animator_set_speed_m1181320995_ftn) (Animator_t434523843 *, float);
	static Animator_set_speed_m1181320995_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_speed_m1181320995_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_speed(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Animator::CrossFadeInFixedTime(System.String,System.Single,System.Int32,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_CrossFadeInFixedTime_m1032857235 (Animator_t434523843 * __this, String_t* ___stateName0, float ___fixedTransitionDuration1, int32_t ___layer2, float ___fixedTimeOffset3, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		String_t* L_0 = ___stateName0;
		float L_1 = ___fixedTransitionDuration1;
		int32_t L_2 = ___layer2;
		float L_3 = ___fixedTimeOffset3;
		float L_4 = V_0;
		Animator_CrossFadeInFixedTime_m2901818328(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFadeInFixedTime(System.String,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Animator_CrossFadeInFixedTime_m1666560905 (Animator_t434523843 * __this, String_t* ___stateName0, float ___fixedTransitionDuration1, int32_t ___layer2, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (0.0f);
		V_1 = (0.0f);
		String_t* L_0 = ___stateName0;
		float L_1 = ___fixedTransitionDuration1;
		int32_t L_2 = ___layer2;
		float L_3 = V_1;
		float L_4 = V_0;
		Animator_CrossFadeInFixedTime_m2901818328(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFadeInFixedTime(System.String,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_CrossFadeInFixedTime_m1909546330 (Animator_t434523843 * __this, String_t* ___stateName0, float ___fixedTransitionDuration1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	{
		V_0 = (0.0f);
		V_1 = (0.0f);
		V_2 = (-1);
		String_t* L_0 = ___stateName0;
		float L_1 = ___fixedTransitionDuration1;
		int32_t L_2 = V_2;
		float L_3 = V_1;
		float L_4 = V_0;
		Animator_CrossFadeInFixedTime_m2901818328(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFadeInFixedTime(System.String,System.Single,System.Int32,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_CrossFadeInFixedTime_m2901818328 (Animator_t434523843 * __this, String_t* ___stateName0, float ___fixedTransitionDuration1, int32_t ___layer2, float ___fixedTimeOffset3, float ___normalizedTransitionTime4, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___stateName0;
		int32_t L_1 = Animator_StringToHash_m1666053228(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		float L_2 = ___fixedTransitionDuration1;
		int32_t L_3 = ___layer2;
		float L_4 = ___fixedTimeOffset3;
		float L_5 = ___normalizedTransitionTime4;
		Animator_CrossFadeInFixedTime_m3847498994(__this, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFadeInFixedTime(System.Int32,System.Single,System.Int32,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_CrossFadeInFixedTime_m3847498994 (Animator_t434523843 * __this, int32_t ___stateHashName0, float ___fixedTransitionDuration1, int32_t ___layer2, float ___fixedTimeOffset3, float ___normalizedTransitionTime4, const RuntimeMethod* method)
{
	typedef void (*Animator_CrossFadeInFixedTime_m3847498994_ftn) (Animator_t434523843 *, int32_t, float, int32_t, float, float);
	static Animator_CrossFadeInFixedTime_m3847498994_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_CrossFadeInFixedTime_m3847498994_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::CrossFadeInFixedTime(System.Int32,System.Single,System.Int32,System.Single,System.Single)");
	_il2cpp_icall_func(__this, ___stateHashName0, ___fixedTransitionDuration1, ___layer2, ___fixedTimeOffset3, ___normalizedTransitionTime4);
}
// System.Void UnityEngine.Animator::CrossFadeInFixedTime(System.Int32,System.Single,System.Int32,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_CrossFadeInFixedTime_m3083334092 (Animator_t434523843 * __this, int32_t ___stateHashName0, float ___fixedTransitionDuration1, int32_t ___layer2, float ___fixedTimeOffset3, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		int32_t L_0 = ___stateHashName0;
		float L_1 = ___fixedTransitionDuration1;
		int32_t L_2 = ___layer2;
		float L_3 = ___fixedTimeOffset3;
		float L_4 = V_0;
		Animator_CrossFadeInFixedTime_m3847498994(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFadeInFixedTime(System.Int32,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Animator_CrossFadeInFixedTime_m68781768 (Animator_t434523843 * __this, int32_t ___stateHashName0, float ___fixedTransitionDuration1, int32_t ___layer2, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (0.0f);
		V_1 = (0.0f);
		int32_t L_0 = ___stateHashName0;
		float L_1 = ___fixedTransitionDuration1;
		int32_t L_2 = ___layer2;
		float L_3 = V_1;
		float L_4 = V_0;
		Animator_CrossFadeInFixedTime_m3847498994(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFadeInFixedTime(System.Int32,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_CrossFadeInFixedTime_m2721467385 (Animator_t434523843 * __this, int32_t ___stateHashName0, float ___fixedTransitionDuration1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	{
		V_0 = (0.0f);
		V_1 = (0.0f);
		V_2 = (-1);
		int32_t L_0 = ___stateHashName0;
		float L_1 = ___fixedTransitionDuration1;
		int32_t L_2 = V_2;
		float L_3 = V_1;
		float L_4 = V_0;
		Animator_CrossFadeInFixedTime_m3847498994(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFade(System.String,System.Single,System.Int32,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_CrossFade_m2614286674 (Animator_t434523843 * __this, String_t* ___stateName0, float ___normalizedTransitionDuration1, int32_t ___layer2, float ___normalizedTimeOffset3, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		String_t* L_0 = ___stateName0;
		float L_1 = ___normalizedTransitionDuration1;
		int32_t L_2 = ___layer2;
		float L_3 = ___normalizedTimeOffset3;
		float L_4 = V_0;
		Animator_CrossFade_m633499242(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFade(System.String,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Animator_CrossFade_m3891553813 (Animator_t434523843 * __this, String_t* ___stateName0, float ___normalizedTransitionDuration1, int32_t ___layer2, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (0.0f);
		V_1 = (-std::numeric_limits<float>::infinity());
		String_t* L_0 = ___stateName0;
		float L_1 = ___normalizedTransitionDuration1;
		int32_t L_2 = ___layer2;
		float L_3 = V_1;
		float L_4 = V_0;
		Animator_CrossFade_m633499242(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFade(System.String,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_CrossFade_m1920308218 (Animator_t434523843 * __this, String_t* ___stateName0, float ___normalizedTransitionDuration1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	{
		V_0 = (0.0f);
		V_1 = (-std::numeric_limits<float>::infinity());
		V_2 = (-1);
		String_t* L_0 = ___stateName0;
		float L_1 = ___normalizedTransitionDuration1;
		int32_t L_2 = V_2;
		float L_3 = V_1;
		float L_4 = V_0;
		Animator_CrossFade_m633499242(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFade(System.String,System.Single,System.Int32,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_CrossFade_m633499242 (Animator_t434523843 * __this, String_t* ___stateName0, float ___normalizedTransitionDuration1, int32_t ___layer2, float ___normalizedTimeOffset3, float ___normalizedTransitionTime4, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___stateName0;
		int32_t L_1 = Animator_StringToHash_m1666053228(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		float L_2 = ___normalizedTransitionDuration1;
		int32_t L_3 = ___layer2;
		float L_4 = ___normalizedTimeOffset3;
		float L_5 = ___normalizedTransitionTime4;
		Animator_CrossFade_m2328649388(__this, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFade(System.Int32,System.Single,System.Int32,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_CrossFade_m2328649388 (Animator_t434523843 * __this, int32_t ___stateHashName0, float ___normalizedTransitionDuration1, int32_t ___layer2, float ___normalizedTimeOffset3, float ___normalizedTransitionTime4, const RuntimeMethod* method)
{
	typedef void (*Animator_CrossFade_m2328649388_ftn) (Animator_t434523843 *, int32_t, float, int32_t, float, float);
	static Animator_CrossFade_m2328649388_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_CrossFade_m2328649388_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::CrossFade(System.Int32,System.Single,System.Int32,System.Single,System.Single)");
	_il2cpp_icall_func(__this, ___stateHashName0, ___normalizedTransitionDuration1, ___layer2, ___normalizedTimeOffset3, ___normalizedTransitionTime4);
}
// System.Void UnityEngine.Animator::CrossFade(System.Int32,System.Single,System.Int32,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_CrossFade_m1771886819 (Animator_t434523843 * __this, int32_t ___stateHashName0, float ___normalizedTransitionDuration1, int32_t ___layer2, float ___normalizedTimeOffset3, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		int32_t L_0 = ___stateHashName0;
		float L_1 = ___normalizedTransitionDuration1;
		int32_t L_2 = ___layer2;
		float L_3 = ___normalizedTimeOffset3;
		float L_4 = V_0;
		Animator_CrossFade_m2328649388(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFade(System.Int32,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Animator_CrossFade_m4237937398 (Animator_t434523843 * __this, int32_t ___stateHashName0, float ___normalizedTransitionDuration1, int32_t ___layer2, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (0.0f);
		V_1 = (-std::numeric_limits<float>::infinity());
		int32_t L_0 = ___stateHashName0;
		float L_1 = ___normalizedTransitionDuration1;
		int32_t L_2 = ___layer2;
		float L_3 = V_1;
		float L_4 = V_0;
		Animator_CrossFade_m2328649388(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFade(System.Int32,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_CrossFade_m1836514046 (Animator_t434523843 * __this, int32_t ___stateHashName0, float ___normalizedTransitionDuration1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	{
		V_0 = (0.0f);
		V_1 = (-std::numeric_limits<float>::infinity());
		V_2 = (-1);
		int32_t L_0 = ___stateHashName0;
		float L_1 = ___normalizedTransitionDuration1;
		int32_t L_2 = V_2;
		float L_3 = V_1;
		float L_4 = V_0;
		Animator_CrossFade_m2328649388(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::PlayInFixedTime(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Animator_PlayInFixedTime_m3784177854 (Animator_t434523843 * __this, String_t* ___stateName0, int32_t ___layer1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (-std::numeric_limits<float>::infinity());
		String_t* L_0 = ___stateName0;
		int32_t L_1 = ___layer1;
		float L_2 = V_0;
		Animator_PlayInFixedTime_m3866807394(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::PlayInFixedTime(System.String)
extern "C" IL2CPP_METHOD_ATTR void Animator_PlayInFixedTime_m2408409110 (Animator_t434523843 * __this, String_t* ___stateName0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		V_0 = (-std::numeric_limits<float>::infinity());
		V_1 = (-1);
		String_t* L_0 = ___stateName0;
		int32_t L_1 = V_1;
		float L_2 = V_0;
		Animator_PlayInFixedTime_m3866807394(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::PlayInFixedTime(System.String,System.Int32,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_PlayInFixedTime_m3866807394 (Animator_t434523843 * __this, String_t* ___stateName0, int32_t ___layer1, float ___fixedTime2, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___stateName0;
		int32_t L_1 = Animator_StringToHash_m1666053228(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___layer1;
		float L_3 = ___fixedTime2;
		Animator_PlayInFixedTime_m3646156550(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::PlayInFixedTime(System.Int32,System.Int32,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_PlayInFixedTime_m3646156550 (Animator_t434523843 * __this, int32_t ___stateNameHash0, int32_t ___layer1, float ___fixedTime2, const RuntimeMethod* method)
{
	typedef void (*Animator_PlayInFixedTime_m3646156550_ftn) (Animator_t434523843 *, int32_t, int32_t, float);
	static Animator_PlayInFixedTime_m3646156550_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_PlayInFixedTime_m3646156550_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::PlayInFixedTime(System.Int32,System.Int32,System.Single)");
	_il2cpp_icall_func(__this, ___stateNameHash0, ___layer1, ___fixedTime2);
}
// System.Void UnityEngine.Animator::PlayInFixedTime(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Animator_PlayInFixedTime_m2121388116 (Animator_t434523843 * __this, int32_t ___stateNameHash0, int32_t ___layer1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (-std::numeric_limits<float>::infinity());
		int32_t L_0 = ___stateNameHash0;
		int32_t L_1 = ___layer1;
		float L_2 = V_0;
		Animator_PlayInFixedTime_m3646156550(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::PlayInFixedTime(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Animator_PlayInFixedTime_m3687156340 (Animator_t434523843 * __this, int32_t ___stateNameHash0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		V_0 = (-std::numeric_limits<float>::infinity());
		V_1 = (-1);
		int32_t L_0 = ___stateNameHash0;
		int32_t L_1 = V_1;
		float L_2 = V_0;
		Animator_PlayInFixedTime_m3646156550(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::Play(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Animator_Play_m2116509493 (Animator_t434523843 * __this, String_t* ___stateName0, int32_t ___layer1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (-std::numeric_limits<float>::infinity());
		String_t* L_0 = ___stateName0;
		int32_t L_1 = ___layer1;
		float L_2 = V_0;
		Animator_Play_m2835034014(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::Play(System.String)
extern "C" IL2CPP_METHOD_ATTR void Animator_Play_m1697843332 (Animator_t434523843 * __this, String_t* ___stateName0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		V_0 = (-std::numeric_limits<float>::infinity());
		V_1 = (-1);
		String_t* L_0 = ___stateName0;
		int32_t L_1 = V_1;
		float L_2 = V_0;
		Animator_Play_m2835034014(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::Play(System.String,System.Int32,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_Play_m2835034014 (Animator_t434523843 * __this, String_t* ___stateName0, int32_t ___layer1, float ___normalizedTime2, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___stateName0;
		int32_t L_1 = Animator_StringToHash_m1666053228(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___layer1;
		float L_3 = ___normalizedTime2;
		Animator_Play_m1207279914(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_Play_m1207279914 (Animator_t434523843 * __this, int32_t ___stateNameHash0, int32_t ___layer1, float ___normalizedTime2, const RuntimeMethod* method)
{
	typedef void (*Animator_Play_m1207279914_ftn) (Animator_t434523843 *, int32_t, int32_t, float);
	static Animator_Play_m1207279914_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_Play_m1207279914_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)");
	_il2cpp_icall_func(__this, ___stateNameHash0, ___layer1, ___normalizedTime2);
}
// System.Void UnityEngine.Animator::Play(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Animator_Play_m4074388123 (Animator_t434523843 * __this, int32_t ___stateNameHash0, int32_t ___layer1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (-std::numeric_limits<float>::infinity());
		int32_t L_0 = ___stateNameHash0;
		int32_t L_1 = ___layer1;
		float L_2 = V_0;
		Animator_Play_m1207279914(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::Play(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Animator_Play_m3471924166 (Animator_t434523843 * __this, int32_t ___stateNameHash0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		V_0 = (-std::numeric_limits<float>::infinity());
		V_1 = (-1);
		int32_t L_0 = ___stateNameHash0;
		int32_t L_1 = V_1;
		float L_2 = V_0;
		Animator_Play_m1207279914(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetTarget(UnityEngine.AvatarTarget,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetTarget_m3687197238 (Animator_t434523843 * __this, int32_t ___targetIndex0, float ___targetNormalizedTime1, const RuntimeMethod* method)
{
	typedef void (*Animator_SetTarget_m3687197238_ftn) (Animator_t434523843 *, int32_t, float);
	static Animator_SetTarget_m3687197238_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetTarget_m3687197238_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetTarget(UnityEngine.AvatarTarget,System.Single)");
	_il2cpp_icall_func(__this, ___targetIndex0, ___targetNormalizedTime1);
}
// UnityEngine.Vector3 UnityEngine.Animator::get_targetPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Animator_get_targetPosition_m2702492079 (Animator_t434523843 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Animator_INTERNAL_get_targetPosition_m1270930816(__this, (&V_0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_0 = V_0;
		V_1 = L_0;
		goto IL_0010;
	}

IL_0010:
	{
		Vector3_t3722313464  L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.Animator::INTERNAL_get_targetPosition(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Animator_INTERNAL_get_targetPosition_m1270930816 (Animator_t434523843 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Animator_INTERNAL_get_targetPosition_m1270930816_ftn) (Animator_t434523843 *, Vector3_t3722313464 *);
	static Animator_INTERNAL_get_targetPosition_m1270930816_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_INTERNAL_get_targetPosition_m1270930816_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::INTERNAL_get_targetPosition(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Quaternion UnityEngine.Animator::get_targetRotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Animator_get_targetRotation_m4239723054 (Animator_t434523843 * __this, const RuntimeMethod* method)
{
	Quaternion_t2301928331  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Quaternion_t2301928331  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Animator_INTERNAL_get_targetRotation_m3838368899(__this, (&V_0), /*hidden argument*/NULL);
		Quaternion_t2301928331  L_0 = V_0;
		V_1 = L_0;
		goto IL_0010;
	}

IL_0010:
	{
		Quaternion_t2301928331  L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.Animator::INTERNAL_get_targetRotation(UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR void Animator_INTERNAL_get_targetRotation_m3838368899 (Animator_t434523843 * __this, Quaternion_t2301928331 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Animator_INTERNAL_get_targetRotation_m3838368899_ftn) (Animator_t434523843 *, Quaternion_t2301928331 *);
	static Animator_INTERNAL_get_targetRotation_m3838368899_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_INTERNAL_get_targetRotation_m3838368899_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::INTERNAL_get_targetRotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Transform UnityEngine.Animator::GetBoneTransform(UnityEngine.HumanBodyBones)
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Animator_GetBoneTransform_m929462223 (Animator_t434523843 * __this, int32_t ___humanBoneId0, const RuntimeMethod* method)
{
	Transform_t3600365921 * V_0 = NULL;
	{
		int32_t L_0 = ___humanBoneId0;
		Transform_t3600365921 * L_1 = Animator_GetBoneTransformInternal_m528051545(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		Transform_t3600365921 * L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Transform UnityEngine.Animator::GetBoneTransformInternal(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Animator_GetBoneTransformInternal_m528051545 (Animator_t434523843 * __this, int32_t ___humanBoneId0, const RuntimeMethod* method)
{
	typedef Transform_t3600365921 * (*Animator_GetBoneTransformInternal_m528051545_ftn) (Animator_t434523843 *, int32_t);
	static Animator_GetBoneTransformInternal_m528051545_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetBoneTransformInternal_m528051545_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetBoneTransformInternal(System.Int32)");
	Transform_t3600365921 * retVal = _il2cpp_icall_func(__this, ___humanBoneId0);
	return retVal;
}
// UnityEngine.AnimatorCullingMode UnityEngine.Animator::get_cullingMode()
extern "C" IL2CPP_METHOD_ATTR int32_t Animator_get_cullingMode_m1463878721 (Animator_t434523843 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*Animator_get_cullingMode_m1463878721_ftn) (Animator_t434523843 *);
	static Animator_get_cullingMode_m1463878721_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_cullingMode_m1463878721_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_cullingMode()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Animator::set_cullingMode(UnityEngine.AnimatorCullingMode)
extern "C" IL2CPP_METHOD_ATTR void Animator_set_cullingMode_m1630341969 (Animator_t434523843 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*Animator_set_cullingMode_m1630341969_ftn) (Animator_t434523843 *, int32_t);
	static Animator_set_cullingMode_m1630341969_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_cullingMode_m1630341969_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_cullingMode(UnityEngine.AnimatorCullingMode)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Animator::StartPlayback()
extern "C" IL2CPP_METHOD_ATTR void Animator_StartPlayback_m3123690249 (Animator_t434523843 * __this, const RuntimeMethod* method)
{
	typedef void (*Animator_StartPlayback_m3123690249_ftn) (Animator_t434523843 *);
	static Animator_StartPlayback_m3123690249_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_StartPlayback_m3123690249_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::StartPlayback()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Animator::StopPlayback()
extern "C" IL2CPP_METHOD_ATTR void Animator_StopPlayback_m3399889712 (Animator_t434523843 * __this, const RuntimeMethod* method)
{
	typedef void (*Animator_StopPlayback_m3399889712_ftn) (Animator_t434523843 *);
	static Animator_StopPlayback_m3399889712_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_StopPlayback_m3399889712_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::StopPlayback()");
	_il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Animator::get_playbackTime()
extern "C" IL2CPP_METHOD_ATTR float Animator_get_playbackTime_m3857839613 (Animator_t434523843 * __this, const RuntimeMethod* method)
{
	typedef float (*Animator_get_playbackTime_m3857839613_ftn) (Animator_t434523843 *);
	static Animator_get_playbackTime_m3857839613_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_playbackTime_m3857839613_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_playbackTime()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Animator::set_playbackTime(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_set_playbackTime_m2922241191 (Animator_t434523843 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*Animator_set_playbackTime_m2922241191_ftn) (Animator_t434523843 *, float);
	static Animator_set_playbackTime_m2922241191_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_playbackTime_m2922241191_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_playbackTime(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Animator::StartRecording(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Animator_StartRecording_m2219572212 (Animator_t434523843 * __this, int32_t ___frameCount0, const RuntimeMethod* method)
{
	typedef void (*Animator_StartRecording_m2219572212_ftn) (Animator_t434523843 *, int32_t);
	static Animator_StartRecording_m2219572212_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_StartRecording_m2219572212_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::StartRecording(System.Int32)");
	_il2cpp_icall_func(__this, ___frameCount0);
}
// System.Void UnityEngine.Animator::StopRecording()
extern "C" IL2CPP_METHOD_ATTR void Animator_StopRecording_m1316699595 (Animator_t434523843 * __this, const RuntimeMethod* method)
{
	typedef void (*Animator_StopRecording_m1316699595_ftn) (Animator_t434523843 *);
	static Animator_StopRecording_m1316699595_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_StopRecording_m1316699595_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::StopRecording()");
	_il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Animator::get_recorderStartTime()
extern "C" IL2CPP_METHOD_ATTR float Animator_get_recorderStartTime_m3664365018 (Animator_t434523843 * __this, const RuntimeMethod* method)
{
	typedef float (*Animator_get_recorderStartTime_m3664365018_ftn) (Animator_t434523843 *);
	static Animator_get_recorderStartTime_m3664365018_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_recorderStartTime_m3664365018_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_recorderStartTime()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Animator::set_recorderStartTime(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_set_recorderStartTime_m3010017099 (Animator_t434523843 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*Animator_set_recorderStartTime_m3010017099_ftn) (Animator_t434523843 *, float);
	static Animator_set_recorderStartTime_m3010017099_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_recorderStartTime_m3010017099_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_recorderStartTime(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.Animator::get_recorderStopTime()
extern "C" IL2CPP_METHOD_ATTR float Animator_get_recorderStopTime_m2793978137 (Animator_t434523843 * __this, const RuntimeMethod* method)
{
	typedef float (*Animator_get_recorderStopTime_m2793978137_ftn) (Animator_t434523843 *);
	static Animator_get_recorderStopTime_m2793978137_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_recorderStopTime_m2793978137_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_recorderStopTime()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Animator::set_recorderStopTime(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_set_recorderStopTime_m1581181082 (Animator_t434523843 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*Animator_set_recorderStopTime_m1581181082_ftn) (Animator_t434523843 *, float);
	static Animator_set_recorderStopTime_m1581181082_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_recorderStopTime_m1581181082_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_recorderStopTime(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.AnimatorRecorderMode UnityEngine.Animator::get_recorderMode()
extern "C" IL2CPP_METHOD_ATTR int32_t Animator_get_recorderMode_m1794335349 (Animator_t434523843 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*Animator_get_recorderMode_m1794335349_ftn) (Animator_t434523843 *);
	static Animator_get_recorderMode_m1794335349_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_recorderMode_m1794335349_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_recorderMode()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.RuntimeAnimatorController UnityEngine.Animator::get_runtimeAnimatorController()
extern "C" IL2CPP_METHOD_ATTR RuntimeAnimatorController_t2933699135 * Animator_get_runtimeAnimatorController_m2903243094 (Animator_t434523843 * __this, const RuntimeMethod* method)
{
	typedef RuntimeAnimatorController_t2933699135 * (*Animator_get_runtimeAnimatorController_m2903243094_ftn) (Animator_t434523843 *);
	static Animator_get_runtimeAnimatorController_m2903243094_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_runtimeAnimatorController_m2903243094_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_runtimeAnimatorController()");
	RuntimeAnimatorController_t2933699135 * retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Animator::set_runtimeAnimatorController(UnityEngine.RuntimeAnimatorController)
extern "C" IL2CPP_METHOD_ATTR void Animator_set_runtimeAnimatorController_m3324432892 (Animator_t434523843 * __this, RuntimeAnimatorController_t2933699135 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Animator_set_runtimeAnimatorController_m3324432892_ftn) (Animator_t434523843 *, RuntimeAnimatorController_t2933699135 *);
	static Animator_set_runtimeAnimatorController_m3324432892_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_runtimeAnimatorController_m3324432892_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_runtimeAnimatorController(UnityEngine.RuntimeAnimatorController)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.Animator::get_hasBoundPlayables()
extern "C" IL2CPP_METHOD_ATTR bool Animator_get_hasBoundPlayables_m2940726619 (Animator_t434523843 * __this, const RuntimeMethod* method)
{
	typedef bool (*Animator_get_hasBoundPlayables_m2940726619_ftn) (Animator_t434523843 *);
	static Animator_get_hasBoundPlayables_m2940726619_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_hasBoundPlayables_m2940726619_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_hasBoundPlayables()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.Animator::HasState(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Animator_HasState_m3016322899 (Animator_t434523843 * __this, int32_t ___layerIndex0, int32_t ___stateID1, const RuntimeMethod* method)
{
	typedef bool (*Animator_HasState_m3016322899_ftn) (Animator_t434523843 *, int32_t, int32_t);
	static Animator_HasState_m3016322899_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_HasState_m3016322899_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::HasState(System.Int32,System.Int32)");
	bool retVal = _il2cpp_icall_func(__this, ___layerIndex0, ___stateID1);
	return retVal;
}
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t Animator_StringToHash_m1666053228 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	typedef int32_t (*Animator_StringToHash_m1666053228_ftn) (String_t*);
	static Animator_StringToHash_m1666053228_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_StringToHash_m1666053228_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::StringToHash(System.String)");
	int32_t retVal = _il2cpp_icall_func(___name0);
	return retVal;
}
// UnityEngine.Avatar UnityEngine.Animator::get_avatar()
extern "C" IL2CPP_METHOD_ATTR Avatar_t2902216466 * Animator_get_avatar_m3250739246 (Animator_t434523843 * __this, const RuntimeMethod* method)
{
	typedef Avatar_t2902216466 * (*Animator_get_avatar_m3250739246_ftn) (Animator_t434523843 *);
	static Animator_get_avatar_m3250739246_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_avatar_m3250739246_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_avatar()");
	Avatar_t2902216466 * retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Animator::set_avatar(UnityEngine.Avatar)
extern "C" IL2CPP_METHOD_ATTR void Animator_set_avatar_m3457105604 (Animator_t434523843 * __this, Avatar_t2902216466 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Animator_set_avatar_m3457105604_ftn) (Animator_t434523843 *, Avatar_t2902216466 *);
	static Animator_set_avatar_m3457105604_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_avatar_m3457105604_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_avatar(UnityEngine.Avatar)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Playables.PlayableGraph UnityEngine.Animator::get_playableGraph()
extern "C" IL2CPP_METHOD_ATTR PlayableGraph_t3515989261  Animator_get_playableGraph_m988747863 (Animator_t434523843 * __this, const RuntimeMethod* method)
{
	PlayableGraph_t3515989261  V_0;
	memset(&V_0, 0, sizeof(V_0));
	PlayableGraph_t3515989261  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(PlayableGraph_t3515989261 ));
		Animator_InternalGetCurrentGraph_m900393272(__this, (&V_0), /*hidden argument*/NULL);
		PlayableGraph_t3515989261  L_0 = V_0;
		V_1 = L_0;
		goto IL_0018;
	}

IL_0018:
	{
		PlayableGraph_t3515989261  L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.Animator::InternalGetCurrentGraph(UnityEngine.Playables.PlayableGraph&)
extern "C" IL2CPP_METHOD_ATTR void Animator_InternalGetCurrentGraph_m900393272 (Animator_t434523843 * __this, PlayableGraph_t3515989261 * ___graph0, const RuntimeMethod* method)
{
	{
		PlayableGraph_t3515989261 * L_0 = ___graph0;
		Animator_INTERNAL_CALL_InternalGetCurrentGraph_m533700740(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::INTERNAL_CALL_InternalGetCurrentGraph(UnityEngine.Animator,UnityEngine.Playables.PlayableGraph&)
extern "C" IL2CPP_METHOD_ATTR void Animator_INTERNAL_CALL_InternalGetCurrentGraph_m533700740 (RuntimeObject * __this /* static, unused */, Animator_t434523843 * ___self0, PlayableGraph_t3515989261 * ___graph1, const RuntimeMethod* method)
{
	typedef void (*Animator_INTERNAL_CALL_InternalGetCurrentGraph_m533700740_ftn) (Animator_t434523843 *, PlayableGraph_t3515989261 *);
	static Animator_INTERNAL_CALL_InternalGetCurrentGraph_m533700740_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_INTERNAL_CALL_InternalGetCurrentGraph_m533700740_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::INTERNAL_CALL_InternalGetCurrentGraph(UnityEngine.Animator,UnityEngine.Playables.PlayableGraph&)");
	_il2cpp_icall_func(___self0, ___graph1);
}
// System.Void UnityEngine.Animator::CheckIfInIKPass()
extern "C" IL2CPP_METHOD_ATTR void Animator_CheckIfInIKPass_m1701567706 (Animator_t434523843 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Animator_CheckIfInIKPass_m1701567706_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = Animator_get_logWarnings_m3175887280(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		bool L_1 = Animator_CheckIfInIKPassInternal_m973388907(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, _stringLiteral3380224547, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Boolean UnityEngine.Animator::CheckIfInIKPassInternal()
extern "C" IL2CPP_METHOD_ATTR bool Animator_CheckIfInIKPassInternal_m973388907 (Animator_t434523843 * __this, const RuntimeMethod* method)
{
	typedef bool (*Animator_CheckIfInIKPassInternal_m973388907_ftn) (Animator_t434523843 *);
	static Animator_CheckIfInIKPassInternal_m973388907_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_CheckIfInIKPassInternal_m973388907_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::CheckIfInIKPassInternal()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Animator::SetFloatString(System.String,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetFloatString_m417479335 (Animator_t434523843 * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method)
{
	typedef void (*Animator_SetFloatString_m417479335_ftn) (Animator_t434523843 *, String_t*, float);
	static Animator_SetFloatString_m417479335_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetFloatString_m417479335_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetFloatString(System.String,System.Single)");
	_il2cpp_icall_func(__this, ___name0, ___value1);
}
// System.Void UnityEngine.Animator::SetFloatID(System.Int32,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetFloatID_m759961653 (Animator_t434523843 * __this, int32_t ___id0, float ___value1, const RuntimeMethod* method)
{
	typedef void (*Animator_SetFloatID_m759961653_ftn) (Animator_t434523843 *, int32_t, float);
	static Animator_SetFloatID_m759961653_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetFloatID_m759961653_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetFloatID(System.Int32,System.Single)");
	_il2cpp_icall_func(__this, ___id0, ___value1);
}
// System.Single UnityEngine.Animator::GetFloatString(System.String)
extern "C" IL2CPP_METHOD_ATTR float Animator_GetFloatString_m3180836206 (Animator_t434523843 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	typedef float (*Animator_GetFloatString_m3180836206_ftn) (Animator_t434523843 *, String_t*);
	static Animator_GetFloatString_m3180836206_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetFloatString_m3180836206_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetFloatString(System.String)");
	float retVal = _il2cpp_icall_func(__this, ___name0);
	return retVal;
}
// System.Single UnityEngine.Animator::GetFloatID(System.Int32)
extern "C" IL2CPP_METHOD_ATTR float Animator_GetFloatID_m3658774233 (Animator_t434523843 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	typedef float (*Animator_GetFloatID_m3658774233_ftn) (Animator_t434523843 *, int32_t);
	static Animator_GetFloatID_m3658774233_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetFloatID_m3658774233_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetFloatID(System.Int32)");
	float retVal = _il2cpp_icall_func(__this, ___id0);
	return retVal;
}
// System.Void UnityEngine.Animator::SetBoolString(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetBoolString_m1913721706 (Animator_t434523843 * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method)
{
	typedef void (*Animator_SetBoolString_m1913721706_ftn) (Animator_t434523843 *, String_t*, bool);
	static Animator_SetBoolString_m1913721706_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetBoolString_m1913721706_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetBoolString(System.String,System.Boolean)");
	_il2cpp_icall_func(__this, ___name0, ___value1);
}
// System.Void UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetBoolID_m2106676274 (Animator_t434523843 * __this, int32_t ___id0, bool ___value1, const RuntimeMethod* method)
{
	typedef void (*Animator_SetBoolID_m2106676274_ftn) (Animator_t434523843 *, int32_t, bool);
	static Animator_SetBoolID_m2106676274_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetBoolID_m2106676274_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)");
	_il2cpp_icall_func(__this, ___id0, ___value1);
}
// System.Boolean UnityEngine.Animator::GetBoolString(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Animator_GetBoolString_m4261382084 (Animator_t434523843 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	typedef bool (*Animator_GetBoolString_m4261382084_ftn) (Animator_t434523843 *, String_t*);
	static Animator_GetBoolString_m4261382084_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetBoolString_m4261382084_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetBoolString(System.String)");
	bool retVal = _il2cpp_icall_func(__this, ___name0);
	return retVal;
}
// System.Boolean UnityEngine.Animator::GetBoolID(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Animator_GetBoolID_m3211650753 (Animator_t434523843 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	typedef bool (*Animator_GetBoolID_m3211650753_ftn) (Animator_t434523843 *, int32_t);
	static Animator_GetBoolID_m3211650753_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetBoolID_m3211650753_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetBoolID(System.Int32)");
	bool retVal = _il2cpp_icall_func(__this, ___id0);
	return retVal;
}
// System.Void UnityEngine.Animator::SetIntegerString(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetIntegerString_m3069556331 (Animator_t434523843 * __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method)
{
	typedef void (*Animator_SetIntegerString_m3069556331_ftn) (Animator_t434523843 *, String_t*, int32_t);
	static Animator_SetIntegerString_m3069556331_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetIntegerString_m3069556331_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetIntegerString(System.String,System.Int32)");
	_il2cpp_icall_func(__this, ___name0, ___value1);
}
// System.Void UnityEngine.Animator::SetIntegerID(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetIntegerID_m1197891907 (Animator_t434523843 * __this, int32_t ___id0, int32_t ___value1, const RuntimeMethod* method)
{
	typedef void (*Animator_SetIntegerID_m1197891907_ftn) (Animator_t434523843 *, int32_t, int32_t);
	static Animator_SetIntegerID_m1197891907_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetIntegerID_m1197891907_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetIntegerID(System.Int32,System.Int32)");
	_il2cpp_icall_func(__this, ___id0, ___value1);
}
// System.Int32 UnityEngine.Animator::GetIntegerString(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t Animator_GetIntegerString_m2483385635 (Animator_t434523843 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	typedef int32_t (*Animator_GetIntegerString_m2483385635_ftn) (Animator_t434523843 *, String_t*);
	static Animator_GetIntegerString_m2483385635_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetIntegerString_m2483385635_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetIntegerString(System.String)");
	int32_t retVal = _il2cpp_icall_func(__this, ___name0);
	return retVal;
}
// System.Int32 UnityEngine.Animator::GetIntegerID(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Animator_GetIntegerID_m3539387357 (Animator_t434523843 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	typedef int32_t (*Animator_GetIntegerID_m3539387357_ftn) (Animator_t434523843 *, int32_t);
	static Animator_GetIntegerID_m3539387357_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetIntegerID_m3539387357_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetIntegerID(System.Int32)");
	int32_t retVal = _il2cpp_icall_func(__this, ___id0);
	return retVal;
}
// System.Void UnityEngine.Animator::SetTriggerString(System.String)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetTriggerString_m2612407758 (Animator_t434523843 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	typedef void (*Animator_SetTriggerString_m2612407758_ftn) (Animator_t434523843 *, String_t*);
	static Animator_SetTriggerString_m2612407758_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetTriggerString_m2612407758_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetTriggerString(System.String)");
	_il2cpp_icall_func(__this, ___name0);
}
// System.Void UnityEngine.Animator::SetTriggerID(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetTriggerID_m9043433 (Animator_t434523843 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	typedef void (*Animator_SetTriggerID_m9043433_ftn) (Animator_t434523843 *, int32_t);
	static Animator_SetTriggerID_m9043433_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetTriggerID_m9043433_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetTriggerID(System.Int32)");
	_il2cpp_icall_func(__this, ___id0);
}
// System.Void UnityEngine.Animator::ResetTriggerString(System.String)
extern "C" IL2CPP_METHOD_ATTR void Animator_ResetTriggerString_m394341254 (Animator_t434523843 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	typedef void (*Animator_ResetTriggerString_m394341254_ftn) (Animator_t434523843 *, String_t*);
	static Animator_ResetTriggerString_m394341254_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_ResetTriggerString_m394341254_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::ResetTriggerString(System.String)");
	_il2cpp_icall_func(__this, ___name0);
}
// System.Void UnityEngine.Animator::ResetTriggerID(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Animator_ResetTriggerID_m1779548927 (Animator_t434523843 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	typedef void (*Animator_ResetTriggerID_m1779548927_ftn) (Animator_t434523843 *, int32_t);
	static Animator_ResetTriggerID_m1779548927_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_ResetTriggerID_m1779548927_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::ResetTriggerID(System.Int32)");
	_il2cpp_icall_func(__this, ___id0);
}
// System.Boolean UnityEngine.Animator::IsParameterControlledByCurveString(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Animator_IsParameterControlledByCurveString_m3449841540 (Animator_t434523843 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	typedef bool (*Animator_IsParameterControlledByCurveString_m3449841540_ftn) (Animator_t434523843 *, String_t*);
	static Animator_IsParameterControlledByCurveString_m3449841540_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_IsParameterControlledByCurveString_m3449841540_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::IsParameterControlledByCurveString(System.String)");
	bool retVal = _il2cpp_icall_func(__this, ___name0);
	return retVal;
}
// System.Boolean UnityEngine.Animator::IsParameterControlledByCurveID(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Animator_IsParameterControlledByCurveID_m1238520650 (Animator_t434523843 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	typedef bool (*Animator_IsParameterControlledByCurveID_m1238520650_ftn) (Animator_t434523843 *, int32_t);
	static Animator_IsParameterControlledByCurveID_m1238520650_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_IsParameterControlledByCurveID_m1238520650_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::IsParameterControlledByCurveID(System.Int32)");
	bool retVal = _il2cpp_icall_func(__this, ___id0);
	return retVal;
}
// System.Void UnityEngine.Animator::SetFloatStringDamp(System.String,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetFloatStringDamp_m1913837802 (Animator_t434523843 * __this, String_t* ___name0, float ___value1, float ___dampTime2, float ___deltaTime3, const RuntimeMethod* method)
{
	typedef void (*Animator_SetFloatStringDamp_m1913837802_ftn) (Animator_t434523843 *, String_t*, float, float, float);
	static Animator_SetFloatStringDamp_m1913837802_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetFloatStringDamp_m1913837802_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetFloatStringDamp(System.String,System.Single,System.Single,System.Single)");
	_il2cpp_icall_func(__this, ___name0, ___value1, ___dampTime2, ___deltaTime3);
}
// System.Void UnityEngine.Animator::SetFloatIDDamp(System.Int32,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetFloatIDDamp_m1611756056 (Animator_t434523843 * __this, int32_t ___id0, float ___value1, float ___dampTime2, float ___deltaTime3, const RuntimeMethod* method)
{
	typedef void (*Animator_SetFloatIDDamp_m1611756056_ftn) (Animator_t434523843 *, int32_t, float, float, float);
	static Animator_SetFloatIDDamp_m1611756056_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetFloatIDDamp_m1611756056_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetFloatIDDamp(System.Int32,System.Single,System.Single,System.Single)");
	_il2cpp_icall_func(__this, ___id0, ___value1, ___dampTime2, ___deltaTime3);
}
// System.Boolean UnityEngine.Animator::get_layersAffectMassCenter()
extern "C" IL2CPP_METHOD_ATTR bool Animator_get_layersAffectMassCenter_m2154164557 (Animator_t434523843 * __this, const RuntimeMethod* method)
{
	typedef bool (*Animator_get_layersAffectMassCenter_m2154164557_ftn) (Animator_t434523843 *);
	static Animator_get_layersAffectMassCenter_m2154164557_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_layersAffectMassCenter_m2154164557_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_layersAffectMassCenter()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Animator::set_layersAffectMassCenter(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Animator_set_layersAffectMassCenter_m1998188045 (Animator_t434523843 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*Animator_set_layersAffectMassCenter_m1998188045_ftn) (Animator_t434523843 *, bool);
	static Animator_set_layersAffectMassCenter_m1998188045_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_layersAffectMassCenter_m1998188045_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_layersAffectMassCenter(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.Animator::get_leftFeetBottomHeight()
extern "C" IL2CPP_METHOD_ATTR float Animator_get_leftFeetBottomHeight_m425469140 (Animator_t434523843 * __this, const RuntimeMethod* method)
{
	typedef float (*Animator_get_leftFeetBottomHeight_m425469140_ftn) (Animator_t434523843 *);
	static Animator_get_leftFeetBottomHeight_m425469140_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_leftFeetBottomHeight_m425469140_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_leftFeetBottomHeight()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Single UnityEngine.Animator::get_rightFeetBottomHeight()
extern "C" IL2CPP_METHOD_ATTR float Animator_get_rightFeetBottomHeight_m2289958331 (Animator_t434523843 * __this, const RuntimeMethod* method)
{
	typedef float (*Animator_get_rightFeetBottomHeight_m2289958331_ftn) (Animator_t434523843 *);
	static Animator_get_rightFeetBottomHeight_m2289958331_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_rightFeetBottomHeight_m2289958331_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_rightFeetBottomHeight()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Animator::Update(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_Update_m3041769415 (Animator_t434523843 * __this, float ___deltaTime0, const RuntimeMethod* method)
{
	typedef void (*Animator_Update_m3041769415_ftn) (Animator_t434523843 *, float);
	static Animator_Update_m3041769415_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_Update_m3041769415_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::Update(System.Single)");
	_il2cpp_icall_func(__this, ___deltaTime0);
}
// System.Void UnityEngine.Animator::Rebind()
extern "C" IL2CPP_METHOD_ATTR void Animator_Rebind_m4018473738 (Animator_t434523843 * __this, const RuntimeMethod* method)
{
	typedef void (*Animator_Rebind_m4018473738_ftn) (Animator_t434523843 *);
	static Animator_Rebind_m4018473738_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_Rebind_m4018473738_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::Rebind()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Animator::ApplyBuiltinRootMotion()
extern "C" IL2CPP_METHOD_ATTR void Animator_ApplyBuiltinRootMotion_m1566893688 (Animator_t434523843 * __this, const RuntimeMethod* method)
{
	typedef void (*Animator_ApplyBuiltinRootMotion_m1566893688_ftn) (Animator_t434523843 *);
	static Animator_ApplyBuiltinRootMotion_m1566893688_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_ApplyBuiltinRootMotion_m1566893688_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::ApplyBuiltinRootMotion()");
	_il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Animator::get_logWarnings()
extern "C" IL2CPP_METHOD_ATTR bool Animator_get_logWarnings_m3175887280 (Animator_t434523843 * __this, const RuntimeMethod* method)
{
	typedef bool (*Animator_get_logWarnings_m3175887280_ftn) (Animator_t434523843 *);
	static Animator_get_logWarnings_m3175887280_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_logWarnings_m3175887280_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_logWarnings()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Animator::set_logWarnings(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Animator_set_logWarnings_m2317568956 (Animator_t434523843 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*Animator_set_logWarnings_m2317568956_ftn) (Animator_t434523843 *, bool);
	static Animator_set_logWarnings_m2317568956_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_logWarnings_m2317568956_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_logWarnings(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.Animator::get_fireEvents()
extern "C" IL2CPP_METHOD_ATTR bool Animator_get_fireEvents_m2812620169 (Animator_t434523843 * __this, const RuntimeMethod* method)
{
	typedef bool (*Animator_get_fireEvents_m2812620169_ftn) (Animator_t434523843 *);
	static Animator_get_fireEvents_m2812620169_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_fireEvents_m2812620169_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_fireEvents()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Animator::set_fireEvents(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Animator_set_fireEvents_m1572690403 (Animator_t434523843 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*Animator_set_fireEvents_m1572690403_ftn) (Animator_t434523843 *, bool);
	static Animator_set_fireEvents_m1572690403_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_fireEvents_m1572690403_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_fireEvents(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.AnimatorControllerParameter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AnimatorControllerParameter__ctor_m1078906152 (AnimatorControllerParameter_t1758260042 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimatorControllerParameter__ctor_m1078906152_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_Name_0(_stringLiteral757602046);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.AnimatorControllerParameter::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* AnimatorControllerParameter_get_name_m2392457225 (AnimatorControllerParameter_t1758260042 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_Name_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.AnimatorControllerParameter::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool AnimatorControllerParameter_Equals_m581940217 (AnimatorControllerParameter_t1758260042 * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimatorControllerParameter_Equals_m581940217_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AnimatorControllerParameter_t1758260042 * V_0 = NULL;
	bool V_1 = false;
	int32_t G_B7_0 = 0;
	{
		RuntimeObject * L_0 = ___o0;
		V_0 = ((AnimatorControllerParameter_t1758260042 *)IsInstSealed((RuntimeObject*)L_0, AnimatorControllerParameter_t1758260042_il2cpp_TypeInfo_var));
		AnimatorControllerParameter_t1758260042 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0067;
		}
	}
	{
		String_t* L_2 = __this->get_m_Name_0();
		AnimatorControllerParameter_t1758260042 * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = L_3->get_m_Name_0();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m920492651(NULL /*static, unused*/, L_2, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = __this->get_m_Type_1();
		AnimatorControllerParameter_t1758260042 * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = L_7->get_m_Type_1();
		if ((!(((uint32_t)L_6) == ((uint32_t)L_8))))
		{
			goto IL_0067;
		}
	}
	{
		float L_9 = __this->get_m_DefaultFloat_2();
		AnimatorControllerParameter_t1758260042 * L_10 = V_0;
		NullCheck(L_10);
		float L_11 = L_10->get_m_DefaultFloat_2();
		if ((!(((float)L_9) == ((float)L_11))))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_12 = __this->get_m_DefaultInt_3();
		AnimatorControllerParameter_t1758260042 * L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = L_13->get_m_DefaultInt_3();
		if ((!(((uint32_t)L_12) == ((uint32_t)L_14))))
		{
			goto IL_0067;
		}
	}
	{
		bool L_15 = __this->get_m_DefaultBool_4();
		AnimatorControllerParameter_t1758260042 * L_16 = V_0;
		NullCheck(L_16);
		bool L_17 = L_16->get_m_DefaultBool_4();
		G_B7_0 = ((((int32_t)L_15) == ((int32_t)L_17))? 1 : 0);
		goto IL_0068;
	}

IL_0067:
	{
		G_B7_0 = 0;
	}

IL_0068:
	{
		V_1 = (bool)G_B7_0;
		goto IL_006e;
	}

IL_006e:
	{
		bool L_18 = V_1;
		return L_18;
	}
}
// System.Int32 UnityEngine.AnimatorControllerParameter::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t AnimatorControllerParameter_GetHashCode_m760596945 (AnimatorControllerParameter_t1758260042 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = AnimatorControllerParameter_get_name_m2392457225(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.AnimatorStateInfo::get_fullPathHash()
extern "C" IL2CPP_METHOD_ATTR int32_t AnimatorStateInfo_get_fullPathHash_m2978085309 (AnimatorStateInfo_t509032636 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_FullPath_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
extern "C"  int32_t AnimatorStateInfo_get_fullPathHash_m2978085309_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimatorStateInfo_t509032636 * _thisAdjusted = reinterpret_cast<AnimatorStateInfo_t509032636 *>(__this + 1);
	return AnimatorStateInfo_get_fullPathHash_m2978085309(_thisAdjusted, method);
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_nameHash()
extern "C" IL2CPP_METHOD_ATTR int32_t AnimatorStateInfo_get_nameHash_m4064958502 (AnimatorStateInfo_t509032636 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Path_1();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
extern "C"  int32_t AnimatorStateInfo_get_nameHash_m4064958502_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimatorStateInfo_t509032636 * _thisAdjusted = reinterpret_cast<AnimatorStateInfo_t509032636 *>(__this + 1);
	return AnimatorStateInfo_get_nameHash_m4064958502(_thisAdjusted, method);
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_shortNameHash()
extern "C" IL2CPP_METHOD_ATTR int32_t AnimatorStateInfo_get_shortNameHash_m3578045446 (AnimatorStateInfo_t509032636 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Name_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
extern "C"  int32_t AnimatorStateInfo_get_shortNameHash_m3578045446_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimatorStateInfo_t509032636 * _thisAdjusted = reinterpret_cast<AnimatorStateInfo_t509032636 *>(__this + 1);
	return AnimatorStateInfo_get_shortNameHash_m3578045446(_thisAdjusted, method);
}
// System.Single UnityEngine.AnimatorStateInfo::get_normalizedTime()
extern "C" IL2CPP_METHOD_ATTR float AnimatorStateInfo_get_normalizedTime_m2701390466 (AnimatorStateInfo_t509032636 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_NormalizedTime_3();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
		return L_1;
	}
}
extern "C"  float AnimatorStateInfo_get_normalizedTime_m2701390466_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimatorStateInfo_t509032636 * _thisAdjusted = reinterpret_cast<AnimatorStateInfo_t509032636 *>(__this + 1);
	return AnimatorStateInfo_get_normalizedTime_m2701390466(_thisAdjusted, method);
}
// System.Single UnityEngine.AnimatorStateInfo::get_length()
extern "C" IL2CPP_METHOD_ATTR float AnimatorStateInfo_get_length_m130221364 (AnimatorStateInfo_t509032636 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_Length_4();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
		return L_1;
	}
}
extern "C"  float AnimatorStateInfo_get_length_m130221364_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimatorStateInfo_t509032636 * _thisAdjusted = reinterpret_cast<AnimatorStateInfo_t509032636 *>(__this + 1);
	return AnimatorStateInfo_get_length_m130221364(_thisAdjusted, method);
}
// System.Single UnityEngine.AnimatorStateInfo::get_speed()
extern "C" IL2CPP_METHOD_ATTR float AnimatorStateInfo_get_speed_m241119581 (AnimatorStateInfo_t509032636 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_Speed_5();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
		return L_1;
	}
}
extern "C"  float AnimatorStateInfo_get_speed_m241119581_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimatorStateInfo_t509032636 * _thisAdjusted = reinterpret_cast<AnimatorStateInfo_t509032636 *>(__this + 1);
	return AnimatorStateInfo_get_speed_m241119581(_thisAdjusted, method);
}
// System.Single UnityEngine.AnimatorStateInfo::get_speedMultiplier()
extern "C" IL2CPP_METHOD_ATTR float AnimatorStateInfo_get_speedMultiplier_m803921333 (AnimatorStateInfo_t509032636 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_SpeedMultiplier_6();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
		return L_1;
	}
}
extern "C"  float AnimatorStateInfo_get_speedMultiplier_m803921333_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimatorStateInfo_t509032636 * _thisAdjusted = reinterpret_cast<AnimatorStateInfo_t509032636 *>(__this + 1);
	return AnimatorStateInfo_get_speedMultiplier_m803921333(_thisAdjusted, method);
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_tagHash()
extern "C" IL2CPP_METHOD_ATTR int32_t AnimatorStateInfo_get_tagHash_m1760199943 (AnimatorStateInfo_t509032636 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Tag_7();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
extern "C"  int32_t AnimatorStateInfo_get_tagHash_m1760199943_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimatorStateInfo_t509032636 * _thisAdjusted = reinterpret_cast<AnimatorStateInfo_t509032636 *>(__this + 1);
	return AnimatorStateInfo_get_tagHash_m1760199943(_thisAdjusted, method);
}
// System.Boolean UnityEngine.AnimatorStateInfo::get_loop()
extern "C" IL2CPP_METHOD_ATTR bool AnimatorStateInfo_get_loop_m3780967345 (AnimatorStateInfo_t509032636 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_m_Loop_8();
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0013;
	}

IL_0013:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
extern "C"  bool AnimatorStateInfo_get_loop_m3780967345_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimatorStateInfo_t509032636 * _thisAdjusted = reinterpret_cast<AnimatorStateInfo_t509032636 *>(__this + 1);
	return AnimatorStateInfo_get_loop_m3780967345(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.AnimatorTransitionInfo
extern "C" void AnimatorTransitionInfo_t2534804151_marshal_pinvoke(const AnimatorTransitionInfo_t2534804151& unmarshaled, AnimatorTransitionInfo_t2534804151_marshaled_pinvoke& marshaled)
{
	marshaled.___m_FullPath_0 = unmarshaled.get_m_FullPath_0();
	marshaled.___m_UserName_1 = unmarshaled.get_m_UserName_1();
	marshaled.___m_Name_2 = unmarshaled.get_m_Name_2();
	marshaled.___m_HasFixedDuration_3 = static_cast<int32_t>(unmarshaled.get_m_HasFixedDuration_3());
	marshaled.___m_Duration_4 = unmarshaled.get_m_Duration_4();
	marshaled.___m_NormalizedTime_5 = unmarshaled.get_m_NormalizedTime_5();
	marshaled.___m_AnyState_6 = static_cast<int32_t>(unmarshaled.get_m_AnyState_6());
	marshaled.___m_TransitionType_7 = unmarshaled.get_m_TransitionType_7();
}
extern "C" void AnimatorTransitionInfo_t2534804151_marshal_pinvoke_back(const AnimatorTransitionInfo_t2534804151_marshaled_pinvoke& marshaled, AnimatorTransitionInfo_t2534804151& unmarshaled)
{
	int32_t unmarshaled_m_FullPath_temp_0 = 0;
	unmarshaled_m_FullPath_temp_0 = marshaled.___m_FullPath_0;
	unmarshaled.set_m_FullPath_0(unmarshaled_m_FullPath_temp_0);
	int32_t unmarshaled_m_UserName_temp_1 = 0;
	unmarshaled_m_UserName_temp_1 = marshaled.___m_UserName_1;
	unmarshaled.set_m_UserName_1(unmarshaled_m_UserName_temp_1);
	int32_t unmarshaled_m_Name_temp_2 = 0;
	unmarshaled_m_Name_temp_2 = marshaled.___m_Name_2;
	unmarshaled.set_m_Name_2(unmarshaled_m_Name_temp_2);
	bool unmarshaled_m_HasFixedDuration_temp_3 = false;
	unmarshaled_m_HasFixedDuration_temp_3 = static_cast<bool>(marshaled.___m_HasFixedDuration_3);
	unmarshaled.set_m_HasFixedDuration_3(unmarshaled_m_HasFixedDuration_temp_3);
	float unmarshaled_m_Duration_temp_4 = 0.0f;
	unmarshaled_m_Duration_temp_4 = marshaled.___m_Duration_4;
	unmarshaled.set_m_Duration_4(unmarshaled_m_Duration_temp_4);
	float unmarshaled_m_NormalizedTime_temp_5 = 0.0f;
	unmarshaled_m_NormalizedTime_temp_5 = marshaled.___m_NormalizedTime_5;
	unmarshaled.set_m_NormalizedTime_5(unmarshaled_m_NormalizedTime_temp_5);
	bool unmarshaled_m_AnyState_temp_6 = false;
	unmarshaled_m_AnyState_temp_6 = static_cast<bool>(marshaled.___m_AnyState_6);
	unmarshaled.set_m_AnyState_6(unmarshaled_m_AnyState_temp_6);
	int32_t unmarshaled_m_TransitionType_temp_7 = 0;
	unmarshaled_m_TransitionType_temp_7 = marshaled.___m_TransitionType_7;
	unmarshaled.set_m_TransitionType_7(unmarshaled_m_TransitionType_temp_7);
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimatorTransitionInfo
extern "C" void AnimatorTransitionInfo_t2534804151_marshal_pinvoke_cleanup(AnimatorTransitionInfo_t2534804151_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.AnimatorTransitionInfo
extern "C" void AnimatorTransitionInfo_t2534804151_marshal_com(const AnimatorTransitionInfo_t2534804151& unmarshaled, AnimatorTransitionInfo_t2534804151_marshaled_com& marshaled)
{
	marshaled.___m_FullPath_0 = unmarshaled.get_m_FullPath_0();
	marshaled.___m_UserName_1 = unmarshaled.get_m_UserName_1();
	marshaled.___m_Name_2 = unmarshaled.get_m_Name_2();
	marshaled.___m_HasFixedDuration_3 = static_cast<int32_t>(unmarshaled.get_m_HasFixedDuration_3());
	marshaled.___m_Duration_4 = unmarshaled.get_m_Duration_4();
	marshaled.___m_NormalizedTime_5 = unmarshaled.get_m_NormalizedTime_5();
	marshaled.___m_AnyState_6 = static_cast<int32_t>(unmarshaled.get_m_AnyState_6());
	marshaled.___m_TransitionType_7 = unmarshaled.get_m_TransitionType_7();
}
extern "C" void AnimatorTransitionInfo_t2534804151_marshal_com_back(const AnimatorTransitionInfo_t2534804151_marshaled_com& marshaled, AnimatorTransitionInfo_t2534804151& unmarshaled)
{
	int32_t unmarshaled_m_FullPath_temp_0 = 0;
	unmarshaled_m_FullPath_temp_0 = marshaled.___m_FullPath_0;
	unmarshaled.set_m_FullPath_0(unmarshaled_m_FullPath_temp_0);
	int32_t unmarshaled_m_UserName_temp_1 = 0;
	unmarshaled_m_UserName_temp_1 = marshaled.___m_UserName_1;
	unmarshaled.set_m_UserName_1(unmarshaled_m_UserName_temp_1);
	int32_t unmarshaled_m_Name_temp_2 = 0;
	unmarshaled_m_Name_temp_2 = marshaled.___m_Name_2;
	unmarshaled.set_m_Name_2(unmarshaled_m_Name_temp_2);
	bool unmarshaled_m_HasFixedDuration_temp_3 = false;
	unmarshaled_m_HasFixedDuration_temp_3 = static_cast<bool>(marshaled.___m_HasFixedDuration_3);
	unmarshaled.set_m_HasFixedDuration_3(unmarshaled_m_HasFixedDuration_temp_3);
	float unmarshaled_m_Duration_temp_4 = 0.0f;
	unmarshaled_m_Duration_temp_4 = marshaled.___m_Duration_4;
	unmarshaled.set_m_Duration_4(unmarshaled_m_Duration_temp_4);
	float unmarshaled_m_NormalizedTime_temp_5 = 0.0f;
	unmarshaled_m_NormalizedTime_temp_5 = marshaled.___m_NormalizedTime_5;
	unmarshaled.set_m_NormalizedTime_5(unmarshaled_m_NormalizedTime_temp_5);
	bool unmarshaled_m_AnyState_temp_6 = false;
	unmarshaled_m_AnyState_temp_6 = static_cast<bool>(marshaled.___m_AnyState_6);
	unmarshaled.set_m_AnyState_6(unmarshaled_m_AnyState_temp_6);
	int32_t unmarshaled_m_TransitionType_temp_7 = 0;
	unmarshaled_m_TransitionType_temp_7 = marshaled.___m_TransitionType_7;
	unmarshaled.set_m_TransitionType_7(unmarshaled_m_TransitionType_temp_7);
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimatorTransitionInfo
extern "C" void AnimatorTransitionInfo_t2534804151_marshal_com_cleanup(AnimatorTransitionInfo_t2534804151_marshaled_com& marshaled)
{
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_fullPathHash()
extern "C" IL2CPP_METHOD_ATTR int32_t AnimatorTransitionInfo_get_fullPathHash_m1909440967 (AnimatorTransitionInfo_t2534804151 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_FullPath_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
extern "C"  int32_t AnimatorTransitionInfo_get_fullPathHash_m1909440967_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimatorTransitionInfo_t2534804151 * _thisAdjusted = reinterpret_cast<AnimatorTransitionInfo_t2534804151 *>(__this + 1);
	return AnimatorTransitionInfo_get_fullPathHash_m1909440967(_thisAdjusted, method);
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_nameHash()
extern "C" IL2CPP_METHOD_ATTR int32_t AnimatorTransitionInfo_get_nameHash_m3336626857 (AnimatorTransitionInfo_t2534804151 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Name_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
extern "C"  int32_t AnimatorTransitionInfo_get_nameHash_m3336626857_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimatorTransitionInfo_t2534804151 * _thisAdjusted = reinterpret_cast<AnimatorTransitionInfo_t2534804151 *>(__this + 1);
	return AnimatorTransitionInfo_get_nameHash_m3336626857(_thisAdjusted, method);
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_userNameHash()
extern "C" IL2CPP_METHOD_ATTR int32_t AnimatorTransitionInfo_get_userNameHash_m2248997669 (AnimatorTransitionInfo_t2534804151 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_UserName_1();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
extern "C"  int32_t AnimatorTransitionInfo_get_userNameHash_m2248997669_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimatorTransitionInfo_t2534804151 * _thisAdjusted = reinterpret_cast<AnimatorTransitionInfo_t2534804151 *>(__this + 1);
	return AnimatorTransitionInfo_get_userNameHash_m2248997669(_thisAdjusted, method);
}
// UnityEngine.DurationUnit UnityEngine.AnimatorTransitionInfo::get_durationUnit()
extern "C" IL2CPP_METHOD_ATTR int32_t AnimatorTransitionInfo_get_durationUnit_m518834263 (AnimatorTransitionInfo_t2534804151 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		bool L_0 = __this->get_m_HasFixedDuration_3();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 1;
	}

IL_0013:
	{
		V_0 = G_B3_0;
		goto IL_0019;
	}

IL_0019:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
extern "C"  int32_t AnimatorTransitionInfo_get_durationUnit_m518834263_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimatorTransitionInfo_t2534804151 * _thisAdjusted = reinterpret_cast<AnimatorTransitionInfo_t2534804151 *>(__this + 1);
	return AnimatorTransitionInfo_get_durationUnit_m518834263(_thisAdjusted, method);
}
// System.Single UnityEngine.AnimatorTransitionInfo::get_duration()
extern "C" IL2CPP_METHOD_ATTR float AnimatorTransitionInfo_get_duration_m3801171545 (AnimatorTransitionInfo_t2534804151 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_Duration_4();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
		return L_1;
	}
}
extern "C"  float AnimatorTransitionInfo_get_duration_m3801171545_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimatorTransitionInfo_t2534804151 * _thisAdjusted = reinterpret_cast<AnimatorTransitionInfo_t2534804151 *>(__this + 1);
	return AnimatorTransitionInfo_get_duration_m3801171545(_thisAdjusted, method);
}
// System.Single UnityEngine.AnimatorTransitionInfo::get_normalizedTime()
extern "C" IL2CPP_METHOD_ATTR float AnimatorTransitionInfo_get_normalizedTime_m1885586090 (AnimatorTransitionInfo_t2534804151 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_NormalizedTime_5();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
		return L_1;
	}
}
extern "C"  float AnimatorTransitionInfo_get_normalizedTime_m1885586090_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimatorTransitionInfo_t2534804151 * _thisAdjusted = reinterpret_cast<AnimatorTransitionInfo_t2534804151 *>(__this + 1);
	return AnimatorTransitionInfo_get_normalizedTime_m1885586090(_thisAdjusted, method);
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_anyState()
extern "C" IL2CPP_METHOD_ATTR bool AnimatorTransitionInfo_get_anyState_m1016241302 (AnimatorTransitionInfo_t2534804151 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_m_AnyState_6();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
extern "C"  bool AnimatorTransitionInfo_get_anyState_m1016241302_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimatorTransitionInfo_t2534804151 * _thisAdjusted = reinterpret_cast<AnimatorTransitionInfo_t2534804151 *>(__this + 1);
	return AnimatorTransitionInfo_get_anyState_m1016241302(_thisAdjusted, method);
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_entry()
extern "C" IL2CPP_METHOD_ATTR bool AnimatorTransitionInfo_get_entry_m3876778991 (AnimatorTransitionInfo_t2534804151 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_m_TransitionType_7();
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0015:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
extern "C"  bool AnimatorTransitionInfo_get_entry_m3876778991_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimatorTransitionInfo_t2534804151 * _thisAdjusted = reinterpret_cast<AnimatorTransitionInfo_t2534804151 *>(__this + 1);
	return AnimatorTransitionInfo_get_entry_m3876778991(_thisAdjusted, method);
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_exit()
extern "C" IL2CPP_METHOD_ATTR bool AnimatorTransitionInfo_get_exit_m2939894432 (AnimatorTransitionInfo_t2534804151 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_m_TransitionType_7();
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)4))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0015:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
extern "C"  bool AnimatorTransitionInfo_get_exit_m2939894432_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimatorTransitionInfo_t2534804151 * _thisAdjusted = reinterpret_cast<AnimatorTransitionInfo_t2534804151 *>(__this + 1);
	return AnimatorTransitionInfo_get_exit_m2939894432(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Avatar::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Avatar__ctor_m4254148338 (Avatar_t2902216466 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Avatar__ctor_m4254148338_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object__ctor_m1087895580(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.HumanBone
extern "C" void HumanBone_t2465339518_marshal_pinvoke(const HumanBone_t2465339518& unmarshaled, HumanBone_t2465339518_marshaled_pinvoke& marshaled)
{
	marshaled.___m_BoneName_0 = il2cpp_codegen_marshal_string(unmarshaled.get_m_BoneName_0());
	marshaled.___m_HumanName_1 = il2cpp_codegen_marshal_string(unmarshaled.get_m_HumanName_1());
	marshaled.___limit_2 = unmarshaled.get_limit_2();
}
extern "C" void HumanBone_t2465339518_marshal_pinvoke_back(const HumanBone_t2465339518_marshaled_pinvoke& marshaled, HumanBone_t2465339518& unmarshaled)
{
	unmarshaled.set_m_BoneName_0(il2cpp_codegen_marshal_string_result(marshaled.___m_BoneName_0));
	unmarshaled.set_m_HumanName_1(il2cpp_codegen_marshal_string_result(marshaled.___m_HumanName_1));
	HumanLimit_t2901552972  unmarshaled_limit_temp_2;
	memset(&unmarshaled_limit_temp_2, 0, sizeof(unmarshaled_limit_temp_2));
	unmarshaled_limit_temp_2 = marshaled.___limit_2;
	unmarshaled.set_limit_2(unmarshaled_limit_temp_2);
}
// Conversion method for clean up from marshalling of: UnityEngine.HumanBone
extern "C" void HumanBone_t2465339518_marshal_pinvoke_cleanup(HumanBone_t2465339518_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_BoneName_0);
	marshaled.___m_BoneName_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_HumanName_1);
	marshaled.___m_HumanName_1 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.HumanBone
extern "C" void HumanBone_t2465339518_marshal_com(const HumanBone_t2465339518& unmarshaled, HumanBone_t2465339518_marshaled_com& marshaled)
{
	marshaled.___m_BoneName_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_m_BoneName_0());
	marshaled.___m_HumanName_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_m_HumanName_1());
	marshaled.___limit_2 = unmarshaled.get_limit_2();
}
extern "C" void HumanBone_t2465339518_marshal_com_back(const HumanBone_t2465339518_marshaled_com& marshaled, HumanBone_t2465339518& unmarshaled)
{
	unmarshaled.set_m_BoneName_0(il2cpp_codegen_marshal_bstring_result(marshaled.___m_BoneName_0));
	unmarshaled.set_m_HumanName_1(il2cpp_codegen_marshal_bstring_result(marshaled.___m_HumanName_1));
	HumanLimit_t2901552972  unmarshaled_limit_temp_2;
	memset(&unmarshaled_limit_temp_2, 0, sizeof(unmarshaled_limit_temp_2));
	unmarshaled_limit_temp_2 = marshaled.___limit_2;
	unmarshaled.set_limit_2(unmarshaled_limit_temp_2);
}
// Conversion method for clean up from marshalling of: UnityEngine.HumanBone
extern "C" void HumanBone_t2465339518_marshal_com_cleanup(HumanBone_t2465339518_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_BoneName_0);
	marshaled.___m_BoneName_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_HumanName_1);
	marshaled.___m_HumanName_1 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Motion::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Motion__ctor_m1337281595 (Motion_t1110556653 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Motion__ctor_m1337281595_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object__ctor_m1087895580(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.RuntimeAnimatorController::.ctor()
extern "C" IL2CPP_METHOD_ATTR void RuntimeAnimatorController__ctor_m3991471855 (RuntimeAnimatorController_t2933699135 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RuntimeAnimatorController__ctor_m3991471855_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object__ctor_m1087895580(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.SkeletonBone
extern "C" void SkeletonBone_t4134054672_marshal_pinvoke(const SkeletonBone_t4134054672& unmarshaled, SkeletonBone_t4134054672_marshaled_pinvoke& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_string(unmarshaled.get_name_0());
	marshaled.___parentName_1 = il2cpp_codegen_marshal_string(unmarshaled.get_parentName_1());
	marshaled.___position_2 = unmarshaled.get_position_2();
	marshaled.___rotation_3 = unmarshaled.get_rotation_3();
	marshaled.___scale_4 = unmarshaled.get_scale_4();
}
extern "C" void SkeletonBone_t4134054672_marshal_pinvoke_back(const SkeletonBone_t4134054672_marshaled_pinvoke& marshaled, SkeletonBone_t4134054672& unmarshaled)
{
	unmarshaled.set_name_0(il2cpp_codegen_marshal_string_result(marshaled.___name_0));
	unmarshaled.set_parentName_1(il2cpp_codegen_marshal_string_result(marshaled.___parentName_1));
	Vector3_t3722313464  unmarshaled_position_temp_2;
	memset(&unmarshaled_position_temp_2, 0, sizeof(unmarshaled_position_temp_2));
	unmarshaled_position_temp_2 = marshaled.___position_2;
	unmarshaled.set_position_2(unmarshaled_position_temp_2);
	Quaternion_t2301928331  unmarshaled_rotation_temp_3;
	memset(&unmarshaled_rotation_temp_3, 0, sizeof(unmarshaled_rotation_temp_3));
	unmarshaled_rotation_temp_3 = marshaled.___rotation_3;
	unmarshaled.set_rotation_3(unmarshaled_rotation_temp_3);
	Vector3_t3722313464  unmarshaled_scale_temp_4;
	memset(&unmarshaled_scale_temp_4, 0, sizeof(unmarshaled_scale_temp_4));
	unmarshaled_scale_temp_4 = marshaled.___scale_4;
	unmarshaled.set_scale_4(unmarshaled_scale_temp_4);
}
// Conversion method for clean up from marshalling of: UnityEngine.SkeletonBone
extern "C" void SkeletonBone_t4134054672_marshal_pinvoke_cleanup(SkeletonBone_t4134054672_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___name_0);
	marshaled.___name_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___parentName_1);
	marshaled.___parentName_1 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.SkeletonBone
extern "C" void SkeletonBone_t4134054672_marshal_com(const SkeletonBone_t4134054672& unmarshaled, SkeletonBone_t4134054672_marshaled_com& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_name_0());
	marshaled.___parentName_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_parentName_1());
	marshaled.___position_2 = unmarshaled.get_position_2();
	marshaled.___rotation_3 = unmarshaled.get_rotation_3();
	marshaled.___scale_4 = unmarshaled.get_scale_4();
}
extern "C" void SkeletonBone_t4134054672_marshal_com_back(const SkeletonBone_t4134054672_marshaled_com& marshaled, SkeletonBone_t4134054672& unmarshaled)
{
	unmarshaled.set_name_0(il2cpp_codegen_marshal_bstring_result(marshaled.___name_0));
	unmarshaled.set_parentName_1(il2cpp_codegen_marshal_bstring_result(marshaled.___parentName_1));
	Vector3_t3722313464  unmarshaled_position_temp_2;
	memset(&unmarshaled_position_temp_2, 0, sizeof(unmarshaled_position_temp_2));
	unmarshaled_position_temp_2 = marshaled.___position_2;
	unmarshaled.set_position_2(unmarshaled_position_temp_2);
	Quaternion_t2301928331  unmarshaled_rotation_temp_3;
	memset(&unmarshaled_rotation_temp_3, 0, sizeof(unmarshaled_rotation_temp_3));
	unmarshaled_rotation_temp_3 = marshaled.___rotation_3;
	unmarshaled.set_rotation_3(unmarshaled_rotation_temp_3);
	Vector3_t3722313464  unmarshaled_scale_temp_4;
	memset(&unmarshaled_scale_temp_4, 0, sizeof(unmarshaled_scale_temp_4));
	unmarshaled_scale_temp_4 = marshaled.___scale_4;
	unmarshaled.set_scale_4(unmarshaled_scale_temp_4);
}
// Conversion method for clean up from marshalling of: UnityEngine.SkeletonBone
extern "C" void SkeletonBone_t4134054672_marshal_com_cleanup(SkeletonBone_t4134054672_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___name_0);
	marshaled.___name_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___parentName_1);
	marshaled.___parentName_1 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.StateMachineBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void StateMachineBehaviour__ctor_m3367380209 (StateMachineBehaviour_t957311111 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m1310743131(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
