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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.String
struct String_t;
// CString
struct CString_t1241285187;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Exception
struct Exception_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// ArrayPool`1<System.Char>
struct ArrayPool_1_t830581052;
// System.Collections.Generic.Queue`1<CString>
struct Queue_1_t1087544681;
// System.Collections.Generic.Queue`1<CString/CStringBlock>
struct Queue_1_t1918904744;
// System.Collections.Generic.Stack`1<CString/CStringBlock>
struct Stack_1_t2916034705;
// CString/CStringBlock
struct CStringBlock_t2072645250;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.List`1<CString>
struct List_1_t2713359929;
// LuaInterface.ILogger
struct ILogger_t2105850503;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Int32[]
struct Int32U5BU5D_t385246372;

extern RuntimeClass* StringU5BU5D_t1281789340_il2cpp_TypeInfo_var;
extern RuntimeClass* ConstStringTable_t3903136165_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3451565968;
extern const uint32_t ConstStringTable__cctor_m1327756767_MetadataUsageId;
extern const uint32_t ConstStringTable_GetTimeIntern_m3371539087_MetadataUsageId;
extern const uint32_t ConstStringTable_GetNumIntern_m2289855099_MetadataUsageId;
extern RuntimeClass* Debugger_t141402865_il2cpp_TypeInfo_var;
extern RuntimeClass* CString_t1241285187_il2cpp_TypeInfo_var;
extern RuntimeClass* StringPool_t3132271758_il2cpp_TypeInfo_var;
extern const uint32_t Debugger__cctor_m1468323373_MetadataUsageId;
extern RuntimeClass* DateTime_t3738529785_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3452614550;
extern String_t* _stringLiteral3452614530;
extern String_t* _stringLiteral3452614531;
extern String_t* _stringLiteral3450517398;
extern const uint32_t Debugger_GetLogFormat_m3520384486_MetadataUsageId;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* ILogger_t2105850503_il2cpp_TypeInfo_var;
extern const uint32_t Debugger_Log_m668826934_MetadataUsageId;
extern const uint32_t Debugger_Log_m477800873_MetadataUsageId;
extern const uint32_t Debugger_Log_m492672111_MetadataUsageId;
extern const uint32_t Debugger_Log_m3929297881_MetadataUsageId;
extern const uint32_t Debugger_Log_m2294394619_MetadataUsageId;
extern const uint32_t Debugger_Log_m2779668554_MetadataUsageId;
extern RuntimeClass* StackTraceUtility_t3465565809_il2cpp_TypeInfo_var;
extern const uint32_t Debugger_LogWarning_m2048917719_MetadataUsageId;
extern const uint32_t Debugger_LogWarning_m3982969332_MetadataUsageId;
extern const uint32_t Debugger_LogWarning_m1818850028_MetadataUsageId;
extern const uint32_t Debugger_LogWarning_m2485008016_MetadataUsageId;
extern const uint32_t Debugger_LogWarning_m1955674266_MetadataUsageId;
extern const uint32_t Debugger_LogWarning_m4189345595_MetadataUsageId;
extern const uint32_t Debugger_LogError_m2471643994_MetadataUsageId;
extern const uint32_t Debugger_LogError_m3210241417_MetadataUsageId;
extern const uint32_t Debugger_LogError_m2778788262_MetadataUsageId;
extern const uint32_t Debugger_LogError_m2902956803_MetadataUsageId;
extern const uint32_t Debugger_LogError_m2954899654_MetadataUsageId;
extern const uint32_t Debugger_LogError_m1004646199_MetadataUsageId;
extern const uint32_t Debugger_LogException_m723991849_MetadataUsageId;
extern const uint32_t Debugger_LogException_m762923680_MetadataUsageId;
extern String_t* _stringLiteral3453007779;
extern const uint32_t ExtensionMethods_AppendLineEx_m4148055515_MetadataUsageId;

struct StringU5BU5D_t1281789340;
struct ObjectU5BU5D_t2843939325;


#ifndef U3CMODULEU3E_T692745556_H
#define U3CMODULEU3E_T692745556_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745556 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745556_H
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
#ifndef EXTENSIONMETHODS_T1393210938_H
#define EXTENSIONMETHODS_T1393210938_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LuaInterface.ExtensionMethods
struct  ExtensionMethods_t1393210938  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTENSIONMETHODS_T1393210938_H
#ifndef CSTRING_T1241285187_H
#define CSTRING_T1241285187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CString
struct  CString_t1241285187  : public RuntimeObject
{
public:
	// System.Char[] CString::_buffer
	CharU5BU5D_t3528271667* ____buffer_6;
	// System.Int32 CString::length
	int32_t ___length_7;
	// System.Boolean CString::beDisposed
	bool ___beDisposed_8;

public:
	inline static int32_t get_offset_of__buffer_6() { return static_cast<int32_t>(offsetof(CString_t1241285187, ____buffer_6)); }
	inline CharU5BU5D_t3528271667* get__buffer_6() const { return ____buffer_6; }
	inline CharU5BU5D_t3528271667** get_address_of__buffer_6() { return &____buffer_6; }
	inline void set__buffer_6(CharU5BU5D_t3528271667* value)
	{
		____buffer_6 = value;
		Il2CppCodeGenWriteBarrier((&____buffer_6), value);
	}

	inline static int32_t get_offset_of_length_7() { return static_cast<int32_t>(offsetof(CString_t1241285187, ___length_7)); }
	inline int32_t get_length_7() const { return ___length_7; }
	inline int32_t* get_address_of_length_7() { return &___length_7; }
	inline void set_length_7(int32_t value)
	{
		___length_7 = value;
	}

	inline static int32_t get_offset_of_beDisposed_8() { return static_cast<int32_t>(offsetof(CString_t1241285187, ___beDisposed_8)); }
	inline bool get_beDisposed_8() const { return ___beDisposed_8; }
	inline bool* get_address_of_beDisposed_8() { return &___beDisposed_8; }
	inline void set_beDisposed_8(bool value)
	{
		___beDisposed_8 = value;
	}
};

struct CString_t1241285187_StaticFields
{
public:
	// ArrayPool`1<System.Char> CString::pool
	ArrayPool_1_t830581052 * ___pool_0;
	// System.Collections.Generic.Queue`1<CString> CString::queue
	Queue_1_t1087544681 * ___queue_1;
	// System.Collections.Generic.Queue`1<CString/CStringBlock> CString::blocks
	Queue_1_t1918904744 * ___blocks_2;
	// System.Collections.Generic.Stack`1<CString/CStringBlock> CString::stack
	Stack_1_t2916034705 * ___stack_3;
	// CString/CStringBlock CString::currentBlock
	CStringBlock_t2072645250 * ___currentBlock_4;
	// System.String CString::NewLine
	String_t* ___NewLine_5;
	// System.Char[] CString::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_9;
	// System.Collections.Generic.List`1<CString> CString::splitList
	List_1_t2713359929 * ___splitList_10;
	// System.Char[] CString::numbuffer
	CharU5BU5D_t3528271667* ___numbuffer_11;

public:
	inline static int32_t get_offset_of_pool_0() { return static_cast<int32_t>(offsetof(CString_t1241285187_StaticFields, ___pool_0)); }
	inline ArrayPool_1_t830581052 * get_pool_0() const { return ___pool_0; }
	inline ArrayPool_1_t830581052 ** get_address_of_pool_0() { return &___pool_0; }
	inline void set_pool_0(ArrayPool_1_t830581052 * value)
	{
		___pool_0 = value;
		Il2CppCodeGenWriteBarrier((&___pool_0), value);
	}

	inline static int32_t get_offset_of_queue_1() { return static_cast<int32_t>(offsetof(CString_t1241285187_StaticFields, ___queue_1)); }
	inline Queue_1_t1087544681 * get_queue_1() const { return ___queue_1; }
	inline Queue_1_t1087544681 ** get_address_of_queue_1() { return &___queue_1; }
	inline void set_queue_1(Queue_1_t1087544681 * value)
	{
		___queue_1 = value;
		Il2CppCodeGenWriteBarrier((&___queue_1), value);
	}

	inline static int32_t get_offset_of_blocks_2() { return static_cast<int32_t>(offsetof(CString_t1241285187_StaticFields, ___blocks_2)); }
	inline Queue_1_t1918904744 * get_blocks_2() const { return ___blocks_2; }
	inline Queue_1_t1918904744 ** get_address_of_blocks_2() { return &___blocks_2; }
	inline void set_blocks_2(Queue_1_t1918904744 * value)
	{
		___blocks_2 = value;
		Il2CppCodeGenWriteBarrier((&___blocks_2), value);
	}

	inline static int32_t get_offset_of_stack_3() { return static_cast<int32_t>(offsetof(CString_t1241285187_StaticFields, ___stack_3)); }
	inline Stack_1_t2916034705 * get_stack_3() const { return ___stack_3; }
	inline Stack_1_t2916034705 ** get_address_of_stack_3() { return &___stack_3; }
	inline void set_stack_3(Stack_1_t2916034705 * value)
	{
		___stack_3 = value;
		Il2CppCodeGenWriteBarrier((&___stack_3), value);
	}

	inline static int32_t get_offset_of_currentBlock_4() { return static_cast<int32_t>(offsetof(CString_t1241285187_StaticFields, ___currentBlock_4)); }
	inline CStringBlock_t2072645250 * get_currentBlock_4() const { return ___currentBlock_4; }
	inline CStringBlock_t2072645250 ** get_address_of_currentBlock_4() { return &___currentBlock_4; }
	inline void set_currentBlock_4(CStringBlock_t2072645250 * value)
	{
		___currentBlock_4 = value;
		Il2CppCodeGenWriteBarrier((&___currentBlock_4), value);
	}

	inline static int32_t get_offset_of_NewLine_5() { return static_cast<int32_t>(offsetof(CString_t1241285187_StaticFields, ___NewLine_5)); }
	inline String_t* get_NewLine_5() const { return ___NewLine_5; }
	inline String_t** get_address_of_NewLine_5() { return &___NewLine_5; }
	inline void set_NewLine_5(String_t* value)
	{
		___NewLine_5 = value;
		Il2CppCodeGenWriteBarrier((&___NewLine_5), value);
	}

	inline static int32_t get_offset_of_WhiteChars_9() { return static_cast<int32_t>(offsetof(CString_t1241285187_StaticFields, ___WhiteChars_9)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_9() const { return ___WhiteChars_9; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_9() { return &___WhiteChars_9; }
	inline void set_WhiteChars_9(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_9 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_9), value);
	}

	inline static int32_t get_offset_of_splitList_10() { return static_cast<int32_t>(offsetof(CString_t1241285187_StaticFields, ___splitList_10)); }
	inline List_1_t2713359929 * get_splitList_10() const { return ___splitList_10; }
	inline List_1_t2713359929 ** get_address_of_splitList_10() { return &___splitList_10; }
	inline void set_splitList_10(List_1_t2713359929 * value)
	{
		___splitList_10 = value;
		Il2CppCodeGenWriteBarrier((&___splitList_10), value);
	}

	inline static int32_t get_offset_of_numbuffer_11() { return static_cast<int32_t>(offsetof(CString_t1241285187_StaticFields, ___numbuffer_11)); }
	inline CharU5BU5D_t3528271667* get_numbuffer_11() const { return ___numbuffer_11; }
	inline CharU5BU5D_t3528271667** get_address_of_numbuffer_11() { return &___numbuffer_11; }
	inline void set_numbuffer_11(CharU5BU5D_t3528271667* value)
	{
		___numbuffer_11 = value;
		Il2CppCodeGenWriteBarrier((&___numbuffer_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CSTRING_T1241285187_H
#ifndef STRINGBUILDER_T_H
#define STRINGBUILDER_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Int32 System.Text.StringBuilder::_length
	int32_t ____length_1;
	// System.String System.Text.StringBuilder::_str
	String_t* ____str_2;
	// System.String System.Text.StringBuilder::_cached_str
	String_t* ____cached_str_3;
	// System.Int32 System.Text.StringBuilder::_maxCapacity
	int32_t ____maxCapacity_4;

public:
	inline static int32_t get_offset_of__length_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____length_1)); }
	inline int32_t get__length_1() const { return ____length_1; }
	inline int32_t* get_address_of__length_1() { return &____length_1; }
	inline void set__length_1(int32_t value)
	{
		____length_1 = value;
	}

	inline static int32_t get_offset_of__str_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____str_2)); }
	inline String_t* get__str_2() const { return ____str_2; }
	inline String_t** get_address_of__str_2() { return &____str_2; }
	inline void set__str_2(String_t* value)
	{
		____str_2 = value;
		Il2CppCodeGenWriteBarrier((&____str_2), value);
	}

	inline static int32_t get_offset_of__cached_str_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____cached_str_3)); }
	inline String_t* get__cached_str_3() const { return ____cached_str_3; }
	inline String_t** get_address_of__cached_str_3() { return &____cached_str_3; }
	inline void set__cached_str_3(String_t* value)
	{
		____cached_str_3 = value;
		Il2CppCodeGenWriteBarrier((&____cached_str_3), value);
	}

	inline static int32_t get_offset_of__maxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____maxCapacity_4)); }
	inline int32_t get__maxCapacity_4() const { return ____maxCapacity_4; }
	inline int32_t* get_address_of__maxCapacity_4() { return &____maxCapacity_4; }
	inline void set__maxCapacity_4(int32_t value)
	{
		____maxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
#ifndef DEBUGGER_T141402865_H
#define DEBUGGER_T141402865_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LuaInterface.Debugger
struct  Debugger_t141402865  : public RuntimeObject
{
public:

public:
};

struct Debugger_t141402865_StaticFields
{
public:
	// System.Boolean LuaInterface.Debugger::useLog
	bool ___useLog_0;
	// System.String LuaInterface.Debugger::threadStack
	String_t* ___threadStack_1;
	// LuaInterface.ILogger LuaInterface.Debugger::logger
	RuntimeObject* ___logger_2;
	// CString LuaInterface.Debugger::sb
	CString_t1241285187 * ___sb_3;

public:
	inline static int32_t get_offset_of_useLog_0() { return static_cast<int32_t>(offsetof(Debugger_t141402865_StaticFields, ___useLog_0)); }
	inline bool get_useLog_0() const { return ___useLog_0; }
	inline bool* get_address_of_useLog_0() { return &___useLog_0; }
	inline void set_useLog_0(bool value)
	{
		___useLog_0 = value;
	}

	inline static int32_t get_offset_of_threadStack_1() { return static_cast<int32_t>(offsetof(Debugger_t141402865_StaticFields, ___threadStack_1)); }
	inline String_t* get_threadStack_1() const { return ___threadStack_1; }
	inline String_t** get_address_of_threadStack_1() { return &___threadStack_1; }
	inline void set_threadStack_1(String_t* value)
	{
		___threadStack_1 = value;
		Il2CppCodeGenWriteBarrier((&___threadStack_1), value);
	}

	inline static int32_t get_offset_of_logger_2() { return static_cast<int32_t>(offsetof(Debugger_t141402865_StaticFields, ___logger_2)); }
	inline RuntimeObject* get_logger_2() const { return ___logger_2; }
	inline RuntimeObject** get_address_of_logger_2() { return &___logger_2; }
	inline void set_logger_2(RuntimeObject* value)
	{
		___logger_2 = value;
		Il2CppCodeGenWriteBarrier((&___logger_2), value);
	}

	inline static int32_t get_offset_of_sb_3() { return static_cast<int32_t>(offsetof(Debugger_t141402865_StaticFields, ___sb_3)); }
	inline CString_t1241285187 * get_sb_3() const { return ___sb_3; }
	inline CString_t1241285187 ** get_address_of_sb_3() { return &___sb_3; }
	inline void set_sb_3(CString_t1241285187 * value)
	{
		___sb_3 = value;
		Il2CppCodeGenWriteBarrier((&___sb_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGGER_T141402865_H
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
#ifndef CONSTSTRINGTABLE_T3903136165_H
#define CONSTSTRINGTABLE_T3903136165_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ConstStringTable
struct  ConstStringTable_t3903136165  : public RuntimeObject
{
public:

public:
};

struct ConstStringTable_t3903136165_StaticFields
{
public:
	// System.String[] ConstStringTable::secDict
	StringU5BU5D_t1281789340* ___secDict_0;
	// System.String[] ConstStringTable::tenDict
	StringU5BU5D_t1281789340* ___tenDict_1;

public:
	inline static int32_t get_offset_of_secDict_0() { return static_cast<int32_t>(offsetof(ConstStringTable_t3903136165_StaticFields, ___secDict_0)); }
	inline StringU5BU5D_t1281789340* get_secDict_0() const { return ___secDict_0; }
	inline StringU5BU5D_t1281789340** get_address_of_secDict_0() { return &___secDict_0; }
	inline void set_secDict_0(StringU5BU5D_t1281789340* value)
	{
		___secDict_0 = value;
		Il2CppCodeGenWriteBarrier((&___secDict_0), value);
	}

	inline static int32_t get_offset_of_tenDict_1() { return static_cast<int32_t>(offsetof(ConstStringTable_t3903136165_StaticFields, ___tenDict_1)); }
	inline StringU5BU5D_t1281789340* get_tenDict_1() const { return ___tenDict_1; }
	inline StringU5BU5D_t1281789340** get_address_of_tenDict_1() { return &___tenDict_1; }
	inline void set_tenDict_1(StringU5BU5D_t1281789340* value)
	{
		___tenDict_1 = value;
		Il2CppCodeGenWriteBarrier((&___tenDict_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTSTRINGTABLE_T3903136165_H
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
#ifndef TIMESPAN_T881159249_H
#define TIMESPAN_T881159249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t881159249 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_8;

public:
	inline static int32_t get_offset_of__ticks_8() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249, ____ticks_8)); }
	inline int64_t get__ticks_8() const { return ____ticks_8; }
	inline int64_t* get_address_of__ticks_8() { return &____ticks_8; }
	inline void set__ticks_8(int64_t value)
	{
		____ticks_8 = value;
	}
};

struct TimeSpan_t881159249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_5;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_6;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_7;

public:
	inline static int32_t get_offset_of_MaxValue_5() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_5)); }
	inline TimeSpan_t881159249  get_MaxValue_5() const { return ___MaxValue_5; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_5() { return &___MaxValue_5; }
	inline void set_MaxValue_5(TimeSpan_t881159249  value)
	{
		___MaxValue_5 = value;
	}

	inline static int32_t get_offset_of_MinValue_6() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_6)); }
	inline TimeSpan_t881159249  get_MinValue_6() const { return ___MinValue_6; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_6() { return &___MinValue_6; }
	inline void set_MinValue_6(TimeSpan_t881159249  value)
	{
		___MinValue_6 = value;
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_7)); }
	inline TimeSpan_t881159249  get_Zero_7() const { return ___Zero_7; }
	inline TimeSpan_t881159249 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(TimeSpan_t881159249  value)
	{
		___Zero_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T881159249_H
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
#ifndef LOGTYPE_T73765434_H
#define LOGTYPE_T73765434_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LogType
struct  LogType_t73765434 
{
public:
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LogType_t73765434, ___value___1)); }
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
#endif // LOGTYPE_T73765434_H
#ifndef DATETIMEKIND_T3468814247_H
#define DATETIMEKIND_T3468814247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t3468814247 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t3468814247, ___value___1)); }
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
#endif // DATETIMEKIND_T3468814247_H
#ifndef DATETIME_T3738529785_H
#define DATETIME_T3738529785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3738529785 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t881159249  ___ticks_10;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_11;

public:
	inline static int32_t get_offset_of_ticks_10() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___ticks_10)); }
	inline TimeSpan_t881159249  get_ticks_10() const { return ___ticks_10; }
	inline TimeSpan_t881159249 * get_address_of_ticks_10() { return &___ticks_10; }
	inline void set_ticks_10(TimeSpan_t881159249  value)
	{
		___ticks_10 = value;
	}

	inline static int32_t get_offset_of_kind_11() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___kind_11)); }
	inline int32_t get_kind_11() const { return ___kind_11; }
	inline int32_t* get_address_of_kind_11() { return &___kind_11; }
	inline void set_kind_11(int32_t value)
	{
		___kind_11 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_12;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_13;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t1281789340* ___ParseTimeFormats_14;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t1281789340* ___ParseYearDayMonthFormats_15;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t1281789340* ___ParseYearMonthDayFormats_16;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t1281789340* ___ParseDayMonthYearFormats_17;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t1281789340* ___ParseMonthDayYearFormats_18;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t1281789340* ___MonthDayShortFormats_19;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t1281789340* ___DayMonthShortFormats_20;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t385246372* ___daysmonth_21;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t385246372* ___daysmonthleap_22;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_23;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_24;

public:
	inline static int32_t get_offset_of_MaxValue_12() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_12)); }
	inline DateTime_t3738529785  get_MaxValue_12() const { return ___MaxValue_12; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_12() { return &___MaxValue_12; }
	inline void set_MaxValue_12(DateTime_t3738529785  value)
	{
		___MaxValue_12 = value;
	}

	inline static int32_t get_offset_of_MinValue_13() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_13)); }
	inline DateTime_t3738529785  get_MinValue_13() const { return ___MinValue_13; }
	inline DateTime_t3738529785 * get_address_of_MinValue_13() { return &___MinValue_13; }
	inline void set_MinValue_13(DateTime_t3738529785  value)
	{
		___MinValue_13 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_14() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseTimeFormats_14)); }
	inline StringU5BU5D_t1281789340* get_ParseTimeFormats_14() const { return ___ParseTimeFormats_14; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseTimeFormats_14() { return &___ParseTimeFormats_14; }
	inline void set_ParseTimeFormats_14(StringU5BU5D_t1281789340* value)
	{
		___ParseTimeFormats_14 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_14), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_15() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearDayMonthFormats_15)); }
	inline StringU5BU5D_t1281789340* get_ParseYearDayMonthFormats_15() const { return ___ParseYearDayMonthFormats_15; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearDayMonthFormats_15() { return &___ParseYearDayMonthFormats_15; }
	inline void set_ParseYearDayMonthFormats_15(StringU5BU5D_t1281789340* value)
	{
		___ParseYearDayMonthFormats_15 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_15), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_16() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearMonthDayFormats_16)); }
	inline StringU5BU5D_t1281789340* get_ParseYearMonthDayFormats_16() const { return ___ParseYearMonthDayFormats_16; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearMonthDayFormats_16() { return &___ParseYearMonthDayFormats_16; }
	inline void set_ParseYearMonthDayFormats_16(StringU5BU5D_t1281789340* value)
	{
		___ParseYearMonthDayFormats_16 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_16), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_17() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseDayMonthYearFormats_17)); }
	inline StringU5BU5D_t1281789340* get_ParseDayMonthYearFormats_17() const { return ___ParseDayMonthYearFormats_17; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseDayMonthYearFormats_17() { return &___ParseDayMonthYearFormats_17; }
	inline void set_ParseDayMonthYearFormats_17(StringU5BU5D_t1281789340* value)
	{
		___ParseDayMonthYearFormats_17 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_17), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_18() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseMonthDayYearFormats_18)); }
	inline StringU5BU5D_t1281789340* get_ParseMonthDayYearFormats_18() const { return ___ParseMonthDayYearFormats_18; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseMonthDayYearFormats_18() { return &___ParseMonthDayYearFormats_18; }
	inline void set_ParseMonthDayYearFormats_18(StringU5BU5D_t1281789340* value)
	{
		___ParseMonthDayYearFormats_18 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_18), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_19() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MonthDayShortFormats_19)); }
	inline StringU5BU5D_t1281789340* get_MonthDayShortFormats_19() const { return ___MonthDayShortFormats_19; }
	inline StringU5BU5D_t1281789340** get_address_of_MonthDayShortFormats_19() { return &___MonthDayShortFormats_19; }
	inline void set_MonthDayShortFormats_19(StringU5BU5D_t1281789340* value)
	{
		___MonthDayShortFormats_19 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_19), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_20() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DayMonthShortFormats_20)); }
	inline StringU5BU5D_t1281789340* get_DayMonthShortFormats_20() const { return ___DayMonthShortFormats_20; }
	inline StringU5BU5D_t1281789340** get_address_of_DayMonthShortFormats_20() { return &___DayMonthShortFormats_20; }
	inline void set_DayMonthShortFormats_20(StringU5BU5D_t1281789340* value)
	{
		___DayMonthShortFormats_20 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_20), value);
	}

	inline static int32_t get_offset_of_daysmonth_21() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonth_21)); }
	inline Int32U5BU5D_t385246372* get_daysmonth_21() const { return ___daysmonth_21; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonth_21() { return &___daysmonth_21; }
	inline void set_daysmonth_21(Int32U5BU5D_t385246372* value)
	{
		___daysmonth_21 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_21), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_22() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonthleap_22)); }
	inline Int32U5BU5D_t385246372* get_daysmonthleap_22() const { return ___daysmonthleap_22; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonthleap_22() { return &___daysmonthleap_22; }
	inline void set_daysmonthleap_22(Int32U5BU5D_t385246372* value)
	{
		___daysmonthleap_22 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_22), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_23() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___to_local_time_span_object_23)); }
	inline RuntimeObject * get_to_local_time_span_object_23() const { return ___to_local_time_span_object_23; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_23() { return &___to_local_time_span_object_23; }
	inline void set_to_local_time_span_object_23(RuntimeObject * value)
	{
		___to_local_time_span_object_23 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_23), value);
	}

	inline static int32_t get_offset_of_last_now_24() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___last_now_24)); }
	inline int64_t get_last_now_24() const { return ___last_now_24; }
	inline int64_t* get_address_of_last_now_24() { return &___last_now_24; }
	inline void set_last_now_24(int64_t value)
	{
		___last_now_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
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
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};



// System.String System.Int32::ToString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Int32_ToString_m372259452 (int32_t* __this, String_t* p0, const RuntimeMethod* method);
// System.String System.String::Intern(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Intern_m1576245421 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Int32_ToString_m141394615 (int32_t* __this, const RuntimeMethod* method);
// System.Void CString::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void CString__ctor_m787590977 (CString_t1241285187 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void StringPool::PreAlloc(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void StringPool_PreAlloc_m1456199148 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_Now()
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  DateTime_get_Now_m1277138875 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void CString::Clear()
extern "C" IL2CPP_METHOD_ATTR void CString_Clear_m257417905 (CString_t1241285187 * __this, const RuntimeMethod* method);
// System.Int32 System.DateTime::get_Hour()
extern "C" IL2CPP_METHOD_ATTR int32_t DateTime_get_Hour_m4153505178 (DateTime_t3738529785 * __this, const RuntimeMethod* method);
// System.String ConstStringTable::GetTimeIntern(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* ConstStringTable_GetTimeIntern_m3371539087 (RuntimeObject * __this /* static, unused */, int32_t ___time0, const RuntimeMethod* method);
// CString CString::Append(System.String)
extern "C" IL2CPP_METHOD_ATTR CString_t1241285187 * CString_Append_m1688076880 (CString_t1241285187 * __this, String_t* p0, const RuntimeMethod* method);
// System.Int32 System.DateTime::get_Minute()
extern "C" IL2CPP_METHOD_ATTR int32_t DateTime_get_Minute_m87527789 (DateTime_t3738529785 * __this, const RuntimeMethod* method);
// System.Int32 System.DateTime::get_Second()
extern "C" IL2CPP_METHOD_ATTR int32_t DateTime_get_Second_m2686182256 (DateTime_t3738529785 * __this, const RuntimeMethod* method);
// System.Int32 System.DateTime::get_Millisecond()
extern "C" IL2CPP_METHOD_ATTR int32_t DateTime_get_Millisecond_m671827344 (DateTime_t3738529785 * __this, const RuntimeMethod* method);
// CString CString::Append(System.Int32)
extern "C" IL2CPP_METHOD_ATTR CString_t1241285187 * CString_Append_m1261851706 (CString_t1241285187 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Time::get_frameCount()
extern "C" IL2CPP_METHOD_ATTR int32_t Time_get_frameCount_m1220035214 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 CString::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t CString_get_Length_m3843387903 (CString_t1241285187 * __this, const RuntimeMethod* method);
// System.String StringPool::Alloc(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* StringPool_Alloc_m1322654057 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.String CString::CopyToString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* CString_CopyToString_m3824816894 (CString_t1241285187 * __this, String_t* p0, const RuntimeMethod* method);
// System.String LuaInterface.Debugger::GetLogFormat(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Debugger_GetLogFormat_m3520384486 (RuntimeObject * __this /* static, unused */, String_t* ___str0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void StringPool::Collect(System.String)
extern "C" IL2CPP_METHOD_ATTR void StringPool_Collect_m3573006323 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void LuaInterface.Debugger::Log(System.String)
extern "C" IL2CPP_METHOD_ATTR void Debugger_Log_m668826934 (RuntimeObject * __this /* static, unused */, String_t* ___str0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m2844511972 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m2556382932 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m3339413201 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, RuntimeObject * p3, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m630303134 (RuntimeObject * __this /* static, unused */, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogWarning_m3752629331 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.String UnityEngine.StackTraceUtility::ExtractStackTrace()
extern "C" IL2CPP_METHOD_ATTR String_t* StackTraceUtility_ExtractStackTrace_m3279197967 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void LuaInterface.Debugger::LogWarning(System.String)
extern "C" IL2CPP_METHOD_ATTR void Debugger_LogWarning_m2048917719 (RuntimeObject * __this /* static, unused */, String_t* ___str0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void LuaInterface.Debugger::LogError(System.String)
extern "C" IL2CPP_METHOD_ATTR void Debugger_LogError_m2471643994 (RuntimeObject * __this /* static, unused */, String_t* ___str0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1965104174 (StringBuilder_t * __this, String_t* p0, const RuntimeMethod* method);
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
// System.Void ConstStringTable::.cctor()
extern "C" IL2CPP_METHOD_ATTR void ConstStringTable__cctor_m1327756767 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConstStringTable__cctor_m1327756767_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		((ConstStringTable_t3903136165_StaticFields*)il2cpp_codegen_static_fields_for(ConstStringTable_t3903136165_il2cpp_TypeInfo_var))->set_secDict_0(((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)((int32_t)100))));
		((ConstStringTable_t3903136165_StaticFields*)il2cpp_codegen_static_fields_for(ConstStringTable_t3903136165_il2cpp_TypeInfo_var))->set_tenDict_1(((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10))));
		V_0 = 0;
		goto IL_0038;
	}

IL_001c:
	{
		StringU5BU5D_t1281789340* L_0 = ((ConstStringTable_t3903136165_StaticFields*)il2cpp_codegen_static_fields_for(ConstStringTable_t3903136165_il2cpp_TypeInfo_var))->get_secDict_0();
		int32_t L_1 = V_0;
		String_t* L_2 = Int32_ToString_m372259452((&V_0), _stringLiteral3451565968, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Intern_m1576245421(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_3);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (String_t*)L_3);
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0038:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)100))))
		{
			goto IL_001c;
		}
	}
	{
		V_1 = 0;
		goto IL_0058;
	}

IL_0041:
	{
		StringU5BU5D_t1281789340* L_6 = ((ConstStringTable_t3903136165_StaticFields*)il2cpp_codegen_static_fields_for(ConstStringTable_t3903136165_il2cpp_TypeInfo_var))->get_tenDict_1();
		int32_t L_7 = V_1;
		String_t* L_8 = Int32_ToString_m141394615((&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Intern_m1576245421(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (String_t*)L_9);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0058:
	{
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) < ((int32_t)((int32_t)10))))
		{
			goto IL_0041;
		}
	}
	{
		return;
	}
}
// System.String ConstStringTable::GetTimeIntern(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* ConstStringTable_GetTimeIntern_m3371539087 (RuntimeObject * __this /* static, unused */, int32_t ___time0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConstStringTable_GetTimeIntern_m3371539087_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___time0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_1 = ___time0;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)99))))
		{
			goto IL_0011;
		}
	}

IL_0009:
	{
		String_t* L_2 = Int32_ToString_m141394615((&___time0), /*hidden argument*/NULL);
		return L_2;
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConstStringTable_t3903136165_il2cpp_TypeInfo_var);
		StringU5BU5D_t1281789340* L_3 = ((ConstStringTable_t3903136165_StaticFields*)il2cpp_codegen_static_fields_for(ConstStringTable_t3903136165_il2cpp_TypeInfo_var))->get_secDict_0();
		int32_t L_4 = ___time0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		String_t* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		return L_6;
	}
}
// System.String ConstStringTable::GetNumIntern(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* ConstStringTable_GetNumIntern_m2289855099 (RuntimeObject * __this /* static, unused */, int32_t ___num0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConstStringTable_GetNumIntern_m2289855099_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___num0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_1 = ___num0;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)99))))
		{
			goto IL_0011;
		}
	}

IL_0009:
	{
		String_t* L_2 = Int32_ToString_m141394615((&___num0), /*hidden argument*/NULL);
		return L_2;
	}

IL_0011:
	{
		int32_t L_3 = ___num0;
		if ((((int32_t)L_3) < ((int32_t)((int32_t)10))))
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConstStringTable_t3903136165_il2cpp_TypeInfo_var);
		StringU5BU5D_t1281789340* L_4 = ((ConstStringTable_t3903136165_StaticFields*)il2cpp_codegen_static_fields_for(ConstStringTable_t3903136165_il2cpp_TypeInfo_var))->get_secDict_0();
		int32_t L_5 = ___num0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		String_t* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		return L_7;
	}

IL_001e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConstStringTable_t3903136165_il2cpp_TypeInfo_var);
		StringU5BU5D_t1281789340* L_8 = ((ConstStringTable_t3903136165_StaticFields*)il2cpp_codegen_static_fields_for(ConstStringTable_t3903136165_il2cpp_TypeInfo_var))->get_tenDict_1();
		int32_t L_9 = ___num0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		String_t* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		return L_11;
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
// System.Void LuaInterface.Debugger::.cctor()
extern "C" IL2CPP_METHOD_ATTR void Debugger__cctor_m1468323373 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Debugger__cctor_m1468323373_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		((Debugger_t141402865_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_t141402865_il2cpp_TypeInfo_var))->set_useLog_0((bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		((Debugger_t141402865_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_t141402865_il2cpp_TypeInfo_var))->set_threadStack_1(L_0);
		((Debugger_t141402865_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_t141402865_il2cpp_TypeInfo_var))->set_logger_2((RuntimeObject*)NULL);
		CString_t1241285187 * L_1 = (CString_t1241285187 *)il2cpp_codegen_object_new(CString_t1241285187_il2cpp_TypeInfo_var);
		CString__ctor_m787590977(L_1, ((int32_t)256), /*hidden argument*/NULL);
		((Debugger_t141402865_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_t141402865_il2cpp_TypeInfo_var))->set_sb_3(L_1);
		V_0 = ((int32_t)24);
		goto IL_0035;
	}

IL_002a:
	{
		int32_t L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(StringPool_t3132271758_il2cpp_TypeInfo_var);
		StringPool_PreAlloc_m1456199148(NULL /*static, unused*/, L_2, 2, /*hidden argument*/NULL);
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_0035:
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)((int32_t)70))))
		{
			goto IL_002a;
		}
	}
	{
		return;
	}
}
// System.String LuaInterface.Debugger::GetLogFormat(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Debugger_GetLogFormat_m3520384486 (RuntimeObject * __this /* static, unused */, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Debugger_GetLogFormat_m3520384486_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t3738529785  V_0;
	memset(&V_0, 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_0 = DateTime_get_Now_m1277138875(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(Debugger_t141402865_il2cpp_TypeInfo_var);
		CString_t1241285187 * L_1 = ((Debugger_t141402865_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_t141402865_il2cpp_TypeInfo_var))->get_sb_3();
		NullCheck(L_1);
		CString_Clear_m257417905(L_1, /*hidden argument*/NULL);
		CString_t1241285187 * L_2 = ((Debugger_t141402865_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_t141402865_il2cpp_TypeInfo_var))->get_sb_3();
		int32_t L_3 = DateTime_get_Hour_m4153505178((&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ConstStringTable_t3903136165_il2cpp_TypeInfo_var);
		String_t* L_4 = ConstStringTable_GetTimeIntern_m3371539087(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		CString_t1241285187 * L_5 = CString_Append_m1688076880(L_2, L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		CString_t1241285187 * L_6 = CString_Append_m1688076880(L_5, _stringLiteral3452614550, /*hidden argument*/NULL);
		int32_t L_7 = DateTime_get_Minute_m87527789((&V_0), /*hidden argument*/NULL);
		String_t* L_8 = ConstStringTable_GetTimeIntern_m3371539087(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		CString_t1241285187 * L_9 = CString_Append_m1688076880(L_6, L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		CString_t1241285187 * L_10 = CString_Append_m1688076880(L_9, _stringLiteral3452614550, /*hidden argument*/NULL);
		int32_t L_11 = DateTime_get_Second_m2686182256((&V_0), /*hidden argument*/NULL);
		String_t* L_12 = ConstStringTable_GetTimeIntern_m3371539087(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		CString_t1241285187 * L_13 = CString_Append_m1688076880(L_10, L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		CString_t1241285187 * L_14 = CString_Append_m1688076880(L_13, _stringLiteral3452614530, /*hidden argument*/NULL);
		int32_t L_15 = DateTime_get_Millisecond_m671827344((&V_0), /*hidden argument*/NULL);
		NullCheck(L_14);
		CString_t1241285187 * L_16 = CString_Append_m1261851706(L_14, L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		CString_t1241285187 * L_17 = CString_Append_m1688076880(L_16, _stringLiteral3452614531, /*hidden argument*/NULL);
		int32_t L_18 = Time_get_frameCount_m1220035214(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_17);
		CString_t1241285187 * L_19 = CString_Append_m1261851706(L_17, ((int32_t)((int32_t)L_18%(int32_t)((int32_t)999))), /*hidden argument*/NULL);
		NullCheck(L_19);
		CString_t1241285187 * L_20 = CString_Append_m1688076880(L_19, _stringLiteral3450517398, /*hidden argument*/NULL);
		String_t* L_21 = ___str0;
		NullCheck(L_20);
		CString_Append_m1688076880(L_20, L_21, /*hidden argument*/NULL);
		CString_t1241285187 * L_22 = ((Debugger_t141402865_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_t141402865_il2cpp_TypeInfo_var))->get_sb_3();
		NullCheck(L_22);
		int32_t L_23 = CString_get_Length_m3843387903(L_22, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(StringPool_t3132271758_il2cpp_TypeInfo_var);
		String_t* L_24 = StringPool_Alloc_m1322654057(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		V_1 = L_24;
		CString_t1241285187 * L_25 = ((Debugger_t141402865_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_t141402865_il2cpp_TypeInfo_var))->get_sb_3();
		String_t* L_26 = V_1;
		NullCheck(L_25);
		CString_CopyToString_m3824816894(L_25, L_26, /*hidden argument*/NULL);
		String_t* L_27 = V_1;
		return L_27;
	}
}
// System.Void LuaInterface.Debugger::Log(System.String)
extern "C" IL2CPP_METHOD_ATTR void Debugger_Log_m668826934 (RuntimeObject * __this /* static, unused */, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Debugger_Log_m668826934_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___str0;
		IL2CPP_RUNTIME_CLASS_INIT(Debugger_t141402865_il2cpp_TypeInfo_var);
		String_t* L_1 = Debugger_GetLogFormat_m3520384486(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		___str0 = L_1;
		bool L_2 = ((Debugger_t141402865_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_t141402865_il2cpp_TypeInfo_var))->get_useLog_0();
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		String_t* L_3 = ___str0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		goto IL_002f;
	}

IL_0017:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debugger_t141402865_il2cpp_TypeInfo_var);
		RuntimeObject* L_4 = ((Debugger_t141402865_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_t141402865_il2cpp_TypeInfo_var))->get_logger_2();
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debugger_t141402865_il2cpp_TypeInfo_var);
		RuntimeObject* L_5 = ((Debugger_t141402865_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_t141402865_il2cpp_TypeInfo_var))->get_logger_2();
		String_t* L_6 = ___str0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_5);
		InterfaceActionInvoker3< String_t*, String_t*, int32_t >::Invoke(0 /* System.Void LuaInterface.ILogger::Log(System.String,System.String,UnityEngine.LogType) */, ILogger_t2105850503_il2cpp_TypeInfo_var, L_5, L_6, L_7, 3);
	}

IL_002f:
	{
		String_t* L_8 = ___str0;
		IL2CPP_RUNTIME_CLASS_INIT(StringPool_t3132271758_il2cpp_TypeInfo_var);
		StringPool_Collect_m3573006323(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LuaInterface.Debugger::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debugger_Log_m477800873 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Debugger_Log_m477800873_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___message0;
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Debugger_t141402865_il2cpp_TypeInfo_var);
		Debugger_Log_m668826934(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LuaInterface.Debugger::Log(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debugger_Log_m492672111 (RuntimeObject * __this /* static, unused */, String_t* ___str0, RuntimeObject * ___arg01, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Debugger_Log_m492672111_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___str0;
		RuntimeObject * L_1 = ___arg01;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Format_m2844511972(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debugger_t141402865_il2cpp_TypeInfo_var);
		Debugger_Log_m668826934(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LuaInterface.Debugger::Log(System.String,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debugger_Log_m3929297881 (RuntimeObject * __this /* static, unused */, String_t* ___str0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Debugger_Log_m3929297881_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___str0;
		RuntimeObject * L_1 = ___arg01;
		RuntimeObject * L_2 = ___arg12;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Format_m2556382932(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debugger_t141402865_il2cpp_TypeInfo_var);
		Debugger_Log_m668826934(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LuaInterface.Debugger::Log(System.String,System.Object,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debugger_Log_m2294394619 (RuntimeObject * __this /* static, unused */, String_t* ___str0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Debugger_Log_m2294394619_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___str0;
		RuntimeObject * L_1 = ___arg01;
		RuntimeObject * L_2 = ___arg12;
		RuntimeObject * L_3 = ___arg23;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Format_m3339413201(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debugger_t141402865_il2cpp_TypeInfo_var);
		Debugger_Log_m668826934(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LuaInterface.Debugger::Log(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR void Debugger_Log_m2779668554 (RuntimeObject * __this /* static, unused */, String_t* ___str0, ObjectU5BU5D_t2843939325* ___param1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Debugger_Log_m2779668554_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___str0;
		ObjectU5BU5D_t2843939325* L_1 = ___param1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Format_m630303134(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debugger_t141402865_il2cpp_TypeInfo_var);
		Debugger_Log_m668826934(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LuaInterface.Debugger::LogWarning(System.String)
extern "C" IL2CPP_METHOD_ATTR void Debugger_LogWarning_m2048917719 (RuntimeObject * __this /* static, unused */, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Debugger_LogWarning_m2048917719_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___str0;
		IL2CPP_RUNTIME_CLASS_INIT(Debugger_t141402865_il2cpp_TypeInfo_var);
		String_t* L_1 = Debugger_GetLogFormat_m3520384486(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		___str0 = L_1;
		bool L_2 = ((Debugger_t141402865_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_t141402865_il2cpp_TypeInfo_var))->get_useLog_0();
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		String_t* L_3 = ___str0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		goto IL_0031;
	}

IL_0017:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debugger_t141402865_il2cpp_TypeInfo_var);
		RuntimeObject* L_4 = ((Debugger_t141402865_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_t141402865_il2cpp_TypeInfo_var))->get_logger_2();
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t3465565809_il2cpp_TypeInfo_var);
		String_t* L_5 = StackTraceUtility_ExtractStackTrace_m3279197967(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_5;
		IL2CPP_RUNTIME_CLASS_INIT(Debugger_t141402865_il2cpp_TypeInfo_var);
		RuntimeObject* L_6 = ((Debugger_t141402865_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_t141402865_il2cpp_TypeInfo_var))->get_logger_2();
		String_t* L_7 = ___str0;
		String_t* L_8 = V_0;
		NullCheck(L_6);
		InterfaceActionInvoker3< String_t*, String_t*, int32_t >::Invoke(0 /* System.Void LuaInterface.ILogger::Log(System.String,System.String,UnityEngine.LogType) */, ILogger_t2105850503_il2cpp_TypeInfo_var, L_6, L_7, L_8, 2);
	}

IL_0031:
	{
		String_t* L_9 = ___str0;
		IL2CPP_RUNTIME_CLASS_INIT(StringPool_t3132271758_il2cpp_TypeInfo_var);
		StringPool_Collect_m3573006323(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LuaInterface.Debugger::LogWarning(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debugger_LogWarning_m3982969332 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Debugger_LogWarning_m3982969332_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___message0;
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Debugger_t141402865_il2cpp_TypeInfo_var);
		Debugger_LogWarning_m2048917719(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LuaInterface.Debugger::LogWarning(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debugger_LogWarning_m1818850028 (RuntimeObject * __this /* static, unused */, String_t* ___str0, RuntimeObject * ___arg01, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Debugger_LogWarning_m1818850028_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___str0;
		RuntimeObject * L_1 = ___arg01;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Format_m2844511972(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debugger_t141402865_il2cpp_TypeInfo_var);
		Debugger_LogWarning_m2048917719(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LuaInterface.Debugger::LogWarning(System.String,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debugger_LogWarning_m2485008016 (RuntimeObject * __this /* static, unused */, String_t* ___str0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Debugger_LogWarning_m2485008016_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___str0;
		RuntimeObject * L_1 = ___arg01;
		RuntimeObject * L_2 = ___arg12;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Format_m2556382932(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debugger_t141402865_il2cpp_TypeInfo_var);
		Debugger_LogWarning_m2048917719(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LuaInterface.Debugger::LogWarning(System.String,System.Object,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debugger_LogWarning_m1955674266 (RuntimeObject * __this /* static, unused */, String_t* ___str0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Debugger_LogWarning_m1955674266_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___str0;
		RuntimeObject * L_1 = ___arg01;
		RuntimeObject * L_2 = ___arg12;
		RuntimeObject * L_3 = ___arg23;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Format_m3339413201(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debugger_t141402865_il2cpp_TypeInfo_var);
		Debugger_LogWarning_m2048917719(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LuaInterface.Debugger::LogWarning(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR void Debugger_LogWarning_m4189345595 (RuntimeObject * __this /* static, unused */, String_t* ___str0, ObjectU5BU5D_t2843939325* ___param1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Debugger_LogWarning_m4189345595_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___str0;
		ObjectU5BU5D_t2843939325* L_1 = ___param1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Format_m630303134(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debugger_t141402865_il2cpp_TypeInfo_var);
		Debugger_LogWarning_m2048917719(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LuaInterface.Debugger::LogError(System.String)
extern "C" IL2CPP_METHOD_ATTR void Debugger_LogError_m2471643994 (RuntimeObject * __this /* static, unused */, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Debugger_LogError_m2471643994_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___str0;
		IL2CPP_RUNTIME_CLASS_INIT(Debugger_t141402865_il2cpp_TypeInfo_var);
		String_t* L_1 = Debugger_GetLogFormat_m3520384486(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		___str0 = L_1;
		bool L_2 = ((Debugger_t141402865_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_t141402865_il2cpp_TypeInfo_var))->get_useLog_0();
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		String_t* L_3 = ___str0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		goto IL_0031;
	}

IL_0017:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debugger_t141402865_il2cpp_TypeInfo_var);
		RuntimeObject* L_4 = ((Debugger_t141402865_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_t141402865_il2cpp_TypeInfo_var))->get_logger_2();
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t3465565809_il2cpp_TypeInfo_var);
		String_t* L_5 = StackTraceUtility_ExtractStackTrace_m3279197967(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_5;
		IL2CPP_RUNTIME_CLASS_INIT(Debugger_t141402865_il2cpp_TypeInfo_var);
		RuntimeObject* L_6 = ((Debugger_t141402865_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_t141402865_il2cpp_TypeInfo_var))->get_logger_2();
		String_t* L_7 = ___str0;
		String_t* L_8 = V_0;
		NullCheck(L_6);
		InterfaceActionInvoker3< String_t*, String_t*, int32_t >::Invoke(0 /* System.Void LuaInterface.ILogger::Log(System.String,System.String,UnityEngine.LogType) */, ILogger_t2105850503_il2cpp_TypeInfo_var, L_6, L_7, L_8, 0);
	}

IL_0031:
	{
		String_t* L_9 = ___str0;
		IL2CPP_RUNTIME_CLASS_INIT(StringPool_t3132271758_il2cpp_TypeInfo_var);
		StringPool_Collect_m3573006323(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LuaInterface.Debugger::LogError(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debugger_LogError_m3210241417 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Debugger_LogError_m3210241417_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___message0;
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Debugger_t141402865_il2cpp_TypeInfo_var);
		Debugger_LogError_m2471643994(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LuaInterface.Debugger::LogError(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debugger_LogError_m2778788262 (RuntimeObject * __this /* static, unused */, String_t* ___str0, RuntimeObject * ___arg01, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Debugger_LogError_m2778788262_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___str0;
		RuntimeObject * L_1 = ___arg01;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Format_m2844511972(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debugger_t141402865_il2cpp_TypeInfo_var);
		Debugger_LogError_m2471643994(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LuaInterface.Debugger::LogError(System.String,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debugger_LogError_m2902956803 (RuntimeObject * __this /* static, unused */, String_t* ___str0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Debugger_LogError_m2902956803_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___str0;
		RuntimeObject * L_1 = ___arg01;
		RuntimeObject * L_2 = ___arg12;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Format_m2556382932(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debugger_t141402865_il2cpp_TypeInfo_var);
		Debugger_LogError_m2471643994(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LuaInterface.Debugger::LogError(System.String,System.Object,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debugger_LogError_m2954899654 (RuntimeObject * __this /* static, unused */, String_t* ___str0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Debugger_LogError_m2954899654_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___str0;
		RuntimeObject * L_1 = ___arg01;
		RuntimeObject * L_2 = ___arg12;
		RuntimeObject * L_3 = ___arg23;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Format_m3339413201(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debugger_t141402865_il2cpp_TypeInfo_var);
		Debugger_LogError_m2471643994(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LuaInterface.Debugger::LogError(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR void Debugger_LogError_m1004646199 (RuntimeObject * __this /* static, unused */, String_t* ___str0, ObjectU5BU5D_t2843939325* ___param1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Debugger_LogError_m1004646199_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___str0;
		ObjectU5BU5D_t2843939325* L_1 = ___param1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Format_m630303134(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debugger_t141402865_il2cpp_TypeInfo_var);
		Debugger_LogError_m2471643994(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LuaInterface.Debugger::LogException(System.Exception)
extern "C" IL2CPP_METHOD_ATTR void Debugger_LogException_m723991849 (RuntimeObject * __this /* static, unused */, Exception_t * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Debugger_LogException_m723991849_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		Exception_t * L_0 = ___e0;
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_StackTrace() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Debugger_t141402865_il2cpp_TypeInfo_var);
		((Debugger_t141402865_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_t141402865_il2cpp_TypeInfo_var))->set_threadStack_1(L_1);
		Exception_t * L_2 = ___e0;
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_2);
		String_t* L_4 = Debugger_GetLogFormat_m3520384486(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		bool L_5 = ((Debugger_t141402865_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_t141402865_il2cpp_TypeInfo_var))->get_useLog_0();
		if (!L_5)
		{
			goto IL_0026;
		}
	}
	{
		String_t* L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		goto IL_003e;
	}

IL_0026:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debugger_t141402865_il2cpp_TypeInfo_var);
		RuntimeObject* L_7 = ((Debugger_t141402865_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_t141402865_il2cpp_TypeInfo_var))->get_logger_2();
		if (!L_7)
		{
			goto IL_003e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debugger_t141402865_il2cpp_TypeInfo_var);
		RuntimeObject* L_8 = ((Debugger_t141402865_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_t141402865_il2cpp_TypeInfo_var))->get_logger_2();
		String_t* L_9 = V_0;
		String_t* L_10 = ((Debugger_t141402865_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_t141402865_il2cpp_TypeInfo_var))->get_threadStack_1();
		NullCheck(L_8);
		InterfaceActionInvoker3< String_t*, String_t*, int32_t >::Invoke(0 /* System.Void LuaInterface.ILogger::Log(System.String,System.String,UnityEngine.LogType) */, ILogger_t2105850503_il2cpp_TypeInfo_var, L_8, L_9, L_10, 4);
	}

IL_003e:
	{
		String_t* L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(StringPool_t3132271758_il2cpp_TypeInfo_var);
		StringPool_Collect_m3573006323(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LuaInterface.Debugger::LogException(System.String,System.Exception)
extern "C" IL2CPP_METHOD_ATTR void Debugger_LogException_m762923680 (RuntimeObject * __this /* static, unused */, String_t* ___str0, Exception_t * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Debugger_LogException_m762923680_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t * L_0 = ___e1;
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_StackTrace() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Debugger_t141402865_il2cpp_TypeInfo_var);
		((Debugger_t141402865_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_t141402865_il2cpp_TypeInfo_var))->set_threadStack_1(L_1);
		String_t* L_2 = ___str0;
		Exception_t * L_3 = ___e1;
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m3937257545(NULL /*static, unused*/, L_2, L_4, /*hidden argument*/NULL);
		String_t* L_6 = Debugger_GetLogFormat_m3520384486(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		___str0 = L_6;
		bool L_7 = ((Debugger_t141402865_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_t141402865_il2cpp_TypeInfo_var))->get_useLog_0();
		if (!L_7)
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_8 = ___str0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		goto IL_0045;
	}

IL_002d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debugger_t141402865_il2cpp_TypeInfo_var);
		RuntimeObject* L_9 = ((Debugger_t141402865_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_t141402865_il2cpp_TypeInfo_var))->get_logger_2();
		if (!L_9)
		{
			goto IL_0045;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debugger_t141402865_il2cpp_TypeInfo_var);
		RuntimeObject* L_10 = ((Debugger_t141402865_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_t141402865_il2cpp_TypeInfo_var))->get_logger_2();
		String_t* L_11 = ___str0;
		String_t* L_12 = ((Debugger_t141402865_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_t141402865_il2cpp_TypeInfo_var))->get_threadStack_1();
		NullCheck(L_10);
		InterfaceActionInvoker3< String_t*, String_t*, int32_t >::Invoke(0 /* System.Void LuaInterface.ILogger::Log(System.String,System.String,UnityEngine.LogType) */, ILogger_t2105850503_il2cpp_TypeInfo_var, L_10, L_11, L_12, 4);
	}

IL_0045:
	{
		String_t* L_13 = ___str0;
		IL2CPP_RUNTIME_CLASS_INIT(StringPool_t3132271758_il2cpp_TypeInfo_var);
		StringPool_Collect_m3573006323(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
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
// System.Void LuaInterface.ExtensionMethods::AppendLineEx(System.Text.StringBuilder,System.String)
extern "C" IL2CPP_METHOD_ATTR void ExtensionMethods_AppendLineEx_m4148055515 (RuntimeObject * __this /* static, unused */, StringBuilder_t * ___sb0, String_t* ___str1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExtensionMethods_AppendLineEx_m4148055515_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t * L_0 = ___sb0;
		String_t* L_1 = ___str1;
		NullCheck(L_0);
		StringBuilder_t * L_2 = StringBuilder_Append_m1965104174(L_0, L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		StringBuilder_Append_m1965104174(L_2, _stringLiteral3453007779, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
