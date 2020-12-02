﻿#include "il2cpp-config.h"

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

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// UnityEngine.Audio.AudioMixerGroup
struct AudioMixerGroup_t2743564464;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.AudioClip
struct AudioClip_t3680889665;
// System.Single[]
struct SingleU5BU5D_t1444911251;
// System.String
struct String_t;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t1677636661;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t1059417452;
// System.NullReferenceException
struct NullReferenceException_t1023182353;
// System.ArgumentException
struct ArgumentException_t132251570;
// System.Delegate
struct Delegate_t1188392813;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// UnityEngine.AudioExtensionDefinition
struct AudioExtensionDefinition_t3271167678;
// System.Type
struct Type_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// UnityEngine.AudioSourceExtension
struct AudioSourceExtension_t3064908834;
// UnityEngine.AudioSource
struct AudioSource_t3935305588;
// System.Collections.Generic.List`1<UnityEngine.AudioSpatializerExtensionDefinition>
struct List_1_t2069970928;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// UnityEngine.AudioSpatializerExtensionDefinition
struct AudioSpatializerExtensionDefinition_t597896186;
// System.Collections.Generic.List`1<UnityEngine.AudioAmbisonicExtensionDefinition>
struct List_1_t1295534336;
// UnityEngine.AudioAmbisonicExtensionDefinition
struct AudioAmbisonicExtensionDefinition_t4118426890;
// UnityEngine.AudioListenerExtension
struct AudioListenerExtension_t3242956547;
// UnityEngine.AudioListener
struct AudioListener_t2734094699;
// System.Collections.Generic.List`1<UnityEngine.AudioSourceExtension>
struct List_1_t242016280;
// UnityEngine.Behaviour
struct Behaviour_t1437897464;
// UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522;
// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
struct AudioConfigurationChangeHandler_t2089929874;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3046754366;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// UnityEngine.AudioSpatializerExtensionDefinition[]
struct AudioSpatializerExtensionDefinitionU5BU5D_t143577823;
// UnityEngine.AudioAmbisonicExtensionDefinition[]
struct AudioAmbisonicExtensionDefinitionU5BU5D_t954184591;
// UnityEngine.AudioSourceExtension[]
struct AudioSourceExtensionU5BU5D_t4125762839;
// System.Void
struct Void_t1185182177;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;

extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern const uint32_t AudioMixerGroup__ctor_m730722219_MetadataUsageId;
extern const uint32_t AudioClip__ctor_m1211547677_MetadataUsageId;
extern RuntimeClass* NullReferenceException_t1023182353_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern const RuntimeMethod* AudioClip_Create_m3077788910_RuntimeMethod_var;
extern String_t* _stringLiteral2471574756;
extern String_t* _stringLiteral1087634904;
extern String_t* _stringLiteral1974720957;
extern const uint32_t AudioClip_Create_m3077788910_MetadataUsageId;
extern RuntimeClass* PCMReaderCallback_t1677636661_il2cpp_TypeInfo_var;
extern const uint32_t AudioClip_add_m_PCMReaderCallback_m4156331313_MetadataUsageId;
extern const uint32_t AudioClip_remove_m_PCMReaderCallback_m2377752248_MetadataUsageId;
extern RuntimeClass* PCMSetPositionCallback_t1059417452_il2cpp_TypeInfo_var;
extern const uint32_t AudioClip_add_m_PCMSetPositionCallback_m670709619_MetadataUsageId;
extern const uint32_t AudioClip_remove_m_PCMSetPositionCallback_m1546728302_MetadataUsageId;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern const uint32_t PCMSetPositionCallback_BeginInvoke_m2701134198_MetadataUsageId;
extern RuntimeClass* StringU5BU5D_t1281789340_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3452614530;
extern String_t* _stringLiteral3450517380;
extern const uint32_t AudioExtensionDefinition_GetExtensionType_m1450823952_MetadataUsageId;
extern RuntimeClass* AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_GetEnumerator_m1716448724_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m615903654_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m2697843606_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m3198901590_RuntimeMethod_var;
extern const uint32_t AudioExtensionManager_AddSpatializerExtension_m820561940_MetadataUsageId;
extern const RuntimeMethod* List_1_GetEnumerator_m2295013814_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m967136761_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m1000499844_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m405442337_RuntimeMethod_var;
extern const uint32_t AudioExtensionManager_AddAmbisonicDecoderExtension_m3197702864_MetadataUsageId;
extern const uint32_t AudioExtensionManager_WriteExtensionProperties_m1988587615_MetadataUsageId;
extern const uint32_t AudioExtensionManager_AddSpatializerExtension_m3915849352_MetadataUsageId;
extern const uint32_t AudioExtensionManager_WriteExtensionProperties_m3028464154_MetadataUsageId;
extern const RuntimeMethod* List_1_Add_m2957197106_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m3844406869_RuntimeMethod_var;
extern const uint32_t AudioExtensionManager_AddExtensionToManager_m3475649283_MetadataUsageId;
extern const RuntimeMethod* List_1_get_Item_m1395253538_RuntimeMethod_var;
extern const RuntimeMethod* List_1_set_Item_m845928814_RuntimeMethod_var;
extern const RuntimeMethod* List_1_RemoveAt_m2462508318_RuntimeMethod_var;
extern const uint32_t AudioExtensionManager_RemoveExtensionFromManager_m442924172_MetadataUsageId;
extern RuntimeClass* AudioListener_t2734094699_il2cpp_TypeInfo_var;
extern const uint32_t AudioExtensionManager_Update_m3269307447_MetadataUsageId;
extern const uint32_t AudioExtensionManager_GetReadyToPlay_m1557263244_MetadataUsageId;
extern String_t* _stringLiteral4035105846;
extern const uint32_t AudioExtensionManager_RegisterBuiltinDefinitions_m2742744104_MetadataUsageId;
extern RuntimeClass* List_1_t2069970928_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t1295534336_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t242016280_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m3866378638_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m4205755667_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m69557434_RuntimeMethod_var;
extern const uint32_t AudioExtensionManager__cctor_m1361600190_MetadataUsageId;
extern RuntimeClass* AudioListenerExtension_t3242956547_il2cpp_TypeInfo_var;
extern const uint32_t AudioListener_AddExtension_m994751216_MetadataUsageId;
extern RuntimeClass* AudioSettings_t3587374600_il2cpp_TypeInfo_var;
extern const uint32_t AudioSettings_InvokeOnAudioConfigurationChanged_m3131294153_MetadataUsageId;
extern const uint32_t AudioSettings_InvokeOnAudioManagerUpdate_m4044425648_MetadataUsageId;
extern const uint32_t AudioSettings_InvokeOnAudioSourcePlay_m3298744573_MetadataUsageId;
extern RuntimeClass* Boolean_t97287965_il2cpp_TypeInfo_var;
extern const uint32_t AudioConfigurationChangeHandler_BeginInvoke_m4104069447_MetadataUsageId;
extern const uint32_t AudioSource_PlayOneShot_m2678069419_MetadataUsageId;
extern const RuntimeType* AudioSource_t3935305588_0_0_0_var;
extern RuntimeClass* GameObject_t1113636619_il2cpp_TypeInfo_var;
extern RuntimeClass* AudioSource_t3935305588_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2997775034;
extern const uint32_t AudioSource_PlayClipAtPoint_m3985620478_MetadataUsageId;
extern const uint32_t AudioSource_set_spatialize_m92154612_MetadataUsageId;
extern RuntimeClass* AudioSourceExtension_t3064908834_il2cpp_TypeInfo_var;
extern const uint32_t AudioSource_AddSpatializerExtension_m2560794359_MetadataUsageId;
extern const uint32_t AudioSource_AddAmbisonicExtension_m304476911_MetadataUsageId;

struct SingleU5BU5D_t1444911251;
struct StringU5BU5D_t1281789340;


#ifndef U3CMODULEU3E_T692745531_H
#define U3CMODULEU3E_T692745531_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745531 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745531_H
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
#ifndef AUDIOEXTENSIONDEFINITION_T3271167678_H
#define AUDIOEXTENSIONDEFINITION_T3271167678_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioExtensionDefinition
struct  AudioExtensionDefinition_t3271167678  : public RuntimeObject
{
public:
	// System.String UnityEngine.AudioExtensionDefinition::assemblyName
	String_t* ___assemblyName_0;
	// System.String UnityEngine.AudioExtensionDefinition::extensionNamespace
	String_t* ___extensionNamespace_1;
	// System.String UnityEngine.AudioExtensionDefinition::extensionTypeName
	String_t* ___extensionTypeName_2;
	// System.Type UnityEngine.AudioExtensionDefinition::extensionType
	Type_t * ___extensionType_3;

public:
	inline static int32_t get_offset_of_assemblyName_0() { return static_cast<int32_t>(offsetof(AudioExtensionDefinition_t3271167678, ___assemblyName_0)); }
	inline String_t* get_assemblyName_0() const { return ___assemblyName_0; }
	inline String_t** get_address_of_assemblyName_0() { return &___assemblyName_0; }
	inline void set_assemblyName_0(String_t* value)
	{
		___assemblyName_0 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_0), value);
	}

	inline static int32_t get_offset_of_extensionNamespace_1() { return static_cast<int32_t>(offsetof(AudioExtensionDefinition_t3271167678, ___extensionNamespace_1)); }
	inline String_t* get_extensionNamespace_1() const { return ___extensionNamespace_1; }
	inline String_t** get_address_of_extensionNamespace_1() { return &___extensionNamespace_1; }
	inline void set_extensionNamespace_1(String_t* value)
	{
		___extensionNamespace_1 = value;
		Il2CppCodeGenWriteBarrier((&___extensionNamespace_1), value);
	}

	inline static int32_t get_offset_of_extensionTypeName_2() { return static_cast<int32_t>(offsetof(AudioExtensionDefinition_t3271167678, ___extensionTypeName_2)); }
	inline String_t* get_extensionTypeName_2() const { return ___extensionTypeName_2; }
	inline String_t** get_address_of_extensionTypeName_2() { return &___extensionTypeName_2; }
	inline void set_extensionTypeName_2(String_t* value)
	{
		___extensionTypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___extensionTypeName_2), value);
	}

	inline static int32_t get_offset_of_extensionType_3() { return static_cast<int32_t>(offsetof(AudioExtensionDefinition_t3271167678, ___extensionType_3)); }
	inline Type_t * get_extensionType_3() const { return ___extensionType_3; }
	inline Type_t ** get_address_of_extensionType_3() { return &___extensionType_3; }
	inline void set_extensionType_3(Type_t * value)
	{
		___extensionType_3 = value;
		Il2CppCodeGenWriteBarrier((&___extensionType_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOEXTENSIONDEFINITION_T3271167678_H
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
#ifndef LIST_1_T2069970928_H
#define LIST_1_T2069970928_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.AudioSpatializerExtensionDefinition>
struct  List_1_t2069970928  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	AudioSpatializerExtensionDefinitionU5BU5D_t143577823* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2069970928, ____items_1)); }
	inline AudioSpatializerExtensionDefinitionU5BU5D_t143577823* get__items_1() const { return ____items_1; }
	inline AudioSpatializerExtensionDefinitionU5BU5D_t143577823** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(AudioSpatializerExtensionDefinitionU5BU5D_t143577823* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2069970928, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2069970928, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2069970928_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	AudioSpatializerExtensionDefinitionU5BU5D_t143577823* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2069970928_StaticFields, ___EmptyArray_4)); }
	inline AudioSpatializerExtensionDefinitionU5BU5D_t143577823* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline AudioSpatializerExtensionDefinitionU5BU5D_t143577823** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(AudioSpatializerExtensionDefinitionU5BU5D_t143577823* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2069970928_H
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
#ifndef LIST_1_T1295534336_H
#define LIST_1_T1295534336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.AudioAmbisonicExtensionDefinition>
struct  List_1_t1295534336  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	AudioAmbisonicExtensionDefinitionU5BU5D_t954184591* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1295534336, ____items_1)); }
	inline AudioAmbisonicExtensionDefinitionU5BU5D_t954184591* get__items_1() const { return ____items_1; }
	inline AudioAmbisonicExtensionDefinitionU5BU5D_t954184591** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(AudioAmbisonicExtensionDefinitionU5BU5D_t954184591* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1295534336, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1295534336, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t1295534336_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	AudioAmbisonicExtensionDefinitionU5BU5D_t954184591* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1295534336_StaticFields, ___EmptyArray_4)); }
	inline AudioAmbisonicExtensionDefinitionU5BU5D_t954184591* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline AudioAmbisonicExtensionDefinitionU5BU5D_t954184591** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(AudioAmbisonicExtensionDefinitionU5BU5D_t954184591* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1295534336_H
#ifndef LIST_1_T242016280_H
#define LIST_1_T242016280_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.AudioSourceExtension>
struct  List_1_t242016280  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	AudioSourceExtensionU5BU5D_t4125762839* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t242016280, ____items_1)); }
	inline AudioSourceExtensionU5BU5D_t4125762839* get__items_1() const { return ____items_1; }
	inline AudioSourceExtensionU5BU5D_t4125762839** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(AudioSourceExtensionU5BU5D_t4125762839* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t242016280, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t242016280, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t242016280_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	AudioSourceExtensionU5BU5D_t4125762839* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t242016280_StaticFields, ___EmptyArray_4)); }
	inline AudioSourceExtensionU5BU5D_t4125762839* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline AudioSourceExtensionU5BU5D_t4125762839** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(AudioSourceExtensionU5BU5D_t4125762839* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T242016280_H
#ifndef AUDIOSETTINGS_T3587374600_H
#define AUDIOSETTINGS_T3587374600_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSettings
struct  AudioSettings_t3587374600  : public RuntimeObject
{
public:

public:
};

struct AudioSettings_t3587374600_StaticFields
{
public:
	// UnityEngine.AudioSettings/AudioConfigurationChangeHandler UnityEngine.AudioSettings::OnAudioConfigurationChanged
	AudioConfigurationChangeHandler_t2089929874 * ___OnAudioConfigurationChanged_0;

public:
	inline static int32_t get_offset_of_OnAudioConfigurationChanged_0() { return static_cast<int32_t>(offsetof(AudioSettings_t3587374600_StaticFields, ___OnAudioConfigurationChanged_0)); }
	inline AudioConfigurationChangeHandler_t2089929874 * get_OnAudioConfigurationChanged_0() const { return ___OnAudioConfigurationChanged_0; }
	inline AudioConfigurationChangeHandler_t2089929874 ** get_address_of_OnAudioConfigurationChanged_0() { return &___OnAudioConfigurationChanged_0; }
	inline void set_OnAudioConfigurationChanged_0(AudioConfigurationChangeHandler_t2089929874 * value)
	{
		___OnAudioConfigurationChanged_0 = value;
		Il2CppCodeGenWriteBarrier((&___OnAudioConfigurationChanged_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSETTINGS_T3587374600_H
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
#ifndef ENUMERATOR_T2146457487_H
#define ENUMERATOR_T2146457487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t2146457487 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t257213610 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___l_0)); }
	inline List_1_t257213610 * get_l_0() const { return ___l_0; }
	inline List_1_t257213610 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t257213610 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2146457487_H
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
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
#ifndef ENUMERATOR_T3959214805_H
#define ENUMERATOR_T3959214805_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<UnityEngine.AudioSpatializerExtensionDefinition>
struct  Enumerator_t3959214805 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t2069970928 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	AudioSpatializerExtensionDefinition_t597896186 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t3959214805, ___l_0)); }
	inline List_1_t2069970928 * get_l_0() const { return ___l_0; }
	inline List_1_t2069970928 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t2069970928 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t3959214805, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t3959214805, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3959214805, ___current_3)); }
	inline AudioSpatializerExtensionDefinition_t597896186 * get_current_3() const { return ___current_3; }
	inline AudioSpatializerExtensionDefinition_t597896186 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(AudioSpatializerExtensionDefinition_t597896186 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3959214805_H
#ifndef PROPERTYNAME_T3749835189_H
#define PROPERTYNAME_T3749835189_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PropertyName
struct  PropertyName_t3749835189 
{
public:
	// System.Int32 UnityEngine.PropertyName::id
	int32_t ___id_0;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(PropertyName_t3749835189, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYNAME_T3749835189_H
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
#ifndef ENUMERATOR_T3184778213_H
#define ENUMERATOR_T3184778213_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<UnityEngine.AudioAmbisonicExtensionDefinition>
struct  Enumerator_t3184778213 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t1295534336 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	AudioAmbisonicExtensionDefinition_t4118426890 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t3184778213, ___l_0)); }
	inline List_1_t1295534336 * get_l_0() const { return ___l_0; }
	inline List_1_t1295534336 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t1295534336 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t3184778213, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t3184778213, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3184778213, ___current_3)); }
	inline AudioAmbisonicExtensionDefinition_t4118426890 * get_current_3() const { return ___current_3; }
	inline AudioAmbisonicExtensionDefinition_t4118426890 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(AudioAmbisonicExtensionDefinition_t4118426890 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3184778213_H
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
#ifndef UINT64_T4134040092_H
#define UINT64_T4134040092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_t4134040092 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt64_t4134040092, ___m_value_2)); }
	inline uint64_t get_m_value_2() const { return ___m_value_2; }
	inline uint64_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint64_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_T4134040092_H
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
#ifndef AUDIODATALOADSTATE_T3038631009_H
#define AUDIODATALOADSTATE_T3038631009_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioDataLoadState
struct  AudioDataLoadState_t3038631009 
{
public:
	// System.Int32 UnityEngine.AudioDataLoadState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AudioDataLoadState_t3038631009, ___value___1)); }
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
#endif // AUDIODATALOADSTATE_T3038631009_H
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
#ifndef AUDIOCLIPLOADTYPE_T1975823199_H
#define AUDIOCLIPLOADTYPE_T1975823199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClipLoadType
struct  AudioClipLoadType_t1975823199 
{
public:
	// System.Int32 UnityEngine.AudioClipLoadType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AudioClipLoadType_t1975823199, ___value___1)); }
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
#endif // AUDIOCLIPLOADTYPE_T1975823199_H
#ifndef AUDIOSOURCECURVETYPE_T3996206876_H
#define AUDIOSOURCECURVETYPE_T3996206876_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSourceCurveType
struct  AudioSourceCurveType_t3996206876 
{
public:
	// System.Int32 UnityEngine.AudioSourceCurveType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AudioSourceCurveType_t3996206876, ___value___1)); }
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
#endif // AUDIOSOURCECURVETYPE_T3996206876_H
#ifndef AUDIOVELOCITYUPDATEMODE_T1020767850_H
#define AUDIOVELOCITYUPDATEMODE_T1020767850_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioVelocityUpdateMode
struct  AudioVelocityUpdateMode_t1020767850 
{
public:
	// System.Int32 UnityEngine.AudioVelocityUpdateMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AudioVelocityUpdateMode_t1020767850, ___value___1)); }
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
#endif // AUDIOVELOCITYUPDATEMODE_T1020767850_H
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
#ifndef AUDIOROLLOFFMODE_T832723327_H
#define AUDIOROLLOFFMODE_T832723327_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioRolloffMode
struct  AudioRolloffMode_t832723327 
{
public:
	// System.Int32 UnityEngine.AudioRolloffMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AudioRolloffMode_t832723327, ___value___1)); }
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
#endif // AUDIOROLLOFFMODE_T832723327_H
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
#ifndef AUDIOAMBISONICEXTENSIONDEFINITION_T4118426890_H
#define AUDIOAMBISONICEXTENSIONDEFINITION_T4118426890_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioAmbisonicExtensionDefinition
struct  AudioAmbisonicExtensionDefinition_t4118426890  : public RuntimeObject
{
public:
	// UnityEngine.PropertyName UnityEngine.AudioAmbisonicExtensionDefinition::ambisonicPluginName
	PropertyName_t3749835189  ___ambisonicPluginName_0;
	// UnityEngine.AudioExtensionDefinition UnityEngine.AudioAmbisonicExtensionDefinition::definition
	AudioExtensionDefinition_t3271167678 * ___definition_1;

public:
	inline static int32_t get_offset_of_ambisonicPluginName_0() { return static_cast<int32_t>(offsetof(AudioAmbisonicExtensionDefinition_t4118426890, ___ambisonicPluginName_0)); }
	inline PropertyName_t3749835189  get_ambisonicPluginName_0() const { return ___ambisonicPluginName_0; }
	inline PropertyName_t3749835189 * get_address_of_ambisonicPluginName_0() { return &___ambisonicPluginName_0; }
	inline void set_ambisonicPluginName_0(PropertyName_t3749835189  value)
	{
		___ambisonicPluginName_0 = value;
	}

	inline static int32_t get_offset_of_definition_1() { return static_cast<int32_t>(offsetof(AudioAmbisonicExtensionDefinition_t4118426890, ___definition_1)); }
	inline AudioExtensionDefinition_t3271167678 * get_definition_1() const { return ___definition_1; }
	inline AudioExtensionDefinition_t3271167678 ** get_address_of_definition_1() { return &___definition_1; }
	inline void set_definition_1(AudioExtensionDefinition_t3271167678 * value)
	{
		___definition_1 = value;
		Il2CppCodeGenWriteBarrier((&___definition_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOAMBISONICEXTENSIONDEFINITION_T4118426890_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
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
#ifndef AUDIOEXTENSIONMANAGER_T3220897493_H
#define AUDIOEXTENSIONMANAGER_T3220897493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioExtensionManager
struct  AudioExtensionManager_t3220897493  : public RuntimeObject
{
public:

public:
};

struct AudioExtensionManager_t3220897493_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.AudioSpatializerExtensionDefinition> UnityEngine.AudioExtensionManager::m_ListenerSpatializerExtensionDefinitions
	List_1_t2069970928 * ___m_ListenerSpatializerExtensionDefinitions_0;
	// System.Collections.Generic.List`1<UnityEngine.AudioSpatializerExtensionDefinition> UnityEngine.AudioExtensionManager::m_SourceSpatializerExtensionDefinitions
	List_1_t2069970928 * ___m_SourceSpatializerExtensionDefinitions_1;
	// System.Collections.Generic.List`1<UnityEngine.AudioAmbisonicExtensionDefinition> UnityEngine.AudioExtensionManager::m_SourceAmbisonicDecoderExtensionDefinitions
	List_1_t1295534336 * ___m_SourceAmbisonicDecoderExtensionDefinitions_2;
	// System.Collections.Generic.List`1<UnityEngine.AudioSourceExtension> UnityEngine.AudioExtensionManager::m_SourceExtensionsToUpdate
	List_1_t242016280 * ___m_SourceExtensionsToUpdate_3;
	// System.Int32 UnityEngine.AudioExtensionManager::m_NextStopIndex
	int32_t ___m_NextStopIndex_4;
	// System.Boolean UnityEngine.AudioExtensionManager::m_BuiltinDefinitionsRegistered
	bool ___m_BuiltinDefinitionsRegistered_5;
	// UnityEngine.PropertyName UnityEngine.AudioExtensionManager::m_SpatializerName
	PropertyName_t3749835189  ___m_SpatializerName_6;
	// UnityEngine.PropertyName UnityEngine.AudioExtensionManager::m_SpatializerExtensionName
	PropertyName_t3749835189  ___m_SpatializerExtensionName_7;
	// UnityEngine.PropertyName UnityEngine.AudioExtensionManager::m_ListenerSpatializerExtensionName
	PropertyName_t3749835189  ___m_ListenerSpatializerExtensionName_8;

public:
	inline static int32_t get_offset_of_m_ListenerSpatializerExtensionDefinitions_0() { return static_cast<int32_t>(offsetof(AudioExtensionManager_t3220897493_StaticFields, ___m_ListenerSpatializerExtensionDefinitions_0)); }
	inline List_1_t2069970928 * get_m_ListenerSpatializerExtensionDefinitions_0() const { return ___m_ListenerSpatializerExtensionDefinitions_0; }
	inline List_1_t2069970928 ** get_address_of_m_ListenerSpatializerExtensionDefinitions_0() { return &___m_ListenerSpatializerExtensionDefinitions_0; }
	inline void set_m_ListenerSpatializerExtensionDefinitions_0(List_1_t2069970928 * value)
	{
		___m_ListenerSpatializerExtensionDefinitions_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ListenerSpatializerExtensionDefinitions_0), value);
	}

	inline static int32_t get_offset_of_m_SourceSpatializerExtensionDefinitions_1() { return static_cast<int32_t>(offsetof(AudioExtensionManager_t3220897493_StaticFields, ___m_SourceSpatializerExtensionDefinitions_1)); }
	inline List_1_t2069970928 * get_m_SourceSpatializerExtensionDefinitions_1() const { return ___m_SourceSpatializerExtensionDefinitions_1; }
	inline List_1_t2069970928 ** get_address_of_m_SourceSpatializerExtensionDefinitions_1() { return &___m_SourceSpatializerExtensionDefinitions_1; }
	inline void set_m_SourceSpatializerExtensionDefinitions_1(List_1_t2069970928 * value)
	{
		___m_SourceSpatializerExtensionDefinitions_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceSpatializerExtensionDefinitions_1), value);
	}

	inline static int32_t get_offset_of_m_SourceAmbisonicDecoderExtensionDefinitions_2() { return static_cast<int32_t>(offsetof(AudioExtensionManager_t3220897493_StaticFields, ___m_SourceAmbisonicDecoderExtensionDefinitions_2)); }
	inline List_1_t1295534336 * get_m_SourceAmbisonicDecoderExtensionDefinitions_2() const { return ___m_SourceAmbisonicDecoderExtensionDefinitions_2; }
	inline List_1_t1295534336 ** get_address_of_m_SourceAmbisonicDecoderExtensionDefinitions_2() { return &___m_SourceAmbisonicDecoderExtensionDefinitions_2; }
	inline void set_m_SourceAmbisonicDecoderExtensionDefinitions_2(List_1_t1295534336 * value)
	{
		___m_SourceAmbisonicDecoderExtensionDefinitions_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceAmbisonicDecoderExtensionDefinitions_2), value);
	}

	inline static int32_t get_offset_of_m_SourceExtensionsToUpdate_3() { return static_cast<int32_t>(offsetof(AudioExtensionManager_t3220897493_StaticFields, ___m_SourceExtensionsToUpdate_3)); }
	inline List_1_t242016280 * get_m_SourceExtensionsToUpdate_3() const { return ___m_SourceExtensionsToUpdate_3; }
	inline List_1_t242016280 ** get_address_of_m_SourceExtensionsToUpdate_3() { return &___m_SourceExtensionsToUpdate_3; }
	inline void set_m_SourceExtensionsToUpdate_3(List_1_t242016280 * value)
	{
		___m_SourceExtensionsToUpdate_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceExtensionsToUpdate_3), value);
	}

	inline static int32_t get_offset_of_m_NextStopIndex_4() { return static_cast<int32_t>(offsetof(AudioExtensionManager_t3220897493_StaticFields, ___m_NextStopIndex_4)); }
	inline int32_t get_m_NextStopIndex_4() const { return ___m_NextStopIndex_4; }
	inline int32_t* get_address_of_m_NextStopIndex_4() { return &___m_NextStopIndex_4; }
	inline void set_m_NextStopIndex_4(int32_t value)
	{
		___m_NextStopIndex_4 = value;
	}

	inline static int32_t get_offset_of_m_BuiltinDefinitionsRegistered_5() { return static_cast<int32_t>(offsetof(AudioExtensionManager_t3220897493_StaticFields, ___m_BuiltinDefinitionsRegistered_5)); }
	inline bool get_m_BuiltinDefinitionsRegistered_5() const { return ___m_BuiltinDefinitionsRegistered_5; }
	inline bool* get_address_of_m_BuiltinDefinitionsRegistered_5() { return &___m_BuiltinDefinitionsRegistered_5; }
	inline void set_m_BuiltinDefinitionsRegistered_5(bool value)
	{
		___m_BuiltinDefinitionsRegistered_5 = value;
	}

	inline static int32_t get_offset_of_m_SpatializerName_6() { return static_cast<int32_t>(offsetof(AudioExtensionManager_t3220897493_StaticFields, ___m_SpatializerName_6)); }
	inline PropertyName_t3749835189  get_m_SpatializerName_6() const { return ___m_SpatializerName_6; }
	inline PropertyName_t3749835189 * get_address_of_m_SpatializerName_6() { return &___m_SpatializerName_6; }
	inline void set_m_SpatializerName_6(PropertyName_t3749835189  value)
	{
		___m_SpatializerName_6 = value;
	}

	inline static int32_t get_offset_of_m_SpatializerExtensionName_7() { return static_cast<int32_t>(offsetof(AudioExtensionManager_t3220897493_StaticFields, ___m_SpatializerExtensionName_7)); }
	inline PropertyName_t3749835189  get_m_SpatializerExtensionName_7() const { return ___m_SpatializerExtensionName_7; }
	inline PropertyName_t3749835189 * get_address_of_m_SpatializerExtensionName_7() { return &___m_SpatializerExtensionName_7; }
	inline void set_m_SpatializerExtensionName_7(PropertyName_t3749835189  value)
	{
		___m_SpatializerExtensionName_7 = value;
	}

	inline static int32_t get_offset_of_m_ListenerSpatializerExtensionName_8() { return static_cast<int32_t>(offsetof(AudioExtensionManager_t3220897493_StaticFields, ___m_ListenerSpatializerExtensionName_8)); }
	inline PropertyName_t3749835189  get_m_ListenerSpatializerExtensionName_8() const { return ___m_ListenerSpatializerExtensionName_8; }
	inline PropertyName_t3749835189 * get_address_of_m_ListenerSpatializerExtensionName_8() { return &___m_ListenerSpatializerExtensionName_8; }
	inline void set_m_ListenerSpatializerExtensionName_8(PropertyName_t3749835189  value)
	{
		___m_ListenerSpatializerExtensionName_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOEXTENSIONMANAGER_T3220897493_H
#ifndef FFTWINDOW_T3745527606_H
#define FFTWINDOW_T3745527606_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.FFTWindow
struct  FFTWindow_t3745527606 
{
public:
	// System.Int32 UnityEngine.FFTWindow::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FFTWindow_t3745527606, ___value___1)); }
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
#endif // FFTWINDOW_T3745527606_H
#ifndef AUDIOSPATIALIZEREXTENSIONDEFINITION_T597896186_H
#define AUDIOSPATIALIZEREXTENSIONDEFINITION_T597896186_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSpatializerExtensionDefinition
struct  AudioSpatializerExtensionDefinition_t597896186  : public RuntimeObject
{
public:
	// UnityEngine.PropertyName UnityEngine.AudioSpatializerExtensionDefinition::spatializerName
	PropertyName_t3749835189  ___spatializerName_0;
	// UnityEngine.AudioExtensionDefinition UnityEngine.AudioSpatializerExtensionDefinition::definition
	AudioExtensionDefinition_t3271167678 * ___definition_1;

public:
	inline static int32_t get_offset_of_spatializerName_0() { return static_cast<int32_t>(offsetof(AudioSpatializerExtensionDefinition_t597896186, ___spatializerName_0)); }
	inline PropertyName_t3749835189  get_spatializerName_0() const { return ___spatializerName_0; }
	inline PropertyName_t3749835189 * get_address_of_spatializerName_0() { return &___spatializerName_0; }
	inline void set_spatializerName_0(PropertyName_t3749835189  value)
	{
		___spatializerName_0 = value;
	}

	inline static int32_t get_offset_of_definition_1() { return static_cast<int32_t>(offsetof(AudioSpatializerExtensionDefinition_t597896186, ___definition_1)); }
	inline AudioExtensionDefinition_t3271167678 * get_definition_1() const { return ___definition_1; }
	inline AudioExtensionDefinition_t3271167678 ** get_address_of_definition_1() { return &___definition_1; }
	inline void set_definition_1(AudioExtensionDefinition_t3271167678 * value)
	{
		___definition_1 = value;
		Il2CppCodeGenWriteBarrier((&___definition_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSPATIALIZEREXTENSIONDEFINITION_T597896186_H
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
#ifndef NULLREFERENCEEXCEPTION_T1023182353_H
#define NULLREFERENCEEXCEPTION_T1023182353_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NullReferenceException
struct  NullReferenceException_t1023182353  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLREFERENCEEXCEPTION_T1023182353_H
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
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
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
#ifndef AUDIOCLIPPLAYABLE_T785069022_H
#define AUDIOCLIPPLAYABLE_T785069022_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Audio.AudioClipPlayable
struct  AudioClipPlayable_t785069022 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioClipPlayable::m_Handle
	PlayableHandle_t1095853803  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AudioClipPlayable_t785069022, ___m_Handle_0)); }
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
#endif // AUDIOCLIPPLAYABLE_T785069022_H
#ifndef AUDIOCLIP_T3680889665_H
#define AUDIOCLIP_T3680889665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip
struct  AudioClip_t3680889665  : public Object_t631007953
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t1677636661 * ___m_PCMReaderCallback_2;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t1059417452 * ___m_PCMSetPositionCallback_3;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_2() { return static_cast<int32_t>(offsetof(AudioClip_t3680889665, ___m_PCMReaderCallback_2)); }
	inline PCMReaderCallback_t1677636661 * get_m_PCMReaderCallback_2() const { return ___m_PCMReaderCallback_2; }
	inline PCMReaderCallback_t1677636661 ** get_address_of_m_PCMReaderCallback_2() { return &___m_PCMReaderCallback_2; }
	inline void set_m_PCMReaderCallback_2(PCMReaderCallback_t1677636661 * value)
	{
		___m_PCMReaderCallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMReaderCallback_2), value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_3() { return static_cast<int32_t>(offsetof(AudioClip_t3680889665, ___m_PCMSetPositionCallback_3)); }
	inline PCMSetPositionCallback_t1059417452 * get_m_PCMSetPositionCallback_3() const { return ___m_PCMSetPositionCallback_3; }
	inline PCMSetPositionCallback_t1059417452 ** get_address_of_m_PCMSetPositionCallback_3() { return &___m_PCMSetPositionCallback_3; }
	inline void set_m_PCMSetPositionCallback_3(PCMSetPositionCallback_t1059417452 * value)
	{
		___m_PCMSetPositionCallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMSetPositionCallback_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCLIP_T3680889665_H
#ifndef AUDIOPLAYABLEOUTPUT_T2664391219_H
#define AUDIOPLAYABLEOUTPUT_T2664391219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Audio.AudioPlayableOutput
struct  AudioPlayableOutput_t2664391219 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Audio.AudioPlayableOutput::m_Handle
	PlayableOutputHandle_t4208053793  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AudioPlayableOutput_t2664391219, ___m_Handle_0)); }
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
#endif // AUDIOPLAYABLEOUTPUT_T2664391219_H
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
#ifndef AUDIOMIXERPLAYABLE_T3520548497_H
#define AUDIOMIXERPLAYABLE_T3520548497_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Audio.AudioMixerPlayable
struct  AudioMixerPlayable_t3520548497 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioMixerPlayable::m_Handle
	PlayableHandle_t1095853803  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AudioMixerPlayable_t3520548497, ___m_Handle_0)); }
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
#endif // AUDIOMIXERPLAYABLE_T3520548497_H
#ifndef AUDIOMIXERGROUP_T2743564464_H
#define AUDIOMIXERGROUP_T2743564464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Audio.AudioMixerGroup
struct  AudioMixerGroup_t2743564464  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOMIXERGROUP_T2743564464_H
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
#ifndef PCMSETPOSITIONCALLBACK_T1059417452_H
#define PCMSETPOSITIONCALLBACK_T1059417452_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip/PCMSetPositionCallback
struct  PCMSetPositionCallback_t1059417452  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PCMSETPOSITIONCALLBACK_T1059417452_H
#ifndef AUDIOCONFIGURATIONCHANGEHANDLER_T2089929874_H
#define AUDIOCONFIGURATIONCHANGEHANDLER_T2089929874_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
struct  AudioConfigurationChangeHandler_t2089929874  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCONFIGURATIONCHANGEHANDLER_T2089929874_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
#ifndef PCMREADERCALLBACK_T1677636661_H
#define PCMREADERCALLBACK_T1677636661_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip/PCMReaderCallback
struct  PCMReaderCallback_t1677636661  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PCMREADERCALLBACK_T1677636661_H
#ifndef AUDIOSOURCEEXTENSION_T3064908834_H
#define AUDIOSOURCEEXTENSION_T3064908834_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSourceExtension
struct  AudioSourceExtension_t3064908834  : public ScriptableObject_t2528358522
{
public:
	// UnityEngine.AudioSource UnityEngine.AudioSourceExtension::m_audioSource
	AudioSource_t3935305588 * ___m_audioSource_2;
	// System.Int32 UnityEngine.AudioSourceExtension::m_ExtensionManagerUpdateIndex
	int32_t ___m_ExtensionManagerUpdateIndex_3;

public:
	inline static int32_t get_offset_of_m_audioSource_2() { return static_cast<int32_t>(offsetof(AudioSourceExtension_t3064908834, ___m_audioSource_2)); }
	inline AudioSource_t3935305588 * get_m_audioSource_2() const { return ___m_audioSource_2; }
	inline AudioSource_t3935305588 ** get_address_of_m_audioSource_2() { return &___m_audioSource_2; }
	inline void set_m_audioSource_2(AudioSource_t3935305588 * value)
	{
		___m_audioSource_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_audioSource_2), value);
	}

	inline static int32_t get_offset_of_m_ExtensionManagerUpdateIndex_3() { return static_cast<int32_t>(offsetof(AudioSourceExtension_t3064908834, ___m_ExtensionManagerUpdateIndex_3)); }
	inline int32_t get_m_ExtensionManagerUpdateIndex_3() const { return ___m_ExtensionManagerUpdateIndex_3; }
	inline int32_t* get_address_of_m_ExtensionManagerUpdateIndex_3() { return &___m_ExtensionManagerUpdateIndex_3; }
	inline void set_m_ExtensionManagerUpdateIndex_3(int32_t value)
	{
		___m_ExtensionManagerUpdateIndex_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSOURCEEXTENSION_T3064908834_H
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
#ifndef AUDIOLISTENEREXTENSION_T3242956547_H
#define AUDIOLISTENEREXTENSION_T3242956547_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioListenerExtension
struct  AudioListenerExtension_t3242956547  : public ScriptableObject_t2528358522
{
public:
	// UnityEngine.AudioListener UnityEngine.AudioListenerExtension::m_audioListener
	AudioListener_t2734094699 * ___m_audioListener_2;

public:
	inline static int32_t get_offset_of_m_audioListener_2() { return static_cast<int32_t>(offsetof(AudioListenerExtension_t3242956547, ___m_audioListener_2)); }
	inline AudioListener_t2734094699 * get_m_audioListener_2() const { return ___m_audioListener_2; }
	inline AudioListener_t2734094699 ** get_address_of_m_audioListener_2() { return &___m_audioListener_2; }
	inline void set_m_audioListener_2(AudioListener_t2734094699 * value)
	{
		___m_audioListener_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_audioListener_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOLISTENEREXTENSION_T3242956547_H
#ifndef AUDIOSOURCE_T3935305588_H
#define AUDIOSOURCE_T3935305588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSource
struct  AudioSource_t3935305588  : public Behaviour_t1437897464
{
public:
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::spatializerExtension
	AudioSourceExtension_t3064908834 * ___spatializerExtension_2;
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::ambisonicExtension
	AudioSourceExtension_t3064908834 * ___ambisonicExtension_3;

public:
	inline static int32_t get_offset_of_spatializerExtension_2() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___spatializerExtension_2)); }
	inline AudioSourceExtension_t3064908834 * get_spatializerExtension_2() const { return ___spatializerExtension_2; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_spatializerExtension_2() { return &___spatializerExtension_2; }
	inline void set_spatializerExtension_2(AudioSourceExtension_t3064908834 * value)
	{
		___spatializerExtension_2 = value;
		Il2CppCodeGenWriteBarrier((&___spatializerExtension_2), value);
	}

	inline static int32_t get_offset_of_ambisonicExtension_3() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___ambisonicExtension_3)); }
	inline AudioSourceExtension_t3064908834 * get_ambisonicExtension_3() const { return ___ambisonicExtension_3; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_ambisonicExtension_3() { return &___ambisonicExtension_3; }
	inline void set_ambisonicExtension_3(AudioSourceExtension_t3064908834 * value)
	{
		___ambisonicExtension_3 = value;
		Il2CppCodeGenWriteBarrier((&___ambisonicExtension_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSOURCE_T3935305588_H
#ifndef AUDIOLISTENER_T2734094699_H
#define AUDIOLISTENER_T2734094699_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioListener
struct  AudioListener_t2734094699  : public Behaviour_t1437897464
{
public:
	// UnityEngine.AudioListenerExtension UnityEngine.AudioListener::spatializerExtension
	AudioListenerExtension_t3242956547 * ___spatializerExtension_2;

public:
	inline static int32_t get_offset_of_spatializerExtension_2() { return static_cast<int32_t>(offsetof(AudioListener_t2734094699, ___spatializerExtension_2)); }
	inline AudioListenerExtension_t3242956547 * get_spatializerExtension_2() const { return ___spatializerExtension_2; }
	inline AudioListenerExtension_t3242956547 ** get_address_of_spatializerExtension_2() { return &___spatializerExtension_2; }
	inline void set_spatializerExtension_2(AudioListenerExtension_t3242956547 * value)
	{
		___spatializerExtension_2 = value;
		Il2CppCodeGenWriteBarrier((&___spatializerExtension_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOLISTENER_T2734094699_H
// System.Single[]
struct SingleU5BU5D_t1444911251  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t2146457487  List_1_GetEnumerator_m2930774921_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m2287542950_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_set_Item_m1979164443_gshared (List_1_t257213610 * __this, int32_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void List_1_RemoveAt_m2730968292_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);

// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioClipPlayable::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t1095853803  AudioClipPlayable_GetHandle_m1762771314 (AudioClipPlayable_t785069022 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::op_Equality(UnityEngine.Playables.PlayableHandle,UnityEngine.Playables.PlayableHandle)
extern "C" IL2CPP_METHOD_ATTR bool PlayableHandle_op_Equality_m3344837515 (RuntimeObject * __this /* static, unused */, PlayableHandle_t1095853803  p0, PlayableHandle_t1095853803  p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Audio.AudioClipPlayable::Equals(UnityEngine.Audio.AudioClipPlayable)
extern "C" IL2CPP_METHOD_ATTR bool AudioClipPlayable_Equals_m3705880618 (AudioClipPlayable_t785069022 * __this, AudioClipPlayable_t785069022  ___other0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m1087895580 (Object_t631007953 * __this, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioMixerPlayable::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t1095853803  AudioMixerPlayable_GetHandle_m57919556 (AudioMixerPlayable_t3520548497 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Audio.AudioMixerPlayable::Equals(UnityEngine.Audio.AudioMixerPlayable)
extern "C" IL2CPP_METHOD_ATTR bool AudioMixerPlayable_Equals_m1649866213 (AudioMixerPlayable_t3520548497 * __this, AudioMixerPlayable_t3520548497  ___other0, const RuntimeMethod* method);
// UnityEngine.AudioClip UnityEngine.AudioClip::Create(System.String,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.AudioClip/PCMReaderCallback,UnityEngine.AudioClip/PCMSetPositionCallback)
extern "C" IL2CPP_METHOD_ATTR AudioClip_t3680889665 * AudioClip_Create_m3077788910 (RuntimeObject * __this /* static, unused */, String_t* ___name0, int32_t ___lengthSamples1, int32_t ___channels2, int32_t ___frequency3, bool ___stream4, PCMReaderCallback_t1677636661 * ___pcmreadercallback5, PCMSetPositionCallback_t1059417452 * ___pcmsetpositioncallback6, const RuntimeMethod* method);
// System.Void System.NullReferenceException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NullReferenceException__ctor_m744513393 (NullReferenceException_t1023182353 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* p0, const RuntimeMethod* method);
// UnityEngine.AudioClip UnityEngine.AudioClip::Construct_Internal()
extern "C" IL2CPP_METHOD_ATTR AudioClip_t3680889665 * AudioClip_Construct_Internal_m3041348582 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.AudioClip::add_m_PCMReaderCallback(UnityEngine.AudioClip/PCMReaderCallback)
extern "C" IL2CPP_METHOD_ATTR void AudioClip_add_m_PCMReaderCallback_m4156331313 (AudioClip_t3680889665 * __this, PCMReaderCallback_t1677636661 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioClip::add_m_PCMSetPositionCallback(UnityEngine.AudioClip/PCMSetPositionCallback)
extern "C" IL2CPP_METHOD_ATTR void AudioClip_add_m_PCMSetPositionCallback_m670709619 (AudioClip_t3680889665 * __this, PCMSetPositionCallback_t1059417452 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioClip::Init_Internal(System.String,System.Int32,System.Int32,System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void AudioClip_Init_Internal_m384116744 (AudioClip_t3680889665 * __this, String_t* ___name0, int32_t ___lengthSamples1, int32_t ___channels2, int32_t ___frequency3, bool ___stream4, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t1188392813 * Delegate_Combine_m1859655160 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t1188392813 * Delegate_Remove_m334097152 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[])
extern "C" IL2CPP_METHOD_ATTR void PCMReaderCallback_Invoke_m2948796957 (PCMReaderCallback_t1677636661 * __this, SingleU5BU5D_t1444911251* ___data0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void PCMSetPositionCallback_Invoke_m2167694991 (PCMSetPositionCallback_t1059417452 * __this, int32_t ___position0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m1809518182 (RuntimeObject * __this /* static, unused */, StringU5BU5D_t1281789340* p0, const RuntimeMethod* method);
// System.Type System.Type::GetType(System.String)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetType_m1693760368 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.AudioSource::get_spatialize()
extern "C" IL2CPP_METHOD_ATTR bool AudioSource_get_spatialize_m3609701298 (AudioSource_t3935305588 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.AudioExtensionManager::RegisterBuiltinDefinitions()
extern "C" IL2CPP_METHOD_ATTR void AudioExtensionManager_RegisterBuiltinDefinitions_m2742744104 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.AudioSpatializerExtensionDefinition>::GetEnumerator()
#define List_1_GetEnumerator_m1716448724(__this, method) ((  Enumerator_t3959214805  (*) (List_1_t2069970928 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.AudioSpatializerExtensionDefinition>::get_Current()
#define Enumerator_get_Current_m615903654(__this, method) ((  AudioSpatializerExtensionDefinition_t597896186 * (*) (Enumerator_t3959214805 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.String UnityEngine.AudioSettings::GetSpatializerPluginName()
extern "C" IL2CPP_METHOD_ATTR String_t* AudioSettings_GetSpatializerPluginName_m1324100978 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.PropertyName UnityEngine.PropertyName::op_Implicit(System.String)
extern "C" IL2CPP_METHOD_ATTR PropertyName_t3749835189  PropertyName_op_Implicit_m1633828199 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.PropertyName::op_Equality(UnityEngine.PropertyName,UnityEngine.PropertyName)
extern "C" IL2CPP_METHOD_ATTR bool PropertyName_op_Equality_m2761233272 (RuntimeObject * __this /* static, unused */, PropertyName_t3749835189  p0, PropertyName_t3749835189  p1, const RuntimeMethod* method);
// System.Type UnityEngine.AudioExtensionDefinition::GetExtensionType()
extern "C" IL2CPP_METHOD_ATTR Type_t * AudioExtensionDefinition_GetExtensionType_m1450823952 (AudioExtensionDefinition_t3271167678 * __this, const RuntimeMethod* method);
// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::AddSpatializerExtension(System.Type)
extern "C" IL2CPP_METHOD_ATTR AudioSourceExtension_t3064908834 * AudioSource_AddSpatializerExtension_m2560794359 (AudioSource_t3935305588 * __this, Type_t * ___extensionType0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSourceExtension::set_audioSource(UnityEngine.AudioSource)
extern "C" IL2CPP_METHOD_ATTR void AudioSourceExtension_set_audioSource_m3729768988 (AudioSourceExtension_t3064908834 * __this, AudioSource_t3935305588 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioExtensionManager::WriteExtensionProperties(UnityEngine.AudioSourceExtension,System.String)
extern "C" IL2CPP_METHOD_ATTR void AudioExtensionManager_WriteExtensionProperties_m1988587615 (RuntimeObject * __this /* static, unused */, AudioSourceExtension_t3064908834 * ___extension0, String_t* ___extensionName1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.AudioSpatializerExtensionDefinition>::MoveNext()
#define Enumerator_MoveNext_m2697843606(__this, method) ((  bool (*) (Enumerator_t3959214805 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.AudioSpatializerExtensionDefinition>::Dispose()
#define Enumerator_Dispose_m3198901590(__this, method) ((  void (*) (Enumerator_t3959214805 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.AudioAmbisonicExtensionDefinition>::GetEnumerator()
#define List_1_GetEnumerator_m2295013814(__this, method) ((  Enumerator_t3184778213  (*) (List_1_t1295534336 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.AudioAmbisonicExtensionDefinition>::get_Current()
#define Enumerator_get_Current_m967136761(__this, method) ((  AudioAmbisonicExtensionDefinition_t4118426890 * (*) (Enumerator_t3184778213 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.String UnityEngine.AudioSettings::GetAmbisonicDecoderPluginName()
extern "C" IL2CPP_METHOD_ATTR String_t* AudioSettings_GetAmbisonicDecoderPluginName_m19603540 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::AddAmbisonicExtension(System.Type)
extern "C" IL2CPP_METHOD_ATTR AudioSourceExtension_t3064908834 * AudioSource_AddAmbisonicExtension_m304476911 (AudioSource_t3935305588 * __this, Type_t * ___extensionType0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.AudioAmbisonicExtensionDefinition>::MoveNext()
#define Enumerator_MoveNext_m1000499844(__this, method) ((  bool (*) (Enumerator_t3184778213 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.AudioAmbisonicExtensionDefinition>::Dispose()
#define Enumerator_Dispose_m405442337(__this, method) ((  void (*) (Enumerator_t3184778213 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// UnityEngine.PropertyName UnityEngine.PropertyName::op_Implicit(System.Int32)
extern "C" IL2CPP_METHOD_ATTR PropertyName_t3749835189  PropertyName_op_Implicit_m114733813 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// UnityEngine.AudioSource UnityEngine.AudioSourceExtension::get_audioSource()
extern "C" IL2CPP_METHOD_ATTR AudioSource_t3935305588 * AudioSourceExtension_get_audioSource_m1465006871 (AudioSourceExtension_t3064908834 * __this, const RuntimeMethod* method);
// UnityEngine.PropertyName UnityEngine.AudioSource::ReadExtensionName(System.Int32)
extern "C" IL2CPP_METHOD_ATTR PropertyName_t3749835189  AudioSource_ReadExtensionName_m725112169 (AudioSource_t3935305588 * __this, int32_t ___sourceIndex0, const RuntimeMethod* method);
// UnityEngine.PropertyName UnityEngine.AudioSource::ReadExtensionPropertyName(System.Int32)
extern "C" IL2CPP_METHOD_ATTR PropertyName_t3749835189  AudioSource_ReadExtensionPropertyName_m2761820692 (AudioSource_t3935305588 * __this, int32_t ___sourceIndex0, const RuntimeMethod* method);
// System.Single UnityEngine.AudioSource::ReadExtensionPropertyValue(System.Int32)
extern "C" IL2CPP_METHOD_ATTR float AudioSource_ReadExtensionPropertyValue_m72717540 (AudioSource_t3935305588 * __this, int32_t ___sourceIndex0, const RuntimeMethod* method);
// System.Int32 UnityEngine.AudioSource::GetNumExtensionProperties()
extern "C" IL2CPP_METHOD_ATTR int32_t AudioSource_GetNumExtensionProperties_m1231815209 (AudioSource_t3935305588 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::ClearExtensionProperties(UnityEngine.PropertyName)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_ClearExtensionProperties_m2116074582 (AudioSource_t3935305588 * __this, PropertyName_t3749835189  ___extensionName0, const RuntimeMethod* method);
// UnityEngine.AudioListenerExtension UnityEngine.AudioListener::AddExtension(System.Type)
extern "C" IL2CPP_METHOD_ATTR AudioListenerExtension_t3242956547 * AudioListener_AddExtension_m994751216 (AudioListener_t2734094699 * __this, Type_t * ___extensionType0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioListenerExtension::set_audioListener(UnityEngine.AudioListener)
extern "C" IL2CPP_METHOD_ATTR void AudioListenerExtension_set_audioListener_m3412289012 (AudioListenerExtension_t3242956547 * __this, AudioListener_t2734094699 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioExtensionManager::WriteExtensionProperties(UnityEngine.AudioListenerExtension,System.String)
extern "C" IL2CPP_METHOD_ATTR void AudioExtensionManager_WriteExtensionProperties_m3028464154 (RuntimeObject * __this /* static, unused */, AudioListenerExtension_t3242956547 * ___extension0, String_t* ___extensionName1, const RuntimeMethod* method);
// UnityEngine.AudioListener UnityEngine.AudioListenerExtension::get_audioListener()
extern "C" IL2CPP_METHOD_ATTR AudioListener_t2734094699 * AudioListenerExtension_get_audioListener_m3597041395 (AudioListenerExtension_t3242956547 * __this, const RuntimeMethod* method);
// UnityEngine.PropertyName UnityEngine.AudioListener::ReadExtensionName(System.Int32)
extern "C" IL2CPP_METHOD_ATTR PropertyName_t3749835189  AudioListener_ReadExtensionName_m929423100 (AudioListener_t2734094699 * __this, int32_t ___listenerIndex0, const RuntimeMethod* method);
// UnityEngine.PropertyName UnityEngine.AudioListener::ReadExtensionPropertyName(System.Int32)
extern "C" IL2CPP_METHOD_ATTR PropertyName_t3749835189  AudioListener_ReadExtensionPropertyName_m3416271339 (AudioListener_t2734094699 * __this, int32_t ___listenerIndex0, const RuntimeMethod* method);
// System.Single UnityEngine.AudioListener::ReadExtensionPropertyValue(System.Int32)
extern "C" IL2CPP_METHOD_ATTR float AudioListener_ReadExtensionPropertyValue_m2443832840 (AudioListener_t2734094699 * __this, int32_t ___listenerIndex0, const RuntimeMethod* method);
// System.Int32 UnityEngine.AudioListener::GetNumExtensionProperties()
extern "C" IL2CPP_METHOD_ATTR int32_t AudioListener_GetNumExtensionProperties_m3139224773 (AudioListener_t2734094699 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioListener::ClearExtensionProperties(UnityEngine.PropertyName)
extern "C" IL2CPP_METHOD_ATTR void AudioListener_ClearExtensionProperties_m3849891634 (AudioListener_t2734094699 * __this, PropertyName_t3749835189  ___extensionName0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.AudioSourceExtension>::Add(!0)
#define List_1_Add_m2957197106(__this, p0, method) ((  void (*) (List_1_t242016280 *, AudioSourceExtension_t3064908834 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.AudioSourceExtension>::get_Count()
#define List_1_get_Count_m3844406869(__this, method) ((  int32_t (*) (List_1_t242016280 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// !0 System.Collections.Generic.List`1<UnityEngine.AudioSourceExtension>::get_Item(System.Int32)
#define List_1_get_Item_m1395253538(__this, p0, method) ((  AudioSourceExtension_t3064908834 * (*) (List_1_t242016280 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.AudioSourceExtension>::set_Item(System.Int32,!0)
#define List_1_set_Item_m845928814(__this, p0, p1, method) ((  void (*) (List_1_t242016280 *, int32_t, AudioSourceExtension_t3064908834 *, const RuntimeMethod*))List_1_set_Item_m1979164443_gshared)(__this, p0, p1, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.AudioSourceExtension>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m2462508318(__this, p0, method) ((  void (*) (List_1_t242016280 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m2730968292_gshared)(__this, p0, method)
// UnityEngine.Object UnityEngine.AudioExtensionManager::GetAudioListener()
extern "C" IL2CPP_METHOD_ATTR Object_t631007953 * AudioExtensionManager_GetAudioListener_m817760607 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.AudioListenerExtension UnityEngine.AudioExtensionManager::AddSpatializerExtension(UnityEngine.AudioListener)
extern "C" IL2CPP_METHOD_ATTR AudioListenerExtension_t3242956547 * AudioExtensionManager_AddSpatializerExtension_m3915849352 (RuntimeObject * __this /* static, unused */, AudioListener_t2734094699 * ___listener0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Behaviour::get_enabled()
extern "C" IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_m753527255 (Behaviour_t1437897464 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
extern "C" IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_m1896551654 (AudioSource_t3935305588 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioExtensionManager::RemoveExtensionFromManager(UnityEngine.AudioSourceExtension)
extern "C" IL2CPP_METHOD_ATTR void AudioExtensionManager_RemoveExtensionFromManager_m442924172 (RuntimeObject * __this /* static, unused */, AudioSourceExtension_t3064908834 * ___extension0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioExtensionManager::AddExtensionToManager(UnityEngine.AudioSourceExtension)
extern "C" IL2CPP_METHOD_ATTR void AudioExtensionManager_AddExtensionToManager_m3475649283 (RuntimeObject * __this /* static, unused */, AudioSourceExtension_t3064908834 * ___extension0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.AudioSpatializerExtensionDefinition>::.ctor()
#define List_1__ctor_m3866378638(__this, method) ((  void (*) (List_1_t2069970928 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.AudioAmbisonicExtensionDefinition>::.ctor()
#define List_1__ctor_m4205755667(__this, method) ((  void (*) (List_1_t1295534336 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.AudioSourceExtension>::.ctor()
#define List_1__ctor_m69557434(__this, method) ((  void (*) (List_1_t242016280 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void UnityEngine.AudioListener::INTERNAL_CALL_ReadExtensionName(UnityEngine.AudioListener,System.Int32,UnityEngine.PropertyName&)
extern "C" IL2CPP_METHOD_ATTR void AudioListener_INTERNAL_CALL_ReadExtensionName_m4145804327 (RuntimeObject * __this /* static, unused */, AudioListener_t2734094699 * ___self0, int32_t ___listenerIndex1, PropertyName_t3749835189 * ___value2, const RuntimeMethod* method);
// System.Void UnityEngine.AudioListener::INTERNAL_CALL_ReadExtensionPropertyName(UnityEngine.AudioListener,System.Int32,UnityEngine.PropertyName&)
extern "C" IL2CPP_METHOD_ATTR void AudioListener_INTERNAL_CALL_ReadExtensionPropertyName_m330480156 (RuntimeObject * __this /* static, unused */, AudioListener_t2734094699 * ___self0, int32_t ___listenerIndex1, PropertyName_t3749835189 * ___value2, const RuntimeMethod* method);
// System.Void UnityEngine.AudioListener::INTERNAL_CALL_ClearExtensionProperties(UnityEngine.AudioListener,UnityEngine.PropertyName&)
extern "C" IL2CPP_METHOD_ATTR void AudioListener_INTERNAL_CALL_ClearExtensionProperties_m2036387607 (RuntimeObject * __this /* static, unused */, AudioListener_t2734094699 * ___self0, PropertyName_t3749835189 * ___extensionName1, const RuntimeMethod* method);
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
extern "C" IL2CPP_METHOD_ATTR ScriptableObject_t2528358522 * ScriptableObject_CreateInstance_m2611081756 (RuntimeObject * __this /* static, unused */, Type_t * p0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void AudioConfigurationChangeHandler_Invoke_m1233557945 (AudioConfigurationChangeHandler_t2089929874 * __this, bool ___deviceWasChanged0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioExtensionManager::Update()
extern "C" IL2CPP_METHOD_ATTR void AudioExtensionManager_Update_m3269307447 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.AudioSourceExtension UnityEngine.AudioExtensionManager::AddSpatializerExtension(UnityEngine.AudioSource)
extern "C" IL2CPP_METHOD_ATTR AudioSourceExtension_t3064908834 * AudioExtensionManager_AddSpatializerExtension_m820561940 (RuntimeObject * __this /* static, unused */, AudioSource_t3935305588 * ___source0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioExtensionManager::GetReadyToPlay(UnityEngine.AudioSourceExtension)
extern "C" IL2CPP_METHOD_ATTR void AudioExtensionManager_GetReadyToPlay_m1557263244 (RuntimeObject * __this /* static, unused */, AudioSourceExtension_t3064908834 * ___extension0, const RuntimeMethod* method);
// UnityEngine.AudioClip UnityEngine.AudioSource::get_clip()
extern "C" IL2CPP_METHOD_ATTR AudioClip_t3680889665 * AudioSource_get_clip_m1234340632 (AudioSource_t3935305588 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AudioClip::get_ambisonic()
extern "C" IL2CPP_METHOD_ATTR bool AudioClip_get_ambisonic_m3815052287 (AudioClip_t3680889665 * __this, const RuntimeMethod* method);
// UnityEngine.AudioSourceExtension UnityEngine.AudioExtensionManager::AddAmbisonicDecoderExtension(UnityEngine.AudioSource)
extern "C" IL2CPP_METHOD_ATTR AudioSourceExtension_t3064908834 * AudioExtensionManager_AddAmbisonicDecoderExtension_m3197702864 (RuntimeObject * __this /* static, unused */, AudioSource_t3935305588 * ___source0, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Behaviour__ctor_m346897018 (Behaviour_t1437897464 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_Play_m3389845180 (AudioSource_t3935305588 * __this, uint64_t ___delay0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::INTERNAL_CALL_Pause(UnityEngine.AudioSource)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_INTERNAL_CALL_Pause_m1443225006 (RuntimeObject * __this /* static, unused */, AudioSource_t3935305588 * ___self0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::INTERNAL_CALL_UnPause(UnityEngine.AudioSource)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_INTERNAL_CALL_UnPause_m2866508363 (RuntimeObject * __this /* static, unused */, AudioSource_t3935305588 * ___self0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_m2678069419 (AudioSource_t3935305588 * __this, AudioClip_t3680889665 * ___clip0, float ___volumeScale1, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::PlayOneShotHelper(UnityEngine.AudioClip,System.Single)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_PlayOneShotHelper_m544918725 (AudioSource_t3935305588 * __this, AudioClip_t3680889665 * ___clip0, float ___volumeScale1, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::PlayClipAtPoint(UnityEngine.AudioClip,UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_PlayClipAtPoint_m3985620478 (RuntimeObject * __this /* static, unused */, AudioClip_t3680889665 * ___clip0, Vector3_t3722313464  ___position1, float ___volume2, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void GameObject__ctor_m2093116449 (GameObject_t1113636619 * __this, String_t* p0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method);
// UnityEngine.Component UnityEngine.GameObject::AddComponent(System.Type)
extern "C" IL2CPP_METHOD_ATTR Component_t1923634451 * GameObject_AddComponent_m136524825 (GameObject_t1113636619 * __this, Type_t * p0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_set_clip_m31653938 (AudioSource_t3935305588 * __this, AudioClip_t3680889665 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_spatialBlend(System.Single)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_set_spatialBlend_m3924907960 (AudioSource_t3935305588 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_set_volume_m1273312851 (AudioSource_t3935305588 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
extern "C" IL2CPP_METHOD_ATTR void AudioSource_Play_m48294159 (AudioSource_t3935305588 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AudioClip::get_length()
extern "C" IL2CPP_METHOD_ATTR float AudioClip_get_length_m4269890037 (AudioClip_t3680889665 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_timeScale()
extern "C" IL2CPP_METHOD_ATTR float Time_get_timeScale_m701790074 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Object_Destroy_m3118546832 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, float p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.AudioSource::get_spatializeInternal()
extern "C" IL2CPP_METHOD_ATTR bool AudioSource_get_spatializeInternal_m2117549793 (AudioSource_t3935305588 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_spatializeInternal(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_set_spatializeInternal_m3645792852 (AudioSource_t3935305588 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::GetOutputDataHelper(System.Single[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_GetOutputDataHelper_m2348783779 (AudioSource_t3935305588 * __this, SingleU5BU5D_t1444911251* ___samples0, int32_t ___channel1, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::GetSpectrumDataHelper(System.Single[],System.Int32,UnityEngine.FFTWindow)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_GetSpectrumDataHelper_m1289556404 (AudioSource_t3935305588 * __this, SingleU5BU5D_t1444911251* ___samples0, int32_t ___channel1, int32_t ___window2, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::INTERNAL_CALL_ReadExtensionName(UnityEngine.AudioSource,System.Int32,UnityEngine.PropertyName&)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_INTERNAL_CALL_ReadExtensionName_m36001502 (RuntimeObject * __this /* static, unused */, AudioSource_t3935305588 * ___self0, int32_t ___sourceIndex1, PropertyName_t3749835189 * ___value2, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::INTERNAL_CALL_ReadExtensionPropertyName(UnityEngine.AudioSource,System.Int32,UnityEngine.PropertyName&)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_INTERNAL_CALL_ReadExtensionPropertyName_m3643462071 (RuntimeObject * __this /* static, unused */, AudioSource_t3935305588 * ___self0, int32_t ___sourceIndex1, PropertyName_t3749835189 * ___value2, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::INTERNAL_CALL_ClearExtensionProperties(UnityEngine.AudioSource,UnityEngine.PropertyName&)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_INTERNAL_CALL_ClearExtensionProperties_m2159298662 (RuntimeObject * __this /* static, unused */, AudioSource_t3935305588 * ___self0, PropertyName_t3749835189 * ___extensionName1, const RuntimeMethod* method);
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
// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioClipPlayable::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t1095853803  AudioClipPlayable_GetHandle_m1762771314 (AudioClipPlayable_t785069022 * __this, const RuntimeMethod* method)
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
extern "C"  PlayableHandle_t1095853803  AudioClipPlayable_GetHandle_m1762771314_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AudioClipPlayable_t785069022 * _thisAdjusted = reinterpret_cast<AudioClipPlayable_t785069022 *>(__this + 1);
	return AudioClipPlayable_GetHandle_m1762771314(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Audio.AudioClipPlayable::Equals(UnityEngine.Audio.AudioClipPlayable)
extern "C" IL2CPP_METHOD_ATTR bool AudioClipPlayable_Equals_m3705880618 (AudioClipPlayable_t785069022 * __this, AudioClipPlayable_t785069022  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		PlayableHandle_t1095853803  L_0 = AudioClipPlayable_GetHandle_m1762771314(__this, /*hidden argument*/NULL);
		PlayableHandle_t1095853803  L_1 = AudioClipPlayable_GetHandle_m1762771314((&___other0), /*hidden argument*/NULL);
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
extern "C"  bool AudioClipPlayable_Equals_m3705880618_AdjustorThunk (RuntimeObject * __this, AudioClipPlayable_t785069022  ___other0, const RuntimeMethod* method)
{
	AudioClipPlayable_t785069022 * _thisAdjusted = reinterpret_cast<AudioClipPlayable_t785069022 *>(__this + 1);
	return AudioClipPlayable_Equals_m3705880618(_thisAdjusted, ___other0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Audio.AudioMixerGroup::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AudioMixerGroup__ctor_m730722219 (AudioMixerGroup_t2743564464 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioMixerGroup__ctor_m730722219_MetadataUsageId);
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
// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioMixerPlayable::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t1095853803  AudioMixerPlayable_GetHandle_m57919556 (AudioMixerPlayable_t3520548497 * __this, const RuntimeMethod* method)
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
extern "C"  PlayableHandle_t1095853803  AudioMixerPlayable_GetHandle_m57919556_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AudioMixerPlayable_t3520548497 * _thisAdjusted = reinterpret_cast<AudioMixerPlayable_t3520548497 *>(__this + 1);
	return AudioMixerPlayable_GetHandle_m57919556(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Audio.AudioMixerPlayable::Equals(UnityEngine.Audio.AudioMixerPlayable)
extern "C" IL2CPP_METHOD_ATTR bool AudioMixerPlayable_Equals_m1649866213 (AudioMixerPlayable_t3520548497 * __this, AudioMixerPlayable_t3520548497  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		PlayableHandle_t1095853803  L_0 = AudioMixerPlayable_GetHandle_m57919556(__this, /*hidden argument*/NULL);
		PlayableHandle_t1095853803  L_1 = AudioMixerPlayable_GetHandle_m57919556((&___other0), /*hidden argument*/NULL);
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
extern "C"  bool AudioMixerPlayable_Equals_m1649866213_AdjustorThunk (RuntimeObject * __this, AudioMixerPlayable_t3520548497  ___other0, const RuntimeMethod* method)
{
	AudioMixerPlayable_t3520548497 * _thisAdjusted = reinterpret_cast<AudioMixerPlayable_t3520548497 *>(__this + 1);
	return AudioMixerPlayable_Equals_m1649866213(_thisAdjusted, ___other0, method);
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
// System.Void UnityEngine.AudioClip::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AudioClip__ctor_m1211547677 (AudioClip_t3680889665 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioClip__ctor_m1211547677_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_PCMReaderCallback_2((PCMReaderCallback_t1677636661 *)NULL);
		__this->set_m_PCMSetPositionCallback_3((PCMSetPositionCallback_t1059417452 *)NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object__ctor_m1087895580(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single UnityEngine.AudioClip::get_length()
extern "C" IL2CPP_METHOD_ATTR float AudioClip_get_length_m4269890037 (AudioClip_t3680889665 * __this, const RuntimeMethod* method)
{
	typedef float (*AudioClip_get_length_m4269890037_ftn) (AudioClip_t3680889665 *);
	static AudioClip_get_length_m4269890037_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_length_m4269890037_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_length()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Int32 UnityEngine.AudioClip::get_samples()
extern "C" IL2CPP_METHOD_ATTR int32_t AudioClip_get_samples_m1836473408 (AudioClip_t3680889665 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*AudioClip_get_samples_m1836473408_ftn) (AudioClip_t3680889665 *);
	static AudioClip_get_samples_m1836473408_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_samples_m1836473408_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_samples()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Int32 UnityEngine.AudioClip::get_channels()
extern "C" IL2CPP_METHOD_ATTR int32_t AudioClip_get_channels_m2392813414 (AudioClip_t3680889665 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*AudioClip_get_channels_m2392813414_ftn) (AudioClip_t3680889665 *);
	static AudioClip_get_channels_m2392813414_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_channels_m2392813414_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_channels()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Int32 UnityEngine.AudioClip::get_frequency()
extern "C" IL2CPP_METHOD_ATTR int32_t AudioClip_get_frequency_m3907759635 (AudioClip_t3680889665 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*AudioClip_get_frequency_m3907759635_ftn) (AudioClip_t3680889665 *);
	static AudioClip_get_frequency_m3907759635_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_frequency_m3907759635_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_frequency()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.AudioClipLoadType UnityEngine.AudioClip::get_loadType()
extern "C" IL2CPP_METHOD_ATTR int32_t AudioClip_get_loadType_m953297854 (AudioClip_t3680889665 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*AudioClip_get_loadType_m953297854_ftn) (AudioClip_t3680889665 *);
	static AudioClip_get_loadType_m953297854_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_loadType_m953297854_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_loadType()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.AudioClip::LoadAudioData()
extern "C" IL2CPP_METHOD_ATTR bool AudioClip_LoadAudioData_m2079740422 (AudioClip_t3680889665 * __this, const RuntimeMethod* method)
{
	typedef bool (*AudioClip_LoadAudioData_m2079740422_ftn) (AudioClip_t3680889665 *);
	static AudioClip_LoadAudioData_m2079740422_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_LoadAudioData_m2079740422_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::LoadAudioData()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.AudioClip::UnloadAudioData()
extern "C" IL2CPP_METHOD_ATTR bool AudioClip_UnloadAudioData_m3952501643 (AudioClip_t3680889665 * __this, const RuntimeMethod* method)
{
	typedef bool (*AudioClip_UnloadAudioData_m3952501643_ftn) (AudioClip_t3680889665 *);
	static AudioClip_UnloadAudioData_m3952501643_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_UnloadAudioData_m3952501643_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::UnloadAudioData()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.AudioClip::get_preloadAudioData()
extern "C" IL2CPP_METHOD_ATTR bool AudioClip_get_preloadAudioData_m1469568348 (AudioClip_t3680889665 * __this, const RuntimeMethod* method)
{
	typedef bool (*AudioClip_get_preloadAudioData_m1469568348_ftn) (AudioClip_t3680889665 *);
	static AudioClip_get_preloadAudioData_m1469568348_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_preloadAudioData_m1469568348_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_preloadAudioData()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.AudioClip::get_ambisonic()
extern "C" IL2CPP_METHOD_ATTR bool AudioClip_get_ambisonic_m3815052287 (AudioClip_t3680889665 * __this, const RuntimeMethod* method)
{
	typedef bool (*AudioClip_get_ambisonic_m3815052287_ftn) (AudioClip_t3680889665 *);
	static AudioClip_get_ambisonic_m3815052287_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_ambisonic_m3815052287_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_ambisonic()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.AudioDataLoadState UnityEngine.AudioClip::get_loadState()
extern "C" IL2CPP_METHOD_ATTR int32_t AudioClip_get_loadState_m2929201819 (AudioClip_t3680889665 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*AudioClip_get_loadState_m2929201819_ftn) (AudioClip_t3680889665 *);
	static AudioClip_get_loadState_m2929201819_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_loadState_m2929201819_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_loadState()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.AudioClip::get_loadInBackground()
extern "C" IL2CPP_METHOD_ATTR bool AudioClip_get_loadInBackground_m632685389 (AudioClip_t3680889665 * __this, const RuntimeMethod* method)
{
	typedef bool (*AudioClip_get_loadInBackground_m632685389_ftn) (AudioClip_t3680889665 *);
	static AudioClip_get_loadInBackground_m632685389_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_loadInBackground_m632685389_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_loadInBackground()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.AudioClip::GetData(System.Single[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool AudioClip_GetData_m1251334845 (AudioClip_t3680889665 * __this, SingleU5BU5D_t1444911251* ___data0, int32_t ___offsetSamples1, const RuntimeMethod* method)
{
	typedef bool (*AudioClip_GetData_m1251334845_ftn) (AudioClip_t3680889665 *, SingleU5BU5D_t1444911251*, int32_t);
	static AudioClip_GetData_m1251334845_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_GetData_m1251334845_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::GetData(System.Single[],System.Int32)");
	bool retVal = _il2cpp_icall_func(__this, ___data0, ___offsetSamples1);
	return retVal;
}
// System.Boolean UnityEngine.AudioClip::SetData(System.Single[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool AudioClip_SetData_m313920037 (AudioClip_t3680889665 * __this, SingleU5BU5D_t1444911251* ___data0, int32_t ___offsetSamples1, const RuntimeMethod* method)
{
	typedef bool (*AudioClip_SetData_m313920037_ftn) (AudioClip_t3680889665 *, SingleU5BU5D_t1444911251*, int32_t);
	static AudioClip_SetData_m313920037_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_SetData_m313920037_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::SetData(System.Single[],System.Int32)");
	bool retVal = _il2cpp_icall_func(__this, ___data0, ___offsetSamples1);
	return retVal;
}
// UnityEngine.AudioClip UnityEngine.AudioClip::Create(System.String,System.Int32,System.Int32,System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR AudioClip_t3680889665 * AudioClip_Create_m255819841 (RuntimeObject * __this /* static, unused */, String_t* ___name0, int32_t ___lengthSamples1, int32_t ___channels2, int32_t ___frequency3, bool ___stream4, const RuntimeMethod* method)
{
	AudioClip_t3680889665 * V_0 = NULL;
	AudioClip_t3680889665 * V_1 = NULL;
	{
		String_t* L_0 = ___name0;
		int32_t L_1 = ___lengthSamples1;
		int32_t L_2 = ___channels2;
		int32_t L_3 = ___frequency3;
		bool L_4 = ___stream4;
		AudioClip_t3680889665 * L_5 = AudioClip_Create_m3077788910(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, (PCMReaderCallback_t1677636661 *)NULL, (PCMSetPositionCallback_t1059417452 *)NULL, /*hidden argument*/NULL);
		V_0 = L_5;
		AudioClip_t3680889665 * L_6 = V_0;
		V_1 = L_6;
		goto IL_0016;
	}

IL_0016:
	{
		AudioClip_t3680889665 * L_7 = V_1;
		return L_7;
	}
}
// UnityEngine.AudioClip UnityEngine.AudioClip::Create(System.String,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.AudioClip/PCMReaderCallback)
extern "C" IL2CPP_METHOD_ATTR AudioClip_t3680889665 * AudioClip_Create_m3618170861 (RuntimeObject * __this /* static, unused */, String_t* ___name0, int32_t ___lengthSamples1, int32_t ___channels2, int32_t ___frequency3, bool ___stream4, PCMReaderCallback_t1677636661 * ___pcmreadercallback5, const RuntimeMethod* method)
{
	AudioClip_t3680889665 * V_0 = NULL;
	AudioClip_t3680889665 * V_1 = NULL;
	{
		String_t* L_0 = ___name0;
		int32_t L_1 = ___lengthSamples1;
		int32_t L_2 = ___channels2;
		int32_t L_3 = ___frequency3;
		bool L_4 = ___stream4;
		PCMReaderCallback_t1677636661 * L_5 = ___pcmreadercallback5;
		AudioClip_t3680889665 * L_6 = AudioClip_Create_m3077788910(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, (PCMSetPositionCallback_t1059417452 *)NULL, /*hidden argument*/NULL);
		V_0 = L_6;
		AudioClip_t3680889665 * L_7 = V_0;
		V_1 = L_7;
		goto IL_0017;
	}

IL_0017:
	{
		AudioClip_t3680889665 * L_8 = V_1;
		return L_8;
	}
}
// UnityEngine.AudioClip UnityEngine.AudioClip::Create(System.String,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.AudioClip/PCMReaderCallback,UnityEngine.AudioClip/PCMSetPositionCallback)
extern "C" IL2CPP_METHOD_ATTR AudioClip_t3680889665 * AudioClip_Create_m3077788910 (RuntimeObject * __this /* static, unused */, String_t* ___name0, int32_t ___lengthSamples1, int32_t ___channels2, int32_t ___frequency3, bool ___stream4, PCMReaderCallback_t1677636661 * ___pcmreadercallback5, PCMSetPositionCallback_t1059417452 * ___pcmsetpositioncallback6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioClip_Create_m3077788910_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AudioClip_t3680889665 * V_0 = NULL;
	AudioClip_t3680889665 * V_1 = NULL;
	{
		String_t* L_0 = ___name0;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		NullReferenceException_t1023182353 * L_1 = (NullReferenceException_t1023182353 *)il2cpp_codegen_object_new(NullReferenceException_t1023182353_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_m744513393(L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,AudioClip_Create_m3077788910_RuntimeMethod_var);
	}

IL_000d:
	{
		int32_t L_2 = ___lengthSamples1;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ArgumentException_t132251570 * L_3 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_3, _stringLiteral2471574756, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3,AudioClip_Create_m3077788910_RuntimeMethod_var);
	}

IL_001f:
	{
		int32_t L_4 = ___channels2;
		if ((((int32_t)L_4) > ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		ArgumentException_t132251570 * L_5 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_5, _stringLiteral1087634904, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5,AudioClip_Create_m3077788910_RuntimeMethod_var);
	}

IL_0031:
	{
		int32_t L_6 = ___frequency3;
		if ((((int32_t)L_6) > ((int32_t)0)))
		{
			goto IL_0043;
		}
	}
	{
		ArgumentException_t132251570 * L_7 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_7, _stringLiteral1974720957, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7,AudioClip_Create_m3077788910_RuntimeMethod_var);
	}

IL_0043:
	{
		AudioClip_t3680889665 * L_8 = AudioClip_Construct_Internal_m3041348582(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_8;
		PCMReaderCallback_t1677636661 * L_9 = ___pcmreadercallback5;
		if (!L_9)
		{
			goto IL_0058;
		}
	}
	{
		AudioClip_t3680889665 * L_10 = V_0;
		PCMReaderCallback_t1677636661 * L_11 = ___pcmreadercallback5;
		NullCheck(L_10);
		AudioClip_add_m_PCMReaderCallback_m4156331313(L_10, L_11, /*hidden argument*/NULL);
	}

IL_0058:
	{
		PCMSetPositionCallback_t1059417452 * L_12 = ___pcmsetpositioncallback6;
		if (!L_12)
		{
			goto IL_0067;
		}
	}
	{
		AudioClip_t3680889665 * L_13 = V_0;
		PCMSetPositionCallback_t1059417452 * L_14 = ___pcmsetpositioncallback6;
		NullCheck(L_13);
		AudioClip_add_m_PCMSetPositionCallback_m670709619(L_13, L_14, /*hidden argument*/NULL);
	}

IL_0067:
	{
		AudioClip_t3680889665 * L_15 = V_0;
		String_t* L_16 = ___name0;
		int32_t L_17 = ___lengthSamples1;
		int32_t L_18 = ___channels2;
		int32_t L_19 = ___frequency3;
		bool L_20 = ___stream4;
		NullCheck(L_15);
		AudioClip_Init_Internal_m384116744(L_15, L_16, L_17, L_18, L_19, L_20, /*hidden argument*/NULL);
		AudioClip_t3680889665 * L_21 = V_0;
		V_1 = L_21;
		goto IL_007a;
	}

IL_007a:
	{
		AudioClip_t3680889665 * L_22 = V_1;
		return L_22;
	}
}
// System.Void UnityEngine.AudioClip::add_m_PCMReaderCallback(UnityEngine.AudioClip/PCMReaderCallback)
extern "C" IL2CPP_METHOD_ATTR void AudioClip_add_m_PCMReaderCallback_m4156331313 (AudioClip_t3680889665 * __this, PCMReaderCallback_t1677636661 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioClip_add_m_PCMReaderCallback_m4156331313_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PCMReaderCallback_t1677636661 * V_0 = NULL;
	PCMReaderCallback_t1677636661 * V_1 = NULL;
	{
		PCMReaderCallback_t1677636661 * L_0 = __this->get_m_PCMReaderCallback_2();
		V_0 = L_0;
	}

IL_0007:
	{
		PCMReaderCallback_t1677636661 * L_1 = V_0;
		V_1 = L_1;
		PCMReaderCallback_t1677636661 ** L_2 = __this->get_address_of_m_PCMReaderCallback_2();
		PCMReaderCallback_t1677636661 * L_3 = V_1;
		PCMReaderCallback_t1677636661 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		PCMReaderCallback_t1677636661 * L_6 = V_0;
		PCMReaderCallback_t1677636661 * L_7 = InterlockedCompareExchangeImpl<PCMReaderCallback_t1677636661 *>(L_2, ((PCMReaderCallback_t1677636661 *)CastclassSealed((RuntimeObject*)L_5, PCMReaderCallback_t1677636661_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		PCMReaderCallback_t1677636661 * L_8 = V_0;
		PCMReaderCallback_t1677636661 * L_9 = V_1;
		if ((!(((RuntimeObject*)(PCMReaderCallback_t1677636661 *)L_8) == ((RuntimeObject*)(PCMReaderCallback_t1677636661 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.AudioClip::remove_m_PCMReaderCallback(UnityEngine.AudioClip/PCMReaderCallback)
extern "C" IL2CPP_METHOD_ATTR void AudioClip_remove_m_PCMReaderCallback_m2377752248 (AudioClip_t3680889665 * __this, PCMReaderCallback_t1677636661 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioClip_remove_m_PCMReaderCallback_m2377752248_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PCMReaderCallback_t1677636661 * V_0 = NULL;
	PCMReaderCallback_t1677636661 * V_1 = NULL;
	{
		PCMReaderCallback_t1677636661 * L_0 = __this->get_m_PCMReaderCallback_2();
		V_0 = L_0;
	}

IL_0007:
	{
		PCMReaderCallback_t1677636661 * L_1 = V_0;
		V_1 = L_1;
		PCMReaderCallback_t1677636661 ** L_2 = __this->get_address_of_m_PCMReaderCallback_2();
		PCMReaderCallback_t1677636661 * L_3 = V_1;
		PCMReaderCallback_t1677636661 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		PCMReaderCallback_t1677636661 * L_6 = V_0;
		PCMReaderCallback_t1677636661 * L_7 = InterlockedCompareExchangeImpl<PCMReaderCallback_t1677636661 *>(L_2, ((PCMReaderCallback_t1677636661 *)CastclassSealed((RuntimeObject*)L_5, PCMReaderCallback_t1677636661_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		PCMReaderCallback_t1677636661 * L_8 = V_0;
		PCMReaderCallback_t1677636661 * L_9 = V_1;
		if ((!(((RuntimeObject*)(PCMReaderCallback_t1677636661 *)L_8) == ((RuntimeObject*)(PCMReaderCallback_t1677636661 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.AudioClip::add_m_PCMSetPositionCallback(UnityEngine.AudioClip/PCMSetPositionCallback)
extern "C" IL2CPP_METHOD_ATTR void AudioClip_add_m_PCMSetPositionCallback_m670709619 (AudioClip_t3680889665 * __this, PCMSetPositionCallback_t1059417452 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioClip_add_m_PCMSetPositionCallback_m670709619_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PCMSetPositionCallback_t1059417452 * V_0 = NULL;
	PCMSetPositionCallback_t1059417452 * V_1 = NULL;
	{
		PCMSetPositionCallback_t1059417452 * L_0 = __this->get_m_PCMSetPositionCallback_3();
		V_0 = L_0;
	}

IL_0007:
	{
		PCMSetPositionCallback_t1059417452 * L_1 = V_0;
		V_1 = L_1;
		PCMSetPositionCallback_t1059417452 ** L_2 = __this->get_address_of_m_PCMSetPositionCallback_3();
		PCMSetPositionCallback_t1059417452 * L_3 = V_1;
		PCMSetPositionCallback_t1059417452 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		PCMSetPositionCallback_t1059417452 * L_6 = V_0;
		PCMSetPositionCallback_t1059417452 * L_7 = InterlockedCompareExchangeImpl<PCMSetPositionCallback_t1059417452 *>(L_2, ((PCMSetPositionCallback_t1059417452 *)CastclassSealed((RuntimeObject*)L_5, PCMSetPositionCallback_t1059417452_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		PCMSetPositionCallback_t1059417452 * L_8 = V_0;
		PCMSetPositionCallback_t1059417452 * L_9 = V_1;
		if ((!(((RuntimeObject*)(PCMSetPositionCallback_t1059417452 *)L_8) == ((RuntimeObject*)(PCMSetPositionCallback_t1059417452 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.AudioClip::remove_m_PCMSetPositionCallback(UnityEngine.AudioClip/PCMSetPositionCallback)
extern "C" IL2CPP_METHOD_ATTR void AudioClip_remove_m_PCMSetPositionCallback_m1546728302 (AudioClip_t3680889665 * __this, PCMSetPositionCallback_t1059417452 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioClip_remove_m_PCMSetPositionCallback_m1546728302_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PCMSetPositionCallback_t1059417452 * V_0 = NULL;
	PCMSetPositionCallback_t1059417452 * V_1 = NULL;
	{
		PCMSetPositionCallback_t1059417452 * L_0 = __this->get_m_PCMSetPositionCallback_3();
		V_0 = L_0;
	}

IL_0007:
	{
		PCMSetPositionCallback_t1059417452 * L_1 = V_0;
		V_1 = L_1;
		PCMSetPositionCallback_t1059417452 ** L_2 = __this->get_address_of_m_PCMSetPositionCallback_3();
		PCMSetPositionCallback_t1059417452 * L_3 = V_1;
		PCMSetPositionCallback_t1059417452 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		PCMSetPositionCallback_t1059417452 * L_6 = V_0;
		PCMSetPositionCallback_t1059417452 * L_7 = InterlockedCompareExchangeImpl<PCMSetPositionCallback_t1059417452 *>(L_2, ((PCMSetPositionCallback_t1059417452 *)CastclassSealed((RuntimeObject*)L_5, PCMSetPositionCallback_t1059417452_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		PCMSetPositionCallback_t1059417452 * L_8 = V_0;
		PCMSetPositionCallback_t1059417452 * L_9 = V_1;
		if ((!(((RuntimeObject*)(PCMSetPositionCallback_t1059417452 *)L_8) == ((RuntimeObject*)(PCMSetPositionCallback_t1059417452 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.AudioClip::InvokePCMReaderCallback_Internal(System.Single[])
extern "C" IL2CPP_METHOD_ATTR void AudioClip_InvokePCMReaderCallback_Internal_m224395634 (AudioClip_t3680889665 * __this, SingleU5BU5D_t1444911251* ___data0, const RuntimeMethod* method)
{
	{
		PCMReaderCallback_t1677636661 * L_0 = __this->get_m_PCMReaderCallback_2();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		PCMReaderCallback_t1677636661 * L_1 = __this->get_m_PCMReaderCallback_2();
		SingleU5BU5D_t1444911251* L_2 = ___data0;
		NullCheck(L_1);
		PCMReaderCallback_Invoke_m2948796957(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void UnityEngine.AudioClip::InvokePCMSetPositionCallback_Internal(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void AudioClip_InvokePCMSetPositionCallback_Internal_m3097960898 (AudioClip_t3680889665 * __this, int32_t ___position0, const RuntimeMethod* method)
{
	{
		PCMSetPositionCallback_t1059417452 * L_0 = __this->get_m_PCMSetPositionCallback_3();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		PCMSetPositionCallback_t1059417452 * L_1 = __this->get_m_PCMSetPositionCallback_3();
		int32_t L_2 = ___position0;
		NullCheck(L_1);
		PCMSetPositionCallback_Invoke_m2167694991(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// UnityEngine.AudioClip UnityEngine.AudioClip::Construct_Internal()
extern "C" IL2CPP_METHOD_ATTR AudioClip_t3680889665 * AudioClip_Construct_Internal_m3041348582 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef AudioClip_t3680889665 * (*AudioClip_Construct_Internal_m3041348582_ftn) ();
	static AudioClip_Construct_Internal_m3041348582_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_Construct_Internal_m3041348582_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::Construct_Internal()");
	AudioClip_t3680889665 * retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Void UnityEngine.AudioClip::Init_Internal(System.String,System.Int32,System.Int32,System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void AudioClip_Init_Internal_m384116744 (AudioClip_t3680889665 * __this, String_t* ___name0, int32_t ___lengthSamples1, int32_t ___channels2, int32_t ___frequency3, bool ___stream4, const RuntimeMethod* method)
{
	typedef void (*AudioClip_Init_Internal_m384116744_ftn) (AudioClip_t3680889665 *, String_t*, int32_t, int32_t, int32_t, bool);
	static AudioClip_Init_Internal_m384116744_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_Init_Internal_m384116744_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::Init_Internal(System.String,System.Int32,System.Int32,System.Int32,System.Boolean)");
	_il2cpp_icall_func(__this, ___name0, ___lengthSamples1, ___channels2, ___frequency3, ___stream4);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_PCMReaderCallback_t1677636661 (PCMReaderCallback_t1677636661 * __this, SingleU5BU5D_t1444911251* ___data0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(float*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___data0' to native representation
	float* ____data0_marshaled = NULL;
	if (___data0 != NULL)
	{
		____data0_marshaled = reinterpret_cast<float*>((___data0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(____data0_marshaled);

}
// System.Void UnityEngine.AudioClip/PCMReaderCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void PCMReaderCallback__ctor_m4269754975 (PCMReaderCallback_t1677636661 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[])
extern "C" IL2CPP_METHOD_ATTR void PCMReaderCallback_Invoke_m2948796957 (PCMReaderCallback_t1677636661 * __this, SingleU5BU5D_t1444911251* ___data0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		PCMReaderCallback_Invoke_m2948796957((PCMReaderCallback_t1677636661 *)__this->get_prev_9(), ___data0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, SingleU5BU5D_t1444911251*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___data0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, SingleU5BU5D_t1444911251*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___data0, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< SingleU5BU5D_t1444911251* >::Invoke(targetMethod, targetThis, ___data0);
					else
						GenericVirtActionInvoker1< SingleU5BU5D_t1444911251* >::Invoke(targetMethod, targetThis, ___data0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< SingleU5BU5D_t1444911251* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___data0);
					else
						VirtActionInvoker1< SingleU5BU5D_t1444911251* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___data0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, SingleU5BU5D_t1444911251*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___data0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___data0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___data0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___data0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (SingleU5BU5D_t1444911251*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.AudioClip/PCMReaderCallback::BeginInvoke(System.Single[],System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* PCMReaderCallback_BeginInvoke_m3391809637 (PCMReaderCallback_t1677636661 * __this, SingleU5BU5D_t1444911251* ___data0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___data0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.AudioClip/PCMReaderCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void PCMReaderCallback_EndInvoke_m3916876196 (PCMReaderCallback_t1677636661 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_PCMSetPositionCallback_t1059417452 (PCMSetPositionCallback_t1059417452 * __this, int32_t ___position0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___position0);

}
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void PCMSetPositionCallback__ctor_m2909837933 (PCMSetPositionCallback_t1059417452 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void PCMSetPositionCallback_Invoke_m2167694991 (PCMSetPositionCallback_t1059417452 * __this, int32_t ___position0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		PCMSetPositionCallback_Invoke_m2167694991((PCMSetPositionCallback_t1059417452 *)__this->get_prev_9(), ___position0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___position0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___position0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___position0);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___position0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___position0);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___position0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___position0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.AudioClip/PCMSetPositionCallback::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* PCMSetPositionCallback_BeginInvoke_m2701134198 (PCMSetPositionCallback_t1059417452 * __this, int32_t ___position0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PCMSetPositionCallback_BeginInvoke_m2701134198_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___position0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void PCMSetPositionCallback_EndInvoke_m1405765992 (PCMSetPositionCallback_t1059417452 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
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
// System.Type UnityEngine.AudioExtensionDefinition::GetExtensionType()
extern "C" IL2CPP_METHOD_ATTR Type_t * AudioExtensionDefinition_GetExtensionType_m1450823952 (AudioExtensionDefinition_t3271167678 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioExtensionDefinition_GetExtensionType_m1450823952_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	{
		Type_t * L_0 = __this->get_extensionType_3();
		if (L_0)
		{
			goto IL_004d;
		}
	}
	{
		StringU5BU5D_t1281789340* L_1 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)5));
		String_t* L_2 = __this->get_extensionNamespace_1();
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_2);
		StringU5BU5D_t1281789340* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral3452614530);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral3452614530);
		StringU5BU5D_t1281789340* L_4 = L_3;
		String_t* L_5 = __this->get_extensionTypeName_2();
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_5);
		StringU5BU5D_t1281789340* L_6 = L_4;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral3450517380);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral3450517380);
		StringU5BU5D_t1281789340* L_7 = L_6;
		String_t* L_8 = __this->get_assemblyName_0();
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_8);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Concat_m1809518182(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = il2cpp_codegen_get_type((Il2CppMethodPointer)&Type_GetType_m1693760368, L_9, "UnityEngine.AudioModule, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null");
		__this->set_extensionType_3(L_10);
	}

IL_004d:
	{
		Type_t * L_11 = __this->get_extensionType_3();
		V_0 = L_11;
		goto IL_0059;
	}

IL_0059:
	{
		Type_t * L_12 = V_0;
		return L_12;
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
// UnityEngine.Object UnityEngine.AudioExtensionManager::GetAudioListener()
extern "C" IL2CPP_METHOD_ATTR Object_t631007953 * AudioExtensionManager_GetAudioListener_m817760607 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef Object_t631007953 * (*AudioExtensionManager_GetAudioListener_m817760607_ftn) ();
	static AudioExtensionManager_GetAudioListener_m817760607_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioExtensionManager_GetAudioListener_m817760607_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioExtensionManager::GetAudioListener()");
	Object_t631007953 * retVal = _il2cpp_icall_func();
	return retVal;
}
// UnityEngine.AudioSourceExtension UnityEngine.AudioExtensionManager::AddSpatializerExtension(UnityEngine.AudioSource)
extern "C" IL2CPP_METHOD_ATTR AudioSourceExtension_t3064908834 * AudioExtensionManager_AddSpatializerExtension_m820561940 (RuntimeObject * __this /* static, unused */, AudioSource_t3935305588 * ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioExtensionManager_AddSpatializerExtension_m820561940_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AudioSourceExtension_t3064908834 * V_0 = NULL;
	AudioSpatializerExtensionDefinition_t597896186 * V_1 = NULL;
	Enumerator_t3959214805  V_2;
	memset(&V_2, 0, sizeof(V_2));
	AudioSourceExtension_t3064908834 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		AudioSource_t3935305588 * L_0 = ___source0;
		NullCheck(L_0);
		bool L_1 = AudioSource_get_spatialize_m3609701298(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		V_0 = (AudioSourceExtension_t3064908834 *)NULL;
		goto IL_00dc;
	}

IL_0013:
	{
		AudioSource_t3935305588 * L_2 = ___source0;
		NullCheck(L_2);
		AudioSourceExtension_t3064908834 * L_3 = L_2->get_spatializerExtension_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_3, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		AudioSource_t3935305588 * L_5 = ___source0;
		NullCheck(L_5);
		AudioSourceExtension_t3064908834 * L_6 = L_5->get_spatializerExtension_2();
		V_0 = L_6;
		goto IL_00dc;
	}

IL_0030:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		AudioExtensionManager_RegisterBuiltinDefinitions_m2742744104(NULL /*static, unused*/, /*hidden argument*/NULL);
		List_1_t2069970928 * L_7 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_SourceSpatializerExtensionDefinitions_1();
		NullCheck(L_7);
		Enumerator_t3959214805  L_8 = List_1_GetEnumerator_m1716448724(L_7, /*hidden argument*/List_1_GetEnumerator_m1716448724_RuntimeMethod_var);
		V_2 = L_8;
	}

IL_0041:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00b6;
		}

IL_0046:
		{
			AudioSpatializerExtensionDefinition_t597896186 * L_9 = Enumerator_get_Current_m615903654((&V_2), /*hidden argument*/Enumerator_get_Current_m615903654_RuntimeMethod_var);
			V_1 = L_9;
			String_t* L_10 = AudioSettings_GetSpatializerPluginName_m1324100978(NULL /*static, unused*/, /*hidden argument*/NULL);
			PropertyName_t3749835189  L_11 = PropertyName_op_Implicit_m1633828199(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
			AudioSpatializerExtensionDefinition_t597896186 * L_12 = V_1;
			NullCheck(L_12);
			PropertyName_t3749835189  L_13 = L_12->get_spatializerName_0();
			bool L_14 = PropertyName_op_Equality_m2761233272(NULL /*static, unused*/, L_11, L_13, /*hidden argument*/NULL);
			if (!L_14)
			{
				goto IL_00b5;
			}
		}

IL_0069:
		{
			AudioSource_t3935305588 * L_15 = ___source0;
			AudioSpatializerExtensionDefinition_t597896186 * L_16 = V_1;
			NullCheck(L_16);
			AudioExtensionDefinition_t3271167678 * L_17 = L_16->get_definition_1();
			NullCheck(L_17);
			Type_t * L_18 = AudioExtensionDefinition_GetExtensionType_m1450823952(L_17, /*hidden argument*/NULL);
			NullCheck(L_15);
			AudioSourceExtension_t3064908834 * L_19 = AudioSource_AddSpatializerExtension_m2560794359(L_15, L_18, /*hidden argument*/NULL);
			V_3 = L_19;
			AudioSourceExtension_t3064908834 * L_20 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			bool L_21 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_20, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
			if (!L_21)
			{
				goto IL_00b4;
			}
		}

IL_0088:
		{
			AudioSourceExtension_t3064908834 * L_22 = V_3;
			AudioSource_t3935305588 * L_23 = ___source0;
			NullCheck(L_22);
			AudioSourceExtension_set_audioSource_m3729768988(L_22, L_23, /*hidden argument*/NULL);
			AudioSource_t3935305588 * L_24 = ___source0;
			AudioSourceExtension_t3064908834 * L_25 = V_3;
			NullCheck(L_24);
			L_24->set_spatializerExtension_2(L_25);
			AudioSourceExtension_t3064908834 * L_26 = V_3;
			AudioSpatializerExtensionDefinition_t597896186 * L_27 = V_1;
			NullCheck(L_27);
			AudioExtensionDefinition_t3271167678 * L_28 = L_27->get_definition_1();
			NullCheck(L_28);
			Type_t * L_29 = AudioExtensionDefinition_GetExtensionType_m1450823952(L_28, /*hidden argument*/NULL);
			NullCheck(L_29);
			String_t* L_30 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_29);
			IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
			AudioExtensionManager_WriteExtensionProperties_m1988587615(NULL /*static, unused*/, L_26, L_30, /*hidden argument*/NULL);
			AudioSourceExtension_t3064908834 * L_31 = V_3;
			V_0 = L_31;
			IL2CPP_LEAVE(0xDC, FINALLY_00c7);
		}

IL_00b4:
		{
		}

IL_00b5:
		{
		}

IL_00b6:
		{
			bool L_32 = Enumerator_MoveNext_m2697843606((&V_2), /*hidden argument*/Enumerator_MoveNext_m2697843606_RuntimeMethod_var);
			if (L_32)
			{
				goto IL_0046;
			}
		}

IL_00c2:
		{
			IL2CPP_LEAVE(0xD5, FINALLY_00c7);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00c7;
	}

FINALLY_00c7:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3198901590((&V_2), /*hidden argument*/Enumerator_Dispose_m3198901590_RuntimeMethod_var);
		IL2CPP_END_FINALLY(199)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(199)
	{
		IL2CPP_JUMP_TBL(0xDC, IL_00dc)
		IL2CPP_JUMP_TBL(0xD5, IL_00d5)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00d5:
	{
		V_0 = (AudioSourceExtension_t3064908834 *)NULL;
		goto IL_00dc;
	}

IL_00dc:
	{
		AudioSourceExtension_t3064908834 * L_33 = V_0;
		return L_33;
	}
}
// UnityEngine.AudioSourceExtension UnityEngine.AudioExtensionManager::AddAmbisonicDecoderExtension(UnityEngine.AudioSource)
extern "C" IL2CPP_METHOD_ATTR AudioSourceExtension_t3064908834 * AudioExtensionManager_AddAmbisonicDecoderExtension_m3197702864 (RuntimeObject * __this /* static, unused */, AudioSource_t3935305588 * ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioExtensionManager_AddAmbisonicDecoderExtension_m3197702864_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AudioSourceExtension_t3064908834 * V_0 = NULL;
	AudioAmbisonicExtensionDefinition_t4118426890 * V_1 = NULL;
	Enumerator_t3184778213  V_2;
	memset(&V_2, 0, sizeof(V_2));
	AudioSourceExtension_t3064908834 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		AudioSource_t3935305588 * L_0 = ___source0;
		NullCheck(L_0);
		AudioSourceExtension_t3064908834 * L_1 = L_0->get_ambisonicExtension_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		AudioSource_t3935305588 * L_3 = ___source0;
		NullCheck(L_3);
		AudioSourceExtension_t3064908834 * L_4 = L_3->get_ambisonicExtension_3();
		V_0 = L_4;
		goto IL_00b4;
	}

IL_001e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		AudioExtensionManager_RegisterBuiltinDefinitions_m2742744104(NULL /*static, unused*/, /*hidden argument*/NULL);
		List_1_t1295534336 * L_5 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_SourceAmbisonicDecoderExtensionDefinitions_2();
		NullCheck(L_5);
		Enumerator_t3184778213  L_6 = List_1_GetEnumerator_m2295013814(L_5, /*hidden argument*/List_1_GetEnumerator_m2295013814_RuntimeMethod_var);
		V_2 = L_6;
	}

IL_002f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_008e;
		}

IL_0034:
		{
			AudioAmbisonicExtensionDefinition_t4118426890 * L_7 = Enumerator_get_Current_m967136761((&V_2), /*hidden argument*/Enumerator_get_Current_m967136761_RuntimeMethod_var);
			V_1 = L_7;
			String_t* L_8 = AudioSettings_GetAmbisonicDecoderPluginName_m19603540(NULL /*static, unused*/, /*hidden argument*/NULL);
			PropertyName_t3749835189  L_9 = PropertyName_op_Implicit_m1633828199(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
			AudioAmbisonicExtensionDefinition_t4118426890 * L_10 = V_1;
			NullCheck(L_10);
			PropertyName_t3749835189  L_11 = L_10->get_ambisonicPluginName_0();
			bool L_12 = PropertyName_op_Equality_m2761233272(NULL /*static, unused*/, L_9, L_11, /*hidden argument*/NULL);
			if (!L_12)
			{
				goto IL_008d;
			}
		}

IL_0057:
		{
			AudioSource_t3935305588 * L_13 = ___source0;
			AudioAmbisonicExtensionDefinition_t4118426890 * L_14 = V_1;
			NullCheck(L_14);
			AudioExtensionDefinition_t3271167678 * L_15 = L_14->get_definition_1();
			NullCheck(L_15);
			Type_t * L_16 = AudioExtensionDefinition_GetExtensionType_m1450823952(L_15, /*hidden argument*/NULL);
			NullCheck(L_13);
			AudioSourceExtension_t3064908834 * L_17 = AudioSource_AddAmbisonicExtension_m304476911(L_13, L_16, /*hidden argument*/NULL);
			V_3 = L_17;
			AudioSourceExtension_t3064908834 * L_18 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			bool L_19 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_18, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
			if (!L_19)
			{
				goto IL_008c;
			}
		}

IL_0076:
		{
			AudioSourceExtension_t3064908834 * L_20 = V_3;
			AudioSource_t3935305588 * L_21 = ___source0;
			NullCheck(L_20);
			AudioSourceExtension_set_audioSource_m3729768988(L_20, L_21, /*hidden argument*/NULL);
			AudioSource_t3935305588 * L_22 = ___source0;
			AudioSourceExtension_t3064908834 * L_23 = V_3;
			NullCheck(L_22);
			L_22->set_ambisonicExtension_3(L_23);
			AudioSourceExtension_t3064908834 * L_24 = V_3;
			V_0 = L_24;
			IL2CPP_LEAVE(0xB4, FINALLY_009f);
		}

IL_008c:
		{
		}

IL_008d:
		{
		}

IL_008e:
		{
			bool L_25 = Enumerator_MoveNext_m1000499844((&V_2), /*hidden argument*/Enumerator_MoveNext_m1000499844_RuntimeMethod_var);
			if (L_25)
			{
				goto IL_0034;
			}
		}

IL_009a:
		{
			IL2CPP_LEAVE(0xAD, FINALLY_009f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009f;
	}

FINALLY_009f:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m405442337((&V_2), /*hidden argument*/Enumerator_Dispose_m405442337_RuntimeMethod_var);
		IL2CPP_END_FINALLY(159)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(159)
	{
		IL2CPP_JUMP_TBL(0xB4, IL_00b4)
		IL2CPP_JUMP_TBL(0xAD, IL_00ad)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00ad:
	{
		V_0 = (AudioSourceExtension_t3064908834 *)NULL;
		goto IL_00b4;
	}

IL_00b4:
	{
		AudioSourceExtension_t3064908834 * L_26 = V_0;
		return L_26;
	}
}
// System.Void UnityEngine.AudioExtensionManager::WriteExtensionProperties(UnityEngine.AudioSourceExtension,System.String)
extern "C" IL2CPP_METHOD_ATTR void AudioExtensionManager_WriteExtensionProperties_m1988587615 (RuntimeObject * __this /* static, unused */, AudioSourceExtension_t3064908834 * ___extension0, String_t* ___extensionName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioExtensionManager_WriteExtensionProperties_m1988587615_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PropertyName_t3749835189  V_1;
	memset(&V_1, 0, sizeof(V_1));
	float V_2 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		PropertyName_t3749835189  L_0 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_SpatializerExtensionName_7();
		PropertyName_t3749835189  L_1 = PropertyName_op_Implicit_m114733813(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		bool L_2 = PropertyName_op_Equality_m2761233272(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_3 = ___extensionName1;
		PropertyName_t3749835189  L_4 = PropertyName_op_Implicit_m1633828199(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->set_m_SpatializerExtensionName_7(L_4);
	}

IL_0021:
	{
		V_0 = 0;
		goto IL_006d;
	}

IL_0028:
	{
		AudioSourceExtension_t3064908834 * L_5 = ___extension0;
		NullCheck(L_5);
		AudioSource_t3935305588 * L_6 = AudioSourceExtension_get_audioSource_m1465006871(L_5, /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		PropertyName_t3749835189  L_8 = AudioSource_ReadExtensionName_m725112169(L_6, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		PropertyName_t3749835189  L_9 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_SpatializerExtensionName_7();
		bool L_10 = PropertyName_op_Equality_m2761233272(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0068;
		}
	}
	{
		AudioSourceExtension_t3064908834 * L_11 = ___extension0;
		NullCheck(L_11);
		AudioSource_t3935305588 * L_12 = AudioSourceExtension_get_audioSource_m1465006871(L_11, /*hidden argument*/NULL);
		int32_t L_13 = V_0;
		NullCheck(L_12);
		PropertyName_t3749835189  L_14 = AudioSource_ReadExtensionPropertyName_m2761820692(L_12, L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		AudioSourceExtension_t3064908834 * L_15 = ___extension0;
		NullCheck(L_15);
		AudioSource_t3935305588 * L_16 = AudioSourceExtension_get_audioSource_m1465006871(L_15, /*hidden argument*/NULL);
		int32_t L_17 = V_0;
		NullCheck(L_16);
		float L_18 = AudioSource_ReadExtensionPropertyValue_m72717540(L_16, L_17, /*hidden argument*/NULL);
		V_2 = L_18;
		AudioSourceExtension_t3064908834 * L_19 = ___extension0;
		PropertyName_t3749835189  L_20 = V_1;
		float L_21 = V_2;
		NullCheck(L_19);
		VirtActionInvoker2< PropertyName_t3749835189 , float >::Invoke(4 /* System.Void UnityEngine.AudioSourceExtension::WriteExtensionProperty(UnityEngine.PropertyName,System.Single) */, L_19, L_20, L_21);
	}

IL_0068:
	{
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_006d:
	{
		int32_t L_23 = V_0;
		AudioSourceExtension_t3064908834 * L_24 = ___extension0;
		NullCheck(L_24);
		AudioSource_t3935305588 * L_25 = AudioSourceExtension_get_audioSource_m1465006871(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		int32_t L_26 = AudioSource_GetNumExtensionProperties_m1231815209(L_25, /*hidden argument*/NULL);
		if ((((int32_t)L_23) < ((int32_t)L_26)))
		{
			goto IL_0028;
		}
	}
	{
		AudioSourceExtension_t3064908834 * L_27 = ___extension0;
		NullCheck(L_27);
		AudioSource_t3935305588 * L_28 = AudioSourceExtension_get_audioSource_m1465006871(L_27, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		PropertyName_t3749835189  L_29 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_SpatializerExtensionName_7();
		NullCheck(L_28);
		AudioSource_ClearExtensionProperties_m2116074582(L_28, L_29, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.AudioListenerExtension UnityEngine.AudioExtensionManager::AddSpatializerExtension(UnityEngine.AudioListener)
extern "C" IL2CPP_METHOD_ATTR AudioListenerExtension_t3242956547 * AudioExtensionManager_AddSpatializerExtension_m3915849352 (RuntimeObject * __this /* static, unused */, AudioListener_t2734094699 * ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioExtensionManager_AddSpatializerExtension_m3915849352_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AudioListenerExtension_t3242956547 * V_0 = NULL;
	AudioSpatializerExtensionDefinition_t597896186 * V_1 = NULL;
	Enumerator_t3959214805  V_2;
	memset(&V_2, 0, sizeof(V_2));
	AudioListenerExtension_t3242956547 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		AudioListener_t2734094699 * L_0 = ___listener0;
		NullCheck(L_0);
		AudioListenerExtension_t3242956547 * L_1 = L_0->get_spatializerExtension_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		AudioListener_t2734094699 * L_3 = ___listener0;
		NullCheck(L_3);
		AudioListenerExtension_t3242956547 * L_4 = L_3->get_spatializerExtension_2();
		V_0 = L_4;
		goto IL_00e4;
	}

IL_001e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		AudioExtensionManager_RegisterBuiltinDefinitions_m2742744104(NULL /*static, unused*/, /*hidden argument*/NULL);
		List_1_t2069970928 * L_5 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_ListenerSpatializerExtensionDefinitions_0();
		NullCheck(L_5);
		Enumerator_t3959214805  L_6 = List_1_GetEnumerator_m1716448724(L_5, /*hidden argument*/List_1_GetEnumerator_m1716448724_RuntimeMethod_var);
		V_2 = L_6;
	}

IL_002f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00be;
		}

IL_0034:
		{
			AudioSpatializerExtensionDefinition_t597896186 * L_7 = Enumerator_get_Current_m615903654((&V_2), /*hidden argument*/Enumerator_get_Current_m615903654_RuntimeMethod_var);
			V_1 = L_7;
			String_t* L_8 = AudioSettings_GetSpatializerPluginName_m1324100978(NULL /*static, unused*/, /*hidden argument*/NULL);
			PropertyName_t3749835189  L_9 = PropertyName_op_Implicit_m1633828199(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
			AudioSpatializerExtensionDefinition_t597896186 * L_10 = V_1;
			NullCheck(L_10);
			PropertyName_t3749835189  L_11 = L_10->get_spatializerName_0();
			bool L_12 = PropertyName_op_Equality_m2761233272(NULL /*static, unused*/, L_9, L_11, /*hidden argument*/NULL);
			if (L_12)
			{
				goto IL_0071;
			}
		}

IL_0057:
		{
			String_t* L_13 = AudioSettings_GetAmbisonicDecoderPluginName_m19603540(NULL /*static, unused*/, /*hidden argument*/NULL);
			PropertyName_t3749835189  L_14 = PropertyName_op_Implicit_m1633828199(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
			AudioSpatializerExtensionDefinition_t597896186 * L_15 = V_1;
			NullCheck(L_15);
			PropertyName_t3749835189  L_16 = L_15->get_spatializerName_0();
			bool L_17 = PropertyName_op_Equality_m2761233272(NULL /*static, unused*/, L_14, L_16, /*hidden argument*/NULL);
			if (!L_17)
			{
				goto IL_00bd;
			}
		}

IL_0071:
		{
			AudioListener_t2734094699 * L_18 = ___listener0;
			AudioSpatializerExtensionDefinition_t597896186 * L_19 = V_1;
			NullCheck(L_19);
			AudioExtensionDefinition_t3271167678 * L_20 = L_19->get_definition_1();
			NullCheck(L_20);
			Type_t * L_21 = AudioExtensionDefinition_GetExtensionType_m1450823952(L_20, /*hidden argument*/NULL);
			NullCheck(L_18);
			AudioListenerExtension_t3242956547 * L_22 = AudioListener_AddExtension_m994751216(L_18, L_21, /*hidden argument*/NULL);
			V_3 = L_22;
			AudioListenerExtension_t3242956547 * L_23 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			bool L_24 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_23, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
			if (!L_24)
			{
				goto IL_00bc;
			}
		}

IL_0090:
		{
			AudioListenerExtension_t3242956547 * L_25 = V_3;
			AudioListener_t2734094699 * L_26 = ___listener0;
			NullCheck(L_25);
			AudioListenerExtension_set_audioListener_m3412289012(L_25, L_26, /*hidden argument*/NULL);
			AudioListener_t2734094699 * L_27 = ___listener0;
			AudioListenerExtension_t3242956547 * L_28 = V_3;
			NullCheck(L_27);
			L_27->set_spatializerExtension_2(L_28);
			AudioListenerExtension_t3242956547 * L_29 = V_3;
			AudioSpatializerExtensionDefinition_t597896186 * L_30 = V_1;
			NullCheck(L_30);
			AudioExtensionDefinition_t3271167678 * L_31 = L_30->get_definition_1();
			NullCheck(L_31);
			Type_t * L_32 = AudioExtensionDefinition_GetExtensionType_m1450823952(L_31, /*hidden argument*/NULL);
			NullCheck(L_32);
			String_t* L_33 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_32);
			IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
			AudioExtensionManager_WriteExtensionProperties_m3028464154(NULL /*static, unused*/, L_29, L_33, /*hidden argument*/NULL);
			AudioListenerExtension_t3242956547 * L_34 = V_3;
			V_0 = L_34;
			IL2CPP_LEAVE(0xE4, FINALLY_00cf);
		}

IL_00bc:
		{
		}

IL_00bd:
		{
		}

IL_00be:
		{
			bool L_35 = Enumerator_MoveNext_m2697843606((&V_2), /*hidden argument*/Enumerator_MoveNext_m2697843606_RuntimeMethod_var);
			if (L_35)
			{
				goto IL_0034;
			}
		}

IL_00ca:
		{
			IL2CPP_LEAVE(0xDD, FINALLY_00cf);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00cf;
	}

FINALLY_00cf:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3198901590((&V_2), /*hidden argument*/Enumerator_Dispose_m3198901590_RuntimeMethod_var);
		IL2CPP_END_FINALLY(207)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(207)
	{
		IL2CPP_JUMP_TBL(0xE4, IL_00e4)
		IL2CPP_JUMP_TBL(0xDD, IL_00dd)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00dd:
	{
		V_0 = (AudioListenerExtension_t3242956547 *)NULL;
		goto IL_00e4;
	}

IL_00e4:
	{
		AudioListenerExtension_t3242956547 * L_36 = V_0;
		return L_36;
	}
}
// System.Void UnityEngine.AudioExtensionManager::WriteExtensionProperties(UnityEngine.AudioListenerExtension,System.String)
extern "C" IL2CPP_METHOD_ATTR void AudioExtensionManager_WriteExtensionProperties_m3028464154 (RuntimeObject * __this /* static, unused */, AudioListenerExtension_t3242956547 * ___extension0, String_t* ___extensionName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioExtensionManager_WriteExtensionProperties_m3028464154_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PropertyName_t3749835189  V_1;
	memset(&V_1, 0, sizeof(V_1));
	float V_2 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		PropertyName_t3749835189  L_0 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_ListenerSpatializerExtensionName_8();
		PropertyName_t3749835189  L_1 = PropertyName_op_Implicit_m114733813(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		bool L_2 = PropertyName_op_Equality_m2761233272(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_3 = ___extensionName1;
		PropertyName_t3749835189  L_4 = PropertyName_op_Implicit_m1633828199(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->set_m_ListenerSpatializerExtensionName_8(L_4);
	}

IL_0021:
	{
		V_0 = 0;
		goto IL_006d;
	}

IL_0028:
	{
		AudioListenerExtension_t3242956547 * L_5 = ___extension0;
		NullCheck(L_5);
		AudioListener_t2734094699 * L_6 = AudioListenerExtension_get_audioListener_m3597041395(L_5, /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		PropertyName_t3749835189  L_8 = AudioListener_ReadExtensionName_m929423100(L_6, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		PropertyName_t3749835189  L_9 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_ListenerSpatializerExtensionName_8();
		bool L_10 = PropertyName_op_Equality_m2761233272(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0068;
		}
	}
	{
		AudioListenerExtension_t3242956547 * L_11 = ___extension0;
		NullCheck(L_11);
		AudioListener_t2734094699 * L_12 = AudioListenerExtension_get_audioListener_m3597041395(L_11, /*hidden argument*/NULL);
		int32_t L_13 = V_0;
		NullCheck(L_12);
		PropertyName_t3749835189  L_14 = AudioListener_ReadExtensionPropertyName_m3416271339(L_12, L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		AudioListenerExtension_t3242956547 * L_15 = ___extension0;
		NullCheck(L_15);
		AudioListener_t2734094699 * L_16 = AudioListenerExtension_get_audioListener_m3597041395(L_15, /*hidden argument*/NULL);
		int32_t L_17 = V_0;
		NullCheck(L_16);
		float L_18 = AudioListener_ReadExtensionPropertyValue_m2443832840(L_16, L_17, /*hidden argument*/NULL);
		V_2 = L_18;
		AudioListenerExtension_t3242956547 * L_19 = ___extension0;
		PropertyName_t3749835189  L_20 = V_1;
		float L_21 = V_2;
		NullCheck(L_19);
		VirtActionInvoker2< PropertyName_t3749835189 , float >::Invoke(4 /* System.Void UnityEngine.AudioListenerExtension::WriteExtensionProperty(UnityEngine.PropertyName,System.Single) */, L_19, L_20, L_21);
	}

IL_0068:
	{
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_006d:
	{
		int32_t L_23 = V_0;
		AudioListenerExtension_t3242956547 * L_24 = ___extension0;
		NullCheck(L_24);
		AudioListener_t2734094699 * L_25 = AudioListenerExtension_get_audioListener_m3597041395(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		int32_t L_26 = AudioListener_GetNumExtensionProperties_m3139224773(L_25, /*hidden argument*/NULL);
		if ((((int32_t)L_23) < ((int32_t)L_26)))
		{
			goto IL_0028;
		}
	}
	{
		AudioListenerExtension_t3242956547 * L_27 = ___extension0;
		NullCheck(L_27);
		AudioListener_t2734094699 * L_28 = AudioListenerExtension_get_audioListener_m3597041395(L_27, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		PropertyName_t3749835189  L_29 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_ListenerSpatializerExtensionName_8();
		NullCheck(L_28);
		AudioListener_ClearExtensionProperties_m3849891634(L_28, L_29, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AudioExtensionManager::AddExtensionToManager(UnityEngine.AudioSourceExtension)
extern "C" IL2CPP_METHOD_ATTR void AudioExtensionManager_AddExtensionToManager_m3475649283 (RuntimeObject * __this /* static, unused */, AudioSourceExtension_t3064908834 * ___extension0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioExtensionManager_AddExtensionToManager_m3475649283_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		AudioExtensionManager_RegisterBuiltinDefinitions_m2742744104(NULL /*static, unused*/, /*hidden argument*/NULL);
		AudioSourceExtension_t3064908834 * L_0 = ___extension0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_m_ExtensionManagerUpdateIndex_3();
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0031;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		List_1_t242016280 * L_2 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_SourceExtensionsToUpdate_3();
		AudioSourceExtension_t3064908834 * L_3 = ___extension0;
		NullCheck(L_2);
		List_1_Add_m2957197106(L_2, L_3, /*hidden argument*/List_1_Add_m2957197106_RuntimeMethod_var);
		AudioSourceExtension_t3064908834 * L_4 = ___extension0;
		List_1_t242016280 * L_5 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_SourceExtensionsToUpdate_3();
		NullCheck(L_5);
		int32_t L_6 = List_1_get_Count_m3844406869(L_5, /*hidden argument*/List_1_get_Count_m3844406869_RuntimeMethod_var);
		NullCheck(L_4);
		L_4->set_m_ExtensionManagerUpdateIndex_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)));
	}

IL_0031:
	{
		return;
	}
}
// System.Void UnityEngine.AudioExtensionManager::RemoveExtensionFromManager(UnityEngine.AudioSourceExtension)
extern "C" IL2CPP_METHOD_ATTR void AudioExtensionManager_RemoveExtensionFromManager_m442924172 (RuntimeObject * __this /* static, unused */, AudioSourceExtension_t3064908834 * ___extension0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioExtensionManager_RemoveExtensionFromManager_m442924172_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		AudioSourceExtension_t3064908834 * L_0 = ___extension0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_m_ExtensionManagerUpdateIndex_3();
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		List_1_t242016280 * L_4 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_SourceExtensionsToUpdate_3();
		NullCheck(L_4);
		int32_t L_5 = List_1_get_Count_m3844406869(L_4, /*hidden argument*/List_1_get_Count_m3844406869_RuntimeMethod_var);
		if ((((int32_t)L_3) >= ((int32_t)L_5)))
		{
			goto IL_0060;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		List_1_t242016280 * L_6 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_SourceExtensionsToUpdate_3();
		NullCheck(L_6);
		int32_t L_7 = List_1_get_Count_m3844406869(L_6, /*hidden argument*/List_1_get_Count_m3844406869_RuntimeMethod_var);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1));
		List_1_t242016280 * L_8 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_SourceExtensionsToUpdate_3();
		int32_t L_9 = V_0;
		List_1_t242016280 * L_10 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_SourceExtensionsToUpdate_3();
		int32_t L_11 = V_1;
		NullCheck(L_10);
		AudioSourceExtension_t3064908834 * L_12 = List_1_get_Item_m1395253538(L_10, L_11, /*hidden argument*/List_1_get_Item_m1395253538_RuntimeMethod_var);
		NullCheck(L_8);
		List_1_set_Item_m845928814(L_8, L_9, L_12, /*hidden argument*/List_1_set_Item_m845928814_RuntimeMethod_var);
		List_1_t242016280 * L_13 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_SourceExtensionsToUpdate_3();
		int32_t L_14 = V_0;
		NullCheck(L_13);
		AudioSourceExtension_t3064908834 * L_15 = List_1_get_Item_m1395253538(L_13, L_14, /*hidden argument*/List_1_get_Item_m1395253538_RuntimeMethod_var);
		int32_t L_16 = V_0;
		NullCheck(L_15);
		L_15->set_m_ExtensionManagerUpdateIndex_3(L_16);
		List_1_t242016280 * L_17 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_SourceExtensionsToUpdate_3();
		int32_t L_18 = V_1;
		NullCheck(L_17);
		List_1_RemoveAt_m2462508318(L_17, L_18, /*hidden argument*/List_1_RemoveAt_m2462508318_RuntimeMethod_var);
	}

IL_0060:
	{
		AudioSourceExtension_t3064908834 * L_19 = ___extension0;
		NullCheck(L_19);
		L_19->set_m_ExtensionManagerUpdateIndex_3((-1));
		return;
	}
}
// System.Void UnityEngine.AudioExtensionManager::Update()
extern "C" IL2CPP_METHOD_ATTR void AudioExtensionManager_Update_m3269307447 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioExtensionManager_Update_m3269307447_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AudioListener_t2734094699 * V_0 = NULL;
	AudioListenerExtension_t3242956547 * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	AudioSourceExtension_t3064908834 * V_5 = NULL;
	int32_t G_B10_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B21_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		AudioExtensionManager_RegisterBuiltinDefinitions_m2742744104(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t631007953 * L_0 = AudioExtensionManager_GetAudioListener_m817760607(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = ((AudioListener_t2734094699 *)IsInstSealed((RuntimeObject*)L_0, AudioListener_t2734094699_il2cpp_TypeInfo_var));
		AudioListener_t2734094699 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		AudioListener_t2734094699 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		AudioListenerExtension_t3242956547 * L_4 = AudioExtensionManager_AddSpatializerExtension_m3915849352(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		AudioListenerExtension_t3242956547 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_5, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		AudioListenerExtension_t3242956547 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.AudioListenerExtension::ExtensionUpdate() */, L_7);
	}

IL_0037:
	{
	}

IL_0038:
	{
		V_2 = 0;
		goto IL_0053;
	}

IL_003f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		List_1_t242016280 * L_8 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_SourceExtensionsToUpdate_3();
		int32_t L_9 = V_2;
		NullCheck(L_8);
		AudioSourceExtension_t3064908834 * L_10 = List_1_get_Item_m1395253538(L_8, L_9, /*hidden argument*/List_1_get_Item_m1395253538_RuntimeMethod_var);
		NullCheck(L_10);
		VirtActionInvoker0::Invoke(7 /* System.Void UnityEngine.AudioSourceExtension::ExtensionUpdate() */, L_10);
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0053:
	{
		int32_t L_12 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		List_1_t242016280 * L_13 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_SourceExtensionsToUpdate_3();
		NullCheck(L_13);
		int32_t L_14 = List_1_get_Count_m3844406869(L_13, /*hidden argument*/List_1_get_Count_m3844406869_RuntimeMethod_var);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_003f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		int32_t L_15 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_NextStopIndex_4();
		List_1_t242016280 * L_16 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_SourceExtensionsToUpdate_3();
		NullCheck(L_16);
		int32_t L_17 = List_1_get_Count_m3844406869(L_16, /*hidden argument*/List_1_get_Count_m3844406869_RuntimeMethod_var);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_007d;
		}
	}
	{
		G_B10_0 = 0;
		goto IL_0082;
	}

IL_007d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		int32_t L_18 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_NextStopIndex_4();
		G_B10_0 = L_18;
	}

IL_0082:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->set_m_NextStopIndex_4(G_B10_0);
		List_1_t242016280 * L_19 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_SourceExtensionsToUpdate_3();
		NullCheck(L_19);
		int32_t L_20 = List_1_get_Count_m3844406869(L_19, /*hidden argument*/List_1_get_Count_m3844406869_RuntimeMethod_var);
		if ((((int32_t)L_20) <= ((int32_t)0)))
		{
			goto IL_00aa;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		List_1_t242016280 * L_21 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_SourceExtensionsToUpdate_3();
		NullCheck(L_21);
		int32_t L_22 = List_1_get_Count_m3844406869(L_21, /*hidden argument*/List_1_get_Count_m3844406869_RuntimeMethod_var);
		G_B13_0 = ((int32_t)il2cpp_codegen_add((int32_t)1, (int32_t)((int32_t)((int32_t)L_22/(int32_t)8))));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B13_0 = 0;
	}

IL_00ab:
	{
		V_3 = G_B13_0;
		V_4 = 0;
		goto IL_0148;
	}

IL_00b4:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		List_1_t242016280 * L_23 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_SourceExtensionsToUpdate_3();
		int32_t L_24 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_NextStopIndex_4();
		NullCheck(L_23);
		AudioSourceExtension_t3064908834 * L_25 = List_1_get_Item_m1395253538(L_23, L_24, /*hidden argument*/List_1_get_Item_m1395253538_RuntimeMethod_var);
		V_5 = L_25;
		AudioSourceExtension_t3064908834 * L_26 = V_5;
		NullCheck(L_26);
		AudioSource_t3935305588 * L_27 = AudioSourceExtension_get_audioSource_m1465006871(L_26, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_28 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_27, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_00fa;
		}
	}
	{
		AudioSourceExtension_t3064908834 * L_29 = V_5;
		NullCheck(L_29);
		AudioSource_t3935305588 * L_30 = AudioSourceExtension_get_audioSource_m1465006871(L_29, /*hidden argument*/NULL);
		NullCheck(L_30);
		bool L_31 = Behaviour_get_enabled_m753527255(L_30, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_00fa;
		}
	}
	{
		AudioSourceExtension_t3064908834 * L_32 = V_5;
		NullCheck(L_32);
		AudioSource_t3935305588 * L_33 = AudioSourceExtension_get_audioSource_m1465006871(L_32, /*hidden argument*/NULL);
		NullCheck(L_33);
		bool L_34 = AudioSource_get_isPlaying_m1896551654(L_33, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_010f;
		}
	}

IL_00fa:
	{
		AudioSourceExtension_t3064908834 * L_35 = V_5;
		NullCheck(L_35);
		VirtActionInvoker0::Invoke(6 /* System.Void UnityEngine.AudioSourceExtension::Stop() */, L_35);
		AudioSourceExtension_t3064908834 * L_36 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		AudioExtensionManager_RemoveExtensionFromManager_m442924172(NULL /*static, unused*/, L_36, /*hidden argument*/NULL);
		goto IL_0141;
	}

IL_010f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		int32_t L_37 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_NextStopIndex_4();
		((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->set_m_NextStopIndex_4(((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1)));
		int32_t L_38 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_NextStopIndex_4();
		List_1_t242016280 * L_39 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_SourceExtensionsToUpdate_3();
		NullCheck(L_39);
		int32_t L_40 = List_1_get_Count_m3844406869(L_39, /*hidden argument*/List_1_get_Count_m3844406869_RuntimeMethod_var);
		if ((((int32_t)L_38) < ((int32_t)L_40)))
		{
			goto IL_0136;
		}
	}
	{
		G_B21_0 = 0;
		goto IL_013b;
	}

IL_0136:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		int32_t L_41 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_NextStopIndex_4();
		G_B21_0 = L_41;
	}

IL_013b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->set_m_NextStopIndex_4(G_B21_0);
	}

IL_0141:
	{
		int32_t L_42 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
	}

IL_0148:
	{
		int32_t L_43 = V_4;
		int32_t L_44 = V_3;
		if ((((int32_t)L_43) < ((int32_t)L_44)))
		{
			goto IL_00b4;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.AudioExtensionManager::GetReadyToPlay(UnityEngine.AudioSourceExtension)
extern "C" IL2CPP_METHOD_ATTR void AudioExtensionManager_GetReadyToPlay_m1557263244 (RuntimeObject * __this /* static, unused */, AudioSourceExtension_t3064908834 * ___extension0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioExtensionManager_GetReadyToPlay_m1557263244_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AudioSourceExtension_t3064908834 * L_0 = ___extension0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		AudioSourceExtension_t3064908834 * L_2 = ___extension0;
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.AudioSourceExtension::Play() */, L_2);
		AudioSourceExtension_t3064908834 * L_3 = ___extension0;
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		AudioExtensionManager_AddExtensionToManager_m3475649283(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void UnityEngine.AudioExtensionManager::RegisterBuiltinDefinitions()
extern "C" IL2CPP_METHOD_ATTR void AudioExtensionManager_RegisterBuiltinDefinitions_m2742744104 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioExtensionManager_RegisterBuiltinDefinitions_m2742744104_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		V_0 = (bool)0;
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		bool L_0 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_BuiltinDefinitionsRegistered_5();
		if (L_0)
		{
			goto IL_004d;
		}
	}
	{
		bool L_1 = V_0;
		if (L_1)
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_2 = AudioSettings_GetSpatializerPluginName_m1324100978(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m920492651(NULL /*static, unused*/, L_2, _stringLiteral4035105846, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}

IL_0028:
	{
	}

IL_002a:
	{
		bool L_4 = V_0;
		if (L_4)
		{
			goto IL_0044;
		}
	}
	{
		String_t* L_5 = AudioSettings_GetAmbisonicDecoderPluginName_m19603540(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Equality_m920492651(NULL /*static, unused*/, L_5, _stringLiteral4035105846, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0046;
		}
	}

IL_0044:
	{
	}

IL_0046:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->set_m_BuiltinDefinitionsRegistered_5((bool)1);
	}

IL_004d:
	{
		return;
	}
}
// System.Void UnityEngine.AudioExtensionManager::.cctor()
extern "C" IL2CPP_METHOD_ATTR void AudioExtensionManager__cctor_m1361600190 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioExtensionManager__cctor_m1361600190_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t2069970928 * L_0 = (List_1_t2069970928 *)il2cpp_codegen_object_new(List_1_t2069970928_il2cpp_TypeInfo_var);
		List_1__ctor_m3866378638(L_0, /*hidden argument*/List_1__ctor_m3866378638_RuntimeMethod_var);
		((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->set_m_ListenerSpatializerExtensionDefinitions_0(L_0);
		List_1_t2069970928 * L_1 = (List_1_t2069970928 *)il2cpp_codegen_object_new(List_1_t2069970928_il2cpp_TypeInfo_var);
		List_1__ctor_m3866378638(L_1, /*hidden argument*/List_1__ctor_m3866378638_RuntimeMethod_var);
		((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->set_m_SourceSpatializerExtensionDefinitions_1(L_1);
		List_1_t1295534336 * L_2 = (List_1_t1295534336 *)il2cpp_codegen_object_new(List_1_t1295534336_il2cpp_TypeInfo_var);
		List_1__ctor_m4205755667(L_2, /*hidden argument*/List_1__ctor_m4205755667_RuntimeMethod_var);
		((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->set_m_SourceAmbisonicDecoderExtensionDefinitions_2(L_2);
		List_1_t242016280 * L_3 = (List_1_t242016280 *)il2cpp_codegen_object_new(List_1_t242016280_il2cpp_TypeInfo_var);
		List_1__ctor_m69557434(L_3, /*hidden argument*/List_1__ctor_m69557434_RuntimeMethod_var);
		((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->set_m_SourceExtensionsToUpdate_3(L_3);
		((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->set_m_NextStopIndex_4(0);
		((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->set_m_BuiltinDefinitionsRegistered_5((bool)0);
		PropertyName_t3749835189  L_4 = PropertyName_op_Implicit_m114733813(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->set_m_SpatializerName_6(L_4);
		PropertyName_t3749835189  L_5 = PropertyName_op_Implicit_m114733813(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->set_m_SpatializerExtensionName_7(L_5);
		PropertyName_t3749835189  L_6 = PropertyName_op_Implicit_m114733813(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->set_m_ListenerSpatializerExtensionName_8(L_6);
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
// System.Int32 UnityEngine.AudioListener::GetNumExtensionProperties()
extern "C" IL2CPP_METHOD_ATTR int32_t AudioListener_GetNumExtensionProperties_m3139224773 (AudioListener_t2734094699 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*AudioListener_GetNumExtensionProperties_m3139224773_ftn) (AudioListener_t2734094699 *);
	static AudioListener_GetNumExtensionProperties_m3139224773_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioListener_GetNumExtensionProperties_m3139224773_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioListener::GetNumExtensionProperties()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.PropertyName UnityEngine.AudioListener::ReadExtensionName(System.Int32)
extern "C" IL2CPP_METHOD_ATTR PropertyName_t3749835189  AudioListener_ReadExtensionName_m929423100 (AudioListener_t2734094699 * __this, int32_t ___listenerIndex0, const RuntimeMethod* method)
{
	PropertyName_t3749835189  V_0;
	memset(&V_0, 0, sizeof(V_0));
	PropertyName_t3749835189  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		int32_t L_0 = ___listenerIndex0;
		AudioListener_INTERNAL_CALL_ReadExtensionName_m4145804327(NULL /*static, unused*/, __this, L_0, (&V_0), /*hidden argument*/NULL);
		PropertyName_t3749835189  L_1 = V_0;
		V_1 = L_1;
		goto IL_0011;
	}

IL_0011:
	{
		PropertyName_t3749835189  L_2 = V_1;
		return L_2;
	}
}
// System.Void UnityEngine.AudioListener::INTERNAL_CALL_ReadExtensionName(UnityEngine.AudioListener,System.Int32,UnityEngine.PropertyName&)
extern "C" IL2CPP_METHOD_ATTR void AudioListener_INTERNAL_CALL_ReadExtensionName_m4145804327 (RuntimeObject * __this /* static, unused */, AudioListener_t2734094699 * ___self0, int32_t ___listenerIndex1, PropertyName_t3749835189 * ___value2, const RuntimeMethod* method)
{
	typedef void (*AudioListener_INTERNAL_CALL_ReadExtensionName_m4145804327_ftn) (AudioListener_t2734094699 *, int32_t, PropertyName_t3749835189 *);
	static AudioListener_INTERNAL_CALL_ReadExtensionName_m4145804327_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioListener_INTERNAL_CALL_ReadExtensionName_m4145804327_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioListener::INTERNAL_CALL_ReadExtensionName(UnityEngine.AudioListener,System.Int32,UnityEngine.PropertyName&)");
	_il2cpp_icall_func(___self0, ___listenerIndex1, ___value2);
}
// UnityEngine.PropertyName UnityEngine.AudioListener::ReadExtensionPropertyName(System.Int32)
extern "C" IL2CPP_METHOD_ATTR PropertyName_t3749835189  AudioListener_ReadExtensionPropertyName_m3416271339 (AudioListener_t2734094699 * __this, int32_t ___listenerIndex0, const RuntimeMethod* method)
{
	PropertyName_t3749835189  V_0;
	memset(&V_0, 0, sizeof(V_0));
	PropertyName_t3749835189  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		int32_t L_0 = ___listenerIndex0;
		AudioListener_INTERNAL_CALL_ReadExtensionPropertyName_m330480156(NULL /*static, unused*/, __this, L_0, (&V_0), /*hidden argument*/NULL);
		PropertyName_t3749835189  L_1 = V_0;
		V_1 = L_1;
		goto IL_0011;
	}

IL_0011:
	{
		PropertyName_t3749835189  L_2 = V_1;
		return L_2;
	}
}
// System.Void UnityEngine.AudioListener::INTERNAL_CALL_ReadExtensionPropertyName(UnityEngine.AudioListener,System.Int32,UnityEngine.PropertyName&)
extern "C" IL2CPP_METHOD_ATTR void AudioListener_INTERNAL_CALL_ReadExtensionPropertyName_m330480156 (RuntimeObject * __this /* static, unused */, AudioListener_t2734094699 * ___self0, int32_t ___listenerIndex1, PropertyName_t3749835189 * ___value2, const RuntimeMethod* method)
{
	typedef void (*AudioListener_INTERNAL_CALL_ReadExtensionPropertyName_m330480156_ftn) (AudioListener_t2734094699 *, int32_t, PropertyName_t3749835189 *);
	static AudioListener_INTERNAL_CALL_ReadExtensionPropertyName_m330480156_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioListener_INTERNAL_CALL_ReadExtensionPropertyName_m330480156_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioListener::INTERNAL_CALL_ReadExtensionPropertyName(UnityEngine.AudioListener,System.Int32,UnityEngine.PropertyName&)");
	_il2cpp_icall_func(___self0, ___listenerIndex1, ___value2);
}
// System.Single UnityEngine.AudioListener::ReadExtensionPropertyValue(System.Int32)
extern "C" IL2CPP_METHOD_ATTR float AudioListener_ReadExtensionPropertyValue_m2443832840 (AudioListener_t2734094699 * __this, int32_t ___listenerIndex0, const RuntimeMethod* method)
{
	typedef float (*AudioListener_ReadExtensionPropertyValue_m2443832840_ftn) (AudioListener_t2734094699 *, int32_t);
	static AudioListener_ReadExtensionPropertyValue_m2443832840_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioListener_ReadExtensionPropertyValue_m2443832840_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioListener::ReadExtensionPropertyValue(System.Int32)");
	float retVal = _il2cpp_icall_func(__this, ___listenerIndex0);
	return retVal;
}
// System.Void UnityEngine.AudioListener::ClearExtensionProperties(UnityEngine.PropertyName)
extern "C" IL2CPP_METHOD_ATTR void AudioListener_ClearExtensionProperties_m3849891634 (AudioListener_t2734094699 * __this, PropertyName_t3749835189  ___extensionName0, const RuntimeMethod* method)
{
	{
		AudioListener_INTERNAL_CALL_ClearExtensionProperties_m2036387607(NULL /*static, unused*/, __this, (&___extensionName0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AudioListener::INTERNAL_CALL_ClearExtensionProperties(UnityEngine.AudioListener,UnityEngine.PropertyName&)
extern "C" IL2CPP_METHOD_ATTR void AudioListener_INTERNAL_CALL_ClearExtensionProperties_m2036387607 (RuntimeObject * __this /* static, unused */, AudioListener_t2734094699 * ___self0, PropertyName_t3749835189 * ___extensionName1, const RuntimeMethod* method)
{
	typedef void (*AudioListener_INTERNAL_CALL_ClearExtensionProperties_m2036387607_ftn) (AudioListener_t2734094699 *, PropertyName_t3749835189 *);
	static AudioListener_INTERNAL_CALL_ClearExtensionProperties_m2036387607_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioListener_INTERNAL_CALL_ClearExtensionProperties_m2036387607_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioListener::INTERNAL_CALL_ClearExtensionProperties(UnityEngine.AudioListener,UnityEngine.PropertyName&)");
	_il2cpp_icall_func(___self0, ___extensionName1);
}
// UnityEngine.AudioListenerExtension UnityEngine.AudioListener::AddExtension(System.Type)
extern "C" IL2CPP_METHOD_ATTR AudioListenerExtension_t3242956547 * AudioListener_AddExtension_m994751216 (AudioListener_t2734094699 * __this, Type_t * ___extensionType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioListener_AddExtension_m994751216_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AudioListenerExtension_t3242956547 * V_0 = NULL;
	{
		AudioListenerExtension_t3242956547 * L_0 = __this->get_spatializerExtension_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		Type_t * L_2 = ___extensionType0;
		ScriptableObject_t2528358522 * L_3 = ScriptableObject_CreateInstance_m2611081756(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		__this->set_spatializerExtension_2(((AudioListenerExtension_t3242956547 *)IsInstClass((RuntimeObject*)L_3, AudioListenerExtension_t3242956547_il2cpp_TypeInfo_var)));
	}

IL_0025:
	{
		AudioListenerExtension_t3242956547 * L_4 = __this->get_spatializerExtension_2();
		V_0 = L_4;
		goto IL_0031;
	}

IL_0031:
	{
		AudioListenerExtension_t3242956547 * L_5 = V_0;
		return L_5;
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
// UnityEngine.AudioListener UnityEngine.AudioListenerExtension::get_audioListener()
extern "C" IL2CPP_METHOD_ATTR AudioListener_t2734094699 * AudioListenerExtension_get_audioListener_m3597041395 (AudioListenerExtension_t3242956547 * __this, const RuntimeMethod* method)
{
	AudioListener_t2734094699 * V_0 = NULL;
	{
		AudioListener_t2734094699 * L_0 = __this->get_m_audioListener_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		AudioListener_t2734094699 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.AudioListenerExtension::set_audioListener(UnityEngine.AudioListener)
extern "C" IL2CPP_METHOD_ATTR void AudioListenerExtension_set_audioListener_m3412289012 (AudioListenerExtension_t3242956547 * __this, AudioListener_t2734094699 * ___value0, const RuntimeMethod* method)
{
	{
		AudioListener_t2734094699 * L_0 = ___value0;
		__this->set_m_audioListener_2(L_0);
		return;
	}
}
// System.Void UnityEngine.AudioListenerExtension::WriteExtensionProperty(UnityEngine.PropertyName,System.Single)
extern "C" IL2CPP_METHOD_ATTR void AudioListenerExtension_WriteExtensionProperty_m4064727398 (AudioListenerExtension_t3242956547 * __this, PropertyName_t3749835189  ___propertyName0, float ___propertyValue1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.AudioListenerExtension::ExtensionUpdate()
extern "C" IL2CPP_METHOD_ATTR void AudioListenerExtension_ExtensionUpdate_m1303405084 (AudioListenerExtension_t3242956547 * __this, const RuntimeMethod* method)
{
	{
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
// System.String UnityEngine.AudioSettings::GetSpatializerPluginName()
extern "C" IL2CPP_METHOD_ATTR String_t* AudioSettings_GetSpatializerPluginName_m1324100978 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef String_t* (*AudioSettings_GetSpatializerPluginName_m1324100978_ftn) ();
	static AudioSettings_GetSpatializerPluginName_m1324100978_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSettings_GetSpatializerPluginName_m1324100978_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSettings::GetSpatializerPluginName()");
	String_t* retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Void UnityEngine.AudioSettings::InvokeOnAudioConfigurationChanged(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void AudioSettings_InvokeOnAudioConfigurationChanged_m3131294153 (RuntimeObject * __this /* static, unused */, bool ___deviceWasChanged0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioSettings_InvokeOnAudioConfigurationChanged_m3131294153_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AudioConfigurationChangeHandler_t2089929874 * L_0 = ((AudioSettings_t3587374600_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_t3587374600_il2cpp_TypeInfo_var))->get_OnAudioConfigurationChanged_0();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		AudioConfigurationChangeHandler_t2089929874 * L_1 = ((AudioSettings_t3587374600_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_t3587374600_il2cpp_TypeInfo_var))->get_OnAudioConfigurationChanged_0();
		bool L_2 = ___deviceWasChanged0;
		NullCheck(L_1);
		AudioConfigurationChangeHandler_Invoke_m1233557945(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void UnityEngine.AudioSettings::InvokeOnAudioManagerUpdate()
extern "C" IL2CPP_METHOD_ATTR void AudioSettings_InvokeOnAudioManagerUpdate_m4044425648 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioSettings_InvokeOnAudioManagerUpdate_m4044425648_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		AudioExtensionManager_Update_m3269307447(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AudioSettings::InvokeOnAudioSourcePlay(UnityEngine.AudioSource)
extern "C" IL2CPP_METHOD_ATTR void AudioSettings_InvokeOnAudioSourcePlay_m3298744573 (RuntimeObject * __this /* static, unused */, AudioSource_t3935305588 * ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioSettings_InvokeOnAudioSourcePlay_m3298744573_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AudioSourceExtension_t3064908834 * V_0 = NULL;
	AudioSourceExtension_t3064908834 * V_1 = NULL;
	{
		AudioSource_t3935305588 * L_0 = ___source0;
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		AudioSourceExtension_t3064908834 * L_1 = AudioExtensionManager_AddSpatializerExtension_m820561940(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		AudioSourceExtension_t3064908834 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		AudioSourceExtension_t3064908834 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		AudioExtensionManager_GetReadyToPlay_m1557263244(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_001a:
	{
		AudioSource_t3935305588 * L_5 = ___source0;
		NullCheck(L_5);
		AudioClip_t3680889665 * L_6 = AudioSource_get_clip_m1234340632(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_6, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0056;
		}
	}
	{
		AudioSource_t3935305588 * L_8 = ___source0;
		NullCheck(L_8);
		AudioClip_t3680889665 * L_9 = AudioSource_get_clip_m1234340632(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		bool L_10 = AudioClip_get_ambisonic_m3815052287(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0056;
		}
	}
	{
		AudioSource_t3935305588 * L_11 = ___source0;
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		AudioSourceExtension_t3064908834 * L_12 = AudioExtensionManager_AddAmbisonicDecoderExtension_m3197702864(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		AudioSourceExtension_t3064908834 * L_13 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_14 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_13, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0055;
		}
	}
	{
		AudioSourceExtension_t3064908834 * L_15 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		AudioExtensionManager_GetReadyToPlay_m1557263244(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
	}

IL_0055:
	{
	}

IL_0056:
	{
		return;
	}
}
// System.String UnityEngine.AudioSettings::GetAmbisonicDecoderPluginName()
extern "C" IL2CPP_METHOD_ATTR String_t* AudioSettings_GetAmbisonicDecoderPluginName_m19603540 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef String_t* (*AudioSettings_GetAmbisonicDecoderPluginName_m19603540_ftn) ();
	static AudioSettings_GetAmbisonicDecoderPluginName_m19603540_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSettings_GetAmbisonicDecoderPluginName_m19603540_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSettings::GetAmbisonicDecoderPluginName()");
	String_t* retVal = _il2cpp_icall_func();
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
extern "C"  void DelegatePInvokeWrapper_AudioConfigurationChangeHandler_t2089929874 (AudioConfigurationChangeHandler_t2089929874 * __this, bool ___deviceWasChanged0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(static_cast<int32_t>(___deviceWasChanged0));

}
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void AudioConfigurationChangeHandler__ctor_m1059338375 (AudioConfigurationChangeHandler_t2089929874 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void AudioConfigurationChangeHandler_Invoke_m1233557945 (AudioConfigurationChangeHandler_t2089929874 * __this, bool ___deviceWasChanged0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		AudioConfigurationChangeHandler_Invoke_m1233557945((AudioConfigurationChangeHandler_t2089929874 *)__this->get_prev_9(), ___deviceWasChanged0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___deviceWasChanged0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___deviceWasChanged0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___deviceWasChanged0);
					else
						GenericVirtActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___deviceWasChanged0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___deviceWasChanged0);
					else
						VirtActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___deviceWasChanged0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___deviceWasChanged0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.AudioSettings/AudioConfigurationChangeHandler::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* AudioConfigurationChangeHandler_BeginInvoke_m4104069447 (AudioConfigurationChangeHandler_t2089929874 * __this, bool ___deviceWasChanged0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioConfigurationChangeHandler_BeginInvoke_m4104069447_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &___deviceWasChanged0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void AudioConfigurationChangeHandler_EndInvoke_m4175380841 (AudioConfigurationChangeHandler_t2089929874 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.AudioSource::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AudioSource__ctor_m2579369767 (AudioSource_t3935305588 * __this, const RuntimeMethod* method)
{
	{
		__this->set_spatializerExtension_2((AudioSourceExtension_t3064908834 *)NULL);
		__this->set_ambisonicExtension_3((AudioSourceExtension_t3064908834 *)NULL);
		Behaviour__ctor_m346897018(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single UnityEngine.AudioSource::get_volume()
extern "C" IL2CPP_METHOD_ATTR float AudioSource_get_volume_m3936891178 (AudioSource_t3935305588 * __this, const RuntimeMethod* method)
{
	typedef float (*AudioSource_get_volume_m3936891178_ftn) (AudioSource_t3935305588 *);
	static AudioSource_get_volume_m3936891178_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_volume_m3936891178_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_volume()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_set_volume_m1273312851 (AudioSource_t3935305588 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_volume_m1273312851_ftn) (AudioSource_t3935305588 *, float);
	static AudioSource_set_volume_m1273312851_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_volume_m1273312851_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_volume(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.AudioSource::get_pitch()
extern "C" IL2CPP_METHOD_ATTR float AudioSource_get_pitch_m2141937929 (AudioSource_t3935305588 * __this, const RuntimeMethod* method)
{
	typedef float (*AudioSource_get_pitch_m2141937929_ftn) (AudioSource_t3935305588 *);
	static AudioSource_get_pitch_m2141937929_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_pitch_m2141937929_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_pitch()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AudioSource::set_pitch(System.Single)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_set_pitch_m2413801168 (AudioSource_t3935305588 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_pitch_m2413801168_ftn) (AudioSource_t3935305588 *, float);
	static AudioSource_set_pitch_m2413801168_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_pitch_m2413801168_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_pitch(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.AudioSource::get_time()
extern "C" IL2CPP_METHOD_ATTR float AudioSource_get_time_m2174765632 (AudioSource_t3935305588 * __this, const RuntimeMethod* method)
{
	typedef float (*AudioSource_get_time_m2174765632_ftn) (AudioSource_t3935305588 *);
	static AudioSource_get_time_m2174765632_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_time_m2174765632_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_time()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AudioSource::set_time(System.Single)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_set_time_m3951137143 (AudioSource_t3935305588 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_time_m3951137143_ftn) (AudioSource_t3935305588 *, float);
	static AudioSource_set_time_m3951137143_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_time_m3951137143_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_time(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Int32 UnityEngine.AudioSource::get_timeSamples()
extern "C" IL2CPP_METHOD_ATTR int32_t AudioSource_get_timeSamples_m3096573545 (AudioSource_t3935305588 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*AudioSource_get_timeSamples_m3096573545_ftn) (AudioSource_t3935305588 *);
	static AudioSource_get_timeSamples_m3096573545_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_timeSamples_m3096573545_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_timeSamples()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AudioSource::set_timeSamples(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_set_timeSamples_m1960156111 (AudioSource_t3935305588 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_timeSamples_m1960156111_ftn) (AudioSource_t3935305588 *, int32_t);
	static AudioSource_set_timeSamples_m1960156111_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_timeSamples_m1960156111_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_timeSamples(System.Int32)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.AudioClip UnityEngine.AudioSource::get_clip()
extern "C" IL2CPP_METHOD_ATTR AudioClip_t3680889665 * AudioSource_get_clip_m1234340632 (AudioSource_t3935305588 * __this, const RuntimeMethod* method)
{
	typedef AudioClip_t3680889665 * (*AudioSource_get_clip_m1234340632_ftn) (AudioSource_t3935305588 *);
	static AudioSource_get_clip_m1234340632_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_clip_m1234340632_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_clip()");
	AudioClip_t3680889665 * retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_set_clip_m31653938 (AudioSource_t3935305588 * __this, AudioClip_t3680889665 * ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_clip_m31653938_ftn) (AudioSource_t3935305588 *, AudioClip_t3680889665 *);
	static AudioSource_set_clip_m31653938_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_clip_m31653938_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Audio.AudioMixerGroup UnityEngine.AudioSource::get_outputAudioMixerGroup()
extern "C" IL2CPP_METHOD_ATTR AudioMixerGroup_t2743564464 * AudioSource_get_outputAudioMixerGroup_m2841319567 (AudioSource_t3935305588 * __this, const RuntimeMethod* method)
{
	typedef AudioMixerGroup_t2743564464 * (*AudioSource_get_outputAudioMixerGroup_m2841319567_ftn) (AudioSource_t3935305588 *);
	static AudioSource_get_outputAudioMixerGroup_m2841319567_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_outputAudioMixerGroup_m2841319567_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_outputAudioMixerGroup()");
	AudioMixerGroup_t2743564464 * retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AudioSource::set_outputAudioMixerGroup(UnityEngine.Audio.AudioMixerGroup)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_set_outputAudioMixerGroup_m2868245337 (AudioSource_t3935305588 * __this, AudioMixerGroup_t2743564464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_outputAudioMixerGroup_m2868245337_ftn) (AudioSource_t3935305588 *, AudioMixerGroup_t2743564464 *);
	static AudioSource_set_outputAudioMixerGroup_m2868245337_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_outputAudioMixerGroup_m2868245337_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_outputAudioMixerGroup(UnityEngine.Audio.AudioMixerGroup)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.AudioSource::Play(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_Play_m3389845180 (AudioSource_t3935305588 * __this, uint64_t ___delay0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_Play_m3389845180_ftn) (AudioSource_t3935305588 *, uint64_t);
	static AudioSource_Play_m3389845180_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_Play_m3389845180_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::Play(System.UInt64)");
	_il2cpp_icall_func(__this, ___delay0);
}
// System.Void UnityEngine.AudioSource::Play()
extern "C" IL2CPP_METHOD_ATTR void AudioSource_Play_m48294159 (AudioSource_t3935305588 * __this, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	{
		V_0 = (((int64_t)((int64_t)0)));
		uint64_t L_0 = V_0;
		AudioSource_Play_m3389845180(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AudioSource::PlayDelayed(System.Single)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_PlayDelayed_m2926754961 (AudioSource_t3935305588 * __this, float ___delay0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_PlayDelayed_m2926754961_ftn) (AudioSource_t3935305588 *, float);
	static AudioSource_PlayDelayed_m2926754961_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_PlayDelayed_m2926754961_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::PlayDelayed(System.Single)");
	_il2cpp_icall_func(__this, ___delay0);
}
// System.Void UnityEngine.AudioSource::PlayScheduled(System.Double)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_PlayScheduled_m658735874 (AudioSource_t3935305588 * __this, double ___time0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_PlayScheduled_m658735874_ftn) (AudioSource_t3935305588 *, double);
	static AudioSource_PlayScheduled_m658735874_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_PlayScheduled_m658735874_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::PlayScheduled(System.Double)");
	_il2cpp_icall_func(__this, ___time0);
}
// System.Void UnityEngine.AudioSource::SetScheduledStartTime(System.Double)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_SetScheduledStartTime_m3685718194 (AudioSource_t3935305588 * __this, double ___time0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_SetScheduledStartTime_m3685718194_ftn) (AudioSource_t3935305588 *, double);
	static AudioSource_SetScheduledStartTime_m3685718194_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_SetScheduledStartTime_m3685718194_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::SetScheduledStartTime(System.Double)");
	_il2cpp_icall_func(__this, ___time0);
}
// System.Void UnityEngine.AudioSource::SetScheduledEndTime(System.Double)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_SetScheduledEndTime_m1205211509 (AudioSource_t3935305588 * __this, double ___time0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_SetScheduledEndTime_m1205211509_ftn) (AudioSource_t3935305588 *, double);
	static AudioSource_SetScheduledEndTime_m1205211509_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_SetScheduledEndTime_m1205211509_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::SetScheduledEndTime(System.Double)");
	_il2cpp_icall_func(__this, ___time0);
}
// System.Void UnityEngine.AudioSource::Stop()
extern "C" IL2CPP_METHOD_ATTR void AudioSource_Stop_m2682712816 (AudioSource_t3935305588 * __this, const RuntimeMethod* method)
{
	typedef void (*AudioSource_Stop_m2682712816_ftn) (AudioSource_t3935305588 *);
	static AudioSource_Stop_m2682712816_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_Stop_m2682712816_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::Stop()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AudioSource::Pause()
extern "C" IL2CPP_METHOD_ATTR void AudioSource_Pause_m1501822765 (AudioSource_t3935305588 * __this, const RuntimeMethod* method)
{
	{
		AudioSource_INTERNAL_CALL_Pause_m1443225006(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AudioSource::INTERNAL_CALL_Pause(UnityEngine.AudioSource)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_INTERNAL_CALL_Pause_m1443225006 (RuntimeObject * __this /* static, unused */, AudioSource_t3935305588 * ___self0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_INTERNAL_CALL_Pause_m1443225006_ftn) (AudioSource_t3935305588 *);
	static AudioSource_INTERNAL_CALL_Pause_m1443225006_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_INTERNAL_CALL_Pause_m1443225006_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::INTERNAL_CALL_Pause(UnityEngine.AudioSource)");
	_il2cpp_icall_func(___self0);
}
// System.Void UnityEngine.AudioSource::UnPause()
extern "C" IL2CPP_METHOD_ATTR void AudioSource_UnPause_m3033034686 (AudioSource_t3935305588 * __this, const RuntimeMethod* method)
{
	{
		AudioSource_INTERNAL_CALL_UnPause_m2866508363(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AudioSource::INTERNAL_CALL_UnPause(UnityEngine.AudioSource)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_INTERNAL_CALL_UnPause_m2866508363 (RuntimeObject * __this /* static, unused */, AudioSource_t3935305588 * ___self0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_INTERNAL_CALL_UnPause_m2866508363_ftn) (AudioSource_t3935305588 *);
	static AudioSource_INTERNAL_CALL_UnPause_m2866508363_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_INTERNAL_CALL_UnPause_m2866508363_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::INTERNAL_CALL_UnPause(UnityEngine.AudioSource)");
	_il2cpp_icall_func(___self0);
}
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
extern "C" IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_m1896551654 (AudioSource_t3935305588 * __this, const RuntimeMethod* method)
{
	typedef bool (*AudioSource_get_isPlaying_m1896551654_ftn) (AudioSource_t3935305588 *);
	static AudioSource_get_isPlaying_m1896551654_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_isPlaying_m1896551654_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_isPlaying()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.AudioSource::get_isVirtual()
extern "C" IL2CPP_METHOD_ATTR bool AudioSource_get_isVirtual_m256264398 (AudioSource_t3935305588 * __this, const RuntimeMethod* method)
{
	typedef bool (*AudioSource_get_isVirtual_m256264398_ftn) (AudioSource_t3935305588 *);
	static AudioSource_get_isVirtual_m256264398_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_isVirtual_m256264398_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_isVirtual()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_m1688286683 (AudioSource_t3935305588 * __this, AudioClip_t3680889665 * ___clip0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (1.0f);
		AudioClip_t3680889665 * L_0 = ___clip0;
		float L_1 = V_0;
		AudioSource_PlayOneShot_m2678069419(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_m2678069419 (AudioSource_t3935305588 * __this, AudioClip_t3680889665 * ___clip0, float ___volumeScale1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioSource_PlayOneShot_m2678069419_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AudioSourceExtension_t3064908834 * V_0 = NULL;
	{
		AudioClip_t3680889665 * L_0 = ___clip0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		AudioClip_t3680889665 * L_2 = ___clip0;
		NullCheck(L_2);
		bool L_3 = AudioClip_get_ambisonic_m3815052287(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		AudioSourceExtension_t3064908834 * L_4 = AudioExtensionManager_AddAmbisonicDecoderExtension_m3197702864(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		V_0 = L_4;
		AudioSourceExtension_t3064908834 * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_5, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0032;
		}
	}
	{
		AudioSourceExtension_t3064908834 * L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		AudioExtensionManager_GetReadyToPlay_m1557263244(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
	}

IL_0032:
	{
	}

IL_0033:
	{
		AudioClip_t3680889665 * L_8 = ___clip0;
		float L_9 = ___volumeScale1;
		AudioSource_PlayOneShotHelper_m544918725(__this, L_8, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AudioSource::PlayOneShotHelper(UnityEngine.AudioClip,System.Single)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_PlayOneShotHelper_m544918725 (AudioSource_t3935305588 * __this, AudioClip_t3680889665 * ___clip0, float ___volumeScale1, const RuntimeMethod* method)
{
	typedef void (*AudioSource_PlayOneShotHelper_m544918725_ftn) (AudioSource_t3935305588 *, AudioClip_t3680889665 *, float);
	static AudioSource_PlayOneShotHelper_m544918725_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_PlayOneShotHelper_m544918725_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::PlayOneShotHelper(UnityEngine.AudioClip,System.Single)");
	_il2cpp_icall_func(__this, ___clip0, ___volumeScale1);
}
// System.Void UnityEngine.AudioSource::PlayClipAtPoint(UnityEngine.AudioClip,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_PlayClipAtPoint_m3293894611 (RuntimeObject * __this /* static, unused */, AudioClip_t3680889665 * ___clip0, Vector3_t3722313464  ___position1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (1.0f);
		AudioClip_t3680889665 * L_0 = ___clip0;
		Vector3_t3722313464  L_1 = ___position1;
		float L_2 = V_0;
		AudioSource_PlayClipAtPoint_m3985620478(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AudioSource::PlayClipAtPoint(UnityEngine.AudioClip,UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_PlayClipAtPoint_m3985620478 (RuntimeObject * __this /* static, unused */, AudioClip_t3680889665 * ___clip0, Vector3_t3722313464  ___position1, float ___volume2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioSource_PlayClipAtPoint_m3985620478_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	AudioSource_t3935305588 * V_1 = NULL;
	float G_B2_0 = 0.0f;
	GameObject_t1113636619 * G_B2_1 = NULL;
	float G_B1_0 = 0.0f;
	GameObject_t1113636619 * G_B1_1 = NULL;
	float G_B3_0 = 0.0f;
	float G_B3_1 = 0.0f;
	GameObject_t1113636619 * G_B3_2 = NULL;
	{
		GameObject_t1113636619 * L_0 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m2093116449(L_0, _stringLiteral2997775034, /*hidden argument*/NULL);
		V_0 = L_0;
		GameObject_t1113636619 * L_1 = V_0;
		NullCheck(L_1);
		Transform_t3600365921 * L_2 = GameObject_get_transform_m1369836730(L_1, /*hidden argument*/NULL);
		Vector3_t3722313464  L_3 = ___position1;
		NullCheck(L_2);
		Transform_set_position_m3387557959(L_2, L_3, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_4 = V_0;
		RuntimeTypeHandle_t3027515415  L_5 = { reinterpret_cast<intptr_t> (AudioSource_t3935305588_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		Component_t1923634451 * L_7 = GameObject_AddComponent_m136524825(L_4, L_6, /*hidden argument*/NULL);
		V_1 = ((AudioSource_t3935305588 *)CastclassSealed((RuntimeObject*)L_7, AudioSource_t3935305588_il2cpp_TypeInfo_var));
		AudioSource_t3935305588 * L_8 = V_1;
		AudioClip_t3680889665 * L_9 = ___clip0;
		NullCheck(L_8);
		AudioSource_set_clip_m31653938(L_8, L_9, /*hidden argument*/NULL);
		AudioSource_t3935305588 * L_10 = V_1;
		NullCheck(L_10);
		AudioSource_set_spatialBlend_m3924907960(L_10, (1.0f), /*hidden argument*/NULL);
		AudioSource_t3935305588 * L_11 = V_1;
		float L_12 = ___volume2;
		NullCheck(L_11);
		AudioSource_set_volume_m1273312851(L_11, L_12, /*hidden argument*/NULL);
		AudioSource_t3935305588 * L_13 = V_1;
		NullCheck(L_13);
		AudioSource_Play_m48294159(L_13, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_14 = V_0;
		AudioClip_t3680889665 * L_15 = ___clip0;
		NullCheck(L_15);
		float L_16 = AudioClip_get_length_m4269890037(L_15, /*hidden argument*/NULL);
		float L_17 = Time_get_timeScale_m701790074(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B1_0 = L_16;
		G_B1_1 = L_14;
		if ((!(((float)L_17) < ((float)(0.01f)))))
		{
			G_B2_0 = L_16;
			G_B2_1 = L_14;
			goto IL_006d;
		}
	}
	{
		G_B3_0 = (0.01f);
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0072;
	}

IL_006d:
	{
		float L_18 = Time_get_timeScale_m701790074(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B3_0 = L_18;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m3118546832(NULL /*static, unused*/, G_B3_2, ((float)il2cpp_codegen_multiply((float)G_B3_1, (float)G_B3_0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.AudioSource::get_loop()
extern "C" IL2CPP_METHOD_ATTR bool AudioSource_get_loop_m2101945995 (AudioSource_t3935305588 * __this, const RuntimeMethod* method)
{
	typedef bool (*AudioSource_get_loop_m2101945995_ftn) (AudioSource_t3935305588 *);
	static AudioSource_get_loop_m2101945995_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_loop_m2101945995_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_loop()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AudioSource::set_loop(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_set_loop_m3659884460 (AudioSource_t3935305588 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_loop_m3659884460_ftn) (AudioSource_t3935305588 *, bool);
	static AudioSource_set_loop_m3659884460_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_loop_m3659884460_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_loop(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.AudioSource::get_ignoreListenerVolume()
extern "C" IL2CPP_METHOD_ATTR bool AudioSource_get_ignoreListenerVolume_m1083237185 (AudioSource_t3935305588 * __this, const RuntimeMethod* method)
{
	typedef bool (*AudioSource_get_ignoreListenerVolume_m1083237185_ftn) (AudioSource_t3935305588 *);
	static AudioSource_get_ignoreListenerVolume_m1083237185_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_ignoreListenerVolume_m1083237185_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_ignoreListenerVolume()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AudioSource::set_ignoreListenerVolume(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_set_ignoreListenerVolume_m3946147988 (AudioSource_t3935305588 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_ignoreListenerVolume_m3946147988_ftn) (AudioSource_t3935305588 *, bool);
	static AudioSource_set_ignoreListenerVolume_m3946147988_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_ignoreListenerVolume_m3946147988_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_ignoreListenerVolume(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.AudioSource::get_playOnAwake()
extern "C" IL2CPP_METHOD_ATTR bool AudioSource_get_playOnAwake_m1556402754 (AudioSource_t3935305588 * __this, const RuntimeMethod* method)
{
	typedef bool (*AudioSource_get_playOnAwake_m1556402754_ftn) (AudioSource_t3935305588 *);
	static AudioSource_get_playOnAwake_m1556402754_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_playOnAwake_m1556402754_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_playOnAwake()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AudioSource::set_playOnAwake(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_set_playOnAwake_m1824967994 (AudioSource_t3935305588 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_playOnAwake_m1824967994_ftn) (AudioSource_t3935305588 *, bool);
	static AudioSource_set_playOnAwake_m1824967994_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_playOnAwake_m1824967994_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_playOnAwake(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.AudioSource::get_ignoreListenerPause()
extern "C" IL2CPP_METHOD_ATTR bool AudioSource_get_ignoreListenerPause_m1001416469 (AudioSource_t3935305588 * __this, const RuntimeMethod* method)
{
	typedef bool (*AudioSource_get_ignoreListenerPause_m1001416469_ftn) (AudioSource_t3935305588 *);
	static AudioSource_get_ignoreListenerPause_m1001416469_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_ignoreListenerPause_m1001416469_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_ignoreListenerPause()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AudioSource::set_ignoreListenerPause(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_set_ignoreListenerPause_m4232481821 (AudioSource_t3935305588 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_ignoreListenerPause_m4232481821_ftn) (AudioSource_t3935305588 *, bool);
	static AudioSource_set_ignoreListenerPause_m4232481821_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_ignoreListenerPause_m4232481821_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_ignoreListenerPause(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.AudioVelocityUpdateMode UnityEngine.AudioSource::get_velocityUpdateMode()
extern "C" IL2CPP_METHOD_ATTR int32_t AudioSource_get_velocityUpdateMode_m2772780977 (AudioSource_t3935305588 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*AudioSource_get_velocityUpdateMode_m2772780977_ftn) (AudioSource_t3935305588 *);
	static AudioSource_get_velocityUpdateMode_m2772780977_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_velocityUpdateMode_m2772780977_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_velocityUpdateMode()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AudioSource::set_velocityUpdateMode(UnityEngine.AudioVelocityUpdateMode)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_set_velocityUpdateMode_m2368214947 (AudioSource_t3935305588 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_velocityUpdateMode_m2368214947_ftn) (AudioSource_t3935305588 *, int32_t);
	static AudioSource_set_velocityUpdateMode_m2368214947_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_velocityUpdateMode_m2368214947_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_velocityUpdateMode(UnityEngine.AudioVelocityUpdateMode)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.AudioSource::get_panStereo()
extern "C" IL2CPP_METHOD_ATTR float AudioSource_get_panStereo_m967884240 (AudioSource_t3935305588 * __this, const RuntimeMethod* method)
{
	typedef float (*AudioSource_get_panStereo_m967884240_ftn) (AudioSource_t3935305588 *);
	static AudioSource_get_panStereo_m967884240_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_panStereo_m967884240_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_panStereo()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AudioSource::set_panStereo(System.Single)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_set_panStereo_m3753894778 (AudioSource_t3935305588 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_panStereo_m3753894778_ftn) (AudioSource_t3935305588 *, float);
	static AudioSource_set_panStereo_m3753894778_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_panStereo_m3753894778_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_panStereo(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.AudioSource::get_spatialBlend()
extern "C" IL2CPP_METHOD_ATTR float AudioSource_get_spatialBlend_m3224874983 (AudioSource_t3935305588 * __this, const RuntimeMethod* method)
{
	typedef float (*AudioSource_get_spatialBlend_m3224874983_ftn) (AudioSource_t3935305588 *);
	static AudioSource_get_spatialBlend_m3224874983_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_spatialBlend_m3224874983_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_spatialBlend()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AudioSource::set_spatialBlend(System.Single)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_set_spatialBlend_m3924907960 (AudioSource_t3935305588 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_spatialBlend_m3924907960_ftn) (AudioSource_t3935305588 *, float);
	static AudioSource_set_spatialBlend_m3924907960_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_spatialBlend_m3924907960_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_spatialBlend(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.AudioSource::get_spatializeInternal()
extern "C" IL2CPP_METHOD_ATTR bool AudioSource_get_spatializeInternal_m2117549793 (AudioSource_t3935305588 * __this, const RuntimeMethod* method)
{
	typedef bool (*AudioSource_get_spatializeInternal_m2117549793_ftn) (AudioSource_t3935305588 *);
	static AudioSource_get_spatializeInternal_m2117549793_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_spatializeInternal_m2117549793_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_spatializeInternal()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AudioSource::set_spatializeInternal(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_set_spatializeInternal_m3645792852 (AudioSource_t3935305588 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_spatializeInternal_m3645792852_ftn) (AudioSource_t3935305588 *, bool);
	static AudioSource_set_spatializeInternal_m3645792852_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_spatializeInternal_m3645792852_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_spatializeInternal(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.AudioSource::get_spatialize()
extern "C" IL2CPP_METHOD_ATTR bool AudioSource_get_spatialize_m3609701298 (AudioSource_t3935305588 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = AudioSource_get_spatializeInternal_m2117549793(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.AudioSource::set_spatialize(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_set_spatialize_m92154612 (AudioSource_t3935305588 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioSource_set_spatialize_m92154612_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AudioSourceExtension_t3064908834 * V_0 = NULL;
	{
		bool L_0 = AudioSource_get_spatializeInternal_m2117549793(__this, /*hidden argument*/NULL);
		bool L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0042;
		}
	}
	{
		bool L_2 = ___value0;
		AudioSource_set_spatializeInternal_m3645792852(__this, L_2, /*hidden argument*/NULL);
		bool L_3 = ___value0;
		if (!L_3)
		{
			goto IL_0041;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		AudioSourceExtension_t3064908834 * L_4 = AudioExtensionManager_AddSpatializerExtension_m820561940(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		V_0 = L_4;
		AudioSourceExtension_t3064908834 * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_5, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		bool L_7 = AudioSource_get_isPlaying_m1896551654(__this, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0040;
		}
	}
	{
		AudioSourceExtension_t3064908834 * L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		AudioExtensionManager_GetReadyToPlay_m1557263244(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
	}

IL_0040:
	{
	}

IL_0041:
	{
	}

IL_0042:
	{
		return;
	}
}
// System.Boolean UnityEngine.AudioSource::get_spatializePostEffects()
extern "C" IL2CPP_METHOD_ATTR bool AudioSource_get_spatializePostEffects_m1775754340 (AudioSource_t3935305588 * __this, const RuntimeMethod* method)
{
	typedef bool (*AudioSource_get_spatializePostEffects_m1775754340_ftn) (AudioSource_t3935305588 *);
	static AudioSource_get_spatializePostEffects_m1775754340_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_spatializePostEffects_m1775754340_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_spatializePostEffects()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AudioSource::set_spatializePostEffects(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_set_spatializePostEffects_m2119014898 (AudioSource_t3935305588 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_spatializePostEffects_m2119014898_ftn) (AudioSource_t3935305588 *, bool);
	static AudioSource_set_spatializePostEffects_m2119014898_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_spatializePostEffects_m2119014898_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_spatializePostEffects(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.AudioSource::SetCustomCurve(UnityEngine.AudioSourceCurveType,UnityEngine.AnimationCurve)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_SetCustomCurve_m3523068452 (AudioSource_t3935305588 * __this, int32_t ___type0, AnimationCurve_t3046754366 * ___curve1, const RuntimeMethod* method)
{
	typedef void (*AudioSource_SetCustomCurve_m3523068452_ftn) (AudioSource_t3935305588 *, int32_t, AnimationCurve_t3046754366 *);
	static AudioSource_SetCustomCurve_m3523068452_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_SetCustomCurve_m3523068452_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::SetCustomCurve(UnityEngine.AudioSourceCurveType,UnityEngine.AnimationCurve)");
	_il2cpp_icall_func(__this, ___type0, ___curve1);
}
// UnityEngine.AnimationCurve UnityEngine.AudioSource::GetCustomCurve(UnityEngine.AudioSourceCurveType)
extern "C" IL2CPP_METHOD_ATTR AnimationCurve_t3046754366 * AudioSource_GetCustomCurve_m2879706917 (AudioSource_t3935305588 * __this, int32_t ___type0, const RuntimeMethod* method)
{
	typedef AnimationCurve_t3046754366 * (*AudioSource_GetCustomCurve_m2879706917_ftn) (AudioSource_t3935305588 *, int32_t);
	static AudioSource_GetCustomCurve_m2879706917_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_GetCustomCurve_m2879706917_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::GetCustomCurve(UnityEngine.AudioSourceCurveType)");
	AnimationCurve_t3046754366 * retVal = _il2cpp_icall_func(__this, ___type0);
	return retVal;
}
// System.Single UnityEngine.AudioSource::get_reverbZoneMix()
extern "C" IL2CPP_METHOD_ATTR float AudioSource_get_reverbZoneMix_m721877517 (AudioSource_t3935305588 * __this, const RuntimeMethod* method)
{
	typedef float (*AudioSource_get_reverbZoneMix_m721877517_ftn) (AudioSource_t3935305588 *);
	static AudioSource_get_reverbZoneMix_m721877517_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_reverbZoneMix_m721877517_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_reverbZoneMix()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AudioSource::set_reverbZoneMix(System.Single)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_set_reverbZoneMix_m838764864 (AudioSource_t3935305588 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_reverbZoneMix_m838764864_ftn) (AudioSource_t3935305588 *, float);
	static AudioSource_set_reverbZoneMix_m838764864_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_reverbZoneMix_m838764864_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_reverbZoneMix(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.AudioSource::get_bypassEffects()
extern "C" IL2CPP_METHOD_ATTR bool AudioSource_get_bypassEffects_m154605376 (AudioSource_t3935305588 * __this, const RuntimeMethod* method)
{
	typedef bool (*AudioSource_get_bypassEffects_m154605376_ftn) (AudioSource_t3935305588 *);
	static AudioSource_get_bypassEffects_m154605376_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_bypassEffects_m154605376_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_bypassEffects()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AudioSource::set_bypassEffects(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_set_bypassEffects_m3935048010 (AudioSource_t3935305588 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_bypassEffects_m3935048010_ftn) (AudioSource_t3935305588 *, bool);
	static AudioSource_set_bypassEffects_m3935048010_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_bypassEffects_m3935048010_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_bypassEffects(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.AudioSource::get_bypassListenerEffects()
extern "C" IL2CPP_METHOD_ATTR bool AudioSource_get_bypassListenerEffects_m3676788679 (AudioSource_t3935305588 * __this, const RuntimeMethod* method)
{
	typedef bool (*AudioSource_get_bypassListenerEffects_m3676788679_ftn) (AudioSource_t3935305588 *);
	static AudioSource_get_bypassListenerEffects_m3676788679_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_bypassListenerEffects_m3676788679_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_bypassListenerEffects()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AudioSource::set_bypassListenerEffects(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_set_bypassListenerEffects_m2967563268 (AudioSource_t3935305588 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_bypassListenerEffects_m2967563268_ftn) (AudioSource_t3935305588 *, bool);
	static AudioSource_set_bypassListenerEffects_m2967563268_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_bypassListenerEffects_m2967563268_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_bypassListenerEffects(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.AudioSource::get_bypassReverbZones()
extern "C" IL2CPP_METHOD_ATTR bool AudioSource_get_bypassReverbZones_m2610385039 (AudioSource_t3935305588 * __this, const RuntimeMethod* method)
{
	typedef bool (*AudioSource_get_bypassReverbZones_m2610385039_ftn) (AudioSource_t3935305588 *);
	static AudioSource_get_bypassReverbZones_m2610385039_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_bypassReverbZones_m2610385039_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_bypassReverbZones()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AudioSource::set_bypassReverbZones(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_set_bypassReverbZones_m1315285201 (AudioSource_t3935305588 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_bypassReverbZones_m1315285201_ftn) (AudioSource_t3935305588 *, bool);
	static AudioSource_set_bypassReverbZones_m1315285201_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_bypassReverbZones_m1315285201_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_bypassReverbZones(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.AudioSource::get_dopplerLevel()
extern "C" IL2CPP_METHOD_ATTR float AudioSource_get_dopplerLevel_m4143850759 (AudioSource_t3935305588 * __this, const RuntimeMethod* method)
{
	typedef float (*AudioSource_get_dopplerLevel_m4143850759_ftn) (AudioSource_t3935305588 *);
	static AudioSource_get_dopplerLevel_m4143850759_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_dopplerLevel_m4143850759_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_dopplerLevel()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AudioSource::set_dopplerLevel(System.Single)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_set_dopplerLevel_m2650955335 (AudioSource_t3935305588 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_dopplerLevel_m2650955335_ftn) (AudioSource_t3935305588 *, float);
	static AudioSource_set_dopplerLevel_m2650955335_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_dopplerLevel_m2650955335_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_dopplerLevel(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.AudioSource::get_spread()
extern "C" IL2CPP_METHOD_ATTR float AudioSource_get_spread_m3713127482 (AudioSource_t3935305588 * __this, const RuntimeMethod* method)
{
	typedef float (*AudioSource_get_spread_m3713127482_ftn) (AudioSource_t3935305588 *);
	static AudioSource_get_spread_m3713127482_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_spread_m3713127482_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_spread()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AudioSource::set_spread(System.Single)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_set_spread_m258715085 (AudioSource_t3935305588 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_spread_m258715085_ftn) (AudioSource_t3935305588 *, float);
	static AudioSource_set_spread_m258715085_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_spread_m258715085_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_spread(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Int32 UnityEngine.AudioSource::get_priority()
extern "C" IL2CPP_METHOD_ATTR int32_t AudioSource_get_priority_m4071455864 (AudioSource_t3935305588 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*AudioSource_get_priority_m4071455864_ftn) (AudioSource_t3935305588 *);
	static AudioSource_get_priority_m4071455864_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_priority_m4071455864_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_priority()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AudioSource::set_priority(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_set_priority_m864341317 (AudioSource_t3935305588 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_priority_m864341317_ftn) (AudioSource_t3935305588 *, int32_t);
	static AudioSource_set_priority_m864341317_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_priority_m864341317_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_priority(System.Int32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.AudioSource::get_mute()
extern "C" IL2CPP_METHOD_ATTR bool AudioSource_get_mute_m2424389661 (AudioSource_t3935305588 * __this, const RuntimeMethod* method)
{
	typedef bool (*AudioSource_get_mute_m2424389661_ftn) (AudioSource_t3935305588 *);
	static AudioSource_get_mute_m2424389661_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_mute_m2424389661_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_mute()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AudioSource::set_mute(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_set_mute_m3553377094 (AudioSource_t3935305588 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_mute_m3553377094_ftn) (AudioSource_t3935305588 *, bool);
	static AudioSource_set_mute_m3553377094_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_mute_m3553377094_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_mute(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.AudioSource::get_minDistance()
extern "C" IL2CPP_METHOD_ATTR float AudioSource_get_minDistance_m1653964451 (AudioSource_t3935305588 * __this, const RuntimeMethod* method)
{
	typedef float (*AudioSource_get_minDistance_m1653964451_ftn) (AudioSource_t3935305588 *);
	static AudioSource_get_minDistance_m1653964451_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_minDistance_m1653964451_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_minDistance()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AudioSource::set_minDistance(System.Single)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_set_minDistance_m937927510 (AudioSource_t3935305588 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_minDistance_m937927510_ftn) (AudioSource_t3935305588 *, float);
	static AudioSource_set_minDistance_m937927510_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_minDistance_m937927510_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_minDistance(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.AudioSource::get_maxDistance()
extern "C" IL2CPP_METHOD_ATTR float AudioSource_get_maxDistance_m680746140 (AudioSource_t3935305588 * __this, const RuntimeMethod* method)
{
	typedef float (*AudioSource_get_maxDistance_m680746140_ftn) (AudioSource_t3935305588 *);
	static AudioSource_get_maxDistance_m680746140_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_maxDistance_m680746140_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_maxDistance()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AudioSource::set_maxDistance(System.Single)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_set_maxDistance_m2665508952 (AudioSource_t3935305588 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_maxDistance_m2665508952_ftn) (AudioSource_t3935305588 *, float);
	static AudioSource_set_maxDistance_m2665508952_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_maxDistance_m2665508952_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_maxDistance(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.AudioRolloffMode UnityEngine.AudioSource::get_rolloffMode()
extern "C" IL2CPP_METHOD_ATTR int32_t AudioSource_get_rolloffMode_m473281811 (AudioSource_t3935305588 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*AudioSource_get_rolloffMode_m473281811_ftn) (AudioSource_t3935305588 *);
	static AudioSource_get_rolloffMode_m473281811_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_rolloffMode_m473281811_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_rolloffMode()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AudioSource::set_rolloffMode(UnityEngine.AudioRolloffMode)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_set_rolloffMode_m3247632880 (AudioSource_t3935305588 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_rolloffMode_m3247632880_ftn) (AudioSource_t3935305588 *, int32_t);
	static AudioSource_set_rolloffMode_m3247632880_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_rolloffMode_m3247632880_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_rolloffMode(UnityEngine.AudioRolloffMode)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.AudioSource::GetOutputDataHelper(System.Single[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_GetOutputDataHelper_m2348783779 (AudioSource_t3935305588 * __this, SingleU5BU5D_t1444911251* ___samples0, int32_t ___channel1, const RuntimeMethod* method)
{
	typedef void (*AudioSource_GetOutputDataHelper_m2348783779_ftn) (AudioSource_t3935305588 *, SingleU5BU5D_t1444911251*, int32_t);
	static AudioSource_GetOutputDataHelper_m2348783779_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_GetOutputDataHelper_m2348783779_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::GetOutputDataHelper(System.Single[],System.Int32)");
	_il2cpp_icall_func(__this, ___samples0, ___channel1);
}
// System.Void UnityEngine.AudioSource::GetOutputData(System.Single[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_GetOutputData_m1264018444 (AudioSource_t3935305588 * __this, SingleU5BU5D_t1444911251* ___samples0, int32_t ___channel1, const RuntimeMethod* method)
{
	{
		SingleU5BU5D_t1444911251* L_0 = ___samples0;
		int32_t L_1 = ___channel1;
		AudioSource_GetOutputDataHelper_m2348783779(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AudioSource::GetSpectrumDataHelper(System.Single[],System.Int32,UnityEngine.FFTWindow)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_GetSpectrumDataHelper_m1289556404 (AudioSource_t3935305588 * __this, SingleU5BU5D_t1444911251* ___samples0, int32_t ___channel1, int32_t ___window2, const RuntimeMethod* method)
{
	typedef void (*AudioSource_GetSpectrumDataHelper_m1289556404_ftn) (AudioSource_t3935305588 *, SingleU5BU5D_t1444911251*, int32_t, int32_t);
	static AudioSource_GetSpectrumDataHelper_m1289556404_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_GetSpectrumDataHelper_m1289556404_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::GetSpectrumDataHelper(System.Single[],System.Int32,UnityEngine.FFTWindow)");
	_il2cpp_icall_func(__this, ___samples0, ___channel1, ___window2);
}
// System.Void UnityEngine.AudioSource::GetSpectrumData(System.Single[],System.Int32,UnityEngine.FFTWindow)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_GetSpectrumData_m2058777190 (AudioSource_t3935305588 * __this, SingleU5BU5D_t1444911251* ___samples0, int32_t ___channel1, int32_t ___window2, const RuntimeMethod* method)
{
	{
		SingleU5BU5D_t1444911251* L_0 = ___samples0;
		int32_t L_1 = ___channel1;
		int32_t L_2 = ___window2;
		AudioSource_GetSpectrumDataHelper_m1289556404(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.AudioSource::GetNumExtensionProperties()
extern "C" IL2CPP_METHOD_ATTR int32_t AudioSource_GetNumExtensionProperties_m1231815209 (AudioSource_t3935305588 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*AudioSource_GetNumExtensionProperties_m1231815209_ftn) (AudioSource_t3935305588 *);
	static AudioSource_GetNumExtensionProperties_m1231815209_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_GetNumExtensionProperties_m1231815209_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::GetNumExtensionProperties()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.PropertyName UnityEngine.AudioSource::ReadExtensionName(System.Int32)
extern "C" IL2CPP_METHOD_ATTR PropertyName_t3749835189  AudioSource_ReadExtensionName_m725112169 (AudioSource_t3935305588 * __this, int32_t ___sourceIndex0, const RuntimeMethod* method)
{
	PropertyName_t3749835189  V_0;
	memset(&V_0, 0, sizeof(V_0));
	PropertyName_t3749835189  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		int32_t L_0 = ___sourceIndex0;
		AudioSource_INTERNAL_CALL_ReadExtensionName_m36001502(NULL /*static, unused*/, __this, L_0, (&V_0), /*hidden argument*/NULL);
		PropertyName_t3749835189  L_1 = V_0;
		V_1 = L_1;
		goto IL_0011;
	}

IL_0011:
	{
		PropertyName_t3749835189  L_2 = V_1;
		return L_2;
	}
}
// System.Void UnityEngine.AudioSource::INTERNAL_CALL_ReadExtensionName(UnityEngine.AudioSource,System.Int32,UnityEngine.PropertyName&)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_INTERNAL_CALL_ReadExtensionName_m36001502 (RuntimeObject * __this /* static, unused */, AudioSource_t3935305588 * ___self0, int32_t ___sourceIndex1, PropertyName_t3749835189 * ___value2, const RuntimeMethod* method)
{
	typedef void (*AudioSource_INTERNAL_CALL_ReadExtensionName_m36001502_ftn) (AudioSource_t3935305588 *, int32_t, PropertyName_t3749835189 *);
	static AudioSource_INTERNAL_CALL_ReadExtensionName_m36001502_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_INTERNAL_CALL_ReadExtensionName_m36001502_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::INTERNAL_CALL_ReadExtensionName(UnityEngine.AudioSource,System.Int32,UnityEngine.PropertyName&)");
	_il2cpp_icall_func(___self0, ___sourceIndex1, ___value2);
}
// UnityEngine.PropertyName UnityEngine.AudioSource::ReadExtensionPropertyName(System.Int32)
extern "C" IL2CPP_METHOD_ATTR PropertyName_t3749835189  AudioSource_ReadExtensionPropertyName_m2761820692 (AudioSource_t3935305588 * __this, int32_t ___sourceIndex0, const RuntimeMethod* method)
{
	PropertyName_t3749835189  V_0;
	memset(&V_0, 0, sizeof(V_0));
	PropertyName_t3749835189  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		int32_t L_0 = ___sourceIndex0;
		AudioSource_INTERNAL_CALL_ReadExtensionPropertyName_m3643462071(NULL /*static, unused*/, __this, L_0, (&V_0), /*hidden argument*/NULL);
		PropertyName_t3749835189  L_1 = V_0;
		V_1 = L_1;
		goto IL_0011;
	}

IL_0011:
	{
		PropertyName_t3749835189  L_2 = V_1;
		return L_2;
	}
}
// System.Void UnityEngine.AudioSource::INTERNAL_CALL_ReadExtensionPropertyName(UnityEngine.AudioSource,System.Int32,UnityEngine.PropertyName&)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_INTERNAL_CALL_ReadExtensionPropertyName_m3643462071 (RuntimeObject * __this /* static, unused */, AudioSource_t3935305588 * ___self0, int32_t ___sourceIndex1, PropertyName_t3749835189 * ___value2, const RuntimeMethod* method)
{
	typedef void (*AudioSource_INTERNAL_CALL_ReadExtensionPropertyName_m3643462071_ftn) (AudioSource_t3935305588 *, int32_t, PropertyName_t3749835189 *);
	static AudioSource_INTERNAL_CALL_ReadExtensionPropertyName_m3643462071_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_INTERNAL_CALL_ReadExtensionPropertyName_m3643462071_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::INTERNAL_CALL_ReadExtensionPropertyName(UnityEngine.AudioSource,System.Int32,UnityEngine.PropertyName&)");
	_il2cpp_icall_func(___self0, ___sourceIndex1, ___value2);
}
// System.Single UnityEngine.AudioSource::ReadExtensionPropertyValue(System.Int32)
extern "C" IL2CPP_METHOD_ATTR float AudioSource_ReadExtensionPropertyValue_m72717540 (AudioSource_t3935305588 * __this, int32_t ___sourceIndex0, const RuntimeMethod* method)
{
	typedef float (*AudioSource_ReadExtensionPropertyValue_m72717540_ftn) (AudioSource_t3935305588 *, int32_t);
	static AudioSource_ReadExtensionPropertyValue_m72717540_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_ReadExtensionPropertyValue_m72717540_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::ReadExtensionPropertyValue(System.Int32)");
	float retVal = _il2cpp_icall_func(__this, ___sourceIndex0);
	return retVal;
}
// System.Void UnityEngine.AudioSource::ClearExtensionProperties(UnityEngine.PropertyName)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_ClearExtensionProperties_m2116074582 (AudioSource_t3935305588 * __this, PropertyName_t3749835189  ___extensionName0, const RuntimeMethod* method)
{
	{
		AudioSource_INTERNAL_CALL_ClearExtensionProperties_m2159298662(NULL /*static, unused*/, __this, (&___extensionName0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AudioSource::INTERNAL_CALL_ClearExtensionProperties(UnityEngine.AudioSource,UnityEngine.PropertyName&)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_INTERNAL_CALL_ClearExtensionProperties_m2159298662 (RuntimeObject * __this /* static, unused */, AudioSource_t3935305588 * ___self0, PropertyName_t3749835189 * ___extensionName1, const RuntimeMethod* method)
{
	typedef void (*AudioSource_INTERNAL_CALL_ClearExtensionProperties_m2159298662_ftn) (AudioSource_t3935305588 *, PropertyName_t3749835189 *);
	static AudioSource_INTERNAL_CALL_ClearExtensionProperties_m2159298662_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_INTERNAL_CALL_ClearExtensionProperties_m2159298662_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::INTERNAL_CALL_ClearExtensionProperties(UnityEngine.AudioSource,UnityEngine.PropertyName&)");
	_il2cpp_icall_func(___self0, ___extensionName1);
}
// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::AddSpatializerExtension(System.Type)
extern "C" IL2CPP_METHOD_ATTR AudioSourceExtension_t3064908834 * AudioSource_AddSpatializerExtension_m2560794359 (AudioSource_t3935305588 * __this, Type_t * ___extensionType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioSource_AddSpatializerExtension_m2560794359_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AudioSourceExtension_t3064908834 * V_0 = NULL;
	{
		AudioSourceExtension_t3064908834 * L_0 = __this->get_spatializerExtension_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		Type_t * L_2 = ___extensionType0;
		ScriptableObject_t2528358522 * L_3 = ScriptableObject_CreateInstance_m2611081756(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		__this->set_spatializerExtension_2(((AudioSourceExtension_t3064908834 *)IsInstClass((RuntimeObject*)L_3, AudioSourceExtension_t3064908834_il2cpp_TypeInfo_var)));
	}

IL_0025:
	{
		AudioSourceExtension_t3064908834 * L_4 = __this->get_spatializerExtension_2();
		V_0 = L_4;
		goto IL_0031;
	}

IL_0031:
	{
		AudioSourceExtension_t3064908834 * L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::AddAmbisonicExtension(System.Type)
extern "C" IL2CPP_METHOD_ATTR AudioSourceExtension_t3064908834 * AudioSource_AddAmbisonicExtension_m304476911 (AudioSource_t3935305588 * __this, Type_t * ___extensionType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioSource_AddAmbisonicExtension_m304476911_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AudioSourceExtension_t3064908834 * V_0 = NULL;
	{
		AudioSourceExtension_t3064908834 * L_0 = __this->get_ambisonicExtension_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		Type_t * L_2 = ___extensionType0;
		ScriptableObject_t2528358522 * L_3 = ScriptableObject_CreateInstance_m2611081756(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		__this->set_ambisonicExtension_3(((AudioSourceExtension_t3064908834 *)IsInstClass((RuntimeObject*)L_3, AudioSourceExtension_t3064908834_il2cpp_TypeInfo_var)));
	}

IL_0025:
	{
		AudioSourceExtension_t3064908834 * L_4 = __this->get_ambisonicExtension_3();
		V_0 = L_4;
		goto IL_0031;
	}

IL_0031:
	{
		AudioSourceExtension_t3064908834 * L_5 = V_0;
		return L_5;
	}
}
// System.Boolean UnityEngine.AudioSource::SetSpatializerFloat(System.Int32,System.Single)
extern "C" IL2CPP_METHOD_ATTR bool AudioSource_SetSpatializerFloat_m3945040067 (AudioSource_t3935305588 * __this, int32_t ___index0, float ___value1, const RuntimeMethod* method)
{
	typedef bool (*AudioSource_SetSpatializerFloat_m3945040067_ftn) (AudioSource_t3935305588 *, int32_t, float);
	static AudioSource_SetSpatializerFloat_m3945040067_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_SetSpatializerFloat_m3945040067_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::SetSpatializerFloat(System.Int32,System.Single)");
	bool retVal = _il2cpp_icall_func(__this, ___index0, ___value1);
	return retVal;
}
// System.Boolean UnityEngine.AudioSource::GetSpatializerFloat(System.Int32,System.Single&)
extern "C" IL2CPP_METHOD_ATTR bool AudioSource_GetSpatializerFloat_m3059136945 (AudioSource_t3935305588 * __this, int32_t ___index0, float* ___value1, const RuntimeMethod* method)
{
	typedef bool (*AudioSource_GetSpatializerFloat_m3059136945_ftn) (AudioSource_t3935305588 *, int32_t, float*);
	static AudioSource_GetSpatializerFloat_m3059136945_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_GetSpatializerFloat_m3059136945_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::GetSpatializerFloat(System.Int32,System.Single&)");
	bool retVal = _il2cpp_icall_func(__this, ___index0, ___value1);
	return retVal;
}
// System.Boolean UnityEngine.AudioSource::SetAmbisonicDecoderFloat(System.Int32,System.Single)
extern "C" IL2CPP_METHOD_ATTR bool AudioSource_SetAmbisonicDecoderFloat_m4024338939 (AudioSource_t3935305588 * __this, int32_t ___index0, float ___value1, const RuntimeMethod* method)
{
	typedef bool (*AudioSource_SetAmbisonicDecoderFloat_m4024338939_ftn) (AudioSource_t3935305588 *, int32_t, float);
	static AudioSource_SetAmbisonicDecoderFloat_m4024338939_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_SetAmbisonicDecoderFloat_m4024338939_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::SetAmbisonicDecoderFloat(System.Int32,System.Single)");
	bool retVal = _il2cpp_icall_func(__this, ___index0, ___value1);
	return retVal;
}
// System.Boolean UnityEngine.AudioSource::GetAmbisonicDecoderFloat(System.Int32,System.Single&)
extern "C" IL2CPP_METHOD_ATTR bool AudioSource_GetAmbisonicDecoderFloat_m58024040 (AudioSource_t3935305588 * __this, int32_t ___index0, float* ___value1, const RuntimeMethod* method)
{
	typedef bool (*AudioSource_GetAmbisonicDecoderFloat_m58024040_ftn) (AudioSource_t3935305588 *, int32_t, float*);
	static AudioSource_GetAmbisonicDecoderFloat_m58024040_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_GetAmbisonicDecoderFloat_m58024040_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::GetAmbisonicDecoderFloat(System.Int32,System.Single&)");
	bool retVal = _il2cpp_icall_func(__this, ___index0, ___value1);
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
// UnityEngine.AudioSource UnityEngine.AudioSourceExtension::get_audioSource()
extern "C" IL2CPP_METHOD_ATTR AudioSource_t3935305588 * AudioSourceExtension_get_audioSource_m1465006871 (AudioSourceExtension_t3064908834 * __this, const RuntimeMethod* method)
{
	AudioSource_t3935305588 * V_0 = NULL;
	{
		AudioSource_t3935305588 * L_0 = __this->get_m_audioSource_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		AudioSource_t3935305588 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.AudioSourceExtension::set_audioSource(UnityEngine.AudioSource)
extern "C" IL2CPP_METHOD_ATTR void AudioSourceExtension_set_audioSource_m3729768988 (AudioSourceExtension_t3064908834 * __this, AudioSource_t3935305588 * ___value0, const RuntimeMethod* method)
{
	{
		AudioSource_t3935305588 * L_0 = ___value0;
		__this->set_m_audioSource_2(L_0);
		return;
	}
}
// System.Void UnityEngine.AudioSourceExtension::WriteExtensionProperty(UnityEngine.PropertyName,System.Single)
extern "C" IL2CPP_METHOD_ATTR void AudioSourceExtension_WriteExtensionProperty_m2866033202 (AudioSourceExtension_t3064908834 * __this, PropertyName_t3749835189  ___propertyName0, float ___propertyValue1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.AudioSourceExtension::Play()
extern "C" IL2CPP_METHOD_ATTR void AudioSourceExtension_Play_m420799475 (AudioSourceExtension_t3064908834 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.AudioSourceExtension::Stop()
extern "C" IL2CPP_METHOD_ATTR void AudioSourceExtension_Stop_m387892536 (AudioSourceExtension_t3064908834 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.AudioSourceExtension::ExtensionUpdate()
extern "C" IL2CPP_METHOD_ATTR void AudioSourceExtension_ExtensionUpdate_m2790353999 (AudioSourceExtension_t3064908834 * __this, const RuntimeMethod* method)
{
	{
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
