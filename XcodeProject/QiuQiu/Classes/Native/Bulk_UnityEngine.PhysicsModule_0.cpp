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


// UnityEngine.BoxCollider
struct BoxCollider_t1640800422;
// UnityEngine.Collider
struct Collider_t1773347010;
// UnityEngine.CapsuleCollider
struct CapsuleCollider_t197597763;
// UnityEngine.CharacterController
struct CharacterController_t1138636865;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Rigidbody
struct Rigidbody_t3916780224;
// UnityEngine.PhysicMaterial
struct PhysicMaterial_t2874185564;
// UnityEngine.MeshCollider
struct MeshCollider_t903564387;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.Object
struct Object_t631007953;
// System.String
struct String_t;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t1690781147;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t4234922487;
// UnityEngine.Renderer
struct Renderer_t2627027031;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.SphereCollider
struct SphereCollider_t2077223608;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t872956888;

extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern const uint32_t PhysicMaterial__ctor_m1658318133_MetadataUsageId;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern const uint32_t Physics_Linecast_m461729236_MetadataUsageId;
extern const uint32_t Physics_Linecast_m1431720142_MetadataUsageId;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern const uint32_t Physics_CheckBox_m146766017_MetadataUsageId;
extern const uint32_t Physics_OverlapBox_m1419232088_MetadataUsageId;
extern const uint32_t Physics_OverlapBoxNonAlloc_m4170951187_MetadataUsageId;
extern const uint32_t Physics_BoxCastAll_m4181672243_MetadataUsageId;
extern const uint32_t Physics_BoxCastNonAlloc_m3577326959_MetadataUsageId;
extern const uint32_t Physics_BoxCast_m2235165415_MetadataUsageId;
extern const uint32_t Physics_BoxCast_m240943544_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisRenderer_t2627027031_m3466210452_RuntimeMethod_var;
extern const uint32_t RaycastHit_get_lightmapCoord_m3586439682_MetadataUsageId;
extern const uint32_t RaycastHit_get_rigidbody_m2320267866_MetadataUsageId;
extern const uint32_t RaycastHit_get_transform_m942054759_MetadataUsageId;
struct ContactPoint_t3758755253 ;

struct ContactPointU5BU5D_t872956888;
struct RaycastHitU5BU5D_t1690781147;
struct ColliderU5BU5D_t4234922487;


#ifndef U3CMODULEU3E_T692745545_H
#define U3CMODULEU3E_T692745545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745545 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745545_H
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
#ifndef PHYSICS_T2310948930_H
#define PHYSICS_T2310948930_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Physics
struct  Physics_t2310948930  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHYSICS_T2310948930_H
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
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef VECTOR4_T3319028937_H
#define VECTOR4_T3319028937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t3319028937 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t3319028937_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t3319028937  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t3319028937  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t3319028937  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t3319028937  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___zeroVector_5)); }
	inline Vector4_t3319028937  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t3319028937 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t3319028937  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___oneVector_6)); }
	inline Vector4_t3319028937  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t3319028937 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t3319028937  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t3319028937  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t3319028937 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t3319028937  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t3319028937  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t3319028937 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t3319028937  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T3319028937_H
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
#ifndef COLLISIONFLAGS_T1776808576_H
#define COLLISIONFLAGS_T1776808576_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CollisionFlags
struct  CollisionFlags_t1776808576 
{
public:
	// System.Int32 UnityEngine.CollisionFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CollisionFlags_t1776808576, ___value___1)); }
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
#endif // COLLISIONFLAGS_T1776808576_H
#ifndef COLLISIONDETECTIONMODE_T1743609252_H
#define COLLISIONDETECTIONMODE_T1743609252_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CollisionDetectionMode
struct  CollisionDetectionMode_t1743609252 
{
public:
	// System.Int32 UnityEngine.CollisionDetectionMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CollisionDetectionMode_t1743609252, ___value___1)); }
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
#endif // COLLISIONDETECTIONMODE_T1743609252_H
#ifndef MESHCOLLIDERCOOKINGOPTIONS_T1566738986_H
#define MESHCOLLIDERCOOKINGOPTIONS_T1566738986_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshColliderCookingOptions
struct  MeshColliderCookingOptions_t1566738986 
{
public:
	// System.Int32 UnityEngine.MeshColliderCookingOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MeshColliderCookingOptions_t1566738986, ___value___1)); }
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
#endif // MESHCOLLIDERCOOKINGOPTIONS_T1566738986_H
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
#ifndef QUERYTRIGGERINTERACTION_T962663221_H
#define QUERYTRIGGERINTERACTION_T962663221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.QueryTriggerInteraction
struct  QueryTriggerInteraction_t962663221 
{
public:
	// System.Int32 UnityEngine.QueryTriggerInteraction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(QueryTriggerInteraction_t962663221, ___value___1)); }
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
#endif // QUERYTRIGGERINTERACTION_T962663221_H
#ifndef RIGIDBODYCONSTRAINTS_T3348042902_H
#define RIGIDBODYCONSTRAINTS_T3348042902_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RigidbodyConstraints
struct  RigidbodyConstraints_t3348042902 
{
public:
	// System.Int32 UnityEngine.RigidbodyConstraints::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RigidbodyConstraints_t3348042902, ___value___1)); }
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
#endif // RIGIDBODYCONSTRAINTS_T3348042902_H
#ifndef RIGIDBODYINTERPOLATION_T4132671583_H
#define RIGIDBODYINTERPOLATION_T4132671583_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RigidbodyInterpolation
struct  RigidbodyInterpolation_t4132671583 
{
public:
	// System.Int32 UnityEngine.RigidbodyInterpolation::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RigidbodyInterpolation_t4132671583, ___value___1)); }
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
#endif // RIGIDBODYINTERPOLATION_T4132671583_H
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
#ifndef RAY_T3785851493_H
#define RAY_T3785851493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Ray
struct  Ray_t3785851493 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t3722313464  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t3722313464  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t3785851493, ___m_Origin_0)); }
	inline Vector3_t3722313464  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t3722313464 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t3722313464  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t3785851493, ___m_Direction_1)); }
	inline Vector3_t3722313464  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t3722313464 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t3722313464  value)
	{
		___m_Direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAY_T3785851493_H
#ifndef RAYCASTHIT_T1056001966_H
#define RAYCASTHIT_T1056001966_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RaycastHit
struct  RaycastHit_t1056001966 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t3722313464  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t3722313464  ___m_Normal_1;
	// System.Int32 UnityEngine.RaycastHit::m_FaceID
	int32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t2156229523  ___m_UV_4;
	// UnityEngine.Collider UnityEngine.RaycastHit::m_Collider
	Collider_t1773347010 * ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Point_0)); }
	inline Vector3_t3722313464  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t3722313464 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t3722313464  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Normal_1)); }
	inline Vector3_t3722313464  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t3722313464 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t3722313464  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_FaceID_2)); }
	inline int32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline int32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(int32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_UV_4)); }
	inline Vector2_t2156229523  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_t2156229523 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_t2156229523  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Collider_5)); }
	inline Collider_t1773347010 * get_m_Collider_5() const { return ___m_Collider_5; }
	inline Collider_t1773347010 ** get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(Collider_t1773347010 * value)
	{
		___m_Collider_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RaycastHit
struct RaycastHit_t1056001966_marshaled_pinvoke
{
	Vector3_t3722313464  ___m_Point_0;
	Vector3_t3722313464  ___m_Normal_1;
	int32_t ___m_FaceID_2;
	float ___m_Distance_3;
	Vector2_t2156229523  ___m_UV_4;
	Collider_t1773347010 * ___m_Collider_5;
};
// Native definition for COM marshalling of UnityEngine.RaycastHit
struct RaycastHit_t1056001966_marshaled_com
{
	Vector3_t3722313464  ___m_Point_0;
	Vector3_t3722313464  ___m_Normal_1;
	int32_t ___m_FaceID_2;
	float ___m_Distance_3;
	Vector2_t2156229523  ___m_UV_4;
	Collider_t1773347010 * ___m_Collider_5;
};
#endif // RAYCASTHIT_T1056001966_H
#ifndef COLLISION_T4262080450_H
#define COLLISION_T4262080450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collision
struct  Collision_t4262080450  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t3722313464  ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t3722313464  ___m_RelativeVelocity_1;
	// UnityEngine.Rigidbody UnityEngine.Collision::m_Rigidbody
	Rigidbody_t3916780224 * ___m_Rigidbody_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1773347010 * ___m_Collider_3;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_Contacts
	ContactPointU5BU5D_t872956888* ___m_Contacts_4;

public:
	inline static int32_t get_offset_of_m_Impulse_0() { return static_cast<int32_t>(offsetof(Collision_t4262080450, ___m_Impulse_0)); }
	inline Vector3_t3722313464  get_m_Impulse_0() const { return ___m_Impulse_0; }
	inline Vector3_t3722313464 * get_address_of_m_Impulse_0() { return &___m_Impulse_0; }
	inline void set_m_Impulse_0(Vector3_t3722313464  value)
	{
		___m_Impulse_0 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_1() { return static_cast<int32_t>(offsetof(Collision_t4262080450, ___m_RelativeVelocity_1)); }
	inline Vector3_t3722313464  get_m_RelativeVelocity_1() const { return ___m_RelativeVelocity_1; }
	inline Vector3_t3722313464 * get_address_of_m_RelativeVelocity_1() { return &___m_RelativeVelocity_1; }
	inline void set_m_RelativeVelocity_1(Vector3_t3722313464  value)
	{
		___m_RelativeVelocity_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision_t4262080450, ___m_Rigidbody_2)); }
	inline Rigidbody_t3916780224 * get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline Rigidbody_t3916780224 ** get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(Rigidbody_t3916780224 * value)
	{
		___m_Rigidbody_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Rigidbody_2), value);
	}

	inline static int32_t get_offset_of_m_Collider_3() { return static_cast<int32_t>(offsetof(Collision_t4262080450, ___m_Collider_3)); }
	inline Collider_t1773347010 * get_m_Collider_3() const { return ___m_Collider_3; }
	inline Collider_t1773347010 ** get_address_of_m_Collider_3() { return &___m_Collider_3; }
	inline void set_m_Collider_3(Collider_t1773347010 * value)
	{
		___m_Collider_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_3), value);
	}

	inline static int32_t get_offset_of_m_Contacts_4() { return static_cast<int32_t>(offsetof(Collision_t4262080450, ___m_Contacts_4)); }
	inline ContactPointU5BU5D_t872956888* get_m_Contacts_4() const { return ___m_Contacts_4; }
	inline ContactPointU5BU5D_t872956888** get_address_of_m_Contacts_4() { return &___m_Contacts_4; }
	inline void set_m_Contacts_4(ContactPointU5BU5D_t872956888* value)
	{
		___m_Contacts_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Contacts_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_t4262080450_marshaled_pinvoke
{
	Vector3_t3722313464  ___m_Impulse_0;
	Vector3_t3722313464  ___m_RelativeVelocity_1;
	Rigidbody_t3916780224 * ___m_Rigidbody_2;
	Collider_t1773347010 * ___m_Collider_3;
	ContactPoint_t3758755253 * ___m_Contacts_4;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_t4262080450_marshaled_com
{
	Vector3_t3722313464  ___m_Impulse_0;
	Vector3_t3722313464  ___m_RelativeVelocity_1;
	Rigidbody_t3916780224 * ___m_Rigidbody_2;
	Collider_t1773347010 * ___m_Collider_3;
	ContactPoint_t3758755253 * ___m_Contacts_4;
};
#endif // COLLISION_T4262080450_H
#ifndef CONTACTPOINT_T3758755253_H
#define CONTACTPOINT_T3758755253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ContactPoint
struct  ContactPoint_t3758755253 
{
public:
	// UnityEngine.Vector3 UnityEngine.ContactPoint::m_Point
	Vector3_t3722313464  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.ContactPoint::m_Normal
	Vector3_t3722313464  ___m_Normal_1;
	// System.Int32 UnityEngine.ContactPoint::m_ThisColliderInstanceID
	int32_t ___m_ThisColliderInstanceID_2;
	// System.Int32 UnityEngine.ContactPoint::m_OtherColliderInstanceID
	int32_t ___m_OtherColliderInstanceID_3;
	// System.Single UnityEngine.ContactPoint::m_Separation
	float ___m_Separation_4;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(ContactPoint_t3758755253, ___m_Point_0)); }
	inline Vector3_t3722313464  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t3722313464 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t3722313464  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(ContactPoint_t3758755253, ___m_Normal_1)); }
	inline Vector3_t3722313464  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t3722313464 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t3722313464  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_ThisColliderInstanceID_2() { return static_cast<int32_t>(offsetof(ContactPoint_t3758755253, ___m_ThisColliderInstanceID_2)); }
	inline int32_t get_m_ThisColliderInstanceID_2() const { return ___m_ThisColliderInstanceID_2; }
	inline int32_t* get_address_of_m_ThisColliderInstanceID_2() { return &___m_ThisColliderInstanceID_2; }
	inline void set_m_ThisColliderInstanceID_2(int32_t value)
	{
		___m_ThisColliderInstanceID_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherColliderInstanceID_3() { return static_cast<int32_t>(offsetof(ContactPoint_t3758755253, ___m_OtherColliderInstanceID_3)); }
	inline int32_t get_m_OtherColliderInstanceID_3() const { return ___m_OtherColliderInstanceID_3; }
	inline int32_t* get_address_of_m_OtherColliderInstanceID_3() { return &___m_OtherColliderInstanceID_3; }
	inline void set_m_OtherColliderInstanceID_3(int32_t value)
	{
		___m_OtherColliderInstanceID_3 = value;
	}

	inline static int32_t get_offset_of_m_Separation_4() { return static_cast<int32_t>(offsetof(ContactPoint_t3758755253, ___m_Separation_4)); }
	inline float get_m_Separation_4() const { return ___m_Separation_4; }
	inline float* get_address_of_m_Separation_4() { return &___m_Separation_4; }
	inline void set_m_Separation_4(float value)
	{
		___m_Separation_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTACTPOINT_T3758755253_H
#ifndef CONTROLLERCOLLIDERHIT_T240592346_H
#define CONTROLLERCOLLIDERHIT_T240592346_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ControllerColliderHit
struct  ControllerColliderHit_t240592346  : public RuntimeObject
{
public:
	// UnityEngine.CharacterController UnityEngine.ControllerColliderHit::m_Controller
	CharacterController_t1138636865 * ___m_Controller_0;
	// UnityEngine.Collider UnityEngine.ControllerColliderHit::m_Collider
	Collider_t1773347010 * ___m_Collider_1;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_Point
	Vector3_t3722313464  ___m_Point_2;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_Normal
	Vector3_t3722313464  ___m_Normal_3;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_MoveDirection
	Vector3_t3722313464  ___m_MoveDirection_4;
	// System.Single UnityEngine.ControllerColliderHit::m_MoveLength
	float ___m_MoveLength_5;
	// System.Int32 UnityEngine.ControllerColliderHit::m_Push
	int32_t ___m_Push_6;

public:
	inline static int32_t get_offset_of_m_Controller_0() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t240592346, ___m_Controller_0)); }
	inline CharacterController_t1138636865 * get_m_Controller_0() const { return ___m_Controller_0; }
	inline CharacterController_t1138636865 ** get_address_of_m_Controller_0() { return &___m_Controller_0; }
	inline void set_m_Controller_0(CharacterController_t1138636865 * value)
	{
		___m_Controller_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Controller_0), value);
	}

	inline static int32_t get_offset_of_m_Collider_1() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t240592346, ___m_Collider_1)); }
	inline Collider_t1773347010 * get_m_Collider_1() const { return ___m_Collider_1; }
	inline Collider_t1773347010 ** get_address_of_m_Collider_1() { return &___m_Collider_1; }
	inline void set_m_Collider_1(Collider_t1773347010 * value)
	{
		___m_Collider_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_1), value);
	}

	inline static int32_t get_offset_of_m_Point_2() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t240592346, ___m_Point_2)); }
	inline Vector3_t3722313464  get_m_Point_2() const { return ___m_Point_2; }
	inline Vector3_t3722313464 * get_address_of_m_Point_2() { return &___m_Point_2; }
	inline void set_m_Point_2(Vector3_t3722313464  value)
	{
		___m_Point_2 = value;
	}

	inline static int32_t get_offset_of_m_Normal_3() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t240592346, ___m_Normal_3)); }
	inline Vector3_t3722313464  get_m_Normal_3() const { return ___m_Normal_3; }
	inline Vector3_t3722313464 * get_address_of_m_Normal_3() { return &___m_Normal_3; }
	inline void set_m_Normal_3(Vector3_t3722313464  value)
	{
		___m_Normal_3 = value;
	}

	inline static int32_t get_offset_of_m_MoveDirection_4() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t240592346, ___m_MoveDirection_4)); }
	inline Vector3_t3722313464  get_m_MoveDirection_4() const { return ___m_MoveDirection_4; }
	inline Vector3_t3722313464 * get_address_of_m_MoveDirection_4() { return &___m_MoveDirection_4; }
	inline void set_m_MoveDirection_4(Vector3_t3722313464  value)
	{
		___m_MoveDirection_4 = value;
	}

	inline static int32_t get_offset_of_m_MoveLength_5() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t240592346, ___m_MoveLength_5)); }
	inline float get_m_MoveLength_5() const { return ___m_MoveLength_5; }
	inline float* get_address_of_m_MoveLength_5() { return &___m_MoveLength_5; }
	inline void set_m_MoveLength_5(float value)
	{
		___m_MoveLength_5 = value;
	}

	inline static int32_t get_offset_of_m_Push_6() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t240592346, ___m_Push_6)); }
	inline int32_t get_m_Push_6() const { return ___m_Push_6; }
	inline int32_t* get_address_of_m_Push_6() { return &___m_Push_6; }
	inline void set_m_Push_6(int32_t value)
	{
		___m_Push_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ControllerColliderHit
struct ControllerColliderHit_t240592346_marshaled_pinvoke
{
	CharacterController_t1138636865 * ___m_Controller_0;
	Collider_t1773347010 * ___m_Collider_1;
	Vector3_t3722313464  ___m_Point_2;
	Vector3_t3722313464  ___m_Normal_3;
	Vector3_t3722313464  ___m_MoveDirection_4;
	float ___m_MoveLength_5;
	int32_t ___m_Push_6;
};
// Native definition for COM marshalling of UnityEngine.ControllerColliderHit
struct ControllerColliderHit_t240592346_marshaled_com
{
	CharacterController_t1138636865 * ___m_Controller_0;
	Collider_t1773347010 * ___m_Collider_1;
	Vector3_t3722313464  ___m_Point_2;
	Vector3_t3722313464  ___m_Normal_3;
	Vector3_t3722313464  ___m_MoveDirection_4;
	float ___m_MoveLength_5;
	int32_t ___m_Push_6;
};
#endif // CONTROLLERCOLLIDERHIT_T240592346_H
#ifndef FORCEMODE_T3656391766_H
#define FORCEMODE_T3656391766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ForceMode
struct  ForceMode_t3656391766 
{
public:
	// System.Int32 UnityEngine.ForceMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ForceMode_t3656391766, ___value___1)); }
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
#endif // FORCEMODE_T3656391766_H
#ifndef PHYSICMATERIAL_T2874185564_H
#define PHYSICMATERIAL_T2874185564_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PhysicMaterial
struct  PhysicMaterial_t2874185564  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHYSICMATERIAL_T2874185564_H
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
#ifndef MESH_T3648964284_H
#define MESH_T3648964284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh
struct  Mesh_t3648964284  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESH_T3648964284_H
#ifndef RENDERER_T2627027031_H
#define RENDERER_T2627027031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2627027031  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2627027031_H
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
#ifndef RIGIDBODY_T3916780224_H
#define RIGIDBODY_T3916780224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody
struct  Rigidbody_t3916780224  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY_T3916780224_H
#ifndef COLLIDER_T1773347010_H
#define COLLIDER_T1773347010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider
struct  Collider_t1773347010  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER_T1773347010_H
#ifndef BOXCOLLIDER_T1640800422_H
#define BOXCOLLIDER_T1640800422_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.BoxCollider
struct  BoxCollider_t1640800422  : public Collider_t1773347010
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOXCOLLIDER_T1640800422_H
#ifndef SPHERECOLLIDER_T2077223608_H
#define SPHERECOLLIDER_T2077223608_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SphereCollider
struct  SphereCollider_t2077223608  : public Collider_t1773347010
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPHERECOLLIDER_T2077223608_H
#ifndef MESHCOLLIDER_T903564387_H
#define MESHCOLLIDER_T903564387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshCollider
struct  MeshCollider_t903564387  : public Collider_t1773347010
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHCOLLIDER_T903564387_H
#ifndef CAPSULECOLLIDER_T197597763_H
#define CAPSULECOLLIDER_T197597763_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CapsuleCollider
struct  CapsuleCollider_t197597763  : public Collider_t1773347010
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAPSULECOLLIDER_T197597763_H
#ifndef CHARACTERCONTROLLER_T1138636865_H
#define CHARACTERCONTROLLER_T1138636865_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CharacterController
struct  CharacterController_t1138636865  : public Collider_t1773347010
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARACTERCONTROLLER_T1138636865_H
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t872956888  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ContactPoint_t3758755253  m_Items[1];

public:
	inline ContactPoint_t3758755253  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ContactPoint_t3758755253 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ContactPoint_t3758755253  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ContactPoint_t3758755253  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ContactPoint_t3758755253 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ContactPoint_t3758755253  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t1690781147  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RaycastHit_t1056001966  m_Items[1];

public:
	inline RaycastHit_t1056001966  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastHit_t1056001966 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastHit_t1056001966  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RaycastHit_t1056001966  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastHit_t1056001966 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastHit_t1056001966  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Collider[]
struct ColliderU5BU5D_t4234922487  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Collider_t1773347010 * m_Items[1];

public:
	inline Collider_t1773347010 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t1773347010 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t1773347010 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Collider_t1773347010 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t1773347010 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t1773347010 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.Collider::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Collider__ctor_m1632031523 (Collider_t1773347010 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.BoxCollider::INTERNAL_get_center(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void BoxCollider_INTERNAL_get_center_m2114504947 (BoxCollider_t1640800422 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.BoxCollider::INTERNAL_set_center(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void BoxCollider_INTERNAL_set_center_m471190135 (BoxCollider_t1640800422 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.BoxCollider::INTERNAL_get_size(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void BoxCollider_INTERNAL_get_size_m3071281718 (BoxCollider_t1640800422 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.BoxCollider::INTERNAL_set_size(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void BoxCollider_INTERNAL_set_size_m404545260 (BoxCollider_t1640800422 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.CapsuleCollider::INTERNAL_get_center(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void CapsuleCollider_INTERNAL_get_center_m4188094250 (CapsuleCollider_t197597763 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.CapsuleCollider::INTERNAL_set_center(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void CapsuleCollider_INTERNAL_set_center_m2973340406 (CapsuleCollider_t197597763 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.CharacterController::INTERNAL_CALL_SimpleMove(UnityEngine.CharacterController,UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR bool CharacterController_INTERNAL_CALL_SimpleMove_m1284229908 (RuntimeObject * __this /* static, unused */, CharacterController_t1138636865 * ___self0, Vector3_t3722313464 * ___speed1, const RuntimeMethod* method);
// UnityEngine.CollisionFlags UnityEngine.CharacterController::INTERNAL_CALL_Move(UnityEngine.CharacterController,UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR int32_t CharacterController_INTERNAL_CALL_Move_m3619696939 (RuntimeObject * __this /* static, unused */, CharacterController_t1138636865 * ___self0, Vector3_t3722313464 * ___motion1, const RuntimeMethod* method);
// System.Void UnityEngine.CharacterController::INTERNAL_get_velocity(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void CharacterController_INTERNAL_get_velocity_m2491100652 (CharacterController_t1138636865 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.CharacterController::INTERNAL_get_center(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void CharacterController_INTERNAL_get_center_m3143371299 (CharacterController_t1138636865 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.CharacterController::INTERNAL_set_center(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void CharacterController_INTERNAL_set_center_m3904896258 (CharacterController_t1138636865 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Component::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Component__ctor_m1928064382 (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Collider::INTERNAL_CALL_ClosestPointOnBounds(UnityEngine.Collider,UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Collider_INTERNAL_CALL_ClosestPointOnBounds_m3377226027 (RuntimeObject * __this /* static, unused */, Collider_t1773347010 * ___self0, Vector3_t3722313464 * ___position1, Vector3_t3722313464 * ___value2, const RuntimeMethod* method);
// System.Void UnityEngine.Collider::INTERNAL_CALL_ClosestPoint(UnityEngine.Collider,UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Collider_INTERNAL_CALL_ClosestPoint_m3829118255 (RuntimeObject * __this /* static, unused */, Collider_t1773347010 * ___self0, Vector3_t3722313464 * ___position1, Vector3_t3722313464 * ___value2, const RuntimeMethod* method);
// System.Void UnityEngine.Collider::INTERNAL_get_bounds(UnityEngine.Bounds&)
extern "C" IL2CPP_METHOD_ATTR void Collider_INTERNAL_get_bounds_m3455869751 (Collider_t1773347010 * __this, Bounds_t2266837910 * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Collider::INTERNAL_CALL_Internal_Raycast(UnityEngine.Collider,UnityEngine.Ray&,UnityEngine.RaycastHit&,System.Single)
extern "C" IL2CPP_METHOD_ATTR bool Collider_INTERNAL_CALL_Internal_Raycast_m1864235715 (RuntimeObject * __this /* static, unused */, Collider_t1773347010 * ___col0, Ray_t3785851493 * ___ray1, RaycastHit_t1056001966 * ___hitInfo2, float ___maxDistance3, const RuntimeMethod* method);
// System.Boolean UnityEngine.Collider::Internal_Raycast(UnityEngine.Collider,UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
extern "C" IL2CPP_METHOD_ATTR bool Collider_Internal_Raycast_m2175318952 (RuntimeObject * __this /* static, unused */, Collider_t1773347010 * ___col0, Ray_t3785851493  ___ray1, RaycastHit_t1056001966 * ___hitInfo2, float ___maxDistance3, const RuntimeMethod* method);
// UnityEngine.MeshColliderCookingOptions UnityEngine.MeshCollider::get_cookingOptions()
extern "C" IL2CPP_METHOD_ATTR int32_t MeshCollider_get_cookingOptions_m2188498099 (MeshCollider_t903564387 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MeshCollider::set_cookingOptions(UnityEngine.MeshColliderCookingOptions)
extern "C" IL2CPP_METHOD_ATTR void MeshCollider_set_cookingOptions_m2964344721 (MeshCollider_t903564387 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m1087895580 (Object_t631007953 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.PhysicMaterial::Internal_CreateDynamicsMaterial(UnityEngine.PhysicMaterial,System.String)
extern "C" IL2CPP_METHOD_ATTR void PhysicMaterial_Internal_CreateDynamicsMaterial_m1064353702 (RuntimeObject * __this /* static, unused */, PhysicMaterial_t2874185564 * ___mat0, String_t* ___name1, const RuntimeMethod* method);
// System.Void UnityEngine.Physics::INTERNAL_get_gravity(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Physics_INTERNAL_get_gravity_m960240164 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Physics::INTERNAL_set_gravity(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Physics_INTERNAL_set_gravity_m2930207665 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m3482819239 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, Vector3_t3722313464  ___direction1, float ___maxDistance2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Internal_RaycastTest(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Internal_RaycastTest_m1784372019 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, Vector3_t3722313464  ___direction1, float ___maxDistance2, int32_t ___layermask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m3101461809 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, Vector3_t3722313464  ___direction1, RaycastHit_t1056001966 * ___hitInfo2, float ___maxDistance3, int32_t ___layerMask4, int32_t ___queryTriggerInteraction5, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Internal_Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Internal_Raycast_m2789434453 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, Vector3_t3722313464  ___direction1, RaycastHit_t1056001966 * ___hitInfo2, float ___maxDistance3, int32_t ___layermask4, int32_t ___queryTriggerInteraction5, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m3133704280 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, float ___maxDistance1, int32_t ___layerMask2, int32_t ___queryTriggerInteraction3, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Ray_get_origin_m2819290985 (Ray_t3785851493 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Ray_get_direction_m761601601 (Ray_t3785851493 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m3336206959 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, RaycastHit_t1056001966 * ___hitInfo1, float ___maxDistance2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method);
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_RaycastAll_m3611981381 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, float ___maxDistance1, int32_t ___layerMask2, int32_t ___queryTriggerInteraction3, const RuntimeMethod* method);
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_RaycastAll_m3084184534 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, Vector3_t3722313464  ___direction1, float ___maxDistance2, int32_t ___layermask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method);
// UnityEngine.RaycastHit[] UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_INTERNAL_CALL_RaycastAll_m1113565514 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___origin0, Vector3_t3722313464 * ___direction1, float ___maxDistance2, int32_t ___layermask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method);
// System.Int32 UnityEngine.Physics::RaycastNonAlloc(UnityEngine.Ray,UnityEngine.RaycastHit[],System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_RaycastNonAlloc_m236969326 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, RaycastHitU5BU5D_t1690781147* ___results1, float ___maxDistance2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method);
// System.Int32 UnityEngine.Physics::RaycastNonAlloc(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit[],System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_RaycastNonAlloc_m610726372 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, Vector3_t3722313464  ___direction1, RaycastHitU5BU5D_t1690781147* ___results2, float ___maxDistance3, int32_t ___layermask4, int32_t ___queryTriggerInteraction5, const RuntimeMethod* method);
// System.Int32 UnityEngine.Physics::INTERNAL_CALL_RaycastNonAlloc(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit[],System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_INTERNAL_CALL_RaycastNonAlloc_m2984676886 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___origin0, Vector3_t3722313464 * ___direction1, RaycastHitU5BU5D_t1690781147* ___results2, float ___maxDistance3, int32_t ___layermask4, int32_t ___queryTriggerInteraction5, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Linecast(UnityEngine.Vector3,UnityEngine.Vector3,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Linecast_m461729236 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___start0, Vector3_t3722313464  ___end1, int32_t ___layerMask2, int32_t ___queryTriggerInteraction3, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Subtraction_m3073674971 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
extern "C" IL2CPP_METHOD_ATTR float Vector3_get_magnitude_m27958459 (Vector3_t3722313464 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Linecast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Linecast_m1431720142 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___start0, Vector3_t3722313464  ___end1, RaycastHit_t1056001966 * ___hitInfo2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method);
// UnityEngine.Collider[] UnityEngine.Physics::INTERNAL_CALL_OverlapSphere(UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR ColliderU5BU5D_t4234922487* Physics_INTERNAL_CALL_OverlapSphere_m1366282712 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___position0, float ___radius1, int32_t ___layerMask2, int32_t ___queryTriggerInteraction3, const RuntimeMethod* method);
// System.Int32 UnityEngine.Physics::INTERNAL_CALL_OverlapSphereNonAlloc(UnityEngine.Vector3&,System.Single,UnityEngine.Collider[],System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_INTERNAL_CALL_OverlapSphereNonAlloc_m3878330733 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___position0, float ___radius1, ColliderU5BU5D_t4234922487* ___results2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method);
// UnityEngine.Collider[] UnityEngine.Physics::INTERNAL_CALL_OverlapCapsule(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR ColliderU5BU5D_t4234922487* Physics_INTERNAL_CALL_OverlapCapsule_m962533477 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___point00, Vector3_t3722313464 * ___point11, float ___radius2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method);
// System.Int32 UnityEngine.Physics::INTERNAL_CALL_OverlapCapsuleNonAlloc(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,UnityEngine.Collider[],System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_INTERNAL_CALL_OverlapCapsuleNonAlloc_m4044148634 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___point00, Vector3_t3722313464 * ___point11, float ___radius2, ColliderU5BU5D_t4234922487* ___results3, int32_t ___layerMask4, int32_t ___queryTriggerInteraction5, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::CapsuleCast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_CapsuleCast_m3567736809 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___point10, Vector3_t3722313464  ___point21, float ___radius2, Vector3_t3722313464  ___direction3, float ___maxDistance4, int32_t ___layerMask5, int32_t ___queryTriggerInteraction6, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Internal_CapsuleCast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Internal_CapsuleCast_m889508279 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___point10, Vector3_t3722313464  ___point21, float ___radius2, Vector3_t3722313464  ___direction3, RaycastHit_t1056001966 * ___hitInfo4, float ___maxDistance5, int32_t ___layermask6, int32_t ___queryTriggerInteraction7, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::CapsuleCast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_CapsuleCast_m525044090 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___point10, Vector3_t3722313464  ___point21, float ___radius2, Vector3_t3722313464  ___direction3, RaycastHit_t1056001966 * ___hitInfo4, float ___maxDistance5, int32_t ___layerMask6, int32_t ___queryTriggerInteraction7, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::SphereCast(UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_SphereCast_m1259429328 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, float ___radius1, Vector3_t3722313464  ___direction2, RaycastHit_t1056001966 * ___hitInfo3, float ___maxDistance4, int32_t ___layerMask5, int32_t ___queryTriggerInteraction6, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::SphereCast(UnityEngine.Ray,System.Single,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_SphereCast_m1896800602 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, float ___radius1, float ___maxDistance2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::SphereCast(UnityEngine.Ray,System.Single,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_SphereCast_m115790328 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, float ___radius1, RaycastHit_t1056001966 * ___hitInfo2, float ___maxDistance3, int32_t ___layerMask4, int32_t ___queryTriggerInteraction5, const RuntimeMethod* method);
// UnityEngine.RaycastHit[] UnityEngine.Physics::INTERNAL_CALL_CapsuleCastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_INTERNAL_CALL_CapsuleCastAll_m4102462563 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___point10, Vector3_t3722313464 * ___point21, float ___radius2, Vector3_t3722313464 * ___direction3, float ___maxDistance4, int32_t ___layermask5, int32_t ___queryTriggerInteraction6, const RuntimeMethod* method);
// System.Int32 UnityEngine.Physics::INTERNAL_CALL_CapsuleCastNonAlloc(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,UnityEngine.Vector3&,UnityEngine.RaycastHit[],System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_INTERNAL_CALL_CapsuleCastNonAlloc_m701442683 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___point10, Vector3_t3722313464 * ___point21, float ___radius2, Vector3_t3722313464 * ___direction3, RaycastHitU5BU5D_t1690781147* ___results4, float ___maxDistance5, int32_t ___layermask6, int32_t ___queryTriggerInteraction7, const RuntimeMethod* method);
// UnityEngine.RaycastHit[] UnityEngine.Physics::SphereCastAll(UnityEngine.Vector3,System.Single,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_SphereCastAll_m2291331324 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, float ___radius1, Vector3_t3722313464  ___direction2, float ___maxDistance3, int32_t ___layerMask4, int32_t ___queryTriggerInteraction5, const RuntimeMethod* method);
// UnityEngine.RaycastHit[] UnityEngine.Physics::CapsuleCastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_CapsuleCastAll_m2157227932 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___point10, Vector3_t3722313464  ___point21, float ___radius2, Vector3_t3722313464  ___direction3, float ___maxDistance4, int32_t ___layermask5, int32_t ___queryTriggerInteraction6, const RuntimeMethod* method);
// UnityEngine.RaycastHit[] UnityEngine.Physics::SphereCastAll(UnityEngine.Ray,System.Single,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_SphereCastAll_m1885391536 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, float ___radius1, float ___maxDistance2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method);
// System.Int32 UnityEngine.Physics::SphereCastNonAlloc(UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit[],System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_SphereCastNonAlloc_m3843789923 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, float ___radius1, Vector3_t3722313464  ___direction2, RaycastHitU5BU5D_t1690781147* ___results3, float ___maxDistance4, int32_t ___layerMask5, int32_t ___queryTriggerInteraction6, const RuntimeMethod* method);
// System.Int32 UnityEngine.Physics::CapsuleCastNonAlloc(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit[],System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_CapsuleCastNonAlloc_m2387933647 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___point10, Vector3_t3722313464  ___point21, float ___radius2, Vector3_t3722313464  ___direction3, RaycastHitU5BU5D_t1690781147* ___results4, float ___maxDistance5, int32_t ___layermask6, int32_t ___queryTriggerInteraction7, const RuntimeMethod* method);
// System.Int32 UnityEngine.Physics::SphereCastNonAlloc(UnityEngine.Ray,System.Single,UnityEngine.RaycastHit[],System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_SphereCastNonAlloc_m1857700335 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, float ___radius1, RaycastHitU5BU5D_t1690781147* ___results2, float ___maxDistance3, int32_t ___layerMask4, int32_t ___queryTriggerInteraction5, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_CheckSphere(UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_INTERNAL_CALL_CheckSphere_m3717410094 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___position0, float ___radius1, int32_t ___layerMask2, int32_t ___queryTriggerInteraction3, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_CheckCapsule(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_INTERNAL_CALL_CheckCapsule_m2803440474 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___start0, Vector3_t3722313464 * ___end1, float ___radius2, int32_t ___layermask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_CheckBox(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Quaternion&,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_INTERNAL_CALL_CheckBox_m2926834892 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___center0, Vector3_t3722313464 * ___halfExtents1, Quaternion_t2301928331 * ___orientation2, int32_t ___layermask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Quaternion_get_identity_m3722672781 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Collider[] UnityEngine.Physics::INTERNAL_CALL_OverlapBox(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Quaternion&,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR ColliderU5BU5D_t4234922487* Physics_INTERNAL_CALL_OverlapBox_m2705396300 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___center0, Vector3_t3722313464 * ___halfExtents1, Quaternion_t2301928331 * ___orientation2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method);
// System.Int32 UnityEngine.Physics::INTERNAL_CALL_OverlapBoxNonAlloc(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Collider[],UnityEngine.Quaternion&,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_INTERNAL_CALL_OverlapBoxNonAlloc_m1791917347 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___center0, Vector3_t3722313464 * ___halfExtents1, ColliderU5BU5D_t4234922487* ___results2, Quaternion_t2301928331 * ___orientation3, int32_t ___layerMask4, int32_t ___queryTriggerInteraction5, const RuntimeMethod* method);
// UnityEngine.RaycastHit[] UnityEngine.Physics::INTERNAL_CALL_BoxCastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Quaternion&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_INTERNAL_CALL_BoxCastAll_m4199403556 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___center0, Vector3_t3722313464 * ___halfExtents1, Vector3_t3722313464 * ___direction2, Quaternion_t2301928331 * ___orientation3, float ___maxDistance4, int32_t ___layermask5, int32_t ___queryTriggerInteraction6, const RuntimeMethod* method);
// System.Int32 UnityEngine.Physics::INTERNAL_CALL_BoxCastNonAlloc(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit[],UnityEngine.Quaternion&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_INTERNAL_CALL_BoxCastNonAlloc_m362167648 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___center0, Vector3_t3722313464 * ___halfExtents1, Vector3_t3722313464 * ___direction2, RaycastHitU5BU5D_t1690781147* ___results3, Quaternion_t2301928331 * ___orientation4, float ___maxDistance5, int32_t ___layermask6, int32_t ___queryTriggerInteraction7, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_BoxCast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_INTERNAL_CALL_Internal_BoxCast_m139457230 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___center0, Vector3_t3722313464 * ___halfExtents1, Quaternion_t2301928331 * ___orientation2, Vector3_t3722313464 * ___direction3, RaycastHit_t1056001966 * ___hitInfo4, float ___maxDistance5, int32_t ___layermask6, int32_t ___queryTriggerInteraction7, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::BoxCast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_BoxCast_m3526965635 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___center0, Vector3_t3722313464  ___halfExtents1, Vector3_t3722313464  ___direction2, Quaternion_t2301928331  ___orientation3, float ___maxDistance4, int32_t ___layerMask5, int32_t ___queryTriggerInteraction6, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Internal_BoxCast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Internal_BoxCast_m1952336906 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___center0, Vector3_t3722313464  ___halfExtents1, Quaternion_t2301928331  ___orientation2, Vector3_t3722313464  ___direction3, RaycastHit_t1056001966 * ___hitInfo4, float ___maxDistance5, int32_t ___layermask6, int32_t ___queryTriggerInteraction7, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::BoxCast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,UnityEngine.Quaternion,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_BoxCast_m1523082611 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___center0, Vector3_t3722313464  ___halfExtents1, Vector3_t3722313464  ___direction2, RaycastHit_t1056001966 * ___hitInfo3, Quaternion_t2301928331  ___orientation4, float ___maxDistance5, int32_t ___layerMask6, int32_t ___queryTriggerInteraction7, const RuntimeMethod* method);
// System.Void UnityEngine.Physics::IgnoreCollision(UnityEngine.Collider,UnityEngine.Collider,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Physics_IgnoreCollision_m1771762600 (RuntimeObject * __this /* static, unused */, Collider_t1773347010 * ___collider10, Collider_t1773347010 * ___collider21, bool ___ignore2, const RuntimeMethod* method);
// System.Void UnityEngine.Physics::IgnoreLayerCollision(System.Int32,System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Physics_IgnoreLayerCollision_m2712987023 (RuntimeObject * __this /* static, unused */, int32_t ___layer10, int32_t ___layer21, bool ___ignore2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_INTERNAL_CALL_Internal_Raycast_m227630749 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___origin0, Vector3_t3722313464 * ___direction1, RaycastHit_t1056001966 * ___hitInfo2, float ___maxDistance3, int32_t ___layermask4, int32_t ___queryTriggerInteraction5, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_CapsuleCast(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_INTERNAL_CALL_Internal_CapsuleCast_m4176319213 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___point10, Vector3_t3722313464 * ___point21, float ___radius2, Vector3_t3722313464 * ___direction3, RaycastHit_t1056001966 * ___hitInfo4, float ___maxDistance5, int32_t ___layermask6, int32_t ___queryTriggerInteraction7, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_RaycastTest(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_INTERNAL_CALL_Internal_RaycastTest_m1263415310 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___origin0, Vector3_t3722313464 * ___direction1, float ___maxDistance2, int32_t ___layermask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_ComputePenetration(UnityEngine.Collider,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Collider,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&,System.Single&)
extern "C" IL2CPP_METHOD_ATTR bool Physics_INTERNAL_CALL_ComputePenetration_m241423214 (RuntimeObject * __this /* static, unused */, Collider_t1773347010 * ___colliderA0, Vector3_t3722313464 * ___positionA1, Quaternion_t2301928331 * ___rotationA2, Collider_t1773347010 * ___colliderB3, Vector3_t3722313464 * ___positionB4, Quaternion_t2301928331 * ___rotationB5, Vector3_t3722313464 * ___direction6, float* ___distance7, const RuntimeMethod* method);
// System.Void UnityEngine.Physics::INTERNAL_CALL_ClosestPoint(UnityEngine.Vector3&,UnityEngine.Collider,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Physics_INTERNAL_CALL_ClosestPoint_m1999732338 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___point0, Collider_t1773347010 * ___collider1, Vector3_t3722313464 * ___position2, Quaternion_t2301928331 * ___rotation3, Vector3_t3722313464 * ___value4, const RuntimeMethod* method);
// System.Void UnityEngine.Physics::INTERNAL_CALL_RebuildBroadphaseRegions(UnityEngine.Bounds&,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Physics_INTERNAL_CALL_RebuildBroadphaseRegions_m1527693415 (RuntimeObject * __this /* static, unused */, Bounds_t2266837910 * ___worldBounds0, int32_t ___subdivisions1, const RuntimeMethod* method);
// System.Void UnityEngine.RaycastHit::INTERNAL_CALL_CalculateRaycastTexCoord(UnityEngine.Vector2&,UnityEngine.Collider,UnityEngine.Vector2&,UnityEngine.Vector3&,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void RaycastHit_INTERNAL_CALL_CalculateRaycastTexCoord_m2536838559 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523 * ___output0, Collider_t1773347010 * ___col1, Vector2_t2156229523 * ___uv2, Vector3_t3722313464 * ___point3, int32_t ___face4, int32_t ___index5, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  RaycastHit_get_point_m2236647085 (RaycastHit_t1056001966 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  RaycastHit_get_normal_m1232181746 (RaycastHit_t1056001966 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_barycentricCoordinate()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  RaycastHit_get_barycentricCoordinate_m124082963 (RaycastHit_t1056001966 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.RaycastHit::get_distance()
extern "C" IL2CPP_METHOD_ATTR float RaycastHit_get_distance_m3727327466 (RaycastHit_t1056001966 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.RaycastHit::get_triangleIndex()
extern "C" IL2CPP_METHOD_ATTR int32_t RaycastHit_get_triangleIndex_m1297388791 (RaycastHit_t1056001966 * __this, const RuntimeMethod* method);
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
extern "C" IL2CPP_METHOD_ATTR Collider_t1773347010 * RaycastHit_get_collider_m1464180279 (RaycastHit_t1056001966 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RaycastHit::CalculateRaycastTexCoord(UnityEngine.Vector2&,UnityEngine.Collider,UnityEngine.Vector2,UnityEngine.Vector3,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void RaycastHit_CalculateRaycastTexCoord_m1747810766 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523 * ___output0, Collider_t1773347010 * ___col1, Vector2_t2156229523  ___uv2, Vector3_t3722313464  ___point3, int32_t ___face4, int32_t ___index5, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RaycastHit::get_textureCoord()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  RaycastHit_get_textureCoord_m3787807740 (RaycastHit_t1056001966 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RaycastHit::get_textureCoord2()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  RaycastHit_get_textureCoord2_m924018133 (RaycastHit_t1056001966 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RaycastHit::get_textureCoord1()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  RaycastHit_get_textureCoord1_m2490102074 (RaycastHit_t1056001966 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
#define Component_GetComponent_TisRenderer_t2627027031_m3466210452(__this, method) ((  Renderer_t2627027031 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Renderer::get_lightmapScaleOffset()
extern "C" IL2CPP_METHOD_ATTR Vector4_t3319028937  Renderer_get_lightmapScaleOffset_m804150199 (Renderer_t2627027031 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RaycastHit::get_lightmapCoord()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  RaycastHit_get_lightmapCoord_m3586439682 (RaycastHit_t1056001966 * __this, const RuntimeMethod* method);
// UnityEngine.Rigidbody UnityEngine.Collider::get_attachedRigidbody()
extern "C" IL2CPP_METHOD_ATTR Rigidbody_t3916780224 * Collider_get_attachedRigidbody_m135494519 (Collider_t1773347010 * __this, const RuntimeMethod* method);
// UnityEngine.Rigidbody UnityEngine.RaycastHit::get_rigidbody()
extern "C" IL2CPP_METHOD_ATTR Rigidbody_t3916780224 * RaycastHit_get_rigidbody_m2320267866 (RaycastHit_t1056001966 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * RaycastHit_get_transform_m942054759 (RaycastHit_t1056001966 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::INTERNAL_get_velocity(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_get_velocity_m2480891890 (Rigidbody_t3916780224 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::INTERNAL_set_velocity(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_set_velocity_m931742966 (Rigidbody_t3916780224 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::INTERNAL_get_angularVelocity(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_get_angularVelocity_m526824782 (Rigidbody_t3916780224 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::INTERNAL_set_angularVelocity(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_set_angularVelocity_m4188482450 (Rigidbody_t3916780224 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_SetDensity(UnityEngine.Rigidbody,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_CALL_SetDensity_m1959673140 (RuntimeObject * __this /* static, unused */, Rigidbody_t3916780224 * ___self0, float ___density1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_CALL_AddForce_m2553500652 (RuntimeObject * __this /* static, unused */, Rigidbody_t3916780224 * ___self0, Vector3_t3722313464 * ___force1, int32_t ___mode2, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::AddForce(System.Single,System.Single,System.Single,UnityEngine.ForceMode)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m467379572 (Rigidbody_t3916780224 * __this, float ___x0, float ___y1, float ___z2, int32_t ___mode3, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m1059068722 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  ___force0, int32_t ___mode1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddRelativeForce(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_CALL_AddRelativeForce_m4052129533 (RuntimeObject * __this /* static, unused */, Rigidbody_t3916780224 * ___self0, Vector3_t3722313464 * ___force1, int32_t ___mode2, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::AddRelativeForce(System.Single,System.Single,System.Single,UnityEngine.ForceMode)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_AddRelativeForce_m1436908387 (Rigidbody_t3916780224 * __this, float ___x0, float ___y1, float ___z2, int32_t ___mode3, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::AddRelativeForce(UnityEngine.Vector3,UnityEngine.ForceMode)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_AddRelativeForce_m977299210 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  ___force0, int32_t ___mode1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddTorque(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_CALL_AddTorque_m31996881 (RuntimeObject * __this /* static, unused */, Rigidbody_t3916780224 * ___self0, Vector3_t3722313464 * ___torque1, int32_t ___mode2, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::AddTorque(System.Single,System.Single,System.Single,UnityEngine.ForceMode)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_AddTorque_m3116574654 (Rigidbody_t3916780224 * __this, float ___x0, float ___y1, float ___z2, int32_t ___mode3, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::AddTorque(UnityEngine.Vector3,UnityEngine.ForceMode)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_AddTorque_m1107708961 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  ___torque0, int32_t ___mode1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddRelativeTorque(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_CALL_AddRelativeTorque_m3987406995 (RuntimeObject * __this /* static, unused */, Rigidbody_t3916780224 * ___self0, Vector3_t3722313464 * ___torque1, int32_t ___mode2, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::AddRelativeTorque(System.Single,System.Single,System.Single,UnityEngine.ForceMode)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_AddRelativeTorque_m752720011 (Rigidbody_t3916780224 * __this, float ___x0, float ___y1, float ___z2, int32_t ___mode3, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::AddRelativeTorque(UnityEngine.Vector3,UnityEngine.ForceMode)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_AddRelativeTorque_m1633500454 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  ___torque0, int32_t ___mode1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddForceAtPosition(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_CALL_AddForceAtPosition_m3698140343 (RuntimeObject * __this /* static, unused */, Rigidbody_t3916780224 * ___self0, Vector3_t3722313464 * ___force1, Vector3_t3722313464 * ___position2, int32_t ___mode3, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddExplosionForce(UnityEngine.Rigidbody,System.Single,UnityEngine.Vector3&,System.Single,System.Single,UnityEngine.ForceMode)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_CALL_AddExplosionForce_m1231761721 (RuntimeObject * __this /* static, unused */, Rigidbody_t3916780224 * ___self0, float ___explosionForce1, Vector3_t3722313464 * ___explosionPosition2, float ___explosionRadius3, float ___upwardsModifier4, int32_t ___mode5, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_ClosestPointOnBounds(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_CALL_ClosestPointOnBounds_m4274558386 (RuntimeObject * __this /* static, unused */, Rigidbody_t3916780224 * ___self0, Vector3_t3722313464 * ___position1, Vector3_t3722313464 * ___value2, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_GetRelativePointVelocity(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_CALL_GetRelativePointVelocity_m2223003778 (RuntimeObject * __this /* static, unused */, Rigidbody_t3916780224 * ___self0, Vector3_t3722313464 * ___relativePoint1, Vector3_t3722313464 * ___value2, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_GetPointVelocity(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_CALL_GetPointVelocity_m991047747 (RuntimeObject * __this /* static, unused */, Rigidbody_t3916780224 * ___self0, Vector3_t3722313464 * ___worldPoint1, Vector3_t3722313464 * ___value2, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::INTERNAL_get_centerOfMass(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_get_centerOfMass_m3838716110 (Rigidbody_t3916780224 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::INTERNAL_set_centerOfMass(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_set_centerOfMass_m1285151140 (Rigidbody_t3916780224 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::INTERNAL_get_worldCenterOfMass(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_get_worldCenterOfMass_m2988488591 (Rigidbody_t3916780224 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::INTERNAL_get_inertiaTensorRotation(UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_get_inertiaTensorRotation_m1397216749 (Rigidbody_t3916780224 * __this, Quaternion_t2301928331 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::INTERNAL_set_inertiaTensorRotation(UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_set_inertiaTensorRotation_m2331194410 (Rigidbody_t3916780224 * __this, Quaternion_t2301928331 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::INTERNAL_get_inertiaTensor(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_get_inertiaTensor_m2209525325 (Rigidbody_t3916780224 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::INTERNAL_set_inertiaTensor(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_set_inertiaTensor_m2213481644 (Rigidbody_t3916780224 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::INTERNAL_get_position(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_get_position_m772969920 (Rigidbody_t3916780224 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::INTERNAL_set_position(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_set_position_m1588012848 (Rigidbody_t3916780224 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::INTERNAL_get_rotation(UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_get_rotation_m3216032154 (Rigidbody_t3916780224 * __this, Quaternion_t2301928331 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::INTERNAL_set_rotation(UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_set_rotation_m1777486382 (Rigidbody_t3916780224 * __this, Quaternion_t2301928331 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_MovePosition(UnityEngine.Rigidbody,UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_CALL_MovePosition_m2846623079 (RuntimeObject * __this /* static, unused */, Rigidbody_t3916780224 * ___self0, Vector3_t3722313464 * ___position1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_MoveRotation(UnityEngine.Rigidbody,UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_CALL_MoveRotation_m39867991 (RuntimeObject * __this /* static, unused */, Rigidbody_t3916780224 * ___self0, Quaternion_t2301928331 * ___rot1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_Sleep(UnityEngine.Rigidbody)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_CALL_Sleep_m3694254522 (RuntimeObject * __this /* static, unused */, Rigidbody_t3916780224 * ___self0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Rigidbody::INTERNAL_CALL_IsSleeping(UnityEngine.Rigidbody)
extern "C" IL2CPP_METHOD_ATTR bool Rigidbody_INTERNAL_CALL_IsSleeping_m438853281 (RuntimeObject * __this /* static, unused */, Rigidbody_t3916780224 * ___self0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_WakeUp(UnityEngine.Rigidbody)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_CALL_WakeUp_m1769679126 (RuntimeObject * __this /* static, unused */, Rigidbody_t3916780224 * ___self0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_ResetCenterOfMass(UnityEngine.Rigidbody)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_CALL_ResetCenterOfMass_m1260914393 (RuntimeObject * __this /* static, unused */, Rigidbody_t3916780224 * ___self0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_ResetInertiaTensor(UnityEngine.Rigidbody)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_CALL_ResetInertiaTensor_m656135347 (RuntimeObject * __this /* static, unused */, Rigidbody_t3916780224 * ___self0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Rigidbody::INTERNAL_CALL_SweepTest(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Rigidbody_INTERNAL_CALL_SweepTest_m991747228 (RuntimeObject * __this /* static, unused */, Rigidbody_t3916780224 * ___self0, Vector3_t3722313464 * ___direction1, RaycastHit_t1056001966 * ___hitInfo2, float ___maxDistance3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method);
// UnityEngine.RaycastHit[] UnityEngine.Rigidbody::INTERNAL_CALL_SweepTestAll(UnityEngine.Rigidbody,UnityEngine.Vector3&,System.Single,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Rigidbody_INTERNAL_CALL_SweepTestAll_m3042706628 (RuntimeObject * __this /* static, unused */, Rigidbody_t3916780224 * ___self0, Vector3_t3722313464 * ___direction1, float ___maxDistance2, int32_t ___queryTriggerInteraction3, const RuntimeMethod* method);
// System.Void UnityEngine.SphereCollider::INTERNAL_get_center(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void SphereCollider_INTERNAL_get_center_m2092209095 (SphereCollider_t2077223608 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SphereCollider::INTERNAL_set_center(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void SphereCollider_INTERNAL_set_center_m1804487430 (SphereCollider_t2077223608 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method);
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
// System.Void UnityEngine.BoxCollider::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BoxCollider__ctor_m1278284478 (BoxCollider_t1640800422 * __this, const RuntimeMethod* method)
{
	{
		Collider__ctor_m1632031523(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.BoxCollider::get_center()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  BoxCollider_get_center_m3697516117 (BoxCollider_t1640800422 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		BoxCollider_INTERNAL_get_center_m2114504947(__this, (&V_0), /*hidden argument*/NULL);
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
// System.Void UnityEngine.BoxCollider::set_center(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void BoxCollider_set_center_m1086194996 (BoxCollider_t1640800422 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	{
		BoxCollider_INTERNAL_set_center_m471190135(__this, (&___value0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.BoxCollider::INTERNAL_get_center(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void BoxCollider_INTERNAL_get_center_m2114504947 (BoxCollider_t1640800422 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*BoxCollider_INTERNAL_get_center_m2114504947_ftn) (BoxCollider_t1640800422 *, Vector3_t3722313464 *);
	static BoxCollider_INTERNAL_get_center_m2114504947_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (BoxCollider_INTERNAL_get_center_m2114504947_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.BoxCollider::INTERNAL_get_center(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.BoxCollider::INTERNAL_set_center(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void BoxCollider_INTERNAL_set_center_m471190135 (BoxCollider_t1640800422 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*BoxCollider_INTERNAL_set_center_m471190135_ftn) (BoxCollider_t1640800422 *, Vector3_t3722313464 *);
	static BoxCollider_INTERNAL_set_center_m471190135_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (BoxCollider_INTERNAL_set_center_m471190135_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.BoxCollider::INTERNAL_set_center(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Vector3 UnityEngine.BoxCollider::get_size()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  BoxCollider_get_size_m1798011124 (BoxCollider_t1640800422 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		BoxCollider_INTERNAL_get_size_m3071281718(__this, (&V_0), /*hidden argument*/NULL);
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
// System.Void UnityEngine.BoxCollider::set_size(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void BoxCollider_set_size_m3618428148 (BoxCollider_t1640800422 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	{
		BoxCollider_INTERNAL_set_size_m404545260(__this, (&___value0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.BoxCollider::INTERNAL_get_size(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void BoxCollider_INTERNAL_get_size_m3071281718 (BoxCollider_t1640800422 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*BoxCollider_INTERNAL_get_size_m3071281718_ftn) (BoxCollider_t1640800422 *, Vector3_t3722313464 *);
	static BoxCollider_INTERNAL_get_size_m3071281718_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (BoxCollider_INTERNAL_get_size_m3071281718_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.BoxCollider::INTERNAL_get_size(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.BoxCollider::INTERNAL_set_size(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void BoxCollider_INTERNAL_set_size_m404545260 (BoxCollider_t1640800422 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*BoxCollider_INTERNAL_set_size_m404545260_ftn) (BoxCollider_t1640800422 *, Vector3_t3722313464 *);
	static BoxCollider_INTERNAL_set_size_m404545260_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (BoxCollider_INTERNAL_set_size_m404545260_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.BoxCollider::INTERNAL_set_size(UnityEngine.Vector3&)");
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
// System.Void UnityEngine.CapsuleCollider::.ctor()
extern "C" IL2CPP_METHOD_ATTR void CapsuleCollider__ctor_m2917587740 (CapsuleCollider_t197597763 * __this, const RuntimeMethod* method)
{
	{
		Collider__ctor_m1632031523(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.CapsuleCollider::get_center()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  CapsuleCollider_get_center_m1504830057 (CapsuleCollider_t197597763 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		CapsuleCollider_INTERNAL_get_center_m4188094250(__this, (&V_0), /*hidden argument*/NULL);
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
// System.Void UnityEngine.CapsuleCollider::set_center(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void CapsuleCollider_set_center_m2290088540 (CapsuleCollider_t197597763 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	{
		CapsuleCollider_INTERNAL_set_center_m2973340406(__this, (&___value0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.CapsuleCollider::INTERNAL_get_center(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void CapsuleCollider_INTERNAL_get_center_m4188094250 (CapsuleCollider_t197597763 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*CapsuleCollider_INTERNAL_get_center_m4188094250_ftn) (CapsuleCollider_t197597763 *, Vector3_t3722313464 *);
	static CapsuleCollider_INTERNAL_get_center_m4188094250_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CapsuleCollider_INTERNAL_get_center_m4188094250_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CapsuleCollider::INTERNAL_get_center(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.CapsuleCollider::INTERNAL_set_center(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void CapsuleCollider_INTERNAL_set_center_m2973340406 (CapsuleCollider_t197597763 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*CapsuleCollider_INTERNAL_set_center_m2973340406_ftn) (CapsuleCollider_t197597763 *, Vector3_t3722313464 *);
	static CapsuleCollider_INTERNAL_set_center_m2973340406_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CapsuleCollider_INTERNAL_set_center_m2973340406_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CapsuleCollider::INTERNAL_set_center(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.CapsuleCollider::get_radius()
extern "C" IL2CPP_METHOD_ATTR float CapsuleCollider_get_radius_m3672925813 (CapsuleCollider_t197597763 * __this, const RuntimeMethod* method)
{
	typedef float (*CapsuleCollider_get_radius_m3672925813_ftn) (CapsuleCollider_t197597763 *);
	static CapsuleCollider_get_radius_m3672925813_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CapsuleCollider_get_radius_m3672925813_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CapsuleCollider::get_radius()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.CapsuleCollider::set_radius(System.Single)
extern "C" IL2CPP_METHOD_ATTR void CapsuleCollider_set_radius_m3911288585 (CapsuleCollider_t197597763 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*CapsuleCollider_set_radius_m3911288585_ftn) (CapsuleCollider_t197597763 *, float);
	static CapsuleCollider_set_radius_m3911288585_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CapsuleCollider_set_radius_m3911288585_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CapsuleCollider::set_radius(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.CapsuleCollider::get_height()
extern "C" IL2CPP_METHOD_ATTR float CapsuleCollider_get_height_m4149104584 (CapsuleCollider_t197597763 * __this, const RuntimeMethod* method)
{
	typedef float (*CapsuleCollider_get_height_m4149104584_ftn) (CapsuleCollider_t197597763 *);
	static CapsuleCollider_get_height_m4149104584_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CapsuleCollider_get_height_m4149104584_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CapsuleCollider::get_height()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.CapsuleCollider::set_height(System.Single)
extern "C" IL2CPP_METHOD_ATTR void CapsuleCollider_set_height_m2690698645 (CapsuleCollider_t197597763 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*CapsuleCollider_set_height_m2690698645_ftn) (CapsuleCollider_t197597763 *, float);
	static CapsuleCollider_set_height_m2690698645_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CapsuleCollider_set_height_m2690698645_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CapsuleCollider::set_height(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Int32 UnityEngine.CapsuleCollider::get_direction()
extern "C" IL2CPP_METHOD_ATTR int32_t CapsuleCollider_get_direction_m993132008 (CapsuleCollider_t197597763 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*CapsuleCollider_get_direction_m993132008_ftn) (CapsuleCollider_t197597763 *);
	static CapsuleCollider_get_direction_m993132008_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CapsuleCollider_get_direction_m993132008_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CapsuleCollider::get_direction()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.CapsuleCollider::set_direction(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void CapsuleCollider_set_direction_m2526197405 (CapsuleCollider_t197597763 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*CapsuleCollider_set_direction_m2526197405_ftn) (CapsuleCollider_t197597763 *, int32_t);
	static CapsuleCollider_set_direction_m2526197405_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CapsuleCollider_set_direction_m2526197405_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CapsuleCollider::set_direction(System.Int32)");
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
// System.Void UnityEngine.CharacterController::.ctor()
extern "C" IL2CPP_METHOD_ATTR void CharacterController__ctor_m589659947 (CharacterController_t1138636865 * __this, const RuntimeMethod* method)
{
	{
		Collider__ctor_m1632031523(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.CharacterController::SimpleMove(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR bool CharacterController_SimpleMove_m1325178943 (CharacterController_t1138636865 * __this, Vector3_t3722313464  ___speed0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = CharacterController_INTERNAL_CALL_SimpleMove_m1284229908(NULL /*static, unused*/, __this, (&___speed0), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000f;
	}

IL_000f:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.CharacterController::INTERNAL_CALL_SimpleMove(UnityEngine.CharacterController,UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR bool CharacterController_INTERNAL_CALL_SimpleMove_m1284229908 (RuntimeObject * __this /* static, unused */, CharacterController_t1138636865 * ___self0, Vector3_t3722313464 * ___speed1, const RuntimeMethod* method)
{
	typedef bool (*CharacterController_INTERNAL_CALL_SimpleMove_m1284229908_ftn) (CharacterController_t1138636865 *, Vector3_t3722313464 *);
	static CharacterController_INTERNAL_CALL_SimpleMove_m1284229908_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CharacterController_INTERNAL_CALL_SimpleMove_m1284229908_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CharacterController::INTERNAL_CALL_SimpleMove(UnityEngine.CharacterController,UnityEngine.Vector3&)");
	bool retVal = _il2cpp_icall_func(___self0, ___speed1);
	return retVal;
}
// UnityEngine.CollisionFlags UnityEngine.CharacterController::Move(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR int32_t CharacterController_Move_m1547317252 (CharacterController_t1138636865 * __this, Vector3_t3722313464  ___motion0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = CharacterController_INTERNAL_CALL_Move_m3619696939(NULL /*static, unused*/, __this, (&___motion0), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.CollisionFlags UnityEngine.CharacterController::INTERNAL_CALL_Move(UnityEngine.CharacterController,UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR int32_t CharacterController_INTERNAL_CALL_Move_m3619696939 (RuntimeObject * __this /* static, unused */, CharacterController_t1138636865 * ___self0, Vector3_t3722313464 * ___motion1, const RuntimeMethod* method)
{
	typedef int32_t (*CharacterController_INTERNAL_CALL_Move_m3619696939_ftn) (CharacterController_t1138636865 *, Vector3_t3722313464 *);
	static CharacterController_INTERNAL_CALL_Move_m3619696939_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CharacterController_INTERNAL_CALL_Move_m3619696939_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CharacterController::INTERNAL_CALL_Move(UnityEngine.CharacterController,UnityEngine.Vector3&)");
	int32_t retVal = _il2cpp_icall_func(___self0, ___motion1);
	return retVal;
}
// System.Boolean UnityEngine.CharacterController::get_isGrounded()
extern "C" IL2CPP_METHOD_ATTR bool CharacterController_get_isGrounded_m1151930607 (CharacterController_t1138636865 * __this, const RuntimeMethod* method)
{
	typedef bool (*CharacterController_get_isGrounded_m1151930607_ftn) (CharacterController_t1138636865 *);
	static CharacterController_get_isGrounded_m1151930607_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CharacterController_get_isGrounded_m1151930607_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CharacterController::get_isGrounded()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.Vector3 UnityEngine.CharacterController::get_velocity()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  CharacterController_get_velocity_m3517335080 (CharacterController_t1138636865 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		CharacterController_INTERNAL_get_velocity_m2491100652(__this, (&V_0), /*hidden argument*/NULL);
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
// System.Void UnityEngine.CharacterController::INTERNAL_get_velocity(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void CharacterController_INTERNAL_get_velocity_m2491100652 (CharacterController_t1138636865 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*CharacterController_INTERNAL_get_velocity_m2491100652_ftn) (CharacterController_t1138636865 *, Vector3_t3722313464 *);
	static CharacterController_INTERNAL_get_velocity_m2491100652_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CharacterController_INTERNAL_get_velocity_m2491100652_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CharacterController::INTERNAL_get_velocity(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.CollisionFlags UnityEngine.CharacterController::get_collisionFlags()
extern "C" IL2CPP_METHOD_ATTR int32_t CharacterController_get_collisionFlags_m2562575342 (CharacterController_t1138636865 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*CharacterController_get_collisionFlags_m2562575342_ftn) (CharacterController_t1138636865 *);
	static CharacterController_get_collisionFlags_m2562575342_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CharacterController_get_collisionFlags_m2562575342_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CharacterController::get_collisionFlags()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Single UnityEngine.CharacterController::get_radius()
extern "C" IL2CPP_METHOD_ATTR float CharacterController_get_radius_m4250137633 (CharacterController_t1138636865 * __this, const RuntimeMethod* method)
{
	typedef float (*CharacterController_get_radius_m4250137633_ftn) (CharacterController_t1138636865 *);
	static CharacterController_get_radius_m4250137633_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CharacterController_get_radius_m4250137633_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CharacterController::get_radius()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.CharacterController::set_radius(System.Single)
extern "C" IL2CPP_METHOD_ATTR void CharacterController_set_radius_m867343685 (CharacterController_t1138636865 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*CharacterController_set_radius_m867343685_ftn) (CharacterController_t1138636865 *, float);
	static CharacterController_set_radius_m867343685_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CharacterController_set_radius_m867343685_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CharacterController::set_radius(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.CharacterController::get_height()
extern "C" IL2CPP_METHOD_ATTR float CharacterController_get_height_m4025328698 (CharacterController_t1138636865 * __this, const RuntimeMethod* method)
{
	typedef float (*CharacterController_get_height_m4025328698_ftn) (CharacterController_t1138636865 *);
	static CharacterController_get_height_m4025328698_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CharacterController_get_height_m4025328698_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CharacterController::get_height()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.CharacterController::set_height(System.Single)
extern "C" IL2CPP_METHOD_ATTR void CharacterController_set_height_m1950571649 (CharacterController_t1138636865 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*CharacterController_set_height_m1950571649_ftn) (CharacterController_t1138636865 *, float);
	static CharacterController_set_height_m1950571649_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CharacterController_set_height_m1950571649_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CharacterController::set_height(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Vector3 UnityEngine.CharacterController::get_center()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  CharacterController_get_center_m882281788 (CharacterController_t1138636865 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		CharacterController_INTERNAL_get_center_m3143371299(__this, (&V_0), /*hidden argument*/NULL);
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
// System.Void UnityEngine.CharacterController::set_center(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void CharacterController_set_center_m533276891 (CharacterController_t1138636865 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	{
		CharacterController_INTERNAL_set_center_m3904896258(__this, (&___value0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.CharacterController::INTERNAL_get_center(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void CharacterController_INTERNAL_get_center_m3143371299 (CharacterController_t1138636865 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*CharacterController_INTERNAL_get_center_m3143371299_ftn) (CharacterController_t1138636865 *, Vector3_t3722313464 *);
	static CharacterController_INTERNAL_get_center_m3143371299_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CharacterController_INTERNAL_get_center_m3143371299_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CharacterController::INTERNAL_get_center(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.CharacterController::INTERNAL_set_center(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void CharacterController_INTERNAL_set_center_m3904896258 (CharacterController_t1138636865 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*CharacterController_INTERNAL_set_center_m3904896258_ftn) (CharacterController_t1138636865 *, Vector3_t3722313464 *);
	static CharacterController_INTERNAL_set_center_m3904896258_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CharacterController_INTERNAL_set_center_m3904896258_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CharacterController::INTERNAL_set_center(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.CharacterController::get_slopeLimit()
extern "C" IL2CPP_METHOD_ATTR float CharacterController_get_slopeLimit_m485529875 (CharacterController_t1138636865 * __this, const RuntimeMethod* method)
{
	typedef float (*CharacterController_get_slopeLimit_m485529875_ftn) (CharacterController_t1138636865 *);
	static CharacterController_get_slopeLimit_m485529875_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CharacterController_get_slopeLimit_m485529875_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CharacterController::get_slopeLimit()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.CharacterController::set_slopeLimit(System.Single)
extern "C" IL2CPP_METHOD_ATTR void CharacterController_set_slopeLimit_m3983353494 (CharacterController_t1138636865 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*CharacterController_set_slopeLimit_m3983353494_ftn) (CharacterController_t1138636865 *, float);
	static CharacterController_set_slopeLimit_m3983353494_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CharacterController_set_slopeLimit_m3983353494_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CharacterController::set_slopeLimit(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.CharacterController::get_stepOffset()
extern "C" IL2CPP_METHOD_ATTR float CharacterController_get_stepOffset_m4263336387 (CharacterController_t1138636865 * __this, const RuntimeMethod* method)
{
	typedef float (*CharacterController_get_stepOffset_m4263336387_ftn) (CharacterController_t1138636865 *);
	static CharacterController_get_stepOffset_m4263336387_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CharacterController_get_stepOffset_m4263336387_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CharacterController::get_stepOffset()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.CharacterController::set_stepOffset(System.Single)
extern "C" IL2CPP_METHOD_ATTR void CharacterController_set_stepOffset_m3242151086 (CharacterController_t1138636865 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*CharacterController_set_stepOffset_m3242151086_ftn) (CharacterController_t1138636865 *, float);
	static CharacterController_set_stepOffset_m3242151086_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CharacterController_set_stepOffset_m3242151086_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CharacterController::set_stepOffset(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.CharacterController::get_skinWidth()
extern "C" IL2CPP_METHOD_ATTR float CharacterController_get_skinWidth_m1069362860 (CharacterController_t1138636865 * __this, const RuntimeMethod* method)
{
	typedef float (*CharacterController_get_skinWidth_m1069362860_ftn) (CharacterController_t1138636865 *);
	static CharacterController_get_skinWidth_m1069362860_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CharacterController_get_skinWidth_m1069362860_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CharacterController::get_skinWidth()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.CharacterController::set_skinWidth(System.Single)
extern "C" IL2CPP_METHOD_ATTR void CharacterController_set_skinWidth_m2849883858 (CharacterController_t1138636865 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*CharacterController_set_skinWidth_m2849883858_ftn) (CharacterController_t1138636865 *, float);
	static CharacterController_set_skinWidth_m2849883858_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CharacterController_set_skinWidth_m2849883858_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CharacterController::set_skinWidth(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.CharacterController::get_minMoveDistance()
extern "C" IL2CPP_METHOD_ATTR float CharacterController_get_minMoveDistance_m1284153422 (CharacterController_t1138636865 * __this, const RuntimeMethod* method)
{
	typedef float (*CharacterController_get_minMoveDistance_m1284153422_ftn) (CharacterController_t1138636865 *);
	static CharacterController_get_minMoveDistance_m1284153422_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CharacterController_get_minMoveDistance_m1284153422_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CharacterController::get_minMoveDistance()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.CharacterController::set_minMoveDistance(System.Single)
extern "C" IL2CPP_METHOD_ATTR void CharacterController_set_minMoveDistance_m252289435 (CharacterController_t1138636865 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*CharacterController_set_minMoveDistance_m252289435_ftn) (CharacterController_t1138636865 *, float);
	static CharacterController_set_minMoveDistance_m252289435_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CharacterController_set_minMoveDistance_m252289435_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CharacterController::set_minMoveDistance(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.CharacterController::get_detectCollisions()
extern "C" IL2CPP_METHOD_ATTR bool CharacterController_get_detectCollisions_m2435961852 (CharacterController_t1138636865 * __this, const RuntimeMethod* method)
{
	typedef bool (*CharacterController_get_detectCollisions_m2435961852_ftn) (CharacterController_t1138636865 *);
	static CharacterController_get_detectCollisions_m2435961852_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CharacterController_get_detectCollisions_m2435961852_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CharacterController::get_detectCollisions()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.CharacterController::set_detectCollisions(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void CharacterController_set_detectCollisions_m1450251136 (CharacterController_t1138636865 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*CharacterController_set_detectCollisions_m1450251136_ftn) (CharacterController_t1138636865 *, bool);
	static CharacterController_set_detectCollisions_m1450251136_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CharacterController_set_detectCollisions_m1450251136_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CharacterController::set_detectCollisions(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.CharacterController::get_enableOverlapRecovery()
extern "C" IL2CPP_METHOD_ATTR bool CharacterController_get_enableOverlapRecovery_m2581637985 (CharacterController_t1138636865 * __this, const RuntimeMethod* method)
{
	typedef bool (*CharacterController_get_enableOverlapRecovery_m2581637985_ftn) (CharacterController_t1138636865 *);
	static CharacterController_get_enableOverlapRecovery_m2581637985_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CharacterController_get_enableOverlapRecovery_m2581637985_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CharacterController::get_enableOverlapRecovery()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.CharacterController::set_enableOverlapRecovery(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void CharacterController_set_enableOverlapRecovery_m1293658808 (CharacterController_t1138636865 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*CharacterController_set_enableOverlapRecovery_m1293658808_ftn) (CharacterController_t1138636865 *, bool);
	static CharacterController_set_enableOverlapRecovery_m1293658808_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CharacterController_set_enableOverlapRecovery_m1293658808_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CharacterController::set_enableOverlapRecovery(System.Boolean)");
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
// System.Void UnityEngine.Collider::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Collider__ctor_m1632031523 (Collider_t1773347010 * __this, const RuntimeMethod* method)
{
	{
		Component__ctor_m1928064382(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Collider::get_enabled()
extern "C" IL2CPP_METHOD_ATTR bool Collider_get_enabled_m3096904824 (Collider_t1773347010 * __this, const RuntimeMethod* method)
{
	typedef bool (*Collider_get_enabled_m3096904824_ftn) (Collider_t1773347010 *);
	static Collider_get_enabled_m3096904824_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider_get_enabled_m3096904824_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider::get_enabled()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Collider_set_enabled_m1517463283 (Collider_t1773347010 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*Collider_set_enabled_m1517463283_ftn) (Collider_t1773347010 *, bool);
	static Collider_set_enabled_m1517463283_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider_set_enabled_m1517463283_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider::set_enabled(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Rigidbody UnityEngine.Collider::get_attachedRigidbody()
extern "C" IL2CPP_METHOD_ATTR Rigidbody_t3916780224 * Collider_get_attachedRigidbody_m135494519 (Collider_t1773347010 * __this, const RuntimeMethod* method)
{
	typedef Rigidbody_t3916780224 * (*Collider_get_attachedRigidbody_m135494519_ftn) (Collider_t1773347010 *);
	static Collider_get_attachedRigidbody_m135494519_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider_get_attachedRigidbody_m135494519_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider::get_attachedRigidbody()");
	Rigidbody_t3916780224 * retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.Collider::get_isTrigger()
extern "C" IL2CPP_METHOD_ATTR bool Collider_get_isTrigger_m2414312872 (Collider_t1773347010 * __this, const RuntimeMethod* method)
{
	typedef bool (*Collider_get_isTrigger_m2414312872_ftn) (Collider_t1773347010 *);
	static Collider_get_isTrigger_m2414312872_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider_get_isTrigger_m2414312872_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider::get_isTrigger()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Collider::set_isTrigger(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Collider_set_isTrigger_m1770557358 (Collider_t1773347010 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*Collider_set_isTrigger_m1770557358_ftn) (Collider_t1773347010 *, bool);
	static Collider_set_isTrigger_m1770557358_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider_set_isTrigger_m1770557358_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider::set_isTrigger(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.Collider::get_contactOffset()
extern "C" IL2CPP_METHOD_ATTR float Collider_get_contactOffset_m2882608563 (Collider_t1773347010 * __this, const RuntimeMethod* method)
{
	typedef float (*Collider_get_contactOffset_m2882608563_ftn) (Collider_t1773347010 *);
	static Collider_get_contactOffset_m2882608563_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider_get_contactOffset_m2882608563_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider::get_contactOffset()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Collider::set_contactOffset(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Collider_set_contactOffset_m3269288744 (Collider_t1773347010 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*Collider_set_contactOffset_m3269288744_ftn) (Collider_t1773347010 *, float);
	static Collider_set_contactOffset_m3269288744_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider_set_contactOffset_m3269288744_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider::set_contactOffset(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.PhysicMaterial UnityEngine.Collider::get_material()
extern "C" IL2CPP_METHOD_ATTR PhysicMaterial_t2874185564 * Collider_get_material_m1396492839 (Collider_t1773347010 * __this, const RuntimeMethod* method)
{
	typedef PhysicMaterial_t2874185564 * (*Collider_get_material_m1396492839_ftn) (Collider_t1773347010 *);
	static Collider_get_material_m1396492839_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider_get_material_m1396492839_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider::get_material()");
	PhysicMaterial_t2874185564 * retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Collider::set_material(UnityEngine.PhysicMaterial)
extern "C" IL2CPP_METHOD_ATTR void Collider_set_material_m3792038929 (Collider_t1773347010 * __this, PhysicMaterial_t2874185564 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Collider_set_material_m3792038929_ftn) (Collider_t1773347010 *, PhysicMaterial_t2874185564 *);
	static Collider_set_material_m3792038929_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider_set_material_m3792038929_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider::set_material(UnityEngine.PhysicMaterial)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Vector3 UnityEngine.Collider::ClosestPointOnBounds(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Collider_ClosestPointOnBounds_m285020169 (Collider_t1773347010 * __this, Vector3_t3722313464  ___position0, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Collider_INTERNAL_CALL_ClosestPointOnBounds_m3377226027(NULL /*static, unused*/, __this, (&___position0), (&V_0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_0 = V_0;
		V_1 = L_0;
		goto IL_0012;
	}

IL_0012:
	{
		Vector3_t3722313464  L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.Collider::INTERNAL_CALL_ClosestPointOnBounds(UnityEngine.Collider,UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Collider_INTERNAL_CALL_ClosestPointOnBounds_m3377226027 (RuntimeObject * __this /* static, unused */, Collider_t1773347010 * ___self0, Vector3_t3722313464 * ___position1, Vector3_t3722313464 * ___value2, const RuntimeMethod* method)
{
	typedef void (*Collider_INTERNAL_CALL_ClosestPointOnBounds_m3377226027_ftn) (Collider_t1773347010 *, Vector3_t3722313464 *, Vector3_t3722313464 *);
	static Collider_INTERNAL_CALL_ClosestPointOnBounds_m3377226027_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider_INTERNAL_CALL_ClosestPointOnBounds_m3377226027_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider::INTERNAL_CALL_ClosestPointOnBounds(UnityEngine.Collider,UnityEngine.Vector3&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(___self0, ___position1, ___value2);
}
// UnityEngine.Vector3 UnityEngine.Collider::ClosestPoint(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Collider_ClosestPoint_m960211240 (Collider_t1773347010 * __this, Vector3_t3722313464  ___position0, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Collider_INTERNAL_CALL_ClosestPoint_m3829118255(NULL /*static, unused*/, __this, (&___position0), (&V_0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_0 = V_0;
		V_1 = L_0;
		goto IL_0012;
	}

IL_0012:
	{
		Vector3_t3722313464  L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.Collider::INTERNAL_CALL_ClosestPoint(UnityEngine.Collider,UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Collider_INTERNAL_CALL_ClosestPoint_m3829118255 (RuntimeObject * __this /* static, unused */, Collider_t1773347010 * ___self0, Vector3_t3722313464 * ___position1, Vector3_t3722313464 * ___value2, const RuntimeMethod* method)
{
	typedef void (*Collider_INTERNAL_CALL_ClosestPoint_m3829118255_ftn) (Collider_t1773347010 *, Vector3_t3722313464 *, Vector3_t3722313464 *);
	static Collider_INTERNAL_CALL_ClosestPoint_m3829118255_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider_INTERNAL_CALL_ClosestPoint_m3829118255_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider::INTERNAL_CALL_ClosestPoint(UnityEngine.Collider,UnityEngine.Vector3&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(___self0, ___position1, ___value2);
}
// UnityEngine.PhysicMaterial UnityEngine.Collider::get_sharedMaterial()
extern "C" IL2CPP_METHOD_ATTR PhysicMaterial_t2874185564 * Collider_get_sharedMaterial_m2016666527 (Collider_t1773347010 * __this, const RuntimeMethod* method)
{
	typedef PhysicMaterial_t2874185564 * (*Collider_get_sharedMaterial_m2016666527_ftn) (Collider_t1773347010 *);
	static Collider_get_sharedMaterial_m2016666527_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider_get_sharedMaterial_m2016666527_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider::get_sharedMaterial()");
	PhysicMaterial_t2874185564 * retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Collider::set_sharedMaterial(UnityEngine.PhysicMaterial)
extern "C" IL2CPP_METHOD_ATTR void Collider_set_sharedMaterial_m3714532353 (Collider_t1773347010 * __this, PhysicMaterial_t2874185564 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Collider_set_sharedMaterial_m3714532353_ftn) (Collider_t1773347010 *, PhysicMaterial_t2874185564 *);
	static Collider_set_sharedMaterial_m3714532353_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider_set_sharedMaterial_m3714532353_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider::set_sharedMaterial(UnityEngine.PhysicMaterial)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Bounds UnityEngine.Collider::get_bounds()
extern "C" IL2CPP_METHOD_ATTR Bounds_t2266837910  Collider_get_bounds_m2952418672 (Collider_t1773347010 * __this, const RuntimeMethod* method)
{
	Bounds_t2266837910  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Bounds_t2266837910  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Collider_INTERNAL_get_bounds_m3455869751(__this, (&V_0), /*hidden argument*/NULL);
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
// System.Void UnityEngine.Collider::INTERNAL_get_bounds(UnityEngine.Bounds&)
extern "C" IL2CPP_METHOD_ATTR void Collider_INTERNAL_get_bounds_m3455869751 (Collider_t1773347010 * __this, Bounds_t2266837910 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Collider_INTERNAL_get_bounds_m3455869751_ftn) (Collider_t1773347010 *, Bounds_t2266837910 *);
	static Collider_INTERNAL_get_bounds_m3455869751_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider_INTERNAL_get_bounds_m3455869751_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider::INTERNAL_get_bounds(UnityEngine.Bounds&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.Collider::Internal_Raycast(UnityEngine.Collider,UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
extern "C" IL2CPP_METHOD_ATTR bool Collider_Internal_Raycast_m2175318952 (RuntimeObject * __this /* static, unused */, Collider_t1773347010 * ___col0, Ray_t3785851493  ___ray1, RaycastHit_t1056001966 * ___hitInfo2, float ___maxDistance3, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Collider_t1773347010 * L_0 = ___col0;
		RaycastHit_t1056001966 * L_1 = ___hitInfo2;
		float L_2 = ___maxDistance3;
		bool L_3 = Collider_INTERNAL_CALL_Internal_Raycast_m1864235715(NULL /*static, unused*/, L_0, (&___ray1), L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean UnityEngine.Collider::INTERNAL_CALL_Internal_Raycast(UnityEngine.Collider,UnityEngine.Ray&,UnityEngine.RaycastHit&,System.Single)
extern "C" IL2CPP_METHOD_ATTR bool Collider_INTERNAL_CALL_Internal_Raycast_m1864235715 (RuntimeObject * __this /* static, unused */, Collider_t1773347010 * ___col0, Ray_t3785851493 * ___ray1, RaycastHit_t1056001966 * ___hitInfo2, float ___maxDistance3, const RuntimeMethod* method)
{
	typedef bool (*Collider_INTERNAL_CALL_Internal_Raycast_m1864235715_ftn) (Collider_t1773347010 *, Ray_t3785851493 *, RaycastHit_t1056001966 *, float);
	static Collider_INTERNAL_CALL_Internal_Raycast_m1864235715_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider_INTERNAL_CALL_Internal_Raycast_m1864235715_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider::INTERNAL_CALL_Internal_Raycast(UnityEngine.Collider,UnityEngine.Ray&,UnityEngine.RaycastHit&,System.Single)");
	bool retVal = _il2cpp_icall_func(___col0, ___ray1, ___hitInfo2, ___maxDistance3);
	return retVal;
}
// System.Boolean UnityEngine.Collider::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
extern "C" IL2CPP_METHOD_ATTR bool Collider_Raycast_m2876906360 (Collider_t1773347010 * __this, Ray_t3785851493  ___ray0, RaycastHit_t1056001966 * ___hitInfo1, float ___maxDistance2, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Ray_t3785851493  L_0 = ___ray0;
		RaycastHit_t1056001966 * L_1 = ___hitInfo1;
		float L_2 = ___maxDistance2;
		bool L_3 = Collider_Internal_Raycast_m2175318952(NULL /*static, unused*/, __this, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_4 = V_0;
		return L_4;
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
// Conversion methods for marshalling of: UnityEngine.Collision
extern "C" void Collision_t4262080450_marshal_pinvoke(const Collision_t4262080450& unmarshaled, Collision_t4262080450_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Rigidbody_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Rigidbody' of type 'Collision': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Rigidbody_2Exception,NULL);
}
extern "C" void Collision_t4262080450_marshal_pinvoke_back(const Collision_t4262080450_marshaled_pinvoke& marshaled, Collision_t4262080450& unmarshaled)
{
	Exception_t* ___m_Rigidbody_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Rigidbody' of type 'Collision': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Rigidbody_2Exception,NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Collision
extern "C" void Collision_t4262080450_marshal_pinvoke_cleanup(Collision_t4262080450_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Collision
extern "C" void Collision_t4262080450_marshal_com(const Collision_t4262080450& unmarshaled, Collision_t4262080450_marshaled_com& marshaled)
{
	Exception_t* ___m_Rigidbody_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Rigidbody' of type 'Collision': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Rigidbody_2Exception,NULL);
}
extern "C" void Collision_t4262080450_marshal_com_back(const Collision_t4262080450_marshaled_com& marshaled, Collision_t4262080450& unmarshaled)
{
	Exception_t* ___m_Rigidbody_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Rigidbody' of type 'Collision': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Rigidbody_2Exception,NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Collision
extern "C" void Collision_t4262080450_marshal_com_cleanup(Collision_t4262080450_marshaled_com& marshaled)
{
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
// Conversion methods for marshalling of: UnityEngine.ControllerColliderHit
extern "C" void ControllerColliderHit_t240592346_marshal_pinvoke(const ControllerColliderHit_t240592346& unmarshaled, ControllerColliderHit_t240592346_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Controller_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Controller' of type 'ControllerColliderHit': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Controller_0Exception,NULL);
}
extern "C" void ControllerColliderHit_t240592346_marshal_pinvoke_back(const ControllerColliderHit_t240592346_marshaled_pinvoke& marshaled, ControllerColliderHit_t240592346& unmarshaled)
{
	Exception_t* ___m_Controller_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Controller' of type 'ControllerColliderHit': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Controller_0Exception,NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ControllerColliderHit
extern "C" void ControllerColliderHit_t240592346_marshal_pinvoke_cleanup(ControllerColliderHit_t240592346_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ControllerColliderHit
extern "C" void ControllerColliderHit_t240592346_marshal_com(const ControllerColliderHit_t240592346& unmarshaled, ControllerColliderHit_t240592346_marshaled_com& marshaled)
{
	Exception_t* ___m_Controller_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Controller' of type 'ControllerColliderHit': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Controller_0Exception,NULL);
}
extern "C" void ControllerColliderHit_t240592346_marshal_com_back(const ControllerColliderHit_t240592346_marshaled_com& marshaled, ControllerColliderHit_t240592346& unmarshaled)
{
	Exception_t* ___m_Controller_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Controller' of type 'ControllerColliderHit': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Controller_0Exception,NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ControllerColliderHit
extern "C" void ControllerColliderHit_t240592346_marshal_com_cleanup(ControllerColliderHit_t240592346_marshaled_com& marshaled)
{
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
// System.Void UnityEngine.MeshCollider::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MeshCollider__ctor_m2702027673 (MeshCollider_t903564387 * __this, const RuntimeMethod* method)
{
	{
		Collider__ctor_m1632031523(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Mesh UnityEngine.MeshCollider::get_sharedMesh()
extern "C" IL2CPP_METHOD_ATTR Mesh_t3648964284 * MeshCollider_get_sharedMesh_m1471390983 (MeshCollider_t903564387 * __this, const RuntimeMethod* method)
{
	typedef Mesh_t3648964284 * (*MeshCollider_get_sharedMesh_m1471390983_ftn) (MeshCollider_t903564387 *);
	static MeshCollider_get_sharedMesh_m1471390983_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MeshCollider_get_sharedMesh_m1471390983_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MeshCollider::get_sharedMesh()");
	Mesh_t3648964284 * retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.MeshCollider::set_sharedMesh(UnityEngine.Mesh)
extern "C" IL2CPP_METHOD_ATTR void MeshCollider_set_sharedMesh_m1986498669 (MeshCollider_t903564387 * __this, Mesh_t3648964284 * ___value0, const RuntimeMethod* method)
{
	typedef void (*MeshCollider_set_sharedMesh_m1986498669_ftn) (MeshCollider_t903564387 *, Mesh_t3648964284 *);
	static MeshCollider_set_sharedMesh_m1986498669_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MeshCollider_set_sharedMesh_m1986498669_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MeshCollider::set_sharedMesh(UnityEngine.Mesh)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.MeshCollider::get_convex()
extern "C" IL2CPP_METHOD_ATTR bool MeshCollider_get_convex_m1835436655 (MeshCollider_t903564387 * __this, const RuntimeMethod* method)
{
	typedef bool (*MeshCollider_get_convex_m1835436655_ftn) (MeshCollider_t903564387 *);
	static MeshCollider_get_convex_m1835436655_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MeshCollider_get_convex_m1835436655_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MeshCollider::get_convex()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.MeshCollider::set_convex(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MeshCollider_set_convex_m840510835 (MeshCollider_t903564387 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*MeshCollider_set_convex_m840510835_ftn) (MeshCollider_t903564387 *, bool);
	static MeshCollider_set_convex_m840510835_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MeshCollider_set_convex_m840510835_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MeshCollider::set_convex(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.MeshColliderCookingOptions UnityEngine.MeshCollider::get_cookingOptions()
extern "C" IL2CPP_METHOD_ATTR int32_t MeshCollider_get_cookingOptions_m2188498099 (MeshCollider_t903564387 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*MeshCollider_get_cookingOptions_m2188498099_ftn) (MeshCollider_t903564387 *);
	static MeshCollider_get_cookingOptions_m2188498099_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MeshCollider_get_cookingOptions_m2188498099_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MeshCollider::get_cookingOptions()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.MeshCollider::set_cookingOptions(UnityEngine.MeshColliderCookingOptions)
extern "C" IL2CPP_METHOD_ATTR void MeshCollider_set_cookingOptions_m2964344721 (MeshCollider_t903564387 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*MeshCollider_set_cookingOptions_m2964344721_ftn) (MeshCollider_t903564387 *, int32_t);
	static MeshCollider_set_cookingOptions_m2964344721_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MeshCollider_set_cookingOptions_m2964344721_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MeshCollider::set_cookingOptions(UnityEngine.MeshColliderCookingOptions)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.MeshCollider::get_inflateMesh()
extern "C" IL2CPP_METHOD_ATTR bool MeshCollider_get_inflateMesh_m3782082452 (MeshCollider_t903564387 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = MeshCollider_get_cookingOptions_m2188498099(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0015:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.MeshCollider::set_inflateMesh(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MeshCollider_set_inflateMesh_m1778269099 (MeshCollider_t903564387 * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = MeshCollider_get_cookingOptions_m2188498099(__this, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_0&(int32_t)((int32_t)-2)));
		bool L_1 = ___value0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_2 = V_0;
		V_0 = ((int32_t)((int32_t)L_2|(int32_t)1));
	}

IL_0015:
	{
		int32_t L_3 = V_0;
		MeshCollider_set_cookingOptions_m2964344721(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Single UnityEngine.MeshCollider::get_skinWidth()
extern "C" IL2CPP_METHOD_ATTR float MeshCollider_get_skinWidth_m3529578836 (MeshCollider_t903564387 * __this, const RuntimeMethod* method)
{
	typedef float (*MeshCollider_get_skinWidth_m3529578836_ftn) (MeshCollider_t903564387 *);
	static MeshCollider_get_skinWidth_m3529578836_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MeshCollider_get_skinWidth_m3529578836_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MeshCollider::get_skinWidth()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.MeshCollider::set_skinWidth(System.Single)
extern "C" IL2CPP_METHOD_ATTR void MeshCollider_set_skinWidth_m1782069040 (MeshCollider_t903564387 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*MeshCollider_set_skinWidth_m1782069040_ftn) (MeshCollider_t903564387 *, float);
	static MeshCollider_set_skinWidth_m1782069040_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MeshCollider_set_skinWidth_m1782069040_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MeshCollider::set_skinWidth(System.Single)");
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
// System.Void UnityEngine.PhysicMaterial::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PhysicMaterial__ctor_m1658318133 (PhysicMaterial_t2874185564 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhysicMaterial__ctor_m1658318133_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object__ctor_m1087895580(__this, /*hidden argument*/NULL);
		PhysicMaterial_Internal_CreateDynamicsMaterial_m1064353702(NULL /*static, unused*/, __this, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.PhysicMaterial::Internal_CreateDynamicsMaterial(UnityEngine.PhysicMaterial,System.String)
extern "C" IL2CPP_METHOD_ATTR void PhysicMaterial_Internal_CreateDynamicsMaterial_m1064353702 (RuntimeObject * __this /* static, unused */, PhysicMaterial_t2874185564 * ___mat0, String_t* ___name1, const RuntimeMethod* method)
{
	typedef void (*PhysicMaterial_Internal_CreateDynamicsMaterial_m1064353702_ftn) (PhysicMaterial_t2874185564 *, String_t*);
	static PhysicMaterial_Internal_CreateDynamicsMaterial_m1064353702_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PhysicMaterial_Internal_CreateDynamicsMaterial_m1064353702_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PhysicMaterial::Internal_CreateDynamicsMaterial(UnityEngine.PhysicMaterial,System.String)");
	_il2cpp_icall_func(___mat0, ___name1);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3 UnityEngine.Physics::get_gravity()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Physics_get_gravity_m2660066594 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Physics_INTERNAL_get_gravity_m960240164(NULL /*static, unused*/, (&V_0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_0 = V_0;
		V_1 = L_0;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t3722313464  L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.Physics::set_gravity(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Physics_set_gravity_m1577631912 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	{
		Physics_INTERNAL_set_gravity_m2930207665(NULL /*static, unused*/, (&___value0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Physics::INTERNAL_get_gravity(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Physics_INTERNAL_get_gravity_m960240164 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Physics_INTERNAL_get_gravity_m960240164_ftn) (Vector3_t3722313464 *);
	static Physics_INTERNAL_get_gravity_m960240164_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_get_gravity_m960240164_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_get_gravity(UnityEngine.Vector3&)");
	_il2cpp_icall_func(___value0);
}
// System.Void UnityEngine.Physics::INTERNAL_set_gravity(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Physics_INTERNAL_set_gravity_m2930207665 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Physics_INTERNAL_set_gravity_m2930207665_ftn) (Vector3_t3722313464 *);
	static Physics_INTERNAL_set_gravity_m2930207665_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_set_gravity_m2930207665_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_set_gravity(UnityEngine.Vector3&)");
	_il2cpp_icall_func(___value0);
}
// System.Single UnityEngine.Physics::get_defaultContactOffset()
extern "C" IL2CPP_METHOD_ATTR float Physics_get_defaultContactOffset_m1614843812 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef float (*Physics_get_defaultContactOffset_m1614843812_ftn) ();
	static Physics_get_defaultContactOffset_m1614843812_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_get_defaultContactOffset_m1614843812_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::get_defaultContactOffset()");
	float retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Void UnityEngine.Physics::set_defaultContactOffset(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Physics_set_defaultContactOffset_m633202524 (RuntimeObject * __this /* static, unused */, float ___value0, const RuntimeMethod* method)
{
	typedef void (*Physics_set_defaultContactOffset_m633202524_ftn) (float);
	static Physics_set_defaultContactOffset_m633202524_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_set_defaultContactOffset_m633202524_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::set_defaultContactOffset(System.Single)");
	_il2cpp_icall_func(___value0);
}
// System.Single UnityEngine.Physics::get_bounceThreshold()
extern "C" IL2CPP_METHOD_ATTR float Physics_get_bounceThreshold_m2515905977 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef float (*Physics_get_bounceThreshold_m2515905977_ftn) ();
	static Physics_get_bounceThreshold_m2515905977_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_get_bounceThreshold_m2515905977_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::get_bounceThreshold()");
	float retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Void UnityEngine.Physics::set_bounceThreshold(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Physics_set_bounceThreshold_m1507963699 (RuntimeObject * __this /* static, unused */, float ___value0, const RuntimeMethod* method)
{
	typedef void (*Physics_set_bounceThreshold_m1507963699_ftn) (float);
	static Physics_set_bounceThreshold_m1507963699_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_set_bounceThreshold_m1507963699_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::set_bounceThreshold(System.Single)");
	_il2cpp_icall_func(___value0);
}
// System.Int32 UnityEngine.Physics::get_defaultSolverIterations()
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_get_defaultSolverIterations_m657706242 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (*Physics_get_defaultSolverIterations_m657706242_ftn) ();
	static Physics_get_defaultSolverIterations_m657706242_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_get_defaultSolverIterations_m657706242_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::get_defaultSolverIterations()");
	int32_t retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Void UnityEngine.Physics::set_defaultSolverIterations(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Physics_set_defaultSolverIterations_m2395218916 (RuntimeObject * __this /* static, unused */, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*Physics_set_defaultSolverIterations_m2395218916_ftn) (int32_t);
	static Physics_set_defaultSolverIterations_m2395218916_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_set_defaultSolverIterations_m2395218916_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::set_defaultSolverIterations(System.Int32)");
	_il2cpp_icall_func(___value0);
}
// System.Int32 UnityEngine.Physics::get_defaultSolverVelocityIterations()
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_get_defaultSolverVelocityIterations_m797644575 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (*Physics_get_defaultSolverVelocityIterations_m797644575_ftn) ();
	static Physics_get_defaultSolverVelocityIterations_m797644575_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_get_defaultSolverVelocityIterations_m797644575_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::get_defaultSolverVelocityIterations()");
	int32_t retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Void UnityEngine.Physics::set_defaultSolverVelocityIterations(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Physics_set_defaultSolverVelocityIterations_m4242727696 (RuntimeObject * __this /* static, unused */, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*Physics_set_defaultSolverVelocityIterations_m4242727696_ftn) (int32_t);
	static Physics_set_defaultSolverVelocityIterations_m4242727696_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_set_defaultSolverVelocityIterations_m4242727696_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::set_defaultSolverVelocityIterations(System.Int32)");
	_il2cpp_icall_func(___value0);
}
// System.Single UnityEngine.Physics::get_sleepThreshold()
extern "C" IL2CPP_METHOD_ATTR float Physics_get_sleepThreshold_m827033032 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef float (*Physics_get_sleepThreshold_m827033032_ftn) ();
	static Physics_get_sleepThreshold_m827033032_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_get_sleepThreshold_m827033032_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::get_sleepThreshold()");
	float retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Void UnityEngine.Physics::set_sleepThreshold(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Physics_set_sleepThreshold_m259651519 (RuntimeObject * __this /* static, unused */, float ___value0, const RuntimeMethod* method)
{
	typedef void (*Physics_set_sleepThreshold_m259651519_ftn) (float);
	static Physics_set_sleepThreshold_m259651519_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_set_sleepThreshold_m259651519_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::set_sleepThreshold(System.Single)");
	_il2cpp_icall_func(___value0);
}
// System.Boolean UnityEngine.Physics::get_queriesHitTriggers()
extern "C" IL2CPP_METHOD_ATTR bool Physics_get_queriesHitTriggers_m474632793 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef bool (*Physics_get_queriesHitTriggers_m474632793_ftn) ();
	static Physics_get_queriesHitTriggers_m474632793_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_get_queriesHitTriggers_m474632793_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::get_queriesHitTriggers()");
	bool retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Void UnityEngine.Physics::set_queriesHitTriggers(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Physics_set_queriesHitTriggers_m2749614962 (RuntimeObject * __this /* static, unused */, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*Physics_set_queriesHitTriggers_m2749614962_ftn) (bool);
	static Physics_set_queriesHitTriggers_m2749614962_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_set_queriesHitTriggers_m2749614962_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::set_queriesHitTriggers(System.Boolean)");
	_il2cpp_icall_func(___value0);
}
// System.Boolean UnityEngine.Physics::get_queriesHitBackfaces()
extern "C" IL2CPP_METHOD_ATTR bool Physics_get_queriesHitBackfaces_m1974961219 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef bool (*Physics_get_queriesHitBackfaces_m1974961219_ftn) ();
	static Physics_get_queriesHitBackfaces_m1974961219_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_get_queriesHitBackfaces_m1974961219_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::get_queriesHitBackfaces()");
	bool retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Void UnityEngine.Physics::set_queriesHitBackfaces(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Physics_set_queriesHitBackfaces_m1636906234 (RuntimeObject * __this /* static, unused */, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*Physics_set_queriesHitBackfaces_m1636906234_ftn) (bool);
	static Physics_set_queriesHitBackfaces_m1636906234_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_set_queriesHitBackfaces_m1636906234_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::set_queriesHitBackfaces(System.Boolean)");
	_il2cpp_icall_func(___value0);
}
// System.Single UnityEngine.Physics::get_interCollisionDistance()
extern "C" IL2CPP_METHOD_ATTR float Physics_get_interCollisionDistance_m2670330664 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef float (*Physics_get_interCollisionDistance_m2670330664_ftn) ();
	static Physics_get_interCollisionDistance_m2670330664_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_get_interCollisionDistance_m2670330664_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::get_interCollisionDistance()");
	float retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Void UnityEngine.Physics::set_interCollisionDistance(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Physics_set_interCollisionDistance_m3785251057 (RuntimeObject * __this /* static, unused */, float ___value0, const RuntimeMethod* method)
{
	typedef void (*Physics_set_interCollisionDistance_m3785251057_ftn) (float);
	static Physics_set_interCollisionDistance_m3785251057_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_set_interCollisionDistance_m3785251057_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::set_interCollisionDistance(System.Single)");
	_il2cpp_icall_func(___value0);
}
// System.Single UnityEngine.Physics::get_interCollisionStiffness()
extern "C" IL2CPP_METHOD_ATTR float Physics_get_interCollisionStiffness_m3894338780 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef float (*Physics_get_interCollisionStiffness_m3894338780_ftn) ();
	static Physics_get_interCollisionStiffness_m3894338780_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_get_interCollisionStiffness_m3894338780_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::get_interCollisionStiffness()");
	float retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Void UnityEngine.Physics::set_interCollisionStiffness(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Physics_set_interCollisionStiffness_m4141536563 (RuntimeObject * __this /* static, unused */, float ___value0, const RuntimeMethod* method)
{
	typedef void (*Physics_set_interCollisionStiffness_m4141536563_ftn) (float);
	static Physics_set_interCollisionStiffness_m4141536563_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_set_interCollisionStiffness_m4141536563_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::set_interCollisionStiffness(System.Single)");
	_il2cpp_icall_func(___value0);
}
// System.Boolean UnityEngine.Physics::get_interCollisionSettingsToggle()
extern "C" IL2CPP_METHOD_ATTR bool Physics_get_interCollisionSettingsToggle_m516211941 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef bool (*Physics_get_interCollisionSettingsToggle_m516211941_ftn) ();
	static Physics_get_interCollisionSettingsToggle_m516211941_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_get_interCollisionSettingsToggle_m516211941_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::get_interCollisionSettingsToggle()");
	bool retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Void UnityEngine.Physics::set_interCollisionSettingsToggle(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Physics_set_interCollisionSettingsToggle_m3755416369 (RuntimeObject * __this /* static, unused */, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*Physics_set_interCollisionSettingsToggle_m3755416369_ftn) (bool);
	static Physics_set_interCollisionSettingsToggle_m3755416369_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_set_interCollisionSettingsToggle_m3755416369_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::set_interCollisionSettingsToggle(System.Boolean)");
	_il2cpp_icall_func(___value0);
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m234523501 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, Vector3_t3722313464  ___direction1, float ___maxDistance2, int32_t ___layerMask3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		V_0 = 0;
		Vector3_t3722313464  L_0 = ___origin0;
		Vector3_t3722313464  L_1 = ___direction1;
		float L_2 = ___maxDistance2;
		int32_t L_3 = ___layerMask3;
		int32_t L_4 = V_0;
		bool L_5 = Physics_Raycast_m3482819239(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		goto IL_0013;
	}

IL_0013:
	{
		bool L_6 = V_1;
		return L_6;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m1896872038 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, Vector3_t3722313464  ___direction1, float ___maxDistance2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		Vector3_t3722313464  L_0 = ___origin0;
		Vector3_t3722313464  L_1 = ___direction1;
		float L_2 = ___maxDistance2;
		int32_t L_3 = V_1;
		int32_t L_4 = V_0;
		bool L_5 = Physics_Raycast_m3482819239(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_6 = V_2;
		return L_6;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m952690504 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, Vector3_t3722313464  ___direction1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	bool V_3 = false;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		V_2 = (std::numeric_limits<float>::infinity());
		Vector3_t3722313464  L_0 = ___origin0;
		Vector3_t3722313464  L_1 = ___direction1;
		float L_2 = V_2;
		int32_t L_3 = V_1;
		int32_t L_4 = V_0;
		bool L_5 = Physics_Raycast_m3482819239(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_3 = L_5;
		goto IL_001c;
	}

IL_001c:
	{
		bool L_6 = V_3;
		return L_6;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m3482819239 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, Vector3_t3722313464  ___direction1, float ___maxDistance2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Vector3_t3722313464  L_0 = ___origin0;
		Vector3_t3722313464  L_1 = ___direction1;
		float L_2 = ___maxDistance2;
		int32_t L_3 = ___layerMask3;
		int32_t L_4 = ___queryTriggerInteraction4;
		bool L_5 = Physics_Internal_RaycastTest_m1784372019(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m4145022031 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, Vector3_t3722313464  ___direction1, RaycastHit_t1056001966 * ___hitInfo2, float ___maxDistance3, int32_t ___layerMask4, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		V_0 = 0;
		Vector3_t3722313464  L_0 = ___origin0;
		Vector3_t3722313464  L_1 = ___direction1;
		RaycastHit_t1056001966 * L_2 = ___hitInfo2;
		float L_3 = ___maxDistance3;
		int32_t L_4 = ___layerMask4;
		int32_t L_5 = V_0;
		bool L_6 = Physics_Raycast_m3101461809(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		goto IL_0015;
	}

IL_0015:
	{
		bool L_7 = V_1;
		return L_7;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m261647105 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, Vector3_t3722313464  ___direction1, RaycastHit_t1056001966 * ___hitInfo2, float ___maxDistance3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		Vector3_t3722313464  L_0 = ___origin0;
		Vector3_t3722313464  L_1 = ___direction1;
		RaycastHit_t1056001966 * L_2 = ___hitInfo2;
		float L_3 = ___maxDistance3;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		bool L_6 = Physics_Raycast_m3101461809(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		goto IL_0017;
	}

IL_0017:
	{
		bool L_7 = V_2;
		return L_7;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m1085399925 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, Vector3_t3722313464  ___direction1, RaycastHit_t1056001966 * ___hitInfo2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	bool V_3 = false;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		V_2 = (std::numeric_limits<float>::infinity());
		Vector3_t3722313464  L_0 = ___origin0;
		Vector3_t3722313464  L_1 = ___direction1;
		RaycastHit_t1056001966 * L_2 = ___hitInfo2;
		float L_3 = V_2;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		bool L_6 = Physics_Raycast_m3101461809(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		V_3 = L_6;
		goto IL_001d;
	}

IL_001d:
	{
		bool L_7 = V_3;
		return L_7;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m3101461809 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, Vector3_t3722313464  ___direction1, RaycastHit_t1056001966 * ___hitInfo2, float ___maxDistance3, int32_t ___layerMask4, int32_t ___queryTriggerInteraction5, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Vector3_t3722313464  L_0 = ___origin0;
		Vector3_t3722313464  L_1 = ___direction1;
		RaycastHit_t1056001966 * L_2 = ___hitInfo2;
		float L_3 = ___maxDistance3;
		int32_t L_4 = ___layerMask4;
		int32_t L_5 = ___queryTriggerInteraction5;
		bool L_6 = Physics_Internal_Raycast_m2789434453(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m2071039297 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, float ___maxDistance1, int32_t ___layerMask2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		V_0 = 0;
		Ray_t3785851493  L_0 = ___ray0;
		float L_1 = ___maxDistance1;
		int32_t L_2 = ___layerMask2;
		int32_t L_3 = V_0;
		bool L_4 = Physics_Raycast_m3133704280(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_0012;
	}

IL_0012:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,System.Single)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m281474224 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, float ___maxDistance1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		Ray_t3785851493  L_0 = ___ray0;
		float L_1 = ___maxDistance1;
		int32_t L_2 = V_1;
		int32_t L_3 = V_0;
		bool L_4 = Physics_Raycast_m3133704280(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		bool L_5 = V_2;
		return L_5;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m630863594 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	bool V_3 = false;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		V_2 = (std::numeric_limits<float>::infinity());
		Ray_t3785851493  L_0 = ___ray0;
		float L_1 = V_2;
		int32_t L_2 = V_1;
		int32_t L_3 = V_0;
		bool L_4 = Physics_Raycast_m3133704280(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_3 = L_4;
		goto IL_001b;
	}

IL_001b:
	{
		bool L_5 = V_3;
		return L_5;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m3133704280 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, float ___maxDistance1, int32_t ___layerMask2, int32_t ___queryTriggerInteraction3, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Vector3_t3722313464  L_0 = Ray_get_origin_m2819290985((&___ray0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = Ray_get_direction_m761601601((&___ray0), /*hidden argument*/NULL);
		float L_2 = ___maxDistance1;
		int32_t L_3 = ___layerMask2;
		int32_t L_4 = ___queryTriggerInteraction3;
		bool L_5 = Physics_Raycast_m3482819239(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_001d;
	}

IL_001d:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m1893809531 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, RaycastHit_t1056001966 * ___hitInfo1, float ___maxDistance2, int32_t ___layerMask3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		V_0 = 0;
		Ray_t3785851493  L_0 = ___ray0;
		RaycastHit_t1056001966 * L_1 = ___hitInfo1;
		float L_2 = ___maxDistance2;
		int32_t L_3 = ___layerMask3;
		int32_t L_4 = V_0;
		bool L_5 = Physics_Raycast_m3336206959(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		goto IL_0013;
	}

IL_0013:
	{
		bool L_6 = V_1;
		return L_6;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m1743768310 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, RaycastHit_t1056001966 * ___hitInfo1, float ___maxDistance2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		Ray_t3785851493  L_0 = ___ray0;
		RaycastHit_t1056001966 * L_1 = ___hitInfo1;
		float L_2 = ___maxDistance2;
		int32_t L_3 = V_1;
		int32_t L_4 = V_0;
		bool L_5 = Physics_Raycast_m3336206959(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_6 = V_2;
		return L_6;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m447436869 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, RaycastHit_t1056001966 * ___hitInfo1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	bool V_3 = false;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		V_2 = (std::numeric_limits<float>::infinity());
		Ray_t3785851493  L_0 = ___ray0;
		RaycastHit_t1056001966 * L_1 = ___hitInfo1;
		float L_2 = V_2;
		int32_t L_3 = V_1;
		int32_t L_4 = V_0;
		bool L_5 = Physics_Raycast_m3336206959(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_3 = L_5;
		goto IL_001c;
	}

IL_001c:
	{
		bool L_6 = V_3;
		return L_6;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m3336206959 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, RaycastHit_t1056001966 * ___hitInfo1, float ___maxDistance2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Vector3_t3722313464  L_0 = Ray_get_origin_m2819290985((&___ray0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = Ray_get_direction_m761601601((&___ray0), /*hidden argument*/NULL);
		RaycastHit_t1056001966 * L_2 = ___hitInfo1;
		float L_3 = ___maxDistance2;
		int32_t L_4 = ___layerMask3;
		int32_t L_5 = ___queryTriggerInteraction4;
		bool L_6 = Physics_Raycast_m3101461809(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001f;
	}

IL_001f:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_RaycastAll_m3780585721 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, float ___maxDistance1, int32_t ___layerMask2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RaycastHitU5BU5D_t1690781147* V_1 = NULL;
	{
		V_0 = 0;
		Ray_t3785851493  L_0 = ___ray0;
		float L_1 = ___maxDistance1;
		int32_t L_2 = ___layerMask2;
		int32_t L_3 = V_0;
		RaycastHitU5BU5D_t1690781147* L_4 = Physics_RaycastAll_m3611981381(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_0012;
	}

IL_0012:
	{
		RaycastHitU5BU5D_t1690781147* L_5 = V_1;
		return L_5;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_RaycastAll_m849698669 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, float ___maxDistance1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RaycastHitU5BU5D_t1690781147* V_2 = NULL;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		Ray_t3785851493  L_0 = ___ray0;
		float L_1 = ___maxDistance1;
		int32_t L_2 = V_1;
		int32_t L_3 = V_0;
		RaycastHitU5BU5D_t1690781147* L_4 = Physics_RaycastAll_m3611981381(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		RaycastHitU5BU5D_t1690781147* L_5 = V_2;
		return L_5;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_RaycastAll_m3796226007 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	RaycastHitU5BU5D_t1690781147* V_3 = NULL;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		V_2 = (std::numeric_limits<float>::infinity());
		Ray_t3785851493  L_0 = ___ray0;
		float L_1 = V_2;
		int32_t L_2 = V_1;
		int32_t L_3 = V_0;
		RaycastHitU5BU5D_t1690781147* L_4 = Physics_RaycastAll_m3611981381(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_3 = L_4;
		goto IL_001b;
	}

IL_001b:
	{
		RaycastHitU5BU5D_t1690781147* L_5 = V_3;
		return L_5;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_RaycastAll_m3611981381 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, float ___maxDistance1, int32_t ___layerMask2, int32_t ___queryTriggerInteraction3, const RuntimeMethod* method)
{
	RaycastHitU5BU5D_t1690781147* V_0 = NULL;
	{
		Vector3_t3722313464  L_0 = Ray_get_origin_m2819290985((&___ray0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = Ray_get_direction_m761601601((&___ray0), /*hidden argument*/NULL);
		float L_2 = ___maxDistance1;
		int32_t L_3 = ___layerMask2;
		int32_t L_4 = ___queryTriggerInteraction3;
		RaycastHitU5BU5D_t1690781147* L_5 = Physics_RaycastAll_m3084184534(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_001d;
	}

IL_001d:
	{
		RaycastHitU5BU5D_t1690781147* L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_RaycastAll_m3084184534 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, Vector3_t3722313464  ___direction1, float ___maxDistance2, int32_t ___layermask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method)
{
	RaycastHitU5BU5D_t1690781147* V_0 = NULL;
	{
		float L_0 = ___maxDistance2;
		int32_t L_1 = ___layermask3;
		int32_t L_2 = ___queryTriggerInteraction4;
		RaycastHitU5BU5D_t1690781147* L_3 = Physics_INTERNAL_CALL_RaycastAll_m1113565514(NULL /*static, unused*/, (&___origin0), (&___direction1), L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		RaycastHitU5BU5D_t1690781147* L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_RaycastAll_m2709753186 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, Vector3_t3722313464  ___direction1, float ___maxDistance2, int32_t ___layermask3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RaycastHitU5BU5D_t1690781147* V_1 = NULL;
	{
		V_0 = 0;
		float L_0 = ___maxDistance2;
		int32_t L_1 = ___layermask3;
		int32_t L_2 = V_0;
		RaycastHitU5BU5D_t1690781147* L_3 = Physics_INTERNAL_CALL_RaycastAll_m1113565514(NULL /*static, unused*/, (&___origin0), (&___direction1), L_0, L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_0015;
	}

IL_0015:
	{
		RaycastHitU5BU5D_t1690781147* L_4 = V_1;
		return L_4;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_RaycastAll_m447622039 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, Vector3_t3722313464  ___direction1, float ___maxDistance2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RaycastHitU5BU5D_t1690781147* V_2 = NULL;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		float L_0 = ___maxDistance2;
		int32_t L_1 = V_1;
		int32_t L_2 = V_0;
		RaycastHitU5BU5D_t1690781147* L_3 = Physics_INTERNAL_CALL_RaycastAll_m1113565514(NULL /*static, unused*/, (&___origin0), (&___direction1), L_0, L_1, L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		goto IL_0018;
	}

IL_0018:
	{
		RaycastHitU5BU5D_t1690781147* L_4 = V_2;
		return L_4;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_RaycastAll_m2266459302 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, Vector3_t3722313464  ___direction1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	RaycastHitU5BU5D_t1690781147* V_3 = NULL;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		V_2 = (std::numeric_limits<float>::infinity());
		float L_0 = V_2;
		int32_t L_1 = V_1;
		int32_t L_2 = V_0;
		RaycastHitU5BU5D_t1690781147* L_3 = Physics_INTERNAL_CALL_RaycastAll_m1113565514(NULL /*static, unused*/, (&___origin0), (&___direction1), L_0, L_1, L_2, /*hidden argument*/NULL);
		V_3 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		RaycastHitU5BU5D_t1690781147* L_4 = V_3;
		return L_4;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_INTERNAL_CALL_RaycastAll_m1113565514 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___origin0, Vector3_t3722313464 * ___direction1, float ___maxDistance2, int32_t ___layermask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method)
{
	typedef RaycastHitU5BU5D_t1690781147* (*Physics_INTERNAL_CALL_RaycastAll_m1113565514_ftn) (Vector3_t3722313464 *, Vector3_t3722313464 *, float, int32_t, int32_t);
	static Physics_INTERNAL_CALL_RaycastAll_m1113565514_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_RaycastAll_m1113565514_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)");
	RaycastHitU5BU5D_t1690781147* retVal = _il2cpp_icall_func(___origin0, ___direction1, ___maxDistance2, ___layermask3, ___queryTriggerInteraction4);
	return retVal;
}
// System.Int32 UnityEngine.Physics::RaycastNonAlloc(UnityEngine.Ray,UnityEngine.RaycastHit[],System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_RaycastNonAlloc_m2563095060 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, RaycastHitU5BU5D_t1690781147* ___results1, float ___maxDistance2, int32_t ___layerMask3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		Ray_t3785851493  L_0 = ___ray0;
		RaycastHitU5BU5D_t1690781147* L_1 = ___results1;
		float L_2 = ___maxDistance2;
		int32_t L_3 = ___layerMask3;
		int32_t L_4 = V_0;
		int32_t L_5 = Physics_RaycastNonAlloc_m236969326(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		goto IL_0013;
	}

IL_0013:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
// System.Int32 UnityEngine.Physics::RaycastNonAlloc(UnityEngine.Ray,UnityEngine.RaycastHit[],System.Single)
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_RaycastNonAlloc_m1982942593 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, RaycastHitU5BU5D_t1690781147* ___results1, float ___maxDistance2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		Ray_t3785851493  L_0 = ___ray0;
		RaycastHitU5BU5D_t1690781147* L_1 = ___results1;
		float L_2 = ___maxDistance2;
		int32_t L_3 = V_1;
		int32_t L_4 = V_0;
		int32_t L_5 = Physics_RaycastNonAlloc_m236969326(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_6 = V_2;
		return L_6;
	}
}
// System.Int32 UnityEngine.Physics::RaycastNonAlloc(UnityEngine.Ray,UnityEngine.RaycastHit[])
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_RaycastNonAlloc_m2114589737 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, RaycastHitU5BU5D_t1690781147* ___results1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		V_2 = (std::numeric_limits<float>::infinity());
		Ray_t3785851493  L_0 = ___ray0;
		RaycastHitU5BU5D_t1690781147* L_1 = ___results1;
		float L_2 = V_2;
		int32_t L_3 = V_1;
		int32_t L_4 = V_0;
		int32_t L_5 = Physics_RaycastNonAlloc_m236969326(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_3 = L_5;
		goto IL_001c;
	}

IL_001c:
	{
		int32_t L_6 = V_3;
		return L_6;
	}
}
// System.Int32 UnityEngine.Physics::RaycastNonAlloc(UnityEngine.Ray,UnityEngine.RaycastHit[],System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_RaycastNonAlloc_m236969326 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, RaycastHitU5BU5D_t1690781147* ___results1, float ___maxDistance2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		Vector3_t3722313464  L_0 = Ray_get_origin_m2819290985((&___ray0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = Ray_get_direction_m761601601((&___ray0), /*hidden argument*/NULL);
		RaycastHitU5BU5D_t1690781147* L_2 = ___results1;
		float L_3 = ___maxDistance2;
		int32_t L_4 = ___layerMask3;
		int32_t L_5 = ___queryTriggerInteraction4;
		int32_t L_6 = Physics_RaycastNonAlloc_m610726372(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001f;
	}

IL_001f:
	{
		int32_t L_7 = V_0;
		return L_7;
	}
}
// System.Int32 UnityEngine.Physics::RaycastNonAlloc(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit[],System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_RaycastNonAlloc_m610726372 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, Vector3_t3722313464  ___direction1, RaycastHitU5BU5D_t1690781147* ___results2, float ___maxDistance3, int32_t ___layermask4, int32_t ___queryTriggerInteraction5, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		RaycastHitU5BU5D_t1690781147* L_0 = ___results2;
		float L_1 = ___maxDistance3;
		int32_t L_2 = ___layermask4;
		int32_t L_3 = ___queryTriggerInteraction5;
		int32_t L_4 = Physics_INTERNAL_CALL_RaycastNonAlloc_m2984676886(NULL /*static, unused*/, (&___origin0), (&___direction1), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Int32 UnityEngine.Physics::RaycastNonAlloc(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit[],System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_RaycastNonAlloc_m1900264243 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, Vector3_t3722313464  ___direction1, RaycastHitU5BU5D_t1690781147* ___results2, float ___maxDistance3, int32_t ___layermask4, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		RaycastHitU5BU5D_t1690781147* L_0 = ___results2;
		float L_1 = ___maxDistance3;
		int32_t L_2 = ___layermask4;
		int32_t L_3 = V_0;
		int32_t L_4 = Physics_INTERNAL_CALL_RaycastNonAlloc_m2984676886(NULL /*static, unused*/, (&___origin0), (&___direction1), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_0017;
	}

IL_0017:
	{
		int32_t L_5 = V_1;
		return L_5;
	}
}
// System.Int32 UnityEngine.Physics::RaycastNonAlloc(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit[],System.Single)
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_RaycastNonAlloc_m561527288 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, Vector3_t3722313464  ___direction1, RaycastHitU5BU5D_t1690781147* ___results2, float ___maxDistance3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		RaycastHitU5BU5D_t1690781147* L_0 = ___results2;
		float L_1 = ___maxDistance3;
		int32_t L_2 = V_1;
		int32_t L_3 = V_0;
		int32_t L_4 = Physics_INTERNAL_CALL_RaycastNonAlloc_m2984676886(NULL /*static, unused*/, (&___origin0), (&___direction1), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		goto IL_0019;
	}

IL_0019:
	{
		int32_t L_5 = V_2;
		return L_5;
	}
}
// System.Int32 UnityEngine.Physics::RaycastNonAlloc(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit[])
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_RaycastNonAlloc_m3294634715 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, Vector3_t3722313464  ___direction1, RaycastHitU5BU5D_t1690781147* ___results2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		V_2 = (std::numeric_limits<float>::infinity());
		RaycastHitU5BU5D_t1690781147* L_0 = ___results2;
		float L_1 = V_2;
		int32_t L_2 = V_1;
		int32_t L_3 = V_0;
		int32_t L_4 = Physics_INTERNAL_CALL_RaycastNonAlloc_m2984676886(NULL /*static, unused*/, (&___origin0), (&___direction1), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_3 = L_4;
		goto IL_001f;
	}

IL_001f:
	{
		int32_t L_5 = V_3;
		return L_5;
	}
}
// System.Int32 UnityEngine.Physics::INTERNAL_CALL_RaycastNonAlloc(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit[],System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_INTERNAL_CALL_RaycastNonAlloc_m2984676886 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___origin0, Vector3_t3722313464 * ___direction1, RaycastHitU5BU5D_t1690781147* ___results2, float ___maxDistance3, int32_t ___layermask4, int32_t ___queryTriggerInteraction5, const RuntimeMethod* method)
{
	typedef int32_t (*Physics_INTERNAL_CALL_RaycastNonAlloc_m2984676886_ftn) (Vector3_t3722313464 *, Vector3_t3722313464 *, RaycastHitU5BU5D_t1690781147*, float, int32_t, int32_t);
	static Physics_INTERNAL_CALL_RaycastNonAlloc_m2984676886_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_RaycastNonAlloc_m2984676886_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_RaycastNonAlloc(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit[],System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)");
	int32_t retVal = _il2cpp_icall_func(___origin0, ___direction1, ___results2, ___maxDistance3, ___layermask4, ___queryTriggerInteraction5);
	return retVal;
}
// System.Boolean UnityEngine.Physics::Linecast(UnityEngine.Vector3,UnityEngine.Vector3,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Linecast_m1081031506 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___start0, Vector3_t3722313464  ___end1, int32_t ___layerMask2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		V_0 = 0;
		Vector3_t3722313464  L_0 = ___start0;
		Vector3_t3722313464  L_1 = ___end1;
		int32_t L_2 = ___layerMask2;
		int32_t L_3 = V_0;
		bool L_4 = Physics_Linecast_m461729236(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_0012;
	}

IL_0012:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Boolean UnityEngine.Physics::Linecast(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Linecast_m2572604987 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___start0, Vector3_t3722313464  ___end1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		Vector3_t3722313464  L_0 = ___start0;
		Vector3_t3722313464  L_1 = ___end1;
		int32_t L_2 = V_1;
		int32_t L_3 = V_0;
		bool L_4 = Physics_Linecast_m461729236(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		bool L_5 = V_2;
		return L_5;
	}
}
// System.Boolean UnityEngine.Physics::Linecast(UnityEngine.Vector3,UnityEngine.Vector3,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Linecast_m461729236 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___start0, Vector3_t3722313464  ___end1, int32_t ___layerMask2, int32_t ___queryTriggerInteraction3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Physics_Linecast_m461729236_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	bool V_1 = false;
	{
		Vector3_t3722313464  L_0 = ___end1;
		Vector3_t3722313464  L_1 = ___start0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_2 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Vector3_t3722313464  L_3 = ___start0;
		Vector3_t3722313464  L_4 = V_0;
		float L_5 = Vector3_get_magnitude_m27958459((&V_0), /*hidden argument*/NULL);
		int32_t L_6 = ___layerMask2;
		int32_t L_7 = ___queryTriggerInteraction3;
		bool L_8 = Physics_Raycast_m3482819239(NULL /*static, unused*/, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		goto IL_001f;
	}

IL_001f:
	{
		bool L_9 = V_1;
		return L_9;
	}
}
// System.Boolean UnityEngine.Physics::Linecast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Linecast_m2155187179 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___start0, Vector3_t3722313464  ___end1, RaycastHit_t1056001966 * ___hitInfo2, int32_t ___layerMask3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		V_0 = 0;
		Vector3_t3722313464  L_0 = ___start0;
		Vector3_t3722313464  L_1 = ___end1;
		RaycastHit_t1056001966 * L_2 = ___hitInfo2;
		int32_t L_3 = ___layerMask3;
		int32_t L_4 = V_0;
		bool L_5 = Physics_Linecast_m1431720142(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		goto IL_0013;
	}

IL_0013:
	{
		bool L_6 = V_1;
		return L_6;
	}
}
// System.Boolean UnityEngine.Physics::Linecast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Linecast_m916494249 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___start0, Vector3_t3722313464  ___end1, RaycastHit_t1056001966 * ___hitInfo2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		Vector3_t3722313464  L_0 = ___start0;
		Vector3_t3722313464  L_1 = ___end1;
		RaycastHit_t1056001966 * L_2 = ___hitInfo2;
		int32_t L_3 = V_1;
		int32_t L_4 = V_0;
		bool L_5 = Physics_Linecast_m1431720142(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_6 = V_2;
		return L_6;
	}
}
// System.Boolean UnityEngine.Physics::Linecast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Linecast_m1431720142 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___start0, Vector3_t3722313464  ___end1, RaycastHit_t1056001966 * ___hitInfo2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Physics_Linecast_m1431720142_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	bool V_1 = false;
	{
		Vector3_t3722313464  L_0 = ___end1;
		Vector3_t3722313464  L_1 = ___start0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_2 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Vector3_t3722313464  L_3 = ___start0;
		Vector3_t3722313464  L_4 = V_0;
		RaycastHit_t1056001966 * L_5 = ___hitInfo2;
		float L_6 = Vector3_get_magnitude_m27958459((&V_0), /*hidden argument*/NULL);
		int32_t L_7 = ___layerMask3;
		int32_t L_8 = ___queryTriggerInteraction4;
		bool L_9 = Physics_Raycast_m3101461809(NULL /*static, unused*/, L_3, L_4, L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		bool L_10 = V_1;
		return L_10;
	}
}
// UnityEngine.Collider[] UnityEngine.Physics::OverlapSphere(UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR ColliderU5BU5D_t4234922487* Physics_OverlapSphere_m3909464457 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___position0, float ___radius1, int32_t ___layerMask2, int32_t ___queryTriggerInteraction3, const RuntimeMethod* method)
{
	ColliderU5BU5D_t4234922487* V_0 = NULL;
	{
		float L_0 = ___radius1;
		int32_t L_1 = ___layerMask2;
		int32_t L_2 = ___queryTriggerInteraction3;
		ColliderU5BU5D_t4234922487* L_3 = Physics_INTERNAL_CALL_OverlapSphere_m1366282712(NULL /*static, unused*/, (&___position0), L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		ColliderU5BU5D_t4234922487* L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Collider[] UnityEngine.Physics::OverlapSphere(UnityEngine.Vector3,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR ColliderU5BU5D_t4234922487* Physics_OverlapSphere_m1831955946 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___position0, float ___radius1, int32_t ___layerMask2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	ColliderU5BU5D_t4234922487* V_1 = NULL;
	{
		V_0 = 0;
		float L_0 = ___radius1;
		int32_t L_1 = ___layerMask2;
		int32_t L_2 = V_0;
		ColliderU5BU5D_t4234922487* L_3 = Physics_INTERNAL_CALL_OverlapSphere_m1366282712(NULL /*static, unused*/, (&___position0), L_0, L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_0013;
	}

IL_0013:
	{
		ColliderU5BU5D_t4234922487* L_4 = V_1;
		return L_4;
	}
}
// UnityEngine.Collider[] UnityEngine.Physics::OverlapSphere(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR ColliderU5BU5D_t4234922487* Physics_OverlapSphere_m1830905 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___position0, float ___radius1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ColliderU5BU5D_t4234922487* V_2 = NULL;
	{
		V_0 = 0;
		V_1 = (-1);
		float L_0 = ___radius1;
		int32_t L_1 = V_1;
		int32_t L_2 = V_0;
		ColliderU5BU5D_t4234922487* L_3 = Physics_INTERNAL_CALL_OverlapSphere_m1366282712(NULL /*static, unused*/, (&___position0), L_0, L_1, L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		goto IL_0015;
	}

IL_0015:
	{
		ColliderU5BU5D_t4234922487* L_4 = V_2;
		return L_4;
	}
}
// UnityEngine.Collider[] UnityEngine.Physics::INTERNAL_CALL_OverlapSphere(UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR ColliderU5BU5D_t4234922487* Physics_INTERNAL_CALL_OverlapSphere_m1366282712 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___position0, float ___radius1, int32_t ___layerMask2, int32_t ___queryTriggerInteraction3, const RuntimeMethod* method)
{
	typedef ColliderU5BU5D_t4234922487* (*Physics_INTERNAL_CALL_OverlapSphere_m1366282712_ftn) (Vector3_t3722313464 *, float, int32_t, int32_t);
	static Physics_INTERNAL_CALL_OverlapSphere_m1366282712_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_OverlapSphere_m1366282712_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_OverlapSphere(UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)");
	ColliderU5BU5D_t4234922487* retVal = _il2cpp_icall_func(___position0, ___radius1, ___layerMask2, ___queryTriggerInteraction3);
	return retVal;
}
// System.Int32 UnityEngine.Physics::OverlapSphereNonAlloc(UnityEngine.Vector3,System.Single,UnityEngine.Collider[],System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_OverlapSphereNonAlloc_m308122717 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___position0, float ___radius1, ColliderU5BU5D_t4234922487* ___results2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		float L_0 = ___radius1;
		ColliderU5BU5D_t4234922487* L_1 = ___results2;
		int32_t L_2 = ___layerMask3;
		int32_t L_3 = ___queryTriggerInteraction4;
		int32_t L_4 = Physics_INTERNAL_CALL_OverlapSphereNonAlloc_m3878330733(NULL /*static, unused*/, (&___position0), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0013;
	}

IL_0013:
	{
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Int32 UnityEngine.Physics::OverlapSphereNonAlloc(UnityEngine.Vector3,System.Single,UnityEngine.Collider[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_OverlapSphereNonAlloc_m1907920219 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___position0, float ___radius1, ColliderU5BU5D_t4234922487* ___results2, int32_t ___layerMask3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		float L_0 = ___radius1;
		ColliderU5BU5D_t4234922487* L_1 = ___results2;
		int32_t L_2 = ___layerMask3;
		int32_t L_3 = V_0;
		int32_t L_4 = Physics_INTERNAL_CALL_OverlapSphereNonAlloc_m3878330733(NULL /*static, unused*/, (&___position0), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_0014;
	}

IL_0014:
	{
		int32_t L_5 = V_1;
		return L_5;
	}
}
// System.Int32 UnityEngine.Physics::OverlapSphereNonAlloc(UnityEngine.Vector3,System.Single,UnityEngine.Collider[])
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_OverlapSphereNonAlloc_m681429966 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___position0, float ___radius1, ColliderU5BU5D_t4234922487* ___results2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = 0;
		V_1 = (-1);
		float L_0 = ___radius1;
		ColliderU5BU5D_t4234922487* L_1 = ___results2;
		int32_t L_2 = V_1;
		int32_t L_3 = V_0;
		int32_t L_4 = Physics_INTERNAL_CALL_OverlapSphereNonAlloc_m3878330733(NULL /*static, unused*/, (&___position0), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_5 = V_2;
		return L_5;
	}
}
// System.Int32 UnityEngine.Physics::INTERNAL_CALL_OverlapSphereNonAlloc(UnityEngine.Vector3&,System.Single,UnityEngine.Collider[],System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_INTERNAL_CALL_OverlapSphereNonAlloc_m3878330733 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___position0, float ___radius1, ColliderU5BU5D_t4234922487* ___results2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method)
{
	typedef int32_t (*Physics_INTERNAL_CALL_OverlapSphereNonAlloc_m3878330733_ftn) (Vector3_t3722313464 *, float, ColliderU5BU5D_t4234922487*, int32_t, int32_t);
	static Physics_INTERNAL_CALL_OverlapSphereNonAlloc_m3878330733_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_OverlapSphereNonAlloc_m3878330733_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_OverlapSphereNonAlloc(UnityEngine.Vector3&,System.Single,UnityEngine.Collider[],System.Int32,UnityEngine.QueryTriggerInteraction)");
	int32_t retVal = _il2cpp_icall_func(___position0, ___radius1, ___results2, ___layerMask3, ___queryTriggerInteraction4);
	return retVal;
}
// UnityEngine.Collider[] UnityEngine.Physics::OverlapCapsule(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR ColliderU5BU5D_t4234922487* Physics_OverlapCapsule_m690826333 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___point00, Vector3_t3722313464  ___point11, float ___radius2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method)
{
	ColliderU5BU5D_t4234922487* V_0 = NULL;
	{
		float L_0 = ___radius2;
		int32_t L_1 = ___layerMask3;
		int32_t L_2 = ___queryTriggerInteraction4;
		ColliderU5BU5D_t4234922487* L_3 = Physics_INTERNAL_CALL_OverlapCapsule_m962533477(NULL /*static, unused*/, (&___point00), (&___point11), L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		ColliderU5BU5D_t4234922487* L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Collider[] UnityEngine.Physics::OverlapCapsule(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR ColliderU5BU5D_t4234922487* Physics_OverlapCapsule_m4031480516 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___point00, Vector3_t3722313464  ___point11, float ___radius2, int32_t ___layerMask3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	ColliderU5BU5D_t4234922487* V_1 = NULL;
	{
		V_0 = 0;
		float L_0 = ___radius2;
		int32_t L_1 = ___layerMask3;
		int32_t L_2 = V_0;
		ColliderU5BU5D_t4234922487* L_3 = Physics_INTERNAL_CALL_OverlapCapsule_m962533477(NULL /*static, unused*/, (&___point00), (&___point11), L_0, L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_0015;
	}

IL_0015:
	{
		ColliderU5BU5D_t4234922487* L_4 = V_1;
		return L_4;
	}
}
// UnityEngine.Collider[] UnityEngine.Physics::OverlapCapsule(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR ColliderU5BU5D_t4234922487* Physics_OverlapCapsule_m3908193469 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___point00, Vector3_t3722313464  ___point11, float ___radius2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ColliderU5BU5D_t4234922487* V_2 = NULL;
	{
		V_0 = 0;
		V_1 = (-1);
		float L_0 = ___radius2;
		int32_t L_1 = V_1;
		int32_t L_2 = V_0;
		ColliderU5BU5D_t4234922487* L_3 = Physics_INTERNAL_CALL_OverlapCapsule_m962533477(NULL /*static, unused*/, (&___point00), (&___point11), L_0, L_1, L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		goto IL_0017;
	}

IL_0017:
	{
		ColliderU5BU5D_t4234922487* L_4 = V_2;
		return L_4;
	}
}
// UnityEngine.Collider[] UnityEngine.Physics::INTERNAL_CALL_OverlapCapsule(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR ColliderU5BU5D_t4234922487* Physics_INTERNAL_CALL_OverlapCapsule_m962533477 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___point00, Vector3_t3722313464 * ___point11, float ___radius2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method)
{
	typedef ColliderU5BU5D_t4234922487* (*Physics_INTERNAL_CALL_OverlapCapsule_m962533477_ftn) (Vector3_t3722313464 *, Vector3_t3722313464 *, float, int32_t, int32_t);
	static Physics_INTERNAL_CALL_OverlapCapsule_m962533477_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_OverlapCapsule_m962533477_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_OverlapCapsule(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)");
	ColliderU5BU5D_t4234922487* retVal = _il2cpp_icall_func(___point00, ___point11, ___radius2, ___layerMask3, ___queryTriggerInteraction4);
	return retVal;
}
// System.Int32 UnityEngine.Physics::OverlapCapsuleNonAlloc(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Collider[],System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_OverlapCapsuleNonAlloc_m260346865 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___point00, Vector3_t3722313464  ___point11, float ___radius2, ColliderU5BU5D_t4234922487* ___results3, int32_t ___layerMask4, int32_t ___queryTriggerInteraction5, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		float L_0 = ___radius2;
		ColliderU5BU5D_t4234922487* L_1 = ___results3;
		int32_t L_2 = ___layerMask4;
		int32_t L_3 = ___queryTriggerInteraction5;
		int32_t L_4 = Physics_INTERNAL_CALL_OverlapCapsuleNonAlloc_m4044148634(NULL /*static, unused*/, (&___point00), (&___point11), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Int32 UnityEngine.Physics::OverlapCapsuleNonAlloc(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Collider[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_OverlapCapsuleNonAlloc_m676865356 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___point00, Vector3_t3722313464  ___point11, float ___radius2, ColliderU5BU5D_t4234922487* ___results3, int32_t ___layerMask4, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		float L_0 = ___radius2;
		ColliderU5BU5D_t4234922487* L_1 = ___results3;
		int32_t L_2 = ___layerMask4;
		int32_t L_3 = V_0;
		int32_t L_4 = Physics_INTERNAL_CALL_OverlapCapsuleNonAlloc_m4044148634(NULL /*static, unused*/, (&___point00), (&___point11), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_0017;
	}

IL_0017:
	{
		int32_t L_5 = V_1;
		return L_5;
	}
}
// System.Int32 UnityEngine.Physics::OverlapCapsuleNonAlloc(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Collider[])
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_OverlapCapsuleNonAlloc_m877476776 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___point00, Vector3_t3722313464  ___point11, float ___radius2, ColliderU5BU5D_t4234922487* ___results3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = 0;
		V_1 = (-1);
		float L_0 = ___radius2;
		ColliderU5BU5D_t4234922487* L_1 = ___results3;
		int32_t L_2 = V_1;
		int32_t L_3 = V_0;
		int32_t L_4 = Physics_INTERNAL_CALL_OverlapCapsuleNonAlloc_m4044148634(NULL /*static, unused*/, (&___point00), (&___point11), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		goto IL_0018;
	}

IL_0018:
	{
		int32_t L_5 = V_2;
		return L_5;
	}
}
// System.Int32 UnityEngine.Physics::INTERNAL_CALL_OverlapCapsuleNonAlloc(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,UnityEngine.Collider[],System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_INTERNAL_CALL_OverlapCapsuleNonAlloc_m4044148634 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___point00, Vector3_t3722313464 * ___point11, float ___radius2, ColliderU5BU5D_t4234922487* ___results3, int32_t ___layerMask4, int32_t ___queryTriggerInteraction5, const RuntimeMethod* method)
{
	typedef int32_t (*Physics_INTERNAL_CALL_OverlapCapsuleNonAlloc_m4044148634_ftn) (Vector3_t3722313464 *, Vector3_t3722313464 *, float, ColliderU5BU5D_t4234922487*, int32_t, int32_t);
	static Physics_INTERNAL_CALL_OverlapCapsuleNonAlloc_m4044148634_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_OverlapCapsuleNonAlloc_m4044148634_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_OverlapCapsuleNonAlloc(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,UnityEngine.Collider[],System.Int32,UnityEngine.QueryTriggerInteraction)");
	int32_t retVal = _il2cpp_icall_func(___point00, ___point11, ___radius2, ___results3, ___layerMask4, ___queryTriggerInteraction5);
	return retVal;
}
// System.Boolean UnityEngine.Physics::CapsuleCast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Physics_CapsuleCast_m4003600335 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___point10, Vector3_t3722313464  ___point21, float ___radius2, Vector3_t3722313464  ___direction3, float ___maxDistance4, int32_t ___layerMask5, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		V_0 = 0;
		Vector3_t3722313464  L_0 = ___point10;
		Vector3_t3722313464  L_1 = ___point21;
		float L_2 = ___radius2;
		Vector3_t3722313464  L_3 = ___direction3;
		float L_4 = ___maxDistance4;
		int32_t L_5 = ___layerMask5;
		int32_t L_6 = V_0;
		bool L_7 = Physics_CapsuleCast_m3567736809(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		goto IL_0017;
	}

IL_0017:
	{
		bool L_8 = V_1;
		return L_8;
	}
}
// System.Boolean UnityEngine.Physics::CapsuleCast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR bool Physics_CapsuleCast_m160323907 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___point10, Vector3_t3722313464  ___point21, float ___radius2, Vector3_t3722313464  ___direction3, float ___maxDistance4, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		Vector3_t3722313464  L_0 = ___point10;
		Vector3_t3722313464  L_1 = ___point21;
		float L_2 = ___radius2;
		Vector3_t3722313464  L_3 = ___direction3;
		float L_4 = ___maxDistance4;
		int32_t L_5 = V_1;
		int32_t L_6 = V_0;
		bool L_7 = Physics_CapsuleCast_m3567736809(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		goto IL_0019;
	}

IL_0019:
	{
		bool L_8 = V_2;
		return L_8;
	}
}
// System.Boolean UnityEngine.Physics::CapsuleCast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR bool Physics_CapsuleCast_m2263760009 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___point10, Vector3_t3722313464  ___point21, float ___radius2, Vector3_t3722313464  ___direction3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	bool V_3 = false;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		V_2 = (std::numeric_limits<float>::infinity());
		Vector3_t3722313464  L_0 = ___point10;
		Vector3_t3722313464  L_1 = ___point21;
		float L_2 = ___radius2;
		Vector3_t3722313464  L_3 = ___direction3;
		float L_4 = V_2;
		int32_t L_5 = V_1;
		int32_t L_6 = V_0;
		bool L_7 = Physics_CapsuleCast_m3567736809(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		goto IL_001e;
	}

IL_001e:
	{
		bool L_8 = V_3;
		return L_8;
	}
}
// System.Boolean UnityEngine.Physics::CapsuleCast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_CapsuleCast_m3567736809 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___point10, Vector3_t3722313464  ___point21, float ___radius2, Vector3_t3722313464  ___direction3, float ___maxDistance4, int32_t ___layerMask5, int32_t ___queryTriggerInteraction6, const RuntimeMethod* method)
{
	RaycastHit_t1056001966  V_0;
	memset(&V_0, 0, sizeof(V_0));
	bool V_1 = false;
	{
		Vector3_t3722313464  L_0 = ___point10;
		Vector3_t3722313464  L_1 = ___point21;
		float L_2 = ___radius2;
		Vector3_t3722313464  L_3 = ___direction3;
		float L_4 = ___maxDistance4;
		int32_t L_5 = ___layerMask5;
		int32_t L_6 = ___queryTriggerInteraction6;
		bool L_7 = Physics_Internal_CapsuleCast_m889508279(NULL /*static, unused*/, L_0, L_1, L_2, L_3, (&V_0), L_4, L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		goto IL_0018;
	}

IL_0018:
	{
		bool L_8 = V_1;
		return L_8;
	}
}
// System.Boolean UnityEngine.Physics::CapsuleCast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Physics_CapsuleCast_m3562349217 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___point10, Vector3_t3722313464  ___point21, float ___radius2, Vector3_t3722313464  ___direction3, RaycastHit_t1056001966 * ___hitInfo4, float ___maxDistance5, int32_t ___layerMask6, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		V_0 = 0;
		Vector3_t3722313464  L_0 = ___point10;
		Vector3_t3722313464  L_1 = ___point21;
		float L_2 = ___radius2;
		Vector3_t3722313464  L_3 = ___direction3;
		RaycastHit_t1056001966 * L_4 = ___hitInfo4;
		float L_5 = ___maxDistance5;
		int32_t L_6 = ___layerMask6;
		int32_t L_7 = V_0;
		bool L_8 = Physics_CapsuleCast_m525044090(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		goto IL_0019;
	}

IL_0019:
	{
		bool L_9 = V_1;
		return L_9;
	}
}
// System.Boolean UnityEngine.Physics::CapsuleCast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
extern "C" IL2CPP_METHOD_ATTR bool Physics_CapsuleCast_m708192531 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___point10, Vector3_t3722313464  ___point21, float ___radius2, Vector3_t3722313464  ___direction3, RaycastHit_t1056001966 * ___hitInfo4, float ___maxDistance5, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		Vector3_t3722313464  L_0 = ___point10;
		Vector3_t3722313464  L_1 = ___point21;
		float L_2 = ___radius2;
		Vector3_t3722313464  L_3 = ___direction3;
		RaycastHit_t1056001966 * L_4 = ___hitInfo4;
		float L_5 = ___maxDistance5;
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		bool L_8 = Physics_CapsuleCast_m525044090(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		goto IL_001b;
	}

IL_001b:
	{
		bool L_9 = V_2;
		return L_9;
	}
}
// System.Boolean UnityEngine.Physics::CapsuleCast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit&)
extern "C" IL2CPP_METHOD_ATTR bool Physics_CapsuleCast_m2458391415 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___point10, Vector3_t3722313464  ___point21, float ___radius2, Vector3_t3722313464  ___direction3, RaycastHit_t1056001966 * ___hitInfo4, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	bool V_3 = false;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		V_2 = (std::numeric_limits<float>::infinity());
		Vector3_t3722313464  L_0 = ___point10;
		Vector3_t3722313464  L_1 = ___point21;
		float L_2 = ___radius2;
		Vector3_t3722313464  L_3 = ___direction3;
		RaycastHit_t1056001966 * L_4 = ___hitInfo4;
		float L_5 = V_2;
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		bool L_8 = Physics_CapsuleCast_m525044090(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		goto IL_0020;
	}

IL_0020:
	{
		bool L_9 = V_3;
		return L_9;
	}
}
// System.Boolean UnityEngine.Physics::CapsuleCast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_CapsuleCast_m525044090 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___point10, Vector3_t3722313464  ___point21, float ___radius2, Vector3_t3722313464  ___direction3, RaycastHit_t1056001966 * ___hitInfo4, float ___maxDistance5, int32_t ___layerMask6, int32_t ___queryTriggerInteraction7, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Vector3_t3722313464  L_0 = ___point10;
		Vector3_t3722313464  L_1 = ___point21;
		float L_2 = ___radius2;
		Vector3_t3722313464  L_3 = ___direction3;
		RaycastHit_t1056001966 * L_4 = ___hitInfo4;
		float L_5 = ___maxDistance5;
		int32_t L_6 = ___layerMask6;
		int32_t L_7 = ___queryTriggerInteraction7;
		bool L_8 = Physics_Internal_CapsuleCast_m889508279(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0018;
	}

IL_0018:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
// System.Boolean UnityEngine.Physics::SphereCast(UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Physics_SphereCast_m1884654585 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, float ___radius1, Vector3_t3722313464  ___direction2, RaycastHit_t1056001966 * ___hitInfo3, float ___maxDistance4, int32_t ___layerMask5, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		V_0 = 0;
		Vector3_t3722313464  L_0 = ___origin0;
		float L_1 = ___radius1;
		Vector3_t3722313464  L_2 = ___direction2;
		RaycastHit_t1056001966 * L_3 = ___hitInfo3;
		float L_4 = ___maxDistance4;
		int32_t L_5 = ___layerMask5;
		int32_t L_6 = V_0;
		bool L_7 = Physics_SphereCast_m1259429328(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		goto IL_0017;
	}

IL_0017:
	{
		bool L_8 = V_1;
		return L_8;
	}
}
// System.Boolean UnityEngine.Physics::SphereCast(UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
extern "C" IL2CPP_METHOD_ATTR bool Physics_SphereCast_m758509336 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, float ___radius1, Vector3_t3722313464  ___direction2, RaycastHit_t1056001966 * ___hitInfo3, float ___maxDistance4, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		Vector3_t3722313464  L_0 = ___origin0;
		float L_1 = ___radius1;
		Vector3_t3722313464  L_2 = ___direction2;
		RaycastHit_t1056001966 * L_3 = ___hitInfo3;
		float L_4 = ___maxDistance4;
		int32_t L_5 = V_1;
		int32_t L_6 = V_0;
		bool L_7 = Physics_SphereCast_m1259429328(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		goto IL_0019;
	}

IL_0019:
	{
		bool L_8 = V_2;
		return L_8;
	}
}
// System.Boolean UnityEngine.Physics::SphereCast(UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit&)
extern "C" IL2CPP_METHOD_ATTR bool Physics_SphereCast_m2530732187 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, float ___radius1, Vector3_t3722313464  ___direction2, RaycastHit_t1056001966 * ___hitInfo3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	bool V_3 = false;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		V_2 = (std::numeric_limits<float>::infinity());
		Vector3_t3722313464  L_0 = ___origin0;
		float L_1 = ___radius1;
		Vector3_t3722313464  L_2 = ___direction2;
		RaycastHit_t1056001966 * L_3 = ___hitInfo3;
		float L_4 = V_2;
		int32_t L_5 = V_1;
		int32_t L_6 = V_0;
		bool L_7 = Physics_SphereCast_m1259429328(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		goto IL_001e;
	}

IL_001e:
	{
		bool L_8 = V_3;
		return L_8;
	}
}
// System.Boolean UnityEngine.Physics::SphereCast(UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_SphereCast_m1259429328 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, float ___radius1, Vector3_t3722313464  ___direction2, RaycastHit_t1056001966 * ___hitInfo3, float ___maxDistance4, int32_t ___layerMask5, int32_t ___queryTriggerInteraction6, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Vector3_t3722313464  L_0 = ___origin0;
		Vector3_t3722313464  L_1 = ___origin0;
		float L_2 = ___radius1;
		Vector3_t3722313464  L_3 = ___direction2;
		RaycastHit_t1056001966 * L_4 = ___hitInfo3;
		float L_5 = ___maxDistance4;
		int32_t L_6 = ___layerMask5;
		int32_t L_7 = ___queryTriggerInteraction6;
		bool L_8 = Physics_Internal_CapsuleCast_m889508279(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0017;
	}

IL_0017:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
// System.Boolean UnityEngine.Physics::SphereCast(UnityEngine.Ray,System.Single,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Physics_SphereCast_m3506498692 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, float ___radius1, float ___maxDistance2, int32_t ___layerMask3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		V_0 = 0;
		Ray_t3785851493  L_0 = ___ray0;
		float L_1 = ___radius1;
		float L_2 = ___maxDistance2;
		int32_t L_3 = ___layerMask3;
		int32_t L_4 = V_0;
		bool L_5 = Physics_SphereCast_m1896800602(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		goto IL_0013;
	}

IL_0013:
	{
		bool L_6 = V_1;
		return L_6;
	}
}
// System.Boolean UnityEngine.Physics::SphereCast(UnityEngine.Ray,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR bool Physics_SphereCast_m3843553678 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, float ___radius1, float ___maxDistance2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		Ray_t3785851493  L_0 = ___ray0;
		float L_1 = ___radius1;
		float L_2 = ___maxDistance2;
		int32_t L_3 = V_1;
		int32_t L_4 = V_0;
		bool L_5 = Physics_SphereCast_m1896800602(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_6 = V_2;
		return L_6;
	}
}
// System.Boolean UnityEngine.Physics::SphereCast(UnityEngine.Ray,System.Single)
extern "C" IL2CPP_METHOD_ATTR bool Physics_SphereCast_m202420586 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, float ___radius1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	bool V_3 = false;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		V_2 = (std::numeric_limits<float>::infinity());
		Ray_t3785851493  L_0 = ___ray0;
		float L_1 = ___radius1;
		float L_2 = V_2;
		int32_t L_3 = V_1;
		int32_t L_4 = V_0;
		bool L_5 = Physics_SphereCast_m1896800602(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_3 = L_5;
		goto IL_001c;
	}

IL_001c:
	{
		bool L_6 = V_3;
		return L_6;
	}
}
// System.Boolean UnityEngine.Physics::SphereCast(UnityEngine.Ray,System.Single,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_SphereCast_m1896800602 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, float ___radius1, float ___maxDistance2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method)
{
	RaycastHit_t1056001966  V_0;
	memset(&V_0, 0, sizeof(V_0));
	bool V_1 = false;
	{
		Vector3_t3722313464  L_0 = Ray_get_origin_m2819290985((&___ray0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = Ray_get_origin_m2819290985((&___ray0), /*hidden argument*/NULL);
		float L_2 = ___radius1;
		Vector3_t3722313464  L_3 = Ray_get_direction_m761601601((&___ray0), /*hidden argument*/NULL);
		float L_4 = ___maxDistance2;
		int32_t L_5 = ___layerMask3;
		int32_t L_6 = ___queryTriggerInteraction4;
		bool L_7 = Physics_Internal_CapsuleCast_m889508279(NULL /*static, unused*/, L_0, L_1, L_2, L_3, (&V_0), L_4, L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		goto IL_0028;
	}

IL_0028:
	{
		bool L_8 = V_1;
		return L_8;
	}
}
// System.Boolean UnityEngine.Physics::SphereCast(UnityEngine.Ray,System.Single,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Physics_SphereCast_m3682136630 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, float ___radius1, RaycastHit_t1056001966 * ___hitInfo2, float ___maxDistance3, int32_t ___layerMask4, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		V_0 = 0;
		Ray_t3785851493  L_0 = ___ray0;
		float L_1 = ___radius1;
		RaycastHit_t1056001966 * L_2 = ___hitInfo2;
		float L_3 = ___maxDistance3;
		int32_t L_4 = ___layerMask4;
		int32_t L_5 = V_0;
		bool L_6 = Physics_SphereCast_m115790328(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		goto IL_0015;
	}

IL_0015:
	{
		bool L_7 = V_1;
		return L_7;
	}
}
// System.Boolean UnityEngine.Physics::SphereCast(UnityEngine.Ray,System.Single,UnityEngine.RaycastHit&,System.Single)
extern "C" IL2CPP_METHOD_ATTR bool Physics_SphereCast_m2503826481 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, float ___radius1, RaycastHit_t1056001966 * ___hitInfo2, float ___maxDistance3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		Ray_t3785851493  L_0 = ___ray0;
		float L_1 = ___radius1;
		RaycastHit_t1056001966 * L_2 = ___hitInfo2;
		float L_3 = ___maxDistance3;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		bool L_6 = Physics_SphereCast_m115790328(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		goto IL_0017;
	}

IL_0017:
	{
		bool L_7 = V_2;
		return L_7;
	}
}
// System.Boolean UnityEngine.Physics::SphereCast(UnityEngine.Ray,System.Single,UnityEngine.RaycastHit&)
extern "C" IL2CPP_METHOD_ATTR bool Physics_SphereCast_m1575788059 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, float ___radius1, RaycastHit_t1056001966 * ___hitInfo2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	bool V_3 = false;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		V_2 = (std::numeric_limits<float>::infinity());
		Ray_t3785851493  L_0 = ___ray0;
		float L_1 = ___radius1;
		RaycastHit_t1056001966 * L_2 = ___hitInfo2;
		float L_3 = V_2;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		bool L_6 = Physics_SphereCast_m115790328(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		V_3 = L_6;
		goto IL_001d;
	}

IL_001d:
	{
		bool L_7 = V_3;
		return L_7;
	}
}
// System.Boolean UnityEngine.Physics::SphereCast(UnityEngine.Ray,System.Single,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_SphereCast_m115790328 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, float ___radius1, RaycastHit_t1056001966 * ___hitInfo2, float ___maxDistance3, int32_t ___layerMask4, int32_t ___queryTriggerInteraction5, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Vector3_t3722313464  L_0 = Ray_get_origin_m2819290985((&___ray0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = Ray_get_origin_m2819290985((&___ray0), /*hidden argument*/NULL);
		float L_2 = ___radius1;
		Vector3_t3722313464  L_3 = Ray_get_direction_m761601601((&___ray0), /*hidden argument*/NULL);
		RaycastHit_t1056001966 * L_4 = ___hitInfo2;
		float L_5 = ___maxDistance3;
		int32_t L_6 = ___layerMask4;
		int32_t L_7 = ___queryTriggerInteraction5;
		bool L_8 = Physics_Internal_CapsuleCast_m889508279(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0028;
	}

IL_0028:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::CapsuleCastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_CapsuleCastAll_m2157227932 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___point10, Vector3_t3722313464  ___point21, float ___radius2, Vector3_t3722313464  ___direction3, float ___maxDistance4, int32_t ___layermask5, int32_t ___queryTriggerInteraction6, const RuntimeMethod* method)
{
	RaycastHitU5BU5D_t1690781147* V_0 = NULL;
	{
		float L_0 = ___radius2;
		float L_1 = ___maxDistance4;
		int32_t L_2 = ___layermask5;
		int32_t L_3 = ___queryTriggerInteraction6;
		RaycastHitU5BU5D_t1690781147* L_4 = Physics_INTERNAL_CALL_CapsuleCastAll_m4102462563(NULL /*static, unused*/, (&___point10), (&___point21), L_0, (&___direction3), L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0019;
	}

IL_0019:
	{
		RaycastHitU5BU5D_t1690781147* L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::CapsuleCastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_CapsuleCastAll_m3266540576 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___point10, Vector3_t3722313464  ___point21, float ___radius2, Vector3_t3722313464  ___direction3, float ___maxDistance4, int32_t ___layermask5, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RaycastHitU5BU5D_t1690781147* V_1 = NULL;
	{
		V_0 = 0;
		float L_0 = ___radius2;
		float L_1 = ___maxDistance4;
		int32_t L_2 = ___layermask5;
		int32_t L_3 = V_0;
		RaycastHitU5BU5D_t1690781147* L_4 = Physics_INTERNAL_CALL_CapsuleCastAll_m4102462563(NULL /*static, unused*/, (&___point10), (&___point21), L_0, (&___direction3), L_1, L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		RaycastHitU5BU5D_t1690781147* L_5 = V_1;
		return L_5;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::CapsuleCastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_CapsuleCastAll_m2443951142 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___point10, Vector3_t3722313464  ___point21, float ___radius2, Vector3_t3722313464  ___direction3, float ___maxDistance4, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RaycastHitU5BU5D_t1690781147* V_2 = NULL;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		float L_0 = ___radius2;
		float L_1 = ___maxDistance4;
		int32_t L_2 = V_1;
		int32_t L_3 = V_0;
		RaycastHitU5BU5D_t1690781147* L_4 = Physics_INTERNAL_CALL_CapsuleCastAll_m4102462563(NULL /*static, unused*/, (&___point10), (&___point21), L_0, (&___direction3), L_1, L_2, L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		goto IL_001c;
	}

IL_001c:
	{
		RaycastHitU5BU5D_t1690781147* L_5 = V_2;
		return L_5;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::CapsuleCastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_CapsuleCastAll_m224992393 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___point10, Vector3_t3722313464  ___point21, float ___radius2, Vector3_t3722313464  ___direction3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	RaycastHitU5BU5D_t1690781147* V_3 = NULL;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		V_2 = (std::numeric_limits<float>::infinity());
		float L_0 = ___radius2;
		float L_1 = V_2;
		int32_t L_2 = V_1;
		int32_t L_3 = V_0;
		RaycastHitU5BU5D_t1690781147* L_4 = Physics_INTERNAL_CALL_CapsuleCastAll_m4102462563(NULL /*static, unused*/, (&___point10), (&___point21), L_0, (&___direction3), L_1, L_2, L_3, /*hidden argument*/NULL);
		V_3 = L_4;
		goto IL_0021;
	}

IL_0021:
	{
		RaycastHitU5BU5D_t1690781147* L_5 = V_3;
		return L_5;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::INTERNAL_CALL_CapsuleCastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_INTERNAL_CALL_CapsuleCastAll_m4102462563 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___point10, Vector3_t3722313464 * ___point21, float ___radius2, Vector3_t3722313464 * ___direction3, float ___maxDistance4, int32_t ___layermask5, int32_t ___queryTriggerInteraction6, const RuntimeMethod* method)
{
	typedef RaycastHitU5BU5D_t1690781147* (*Physics_INTERNAL_CALL_CapsuleCastAll_m4102462563_ftn) (Vector3_t3722313464 *, Vector3_t3722313464 *, float, Vector3_t3722313464 *, float, int32_t, int32_t);
	static Physics_INTERNAL_CALL_CapsuleCastAll_m4102462563_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_CapsuleCastAll_m4102462563_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_CapsuleCastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)");
	RaycastHitU5BU5D_t1690781147* retVal = _il2cpp_icall_func(___point10, ___point21, ___radius2, ___direction3, ___maxDistance4, ___layermask5, ___queryTriggerInteraction6);
	return retVal;
}
// System.Int32 UnityEngine.Physics::CapsuleCastNonAlloc(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit[],System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_CapsuleCastNonAlloc_m2387933647 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___point10, Vector3_t3722313464  ___point21, float ___radius2, Vector3_t3722313464  ___direction3, RaycastHitU5BU5D_t1690781147* ___results4, float ___maxDistance5, int32_t ___layermask6, int32_t ___queryTriggerInteraction7, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		float L_0 = ___radius2;
		RaycastHitU5BU5D_t1690781147* L_1 = ___results4;
		float L_2 = ___maxDistance5;
		int32_t L_3 = ___layermask6;
		int32_t L_4 = ___queryTriggerInteraction7;
		int32_t L_5 = Physics_INTERNAL_CALL_CapsuleCastNonAlloc_m701442683(NULL /*static, unused*/, (&___point10), (&___point21), L_0, (&___direction3), L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Int32 UnityEngine.Physics::CapsuleCastNonAlloc(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit[],System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_CapsuleCastNonAlloc_m626198600 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___point10, Vector3_t3722313464  ___point21, float ___radius2, Vector3_t3722313464  ___direction3, RaycastHitU5BU5D_t1690781147* ___results4, float ___maxDistance5, int32_t ___layermask6, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		float L_0 = ___radius2;
		RaycastHitU5BU5D_t1690781147* L_1 = ___results4;
		float L_2 = ___maxDistance5;
		int32_t L_3 = ___layermask6;
		int32_t L_4 = V_0;
		int32_t L_5 = Physics_INTERNAL_CALL_CapsuleCastNonAlloc_m701442683(NULL /*static, unused*/, (&___point10), (&___point21), L_0, (&___direction3), L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		goto IL_001c;
	}

IL_001c:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
// System.Int32 UnityEngine.Physics::CapsuleCastNonAlloc(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit[],System.Single)
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_CapsuleCastNonAlloc_m615169371 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___point10, Vector3_t3722313464  ___point21, float ___radius2, Vector3_t3722313464  ___direction3, RaycastHitU5BU5D_t1690781147* ___results4, float ___maxDistance5, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		float L_0 = ___radius2;
		RaycastHitU5BU5D_t1690781147* L_1 = ___results4;
		float L_2 = ___maxDistance5;
		int32_t L_3 = V_1;
		int32_t L_4 = V_0;
		int32_t L_5 = Physics_INTERNAL_CALL_CapsuleCastNonAlloc_m701442683(NULL /*static, unused*/, (&___point10), (&___point21), L_0, (&___direction3), L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		goto IL_001e;
	}

IL_001e:
	{
		int32_t L_6 = V_2;
		return L_6;
	}
}
// System.Int32 UnityEngine.Physics::CapsuleCastNonAlloc(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit[])
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_CapsuleCastNonAlloc_m1403282799 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___point10, Vector3_t3722313464  ___point21, float ___radius2, Vector3_t3722313464  ___direction3, RaycastHitU5BU5D_t1690781147* ___results4, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		V_2 = (std::numeric_limits<float>::infinity());
		float L_0 = ___radius2;
		RaycastHitU5BU5D_t1690781147* L_1 = ___results4;
		float L_2 = V_2;
		int32_t L_3 = V_1;
		int32_t L_4 = V_0;
		int32_t L_5 = Physics_INTERNAL_CALL_CapsuleCastNonAlloc_m701442683(NULL /*static, unused*/, (&___point10), (&___point21), L_0, (&___direction3), L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_3 = L_5;
		goto IL_0023;
	}

IL_0023:
	{
		int32_t L_6 = V_3;
		return L_6;
	}
}
// System.Int32 UnityEngine.Physics::INTERNAL_CALL_CapsuleCastNonAlloc(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,UnityEngine.Vector3&,UnityEngine.RaycastHit[],System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_INTERNAL_CALL_CapsuleCastNonAlloc_m701442683 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___point10, Vector3_t3722313464 * ___point21, float ___radius2, Vector3_t3722313464 * ___direction3, RaycastHitU5BU5D_t1690781147* ___results4, float ___maxDistance5, int32_t ___layermask6, int32_t ___queryTriggerInteraction7, const RuntimeMethod* method)
{
	typedef int32_t (*Physics_INTERNAL_CALL_CapsuleCastNonAlloc_m701442683_ftn) (Vector3_t3722313464 *, Vector3_t3722313464 *, float, Vector3_t3722313464 *, RaycastHitU5BU5D_t1690781147*, float, int32_t, int32_t);
	static Physics_INTERNAL_CALL_CapsuleCastNonAlloc_m701442683_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_CapsuleCastNonAlloc_m701442683_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_CapsuleCastNonAlloc(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,UnityEngine.Vector3&,UnityEngine.RaycastHit[],System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)");
	int32_t retVal = _il2cpp_icall_func(___point10, ___point21, ___radius2, ___direction3, ___results4, ___maxDistance5, ___layermask6, ___queryTriggerInteraction7);
	return retVal;
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::SphereCastAll(UnityEngine.Vector3,System.Single,UnityEngine.Vector3,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_SphereCastAll_m2200398182 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, float ___radius1, Vector3_t3722313464  ___direction2, float ___maxDistance3, int32_t ___layerMask4, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RaycastHitU5BU5D_t1690781147* V_1 = NULL;
	{
		V_0 = 0;
		Vector3_t3722313464  L_0 = ___origin0;
		float L_1 = ___radius1;
		Vector3_t3722313464  L_2 = ___direction2;
		float L_3 = ___maxDistance3;
		int32_t L_4 = ___layerMask4;
		int32_t L_5 = V_0;
		RaycastHitU5BU5D_t1690781147* L_6 = Physics_SphereCastAll_m2291331324(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		goto IL_0015;
	}

IL_0015:
	{
		RaycastHitU5BU5D_t1690781147* L_7 = V_1;
		return L_7;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::SphereCastAll(UnityEngine.Vector3,System.Single,UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_SphereCastAll_m1625306535 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, float ___radius1, Vector3_t3722313464  ___direction2, float ___maxDistance3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RaycastHitU5BU5D_t1690781147* V_2 = NULL;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		Vector3_t3722313464  L_0 = ___origin0;
		float L_1 = ___radius1;
		Vector3_t3722313464  L_2 = ___direction2;
		float L_3 = ___maxDistance3;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		RaycastHitU5BU5D_t1690781147* L_6 = Physics_SphereCastAll_m2291331324(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		goto IL_0017;
	}

IL_0017:
	{
		RaycastHitU5BU5D_t1690781147* L_7 = V_2;
		return L_7;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::SphereCastAll(UnityEngine.Vector3,System.Single,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_SphereCastAll_m3636012748 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, float ___radius1, Vector3_t3722313464  ___direction2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	RaycastHitU5BU5D_t1690781147* V_3 = NULL;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		V_2 = (std::numeric_limits<float>::infinity());
		Vector3_t3722313464  L_0 = ___origin0;
		float L_1 = ___radius1;
		Vector3_t3722313464  L_2 = ___direction2;
		float L_3 = V_2;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		RaycastHitU5BU5D_t1690781147* L_6 = Physics_SphereCastAll_m2291331324(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		V_3 = L_6;
		goto IL_001d;
	}

IL_001d:
	{
		RaycastHitU5BU5D_t1690781147* L_7 = V_3;
		return L_7;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::SphereCastAll(UnityEngine.Vector3,System.Single,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_SphereCastAll_m2291331324 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, float ___radius1, Vector3_t3722313464  ___direction2, float ___maxDistance3, int32_t ___layerMask4, int32_t ___queryTriggerInteraction5, const RuntimeMethod* method)
{
	RaycastHitU5BU5D_t1690781147* V_0 = NULL;
	{
		Vector3_t3722313464  L_0 = ___origin0;
		Vector3_t3722313464  L_1 = ___origin0;
		float L_2 = ___radius1;
		Vector3_t3722313464  L_3 = ___direction2;
		float L_4 = ___maxDistance3;
		int32_t L_5 = ___layerMask4;
		int32_t L_6 = ___queryTriggerInteraction5;
		RaycastHitU5BU5D_t1690781147* L_7 = Physics_CapsuleCastAll_m2157227932(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		goto IL_0015;
	}

IL_0015:
	{
		RaycastHitU5BU5D_t1690781147* L_8 = V_0;
		return L_8;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::SphereCastAll(UnityEngine.Ray,System.Single,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_SphereCastAll_m3092274890 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, float ___radius1, float ___maxDistance2, int32_t ___layerMask3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RaycastHitU5BU5D_t1690781147* V_1 = NULL;
	{
		V_0 = 0;
		Ray_t3785851493  L_0 = ___ray0;
		float L_1 = ___radius1;
		float L_2 = ___maxDistance2;
		int32_t L_3 = ___layerMask3;
		int32_t L_4 = V_0;
		RaycastHitU5BU5D_t1690781147* L_5 = Physics_SphereCastAll_m1885391536(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		goto IL_0013;
	}

IL_0013:
	{
		RaycastHitU5BU5D_t1690781147* L_6 = V_1;
		return L_6;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::SphereCastAll(UnityEngine.Ray,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_SphereCastAll_m48983114 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, float ___radius1, float ___maxDistance2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RaycastHitU5BU5D_t1690781147* V_2 = NULL;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		Ray_t3785851493  L_0 = ___ray0;
		float L_1 = ___radius1;
		float L_2 = ___maxDistance2;
		int32_t L_3 = V_1;
		int32_t L_4 = V_0;
		RaycastHitU5BU5D_t1690781147* L_5 = Physics_SphereCastAll_m1885391536(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		goto IL_0016;
	}

IL_0016:
	{
		RaycastHitU5BU5D_t1690781147* L_6 = V_2;
		return L_6;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::SphereCastAll(UnityEngine.Ray,System.Single)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_SphereCastAll_m2007877912 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, float ___radius1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	RaycastHitU5BU5D_t1690781147* V_3 = NULL;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		V_2 = (std::numeric_limits<float>::infinity());
		Ray_t3785851493  L_0 = ___ray0;
		float L_1 = ___radius1;
		float L_2 = V_2;
		int32_t L_3 = V_1;
		int32_t L_4 = V_0;
		RaycastHitU5BU5D_t1690781147* L_5 = Physics_SphereCastAll_m1885391536(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_3 = L_5;
		goto IL_001c;
	}

IL_001c:
	{
		RaycastHitU5BU5D_t1690781147* L_6 = V_3;
		return L_6;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::SphereCastAll(UnityEngine.Ray,System.Single,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_SphereCastAll_m1885391536 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, float ___radius1, float ___maxDistance2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method)
{
	RaycastHitU5BU5D_t1690781147* V_0 = NULL;
	{
		Vector3_t3722313464  L_0 = Ray_get_origin_m2819290985((&___ray0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = Ray_get_origin_m2819290985((&___ray0), /*hidden argument*/NULL);
		float L_2 = ___radius1;
		Vector3_t3722313464  L_3 = Ray_get_direction_m761601601((&___ray0), /*hidden argument*/NULL);
		float L_4 = ___maxDistance2;
		int32_t L_5 = ___layerMask3;
		int32_t L_6 = ___queryTriggerInteraction4;
		RaycastHitU5BU5D_t1690781147* L_7 = Physics_CapsuleCastAll_m2157227932(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		RaycastHitU5BU5D_t1690781147* L_8 = V_0;
		return L_8;
	}
}
// System.Int32 UnityEngine.Physics::SphereCastNonAlloc(UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit[],System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_SphereCastNonAlloc_m2643107456 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, float ___radius1, Vector3_t3722313464  ___direction2, RaycastHitU5BU5D_t1690781147* ___results3, float ___maxDistance4, int32_t ___layerMask5, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		Vector3_t3722313464  L_0 = ___origin0;
		float L_1 = ___radius1;
		Vector3_t3722313464  L_2 = ___direction2;
		RaycastHitU5BU5D_t1690781147* L_3 = ___results3;
		float L_4 = ___maxDistance4;
		int32_t L_5 = ___layerMask5;
		int32_t L_6 = V_0;
		int32_t L_7 = Physics_SphereCastNonAlloc_m3843789923(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		goto IL_0017;
	}

IL_0017:
	{
		int32_t L_8 = V_1;
		return L_8;
	}
}
// System.Int32 UnityEngine.Physics::SphereCastNonAlloc(UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit[],System.Single)
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_SphereCastNonAlloc_m1218748012 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, float ___radius1, Vector3_t3722313464  ___direction2, RaycastHitU5BU5D_t1690781147* ___results3, float ___maxDistance4, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		Vector3_t3722313464  L_0 = ___origin0;
		float L_1 = ___radius1;
		Vector3_t3722313464  L_2 = ___direction2;
		RaycastHitU5BU5D_t1690781147* L_3 = ___results3;
		float L_4 = ___maxDistance4;
		int32_t L_5 = V_1;
		int32_t L_6 = V_0;
		int32_t L_7 = Physics_SphereCastNonAlloc_m3843789923(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		goto IL_0019;
	}

IL_0019:
	{
		int32_t L_8 = V_2;
		return L_8;
	}
}
// System.Int32 UnityEngine.Physics::SphereCastNonAlloc(UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit[])
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_SphereCastNonAlloc_m214250411 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, float ___radius1, Vector3_t3722313464  ___direction2, RaycastHitU5BU5D_t1690781147* ___results3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		V_2 = (std::numeric_limits<float>::infinity());
		Vector3_t3722313464  L_0 = ___origin0;
		float L_1 = ___radius1;
		Vector3_t3722313464  L_2 = ___direction2;
		RaycastHitU5BU5D_t1690781147* L_3 = ___results3;
		float L_4 = V_2;
		int32_t L_5 = V_1;
		int32_t L_6 = V_0;
		int32_t L_7 = Physics_SphereCastNonAlloc_m3843789923(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		goto IL_001e;
	}

IL_001e:
	{
		int32_t L_8 = V_3;
		return L_8;
	}
}
// System.Int32 UnityEngine.Physics::SphereCastNonAlloc(UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit[],System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_SphereCastNonAlloc_m3843789923 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, float ___radius1, Vector3_t3722313464  ___direction2, RaycastHitU5BU5D_t1690781147* ___results3, float ___maxDistance4, int32_t ___layerMask5, int32_t ___queryTriggerInteraction6, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		Vector3_t3722313464  L_0 = ___origin0;
		Vector3_t3722313464  L_1 = ___origin0;
		float L_2 = ___radius1;
		Vector3_t3722313464  L_3 = ___direction2;
		RaycastHitU5BU5D_t1690781147* L_4 = ___results3;
		float L_5 = ___maxDistance4;
		int32_t L_6 = ___layerMask5;
		int32_t L_7 = ___queryTriggerInteraction6;
		int32_t L_8 = Physics_CapsuleCastNonAlloc_m2387933647(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0017;
	}

IL_0017:
	{
		int32_t L_9 = V_0;
		return L_9;
	}
}
// System.Int32 UnityEngine.Physics::SphereCastNonAlloc(UnityEngine.Ray,System.Single,UnityEngine.RaycastHit[],System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_SphereCastNonAlloc_m3599878665 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, float ___radius1, RaycastHitU5BU5D_t1690781147* ___results2, float ___maxDistance3, int32_t ___layerMask4, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		Ray_t3785851493  L_0 = ___ray0;
		float L_1 = ___radius1;
		RaycastHitU5BU5D_t1690781147* L_2 = ___results2;
		float L_3 = ___maxDistance3;
		int32_t L_4 = ___layerMask4;
		int32_t L_5 = V_0;
		int32_t L_6 = Physics_SphereCastNonAlloc_m1857700335(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		goto IL_0015;
	}

IL_0015:
	{
		int32_t L_7 = V_1;
		return L_7;
	}
}
// System.Int32 UnityEngine.Physics::SphereCastNonAlloc(UnityEngine.Ray,System.Single,UnityEngine.RaycastHit[],System.Single)
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_SphereCastNonAlloc_m2815625682 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, float ___radius1, RaycastHitU5BU5D_t1690781147* ___results2, float ___maxDistance3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		Ray_t3785851493  L_0 = ___ray0;
		float L_1 = ___radius1;
		RaycastHitU5BU5D_t1690781147* L_2 = ___results2;
		float L_3 = ___maxDistance3;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		int32_t L_6 = Physics_SphereCastNonAlloc_m1857700335(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		goto IL_0017;
	}

IL_0017:
	{
		int32_t L_7 = V_2;
		return L_7;
	}
}
// System.Int32 UnityEngine.Physics::SphereCastNonAlloc(UnityEngine.Ray,System.Single,UnityEngine.RaycastHit[])
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_SphereCastNonAlloc_m3800417199 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, float ___radius1, RaycastHitU5BU5D_t1690781147* ___results2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		V_2 = (std::numeric_limits<float>::infinity());
		Ray_t3785851493  L_0 = ___ray0;
		float L_1 = ___radius1;
		RaycastHitU5BU5D_t1690781147* L_2 = ___results2;
		float L_3 = V_2;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		int32_t L_6 = Physics_SphereCastNonAlloc_m1857700335(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		V_3 = L_6;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_7 = V_3;
		return L_7;
	}
}
// System.Int32 UnityEngine.Physics::SphereCastNonAlloc(UnityEngine.Ray,System.Single,UnityEngine.RaycastHit[],System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_SphereCastNonAlloc_m1857700335 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, float ___radius1, RaycastHitU5BU5D_t1690781147* ___results2, float ___maxDistance3, int32_t ___layerMask4, int32_t ___queryTriggerInteraction5, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		Vector3_t3722313464  L_0 = Ray_get_origin_m2819290985((&___ray0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = Ray_get_origin_m2819290985((&___ray0), /*hidden argument*/NULL);
		float L_2 = ___radius1;
		Vector3_t3722313464  L_3 = Ray_get_direction_m761601601((&___ray0), /*hidden argument*/NULL);
		RaycastHitU5BU5D_t1690781147* L_4 = ___results2;
		float L_5 = ___maxDistance3;
		int32_t L_6 = ___layerMask4;
		int32_t L_7 = ___queryTriggerInteraction5;
		int32_t L_8 = Physics_CapsuleCastNonAlloc_m2387933647(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0028;
	}

IL_0028:
	{
		int32_t L_9 = V_0;
		return L_9;
	}
}
// System.Boolean UnityEngine.Physics::CheckSphere(UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_CheckSphere_m3176145646 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___position0, float ___radius1, int32_t ___layerMask2, int32_t ___queryTriggerInteraction3, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		float L_0 = ___radius1;
		int32_t L_1 = ___layerMask2;
		int32_t L_2 = ___queryTriggerInteraction3;
		bool L_3 = Physics_INTERNAL_CALL_CheckSphere_m3717410094(NULL /*static, unused*/, (&___position0), L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean UnityEngine.Physics::CheckSphere(UnityEngine.Vector3,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Physics_CheckSphere_m3218818399 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___position0, float ___radius1, int32_t ___layerMask2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		V_0 = 0;
		float L_0 = ___radius1;
		int32_t L_1 = ___layerMask2;
		int32_t L_2 = V_0;
		bool L_3 = Physics_INTERNAL_CALL_CheckSphere_m3717410094(NULL /*static, unused*/, (&___position0), L_0, L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_0013;
	}

IL_0013:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
// System.Boolean UnityEngine.Physics::CheckSphere(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR bool Physics_CheckSphere_m720403455 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___position0, float ___radius1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		float L_0 = ___radius1;
		int32_t L_1 = V_1;
		int32_t L_2 = V_0;
		bool L_3 = Physics_INTERNAL_CALL_CheckSphere_m3717410094(NULL /*static, unused*/, (&___position0), L_0, L_1, L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_4 = V_2;
		return L_4;
	}
}
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_CheckSphere(UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_INTERNAL_CALL_CheckSphere_m3717410094 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___position0, float ___radius1, int32_t ___layerMask2, int32_t ___queryTriggerInteraction3, const RuntimeMethod* method)
{
	typedef bool (*Physics_INTERNAL_CALL_CheckSphere_m3717410094_ftn) (Vector3_t3722313464 *, float, int32_t, int32_t);
	static Physics_INTERNAL_CALL_CheckSphere_m3717410094_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_CheckSphere_m3717410094_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_CheckSphere(UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)");
	bool retVal = _il2cpp_icall_func(___position0, ___radius1, ___layerMask2, ___queryTriggerInteraction3);
	return retVal;
}
// System.Boolean UnityEngine.Physics::CheckCapsule(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_CheckCapsule_m2925949729 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___start0, Vector3_t3722313464  ___end1, float ___radius2, int32_t ___layermask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		float L_0 = ___radius2;
		int32_t L_1 = ___layermask3;
		int32_t L_2 = ___queryTriggerInteraction4;
		bool L_3 = Physics_INTERNAL_CALL_CheckCapsule_m2803440474(NULL /*static, unused*/, (&___start0), (&___end1), L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean UnityEngine.Physics::CheckCapsule(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Physics_CheckCapsule_m3796295093 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___start0, Vector3_t3722313464  ___end1, float ___radius2, int32_t ___layermask3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		V_0 = 0;
		float L_0 = ___radius2;
		int32_t L_1 = ___layermask3;
		int32_t L_2 = V_0;
		bool L_3 = Physics_INTERNAL_CALL_CheckCapsule_m2803440474(NULL /*static, unused*/, (&___start0), (&___end1), L_0, L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_0015;
	}

IL_0015:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
// System.Boolean UnityEngine.Physics::CheckCapsule(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR bool Physics_CheckCapsule_m950884123 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___start0, Vector3_t3722313464  ___end1, float ___radius2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		float L_0 = ___radius2;
		int32_t L_1 = V_1;
		int32_t L_2 = V_0;
		bool L_3 = Physics_INTERNAL_CALL_CheckCapsule_m2803440474(NULL /*static, unused*/, (&___start0), (&___end1), L_0, L_1, L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		goto IL_0018;
	}

IL_0018:
	{
		bool L_4 = V_2;
		return L_4;
	}
}
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_CheckCapsule(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_INTERNAL_CALL_CheckCapsule_m2803440474 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___start0, Vector3_t3722313464 * ___end1, float ___radius2, int32_t ___layermask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method)
{
	typedef bool (*Physics_INTERNAL_CALL_CheckCapsule_m2803440474_ftn) (Vector3_t3722313464 *, Vector3_t3722313464 *, float, int32_t, int32_t);
	static Physics_INTERNAL_CALL_CheckCapsule_m2803440474_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_CheckCapsule_m2803440474_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_CheckCapsule(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)");
	bool retVal = _il2cpp_icall_func(___start0, ___end1, ___radius2, ___layermask3, ___queryTriggerInteraction4);
	return retVal;
}
// System.Boolean UnityEngine.Physics::CheckBox(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_CheckBox_m1747047439 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___center0, Vector3_t3722313464  ___halfExtents1, Quaternion_t2301928331  ___orientation2, int32_t ___layermask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = ___layermask3;
		int32_t L_1 = ___queryTriggerInteraction4;
		bool L_2 = Physics_INTERNAL_CALL_CheckBox_m2926834892(NULL /*static, unused*/, (&___center0), (&___halfExtents1), (&___orientation2), L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.Physics::CheckBox(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Physics_CheckBox_m3552157838 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___center0, Vector3_t3722313464  ___halfExtents1, Quaternion_t2301928331  ___orientation2, int32_t ___layermask3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		V_0 = 0;
		int32_t L_0 = ___layermask3;
		int32_t L_1 = V_0;
		bool L_2 = Physics_INTERNAL_CALL_CheckBox_m2926834892(NULL /*static, unused*/, (&___center0), (&___halfExtents1), (&___orientation2), L_0, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_1;
		return L_3;
	}
}
// System.Boolean UnityEngine.Physics::CheckBox(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR bool Physics_CheckBox_m2707020733 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___center0, Vector3_t3722313464  ___halfExtents1, Quaternion_t2301928331  ___orientation2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		int32_t L_0 = V_1;
		int32_t L_1 = V_0;
		bool L_2 = Physics_INTERNAL_CALL_CheckBox_m2926834892(NULL /*static, unused*/, (&___center0), (&___halfExtents1), (&___orientation2), L_0, L_1, /*hidden argument*/NULL);
		V_2 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		bool L_3 = V_2;
		return L_3;
	}
}
// System.Boolean UnityEngine.Physics::CheckBox(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR bool Physics_CheckBox_m146766017 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___center0, Vector3_t3722313464  ___halfExtents1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Physics_CheckBox_m146766017_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Quaternion_t2301928331  V_2;
	memset(&V_2, 0, sizeof(V_2));
	bool V_3 = false;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_0 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_0;
		int32_t L_1 = V_1;
		int32_t L_2 = V_0;
		bool L_3 = Physics_INTERNAL_CALL_CheckBox_m2926834892(NULL /*static, unused*/, (&___center0), (&___halfExtents1), (&V_2), L_1, L_2, /*hidden argument*/NULL);
		V_3 = L_3;
		goto IL_001f;
	}

IL_001f:
	{
		bool L_4 = V_3;
		return L_4;
	}
}
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_CheckBox(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Quaternion&,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_INTERNAL_CALL_CheckBox_m2926834892 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___center0, Vector3_t3722313464 * ___halfExtents1, Quaternion_t2301928331 * ___orientation2, int32_t ___layermask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method)
{
	typedef bool (*Physics_INTERNAL_CALL_CheckBox_m2926834892_ftn) (Vector3_t3722313464 *, Vector3_t3722313464 *, Quaternion_t2301928331 *, int32_t, int32_t);
	static Physics_INTERNAL_CALL_CheckBox_m2926834892_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_CheckBox_m2926834892_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_CheckBox(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Quaternion&,System.Int32,UnityEngine.QueryTriggerInteraction)");
	bool retVal = _il2cpp_icall_func(___center0, ___halfExtents1, ___orientation2, ___layermask3, ___queryTriggerInteraction4);
	return retVal;
}
// UnityEngine.Collider[] UnityEngine.Physics::OverlapBox(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR ColliderU5BU5D_t4234922487* Physics_OverlapBox_m2700716420 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___center0, Vector3_t3722313464  ___halfExtents1, Quaternion_t2301928331  ___orientation2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method)
{
	ColliderU5BU5D_t4234922487* V_0 = NULL;
	{
		int32_t L_0 = ___layerMask3;
		int32_t L_1 = ___queryTriggerInteraction4;
		ColliderU5BU5D_t4234922487* L_2 = Physics_INTERNAL_CALL_OverlapBox_m2705396300(NULL /*static, unused*/, (&___center0), (&___halfExtents1), (&___orientation2), L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		ColliderU5BU5D_t4234922487* L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Collider[] UnityEngine.Physics::OverlapBox(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion,System.Int32)
extern "C" IL2CPP_METHOD_ATTR ColliderU5BU5D_t4234922487* Physics_OverlapBox_m3156399139 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___center0, Vector3_t3722313464  ___halfExtents1, Quaternion_t2301928331  ___orientation2, int32_t ___layerMask3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	ColliderU5BU5D_t4234922487* V_1 = NULL;
	{
		V_0 = 0;
		int32_t L_0 = ___layerMask3;
		int32_t L_1 = V_0;
		ColliderU5BU5D_t4234922487* L_2 = Physics_INTERNAL_CALL_OverlapBox_m2705396300(NULL /*static, unused*/, (&___center0), (&___halfExtents1), (&___orientation2), L_0, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		ColliderU5BU5D_t4234922487* L_3 = V_1;
		return L_3;
	}
}
// UnityEngine.Collider[] UnityEngine.Physics::OverlapBox(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR ColliderU5BU5D_t4234922487* Physics_OverlapBox_m2723432567 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___center0, Vector3_t3722313464  ___halfExtents1, Quaternion_t2301928331  ___orientation2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ColliderU5BU5D_t4234922487* V_2 = NULL;
	{
		V_0 = 0;
		V_1 = (-1);
		int32_t L_0 = V_1;
		int32_t L_1 = V_0;
		ColliderU5BU5D_t4234922487* L_2 = Physics_INTERNAL_CALL_OverlapBox_m2705396300(NULL /*static, unused*/, (&___center0), (&___halfExtents1), (&___orientation2), L_0, L_1, /*hidden argument*/NULL);
		V_2 = L_2;
		goto IL_0018;
	}

IL_0018:
	{
		ColliderU5BU5D_t4234922487* L_3 = V_2;
		return L_3;
	}
}
// UnityEngine.Collider[] UnityEngine.Physics::OverlapBox(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR ColliderU5BU5D_t4234922487* Physics_OverlapBox_m1419232088 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___center0, Vector3_t3722313464  ___halfExtents1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Physics_OverlapBox_m1419232088_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Quaternion_t2301928331  V_2;
	memset(&V_2, 0, sizeof(V_2));
	ColliderU5BU5D_t4234922487* V_3 = NULL;
	{
		V_0 = 0;
		V_1 = (-1);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_0 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_0;
		int32_t L_1 = V_1;
		int32_t L_2 = V_0;
		ColliderU5BU5D_t4234922487* L_3 = Physics_INTERNAL_CALL_OverlapBox_m2705396300(NULL /*static, unused*/, (&___center0), (&___halfExtents1), (&V_2), L_1, L_2, /*hidden argument*/NULL);
		V_3 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		ColliderU5BU5D_t4234922487* L_4 = V_3;
		return L_4;
	}
}
// UnityEngine.Collider[] UnityEngine.Physics::INTERNAL_CALL_OverlapBox(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Quaternion&,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR ColliderU5BU5D_t4234922487* Physics_INTERNAL_CALL_OverlapBox_m2705396300 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___center0, Vector3_t3722313464 * ___halfExtents1, Quaternion_t2301928331 * ___orientation2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method)
{
	typedef ColliderU5BU5D_t4234922487* (*Physics_INTERNAL_CALL_OverlapBox_m2705396300_ftn) (Vector3_t3722313464 *, Vector3_t3722313464 *, Quaternion_t2301928331 *, int32_t, int32_t);
	static Physics_INTERNAL_CALL_OverlapBox_m2705396300_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_OverlapBox_m2705396300_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_OverlapBox(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Quaternion&,System.Int32,UnityEngine.QueryTriggerInteraction)");
	ColliderU5BU5D_t4234922487* retVal = _il2cpp_icall_func(___center0, ___halfExtents1, ___orientation2, ___layerMask3, ___queryTriggerInteraction4);
	return retVal;
}
// System.Int32 UnityEngine.Physics::OverlapBoxNonAlloc(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Collider[],UnityEngine.Quaternion,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_OverlapBoxNonAlloc_m2901297401 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___center0, Vector3_t3722313464  ___halfExtents1, ColliderU5BU5D_t4234922487* ___results2, Quaternion_t2301928331  ___orientation3, int32_t ___layerMask4, int32_t ___queryTriggerInteraction5, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		ColliderU5BU5D_t4234922487* L_0 = ___results2;
		int32_t L_1 = ___layerMask4;
		int32_t L_2 = ___queryTriggerInteraction5;
		int32_t L_3 = Physics_INTERNAL_CALL_OverlapBoxNonAlloc_m1791917347(NULL /*static, unused*/, (&___center0), (&___halfExtents1), L_0, (&___orientation3), L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0017;
	}

IL_0017:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Int32 UnityEngine.Physics::OverlapBoxNonAlloc(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Collider[],UnityEngine.Quaternion,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_OverlapBoxNonAlloc_m3701780800 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___center0, Vector3_t3722313464  ___halfExtents1, ColliderU5BU5D_t4234922487* ___results2, Quaternion_t2301928331  ___orientation3, int32_t ___layerMask4, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		ColliderU5BU5D_t4234922487* L_0 = ___results2;
		int32_t L_1 = ___layerMask4;
		int32_t L_2 = V_0;
		int32_t L_3 = Physics_INTERNAL_CALL_OverlapBoxNonAlloc_m1791917347(NULL /*static, unused*/, (&___center0), (&___halfExtents1), L_0, (&___orientation3), L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_0018;
	}

IL_0018:
	{
		int32_t L_4 = V_1;
		return L_4;
	}
}
// System.Int32 UnityEngine.Physics::OverlapBoxNonAlloc(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Collider[],UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_OverlapBoxNonAlloc_m2109966753 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___center0, Vector3_t3722313464  ___halfExtents1, ColliderU5BU5D_t4234922487* ___results2, Quaternion_t2301928331  ___orientation3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = 0;
		V_1 = (-1);
		ColliderU5BU5D_t4234922487* L_0 = ___results2;
		int32_t L_1 = V_1;
		int32_t L_2 = V_0;
		int32_t L_3 = Physics_INTERNAL_CALL_OverlapBoxNonAlloc_m1791917347(NULL /*static, unused*/, (&___center0), (&___halfExtents1), L_0, (&___orientation3), L_1, L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		goto IL_0019;
	}

IL_0019:
	{
		int32_t L_4 = V_2;
		return L_4;
	}
}
// System.Int32 UnityEngine.Physics::OverlapBoxNonAlloc(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Collider[])
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_OverlapBoxNonAlloc_m4170951187 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___center0, Vector3_t3722313464  ___halfExtents1, ColliderU5BU5D_t4234922487* ___results2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Physics_OverlapBoxNonAlloc_m4170951187_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Quaternion_t2301928331  V_2;
	memset(&V_2, 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		V_0 = 0;
		V_1 = (-1);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_0 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_0;
		ColliderU5BU5D_t4234922487* L_1 = ___results2;
		int32_t L_2 = V_1;
		int32_t L_3 = V_0;
		int32_t L_4 = Physics_INTERNAL_CALL_OverlapBoxNonAlloc_m1791917347(NULL /*static, unused*/, (&___center0), (&___halfExtents1), L_1, (&V_2), L_2, L_3, /*hidden argument*/NULL);
		V_3 = L_4;
		goto IL_001f;
	}

IL_001f:
	{
		int32_t L_5 = V_3;
		return L_5;
	}
}
// System.Int32 UnityEngine.Physics::INTERNAL_CALL_OverlapBoxNonAlloc(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Collider[],UnityEngine.Quaternion&,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_INTERNAL_CALL_OverlapBoxNonAlloc_m1791917347 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___center0, Vector3_t3722313464 * ___halfExtents1, ColliderU5BU5D_t4234922487* ___results2, Quaternion_t2301928331 * ___orientation3, int32_t ___layerMask4, int32_t ___queryTriggerInteraction5, const RuntimeMethod* method)
{
	typedef int32_t (*Physics_INTERNAL_CALL_OverlapBoxNonAlloc_m1791917347_ftn) (Vector3_t3722313464 *, Vector3_t3722313464 *, ColliderU5BU5D_t4234922487*, Quaternion_t2301928331 *, int32_t, int32_t);
	static Physics_INTERNAL_CALL_OverlapBoxNonAlloc_m1791917347_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_OverlapBoxNonAlloc_m1791917347_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_OverlapBoxNonAlloc(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Collider[],UnityEngine.Quaternion&,System.Int32,UnityEngine.QueryTriggerInteraction)");
	int32_t retVal = _il2cpp_icall_func(___center0, ___halfExtents1, ___results2, ___orientation3, ___layerMask4, ___queryTriggerInteraction5);
	return retVal;
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::BoxCastAll(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_BoxCastAll_m2334486012 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___center0, Vector3_t3722313464  ___halfExtents1, Vector3_t3722313464  ___direction2, Quaternion_t2301928331  ___orientation3, float ___maxDistance4, int32_t ___layermask5, int32_t ___queryTriggerInteraction6, const RuntimeMethod* method)
{
	RaycastHitU5BU5D_t1690781147* V_0 = NULL;
	{
		float L_0 = ___maxDistance4;
		int32_t L_1 = ___layermask5;
		int32_t L_2 = ___queryTriggerInteraction6;
		RaycastHitU5BU5D_t1690781147* L_3 = Physics_INTERNAL_CALL_BoxCastAll_m4199403556(NULL /*static, unused*/, (&___center0), (&___halfExtents1), (&___direction2), (&___orientation3), L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_001a;
	}

IL_001a:
	{
		RaycastHitU5BU5D_t1690781147* L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::BoxCastAll(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_BoxCastAll_m789693485 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___center0, Vector3_t3722313464  ___halfExtents1, Vector3_t3722313464  ___direction2, Quaternion_t2301928331  ___orientation3, float ___maxDistance4, int32_t ___layermask5, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RaycastHitU5BU5D_t1690781147* V_1 = NULL;
	{
		V_0 = 0;
		float L_0 = ___maxDistance4;
		int32_t L_1 = ___layermask5;
		int32_t L_2 = V_0;
		RaycastHitU5BU5D_t1690781147* L_3 = Physics_INTERNAL_CALL_BoxCastAll_m4199403556(NULL /*static, unused*/, (&___center0), (&___halfExtents1), (&___direction2), (&___orientation3), L_0, L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_001b;
	}

IL_001b:
	{
		RaycastHitU5BU5D_t1690781147* L_4 = V_1;
		return L_4;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::BoxCastAll(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion,System.Single)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_BoxCastAll_m3941378038 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___center0, Vector3_t3722313464  ___halfExtents1, Vector3_t3722313464  ___direction2, Quaternion_t2301928331  ___orientation3, float ___maxDistance4, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RaycastHitU5BU5D_t1690781147* V_2 = NULL;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		float L_0 = ___maxDistance4;
		int32_t L_1 = V_1;
		int32_t L_2 = V_0;
		RaycastHitU5BU5D_t1690781147* L_3 = Physics_INTERNAL_CALL_BoxCastAll_m4199403556(NULL /*static, unused*/, (&___center0), (&___halfExtents1), (&___direction2), (&___orientation3), L_0, L_1, L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		goto IL_001d;
	}

IL_001d:
	{
		RaycastHitU5BU5D_t1690781147* L_4 = V_2;
		return L_4;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::BoxCastAll(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_BoxCastAll_m1438426294 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___center0, Vector3_t3722313464  ___halfExtents1, Vector3_t3722313464  ___direction2, Quaternion_t2301928331  ___orientation3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	RaycastHitU5BU5D_t1690781147* V_3 = NULL;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		V_2 = (std::numeric_limits<float>::infinity());
		float L_0 = V_2;
		int32_t L_1 = V_1;
		int32_t L_2 = V_0;
		RaycastHitU5BU5D_t1690781147* L_3 = Physics_INTERNAL_CALL_BoxCastAll_m4199403556(NULL /*static, unused*/, (&___center0), (&___halfExtents1), (&___direction2), (&___orientation3), L_0, L_1, L_2, /*hidden argument*/NULL);
		V_3 = L_3;
		goto IL_0022;
	}

IL_0022:
	{
		RaycastHitU5BU5D_t1690781147* L_4 = V_3;
		return L_4;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::BoxCastAll(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_BoxCastAll_m4181672243 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___center0, Vector3_t3722313464  ___halfExtents1, Vector3_t3722313464  ___direction2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Physics_BoxCastAll_m4181672243_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	Quaternion_t2301928331  V_3;
	memset(&V_3, 0, sizeof(V_3));
	RaycastHitU5BU5D_t1690781147* V_4 = NULL;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		V_2 = (std::numeric_limits<float>::infinity());
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_0 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_0;
		float L_1 = V_2;
		int32_t L_2 = V_1;
		int32_t L_3 = V_0;
		RaycastHitU5BU5D_t1690781147* L_4 = Physics_INTERNAL_CALL_BoxCastAll_m4199403556(NULL /*static, unused*/, (&___center0), (&___halfExtents1), (&___direction2), (&V_3), L_1, L_2, L_3, /*hidden argument*/NULL);
		V_4 = L_4;
		goto IL_0029;
	}

IL_0029:
	{
		RaycastHitU5BU5D_t1690781147* L_5 = V_4;
		return L_5;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::INTERNAL_CALL_BoxCastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Quaternion&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_INTERNAL_CALL_BoxCastAll_m4199403556 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___center0, Vector3_t3722313464 * ___halfExtents1, Vector3_t3722313464 * ___direction2, Quaternion_t2301928331 * ___orientation3, float ___maxDistance4, int32_t ___layermask5, int32_t ___queryTriggerInteraction6, const RuntimeMethod* method)
{
	typedef RaycastHitU5BU5D_t1690781147* (*Physics_INTERNAL_CALL_BoxCastAll_m4199403556_ftn) (Vector3_t3722313464 *, Vector3_t3722313464 *, Vector3_t3722313464 *, Quaternion_t2301928331 *, float, int32_t, int32_t);
	static Physics_INTERNAL_CALL_BoxCastAll_m4199403556_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_BoxCastAll_m4199403556_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_BoxCastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Quaternion&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)");
	RaycastHitU5BU5D_t1690781147* retVal = _il2cpp_icall_func(___center0, ___halfExtents1, ___direction2, ___orientation3, ___maxDistance4, ___layermask5, ___queryTriggerInteraction6);
	return retVal;
}
// System.Int32 UnityEngine.Physics::BoxCastNonAlloc(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit[],UnityEngine.Quaternion,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_BoxCastNonAlloc_m3461990139 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___center0, Vector3_t3722313464  ___halfExtents1, Vector3_t3722313464  ___direction2, RaycastHitU5BU5D_t1690781147* ___results3, Quaternion_t2301928331  ___orientation4, float ___maxDistance5, int32_t ___layermask6, int32_t ___queryTriggerInteraction7, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		RaycastHitU5BU5D_t1690781147* L_0 = ___results3;
		float L_1 = ___maxDistance5;
		int32_t L_2 = ___layermask6;
		int32_t L_3 = ___queryTriggerInteraction7;
		int32_t L_4 = Physics_INTERNAL_CALL_BoxCastNonAlloc_m362167648(NULL /*static, unused*/, (&___center0), (&___halfExtents1), (&___direction2), L_0, (&___orientation4), L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001b;
	}

IL_001b:
	{
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Int32 UnityEngine.Physics::BoxCastNonAlloc(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit[],UnityEngine.Quaternion,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_BoxCastNonAlloc_m206006589 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___center0, Vector3_t3722313464  ___halfExtents1, Vector3_t3722313464  ___direction2, RaycastHitU5BU5D_t1690781147* ___results3, Quaternion_t2301928331  ___orientation4, float ___maxDistance5, int32_t ___layermask6, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		RaycastHitU5BU5D_t1690781147* L_0 = ___results3;
		float L_1 = ___maxDistance5;
		int32_t L_2 = ___layermask6;
		int32_t L_3 = V_0;
		int32_t L_4 = Physics_INTERNAL_CALL_BoxCastNonAlloc_m362167648(NULL /*static, unused*/, (&___center0), (&___halfExtents1), (&___direction2), L_0, (&___orientation4), L_1, L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_001c;
	}

IL_001c:
	{
		int32_t L_5 = V_1;
		return L_5;
	}
}
// System.Int32 UnityEngine.Physics::BoxCastNonAlloc(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit[],UnityEngine.Quaternion,System.Single)
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_BoxCastNonAlloc_m1958442617 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___center0, Vector3_t3722313464  ___halfExtents1, Vector3_t3722313464  ___direction2, RaycastHitU5BU5D_t1690781147* ___results3, Quaternion_t2301928331  ___orientation4, float ___maxDistance5, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		RaycastHitU5BU5D_t1690781147* L_0 = ___results3;
		float L_1 = ___maxDistance5;
		int32_t L_2 = V_1;
		int32_t L_3 = V_0;
		int32_t L_4 = Physics_INTERNAL_CALL_BoxCastNonAlloc_m362167648(NULL /*static, unused*/, (&___center0), (&___halfExtents1), (&___direction2), L_0, (&___orientation4), L_1, L_2, L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		goto IL_001e;
	}

IL_001e:
	{
		int32_t L_5 = V_2;
		return L_5;
	}
}
// System.Int32 UnityEngine.Physics::BoxCastNonAlloc(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit[],UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_BoxCastNonAlloc_m3582184236 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___center0, Vector3_t3722313464  ___halfExtents1, Vector3_t3722313464  ___direction2, RaycastHitU5BU5D_t1690781147* ___results3, Quaternion_t2301928331  ___orientation4, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		V_2 = (std::numeric_limits<float>::infinity());
		RaycastHitU5BU5D_t1690781147* L_0 = ___results3;
		float L_1 = V_2;
		int32_t L_2 = V_1;
		int32_t L_3 = V_0;
		int32_t L_4 = Physics_INTERNAL_CALL_BoxCastNonAlloc_m362167648(NULL /*static, unused*/, (&___center0), (&___halfExtents1), (&___direction2), L_0, (&___orientation4), L_1, L_2, L_3, /*hidden argument*/NULL);
		V_3 = L_4;
		goto IL_0023;
	}

IL_0023:
	{
		int32_t L_5 = V_3;
		return L_5;
	}
}
// System.Int32 UnityEngine.Physics::BoxCastNonAlloc(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit[])
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_BoxCastNonAlloc_m3577326959 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___center0, Vector3_t3722313464  ___halfExtents1, Vector3_t3722313464  ___direction2, RaycastHitU5BU5D_t1690781147* ___results3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Physics_BoxCastNonAlloc_m3577326959_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	Quaternion_t2301928331  V_3;
	memset(&V_3, 0, sizeof(V_3));
	int32_t V_4 = 0;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		V_2 = (std::numeric_limits<float>::infinity());
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_0 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_0;
		RaycastHitU5BU5D_t1690781147* L_1 = ___results3;
		float L_2 = V_2;
		int32_t L_3 = V_1;
		int32_t L_4 = V_0;
		int32_t L_5 = Physics_INTERNAL_CALL_BoxCastNonAlloc_m362167648(NULL /*static, unused*/, (&___center0), (&___halfExtents1), (&___direction2), L_1, (&V_3), L_2, L_3, L_4, /*hidden argument*/NULL);
		V_4 = L_5;
		goto IL_002a;
	}

IL_002a:
	{
		int32_t L_6 = V_4;
		return L_6;
	}
}
// System.Int32 UnityEngine.Physics::INTERNAL_CALL_BoxCastNonAlloc(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit[],UnityEngine.Quaternion&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_INTERNAL_CALL_BoxCastNonAlloc_m362167648 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___center0, Vector3_t3722313464 * ___halfExtents1, Vector3_t3722313464 * ___direction2, RaycastHitU5BU5D_t1690781147* ___results3, Quaternion_t2301928331 * ___orientation4, float ___maxDistance5, int32_t ___layermask6, int32_t ___queryTriggerInteraction7, const RuntimeMethod* method)
{
	typedef int32_t (*Physics_INTERNAL_CALL_BoxCastNonAlloc_m362167648_ftn) (Vector3_t3722313464 *, Vector3_t3722313464 *, Vector3_t3722313464 *, RaycastHitU5BU5D_t1690781147*, Quaternion_t2301928331 *, float, int32_t, int32_t);
	static Physics_INTERNAL_CALL_BoxCastNonAlloc_m362167648_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_BoxCastNonAlloc_m362167648_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_BoxCastNonAlloc(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit[],UnityEngine.Quaternion&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)");
	int32_t retVal = _il2cpp_icall_func(___center0, ___halfExtents1, ___direction2, ___results3, ___orientation4, ___maxDistance5, ___layermask6, ___queryTriggerInteraction7);
	return retVal;
}
// System.Boolean UnityEngine.Physics::Internal_BoxCast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Internal_BoxCast_m1952336906 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___center0, Vector3_t3722313464  ___halfExtents1, Quaternion_t2301928331  ___orientation2, Vector3_t3722313464  ___direction3, RaycastHit_t1056001966 * ___hitInfo4, float ___maxDistance5, int32_t ___layermask6, int32_t ___queryTriggerInteraction7, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		RaycastHit_t1056001966 * L_0 = ___hitInfo4;
		float L_1 = ___maxDistance5;
		int32_t L_2 = ___layermask6;
		int32_t L_3 = ___queryTriggerInteraction7;
		bool L_4 = Physics_INTERNAL_CALL_Internal_BoxCast_m139457230(NULL /*static, unused*/, (&___center0), (&___halfExtents1), (&___orientation2), (&___direction3), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001c;
	}

IL_001c:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_BoxCast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_INTERNAL_CALL_Internal_BoxCast_m139457230 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___center0, Vector3_t3722313464 * ___halfExtents1, Quaternion_t2301928331 * ___orientation2, Vector3_t3722313464 * ___direction3, RaycastHit_t1056001966 * ___hitInfo4, float ___maxDistance5, int32_t ___layermask6, int32_t ___queryTriggerInteraction7, const RuntimeMethod* method)
{
	typedef bool (*Physics_INTERNAL_CALL_Internal_BoxCast_m139457230_ftn) (Vector3_t3722313464 *, Vector3_t3722313464 *, Quaternion_t2301928331 *, Vector3_t3722313464 *, RaycastHit_t1056001966 *, float, int32_t, int32_t);
	static Physics_INTERNAL_CALL_Internal_BoxCast_m139457230_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_Internal_BoxCast_m139457230_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_Internal_BoxCast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)");
	bool retVal = _il2cpp_icall_func(___center0, ___halfExtents1, ___orientation2, ___direction3, ___hitInfo4, ___maxDistance5, ___layermask6, ___queryTriggerInteraction7);
	return retVal;
}
// System.Boolean UnityEngine.Physics::BoxCast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Physics_BoxCast_m2670937930 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___center0, Vector3_t3722313464  ___halfExtents1, Vector3_t3722313464  ___direction2, Quaternion_t2301928331  ___orientation3, float ___maxDistance4, int32_t ___layerMask5, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		V_0 = 0;
		Vector3_t3722313464  L_0 = ___center0;
		Vector3_t3722313464  L_1 = ___halfExtents1;
		Vector3_t3722313464  L_2 = ___direction2;
		Quaternion_t2301928331  L_3 = ___orientation3;
		float L_4 = ___maxDistance4;
		int32_t L_5 = ___layerMask5;
		int32_t L_6 = V_0;
		bool L_7 = Physics_BoxCast_m3526965635(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		goto IL_0017;
	}

IL_0017:
	{
		bool L_8 = V_1;
		return L_8;
	}
}
// System.Boolean UnityEngine.Physics::BoxCast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion,System.Single)
extern "C" IL2CPP_METHOD_ATTR bool Physics_BoxCast_m739348954 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___center0, Vector3_t3722313464  ___halfExtents1, Vector3_t3722313464  ___direction2, Quaternion_t2301928331  ___orientation3, float ___maxDistance4, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		Vector3_t3722313464  L_0 = ___center0;
		Vector3_t3722313464  L_1 = ___halfExtents1;
		Vector3_t3722313464  L_2 = ___direction2;
		Quaternion_t2301928331  L_3 = ___orientation3;
		float L_4 = ___maxDistance4;
		int32_t L_5 = V_1;
		int32_t L_6 = V_0;
		bool L_7 = Physics_BoxCast_m3526965635(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		goto IL_0019;
	}

IL_0019:
	{
		bool L_8 = V_2;
		return L_8;
	}
}
// System.Boolean UnityEngine.Physics::BoxCast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR bool Physics_BoxCast_m2866275766 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___center0, Vector3_t3722313464  ___halfExtents1, Vector3_t3722313464  ___direction2, Quaternion_t2301928331  ___orientation3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	bool V_3 = false;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		V_2 = (std::numeric_limits<float>::infinity());
		Vector3_t3722313464  L_0 = ___center0;
		Vector3_t3722313464  L_1 = ___halfExtents1;
		Vector3_t3722313464  L_2 = ___direction2;
		Quaternion_t2301928331  L_3 = ___orientation3;
		float L_4 = V_2;
		int32_t L_5 = V_1;
		int32_t L_6 = V_0;
		bool L_7 = Physics_BoxCast_m3526965635(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		goto IL_001e;
	}

IL_001e:
	{
		bool L_8 = V_3;
		return L_8;
	}
}
// System.Boolean UnityEngine.Physics::BoxCast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR bool Physics_BoxCast_m2235165415 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___center0, Vector3_t3722313464  ___halfExtents1, Vector3_t3722313464  ___direction2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Physics_BoxCast_m2235165415_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	Quaternion_t2301928331  V_3;
	memset(&V_3, 0, sizeof(V_3));
	bool V_4 = false;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		V_2 = (std::numeric_limits<float>::infinity());
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_0 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_0;
		Vector3_t3722313464  L_1 = ___center0;
		Vector3_t3722313464  L_2 = ___halfExtents1;
		Vector3_t3722313464  L_3 = ___direction2;
		Quaternion_t2301928331  L_4 = V_3;
		float L_5 = V_2;
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		bool L_8 = Physics_BoxCast_m3526965635(NULL /*static, unused*/, L_1, L_2, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		V_4 = L_8;
		goto IL_0025;
	}

IL_0025:
	{
		bool L_9 = V_4;
		return L_9;
	}
}
// System.Boolean UnityEngine.Physics::BoxCast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_BoxCast_m3526965635 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___center0, Vector3_t3722313464  ___halfExtents1, Vector3_t3722313464  ___direction2, Quaternion_t2301928331  ___orientation3, float ___maxDistance4, int32_t ___layerMask5, int32_t ___queryTriggerInteraction6, const RuntimeMethod* method)
{
	RaycastHit_t1056001966  V_0;
	memset(&V_0, 0, sizeof(V_0));
	bool V_1 = false;
	{
		Vector3_t3722313464  L_0 = ___center0;
		Vector3_t3722313464  L_1 = ___halfExtents1;
		Quaternion_t2301928331  L_2 = ___orientation3;
		Vector3_t3722313464  L_3 = ___direction2;
		float L_4 = ___maxDistance4;
		int32_t L_5 = ___layerMask5;
		int32_t L_6 = ___queryTriggerInteraction6;
		bool L_7 = Physics_Internal_BoxCast_m1952336906(NULL /*static, unused*/, L_0, L_1, L_2, L_3, (&V_0), L_4, L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		goto IL_0018;
	}

IL_0018:
	{
		bool L_8 = V_1;
		return L_8;
	}
}
// System.Boolean UnityEngine.Physics::BoxCast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,UnityEngine.Quaternion,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Physics_BoxCast_m439076175 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___center0, Vector3_t3722313464  ___halfExtents1, Vector3_t3722313464  ___direction2, RaycastHit_t1056001966 * ___hitInfo3, Quaternion_t2301928331  ___orientation4, float ___maxDistance5, int32_t ___layerMask6, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		V_0 = 0;
		Vector3_t3722313464  L_0 = ___center0;
		Vector3_t3722313464  L_1 = ___halfExtents1;
		Vector3_t3722313464  L_2 = ___direction2;
		RaycastHit_t1056001966 * L_3 = ___hitInfo3;
		Quaternion_t2301928331  L_4 = ___orientation4;
		float L_5 = ___maxDistance5;
		int32_t L_6 = ___layerMask6;
		int32_t L_7 = V_0;
		bool L_8 = Physics_BoxCast_m1523082611(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		goto IL_0019;
	}

IL_0019:
	{
		bool L_9 = V_1;
		return L_9;
	}
}
// System.Boolean UnityEngine.Physics::BoxCast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,UnityEngine.Quaternion,System.Single)
extern "C" IL2CPP_METHOD_ATTR bool Physics_BoxCast_m2362679238 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___center0, Vector3_t3722313464  ___halfExtents1, Vector3_t3722313464  ___direction2, RaycastHit_t1056001966 * ___hitInfo3, Quaternion_t2301928331  ___orientation4, float ___maxDistance5, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		Vector3_t3722313464  L_0 = ___center0;
		Vector3_t3722313464  L_1 = ___halfExtents1;
		Vector3_t3722313464  L_2 = ___direction2;
		RaycastHit_t1056001966 * L_3 = ___hitInfo3;
		Quaternion_t2301928331  L_4 = ___orientation4;
		float L_5 = ___maxDistance5;
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		bool L_8 = Physics_BoxCast_m1523082611(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		goto IL_001b;
	}

IL_001b:
	{
		bool L_9 = V_2;
		return L_9;
	}
}
// System.Boolean UnityEngine.Physics::BoxCast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR bool Physics_BoxCast_m1804722360 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___center0, Vector3_t3722313464  ___halfExtents1, Vector3_t3722313464  ___direction2, RaycastHit_t1056001966 * ___hitInfo3, Quaternion_t2301928331  ___orientation4, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	bool V_3 = false;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		V_2 = (std::numeric_limits<float>::infinity());
		Vector3_t3722313464  L_0 = ___center0;
		Vector3_t3722313464  L_1 = ___halfExtents1;
		Vector3_t3722313464  L_2 = ___direction2;
		RaycastHit_t1056001966 * L_3 = ___hitInfo3;
		Quaternion_t2301928331  L_4 = ___orientation4;
		float L_5 = V_2;
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		bool L_8 = Physics_BoxCast_m1523082611(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		goto IL_0020;
	}

IL_0020:
	{
		bool L_9 = V_3;
		return L_9;
	}
}
// System.Boolean UnityEngine.Physics::BoxCast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&)
extern "C" IL2CPP_METHOD_ATTR bool Physics_BoxCast_m240943544 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___center0, Vector3_t3722313464  ___halfExtents1, Vector3_t3722313464  ___direction2, RaycastHit_t1056001966 * ___hitInfo3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Physics_BoxCast_m240943544_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	Quaternion_t2301928331  V_3;
	memset(&V_3, 0, sizeof(V_3));
	bool V_4 = false;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		V_2 = (std::numeric_limits<float>::infinity());
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_0 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_0;
		Vector3_t3722313464  L_1 = ___center0;
		Vector3_t3722313464  L_2 = ___halfExtents1;
		Vector3_t3722313464  L_3 = ___direction2;
		RaycastHit_t1056001966 * L_4 = ___hitInfo3;
		Quaternion_t2301928331  L_5 = V_3;
		float L_6 = V_2;
		int32_t L_7 = V_1;
		int32_t L_8 = V_0;
		bool L_9 = Physics_BoxCast_m1523082611(NULL /*static, unused*/, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
		V_4 = L_9;
		goto IL_0026;
	}

IL_0026:
	{
		bool L_10 = V_4;
		return L_10;
	}
}
// System.Boolean UnityEngine.Physics::BoxCast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,UnityEngine.Quaternion,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_BoxCast_m1523082611 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___center0, Vector3_t3722313464  ___halfExtents1, Vector3_t3722313464  ___direction2, RaycastHit_t1056001966 * ___hitInfo3, Quaternion_t2301928331  ___orientation4, float ___maxDistance5, int32_t ___layerMask6, int32_t ___queryTriggerInteraction7, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Vector3_t3722313464  L_0 = ___center0;
		Vector3_t3722313464  L_1 = ___halfExtents1;
		Quaternion_t2301928331  L_2 = ___orientation4;
		Vector3_t3722313464  L_3 = ___direction2;
		RaycastHit_t1056001966 * L_4 = ___hitInfo3;
		float L_5 = ___maxDistance5;
		int32_t L_6 = ___layerMask6;
		int32_t L_7 = ___queryTriggerInteraction7;
		bool L_8 = Physics_Internal_BoxCast_m1952336906(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0018;
	}

IL_0018:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
// System.Void UnityEngine.Physics::IgnoreCollision(UnityEngine.Collider,UnityEngine.Collider,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Physics_IgnoreCollision_m1771762600 (RuntimeObject * __this /* static, unused */, Collider_t1773347010 * ___collider10, Collider_t1773347010 * ___collider21, bool ___ignore2, const RuntimeMethod* method)
{
	typedef void (*Physics_IgnoreCollision_m1771762600_ftn) (Collider_t1773347010 *, Collider_t1773347010 *, bool);
	static Physics_IgnoreCollision_m1771762600_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_IgnoreCollision_m1771762600_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::IgnoreCollision(UnityEngine.Collider,UnityEngine.Collider,System.Boolean)");
	_il2cpp_icall_func(___collider10, ___collider21, ___ignore2);
}
// System.Void UnityEngine.Physics::IgnoreCollision(UnityEngine.Collider,UnityEngine.Collider)
extern "C" IL2CPP_METHOD_ATTR void Physics_IgnoreCollision_m1104024374 (RuntimeObject * __this /* static, unused */, Collider_t1773347010 * ___collider10, Collider_t1773347010 * ___collider21, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)1;
		Collider_t1773347010 * L_0 = ___collider10;
		Collider_t1773347010 * L_1 = ___collider21;
		bool L_2 = V_0;
		Physics_IgnoreCollision_m1771762600(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Physics::IgnoreLayerCollision(System.Int32,System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Physics_IgnoreLayerCollision_m2712987023 (RuntimeObject * __this /* static, unused */, int32_t ___layer10, int32_t ___layer21, bool ___ignore2, const RuntimeMethod* method)
{
	typedef void (*Physics_IgnoreLayerCollision_m2712987023_ftn) (int32_t, int32_t, bool);
	static Physics_IgnoreLayerCollision_m2712987023_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_IgnoreLayerCollision_m2712987023_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::IgnoreLayerCollision(System.Int32,System.Int32,System.Boolean)");
	_il2cpp_icall_func(___layer10, ___layer21, ___ignore2);
}
// System.Void UnityEngine.Physics::IgnoreLayerCollision(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Physics_IgnoreLayerCollision_m2226693522 (RuntimeObject * __this /* static, unused */, int32_t ___layer10, int32_t ___layer21, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)1;
		int32_t L_0 = ___layer10;
		int32_t L_1 = ___layer21;
		bool L_2 = V_0;
		Physics_IgnoreLayerCollision_m2712987023(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Physics::GetIgnoreLayerCollision(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Physics_GetIgnoreLayerCollision_m2337073095 (RuntimeObject * __this /* static, unused */, int32_t ___layer10, int32_t ___layer21, const RuntimeMethod* method)
{
	typedef bool (*Physics_GetIgnoreLayerCollision_m2337073095_ftn) (int32_t, int32_t);
	static Physics_GetIgnoreLayerCollision_m2337073095_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_GetIgnoreLayerCollision_m2337073095_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::GetIgnoreLayerCollision(System.Int32,System.Int32)");
	bool retVal = _il2cpp_icall_func(___layer10, ___layer21);
	return retVal;
}
// System.Boolean UnityEngine.Physics::Internal_Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Internal_Raycast_m2789434453 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, Vector3_t3722313464  ___direction1, RaycastHit_t1056001966 * ___hitInfo2, float ___maxDistance3, int32_t ___layermask4, int32_t ___queryTriggerInteraction5, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		RaycastHit_t1056001966 * L_0 = ___hitInfo2;
		float L_1 = ___maxDistance3;
		int32_t L_2 = ___layermask4;
		int32_t L_3 = ___queryTriggerInteraction5;
		bool L_4 = Physics_INTERNAL_CALL_Internal_Raycast_m227630749(NULL /*static, unused*/, (&___origin0), (&___direction1), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_INTERNAL_CALL_Internal_Raycast_m227630749 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___origin0, Vector3_t3722313464 * ___direction1, RaycastHit_t1056001966 * ___hitInfo2, float ___maxDistance3, int32_t ___layermask4, int32_t ___queryTriggerInteraction5, const RuntimeMethod* method)
{
	typedef bool (*Physics_INTERNAL_CALL_Internal_Raycast_m227630749_ftn) (Vector3_t3722313464 *, Vector3_t3722313464 *, RaycastHit_t1056001966 *, float, int32_t, int32_t);
	static Physics_INTERNAL_CALL_Internal_Raycast_m227630749_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_Internal_Raycast_m227630749_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)");
	bool retVal = _il2cpp_icall_func(___origin0, ___direction1, ___hitInfo2, ___maxDistance3, ___layermask4, ___queryTriggerInteraction5);
	return retVal;
}
// System.Boolean UnityEngine.Physics::Internal_CapsuleCast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Internal_CapsuleCast_m889508279 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___point10, Vector3_t3722313464  ___point21, float ___radius2, Vector3_t3722313464  ___direction3, RaycastHit_t1056001966 * ___hitInfo4, float ___maxDistance5, int32_t ___layermask6, int32_t ___queryTriggerInteraction7, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		float L_0 = ___radius2;
		RaycastHit_t1056001966 * L_1 = ___hitInfo4;
		float L_2 = ___maxDistance5;
		int32_t L_3 = ___layermask6;
		int32_t L_4 = ___queryTriggerInteraction7;
		bool L_5 = Physics_INTERNAL_CALL_Internal_CapsuleCast_m4176319213(NULL /*static, unused*/, (&___point10), (&___point21), L_0, (&___direction3), L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_CapsuleCast(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_INTERNAL_CALL_Internal_CapsuleCast_m4176319213 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___point10, Vector3_t3722313464 * ___point21, float ___radius2, Vector3_t3722313464 * ___direction3, RaycastHit_t1056001966 * ___hitInfo4, float ___maxDistance5, int32_t ___layermask6, int32_t ___queryTriggerInteraction7, const RuntimeMethod* method)
{
	typedef bool (*Physics_INTERNAL_CALL_Internal_CapsuleCast_m4176319213_ftn) (Vector3_t3722313464 *, Vector3_t3722313464 *, float, Vector3_t3722313464 *, RaycastHit_t1056001966 *, float, int32_t, int32_t);
	static Physics_INTERNAL_CALL_Internal_CapsuleCast_m4176319213_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_Internal_CapsuleCast_m4176319213_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_Internal_CapsuleCast(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)");
	bool retVal = _il2cpp_icall_func(___point10, ___point21, ___radius2, ___direction3, ___hitInfo4, ___maxDistance5, ___layermask6, ___queryTriggerInteraction7);
	return retVal;
}
// System.Boolean UnityEngine.Physics::Internal_RaycastTest(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Internal_RaycastTest_m1784372019 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, Vector3_t3722313464  ___direction1, float ___maxDistance2, int32_t ___layermask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		float L_0 = ___maxDistance2;
		int32_t L_1 = ___layermask3;
		int32_t L_2 = ___queryTriggerInteraction4;
		bool L_3 = Physics_INTERNAL_CALL_Internal_RaycastTest_m1263415310(NULL /*static, unused*/, (&___origin0), (&___direction1), L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_RaycastTest(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_INTERNAL_CALL_Internal_RaycastTest_m1263415310 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___origin0, Vector3_t3722313464 * ___direction1, float ___maxDistance2, int32_t ___layermask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method)
{
	typedef bool (*Physics_INTERNAL_CALL_Internal_RaycastTest_m1263415310_ftn) (Vector3_t3722313464 *, Vector3_t3722313464 *, float, int32_t, int32_t);
	static Physics_INTERNAL_CALL_Internal_RaycastTest_m1263415310_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_Internal_RaycastTest_m1263415310_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_Internal_RaycastTest(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)");
	bool retVal = _il2cpp_icall_func(___origin0, ___direction1, ___maxDistance2, ___layermask3, ___queryTriggerInteraction4);
	return retVal;
}
// System.Boolean UnityEngine.Physics::ComputePenetration(UnityEngine.Collider,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Collider,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3&,System.Single&)
extern "C" IL2CPP_METHOD_ATTR bool Physics_ComputePenetration_m720543839 (RuntimeObject * __this /* static, unused */, Collider_t1773347010 * ___colliderA0, Vector3_t3722313464  ___positionA1, Quaternion_t2301928331  ___rotationA2, Collider_t1773347010 * ___colliderB3, Vector3_t3722313464  ___positionB4, Quaternion_t2301928331  ___rotationB5, Vector3_t3722313464 * ___direction6, float* ___distance7, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Collider_t1773347010 * L_0 = ___colliderA0;
		Collider_t1773347010 * L_1 = ___colliderB3;
		Vector3_t3722313464 * L_2 = ___direction6;
		float* L_3 = ___distance7;
		bool L_4 = Physics_INTERNAL_CALL_ComputePenetration_m241423214(NULL /*static, unused*/, L_0, (&___positionA1), (&___rotationA2), L_1, (&___positionB4), (&___rotationB5), L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_ComputePenetration(UnityEngine.Collider,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Collider,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&,System.Single&)
extern "C" IL2CPP_METHOD_ATTR bool Physics_INTERNAL_CALL_ComputePenetration_m241423214 (RuntimeObject * __this /* static, unused */, Collider_t1773347010 * ___colliderA0, Vector3_t3722313464 * ___positionA1, Quaternion_t2301928331 * ___rotationA2, Collider_t1773347010 * ___colliderB3, Vector3_t3722313464 * ___positionB4, Quaternion_t2301928331 * ___rotationB5, Vector3_t3722313464 * ___direction6, float* ___distance7, const RuntimeMethod* method)
{
	typedef bool (*Physics_INTERNAL_CALL_ComputePenetration_m241423214_ftn) (Collider_t1773347010 *, Vector3_t3722313464 *, Quaternion_t2301928331 *, Collider_t1773347010 *, Vector3_t3722313464 *, Quaternion_t2301928331 *, Vector3_t3722313464 *, float*);
	static Physics_INTERNAL_CALL_ComputePenetration_m241423214_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_ComputePenetration_m241423214_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_ComputePenetration(UnityEngine.Collider,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Collider,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&,System.Single&)");
	bool retVal = _il2cpp_icall_func(___colliderA0, ___positionA1, ___rotationA2, ___colliderB3, ___positionB4, ___rotationB5, ___direction6, ___distance7);
	return retVal;
}
// UnityEngine.Vector3 UnityEngine.Physics::ClosestPoint(UnityEngine.Vector3,UnityEngine.Collider,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Physics_ClosestPoint_m3854099429 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___point0, Collider_t1773347010 * ___collider1, Vector3_t3722313464  ___position2, Quaternion_t2301928331  ___rotation3, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Collider_t1773347010 * L_0 = ___collider1;
		Physics_INTERNAL_CALL_ClosestPoint_m1999732338(NULL /*static, unused*/, (&___point0), L_0, (&___position2), (&___rotation3), (&V_0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = V_0;
		V_1 = L_1;
		goto IL_0016;
	}

IL_0016:
	{
		Vector3_t3722313464  L_2 = V_1;
		return L_2;
	}
}
// System.Void UnityEngine.Physics::INTERNAL_CALL_ClosestPoint(UnityEngine.Vector3&,UnityEngine.Collider,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Physics_INTERNAL_CALL_ClosestPoint_m1999732338 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___point0, Collider_t1773347010 * ___collider1, Vector3_t3722313464 * ___position2, Quaternion_t2301928331 * ___rotation3, Vector3_t3722313464 * ___value4, const RuntimeMethod* method)
{
	typedef void (*Physics_INTERNAL_CALL_ClosestPoint_m1999732338_ftn) (Vector3_t3722313464 *, Collider_t1773347010 *, Vector3_t3722313464 *, Quaternion_t2301928331 *, Vector3_t3722313464 *);
	static Physics_INTERNAL_CALL_ClosestPoint_m1999732338_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_ClosestPoint_m1999732338_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_ClosestPoint(UnityEngine.Vector3&,UnityEngine.Collider,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(___point0, ___collider1, ___position2, ___rotation3, ___value4);
}
// System.Void UnityEngine.Physics::Simulate(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Physics_Simulate_m2005247855 (RuntimeObject * __this /* static, unused */, float ___step0, const RuntimeMethod* method)
{
	typedef void (*Physics_Simulate_m2005247855_ftn) (float);
	static Physics_Simulate_m2005247855_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_Simulate_m2005247855_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::Simulate(System.Single)");
	_il2cpp_icall_func(___step0);
}
// System.Boolean UnityEngine.Physics::get_autoSimulation()
extern "C" IL2CPP_METHOD_ATTR bool Physics_get_autoSimulation_m1156183564 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef bool (*Physics_get_autoSimulation_m1156183564_ftn) ();
	static Physics_get_autoSimulation_m1156183564_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_get_autoSimulation_m1156183564_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::get_autoSimulation()");
	bool retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Void UnityEngine.Physics::set_autoSimulation(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Physics_set_autoSimulation_m1064908821 (RuntimeObject * __this /* static, unused */, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*Physics_set_autoSimulation_m1064908821_ftn) (bool);
	static Physics_set_autoSimulation_m1064908821_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_set_autoSimulation_m1064908821_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::set_autoSimulation(System.Boolean)");
	_il2cpp_icall_func(___value0);
}
// System.Void UnityEngine.Physics::SyncTransforms()
extern "C" IL2CPP_METHOD_ATTR void Physics_SyncTransforms_m1372605888 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (*Physics_SyncTransforms_m1372605888_ftn) ();
	static Physics_SyncTransforms_m1372605888_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_SyncTransforms_m1372605888_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::SyncTransforms()");
	_il2cpp_icall_func();
}
// System.Boolean UnityEngine.Physics::get_autoSyncTransforms()
extern "C" IL2CPP_METHOD_ATTR bool Physics_get_autoSyncTransforms_m275034212 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef bool (*Physics_get_autoSyncTransforms_m275034212_ftn) ();
	static Physics_get_autoSyncTransforms_m275034212_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_get_autoSyncTransforms_m275034212_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::get_autoSyncTransforms()");
	bool retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Void UnityEngine.Physics::set_autoSyncTransforms(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Physics_set_autoSyncTransforms_m944824681 (RuntimeObject * __this /* static, unused */, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*Physics_set_autoSyncTransforms_m944824681_ftn) (bool);
	static Physics_set_autoSyncTransforms_m944824681_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_set_autoSyncTransforms_m944824681_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::set_autoSyncTransforms(System.Boolean)");
	_il2cpp_icall_func(___value0);
}
// System.Void UnityEngine.Physics::RebuildBroadphaseRegions(UnityEngine.Bounds,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Physics_RebuildBroadphaseRegions_m1606417018 (RuntimeObject * __this /* static, unused */, Bounds_t2266837910  ___worldBounds0, int32_t ___subdivisions1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___subdivisions1;
		Physics_INTERNAL_CALL_RebuildBroadphaseRegions_m1527693415(NULL /*static, unused*/, (&___worldBounds0), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Physics::INTERNAL_CALL_RebuildBroadphaseRegions(UnityEngine.Bounds&,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Physics_INTERNAL_CALL_RebuildBroadphaseRegions_m1527693415 (RuntimeObject * __this /* static, unused */, Bounds_t2266837910 * ___worldBounds0, int32_t ___subdivisions1, const RuntimeMethod* method)
{
	typedef void (*Physics_INTERNAL_CALL_RebuildBroadphaseRegions_m1527693415_ftn) (Bounds_t2266837910 *, int32_t);
	static Physics_INTERNAL_CALL_RebuildBroadphaseRegions_m1527693415_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_RebuildBroadphaseRegions_m1527693415_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_RebuildBroadphaseRegions(UnityEngine.Bounds&,System.Int32)");
	_il2cpp_icall_func(___worldBounds0, ___subdivisions1);
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
// Conversion methods for marshalling of: UnityEngine.RaycastHit
extern "C" void RaycastHit_t1056001966_marshal_pinvoke(const RaycastHit_t1056001966& unmarshaled, RaycastHit_t1056001966_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Collider_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Collider' of type 'RaycastHit': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Collider_5Exception,NULL);
}
extern "C" void RaycastHit_t1056001966_marshal_pinvoke_back(const RaycastHit_t1056001966_marshaled_pinvoke& marshaled, RaycastHit_t1056001966& unmarshaled)
{
	Exception_t* ___m_Collider_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Collider' of type 'RaycastHit': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Collider_5Exception,NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.RaycastHit
extern "C" void RaycastHit_t1056001966_marshal_pinvoke_cleanup(RaycastHit_t1056001966_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.RaycastHit
extern "C" void RaycastHit_t1056001966_marshal_com(const RaycastHit_t1056001966& unmarshaled, RaycastHit_t1056001966_marshaled_com& marshaled)
{
	Exception_t* ___m_Collider_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Collider' of type 'RaycastHit': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Collider_5Exception,NULL);
}
extern "C" void RaycastHit_t1056001966_marshal_com_back(const RaycastHit_t1056001966_marshaled_com& marshaled, RaycastHit_t1056001966& unmarshaled)
{
	Exception_t* ___m_Collider_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Collider' of type 'RaycastHit': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Collider_5Exception,NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.RaycastHit
extern "C" void RaycastHit_t1056001966_marshal_com_cleanup(RaycastHit_t1056001966_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.RaycastHit::CalculateRaycastTexCoord(UnityEngine.Vector2&,UnityEngine.Collider,UnityEngine.Vector2,UnityEngine.Vector3,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void RaycastHit_CalculateRaycastTexCoord_m1747810766 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523 * ___output0, Collider_t1773347010 * ___col1, Vector2_t2156229523  ___uv2, Vector3_t3722313464  ___point3, int32_t ___face4, int32_t ___index5, const RuntimeMethod* method)
{
	{
		Vector2_t2156229523 * L_0 = ___output0;
		Collider_t1773347010 * L_1 = ___col1;
		int32_t L_2 = ___face4;
		int32_t L_3 = ___index5;
		RaycastHit_INTERNAL_CALL_CalculateRaycastTexCoord_m2536838559(NULL /*static, unused*/, L_0, L_1, (&___uv2), (&___point3), L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RaycastHit::INTERNAL_CALL_CalculateRaycastTexCoord(UnityEngine.Vector2&,UnityEngine.Collider,UnityEngine.Vector2&,UnityEngine.Vector3&,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void RaycastHit_INTERNAL_CALL_CalculateRaycastTexCoord_m2536838559 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523 * ___output0, Collider_t1773347010 * ___col1, Vector2_t2156229523 * ___uv2, Vector3_t3722313464 * ___point3, int32_t ___face4, int32_t ___index5, const RuntimeMethod* method)
{
	typedef void (*RaycastHit_INTERNAL_CALL_CalculateRaycastTexCoord_m2536838559_ftn) (Vector2_t2156229523 *, Collider_t1773347010 *, Vector2_t2156229523 *, Vector3_t3722313464 *, int32_t, int32_t);
	static RaycastHit_INTERNAL_CALL_CalculateRaycastTexCoord_m2536838559_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RaycastHit_INTERNAL_CALL_CalculateRaycastTexCoord_m2536838559_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RaycastHit::INTERNAL_CALL_CalculateRaycastTexCoord(UnityEngine.Vector2&,UnityEngine.Collider,UnityEngine.Vector2&,UnityEngine.Vector3&,System.Int32,System.Int32)");
	_il2cpp_icall_func(___output0, ___col1, ___uv2, ___point3, ___face4, ___index5);
}
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  RaycastHit_get_point_m2236647085 (RaycastHit_t1056001966 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Vector3_t3722313464  L_0 = __this->get_m_Point_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Vector3_t3722313464  L_1 = V_0;
		return L_1;
	}
}
extern "C"  Vector3_t3722313464  RaycastHit_get_point_m2236647085_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	RaycastHit_t1056001966 * _thisAdjusted = reinterpret_cast<RaycastHit_t1056001966 *>(__this + 1);
	return RaycastHit_get_point_m2236647085(_thisAdjusted, method);
}
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  RaycastHit_get_normal_m1232181746 (RaycastHit_t1056001966 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Vector3_t3722313464  L_0 = __this->get_m_Normal_1();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Vector3_t3722313464  L_1 = V_0;
		return L_1;
	}
}
extern "C"  Vector3_t3722313464  RaycastHit_get_normal_m1232181746_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	RaycastHit_t1056001966 * _thisAdjusted = reinterpret_cast<RaycastHit_t1056001966 *>(__this + 1);
	return RaycastHit_get_normal_m1232181746(_thisAdjusted, method);
}
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_barycentricCoordinate()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  RaycastHit_get_barycentricCoordinate_m124082963 (RaycastHit_t1056001966 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Vector2_t2156229523 * L_0 = __this->get_address_of_m_UV_4();
		float L_1 = L_0->get_y_1();
		Vector2_t2156229523 * L_2 = __this->get_address_of_m_UV_4();
		float L_3 = L_2->get_x_0();
		Vector2_t2156229523 * L_4 = __this->get_address_of_m_UV_4();
		float L_5 = L_4->get_x_0();
		Vector2_t2156229523 * L_6 = __this->get_address_of_m_UV_4();
		float L_7 = L_6->get_y_1();
		Vector3_t3722313464  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Vector3__ctor_m3353183577((&L_8), ((float)il2cpp_codegen_subtract((float)(1.0f), (float)((float)il2cpp_codegen_add((float)L_1, (float)L_3)))), L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_003f;
	}

IL_003f:
	{
		Vector3_t3722313464  L_9 = V_0;
		return L_9;
	}
}
extern "C"  Vector3_t3722313464  RaycastHit_get_barycentricCoordinate_m124082963_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	RaycastHit_t1056001966 * _thisAdjusted = reinterpret_cast<RaycastHit_t1056001966 *>(__this + 1);
	return RaycastHit_get_barycentricCoordinate_m124082963(_thisAdjusted, method);
}
// System.Single UnityEngine.RaycastHit::get_distance()
extern "C" IL2CPP_METHOD_ATTR float RaycastHit_get_distance_m3727327466 (RaycastHit_t1056001966 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_Distance_3();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
		return L_1;
	}
}
extern "C"  float RaycastHit_get_distance_m3727327466_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	RaycastHit_t1056001966 * _thisAdjusted = reinterpret_cast<RaycastHit_t1056001966 *>(__this + 1);
	return RaycastHit_get_distance_m3727327466(_thisAdjusted, method);
}
// System.Int32 UnityEngine.RaycastHit::get_triangleIndex()
extern "C" IL2CPP_METHOD_ATTR int32_t RaycastHit_get_triangleIndex_m1297388791 (RaycastHit_t1056001966 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_FaceID_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
extern "C"  int32_t RaycastHit_get_triangleIndex_m1297388791_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	RaycastHit_t1056001966 * _thisAdjusted = reinterpret_cast<RaycastHit_t1056001966 *>(__this + 1);
	return RaycastHit_get_triangleIndex_m1297388791(_thisAdjusted, method);
}
// UnityEngine.Vector2 UnityEngine.RaycastHit::get_textureCoord()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  RaycastHit_get_textureCoord_m3787807740 (RaycastHit_t1056001966 * __this, const RuntimeMethod* method)
{
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Collider_t1773347010 * L_0 = RaycastHit_get_collider_m1464180279(__this, /*hidden argument*/NULL);
		Vector2_t2156229523  L_1 = __this->get_m_UV_4();
		Vector3_t3722313464  L_2 = __this->get_m_Point_0();
		int32_t L_3 = __this->get_m_FaceID_2();
		RaycastHit_CalculateRaycastTexCoord_m1747810766(NULL /*static, unused*/, (&V_0), L_0, L_1, L_2, L_3, 0, /*hidden argument*/NULL);
		Vector2_t2156229523  L_4 = V_0;
		V_1 = L_4;
		goto IL_0028;
	}

IL_0028:
	{
		Vector2_t2156229523  L_5 = V_1;
		return L_5;
	}
}
extern "C"  Vector2_t2156229523  RaycastHit_get_textureCoord_m3787807740_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	RaycastHit_t1056001966 * _thisAdjusted = reinterpret_cast<RaycastHit_t1056001966 *>(__this + 1);
	return RaycastHit_get_textureCoord_m3787807740(_thisAdjusted, method);
}
// UnityEngine.Vector2 UnityEngine.RaycastHit::get_textureCoord2()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  RaycastHit_get_textureCoord2_m924018133 (RaycastHit_t1056001966 * __this, const RuntimeMethod* method)
{
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Collider_t1773347010 * L_0 = RaycastHit_get_collider_m1464180279(__this, /*hidden argument*/NULL);
		Vector2_t2156229523  L_1 = __this->get_m_UV_4();
		Vector3_t3722313464  L_2 = __this->get_m_Point_0();
		int32_t L_3 = __this->get_m_FaceID_2();
		RaycastHit_CalculateRaycastTexCoord_m1747810766(NULL /*static, unused*/, (&V_0), L_0, L_1, L_2, L_3, 1, /*hidden argument*/NULL);
		Vector2_t2156229523  L_4 = V_0;
		V_1 = L_4;
		goto IL_0028;
	}

IL_0028:
	{
		Vector2_t2156229523  L_5 = V_1;
		return L_5;
	}
}
extern "C"  Vector2_t2156229523  RaycastHit_get_textureCoord2_m924018133_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	RaycastHit_t1056001966 * _thisAdjusted = reinterpret_cast<RaycastHit_t1056001966 *>(__this + 1);
	return RaycastHit_get_textureCoord2_m924018133(_thisAdjusted, method);
}
// UnityEngine.Vector2 UnityEngine.RaycastHit::get_textureCoord1()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  RaycastHit_get_textureCoord1_m2490102074 (RaycastHit_t1056001966 * __this, const RuntimeMethod* method)
{
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Collider_t1773347010 * L_0 = RaycastHit_get_collider_m1464180279(__this, /*hidden argument*/NULL);
		Vector2_t2156229523  L_1 = __this->get_m_UV_4();
		Vector3_t3722313464  L_2 = __this->get_m_Point_0();
		int32_t L_3 = __this->get_m_FaceID_2();
		RaycastHit_CalculateRaycastTexCoord_m1747810766(NULL /*static, unused*/, (&V_0), L_0, L_1, L_2, L_3, 1, /*hidden argument*/NULL);
		Vector2_t2156229523  L_4 = V_0;
		V_1 = L_4;
		goto IL_0028;
	}

IL_0028:
	{
		Vector2_t2156229523  L_5 = V_1;
		return L_5;
	}
}
extern "C"  Vector2_t2156229523  RaycastHit_get_textureCoord1_m2490102074_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	RaycastHit_t1056001966 * _thisAdjusted = reinterpret_cast<RaycastHit_t1056001966 *>(__this + 1);
	return RaycastHit_get_textureCoord1_m2490102074(_thisAdjusted, method);
}
// UnityEngine.Vector2 UnityEngine.RaycastHit::get_lightmapCoord()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  RaycastHit_get_lightmapCoord_m3586439682 (RaycastHit_t1056001966 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RaycastHit_get_lightmapCoord_m3586439682_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector4_t3319028937  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector2_t2156229523  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		Collider_t1773347010 * L_0 = RaycastHit_get_collider_m1464180279(__this, /*hidden argument*/NULL);
		Vector2_t2156229523  L_1 = __this->get_m_UV_4();
		Vector3_t3722313464  L_2 = __this->get_m_Point_0();
		int32_t L_3 = __this->get_m_FaceID_2();
		RaycastHit_CalculateRaycastTexCoord_m1747810766(NULL /*static, unused*/, (&V_0), L_0, L_1, L_2, L_3, 1, /*hidden argument*/NULL);
		Collider_t1773347010 * L_4 = RaycastHit_get_collider_m1464180279(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Renderer_t2627027031 * L_5 = Component_GetComponent_TisRenderer_t2627027031_m3466210452(L_4, /*hidden argument*/Component_GetComponent_TisRenderer_t2627027031_m3466210452_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_5, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0086;
		}
	}
	{
		Collider_t1773347010 * L_7 = RaycastHit_get_collider_m1464180279(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Renderer_t2627027031 * L_8 = Component_GetComponent_TisRenderer_t2627027031_m3466210452(L_7, /*hidden argument*/Component_GetComponent_TisRenderer_t2627027031_m3466210452_RuntimeMethod_var);
		NullCheck(L_8);
		Vector4_t3319028937  L_9 = Renderer_get_lightmapScaleOffset_m804150199(L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		float L_10 = (&V_0)->get_x_0();
		float L_11 = (&V_1)->get_x_1();
		float L_12 = (&V_1)->get_z_3();
		(&V_0)->set_x_0(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_10, (float)L_11)), (float)L_12)));
		float L_13 = (&V_0)->get_y_1();
		float L_14 = (&V_1)->get_y_2();
		float L_15 = (&V_1)->get_w_4();
		(&V_0)->set_y_1(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_13, (float)L_14)), (float)L_15)));
	}

IL_0086:
	{
		Vector2_t2156229523  L_16 = V_0;
		V_2 = L_16;
		goto IL_008d;
	}

IL_008d:
	{
		Vector2_t2156229523  L_17 = V_2;
		return L_17;
	}
}
extern "C"  Vector2_t2156229523  RaycastHit_get_lightmapCoord_m3586439682_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	RaycastHit_t1056001966 * _thisAdjusted = reinterpret_cast<RaycastHit_t1056001966 *>(__this + 1);
	return RaycastHit_get_lightmapCoord_m3586439682(_thisAdjusted, method);
}
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
extern "C" IL2CPP_METHOD_ATTR Collider_t1773347010 * RaycastHit_get_collider_m1464180279 (RaycastHit_t1056001966 * __this, const RuntimeMethod* method)
{
	Collider_t1773347010 * V_0 = NULL;
	{
		Collider_t1773347010 * L_0 = __this->get_m_Collider_5();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Collider_t1773347010 * L_1 = V_0;
		return L_1;
	}
}
extern "C"  Collider_t1773347010 * RaycastHit_get_collider_m1464180279_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	RaycastHit_t1056001966 * _thisAdjusted = reinterpret_cast<RaycastHit_t1056001966 *>(__this + 1);
	return RaycastHit_get_collider_m1464180279(_thisAdjusted, method);
}
// UnityEngine.Rigidbody UnityEngine.RaycastHit::get_rigidbody()
extern "C" IL2CPP_METHOD_ATTR Rigidbody_t3916780224 * RaycastHit_get_rigidbody_m2320267866 (RaycastHit_t1056001966 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RaycastHit_get_rigidbody_m2320267866_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Rigidbody_t3916780224 * V_0 = NULL;
	Rigidbody_t3916780224 * G_B3_0 = NULL;
	{
		Collider_t1773347010 * L_0 = RaycastHit_get_collider_m1464180279(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		Collider_t1773347010 * L_2 = RaycastHit_get_collider_m1464180279(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Rigidbody_t3916780224 * L_3 = Collider_get_attachedRigidbody_m135494519(L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = ((Rigidbody_t3916780224 *)(NULL));
	}

IL_0023:
	{
		V_0 = G_B3_0;
		goto IL_0029;
	}

IL_0029:
	{
		Rigidbody_t3916780224 * L_4 = V_0;
		return L_4;
	}
}
extern "C"  Rigidbody_t3916780224 * RaycastHit_get_rigidbody_m2320267866_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	RaycastHit_t1056001966 * _thisAdjusted = reinterpret_cast<RaycastHit_t1056001966 *>(__this + 1);
	return RaycastHit_get_rigidbody_m2320267866(_thisAdjusted, method);
}
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * RaycastHit_get_transform_m942054759 (RaycastHit_t1056001966 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RaycastHit_get_transform_m942054759_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Rigidbody_t3916780224 * V_0 = NULL;
	Transform_t3600365921 * V_1 = NULL;
	{
		Rigidbody_t3916780224 * L_0 = RaycastHit_get_rigidbody_m2320267866(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Rigidbody_t3916780224 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		Rigidbody_t3916780224 * L_3 = V_0;
		NullCheck(L_3);
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_0049;
	}

IL_0020:
	{
		Collider_t1773347010 * L_5 = RaycastHit_get_collider_m1464180279(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_5, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		Collider_t1773347010 * L_7 = RaycastHit_get_collider_m1464180279(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_t3600365921 * L_8 = Component_get_transform_m3162698980(L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		goto IL_0049;
	}

IL_0042:
	{
		V_1 = (Transform_t3600365921 *)NULL;
		goto IL_0049;
	}

IL_0049:
	{
		Transform_t3600365921 * L_9 = V_1;
		return L_9;
	}
}
extern "C"  Transform_t3600365921 * RaycastHit_get_transform_m942054759_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	RaycastHit_t1056001966 * _thisAdjusted = reinterpret_cast<RaycastHit_t1056001966 *>(__this + 1);
	return RaycastHit_get_transform_m942054759(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rigidbody::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Rigidbody__ctor_m1806995817 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method)
{
	{
		Component__ctor_m1928064382(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Rigidbody_get_velocity_m2993632669 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Rigidbody_INTERNAL_get_velocity_m2480891890(__this, (&V_0), /*hidden argument*/NULL);
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
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_m2899403247 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	{
		Rigidbody_INTERNAL_set_velocity_m931742966(__this, (&___value0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::INTERNAL_get_velocity(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_get_velocity_m2480891890 (Rigidbody_t3916780224 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_INTERNAL_get_velocity_m2480891890_ftn) (Rigidbody_t3916780224 *, Vector3_t3722313464 *);
	static Rigidbody_INTERNAL_get_velocity_m2480891890_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_get_velocity_m2480891890_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_get_velocity(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Rigidbody::INTERNAL_set_velocity(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_set_velocity_m931742966 (Rigidbody_t3916780224 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_INTERNAL_set_velocity_m931742966_ftn) (Rigidbody_t3916780224 *, Vector3_t3722313464 *);
	static Rigidbody_INTERNAL_set_velocity_m931742966_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_set_velocity_m931742966_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_set_velocity(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_angularVelocity()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Rigidbody_get_angularVelocity_m191123884 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Rigidbody_INTERNAL_get_angularVelocity_m526824782(__this, (&V_0), /*hidden argument*/NULL);
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
// System.Void UnityEngine.Rigidbody::set_angularVelocity(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_angularVelocity_m4254006699 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	{
		Rigidbody_INTERNAL_set_angularVelocity_m4188482450(__this, (&___value0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::INTERNAL_get_angularVelocity(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_get_angularVelocity_m526824782 (Rigidbody_t3916780224 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_INTERNAL_get_angularVelocity_m526824782_ftn) (Rigidbody_t3916780224 *, Vector3_t3722313464 *);
	static Rigidbody_INTERNAL_get_angularVelocity_m526824782_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_get_angularVelocity_m526824782_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_get_angularVelocity(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Rigidbody::INTERNAL_set_angularVelocity(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_set_angularVelocity_m4188482450 (Rigidbody_t3916780224 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_INTERNAL_set_angularVelocity_m4188482450_ftn) (Rigidbody_t3916780224 *, Vector3_t3722313464 *);
	static Rigidbody_INTERNAL_set_angularVelocity_m4188482450_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_set_angularVelocity_m4188482450_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_set_angularVelocity(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.Rigidbody::get_drag()
extern "C" IL2CPP_METHOD_ATTR float Rigidbody_get_drag_m3991710090 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method)
{
	typedef float (*Rigidbody_get_drag_m3991710090_ftn) (Rigidbody_t3916780224 *);
	static Rigidbody_get_drag_m3991710090_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_get_drag_m3991710090_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::get_drag()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Rigidbody::set_drag(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_drag_m2933262323 (Rigidbody_t3916780224 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_set_drag_m2933262323_ftn) (Rigidbody_t3916780224 *, float);
	static Rigidbody_set_drag_m2933262323_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_set_drag_m2933262323_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::set_drag(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.Rigidbody::get_angularDrag()
extern "C" IL2CPP_METHOD_ATTR float Rigidbody_get_angularDrag_m1943636787 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method)
{
	typedef float (*Rigidbody_get_angularDrag_m1943636787_ftn) (Rigidbody_t3916780224 *);
	static Rigidbody_get_angularDrag_m1943636787_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_get_angularDrag_m1943636787_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::get_angularDrag()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Rigidbody::set_angularDrag(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_angularDrag_m3497419500 (Rigidbody_t3916780224 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_set_angularDrag_m3497419500_ftn) (Rigidbody_t3916780224 *, float);
	static Rigidbody_set_angularDrag_m3497419500_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_set_angularDrag_m3497419500_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::set_angularDrag(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.Rigidbody::get_mass()
extern "C" IL2CPP_METHOD_ATTR float Rigidbody_get_mass_m1622028245 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method)
{
	typedef float (*Rigidbody_get_mass_m1622028245_ftn) (Rigidbody_t3916780224 *);
	static Rigidbody_get_mass_m1622028245_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_get_mass_m1622028245_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::get_mass()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Rigidbody::set_mass(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_mass_m978346690 (Rigidbody_t3916780224 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_set_mass_m978346690_ftn) (Rigidbody_t3916780224 *, float);
	static Rigidbody_set_mass_m978346690_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_set_mass_m978346690_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::set_mass(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Rigidbody::SetDensity(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_SetDensity_m547895161 (Rigidbody_t3916780224 * __this, float ___density0, const RuntimeMethod* method)
{
	{
		float L_0 = ___density0;
		Rigidbody_INTERNAL_CALL_SetDensity_m1959673140(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_SetDensity(UnityEngine.Rigidbody,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_CALL_SetDensity_m1959673140 (RuntimeObject * __this /* static, unused */, Rigidbody_t3916780224 * ___self0, float ___density1, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_INTERNAL_CALL_SetDensity_m1959673140_ftn) (Rigidbody_t3916780224 *, float);
	static Rigidbody_INTERNAL_CALL_SetDensity_m1959673140_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_CALL_SetDensity_m1959673140_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_CALL_SetDensity(UnityEngine.Rigidbody,System.Single)");
	_il2cpp_icall_func(___self0, ___density1);
}
// System.Boolean UnityEngine.Rigidbody::get_useGravity()
extern "C" IL2CPP_METHOD_ATTR bool Rigidbody_get_useGravity_m649758196 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method)
{
	typedef bool (*Rigidbody_get_useGravity_m649758196_ftn) (Rigidbody_t3916780224 *);
	static Rigidbody_get_useGravity_m649758196_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_get_useGravity_m649758196_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::get_useGravity()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Rigidbody::set_useGravity(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_useGravity_m1752110328 (Rigidbody_t3916780224 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_set_useGravity_m1752110328_ftn) (Rigidbody_t3916780224 *, bool);
	static Rigidbody_set_useGravity_m1752110328_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_set_useGravity_m1752110328_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::set_useGravity(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.Rigidbody::get_maxDepenetrationVelocity()
extern "C" IL2CPP_METHOD_ATTR float Rigidbody_get_maxDepenetrationVelocity_m1811627566 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method)
{
	typedef float (*Rigidbody_get_maxDepenetrationVelocity_m1811627566_ftn) (Rigidbody_t3916780224 *);
	static Rigidbody_get_maxDepenetrationVelocity_m1811627566_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_get_maxDepenetrationVelocity_m1811627566_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::get_maxDepenetrationVelocity()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Rigidbody::set_maxDepenetrationVelocity(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_maxDepenetrationVelocity_m2504395879 (Rigidbody_t3916780224 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_set_maxDepenetrationVelocity_m2504395879_ftn) (Rigidbody_t3916780224 *, float);
	static Rigidbody_set_maxDepenetrationVelocity_m2504395879_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_set_maxDepenetrationVelocity_m2504395879_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::set_maxDepenetrationVelocity(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.Rigidbody::get_isKinematic()
extern "C" IL2CPP_METHOD_ATTR bool Rigidbody_get_isKinematic_m403342600 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method)
{
	typedef bool (*Rigidbody_get_isKinematic_m403342600_ftn) (Rigidbody_t3916780224 *);
	static Rigidbody_get_isKinematic_m403342600_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_get_isKinematic_m403342600_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::get_isKinematic()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_isKinematic_m1802205683 (Rigidbody_t3916780224 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_set_isKinematic_m1802205683_ftn) (Rigidbody_t3916780224 *, bool);
	static Rigidbody_set_isKinematic_m1802205683_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_set_isKinematic_m1802205683_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::set_isKinematic(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.Rigidbody::get_freezeRotation()
extern "C" IL2CPP_METHOD_ATTR bool Rigidbody_get_freezeRotation_m1684957900 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method)
{
	typedef bool (*Rigidbody_get_freezeRotation_m1684957900_ftn) (Rigidbody_t3916780224 *);
	static Rigidbody_get_freezeRotation_m1684957900_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_get_freezeRotation_m1684957900_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::get_freezeRotation()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Rigidbody::set_freezeRotation(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_freezeRotation_m754206839 (Rigidbody_t3916780224 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_set_freezeRotation_m754206839_ftn) (Rigidbody_t3916780224 *, bool);
	static Rigidbody_set_freezeRotation_m754206839_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_set_freezeRotation_m754206839_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::set_freezeRotation(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.RigidbodyConstraints UnityEngine.Rigidbody::get_constraints()
extern "C" IL2CPP_METHOD_ATTR int32_t Rigidbody_get_constraints_m3735968085 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*Rigidbody_get_constraints_m3735968085_ftn) (Rigidbody_t3916780224 *);
	static Rigidbody_get_constraints_m3735968085_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_get_constraints_m3735968085_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::get_constraints()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Rigidbody::set_constraints(UnityEngine.RigidbodyConstraints)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_constraints_m2908117271 (Rigidbody_t3916780224 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_set_constraints_m2908117271_ftn) (Rigidbody_t3916780224 *, int32_t);
	static Rigidbody_set_constraints_m2908117271_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_set_constraints_m2908117271_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::set_constraints(UnityEngine.RigidbodyConstraints)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.CollisionDetectionMode UnityEngine.Rigidbody::get_collisionDetectionMode()
extern "C" IL2CPP_METHOD_ATTR int32_t Rigidbody_get_collisionDetectionMode_m564247622 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*Rigidbody_get_collisionDetectionMode_m564247622_ftn) (Rigidbody_t3916780224 *);
	static Rigidbody_get_collisionDetectionMode_m564247622_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_get_collisionDetectionMode_m564247622_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::get_collisionDetectionMode()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Rigidbody::set_collisionDetectionMode(UnityEngine.CollisionDetectionMode)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_collisionDetectionMode_m777008546 (Rigidbody_t3916780224 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_set_collisionDetectionMode_m777008546_ftn) (Rigidbody_t3916780224 *, int32_t);
	static Rigidbody_set_collisionDetectionMode_m777008546_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_set_collisionDetectionMode_m777008546_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::set_collisionDetectionMode(UnityEngine.CollisionDetectionMode)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m1059068722 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  ___force0, int32_t ___mode1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___mode1;
		Rigidbody_INTERNAL_CALL_AddForce_m2553500652(NULL /*static, unused*/, __this, (&___force0), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m3395934484 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  ___force0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		int32_t L_0 = V_0;
		Rigidbody_INTERNAL_CALL_AddForce_m2553500652(NULL /*static, unused*/, __this, (&___force0), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_CALL_AddForce_m2553500652 (RuntimeObject * __this /* static, unused */, Rigidbody_t3916780224 * ___self0, Vector3_t3722313464 * ___force1, int32_t ___mode2, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_INTERNAL_CALL_AddForce_m2553500652_ftn) (Rigidbody_t3916780224 *, Vector3_t3722313464 *, int32_t);
	static Rigidbody_INTERNAL_CALL_AddForce_m2553500652_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_CALL_AddForce_m2553500652_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)");
	_il2cpp_icall_func(___self0, ___force1, ___mode2);
}
// System.Void UnityEngine.Rigidbody::AddForce(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m1409302596 (Rigidbody_t3916780224 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		int32_t L_3 = V_0;
		Rigidbody_AddForce_m467379572(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::AddForce(System.Single,System.Single,System.Single,UnityEngine.ForceMode)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m467379572 (Rigidbody_t3916780224 * __this, float ___x0, float ___y1, float ___z2, int32_t ___mode3, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t3722313464  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector3__ctor_m3353183577((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		int32_t L_4 = ___mode3;
		Rigidbody_AddForce_m1059068722(__this, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::AddRelativeForce(UnityEngine.Vector3,UnityEngine.ForceMode)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_AddRelativeForce_m977299210 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  ___force0, int32_t ___mode1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___mode1;
		Rigidbody_INTERNAL_CALL_AddRelativeForce_m4052129533(NULL /*static, unused*/, __this, (&___force0), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::AddRelativeForce(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_AddRelativeForce_m438673559 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  ___force0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		int32_t L_0 = V_0;
		Rigidbody_INTERNAL_CALL_AddRelativeForce_m4052129533(NULL /*static, unused*/, __this, (&___force0), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddRelativeForce(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_CALL_AddRelativeForce_m4052129533 (RuntimeObject * __this /* static, unused */, Rigidbody_t3916780224 * ___self0, Vector3_t3722313464 * ___force1, int32_t ___mode2, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_INTERNAL_CALL_AddRelativeForce_m4052129533_ftn) (Rigidbody_t3916780224 *, Vector3_t3722313464 *, int32_t);
	static Rigidbody_INTERNAL_CALL_AddRelativeForce_m4052129533_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_CALL_AddRelativeForce_m4052129533_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_CALL_AddRelativeForce(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)");
	_il2cpp_icall_func(___self0, ___force1, ___mode2);
}
// System.Void UnityEngine.Rigidbody::AddRelativeForce(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_AddRelativeForce_m3135953458 (Rigidbody_t3916780224 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		int32_t L_3 = V_0;
		Rigidbody_AddRelativeForce_m1436908387(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::AddRelativeForce(System.Single,System.Single,System.Single,UnityEngine.ForceMode)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_AddRelativeForce_m1436908387 (Rigidbody_t3916780224 * __this, float ___x0, float ___y1, float ___z2, int32_t ___mode3, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t3722313464  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector3__ctor_m3353183577((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		int32_t L_4 = ___mode3;
		Rigidbody_AddRelativeForce_m977299210(__this, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::AddTorque(UnityEngine.Vector3,UnityEngine.ForceMode)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_AddTorque_m1107708961 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  ___torque0, int32_t ___mode1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___mode1;
		Rigidbody_INTERNAL_CALL_AddTorque_m31996881(NULL /*static, unused*/, __this, (&___torque0), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::AddTorque(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_AddTorque_m3171849690 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  ___torque0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		int32_t L_0 = V_0;
		Rigidbody_INTERNAL_CALL_AddTorque_m31996881(NULL /*static, unused*/, __this, (&___torque0), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddTorque(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_CALL_AddTorque_m31996881 (RuntimeObject * __this /* static, unused */, Rigidbody_t3916780224 * ___self0, Vector3_t3722313464 * ___torque1, int32_t ___mode2, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_INTERNAL_CALL_AddTorque_m31996881_ftn) (Rigidbody_t3916780224 *, Vector3_t3722313464 *, int32_t);
	static Rigidbody_INTERNAL_CALL_AddTorque_m31996881_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_CALL_AddTorque_m31996881_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_CALL_AddTorque(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)");
	_il2cpp_icall_func(___self0, ___torque1, ___mode2);
}
// System.Void UnityEngine.Rigidbody::AddTorque(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_AddTorque_m951805261 (Rigidbody_t3916780224 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		int32_t L_3 = V_0;
		Rigidbody_AddTorque_m3116574654(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::AddTorque(System.Single,System.Single,System.Single,UnityEngine.ForceMode)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_AddTorque_m3116574654 (Rigidbody_t3916780224 * __this, float ___x0, float ___y1, float ___z2, int32_t ___mode3, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t3722313464  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector3__ctor_m3353183577((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		int32_t L_4 = ___mode3;
		Rigidbody_AddTorque_m1107708961(__this, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::AddRelativeTorque(UnityEngine.Vector3,UnityEngine.ForceMode)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_AddRelativeTorque_m1633500454 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  ___torque0, int32_t ___mode1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___mode1;
		Rigidbody_INTERNAL_CALL_AddRelativeTorque_m3987406995(NULL /*static, unused*/, __this, (&___torque0), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::AddRelativeTorque(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_AddRelativeTorque_m3335459854 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  ___torque0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		int32_t L_0 = V_0;
		Rigidbody_INTERNAL_CALL_AddRelativeTorque_m3987406995(NULL /*static, unused*/, __this, (&___torque0), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddRelativeTorque(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_CALL_AddRelativeTorque_m3987406995 (RuntimeObject * __this /* static, unused */, Rigidbody_t3916780224 * ___self0, Vector3_t3722313464 * ___torque1, int32_t ___mode2, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_INTERNAL_CALL_AddRelativeTorque_m3987406995_ftn) (Rigidbody_t3916780224 *, Vector3_t3722313464 *, int32_t);
	static Rigidbody_INTERNAL_CALL_AddRelativeTorque_m3987406995_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_CALL_AddRelativeTorque_m3987406995_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_CALL_AddRelativeTorque(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)");
	_il2cpp_icall_func(___self0, ___torque1, ___mode2);
}
// System.Void UnityEngine.Rigidbody::AddRelativeTorque(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_AddRelativeTorque_m1991642446 (Rigidbody_t3916780224 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		int32_t L_3 = V_0;
		Rigidbody_AddRelativeTorque_m752720011(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::AddRelativeTorque(System.Single,System.Single,System.Single,UnityEngine.ForceMode)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_AddRelativeTorque_m752720011 (Rigidbody_t3916780224 * __this, float ___x0, float ___y1, float ___z2, int32_t ___mode3, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t3722313464  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector3__ctor_m3353183577((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		int32_t L_4 = ___mode3;
		Rigidbody_AddRelativeTorque_m1633500454(__this, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::AddForceAtPosition(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.ForceMode)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_AddForceAtPosition_m4182376850 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  ___force0, Vector3_t3722313464  ___position1, int32_t ___mode2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___mode2;
		Rigidbody_INTERNAL_CALL_AddForceAtPosition_m3698140343(NULL /*static, unused*/, __this, (&___force0), (&___position1), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::AddForceAtPosition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_AddForceAtPosition_m2168455454 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  ___force0, Vector3_t3722313464  ___position1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		int32_t L_0 = V_0;
		Rigidbody_INTERNAL_CALL_AddForceAtPosition_m3698140343(NULL /*static, unused*/, __this, (&___force0), (&___position1), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddForceAtPosition(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_CALL_AddForceAtPosition_m3698140343 (RuntimeObject * __this /* static, unused */, Rigidbody_t3916780224 * ___self0, Vector3_t3722313464 * ___force1, Vector3_t3722313464 * ___position2, int32_t ___mode3, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_INTERNAL_CALL_AddForceAtPosition_m3698140343_ftn) (Rigidbody_t3916780224 *, Vector3_t3722313464 *, Vector3_t3722313464 *, int32_t);
	static Rigidbody_INTERNAL_CALL_AddForceAtPosition_m3698140343_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_CALL_AddForceAtPosition_m3698140343_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_CALL_AddForceAtPosition(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.ForceMode)");
	_il2cpp_icall_func(___self0, ___force1, ___position2, ___mode3);
}
// System.Void UnityEngine.Rigidbody::AddExplosionForce(System.Single,UnityEngine.Vector3,System.Single,System.Single,UnityEngine.ForceMode)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_AddExplosionForce_m1698937293 (Rigidbody_t3916780224 * __this, float ___explosionForce0, Vector3_t3722313464  ___explosionPosition1, float ___explosionRadius2, float ___upwardsModifier3, int32_t ___mode4, const RuntimeMethod* method)
{
	{
		float L_0 = ___explosionForce0;
		float L_1 = ___explosionRadius2;
		float L_2 = ___upwardsModifier3;
		int32_t L_3 = ___mode4;
		Rigidbody_INTERNAL_CALL_AddExplosionForce_m1231761721(NULL /*static, unused*/, __this, L_0, (&___explosionPosition1), L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::AddExplosionForce(System.Single,UnityEngine.Vector3,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_AddExplosionForce_m2733836348 (Rigidbody_t3916780224 * __this, float ___explosionForce0, Vector3_t3722313464  ___explosionPosition1, float ___explosionRadius2, float ___upwardsModifier3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		float L_0 = ___explosionForce0;
		float L_1 = ___explosionRadius2;
		float L_2 = ___upwardsModifier3;
		int32_t L_3 = V_0;
		Rigidbody_INTERNAL_CALL_AddExplosionForce_m1231761721(NULL /*static, unused*/, __this, L_0, (&___explosionPosition1), L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::AddExplosionForce(System.Single,UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_AddExplosionForce_m1708149361 (Rigidbody_t3916780224 * __this, float ___explosionForce0, Vector3_t3722313464  ___explosionPosition1, float ___explosionRadius2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		V_0 = 0;
		V_1 = (0.0f);
		float L_0 = ___explosionForce0;
		float L_1 = ___explosionRadius2;
		float L_2 = V_1;
		int32_t L_3 = V_0;
		Rigidbody_INTERNAL_CALL_AddExplosionForce_m1231761721(NULL /*static, unused*/, __this, L_0, (&___explosionPosition1), L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddExplosionForce(UnityEngine.Rigidbody,System.Single,UnityEngine.Vector3&,System.Single,System.Single,UnityEngine.ForceMode)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_CALL_AddExplosionForce_m1231761721 (RuntimeObject * __this /* static, unused */, Rigidbody_t3916780224 * ___self0, float ___explosionForce1, Vector3_t3722313464 * ___explosionPosition2, float ___explosionRadius3, float ___upwardsModifier4, int32_t ___mode5, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_INTERNAL_CALL_AddExplosionForce_m1231761721_ftn) (Rigidbody_t3916780224 *, float, Vector3_t3722313464 *, float, float, int32_t);
	static Rigidbody_INTERNAL_CALL_AddExplosionForce_m1231761721_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_CALL_AddExplosionForce_m1231761721_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_CALL_AddExplosionForce(UnityEngine.Rigidbody,System.Single,UnityEngine.Vector3&,System.Single,System.Single,UnityEngine.ForceMode)");
	_il2cpp_icall_func(___self0, ___explosionForce1, ___explosionPosition2, ___explosionRadius3, ___upwardsModifier4, ___mode5);
}
// UnityEngine.Vector3 UnityEngine.Rigidbody::ClosestPointOnBounds(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Rigidbody_ClosestPointOnBounds_m335983185 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  ___position0, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Rigidbody_INTERNAL_CALL_ClosestPointOnBounds_m4274558386(NULL /*static, unused*/, __this, (&___position0), (&V_0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_0 = V_0;
		V_1 = L_0;
		goto IL_0012;
	}

IL_0012:
	{
		Vector3_t3722313464  L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_ClosestPointOnBounds(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_CALL_ClosestPointOnBounds_m4274558386 (RuntimeObject * __this /* static, unused */, Rigidbody_t3916780224 * ___self0, Vector3_t3722313464 * ___position1, Vector3_t3722313464 * ___value2, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_INTERNAL_CALL_ClosestPointOnBounds_m4274558386_ftn) (Rigidbody_t3916780224 *, Vector3_t3722313464 *, Vector3_t3722313464 *);
	static Rigidbody_INTERNAL_CALL_ClosestPointOnBounds_m4274558386_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_CALL_ClosestPointOnBounds_m4274558386_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_CALL_ClosestPointOnBounds(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(___self0, ___position1, ___value2);
}
// UnityEngine.Vector3 UnityEngine.Rigidbody::GetRelativePointVelocity(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Rigidbody_GetRelativePointVelocity_m3333656915 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  ___relativePoint0, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Rigidbody_INTERNAL_CALL_GetRelativePointVelocity_m2223003778(NULL /*static, unused*/, __this, (&___relativePoint0), (&V_0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_0 = V_0;
		V_1 = L_0;
		goto IL_0012;
	}

IL_0012:
	{
		Vector3_t3722313464  L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_GetRelativePointVelocity(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_CALL_GetRelativePointVelocity_m2223003778 (RuntimeObject * __this /* static, unused */, Rigidbody_t3916780224 * ___self0, Vector3_t3722313464 * ___relativePoint1, Vector3_t3722313464 * ___value2, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_INTERNAL_CALL_GetRelativePointVelocity_m2223003778_ftn) (Rigidbody_t3916780224 *, Vector3_t3722313464 *, Vector3_t3722313464 *);
	static Rigidbody_INTERNAL_CALL_GetRelativePointVelocity_m2223003778_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_CALL_GetRelativePointVelocity_m2223003778_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_CALL_GetRelativePointVelocity(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(___self0, ___relativePoint1, ___value2);
}
// UnityEngine.Vector3 UnityEngine.Rigidbody::GetPointVelocity(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Rigidbody_GetPointVelocity_m480821301 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  ___worldPoint0, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Rigidbody_INTERNAL_CALL_GetPointVelocity_m991047747(NULL /*static, unused*/, __this, (&___worldPoint0), (&V_0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_0 = V_0;
		V_1 = L_0;
		goto IL_0012;
	}

IL_0012:
	{
		Vector3_t3722313464  L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_GetPointVelocity(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_CALL_GetPointVelocity_m991047747 (RuntimeObject * __this /* static, unused */, Rigidbody_t3916780224 * ___self0, Vector3_t3722313464 * ___worldPoint1, Vector3_t3722313464 * ___value2, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_INTERNAL_CALL_GetPointVelocity_m991047747_ftn) (Rigidbody_t3916780224 *, Vector3_t3722313464 *, Vector3_t3722313464 *);
	static Rigidbody_INTERNAL_CALL_GetPointVelocity_m991047747_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_CALL_GetPointVelocity_m991047747_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_CALL_GetPointVelocity(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(___self0, ___worldPoint1, ___value2);
}
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_centerOfMass()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Rigidbody_get_centerOfMass_m1759321844 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Rigidbody_INTERNAL_get_centerOfMass_m3838716110(__this, (&V_0), /*hidden argument*/NULL);
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
// System.Void UnityEngine.Rigidbody::set_centerOfMass(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_centerOfMass_m1054164223 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	{
		Rigidbody_INTERNAL_set_centerOfMass_m1285151140(__this, (&___value0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::INTERNAL_get_centerOfMass(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_get_centerOfMass_m3838716110 (Rigidbody_t3916780224 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_INTERNAL_get_centerOfMass_m3838716110_ftn) (Rigidbody_t3916780224 *, Vector3_t3722313464 *);
	static Rigidbody_INTERNAL_get_centerOfMass_m3838716110_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_get_centerOfMass_m3838716110_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_get_centerOfMass(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Rigidbody::INTERNAL_set_centerOfMass(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_set_centerOfMass_m1285151140 (Rigidbody_t3916780224 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_INTERNAL_set_centerOfMass_m1285151140_ftn) (Rigidbody_t3916780224 *, Vector3_t3722313464 *);
	static Rigidbody_INTERNAL_set_centerOfMass_m1285151140_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_set_centerOfMass_m1285151140_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_set_centerOfMass(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_worldCenterOfMass()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Rigidbody_get_worldCenterOfMass_m2417026598 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Rigidbody_INTERNAL_get_worldCenterOfMass_m2988488591(__this, (&V_0), /*hidden argument*/NULL);
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
// System.Void UnityEngine.Rigidbody::INTERNAL_get_worldCenterOfMass(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_get_worldCenterOfMass_m2988488591 (Rigidbody_t3916780224 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_INTERNAL_get_worldCenterOfMass_m2988488591_ftn) (Rigidbody_t3916780224 *, Vector3_t3722313464 *);
	static Rigidbody_INTERNAL_get_worldCenterOfMass_m2988488591_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_get_worldCenterOfMass_m2988488591_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_get_worldCenterOfMass(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Quaternion UnityEngine.Rigidbody::get_inertiaTensorRotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Rigidbody_get_inertiaTensorRotation_m3465717535 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method)
{
	Quaternion_t2301928331  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Quaternion_t2301928331  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Rigidbody_INTERNAL_get_inertiaTensorRotation_m1397216749(__this, (&V_0), /*hidden argument*/NULL);
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
// System.Void UnityEngine.Rigidbody::set_inertiaTensorRotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_inertiaTensorRotation_m3111462687 (Rigidbody_t3916780224 * __this, Quaternion_t2301928331  ___value0, const RuntimeMethod* method)
{
	{
		Rigidbody_INTERNAL_set_inertiaTensorRotation_m2331194410(__this, (&___value0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::INTERNAL_get_inertiaTensorRotation(UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_get_inertiaTensorRotation_m1397216749 (Rigidbody_t3916780224 * __this, Quaternion_t2301928331 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_INTERNAL_get_inertiaTensorRotation_m1397216749_ftn) (Rigidbody_t3916780224 *, Quaternion_t2301928331 *);
	static Rigidbody_INTERNAL_get_inertiaTensorRotation_m1397216749_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_get_inertiaTensorRotation_m1397216749_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_get_inertiaTensorRotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Rigidbody::INTERNAL_set_inertiaTensorRotation(UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_set_inertiaTensorRotation_m2331194410 (Rigidbody_t3916780224 * __this, Quaternion_t2301928331 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_INTERNAL_set_inertiaTensorRotation_m2331194410_ftn) (Rigidbody_t3916780224 *, Quaternion_t2301928331 *);
	static Rigidbody_INTERNAL_set_inertiaTensorRotation_m2331194410_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_set_inertiaTensorRotation_m2331194410_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_set_inertiaTensorRotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_inertiaTensor()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Rigidbody_get_inertiaTensor_m997077509 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Rigidbody_INTERNAL_get_inertiaTensor_m2209525325(__this, (&V_0), /*hidden argument*/NULL);
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
// System.Void UnityEngine.Rigidbody::set_inertiaTensor(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_inertiaTensor_m3835769628 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	{
		Rigidbody_INTERNAL_set_inertiaTensor_m2213481644(__this, (&___value0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::INTERNAL_get_inertiaTensor(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_get_inertiaTensor_m2209525325 (Rigidbody_t3916780224 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_INTERNAL_get_inertiaTensor_m2209525325_ftn) (Rigidbody_t3916780224 *, Vector3_t3722313464 *);
	static Rigidbody_INTERNAL_get_inertiaTensor_m2209525325_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_get_inertiaTensor_m2209525325_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_get_inertiaTensor(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Rigidbody::INTERNAL_set_inertiaTensor(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_set_inertiaTensor_m2213481644 (Rigidbody_t3916780224 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_INTERNAL_set_inertiaTensor_m2213481644_ftn) (Rigidbody_t3916780224 *, Vector3_t3722313464 *);
	static Rigidbody_INTERNAL_set_inertiaTensor_m2213481644_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_set_inertiaTensor_m2213481644_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_set_inertiaTensor(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.Rigidbody::get_detectCollisions()
extern "C" IL2CPP_METHOD_ATTR bool Rigidbody_get_detectCollisions_m1183368152 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method)
{
	typedef bool (*Rigidbody_get_detectCollisions_m1183368152_ftn) (Rigidbody_t3916780224 *);
	static Rigidbody_get_detectCollisions_m1183368152_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_get_detectCollisions_m1183368152_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::get_detectCollisions()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Rigidbody::set_detectCollisions(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_detectCollisions_m2494724326 (Rigidbody_t3916780224 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_set_detectCollisions_m2494724326_ftn) (Rigidbody_t3916780224 *, bool);
	static Rigidbody_set_detectCollisions_m2494724326_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_set_detectCollisions_m2494724326_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::set_detectCollisions(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Rigidbody_get_position_m1712729619 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Rigidbody_INTERNAL_get_position_m772969920(__this, (&V_0), /*hidden argument*/NULL);
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
// System.Void UnityEngine.Rigidbody::set_position(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_position_m2293099797 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	{
		Rigidbody_INTERNAL_set_position_m1588012848(__this, (&___value0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::INTERNAL_get_position(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_get_position_m772969920 (Rigidbody_t3916780224 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_INTERNAL_get_position_m772969920_ftn) (Rigidbody_t3916780224 *, Vector3_t3722313464 *);
	static Rigidbody_INTERNAL_get_position_m772969920_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_get_position_m772969920_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_get_position(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Rigidbody::INTERNAL_set_position(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_set_position_m1588012848 (Rigidbody_t3916780224 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_INTERNAL_set_position_m1588012848_ftn) (Rigidbody_t3916780224 *, Vector3_t3722313464 *);
	static Rigidbody_INTERNAL_set_position_m1588012848_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_set_position_m1588012848_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_set_position(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Quaternion UnityEngine.Rigidbody::get_rotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Rigidbody_get_rotation_m3610554181 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method)
{
	Quaternion_t2301928331  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Quaternion_t2301928331  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Rigidbody_INTERNAL_get_rotation_m3216032154(__this, (&V_0), /*hidden argument*/NULL);
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
// System.Void UnityEngine.Rigidbody::set_rotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_rotation_m4187031548 (Rigidbody_t3916780224 * __this, Quaternion_t2301928331  ___value0, const RuntimeMethod* method)
{
	{
		Rigidbody_INTERNAL_set_rotation_m1777486382(__this, (&___value0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::INTERNAL_get_rotation(UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_get_rotation_m3216032154 (Rigidbody_t3916780224 * __this, Quaternion_t2301928331 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_INTERNAL_get_rotation_m3216032154_ftn) (Rigidbody_t3916780224 *, Quaternion_t2301928331 *);
	static Rigidbody_INTERNAL_get_rotation_m3216032154_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_get_rotation_m3216032154_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_get_rotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Rigidbody::INTERNAL_set_rotation(UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_set_rotation_m1777486382 (Rigidbody_t3916780224 * __this, Quaternion_t2301928331 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_INTERNAL_set_rotation_m1777486382_ftn) (Rigidbody_t3916780224 *, Quaternion_t2301928331 *);
	static Rigidbody_INTERNAL_set_rotation_m1777486382_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_set_rotation_m1777486382_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_set_rotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Rigidbody::MovePosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_MovePosition_m2109341474 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  ___position0, const RuntimeMethod* method)
{
	{
		Rigidbody_INTERNAL_CALL_MovePosition_m2846623079(NULL /*static, unused*/, __this, (&___position0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_MovePosition(UnityEngine.Rigidbody,UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_CALL_MovePosition_m2846623079 (RuntimeObject * __this /* static, unused */, Rigidbody_t3916780224 * ___self0, Vector3_t3722313464 * ___position1, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_INTERNAL_CALL_MovePosition_m2846623079_ftn) (Rigidbody_t3916780224 *, Vector3_t3722313464 *);
	static Rigidbody_INTERNAL_CALL_MovePosition_m2846623079_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_CALL_MovePosition_m2846623079_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_CALL_MovePosition(UnityEngine.Rigidbody,UnityEngine.Vector3&)");
	_il2cpp_icall_func(___self0, ___position1);
}
// System.Void UnityEngine.Rigidbody::MoveRotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_MoveRotation_m72717779 (Rigidbody_t3916780224 * __this, Quaternion_t2301928331  ___rot0, const RuntimeMethod* method)
{
	{
		Rigidbody_INTERNAL_CALL_MoveRotation_m39867991(NULL /*static, unused*/, __this, (&___rot0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_MoveRotation(UnityEngine.Rigidbody,UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_CALL_MoveRotation_m39867991 (RuntimeObject * __this /* static, unused */, Rigidbody_t3916780224 * ___self0, Quaternion_t2301928331 * ___rot1, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_INTERNAL_CALL_MoveRotation_m39867991_ftn) (Rigidbody_t3916780224 *, Quaternion_t2301928331 *);
	static Rigidbody_INTERNAL_CALL_MoveRotation_m39867991_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_CALL_MoveRotation_m39867991_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_CALL_MoveRotation(UnityEngine.Rigidbody,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(___self0, ___rot1);
}
// UnityEngine.RigidbodyInterpolation UnityEngine.Rigidbody::get_interpolation()
extern "C" IL2CPP_METHOD_ATTR int32_t Rigidbody_get_interpolation_m477913372 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*Rigidbody_get_interpolation_m477913372_ftn) (Rigidbody_t3916780224 *);
	static Rigidbody_get_interpolation_m477913372_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_get_interpolation_m477913372_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::get_interpolation()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Rigidbody::set_interpolation(UnityEngine.RigidbodyInterpolation)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_interpolation_m3956148200 (Rigidbody_t3916780224 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_set_interpolation_m3956148200_ftn) (Rigidbody_t3916780224 *, int32_t);
	static Rigidbody_set_interpolation_m3956148200_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_set_interpolation_m3956148200_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::set_interpolation(UnityEngine.RigidbodyInterpolation)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Rigidbody::Sleep()
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_Sleep_m1823108224 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method)
{
	{
		Rigidbody_INTERNAL_CALL_Sleep_m3694254522(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_Sleep(UnityEngine.Rigidbody)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_CALL_Sleep_m3694254522 (RuntimeObject * __this /* static, unused */, Rigidbody_t3916780224 * ___self0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_INTERNAL_CALL_Sleep_m3694254522_ftn) (Rigidbody_t3916780224 *);
	static Rigidbody_INTERNAL_CALL_Sleep_m3694254522_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_CALL_Sleep_m3694254522_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_CALL_Sleep(UnityEngine.Rigidbody)");
	_il2cpp_icall_func(___self0);
}
// System.Boolean UnityEngine.Rigidbody::IsSleeping()
extern "C" IL2CPP_METHOD_ATTR bool Rigidbody_IsSleeping_m3823601939 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = Rigidbody_INTERNAL_CALL_IsSleeping_m438853281(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.Rigidbody::INTERNAL_CALL_IsSleeping(UnityEngine.Rigidbody)
extern "C" IL2CPP_METHOD_ATTR bool Rigidbody_INTERNAL_CALL_IsSleeping_m438853281 (RuntimeObject * __this /* static, unused */, Rigidbody_t3916780224 * ___self0, const RuntimeMethod* method)
{
	typedef bool (*Rigidbody_INTERNAL_CALL_IsSleeping_m438853281_ftn) (Rigidbody_t3916780224 *);
	static Rigidbody_INTERNAL_CALL_IsSleeping_m438853281_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_CALL_IsSleeping_m438853281_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_CALL_IsSleeping(UnityEngine.Rigidbody)");
	bool retVal = _il2cpp_icall_func(___self0);
	return retVal;
}
// System.Void UnityEngine.Rigidbody::WakeUp()
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_WakeUp_m4083745205 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method)
{
	{
		Rigidbody_INTERNAL_CALL_WakeUp_m1769679126(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_WakeUp(UnityEngine.Rigidbody)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_CALL_WakeUp_m1769679126 (RuntimeObject * __this /* static, unused */, Rigidbody_t3916780224 * ___self0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_INTERNAL_CALL_WakeUp_m1769679126_ftn) (Rigidbody_t3916780224 *);
	static Rigidbody_INTERNAL_CALL_WakeUp_m1769679126_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_CALL_WakeUp_m1769679126_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_CALL_WakeUp(UnityEngine.Rigidbody)");
	_il2cpp_icall_func(___self0);
}
// System.Void UnityEngine.Rigidbody::ResetCenterOfMass()
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_ResetCenterOfMass_m2330324184 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method)
{
	{
		Rigidbody_INTERNAL_CALL_ResetCenterOfMass_m1260914393(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_ResetCenterOfMass(UnityEngine.Rigidbody)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_CALL_ResetCenterOfMass_m1260914393 (RuntimeObject * __this /* static, unused */, Rigidbody_t3916780224 * ___self0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_INTERNAL_CALL_ResetCenterOfMass_m1260914393_ftn) (Rigidbody_t3916780224 *);
	static Rigidbody_INTERNAL_CALL_ResetCenterOfMass_m1260914393_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_CALL_ResetCenterOfMass_m1260914393_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_CALL_ResetCenterOfMass(UnityEngine.Rigidbody)");
	_il2cpp_icall_func(___self0);
}
// System.Void UnityEngine.Rigidbody::ResetInertiaTensor()
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_ResetInertiaTensor_m3946959599 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method)
{
	{
		Rigidbody_INTERNAL_CALL_ResetInertiaTensor_m656135347(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_ResetInertiaTensor(UnityEngine.Rigidbody)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_INTERNAL_CALL_ResetInertiaTensor_m656135347 (RuntimeObject * __this /* static, unused */, Rigidbody_t3916780224 * ___self0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_INTERNAL_CALL_ResetInertiaTensor_m656135347_ftn) (Rigidbody_t3916780224 *);
	static Rigidbody_INTERNAL_CALL_ResetInertiaTensor_m656135347_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_CALL_ResetInertiaTensor_m656135347_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_CALL_ResetInertiaTensor(UnityEngine.Rigidbody)");
	_il2cpp_icall_func(___self0);
}
// System.Int32 UnityEngine.Rigidbody::get_solverIterations()
extern "C" IL2CPP_METHOD_ATTR int32_t Rigidbody_get_solverIterations_m1847684335 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*Rigidbody_get_solverIterations_m1847684335_ftn) (Rigidbody_t3916780224 *);
	static Rigidbody_get_solverIterations_m1847684335_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_get_solverIterations_m1847684335_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::get_solverIterations()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Rigidbody::set_solverIterations(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_solverIterations_m768093641 (Rigidbody_t3916780224 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_set_solverIterations_m768093641_ftn) (Rigidbody_t3916780224 *, int32_t);
	static Rigidbody_set_solverIterations_m768093641_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_set_solverIterations_m768093641_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::set_solverIterations(System.Int32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Int32 UnityEngine.Rigidbody::get_solverVelocityIterations()
extern "C" IL2CPP_METHOD_ATTR int32_t Rigidbody_get_solverVelocityIterations_m2641889730 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*Rigidbody_get_solverVelocityIterations_m2641889730_ftn) (Rigidbody_t3916780224 *);
	static Rigidbody_get_solverVelocityIterations_m2641889730_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_get_solverVelocityIterations_m2641889730_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::get_solverVelocityIterations()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Rigidbody::set_solverVelocityIterations(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_solverVelocityIterations_m138744009 (Rigidbody_t3916780224 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_set_solverVelocityIterations_m138744009_ftn) (Rigidbody_t3916780224 *, int32_t);
	static Rigidbody_set_solverVelocityIterations_m138744009_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_set_solverVelocityIterations_m138744009_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::set_solverVelocityIterations(System.Int32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.Rigidbody::get_sleepThreshold()
extern "C" IL2CPP_METHOD_ATTR float Rigidbody_get_sleepThreshold_m2547550221 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method)
{
	typedef float (*Rigidbody_get_sleepThreshold_m2547550221_ftn) (Rigidbody_t3916780224 *);
	static Rigidbody_get_sleepThreshold_m2547550221_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_get_sleepThreshold_m2547550221_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::get_sleepThreshold()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Rigidbody::set_sleepThreshold(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_sleepThreshold_m4074359984 (Rigidbody_t3916780224 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_set_sleepThreshold_m4074359984_ftn) (Rigidbody_t3916780224 *, float);
	static Rigidbody_set_sleepThreshold_m4074359984_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_set_sleepThreshold_m4074359984_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::set_sleepThreshold(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.Rigidbody::get_maxAngularVelocity()
extern "C" IL2CPP_METHOD_ATTR float Rigidbody_get_maxAngularVelocity_m3707971626 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method)
{
	typedef float (*Rigidbody_get_maxAngularVelocity_m3707971626_ftn) (Rigidbody_t3916780224 *);
	static Rigidbody_get_maxAngularVelocity_m3707971626_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_get_maxAngularVelocity_m3707971626_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::get_maxAngularVelocity()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Rigidbody::set_maxAngularVelocity(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_maxAngularVelocity_m3527950699 (Rigidbody_t3916780224 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_set_maxAngularVelocity_m3527950699_ftn) (Rigidbody_t3916780224 *, float);
	static Rigidbody_set_maxAngularVelocity_m3527950699_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_set_maxAngularVelocity_m3527950699_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::set_maxAngularVelocity(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.Rigidbody::SweepTest(UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Rigidbody_SweepTest_m3166276121 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  ___direction0, RaycastHit_t1056001966 * ___hitInfo1, float ___maxDistance2, int32_t ___queryTriggerInteraction3, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		RaycastHit_t1056001966 * L_0 = ___hitInfo1;
		float L_1 = ___maxDistance2;
		int32_t L_2 = ___queryTriggerInteraction3;
		bool L_3 = Rigidbody_INTERNAL_CALL_SweepTest_m991747228(NULL /*static, unused*/, __this, (&___direction0), L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0013;
	}

IL_0013:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean UnityEngine.Rigidbody::SweepTest(UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
extern "C" IL2CPP_METHOD_ATTR bool Rigidbody_SweepTest_m1621928196 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  ___direction0, RaycastHit_t1056001966 * ___hitInfo1, float ___maxDistance2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		V_0 = 0;
		RaycastHit_t1056001966 * L_0 = ___hitInfo1;
		float L_1 = ___maxDistance2;
		int32_t L_2 = V_0;
		bool L_3 = Rigidbody_INTERNAL_CALL_SweepTest_m991747228(NULL /*static, unused*/, __this, (&___direction0), L_0, L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
// System.Boolean UnityEngine.Rigidbody::SweepTest(UnityEngine.Vector3,UnityEngine.RaycastHit&)
extern "C" IL2CPP_METHOD_ATTR bool Rigidbody_SweepTest_m3037153595 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  ___direction0, RaycastHit_t1056001966 * ___hitInfo1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		V_0 = 0;
		V_1 = (std::numeric_limits<float>::infinity());
		RaycastHit_t1056001966 * L_0 = ___hitInfo1;
		float L_1 = V_1;
		int32_t L_2 = V_0;
		bool L_3 = Rigidbody_INTERNAL_CALL_SweepTest_m991747228(NULL /*static, unused*/, __this, (&___direction0), L_0, L_1, L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		goto IL_001a;
	}

IL_001a:
	{
		bool L_4 = V_2;
		return L_4;
	}
}
// System.Boolean UnityEngine.Rigidbody::INTERNAL_CALL_SweepTest(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Rigidbody_INTERNAL_CALL_SweepTest_m991747228 (RuntimeObject * __this /* static, unused */, Rigidbody_t3916780224 * ___self0, Vector3_t3722313464 * ___direction1, RaycastHit_t1056001966 * ___hitInfo2, float ___maxDistance3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method)
{
	typedef bool (*Rigidbody_INTERNAL_CALL_SweepTest_m991747228_ftn) (Rigidbody_t3916780224 *, Vector3_t3722313464 *, RaycastHit_t1056001966 *, float, int32_t);
	static Rigidbody_INTERNAL_CALL_SweepTest_m991747228_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_CALL_SweepTest_m991747228_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_CALL_SweepTest(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,UnityEngine.QueryTriggerInteraction)");
	bool retVal = _il2cpp_icall_func(___self0, ___direction1, ___hitInfo2, ___maxDistance3, ___queryTriggerInteraction4);
	return retVal;
}
// UnityEngine.RaycastHit[] UnityEngine.Rigidbody::SweepTestAll(UnityEngine.Vector3,System.Single,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Rigidbody_SweepTestAll_m3458969112 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  ___direction0, float ___maxDistance1, int32_t ___queryTriggerInteraction2, const RuntimeMethod* method)
{
	RaycastHitU5BU5D_t1690781147* V_0 = NULL;
	{
		float L_0 = ___maxDistance1;
		int32_t L_1 = ___queryTriggerInteraction2;
		RaycastHitU5BU5D_t1690781147* L_2 = Rigidbody_INTERNAL_CALL_SweepTestAll_m3042706628(NULL /*static, unused*/, __this, (&___direction0), L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0011;
	}

IL_0011:
	{
		RaycastHitU5BU5D_t1690781147* L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Rigidbody::SweepTestAll(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Rigidbody_SweepTestAll_m2377495075 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  ___direction0, float ___maxDistance1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RaycastHitU5BU5D_t1690781147* V_1 = NULL;
	{
		V_0 = 0;
		float L_0 = ___maxDistance1;
		int32_t L_1 = V_0;
		RaycastHitU5BU5D_t1690781147* L_2 = Rigidbody_INTERNAL_CALL_SweepTestAll_m3042706628(NULL /*static, unused*/, __this, (&___direction0), L_0, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		goto IL_0013;
	}

IL_0013:
	{
		RaycastHitU5BU5D_t1690781147* L_3 = V_1;
		return L_3;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Rigidbody::SweepTestAll(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Rigidbody_SweepTestAll_m3633411101 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  ___direction0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	RaycastHitU5BU5D_t1690781147* V_2 = NULL;
	{
		V_0 = 0;
		V_1 = (std::numeric_limits<float>::infinity());
		float L_0 = V_1;
		int32_t L_1 = V_0;
		RaycastHitU5BU5D_t1690781147* L_2 = Rigidbody_INTERNAL_CALL_SweepTestAll_m3042706628(NULL /*static, unused*/, __this, (&___direction0), L_0, L_1, /*hidden argument*/NULL);
		V_2 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		RaycastHitU5BU5D_t1690781147* L_3 = V_2;
		return L_3;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Rigidbody::INTERNAL_CALL_SweepTestAll(UnityEngine.Rigidbody,UnityEngine.Vector3&,System.Single,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Rigidbody_INTERNAL_CALL_SweepTestAll_m3042706628 (RuntimeObject * __this /* static, unused */, Rigidbody_t3916780224 * ___self0, Vector3_t3722313464 * ___direction1, float ___maxDistance2, int32_t ___queryTriggerInteraction3, const RuntimeMethod* method)
{
	typedef RaycastHitU5BU5D_t1690781147* (*Rigidbody_INTERNAL_CALL_SweepTestAll_m3042706628_ftn) (Rigidbody_t3916780224 *, Vector3_t3722313464 *, float, int32_t);
	static Rigidbody_INTERNAL_CALL_SweepTestAll_m3042706628_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_CALL_SweepTestAll_m3042706628_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_CALL_SweepTestAll(UnityEngine.Rigidbody,UnityEngine.Vector3&,System.Single,UnityEngine.QueryTriggerInteraction)");
	RaycastHitU5BU5D_t1690781147* retVal = _il2cpp_icall_func(___self0, ___direction1, ___maxDistance2, ___queryTriggerInteraction3);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.SphereCollider::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SphereCollider__ctor_m1983104944 (SphereCollider_t2077223608 * __this, const RuntimeMethod* method)
{
	{
		Collider__ctor_m1632031523(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.SphereCollider::get_center()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  SphereCollider_get_center_m3629329558 (SphereCollider_t2077223608 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		SphereCollider_INTERNAL_get_center_m2092209095(__this, (&V_0), /*hidden argument*/NULL);
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
// System.Void UnityEngine.SphereCollider::set_center(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void SphereCollider_set_center_m583742655 (SphereCollider_t2077223608 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	{
		SphereCollider_INTERNAL_set_center_m1804487430(__this, (&___value0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SphereCollider::INTERNAL_get_center(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void SphereCollider_INTERNAL_get_center_m2092209095 (SphereCollider_t2077223608 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*SphereCollider_INTERNAL_get_center_m2092209095_ftn) (SphereCollider_t2077223608 *, Vector3_t3722313464 *);
	static SphereCollider_INTERNAL_get_center_m2092209095_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SphereCollider_INTERNAL_get_center_m2092209095_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SphereCollider::INTERNAL_get_center(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.SphereCollider::INTERNAL_set_center(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void SphereCollider_INTERNAL_set_center_m1804487430 (SphereCollider_t2077223608 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*SphereCollider_INTERNAL_set_center_m1804487430_ftn) (SphereCollider_t2077223608 *, Vector3_t3722313464 *);
	static SphereCollider_INTERNAL_set_center_m1804487430_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SphereCollider_INTERNAL_set_center_m1804487430_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SphereCollider::INTERNAL_set_center(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.SphereCollider::get_radius()
extern "C" IL2CPP_METHOD_ATTR float SphereCollider_get_radius_m3258976711 (SphereCollider_t2077223608 * __this, const RuntimeMethod* method)
{
	typedef float (*SphereCollider_get_radius_m3258976711_ftn) (SphereCollider_t2077223608 *);
	static SphereCollider_get_radius_m3258976711_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SphereCollider_get_radius_m3258976711_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SphereCollider::get_radius()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.SphereCollider::set_radius(System.Single)
extern "C" IL2CPP_METHOD_ATTR void SphereCollider_set_radius_m4130116958 (SphereCollider_t2077223608 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*SphereCollider_set_radius_m4130116958_ftn) (SphereCollider_t2077223608 *, float);
	static SphereCollider_set_radius_m4130116958_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SphereCollider_set_radius_m4130116958_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SphereCollider::set_radius(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
