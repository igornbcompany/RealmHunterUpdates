#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F;
// UnityEngine.AI.NavMeshPath
struct NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7;
// UnityEngine.AI.OffMeshLink
struct OffMeshLink_t0DBF49E03E8580A182BB9F866746DFDF1FB795FD;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.AI.NavMesh/OnNavMeshPreUpdate
struct OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7;

IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NavMesh_t3543D236ABB9A67F696BCF9440D669A1578B3D46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tC64F337A786EF1DE807D08323D848149E353A750 
{
};
struct Il2CppArrayBounds;

// UnityEngine.AI.NavMesh
struct NavMesh_t3543D236ABB9A67F696BCF9440D669A1578B3D46  : public RuntimeObject
{
};

struct NavMesh_t3543D236ABB9A67F696BCF9440D669A1578B3D46_StaticFields
{
	// UnityEngine.AI.NavMesh/OnNavMeshPreUpdate UnityEngine.AI.NavMesh::onPreUpdate
	OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* ___onPreUpdate_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.AI.NavMeshHit
struct NavMeshHit_t6323FC1F2D00E24FBFFC3E27C2F349A3BAD16F8B 
{
	// UnityEngine.Vector3 UnityEngine.AI.NavMeshHit::m_Position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Position_0;
	// UnityEngine.Vector3 UnityEngine.AI.NavMeshHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.Single UnityEngine.AI.NavMeshHit::m_Distance
	float ___m_Distance_2;
	// System.Int32 UnityEngine.AI.NavMeshHit::m_Mask
	int32_t ___m_Mask_3;
	// System.Int32 UnityEngine.AI.NavMeshHit::m_Hit
	int32_t ___m_Hit_4;
};

// UnityEngine.AI.NavMeshPath
struct NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AI.NavMeshPath::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Vector3[] UnityEngine.AI.NavMeshPath::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AI.NavMeshPath
struct NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___m_Corners_1;
};
// Native definition for COM marshalling of UnityEngine.AI.NavMeshPath
struct NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___m_Corners_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.AI.OffMeshLinkData
struct OffMeshLinkData_t5E81CBAC1FBAA5F25A447B7A9CC04EF59AE6D1D0 
{
	// System.Int32 UnityEngine.AI.OffMeshLinkData::m_Valid
	int32_t ___m_Valid_0;
	// System.Int32 UnityEngine.AI.OffMeshLinkData::m_Activated
	int32_t ___m_Activated_1;
	// System.Int32 UnityEngine.AI.OffMeshLinkData::m_InstanceID
	int32_t ___m_InstanceID_2;
	// UnityEngine.AI.OffMeshLinkType UnityEngine.AI.OffMeshLinkData::m_LinkType
	int32_t ___m_LinkType_3;
	// UnityEngine.Vector3 UnityEngine.AI.OffMeshLinkData::m_StartPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_StartPos_4;
	// UnityEngine.Vector3 UnityEngine.AI.OffMeshLinkData::m_EndPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_EndPos_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.AI.NavMesh/OnNavMeshPreUpdate
struct OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7  : public MulticastDelegate_t
{
};

// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AI.NavMeshObstacle
struct NavMeshObstacle_t8A0C6288BB17A7B9DEF5897AEAFA7C58DB85C411  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AI.OffMeshLink
struct OffMeshLink_t0DBF49E03E8580A182BB9F866746DFDF1FB795FD  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AI.NavMeshPath::InitializeNavMeshPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NavMeshPath_InitializeNavMeshPath_m91B9A02C11B0C86F33F726A047B11D015230E9C2 (const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshPath::DestroyNavMeshPath(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshPath_DestroyNavMeshPath_mE7FD23F7D0456507277BDC8ED868A7C6888796EB (intptr_t ___ptr0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshPath::ClearCornersInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshPath_ClearCornersInternal_m2310C5CB9B4EB2B3C4685476B2CF8440ED369606 (NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3[] UnityEngine.AI.NavMeshPath::CalculateCornersInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* NavMeshPath_CalculateCornersInternal_m59C910C60F8C28D4E387C93B299B7D3F76213850 (NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshPath::CalculateCorners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshPath_CalculateCorners_mFC7D66E9304DE81D6030B3FEB237754DFFFDF548 (NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AI.NavMeshAgent::SetDestination_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_SetDestination_Injected_mC3EF405F5AAFF9F98C5D5AECAD641525CDF742EA (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___target0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshAgent::get_destination_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_get_destination_Injected_m864513574C2AD2BA558D85B213CC518C064F893A (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___ret0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshAgent::get_velocity_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_get_velocity_Injected_m40A3E476CECB49AE84CA70761FB01FB5644B1735 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___ret0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshAgent::set_nextPosition_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_nextPosition_Injected_m2BE7FC0BB19304F18AC625CC08CE9E64974386AB (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshAgent::get_desiredVelocity_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_get_desiredVelocity_Injected_m8793EE07C8733261F15C392B983113CBD225DA41 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___ret0, const RuntimeMethod* method) ;
// UnityEngine.AI.OffMeshLinkData UnityEngine.AI.NavMeshAgent::GetCurrentOffMeshLinkDataInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OffMeshLinkData_t5E81CBAC1FBAA5F25A447B7A9CC04EF59AE6D1D0 NavMeshAgent_GetCurrentOffMeshLinkDataInternal_m00D8106BBA99C267CAC0A360DE74DCB87709DD26 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshAgent::GetCurrentOffMeshLinkDataInternal_Injected(UnityEngine.AI.OffMeshLinkData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_GetCurrentOffMeshLinkDataInternal_Injected_m20A673BF8CB87029AC2119A6C24B648EF624BDB6 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, OffMeshLinkData_t5E81CBAC1FBAA5F25A447B7A9CC04EF59AE6D1D0* ___ret0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AI.NavMeshAgent::Warp_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_Warp_Injected_m408EB62DABE62C1C5B568598DBF54FDCA502E56E (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___newPosition0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshAgent::Move_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_Move_Injected_m470CF469F6DE021B2C44A4CB3619AC9C441491D8 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___offset0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshPath::ClearCorners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshPath_ClearCorners_m8633C3989850C01982EBD3D4BC70E85AF461CE5B (NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AI.NavMeshAgent::CalculatePathInternal(UnityEngine.Vector3,UnityEngine.AI.NavMeshPath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_CalculatePathInternal_m022C56D89B194E8EAD260A2E2CEEA100024AE004 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* ___path1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AI.NavMeshAgent::CalculatePathInternal_Injected(UnityEngine.Vector3&,UnityEngine.AI.NavMeshPath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_CalculatePathInternal_Injected_m07BFBF7B199DE22CB3AB819BACA56953D2C56C06 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___targetPosition0, NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* ___path1, const RuntimeMethod* method) ;
// UnityEngine.AI.OffMeshLinkType UnityEngine.AI.OffMeshLinkData::get_linkType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t OffMeshLinkData_get_linkType_mAAED25B893C730527A303F9B0D2D720337987418_inline (OffMeshLinkData_t5E81CBAC1FBAA5F25A447B7A9CC04EF59AE6D1D0* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.AI.OffMeshLinkData::get_endPos()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 OffMeshLinkData_get_endPos_m51E9004D45E0DC1D9481DEED18E344CD7EFED7A8_inline (OffMeshLinkData_t5E81CBAC1FBAA5F25A447B7A9CC04EF59AE6D1D0* __this, const RuntimeMethod* method) ;
// UnityEngine.AI.OffMeshLink UnityEngine.AI.OffMeshLinkData::GetOffMeshLinkInternal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OffMeshLink_t0DBF49E03E8580A182BB9F866746DFDF1FB795FD* OffMeshLinkData_GetOffMeshLinkInternal_m2CC1F17C51504500EB52B1FA0E74D8AA65E44199 (int32_t ___instanceID0, const RuntimeMethod* method) ;
// UnityEngine.AI.OffMeshLink UnityEngine.AI.OffMeshLinkData::get_offMeshLink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OffMeshLink_t0DBF49E03E8580A182BB9F866746DFDF1FB795FD* OffMeshLinkData_get_offMeshLink_mCE63ED9125991BDEB961C01E4C8C957F396B9CEE (OffMeshLinkData_t5E81CBAC1FBAA5F25A447B7A9CC04EF59AE6D1D0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour__ctor_m00422B6EFEA829BCB116D715E74F1EAD2CB6F4F8 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.AI.NavMeshHit::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 NavMeshHit_get_position_m09E8FF6DEF5BFA3F30B3C4BCA4642442FF1BCBF1 (NavMeshHit_t6323FC1F2D00E24FBFFC3E27C2F349A3BAD16F8B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMesh/OnNavMeshPreUpdate::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914_inline (OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AI.NavMesh::CalculatePathInternal(UnityEngine.Vector3,UnityEngine.Vector3,System.Int32,UnityEngine.AI.NavMeshPath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMesh_CalculatePathInternal_m41F1F0B17C50CEF69000295E6D8F010711431896 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___sourcePosition0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition1, int32_t ___areaMask2, NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* ___path3, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AI.NavMesh::CalculatePathInternal_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Int32,UnityEngine.AI.NavMeshPath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMesh_CalculatePathInternal_Injected_m1A3CD6FB027FDE465104295B32C0767ABEB4EBBA (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___sourcePosition0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___targetPosition1, int32_t ___areaMask2, NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* ___path3, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AI.NavMesh::SamplePosition_Injected(UnityEngine.Vector3&,UnityEngine.AI.NavMeshHit&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMesh_SamplePosition_Injected_m59777E11E947B46F60E9BCDF8C7CCFFAA5529E0D (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___sourcePosition0, NavMeshHit_t6323FC1F2D00E24FBFFC3E27C2F349A3BAD16F8B* ___hit1, float ___maxDistance2, int32_t ___areaMask3, const RuntimeMethod* method) ;
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
// Conversion methods for marshalling of: UnityEngine.AI.NavMeshPath
IL2CPP_EXTERN_C void NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_marshal_pinvoke(const NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7& unmarshaled, NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
	if (unmarshaled.___m_Corners_1 != NULL)
	{
		il2cpp_array_size_t _unmarshaledm_Corners_Length = (unmarshaled.___m_Corners_1)->max_length;
		marshaled.___m_Corners_1 = il2cpp_codegen_marshal_allocate_array<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2>(_unmarshaledm_Corners_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledm_Corners_Length); i++)
		{
			(marshaled.___m_Corners_1)[i] = (unmarshaled.___m_Corners_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___m_Corners_1 = NULL;
	}
}
IL2CPP_EXTERN_C void NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_marshal_pinvoke_back(const NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_marshaled_pinvoke& marshaled, NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t unmarshaledm_Ptr_temp_0;
	memset((&unmarshaledm_Ptr_temp_0), 0, sizeof(unmarshaledm_Ptr_temp_0));
	unmarshaledm_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.___m_Ptr_0 = unmarshaledm_Ptr_temp_0;
	if (marshaled.___m_Corners_1 != NULL)
	{
		if (unmarshaled.___m_Corners_1 == NULL)
		{
			unmarshaled.___m_Corners_1 = reinterpret_cast<Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*>((Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_Corners_1), (void*)reinterpret_cast<Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*>((Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___m_Corners_1)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.___m_Corners_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___m_Corners_1)[i]);
		}
	}
}
// Conversion method for clean up from marshalling of: UnityEngine.AI.NavMeshPath
IL2CPP_EXTERN_C void NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_marshal_pinvoke_cleanup(NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_marshaled_pinvoke& marshaled)
{
	if (marshaled.___m_Corners_1 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___m_Corners_1);
		marshaled.___m_Corners_1 = NULL;
	}
}
// Conversion methods for marshalling of: UnityEngine.AI.NavMeshPath
IL2CPP_EXTERN_C void NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_marshal_com(const NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7& unmarshaled, NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
	if (unmarshaled.___m_Corners_1 != NULL)
	{
		il2cpp_array_size_t _unmarshaledm_Corners_Length = (unmarshaled.___m_Corners_1)->max_length;
		marshaled.___m_Corners_1 = il2cpp_codegen_marshal_allocate_array<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2>(_unmarshaledm_Corners_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledm_Corners_Length); i++)
		{
			(marshaled.___m_Corners_1)[i] = (unmarshaled.___m_Corners_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___m_Corners_1 = NULL;
	}
}
IL2CPP_EXTERN_C void NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_marshal_com_back(const NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_marshaled_com& marshaled, NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t unmarshaledm_Ptr_temp_0;
	memset((&unmarshaledm_Ptr_temp_0), 0, sizeof(unmarshaledm_Ptr_temp_0));
	unmarshaledm_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.___m_Ptr_0 = unmarshaledm_Ptr_temp_0;
	if (marshaled.___m_Corners_1 != NULL)
	{
		if (unmarshaled.___m_Corners_1 == NULL)
		{
			unmarshaled.___m_Corners_1 = reinterpret_cast<Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*>((Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_Corners_1), (void*)reinterpret_cast<Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*>((Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___m_Corners_1)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.___m_Corners_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___m_Corners_1)[i]);
		}
	}
}
// Conversion method for clean up from marshalling of: UnityEngine.AI.NavMeshPath
IL2CPP_EXTERN_C void NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_marshal_com_cleanup(NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_marshaled_com& marshaled)
{
	if (marshaled.___m_Corners_1 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___m_Corners_1);
		marshaled.___m_Corners_1 = NULL;
	}
}
// System.Void UnityEngine.AI.NavMeshPath::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshPath__ctor_mEA40BFC2492814FFC97A71C3AEC2154A9415C37F (NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		intptr_t L_0;
		L_0 = NavMeshPath_InitializeNavMeshPath_m91B9A02C11B0C86F33F726A047B11D015230E9C2(NULL);
		__this->___m_Ptr_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.AI.NavMeshPath::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshPath_Finalize_mB151BFBD5D7E65C343415B6B332A58504F12AF77 (NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001b:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = __this->___m_Ptr_0;
			NavMeshPath_DestroyNavMeshPath_mE7FD23F7D0456507277BDC8ED868A7C6888796EB(L_0, NULL);
			__this->___m_Ptr_0 = (0);
			goto IL_0023;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0023:
	{
		return;
	}
}
// System.IntPtr UnityEngine.AI.NavMeshPath::InitializeNavMeshPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NavMeshPath_InitializeNavMeshPath_m91B9A02C11B0C86F33F726A047B11D015230E9C2 (const RuntimeMethod* method) 
{
	typedef intptr_t (*NavMeshPath_InitializeNavMeshPath_m91B9A02C11B0C86F33F726A047B11D015230E9C2_ftn) ();
	static NavMeshPath_InitializeNavMeshPath_m91B9A02C11B0C86F33F726A047B11D015230E9C2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshPath_InitializeNavMeshPath_m91B9A02C11B0C86F33F726A047B11D015230E9C2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshPath::InitializeNavMeshPath()");
	intptr_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Void UnityEngine.AI.NavMeshPath::DestroyNavMeshPath(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshPath_DestroyNavMeshPath_mE7FD23F7D0456507277BDC8ED868A7C6888796EB (intptr_t ___ptr0, const RuntimeMethod* method) 
{
	typedef void (*NavMeshPath_DestroyNavMeshPath_mE7FD23F7D0456507277BDC8ED868A7C6888796EB_ftn) (intptr_t);
	static NavMeshPath_DestroyNavMeshPath_mE7FD23F7D0456507277BDC8ED868A7C6888796EB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshPath_DestroyNavMeshPath_mE7FD23F7D0456507277BDC8ED868A7C6888796EB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshPath::DestroyNavMeshPath(System.IntPtr)");
	_il2cpp_icall_func(___ptr0);
}
// UnityEngine.Vector3[] UnityEngine.AI.NavMeshPath::CalculateCornersInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* NavMeshPath_CalculateCornersInternal_m59C910C60F8C28D4E387C93B299B7D3F76213850 (NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* __this, const RuntimeMethod* method) 
{
	typedef Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* (*NavMeshPath_CalculateCornersInternal_m59C910C60F8C28D4E387C93B299B7D3F76213850_ftn) (NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7*);
	static NavMeshPath_CalculateCornersInternal_m59C910C60F8C28D4E387C93B299B7D3F76213850_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshPath_CalculateCornersInternal_m59C910C60F8C28D4E387C93B299B7D3F76213850_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshPath::CalculateCornersInternal()");
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.AI.NavMeshPath::ClearCornersInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshPath_ClearCornersInternal_m2310C5CB9B4EB2B3C4685476B2CF8440ED369606 (NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* __this, const RuntimeMethod* method) 
{
	typedef void (*NavMeshPath_ClearCornersInternal_m2310C5CB9B4EB2B3C4685476B2CF8440ED369606_ftn) (NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7*);
	static NavMeshPath_ClearCornersInternal_m2310C5CB9B4EB2B3C4685476B2CF8440ED369606_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshPath_ClearCornersInternal_m2310C5CB9B4EB2B3C4685476B2CF8440ED369606_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshPath::ClearCornersInternal()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AI.NavMeshPath::ClearCorners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshPath_ClearCorners_m8633C3989850C01982EBD3D4BC70E85AF461CE5B (NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* __this, const RuntimeMethod* method) 
{
	{
		NavMeshPath_ClearCornersInternal_m2310C5CB9B4EB2B3C4685476B2CF8440ED369606(__this, NULL);
		__this->___m_Corners_1 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Corners_1), (void*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)NULL);
		return;
	}
}
// System.Void UnityEngine.AI.NavMeshPath::CalculateCorners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshPath_CalculateCorners_mFC7D66E9304DE81D6030B3FEB237754DFFFDF548 (NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = __this->___m_Corners_1;
		V_0 = (bool)((((RuntimeObject*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2;
		L_2 = NavMeshPath_CalculateCornersInternal_m59C910C60F8C28D4E387C93B299B7D3F76213850(__this, NULL);
		__this->___m_Corners_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Corners_1), (void*)L_2);
	}

IL_001a:
	{
		return;
	}
}
// UnityEngine.Vector3[] UnityEngine.AI.NavMeshPath::get_corners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* NavMeshPath_get_corners_m469237DE430A001BE7050BEF5D05A20B94D76F3E (NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* __this, const RuntimeMethod* method) 
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	{
		NavMeshPath_CalculateCorners_mFC7D66E9304DE81D6030B3FEB237754DFFFDF548(__this, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = __this->___m_Corners_1;
		V_0 = L_0;
		goto IL_0011;
	}

IL_0011:
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.AI.NavMeshPathStatus UnityEngine.AI.NavMeshPath::get_status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NavMeshPath_get_status_m63B0AEDA3149C7053987C4D0A02B3FE8B41BD74B (NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*NavMeshPath_get_status_m63B0AEDA3149C7053987C4D0A02B3FE8B41BD74B_ftn) (NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7*);
	static NavMeshPath_get_status_m63B0AEDA3149C7053987C4D0A02B3FE8B41BD74B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshPath_get_status_m63B0AEDA3149C7053987C4D0A02B3FE8B41BD74B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshPath::get_status()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.AI.NavMeshAgent::SetDestination(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_SetDestination_mD5D960933827F1F14B29CF4A3B6F305C064EBF46 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target0, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = NavMeshAgent_SetDestination_Injected_mC3EF405F5AAFF9F98C5D5AECAD641525CDF742EA(__this, (&___target0), NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.AI.NavMeshAgent::get_destination()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 NavMeshAgent_get_destination_m1BE2C5EEF53F7EB6317449726C99E0D0955C677E (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NavMeshAgent_get_destination_Injected_m864513574C2AD2BA558D85B213CC518C064F893A(__this, (&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = V_0;
		return L_0;
	}
}
// System.Single UnityEngine.AI.NavMeshAgent::get_stoppingDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NavMeshAgent_get_stoppingDistance_mA866A409C59878849D63BEC61517DE4F906BEEC4 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, const RuntimeMethod* method) 
{
	typedef float (*NavMeshAgent_get_stoppingDistance_mA866A409C59878849D63BEC61517DE4F906BEEC4_ftn) (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F*);
	static NavMeshAgent_get_stoppingDistance_mA866A409C59878849D63BEC61517DE4F906BEEC4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_get_stoppingDistance_mA866A409C59878849D63BEC61517DE4F906BEEC4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::get_stoppingDistance()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.AI.NavMeshAgent::set_stoppingDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_stoppingDistance_m288A6280B55AAFF8578286747E19AF409C7C177F (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, float ___value0, const RuntimeMethod* method) 
{
	typedef void (*NavMeshAgent_set_stoppingDistance_m288A6280B55AAFF8578286747E19AF409C7C177F_ftn) (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F*, float);
	static NavMeshAgent_set_stoppingDistance_m288A6280B55AAFF8578286747E19AF409C7C177F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_set_stoppingDistance_m288A6280B55AAFF8578286747E19AF409C7C177F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::set_stoppingDistance(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Vector3 UnityEngine.AI.NavMeshAgent::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 NavMeshAgent_get_velocity_m028219D0E4678D727F00C53AE3DCBCF29AF04DA7 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NavMeshAgent_get_velocity_Injected_m40A3E476CECB49AE84CA70761FB01FB5644B1735(__this, (&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.AI.NavMeshAgent::set_nextPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_nextPosition_m588339359E961F44B20AE429C4CB8434D65AAC52 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		NavMeshAgent_set_nextPosition_Injected_m2BE7FC0BB19304F18AC625CC08CE9E64974386AB(__this, (&___value0), NULL);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.AI.NavMeshAgent::get_desiredVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 NavMeshAgent_get_desiredVelocity_m8CF3F6E3FA8EE86397DD02146AA6048949B74F52 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NavMeshAgent_get_desiredVelocity_Injected_m8793EE07C8733261F15C392B983113CBD225DA41(__this, (&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = V_0;
		return L_0;
	}
}
// System.Single UnityEngine.AI.NavMeshAgent::get_remainingDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NavMeshAgent_get_remainingDistance_m051C1B408E2740A95B5A5577C5EC7222311AA73A (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, const RuntimeMethod* method) 
{
	typedef float (*NavMeshAgent_get_remainingDistance_m051C1B408E2740A95B5A5577C5EC7222311AA73A_ftn) (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F*);
	static NavMeshAgent_get_remainingDistance_m051C1B408E2740A95B5A5577C5EC7222311AA73A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_get_remainingDistance_m051C1B408E2740A95B5A5577C5EC7222311AA73A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::get_remainingDistance()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.AI.NavMeshAgent::get_isOnOffMeshLink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_get_isOnOffMeshLink_m1A41E849AC5CDDC81F14288FA69C4159090157FC (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, const RuntimeMethod* method) 
{
	typedef bool (*NavMeshAgent_get_isOnOffMeshLink_m1A41E849AC5CDDC81F14288FA69C4159090157FC_ftn) (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F*);
	static NavMeshAgent_get_isOnOffMeshLink_m1A41E849AC5CDDC81F14288FA69C4159090157FC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_get_isOnOffMeshLink_m1A41E849AC5CDDC81F14288FA69C4159090157FC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::get_isOnOffMeshLink()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.AI.NavMeshAgent::ActivateCurrentOffMeshLink(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_ActivateCurrentOffMeshLink_m47987303EF43734AA8997AF7D9BB97C4F4D27477 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, bool ___activated0, const RuntimeMethod* method) 
{
	typedef void (*NavMeshAgent_ActivateCurrentOffMeshLink_m47987303EF43734AA8997AF7D9BB97C4F4D27477_ftn) (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F*, bool);
	static NavMeshAgent_ActivateCurrentOffMeshLink_m47987303EF43734AA8997AF7D9BB97C4F4D27477_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_ActivateCurrentOffMeshLink_m47987303EF43734AA8997AF7D9BB97C4F4D27477_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::ActivateCurrentOffMeshLink(System.Boolean)");
	_il2cpp_icall_func(__this, ___activated0);
}
// UnityEngine.AI.OffMeshLinkData UnityEngine.AI.NavMeshAgent::get_currentOffMeshLinkData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OffMeshLinkData_t5E81CBAC1FBAA5F25A447B7A9CC04EF59AE6D1D0 NavMeshAgent_get_currentOffMeshLinkData_m3C29286C945248C78CD40C544606D0BFA6EC5028 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, const RuntimeMethod* method) 
{
	{
		OffMeshLinkData_t5E81CBAC1FBAA5F25A447B7A9CC04EF59AE6D1D0 L_0;
		L_0 = NavMeshAgent_GetCurrentOffMeshLinkDataInternal_m00D8106BBA99C267CAC0A360DE74DCB87709DD26(__this, NULL);
		return L_0;
	}
}
// UnityEngine.AI.OffMeshLinkData UnityEngine.AI.NavMeshAgent::GetCurrentOffMeshLinkDataInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OffMeshLinkData_t5E81CBAC1FBAA5F25A447B7A9CC04EF59AE6D1D0 NavMeshAgent_GetCurrentOffMeshLinkDataInternal_m00D8106BBA99C267CAC0A360DE74DCB87709DD26 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, const RuntimeMethod* method) 
{
	OffMeshLinkData_t5E81CBAC1FBAA5F25A447B7A9CC04EF59AE6D1D0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NavMeshAgent_GetCurrentOffMeshLinkDataInternal_Injected_m20A673BF8CB87029AC2119A6C24B648EF624BDB6(__this, (&V_0), NULL);
		OffMeshLinkData_t5E81CBAC1FBAA5F25A447B7A9CC04EF59AE6D1D0 L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.AI.NavMeshAgent::CompleteOffMeshLink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_CompleteOffMeshLink_mD0E51EF45F50FB6FBA70F86E1DBB4DF54651853D (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, const RuntimeMethod* method) 
{
	typedef void (*NavMeshAgent_CompleteOffMeshLink_mD0E51EF45F50FB6FBA70F86E1DBB4DF54651853D_ftn) (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F*);
	static NavMeshAgent_CompleteOffMeshLink_mD0E51EF45F50FB6FBA70F86E1DBB4DF54651853D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_CompleteOffMeshLink_mD0E51EF45F50FB6FBA70F86E1DBB4DF54651853D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::CompleteOffMeshLink()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AI.NavMeshAgent::set_autoTraverseOffMeshLink(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_autoTraverseOffMeshLink_m68DDB55CB2557A1A69534212B896A0C52146841A (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, bool ___value0, const RuntimeMethod* method) 
{
	typedef void (*NavMeshAgent_set_autoTraverseOffMeshLink_m68DDB55CB2557A1A69534212B896A0C52146841A_ftn) (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F*, bool);
	static NavMeshAgent_set_autoTraverseOffMeshLink_m68DDB55CB2557A1A69534212B896A0C52146841A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_set_autoTraverseOffMeshLink_m68DDB55CB2557A1A69534212B896A0C52146841A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::set_autoTraverseOffMeshLink(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.AI.NavMeshAgent::get_hasPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_get_hasPath_mE56295431F7774ADC8C39CFD87E13073DDDA178A (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, const RuntimeMethod* method) 
{
	typedef bool (*NavMeshAgent_get_hasPath_mE56295431F7774ADC8C39CFD87E13073DDDA178A_ftn) (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F*);
	static NavMeshAgent_get_hasPath_mE56295431F7774ADC8C39CFD87E13073DDDA178A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_get_hasPath_mE56295431F7774ADC8C39CFD87E13073DDDA178A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::get_hasPath()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.AI.NavMeshAgent::get_pathPending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_get_pathPending_mA806A4DC1E06CA32A4E7E71B6846B516EC8C2487 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, const RuntimeMethod* method) 
{
	typedef bool (*NavMeshAgent_get_pathPending_mA806A4DC1E06CA32A4E7E71B6846B516EC8C2487_ftn) (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F*);
	static NavMeshAgent_get_pathPending_mA806A4DC1E06CA32A4E7E71B6846B516EC8C2487_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_get_pathPending_mA806A4DC1E06CA32A4E7E71B6846B516EC8C2487_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::get_pathPending()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.AI.NavMeshAgent::Warp(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_Warp_mAD14E576F74544EEDAD0AF097E498C58D3C0E4F5 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___newPosition0, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = NavMeshAgent_Warp_Injected_m408EB62DABE62C1C5B568598DBF54FDCA502E56E(__this, (&___newPosition0), NULL);
		return L_0;
	}
}
// System.Void UnityEngine.AI.NavMeshAgent::Move(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_Move_m90D996635C2056733BB3497CB716DA2E8CB9DCB9 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___offset0, const RuntimeMethod* method) 
{
	{
		NavMeshAgent_Move_Injected_m470CF469F6DE021B2C44A4CB3619AC9C441491D8(__this, (&___offset0), NULL);
		return;
	}
}
// System.Boolean UnityEngine.AI.NavMeshAgent::get_isStopped()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_get_isStopped_m1CF52CE58CC025C1617F9E745924624C35D0B598 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, const RuntimeMethod* method) 
{
	typedef bool (*NavMeshAgent_get_isStopped_m1CF52CE58CC025C1617F9E745924624C35D0B598_ftn) (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F*);
	static NavMeshAgent_get_isStopped_m1CF52CE58CC025C1617F9E745924624C35D0B598_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_get_isStopped_m1CF52CE58CC025C1617F9E745924624C35D0B598_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::get_isStopped()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.AI.NavMeshAgent::set_isStopped(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_isStopped_mF374E697F39845233B84D8C4873DEABC3AA490DF (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, bool ___value0, const RuntimeMethod* method) 
{
	typedef void (*NavMeshAgent_set_isStopped_mF374E697F39845233B84D8C4873DEABC3AA490DF_ftn) (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F*, bool);
	static NavMeshAgent_set_isStopped_mF374E697F39845233B84D8C4873DEABC3AA490DF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_set_isStopped_mF374E697F39845233B84D8C4873DEABC3AA490DF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::set_isStopped(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.AI.NavMeshAgent::ResetPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_ResetPath_mE29D3956C1BFABDB3D6B4B7DF2B376B4EEB24E7F (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, const RuntimeMethod* method) 
{
	typedef void (*NavMeshAgent_ResetPath_mE29D3956C1BFABDB3D6B4B7DF2B376B4EEB24E7F_ftn) (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F*);
	static NavMeshAgent_ResetPath_mE29D3956C1BFABDB3D6B4B7DF2B376B4EEB24E7F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_ResetPath_mE29D3956C1BFABDB3D6B4B7DF2B376B4EEB24E7F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::ResetPath()");
	_il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.AI.NavMeshAgent::SetPath(UnityEngine.AI.NavMeshPath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_SetPath_m52F66FD27D02DE634BAF3AC2B521017B4299DB8C (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* ___path0, const RuntimeMethod* method) 
{
	typedef bool (*NavMeshAgent_SetPath_m52F66FD27D02DE634BAF3AC2B521017B4299DB8C_ftn) (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F*, NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7*);
	static NavMeshAgent_SetPath_m52F66FD27D02DE634BAF3AC2B521017B4299DB8C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_SetPath_m52F66FD27D02DE634BAF3AC2B521017B4299DB8C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::SetPath(UnityEngine.AI.NavMeshPath)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___path0);
	return icallRetVal;
}
// System.Boolean UnityEngine.AI.NavMeshAgent::CalculatePath(UnityEngine.Vector3,UnityEngine.AI.NavMeshPath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_CalculatePath_mF692688572E61C3B9FE776AA3784E14A08C259C2 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* ___path1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_0 = ___path1;
		NullCheck(L_0);
		NavMeshPath_ClearCorners_m8633C3989850C01982EBD3D4BC70E85AF461CE5B(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___targetPosition0;
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_2 = ___path1;
		bool L_3;
		L_3 = NavMeshAgent_CalculatePathInternal_m022C56D89B194E8EAD260A2E2CEEA100024AE004(__this, L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_0013;
	}

IL_0013:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean UnityEngine.AI.NavMeshAgent::CalculatePathInternal(UnityEngine.Vector3,UnityEngine.AI.NavMeshPath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_CalculatePathInternal_m022C56D89B194E8EAD260A2E2CEEA100024AE004 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* ___path1, const RuntimeMethod* method) 
{
	{
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_0 = ___path1;
		bool L_1;
		L_1 = NavMeshAgent_CalculatePathInternal_Injected_m07BFBF7B199DE22CB3AB819BACA56953D2C56C06(__this, (&___targetPosition0), L_0, NULL);
		return L_1;
	}
}
// System.Single UnityEngine.AI.NavMeshAgent::get_speed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NavMeshAgent_get_speed_m3E4720882ED0C65A4E19AADD53BB6CFFB5BB1345 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, const RuntimeMethod* method) 
{
	typedef float (*NavMeshAgent_get_speed_m3E4720882ED0C65A4E19AADD53BB6CFFB5BB1345_ftn) (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F*);
	static NavMeshAgent_get_speed_m3E4720882ED0C65A4E19AADD53BB6CFFB5BB1345_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_get_speed_m3E4720882ED0C65A4E19AADD53BB6CFFB5BB1345_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::get_speed()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.AI.NavMeshAgent::set_speed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_speed_m820E45289B3AE7DEE16F2F4BF163EAC361E64646 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, float ___value0, const RuntimeMethod* method) 
{
	typedef void (*NavMeshAgent_set_speed_m820E45289B3AE7DEE16F2F4BF163EAC361E64646_ftn) (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F*, float);
	static NavMeshAgent_set_speed_m820E45289B3AE7DEE16F2F4BF163EAC361E64646_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_set_speed_m820E45289B3AE7DEE16F2F4BF163EAC361E64646_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::set_speed(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.AI.NavMeshAgent::get_angularSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NavMeshAgent_get_angularSpeed_m3767F066BFA2C5130EB4662234442B530ACC0290 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, const RuntimeMethod* method) 
{
	typedef float (*NavMeshAgent_get_angularSpeed_m3767F066BFA2C5130EB4662234442B530ACC0290_ftn) (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F*);
	static NavMeshAgent_get_angularSpeed_m3767F066BFA2C5130EB4662234442B530ACC0290_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_get_angularSpeed_m3767F066BFA2C5130EB4662234442B530ACC0290_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::get_angularSpeed()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.AI.NavMeshAgent::set_angularSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_angularSpeed_mD2AE9EE187EF1C45F519576B5FC8581DC6B7D683 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, float ___value0, const RuntimeMethod* method) 
{
	typedef void (*NavMeshAgent_set_angularSpeed_mD2AE9EE187EF1C45F519576B5FC8581DC6B7D683_ftn) (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F*, float);
	static NavMeshAgent_set_angularSpeed_mD2AE9EE187EF1C45F519576B5FC8581DC6B7D683_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_set_angularSpeed_mD2AE9EE187EF1C45F519576B5FC8581DC6B7D683_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::set_angularSpeed(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.AI.NavMeshAgent::get_acceleration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NavMeshAgent_get_acceleration_m130C96AAA6246983D17AEB4EB4FC6ECAE9800D5E (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, const RuntimeMethod* method) 
{
	typedef float (*NavMeshAgent_get_acceleration_m130C96AAA6246983D17AEB4EB4FC6ECAE9800D5E_ftn) (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F*);
	static NavMeshAgent_get_acceleration_m130C96AAA6246983D17AEB4EB4FC6ECAE9800D5E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_get_acceleration_m130C96AAA6246983D17AEB4EB4FC6ECAE9800D5E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::get_acceleration()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.AI.NavMeshAgent::set_acceleration(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_acceleration_mEAA92D7837B8D726891846DBBB6114DB13CD597E (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, float ___value0, const RuntimeMethod* method) 
{
	typedef void (*NavMeshAgent_set_acceleration_mEAA92D7837B8D726891846DBBB6114DB13CD597E_ftn) (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F*, float);
	static NavMeshAgent_set_acceleration_mEAA92D7837B8D726891846DBBB6114DB13CD597E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_set_acceleration_mEAA92D7837B8D726891846DBBB6114DB13CD597E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::set_acceleration(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.AI.NavMeshAgent::set_updatePosition(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_updatePosition_m25CA3F441A2EEC82096B4BCFAD4E5FDC10867372 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, bool ___value0, const RuntimeMethod* method) 
{
	typedef void (*NavMeshAgent_set_updatePosition_m25CA3F441A2EEC82096B4BCFAD4E5FDC10867372_ftn) (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F*, bool);
	static NavMeshAgent_set_updatePosition_m25CA3F441A2EEC82096B4BCFAD4E5FDC10867372_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_set_updatePosition_m25CA3F441A2EEC82096B4BCFAD4E5FDC10867372_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::set_updatePosition(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.AI.NavMeshAgent::get_updateRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_get_updateRotation_m931B37F6BA4D560A9838ACD89A1470975E4D8F4D (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, const RuntimeMethod* method) 
{
	typedef bool (*NavMeshAgent_get_updateRotation_m931B37F6BA4D560A9838ACD89A1470975E4D8F4D_ftn) (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F*);
	static NavMeshAgent_get_updateRotation_m931B37F6BA4D560A9838ACD89A1470975E4D8F4D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_get_updateRotation_m931B37F6BA4D560A9838ACD89A1470975E4D8F4D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::get_updateRotation()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.AI.NavMeshAgent::set_updateRotation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_updateRotation_mBF6EDBC9BBAF32490229D7DD6BC821A420C3399D (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, bool ___value0, const RuntimeMethod* method) 
{
	typedef void (*NavMeshAgent_set_updateRotation_mBF6EDBC9BBAF32490229D7DD6BC821A420C3399D_ftn) (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F*, bool);
	static NavMeshAgent_set_updateRotation_mBF6EDBC9BBAF32490229D7DD6BC821A420C3399D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_set_updateRotation_mBF6EDBC9BBAF32490229D7DD6BC821A420C3399D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::set_updateRotation(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.AI.ObstacleAvoidanceType UnityEngine.AI.NavMeshAgent::get_obstacleAvoidanceType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NavMeshAgent_get_obstacleAvoidanceType_mE34163AD71944C30335B61CAA5024F4C7E585EFE (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*NavMeshAgent_get_obstacleAvoidanceType_mE34163AD71944C30335B61CAA5024F4C7E585EFE_ftn) (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F*);
	static NavMeshAgent_get_obstacleAvoidanceType_mE34163AD71944C30335B61CAA5024F4C7E585EFE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_get_obstacleAvoidanceType_mE34163AD71944C30335B61CAA5024F4C7E585EFE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::get_obstacleAvoidanceType()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.AI.NavMeshAgent::set_obstacleAvoidanceType(UnityEngine.AI.ObstacleAvoidanceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_obstacleAvoidanceType_m4EF45925BCFD06A3A0FA64412F91687D40A738EF (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	typedef void (*NavMeshAgent_set_obstacleAvoidanceType_m4EF45925BCFD06A3A0FA64412F91687D40A738EF_ftn) (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F*, int32_t);
	static NavMeshAgent_set_obstacleAvoidanceType_m4EF45925BCFD06A3A0FA64412F91687D40A738EF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_set_obstacleAvoidanceType_m4EF45925BCFD06A3A0FA64412F91687D40A738EF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::set_obstacleAvoidanceType(UnityEngine.AI.ObstacleAvoidanceType)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Int32 UnityEngine.AI.NavMeshAgent::get_avoidancePriority()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NavMeshAgent_get_avoidancePriority_m869E039275C430F74191DF92A8B4FAB1364BC4A3 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*NavMeshAgent_get_avoidancePriority_m869E039275C430F74191DF92A8B4FAB1364BC4A3_ftn) (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F*);
	static NavMeshAgent_get_avoidancePriority_m869E039275C430F74191DF92A8B4FAB1364BC4A3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_get_avoidancePriority_m869E039275C430F74191DF92A8B4FAB1364BC4A3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::get_avoidancePriority()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.AI.NavMeshAgent::set_avoidancePriority(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_avoidancePriority_m32203249C25C68E57764E9B6DB987D97EA846EC9 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	typedef void (*NavMeshAgent_set_avoidancePriority_m32203249C25C68E57764E9B6DB987D97EA846EC9_ftn) (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F*, int32_t);
	static NavMeshAgent_set_avoidancePriority_m32203249C25C68E57764E9B6DB987D97EA846EC9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_set_avoidancePriority_m32203249C25C68E57764E9B6DB987D97EA846EC9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::set_avoidancePriority(System.Int32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.AI.NavMeshAgent::get_isOnNavMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_get_isOnNavMesh_m2463F49C3F37E9D3F68C04300FE5AF310C924405 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, const RuntimeMethod* method) 
{
	typedef bool (*NavMeshAgent_get_isOnNavMesh_m2463F49C3F37E9D3F68C04300FE5AF310C924405_ftn) (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F*);
	static NavMeshAgent_get_isOnNavMesh_m2463F49C3F37E9D3F68C04300FE5AF310C924405_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_get_isOnNavMesh_m2463F49C3F37E9D3F68C04300FE5AF310C924405_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::get_isOnNavMesh()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.AI.NavMeshAgent::SetDestination_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_SetDestination_Injected_mC3EF405F5AAFF9F98C5D5AECAD641525CDF742EA (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___target0, const RuntimeMethod* method) 
{
	typedef bool (*NavMeshAgent_SetDestination_Injected_mC3EF405F5AAFF9F98C5D5AECAD641525CDF742EA_ftn) (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static NavMeshAgent_SetDestination_Injected_mC3EF405F5AAFF9F98C5D5AECAD641525CDF742EA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_SetDestination_Injected_mC3EF405F5AAFF9F98C5D5AECAD641525CDF742EA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::SetDestination_Injected(UnityEngine.Vector3&)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___target0);
	return icallRetVal;
}
// System.Void UnityEngine.AI.NavMeshAgent::get_destination_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_get_destination_Injected_m864513574C2AD2BA558D85B213CC518C064F893A (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___ret0, const RuntimeMethod* method) 
{
	typedef void (*NavMeshAgent_get_destination_Injected_m864513574C2AD2BA558D85B213CC518C064F893A_ftn) (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static NavMeshAgent_get_destination_Injected_m864513574C2AD2BA558D85B213CC518C064F893A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_get_destination_Injected_m864513574C2AD2BA558D85B213CC518C064F893A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::get_destination_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.AI.NavMeshAgent::get_velocity_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_get_velocity_Injected_m40A3E476CECB49AE84CA70761FB01FB5644B1735 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___ret0, const RuntimeMethod* method) 
{
	typedef void (*NavMeshAgent_get_velocity_Injected_m40A3E476CECB49AE84CA70761FB01FB5644B1735_ftn) (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static NavMeshAgent_get_velocity_Injected_m40A3E476CECB49AE84CA70761FB01FB5644B1735_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_get_velocity_Injected_m40A3E476CECB49AE84CA70761FB01FB5644B1735_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::get_velocity_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.AI.NavMeshAgent::set_nextPosition_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_nextPosition_Injected_m2BE7FC0BB19304F18AC625CC08CE9E64974386AB (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___value0, const RuntimeMethod* method) 
{
	typedef void (*NavMeshAgent_set_nextPosition_Injected_m2BE7FC0BB19304F18AC625CC08CE9E64974386AB_ftn) (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static NavMeshAgent_set_nextPosition_Injected_m2BE7FC0BB19304F18AC625CC08CE9E64974386AB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_set_nextPosition_Injected_m2BE7FC0BB19304F18AC625CC08CE9E64974386AB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::set_nextPosition_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.AI.NavMeshAgent::get_desiredVelocity_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_get_desiredVelocity_Injected_m8793EE07C8733261F15C392B983113CBD225DA41 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___ret0, const RuntimeMethod* method) 
{
	typedef void (*NavMeshAgent_get_desiredVelocity_Injected_m8793EE07C8733261F15C392B983113CBD225DA41_ftn) (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static NavMeshAgent_get_desiredVelocity_Injected_m8793EE07C8733261F15C392B983113CBD225DA41_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_get_desiredVelocity_Injected_m8793EE07C8733261F15C392B983113CBD225DA41_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::get_desiredVelocity_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.AI.NavMeshAgent::GetCurrentOffMeshLinkDataInternal_Injected(UnityEngine.AI.OffMeshLinkData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_GetCurrentOffMeshLinkDataInternal_Injected_m20A673BF8CB87029AC2119A6C24B648EF624BDB6 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, OffMeshLinkData_t5E81CBAC1FBAA5F25A447B7A9CC04EF59AE6D1D0* ___ret0, const RuntimeMethod* method) 
{
	typedef void (*NavMeshAgent_GetCurrentOffMeshLinkDataInternal_Injected_m20A673BF8CB87029AC2119A6C24B648EF624BDB6_ftn) (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F*, OffMeshLinkData_t5E81CBAC1FBAA5F25A447B7A9CC04EF59AE6D1D0*);
	static NavMeshAgent_GetCurrentOffMeshLinkDataInternal_Injected_m20A673BF8CB87029AC2119A6C24B648EF624BDB6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_GetCurrentOffMeshLinkDataInternal_Injected_m20A673BF8CB87029AC2119A6C24B648EF624BDB6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::GetCurrentOffMeshLinkDataInternal_Injected(UnityEngine.AI.OffMeshLinkData&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Boolean UnityEngine.AI.NavMeshAgent::Warp_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_Warp_Injected_m408EB62DABE62C1C5B568598DBF54FDCA502E56E (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___newPosition0, const RuntimeMethod* method) 
{
	typedef bool (*NavMeshAgent_Warp_Injected_m408EB62DABE62C1C5B568598DBF54FDCA502E56E_ftn) (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static NavMeshAgent_Warp_Injected_m408EB62DABE62C1C5B568598DBF54FDCA502E56E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_Warp_Injected_m408EB62DABE62C1C5B568598DBF54FDCA502E56E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::Warp_Injected(UnityEngine.Vector3&)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___newPosition0);
	return icallRetVal;
}
// System.Void UnityEngine.AI.NavMeshAgent::Move_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_Move_Injected_m470CF469F6DE021B2C44A4CB3619AC9C441491D8 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___offset0, const RuntimeMethod* method) 
{
	typedef void (*NavMeshAgent_Move_Injected_m470CF469F6DE021B2C44A4CB3619AC9C441491D8_ftn) (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static NavMeshAgent_Move_Injected_m470CF469F6DE021B2C44A4CB3619AC9C441491D8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_Move_Injected_m470CF469F6DE021B2C44A4CB3619AC9C441491D8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::Move_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___offset0);
}
// System.Boolean UnityEngine.AI.NavMeshAgent::CalculatePathInternal_Injected(UnityEngine.Vector3&,UnityEngine.AI.NavMeshPath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_CalculatePathInternal_Injected_m07BFBF7B199DE22CB3AB819BACA56953D2C56C06 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___targetPosition0, NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* ___path1, const RuntimeMethod* method) 
{
	typedef bool (*NavMeshAgent_CalculatePathInternal_Injected_m07BFBF7B199DE22CB3AB819BACA56953D2C56C06_ftn) (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7*);
	static NavMeshAgent_CalculatePathInternal_Injected_m07BFBF7B199DE22CB3AB819BACA56953D2C56C06_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_CalculatePathInternal_Injected_m07BFBF7B199DE22CB3AB819BACA56953D2C56C06_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::CalculatePathInternal_Injected(UnityEngine.Vector3&,UnityEngine.AI.NavMeshPath)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___targetPosition0, ___path1);
	return icallRetVal;
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
// UnityEngine.AI.OffMeshLinkType UnityEngine.AI.OffMeshLinkData::get_linkType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OffMeshLinkData_get_linkType_mAAED25B893C730527A303F9B0D2D720337987418 (OffMeshLinkData_t5E81CBAC1FBAA5F25A447B7A9CC04EF59AE6D1D0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_LinkType_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t OffMeshLinkData_get_linkType_mAAED25B893C730527A303F9B0D2D720337987418_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	OffMeshLinkData_t5E81CBAC1FBAA5F25A447B7A9CC04EF59AE6D1D0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<OffMeshLinkData_t5E81CBAC1FBAA5F25A447B7A9CC04EF59AE6D1D0*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = OffMeshLinkData_get_linkType_mAAED25B893C730527A303F9B0D2D720337987418_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector3 UnityEngine.AI.OffMeshLinkData::get_endPos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 OffMeshLinkData_get_endPos_m51E9004D45E0DC1D9481DEED18E344CD7EFED7A8 (OffMeshLinkData_t5E81CBAC1FBAA5F25A447B7A9CC04EF59AE6D1D0* __this, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_EndPos_5;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 OffMeshLinkData_get_endPos_m51E9004D45E0DC1D9481DEED18E344CD7EFED7A8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	OffMeshLinkData_t5E81CBAC1FBAA5F25A447B7A9CC04EF59AE6D1D0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<OffMeshLinkData_t5E81CBAC1FBAA5F25A447B7A9CC04EF59AE6D1D0*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = OffMeshLinkData_get_endPos_m51E9004D45E0DC1D9481DEED18E344CD7EFED7A8_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.AI.OffMeshLink UnityEngine.AI.OffMeshLinkData::get_offMeshLink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OffMeshLink_t0DBF49E03E8580A182BB9F866746DFDF1FB795FD* OffMeshLinkData_get_offMeshLink_mCE63ED9125991BDEB961C01E4C8C957F396B9CEE (OffMeshLinkData_t5E81CBAC1FBAA5F25A447B7A9CC04EF59AE6D1D0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_InstanceID_2;
		OffMeshLink_t0DBF49E03E8580A182BB9F866746DFDF1FB795FD* L_1;
		L_1 = OffMeshLinkData_GetOffMeshLinkInternal_m2CC1F17C51504500EB52B1FA0E74D8AA65E44199(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  OffMeshLink_t0DBF49E03E8580A182BB9F866746DFDF1FB795FD* OffMeshLinkData_get_offMeshLink_mCE63ED9125991BDEB961C01E4C8C957F396B9CEE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	OffMeshLinkData_t5E81CBAC1FBAA5F25A447B7A9CC04EF59AE6D1D0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<OffMeshLinkData_t5E81CBAC1FBAA5F25A447B7A9CC04EF59AE6D1D0*>(__this + _offset);
	OffMeshLink_t0DBF49E03E8580A182BB9F866746DFDF1FB795FD* _returnValue;
	_returnValue = OffMeshLinkData_get_offMeshLink_mCE63ED9125991BDEB961C01E4C8C957F396B9CEE(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.AI.OffMeshLink UnityEngine.AI.OffMeshLinkData::GetOffMeshLinkInternal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OffMeshLink_t0DBF49E03E8580A182BB9F866746DFDF1FB795FD* OffMeshLinkData_GetOffMeshLinkInternal_m2CC1F17C51504500EB52B1FA0E74D8AA65E44199 (int32_t ___instanceID0, const RuntimeMethod* method) 
{
	typedef OffMeshLink_t0DBF49E03E8580A182BB9F866746DFDF1FB795FD* (*OffMeshLinkData_GetOffMeshLinkInternal_m2CC1F17C51504500EB52B1FA0E74D8AA65E44199_ftn) (int32_t);
	static OffMeshLinkData_GetOffMeshLinkInternal_m2CC1F17C51504500EB52B1FA0E74D8AA65E44199_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (OffMeshLinkData_GetOffMeshLinkInternal_m2CC1F17C51504500EB52B1FA0E74D8AA65E44199_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.OffMeshLinkData::GetOffMeshLinkInternal(System.Int32)");
	OffMeshLink_t0DBF49E03E8580A182BB9F866746DFDF1FB795FD* icallRetVal = _il2cpp_icall_func(___instanceID0);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.AI.OffMeshLink::get_area()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OffMeshLink_get_area_m22933F2D04CD0BBE5048C5F377184669B429A754 (OffMeshLink_t0DBF49E03E8580A182BB9F866746DFDF1FB795FD* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*OffMeshLink_get_area_m22933F2D04CD0BBE5048C5F377184669B429A754_ftn) (OffMeshLink_t0DBF49E03E8580A182BB9F866746DFDF1FB795FD*);
	static OffMeshLink_get_area_m22933F2D04CD0BBE5048C5F377184669B429A754_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (OffMeshLink_get_area_m22933F2D04CD0BBE5048C5F377184669B429A754_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.OffMeshLink::get_area()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.AI.OffMeshLink::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OffMeshLink__ctor_m4A49ABF8B6C05AB98A90A7E921CD3837DAA916C1 (OffMeshLink_t0DBF49E03E8580A182BB9F866746DFDF1FB795FD* __this, const RuntimeMethod* method) 
{
	{
		Behaviour__ctor_m00422B6EFEA829BCB116D715E74F1EAD2CB6F4F8(__this, NULL);
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
// UnityEngine.Vector3 UnityEngine.AI.NavMeshHit::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 NavMeshHit_get_position_m09E8FF6DEF5BFA3F30B3C4BCA4642442FF1BCBF1 (NavMeshHit_t6323FC1F2D00E24FBFFC3E27C2F349A3BAD16F8B* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_Position_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 NavMeshHit_get_position_m09E8FF6DEF5BFA3F30B3C4BCA4642442FF1BCBF1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	NavMeshHit_t6323FC1F2D00E24FBFFC3E27C2F349A3BAD16F8B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NavMeshHit_t6323FC1F2D00E24FBFFC3E27C2F349A3BAD16F8B*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = NavMeshHit_get_position_m09E8FF6DEF5BFA3F30B3C4BCA4642442FF1BCBF1(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.AI.NavMesh::Internal_CallOnNavMeshPreUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMesh_Internal_CallOnNavMeshPreUpdate_m80148CFDD0C6F1DDDE5B3DA67A8D9613043A4233 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NavMesh_t3543D236ABB9A67F696BCF9440D669A1578B3D46_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* L_0 = ((NavMesh_t3543D236ABB9A67F696BCF9440D669A1578B3D46_StaticFields*)il2cpp_codegen_static_fields_for(NavMesh_t3543D236ABB9A67F696BCF9440D669A1578B3D46_il2cpp_TypeInfo_var))->___onPreUpdate_0;
		V_0 = (bool)((!(((RuntimeObject*)(OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* L_2 = ((NavMesh_t3543D236ABB9A67F696BCF9440D669A1578B3D46_StaticFields*)il2cpp_codegen_static_fields_for(NavMesh_t3543D236ABB9A67F696BCF9440D669A1578B3D46_il2cpp_TypeInfo_var))->___onPreUpdate_0;
		NullCheck(L_2);
		OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914_inline(L_2, NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Boolean UnityEngine.AI.NavMesh::CalculatePath(UnityEngine.Vector3,UnityEngine.Vector3,System.Int32,UnityEngine.AI.NavMeshPath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMesh_CalculatePath_m2D0FF786CDEA88E7490ABA4582967087006F6E5E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___sourcePosition0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition1, int32_t ___areaMask2, NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* ___path3, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_0 = ___path3;
		NullCheck(L_0);
		NavMeshPath_ClearCorners_m8633C3989850C01982EBD3D4BC70E85AF461CE5B(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___sourcePosition0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___targetPosition1;
		int32_t L_3 = ___areaMask2;
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_4 = ___path3;
		bool L_5;
		L_5 = NavMesh_CalculatePathInternal_m41F1F0B17C50CEF69000295E6D8F010711431896(L_1, L_2, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Boolean UnityEngine.AI.NavMesh::CalculatePathInternal(UnityEngine.Vector3,UnityEngine.Vector3,System.Int32,UnityEngine.AI.NavMeshPath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMesh_CalculatePathInternal_m41F1F0B17C50CEF69000295E6D8F010711431896 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___sourcePosition0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition1, int32_t ___areaMask2, NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* ___path3, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___areaMask2;
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_1 = ___path3;
		bool L_2;
		L_2 = NavMesh_CalculatePathInternal_Injected_m1A3CD6FB027FDE465104295B32C0767ABEB4EBBA((&___sourcePosition0), (&___targetPosition1), L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.AI.NavMesh::SamplePosition(UnityEngine.Vector3,UnityEngine.AI.NavMeshHit&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMesh_SamplePosition_m51497866E71DD5263425E8572F2232D496E8F65A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___sourcePosition0, NavMeshHit_t6323FC1F2D00E24FBFFC3E27C2F349A3BAD16F8B* ___hit1, float ___maxDistance2, int32_t ___areaMask3, const RuntimeMethod* method) 
{
	{
		NavMeshHit_t6323FC1F2D00E24FBFFC3E27C2F349A3BAD16F8B* L_0 = ___hit1;
		float L_1 = ___maxDistance2;
		int32_t L_2 = ___areaMask3;
		bool L_3;
		L_3 = NavMesh_SamplePosition_Injected_m59777E11E947B46F60E9BCDF8C7CCFFAA5529E0D((&___sourcePosition0), L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Int32 UnityEngine.AI.NavMesh::GetAreaFromName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NavMesh_GetAreaFromName_m4E45AABCA8F23DD9D1600807600157664D624BD8 (String_t* ___areaName0, const RuntimeMethod* method) 
{
	typedef int32_t (*NavMesh_GetAreaFromName_m4E45AABCA8F23DD9D1600807600157664D624BD8_ftn) (String_t*);
	static NavMesh_GetAreaFromName_m4E45AABCA8F23DD9D1600807600157664D624BD8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMesh_GetAreaFromName_m4E45AABCA8F23DD9D1600807600157664D624BD8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMesh::GetAreaFromName(System.String)");
	int32_t icallRetVal = _il2cpp_icall_func(___areaName0);
	return icallRetVal;
}
// System.Boolean UnityEngine.AI.NavMesh::CalculatePathInternal_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Int32,UnityEngine.AI.NavMeshPath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMesh_CalculatePathInternal_Injected_m1A3CD6FB027FDE465104295B32C0767ABEB4EBBA (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___sourcePosition0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___targetPosition1, int32_t ___areaMask2, NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* ___path3, const RuntimeMethod* method) 
{
	typedef bool (*NavMesh_CalculatePathInternal_Injected_m1A3CD6FB027FDE465104295B32C0767ABEB4EBBA_ftn) (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, int32_t, NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7*);
	static NavMesh_CalculatePathInternal_Injected_m1A3CD6FB027FDE465104295B32C0767ABEB4EBBA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMesh_CalculatePathInternal_Injected_m1A3CD6FB027FDE465104295B32C0767ABEB4EBBA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMesh::CalculatePathInternal_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Int32,UnityEngine.AI.NavMeshPath)");
	bool icallRetVal = _il2cpp_icall_func(___sourcePosition0, ___targetPosition1, ___areaMask2, ___path3);
	return icallRetVal;
}
// System.Boolean UnityEngine.AI.NavMesh::SamplePosition_Injected(UnityEngine.Vector3&,UnityEngine.AI.NavMeshHit&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMesh_SamplePosition_Injected_m59777E11E947B46F60E9BCDF8C7CCFFAA5529E0D (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___sourcePosition0, NavMeshHit_t6323FC1F2D00E24FBFFC3E27C2F349A3BAD16F8B* ___hit1, float ___maxDistance2, int32_t ___areaMask3, const RuntimeMethod* method) 
{
	typedef bool (*NavMesh_SamplePosition_Injected_m59777E11E947B46F60E9BCDF8C7CCFFAA5529E0D_ftn) (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, NavMeshHit_t6323FC1F2D00E24FBFFC3E27C2F349A3BAD16F8B*, float, int32_t);
	static NavMesh_SamplePosition_Injected_m59777E11E947B46F60E9BCDF8C7CCFFAA5529E0D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMesh_SamplePosition_Injected_m59777E11E947B46F60E9BCDF8C7CCFFAA5529E0D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMesh::SamplePosition_Injected(UnityEngine.Vector3&,UnityEngine.AI.NavMeshHit&,System.Single,System.Int32)");
	bool icallRetVal = _il2cpp_icall_func(___sourcePosition0, ___hit1, ___maxDistance2, ___areaMask3);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914_Multicast(OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* currentDelegate = reinterpret_cast<OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914_Open(OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914_OpenStaticInvoker(OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914_ClosedStaticInvoker(OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7 (OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.AI.NavMesh/OnNavMeshPreUpdate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnNavMeshPreUpdate__ctor_m7142A3AA991BE50B637A16D946AB7604C64EF9BA (OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914_Multicast;
}
// System.Void UnityEngine.AI.NavMesh/OnNavMeshPreUpdate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914 (OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t OffMeshLinkData_get_linkType_mAAED25B893C730527A303F9B0D2D720337987418_inline (OffMeshLinkData_t5E81CBAC1FBAA5F25A447B7A9CC04EF59AE6D1D0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_LinkType_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 OffMeshLinkData_get_endPos_m51E9004D45E0DC1D9481DEED18E344CD7EFED7A8_inline (OffMeshLinkData_t5E81CBAC1FBAA5F25A447B7A9CC04EF59AE6D1D0* __this, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_EndPos_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914_inline (OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
