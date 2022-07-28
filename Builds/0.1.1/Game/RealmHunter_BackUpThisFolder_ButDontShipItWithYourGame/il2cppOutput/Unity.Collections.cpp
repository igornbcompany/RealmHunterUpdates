#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2*, T3, T4*, T5*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4* p4, T5* p5)
	{
		void* params[5] = { p1, p2, &p3, p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerActionInvoker6;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerActionInvoker6<T1*, T2*, T3*, T4, T5*, T6*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4 p4, T5* p5, T6* p6)
	{
		void* params[6] = { p1, p2, p3, &p4, p5, p6 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		R ret;
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		R ret;
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3, T4*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4* p4)
	{
		R ret;
		void* params[4] = { p1, p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5<R, T1*, T2*, T3*, T4, T5*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4 p4, T5* p5)
	{
		R ret;
		void* params[5] = { p1, p2, p3, &p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Unity.Collections.AllocatorManager/TryFunction[]
struct TryFunctionU5BU5D_tDCC5B9036B1E592E072B5ED36243CCA274E75FF5;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Unity.Collections.BurstCompatibleAttribute
struct BurstCompatibleAttribute_t7DBA05449A9B9465DA64583FEC5E6FA3138D75BD;
// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
// Unity.Collections.CreatePropertyAttribute
struct CreatePropertyAttribute_tE99286E9956A00FC302542DA09D73B4C52B6E19A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t02DB10C6AF87332FEE7D19025B26687C7B784141;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Runtime.CompilerServices.IsUnmanagedAttribute
struct IsUnmanagedAttribute_tA4BF73E3582F0C271AD8AD4501C839CE5D557059;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Unity.Collections.NotBurstCompatibleAttribute
struct NotBurstCompatibleAttribute_t18678FEA8508936803CF26D0DFA77DA354F8721C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Unity.Collections.AllocatorManager/TryFunction
struct TryFunction_tC277E17D1D6AD4EF20C1FC1D8F91A559208AA5CA;
// Unity.Collections.RewindableAllocator/Unity.Collections.Try_00000732$PostfixBurstDelegate
struct Try_00000732U24PostfixBurstDelegate_t4BAC9734E19ADA2BDFE5826ED6C030FB1A743697;
// Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000770$PostfixBurstDelegate
struct Hash128Long_00000770U24PostfixBurstDelegate_t465BDAD95315333D41C341EBD47FE4F629555038;
// Unity.Collections.xxHash3/Unity.Collections.Hash64Long_00000769$PostfixBurstDelegate
struct Hash64Long_00000769U24PostfixBurstDelegate_t6B1CD155B058EDDE4C693B8A52B462FBC4049F62;
// Unity.Collections.AllocatorManager/SlabAllocator/Try_00000A1A$PostfixBurstDelegate
struct Try_00000A1AU24PostfixBurstDelegate_t98CCB5837EDA7DC49FBF71E1FA18480267218A1D;
// Unity.Collections.AllocatorManager/StackAllocator/Try_00000A0C$PostfixBurstDelegate
struct Try_00000A0CU24PostfixBurstDelegate_t96B837C93119DF6D792B4064284CFFB491C86272;

IL2CPP_EXTERN_C RuntimeClass* AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Hash128Long_00000770U24BurstDirectCall_tA453B39A0B08507B472F985F7D9086A85E22CFFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Hash64Long_00000769U24BurstDirectCall_tCB68055E3DECA22A01777D16D1C3024A66FB6D94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Managed_t7CB1B315B8E0E50EE8A2993B3E4CDF35E2B4909D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TableEntry_tC168732547D3913880E602CC895BCCDAED550A04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TryFunctionU5BU5D_tDCC5B9036B1E592E072B5ED36243CCA274E75FF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Try_00000732U24BurstDirectCall_t28B16B97A00C3DB614657AB878D0FF496041E1C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Try_00000A0CU24BurstDirectCall_t6914F9B847539B29521FF1DD1E19FD3F8369EDEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Try_00000A1AU24BurstDirectCall_t970F9722E1AFBB5D8419EC11F27DBC08866F197B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0B09149353C3D49907DDBE06523B8B7635EFEADE;
IL2CPP_EXTERN_C String_t* _stringLiteral302B11189380770261D2D54C98E0C8E27DF7E27F;
IL2CPP_EXTERN_C String_t* _stringLiteral55E10EEA67F908C03E76CA4B92A10DD2FA288A89;
IL2CPP_EXTERN_C const RuntimeMethod* AllocatorManager_forward_mono_allocate_block_mA4344DF1E601F7EC9AD85B7B5406225B4091567D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array32768_1_ElementAt_mAF50A1B3FAA1E10902B5B1A6AFD81BE97AF4B59F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FixedList4096Bytes_1_get_Item_m66E600C4B66D1691D91DF8BDEEBEABB148273BDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FixedList4096Bytes_1_get_Length_m5966340B356C0C2E1101474A1C7195300442C323_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FixedList4096Bytes_1_set_Item_m47AF31B8AFFE448D04FE04B053D31CED5CAC42A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FunctionPointer_1__ctor_mA6464FB1EEC3C76906932127ADC88D71257A9CB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FunctionPointer_1_get_Invoke_m97C18B13503F4392E7606936FDC209ECE77A7EFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewindableAllocator_Dispose_mD873C81842DAEBF01369B8023805FF930C4C8A2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewindableAllocator_Rewind_m8EB623F05C707C3AF52FF082A7C095FE3A1CE595_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewindableAllocator_TryU24BurstManaged_m9FC90FBCAB23681675E5FF0BBE59BB7D5058ED52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewindableAllocator_Try_mFA247929359660CC33023F374ED76B43812B9115_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SharedStatic_1_GetOrCreate_TisTableEntry_tC168732547D3913880E602CC895BCCDAED550A04_m308596CEEBCC9D147B8A49219CBFE11474468B2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SharedStatic_1_get_Data_m8180C13CDCA02B5FA3E363D8259EDD6AE7BC49B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SlabAllocator_TryU24BurstManaged_m484D87FD1C7B43A0E6B77864265E0370AC734EA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SlabAllocator_Try_mBC7DA9938F61EC1FA877854A3F095EB8CA5D4AE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StackAllocator_TryU24BurstManaged_m8C725A7308CCA2FCF709053D2660D37BBB1990E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StackAllocator_Try_mAE50C02088BB7F9E154A124C00E7BF1C3DF1B0B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnmanagedArray_1_Dispose_m6633B12AACEBE579F9A33E39939490C0F9078F66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnmanagedArray_1_get_Item_mE315B3406730DD2D42AF15133B69737FF041A160_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA94227A91767A544A21D2C393D318C5F0C926819_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* xxHash3_Hash128LongU24BurstManaged_m08DB7B8209EBE3584489E17EBB40B64D29F9C9B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* xxHash3_Hash128Long_mB811A64DE35E597BEF6A1F1566456674B26FA2C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* xxHash3_Hash64LongU24BurstManaged_mD990588FAC78D5CBFC165A8404B27BDE4FB2B3E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* xxHash3_Hash64Long_m139E7D0E4F9BEE31A67C6B0DA3D89AA93773D4B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Hash128Long_00000770U24PostfixBurstDelegate_t465BDAD95315333D41C341EBD47FE4F629555038_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Hash64Long_00000769U24PostfixBurstDelegate_t6B1CD155B058EDDE4C693B8A52B462FBC4049F62_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Try_00000732U24PostfixBurstDelegate_t4BAC9734E19ADA2BDFE5826ED6C030FB1A743697_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Try_00000A0CU24PostfixBurstDelegate_t96B837C93119DF6D792B4064284CFFB491C86272_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Try_00000A1AU24PostfixBurstDelegate_t98CCB5837EDA7DC49FBF71E1FA18480267218A1D_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct TryFunctionU5BU5D_tDCC5B9036B1E592E072B5ED36243CCA274E75FF5;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tA52E71F6F7203C8166EF9F4D0375AB04277990CA 
{
};

// $BurstDirectCallInitializer
struct U24BurstDirectCallInitializer_tA1A76DB7D22C7A6F0D0A955A4E82DA30C35D0CBD  : public RuntimeObject
{
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// Unity.Collections.CollectionHelper
struct CollectionHelper_tFFE15A31BD8AE2BE545F4A412EC3C11352298482  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Unity.Collections.NativeArrayExtensions
struct NativeArrayExtensions_t9A6F3FA904DDB64CC47FB8CECF1EE92FAFD47BA2  : public RuntimeObject
{
};

// Unity.Collections.LowLevel.Unsafe.NativeListUnsafeUtility
struct NativeListUnsafeUtility_t76856F085F46022FE3879DD4EE833AE8FE1EFB19  : public RuntimeObject
{
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

// Unity.Collections.xxHash3
struct xxHash3_t1B0090718977D51798C540A03964F9CB74D52462  : public RuntimeObject
{
};

// Unity.Collections.AllocatorManager/Managed
struct Managed_t7CB1B315B8E0E50EE8A2993B3E4CDF35E2B4909D  : public RuntimeObject
{
};

struct Managed_t7CB1B315B8E0E50EE8A2993B3E4CDF35E2B4909D_StaticFields
{
	// Unity.Collections.AllocatorManager/TryFunction[] Unity.Collections.AllocatorManager/Managed::TryFunctionDelegates
	TryFunctionU5BU5D_tDCC5B9036B1E592E072B5ED36243CCA274E75FF5* ___TryFunctionDelegates_0;
};

// Unity.Collections.AllocatorManager/SharedStatics
struct SharedStatics_t1BB591F9E205BC35764C232444F95ED00379162D  : public RuntimeObject
{
};

// Unity.Burst.SharedStatic`1<Unity.Collections.AllocatorManager/Array32768`1<Unity.Collections.AllocatorManager/TableEntry>>
struct SharedStatic_1_t129696039C3927DC9D39A2FADEBB24D67B1CD74E 
{
	// System.Void* Unity.Burst.SharedStatic`1::_buffer
	void* ____buffer_0;
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

// Unity.Collections.BurstCompatibleAttribute
struct BurstCompatibleAttribute_t7DBA05449A9B9465DA64583FEC5E6FA3138D75BD  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Type[] Unity.Collections.BurstCompatibleAttribute::<GenericTypeArguments>k__BackingField
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___U3CGenericTypeArgumentsU3Ek__BackingField_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// Unity.Collections.CreatePropertyAttribute
struct CreatePropertyAttribute_tE99286E9956A00FC302542DA09D73B4C52B6E19A  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t02DB10C6AF87332FEE7D19025B26687C7B784141  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// Unity.Collections.FixedBytes16
struct FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// System.Byte Unity.Collections.FixedBytes16::byte0000
					uint8_t ___byte0000_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint8_t ___byte0000_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0001_1_OffsetPadding[1];
					// System.Byte Unity.Collections.FixedBytes16::byte0001
					uint8_t ___byte0001_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0001_1_OffsetPadding_forAlignmentOnly[1];
					uint8_t ___byte0001_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0002_2_OffsetPadding[2];
					// System.Byte Unity.Collections.FixedBytes16::byte0002
					uint8_t ___byte0002_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0002_2_OffsetPadding_forAlignmentOnly[2];
					uint8_t ___byte0002_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0003_3_OffsetPadding[3];
					// System.Byte Unity.Collections.FixedBytes16::byte0003
					uint8_t ___byte0003_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0003_3_OffsetPadding_forAlignmentOnly[3];
					uint8_t ___byte0003_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0004_4_OffsetPadding[4];
					// System.Byte Unity.Collections.FixedBytes16::byte0004
					uint8_t ___byte0004_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0004_4_OffsetPadding_forAlignmentOnly[4];
					uint8_t ___byte0004_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0005_5_OffsetPadding[5];
					// System.Byte Unity.Collections.FixedBytes16::byte0005
					uint8_t ___byte0005_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0005_5_OffsetPadding_forAlignmentOnly[5];
					uint8_t ___byte0005_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0006_6_OffsetPadding[6];
					// System.Byte Unity.Collections.FixedBytes16::byte0006
					uint8_t ___byte0006_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0006_6_OffsetPadding_forAlignmentOnly[6];
					uint8_t ___byte0006_6_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0007_7_OffsetPadding[7];
					// System.Byte Unity.Collections.FixedBytes16::byte0007
					uint8_t ___byte0007_7;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0007_7_OffsetPadding_forAlignmentOnly[7];
					uint8_t ___byte0007_7_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0008_8_OffsetPadding[8];
					// System.Byte Unity.Collections.FixedBytes16::byte0008
					uint8_t ___byte0008_8;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0008_8_OffsetPadding_forAlignmentOnly[8];
					uint8_t ___byte0008_8_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0009_9_OffsetPadding[9];
					// System.Byte Unity.Collections.FixedBytes16::byte0009
					uint8_t ___byte0009_9;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0009_9_OffsetPadding_forAlignmentOnly[9];
					uint8_t ___byte0009_9_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0010_10_OffsetPadding[10];
					// System.Byte Unity.Collections.FixedBytes16::byte0010
					uint8_t ___byte0010_10;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0010_10_OffsetPadding_forAlignmentOnly[10];
					uint8_t ___byte0010_10_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0011_11_OffsetPadding[11];
					// System.Byte Unity.Collections.FixedBytes16::byte0011
					uint8_t ___byte0011_11;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0011_11_OffsetPadding_forAlignmentOnly[11];
					uint8_t ___byte0011_11_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0012_12_OffsetPadding[12];
					// System.Byte Unity.Collections.FixedBytes16::byte0012
					uint8_t ___byte0012_12;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0012_12_OffsetPadding_forAlignmentOnly[12];
					uint8_t ___byte0012_12_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0013_13_OffsetPadding[13];
					// System.Byte Unity.Collections.FixedBytes16::byte0013
					uint8_t ___byte0013_13;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0013_13_OffsetPadding_forAlignmentOnly[13];
					uint8_t ___byte0013_13_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0014_14_OffsetPadding[14];
					// System.Byte Unity.Collections.FixedBytes16::byte0014
					uint8_t ___byte0014_14;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0014_14_OffsetPadding_forAlignmentOnly[14];
					uint8_t ___byte0014_14_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0015_15_OffsetPadding[15];
					// System.Byte Unity.Collections.FixedBytes16::byte0015
					uint8_t ___byte0015_15;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0015_15_OffsetPadding_forAlignmentOnly[15];
					uint8_t ___byte0015_15_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0__padding[16];
	};
};

// Unity.Collections.FixedList
struct FixedList_t0AE1DE9A0080EEA493060F3A2BA9D82F272BE9A2 
{
	union
	{
		struct
		{
		};
		uint8_t FixedList_t0AE1DE9A0080EEA493060F3A2BA9D82F272BE9A2__padding[1];
	};
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// System.Runtime.CompilerServices.IsUnmanagedAttribute
struct IsUnmanagedAttribute_tA4BF73E3582F0C271AD8AD4501C839CE5D557059  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// Unity.Collections.Memory
struct Memory_t1CFA31375CE2BD22D3FC5859A3DD18B7B247A1F5 
{
	union
	{
		struct
		{
		};
		uint8_t Memory_t1CFA31375CE2BD22D3FC5859A3DD18B7B247A1F5__padding[1];
	};
};

// Unity.Collections.NotBurstCompatibleAttribute
struct NotBurstCompatibleAttribute_t18678FEA8508936803CF26D0DFA77DA354F8721C  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// Unity.Collections.Spinner
struct Spinner_t9606E334089E448EA313C31DC5EFC9345A58BCEB 
{
	// System.Int32 Unity.Collections.Spinner::m_value
	int32_t ___m_value_0;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
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

// Unity.Mathematics.uint4
struct uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 
{
	// System.UInt32 Unity.Mathematics.uint4::x
	uint32_t ___x_0;
	// System.UInt32 Unity.Mathematics.uint4::y
	uint32_t ___y_1;
	// System.UInt32 Unity.Mathematics.uint4::z
	uint32_t ___z_2;
	// System.UInt32 Unity.Mathematics.uint4::w
	uint32_t ___w_3;
};

// Unity.Burst.Intrinsics.v64
struct v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte Unity.Burst.Intrinsics.v64::Byte0
			uint8_t ___Byte0_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___Byte0_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_1_OffsetPadding[1];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte1
			uint8_t ___Byte1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte1_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___Byte1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_2_OffsetPadding[2];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte2
			uint8_t ___Byte2_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte2_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___Byte2_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_3_OffsetPadding[3];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte3
			uint8_t ___Byte3_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte3_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___Byte3_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte4_4_OffsetPadding[4];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte4
			uint8_t ___Byte4_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte4_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___Byte4_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte5_5_OffsetPadding[5];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte5
			uint8_t ___Byte5_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte5_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___Byte5_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte6_6_OffsetPadding[6];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte6
			uint8_t ___Byte6_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte6_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___Byte6_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte7_7_OffsetPadding[7];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte7
			uint8_t ___Byte7_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte7_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___Byte7_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.SByte Unity.Burst.Intrinsics.v64::SByte0
			int8_t ___SByte0_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___SByte0_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte1_9_OffsetPadding[1];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte1
			int8_t ___SByte1_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte1_9_OffsetPadding_forAlignmentOnly[1];
			int8_t ___SByte1_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte2_10_OffsetPadding[2];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte2
			int8_t ___SByte2_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte2_10_OffsetPadding_forAlignmentOnly[2];
			int8_t ___SByte2_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte3_11_OffsetPadding[3];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte3
			int8_t ___SByte3_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte3_11_OffsetPadding_forAlignmentOnly[3];
			int8_t ___SByte3_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte4_12_OffsetPadding[4];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte4
			int8_t ___SByte4_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte4_12_OffsetPadding_forAlignmentOnly[4];
			int8_t ___SByte4_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte5_13_OffsetPadding[5];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte5
			int8_t ___SByte5_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte5_13_OffsetPadding_forAlignmentOnly[5];
			int8_t ___SByte5_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte6_14_OffsetPadding[6];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte6
			int8_t ___SByte6_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte6_14_OffsetPadding_forAlignmentOnly[6];
			int8_t ___SByte6_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte7_15_OffsetPadding[7];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte7
			int8_t ___SByte7_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte7_15_OffsetPadding_forAlignmentOnly[7];
			int8_t ___SByte7_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt16 Unity.Burst.Intrinsics.v64::UShort0
			uint16_t ___UShort0_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___UShort0_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort1_17_OffsetPadding[2];
			// System.UInt16 Unity.Burst.Intrinsics.v64::UShort1
			uint16_t ___UShort1_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort1_17_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___UShort1_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort2_18_OffsetPadding[4];
			// System.UInt16 Unity.Burst.Intrinsics.v64::UShort2
			uint16_t ___UShort2_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort2_18_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___UShort2_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort3_19_OffsetPadding[6];
			// System.UInt16 Unity.Burst.Intrinsics.v64::UShort3
			uint16_t ___UShort3_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort3_19_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___UShort3_19_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 Unity.Burst.Intrinsics.v64::SShort0
			int16_t ___SShort0_20;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___SShort0_20_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort1_21_OffsetPadding[2];
			// System.Int16 Unity.Burst.Intrinsics.v64::SShort1
			int16_t ___SShort1_21;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort1_21_OffsetPadding_forAlignmentOnly[2];
			int16_t ___SShort1_21_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort2_22_OffsetPadding[4];
			// System.Int16 Unity.Burst.Intrinsics.v64::SShort2
			int16_t ___SShort2_22;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort2_22_OffsetPadding_forAlignmentOnly[4];
			int16_t ___SShort2_22_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort3_23_OffsetPadding[6];
			// System.Int16 Unity.Burst.Intrinsics.v64::SShort3
			int16_t ___SShort3_23;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort3_23_OffsetPadding_forAlignmentOnly[6];
			int16_t ___SShort3_23_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 Unity.Burst.Intrinsics.v64::UInt0
			uint32_t ___UInt0_24;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___UInt0_24_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt1_25_OffsetPadding[4];
			// System.UInt32 Unity.Burst.Intrinsics.v64::UInt1
			uint32_t ___UInt1_25;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt1_25_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___UInt1_25_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 Unity.Burst.Intrinsics.v64::SInt0
			int32_t ___SInt0_26;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___SInt0_26_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt1_27_OffsetPadding[4];
			// System.Int32 Unity.Burst.Intrinsics.v64::SInt1
			int32_t ___SInt1_27;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt1_27_OffsetPadding_forAlignmentOnly[4];
			int32_t ___SInt1_27_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 Unity.Burst.Intrinsics.v64::ULong0
			uint64_t ___ULong0_28;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___ULong0_28_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 Unity.Burst.Intrinsics.v64::SLong0
			int64_t ___SLong0_29;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___SLong0_29_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single Unity.Burst.Intrinsics.v64::Float0
			float ___Float0_30;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___Float0_30_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float1_31_OffsetPadding[4];
			// System.Single Unity.Burst.Intrinsics.v64::Float1
			float ___Float1_31;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float1_31_OffsetPadding_forAlignmentOnly[4];
			float ___Float1_31_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double Unity.Burst.Intrinsics.v64::Double0
			double ___Double0_32;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___Double0_32_forAlignmentOnly;
		};
	};
};

// Unity.Collections.AllocatorManager/AllocatorHandle
struct AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 
{
	// System.UInt16 Unity.Collections.AllocatorManager/AllocatorHandle::Index
	uint16_t ___Index_0;
	// System.UInt16 Unity.Collections.AllocatorManager/AllocatorHandle::Version
	uint16_t ___Version_1;
};

// Unity.Collections.Memory/Unmanaged
struct Unmanaged_t06043455F062B5BBF755BE852B0A7AB1876E3310 
{
	union
	{
		struct
		{
		};
		uint8_t Unmanaged_t06043455F062B5BBF755BE852B0A7AB1876E3310__padding[1];
	};
};

// Unity.Collections.RewindableAllocator/MemoryBlock
struct MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84 
{
	// System.Byte* Unity.Collections.RewindableAllocator/MemoryBlock::m_pointer
	uint8_t* ___m_pointer_0;
	// System.Int64 Unity.Collections.RewindableAllocator/MemoryBlock::m_bytes
	int64_t ___m_bytes_1;
	// System.Int64 Unity.Collections.RewindableAllocator/MemoryBlock::m_current
	int64_t ___m_current_2;
	// System.Int64 Unity.Collections.RewindableAllocator/MemoryBlock::m_allocations
	int64_t ___m_allocations_3;
};

// Unity.Mathematics.math/LongDoubleUnion
struct LongDoubleUnion_tD71C400B6C4CD1A7F13CE8125AC6BBC7A22791CA 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 Unity.Mathematics.math/LongDoubleUnion::longValue
			int64_t ___longValue_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___longValue_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double Unity.Mathematics.math/LongDoubleUnion::doubleValue
			double ___doubleValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___doubleValue_1_forAlignmentOnly;
		};
	};
};

// Unity.Collections.Memory/Unmanaged/Array
struct Array_t3B8F006A80A48C83471DE3516556F1AFE6873381 
{
	union
	{
		struct
		{
		};
		uint8_t Array_t3B8F006A80A48C83471DE3516556F1AFE6873381__padding[1];
	};
};

// Unity.Burst.FunctionPointer`1<System.Object>
struct FunctionPointer_1_tE1DC1EC606FB2242FB50357BBA39BB4AEDECFCB2 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<Unity.Collections.AllocatorManager/TryFunction>
struct FunctionPointer_1_tF99F1F7D7E9F1AC1CB5F7DE7BB02E8366FC2097C 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Collections.UnmanagedArray`1<Unity.Collections.RewindableAllocator/MemoryBlock>
struct UnmanagedArray_1_t7A336330780E05C924BB57ED337DDD2A66701FAB 
{
	// System.IntPtr Unity.Collections.UnmanagedArray`1::m_pointer
	intptr_t ___m_pointer_0;
	// System.Int32 Unity.Collections.UnmanagedArray`1::m_length
	int32_t ___m_length_1;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.UnmanagedArray`1::m_allocator
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_allocator_2;
};

// Unity.Collections.AllocatorManager
struct AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C  : public RuntimeObject
{
};

struct AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticFields
{
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.AllocatorManager::Invalid
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Invalid_0;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.AllocatorManager::None
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___None_1;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.AllocatorManager::Temp
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Temp_2;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.AllocatorManager::TempJob
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___TempJob_3;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.AllocatorManager::Persistent
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Persistent_4;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.AllocatorManager::AudioKernel
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___AudioKernel_5;
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

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// Unity.Collections.FixedBytes126
struct FixedBytes126_tC223222E11A3E93A15FE1C62C3429FC169DBC989 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes126::offset0000
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0016_1_OffsetPadding[16];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes126::offset0016
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0016_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0016_1_OffsetPadding_forAlignmentOnly[16];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0016_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0032_2_OffsetPadding[32];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes126::offset0032
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0032_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0032_2_OffsetPadding_forAlignmentOnly[32];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0032_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0048_3_OffsetPadding[48];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes126::offset0048
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0048_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0048_3_OffsetPadding_forAlignmentOnly[48];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0048_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0064_4_OffsetPadding[64];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes126::offset0064
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0064_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0064_4_OffsetPadding_forAlignmentOnly[64];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0064_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0080_5_OffsetPadding[80];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes126::offset0080
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0080_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0080_5_OffsetPadding_forAlignmentOnly[80];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0080_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0096_6_OffsetPadding[96];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes126::offset0096
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0096_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0096_6_OffsetPadding_forAlignmentOnly[96];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0096_6_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0112_7_OffsetPadding[112];
					// System.Byte Unity.Collections.FixedBytes126::byte0112
					uint8_t ___byte0112_7;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0112_7_OffsetPadding_forAlignmentOnly[112];
					uint8_t ___byte0112_7_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0113_8_OffsetPadding[113];
					// System.Byte Unity.Collections.FixedBytes126::byte0113
					uint8_t ___byte0113_8;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0113_8_OffsetPadding_forAlignmentOnly[113];
					uint8_t ___byte0113_8_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0114_9_OffsetPadding[114];
					// System.Byte Unity.Collections.FixedBytes126::byte0114
					uint8_t ___byte0114_9;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0114_9_OffsetPadding_forAlignmentOnly[114];
					uint8_t ___byte0114_9_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0115_10_OffsetPadding[115];
					// System.Byte Unity.Collections.FixedBytes126::byte0115
					uint8_t ___byte0115_10;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0115_10_OffsetPadding_forAlignmentOnly[115];
					uint8_t ___byte0115_10_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0116_11_OffsetPadding[116];
					// System.Byte Unity.Collections.FixedBytes126::byte0116
					uint8_t ___byte0116_11;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0116_11_OffsetPadding_forAlignmentOnly[116];
					uint8_t ___byte0116_11_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0117_12_OffsetPadding[117];
					// System.Byte Unity.Collections.FixedBytes126::byte0117
					uint8_t ___byte0117_12;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0117_12_OffsetPadding_forAlignmentOnly[117];
					uint8_t ___byte0117_12_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0118_13_OffsetPadding[118];
					// System.Byte Unity.Collections.FixedBytes126::byte0118
					uint8_t ___byte0118_13;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0118_13_OffsetPadding_forAlignmentOnly[118];
					uint8_t ___byte0118_13_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0119_14_OffsetPadding[119];
					// System.Byte Unity.Collections.FixedBytes126::byte0119
					uint8_t ___byte0119_14;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0119_14_OffsetPadding_forAlignmentOnly[119];
					uint8_t ___byte0119_14_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0120_15_OffsetPadding[120];
					// System.Byte Unity.Collections.FixedBytes126::byte0120
					uint8_t ___byte0120_15;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0120_15_OffsetPadding_forAlignmentOnly[120];
					uint8_t ___byte0120_15_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0121_16_OffsetPadding[121];
					// System.Byte Unity.Collections.FixedBytes126::byte0121
					uint8_t ___byte0121_16;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0121_16_OffsetPadding_forAlignmentOnly[121];
					uint8_t ___byte0121_16_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0122_17_OffsetPadding[122];
					// System.Byte Unity.Collections.FixedBytes126::byte0122
					uint8_t ___byte0122_17;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0122_17_OffsetPadding_forAlignmentOnly[122];
					uint8_t ___byte0122_17_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0123_18_OffsetPadding[123];
					// System.Byte Unity.Collections.FixedBytes126::byte0123
					uint8_t ___byte0123_18;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0123_18_OffsetPadding_forAlignmentOnly[123];
					uint8_t ___byte0123_18_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0124_19_OffsetPadding[124];
					// System.Byte Unity.Collections.FixedBytes126::byte0124
					uint8_t ___byte0124_19;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0124_19_OffsetPadding_forAlignmentOnly[124];
					uint8_t ___byte0124_19_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0125_20_OffsetPadding[125];
					// System.Byte Unity.Collections.FixedBytes126::byte0125
					uint8_t ___byte0125_20;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0125_20_OffsetPadding_forAlignmentOnly[125];
					uint8_t ___byte0125_20_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes126_tC223222E11A3E93A15FE1C62C3429FC169DBC989__padding[126];
	};
};

// Unity.Collections.FixedBytes30
struct FixedBytes30_t7721F11929A3AC08287DF5E6D7AEF85CCEE04AD2 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes30::offset0000
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0016_1_OffsetPadding[16];
					// System.Byte Unity.Collections.FixedBytes30::byte0016
					uint8_t ___byte0016_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0016_1_OffsetPadding_forAlignmentOnly[16];
					uint8_t ___byte0016_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0017_2_OffsetPadding[17];
					// System.Byte Unity.Collections.FixedBytes30::byte0017
					uint8_t ___byte0017_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0017_2_OffsetPadding_forAlignmentOnly[17];
					uint8_t ___byte0017_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0018_3_OffsetPadding[18];
					// System.Byte Unity.Collections.FixedBytes30::byte0018
					uint8_t ___byte0018_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0018_3_OffsetPadding_forAlignmentOnly[18];
					uint8_t ___byte0018_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0019_4_OffsetPadding[19];
					// System.Byte Unity.Collections.FixedBytes30::byte0019
					uint8_t ___byte0019_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0019_4_OffsetPadding_forAlignmentOnly[19];
					uint8_t ___byte0019_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0020_5_OffsetPadding[20];
					// System.Byte Unity.Collections.FixedBytes30::byte0020
					uint8_t ___byte0020_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0020_5_OffsetPadding_forAlignmentOnly[20];
					uint8_t ___byte0020_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0021_6_OffsetPadding[21];
					// System.Byte Unity.Collections.FixedBytes30::byte0021
					uint8_t ___byte0021_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0021_6_OffsetPadding_forAlignmentOnly[21];
					uint8_t ___byte0021_6_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0022_7_OffsetPadding[22];
					// System.Byte Unity.Collections.FixedBytes30::byte0022
					uint8_t ___byte0022_7;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0022_7_OffsetPadding_forAlignmentOnly[22];
					uint8_t ___byte0022_7_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0023_8_OffsetPadding[23];
					// System.Byte Unity.Collections.FixedBytes30::byte0023
					uint8_t ___byte0023_8;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0023_8_OffsetPadding_forAlignmentOnly[23];
					uint8_t ___byte0023_8_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0024_9_OffsetPadding[24];
					// System.Byte Unity.Collections.FixedBytes30::byte0024
					uint8_t ___byte0024_9;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0024_9_OffsetPadding_forAlignmentOnly[24];
					uint8_t ___byte0024_9_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0025_10_OffsetPadding[25];
					// System.Byte Unity.Collections.FixedBytes30::byte0025
					uint8_t ___byte0025_10;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0025_10_OffsetPadding_forAlignmentOnly[25];
					uint8_t ___byte0025_10_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0026_11_OffsetPadding[26];
					// System.Byte Unity.Collections.FixedBytes30::byte0026
					uint8_t ___byte0026_11;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0026_11_OffsetPadding_forAlignmentOnly[26];
					uint8_t ___byte0026_11_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0027_12_OffsetPadding[27];
					// System.Byte Unity.Collections.FixedBytes30::byte0027
					uint8_t ___byte0027_12;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0027_12_OffsetPadding_forAlignmentOnly[27];
					uint8_t ___byte0027_12_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0028_13_OffsetPadding[28];
					// System.Byte Unity.Collections.FixedBytes30::byte0028
					uint8_t ___byte0028_13;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0028_13_OffsetPadding_forAlignmentOnly[28];
					uint8_t ___byte0028_13_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0029_14_OffsetPadding[29];
					// System.Byte Unity.Collections.FixedBytes30::byte0029
					uint8_t ___byte0029_14;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0029_14_OffsetPadding_forAlignmentOnly[29];
					uint8_t ___byte0029_14_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes30_t7721F11929A3AC08287DF5E6D7AEF85CCEE04AD2__padding[30];
	};
};

// Unity.Collections.FixedBytes4094
struct FixedBytes4094_t8611441D8BDC6A677C2D9E551086F59EFBFCBBE5 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0000
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0016_1_OffsetPadding[16];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0016
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0016_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0016_1_OffsetPadding_forAlignmentOnly[16];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0016_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0032_2_OffsetPadding[32];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0032
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0032_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0032_2_OffsetPadding_forAlignmentOnly[32];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0032_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0048_3_OffsetPadding[48];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0048
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0048_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0048_3_OffsetPadding_forAlignmentOnly[48];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0048_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0064_4_OffsetPadding[64];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0064
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0064_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0064_4_OffsetPadding_forAlignmentOnly[64];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0064_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0080_5_OffsetPadding[80];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0080
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0080_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0080_5_OffsetPadding_forAlignmentOnly[80];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0080_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0096_6_OffsetPadding[96];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0096
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0096_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0096_6_OffsetPadding_forAlignmentOnly[96];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0096_6_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0112_7_OffsetPadding[112];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0112
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0112_7;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0112_7_OffsetPadding_forAlignmentOnly[112];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0112_7_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0128_8_OffsetPadding[128];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0128
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0128_8;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0128_8_OffsetPadding_forAlignmentOnly[128];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0128_8_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0144_9_OffsetPadding[144];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0144
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0144_9;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0144_9_OffsetPadding_forAlignmentOnly[144];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0144_9_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0160_10_OffsetPadding[160];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0160
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0160_10;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0160_10_OffsetPadding_forAlignmentOnly[160];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0160_10_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0176_11_OffsetPadding[176];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0176
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0176_11;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0176_11_OffsetPadding_forAlignmentOnly[176];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0176_11_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0192_12_OffsetPadding[192];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0192
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0192_12;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0192_12_OffsetPadding_forAlignmentOnly[192];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0192_12_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0208_13_OffsetPadding[208];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0208
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0208_13;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0208_13_OffsetPadding_forAlignmentOnly[208];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0208_13_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0224_14_OffsetPadding[224];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0224
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0224_14;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0224_14_OffsetPadding_forAlignmentOnly[224];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0224_14_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0240_15_OffsetPadding[240];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0240
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0240_15;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0240_15_OffsetPadding_forAlignmentOnly[240];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0240_15_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0256_16_OffsetPadding[256];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0256
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0256_16;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0256_16_OffsetPadding_forAlignmentOnly[256];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0256_16_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0272_17_OffsetPadding[272];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0272
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0272_17;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0272_17_OffsetPadding_forAlignmentOnly[272];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0272_17_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0288_18_OffsetPadding[288];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0288
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0288_18;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0288_18_OffsetPadding_forAlignmentOnly[288];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0288_18_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0304_19_OffsetPadding[304];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0304
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0304_19;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0304_19_OffsetPadding_forAlignmentOnly[304];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0304_19_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0320_20_OffsetPadding[320];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0320
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0320_20;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0320_20_OffsetPadding_forAlignmentOnly[320];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0320_20_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0336_21_OffsetPadding[336];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0336
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0336_21;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0336_21_OffsetPadding_forAlignmentOnly[336];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0336_21_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0352_22_OffsetPadding[352];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0352
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0352_22;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0352_22_OffsetPadding_forAlignmentOnly[352];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0352_22_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0368_23_OffsetPadding[368];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0368
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0368_23;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0368_23_OffsetPadding_forAlignmentOnly[368];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0368_23_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0384_24_OffsetPadding[384];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0384
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0384_24;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0384_24_OffsetPadding_forAlignmentOnly[384];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0384_24_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0400_25_OffsetPadding[400];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0400
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0400_25;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0400_25_OffsetPadding_forAlignmentOnly[400];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0400_25_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0416_26_OffsetPadding[416];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0416
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0416_26;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0416_26_OffsetPadding_forAlignmentOnly[416];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0416_26_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0432_27_OffsetPadding[432];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0432
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0432_27;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0432_27_OffsetPadding_forAlignmentOnly[432];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0432_27_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0448_28_OffsetPadding[448];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0448
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0448_28;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0448_28_OffsetPadding_forAlignmentOnly[448];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0448_28_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0464_29_OffsetPadding[464];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0464
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0464_29;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0464_29_OffsetPadding_forAlignmentOnly[464];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0464_29_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0480_30_OffsetPadding[480];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0480
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0480_30;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0480_30_OffsetPadding_forAlignmentOnly[480];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0480_30_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0496_31_OffsetPadding[496];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0496
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0496_31;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0496_31_OffsetPadding_forAlignmentOnly[496];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0496_31_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0512_32_OffsetPadding[512];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0512
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0512_32;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0512_32_OffsetPadding_forAlignmentOnly[512];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0512_32_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0528_33_OffsetPadding[528];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0528
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0528_33;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0528_33_OffsetPadding_forAlignmentOnly[528];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0528_33_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0544_34_OffsetPadding[544];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0544
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0544_34;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0544_34_OffsetPadding_forAlignmentOnly[544];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0544_34_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0560_35_OffsetPadding[560];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0560
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0560_35;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0560_35_OffsetPadding_forAlignmentOnly[560];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0560_35_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0576_36_OffsetPadding[576];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0576
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0576_36;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0576_36_OffsetPadding_forAlignmentOnly[576];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0576_36_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0592_37_OffsetPadding[592];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0592
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0592_37;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0592_37_OffsetPadding_forAlignmentOnly[592];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0592_37_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0608_38_OffsetPadding[608];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0608
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0608_38;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0608_38_OffsetPadding_forAlignmentOnly[608];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0608_38_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0624_39_OffsetPadding[624];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0624
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0624_39;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0624_39_OffsetPadding_forAlignmentOnly[624];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0624_39_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0640_40_OffsetPadding[640];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0640
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0640_40;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0640_40_OffsetPadding_forAlignmentOnly[640];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0640_40_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0656_41_OffsetPadding[656];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0656
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0656_41;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0656_41_OffsetPadding_forAlignmentOnly[656];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0656_41_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0672_42_OffsetPadding[672];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0672
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0672_42;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0672_42_OffsetPadding_forAlignmentOnly[672];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0672_42_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0688_43_OffsetPadding[688];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0688
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0688_43;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0688_43_OffsetPadding_forAlignmentOnly[688];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0688_43_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0704_44_OffsetPadding[704];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0704
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0704_44;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0704_44_OffsetPadding_forAlignmentOnly[704];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0704_44_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0720_45_OffsetPadding[720];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0720
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0720_45;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0720_45_OffsetPadding_forAlignmentOnly[720];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0720_45_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0736_46_OffsetPadding[736];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0736
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0736_46;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0736_46_OffsetPadding_forAlignmentOnly[736];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0736_46_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0752_47_OffsetPadding[752];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0752
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0752_47;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0752_47_OffsetPadding_forAlignmentOnly[752];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0752_47_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0768_48_OffsetPadding[768];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0768
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0768_48;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0768_48_OffsetPadding_forAlignmentOnly[768];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0768_48_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0784_49_OffsetPadding[784];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0784
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0784_49;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0784_49_OffsetPadding_forAlignmentOnly[784];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0784_49_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0800_50_OffsetPadding[800];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0800
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0800_50;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0800_50_OffsetPadding_forAlignmentOnly[800];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0800_50_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0816_51_OffsetPadding[816];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0816
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0816_51;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0816_51_OffsetPadding_forAlignmentOnly[816];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0816_51_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0832_52_OffsetPadding[832];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0832
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0832_52;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0832_52_OffsetPadding_forAlignmentOnly[832];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0832_52_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0848_53_OffsetPadding[848];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0848
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0848_53;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0848_53_OffsetPadding_forAlignmentOnly[848];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0848_53_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0864_54_OffsetPadding[864];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0864
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0864_54;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0864_54_OffsetPadding_forAlignmentOnly[864];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0864_54_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0880_55_OffsetPadding[880];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0880
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0880_55;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0880_55_OffsetPadding_forAlignmentOnly[880];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0880_55_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0896_56_OffsetPadding[896];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0896
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0896_56;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0896_56_OffsetPadding_forAlignmentOnly[896];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0896_56_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0912_57_OffsetPadding[912];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0912
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0912_57;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0912_57_OffsetPadding_forAlignmentOnly[912];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0912_57_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0928_58_OffsetPadding[928];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0928
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0928_58;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0928_58_OffsetPadding_forAlignmentOnly[928];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0928_58_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0944_59_OffsetPadding[944];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0944
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0944_59;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0944_59_OffsetPadding_forAlignmentOnly[944];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0944_59_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0960_60_OffsetPadding[960];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0960
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0960_60;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0960_60_OffsetPadding_forAlignmentOnly[960];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0960_60_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0976_61_OffsetPadding[976];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0976
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0976_61;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0976_61_OffsetPadding_forAlignmentOnly[976];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0976_61_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0992_62_OffsetPadding[992];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0992
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0992_62;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0992_62_OffsetPadding_forAlignmentOnly[992];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0992_62_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1008_63_OffsetPadding[1008];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1008
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1008_63;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1008_63_OffsetPadding_forAlignmentOnly[1008];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1008_63_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1024_64_OffsetPadding[1024];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1024
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1024_64;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1024_64_OffsetPadding_forAlignmentOnly[1024];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1024_64_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1040_65_OffsetPadding[1040];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1040
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1040_65;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1040_65_OffsetPadding_forAlignmentOnly[1040];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1040_65_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1056_66_OffsetPadding[1056];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1056
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1056_66;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1056_66_OffsetPadding_forAlignmentOnly[1056];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1056_66_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1072_67_OffsetPadding[1072];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1072
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1072_67;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1072_67_OffsetPadding_forAlignmentOnly[1072];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1072_67_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1088_68_OffsetPadding[1088];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1088
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1088_68;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1088_68_OffsetPadding_forAlignmentOnly[1088];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1088_68_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1104_69_OffsetPadding[1104];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1104
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1104_69;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1104_69_OffsetPadding_forAlignmentOnly[1104];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1104_69_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1120_70_OffsetPadding[1120];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1120
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1120_70;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1120_70_OffsetPadding_forAlignmentOnly[1120];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1120_70_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1136_71_OffsetPadding[1136];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1136
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1136_71;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1136_71_OffsetPadding_forAlignmentOnly[1136];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1136_71_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1152_72_OffsetPadding[1152];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1152
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1152_72;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1152_72_OffsetPadding_forAlignmentOnly[1152];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1152_72_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1168_73_OffsetPadding[1168];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1168
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1168_73;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1168_73_OffsetPadding_forAlignmentOnly[1168];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1168_73_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1184_74_OffsetPadding[1184];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1184
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1184_74;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1184_74_OffsetPadding_forAlignmentOnly[1184];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1184_74_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1200_75_OffsetPadding[1200];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1200
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1200_75;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1200_75_OffsetPadding_forAlignmentOnly[1200];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1200_75_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1216_76_OffsetPadding[1216];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1216
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1216_76;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1216_76_OffsetPadding_forAlignmentOnly[1216];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1216_76_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1232_77_OffsetPadding[1232];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1232
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1232_77;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1232_77_OffsetPadding_forAlignmentOnly[1232];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1232_77_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1248_78_OffsetPadding[1248];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1248
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1248_78;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1248_78_OffsetPadding_forAlignmentOnly[1248];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1248_78_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1264_79_OffsetPadding[1264];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1264
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1264_79;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1264_79_OffsetPadding_forAlignmentOnly[1264];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1264_79_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1280_80_OffsetPadding[1280];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1280
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1280_80;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1280_80_OffsetPadding_forAlignmentOnly[1280];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1280_80_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1296_81_OffsetPadding[1296];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1296
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1296_81;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1296_81_OffsetPadding_forAlignmentOnly[1296];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1296_81_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1312_82_OffsetPadding[1312];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1312
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1312_82;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1312_82_OffsetPadding_forAlignmentOnly[1312];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1312_82_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1328_83_OffsetPadding[1328];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1328
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1328_83;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1328_83_OffsetPadding_forAlignmentOnly[1328];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1328_83_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1344_84_OffsetPadding[1344];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1344
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1344_84;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1344_84_OffsetPadding_forAlignmentOnly[1344];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1344_84_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1360_85_OffsetPadding[1360];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1360
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1360_85;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1360_85_OffsetPadding_forAlignmentOnly[1360];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1360_85_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1376_86_OffsetPadding[1376];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1376
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1376_86;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1376_86_OffsetPadding_forAlignmentOnly[1376];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1376_86_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1392_87_OffsetPadding[1392];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1392
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1392_87;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1392_87_OffsetPadding_forAlignmentOnly[1392];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1392_87_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1408_88_OffsetPadding[1408];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1408
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1408_88;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1408_88_OffsetPadding_forAlignmentOnly[1408];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1408_88_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1424_89_OffsetPadding[1424];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1424
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1424_89;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1424_89_OffsetPadding_forAlignmentOnly[1424];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1424_89_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1440_90_OffsetPadding[1440];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1440
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1440_90;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1440_90_OffsetPadding_forAlignmentOnly[1440];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1440_90_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1456_91_OffsetPadding[1456];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1456
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1456_91;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1456_91_OffsetPadding_forAlignmentOnly[1456];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1456_91_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1472_92_OffsetPadding[1472];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1472
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1472_92;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1472_92_OffsetPadding_forAlignmentOnly[1472];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1472_92_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1488_93_OffsetPadding[1488];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1488
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1488_93;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1488_93_OffsetPadding_forAlignmentOnly[1488];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1488_93_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1504_94_OffsetPadding[1504];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1504
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1504_94;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1504_94_OffsetPadding_forAlignmentOnly[1504];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1504_94_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1520_95_OffsetPadding[1520];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1520
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1520_95;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1520_95_OffsetPadding_forAlignmentOnly[1520];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1520_95_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1536_96_OffsetPadding[1536];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1536
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1536_96;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1536_96_OffsetPadding_forAlignmentOnly[1536];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1536_96_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1552_97_OffsetPadding[1552];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1552
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1552_97;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1552_97_OffsetPadding_forAlignmentOnly[1552];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1552_97_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1568_98_OffsetPadding[1568];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1568
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1568_98;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1568_98_OffsetPadding_forAlignmentOnly[1568];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1568_98_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1584_99_OffsetPadding[1584];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1584
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1584_99;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1584_99_OffsetPadding_forAlignmentOnly[1584];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1584_99_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1600_100_OffsetPadding[1600];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1600
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1600_100;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1600_100_OffsetPadding_forAlignmentOnly[1600];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1600_100_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1616_101_OffsetPadding[1616];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1616
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1616_101;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1616_101_OffsetPadding_forAlignmentOnly[1616];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1616_101_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1632_102_OffsetPadding[1632];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1632
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1632_102;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1632_102_OffsetPadding_forAlignmentOnly[1632];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1632_102_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1648_103_OffsetPadding[1648];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1648
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1648_103;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1648_103_OffsetPadding_forAlignmentOnly[1648];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1648_103_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1664_104_OffsetPadding[1664];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1664
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1664_104;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1664_104_OffsetPadding_forAlignmentOnly[1664];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1664_104_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1680_105_OffsetPadding[1680];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1680
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1680_105;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1680_105_OffsetPadding_forAlignmentOnly[1680];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1680_105_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1696_106_OffsetPadding[1696];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1696
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1696_106;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1696_106_OffsetPadding_forAlignmentOnly[1696];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1696_106_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1712_107_OffsetPadding[1712];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1712
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1712_107;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1712_107_OffsetPadding_forAlignmentOnly[1712];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1712_107_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1728_108_OffsetPadding[1728];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1728
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1728_108;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1728_108_OffsetPadding_forAlignmentOnly[1728];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1728_108_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1744_109_OffsetPadding[1744];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1744
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1744_109;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1744_109_OffsetPadding_forAlignmentOnly[1744];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1744_109_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1760_110_OffsetPadding[1760];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1760
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1760_110;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1760_110_OffsetPadding_forAlignmentOnly[1760];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1760_110_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1776_111_OffsetPadding[1776];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1776
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1776_111;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1776_111_OffsetPadding_forAlignmentOnly[1776];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1776_111_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1792_112_OffsetPadding[1792];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1792
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1792_112;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1792_112_OffsetPadding_forAlignmentOnly[1792];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1792_112_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1808_113_OffsetPadding[1808];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1808
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1808_113;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1808_113_OffsetPadding_forAlignmentOnly[1808];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1808_113_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1824_114_OffsetPadding[1824];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1824
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1824_114;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1824_114_OffsetPadding_forAlignmentOnly[1824];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1824_114_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1840_115_OffsetPadding[1840];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1840
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1840_115;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1840_115_OffsetPadding_forAlignmentOnly[1840];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1840_115_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1856_116_OffsetPadding[1856];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1856
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1856_116;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1856_116_OffsetPadding_forAlignmentOnly[1856];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1856_116_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1872_117_OffsetPadding[1872];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1872
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1872_117;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1872_117_OffsetPadding_forAlignmentOnly[1872];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1872_117_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1888_118_OffsetPadding[1888];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1888
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1888_118;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1888_118_OffsetPadding_forAlignmentOnly[1888];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1888_118_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1904_119_OffsetPadding[1904];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1904
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1904_119;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1904_119_OffsetPadding_forAlignmentOnly[1904];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1904_119_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1920_120_OffsetPadding[1920];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1920
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1920_120;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1920_120_OffsetPadding_forAlignmentOnly[1920];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1920_120_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1936_121_OffsetPadding[1936];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1936
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1936_121;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1936_121_OffsetPadding_forAlignmentOnly[1936];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1936_121_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1952_122_OffsetPadding[1952];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1952
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1952_122;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1952_122_OffsetPadding_forAlignmentOnly[1952];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1952_122_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1968_123_OffsetPadding[1968];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1968
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1968_123;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1968_123_OffsetPadding_forAlignmentOnly[1968];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1968_123_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1984_124_OffsetPadding[1984];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1984
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1984_124;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1984_124_OffsetPadding_forAlignmentOnly[1984];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1984_124_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2000_125_OffsetPadding[2000];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2000
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2000_125;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2000_125_OffsetPadding_forAlignmentOnly[2000];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2000_125_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2016_126_OffsetPadding[2016];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2016
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2016_126;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2016_126_OffsetPadding_forAlignmentOnly[2016];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2016_126_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2032_127_OffsetPadding[2032];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2032
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2032_127;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2032_127_OffsetPadding_forAlignmentOnly[2032];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2032_127_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2048_128_OffsetPadding[2048];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2048
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2048_128;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2048_128_OffsetPadding_forAlignmentOnly[2048];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2048_128_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2064_129_OffsetPadding[2064];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2064
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2064_129;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2064_129_OffsetPadding_forAlignmentOnly[2064];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2064_129_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2080_130_OffsetPadding[2080];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2080
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2080_130;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2080_130_OffsetPadding_forAlignmentOnly[2080];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2080_130_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2096_131_OffsetPadding[2096];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2096
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2096_131;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2096_131_OffsetPadding_forAlignmentOnly[2096];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2096_131_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2112_132_OffsetPadding[2112];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2112
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2112_132;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2112_132_OffsetPadding_forAlignmentOnly[2112];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2112_132_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2128_133_OffsetPadding[2128];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2128
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2128_133;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2128_133_OffsetPadding_forAlignmentOnly[2128];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2128_133_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2144_134_OffsetPadding[2144];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2144
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2144_134;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2144_134_OffsetPadding_forAlignmentOnly[2144];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2144_134_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2160_135_OffsetPadding[2160];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2160
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2160_135;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2160_135_OffsetPadding_forAlignmentOnly[2160];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2160_135_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2176_136_OffsetPadding[2176];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2176
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2176_136;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2176_136_OffsetPadding_forAlignmentOnly[2176];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2176_136_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2192_137_OffsetPadding[2192];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2192
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2192_137;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2192_137_OffsetPadding_forAlignmentOnly[2192];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2192_137_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2208_138_OffsetPadding[2208];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2208
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2208_138;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2208_138_OffsetPadding_forAlignmentOnly[2208];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2208_138_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2224_139_OffsetPadding[2224];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2224
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2224_139;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2224_139_OffsetPadding_forAlignmentOnly[2224];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2224_139_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2240_140_OffsetPadding[2240];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2240
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2240_140;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2240_140_OffsetPadding_forAlignmentOnly[2240];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2240_140_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2256_141_OffsetPadding[2256];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2256
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2256_141;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2256_141_OffsetPadding_forAlignmentOnly[2256];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2256_141_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2272_142_OffsetPadding[2272];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2272
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2272_142;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2272_142_OffsetPadding_forAlignmentOnly[2272];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2272_142_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2288_143_OffsetPadding[2288];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2288
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2288_143;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2288_143_OffsetPadding_forAlignmentOnly[2288];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2288_143_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2304_144_OffsetPadding[2304];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2304
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2304_144;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2304_144_OffsetPadding_forAlignmentOnly[2304];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2304_144_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2320_145_OffsetPadding[2320];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2320
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2320_145;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2320_145_OffsetPadding_forAlignmentOnly[2320];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2320_145_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2336_146_OffsetPadding[2336];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2336
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2336_146;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2336_146_OffsetPadding_forAlignmentOnly[2336];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2336_146_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2352_147_OffsetPadding[2352];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2352
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2352_147;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2352_147_OffsetPadding_forAlignmentOnly[2352];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2352_147_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2368_148_OffsetPadding[2368];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2368
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2368_148;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2368_148_OffsetPadding_forAlignmentOnly[2368];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2368_148_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2384_149_OffsetPadding[2384];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2384
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2384_149;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2384_149_OffsetPadding_forAlignmentOnly[2384];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2384_149_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2400_150_OffsetPadding[2400];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2400
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2400_150;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2400_150_OffsetPadding_forAlignmentOnly[2400];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2400_150_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2416_151_OffsetPadding[2416];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2416
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2416_151;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2416_151_OffsetPadding_forAlignmentOnly[2416];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2416_151_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2432_152_OffsetPadding[2432];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2432
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2432_152;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2432_152_OffsetPadding_forAlignmentOnly[2432];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2432_152_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2448_153_OffsetPadding[2448];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2448
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2448_153;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2448_153_OffsetPadding_forAlignmentOnly[2448];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2448_153_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2464_154_OffsetPadding[2464];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2464
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2464_154;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2464_154_OffsetPadding_forAlignmentOnly[2464];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2464_154_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2480_155_OffsetPadding[2480];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2480
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2480_155;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2480_155_OffsetPadding_forAlignmentOnly[2480];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2480_155_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2496_156_OffsetPadding[2496];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2496
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2496_156;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2496_156_OffsetPadding_forAlignmentOnly[2496];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2496_156_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2512_157_OffsetPadding[2512];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2512
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2512_157;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2512_157_OffsetPadding_forAlignmentOnly[2512];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2512_157_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2528_158_OffsetPadding[2528];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2528
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2528_158;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2528_158_OffsetPadding_forAlignmentOnly[2528];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2528_158_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2544_159_OffsetPadding[2544];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2544
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2544_159;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2544_159_OffsetPadding_forAlignmentOnly[2544];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2544_159_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2560_160_OffsetPadding[2560];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2560
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2560_160;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2560_160_OffsetPadding_forAlignmentOnly[2560];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2560_160_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2576_161_OffsetPadding[2576];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2576
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2576_161;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2576_161_OffsetPadding_forAlignmentOnly[2576];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2576_161_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2592_162_OffsetPadding[2592];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2592
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2592_162;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2592_162_OffsetPadding_forAlignmentOnly[2592];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2592_162_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2608_163_OffsetPadding[2608];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2608
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2608_163;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2608_163_OffsetPadding_forAlignmentOnly[2608];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2608_163_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2624_164_OffsetPadding[2624];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2624
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2624_164;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2624_164_OffsetPadding_forAlignmentOnly[2624];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2624_164_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2640_165_OffsetPadding[2640];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2640
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2640_165;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2640_165_OffsetPadding_forAlignmentOnly[2640];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2640_165_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2656_166_OffsetPadding[2656];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2656
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2656_166;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2656_166_OffsetPadding_forAlignmentOnly[2656];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2656_166_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2672_167_OffsetPadding[2672];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2672
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2672_167;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2672_167_OffsetPadding_forAlignmentOnly[2672];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2672_167_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2688_168_OffsetPadding[2688];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2688
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2688_168;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2688_168_OffsetPadding_forAlignmentOnly[2688];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2688_168_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2704_169_OffsetPadding[2704];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2704
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2704_169;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2704_169_OffsetPadding_forAlignmentOnly[2704];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2704_169_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2720_170_OffsetPadding[2720];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2720
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2720_170;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2720_170_OffsetPadding_forAlignmentOnly[2720];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2720_170_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2736_171_OffsetPadding[2736];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2736
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2736_171;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2736_171_OffsetPadding_forAlignmentOnly[2736];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2736_171_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2752_172_OffsetPadding[2752];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2752
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2752_172;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2752_172_OffsetPadding_forAlignmentOnly[2752];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2752_172_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2768_173_OffsetPadding[2768];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2768
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2768_173;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2768_173_OffsetPadding_forAlignmentOnly[2768];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2768_173_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2784_174_OffsetPadding[2784];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2784
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2784_174;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2784_174_OffsetPadding_forAlignmentOnly[2784];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2784_174_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2800_175_OffsetPadding[2800];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2800
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2800_175;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2800_175_OffsetPadding_forAlignmentOnly[2800];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2800_175_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2816_176_OffsetPadding[2816];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2816
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2816_176;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2816_176_OffsetPadding_forAlignmentOnly[2816];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2816_176_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2832_177_OffsetPadding[2832];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2832
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2832_177;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2832_177_OffsetPadding_forAlignmentOnly[2832];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2832_177_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2848_178_OffsetPadding[2848];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2848
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2848_178;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2848_178_OffsetPadding_forAlignmentOnly[2848];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2848_178_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2864_179_OffsetPadding[2864];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2864
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2864_179;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2864_179_OffsetPadding_forAlignmentOnly[2864];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2864_179_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2880_180_OffsetPadding[2880];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2880
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2880_180;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2880_180_OffsetPadding_forAlignmentOnly[2880];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2880_180_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2896_181_OffsetPadding[2896];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2896
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2896_181;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2896_181_OffsetPadding_forAlignmentOnly[2896];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2896_181_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2912_182_OffsetPadding[2912];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2912
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2912_182;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2912_182_OffsetPadding_forAlignmentOnly[2912];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2912_182_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2928_183_OffsetPadding[2928];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2928
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2928_183;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2928_183_OffsetPadding_forAlignmentOnly[2928];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2928_183_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2944_184_OffsetPadding[2944];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2944
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2944_184;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2944_184_OffsetPadding_forAlignmentOnly[2944];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2944_184_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2960_185_OffsetPadding[2960];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2960
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2960_185;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2960_185_OffsetPadding_forAlignmentOnly[2960];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2960_185_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2976_186_OffsetPadding[2976];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2976
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2976_186;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2976_186_OffsetPadding_forAlignmentOnly[2976];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2976_186_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2992_187_OffsetPadding[2992];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2992
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2992_187;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2992_187_OffsetPadding_forAlignmentOnly[2992];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2992_187_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3008_188_OffsetPadding[3008];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3008
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3008_188;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3008_188_OffsetPadding_forAlignmentOnly[3008];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3008_188_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3024_189_OffsetPadding[3024];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3024
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3024_189;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3024_189_OffsetPadding_forAlignmentOnly[3024];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3024_189_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3040_190_OffsetPadding[3040];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3040
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3040_190;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3040_190_OffsetPadding_forAlignmentOnly[3040];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3040_190_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3056_191_OffsetPadding[3056];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3056
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3056_191;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3056_191_OffsetPadding_forAlignmentOnly[3056];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3056_191_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3072_192_OffsetPadding[3072];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3072
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3072_192;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3072_192_OffsetPadding_forAlignmentOnly[3072];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3072_192_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3088_193_OffsetPadding[3088];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3088
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3088_193;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3088_193_OffsetPadding_forAlignmentOnly[3088];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3088_193_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3104_194_OffsetPadding[3104];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3104
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3104_194;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3104_194_OffsetPadding_forAlignmentOnly[3104];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3104_194_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3120_195_OffsetPadding[3120];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3120
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3120_195;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3120_195_OffsetPadding_forAlignmentOnly[3120];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3120_195_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3136_196_OffsetPadding[3136];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3136
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3136_196;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3136_196_OffsetPadding_forAlignmentOnly[3136];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3136_196_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3152_197_OffsetPadding[3152];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3152
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3152_197;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3152_197_OffsetPadding_forAlignmentOnly[3152];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3152_197_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3168_198_OffsetPadding[3168];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3168
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3168_198;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3168_198_OffsetPadding_forAlignmentOnly[3168];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3168_198_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3184_199_OffsetPadding[3184];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3184
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3184_199;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3184_199_OffsetPadding_forAlignmentOnly[3184];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3184_199_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3200_200_OffsetPadding[3200];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3200
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3200_200;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3200_200_OffsetPadding_forAlignmentOnly[3200];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3200_200_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3216_201_OffsetPadding[3216];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3216
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3216_201;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3216_201_OffsetPadding_forAlignmentOnly[3216];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3216_201_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3232_202_OffsetPadding[3232];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3232
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3232_202;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3232_202_OffsetPadding_forAlignmentOnly[3232];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3232_202_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3248_203_OffsetPadding[3248];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3248
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3248_203;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3248_203_OffsetPadding_forAlignmentOnly[3248];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3248_203_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3264_204_OffsetPadding[3264];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3264
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3264_204;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3264_204_OffsetPadding_forAlignmentOnly[3264];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3264_204_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3280_205_OffsetPadding[3280];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3280
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3280_205;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3280_205_OffsetPadding_forAlignmentOnly[3280];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3280_205_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3296_206_OffsetPadding[3296];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3296
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3296_206;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3296_206_OffsetPadding_forAlignmentOnly[3296];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3296_206_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3312_207_OffsetPadding[3312];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3312
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3312_207;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3312_207_OffsetPadding_forAlignmentOnly[3312];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3312_207_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3328_208_OffsetPadding[3328];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3328
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3328_208;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3328_208_OffsetPadding_forAlignmentOnly[3328];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3328_208_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3344_209_OffsetPadding[3344];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3344
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3344_209;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3344_209_OffsetPadding_forAlignmentOnly[3344];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3344_209_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3360_210_OffsetPadding[3360];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3360
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3360_210;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3360_210_OffsetPadding_forAlignmentOnly[3360];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3360_210_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3376_211_OffsetPadding[3376];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3376
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3376_211;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3376_211_OffsetPadding_forAlignmentOnly[3376];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3376_211_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3392_212_OffsetPadding[3392];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3392
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3392_212;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3392_212_OffsetPadding_forAlignmentOnly[3392];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3392_212_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3408_213_OffsetPadding[3408];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3408
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3408_213;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3408_213_OffsetPadding_forAlignmentOnly[3408];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3408_213_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3424_214_OffsetPadding[3424];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3424
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3424_214;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3424_214_OffsetPadding_forAlignmentOnly[3424];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3424_214_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3440_215_OffsetPadding[3440];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3440
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3440_215;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3440_215_OffsetPadding_forAlignmentOnly[3440];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3440_215_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3456_216_OffsetPadding[3456];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3456
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3456_216;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3456_216_OffsetPadding_forAlignmentOnly[3456];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3456_216_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3472_217_OffsetPadding[3472];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3472
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3472_217;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3472_217_OffsetPadding_forAlignmentOnly[3472];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3472_217_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3488_218_OffsetPadding[3488];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3488
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3488_218;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3488_218_OffsetPadding_forAlignmentOnly[3488];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3488_218_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3504_219_OffsetPadding[3504];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3504
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3504_219;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3504_219_OffsetPadding_forAlignmentOnly[3504];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3504_219_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3520_220_OffsetPadding[3520];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3520
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3520_220;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3520_220_OffsetPadding_forAlignmentOnly[3520];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3520_220_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3536_221_OffsetPadding[3536];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3536
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3536_221;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3536_221_OffsetPadding_forAlignmentOnly[3536];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3536_221_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3552_222_OffsetPadding[3552];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3552
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3552_222;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3552_222_OffsetPadding_forAlignmentOnly[3552];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3552_222_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3568_223_OffsetPadding[3568];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3568
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3568_223;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3568_223_OffsetPadding_forAlignmentOnly[3568];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3568_223_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3584_224_OffsetPadding[3584];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3584
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3584_224;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3584_224_OffsetPadding_forAlignmentOnly[3584];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3584_224_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3600_225_OffsetPadding[3600];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3600
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3600_225;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3600_225_OffsetPadding_forAlignmentOnly[3600];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3600_225_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3616_226_OffsetPadding[3616];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3616
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3616_226;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3616_226_OffsetPadding_forAlignmentOnly[3616];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3616_226_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3632_227_OffsetPadding[3632];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3632
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3632_227;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3632_227_OffsetPadding_forAlignmentOnly[3632];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3632_227_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3648_228_OffsetPadding[3648];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3648
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3648_228;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3648_228_OffsetPadding_forAlignmentOnly[3648];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3648_228_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3664_229_OffsetPadding[3664];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3664
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3664_229;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3664_229_OffsetPadding_forAlignmentOnly[3664];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3664_229_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3680_230_OffsetPadding[3680];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3680
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3680_230;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3680_230_OffsetPadding_forAlignmentOnly[3680];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3680_230_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3696_231_OffsetPadding[3696];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3696
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3696_231;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3696_231_OffsetPadding_forAlignmentOnly[3696];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3696_231_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3712_232_OffsetPadding[3712];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3712
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3712_232;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3712_232_OffsetPadding_forAlignmentOnly[3712];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3712_232_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3728_233_OffsetPadding[3728];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3728
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3728_233;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3728_233_OffsetPadding_forAlignmentOnly[3728];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3728_233_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3744_234_OffsetPadding[3744];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3744
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3744_234;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3744_234_OffsetPadding_forAlignmentOnly[3744];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3744_234_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3760_235_OffsetPadding[3760];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3760
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3760_235;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3760_235_OffsetPadding_forAlignmentOnly[3760];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3760_235_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3776_236_OffsetPadding[3776];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3776
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3776_236;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3776_236_OffsetPadding_forAlignmentOnly[3776];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3776_236_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3792_237_OffsetPadding[3792];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3792
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3792_237;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3792_237_OffsetPadding_forAlignmentOnly[3792];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3792_237_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3808_238_OffsetPadding[3808];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3808
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3808_238;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3808_238_OffsetPadding_forAlignmentOnly[3808];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3808_238_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3824_239_OffsetPadding[3824];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3824
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3824_239;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3824_239_OffsetPadding_forAlignmentOnly[3824];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3824_239_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3840_240_OffsetPadding[3840];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3840
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3840_240;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3840_240_OffsetPadding_forAlignmentOnly[3840];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3840_240_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3856_241_OffsetPadding[3856];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3856
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3856_241;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3856_241_OffsetPadding_forAlignmentOnly[3856];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3856_241_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3872_242_OffsetPadding[3872];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3872
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3872_242;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3872_242_OffsetPadding_forAlignmentOnly[3872];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3872_242_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3888_243_OffsetPadding[3888];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3888
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3888_243;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3888_243_OffsetPadding_forAlignmentOnly[3888];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3888_243_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3904_244_OffsetPadding[3904];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3904
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3904_244;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3904_244_OffsetPadding_forAlignmentOnly[3904];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3904_244_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3920_245_OffsetPadding[3920];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3920
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3920_245;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3920_245_OffsetPadding_forAlignmentOnly[3920];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3920_245_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3936_246_OffsetPadding[3936];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3936
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3936_246;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3936_246_OffsetPadding_forAlignmentOnly[3936];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3936_246_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3952_247_OffsetPadding[3952];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3952
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3952_247;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3952_247_OffsetPadding_forAlignmentOnly[3952];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3952_247_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3968_248_OffsetPadding[3968];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3968
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3968_248;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3968_248_OffsetPadding_forAlignmentOnly[3968];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3968_248_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3984_249_OffsetPadding[3984];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3984
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3984_249;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3984_249_OffsetPadding_forAlignmentOnly[3984];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3984_249_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset4000_250_OffsetPadding[4000];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset4000
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset4000_250;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset4000_250_OffsetPadding_forAlignmentOnly[4000];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset4000_250_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset4016_251_OffsetPadding[4016];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset4016
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset4016_251;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset4016_251_OffsetPadding_forAlignmentOnly[4016];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset4016_251_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset4032_252_OffsetPadding[4032];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset4032
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset4032_252;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset4032_252_OffsetPadding_forAlignmentOnly[4032];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset4032_252_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset4048_253_OffsetPadding[4048];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset4048
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset4048_253;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset4048_253_OffsetPadding_forAlignmentOnly[4048];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset4048_253_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset4064_254_OffsetPadding[4064];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset4064
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset4064_254;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset4064_254_OffsetPadding_forAlignmentOnly[4064];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset4064_254_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte4080_255_OffsetPadding[4080];
					// System.Byte Unity.Collections.FixedBytes4094::byte4080
					uint8_t ___byte4080_255;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte4080_255_OffsetPadding_forAlignmentOnly[4080];
					uint8_t ___byte4080_255_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte4081_256_OffsetPadding[4081];
					// System.Byte Unity.Collections.FixedBytes4094::byte4081
					uint8_t ___byte4081_256;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte4081_256_OffsetPadding_forAlignmentOnly[4081];
					uint8_t ___byte4081_256_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte4082_257_OffsetPadding[4082];
					// System.Byte Unity.Collections.FixedBytes4094::byte4082
					uint8_t ___byte4082_257;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte4082_257_OffsetPadding_forAlignmentOnly[4082];
					uint8_t ___byte4082_257_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte4083_258_OffsetPadding[4083];
					// System.Byte Unity.Collections.FixedBytes4094::byte4083
					uint8_t ___byte4083_258;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte4083_258_OffsetPadding_forAlignmentOnly[4083];
					uint8_t ___byte4083_258_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte4084_259_OffsetPadding[4084];
					// System.Byte Unity.Collections.FixedBytes4094::byte4084
					uint8_t ___byte4084_259;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte4084_259_OffsetPadding_forAlignmentOnly[4084];
					uint8_t ___byte4084_259_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte4085_260_OffsetPadding[4085];
					// System.Byte Unity.Collections.FixedBytes4094::byte4085
					uint8_t ___byte4085_260;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte4085_260_OffsetPadding_forAlignmentOnly[4085];
					uint8_t ___byte4085_260_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte4086_261_OffsetPadding[4086];
					// System.Byte Unity.Collections.FixedBytes4094::byte4086
					uint8_t ___byte4086_261;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte4086_261_OffsetPadding_forAlignmentOnly[4086];
					uint8_t ___byte4086_261_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte4087_262_OffsetPadding[4087];
					// System.Byte Unity.Collections.FixedBytes4094::byte4087
					uint8_t ___byte4087_262;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte4087_262_OffsetPadding_forAlignmentOnly[4087];
					uint8_t ___byte4087_262_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte4088_263_OffsetPadding[4088];
					// System.Byte Unity.Collections.FixedBytes4094::byte4088
					uint8_t ___byte4088_263;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte4088_263_OffsetPadding_forAlignmentOnly[4088];
					uint8_t ___byte4088_263_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte4089_264_OffsetPadding[4089];
					// System.Byte Unity.Collections.FixedBytes4094::byte4089
					uint8_t ___byte4089_264;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte4089_264_OffsetPadding_forAlignmentOnly[4089];
					uint8_t ___byte4089_264_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte4090_265_OffsetPadding[4090];
					// System.Byte Unity.Collections.FixedBytes4094::byte4090
					uint8_t ___byte4090_265;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte4090_265_OffsetPadding_forAlignmentOnly[4090];
					uint8_t ___byte4090_265_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte4091_266_OffsetPadding[4091];
					// System.Byte Unity.Collections.FixedBytes4094::byte4091
					uint8_t ___byte4091_266;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte4091_266_OffsetPadding_forAlignmentOnly[4091];
					uint8_t ___byte4091_266_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte4092_267_OffsetPadding[4092];
					// System.Byte Unity.Collections.FixedBytes4094::byte4092
					uint8_t ___byte4092_267;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte4092_267_OffsetPadding_forAlignmentOnly[4092];
					uint8_t ___byte4092_267_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte4093_268_OffsetPadding[4093];
					// System.Byte Unity.Collections.FixedBytes4094::byte4093
					uint8_t ___byte4093_268;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte4093_268_OffsetPadding_forAlignmentOnly[4093];
					uint8_t ___byte4093_268_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes4094_t8611441D8BDC6A677C2D9E551086F59EFBFCBBE5__padding[4094];
	};
};

// Unity.Collections.FixedBytes510
struct FixedBytes510_t95B284C3FF966246998B23701C3F0F55C6BD7973 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0000
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0016_1_OffsetPadding[16];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0016
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0016_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0016_1_OffsetPadding_forAlignmentOnly[16];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0016_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0032_2_OffsetPadding[32];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0032
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0032_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0032_2_OffsetPadding_forAlignmentOnly[32];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0032_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0048_3_OffsetPadding[48];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0048
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0048_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0048_3_OffsetPadding_forAlignmentOnly[48];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0048_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0064_4_OffsetPadding[64];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0064
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0064_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0064_4_OffsetPadding_forAlignmentOnly[64];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0064_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0080_5_OffsetPadding[80];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0080
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0080_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0080_5_OffsetPadding_forAlignmentOnly[80];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0080_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0096_6_OffsetPadding[96];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0096
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0096_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0096_6_OffsetPadding_forAlignmentOnly[96];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0096_6_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0112_7_OffsetPadding[112];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0112
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0112_7;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0112_7_OffsetPadding_forAlignmentOnly[112];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0112_7_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0128_8_OffsetPadding[128];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0128
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0128_8;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0128_8_OffsetPadding_forAlignmentOnly[128];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0128_8_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0144_9_OffsetPadding[144];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0144
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0144_9;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0144_9_OffsetPadding_forAlignmentOnly[144];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0144_9_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0160_10_OffsetPadding[160];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0160
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0160_10;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0160_10_OffsetPadding_forAlignmentOnly[160];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0160_10_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0176_11_OffsetPadding[176];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0176
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0176_11;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0176_11_OffsetPadding_forAlignmentOnly[176];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0176_11_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0192_12_OffsetPadding[192];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0192
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0192_12;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0192_12_OffsetPadding_forAlignmentOnly[192];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0192_12_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0208_13_OffsetPadding[208];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0208
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0208_13;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0208_13_OffsetPadding_forAlignmentOnly[208];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0208_13_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0224_14_OffsetPadding[224];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0224
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0224_14;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0224_14_OffsetPadding_forAlignmentOnly[224];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0224_14_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0240_15_OffsetPadding[240];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0240
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0240_15;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0240_15_OffsetPadding_forAlignmentOnly[240];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0240_15_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0256_16_OffsetPadding[256];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0256
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0256_16;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0256_16_OffsetPadding_forAlignmentOnly[256];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0256_16_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0272_17_OffsetPadding[272];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0272
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0272_17;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0272_17_OffsetPadding_forAlignmentOnly[272];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0272_17_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0288_18_OffsetPadding[288];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0288
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0288_18;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0288_18_OffsetPadding_forAlignmentOnly[288];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0288_18_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0304_19_OffsetPadding[304];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0304
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0304_19;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0304_19_OffsetPadding_forAlignmentOnly[304];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0304_19_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0320_20_OffsetPadding[320];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0320
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0320_20;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0320_20_OffsetPadding_forAlignmentOnly[320];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0320_20_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0336_21_OffsetPadding[336];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0336
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0336_21;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0336_21_OffsetPadding_forAlignmentOnly[336];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0336_21_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0352_22_OffsetPadding[352];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0352
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0352_22;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0352_22_OffsetPadding_forAlignmentOnly[352];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0352_22_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0368_23_OffsetPadding[368];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0368
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0368_23;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0368_23_OffsetPadding_forAlignmentOnly[368];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0368_23_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0384_24_OffsetPadding[384];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0384
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0384_24;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0384_24_OffsetPadding_forAlignmentOnly[384];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0384_24_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0400_25_OffsetPadding[400];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0400
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0400_25;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0400_25_OffsetPadding_forAlignmentOnly[400];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0400_25_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0416_26_OffsetPadding[416];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0416
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0416_26;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0416_26_OffsetPadding_forAlignmentOnly[416];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0416_26_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0432_27_OffsetPadding[432];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0432
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0432_27;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0432_27_OffsetPadding_forAlignmentOnly[432];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0432_27_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0448_28_OffsetPadding[448];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0448
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0448_28;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0448_28_OffsetPadding_forAlignmentOnly[448];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0448_28_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0464_29_OffsetPadding[464];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0464
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0464_29;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0464_29_OffsetPadding_forAlignmentOnly[464];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0464_29_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0480_30_OffsetPadding[480];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0480
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0480_30;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0480_30_OffsetPadding_forAlignmentOnly[480];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0480_30_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0496_31_OffsetPadding[496];
					// System.Byte Unity.Collections.FixedBytes510::byte0496
					uint8_t ___byte0496_31;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0496_31_OffsetPadding_forAlignmentOnly[496];
					uint8_t ___byte0496_31_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0497_32_OffsetPadding[497];
					// System.Byte Unity.Collections.FixedBytes510::byte0497
					uint8_t ___byte0497_32;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0497_32_OffsetPadding_forAlignmentOnly[497];
					uint8_t ___byte0497_32_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0498_33_OffsetPadding[498];
					// System.Byte Unity.Collections.FixedBytes510::byte0498
					uint8_t ___byte0498_33;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0498_33_OffsetPadding_forAlignmentOnly[498];
					uint8_t ___byte0498_33_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0499_34_OffsetPadding[499];
					// System.Byte Unity.Collections.FixedBytes510::byte0499
					uint8_t ___byte0499_34;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0499_34_OffsetPadding_forAlignmentOnly[499];
					uint8_t ___byte0499_34_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0500_35_OffsetPadding[500];
					// System.Byte Unity.Collections.FixedBytes510::byte0500
					uint8_t ___byte0500_35;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0500_35_OffsetPadding_forAlignmentOnly[500];
					uint8_t ___byte0500_35_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0501_36_OffsetPadding[501];
					// System.Byte Unity.Collections.FixedBytes510::byte0501
					uint8_t ___byte0501_36;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0501_36_OffsetPadding_forAlignmentOnly[501];
					uint8_t ___byte0501_36_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0502_37_OffsetPadding[502];
					// System.Byte Unity.Collections.FixedBytes510::byte0502
					uint8_t ___byte0502_37;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0502_37_OffsetPadding_forAlignmentOnly[502];
					uint8_t ___byte0502_37_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0503_38_OffsetPadding[503];
					// System.Byte Unity.Collections.FixedBytes510::byte0503
					uint8_t ___byte0503_38;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0503_38_OffsetPadding_forAlignmentOnly[503];
					uint8_t ___byte0503_38_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0504_39_OffsetPadding[504];
					// System.Byte Unity.Collections.FixedBytes510::byte0504
					uint8_t ___byte0504_39;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0504_39_OffsetPadding_forAlignmentOnly[504];
					uint8_t ___byte0504_39_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0505_40_OffsetPadding[505];
					// System.Byte Unity.Collections.FixedBytes510::byte0505
					uint8_t ___byte0505_40;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0505_40_OffsetPadding_forAlignmentOnly[505];
					uint8_t ___byte0505_40_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0506_41_OffsetPadding[506];
					// System.Byte Unity.Collections.FixedBytes510::byte0506
					uint8_t ___byte0506_41;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0506_41_OffsetPadding_forAlignmentOnly[506];
					uint8_t ___byte0506_41_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0507_42_OffsetPadding[507];
					// System.Byte Unity.Collections.FixedBytes510::byte0507
					uint8_t ___byte0507_42;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0507_42_OffsetPadding_forAlignmentOnly[507];
					uint8_t ___byte0507_42_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0508_43_OffsetPadding[508];
					// System.Byte Unity.Collections.FixedBytes510::byte0508
					uint8_t ___byte0508_43;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0508_43_OffsetPadding_forAlignmentOnly[508];
					uint8_t ___byte0508_43_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0509_44_OffsetPadding[509];
					// System.Byte Unity.Collections.FixedBytes510::byte0509
					uint8_t ___byte0509_44;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0509_44_OffsetPadding_forAlignmentOnly[509];
					uint8_t ___byte0509_44_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes510_t95B284C3FF966246998B23701C3F0F55C6BD7973__padding[510];
	};
};

// Unity.Collections.FixedBytes62
struct FixedBytes62_t25CC23B7A3CF922DF0D1F0BFD5F801864D4FFD2A 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes62::offset0000
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0016_1_OffsetPadding[16];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes62::offset0016
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0016_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0016_1_OffsetPadding_forAlignmentOnly[16];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0016_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0032_2_OffsetPadding[32];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes62::offset0032
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0032_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0032_2_OffsetPadding_forAlignmentOnly[32];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0032_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0048_3_OffsetPadding[48];
					// System.Byte Unity.Collections.FixedBytes62::byte0048
					uint8_t ___byte0048_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0048_3_OffsetPadding_forAlignmentOnly[48];
					uint8_t ___byte0048_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0049_4_OffsetPadding[49];
					// System.Byte Unity.Collections.FixedBytes62::byte0049
					uint8_t ___byte0049_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0049_4_OffsetPadding_forAlignmentOnly[49];
					uint8_t ___byte0049_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0050_5_OffsetPadding[50];
					// System.Byte Unity.Collections.FixedBytes62::byte0050
					uint8_t ___byte0050_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0050_5_OffsetPadding_forAlignmentOnly[50];
					uint8_t ___byte0050_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0051_6_OffsetPadding[51];
					// System.Byte Unity.Collections.FixedBytes62::byte0051
					uint8_t ___byte0051_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0051_6_OffsetPadding_forAlignmentOnly[51];
					uint8_t ___byte0051_6_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0052_7_OffsetPadding[52];
					// System.Byte Unity.Collections.FixedBytes62::byte0052
					uint8_t ___byte0052_7;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0052_7_OffsetPadding_forAlignmentOnly[52];
					uint8_t ___byte0052_7_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0053_8_OffsetPadding[53];
					// System.Byte Unity.Collections.FixedBytes62::byte0053
					uint8_t ___byte0053_8;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0053_8_OffsetPadding_forAlignmentOnly[53];
					uint8_t ___byte0053_8_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0054_9_OffsetPadding[54];
					// System.Byte Unity.Collections.FixedBytes62::byte0054
					uint8_t ___byte0054_9;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0054_9_OffsetPadding_forAlignmentOnly[54];
					uint8_t ___byte0054_9_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0055_10_OffsetPadding[55];
					// System.Byte Unity.Collections.FixedBytes62::byte0055
					uint8_t ___byte0055_10;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0055_10_OffsetPadding_forAlignmentOnly[55];
					uint8_t ___byte0055_10_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0056_11_OffsetPadding[56];
					// System.Byte Unity.Collections.FixedBytes62::byte0056
					uint8_t ___byte0056_11;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0056_11_OffsetPadding_forAlignmentOnly[56];
					uint8_t ___byte0056_11_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0057_12_OffsetPadding[57];
					// System.Byte Unity.Collections.FixedBytes62::byte0057
					uint8_t ___byte0057_12;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0057_12_OffsetPadding_forAlignmentOnly[57];
					uint8_t ___byte0057_12_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0058_13_OffsetPadding[58];
					// System.Byte Unity.Collections.FixedBytes62::byte0058
					uint8_t ___byte0058_13;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0058_13_OffsetPadding_forAlignmentOnly[58];
					uint8_t ___byte0058_13_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0059_14_OffsetPadding[59];
					// System.Byte Unity.Collections.FixedBytes62::byte0059
					uint8_t ___byte0059_14;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0059_14_OffsetPadding_forAlignmentOnly[59];
					uint8_t ___byte0059_14_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0060_15_OffsetPadding[60];
					// System.Byte Unity.Collections.FixedBytes62::byte0060
					uint8_t ___byte0060_15;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0060_15_OffsetPadding_forAlignmentOnly[60];
					uint8_t ___byte0060_15_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0061_16_OffsetPadding[61];
					// System.Byte Unity.Collections.FixedBytes62::byte0061
					uint8_t ___byte0061_16;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0061_16_OffsetPadding_forAlignmentOnly[61];
					uint8_t ___byte0061_16_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes62_t25CC23B7A3CF922DF0D1F0BFD5F801864D4FFD2A__padding[62];
	};
};

// System.RuntimeMethodHandle
struct RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 
{
	// System.IntPtr System.RuntimeMethodHandle::value
	intptr_t ___value_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Unity.Burst.Intrinsics.v128
struct v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte Unity.Burst.Intrinsics.v128::Byte0
			uint8_t ___Byte0_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___Byte0_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_1_OffsetPadding[1];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte1
			uint8_t ___Byte1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte1_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___Byte1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_2_OffsetPadding[2];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte2
			uint8_t ___Byte2_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte2_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___Byte2_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_3_OffsetPadding[3];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte3
			uint8_t ___Byte3_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte3_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___Byte3_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte4_4_OffsetPadding[4];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte4
			uint8_t ___Byte4_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte4_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___Byte4_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte5_5_OffsetPadding[5];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte5
			uint8_t ___Byte5_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte5_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___Byte5_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte6_6_OffsetPadding[6];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte6
			uint8_t ___Byte6_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte6_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___Byte6_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte7_7_OffsetPadding[7];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte7
			uint8_t ___Byte7_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte7_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___Byte7_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte8_8_OffsetPadding[8];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte8
			uint8_t ___Byte8_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte8_8_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___Byte8_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte9_9_OffsetPadding[9];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte9
			uint8_t ___Byte9_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte9_9_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___Byte9_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte10_10_OffsetPadding[10];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte10
			uint8_t ___Byte10_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte10_10_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___Byte10_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte11_11_OffsetPadding[11];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte11
			uint8_t ___Byte11_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte11_11_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___Byte11_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte12_12_OffsetPadding[12];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte12
			uint8_t ___Byte12_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte12_12_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___Byte12_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte13_13_OffsetPadding[13];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte13
			uint8_t ___Byte13_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte13_13_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___Byte13_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte14_14_OffsetPadding[14];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte14
			uint8_t ___Byte14_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte14_14_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___Byte14_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte15_15_OffsetPadding[15];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte15
			uint8_t ___Byte15_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte15_15_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___Byte15_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.SByte Unity.Burst.Intrinsics.v128::SByte0
			int8_t ___SByte0_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___SByte0_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte1_17_OffsetPadding[1];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte1
			int8_t ___SByte1_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte1_17_OffsetPadding_forAlignmentOnly[1];
			int8_t ___SByte1_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte2_18_OffsetPadding[2];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte2
			int8_t ___SByte2_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte2_18_OffsetPadding_forAlignmentOnly[2];
			int8_t ___SByte2_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte3_19_OffsetPadding[3];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte3
			int8_t ___SByte3_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte3_19_OffsetPadding_forAlignmentOnly[3];
			int8_t ___SByte3_19_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte4_20_OffsetPadding[4];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte4
			int8_t ___SByte4_20;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte4_20_OffsetPadding_forAlignmentOnly[4];
			int8_t ___SByte4_20_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte5_21_OffsetPadding[5];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte5
			int8_t ___SByte5_21;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte5_21_OffsetPadding_forAlignmentOnly[5];
			int8_t ___SByte5_21_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte6_22_OffsetPadding[6];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte6
			int8_t ___SByte6_22;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte6_22_OffsetPadding_forAlignmentOnly[6];
			int8_t ___SByte6_22_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte7_23_OffsetPadding[7];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte7
			int8_t ___SByte7_23;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte7_23_OffsetPadding_forAlignmentOnly[7];
			int8_t ___SByte7_23_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte8_24_OffsetPadding[8];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte8
			int8_t ___SByte8_24;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte8_24_OffsetPadding_forAlignmentOnly[8];
			int8_t ___SByte8_24_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte9_25_OffsetPadding[9];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte9
			int8_t ___SByte9_25;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte9_25_OffsetPadding_forAlignmentOnly[9];
			int8_t ___SByte9_25_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte10_26_OffsetPadding[10];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte10
			int8_t ___SByte10_26;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte10_26_OffsetPadding_forAlignmentOnly[10];
			int8_t ___SByte10_26_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte11_27_OffsetPadding[11];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte11
			int8_t ___SByte11_27;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte11_27_OffsetPadding_forAlignmentOnly[11];
			int8_t ___SByte11_27_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte12_28_OffsetPadding[12];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte12
			int8_t ___SByte12_28;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte12_28_OffsetPadding_forAlignmentOnly[12];
			int8_t ___SByte12_28_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte13_29_OffsetPadding[13];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte13
			int8_t ___SByte13_29;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte13_29_OffsetPadding_forAlignmentOnly[13];
			int8_t ___SByte13_29_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte14_30_OffsetPadding[14];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte14
			int8_t ___SByte14_30;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte14_30_OffsetPadding_forAlignmentOnly[14];
			int8_t ___SByte14_30_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte15_31_OffsetPadding[15];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte15
			int8_t ___SByte15_31;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte15_31_OffsetPadding_forAlignmentOnly[15];
			int8_t ___SByte15_31_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort0
			uint16_t ___UShort0_32;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___UShort0_32_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort1_33_OffsetPadding[2];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort1
			uint16_t ___UShort1_33;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort1_33_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___UShort1_33_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort2_34_OffsetPadding[4];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort2
			uint16_t ___UShort2_34;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort2_34_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___UShort2_34_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort3_35_OffsetPadding[6];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort3
			uint16_t ___UShort3_35;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort3_35_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___UShort3_35_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort4_36_OffsetPadding[8];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort4
			uint16_t ___UShort4_36;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort4_36_OffsetPadding_forAlignmentOnly[8];
			uint16_t ___UShort4_36_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort5_37_OffsetPadding[10];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort5
			uint16_t ___UShort5_37;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort5_37_OffsetPadding_forAlignmentOnly[10];
			uint16_t ___UShort5_37_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort6_38_OffsetPadding[12];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort6
			uint16_t ___UShort6_38;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort6_38_OffsetPadding_forAlignmentOnly[12];
			uint16_t ___UShort6_38_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort7_39_OffsetPadding[14];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort7
			uint16_t ___UShort7_39;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort7_39_OffsetPadding_forAlignmentOnly[14];
			uint16_t ___UShort7_39_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort0
			int16_t ___SShort0_40;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___SShort0_40_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort1_41_OffsetPadding[2];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort1
			int16_t ___SShort1_41;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort1_41_OffsetPadding_forAlignmentOnly[2];
			int16_t ___SShort1_41_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort2_42_OffsetPadding[4];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort2
			int16_t ___SShort2_42;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort2_42_OffsetPadding_forAlignmentOnly[4];
			int16_t ___SShort2_42_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort3_43_OffsetPadding[6];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort3
			int16_t ___SShort3_43;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort3_43_OffsetPadding_forAlignmentOnly[6];
			int16_t ___SShort3_43_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort4_44_OffsetPadding[8];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort4
			int16_t ___SShort4_44;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort4_44_OffsetPadding_forAlignmentOnly[8];
			int16_t ___SShort4_44_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort5_45_OffsetPadding[10];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort5
			int16_t ___SShort5_45;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort5_45_OffsetPadding_forAlignmentOnly[10];
			int16_t ___SShort5_45_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort6_46_OffsetPadding[12];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort6
			int16_t ___SShort6_46;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort6_46_OffsetPadding_forAlignmentOnly[12];
			int16_t ___SShort6_46_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort7_47_OffsetPadding[14];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort7
			int16_t ___SShort7_47;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort7_47_OffsetPadding_forAlignmentOnly[14];
			int16_t ___SShort7_47_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 Unity.Burst.Intrinsics.v128::UInt0
			uint32_t ___UInt0_48;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___UInt0_48_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt1_49_OffsetPadding[4];
			// System.UInt32 Unity.Burst.Intrinsics.v128::UInt1
			uint32_t ___UInt1_49;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt1_49_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___UInt1_49_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt2_50_OffsetPadding[8];
			// System.UInt32 Unity.Burst.Intrinsics.v128::UInt2
			uint32_t ___UInt2_50;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt2_50_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___UInt2_50_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt3_51_OffsetPadding[12];
			// System.UInt32 Unity.Burst.Intrinsics.v128::UInt3
			uint32_t ___UInt3_51;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt3_51_OffsetPadding_forAlignmentOnly[12];
			uint32_t ___UInt3_51_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 Unity.Burst.Intrinsics.v128::SInt0
			int32_t ___SInt0_52;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___SInt0_52_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt1_53_OffsetPadding[4];
			// System.Int32 Unity.Burst.Intrinsics.v128::SInt1
			int32_t ___SInt1_53;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt1_53_OffsetPadding_forAlignmentOnly[4];
			int32_t ___SInt1_53_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt2_54_OffsetPadding[8];
			// System.Int32 Unity.Burst.Intrinsics.v128::SInt2
			int32_t ___SInt2_54;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt2_54_OffsetPadding_forAlignmentOnly[8];
			int32_t ___SInt2_54_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt3_55_OffsetPadding[12];
			// System.Int32 Unity.Burst.Intrinsics.v128::SInt3
			int32_t ___SInt3_55;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt3_55_OffsetPadding_forAlignmentOnly[12];
			int32_t ___SInt3_55_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 Unity.Burst.Intrinsics.v128::ULong0
			uint64_t ___ULong0_56;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___ULong0_56_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ULong1_57_OffsetPadding[8];
			// System.UInt64 Unity.Burst.Intrinsics.v128::ULong1
			uint64_t ___ULong1_57;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ULong1_57_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ULong1_57_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 Unity.Burst.Intrinsics.v128::SLong0
			int64_t ___SLong0_58;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___SLong0_58_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SLong1_59_OffsetPadding[8];
			// System.Int64 Unity.Burst.Intrinsics.v128::SLong1
			int64_t ___SLong1_59;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SLong1_59_OffsetPadding_forAlignmentOnly[8];
			int64_t ___SLong1_59_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single Unity.Burst.Intrinsics.v128::Float0
			float ___Float0_60;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___Float0_60_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float1_61_OffsetPadding[4];
			// System.Single Unity.Burst.Intrinsics.v128::Float1
			float ___Float1_61;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float1_61_OffsetPadding_forAlignmentOnly[4];
			float ___Float1_61_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float2_62_OffsetPadding[8];
			// System.Single Unity.Burst.Intrinsics.v128::Float2
			float ___Float2_62;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float2_62_OffsetPadding_forAlignmentOnly[8];
			float ___Float2_62_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float3_63_OffsetPadding[12];
			// System.Single Unity.Burst.Intrinsics.v128::Float3
			float ___Float3_63;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float3_63_OffsetPadding_forAlignmentOnly[12];
			float ___Float3_63_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double Unity.Burst.Intrinsics.v128::Double0
			double ___Double0_64;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___Double0_64_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Double1_65_OffsetPadding[8];
			// System.Double Unity.Burst.Intrinsics.v128::Double1
			double ___Double1_65;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Double1_65_OffsetPadding_forAlignmentOnly[8];
			double ___Double1_65_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Unity.Burst.Intrinsics.v64 Unity.Burst.Intrinsics.v128::Lo64
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Lo64_66;
		};
		#pragma pack(pop, tp)
		struct
		{
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Lo64_66_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Hi64_67_OffsetPadding[8];
			// Unity.Burst.Intrinsics.v64 Unity.Burst.Intrinsics.v128::Hi64
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Hi64_67;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Hi64_67_OffsetPadding_forAlignmentOnly[8];
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Hi64_67_forAlignmentOnly;
		};
	};
};

// Unity.Collections.AllocatorManager/Range
struct Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC 
{
	// System.IntPtr Unity.Collections.AllocatorManager/Range::Pointer
	intptr_t ___Pointer_0;
	// System.Int32 Unity.Collections.AllocatorManager/Range::Items
	int32_t ___Items_1;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.AllocatorManager/Range::Allocator
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator_2;
};

// Unity.Collections.AllocatorManager/TableEntry
struct TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE 
{
	// System.IntPtr Unity.Collections.AllocatorManager/TableEntry::function
	intptr_t ___function_0;
	// System.IntPtr Unity.Collections.AllocatorManager/TableEntry::state
	intptr_t ___state_1;
};

// Unity.Collections.RewindableAllocator/Unity.Collections.Try_00000732$BurstDirectCall
struct Try_00000732U24BurstDirectCall_t28B16B97A00C3DB614657AB878D0FF496041E1C0  : public RuntimeObject
{
};

struct Try_00000732U24BurstDirectCall_t28B16B97A00C3DB614657AB878D0FF496041E1C0_StaticFields
{
	// System.IntPtr Unity.Collections.RewindableAllocator/Unity.Collections.Try_00000732$BurstDirectCall::Pointer
	intptr_t ___Pointer_0;
	// System.IntPtr Unity.Collections.RewindableAllocator/Unity.Collections.Try_00000732$BurstDirectCall::DeferredCompilation
	intptr_t ___DeferredCompilation_1;
};

// Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000770$BurstDirectCall
struct Hash128Long_00000770U24BurstDirectCall_tA453B39A0B08507B472F985F7D9086A85E22CFFA  : public RuntimeObject
{
};

struct Hash128Long_00000770U24BurstDirectCall_tA453B39A0B08507B472F985F7D9086A85E22CFFA_StaticFields
{
	// System.IntPtr Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000770$BurstDirectCall::Pointer
	intptr_t ___Pointer_0;
	// System.IntPtr Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000770$BurstDirectCall::DeferredCompilation
	intptr_t ___DeferredCompilation_1;
};

// Unity.Collections.xxHash3/Unity.Collections.Hash64Long_00000769$BurstDirectCall
struct Hash64Long_00000769U24BurstDirectCall_tCB68055E3DECA22A01777D16D1C3024A66FB6D94  : public RuntimeObject
{
};

struct Hash64Long_00000769U24BurstDirectCall_tCB68055E3DECA22A01777D16D1C3024A66FB6D94_StaticFields
{
	// System.IntPtr Unity.Collections.xxHash3/Unity.Collections.Hash64Long_00000769$BurstDirectCall::Pointer
	intptr_t ___Pointer_0;
	// System.IntPtr Unity.Collections.xxHash3/Unity.Collections.Hash64Long_00000769$BurstDirectCall::DeferredCompilation
	intptr_t ___DeferredCompilation_1;
};

// Unity.Collections.AllocatorManager/SharedStatics/TableEntry
struct TableEntry_tC168732547D3913880E602CC895BCCDAED550A04  : public RuntimeObject
{
};

struct TableEntry_tC168732547D3913880E602CC895BCCDAED550A04_StaticFields
{
	// Unity.Burst.SharedStatic`1<Unity.Collections.AllocatorManager/Array32768`1<Unity.Collections.AllocatorManager/TableEntry>> Unity.Collections.AllocatorManager/SharedStatics/TableEntry::Ref
	SharedStatic_1_t129696039C3927DC9D39A2FADEBB24D67B1CD74E ___Ref_0;
};

// Unity.Collections.AllocatorManager/SlabAllocator/Try_00000A1A$BurstDirectCall
struct Try_00000A1AU24BurstDirectCall_t970F9722E1AFBB5D8419EC11F27DBC08866F197B  : public RuntimeObject
{
};

struct Try_00000A1AU24BurstDirectCall_t970F9722E1AFBB5D8419EC11F27DBC08866F197B_StaticFields
{
	// System.IntPtr Unity.Collections.AllocatorManager/SlabAllocator/Try_00000A1A$BurstDirectCall::Pointer
	intptr_t ___Pointer_0;
	// System.IntPtr Unity.Collections.AllocatorManager/SlabAllocator/Try_00000A1A$BurstDirectCall::DeferredCompilation
	intptr_t ___DeferredCompilation_1;
};

// Unity.Collections.AllocatorManager/StackAllocator/Try_00000A0C$BurstDirectCall
struct Try_00000A0CU24BurstDirectCall_t6914F9B847539B29521FF1DD1E19FD3F8369EDEA  : public RuntimeObject
{
};

struct Try_00000A0CU24BurstDirectCall_t6914F9B847539B29521FF1DD1E19FD3F8369EDEA_StaticFields
{
	// System.IntPtr Unity.Collections.AllocatorManager/StackAllocator/Try_00000A0C$BurstDirectCall::Pointer
	intptr_t ___Pointer_0;
	// System.IntPtr Unity.Collections.AllocatorManager/StackAllocator/Try_00000A0C$BurstDirectCall::DeferredCompilation
	intptr_t ___DeferredCompilation_1;
};

// Unity.Collections.AllocatorManager/Array16`1<Unity.Collections.AllocatorManager/TableEntry>
struct Array16_1_tD7DC1805EB67B07DF30FB4A25D3C1D0D5C0F9A9F 
{
	// T Unity.Collections.AllocatorManager/Array16`1::f0
	TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE ___f0_0;
	// T Unity.Collections.AllocatorManager/Array16`1::f1
	TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE ___f1_1;
	// T Unity.Collections.AllocatorManager/Array16`1::f2
	TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE ___f2_2;
	// T Unity.Collections.AllocatorManager/Array16`1::f3
	TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE ___f3_3;
	// T Unity.Collections.AllocatorManager/Array16`1::f4
	TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE ___f4_4;
	// T Unity.Collections.AllocatorManager/Array16`1::f5
	TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE ___f5_5;
	// T Unity.Collections.AllocatorManager/Array16`1::f6
	TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE ___f6_6;
	// T Unity.Collections.AllocatorManager/Array16`1::f7
	TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE ___f7_7;
	// T Unity.Collections.AllocatorManager/Array16`1::f8
	TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE ___f8_8;
	// T Unity.Collections.AllocatorManager/Array16`1::f9
	TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE ___f9_9;
	// T Unity.Collections.AllocatorManager/Array16`1::f10
	TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE ___f10_10;
	// T Unity.Collections.AllocatorManager/Array16`1::f11
	TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE ___f11_11;
	// T Unity.Collections.AllocatorManager/Array16`1::f12
	TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE ___f12_12;
	// T Unity.Collections.AllocatorManager/Array16`1::f13
	TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE ___f13_13;
	// T Unity.Collections.AllocatorManager/Array16`1::f14
	TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE ___f14_14;
	// T Unity.Collections.AllocatorManager/Array16`1::f15
	TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE ___f15_15;
};

// Unity.Collections.FixedList4096Bytes`1<System.Int32>
struct FixedList4096Bytes_1_t33F84B814E5486E0193FA1B57DDED67F7E28E259 
{
	// System.UInt16 Unity.Collections.FixedList4096Bytes`1::length
	uint16_t ___length_0;
	// Unity.Collections.FixedBytes4094 Unity.Collections.FixedList4096Bytes`1::buffer
	FixedBytes4094_t8611441D8BDC6A677C2D9E551086F59EFBFCBBE5 ___buffer_1;
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

// Unity.Collections.RewindableAllocator
struct RewindableAllocator_tB18F8ADC8F2EE36E1F51FCCCFF0AC093108EF254 
{
	// Unity.Collections.Spinner Unity.Collections.RewindableAllocator::m_spinner
	Spinner_t9606E334089E448EA313C31DC5EFC9345A58BCEB ___m_spinner_0;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.RewindableAllocator::m_handle
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_handle_1;
	// Unity.Collections.UnmanagedArray`1<Unity.Collections.RewindableAllocator/MemoryBlock> Unity.Collections.RewindableAllocator::m_block
	UnmanagedArray_1_t7A336330780E05C924BB57ED337DDD2A66701FAB ___m_block_2;
	// System.Int32 Unity.Collections.RewindableAllocator::m_best
	int32_t ___m_best_3;
	// System.Int32 Unity.Collections.RewindableAllocator::m_last
	int32_t ___m_last_4;
	// System.Int32 Unity.Collections.RewindableAllocator::m_used
	int32_t ___m_used_5;
	// System.Boolean Unity.Collections.RewindableAllocator::m_enableBlockFree
	bool ___m_enableBlockFree_6;
};
// Native definition for P/Invoke marshalling of Unity.Collections.RewindableAllocator
struct RewindableAllocator_tB18F8ADC8F2EE36E1F51FCCCFF0AC093108EF254_marshaled_pinvoke
{
	Spinner_t9606E334089E448EA313C31DC5EFC9345A58BCEB ___m_spinner_0;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_handle_1;
	UnmanagedArray_1_t7A336330780E05C924BB57ED337DDD2A66701FAB ___m_block_2;
	int32_t ___m_best_3;
	int32_t ___m_last_4;
	int32_t ___m_used_5;
	int32_t ___m_enableBlockFree_6;
};
// Native definition for COM marshalling of Unity.Collections.RewindableAllocator
struct RewindableAllocator_tB18F8ADC8F2EE36E1F51FCCCFF0AC093108EF254_marshaled_com
{
	Spinner_t9606E334089E448EA313C31DC5EFC9345A58BCEB ___m_spinner_0;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_handle_1;
	UnmanagedArray_1_t7A336330780E05C924BB57ED337DDD2A66701FAB ___m_block_2;
	int32_t ___m_best_3;
	int32_t ___m_last_4;
	int32_t ___m_used_5;
	int32_t ___m_enableBlockFree_6;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// Unity.Burst.Intrinsics.v256
struct v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte Unity.Burst.Intrinsics.v256::Byte0
			uint8_t ___Byte0_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___Byte0_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_1_OffsetPadding[1];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte1
			uint8_t ___Byte1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte1_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___Byte1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_2_OffsetPadding[2];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte2
			uint8_t ___Byte2_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte2_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___Byte2_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_3_OffsetPadding[3];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte3
			uint8_t ___Byte3_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte3_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___Byte3_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte4_4_OffsetPadding[4];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte4
			uint8_t ___Byte4_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte4_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___Byte4_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte5_5_OffsetPadding[5];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte5
			uint8_t ___Byte5_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte5_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___Byte5_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte6_6_OffsetPadding[6];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte6
			uint8_t ___Byte6_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte6_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___Byte6_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte7_7_OffsetPadding[7];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte7
			uint8_t ___Byte7_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte7_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___Byte7_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte8_8_OffsetPadding[8];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte8
			uint8_t ___Byte8_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte8_8_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___Byte8_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte9_9_OffsetPadding[9];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte9
			uint8_t ___Byte9_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte9_9_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___Byte9_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte10_10_OffsetPadding[10];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte10
			uint8_t ___Byte10_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte10_10_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___Byte10_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte11_11_OffsetPadding[11];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte11
			uint8_t ___Byte11_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte11_11_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___Byte11_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte12_12_OffsetPadding[12];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte12
			uint8_t ___Byte12_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte12_12_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___Byte12_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte13_13_OffsetPadding[13];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte13
			uint8_t ___Byte13_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte13_13_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___Byte13_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte14_14_OffsetPadding[14];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte14
			uint8_t ___Byte14_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte14_14_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___Byte14_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte15_15_OffsetPadding[15];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte15
			uint8_t ___Byte15_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte15_15_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___Byte15_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte16_16_OffsetPadding[16];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte16
			uint8_t ___Byte16_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte16_16_OffsetPadding_forAlignmentOnly[16];
			uint8_t ___Byte16_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte17_17_OffsetPadding[17];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte17
			uint8_t ___Byte17_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte17_17_OffsetPadding_forAlignmentOnly[17];
			uint8_t ___Byte17_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte18_18_OffsetPadding[18];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte18
			uint8_t ___Byte18_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte18_18_OffsetPadding_forAlignmentOnly[18];
			uint8_t ___Byte18_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte19_19_OffsetPadding[19];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte19
			uint8_t ___Byte19_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte19_19_OffsetPadding_forAlignmentOnly[19];
			uint8_t ___Byte19_19_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte20_20_OffsetPadding[20];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte20
			uint8_t ___Byte20_20;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte20_20_OffsetPadding_forAlignmentOnly[20];
			uint8_t ___Byte20_20_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte21_21_OffsetPadding[21];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte21
			uint8_t ___Byte21_21;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte21_21_OffsetPadding_forAlignmentOnly[21];
			uint8_t ___Byte21_21_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte22_22_OffsetPadding[22];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte22
			uint8_t ___Byte22_22;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte22_22_OffsetPadding_forAlignmentOnly[22];
			uint8_t ___Byte22_22_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte23_23_OffsetPadding[23];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte23
			uint8_t ___Byte23_23;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte23_23_OffsetPadding_forAlignmentOnly[23];
			uint8_t ___Byte23_23_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte24_24_OffsetPadding[24];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte24
			uint8_t ___Byte24_24;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte24_24_OffsetPadding_forAlignmentOnly[24];
			uint8_t ___Byte24_24_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte25_25_OffsetPadding[25];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte25
			uint8_t ___Byte25_25;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte25_25_OffsetPadding_forAlignmentOnly[25];
			uint8_t ___Byte25_25_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte26_26_OffsetPadding[26];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte26
			uint8_t ___Byte26_26;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte26_26_OffsetPadding_forAlignmentOnly[26];
			uint8_t ___Byte26_26_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte27_27_OffsetPadding[27];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte27
			uint8_t ___Byte27_27;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte27_27_OffsetPadding_forAlignmentOnly[27];
			uint8_t ___Byte27_27_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte28_28_OffsetPadding[28];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte28
			uint8_t ___Byte28_28;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte28_28_OffsetPadding_forAlignmentOnly[28];
			uint8_t ___Byte28_28_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte29_29_OffsetPadding[29];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte29
			uint8_t ___Byte29_29;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte29_29_OffsetPadding_forAlignmentOnly[29];
			uint8_t ___Byte29_29_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte30_30_OffsetPadding[30];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte30
			uint8_t ___Byte30_30;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte30_30_OffsetPadding_forAlignmentOnly[30];
			uint8_t ___Byte30_30_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte31_31_OffsetPadding[31];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte31
			uint8_t ___Byte31_31;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte31_31_OffsetPadding_forAlignmentOnly[31];
			uint8_t ___Byte31_31_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.SByte Unity.Burst.Intrinsics.v256::SByte0
			int8_t ___SByte0_32;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___SByte0_32_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte1_33_OffsetPadding[1];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte1
			int8_t ___SByte1_33;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte1_33_OffsetPadding_forAlignmentOnly[1];
			int8_t ___SByte1_33_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte2_34_OffsetPadding[2];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte2
			int8_t ___SByte2_34;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte2_34_OffsetPadding_forAlignmentOnly[2];
			int8_t ___SByte2_34_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte3_35_OffsetPadding[3];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte3
			int8_t ___SByte3_35;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte3_35_OffsetPadding_forAlignmentOnly[3];
			int8_t ___SByte3_35_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte4_36_OffsetPadding[4];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte4
			int8_t ___SByte4_36;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte4_36_OffsetPadding_forAlignmentOnly[4];
			int8_t ___SByte4_36_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte5_37_OffsetPadding[5];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte5
			int8_t ___SByte5_37;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte5_37_OffsetPadding_forAlignmentOnly[5];
			int8_t ___SByte5_37_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte6_38_OffsetPadding[6];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte6
			int8_t ___SByte6_38;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte6_38_OffsetPadding_forAlignmentOnly[6];
			int8_t ___SByte6_38_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte7_39_OffsetPadding[7];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte7
			int8_t ___SByte7_39;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte7_39_OffsetPadding_forAlignmentOnly[7];
			int8_t ___SByte7_39_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte8_40_OffsetPadding[8];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte8
			int8_t ___SByte8_40;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte8_40_OffsetPadding_forAlignmentOnly[8];
			int8_t ___SByte8_40_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte9_41_OffsetPadding[9];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte9
			int8_t ___SByte9_41;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte9_41_OffsetPadding_forAlignmentOnly[9];
			int8_t ___SByte9_41_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte10_42_OffsetPadding[10];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte10
			int8_t ___SByte10_42;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte10_42_OffsetPadding_forAlignmentOnly[10];
			int8_t ___SByte10_42_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte11_43_OffsetPadding[11];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte11
			int8_t ___SByte11_43;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte11_43_OffsetPadding_forAlignmentOnly[11];
			int8_t ___SByte11_43_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte12_44_OffsetPadding[12];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte12
			int8_t ___SByte12_44;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte12_44_OffsetPadding_forAlignmentOnly[12];
			int8_t ___SByte12_44_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte13_45_OffsetPadding[13];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte13
			int8_t ___SByte13_45;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte13_45_OffsetPadding_forAlignmentOnly[13];
			int8_t ___SByte13_45_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte14_46_OffsetPadding[14];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte14
			int8_t ___SByte14_46;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte14_46_OffsetPadding_forAlignmentOnly[14];
			int8_t ___SByte14_46_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte15_47_OffsetPadding[15];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte15
			int8_t ___SByte15_47;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte15_47_OffsetPadding_forAlignmentOnly[15];
			int8_t ___SByte15_47_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte16_48_OffsetPadding[16];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte16
			int8_t ___SByte16_48;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte16_48_OffsetPadding_forAlignmentOnly[16];
			int8_t ___SByte16_48_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte17_49_OffsetPadding[17];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte17
			int8_t ___SByte17_49;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte17_49_OffsetPadding_forAlignmentOnly[17];
			int8_t ___SByte17_49_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte18_50_OffsetPadding[18];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte18
			int8_t ___SByte18_50;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte18_50_OffsetPadding_forAlignmentOnly[18];
			int8_t ___SByte18_50_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte19_51_OffsetPadding[19];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte19
			int8_t ___SByte19_51;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte19_51_OffsetPadding_forAlignmentOnly[19];
			int8_t ___SByte19_51_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte20_52_OffsetPadding[20];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte20
			int8_t ___SByte20_52;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte20_52_OffsetPadding_forAlignmentOnly[20];
			int8_t ___SByte20_52_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte21_53_OffsetPadding[21];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte21
			int8_t ___SByte21_53;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte21_53_OffsetPadding_forAlignmentOnly[21];
			int8_t ___SByte21_53_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte22_54_OffsetPadding[22];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte22
			int8_t ___SByte22_54;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte22_54_OffsetPadding_forAlignmentOnly[22];
			int8_t ___SByte22_54_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte23_55_OffsetPadding[23];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte23
			int8_t ___SByte23_55;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte23_55_OffsetPadding_forAlignmentOnly[23];
			int8_t ___SByte23_55_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte24_56_OffsetPadding[24];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte24
			int8_t ___SByte24_56;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte24_56_OffsetPadding_forAlignmentOnly[24];
			int8_t ___SByte24_56_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte25_57_OffsetPadding[25];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte25
			int8_t ___SByte25_57;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte25_57_OffsetPadding_forAlignmentOnly[25];
			int8_t ___SByte25_57_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte26_58_OffsetPadding[26];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte26
			int8_t ___SByte26_58;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte26_58_OffsetPadding_forAlignmentOnly[26];
			int8_t ___SByte26_58_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte27_59_OffsetPadding[27];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte27
			int8_t ___SByte27_59;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte27_59_OffsetPadding_forAlignmentOnly[27];
			int8_t ___SByte27_59_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte28_60_OffsetPadding[28];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte28
			int8_t ___SByte28_60;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte28_60_OffsetPadding_forAlignmentOnly[28];
			int8_t ___SByte28_60_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte29_61_OffsetPadding[29];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte29
			int8_t ___SByte29_61;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte29_61_OffsetPadding_forAlignmentOnly[29];
			int8_t ___SByte29_61_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte30_62_OffsetPadding[30];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte30
			int8_t ___SByte30_62;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte30_62_OffsetPadding_forAlignmentOnly[30];
			int8_t ___SByte30_62_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte31_63_OffsetPadding[31];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte31
			int8_t ___SByte31_63;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte31_63_OffsetPadding_forAlignmentOnly[31];
			int8_t ___SByte31_63_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt16 Unity.Burst.Intrinsics.v256::UShort0
			uint16_t ___UShort0_64;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___UShort0_64_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort1_65_OffsetPadding[2];
			// System.UInt16 Unity.Burst.Intrinsics.v256::UShort1
			uint16_t ___UShort1_65;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort1_65_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___UShort1_65_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort2_66_OffsetPadding[4];
			// System.UInt16 Unity.Burst.Intrinsics.v256::UShort2
			uint16_t ___UShort2_66;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort2_66_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___UShort2_66_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort3_67_OffsetPadding[6];
			// System.UInt16 Unity.Burst.Intrinsics.v256::UShort3
			uint16_t ___UShort3_67;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort3_67_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___UShort3_67_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort4_68_OffsetPadding[8];
			// System.UInt16 Unity.Burst.Intrinsics.v256::UShort4
			uint16_t ___UShort4_68;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort4_68_OffsetPadding_forAlignmentOnly[8];
			uint16_t ___UShort4_68_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort5_69_OffsetPadding[10];
			// System.UInt16 Unity.Burst.Intrinsics.v256::UShort5
			uint16_t ___UShort5_69;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort5_69_OffsetPadding_forAlignmentOnly[10];
			uint16_t ___UShort5_69_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort6_70_OffsetPadding[12];
			// System.UInt16 Unity.Burst.Intrinsics.v256::UShort6
			uint16_t ___UShort6_70;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort6_70_OffsetPadding_forAlignmentOnly[12];
			uint16_t ___UShort6_70_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort7_71_OffsetPadding[14];
			// System.UInt16 Unity.Burst.Intrinsics.v256::UShort7
			uint16_t ___UShort7_71;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort7_71_OffsetPadding_forAlignmentOnly[14];
			uint16_t ___UShort7_71_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort8_72_OffsetPadding[16];
			// System.UInt16 Unity.Burst.Intrinsics.v256::UShort8
			uint16_t ___UShort8_72;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort8_72_OffsetPadding_forAlignmentOnly[16];
			uint16_t ___UShort8_72_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort9_73_OffsetPadding[18];
			// System.UInt16 Unity.Burst.Intrinsics.v256::UShort9
			uint16_t ___UShort9_73;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort9_73_OffsetPadding_forAlignmentOnly[18];
			uint16_t ___UShort9_73_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort10_74_OffsetPadding[20];
			// System.UInt16 Unity.Burst.Intrinsics.v256::UShort10
			uint16_t ___UShort10_74;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort10_74_OffsetPadding_forAlignmentOnly[20];
			uint16_t ___UShort10_74_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort11_75_OffsetPadding[22];
			// System.UInt16 Unity.Burst.Intrinsics.v256::UShort11
			uint16_t ___UShort11_75;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort11_75_OffsetPadding_forAlignmentOnly[22];
			uint16_t ___UShort11_75_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort12_76_OffsetPadding[24];
			// System.UInt16 Unity.Burst.Intrinsics.v256::UShort12
			uint16_t ___UShort12_76;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort12_76_OffsetPadding_forAlignmentOnly[24];
			uint16_t ___UShort12_76_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort13_77_OffsetPadding[26];
			// System.UInt16 Unity.Burst.Intrinsics.v256::UShort13
			uint16_t ___UShort13_77;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort13_77_OffsetPadding_forAlignmentOnly[26];
			uint16_t ___UShort13_77_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort14_78_OffsetPadding[28];
			// System.UInt16 Unity.Burst.Intrinsics.v256::UShort14
			uint16_t ___UShort14_78;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort14_78_OffsetPadding_forAlignmentOnly[28];
			uint16_t ___UShort14_78_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort15_79_OffsetPadding[30];
			// System.UInt16 Unity.Burst.Intrinsics.v256::UShort15
			uint16_t ___UShort15_79;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort15_79_OffsetPadding_forAlignmentOnly[30];
			uint16_t ___UShort15_79_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 Unity.Burst.Intrinsics.v256::SShort0
			int16_t ___SShort0_80;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___SShort0_80_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort1_81_OffsetPadding[2];
			// System.Int16 Unity.Burst.Intrinsics.v256::SShort1
			int16_t ___SShort1_81;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort1_81_OffsetPadding_forAlignmentOnly[2];
			int16_t ___SShort1_81_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort2_82_OffsetPadding[4];
			// System.Int16 Unity.Burst.Intrinsics.v256::SShort2
			int16_t ___SShort2_82;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort2_82_OffsetPadding_forAlignmentOnly[4];
			int16_t ___SShort2_82_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort3_83_OffsetPadding[6];
			// System.Int16 Unity.Burst.Intrinsics.v256::SShort3
			int16_t ___SShort3_83;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort3_83_OffsetPadding_forAlignmentOnly[6];
			int16_t ___SShort3_83_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort4_84_OffsetPadding[8];
			// System.Int16 Unity.Burst.Intrinsics.v256::SShort4
			int16_t ___SShort4_84;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort4_84_OffsetPadding_forAlignmentOnly[8];
			int16_t ___SShort4_84_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort5_85_OffsetPadding[10];
			// System.Int16 Unity.Burst.Intrinsics.v256::SShort5
			int16_t ___SShort5_85;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort5_85_OffsetPadding_forAlignmentOnly[10];
			int16_t ___SShort5_85_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort6_86_OffsetPadding[12];
			// System.Int16 Unity.Burst.Intrinsics.v256::SShort6
			int16_t ___SShort6_86;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort6_86_OffsetPadding_forAlignmentOnly[12];
			int16_t ___SShort6_86_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort7_87_OffsetPadding[14];
			// System.Int16 Unity.Burst.Intrinsics.v256::SShort7
			int16_t ___SShort7_87;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort7_87_OffsetPadding_forAlignmentOnly[14];
			int16_t ___SShort7_87_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort8_88_OffsetPadding[16];
			// System.Int16 Unity.Burst.Intrinsics.v256::SShort8
			int16_t ___SShort8_88;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort8_88_OffsetPadding_forAlignmentOnly[16];
			int16_t ___SShort8_88_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort9_89_OffsetPadding[18];
			// System.Int16 Unity.Burst.Intrinsics.v256::SShort9
			int16_t ___SShort9_89;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort9_89_OffsetPadding_forAlignmentOnly[18];
			int16_t ___SShort9_89_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort10_90_OffsetPadding[20];
			// System.Int16 Unity.Burst.Intrinsics.v256::SShort10
			int16_t ___SShort10_90;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort10_90_OffsetPadding_forAlignmentOnly[20];
			int16_t ___SShort10_90_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort11_91_OffsetPadding[22];
			// System.Int16 Unity.Burst.Intrinsics.v256::SShort11
			int16_t ___SShort11_91;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort11_91_OffsetPadding_forAlignmentOnly[22];
			int16_t ___SShort11_91_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort12_92_OffsetPadding[24];
			// System.Int16 Unity.Burst.Intrinsics.v256::SShort12
			int16_t ___SShort12_92;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort12_92_OffsetPadding_forAlignmentOnly[24];
			int16_t ___SShort12_92_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort13_93_OffsetPadding[26];
			// System.Int16 Unity.Burst.Intrinsics.v256::SShort13
			int16_t ___SShort13_93;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort13_93_OffsetPadding_forAlignmentOnly[26];
			int16_t ___SShort13_93_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort14_94_OffsetPadding[28];
			// System.Int16 Unity.Burst.Intrinsics.v256::SShort14
			int16_t ___SShort14_94;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort14_94_OffsetPadding_forAlignmentOnly[28];
			int16_t ___SShort14_94_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort15_95_OffsetPadding[30];
			// System.Int16 Unity.Burst.Intrinsics.v256::SShort15
			int16_t ___SShort15_95;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort15_95_OffsetPadding_forAlignmentOnly[30];
			int16_t ___SShort15_95_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 Unity.Burst.Intrinsics.v256::UInt0
			uint32_t ___UInt0_96;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___UInt0_96_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt1_97_OffsetPadding[4];
			// System.UInt32 Unity.Burst.Intrinsics.v256::UInt1
			uint32_t ___UInt1_97;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt1_97_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___UInt1_97_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt2_98_OffsetPadding[8];
			// System.UInt32 Unity.Burst.Intrinsics.v256::UInt2
			uint32_t ___UInt2_98;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt2_98_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___UInt2_98_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt3_99_OffsetPadding[12];
			// System.UInt32 Unity.Burst.Intrinsics.v256::UInt3
			uint32_t ___UInt3_99;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt3_99_OffsetPadding_forAlignmentOnly[12];
			uint32_t ___UInt3_99_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt4_100_OffsetPadding[16];
			// System.UInt32 Unity.Burst.Intrinsics.v256::UInt4
			uint32_t ___UInt4_100;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt4_100_OffsetPadding_forAlignmentOnly[16];
			uint32_t ___UInt4_100_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt5_101_OffsetPadding[20];
			// System.UInt32 Unity.Burst.Intrinsics.v256::UInt5
			uint32_t ___UInt5_101;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt5_101_OffsetPadding_forAlignmentOnly[20];
			uint32_t ___UInt5_101_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt6_102_OffsetPadding[24];
			// System.UInt32 Unity.Burst.Intrinsics.v256::UInt6
			uint32_t ___UInt6_102;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt6_102_OffsetPadding_forAlignmentOnly[24];
			uint32_t ___UInt6_102_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt7_103_OffsetPadding[28];
			// System.UInt32 Unity.Burst.Intrinsics.v256::UInt7
			uint32_t ___UInt7_103;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt7_103_OffsetPadding_forAlignmentOnly[28];
			uint32_t ___UInt7_103_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 Unity.Burst.Intrinsics.v256::SInt0
			int32_t ___SInt0_104;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___SInt0_104_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt1_105_OffsetPadding[4];
			// System.Int32 Unity.Burst.Intrinsics.v256::SInt1
			int32_t ___SInt1_105;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt1_105_OffsetPadding_forAlignmentOnly[4];
			int32_t ___SInt1_105_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt2_106_OffsetPadding[8];
			// System.Int32 Unity.Burst.Intrinsics.v256::SInt2
			int32_t ___SInt2_106;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt2_106_OffsetPadding_forAlignmentOnly[8];
			int32_t ___SInt2_106_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt3_107_OffsetPadding[12];
			// System.Int32 Unity.Burst.Intrinsics.v256::SInt3
			int32_t ___SInt3_107;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt3_107_OffsetPadding_forAlignmentOnly[12];
			int32_t ___SInt3_107_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt4_108_OffsetPadding[16];
			// System.Int32 Unity.Burst.Intrinsics.v256::SInt4
			int32_t ___SInt4_108;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt4_108_OffsetPadding_forAlignmentOnly[16];
			int32_t ___SInt4_108_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt5_109_OffsetPadding[20];
			// System.Int32 Unity.Burst.Intrinsics.v256::SInt5
			int32_t ___SInt5_109;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt5_109_OffsetPadding_forAlignmentOnly[20];
			int32_t ___SInt5_109_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt6_110_OffsetPadding[24];
			// System.Int32 Unity.Burst.Intrinsics.v256::SInt6
			int32_t ___SInt6_110;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt6_110_OffsetPadding_forAlignmentOnly[24];
			int32_t ___SInt6_110_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt7_111_OffsetPadding[28];
			// System.Int32 Unity.Burst.Intrinsics.v256::SInt7
			int32_t ___SInt7_111;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt7_111_OffsetPadding_forAlignmentOnly[28];
			int32_t ___SInt7_111_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 Unity.Burst.Intrinsics.v256::ULong0
			uint64_t ___ULong0_112;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___ULong0_112_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ULong1_113_OffsetPadding[8];
			// System.UInt64 Unity.Burst.Intrinsics.v256::ULong1
			uint64_t ___ULong1_113;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ULong1_113_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ULong1_113_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ULong2_114_OffsetPadding[16];
			// System.UInt64 Unity.Burst.Intrinsics.v256::ULong2
			uint64_t ___ULong2_114;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ULong2_114_OffsetPadding_forAlignmentOnly[16];
			uint64_t ___ULong2_114_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ULong3_115_OffsetPadding[24];
			// System.UInt64 Unity.Burst.Intrinsics.v256::ULong3
			uint64_t ___ULong3_115;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ULong3_115_OffsetPadding_forAlignmentOnly[24];
			uint64_t ___ULong3_115_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 Unity.Burst.Intrinsics.v256::SLong0
			int64_t ___SLong0_116;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___SLong0_116_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SLong1_117_OffsetPadding[8];
			// System.Int64 Unity.Burst.Intrinsics.v256::SLong1
			int64_t ___SLong1_117;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SLong1_117_OffsetPadding_forAlignmentOnly[8];
			int64_t ___SLong1_117_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SLong2_118_OffsetPadding[16];
			// System.Int64 Unity.Burst.Intrinsics.v256::SLong2
			int64_t ___SLong2_118;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SLong2_118_OffsetPadding_forAlignmentOnly[16];
			int64_t ___SLong2_118_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SLong3_119_OffsetPadding[24];
			// System.Int64 Unity.Burst.Intrinsics.v256::SLong3
			int64_t ___SLong3_119;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SLong3_119_OffsetPadding_forAlignmentOnly[24];
			int64_t ___SLong3_119_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single Unity.Burst.Intrinsics.v256::Float0
			float ___Float0_120;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___Float0_120_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float1_121_OffsetPadding[4];
			// System.Single Unity.Burst.Intrinsics.v256::Float1
			float ___Float1_121;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float1_121_OffsetPadding_forAlignmentOnly[4];
			float ___Float1_121_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float2_122_OffsetPadding[8];
			// System.Single Unity.Burst.Intrinsics.v256::Float2
			float ___Float2_122;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float2_122_OffsetPadding_forAlignmentOnly[8];
			float ___Float2_122_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float3_123_OffsetPadding[12];
			// System.Single Unity.Burst.Intrinsics.v256::Float3
			float ___Float3_123;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float3_123_OffsetPadding_forAlignmentOnly[12];
			float ___Float3_123_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float4_124_OffsetPadding[16];
			// System.Single Unity.Burst.Intrinsics.v256::Float4
			float ___Float4_124;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float4_124_OffsetPadding_forAlignmentOnly[16];
			float ___Float4_124_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float5_125_OffsetPadding[20];
			// System.Single Unity.Burst.Intrinsics.v256::Float5
			float ___Float5_125;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float5_125_OffsetPadding_forAlignmentOnly[20];
			float ___Float5_125_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float6_126_OffsetPadding[24];
			// System.Single Unity.Burst.Intrinsics.v256::Float6
			float ___Float6_126;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float6_126_OffsetPadding_forAlignmentOnly[24];
			float ___Float6_126_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float7_127_OffsetPadding[28];
			// System.Single Unity.Burst.Intrinsics.v256::Float7
			float ___Float7_127;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float7_127_OffsetPadding_forAlignmentOnly[28];
			float ___Float7_127_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double Unity.Burst.Intrinsics.v256::Double0
			double ___Double0_128;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___Double0_128_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Double1_129_OffsetPadding[8];
			// System.Double Unity.Burst.Intrinsics.v256::Double1
			double ___Double1_129;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Double1_129_OffsetPadding_forAlignmentOnly[8];
			double ___Double1_129_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Double2_130_OffsetPadding[16];
			// System.Double Unity.Burst.Intrinsics.v256::Double2
			double ___Double2_130;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Double2_130_OffsetPadding_forAlignmentOnly[16];
			double ___Double2_130_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Double3_131_OffsetPadding[24];
			// System.Double Unity.Burst.Intrinsics.v256::Double3
			double ___Double3_131;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Double3_131_OffsetPadding_forAlignmentOnly[24];
			double ___Double3_131_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.v256::Lo128
			v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 ___Lo128_132;
		};
		#pragma pack(pop, tp)
		struct
		{
			v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 ___Lo128_132_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Hi128_133_OffsetPadding[16];
			// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.v256::Hi128
			v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 ___Hi128_133;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Hi128_133_OffsetPadding_forAlignmentOnly[16];
			v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 ___Hi128_133_forAlignmentOnly;
		};
	};
};

// Unity.Collections.AllocatorManager/Block
struct Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 
{
	// Unity.Collections.AllocatorManager/Range Unity.Collections.AllocatorManager/Block::Range
	Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC ___Range_0;
	// System.Int32 Unity.Collections.AllocatorManager/Block::BytesPerItem
	int32_t ___BytesPerItem_1;
	// System.Int32 Unity.Collections.AllocatorManager/Block::AllocatedItems
	int32_t ___AllocatedItems_2;
	// System.Byte Unity.Collections.AllocatorManager/Block::Log2Alignment
	uint8_t ___Log2Alignment_3;
	// System.Byte Unity.Collections.AllocatorManager/Block::Padding0
	uint8_t ___Padding0_4;
	// System.UInt16 Unity.Collections.AllocatorManager/Block::Padding1
	uint16_t ___Padding1_5;
	// System.UInt32 Unity.Collections.AllocatorManager/Block::Padding2
	uint32_t ___Padding2_6;
};

// Unity.Collections.AllocatorManager/Array256`1<Unity.Collections.AllocatorManager/TableEntry>
struct Array256_1_t5410033DC9920374048839AA4B80BA4420373D59 
{
	// Unity.Collections.AllocatorManager/Array16`1<T> Unity.Collections.AllocatorManager/Array256`1::f0
	Array16_1_tD7DC1805EB67B07DF30FB4A25D3C1D0D5C0F9A9F ___f0_0;
	// Unity.Collections.AllocatorManager/Array16`1<T> Unity.Collections.AllocatorManager/Array256`1::f1
	Array16_1_tD7DC1805EB67B07DF30FB4A25D3C1D0D5C0F9A9F ___f1_1;
	// Unity.Collections.AllocatorManager/Array16`1<T> Unity.Collections.AllocatorManager/Array256`1::f2
	Array16_1_tD7DC1805EB67B07DF30FB4A25D3C1D0D5C0F9A9F ___f2_2;
	// Unity.Collections.AllocatorManager/Array16`1<T> Unity.Collections.AllocatorManager/Array256`1::f3
	Array16_1_tD7DC1805EB67B07DF30FB4A25D3C1D0D5C0F9A9F ___f3_3;
	// Unity.Collections.AllocatorManager/Array16`1<T> Unity.Collections.AllocatorManager/Array256`1::f4
	Array16_1_tD7DC1805EB67B07DF30FB4A25D3C1D0D5C0F9A9F ___f4_4;
	// Unity.Collections.AllocatorManager/Array16`1<T> Unity.Collections.AllocatorManager/Array256`1::f5
	Array16_1_tD7DC1805EB67B07DF30FB4A25D3C1D0D5C0F9A9F ___f5_5;
	// Unity.Collections.AllocatorManager/Array16`1<T> Unity.Collections.AllocatorManager/Array256`1::f6
	Array16_1_tD7DC1805EB67B07DF30FB4A25D3C1D0D5C0F9A9F ___f6_6;
	// Unity.Collections.AllocatorManager/Array16`1<T> Unity.Collections.AllocatorManager/Array256`1::f7
	Array16_1_tD7DC1805EB67B07DF30FB4A25D3C1D0D5C0F9A9F ___f7_7;
	// Unity.Collections.AllocatorManager/Array16`1<T> Unity.Collections.AllocatorManager/Array256`1::f8
	Array16_1_tD7DC1805EB67B07DF30FB4A25D3C1D0D5C0F9A9F ___f8_8;
	// Unity.Collections.AllocatorManager/Array16`1<T> Unity.Collections.AllocatorManager/Array256`1::f9
	Array16_1_tD7DC1805EB67B07DF30FB4A25D3C1D0D5C0F9A9F ___f9_9;
	// Unity.Collections.AllocatorManager/Array16`1<T> Unity.Collections.AllocatorManager/Array256`1::f10
	Array16_1_tD7DC1805EB67B07DF30FB4A25D3C1D0D5C0F9A9F ___f10_10;
	// Unity.Collections.AllocatorManager/Array16`1<T> Unity.Collections.AllocatorManager/Array256`1::f11
	Array16_1_tD7DC1805EB67B07DF30FB4A25D3C1D0D5C0F9A9F ___f11_11;
	// Unity.Collections.AllocatorManager/Array16`1<T> Unity.Collections.AllocatorManager/Array256`1::f12
	Array16_1_tD7DC1805EB67B07DF30FB4A25D3C1D0D5C0F9A9F ___f12_12;
	// Unity.Collections.AllocatorManager/Array16`1<T> Unity.Collections.AllocatorManager/Array256`1::f13
	Array16_1_tD7DC1805EB67B07DF30FB4A25D3C1D0D5C0F9A9F ___f13_13;
	// Unity.Collections.AllocatorManager/Array16`1<T> Unity.Collections.AllocatorManager/Array256`1::f14
	Array16_1_tD7DC1805EB67B07DF30FB4A25D3C1D0D5C0F9A9F ___f14_14;
	// Unity.Collections.AllocatorManager/Array16`1<T> Unity.Collections.AllocatorManager/Array256`1::f15
	Array16_1_tD7DC1805EB67B07DF30FB4A25D3C1D0D5C0F9A9F ___f15_15;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Unity.Collections.AllocatorManager/SlabAllocator
struct SlabAllocator_t1E255FCD698DFC3C2B043645B30E794330CD10ED 
{
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.AllocatorManager/SlabAllocator::m_handle
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_handle_0;
	// Unity.Collections.AllocatorManager/Block Unity.Collections.AllocatorManager/SlabAllocator::Storage
	Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 ___Storage_1;
	// System.Int32 Unity.Collections.AllocatorManager/SlabAllocator::Log2SlabSizeInBytes
	int32_t ___Log2SlabSizeInBytes_2;
	// Unity.Collections.FixedList4096Bytes`1<System.Int32> Unity.Collections.AllocatorManager/SlabAllocator::Occupied
	FixedList4096Bytes_1_t33F84B814E5486E0193FA1B57DDED67F7E28E259 ___Occupied_3;
	// System.Int64 Unity.Collections.AllocatorManager/SlabAllocator::budgetInBytes
	int64_t ___budgetInBytes_4;
	// System.Int64 Unity.Collections.AllocatorManager/SlabAllocator::allocatedBytes
	int64_t ___allocatedBytes_5;
};

// Unity.Collections.AllocatorManager/StackAllocator
struct StackAllocator_t1ADF9AA8B94A0AF7788BC1E34E6A833E7F008124 
{
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.AllocatorManager/StackAllocator::m_handle
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_handle_0;
	// Unity.Collections.AllocatorManager/Block Unity.Collections.AllocatorManager/StackAllocator::m_storage
	Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 ___m_storage_1;
	// System.Int64 Unity.Collections.AllocatorManager/StackAllocator::m_top
	int64_t ___m_top_2;
};

// Unity.Collections.AllocatorManager/TryFunction
struct TryFunction_tC277E17D1D6AD4EF20C1FC1D8F91A559208AA5CA  : public MulticastDelegate_t
{
};

// Unity.Collections.RewindableAllocator/Unity.Collections.Try_00000732$PostfixBurstDelegate
struct Try_00000732U24PostfixBurstDelegate_t4BAC9734E19ADA2BDFE5826ED6C030FB1A743697  : public MulticastDelegate_t
{
};

// Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000770$PostfixBurstDelegate
struct Hash128Long_00000770U24PostfixBurstDelegate_t465BDAD95315333D41C341EBD47FE4F629555038  : public MulticastDelegate_t
{
};

// Unity.Collections.xxHash3/Unity.Collections.Hash64Long_00000769$PostfixBurstDelegate
struct Hash64Long_00000769U24PostfixBurstDelegate_t6B1CD155B058EDDE4C693B8A52B462FBC4049F62  : public MulticastDelegate_t
{
};

// Unity.Collections.AllocatorManager/SlabAllocator/Try_00000A1A$PostfixBurstDelegate
struct Try_00000A1AU24PostfixBurstDelegate_t98CCB5837EDA7DC49FBF71E1FA18480267218A1D  : public MulticastDelegate_t
{
};

// Unity.Collections.AllocatorManager/StackAllocator/Try_00000A0C$PostfixBurstDelegate
struct Try_00000A0CU24PostfixBurstDelegate_t96B837C93119DF6D792B4064284CFFB491C86272  : public MulticastDelegate_t
{
};

// Unity.Collections.AllocatorManager/Array4096`1<Unity.Collections.AllocatorManager/TableEntry>
struct Array4096_1_t97465F61B5971FE36BADFE9A629DEB33EF47E8D8 
{
	// Unity.Collections.AllocatorManager/Array256`1<T> Unity.Collections.AllocatorManager/Array4096`1::f0
	Array256_1_t5410033DC9920374048839AA4B80BA4420373D59 ___f0_0;
	// Unity.Collections.AllocatorManager/Array256`1<T> Unity.Collections.AllocatorManager/Array4096`1::f1
	Array256_1_t5410033DC9920374048839AA4B80BA4420373D59 ___f1_1;
	// Unity.Collections.AllocatorManager/Array256`1<T> Unity.Collections.AllocatorManager/Array4096`1::f2
	Array256_1_t5410033DC9920374048839AA4B80BA4420373D59 ___f2_2;
	// Unity.Collections.AllocatorManager/Array256`1<T> Unity.Collections.AllocatorManager/Array4096`1::f3
	Array256_1_t5410033DC9920374048839AA4B80BA4420373D59 ___f3_3;
	// Unity.Collections.AllocatorManager/Array256`1<T> Unity.Collections.AllocatorManager/Array4096`1::f4
	Array256_1_t5410033DC9920374048839AA4B80BA4420373D59 ___f4_4;
	// Unity.Collections.AllocatorManager/Array256`1<T> Unity.Collections.AllocatorManager/Array4096`1::f5
	Array256_1_t5410033DC9920374048839AA4B80BA4420373D59 ___f5_5;
	// Unity.Collections.AllocatorManager/Array256`1<T> Unity.Collections.AllocatorManager/Array4096`1::f6
	Array256_1_t5410033DC9920374048839AA4B80BA4420373D59 ___f6_6;
	// Unity.Collections.AllocatorManager/Array256`1<T> Unity.Collections.AllocatorManager/Array4096`1::f7
	Array256_1_t5410033DC9920374048839AA4B80BA4420373D59 ___f7_7;
	// Unity.Collections.AllocatorManager/Array256`1<T> Unity.Collections.AllocatorManager/Array4096`1::f8
	Array256_1_t5410033DC9920374048839AA4B80BA4420373D59 ___f8_8;
	// Unity.Collections.AllocatorManager/Array256`1<T> Unity.Collections.AllocatorManager/Array4096`1::f9
	Array256_1_t5410033DC9920374048839AA4B80BA4420373D59 ___f9_9;
	// Unity.Collections.AllocatorManager/Array256`1<T> Unity.Collections.AllocatorManager/Array4096`1::f10
	Array256_1_t5410033DC9920374048839AA4B80BA4420373D59 ___f10_10;
	// Unity.Collections.AllocatorManager/Array256`1<T> Unity.Collections.AllocatorManager/Array4096`1::f11
	Array256_1_t5410033DC9920374048839AA4B80BA4420373D59 ___f11_11;
	// Unity.Collections.AllocatorManager/Array256`1<T> Unity.Collections.AllocatorManager/Array4096`1::f12
	Array256_1_t5410033DC9920374048839AA4B80BA4420373D59 ___f12_12;
	// Unity.Collections.AllocatorManager/Array256`1<T> Unity.Collections.AllocatorManager/Array4096`1::f13
	Array256_1_t5410033DC9920374048839AA4B80BA4420373D59 ___f13_13;
	// Unity.Collections.AllocatorManager/Array256`1<T> Unity.Collections.AllocatorManager/Array4096`1::f14
	Array256_1_t5410033DC9920374048839AA4B80BA4420373D59 ___f14_14;
	// Unity.Collections.AllocatorManager/Array256`1<T> Unity.Collections.AllocatorManager/Array4096`1::f15
	Array256_1_t5410033DC9920374048839AA4B80BA4420373D59 ___f15_15;
};

// Unity.Collections.AllocatorManager/Array32768`1<Unity.Collections.AllocatorManager/TableEntry>
struct Array32768_1_tF94DB9E949B98E267CCEE7E61378AA0A89C951D6 
{
	// Unity.Collections.AllocatorManager/Array4096`1<T> Unity.Collections.AllocatorManager/Array32768`1::f0
	Array4096_1_t97465F61B5971FE36BADFE9A629DEB33EF47E8D8 ___f0_0;
	// Unity.Collections.AllocatorManager/Array4096`1<T> Unity.Collections.AllocatorManager/Array32768`1::f1
	Array4096_1_t97465F61B5971FE36BADFE9A629DEB33EF47E8D8 ___f1_1;
	// Unity.Collections.AllocatorManager/Array4096`1<T> Unity.Collections.AllocatorManager/Array32768`1::f2
	Array4096_1_t97465F61B5971FE36BADFE9A629DEB33EF47E8D8 ___f2_2;
	// Unity.Collections.AllocatorManager/Array4096`1<T> Unity.Collections.AllocatorManager/Array32768`1::f3
	Array4096_1_t97465F61B5971FE36BADFE9A629DEB33EF47E8D8 ___f3_3;
	// Unity.Collections.AllocatorManager/Array4096`1<T> Unity.Collections.AllocatorManager/Array32768`1::f4
	Array4096_1_t97465F61B5971FE36BADFE9A629DEB33EF47E8D8 ___f4_4;
	// Unity.Collections.AllocatorManager/Array4096`1<T> Unity.Collections.AllocatorManager/Array32768`1::f5
	Array4096_1_t97465F61B5971FE36BADFE9A629DEB33EF47E8D8 ___f5_5;
	// Unity.Collections.AllocatorManager/Array4096`1<T> Unity.Collections.AllocatorManager/Array32768`1::f6
	Array4096_1_t97465F61B5971FE36BADFE9A629DEB33EF47E8D8 ___f6_6;
	// Unity.Collections.AllocatorManager/Array4096`1<T> Unity.Collections.AllocatorManager/Array32768`1::f7
	Array4096_1_t97465F61B5971FE36BADFE9A629DEB33EF47E8D8 ___f7_7;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Unity.Collections.AllocatorManager/TryFunction[]
struct TryFunctionU5BU5D_tDCC5B9036B1E592E072B5ED36243CCA274E75FF5  : public RuntimeArray
{
	ALIGN_FIELD (8) TryFunction_tC277E17D1D6AD4EF20C1FC1D8F91A559208AA5CA* m_Items[1];

	inline TryFunction_tC277E17D1D6AD4EF20C1FC1D8F91A559208AA5CA* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TryFunction_tC277E17D1D6AD4EF20C1FC1D8F91A559208AA5CA** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TryFunction_tC277E17D1D6AD4EF20C1FC1D8F91A559208AA5CA* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TryFunction_tC277E17D1D6AD4EF20C1FC1D8F91A559208AA5CA* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TryFunction_tC277E17D1D6AD4EF20C1FC1D8F91A559208AA5CA** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TryFunction_tC277E17D1D6AD4EF20C1FC1D8F91A559208AA5CA* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void Unity.Burst.FunctionPointer`1<System.Object>::.ctor(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FunctionPointer_1__ctor_mE2BD136AA4DB860E4183D3293D3AE1A04B978DA3_gshared_inline (FunctionPointer_1_tE1DC1EC606FB2242FB50357BBA39BB4AEDECFCB2* __this, intptr_t ___ptr0, const RuntimeMethod* method) ;
// T Unity.Burst.FunctionPointer`1<System.Object>::get_Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FunctionPointer_1_get_Invoke_m3E7098A72E4D4E432490A6F99AF8749B862ACF93_gshared (FunctionPointer_1_tE1DC1EC606FB2242FB50357BBA39BB4AEDECFCB2* __this, const RuntimeMethod* method) ;
// T& Unity.Burst.SharedStatic`1<Unity.Collections.AllocatorManager/Array32768`1<Unity.Collections.AllocatorManager/TableEntry>>::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Array32768_1_tF94DB9E949B98E267CCEE7E61378AA0A89C951D6* SharedStatic_1_get_Data_m8180C13CDCA02B5FA3E363D8259EDD6AE7BC49B1_gshared (SharedStatic_1_t129696039C3927DC9D39A2FADEBB24D67B1CD74E* __this, const RuntimeMethod* method) ;
// T& Unity.Collections.AllocatorManager/Array32768`1<Unity.Collections.AllocatorManager/TableEntry>::ElementAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE* Array32768_1_ElementAt_mAF50A1B3FAA1E10902B5B1A6AFD81BE97AF4B59F_gshared (Array32768_1_tF94DB9E949B98E267CCEE7E61378AA0A89C951D6* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T Unity.Collections.FixedList4096Bytes`1<System.Int32>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FixedList4096Bytes_1_get_Item_m66E600C4B66D1691D91DF8BDEEBEABB148273BDC_gshared (FixedList4096Bytes_1_t33F84B814E5486E0193FA1B57DDED67F7E28E259* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.FixedList4096Bytes`1<System.Int32>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedList4096Bytes_1_set_Item_m47AF31B8AFFE448D04FE04B053D31CED5CAC42A0_gshared (FixedList4096Bytes_1_t33F84B814E5486E0193FA1B57DDED67F7E28E259* __this, int32_t ___index0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.FixedList4096Bytes`1<System.Int32>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FixedList4096Bytes_1_get_Length_m5966340B356C0C2E1101474A1C7195300442C323_gshared_inline (FixedList4096Bytes_1_t33F84B814E5486E0193FA1B57DDED67F7E28E259* __this, const RuntimeMethod* method) ;
// Unity.Burst.SharedStatic`1<T> Unity.Burst.SharedStatic`1<Unity.Collections.AllocatorManager/Array32768`1<Unity.Collections.AllocatorManager/TableEntry>>::GetOrCreate<System.Object>(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SharedStatic_1_t129696039C3927DC9D39A2FADEBB24D67B1CD74E SharedStatic_1_GetOrCreate_TisRuntimeObject_mF8B25D753B18856C624C2AD17A7BA38249B4A7D3_gshared (uint32_t ___alignment0, const RuntimeMethod* method) ;
// T& Unity.Collections.UnmanagedArray`1<Unity.Collections.RewindableAllocator/MemoryBlock>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* UnmanagedArray_1_get_Item_mE315B3406730DD2D42AF15133B69737FF041A160_gshared (UnmanagedArray_1_t7A336330780E05C924BB57ED337DDD2A66701FAB* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.UnmanagedArray`1<Unity.Collections.RewindableAllocator/MemoryBlock>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedArray_1_Dispose_m6633B12AACEBE579F9A33E39939490C0F9078F66_gshared (UnmanagedArray_1_t7A336330780E05C924BB57ED337DDD2A66701FAB* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.Memory/Unmanaged::Free<System.Byte>(T*,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA94227A91767A544A21D2C393D318C5F0C926819_gshared (uint8_t* ___pointer0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method) ;

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.AllocatorManager::CheckDelegate(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllocatorManager_CheckDelegate_m4A8CEB99274CDBB45D754B43D7F6A7141FB4A1E5 (bool* ___useDelegate0, const RuntimeMethod* method) ;
// Unity.Collections.AllocatorManager/TableEntry& Unity.Collections.AllocatorManager/AllocatorHandle::get_TableEntry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE* AllocatorHandle_get_TableEntry_m09C5D57FF627FEAD3AAE73FB28CB4B9EEB811A63 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* __this, const RuntimeMethod* method) ;
// System.Void Unity.Burst.FunctionPointer`1<Unity.Collections.AllocatorManager/TryFunction>::.ctor(System.IntPtr)
inline void FunctionPointer_1__ctor_mA6464FB1EEC3C76906932127ADC88D71257A9CB6_inline (FunctionPointer_1_tF99F1F7D7E9F1AC1CB5F7DE7BB02E8366FC2097C* __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	((  void (*) (FunctionPointer_1_tF99F1F7D7E9F1AC1CB5F7DE7BB02E8366FC2097C*, intptr_t, const RuntimeMethod*))FunctionPointer_1__ctor_mE2BD136AA4DB860E4183D3293D3AE1A04B978DA3_gshared_inline)(__this, ___ptr0, method);
}
// T Unity.Burst.FunctionPointer`1<Unity.Collections.AllocatorManager/TryFunction>::get_Invoke()
inline TryFunction_tC277E17D1D6AD4EF20C1FC1D8F91A559208AA5CA* FunctionPointer_1_get_Invoke_m97C18B13503F4392E7606936FDC209ECE77A7EFB (FunctionPointer_1_tF99F1F7D7E9F1AC1CB5F7DE7BB02E8366FC2097C* __this, const RuntimeMethod* method)
{
	return ((  TryFunction_tC277E17D1D6AD4EF20C1FC1D8F91A559208AA5CA* (*) (FunctionPointer_1_tF99F1F7D7E9F1AC1CB5F7DE7BB02E8366FC2097C*, const RuntimeMethod*))FunctionPointer_1_get_Invoke_m3E7098A72E4D4E432490A6F99AF8749B862ACF93_gshared)(__this, method);
}
// System.Int32 Unity.Collections.AllocatorManager/TryFunction::Invoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TryFunction_Invoke_mED723D46A7B0C4B590ABECE0868EA02AD94D07A2_inline (TryFunction_tC277E17D1D6AD4EF20C1FC1D8F91A559208AA5CA* __this, intptr_t ___allocatorState0, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block1, const RuntimeMethod* method) ;
// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.AllocatorManager/AllocatorHandle::get_Handle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 AllocatorHandle_get_Handle_m440EA9B9A4306115087775DA2AA0AC034107D0E2 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.AllocatorManager/AllocatorHandle::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AllocatorHandle_get_Value_m24A0A3E433794106E43E9140CC2BB55493C8F30F_inline (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* __this, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Int64 Unity.Collections.AllocatorManager/Block::get_Bytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Block_get_Bytes_m4BB90CD1C72FC56C573BE09951BF1CA68E8BD7D7 (Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.AllocatorManager/Block::get_Alignment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Block_get_Alignment_mC2388F87008B204A333664B9323BD38AA20FD633 (Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* __this, const RuntimeMethod* method) ;
// Unity.Collections.Allocator Unity.Collections.AllocatorManager::LegacyOf(Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AllocatorManager_LegacyOf_m18E5AA6A18C4741EE3A244E3834736FD1D23D8C1 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___handle0, const RuntimeMethod* method) ;
// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.AllocatorManager/AllocatorHandle::op_Implicit(Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 AllocatorHandle_op_Implicit_m784E54E7FB5C2C06F5A0A812D4DFBDCE01395CF3 (int32_t ___a0, const RuntimeMethod* method) ;
// System.Void* Unity.Collections.Memory/Unmanaged::Allocate(System.Int64,System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unmanaged_Allocate_mCD00DF6E249C3A43F8282A83AD3B16AEFFE81A14 (int64_t ___size0, int32_t ___align1, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator2, const RuntimeMethod* method) ;
// System.IntPtr System.IntPtr::op_Explicit(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_m04BEF6277775C13DD8A986812AAA3FCEC32DCCBE (void* ___value0, const RuntimeMethod* method) ;
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294 (intptr_t ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.Memory/Unmanaged::Free(System.Void*,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_m18CD64E2094F71CB38499DC51A55104AE42A464A (void* ___pointer0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.AllocatorManager::TryLegacy(Unity.Collections.AllocatorManager/Block&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AllocatorManager_TryLegacy_m47E4B9C46270E61CE56D1A9D25E38AD498C2033C (Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block0, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.AllocatorManager::UseDelegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AllocatorManager_UseDelegate_mBF89F104AD0ED5DE52A221569A69F09293E36033 (const RuntimeMethod* method) ;
// System.Void Unity.Collections.AllocatorManager::forward_mono_allocate_block(Unity.Collections.AllocatorManager/Block&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllocatorManager_forward_mono_allocate_block_mA4344DF1E601F7EC9AD85B7B5406225B4091567D (Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block0, int32_t* ___error1, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.AllocatorManager::allocate_block(Unity.Collections.AllocatorManager/Block&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AllocatorManager_allocate_block_mCA2494A79A83824BB93DBBB08883E2FA4FA0020C (Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block0, const RuntimeMethod* method) ;
// T& Unity.Burst.SharedStatic`1<Unity.Collections.AllocatorManager/Array32768`1<Unity.Collections.AllocatorManager/TableEntry>>::get_Data()
inline Array32768_1_tF94DB9E949B98E267CCEE7E61378AA0A89C951D6* SharedStatic_1_get_Data_m8180C13CDCA02B5FA3E363D8259EDD6AE7BC49B1 (SharedStatic_1_t129696039C3927DC9D39A2FADEBB24D67B1CD74E* __this, const RuntimeMethod* method)
{
	return ((  Array32768_1_tF94DB9E949B98E267CCEE7E61378AA0A89C951D6* (*) (SharedStatic_1_t129696039C3927DC9D39A2FADEBB24D67B1CD74E*, const RuntimeMethod*))SharedStatic_1_get_Data_m8180C13CDCA02B5FA3E363D8259EDD6AE7BC49B1_gshared)(__this, method);
}
// T& Unity.Collections.AllocatorManager/Array32768`1<Unity.Collections.AllocatorManager/TableEntry>::ElementAt(System.Int32)
inline TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE* Array32768_1_ElementAt_mAF50A1B3FAA1E10902B5B1A6AFD81BE97AF4B59F (Array32768_1_tF94DB9E949B98E267CCEE7E61378AA0A89C951D6* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE* (*) (Array32768_1_tF94DB9E949B98E267CCEE7E61378AA0A89C951D6*, int32_t, const RuntimeMethod*))Array32768_1_ElementAt_mAF50A1B3FAA1E10902B5B1A6AFD81BE97AF4B59F_gshared)(__this, ___index0, method);
}
// System.Void Unity.Collections.AllocatorManager/AllocatorHandle::Rewind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllocatorHandle_Rewind_mC0426BBD1E638878C33164F91AC3ADC66C850AC1 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.AllocatorManager::Try(Unity.Collections.AllocatorManager/Block&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AllocatorManager_Try_m80548C54CFCD1C94C60CDB8825D23106947A9125 (Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block0, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.AllocatorManager/AllocatorHandle::Try(Unity.Collections.AllocatorManager/Block&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AllocatorHandle_Try_m4E8677E100693A0F015076408244AF2BA827CBC9 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* __this, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block0, const RuntimeMethod* method) ;
// Unity.Collections.Allocator Unity.Collections.AllocatorManager/AllocatorHandle::get_ToAllocator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.AllocatorManager/AllocatorHandle::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllocatorHandle_Dispose_mB74CBC8980962C016A6C85F09D3F94775A2C58E3 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.AllocatorManager/Block::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Block_Dispose_m38B474EF3D6A142344D0A58651319FD039FB54ED (Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.AllocatorManager/Range::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Range_Dispose_mEABC7B5F5F72CBAC69BAB12C80B8EDEE86B3737A (Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC* __this, const RuntimeMethod* method) ;
// System.Int64 Unity.Collections.AllocatorManager/Block::get_AllocatedBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Block_get_AllocatedBytes_mFE126B221F670BDA89C5D59C9E63C9724F79BE08 (Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.Mathematics.math::max(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_max_m5DA4D66E3CC78BDFF8218BA039D6EBB1AC223826_inline (int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) ;
// System.Int32 Unity.Mathematics.math::lzcnt(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_lzcnt_mEA5B799F963166998842F3108EBCD9954DF5BB10_inline (int32_t ___x0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.AllocatorManager/Block::set_Alignment(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Block_set_Alignment_m4E74D90E827C5F58B3EBE91B2F5B097388E0500F (Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.AllocatorManager/Block::TryFree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Block_TryFree_m0C5FA80AF51DA6F40F40DAE7E97975C3BB402225 (Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.AllocatorManager/StackAllocator::Try(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StackAllocator_Try_mAE50C02088BB7F9E154A124C00E7BF1C3DF1B0B6 (intptr_t ___allocatorState0, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block1, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.AllocatorManager/StackAllocator::Try$BurstManaged(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StackAllocator_TryU24BurstManaged_m8C725A7308CCA2FCF709053D2660D37BBB1990E7_inline (intptr_t ___allocatorState0, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block1, const RuntimeMethod* method) ;
// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.AllocatorManager/StackAllocator::get_Handle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 StackAllocator_get_Handle_m31D630726EF42BC6C432F8751E6B2BE346BB2267_inline (StackAllocator_t1ADF9AA8B94A0AF7788BC1E34E6A833E7F008124* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.AllocatorManager/StackAllocator::Try(Unity.Collections.AllocatorManager/Block&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StackAllocator_Try_m46B9AAB118C2ACCDB8B0A54DA8E27209CA152558 (StackAllocator_t1ADF9AA8B94A0AF7788BC1E34E6A833E7F008124* __this, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block0, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.AllocatorManager/StackAllocator/Try_00000A0C$BurstDirectCall::Invoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Try_00000A0CU24BurstDirectCall_Invoke_m83BD090A8382C1F49D7DB18C55ED2F1897B13125 (intptr_t ___allocatorState0, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block1, const RuntimeMethod* method) ;
// System.Void Unity.Collections.AllocatorManager/StackAllocator::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackAllocator_Dispose_m0872D5C01F22CD4BCCF71EA0185DB18EA14D62CB (StackAllocator_t1ADF9AA8B94A0AF7788BC1E34E6A833E7F008124* __this, const RuntimeMethod* method) ;
// System.Void* Unity.Burst.BurstCompiler::GetILPPMethodFunctionPointer(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* BurstCompiler_GetILPPMethodFunctionPointer_m850347229EDA4058D224F885446BEE0137831BD0 (intptr_t ___ilppMethod0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.AllocatorManager/StackAllocator/Try_00000A0C$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Try_00000A0CU24BurstDirectCall_GetFunctionPointerDiscard_mBD7B14657BD9DED1D6DB17395682A198A2127ADC (intptr_t* p0, const RuntimeMethod* method) ;
// System.IntPtr Unity.Burst.BurstCompiler::CompileILPPMethod(System.RuntimeMethodHandle,System.RuntimeMethodHandle,System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t BurstCompiler_CompileILPPMethod_m2ADEDFEFDB17376C1A1FFD7C2D1A0C242AB78A8B (RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 ___burstMethodHandle0, RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 ___managedMethodHandle1, RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___delegateTypeHandle2, const RuntimeMethod* method) ;
// System.Void Unity.Collections.AllocatorManager/StackAllocator/Try_00000A0C$BurstDirectCall::Constructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Try_00000A0CU24BurstDirectCall_Constructor_m78969031636424FF180A63912777C0B8446862C0 (const RuntimeMethod* method) ;
// System.Boolean Unity.Burst.BurstCompiler::get_IsEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompiler_get_IsEnabled_mEDA2FAA92A224EC22E16A1AB9E8C55FB0DECD755 (const RuntimeMethod* method) ;
// System.IntPtr Unity.Collections.AllocatorManager/StackAllocator/Try_00000A0C$BurstDirectCall::GetFunctionPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Try_00000A0CU24BurstDirectCall_GetFunctionPointer_mACA66472A7DABE3D3CC1445FA57D585EAE560374 (const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.AllocatorManager/SlabAllocator::Try(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SlabAllocator_Try_mBC7DA9938F61EC1FA877854A3F095EB8CA5D4AE0 (intptr_t ___allocatorState0, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block1, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.AllocatorManager/SlabAllocator::Try$BurstManaged(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SlabAllocator_TryU24BurstManaged_m484D87FD1C7B43A0E6B77864265E0370AC734EA5_inline (intptr_t ___allocatorState0, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block1, const RuntimeMethod* method) ;
// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.AllocatorManager/SlabAllocator::get_Handle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 SlabAllocator_get_Handle_m09C2CCD8BCEA26214DC514707F222B228A1E04BE_inline (SlabAllocator_t1E255FCD698DFC3C2B043645B30E794330CD10ED* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.AllocatorManager/SlabAllocator::get_SlabSizeInBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SlabAllocator_get_SlabSizeInBytes_mFFD79D4D6B544F1C21CB0EB40BBDFF5D5477A612 (SlabAllocator_t1E255FCD698DFC3C2B043645B30E794330CD10ED* __this, const RuntimeMethod* method) ;
// T Unity.Collections.FixedList4096Bytes`1<System.Int32>::get_Item(System.Int32)
inline int32_t FixedList4096Bytes_1_get_Item_m66E600C4B66D1691D91DF8BDEEBEABB148273BDC (FixedList4096Bytes_1_t33F84B814E5486E0193FA1B57DDED67F7E28E259* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (FixedList4096Bytes_1_t33F84B814E5486E0193FA1B57DDED67F7E28E259*, int32_t, const RuntimeMethod*))FixedList4096Bytes_1_get_Item_m66E600C4B66D1691D91DF8BDEEBEABB148273BDC_gshared)(__this, ___index0, method);
}
// System.Void Unity.Collections.FixedList4096Bytes`1<System.Int32>::set_Item(System.Int32,T)
inline void FixedList4096Bytes_1_set_Item_m47AF31B8AFFE448D04FE04B053D31CED5CAC42A0 (FixedList4096Bytes_1_t33F84B814E5486E0193FA1B57DDED67F7E28E259* __this, int32_t ___index0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (FixedList4096Bytes_1_t33F84B814E5486E0193FA1B57DDED67F7E28E259*, int32_t, int32_t, const RuntimeMethod*))FixedList4096Bytes_1_set_Item_m47AF31B8AFFE448D04FE04B053D31CED5CAC42A0_gshared)(__this, ___index0, ___value1, method);
}
// System.IntPtr System.IntPtr::op_Addition(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE (intptr_t ___pointer0, int32_t ___offset1, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.FixedList4096Bytes`1<System.Int32>::get_Length()
inline int32_t FixedList4096Bytes_1_get_Length_m5966340B356C0C2E1101474A1C7195300442C323_inline (FixedList4096Bytes_1_t33F84B814E5486E0193FA1B57DDED67F7E28E259* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (FixedList4096Bytes_1_t33F84B814E5486E0193FA1B57DDED67F7E28E259*, const RuntimeMethod*))FixedList4096Bytes_1_get_Length_m5966340B356C0C2E1101474A1C7195300442C323_gshared_inline)(__this, method);
}
// System.Int64 System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t IntPtr_op_Explicit_m4D0C62CD2FBF2A43A390E6CE4A506B2B9A698B66 (intptr_t ___value0, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.AllocatorManager/SlabAllocator::Try(Unity.Collections.AllocatorManager/Block&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SlabAllocator_Try_mE7D3D58D59FB68AE5FA9FF99C0C69FD854F482CD (SlabAllocator_t1E255FCD698DFC3C2B043645B30E794330CD10ED* __this, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block0, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.AllocatorManager/SlabAllocator/Try_00000A1A$BurstDirectCall::Invoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Try_00000A1AU24BurstDirectCall_Invoke_m97B19B4E6D47817822FECE96A16CCFFEB455C4C0 (intptr_t ___allocatorState0, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block1, const RuntimeMethod* method) ;
// System.Void Unity.Collections.AllocatorManager/SlabAllocator::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlabAllocator_Dispose_m9ED75718657190884C0327489A9AE9DB525D7912 (SlabAllocator_t1E255FCD698DFC3C2B043645B30E794330CD10ED* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.AllocatorManager/SlabAllocator/Try_00000A1A$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Try_00000A1AU24BurstDirectCall_GetFunctionPointerDiscard_m7BA13FC5A431C3E0C533473FEFB7C11E35FB1791 (intptr_t* p0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.AllocatorManager/SlabAllocator/Try_00000A1A$BurstDirectCall::Constructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Try_00000A1AU24BurstDirectCall_Constructor_mD48044B24C54068FFD88C68D6A5521CCA8F096B9 (const RuntimeMethod* method) ;
// System.IntPtr Unity.Collections.AllocatorManager/SlabAllocator/Try_00000A1A$BurstDirectCall::GetFunctionPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Try_00000A1AU24BurstDirectCall_GetFunctionPointer_m9C718A8828FEC5AEF27957362FA52CAD49262ABB (const RuntimeMethod* method) ;
// Unity.Burst.SharedStatic`1<T> Unity.Burst.SharedStatic`1<Unity.Collections.AllocatorManager/Array32768`1<Unity.Collections.AllocatorManager/TableEntry>>::GetOrCreate<Unity.Collections.AllocatorManager/SharedStatics/TableEntry>(System.UInt32)
inline SharedStatic_1_t129696039C3927DC9D39A2FADEBB24D67B1CD74E SharedStatic_1_GetOrCreate_TisTableEntry_tC168732547D3913880E602CC895BCCDAED550A04_m308596CEEBCC9D147B8A49219CBFE11474468B2F (uint32_t ___alignment0, const RuntimeMethod* method)
{
	return ((  SharedStatic_1_t129696039C3927DC9D39A2FADEBB24D67B1CD74E (*) (uint32_t, const RuntimeMethod*))SharedStatic_1_GetOrCreate_TisRuntimeObject_mF8B25D753B18856C624C2AD17A7BA38249B4A7D3_gshared)(___alignment0, method);
}
// System.Void* Unity.Collections.Memory/Unmanaged/Array::Resize(System.Void*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle,System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Array_Resize_mBE6A0C00B7C84F53DEA8A458C39887B0D0559672 (void* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, int64_t ___size4, int32_t ___align5, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.Memory/Unmanaged/Array::IsCustom(Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_IsCustom_m3B23BD5B6E2CD65EE4BAF3A60305F67D45B64B3F (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator0, const RuntimeMethod* method) ;
// System.Void* Unity.Collections.Memory/Unmanaged/Array::CustomResize(System.Void*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle,System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Array_CustomResize_mDB54012F437319EB6FB861B8D67256AB5A9B20D5 (void* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, int64_t ___size4, int32_t ___align5, const RuntimeMethod* method) ;
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::Malloc(System.Int64,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_Malloc_mA79BF3D6FC86F67D4354A6C8481DB0F13FD6777B (int64_t ___size0, int32_t ___alignment1, int32_t ___allocator2, const RuntimeMethod* method) ;
// System.Int64 Unity.Mathematics.math::min(System.Int64,System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t math_min_m15E98E776355732C47A31FC18FB408EF53AB86D5_inline (int64_t ___x0, int64_t ___y1, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpy(System.Void*,System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_m019E657B952C27F705607F0F3D371EEE526B716B (void* ___destination0, void* ___source1, int64_t ___size2, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::Free(System.Void*,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_Free_mA951B190894E1755DE821FCBD35F7AD9FB388F18 (void* ___memory0, int32_t ___allocator1, const RuntimeMethod* method) ;
// System.Int32 System.Threading.Interlocked::CompareExchange(System.Int32&,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_CompareExchange_m1B1A89142CF77793A6B396019B98265E6EE306FA (int32_t* ___location10, int32_t ___value1, int32_t ___comparand2, const RuntimeMethod* method) ;
// System.Void System.Threading.Interlocked::MemoryBarrier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interlocked_MemoryBarrier_m4628E20A5D3E2546755C7C75439FCB11239EE61C (const RuntimeMethod* method) ;
// System.Void Unity.Collections.Spinner::Lock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spinner_Lock_mF38DA7980552D7B8E60444A1B64ADF440D3DFAA7 (Spinner_t9606E334089E448EA313C31DC5EFC9345A58BCEB* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.Spinner::Unlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spinner_Unlock_m1664CFC96DCA3A7B36092F61C9E34624C497EB1A (Spinner_t9606E334089E448EA313C31DC5EFC9345A58BCEB* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.RewindableAllocator::Try(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RewindableAllocator_Try_mFA247929359660CC33023F374ED76B43812B9115 (intptr_t ___state0, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block1, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.RewindableAllocator::Try$BurstManaged(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RewindableAllocator_TryU24BurstManaged_m9FC90FBCAB23681675E5FF0BBE59BB7D5058ED52_inline (intptr_t ___state0, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block1, const RuntimeMethod* method) ;
// System.Boolean Unity.Jobs.LowLevel.Unsafe.JobsUtility::get_IsExecutingJob()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JobsUtility_get_IsExecutingJob_mB23173CB1DAEECEB459A58E683D06055EECFCD47 (const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// T& Unity.Collections.UnmanagedArray`1<Unity.Collections.RewindableAllocator/MemoryBlock>::get_Item(System.Int32)
inline MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* UnmanagedArray_1_get_Item_mE315B3406730DD2D42AF15133B69737FF041A160 (UnmanagedArray_1_t7A336330780E05C924BB57ED337DDD2A66701FAB* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* (*) (UnmanagedArray_1_t7A336330780E05C924BB57ED337DDD2A66701FAB*, int32_t, const RuntimeMethod*))UnmanagedArray_1_get_Item_mE315B3406730DD2D42AF15133B69737FF041A160_gshared)(__this, ___index0, method);
}
// System.Void Unity.Collections.RewindableAllocator/MemoryBlock::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryBlock_Dispose_mE0EAA3828B238B9A26EF6BB5CA7CB5EC592FBD6F (MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.RewindableAllocator/MemoryBlock::Rewind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryBlock_Rewind_m64C7EC463789D78802B8D27695AFFD37133E7069 (MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.RewindableAllocator::Rewind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewindableAllocator_Rewind_m8EB623F05C707C3AF52FF082A7C095FE3A1CE595 (RewindableAllocator_tB18F8ADC8F2EE36E1F51FCCCFF0AC093108EF254* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.UnmanagedArray`1<Unity.Collections.RewindableAllocator/MemoryBlock>::Dispose()
inline void UnmanagedArray_1_Dispose_m6633B12AACEBE579F9A33E39939490C0F9078F66 (UnmanagedArray_1_t7A336330780E05C924BB57ED337DDD2A66701FAB* __this, const RuntimeMethod* method)
{
	((  void (*) (UnmanagedArray_1_t7A336330780E05C924BB57ED337DDD2A66701FAB*, const RuntimeMethod*))UnmanagedArray_1_Dispose_m6633B12AACEBE579F9A33E39939490C0F9078F66_gshared)(__this, method);
}
// System.Void Unity.Collections.RewindableAllocator::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewindableAllocator_Dispose_mD873C81842DAEBF01369B8023805FF930C4C8A2F (RewindableAllocator_tB18F8ADC8F2EE36E1F51FCCCFF0AC093108EF254* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.RewindableAllocator/MemoryBlock::TryAllocate(Unity.Collections.AllocatorManager/Block&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoryBlock_TryAllocate_m34CC70E419486D5B1C90E7BF4A6762BE3D130F10 (MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* __this, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block0, const RuntimeMethod* method) ;
// System.Int64 Unity.Mathematics.math::ceilpow2(System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t math_ceilpow2_m0BAC2B7C7BA2E1E9504697CC4D4D514A0924F95F_inline (int64_t ___x0, const RuntimeMethod* method) ;
// System.Int64 Unity.Mathematics.math::max(System.Int64,System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t math_max_m12316F7EB8EFE05E444EC4167FD2C640414166F6_inline (int64_t ___x0, int64_t ___y1, const RuntimeMethod* method) ;
// System.Void Unity.Collections.RewindableAllocator/MemoryBlock::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryBlock__ctor_m0DEC878B6827C0B400BE1C00CA37C2F8F1C31D7F (MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* __this, int64_t ___bytes0, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.RewindableAllocator/MemoryBlock::Contains(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemoryBlock_Contains_m2F035A4F1F9063B42ACB1B590C4EFD1741E39CEC (MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* __this, intptr_t ___ptr0, const RuntimeMethod* method) ;
// System.Int64 System.Threading.Interlocked::Decrement(System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Interlocked_Decrement_mC1A06AF8FBCFBF498585006F437BEC8003BD4AB5 (int64_t* ___location0, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.RewindableAllocator::Try(Unity.Collections.AllocatorManager/Block&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RewindableAllocator_Try_m6C020E9D4D72801E38775286491991C3FCE064ED (RewindableAllocator_tB18F8ADC8F2EE36E1F51FCCCFF0AC093108EF254* __this, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block0, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.RewindableAllocator/Unity.Collections.Try_00000732$BurstDirectCall::Invoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Try_00000732U24BurstDirectCall_Invoke_mE3FD6C631A6D1591113B46B9BAA9B3A7B973C703 (intptr_t ___state0, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block1, const RuntimeMethod* method) ;
// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.RewindableAllocator::get_Handle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 RewindableAllocator_get_Handle_mF81EDA2102485C46965AAB56347E8F64FE551D9E_inline (RewindableAllocator_tB18F8ADC8F2EE36E1F51FCCCFF0AC093108EF254* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.Memory/Unmanaged::Free<System.Byte>(T*,Unity.Collections.AllocatorManager/AllocatorHandle)
inline void Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA94227A91767A544A21D2C393D318C5F0C926819 (uint8_t* ___pointer0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method)
{
	((  void (*) (uint8_t*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA94227A91767A544A21D2C393D318C5F0C926819_gshared)(___pointer0, ___allocator1, method);
}
// System.Int64 System.Threading.Interlocked::Read(System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Interlocked_Read_m646D69AAE03D57B78525D89642A5F951BA21CD28 (int64_t* ___location0, const RuntimeMethod* method) ;
// System.Int64 System.Threading.Interlocked::CompareExchange(System.Int64&,System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Interlocked_CompareExchange_mFB34911A0DA00E6C333589E541D422122CC1ED1B (int64_t* ___location10, int64_t ___value1, int64_t ___comparand2, const RuntimeMethod* method) ;
// System.Int64 System.Threading.Interlocked::Increment(System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Interlocked_Increment_m92616415B56E5497A3D07233BB7C2D263AB3D5A0 (int64_t* ___location0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.RewindableAllocator/Unity.Collections.Try_00000732$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Try_00000732U24BurstDirectCall_GetFunctionPointerDiscard_m3B752E354E2828DD285C066CE3B5DEA90A3F6579 (intptr_t* p0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.RewindableAllocator/Unity.Collections.Try_00000732$BurstDirectCall::Constructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Try_00000732U24BurstDirectCall_Constructor_m997692EF44E78D376545B3067EDD1B49F12E5557 (const RuntimeMethod* method) ;
// System.IntPtr Unity.Collections.RewindableAllocator/Unity.Collections.Try_00000732$BurstDirectCall::GetFunctionPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Try_00000732U24BurstDirectCall_GetFunctionPointer_m59ECCFF1396288F720B6FAB9BE4A2070A0934517 (const RuntimeMethod* method) ;
// System.Boolean Unity.Burst.Intrinsics.X86/Avx2::get_IsAvx2Supported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Avx2_get_IsAvx2Supported_m768CA5D24C6148EBDF5E2FB487026D1A126D14E5 (const RuntimeMethod* method) ;
// System.Void Unity.Collections.xxHash3::Avx2Accumulate(System.UInt64*,System.Byte*,System.Byte*,System.Byte*,System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void xxHash3_Avx2Accumulate_m270AB6784390432C557F890E6E4281D6921D78B7 (uint64_t* ___acc0, uint8_t* ___input1, uint8_t* ___dest2, uint8_t* ___secret3, int64_t ___nbStripes4, int32_t ___isHash645, const RuntimeMethod* method) ;
// System.Void Unity.Collections.xxHash3::Avx2ScrambleAcc(System.UInt64*,System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void xxHash3_Avx2ScrambleAcc_mD74A53B0BA0A96E8B0298A97A0C1E3DFA4C643D5 (uint64_t* ___acc0, uint8_t* ___secret1, const RuntimeMethod* method) ;
// System.Void Unity.Collections.xxHash3::Avx2Accumulate512(System.UInt64*,System.Byte*,System.Byte*,System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void xxHash3_Avx2Accumulate512_mB2B1BC058C2E3A9199E028CC115890D11E8B5ECD (uint64_t* ___acc0, uint8_t* ___input1, uint8_t* ___dest2, uint8_t* ___secret3, const RuntimeMethod* method) ;
// Unity.Burst.Intrinsics.v256 Unity.Burst.Intrinsics.X86/Avx::mm256_set1_epi32(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A Avx_mm256_set1_epi32_m090A19934001DA4D60E2460DA6EB513576BAC1AA (int32_t ___a0, const RuntimeMethod* method) ;
// Unity.Burst.Intrinsics.v256 Unity.Burst.Intrinsics.X86/Avx2::mm256_srli_epi64(Unity.Burst.Intrinsics.v256,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A Avx2_mm256_srli_epi64_m2A26BF6C6102B50698B860B5791E667DB4A61476 (v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A ___a0, int32_t ___imm81, const RuntimeMethod* method) ;
// Unity.Burst.Intrinsics.v256 Unity.Burst.Intrinsics.X86/Avx2::mm256_xor_si256(Unity.Burst.Intrinsics.v256,Unity.Burst.Intrinsics.v256)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A Avx2_mm256_xor_si256_mB72A18B3CE7384DB4F9B949A9C1CCB09CE169251 (v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A ___a0, v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A ___b1, const RuntimeMethod* method) ;
// Unity.Burst.Intrinsics.v256 Unity.Burst.Intrinsics.X86/Avx::mm256_loadu_si256(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A Avx_mm256_loadu_si256_m901E3172D0524718EDA6EC936E3038458AB2E583 (void* ___ptr0, const RuntimeMethod* method) ;
// System.Int32 Unity.Burst.Intrinsics.X86/Sse::SHUFFLE(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse_SHUFFLE_m0AC49DB7C7FA28E33C221650D8D17F5E4997DF43 (int32_t ___d0, int32_t ___c1, int32_t ___b2, int32_t ___a3, const RuntimeMethod* method) ;
// Unity.Burst.Intrinsics.v256 Unity.Burst.Intrinsics.X86/Avx2::mm256_shuffle_epi32(Unity.Burst.Intrinsics.v256,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A Avx2_mm256_shuffle_epi32_m146F8DC793F3A937DE06B44EDE328C514D8629AD (v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A ___a0, int32_t ___imm81, const RuntimeMethod* method) ;
// Unity.Burst.Intrinsics.v256 Unity.Burst.Intrinsics.X86/Avx2::mm256_mul_epu32(Unity.Burst.Intrinsics.v256,Unity.Burst.Intrinsics.v256)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A Avx2_mm256_mul_epu32_mA0631A12A2FD99EA52E52515C98309317A5A4901 (v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A ___a0, v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A ___b1, const RuntimeMethod* method) ;
// Unity.Burst.Intrinsics.v256 Unity.Burst.Intrinsics.X86/Avx2::mm256_slli_epi64(Unity.Burst.Intrinsics.v256,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A Avx2_mm256_slli_epi64_m3CAEA58228BF7EA5747F1F96B04F602980D3FC41 (v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A ___a0, int32_t ___imm81, const RuntimeMethod* method) ;
// Unity.Burst.Intrinsics.v256 Unity.Burst.Intrinsics.X86/Avx2::mm256_add_epi64(Unity.Burst.Intrinsics.v256,Unity.Burst.Intrinsics.v256)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A Avx2_mm256_add_epi64_mFE840E749332B5FFDFAD46011D773DC77A81004A (v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A ___a0, v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A ___b1, const RuntimeMethod* method) ;
// System.Void Unity.Burst.Intrinsics.X86/Avx::mm256_storeu_si256(System.Void*,Unity.Burst.Intrinsics.v256)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx_mm256_storeu_si256_m4C8CDEA9A8A86D7325841D658A07E996E779163F (void* ___ptr0, v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A ___v1, const RuntimeMethod* method) ;
// System.UInt64 Unity.Collections.xxHash3/Unity.Collections.Hash64Long_00000769$BurstDirectCall::Invoke(System.Byte*,System.Byte*,System.Int64,System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Hash64Long_00000769U24BurstDirectCall_Invoke_m1AA4699AB6B75E84AC2D149C1BABD3BF09CE3752 (uint8_t* ___input0, uint8_t* ___dest1, int64_t ___length2, uint8_t* ___secret3, const RuntimeMethod* method) ;
// System.Void Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000770$BurstDirectCall::Invoke(System.Byte*,System.Byte*,System.Int64,System.Byte*,Unity.Mathematics.uint4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hash128Long_00000770U24BurstDirectCall_Invoke_m617BBF6D8F11F7780500926C618F5A6A3CCFD1E4 (uint8_t* ___input0, uint8_t* ___dest1, int64_t ___length2, uint8_t* ___secret3, uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9* ___result4, const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.uint4::.ctor(System.UInt32,System.UInt32,System.UInt32,System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void uint4__ctor_m59B6A219A0285C60FCF2977679BF89C72B502008_inline (uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9* __this, uint32_t ___x0, uint32_t ___y1, uint32_t ___z2, uint32_t ___w3, const RuntimeMethod* method) ;
// System.UInt64 Unity.Burst.Intrinsics.Common::umul128(System.UInt64,System.UInt64,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Common_umul128_mB9316CECE9C94618BA3A48AB6185DB217039CBCA (uint64_t ___x0, uint64_t ___y1, uint64_t* ___high2, const RuntimeMethod* method) ;
// System.UInt64 Unity.Collections.xxHash3::XorShift64(System.UInt64,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t xxHash3_XorShift64_m60FE95AE47D67ACD4AA70E8C3AE81A92C3C89955_inline (uint64_t ___v640, int32_t ___shift1, const RuntimeMethod* method) ;
// System.UInt64 Unity.Collections.xxHash3::Read64LE(System.Void*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t xxHash3_Read64LE_m142BE5079FBF51DF81C53FAB5E7021ECA764DC65_inline (void* ___addr0, const RuntimeMethod* method) ;
// System.UInt64 Unity.Collections.xxHash3::Mul128Fold64(System.UInt64,System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t xxHash3_Mul128Fold64_mA7EB7CAED01CEFA6204C0344F5DD7CD7625AABB5_inline (uint64_t ___lhs0, uint64_t ___rhs1, const RuntimeMethod* method) ;
// System.UInt64 Unity.Collections.xxHash3::Mix2Acc(System.UInt64,System.UInt64,System.Byte*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t xxHash3_Mix2Acc_mD770DD066F75B7813FE9495ED10135605D6F63A1_inline (uint64_t ___acc00, uint64_t ___acc11, uint8_t* ___secret2, const RuntimeMethod* method) ;
// System.UInt64 Unity.Collections.xxHash3::Avalanche(System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t xxHash3_Avalanche_mBE469AA9C171E827977A1C02AB4F54450CB6B382_inline (uint64_t ___h640, const RuntimeMethod* method) ;
// System.Void Unity.Collections.xxHash3::DefaultAccumulate(System.UInt64*,System.Byte*,System.Byte*,System.Byte*,System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void xxHash3_DefaultAccumulate_m7DA7DD552587A8E4F8DDF6ECF15A9E3BA9F0FF99 (uint64_t* ___acc0, uint8_t* ___input1, uint8_t* ___dest2, uint8_t* ___secret3, int64_t ___nbStripes4, int32_t ___isHash645, const RuntimeMethod* method) ;
// System.Void Unity.Collections.xxHash3::DefaultScrambleAcc(System.UInt64*,System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void xxHash3_DefaultScrambleAcc_m0C7101A15C7DC90645515C5AD54A93064925CCE9 (uint64_t* ___acc0, uint8_t* ___secret1, const RuntimeMethod* method) ;
// System.Void Unity.Collections.xxHash3::DefaultAccumulate512(System.UInt64*,System.Byte*,System.Byte*,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void xxHash3_DefaultAccumulate512_mEDA479285F49F88B0C611808FD0DF25DAEC7FD30 (uint64_t* ___acc0, uint8_t* ___input1, uint8_t* ___dest2, uint8_t* ___secret3, int32_t ___isHash644, const RuntimeMethod* method) ;
// System.Void Unity.Collections.xxHash3::Write64LE(System.Void*,System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void xxHash3_Write64LE_m081CFB5625644F1EA14C692C00DD342F9D8CFF8F_inline (void* ___addr0, uint64_t ___value1, const RuntimeMethod* method) ;
// System.UInt64 Unity.Collections.xxHash3::Mul32To64(System.UInt32,System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t xxHash3_Mul32To64_m658CA5D40AAB84E56DF2C0433A34E209F3C236DE_inline (uint32_t ___x0, uint32_t ___y1, const RuntimeMethod* method) ;
// System.Void Unity.Collections.xxHash3::Avx2HashLongInternalLoop(System.UInt64*,System.Byte*,System.Byte*,System.Int64,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void xxHash3_Avx2HashLongInternalLoop_m442746594450DC1E0B61061B9F3D1032C2D57529 (uint64_t* ___acc0, uint8_t* ___input1, uint8_t* ___dest2, int64_t ___length3, uint8_t* ___secret4, int32_t ___isHash645, const RuntimeMethod* method) ;
// System.Void Unity.Collections.xxHash3::DefaultHashLongInternalLoop(System.UInt64*,System.Byte*,System.Byte*,System.Int64,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void xxHash3_DefaultHashLongInternalLoop_m3D2C33BD3DA90FA61B83E38DE7D85F519FF5B103 (uint64_t* ___acc0, uint8_t* ___input1, uint8_t* ___dest2, int64_t ___length3, uint8_t* ___secret4, int32_t ___isHash645, const RuntimeMethod* method) ;
// System.UInt64 Unity.Collections.xxHash3::MergeAcc(System.UInt64*,System.Byte*,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t xxHash3_MergeAcc_m95092AEC7B1C5BB19BF70E55CA030CAE37C79161 (uint64_t* ___acc0, uint8_t* ___secret1, uint64_t ___start2, const RuntimeMethod* method) ;
// Unity.Mathematics.uint4 Unity.Collections.xxHash3::ToUint4(System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 xxHash3_ToUint4_m6DA767007FADBF9532A2E5173996473BEDE21220 (uint64_t ___ul00, uint64_t ___ul11, const RuntimeMethod* method) ;
// System.Void Unity.Collections.xxHash3/Unity.Collections.Hash64Long_00000769$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hash64Long_00000769U24BurstDirectCall_GetFunctionPointerDiscard_m6A2C3CDD93F7E1338C11540FAD304332C8629318 (intptr_t* p0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.xxHash3/Unity.Collections.Hash64Long_00000769$BurstDirectCall::Constructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hash64Long_00000769U24BurstDirectCall_Constructor_m5DA8CD882874F9BB78C13CA1D3FC15C62447AEEC (const RuntimeMethod* method) ;
// System.IntPtr Unity.Collections.xxHash3/Unity.Collections.Hash64Long_00000769$BurstDirectCall::GetFunctionPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Hash64Long_00000769U24BurstDirectCall_GetFunctionPointer_m4B2527C1C7A26E4C4DDEE5085BA74268B41ABF1F (const RuntimeMethod* method) ;
// System.UInt64 Unity.Collections.xxHash3::Hash64Long$BurstManaged(System.Byte*,System.Byte*,System.Int64,System.Byte*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t xxHash3_Hash64LongU24BurstManaged_mD990588FAC78D5CBFC165A8404B27BDE4FB2B3E1_inline (uint8_t* ___input0, uint8_t* ___dest1, int64_t ___length2, uint8_t* ___secret3, const RuntimeMethod* method) ;
// System.Void Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000770$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hash128Long_00000770U24BurstDirectCall_GetFunctionPointerDiscard_m53CB212EA6BE49C05ADEF17C73045AEDC034AFF4 (intptr_t* p0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000770$BurstDirectCall::Constructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hash128Long_00000770U24BurstDirectCall_Constructor_mA7370FE9286219498239AB05856AC51223D639AB (const RuntimeMethod* method) ;
// System.IntPtr Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000770$BurstDirectCall::GetFunctionPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Hash128Long_00000770U24BurstDirectCall_GetFunctionPointer_m23A4CE813A0A57DE32573B8488E8563BEA4E213C (const RuntimeMethod* method) ;
// System.Void Unity.Collections.xxHash3::Hash128Long$BurstManaged(System.Byte*,System.Byte*,System.Int64,System.Byte*,Unity.Mathematics.uint4&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void xxHash3_Hash128LongU24BurstManaged_m08DB7B8209EBE3584489E17EBB40B64D29F9C9B4_inline (uint8_t* ___input0, uint8_t* ___dest1, int64_t ___length2, uint8_t* ___secret3, uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9* ___result4, const RuntimeMethod* method) ;
// System.Void Unity.Collections.AllocatorManager/StackAllocator/Try_00000A0C$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Try_00000A0CU24BurstDirectCall_Initialize_mB794E7AFF05A339E2F654C879FF924F63626E56E (const RuntimeMethod* method) ;
// System.Void Unity.Collections.AllocatorManager/SlabAllocator/Try_00000A1A$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Try_00000A1AU24BurstDirectCall_Initialize_m5C3A9A99F6293196E32C82585B7C5AE040237CC5 (const RuntimeMethod* method) ;
// System.Void Unity.Collections.RewindableAllocator/Unity.Collections.Try_00000732$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Try_00000732U24BurstDirectCall_Initialize_m60452591A440414FE20227B6301BE60B45B56389 (const RuntimeMethod* method) ;
// System.Void Unity.Collections.xxHash3/Unity.Collections.Hash64Long_00000769$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hash64Long_00000769U24BurstDirectCall_Initialize_m95E7F7B2E4CC1AF0E063BBF05A1BF11F6CCB2328 (const RuntimeMethod* method) ;
// System.Void Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000770$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hash128Long_00000770U24BurstDirectCall_Initialize_m662C1AF632941013940D96BD64C16FC023773B1E (const RuntimeMethod* method) ;
// System.Int32 Unity.Mathematics.math::lzcnt(System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_lzcnt_m6DFB607C7809FB32EB0CC7AC71F76CA53DEE7792_inline (uint32_t ___x0, const RuntimeMethod* method) ;
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
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_mB9EA4CCF3A3DC39A3BC92CFE9557FFAA77D15404 (EmbeddedAttribute_t02DB10C6AF87332FEE7D19025B26687C7B784141* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void System.Runtime.CompilerServices.IsUnmanagedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsUnmanagedAttribute__ctor_m15974D59768AFF916E346F7107F7FF7F6AD9099C (IsUnmanagedAttribute_tA4BF73E3582F0C271AD8AD4501C839CE5D557059* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void Unity.Collections.AllocatorManager::CheckDelegate(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllocatorManager_CheckDelegate_m4A8CEB99274CDBB45D754B43D7F6A7141FB4A1E5 (bool* ___useDelegate0, const RuntimeMethod* method) 
{
	{
		// useDelegate = true;
		bool* L_0 = ___useDelegate0;
		*((int8_t*)L_0) = (int8_t)1;
		// }
		return;
	}
}
// System.Boolean Unity.Collections.AllocatorManager::UseDelegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AllocatorManager_UseDelegate_mBF89F104AD0ED5DE52A221569A69F09293E36033 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// bool result = false;
		V_0 = (bool)0;
		// CheckDelegate(ref result);
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		AllocatorManager_CheckDelegate_m4A8CEB99274CDBB45D754B43D7F6A7141FB4A1E5((&V_0), NULL);
		// return result;
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Int32 Unity.Collections.AllocatorManager::allocate_block(Unity.Collections.AllocatorManager/Block&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AllocatorManager_allocate_block_mCA2494A79A83824BB93DBBB08883E2FA4FA0020C (Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionPointer_1__ctor_mA6464FB1EEC3C76906932127ADC88D71257A9CB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionPointer_1_get_Invoke_m97C18B13503F4392E7606936FDC209ECE77A7EFB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE V_0;
	memset((&V_0), 0, sizeof(V_0));
	FunctionPointer_1_tF99F1F7D7E9F1AC1CB5F7DE7BB02E8366FC2097C V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// TableEntry tableEntry = default;
		il2cpp_codegen_initobj((&V_0), sizeof(TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE));
		// tableEntry = block.Range.Allocator.TableEntry;
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_0 = ___block0;
		Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC* L_1 = (&L_0->___Range_0);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* L_2 = (&L_1->___Allocator_2);
		TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE* L_3;
		L_3 = AllocatorHandle_get_TableEntry_m09C5D57FF627FEAD3AAE73FB28CB4B9EEB811A63(L_2, NULL);
		TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE L_4 = (*(TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE*)L_3);
		V_0 = L_4;
		// var function = new FunctionPointer<TryFunction>(tableEntry.function);
		TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE L_5 = V_0;
		intptr_t L_6 = L_5.___function_0;
		FunctionPointer_1__ctor_mA6464FB1EEC3C76906932127ADC88D71257A9CB6_inline((&V_1), L_6, FunctionPointer_1__ctor_mA6464FB1EEC3C76906932127ADC88D71257A9CB6_RuntimeMethod_var);
		// return function.Invoke(tableEntry.state, ref block);
		TryFunction_tC277E17D1D6AD4EF20C1FC1D8F91A559208AA5CA* L_7;
		L_7 = FunctionPointer_1_get_Invoke_m97C18B13503F4392E7606936FDC209ECE77A7EFB((&V_1), FunctionPointer_1_get_Invoke_m97C18B13503F4392E7606936FDC209ECE77A7EFB_RuntimeMethod_var);
		TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE L_8 = V_0;
		intptr_t L_9 = L_8.___state_1;
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_10 = ___block0;
		NullCheck(L_7);
		int32_t L_11;
		L_11 = TryFunction_Invoke_mED723D46A7B0C4B590ABECE0868EA02AD94D07A2_inline(L_7, L_9, L_10, NULL);
		return L_11;
	}
}
// System.Void Unity.Collections.AllocatorManager::forward_mono_allocate_block(Unity.Collections.AllocatorManager/Block&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllocatorManager_forward_mono_allocate_block_mA4344DF1E601F7EC9AD85B7B5406225B4091567D (Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block0, int32_t* ___error1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Managed_t7CB1B315B8E0E50EE8A2993B3E4CDF35E2B4909D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE V_0;
	memset((&V_0), 0, sizeof(V_0));
	TryFunction_tC277E17D1D6AD4EF20C1FC1D8F91A559208AA5CA** V_1 = NULL;
	{
		// TableEntry tableEntry = default;
		il2cpp_codegen_initobj((&V_0), sizeof(TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE));
		// tableEntry = block.Range.Allocator.TableEntry;
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_0 = ___block0;
		Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC* L_1 = (&L_0->___Range_0);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* L_2 = (&L_1->___Allocator_2);
		TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE* L_3;
		L_3 = AllocatorHandle_get_TableEntry_m09C5D57FF627FEAD3AAE73FB28CB4B9EEB811A63(L_2, NULL);
		TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE L_4 = (*(TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE*)L_3);
		V_0 = L_4;
		// var index = block.Range.Allocator.Handle.Index;
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_5 = ___block0;
		Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC* L_6 = (&L_5->___Range_0);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* L_7 = (&L_6->___Allocator_2);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_8;
		L_8 = AllocatorHandle_get_Handle_m440EA9B9A4306115087775DA2AA0AC034107D0E2(L_7, NULL);
		uint16_t L_9 = L_8.___Index_0;
		// if (index >= Managed.kMaxNumCustomAllocator)
		if ((((int32_t)L_9) < ((int32_t)((int32_t)32768))))
		{
			goto IL_0045;
		}
	}
	{
		// throw new ArgumentException("Allocator index into TryFunction delegate table exceeds maximum.");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral55E10EEA67F908C03E76CA4B92A10DD2FA288A89)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AllocatorManager_forward_mono_allocate_block_mA4344DF1E601F7EC9AD85B7B5406225B4091567D_RuntimeMethod_var)));
	}

IL_0045:
	{
		// ref TryFunction function = ref Managed.TryFunctionDelegates[block.Range.Allocator.Handle.Index];
		il2cpp_codegen_runtime_class_init_inline(Managed_t7CB1B315B8E0E50EE8A2993B3E4CDF35E2B4909D_il2cpp_TypeInfo_var);
		TryFunctionU5BU5D_tDCC5B9036B1E592E072B5ED36243CCA274E75FF5* L_11 = ((Managed_t7CB1B315B8E0E50EE8A2993B3E4CDF35E2B4909D_StaticFields*)il2cpp_codegen_static_fields_for(Managed_t7CB1B315B8E0E50EE8A2993B3E4CDF35E2B4909D_il2cpp_TypeInfo_var))->___TryFunctionDelegates_0;
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_12 = ___block0;
		Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC* L_13 = (&L_12->___Range_0);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* L_14 = (&L_13->___Allocator_2);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_15;
		L_15 = AllocatorHandle_get_Handle_m440EA9B9A4306115087775DA2AA0AC034107D0E2(L_14, NULL);
		uint16_t L_16 = L_15.___Index_0;
		NullCheck(L_11);
		V_1 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)));
		// error = function(tableEntry.state, ref block);
		int32_t* L_17 = ___error1;
		TryFunction_tC277E17D1D6AD4EF20C1FC1D8F91A559208AA5CA** L_18 = V_1;
		TryFunction_tC277E17D1D6AD4EF20C1FC1D8F91A559208AA5CA* L_19 = *((TryFunction_tC277E17D1D6AD4EF20C1FC1D8F91A559208AA5CA**)L_18);
		TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE L_20 = V_0;
		intptr_t L_21 = L_20.___state_1;
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_22 = ___block0;
		NullCheck(L_19);
		int32_t L_23;
		L_23 = TryFunction_Invoke_mED723D46A7B0C4B590ABECE0868EA02AD94D07A2_inline(L_19, L_21, L_22, NULL);
		*((int32_t*)L_17) = (int32_t)L_23;
		// }
		return;
	}
}
// Unity.Collections.Allocator Unity.Collections.AllocatorManager::LegacyOf(Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AllocatorManager_LegacyOf_m18E5AA6A18C4741EE3A244E3834736FD1D23D8C1 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___handle0, const RuntimeMethod* method) 
{
	{
		// if (handle.Value >= FirstUserIndex)
		int32_t L_0;
		L_0 = AllocatorHandle_get_Value_m24A0A3E433794106E43E9140CC2BB55493C8F30F_inline((&___handle0), NULL);
		if ((((int32_t)L_0) < ((int32_t)((int32_t)64))))
		{
			goto IL_000d;
		}
	}
	{
		// return Allocator.Persistent;
		return (int32_t)(4);
	}

IL_000d:
	{
		// return (Allocator) handle.Value;
		int32_t L_1;
		L_1 = AllocatorHandle_get_Value_m24A0A3E433794106E43E9140CC2BB55493C8F30F_inline((&___handle0), NULL);
		return (int32_t)(L_1);
	}
}
// System.Int32 Unity.Collections.AllocatorManager::TryLegacy(Unity.Collections.AllocatorManager/Block&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AllocatorManager_TryLegacy_m47E4B9C46270E61CE56D1A9D25E38AD498C2033C (Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (block.Range.Pointer == IntPtr.Zero) // Allocate
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_0 = ___block0;
		Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC* L_1 = (&L_0->___Range_0);
		intptr_t L_2 = L_1->___Pointer_0;
		bool L_3;
		L_3 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_2, (0), NULL);
		if (!L_3)
		{
			goto IL_0079;
		}
	}
	{
		// block.Range.Pointer = (IntPtr)Memory.Unmanaged.Allocate(block.Bytes, block.Alignment, LegacyOf(block.Range.Allocator));
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_4 = ___block0;
		Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC* L_5 = (&L_4->___Range_0);
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_6 = ___block0;
		int64_t L_7;
		L_7 = Block_get_Bytes_m4BB90CD1C72FC56C573BE09951BF1CA68E8BD7D7(L_6, NULL);
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_8 = ___block0;
		int32_t L_9;
		L_9 = Block_get_Alignment_mC2388F87008B204A333664B9323BD38AA20FD633(L_8, NULL);
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_10 = ___block0;
		Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC* L_11 = (&L_10->___Range_0);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_12 = L_11->___Allocator_2;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		int32_t L_13;
		L_13 = AllocatorManager_LegacyOf_m18E5AA6A18C4741EE3A244E3834736FD1D23D8C1(L_12, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_14;
		L_14 = AllocatorHandle_op_Implicit_m784E54E7FB5C2C06F5A0A812D4DFBDCE01395CF3(L_13, NULL);
		void* L_15;
		L_15 = Unmanaged_Allocate_mCD00DF6E249C3A43F8282A83AD3B16AEFFE81A14(L_7, L_9, L_14, NULL);
		intptr_t L_16;
		L_16 = IntPtr_op_Explicit_m04BEF6277775C13DD8A986812AAA3FCEC32DCCBE(L_15, NULL);
		L_5->___Pointer_0 = L_16;
		// block.AllocatedItems = block.Range.Items;
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_17 = ___block0;
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_18 = ___block0;
		Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC* L_19 = (&L_18->___Range_0);
		int32_t L_20 = L_19->___Items_1;
		L_17->___AllocatedItems_2 = L_20;
		// return (block.Range.Pointer == IntPtr.Zero) ? -1 : 0;
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_21 = ___block0;
		Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC* L_22 = (&L_21->___Range_0);
		intptr_t L_23 = L_22->___Pointer_0;
		bool L_24;
		L_24 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_23, (0), NULL);
		if (L_24)
		{
			goto IL_0077;
		}
	}
	{
		return 0;
	}

IL_0077:
	{
		return (-1);
	}

IL_0079:
	{
		// if (block.Bytes == 0) // Free
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_25 = ___block0;
		int64_t L_26;
		L_26 = Block_get_Bytes_m4BB90CD1C72FC56C573BE09951BF1CA68E8BD7D7(L_25, NULL);
		if (L_26)
		{
			goto IL_00d7;
		}
	}
	{
		// if (LegacyOf(block.Range.Allocator) != Allocator.None)
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_27 = ___block0;
		Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC* L_28 = (&L_27->___Range_0);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_29 = L_28->___Allocator_2;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		int32_t L_30;
		L_30 = AllocatorManager_LegacyOf_m18E5AA6A18C4741EE3A244E3834736FD1D23D8C1(L_29, NULL);
		if ((((int32_t)L_30) == ((int32_t)1)))
		{
			goto IL_00be;
		}
	}
	{
		// Memory.Unmanaged.Free((void*)block.Range.Pointer, LegacyOf(block.Range.Allocator));
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_31 = ___block0;
		Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC* L_32 = (&L_31->___Range_0);
		intptr_t L_33 = L_32->___Pointer_0;
		void* L_34;
		L_34 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_33, NULL);
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_35 = ___block0;
		Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC* L_36 = (&L_35->___Range_0);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_37 = L_36->___Allocator_2;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		int32_t L_38;
		L_38 = AllocatorManager_LegacyOf_m18E5AA6A18C4741EE3A244E3834736FD1D23D8C1(L_37, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_39;
		L_39 = AllocatorHandle_op_Implicit_m784E54E7FB5C2C06F5A0A812D4DFBDCE01395CF3(L_38, NULL);
		Unmanaged_Free_m18CD64E2094F71CB38499DC51A55104AE42A464A(L_34, L_39, NULL);
	}

IL_00be:
	{
		// block.Range.Pointer = IntPtr.Zero;
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_40 = ___block0;
		Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC* L_41 = (&L_40->___Range_0);
		L_41->___Pointer_0 = (0);
		// block.AllocatedItems = 0;
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_42 = ___block0;
		L_42->___AllocatedItems_2 = 0;
		// return 0;
		return 0;
	}

IL_00d7:
	{
		// return -1;
		return (-1);
	}
}
// System.Int32 Unity.Collections.AllocatorManager::Try(Unity.Collections.AllocatorManager/Block&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AllocatorManager_Try_m80548C54CFCD1C94C60CDB8825D23106947A9125 (Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionPointer_1__ctor_mA6464FB1EEC3C76906932127ADC88D71257A9CB6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// if (block.Range.Allocator.Value < FirstUserIndex)
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_0 = ___block0;
		Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC* L_1 = (&L_0->___Range_0);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* L_2 = (&L_1->___Allocator_2);
		int32_t L_3;
		L_3 = AllocatorHandle_get_Value_m24A0A3E433794106E43E9140CC2BB55493C8F30F_inline(L_2, NULL);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)64))))
		{
			goto IL_001b;
		}
	}
	{
		// return TryLegacy(ref block);
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_4 = ___block0;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = AllocatorManager_TryLegacy_m47E4B9C46270E61CE56D1A9D25E38AD498C2033C(L_4, NULL);
		return L_5;
	}

IL_001b:
	{
		// TableEntry tableEntry = default;
		il2cpp_codegen_initobj((&V_0), sizeof(TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE));
		// tableEntry = block.Range.Allocator.TableEntry;
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_6 = ___block0;
		Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC* L_7 = (&L_6->___Range_0);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* L_8 = (&L_7->___Allocator_2);
		TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE* L_9;
		L_9 = AllocatorHandle_get_TableEntry_m09C5D57FF627FEAD3AAE73FB28CB4B9EEB811A63(L_8, NULL);
		TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE L_10 = (*(TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE*)L_9);
		V_0 = L_10;
		// var function = new FunctionPointer<TryFunction>(tableEntry.function);
		TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE L_11 = V_0;
		intptr_t L_12 = L_11.___function_0;
		FunctionPointer_1_tF99F1F7D7E9F1AC1CB5F7DE7BB02E8366FC2097C L_13;
		memset((&L_13), 0, sizeof(L_13));
		FunctionPointer_1__ctor_mA6464FB1EEC3C76906932127ADC88D71257A9CB6_inline((&L_13), L_12, /*hidden argument*/FunctionPointer_1__ctor_mA6464FB1EEC3C76906932127ADC88D71257A9CB6_RuntimeMethod_var);
		// if (UseDelegate())
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = AllocatorManager_UseDelegate_mBF89F104AD0ED5DE52A221569A69F09293E36033(NULL);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		// int error = kErrorNone;
		V_1 = 0;
		// forward_mono_allocate_block(ref block, ref error);
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_15 = ___block0;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		AllocatorManager_forward_mono_allocate_block_mA4344DF1E601F7EC9AD85B7B5406225B4091567D(L_15, (&V_1), NULL);
		// return error;
		int32_t L_16 = V_1;
		return L_16;
	}

IL_0058:
	{
		// return allocate_block(ref block);
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_17 = ___block0;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		int32_t L_18;
		L_18 = AllocatorManager_allocate_block_mCA2494A79A83824BB93DBBB08883E2FA4FA0020C(L_17, NULL);
		return L_18;
	}
}
// System.Void Unity.Collections.AllocatorManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllocatorManager__cctor_m9B228E6B261BF8B5170839E1AC5AC693E488A0A1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static readonly AllocatorHandle Invalid = new AllocatorHandle { Index = 0 };
		il2cpp_codegen_initobj((&V_0), sizeof(AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148));
		(&V_0)->___Index_0 = (uint16_t)0;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = V_0;
		((AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticFields*)il2cpp_codegen_static_fields_for(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var))->___Invalid_0 = L_0;
		// public static readonly AllocatorHandle None = new AllocatorHandle { Index = 1 };
		il2cpp_codegen_initobj((&V_0), sizeof(AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148));
		(&V_0)->___Index_0 = (uint16_t)1;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_1 = V_0;
		((AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticFields*)il2cpp_codegen_static_fields_for(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var))->___None_1 = L_1;
		// public static readonly AllocatorHandle Temp = new AllocatorHandle { Index = 2 };
		il2cpp_codegen_initobj((&V_0), sizeof(AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148));
		(&V_0)->___Index_0 = (uint16_t)2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = V_0;
		((AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticFields*)il2cpp_codegen_static_fields_for(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var))->___Temp_2 = L_2;
		// public static readonly AllocatorHandle TempJob = new AllocatorHandle { Index = 3 };
		il2cpp_codegen_initobj((&V_0), sizeof(AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148));
		(&V_0)->___Index_0 = (uint16_t)3;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = V_0;
		((AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticFields*)il2cpp_codegen_static_fields_for(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var))->___TempJob_3 = L_3;
		// public static readonly AllocatorHandle Persistent = new AllocatorHandle { Index = 4 };
		il2cpp_codegen_initobj((&V_0), sizeof(AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148));
		(&V_0)->___Index_0 = (uint16_t)4;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_4 = V_0;
		((AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticFields*)il2cpp_codegen_static_fields_for(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var))->___Persistent_4 = L_4;
		// public static readonly AllocatorHandle AudioKernel = new AllocatorHandle { Index = 5 };
		il2cpp_codegen_initobj((&V_0), sizeof(AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148));
		(&V_0)->___Index_0 = (uint16_t)5;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_5 = V_0;
		((AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticFields*)il2cpp_codegen_static_fields_for(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var))->___AudioKernel_5 = L_5;
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
int32_t TryFunction_Invoke_mED723D46A7B0C4B590ABECE0868EA02AD94D07A2_Multicast(TryFunction_tC277E17D1D6AD4EF20C1FC1D8F91A559208AA5CA* __this, intptr_t ___allocatorState0, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		TryFunction_tC277E17D1D6AD4EF20C1FC1D8F91A559208AA5CA* currentDelegate = reinterpret_cast<TryFunction_tC277E17D1D6AD4EF20C1FC1D8F91A559208AA5CA*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___allocatorState0, ___block1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t TryFunction_Invoke_mED723D46A7B0C4B590ABECE0868EA02AD94D07A2_Open(TryFunction_tC277E17D1D6AD4EF20C1FC1D8F91A559208AA5CA* __this, intptr_t ___allocatorState0, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block1, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___allocatorState0, ___block1, method);
}
int32_t TryFunction_Invoke_mED723D46A7B0C4B590ABECE0868EA02AD94D07A2_OpenStaticInvoker(TryFunction_tC277E17D1D6AD4EF20C1FC1D8F91A559208AA5CA* __this, intptr_t ___allocatorState0, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, intptr_t, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* >::Invoke(__this->___method_ptr_0, method, NULL, ___allocatorState0, ___block1);
}
int32_t TryFunction_Invoke_mED723D46A7B0C4B590ABECE0868EA02AD94D07A2_ClosedStaticInvoker(TryFunction_tC277E17D1D6AD4EF20C1FC1D8F91A559208AA5CA* __this, intptr_t ___allocatorState0, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, intptr_t, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___allocatorState0, ___block1);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_TryFunction_tC277E17D1D6AD4EF20C1FC1D8F91A559208AA5CA (TryFunction_tC277E17D1D6AD4EF20C1FC1D8F91A559208AA5CA* __this, intptr_t ___allocatorState0, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(intptr_t, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___allocatorState0, ___block1);

	return returnValue;
}
// System.Void Unity.Collections.AllocatorManager/TryFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TryFunction__ctor_m10C4A7B32E87301727B84D8CBA081FABAE3CCE53 (TryFunction_tC277E17D1D6AD4EF20C1FC1D8F91A559208AA5CA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TryFunction_Invoke_mED723D46A7B0C4B590ABECE0868EA02AD94D07A2_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&TryFunction_Invoke_mED723D46A7B0C4B590ABECE0868EA02AD94D07A2_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TryFunction_Invoke_mED723D46A7B0C4B590ABECE0868EA02AD94D07A2_Open;
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
	__this->___extra_arg_5 = (intptr_t)&TryFunction_Invoke_mED723D46A7B0C4B590ABECE0868EA02AD94D07A2_Multicast;
}
// System.Int32 Unity.Collections.AllocatorManager/TryFunction::Invoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TryFunction_Invoke_mED723D46A7B0C4B590ABECE0868EA02AD94D07A2 (TryFunction_tC277E17D1D6AD4EF20C1FC1D8F91A559208AA5CA* __this, intptr_t ___allocatorState0, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block1, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___allocatorState0, ___block1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Collections.AllocatorManager/TableEntry& Unity.Collections.AllocatorManager/AllocatorHandle::get_TableEntry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE* AllocatorHandle_get_TableEntry_m09C5D57FF627FEAD3AAE73FB28CB4B9EEB811A63 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array32768_1_ElementAt_mAF50A1B3FAA1E10902B5B1A6AFD81BE97AF4B59F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SharedStatic_1_get_Data_m8180C13CDCA02B5FA3E363D8259EDD6AE7BC49B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TableEntry_tC168732547D3913880E602CC895BCCDAED550A04_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal ref TableEntry TableEntry => ref SharedStatics.TableEntry.Ref.Data.ElementAt(Index);
		il2cpp_codegen_runtime_class_init_inline(TableEntry_tC168732547D3913880E602CC895BCCDAED550A04_il2cpp_TypeInfo_var);
		Array32768_1_tF94DB9E949B98E267CCEE7E61378AA0A89C951D6* L_0;
		L_0 = SharedStatic_1_get_Data_m8180C13CDCA02B5FA3E363D8259EDD6AE7BC49B1((&((TableEntry_tC168732547D3913880E602CC895BCCDAED550A04_StaticFields*)il2cpp_codegen_static_fields_for(TableEntry_tC168732547D3913880E602CC895BCCDAED550A04_il2cpp_TypeInfo_var))->___Ref_0), SharedStatic_1_get_Data_m8180C13CDCA02B5FA3E363D8259EDD6AE7BC49B1_RuntimeMethod_var);
		uint16_t L_1 = __this->___Index_0;
		TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE* L_2;
		L_2 = Array32768_1_ElementAt_mAF50A1B3FAA1E10902B5B1A6AFD81BE97AF4B59F(L_0, L_1, Array32768_1_ElementAt_mAF50A1B3FAA1E10902B5B1A6AFD81BE97AF4B59F_RuntimeMethod_var);
		return L_2;
	}
}
IL2CPP_EXTERN_C  TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE* AllocatorHandle_get_TableEntry_m09C5D57FF627FEAD3AAE73FB28CB4B9EEB811A63_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148*>(__this + _offset);
	TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE* _returnValue;
	_returnValue = AllocatorHandle_get_TableEntry_m09C5D57FF627FEAD3AAE73FB28CB4B9EEB811A63(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Collections.AllocatorManager/AllocatorHandle::Rewind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllocatorHandle_Rewind_mC0426BBD1E638878C33164F91AC3ADC66C850AC1 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AllocatorHandle_Rewind_mC0426BBD1E638878C33164F91AC3ADC66C850AC1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148*>(__this + _offset);
	AllocatorHandle_Rewind_mC0426BBD1E638878C33164F91AC3ADC66C850AC1(_thisAdjusted, method);
}
// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.AllocatorManager/AllocatorHandle::op_Implicit(Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 AllocatorHandle_op_Implicit_m784E54E7FB5C2C06F5A0A812D4DFBDCE01395CF3 (int32_t ___a0, const RuntimeMethod* method) 
{
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static implicit operator AllocatorHandle(Allocator a) => new AllocatorHandle
		// {
		//     Index = (ushort)((uint)a & 0xFFFF),
		//     Version = (ushort)((uint)a >> 16)
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148));
		int32_t L_0 = ___a0;
		(&V_0)->___Index_0 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_0&((int32_t)65535))));
		int32_t L_1 = ___a0;
		(&V_0)->___Version_1 = (uint16_t)((int32_t)(uint16_t)((int32_t)((uint32_t)L_1>>((int32_t)16))));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.AllocatorManager/AllocatorHandle::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AllocatorHandle_get_Value_m24A0A3E433794106E43E9140CC2BB55493C8F30F (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* __this, const RuntimeMethod* method) 
{
	{
		// public int Value => Index;
		uint16_t L_0 = __this->___Index_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t AllocatorHandle_get_Value_m24A0A3E433794106E43E9140CC2BB55493C8F30F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = AllocatorHandle_get_Value_m24A0A3E433794106E43E9140CC2BB55493C8F30F_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 Unity.Collections.AllocatorManager/AllocatorHandle::Try(Unity.Collections.AllocatorManager/Block&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AllocatorHandle_Try_m4E8677E100693A0F015076408244AF2BA827CBC9 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* __this, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// block.Range.Allocator = this;
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_0 = ___block0;
		Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC* L_1 = (&L_0->___Range_0);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = (*(AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148*)__this);
		L_1->___Allocator_2 = L_2;
		// var error = AllocatorManager.Try(ref block);
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_3 = ___block0;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = AllocatorManager_Try_m80548C54CFCD1C94C60CDB8825D23106947A9125(L_3, NULL);
		// return error;
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t AllocatorHandle_Try_m4E8677E100693A0F015076408244AF2BA827CBC9_AdjustorThunk (RuntimeObject* __this, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block0, const RuntimeMethod* method)
{
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = AllocatorHandle_Try_m4E8677E100693A0F015076408244AF2BA827CBC9(_thisAdjusted, ___block0, method);
	return _returnValue;
}
// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.AllocatorManager/AllocatorHandle::get_Handle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 AllocatorHandle_get_Handle_m440EA9B9A4306115087775DA2AA0AC034107D0E2 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* __this, const RuntimeMethod* method) 
{
	{
		// public AllocatorHandle Handle { get { return this; } set { this = value; } }
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = (*(AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148*)__this);
		return L_0;
	}
}
IL2CPP_EXTERN_C  AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 AllocatorHandle_get_Handle_m440EA9B9A4306115087775DA2AA0AC034107D0E2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148*>(__this + _offset);
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 _returnValue;
	_returnValue = AllocatorHandle_get_Handle_m440EA9B9A4306115087775DA2AA0AC034107D0E2(_thisAdjusted, method);
	return _returnValue;
}
// Unity.Collections.Allocator Unity.Collections.AllocatorManager/AllocatorHandle::get_ToAllocator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		// uint lo = Index;
		uint16_t L_0 = __this->___Index_0;
		V_0 = L_0;
		// uint hi = Version;
		uint16_t L_1 = __this->___Version_1;
		// uint value = (hi << 16) | lo;
		uint32_t L_2 = V_0;
		// return (Allocator)value;
		return (int32_t)(((int32_t)(((int32_t)((int32_t)L_1<<((int32_t)16)))|(int32_t)L_2)));
	}
}
IL2CPP_EXTERN_C  int32_t AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Collections.AllocatorManager/AllocatorHandle::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllocatorHandle_Dispose_mB74CBC8980962C016A6C85F09D3F94775A2C58E3 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* __this, const RuntimeMethod* method) 
{
	{
		// Rewind();
		AllocatorHandle_Rewind_mC0426BBD1E638878C33164F91AC3ADC66C850AC1(__this, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AllocatorHandle_Dispose_mB74CBC8980962C016A6C85F09D3F94775A2C58E3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148*>(__this + _offset);
	AllocatorHandle_Dispose_mB74CBC8980962C016A6C85F09D3F94775A2C58E3(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Collections.AllocatorManager/Range::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Range_Dispose_mEABC7B5F5F72CBAC69BAB12C80B8EDEE86B3737A (Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC* __this, const RuntimeMethod* method) 
{
	Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Block block = new Block { Range = this };
		il2cpp_codegen_initobj((&V_1), sizeof(Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3));
		Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC L_0 = (*(Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC*)__this);
		(&V_1)->___Range_0 = L_0;
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 L_1 = V_1;
		V_0 = L_1;
		// block.Dispose();
		Block_Dispose_m38B474EF3D6A142344D0A58651319FD039FB54ED((&V_0), NULL);
		// this = block.Range;
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 L_2 = V_0;
		Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC L_3 = L_2.___Range_0;
		*(Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC*)__this = L_3;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Range_Dispose_mEABC7B5F5F72CBAC69BAB12C80B8EDEE86B3737A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC*>(__this + _offset);
	Range_Dispose_mEABC7B5F5F72CBAC69BAB12C80B8EDEE86B3737A(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int64 Unity.Collections.AllocatorManager/Block::get_Bytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Block_get_Bytes_m4BB90CD1C72FC56C573BE09951BF1CA68E8BD7D7 (Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* __this, const RuntimeMethod* method) 
{
	{
		// public long Bytes => BytesPerItem * Range.Items;
		int32_t L_0 = __this->___BytesPerItem_1;
		Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC* L_1 = (&__this->___Range_0);
		int32_t L_2 = L_1->___Items_1;
		return ((int64_t)((int32_t)il2cpp_codegen_multiply(L_0, L_2)));
	}
}
IL2CPP_EXTERN_C  int64_t Block_get_Bytes_m4BB90CD1C72FC56C573BE09951BF1CA68E8BD7D7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3*>(__this + _offset);
	int64_t _returnValue;
	_returnValue = Block_get_Bytes_m4BB90CD1C72FC56C573BE09951BF1CA68E8BD7D7(_thisAdjusted, method);
	return _returnValue;
}
// System.Int64 Unity.Collections.AllocatorManager/Block::get_AllocatedBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Block_get_AllocatedBytes_mFE126B221F670BDA89C5D59C9E63C9724F79BE08 (Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* __this, const RuntimeMethod* method) 
{
	{
		// public long AllocatedBytes => BytesPerItem * AllocatedItems;
		int32_t L_0 = __this->___BytesPerItem_1;
		int32_t L_1 = __this->___AllocatedItems_2;
		return ((int64_t)((int32_t)il2cpp_codegen_multiply(L_0, L_1)));
	}
}
IL2CPP_EXTERN_C  int64_t Block_get_AllocatedBytes_mFE126B221F670BDA89C5D59C9E63C9724F79BE08_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3*>(__this + _offset);
	int64_t _returnValue;
	_returnValue = Block_get_AllocatedBytes_mFE126B221F670BDA89C5D59C9E63C9724F79BE08(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 Unity.Collections.AllocatorManager/Block::get_Alignment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Block_get_Alignment_mC2388F87008B204A333664B9323BD38AA20FD633 (Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* __this, const RuntimeMethod* method) 
{
	{
		// get => 1 << Log2Alignment;
		uint8_t L_0 = __this->___Log2Alignment_3;
		return ((int32_t)(1<<((int32_t)((int32_t)L_0&((int32_t)31)))));
	}
}
IL2CPP_EXTERN_C  int32_t Block_get_Alignment_mC2388F87008B204A333664B9323BD38AA20FD633_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Block_get_Alignment_mC2388F87008B204A333664B9323BD38AA20FD633(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Collections.AllocatorManager/Block::set_Alignment(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Block_set_Alignment_m4E74D90E827C5F58B3EBE91B2F5B097388E0500F (Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => Log2Alignment = (byte)(32 - math.lzcnt(math.max(1, value) - 1));
		int32_t L_0 = ___value0;
		int32_t L_1;
		L_1 = math_max_m5DA4D66E3CC78BDFF8218BA039D6EBB1AC223826_inline(1, L_0, NULL);
		int32_t L_2;
		L_2 = math_lzcnt_mEA5B799F963166998842F3108EBCD9954DF5BB10_inline(((int32_t)il2cpp_codegen_subtract(L_1, 1)), NULL);
		__this->___Log2Alignment_3 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_2)));
		return;
	}
}
IL2CPP_EXTERN_C  void Block_set_Alignment_m4E74D90E827C5F58B3EBE91B2F5B097388E0500F_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3*>(__this + _offset);
	Block_set_Alignment_m4E74D90E827C5F58B3EBE91B2F5B097388E0500F(_thisAdjusted, ___value0, method);
}
// System.Void Unity.Collections.AllocatorManager/Block::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Block_Dispose_m38B474EF3D6A142344D0A58651319FD039FB54ED (Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* __this, const RuntimeMethod* method) 
{
	{
		// TryFree();
		int32_t L_0;
		L_0 = Block_TryFree_m0C5FA80AF51DA6F40F40DAE7E97975C3BB402225(__this, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Block_Dispose_m38B474EF3D6A142344D0A58651319FD039FB54ED_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3*>(__this + _offset);
	Block_Dispose_m38B474EF3D6A142344D0A58651319FD039FB54ED(_thisAdjusted, method);
}
// System.Int32 Unity.Collections.AllocatorManager/Block::TryFree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Block_TryFree_m0C5FA80AF51DA6F40F40DAE7E97975C3BB402225 (Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Range.Items = 0;
		Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC* L_0 = (&__this->___Range_0);
		L_0->___Items_1 = 0;
		// return Try(ref this);
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = AllocatorManager_Try_m80548C54CFCD1C94C60CDB8825D23106947A9125(__this, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t Block_TryFree_m0C5FA80AF51DA6F40F40DAE7E97975C3BB402225_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Block_TryFree_m0C5FA80AF51DA6F40F40DAE7E97975C3BB402225(_thisAdjusted, method);
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
extern "C" int32_t CDECL ReversePInvokeWrapper_StackAllocator_Try_mAE50C02088BB7F9E154A124C00E7BF1C3DF1B0B6(intptr_t ___allocatorState0, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	returnValue = StackAllocator_Try_mAE50C02088BB7F9E154A124C00E7BF1C3DF1B0B6(___allocatorState0, ___block1, NULL);

	return returnValue;
}
extern "C" int32_t CDECL ReversePInvokeWrapper_StackAllocator_TryU24BurstManaged_m8C725A7308CCA2FCF709053D2660D37BBB1990E7(intptr_t ___allocatorState0, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	returnValue = StackAllocator_TryU24BurstManaged_m8C725A7308CCA2FCF709053D2660D37BBB1990E7_inline(___allocatorState0, ___block1, NULL);

	return returnValue;
}
// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.AllocatorManager/StackAllocator::get_Handle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 StackAllocator_get_Handle_m31D630726EF42BC6C432F8751E6B2BE346BB2267 (StackAllocator_t1ADF9AA8B94A0AF7788BC1E34E6A833E7F008124* __this, const RuntimeMethod* method) 
{
	{
		// public AllocatorHandle Handle { get { return m_handle; } set { m_handle = value; } }
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = __this->___m_handle_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 StackAllocator_get_Handle_m31D630726EF42BC6C432F8751E6B2BE346BB2267_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	StackAllocator_t1ADF9AA8B94A0AF7788BC1E34E6A833E7F008124* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StackAllocator_t1ADF9AA8B94A0AF7788BC1E34E6A833E7F008124*>(__this + _offset);
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 _returnValue;
	_returnValue = StackAllocator_get_Handle_m31D630726EF42BC6C432F8751E6B2BE346BB2267_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 Unity.Collections.AllocatorManager/StackAllocator::Try(Unity.Collections.AllocatorManager/Block&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StackAllocator_Try_m46B9AAB118C2ACCDB8B0A54DA8E27209CA152558 (StackAllocator_t1ADF9AA8B94A0AF7788BC1E34E6A833E7F008124* __this, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (block.Range.Pointer == IntPtr.Zero) // Allocate
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_0 = ___block0;
		Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC* L_1 = (&L_0->___Range_0);
		intptr_t L_2 = L_1->___Pointer_0;
		bool L_3;
		L_3 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_2, (0), NULL);
		if (!L_3)
		{
			goto IL_0086;
		}
	}
	{
		// if (m_top + block.Bytes > m_storage.Bytes)
		int64_t L_4 = __this->___m_top_2;
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_5 = ___block0;
		int64_t L_6;
		L_6 = Block_get_Bytes_m4BB90CD1C72FC56C573BE09951BF1CA68E8BD7D7(L_5, NULL);
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_7 = (&__this->___m_storage_1);
		int64_t L_8;
		L_8 = Block_get_Bytes_m4BB90CD1C72FC56C573BE09951BF1CA68E8BD7D7(L_7, NULL);
		if ((((int64_t)((int64_t)il2cpp_codegen_add(L_4, L_6))) <= ((int64_t)L_8)))
		{
			goto IL_0033;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0033:
	{
		// block.Range.Pointer = (IntPtr)((byte*)m_storage.Range.Pointer + m_top);
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_9 = ___block0;
		Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC* L_10 = (&L_9->___Range_0);
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_11 = (&__this->___m_storage_1);
		Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC* L_12 = (&L_11->___Range_0);
		intptr_t L_13 = L_12->___Pointer_0;
		void* L_14;
		L_14 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_13, NULL);
		int64_t L_15 = __this->___m_top_2;
		intptr_t L_16;
		L_16 = IntPtr_op_Explicit_m04BEF6277775C13DD8A986812AAA3FCEC32DCCBE(((void*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)L_15))), NULL);
		L_10->___Pointer_0 = L_16;
		// block.AllocatedItems = block.Range.Items;
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_17 = ___block0;
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_18 = ___block0;
		Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC* L_19 = (&L_18->___Range_0);
		int32_t L_20 = L_19->___Items_1;
		L_17->___AllocatedItems_2 = L_20;
		// m_top += block.Bytes;
		int64_t L_21 = __this->___m_top_2;
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_22 = ___block0;
		int64_t L_23;
		L_23 = Block_get_Bytes_m4BB90CD1C72FC56C573BE09951BF1CA68E8BD7D7(L_22, NULL);
		__this->___m_top_2 = ((int64_t)il2cpp_codegen_add(L_21, L_23));
		// return 0;
		return 0;
	}

IL_0086:
	{
		// if (block.Bytes == 0) // Free
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_24 = ___block0;
		int64_t L_25;
		L_25 = Block_get_Bytes_m4BB90CD1C72FC56C573BE09951BF1CA68E8BD7D7(L_24, NULL);
		if (L_25)
		{
			goto IL_00f4;
		}
	}
	{
		// if ((byte*)block.Range.Pointer - (byte*)m_storage.Range.Pointer == (long)(m_top - block.AllocatedBytes))
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_26 = ___block0;
		Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC* L_27 = (&L_26->___Range_0);
		intptr_t L_28 = L_27->___Pointer_0;
		void* L_29;
		L_29 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_28, NULL);
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_30 = (&__this->___m_storage_1);
		Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC* L_31 = (&L_30->___Range_0);
		intptr_t L_32 = L_31->___Pointer_0;
		void* L_33;
		L_33 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_32, NULL);
		int64_t L_34 = __this->___m_top_2;
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_35 = ___block0;
		int64_t L_36;
		L_36 = Block_get_AllocatedBytes_mFE126B221F670BDA89C5D59C9E63C9724F79BE08(L_35, NULL);
		if ((!(((uint64_t)((int64_t)(intptr_t)((void*)((intptr_t)((void*)il2cpp_codegen_subtract((intptr_t)L_29, (intptr_t)L_33))/1)))) == ((uint64_t)((int64_t)il2cpp_codegen_subtract(L_34, L_36))))))
		{
			goto IL_00f2;
		}
	}
	{
		// m_top -= block.AllocatedBytes;
		int64_t L_37 = __this->___m_top_2;
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_38 = ___block0;
		int64_t L_39;
		L_39 = Block_get_AllocatedBytes_mFE126B221F670BDA89C5D59C9E63C9724F79BE08(L_38, NULL);
		__this->___m_top_2 = ((int64_t)il2cpp_codegen_subtract(L_37, L_39));
		// block.Range.Pointer = IntPtr.Zero;
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_40 = ___block0;
		Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC* L_41 = (&L_40->___Range_0);
		L_41->___Pointer_0 = (0);
		// block.AllocatedItems = 0;
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_42 = ___block0;
		L_42->___AllocatedItems_2 = 0;
		// return 0;
		return 0;
	}

IL_00f2:
	{
		// return -1;
		return (-1);
	}

IL_00f4:
	{
		// return -1;
		return (-1);
	}
}
IL2CPP_EXTERN_C  int32_t StackAllocator_Try_m46B9AAB118C2ACCDB8B0A54DA8E27209CA152558_AdjustorThunk (RuntimeObject* __this, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block0, const RuntimeMethod* method)
{
	StackAllocator_t1ADF9AA8B94A0AF7788BC1E34E6A833E7F008124* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StackAllocator_t1ADF9AA8B94A0AF7788BC1E34E6A833E7F008124*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = StackAllocator_Try_m46B9AAB118C2ACCDB8B0A54DA8E27209CA152558(_thisAdjusted, ___block0, method);
	return _returnValue;
}
// System.Int32 Unity.Collections.AllocatorManager/StackAllocator::Try(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StackAllocator_Try_mAE50C02088BB7F9E154A124C00E7BF1C3DF1B0B6 (intptr_t ___allocatorState0, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Try_00000A0CU24BurstDirectCall_t6914F9B847539B29521FF1DD1E19FD3F8369EDEA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ((StackAllocator*)allocatorState)->Try(ref block);
		intptr_t L_0 = ___allocatorState0;
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_1 = ___block1;
		il2cpp_codegen_runtime_class_init_inline(Try_00000A0CU24BurstDirectCall_t6914F9B847539B29521FF1DD1E19FD3F8369EDEA_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Try_00000A0CU24BurstDirectCall_Invoke_m83BD090A8382C1F49D7DB18C55ED2F1897B13125(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void Unity.Collections.AllocatorManager/StackAllocator::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackAllocator_Dispose_m0872D5C01F22CD4BCCF71EA0185DB18EA14D62CB (StackAllocator_t1ADF9AA8B94A0AF7788BC1E34E6A833E7F008124* __this, const RuntimeMethod* method) 
{
	{
		// m_handle.Rewind();
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* L_0 = (&__this->___m_handle_0);
		AllocatorHandle_Rewind_mC0426BBD1E638878C33164F91AC3ADC66C850AC1(L_0, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void StackAllocator_Dispose_m0872D5C01F22CD4BCCF71EA0185DB18EA14D62CB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	StackAllocator_t1ADF9AA8B94A0AF7788BC1E34E6A833E7F008124* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StackAllocator_t1ADF9AA8B94A0AF7788BC1E34E6A833E7F008124*>(__this + _offset);
	StackAllocator_Dispose_m0872D5C01F22CD4BCCF71EA0185DB18EA14D62CB(_thisAdjusted, method);
}
// System.Int32 Unity.Collections.AllocatorManager/StackAllocator::Try$BurstManaged(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StackAllocator_TryU24BurstManaged_m8C725A7308CCA2FCF709053D2660D37BBB1990E7 (intptr_t ___allocatorState0, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block1, const RuntimeMethod* method) 
{
	{
		// return ((StackAllocator*)allocatorState)->Try(ref block);
		intptr_t L_0 = ___allocatorState0;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_0, NULL);
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_2 = ___block1;
		int32_t L_3;
		L_3 = StackAllocator_Try_m46B9AAB118C2ACCDB8B0A54DA8E27209CA152558((StackAllocator_t1ADF9AA8B94A0AF7788BC1E34E6A833E7F008124*)L_1, L_2, NULL);
		return L_3;
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
int32_t Try_00000A0CU24PostfixBurstDelegate_Invoke_mD81D3BB3B56D6446CE84FDD01A3DEE5C575A5C8F_Multicast(Try_00000A0CU24PostfixBurstDelegate_t96B837C93119DF6D792B4064284CFFB491C86272* __this, intptr_t ___allocatorState0, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Try_00000A0CU24PostfixBurstDelegate_t96B837C93119DF6D792B4064284CFFB491C86272* currentDelegate = reinterpret_cast<Try_00000A0CU24PostfixBurstDelegate_t96B837C93119DF6D792B4064284CFFB491C86272*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___allocatorState0, ___block1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t Try_00000A0CU24PostfixBurstDelegate_Invoke_mD81D3BB3B56D6446CE84FDD01A3DEE5C575A5C8F_Open(Try_00000A0CU24PostfixBurstDelegate_t96B837C93119DF6D792B4064284CFFB491C86272* __this, intptr_t ___allocatorState0, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block1, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___allocatorState0, ___block1, method);
}
int32_t Try_00000A0CU24PostfixBurstDelegate_Invoke_mD81D3BB3B56D6446CE84FDD01A3DEE5C575A5C8F_OpenStaticInvoker(Try_00000A0CU24PostfixBurstDelegate_t96B837C93119DF6D792B4064284CFFB491C86272* __this, intptr_t ___allocatorState0, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, intptr_t, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* >::Invoke(__this->___method_ptr_0, method, NULL, ___allocatorState0, ___block1);
}
int32_t Try_00000A0CU24PostfixBurstDelegate_Invoke_mD81D3BB3B56D6446CE84FDD01A3DEE5C575A5C8F_ClosedStaticInvoker(Try_00000A0CU24PostfixBurstDelegate_t96B837C93119DF6D792B4064284CFFB491C86272* __this, intptr_t ___allocatorState0, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, intptr_t, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___allocatorState0, ___block1);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_Try_00000A0CU24PostfixBurstDelegate_t96B837C93119DF6D792B4064284CFFB491C86272 (Try_00000A0CU24PostfixBurstDelegate_t96B837C93119DF6D792B4064284CFFB491C86272* __this, intptr_t ___allocatorState0, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___allocatorState0, ___block1);

	return returnValue;
}
// System.Void Unity.Collections.AllocatorManager/StackAllocator/Try_00000A0C$PostfixBurstDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Try_00000A0CU24PostfixBurstDelegate__ctor_m86132B67D16441E144FADD2D7C41F2E88EFFE7FF (Try_00000A0CU24PostfixBurstDelegate_t96B837C93119DF6D792B4064284CFFB491C86272* __this, RuntimeObject* p0, intptr_t p1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)p1);
	__this->___method_3 = p1;
	__this->___m_target_2 = p0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)p0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)p1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)p1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)p1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Try_00000A0CU24PostfixBurstDelegate_Invoke_mD81D3BB3B56D6446CE84FDD01A3DEE5C575A5C8F_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&Try_00000A0CU24PostfixBurstDelegate_Invoke_mD81D3BB3B56D6446CE84FDD01A3DEE5C575A5C8F_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Try_00000A0CU24PostfixBurstDelegate_Invoke_mD81D3BB3B56D6446CE84FDD01A3DEE5C575A5C8F_Open;
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
	__this->___extra_arg_5 = (intptr_t)&Try_00000A0CU24PostfixBurstDelegate_Invoke_mD81D3BB3B56D6446CE84FDD01A3DEE5C575A5C8F_Multicast;
}
// System.Int32 Unity.Collections.AllocatorManager/StackAllocator/Try_00000A0C$PostfixBurstDelegate::Invoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Try_00000A0CU24PostfixBurstDelegate_Invoke_mD81D3BB3B56D6446CE84FDD01A3DEE5C575A5C8F (Try_00000A0CU24PostfixBurstDelegate_t96B837C93119DF6D792B4064284CFFB491C86272* __this, intptr_t ___allocatorState0, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block1, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___allocatorState0, ___block1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Collections.AllocatorManager/StackAllocator/Try_00000A0C$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Try_00000A0CU24BurstDirectCall_GetFunctionPointerDiscard_mBD7B14657BD9DED1D6DB17395682A198A2127ADC (intptr_t* p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Try_00000A0CU24BurstDirectCall_t6914F9B847539B29521FF1DD1E19FD3F8369EDEA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Try_00000A0CU24BurstDirectCall_t6914F9B847539B29521FF1DD1E19FD3F8369EDEA_il2cpp_TypeInfo_var);
		intptr_t L_0 = ((Try_00000A0CU24BurstDirectCall_t6914F9B847539B29521FF1DD1E19FD3F8369EDEA_StaticFields*)il2cpp_codegen_static_fields_for(Try_00000A0CU24BurstDirectCall_t6914F9B847539B29521FF1DD1E19FD3F8369EDEA_il2cpp_TypeInfo_var))->___Pointer_0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Try_00000A0CU24BurstDirectCall_t6914F9B847539B29521FF1DD1E19FD3F8369EDEA_il2cpp_TypeInfo_var);
		intptr_t L_1 = ((Try_00000A0CU24BurstDirectCall_t6914F9B847539B29521FF1DD1E19FD3F8369EDEA_StaticFields*)il2cpp_codegen_static_fields_for(Try_00000A0CU24BurstDirectCall_t6914F9B847539B29521FF1DD1E19FD3F8369EDEA_il2cpp_TypeInfo_var))->___DeferredCompilation_1;
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		void* L_2;
		L_2 = BurstCompiler_GetILPPMethodFunctionPointer_m850347229EDA4058D224F885446BEE0137831BD0(L_1, NULL);
		((Try_00000A0CU24BurstDirectCall_t6914F9B847539B29521FF1DD1E19FD3F8369EDEA_StaticFields*)il2cpp_codegen_static_fields_for(Try_00000A0CU24BurstDirectCall_t6914F9B847539B29521FF1DD1E19FD3F8369EDEA_il2cpp_TypeInfo_var))->___Pointer_0 = (intptr_t)L_2;
	}

IL_0019:
	{
		intptr_t* L_3 = p0;
		il2cpp_codegen_runtime_class_init_inline(Try_00000A0CU24BurstDirectCall_t6914F9B847539B29521FF1DD1E19FD3F8369EDEA_il2cpp_TypeInfo_var);
		intptr_t L_4 = ((Try_00000A0CU24BurstDirectCall_t6914F9B847539B29521FF1DD1E19FD3F8369EDEA_StaticFields*)il2cpp_codegen_static_fields_for(Try_00000A0CU24BurstDirectCall_t6914F9B847539B29521FF1DD1E19FD3F8369EDEA_il2cpp_TypeInfo_var))->___Pointer_0;
		*((intptr_t*)L_3) = (intptr_t)L_4;
		return;
	}
}
// System.IntPtr Unity.Collections.AllocatorManager/StackAllocator/Try_00000A0C$BurstDirectCall::GetFunctionPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Try_00000A0CU24BurstDirectCall_GetFunctionPointer_mACA66472A7DABE3D3CC1445FA57D585EAE560374 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Try_00000A0CU24BurstDirectCall_t6914F9B847539B29521FF1DD1E19FD3F8369EDEA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		V_0 = ((intptr_t)0);
		il2cpp_codegen_runtime_class_init_inline(Try_00000A0CU24BurstDirectCall_t6914F9B847539B29521FF1DD1E19FD3F8369EDEA_il2cpp_TypeInfo_var);
		Try_00000A0CU24BurstDirectCall_GetFunctionPointerDiscard_mBD7B14657BD9DED1D6DB17395682A198A2127ADC((&V_0), NULL);
		intptr_t L_0 = V_0;
		return L_0;
	}
}
// System.Void Unity.Collections.AllocatorManager/StackAllocator/Try_00000A0C$BurstDirectCall::Constructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Try_00000A0CU24BurstDirectCall_Constructor_m78969031636424FF180A63912777C0B8446862C0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StackAllocator_TryU24BurstManaged_m8C725A7308CCA2FCF709053D2660D37BBB1990E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StackAllocator_Try_mAE50C02088BB7F9E154A124C00E7BF1C3DF1B0B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Try_00000A0CU24BurstDirectCall_t6914F9B847539B29521FF1DD1E19FD3F8369EDEA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Try_00000A0CU24PostfixBurstDelegate_t96B837C93119DF6D792B4064284CFFB491C86272_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 L_0 = { reinterpret_cast<intptr_t> (StackAllocator_Try_mAE50C02088BB7F9E154A124C00E7BF1C3DF1B0B6_RuntimeMethod_var) };
		RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 L_1 = { reinterpret_cast<intptr_t> (StackAllocator_TryU24BurstManaged_m8C725A7308CCA2FCF709053D2660D37BBB1990E7_RuntimeMethod_var) };
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Try_00000A0CU24PostfixBurstDelegate_t96B837C93119DF6D792B4064284CFFB491C86272_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = BurstCompiler_CompileILPPMethod_m2ADEDFEFDB17376C1A1FFD7C2D1A0C242AB78A8B(L_0, L_1, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Try_00000A0CU24BurstDirectCall_t6914F9B847539B29521FF1DD1E19FD3F8369EDEA_il2cpp_TypeInfo_var);
		((Try_00000A0CU24BurstDirectCall_t6914F9B847539B29521FF1DD1E19FD3F8369EDEA_StaticFields*)il2cpp_codegen_static_fields_for(Try_00000A0CU24BurstDirectCall_t6914F9B847539B29521FF1DD1E19FD3F8369EDEA_il2cpp_TypeInfo_var))->___DeferredCompilation_1 = L_3;
		return;
	}
}
// System.Void Unity.Collections.AllocatorManager/StackAllocator/Try_00000A0C$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Try_00000A0CU24BurstDirectCall_Initialize_mB794E7AFF05A339E2F654C879FF924F63626E56E (const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void Unity.Collections.AllocatorManager/StackAllocator/Try_00000A0C$BurstDirectCall::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Try_00000A0CU24BurstDirectCall__cctor_mCB91408F41E2F5FB8499408AD28471D1DFF9A900 (const RuntimeMethod* method) 
{
	{
		Try_00000A0CU24BurstDirectCall_Constructor_m78969031636424FF180A63912777C0B8446862C0(NULL);
		return;
	}
}
// System.Int32 Unity.Collections.AllocatorManager/StackAllocator/Try_00000A0C$BurstDirectCall::Invoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Try_00000A0CU24BurstDirectCall_Invoke_m83BD090A8382C1F49D7DB18C55ED2F1897B13125 (intptr_t ___allocatorState0, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Try_00000A0CU24BurstDirectCall_t6914F9B847539B29521FF1DD1E19FD3F8369EDEA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = BurstCompiler_get_IsEnabled_mEDA2FAA92A224EC22E16A1AB9E8C55FB0DECD755(NULL);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Try_00000A0CU24BurstDirectCall_t6914F9B847539B29521FF1DD1E19FD3F8369EDEA_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = Try_00000A0CU24BurstDirectCall_GetFunctionPointer_mACA66472A7DABE3D3CC1445FA57D585EAE560374(NULL);
		V_0 = L_1;
		intptr_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		intptr_t L_3 = ___allocatorState0;
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_4 = ___block1;
		intptr_t L_5 = V_0;
		typedef int32_t (CDECL *func_L_6)(intptr_t,Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3*);
		int32_t L_7 = ((func_L_6)L_5)(L_3,L_4);
		return L_7;
	}

IL_001f:
	{
		intptr_t L_8 = ___allocatorState0;
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_9 = ___block1;
		int32_t L_10;
		L_10 = StackAllocator_TryU24BurstManaged_m8C725A7308CCA2FCF709053D2660D37BBB1990E7_inline(L_8, L_9, NULL);
		return L_10;
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
extern "C" int32_t CDECL ReversePInvokeWrapper_SlabAllocator_Try_mBC7DA9938F61EC1FA877854A3F095EB8CA5D4AE0(intptr_t ___allocatorState0, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	returnValue = SlabAllocator_Try_mBC7DA9938F61EC1FA877854A3F095EB8CA5D4AE0(___allocatorState0, ___block1, NULL);

	return returnValue;
}
extern "C" int32_t CDECL ReversePInvokeWrapper_SlabAllocator_TryU24BurstManaged_m484D87FD1C7B43A0E6B77864265E0370AC734EA5(intptr_t ___allocatorState0, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	returnValue = SlabAllocator_TryU24BurstManaged_m484D87FD1C7B43A0E6B77864265E0370AC734EA5_inline(___allocatorState0, ___block1, NULL);

	return returnValue;
}
// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.AllocatorManager/SlabAllocator::get_Handle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 SlabAllocator_get_Handle_m09C2CCD8BCEA26214DC514707F222B228A1E04BE (SlabAllocator_t1E255FCD698DFC3C2B043645B30E794330CD10ED* __this, const RuntimeMethod* method) 
{
	{
		// public AllocatorHandle Handle { get { return m_handle; } set { m_handle = value; } }
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = __this->___m_handle_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 SlabAllocator_get_Handle_m09C2CCD8BCEA26214DC514707F222B228A1E04BE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SlabAllocator_t1E255FCD698DFC3C2B043645B30E794330CD10ED* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SlabAllocator_t1E255FCD698DFC3C2B043645B30E794330CD10ED*>(__this + _offset);
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 _returnValue;
	_returnValue = SlabAllocator_get_Handle_m09C2CCD8BCEA26214DC514707F222B228A1E04BE_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 Unity.Collections.AllocatorManager/SlabAllocator::get_SlabSizeInBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SlabAllocator_get_SlabSizeInBytes_mFFD79D4D6B544F1C21CB0EB40BBDFF5D5477A612 (SlabAllocator_t1E255FCD698DFC3C2B043645B30E794330CD10ED* __this, const RuntimeMethod* method) 
{
	{
		// get => 1 << Log2SlabSizeInBytes;
		int32_t L_0 = __this->___Log2SlabSizeInBytes_2;
		return ((int32_t)(1<<((int32_t)(L_0&((int32_t)31)))));
	}
}
IL2CPP_EXTERN_C  int32_t SlabAllocator_get_SlabSizeInBytes_mFFD79D4D6B544F1C21CB0EB40BBDFF5D5477A612_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SlabAllocator_t1E255FCD698DFC3C2B043645B30E794330CD10ED* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SlabAllocator_t1E255FCD698DFC3C2B043645B30E794330CD10ED*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SlabAllocator_get_SlabSizeInBytes_mFFD79D4D6B544F1C21CB0EB40BBDFF5D5477A612(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 Unity.Collections.AllocatorManager/SlabAllocator::Try(Unity.Collections.AllocatorManager/Block&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SlabAllocator_Try_mE7D3D58D59FB68AE5FA9FF99C0C69FD854F482CD (SlabAllocator_t1E255FCD698DFC3C2B043645B30E794330CD10ED* __this, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedList4096Bytes_1_get_Item_m66E600C4B66D1691D91DF8BDEEBEABB148273BDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedList4096Bytes_1_get_Length_m5966340B356C0C2E1101474A1C7195300442C323_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedList4096Bytes_1_set_Item_m47AF31B8AFFE448D04FE04B053D31CED5CAC42A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	FixedList4096Bytes_1_t33F84B814E5486E0193FA1B57DDED67F7E28E259* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		// if (block.Range.Pointer == IntPtr.Zero) // Allocate
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_0 = ___block0;
		Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC* L_1 = (&L_0->___Range_0);
		intptr_t L_2 = L_1->___Pointer_0;
		bool L_3;
		L_3 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_2, (0), NULL);
		if (!L_3)
		{
			goto IL_010d;
		}
	}
	{
		// if (block.Bytes + allocatedBytes > budgetInBytes)
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_4 = ___block0;
		int64_t L_5;
		L_5 = Block_get_Bytes_m4BB90CD1C72FC56C573BE09951BF1CA68E8BD7D7(L_4, NULL);
		int64_t L_6 = __this->___allocatedBytes_5;
		int64_t L_7 = __this->___budgetInBytes_4;
		if ((((int64_t)((int64_t)il2cpp_codegen_add(L_5, L_6))) <= ((int64_t)L_7)))
		{
			goto IL_0032;
		}
	}
	{
		// return -2; //over allocator budget
		return ((int32_t)-2);
	}

IL_0032:
	{
		// if (block.Bytes > SlabSizeInBytes)
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_8 = ___block0;
		int64_t L_9;
		L_9 = Block_get_Bytes_m4BB90CD1C72FC56C573BE09951BF1CA68E8BD7D7(L_8, NULL);
		int32_t L_10;
		L_10 = SlabAllocator_get_SlabSizeInBytes_mFFD79D4D6B544F1C21CB0EB40BBDFF5D5477A612(__this, NULL);
		if ((((int64_t)L_9) <= ((int64_t)((int64_t)L_10))))
		{
			goto IL_0043;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0043:
	{
		// for (var wordIndex = 0; wordIndex < Occupied.Length; ++wordIndex)
		V_0 = 0;
		goto IL_00fa;
	}

IL_004a:
	{
		// var word = Occupied[wordIndex];
		FixedList4096Bytes_1_t33F84B814E5486E0193FA1B57DDED67F7E28E259* L_11 = (&__this->___Occupied_3);
		int32_t L_12 = V_0;
		int32_t L_13;
		L_13 = FixedList4096Bytes_1_get_Item_m66E600C4B66D1691D91DF8BDEEBEABB148273BDC(L_11, L_12, FixedList4096Bytes_1_get_Item_m66E600C4B66D1691D91DF8BDEEBEABB148273BDC_RuntimeMethod_var);
		V_1 = L_13;
		// if (word == -1)
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) == ((int32_t)(-1))))
		{
			goto IL_00f6;
		}
	}
	{
		// for (var bitIndex = 0; bitIndex < 32; ++bitIndex)
		V_2 = 0;
		goto IL_00ee;
	}

IL_0065:
	{
		// if ((word & (1 << bitIndex)) == 0)
		int32_t L_15 = V_1;
		int32_t L_16 = V_2;
		if (((int32_t)(L_15&((int32_t)(1<<((int32_t)(L_16&((int32_t)31))))))))
		{
			goto IL_00ea;
		}
	}
	{
		// Occupied[wordIndex] |= 1 << bitIndex;
		FixedList4096Bytes_1_t33F84B814E5486E0193FA1B57DDED67F7E28E259* L_17 = (&__this->___Occupied_3);
		V_3 = L_17;
		int32_t L_18 = V_0;
		V_4 = L_18;
		FixedList4096Bytes_1_t33F84B814E5486E0193FA1B57DDED67F7E28E259* L_19 = V_3;
		int32_t L_20 = V_4;
		FixedList4096Bytes_1_t33F84B814E5486E0193FA1B57DDED67F7E28E259* L_21 = V_3;
		int32_t L_22 = V_4;
		int32_t L_23;
		L_23 = FixedList4096Bytes_1_get_Item_m66E600C4B66D1691D91DF8BDEEBEABB148273BDC(L_21, L_22, FixedList4096Bytes_1_get_Item_m66E600C4B66D1691D91DF8BDEEBEABB148273BDC_RuntimeMethod_var);
		int32_t L_24 = V_2;
		FixedList4096Bytes_1_set_Item_m47AF31B8AFFE448D04FE04B053D31CED5CAC42A0(L_19, L_20, ((int32_t)(L_23|((int32_t)(1<<((int32_t)(L_24&((int32_t)31))))))), FixedList4096Bytes_1_set_Item_m47AF31B8AFFE448D04FE04B053D31CED5CAC42A0_RuntimeMethod_var);
		// block.Range.Pointer = Storage.Range.Pointer +
		//     (int)(SlabSizeInBytes * (wordIndex * 32U + bitIndex));
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_25 = ___block0;
		Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC* L_26 = (&L_25->___Range_0);
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_27 = (&__this->___Storage_1);
		Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC* L_28 = (&L_27->___Range_0);
		intptr_t L_29 = L_28->___Pointer_0;
		int32_t L_30;
		L_30 = SlabAllocator_get_SlabSizeInBytes_mFFD79D4D6B544F1C21CB0EB40BBDFF5D5477A612(__this, NULL);
		int32_t L_31 = V_0;
		int32_t L_32 = V_2;
		intptr_t L_33;
		L_33 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_29, ((int32_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_30), ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_31), ((int64_t)((int32_t)32)))), ((int64_t)L_32)))))), NULL);
		L_26->___Pointer_0 = L_33;
		// block.AllocatedItems = SlabSizeInBytes / block.BytesPerItem;
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_34 = ___block0;
		int32_t L_35;
		L_35 = SlabAllocator_get_SlabSizeInBytes_mFFD79D4D6B544F1C21CB0EB40BBDFF5D5477A612(__this, NULL);
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_36 = ___block0;
		int32_t L_37 = L_36->___BytesPerItem_1;
		L_34->___AllocatedItems_2 = ((int32_t)(L_35/L_37));
		// allocatedBytes += block.Bytes;
		int64_t L_38 = __this->___allocatedBytes_5;
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_39 = ___block0;
		int64_t L_40;
		L_40 = Block_get_Bytes_m4BB90CD1C72FC56C573BE09951BF1CA68E8BD7D7(L_39, NULL);
		__this->___allocatedBytes_5 = ((int64_t)il2cpp_codegen_add(L_38, L_40));
		// return 0;
		return 0;
	}

IL_00ea:
	{
		// for (var bitIndex = 0; bitIndex < 32; ++bitIndex)
		int32_t L_41 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00ee:
	{
		// for (var bitIndex = 0; bitIndex < 32; ++bitIndex)
		int32_t L_42 = V_2;
		if ((((int32_t)L_42) < ((int32_t)((int32_t)32))))
		{
			goto IL_0065;
		}
	}

IL_00f6:
	{
		// for (var wordIndex = 0; wordIndex < Occupied.Length; ++wordIndex)
		int32_t L_43 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_00fa:
	{
		// for (var wordIndex = 0; wordIndex < Occupied.Length; ++wordIndex)
		int32_t L_44 = V_0;
		FixedList4096Bytes_1_t33F84B814E5486E0193FA1B57DDED67F7E28E259* L_45 = (&__this->___Occupied_3);
		int32_t L_46;
		L_46 = FixedList4096Bytes_1_get_Length_m5966340B356C0C2E1101474A1C7195300442C323_inline(L_45, FixedList4096Bytes_1_get_Length_m5966340B356C0C2E1101474A1C7195300442C323_RuntimeMethod_var);
		if ((((int32_t)L_44) < ((int32_t)L_46)))
		{
			goto IL_004a;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_010d:
	{
		// if (block.Bytes == 0) // Free
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_47 = ___block0;
		int64_t L_48;
		L_48 = Block_get_Bytes_m4BB90CD1C72FC56C573BE09951BF1CA68E8BD7D7(L_47, NULL);
		if (L_48)
		{
			goto IL_01b1;
		}
	}
	{
		// var slabIndex = ((ulong)block.Range.Pointer - (ulong)Storage.Range.Pointer) >>
		//     Log2SlabSizeInBytes;
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_49 = ___block0;
		Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC* L_50 = (&L_49->___Range_0);
		intptr_t L_51 = L_50->___Pointer_0;
		int64_t L_52;
		L_52 = IntPtr_op_Explicit_m4D0C62CD2FBF2A43A390E6CE4A506B2B9A698B66(L_51, NULL);
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_53 = (&__this->___Storage_1);
		Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC* L_54 = (&L_53->___Range_0);
		intptr_t L_55 = L_54->___Pointer_0;
		int64_t L_56;
		L_56 = IntPtr_op_Explicit_m4D0C62CD2FBF2A43A390E6CE4A506B2B9A698B66(L_55, NULL);
		int32_t L_57 = __this->___Log2SlabSizeInBytes_2;
		// int wordIndex = (int)(slabIndex >> 5);
		int64_t L_58 = ((int64_t)((uint64_t)((int64_t)il2cpp_codegen_subtract(L_52, L_56))>>((int32_t)(L_57&((int32_t)63)))));
		V_5 = ((int32_t)((int64_t)((uint64_t)L_58>>5)));
		// int bitIndex = (int)(slabIndex & 31);
		V_6 = ((int32_t)((int64_t)(L_58&((int64_t)((int32_t)31)))));
		// Occupied[wordIndex] &= ~(1 << bitIndex);
		FixedList4096Bytes_1_t33F84B814E5486E0193FA1B57DDED67F7E28E259* L_59 = (&__this->___Occupied_3);
		V_3 = L_59;
		int32_t L_60 = V_5;
		V_4 = L_60;
		FixedList4096Bytes_1_t33F84B814E5486E0193FA1B57DDED67F7E28E259* L_61 = V_3;
		int32_t L_62 = V_4;
		FixedList4096Bytes_1_t33F84B814E5486E0193FA1B57DDED67F7E28E259* L_63 = V_3;
		int32_t L_64 = V_4;
		int32_t L_65;
		L_65 = FixedList4096Bytes_1_get_Item_m66E600C4B66D1691D91DF8BDEEBEABB148273BDC(L_63, L_64, FixedList4096Bytes_1_get_Item_m66E600C4B66D1691D91DF8BDEEBEABB148273BDC_RuntimeMethod_var);
		int32_t L_66 = V_6;
		FixedList4096Bytes_1_set_Item_m47AF31B8AFFE448D04FE04B053D31CED5CAC42A0(L_61, L_62, ((int32_t)(L_65&((~((int32_t)(1<<((int32_t)(L_66&((int32_t)31))))))))), FixedList4096Bytes_1_set_Item_m47AF31B8AFFE448D04FE04B053D31CED5CAC42A0_RuntimeMethod_var);
		// block.Range.Pointer = IntPtr.Zero;
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_67 = ___block0;
		Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC* L_68 = (&L_67->___Range_0);
		L_68->___Pointer_0 = (0);
		// var blockSizeInBytes = block.AllocatedItems * block.BytesPerItem;
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_69 = ___block0;
		int32_t L_70 = L_69->___AllocatedItems_2;
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_71 = ___block0;
		int32_t L_72 = L_71->___BytesPerItem_1;
		V_7 = ((int32_t)il2cpp_codegen_multiply(L_70, L_72));
		// allocatedBytes -= blockSizeInBytes;
		int64_t L_73 = __this->___allocatedBytes_5;
		int32_t L_74 = V_7;
		__this->___allocatedBytes_5 = ((int64_t)il2cpp_codegen_subtract(L_73, ((int64_t)L_74)));
		// block.AllocatedItems = 0;
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_75 = ___block0;
		L_75->___AllocatedItems_2 = 0;
		// return 0;
		return 0;
	}

IL_01b1:
	{
		// return -1;
		return (-1);
	}
}
IL2CPP_EXTERN_C  int32_t SlabAllocator_Try_mE7D3D58D59FB68AE5FA9FF99C0C69FD854F482CD_AdjustorThunk (RuntimeObject* __this, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block0, const RuntimeMethod* method)
{
	SlabAllocator_t1E255FCD698DFC3C2B043645B30E794330CD10ED* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SlabAllocator_t1E255FCD698DFC3C2B043645B30E794330CD10ED*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SlabAllocator_Try_mE7D3D58D59FB68AE5FA9FF99C0C69FD854F482CD(_thisAdjusted, ___block0, method);
	return _returnValue;
}
// System.Int32 Unity.Collections.AllocatorManager/SlabAllocator::Try(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SlabAllocator_Try_mBC7DA9938F61EC1FA877854A3F095EB8CA5D4AE0 (intptr_t ___allocatorState0, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Try_00000A1AU24BurstDirectCall_t970F9722E1AFBB5D8419EC11F27DBC08866F197B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ((SlabAllocator*)allocatorState)->Try(ref block);
		intptr_t L_0 = ___allocatorState0;
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_1 = ___block1;
		il2cpp_codegen_runtime_class_init_inline(Try_00000A1AU24BurstDirectCall_t970F9722E1AFBB5D8419EC11F27DBC08866F197B_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Try_00000A1AU24BurstDirectCall_Invoke_m97B19B4E6D47817822FECE96A16CCFFEB455C4C0(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void Unity.Collections.AllocatorManager/SlabAllocator::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlabAllocator_Dispose_m9ED75718657190884C0327489A9AE9DB525D7912 (SlabAllocator_t1E255FCD698DFC3C2B043645B30E794330CD10ED* __this, const RuntimeMethod* method) 
{
	{
		// m_handle.Rewind();
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* L_0 = (&__this->___m_handle_0);
		AllocatorHandle_Rewind_mC0426BBD1E638878C33164F91AC3ADC66C850AC1(L_0, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SlabAllocator_Dispose_m9ED75718657190884C0327489A9AE9DB525D7912_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SlabAllocator_t1E255FCD698DFC3C2B043645B30E794330CD10ED* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SlabAllocator_t1E255FCD698DFC3C2B043645B30E794330CD10ED*>(__this + _offset);
	SlabAllocator_Dispose_m9ED75718657190884C0327489A9AE9DB525D7912(_thisAdjusted, method);
}
// System.Int32 Unity.Collections.AllocatorManager/SlabAllocator::Try$BurstManaged(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SlabAllocator_TryU24BurstManaged_m484D87FD1C7B43A0E6B77864265E0370AC734EA5 (intptr_t ___allocatorState0, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block1, const RuntimeMethod* method) 
{
	{
		// return ((SlabAllocator*)allocatorState)->Try(ref block);
		intptr_t L_0 = ___allocatorState0;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_0, NULL);
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_2 = ___block1;
		int32_t L_3;
		L_3 = SlabAllocator_Try_mE7D3D58D59FB68AE5FA9FF99C0C69FD854F482CD((SlabAllocator_t1E255FCD698DFC3C2B043645B30E794330CD10ED*)L_1, L_2, NULL);
		return L_3;
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
int32_t Try_00000A1AU24PostfixBurstDelegate_Invoke_m9D703F119880DF9801FB5F245FE99076523D9F06_Multicast(Try_00000A1AU24PostfixBurstDelegate_t98CCB5837EDA7DC49FBF71E1FA18480267218A1D* __this, intptr_t ___allocatorState0, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Try_00000A1AU24PostfixBurstDelegate_t98CCB5837EDA7DC49FBF71E1FA18480267218A1D* currentDelegate = reinterpret_cast<Try_00000A1AU24PostfixBurstDelegate_t98CCB5837EDA7DC49FBF71E1FA18480267218A1D*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___allocatorState0, ___block1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t Try_00000A1AU24PostfixBurstDelegate_Invoke_m9D703F119880DF9801FB5F245FE99076523D9F06_Open(Try_00000A1AU24PostfixBurstDelegate_t98CCB5837EDA7DC49FBF71E1FA18480267218A1D* __this, intptr_t ___allocatorState0, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block1, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___allocatorState0, ___block1, method);
}
int32_t Try_00000A1AU24PostfixBurstDelegate_Invoke_m9D703F119880DF9801FB5F245FE99076523D9F06_OpenStaticInvoker(Try_00000A1AU24PostfixBurstDelegate_t98CCB5837EDA7DC49FBF71E1FA18480267218A1D* __this, intptr_t ___allocatorState0, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, intptr_t, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* >::Invoke(__this->___method_ptr_0, method, NULL, ___allocatorState0, ___block1);
}
int32_t Try_00000A1AU24PostfixBurstDelegate_Invoke_m9D703F119880DF9801FB5F245FE99076523D9F06_ClosedStaticInvoker(Try_00000A1AU24PostfixBurstDelegate_t98CCB5837EDA7DC49FBF71E1FA18480267218A1D* __this, intptr_t ___allocatorState0, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, intptr_t, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___allocatorState0, ___block1);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_Try_00000A1AU24PostfixBurstDelegate_t98CCB5837EDA7DC49FBF71E1FA18480267218A1D (Try_00000A1AU24PostfixBurstDelegate_t98CCB5837EDA7DC49FBF71E1FA18480267218A1D* __this, intptr_t ___allocatorState0, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___allocatorState0, ___block1);

	return returnValue;
}
// System.Void Unity.Collections.AllocatorManager/SlabAllocator/Try_00000A1A$PostfixBurstDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Try_00000A1AU24PostfixBurstDelegate__ctor_mAA8F8D86A6F4CCAC45DB371681919640B107B445 (Try_00000A1AU24PostfixBurstDelegate_t98CCB5837EDA7DC49FBF71E1FA18480267218A1D* __this, RuntimeObject* p0, intptr_t p1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)p1);
	__this->___method_3 = p1;
	__this->___m_target_2 = p0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)p0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)p1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)p1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)p1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Try_00000A1AU24PostfixBurstDelegate_Invoke_m9D703F119880DF9801FB5F245FE99076523D9F06_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&Try_00000A1AU24PostfixBurstDelegate_Invoke_m9D703F119880DF9801FB5F245FE99076523D9F06_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Try_00000A1AU24PostfixBurstDelegate_Invoke_m9D703F119880DF9801FB5F245FE99076523D9F06_Open;
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
	__this->___extra_arg_5 = (intptr_t)&Try_00000A1AU24PostfixBurstDelegate_Invoke_m9D703F119880DF9801FB5F245FE99076523D9F06_Multicast;
}
// System.Int32 Unity.Collections.AllocatorManager/SlabAllocator/Try_00000A1A$PostfixBurstDelegate::Invoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Try_00000A1AU24PostfixBurstDelegate_Invoke_m9D703F119880DF9801FB5F245FE99076523D9F06 (Try_00000A1AU24PostfixBurstDelegate_t98CCB5837EDA7DC49FBF71E1FA18480267218A1D* __this, intptr_t ___allocatorState0, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block1, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___allocatorState0, ___block1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Collections.AllocatorManager/SlabAllocator/Try_00000A1A$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Try_00000A1AU24BurstDirectCall_GetFunctionPointerDiscard_m7BA13FC5A431C3E0C533473FEFB7C11E35FB1791 (intptr_t* p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Try_00000A1AU24BurstDirectCall_t970F9722E1AFBB5D8419EC11F27DBC08866F197B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Try_00000A1AU24BurstDirectCall_t970F9722E1AFBB5D8419EC11F27DBC08866F197B_il2cpp_TypeInfo_var);
		intptr_t L_0 = ((Try_00000A1AU24BurstDirectCall_t970F9722E1AFBB5D8419EC11F27DBC08866F197B_StaticFields*)il2cpp_codegen_static_fields_for(Try_00000A1AU24BurstDirectCall_t970F9722E1AFBB5D8419EC11F27DBC08866F197B_il2cpp_TypeInfo_var))->___Pointer_0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Try_00000A1AU24BurstDirectCall_t970F9722E1AFBB5D8419EC11F27DBC08866F197B_il2cpp_TypeInfo_var);
		intptr_t L_1 = ((Try_00000A1AU24BurstDirectCall_t970F9722E1AFBB5D8419EC11F27DBC08866F197B_StaticFields*)il2cpp_codegen_static_fields_for(Try_00000A1AU24BurstDirectCall_t970F9722E1AFBB5D8419EC11F27DBC08866F197B_il2cpp_TypeInfo_var))->___DeferredCompilation_1;
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		void* L_2;
		L_2 = BurstCompiler_GetILPPMethodFunctionPointer_m850347229EDA4058D224F885446BEE0137831BD0(L_1, NULL);
		((Try_00000A1AU24BurstDirectCall_t970F9722E1AFBB5D8419EC11F27DBC08866F197B_StaticFields*)il2cpp_codegen_static_fields_for(Try_00000A1AU24BurstDirectCall_t970F9722E1AFBB5D8419EC11F27DBC08866F197B_il2cpp_TypeInfo_var))->___Pointer_0 = (intptr_t)L_2;
	}

IL_0019:
	{
		intptr_t* L_3 = p0;
		il2cpp_codegen_runtime_class_init_inline(Try_00000A1AU24BurstDirectCall_t970F9722E1AFBB5D8419EC11F27DBC08866F197B_il2cpp_TypeInfo_var);
		intptr_t L_4 = ((Try_00000A1AU24BurstDirectCall_t970F9722E1AFBB5D8419EC11F27DBC08866F197B_StaticFields*)il2cpp_codegen_static_fields_for(Try_00000A1AU24BurstDirectCall_t970F9722E1AFBB5D8419EC11F27DBC08866F197B_il2cpp_TypeInfo_var))->___Pointer_0;
		*((intptr_t*)L_3) = (intptr_t)L_4;
		return;
	}
}
// System.IntPtr Unity.Collections.AllocatorManager/SlabAllocator/Try_00000A1A$BurstDirectCall::GetFunctionPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Try_00000A1AU24BurstDirectCall_GetFunctionPointer_m9C718A8828FEC5AEF27957362FA52CAD49262ABB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Try_00000A1AU24BurstDirectCall_t970F9722E1AFBB5D8419EC11F27DBC08866F197B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		V_0 = ((intptr_t)0);
		il2cpp_codegen_runtime_class_init_inline(Try_00000A1AU24BurstDirectCall_t970F9722E1AFBB5D8419EC11F27DBC08866F197B_il2cpp_TypeInfo_var);
		Try_00000A1AU24BurstDirectCall_GetFunctionPointerDiscard_m7BA13FC5A431C3E0C533473FEFB7C11E35FB1791((&V_0), NULL);
		intptr_t L_0 = V_0;
		return L_0;
	}
}
// System.Void Unity.Collections.AllocatorManager/SlabAllocator/Try_00000A1A$BurstDirectCall::Constructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Try_00000A1AU24BurstDirectCall_Constructor_mD48044B24C54068FFD88C68D6A5521CCA8F096B9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SlabAllocator_TryU24BurstManaged_m484D87FD1C7B43A0E6B77864265E0370AC734EA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SlabAllocator_Try_mBC7DA9938F61EC1FA877854A3F095EB8CA5D4AE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Try_00000A1AU24BurstDirectCall_t970F9722E1AFBB5D8419EC11F27DBC08866F197B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Try_00000A1AU24PostfixBurstDelegate_t98CCB5837EDA7DC49FBF71E1FA18480267218A1D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 L_0 = { reinterpret_cast<intptr_t> (SlabAllocator_Try_mBC7DA9938F61EC1FA877854A3F095EB8CA5D4AE0_RuntimeMethod_var) };
		RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 L_1 = { reinterpret_cast<intptr_t> (SlabAllocator_TryU24BurstManaged_m484D87FD1C7B43A0E6B77864265E0370AC734EA5_RuntimeMethod_var) };
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Try_00000A1AU24PostfixBurstDelegate_t98CCB5837EDA7DC49FBF71E1FA18480267218A1D_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = BurstCompiler_CompileILPPMethod_m2ADEDFEFDB17376C1A1FFD7C2D1A0C242AB78A8B(L_0, L_1, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Try_00000A1AU24BurstDirectCall_t970F9722E1AFBB5D8419EC11F27DBC08866F197B_il2cpp_TypeInfo_var);
		((Try_00000A1AU24BurstDirectCall_t970F9722E1AFBB5D8419EC11F27DBC08866F197B_StaticFields*)il2cpp_codegen_static_fields_for(Try_00000A1AU24BurstDirectCall_t970F9722E1AFBB5D8419EC11F27DBC08866F197B_il2cpp_TypeInfo_var))->___DeferredCompilation_1 = L_3;
		return;
	}
}
// System.Void Unity.Collections.AllocatorManager/SlabAllocator/Try_00000A1A$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Try_00000A1AU24BurstDirectCall_Initialize_m5C3A9A99F6293196E32C82585B7C5AE040237CC5 (const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void Unity.Collections.AllocatorManager/SlabAllocator/Try_00000A1A$BurstDirectCall::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Try_00000A1AU24BurstDirectCall__cctor_m6B8D1A78FC31D7A1283F2ED365CF6F636DF483A7 (const RuntimeMethod* method) 
{
	{
		Try_00000A1AU24BurstDirectCall_Constructor_mD48044B24C54068FFD88C68D6A5521CCA8F096B9(NULL);
		return;
	}
}
// System.Int32 Unity.Collections.AllocatorManager/SlabAllocator/Try_00000A1A$BurstDirectCall::Invoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Try_00000A1AU24BurstDirectCall_Invoke_m97B19B4E6D47817822FECE96A16CCFFEB455C4C0 (intptr_t ___allocatorState0, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Try_00000A1AU24BurstDirectCall_t970F9722E1AFBB5D8419EC11F27DBC08866F197B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = BurstCompiler_get_IsEnabled_mEDA2FAA92A224EC22E16A1AB9E8C55FB0DECD755(NULL);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Try_00000A1AU24BurstDirectCall_t970F9722E1AFBB5D8419EC11F27DBC08866F197B_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = Try_00000A1AU24BurstDirectCall_GetFunctionPointer_m9C718A8828FEC5AEF27957362FA52CAD49262ABB(NULL);
		V_0 = L_1;
		intptr_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		intptr_t L_3 = ___allocatorState0;
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_4 = ___block1;
		intptr_t L_5 = V_0;
		typedef int32_t (CDECL *func_L_6)(intptr_t,Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3*);
		int32_t L_7 = ((func_L_6)L_5)(L_3,L_4);
		return L_7;
	}

IL_001f:
	{
		intptr_t L_8 = ___allocatorState0;
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_9 = ___block1;
		int32_t L_10;
		L_10 = SlabAllocator_TryU24BurstManaged_m484D87FD1C7B43A0E6B77864265E0370AC734EA5_inline(L_8, L_9, NULL);
		return L_10;
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
// System.Void Unity.Collections.AllocatorManager/SharedStatics/TableEntry::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableEntry__cctor_m756709B4E1DD838A5A106DA37C9C1CD006844E8B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SharedStatic_1_GetOrCreate_TisTableEntry_tC168732547D3913880E602CC895BCCDAED550A04_m308596CEEBCC9D147B8A49219CBFE11474468B2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TableEntry_tC168732547D3913880E602CC895BCCDAED550A04_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal sealed class TableEntry { internal static readonly SharedStatic<Array32768<AllocatorManager.TableEntry>> Ref = SharedStatic<Array32768<AllocatorManager.TableEntry>>.GetOrCreate<TableEntry>(); }
		SharedStatic_1_t129696039C3927DC9D39A2FADEBB24D67B1CD74E L_0;
		L_0 = SharedStatic_1_GetOrCreate_TisTableEntry_tC168732547D3913880E602CC895BCCDAED550A04_m308596CEEBCC9D147B8A49219CBFE11474468B2F(0, SharedStatic_1_GetOrCreate_TisTableEntry_tC168732547D3913880E602CC895BCCDAED550A04_m308596CEEBCC9D147B8A49219CBFE11474468B2F_RuntimeMethod_var);
		((TableEntry_tC168732547D3913880E602CC895BCCDAED550A04_StaticFields*)il2cpp_codegen_static_fields_for(TableEntry_tC168732547D3913880E602CC895BCCDAED550A04_il2cpp_TypeInfo_var))->___Ref_0 = L_0;
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
// System.Void Unity.Collections.AllocatorManager/Managed::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Managed__cctor_m8AABCF5C149993D7017CDD63D9B18F3AAC7AEB97 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Managed_t7CB1B315B8E0E50EE8A2993B3E4CDF35E2B4909D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TryFunctionU5BU5D_tDCC5B9036B1E592E072B5ED36243CCA274E75FF5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static TryFunction[] TryFunctionDelegates = new TryFunction[kMaxNumCustomAllocator];
		TryFunctionU5BU5D_tDCC5B9036B1E592E072B5ED36243CCA274E75FF5* L_0 = (TryFunctionU5BU5D_tDCC5B9036B1E592E072B5ED36243CCA274E75FF5*)(TryFunctionU5BU5D_tDCC5B9036B1E592E072B5ED36243CCA274E75FF5*)SZArrayNew(TryFunctionU5BU5D_tDCC5B9036B1E592E072B5ED36243CCA274E75FF5_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32768));
		((Managed_t7CB1B315B8E0E50EE8A2993B3E4CDF35E2B4909D_StaticFields*)il2cpp_codegen_static_fields_for(Managed_t7CB1B315B8E0E50EE8A2993B3E4CDF35E2B4909D_il2cpp_TypeInfo_var))->___TryFunctionDelegates_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Managed_t7CB1B315B8E0E50EE8A2993B3E4CDF35E2B4909D_StaticFields*)il2cpp_codegen_static_fields_for(Managed_t7CB1B315B8E0E50EE8A2993B3E4CDF35E2B4909D_il2cpp_TypeInfo_var))->___TryFunctionDelegates_0), (void*)L_0);
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
// System.Void Unity.Collections.CreatePropertyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatePropertyAttribute__ctor_mFD5BF090F42312F62534D903F2D804C19CE16264 (CreatePropertyAttribute_tE99286E9956A00FC302542DA09D73B4C52B6E19A* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void Unity.Collections.BurstCompatibleAttribute::set_GenericTypeArguments(System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompatibleAttribute_set_GenericTypeArguments_mBE8AE08E0824187C5B48F5132C73624CAB2C6906 (BurstCompatibleAttribute_t7DBA05449A9B9465DA64583FEC5E6FA3138D75BD* __this, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___value0, const RuntimeMethod* method) 
{
	{
		// public Type[] GenericTypeArguments { get; set; }
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_0 = ___value0;
		__this->___U3CGenericTypeArgumentsU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CGenericTypeArgumentsU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void Unity.Collections.BurstCompatibleAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompatibleAttribute__ctor_m6D43ED0B880EE6FCCCBC38B1A63DB493898DD3BA (BurstCompatibleAttribute_t7DBA05449A9B9465DA64583FEC5E6FA3138D75BD* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void Unity.Collections.NotBurstCompatibleAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotBurstCompatibleAttribute__ctor_mF89AC194CF3CC2F03A673D1FBDE969E1751CB827 (NotBurstCompatibleAttribute_t18678FEA8508936803CF26D0DFA77DA354F8721C* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.UInt32 Unity.Collections.CollectionHelper::Hash(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CollectionHelper_Hash_mBE065315254F12BC78A818A6D8302DF01C35795F (void* ___ptr0, int32_t ___bytes1, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	{
		// byte* str = (byte*)ptr;
		void* L_0 = ___ptr0;
		V_0 = (uint8_t*)L_0;
		// ulong hash = 5381;
		V_1 = ((int64_t)((int32_t)5381));
		goto IL_001e;
	}

IL_000b:
	{
		// ulong c = str[--bytes];
		uint8_t* L_1 = V_0;
		int32_t L_2 = ___bytes1;
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		___bytes1 = L_3;
		int32_t L_4 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, L_3)));
		V_2 = ((int64_t)(uint64_t)((uint32_t)L_4));
		// hash = ((hash << 5) + hash) + c;
		uint64_t L_5 = V_1;
		uint64_t L_6 = V_1;
		uint64_t L_7 = V_2;
		V_1 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)((int64_t)L_5<<5)), (int64_t)L_6)), (int64_t)L_7));
	}

IL_001e:
	{
		// while (bytes > 0)
		int32_t L_8 = ___bytes1;
		if ((((int32_t)L_8) > ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		// return (uint)hash;
		uint64_t L_9 = V_1;
		return ((int32_t)(uint32_t)L_9);
	}
}
// System.Boolean Unity.Collections.CollectionHelper::ShouldDeallocate(Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CollectionHelper_ShouldDeallocate_mEA0AEDB292CE3BD7BD84114E25C3BE396AF50CC2 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator0, const RuntimeMethod* method) 
{
	{
		// return allocator.ToAllocator > Allocator.None;
		int32_t L_0;
		L_0 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___allocator0), NULL);
		return (bool)((((int32_t)L_0) > ((int32_t)1))? 1 : 0);
	}
}
// System.Int32 Unity.Collections.CollectionHelper::AssumePositive(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CollectionHelper_AssumePositive_m33E244E5FD3318B35CD9D70504B34FC7D578DA43 (int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// return value;
		int32_t L_0 = ___value0;
		return L_0;
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
// System.Void* Unity.Collections.Memory/Unmanaged::Allocate(System.Int64,System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unmanaged_Allocate_mCD00DF6E249C3A43F8282A83AD3B16AEFFE81A14 (int64_t ___size0, int32_t ___align1, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator2, const RuntimeMethod* method) 
{
	{
		// return Array.Resize(null, 0, 1, allocator, size, align);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___allocator2;
		int64_t L_1 = ___size0;
		int32_t L_2 = ___align1;
		void* L_3;
		L_3 = Array_Resize_mBE6A0C00B7C84F53DEA8A458C39887B0D0559672((void*)((uintptr_t)0), ((int64_t)0), ((int64_t)1), L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Void Unity.Collections.Memory/Unmanaged::Free(System.Void*,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_m18CD64E2094F71CB38499DC51A55104AE42A464A (void* ___pointer0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method) 
{
	{
		// if (pointer == null)
		void* L_0 = ___pointer0;
		if ((!(((uintptr_t)L_0) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_0006;
		}
	}
	{
		// return;
		return;
	}

IL_0006:
	{
		// Array.Resize(pointer, 1, 0, allocator, 1, 1);
		void* L_1 = ___pointer0;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = ___allocator1;
		void* L_3;
		L_3 = Array_Resize_mBE6A0C00B7C84F53DEA8A458C39887B0D0559672(L_1, ((int64_t)1), ((int64_t)0), L_2, ((int64_t)1), 1, NULL);
		// }
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
// System.Boolean Unity.Collections.Memory/Unmanaged/Array::IsCustom(Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_IsCustom_m3B23BD5B6E2CD65EE4BAF3A60305F67D45B64B3F (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator0, const RuntimeMethod* method) 
{
	{
		// return (int) allocator.Index >= AllocatorManager.FirstUserIndex;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___allocator0;
		uint16_t L_1 = L_0.___Index_0;
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)((int32_t)64)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void* Unity.Collections.Memory/Unmanaged/Array::CustomResize(System.Void*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle,System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Array_CustomResize_mDB54012F437319EB6FB861B8D67256AB5A9B20D5 (void* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, int64_t ___size4, int32_t ___align5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// AllocatorManager.Block block = default;
		il2cpp_codegen_initobj((&V_0), sizeof(Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3));
		// block.Range.Allocator = allocator;
		Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC* L_0 = (&(&V_0)->___Range_0);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_1 = ___allocator3;
		L_0->___Allocator_2 = L_1;
		// block.Range.Items = (int)newCount;
		Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC* L_2 = (&(&V_0)->___Range_0);
		int64_t L_3 = ___newCount2;
		L_2->___Items_1 = ((int32_t)L_3);
		// block.Range.Pointer = (IntPtr)oldPointer;
		Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC* L_4 = (&(&V_0)->___Range_0);
		void* L_5 = ___oldPointer0;
		intptr_t L_6;
		L_6 = IntPtr_op_Explicit_m04BEF6277775C13DD8A986812AAA3FCEC32DCCBE(L_5, NULL);
		L_4->___Pointer_0 = L_6;
		// block.BytesPerItem = (int)size;
		int64_t L_7 = ___size4;
		(&V_0)->___BytesPerItem_1 = ((int32_t)L_7);
		// block.Alignment = align;
		int32_t L_8 = ___align5;
		Block_set_Alignment_m4E74D90E827C5F58B3EBE91B2F5B097388E0500F((&V_0), L_8, NULL);
		// block.AllocatedItems = (int)oldCount;
		int64_t L_9 = ___oldCount1;
		(&V_0)->___AllocatedItems_2 = ((int32_t)L_9);
		// var error = AllocatorManager.Try(ref block);
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = AllocatorManager_Try_m80548C54CFCD1C94C60CDB8825D23106947A9125((&V_0), NULL);
		// return (void*)block.Range.Pointer;
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 L_11 = V_0;
		Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC L_12 = L_11.___Range_0;
		intptr_t L_13 = L_12.___Pointer_0;
		void* L_14;
		L_14 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_13, NULL);
		return L_14;
	}
}
// System.Void* Unity.Collections.Memory/Unmanaged/Array::Resize(System.Void*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle,System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Array_Resize_mBE6A0C00B7C84F53DEA8A458C39887B0D0559672 (void* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, int64_t ___size4, int32_t ___align5, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	void* V_1 = NULL;
	int64_t V_2 = 0;
	{
		// var alignment = math.max(JobsUtility.CacheLineSize, align);
		int32_t L_0 = ___align5;
		int32_t L_1;
		L_1 = math_max_m5DA4D66E3CC78BDFF8218BA039D6EBB1AC223826_inline(((int32_t)64), L_0, NULL);
		V_0 = L_1;
		// if (IsCustom(allocator))
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = ___allocator3;
		bool L_3;
		L_3 = Array_IsCustom_m3B23BD5B6E2CD65EE4BAF3A60305F67D45B64B3F(L_2, NULL);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// return CustomResize(oldPointer, oldCount, newCount, allocator, size, alignment);
		void* L_4 = ___oldPointer0;
		int64_t L_5 = ___oldCount1;
		int64_t L_6 = ___newCount2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7 = ___allocator3;
		int64_t L_8 = ___size4;
		int32_t L_9 = V_0;
		void* L_10;
		L_10 = Array_CustomResize_mDB54012F437319EB6FB861B8D67256AB5A9B20D5(L_4, L_5, L_6, L_7, L_8, L_9, NULL);
		return L_10;
	}

IL_001f:
	{
		// void* newPointer = default;
		il2cpp_codegen_initobj((&V_1), sizeof(void*));
		// if (newCount > 0)
		int64_t L_11 = ___newCount2;
		if ((((int64_t)L_11) <= ((int64_t)((int64_t)0))))
		{
			goto IL_0056;
		}
	}
	{
		// long bytesToAllocate = newCount * size;
		int64_t L_12 = ___newCount2;
		int64_t L_13 = ___size4;
		// newPointer = UnsafeUtility.Malloc(bytesToAllocate, alignment, allocator.ToAllocator);
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___allocator3), NULL);
		void* L_16;
		L_16 = UnsafeUtility_Malloc_mA79BF3D6FC86F67D4354A6C8481DB0F13FD6777B(((int64_t)il2cpp_codegen_multiply(L_12, L_13)), L_14, L_15, NULL);
		V_1 = L_16;
		// if (oldCount > 0)
		int64_t L_17 = ___oldCount1;
		if ((((int64_t)L_17) <= ((int64_t)((int64_t)0))))
		{
			goto IL_0056;
		}
	}
	{
		// long count = math.min(oldCount, newCount);
		int64_t L_18 = ___oldCount1;
		int64_t L_19 = ___newCount2;
		int64_t L_20;
		L_20 = math_min_m15E98E776355732C47A31FC18FB408EF53AB86D5_inline(L_18, L_19, NULL);
		// long bytesToCopy = count * size;
		int64_t L_21 = ___size4;
		V_2 = ((int64_t)il2cpp_codegen_multiply(L_20, L_21));
		// UnsafeUtility.MemCpy(newPointer, oldPointer, bytesToCopy);
		void* L_22 = V_1;
		void* L_23 = ___oldPointer0;
		int64_t L_24 = V_2;
		UnsafeUtility_MemCpy_m019E657B952C27F705607F0F3D371EEE526B716B(L_22, L_23, L_24, NULL);
	}

IL_0056:
	{
		// if (oldCount > 0)
		int64_t L_25 = ___oldCount1;
		if ((((int64_t)L_25) <= ((int64_t)((int64_t)0))))
		{
			goto IL_0068;
		}
	}
	{
		// UnsafeUtility.Free(oldPointer, allocator.ToAllocator);
		void* L_26 = ___oldPointer0;
		int32_t L_27;
		L_27 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___allocator3), NULL);
		UnsafeUtility_Free_mA951B190894E1755DE821FCBD35F7AD9FB388F18(L_26, L_27, NULL);
	}

IL_0068:
	{
		// return newPointer;
		void* L_28 = V_1;
		return L_28;
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
// System.Void Unity.Collections.Spinner::Lock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spinner_Lock_mF38DA7980552D7B8E60444A1B64ADF440D3DFAA7 (Spinner_t9606E334089E448EA313C31DC5EFC9345A58BCEB* __this, const RuntimeMethod* method) 
{

IL_0000:
	{
		// while (0 != Interlocked.CompareExchange(ref m_value, 1, 0))
		int32_t* L_0 = (&__this->___m_value_0);
		int32_t L_1;
		L_1 = Interlocked_CompareExchange_m1B1A89142CF77793A6B396019B98265E6EE306FA(L_0, 1, 0, NULL);
		if (L_1)
		{
			goto IL_0000;
		}
	}
	{
		// Interlocked.MemoryBarrier();
		Interlocked_MemoryBarrier_m4628E20A5D3E2546755C7C75439FCB11239EE61C(NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Spinner_Lock_mF38DA7980552D7B8E60444A1B64ADF440D3DFAA7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Spinner_t9606E334089E448EA313C31DC5EFC9345A58BCEB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Spinner_t9606E334089E448EA313C31DC5EFC9345A58BCEB*>(__this + _offset);
	Spinner_Lock_mF38DA7980552D7B8E60444A1B64ADF440D3DFAA7(_thisAdjusted, method);
}
// System.Void Unity.Collections.Spinner::Unlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spinner_Unlock_m1664CFC96DCA3A7B36092F61C9E34624C497EB1A (Spinner_t9606E334089E448EA313C31DC5EFC9345A58BCEB* __this, const RuntimeMethod* method) 
{
	{
		// Interlocked.MemoryBarrier();
		Interlocked_MemoryBarrier_m4628E20A5D3E2546755C7C75439FCB11239EE61C(NULL);
	}

IL_0005:
	{
		// while (1 != Interlocked.CompareExchange(ref m_value, 0, 1))
		int32_t* L_0 = (&__this->___m_value_0);
		int32_t L_1;
		L_1 = Interlocked_CompareExchange_m1B1A89142CF77793A6B396019B98265E6EE306FA(L_0, 0, 1, NULL);
		if ((!(((uint32_t)1) == ((uint32_t)L_1))))
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Spinner_Unlock_m1664CFC96DCA3A7B36092F61C9E34624C497EB1A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Spinner_t9606E334089E448EA313C31DC5EFC9345A58BCEB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Spinner_t9606E334089E448EA313C31DC5EFC9345A58BCEB*>(__this + _offset);
	Spinner_Unlock_m1664CFC96DCA3A7B36092F61C9E34624C497EB1A(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.Collections.RewindableAllocator
IL2CPP_EXTERN_C void RewindableAllocator_tB18F8ADC8F2EE36E1F51FCCCFF0AC093108EF254_marshal_pinvoke(const RewindableAllocator_tB18F8ADC8F2EE36E1F51FCCCFF0AC093108EF254& unmarshaled, RewindableAllocator_tB18F8ADC8F2EE36E1F51FCCCFF0AC093108EF254_marshaled_pinvoke& marshaled)
{
	marshaled.___m_spinner_0 = unmarshaled.___m_spinner_0;
	marshaled.___m_handle_1 = unmarshaled.___m_handle_1;
	marshaled.___m_block_2 = unmarshaled.___m_block_2;
	marshaled.___m_best_3 = unmarshaled.___m_best_3;
	marshaled.___m_last_4 = unmarshaled.___m_last_4;
	marshaled.___m_used_5 = unmarshaled.___m_used_5;
	marshaled.___m_enableBlockFree_6 = static_cast<int32_t>(unmarshaled.___m_enableBlockFree_6);
}
IL2CPP_EXTERN_C void RewindableAllocator_tB18F8ADC8F2EE36E1F51FCCCFF0AC093108EF254_marshal_pinvoke_back(const RewindableAllocator_tB18F8ADC8F2EE36E1F51FCCCFF0AC093108EF254_marshaled_pinvoke& marshaled, RewindableAllocator_tB18F8ADC8F2EE36E1F51FCCCFF0AC093108EF254& unmarshaled)
{
	Spinner_t9606E334089E448EA313C31DC5EFC9345A58BCEB unmarshaledm_spinner_temp_0;
	memset((&unmarshaledm_spinner_temp_0), 0, sizeof(unmarshaledm_spinner_temp_0));
	unmarshaledm_spinner_temp_0 = marshaled.___m_spinner_0;
	unmarshaled.___m_spinner_0 = unmarshaledm_spinner_temp_0;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 unmarshaledm_handle_temp_1;
	memset((&unmarshaledm_handle_temp_1), 0, sizeof(unmarshaledm_handle_temp_1));
	unmarshaledm_handle_temp_1 = marshaled.___m_handle_1;
	unmarshaled.___m_handle_1 = unmarshaledm_handle_temp_1;
	UnmanagedArray_1_t7A336330780E05C924BB57ED337DDD2A66701FAB unmarshaledm_block_temp_2;
	memset((&unmarshaledm_block_temp_2), 0, sizeof(unmarshaledm_block_temp_2));
	unmarshaledm_block_temp_2 = marshaled.___m_block_2;
	unmarshaled.___m_block_2 = unmarshaledm_block_temp_2;
	int32_t unmarshaledm_best_temp_3 = 0;
	unmarshaledm_best_temp_3 = marshaled.___m_best_3;
	unmarshaled.___m_best_3 = unmarshaledm_best_temp_3;
	int32_t unmarshaledm_last_temp_4 = 0;
	unmarshaledm_last_temp_4 = marshaled.___m_last_4;
	unmarshaled.___m_last_4 = unmarshaledm_last_temp_4;
	int32_t unmarshaledm_used_temp_5 = 0;
	unmarshaledm_used_temp_5 = marshaled.___m_used_5;
	unmarshaled.___m_used_5 = unmarshaledm_used_temp_5;
	bool unmarshaledm_enableBlockFree_temp_6 = false;
	unmarshaledm_enableBlockFree_temp_6 = static_cast<bool>(marshaled.___m_enableBlockFree_6);
	unmarshaled.___m_enableBlockFree_6 = unmarshaledm_enableBlockFree_temp_6;
}
// Conversion method for clean up from marshalling of: Unity.Collections.RewindableAllocator
IL2CPP_EXTERN_C void RewindableAllocator_tB18F8ADC8F2EE36E1F51FCCCFF0AC093108EF254_marshal_pinvoke_cleanup(RewindableAllocator_tB18F8ADC8F2EE36E1F51FCCCFF0AC093108EF254_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Collections.RewindableAllocator
IL2CPP_EXTERN_C void RewindableAllocator_tB18F8ADC8F2EE36E1F51FCCCFF0AC093108EF254_marshal_com(const RewindableAllocator_tB18F8ADC8F2EE36E1F51FCCCFF0AC093108EF254& unmarshaled, RewindableAllocator_tB18F8ADC8F2EE36E1F51FCCCFF0AC093108EF254_marshaled_com& marshaled)
{
	marshaled.___m_spinner_0 = unmarshaled.___m_spinner_0;
	marshaled.___m_handle_1 = unmarshaled.___m_handle_1;
	marshaled.___m_block_2 = unmarshaled.___m_block_2;
	marshaled.___m_best_3 = unmarshaled.___m_best_3;
	marshaled.___m_last_4 = unmarshaled.___m_last_4;
	marshaled.___m_used_5 = unmarshaled.___m_used_5;
	marshaled.___m_enableBlockFree_6 = static_cast<int32_t>(unmarshaled.___m_enableBlockFree_6);
}
IL2CPP_EXTERN_C void RewindableAllocator_tB18F8ADC8F2EE36E1F51FCCCFF0AC093108EF254_marshal_com_back(const RewindableAllocator_tB18F8ADC8F2EE36E1F51FCCCFF0AC093108EF254_marshaled_com& marshaled, RewindableAllocator_tB18F8ADC8F2EE36E1F51FCCCFF0AC093108EF254& unmarshaled)
{
	Spinner_t9606E334089E448EA313C31DC5EFC9345A58BCEB unmarshaledm_spinner_temp_0;
	memset((&unmarshaledm_spinner_temp_0), 0, sizeof(unmarshaledm_spinner_temp_0));
	unmarshaledm_spinner_temp_0 = marshaled.___m_spinner_0;
	unmarshaled.___m_spinner_0 = unmarshaledm_spinner_temp_0;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 unmarshaledm_handle_temp_1;
	memset((&unmarshaledm_handle_temp_1), 0, sizeof(unmarshaledm_handle_temp_1));
	unmarshaledm_handle_temp_1 = marshaled.___m_handle_1;
	unmarshaled.___m_handle_1 = unmarshaledm_handle_temp_1;
	UnmanagedArray_1_t7A336330780E05C924BB57ED337DDD2A66701FAB unmarshaledm_block_temp_2;
	memset((&unmarshaledm_block_temp_2), 0, sizeof(unmarshaledm_block_temp_2));
	unmarshaledm_block_temp_2 = marshaled.___m_block_2;
	unmarshaled.___m_block_2 = unmarshaledm_block_temp_2;
	int32_t unmarshaledm_best_temp_3 = 0;
	unmarshaledm_best_temp_3 = marshaled.___m_best_3;
	unmarshaled.___m_best_3 = unmarshaledm_best_temp_3;
	int32_t unmarshaledm_last_temp_4 = 0;
	unmarshaledm_last_temp_4 = marshaled.___m_last_4;
	unmarshaled.___m_last_4 = unmarshaledm_last_temp_4;
	int32_t unmarshaledm_used_temp_5 = 0;
	unmarshaledm_used_temp_5 = marshaled.___m_used_5;
	unmarshaled.___m_used_5 = unmarshaledm_used_temp_5;
	bool unmarshaledm_enableBlockFree_temp_6 = false;
	unmarshaledm_enableBlockFree_temp_6 = static_cast<bool>(marshaled.___m_enableBlockFree_6);
	unmarshaled.___m_enableBlockFree_6 = unmarshaledm_enableBlockFree_temp_6;
}
// Conversion method for clean up from marshalling of: Unity.Collections.RewindableAllocator
IL2CPP_EXTERN_C void RewindableAllocator_tB18F8ADC8F2EE36E1F51FCCCFF0AC093108EF254_marshal_com_cleanup(RewindableAllocator_tB18F8ADC8F2EE36E1F51FCCCFF0AC093108EF254_marshaled_com& marshaled)
{
}
extern "C" int32_t CDECL ReversePInvokeWrapper_RewindableAllocator_Try_mFA247929359660CC33023F374ED76B43812B9115(intptr_t ___state0, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	returnValue = RewindableAllocator_Try_mFA247929359660CC33023F374ED76B43812B9115(___state0, ___block1, NULL);

	return returnValue;
}
extern "C" int32_t CDECL ReversePInvokeWrapper_RewindableAllocator_TryU24BurstManaged_m9FC90FBCAB23681675E5FF0BBE59BB7D5058ED52(intptr_t ___state0, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	returnValue = RewindableAllocator_TryU24BurstManaged_m9FC90FBCAB23681675E5FF0BBE59BB7D5058ED52_inline(___state0, ___block1, NULL);

	return returnValue;
}
// System.Void Unity.Collections.RewindableAllocator::Rewind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewindableAllocator_Rewind_m8EB623F05C707C3AF52FF082A7C095FE3A1CE595 (RewindableAllocator_tB18F8ADC8F2EE36E1F51FCCCFF0AC093108EF254* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnmanagedArray_1_get_Item_mE315B3406730DD2D42AF15133B69737FF041A160_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (JobsUtility.IsExecutingJob)
		bool L_0;
		L_0 = JobsUtility_get_IsExecutingJob_mB23173CB1DAEECEB459A58E683D06055EECFCD47(NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// throw new InvalidOperationException("You cannot Rewind a RewindableAllocator from a Job.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0B09149353C3D49907DDBE06523B8B7635EFEADE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RewindableAllocator_Rewind_m8EB623F05C707C3AF52FF082A7C095FE3A1CE595_RuntimeMethod_var)));
	}

IL_0012:
	{
		// m_handle.Rewind(); // bump the allocator handle version, invalidate all dependents
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* L_2 = (&__this->___m_handle_1);
		AllocatorHandle_Rewind_mC0426BBD1E638878C33164F91AC3ADC66C850AC1(L_2, NULL);
		goto IL_0040;
	}

IL_001f:
	{
		// m_block[m_last--].Dispose();
		UnmanagedArray_1_t7A336330780E05C924BB57ED337DDD2A66701FAB* L_3 = (&__this->___m_block_2);
		int32_t L_4 = __this->___m_last_4;
		V_0 = L_4;
		int32_t L_5 = V_0;
		__this->___m_last_4 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		int32_t L_6 = V_0;
		MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* L_7;
		L_7 = UnmanagedArray_1_get_Item_mE315B3406730DD2D42AF15133B69737FF041A160(L_3, L_6, UnmanagedArray_1_get_Item_mE315B3406730DD2D42AF15133B69737FF041A160_RuntimeMethod_var);
		MemoryBlock_Dispose_mE0EAA3828B238B9A26EF6BB5CA7CB5EC592FBD6F(L_7, NULL);
	}

IL_0040:
	{
		// while (m_last > m_used) // *delete* all blocks we didn't even allocate from this time around.
		int32_t L_8 = __this->___m_last_4;
		int32_t L_9 = __this->___m_used_5;
		if ((((int32_t)L_8) > ((int32_t)L_9)))
		{
			goto IL_001f;
		}
	}
	{
		goto IL_0071;
	}

IL_0050:
	{
		// m_block[m_used--].Rewind();
		UnmanagedArray_1_t7A336330780E05C924BB57ED337DDD2A66701FAB* L_10 = (&__this->___m_block_2);
		int32_t L_11 = __this->___m_used_5;
		V_0 = L_11;
		int32_t L_12 = V_0;
		__this->___m_used_5 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		int32_t L_13 = V_0;
		MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* L_14;
		L_14 = UnmanagedArray_1_get_Item_mE315B3406730DD2D42AF15133B69737FF041A160(L_10, L_13, UnmanagedArray_1_get_Item_mE315B3406730DD2D42AF15133B69737FF041A160_RuntimeMethod_var);
		MemoryBlock_Rewind_m64C7EC463789D78802B8D27695AFFD37133E7069(L_14, NULL);
	}

IL_0071:
	{
		// while (m_used > 0) // simply *rewind* all blocks we used in this update, to avoid allocating again, every update.
		int32_t L_15 = __this->___m_used_5;
		if ((((int32_t)L_15) > ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		// m_block[0].Rewind();
		UnmanagedArray_1_t7A336330780E05C924BB57ED337DDD2A66701FAB* L_16 = (&__this->___m_block_2);
		MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* L_17;
		L_17 = UnmanagedArray_1_get_Item_mE315B3406730DD2D42AF15133B69737FF041A160(L_16, 0, UnmanagedArray_1_get_Item_mE315B3406730DD2D42AF15133B69737FF041A160_RuntimeMethod_var);
		MemoryBlock_Rewind_m64C7EC463789D78802B8D27695AFFD37133E7069(L_17, NULL);
		// m_best = 0;
		__this->___m_best_3 = 0;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void RewindableAllocator_Rewind_m8EB623F05C707C3AF52FF082A7C095FE3A1CE595_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RewindableAllocator_tB18F8ADC8F2EE36E1F51FCCCFF0AC093108EF254* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RewindableAllocator_tB18F8ADC8F2EE36E1F51FCCCFF0AC093108EF254*>(__this + _offset);
	RewindableAllocator_Rewind_m8EB623F05C707C3AF52FF082A7C095FE3A1CE595(_thisAdjusted, method);
}
// System.Void Unity.Collections.RewindableAllocator::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewindableAllocator_Dispose_mD873C81842DAEBF01369B8023805FF930C4C8A2F (RewindableAllocator_tB18F8ADC8F2EE36E1F51FCCCFF0AC093108EF254* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnmanagedArray_1_Dispose_m6633B12AACEBE579F9A33E39939490C0F9078F66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnmanagedArray_1_get_Item_mE315B3406730DD2D42AF15133B69737FF041A160_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (JobsUtility.IsExecutingJob)
		bool L_0;
		L_0 = JobsUtility_get_IsExecutingJob_mB23173CB1DAEECEB459A58E683D06055EECFCD47(NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// throw new InvalidOperationException("You cannot Dispose a RewindableAllocator from a Job.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral302B11189380770261D2D54C98E0C8E27DF7E27F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RewindableAllocator_Dispose_mD873C81842DAEBF01369B8023805FF930C4C8A2F_RuntimeMethod_var)));
	}

IL_0012:
	{
		// m_used = 0; // so that we delete all blocks in Rewind() on the next line
		__this->___m_used_5 = 0;
		// Rewind();
		RewindableAllocator_Rewind_m8EB623F05C707C3AF52FF082A7C095FE3A1CE595(__this, NULL);
		// m_block[0].Dispose();
		UnmanagedArray_1_t7A336330780E05C924BB57ED337DDD2A66701FAB* L_2 = (&__this->___m_block_2);
		MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* L_3;
		L_3 = UnmanagedArray_1_get_Item_mE315B3406730DD2D42AF15133B69737FF041A160(L_2, 0, UnmanagedArray_1_get_Item_mE315B3406730DD2D42AF15133B69737FF041A160_RuntimeMethod_var);
		MemoryBlock_Dispose_mE0EAA3828B238B9A26EF6BB5CA7CB5EC592FBD6F(L_3, NULL);
		// m_block.Dispose();
		UnmanagedArray_1_t7A336330780E05C924BB57ED337DDD2A66701FAB* L_4 = (&__this->___m_block_2);
		UnmanagedArray_1_Dispose_m6633B12AACEBE579F9A33E39939490C0F9078F66(L_4, UnmanagedArray_1_Dispose_m6633B12AACEBE579F9A33E39939490C0F9078F66_RuntimeMethod_var);
		// m_last = m_used = m_best = 0;
		int32_t L_5 = 0;
		V_0 = L_5;
		__this->___m_best_3 = L_5;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		V_0 = L_7;
		__this->___m_used_5 = L_7;
		int32_t L_8 = V_0;
		__this->___m_last_4 = L_8;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void RewindableAllocator_Dispose_mD873C81842DAEBF01369B8023805FF930C4C8A2F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RewindableAllocator_tB18F8ADC8F2EE36E1F51FCCCFF0AC093108EF254* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RewindableAllocator_tB18F8ADC8F2EE36E1F51FCCCFF0AC093108EF254*>(__this + _offset);
	RewindableAllocator_Dispose_mD873C81842DAEBF01369B8023805FF930C4C8A2F(_thisAdjusted, method);
}
// System.Int32 Unity.Collections.RewindableAllocator::Try(Unity.Collections.AllocatorManager/Block&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RewindableAllocator_Try_m6C020E9D4D72801E38775286491991C3FCE064ED (RewindableAllocator_tB18F8ADC8F2EE36E1F51FCCCFF0AC093108EF254* __this, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnmanagedArray_1_get_Item_mE315B3406730DD2D42AF15133B69737FF041A160_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	RewindableAllocator_tB18F8ADC8F2EE36E1F51FCCCFF0AC093108EF254* G_B7_0 = NULL;
	RewindableAllocator_tB18F8ADC8F2EE36E1F51FCCCFF0AC093108EF254* G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	RewindableAllocator_tB18F8ADC8F2EE36E1F51FCCCFF0AC093108EF254* G_B8_1 = NULL;
	{
		// if (block.Range.Pointer == IntPtr.Zero)
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_0 = ___block0;
		Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC* L_1 = (&L_0->___Range_0);
		intptr_t L_2 = L_1->___Pointer_0;
		bool L_3;
		L_3 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_2, (0), NULL);
		if (!L_3)
		{
			goto IL_0108;
		}
	}
	{
		// var error = m_block[m_best].TryAllocate(ref block);
		UnmanagedArray_1_t7A336330780E05C924BB57ED337DDD2A66701FAB* L_4 = (&__this->___m_block_2);
		int32_t L_5 = __this->___m_best_3;
		MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* L_6;
		L_6 = UnmanagedArray_1_get_Item_mE315B3406730DD2D42AF15133B69737FF041A160(L_4, L_5, UnmanagedArray_1_get_Item_mE315B3406730DD2D42AF15133B69737FF041A160_RuntimeMethod_var);
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_7 = ___block0;
		int32_t L_8;
		L_8 = MemoryBlock_TryAllocate_m34CC70E419486D5B1C90E7BF4A6762BE3D130F10(L_6, L_7, NULL);
		V_0 = L_8;
		// if (error == AllocatorManager.kErrorNone)
		int32_t L_9 = V_0;
		if (L_9)
		{
			goto IL_0037;
		}
	}
	{
		// return error;
		int32_t L_10 = V_0;
		return L_10;
	}

IL_0037:
	{
		// m_spinner.Lock();
		Spinner_t9606E334089E448EA313C31DC5EFC9345A58BCEB* L_11 = (&__this->___m_spinner_0);
		Spinner_Lock_mF38DA7980552D7B8E60444A1B64ADF440D3DFAA7(L_11, NULL);
		// for (best = 0; best <= m_last; ++best)
		V_1 = 0;
		goto IL_008c;
	}

IL_0046:
	{
		// error = m_block[best].TryAllocate(ref block);
		UnmanagedArray_1_t7A336330780E05C924BB57ED337DDD2A66701FAB* L_12 = (&__this->___m_block_2);
		int32_t L_13 = V_1;
		MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* L_14;
		L_14 = UnmanagedArray_1_get_Item_mE315B3406730DD2D42AF15133B69737FF041A160(L_12, L_13, UnmanagedArray_1_get_Item_mE315B3406730DD2D42AF15133B69737FF041A160_RuntimeMethod_var);
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_15 = ___block0;
		int32_t L_16;
		L_16 = MemoryBlock_TryAllocate_m34CC70E419486D5B1C90E7BF4A6762BE3D130F10(L_14, L_15, NULL);
		V_0 = L_16;
		// if (error == AllocatorManager.kErrorNone)
		int32_t L_17 = V_0;
		if (L_17)
		{
			goto IL_0088;
		}
	}
	{
		// m_used = best > m_used ? best : m_used;
		int32_t L_18 = V_1;
		int32_t L_19 = __this->___m_used_5;
		G_B6_0 = __this;
		if ((((int32_t)L_18) > ((int32_t)L_19)))
		{
			G_B7_0 = __this;
			goto IL_006e;
		}
	}
	{
		int32_t L_20 = __this->___m_used_5;
		G_B8_0 = L_20;
		G_B8_1 = G_B6_0;
		goto IL_006f;
	}

IL_006e:
	{
		int32_t L_21 = V_1;
		G_B8_0 = L_21;
		G_B8_1 = G_B7_0;
	}

IL_006f:
	{
		G_B8_1->___m_used_5 = G_B8_0;
		// m_best = best;
		int32_t L_22 = V_1;
		__this->___m_best_3 = L_22;
		// m_spinner.Unlock();
		Spinner_t9606E334089E448EA313C31DC5EFC9345A58BCEB* L_23 = (&__this->___m_spinner_0);
		Spinner_Unlock_m1664CFC96DCA3A7B36092F61C9E34624C497EB1A(L_23, NULL);
		// return error;
		int32_t L_24 = V_0;
		return L_24;
	}

IL_0088:
	{
		// for (best = 0; best <= m_last; ++best)
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_008c:
	{
		// for (best = 0; best <= m_last; ++best)
		int32_t L_26 = V_1;
		int32_t L_27 = __this->___m_last_4;
		if ((((int32_t)L_26) <= ((int32_t)L_27)))
		{
			goto IL_0046;
		}
	}
	{
		// var bytes = math.max(m_block[0].m_bytes << best, math.ceilpow2(block.Bytes)); // if user suddenly asks for 1GB, skip smaller sizes
		UnmanagedArray_1_t7A336330780E05C924BB57ED337DDD2A66701FAB* L_28 = (&__this->___m_block_2);
		MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* L_29;
		L_29 = UnmanagedArray_1_get_Item_mE315B3406730DD2D42AF15133B69737FF041A160(L_28, 0, UnmanagedArray_1_get_Item_mE315B3406730DD2D42AF15133B69737FF041A160_RuntimeMethod_var);
		int64_t L_30 = L_29->___m_bytes_1;
		int32_t L_31 = V_1;
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_32 = ___block0;
		int64_t L_33;
		L_33 = Block_get_Bytes_m4BB90CD1C72FC56C573BE09951BF1CA68E8BD7D7(L_32, NULL);
		int64_t L_34;
		L_34 = math_ceilpow2_m0BAC2B7C7BA2E1E9504697CC4D4D514A0924F95F_inline(L_33, NULL);
		int64_t L_35;
		L_35 = math_max_m12316F7EB8EFE05E444EC4167FD2C640414166F6_inline(((int64_t)(L_30<<((int32_t)(L_31&((int32_t)63))))), L_34, NULL);
		V_2 = L_35;
		// m_block[best] = new MemoryBlock(bytes);
		UnmanagedArray_1_t7A336330780E05C924BB57ED337DDD2A66701FAB* L_36 = (&__this->___m_block_2);
		int32_t L_37 = V_1;
		MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* L_38;
		L_38 = UnmanagedArray_1_get_Item_mE315B3406730DD2D42AF15133B69737FF041A160(L_36, L_37, UnmanagedArray_1_get_Item_mE315B3406730DD2D42AF15133B69737FF041A160_RuntimeMethod_var);
		int64_t L_39 = V_2;
		MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84 L_40;
		memset((&L_40), 0, sizeof(L_40));
		MemoryBlock__ctor_m0DEC878B6827C0B400BE1C00CA37C2F8F1C31D7F((&L_40), L_39, /*hidden argument*/NULL);
		*(MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84*)L_38 = L_40;
		// error = m_block[best].TryAllocate(ref block);
		UnmanagedArray_1_t7A336330780E05C924BB57ED337DDD2A66701FAB* L_41 = (&__this->___m_block_2);
		int32_t L_42 = V_1;
		MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* L_43;
		L_43 = UnmanagedArray_1_get_Item_mE315B3406730DD2D42AF15133B69737FF041A160(L_41, L_42, UnmanagedArray_1_get_Item_mE315B3406730DD2D42AF15133B69737FF041A160_RuntimeMethod_var);
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_44 = ___block0;
		int32_t L_45;
		L_45 = MemoryBlock_TryAllocate_m34CC70E419486D5B1C90E7BF4A6762BE3D130F10(L_43, L_44, NULL);
		V_0 = L_45;
		// m_best = best;
		int32_t L_46 = V_1;
		__this->___m_best_3 = L_46;
		// m_used = best;
		int32_t L_47 = V_1;
		__this->___m_used_5 = L_47;
		// m_last = best;
		int32_t L_48 = V_1;
		__this->___m_last_4 = L_48;
		// m_spinner.Unlock();
		Spinner_t9606E334089E448EA313C31DC5EFC9345A58BCEB* L_49 = (&__this->___m_spinner_0);
		Spinner_Unlock_m1664CFC96DCA3A7B36092F61C9E34624C497EB1A(L_49, NULL);
		// return error;
		int32_t L_50 = V_0;
		return L_50;
	}

IL_0108:
	{
		// if (block.Range.Items == 0)
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_51 = ___block0;
		Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC* L_52 = (&L_51->___Range_0);
		int32_t L_53 = L_52->___Items_1;
		if (L_53)
		{
			goto IL_018b;
		}
	}
	{
		// if (m_enableBlockFree)
		bool L_54 = __this->___m_enableBlockFree_6;
		if (!L_54)
		{
			goto IL_0189;
		}
	}
	{
		// m_spinner.Lock();
		Spinner_t9606E334089E448EA313C31DC5EFC9345A58BCEB* L_55 = (&__this->___m_spinner_0);
		Spinner_Lock_mF38DA7980552D7B8E60444A1B64ADF440D3DFAA7(L_55, NULL);
		// if (m_block[m_best].Contains(block.Range.Pointer))
		UnmanagedArray_1_t7A336330780E05C924BB57ED337DDD2A66701FAB* L_56 = (&__this->___m_block_2);
		int32_t L_57 = __this->___m_best_3;
		MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* L_58;
		L_58 = UnmanagedArray_1_get_Item_mE315B3406730DD2D42AF15133B69737FF041A160(L_56, L_57, UnmanagedArray_1_get_Item_mE315B3406730DD2D42AF15133B69737FF041A160_RuntimeMethod_var);
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_59 = ___block0;
		Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC* L_60 = (&L_59->___Range_0);
		intptr_t L_61 = L_60->___Pointer_0;
		bool L_62;
		L_62 = MemoryBlock_Contains_m2F035A4F1F9063B42ACB1B590C4EFD1741E39CEC(L_58, L_61, NULL);
		if (!L_62)
		{
			goto IL_017e;
		}
	}
	{
		// if (0 == Interlocked.Decrement(ref m_block[m_best].m_allocations))
		UnmanagedArray_1_t7A336330780E05C924BB57ED337DDD2A66701FAB* L_63 = (&__this->___m_block_2);
		int32_t L_64 = __this->___m_best_3;
		MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* L_65;
		L_65 = UnmanagedArray_1_get_Item_mE315B3406730DD2D42AF15133B69737FF041A160(L_63, L_64, UnmanagedArray_1_get_Item_mE315B3406730DD2D42AF15133B69737FF041A160_RuntimeMethod_var);
		int64_t* L_66 = (&L_65->___m_allocations_3);
		int64_t L_67;
		L_67 = Interlocked_Decrement_mC1A06AF8FBCFBF498585006F437BEC8003BD4AB5(L_66, NULL);
		if (L_67)
		{
			goto IL_017e;
		}
	}
	{
		// m_block[m_best].Rewind();
		UnmanagedArray_1_t7A336330780E05C924BB57ED337DDD2A66701FAB* L_68 = (&__this->___m_block_2);
		int32_t L_69 = __this->___m_best_3;
		MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* L_70;
		L_70 = UnmanagedArray_1_get_Item_mE315B3406730DD2D42AF15133B69737FF041A160(L_68, L_69, UnmanagedArray_1_get_Item_mE315B3406730DD2D42AF15133B69737FF041A160_RuntimeMethod_var);
		MemoryBlock_Rewind_m64C7EC463789D78802B8D27695AFFD37133E7069(L_70, NULL);
	}

IL_017e:
	{
		// m_spinner.Unlock();
		Spinner_t9606E334089E448EA313C31DC5EFC9345A58BCEB* L_71 = (&__this->___m_spinner_0);
		Spinner_Unlock_m1664CFC96DCA3A7B36092F61C9E34624C497EB1A(L_71, NULL);
	}

IL_0189:
	{
		// return 0; // we could check to see if the pointer belongs to us, if we want to be strict about it.
		return 0;
	}

IL_018b:
	{
		// return -1;
		return (-1);
	}
}
IL2CPP_EXTERN_C  int32_t RewindableAllocator_Try_m6C020E9D4D72801E38775286491991C3FCE064ED_AdjustorThunk (RuntimeObject* __this, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block0, const RuntimeMethod* method)
{
	RewindableAllocator_tB18F8ADC8F2EE36E1F51FCCCFF0AC093108EF254* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RewindableAllocator_tB18F8ADC8F2EE36E1F51FCCCFF0AC093108EF254*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = RewindableAllocator_Try_m6C020E9D4D72801E38775286491991C3FCE064ED(_thisAdjusted, ___block0, method);
	return _returnValue;
}
// System.Int32 Unity.Collections.RewindableAllocator::Try(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RewindableAllocator_Try_mFA247929359660CC33023F374ED76B43812B9115 (intptr_t ___state0, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Try_00000732U24BurstDirectCall_t28B16B97A00C3DB614657AB878D0FF496041E1C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// unsafe { return ((RewindableAllocator*)state)->Try(ref block); }
		intptr_t L_0 = ___state0;
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_1 = ___block1;
		il2cpp_codegen_runtime_class_init_inline(Try_00000732U24BurstDirectCall_t28B16B97A00C3DB614657AB878D0FF496041E1C0_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Try_00000732U24BurstDirectCall_Invoke_mE3FD6C631A6D1591113B46B9BAA9B3A7B973C703(L_0, L_1, NULL);
		return L_2;
	}
}
// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.RewindableAllocator::get_Handle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 RewindableAllocator_get_Handle_mF81EDA2102485C46965AAB56347E8F64FE551D9E (RewindableAllocator_tB18F8ADC8F2EE36E1F51FCCCFF0AC093108EF254* __this, const RuntimeMethod* method) 
{
	{
		// public AllocatorManager.AllocatorHandle Handle { get { return m_handle; } set { m_handle = value; } }
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = __this->___m_handle_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 RewindableAllocator_get_Handle_mF81EDA2102485C46965AAB56347E8F64FE551D9E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RewindableAllocator_tB18F8ADC8F2EE36E1F51FCCCFF0AC093108EF254* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RewindableAllocator_tB18F8ADC8F2EE36E1F51FCCCFF0AC093108EF254*>(__this + _offset);
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 _returnValue;
	_returnValue = RewindableAllocator_get_Handle_mF81EDA2102485C46965AAB56347E8F64FE551D9E_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 Unity.Collections.RewindableAllocator::Try$BurstManaged(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RewindableAllocator_TryU24BurstManaged_m9FC90FBCAB23681675E5FF0BBE59BB7D5058ED52 (intptr_t ___state0, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block1, const RuntimeMethod* method) 
{
	{
		// unsafe { return ((RewindableAllocator*)state)->Try(ref block); }
		intptr_t L_0 = ___state0;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_0, NULL);
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_2 = ___block1;
		int32_t L_3;
		L_3 = RewindableAllocator_Try_m6C020E9D4D72801E38775286491991C3FCE064ED((RewindableAllocator_tB18F8ADC8F2EE36E1F51FCCCFF0AC093108EF254*)L_1, L_2, NULL);
		return L_3;
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
// System.Void Unity.Collections.RewindableAllocator/MemoryBlock::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryBlock__ctor_m0DEC878B6827C0B400BE1C00CA37C2F8F1C31D7F (MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* __this, int64_t ___bytes0, const RuntimeMethod* method) 
{
	{
		// m_pointer = (byte*)Memory.Unmanaged.Allocate(bytes, kMaximumAlignment, Allocator.Persistent);
		int64_t L_0 = ___bytes0;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_1;
		L_1 = AllocatorHandle_op_Implicit_m784E54E7FB5C2C06F5A0A812D4DFBDCE01395CF3(4, NULL);
		void* L_2;
		L_2 = Unmanaged_Allocate_mCD00DF6E249C3A43F8282A83AD3B16AEFFE81A14(L_0, ((int32_t)16384), L_1, NULL);
		__this->___m_pointer_0 = (uint8_t*)L_2;
		// m_bytes = bytes;
		int64_t L_3 = ___bytes0;
		__this->___m_bytes_1 = L_3;
		// m_current = 0;
		__this->___m_current_2 = ((int64_t)0);
		// m_allocations = 0;
		__this->___m_allocations_3 = ((int64_t)0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void MemoryBlock__ctor_m0DEC878B6827C0B400BE1C00CA37C2F8F1C31D7F_AdjustorThunk (RuntimeObject* __this, int64_t ___bytes0, const RuntimeMethod* method)
{
	MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84*>(__this + _offset);
	MemoryBlock__ctor_m0DEC878B6827C0B400BE1C00CA37C2F8F1C31D7F(_thisAdjusted, ___bytes0, method);
}
// System.Void Unity.Collections.RewindableAllocator/MemoryBlock::Rewind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryBlock_Rewind_m64C7EC463789D78802B8D27695AFFD37133E7069 (MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* __this, const RuntimeMethod* method) 
{
	{
		// m_current = 0;
		__this->___m_current_2 = ((int64_t)0);
		// m_allocations = 0;
		__this->___m_allocations_3 = ((int64_t)0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void MemoryBlock_Rewind_m64C7EC463789D78802B8D27695AFFD37133E7069_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84*>(__this + _offset);
	MemoryBlock_Rewind_m64C7EC463789D78802B8D27695AFFD37133E7069(_thisAdjusted, method);
}
// System.Void Unity.Collections.RewindableAllocator/MemoryBlock::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryBlock_Dispose_mE0EAA3828B238B9A26EF6BB5CA7CB5EC592FBD6F (MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA94227A91767A544A21D2C393D318C5F0C926819_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Memory.Unmanaged.Free(m_pointer, Allocator.Persistent);
		uint8_t* L_0 = __this->___m_pointer_0;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_1;
		L_1 = AllocatorHandle_op_Implicit_m784E54E7FB5C2C06F5A0A812D4DFBDCE01395CF3(4, NULL);
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA94227A91767A544A21D2C393D318C5F0C926819(L_0, L_1, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA94227A91767A544A21D2C393D318C5F0C926819_RuntimeMethod_var);
		// m_pointer = null;
		__this->___m_pointer_0 = (uint8_t*)((uintptr_t)0);
		// m_bytes = 0;
		__this->___m_bytes_1 = ((int64_t)0);
		// m_current = 0;
		__this->___m_current_2 = ((int64_t)0);
		// m_allocations = 0;
		__this->___m_allocations_3 = ((int64_t)0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void MemoryBlock_Dispose_mE0EAA3828B238B9A26EF6BB5CA7CB5EC592FBD6F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84*>(__this + _offset);
	MemoryBlock_Dispose_mE0EAA3828B238B9A26EF6BB5CA7CB5EC592FBD6F(_thisAdjusted, method);
}
// System.Int32 Unity.Collections.RewindableAllocator/MemoryBlock::TryAllocate(Unity.Collections.AllocatorManager/Block&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoryBlock_TryAllocate_m34CC70E419486D5B1C90E7BF4A6762BE3D130F10 (MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* __this, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int64_t V_3 = 0;
	int64_t V_4 = 0;
	int64_t V_5 = 0;
	int64_t V_6 = 0;
	int64_t V_7 = 0;
	int64_t V_8 = 0;
	int32_t G_B3_0 = 0;
	{
		// var alignment = math.max(JobsUtility.CacheLineSize, block.Alignment);
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_0 = ___block0;
		int32_t L_1;
		L_1 = Block_get_Alignment_mC2388F87008B204A333664B9323BD38AA20FD633(L_0, NULL);
		int32_t L_2;
		L_2 = math_max_m5DA4D66E3CC78BDFF8218BA039D6EBB1AC223826_inline(((int32_t)64), L_1, NULL);
		V_0 = L_2;
		// var extra = alignment != JobsUtility.CacheLineSize ? 1 : 0;
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)64)))))
		{
			goto IL_0016;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 1;
	}

IL_0017:
	{
		V_1 = G_B3_0;
		// var cachelineMask = JobsUtility.CacheLineSize - 1;
		V_2 = ((int32_t)63);
		// if (extra == 1)
		int32_t L_4 = V_1;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0026;
		}
	}
	{
		// alignment = (alignment + cachelineMask) & ~cachelineMask;
		int32_t L_5 = V_0;
		int32_t L_6 = V_2;
		int32_t L_7 = V_2;
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_5, L_6))&((~L_7))));
	}

IL_0026:
	{
		// var mask = alignment - 1L;
		int32_t L_8 = V_0;
		V_3 = ((int64_t)il2cpp_codegen_subtract(((int64_t)L_8), ((int64_t)1)));
		// var size = (block.Bytes + extra * alignment + mask) & ~mask;
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_9 = ___block0;
		int64_t L_10;
		L_10 = Block_get_Bytes_m4BB90CD1C72FC56C573BE09951BF1CA68E8BD7D7(L_9, NULL);
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		int64_t L_13 = V_3;
		int64_t L_14 = V_3;
		V_4 = ((int64_t)(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_10, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_11, L_12))))), L_13))&((~L_14))));
		// var readValue = Interlocked.Read(ref m_current);
		int64_t* L_15 = (&__this->___m_current_2);
		int64_t L_16;
		L_16 = Interlocked_Read_m646D69AAE03D57B78525D89642A5F951BA21CD28(L_15, NULL);
		V_5 = L_16;
	}

IL_004b:
	{
		// writtenValue = readValue + size;
		int64_t L_17 = V_5;
		int64_t L_18 = V_4;
		V_7 = ((int64_t)il2cpp_codegen_add(L_17, L_18));
		// begin = (readValue + mask) & ~mask;
		int64_t L_19 = V_5;
		int64_t L_20 = V_3;
		int64_t L_21 = V_3;
		V_8 = ((int64_t)(((int64_t)il2cpp_codegen_add(L_19, L_20))&((~L_21))));
		// if (begin + block.Bytes > m_bytes)
		int64_t L_22 = V_8;
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_23 = ___block0;
		int64_t L_24;
		L_24 = Block_get_Bytes_m4BB90CD1C72FC56C573BE09951BF1CA68E8BD7D7(L_23, NULL);
		int64_t L_25 = __this->___m_bytes_1;
		if ((((int64_t)((int64_t)il2cpp_codegen_add(L_22, L_24))) <= ((int64_t)L_25)))
		{
			goto IL_006e;
		}
	}
	{
		// return AllocatorManager.kErrorBufferOverflow;
		return (-1);
	}

IL_006e:
	{
		// oldReadValue = readValue;
		int64_t L_26 = V_5;
		V_6 = L_26;
		// readValue = Interlocked.CompareExchange(ref m_current, writtenValue, oldReadValue);
		int64_t* L_27 = (&__this->___m_current_2);
		int64_t L_28 = V_7;
		int64_t L_29 = V_6;
		int64_t L_30;
		L_30 = Interlocked_CompareExchange_mFB34911A0DA00E6C333589E541D422122CC1ED1B(L_27, L_28, L_29, NULL);
		V_5 = L_30;
		// } while (readValue != oldReadValue);
		int64_t L_31 = V_5;
		int64_t L_32 = V_6;
		if ((!(((uint64_t)L_31) == ((uint64_t)L_32))))
		{
			goto IL_004b;
		}
	}
	{
		// block.Range.Pointer = (IntPtr)(m_pointer + begin);
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_33 = ___block0;
		Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC* L_34 = (&L_33->___Range_0);
		uint8_t* L_35 = __this->___m_pointer_0;
		int64_t L_36 = V_8;
		intptr_t L_37;
		L_37 = IntPtr_op_Explicit_m04BEF6277775C13DD8A986812AAA3FCEC32DCCBE((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)L_36))), NULL);
		L_34->___Pointer_0 = L_37;
		// block.AllocatedItems = block.Range.Items;
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_38 = ___block0;
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_39 = ___block0;
		Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC* L_40 = (&L_39->___Range_0);
		int32_t L_41 = L_40->___Items_1;
		L_38->___AllocatedItems_2 = L_41;
		// Interlocked.Increment(ref m_allocations);
		int64_t* L_42 = (&__this->___m_allocations_3);
		int64_t L_43;
		L_43 = Interlocked_Increment_m92616415B56E5497A3D07233BB7C2D263AB3D5A0(L_42, NULL);
		// return AllocatorManager.kErrorNone;
		return 0;
	}
}
IL2CPP_EXTERN_C  int32_t MemoryBlock_TryAllocate_m34CC70E419486D5B1C90E7BF4A6762BE3D130F10_AdjustorThunk (RuntimeObject* __this, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block0, const RuntimeMethod* method)
{
	MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MemoryBlock_TryAllocate_m34CC70E419486D5B1C90E7BF4A6762BE3D130F10(_thisAdjusted, ___block0, method);
	return _returnValue;
}
// System.Boolean Unity.Collections.RewindableAllocator/MemoryBlock::Contains(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemoryBlock_Contains_m2F035A4F1F9063B42ACB1B590C4EFD1741E39CEC (MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* __this, intptr_t ___ptr0, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		// void* pointer = (void*)ptr;
		intptr_t L_0 = ___ptr0;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_0, NULL);
		V_0 = L_1;
		// return (pointer >= m_pointer) && (pointer < m_pointer + m_current);
		void* L_2 = V_0;
		uint8_t* L_3 = __this->___m_pointer_0;
		if ((!(((uintptr_t)L_2) >= ((uintptr_t)L_3))))
		{
			goto IL_0022;
		}
	}
	{
		void* L_4 = V_0;
		uint8_t* L_5 = __this->___m_pointer_0;
		int64_t L_6 = __this->___m_current_2;
		return (bool)((!(((uintptr_t)L_4) >= ((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)L_6))))))? 1 : 0);
	}

IL_0022:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool MemoryBlock_Contains_m2F035A4F1F9063B42ACB1B590C4EFD1741E39CEC_AdjustorThunk (RuntimeObject* __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84*>(__this + _offset);
	bool _returnValue;
	_returnValue = MemoryBlock_Contains_m2F035A4F1F9063B42ACB1B590C4EFD1741E39CEC(_thisAdjusted, ___ptr0, method);
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
int32_t Try_00000732U24PostfixBurstDelegate_Invoke_m1C934BE097DF23DB9E9F793A6C26D2DA877F525F_Multicast(Try_00000732U24PostfixBurstDelegate_t4BAC9734E19ADA2BDFE5826ED6C030FB1A743697* __this, intptr_t ___state0, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Try_00000732U24PostfixBurstDelegate_t4BAC9734E19ADA2BDFE5826ED6C030FB1A743697* currentDelegate = reinterpret_cast<Try_00000732U24PostfixBurstDelegate_t4BAC9734E19ADA2BDFE5826ED6C030FB1A743697*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___state0, ___block1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t Try_00000732U24PostfixBurstDelegate_Invoke_m1C934BE097DF23DB9E9F793A6C26D2DA877F525F_Open(Try_00000732U24PostfixBurstDelegate_t4BAC9734E19ADA2BDFE5826ED6C030FB1A743697* __this, intptr_t ___state0, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block1, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___state0, ___block1, method);
}
int32_t Try_00000732U24PostfixBurstDelegate_Invoke_m1C934BE097DF23DB9E9F793A6C26D2DA877F525F_OpenStaticInvoker(Try_00000732U24PostfixBurstDelegate_t4BAC9734E19ADA2BDFE5826ED6C030FB1A743697* __this, intptr_t ___state0, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, intptr_t, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* >::Invoke(__this->___method_ptr_0, method, NULL, ___state0, ___block1);
}
int32_t Try_00000732U24PostfixBurstDelegate_Invoke_m1C934BE097DF23DB9E9F793A6C26D2DA877F525F_ClosedStaticInvoker(Try_00000732U24PostfixBurstDelegate_t4BAC9734E19ADA2BDFE5826ED6C030FB1A743697* __this, intptr_t ___state0, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, intptr_t, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___state0, ___block1);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_Try_00000732U24PostfixBurstDelegate_t4BAC9734E19ADA2BDFE5826ED6C030FB1A743697 (Try_00000732U24PostfixBurstDelegate_t4BAC9734E19ADA2BDFE5826ED6C030FB1A743697* __this, intptr_t ___state0, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___state0, ___block1);

	return returnValue;
}
// System.Void Unity.Collections.RewindableAllocator/Unity.Collections.Try_00000732$PostfixBurstDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Try_00000732U24PostfixBurstDelegate__ctor_mA9DDABFD185DD18D65D21F1E2EA3818971C5F551 (Try_00000732U24PostfixBurstDelegate_t4BAC9734E19ADA2BDFE5826ED6C030FB1A743697* __this, RuntimeObject* p0, intptr_t p1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)p1);
	__this->___method_3 = p1;
	__this->___m_target_2 = p0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)p0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)p1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)p1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)p1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Try_00000732U24PostfixBurstDelegate_Invoke_m1C934BE097DF23DB9E9F793A6C26D2DA877F525F_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&Try_00000732U24PostfixBurstDelegate_Invoke_m1C934BE097DF23DB9E9F793A6C26D2DA877F525F_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Try_00000732U24PostfixBurstDelegate_Invoke_m1C934BE097DF23DB9E9F793A6C26D2DA877F525F_Open;
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
	__this->___extra_arg_5 = (intptr_t)&Try_00000732U24PostfixBurstDelegate_Invoke_m1C934BE097DF23DB9E9F793A6C26D2DA877F525F_Multicast;
}
// System.Int32 Unity.Collections.RewindableAllocator/Unity.Collections.Try_00000732$PostfixBurstDelegate::Invoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Try_00000732U24PostfixBurstDelegate_Invoke_m1C934BE097DF23DB9E9F793A6C26D2DA877F525F (Try_00000732U24PostfixBurstDelegate_t4BAC9734E19ADA2BDFE5826ED6C030FB1A743697* __this, intptr_t ___state0, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block1, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___state0, ___block1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Collections.RewindableAllocator/Unity.Collections.Try_00000732$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Try_00000732U24BurstDirectCall_GetFunctionPointerDiscard_m3B752E354E2828DD285C066CE3B5DEA90A3F6579 (intptr_t* p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Try_00000732U24BurstDirectCall_t28B16B97A00C3DB614657AB878D0FF496041E1C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Try_00000732U24BurstDirectCall_t28B16B97A00C3DB614657AB878D0FF496041E1C0_il2cpp_TypeInfo_var);
		intptr_t L_0 = ((Try_00000732U24BurstDirectCall_t28B16B97A00C3DB614657AB878D0FF496041E1C0_StaticFields*)il2cpp_codegen_static_fields_for(Try_00000732U24BurstDirectCall_t28B16B97A00C3DB614657AB878D0FF496041E1C0_il2cpp_TypeInfo_var))->___Pointer_0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Try_00000732U24BurstDirectCall_t28B16B97A00C3DB614657AB878D0FF496041E1C0_il2cpp_TypeInfo_var);
		intptr_t L_1 = ((Try_00000732U24BurstDirectCall_t28B16B97A00C3DB614657AB878D0FF496041E1C0_StaticFields*)il2cpp_codegen_static_fields_for(Try_00000732U24BurstDirectCall_t28B16B97A00C3DB614657AB878D0FF496041E1C0_il2cpp_TypeInfo_var))->___DeferredCompilation_1;
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		void* L_2;
		L_2 = BurstCompiler_GetILPPMethodFunctionPointer_m850347229EDA4058D224F885446BEE0137831BD0(L_1, NULL);
		((Try_00000732U24BurstDirectCall_t28B16B97A00C3DB614657AB878D0FF496041E1C0_StaticFields*)il2cpp_codegen_static_fields_for(Try_00000732U24BurstDirectCall_t28B16B97A00C3DB614657AB878D0FF496041E1C0_il2cpp_TypeInfo_var))->___Pointer_0 = (intptr_t)L_2;
	}

IL_0019:
	{
		intptr_t* L_3 = p0;
		il2cpp_codegen_runtime_class_init_inline(Try_00000732U24BurstDirectCall_t28B16B97A00C3DB614657AB878D0FF496041E1C0_il2cpp_TypeInfo_var);
		intptr_t L_4 = ((Try_00000732U24BurstDirectCall_t28B16B97A00C3DB614657AB878D0FF496041E1C0_StaticFields*)il2cpp_codegen_static_fields_for(Try_00000732U24BurstDirectCall_t28B16B97A00C3DB614657AB878D0FF496041E1C0_il2cpp_TypeInfo_var))->___Pointer_0;
		*((intptr_t*)L_3) = (intptr_t)L_4;
		return;
	}
}
// System.IntPtr Unity.Collections.RewindableAllocator/Unity.Collections.Try_00000732$BurstDirectCall::GetFunctionPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Try_00000732U24BurstDirectCall_GetFunctionPointer_m59ECCFF1396288F720B6FAB9BE4A2070A0934517 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Try_00000732U24BurstDirectCall_t28B16B97A00C3DB614657AB878D0FF496041E1C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		V_0 = ((intptr_t)0);
		il2cpp_codegen_runtime_class_init_inline(Try_00000732U24BurstDirectCall_t28B16B97A00C3DB614657AB878D0FF496041E1C0_il2cpp_TypeInfo_var);
		Try_00000732U24BurstDirectCall_GetFunctionPointerDiscard_m3B752E354E2828DD285C066CE3B5DEA90A3F6579((&V_0), NULL);
		intptr_t L_0 = V_0;
		return L_0;
	}
}
// System.Void Unity.Collections.RewindableAllocator/Unity.Collections.Try_00000732$BurstDirectCall::Constructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Try_00000732U24BurstDirectCall_Constructor_m997692EF44E78D376545B3067EDD1B49F12E5557 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewindableAllocator_TryU24BurstManaged_m9FC90FBCAB23681675E5FF0BBE59BB7D5058ED52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewindableAllocator_Try_mFA247929359660CC33023F374ED76B43812B9115_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Try_00000732U24BurstDirectCall_t28B16B97A00C3DB614657AB878D0FF496041E1C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Try_00000732U24PostfixBurstDelegate_t4BAC9734E19ADA2BDFE5826ED6C030FB1A743697_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 L_0 = { reinterpret_cast<intptr_t> (RewindableAllocator_Try_mFA247929359660CC33023F374ED76B43812B9115_RuntimeMethod_var) };
		RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 L_1 = { reinterpret_cast<intptr_t> (RewindableAllocator_TryU24BurstManaged_m9FC90FBCAB23681675E5FF0BBE59BB7D5058ED52_RuntimeMethod_var) };
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Try_00000732U24PostfixBurstDelegate_t4BAC9734E19ADA2BDFE5826ED6C030FB1A743697_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = BurstCompiler_CompileILPPMethod_m2ADEDFEFDB17376C1A1FFD7C2D1A0C242AB78A8B(L_0, L_1, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Try_00000732U24BurstDirectCall_t28B16B97A00C3DB614657AB878D0FF496041E1C0_il2cpp_TypeInfo_var);
		((Try_00000732U24BurstDirectCall_t28B16B97A00C3DB614657AB878D0FF496041E1C0_StaticFields*)il2cpp_codegen_static_fields_for(Try_00000732U24BurstDirectCall_t28B16B97A00C3DB614657AB878D0FF496041E1C0_il2cpp_TypeInfo_var))->___DeferredCompilation_1 = L_3;
		return;
	}
}
// System.Void Unity.Collections.RewindableAllocator/Unity.Collections.Try_00000732$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Try_00000732U24BurstDirectCall_Initialize_m60452591A440414FE20227B6301BE60B45B56389 (const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void Unity.Collections.RewindableAllocator/Unity.Collections.Try_00000732$BurstDirectCall::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Try_00000732U24BurstDirectCall__cctor_m7C7D3354EAC0706E54621818ECC5CFE91F46CFDF (const RuntimeMethod* method) 
{
	{
		Try_00000732U24BurstDirectCall_Constructor_m997692EF44E78D376545B3067EDD1B49F12E5557(NULL);
		return;
	}
}
// System.Int32 Unity.Collections.RewindableAllocator/Unity.Collections.Try_00000732$BurstDirectCall::Invoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Try_00000732U24BurstDirectCall_Invoke_mE3FD6C631A6D1591113B46B9BAA9B3A7B973C703 (intptr_t ___state0, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Try_00000732U24BurstDirectCall_t28B16B97A00C3DB614657AB878D0FF496041E1C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = BurstCompiler_get_IsEnabled_mEDA2FAA92A224EC22E16A1AB9E8C55FB0DECD755(NULL);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Try_00000732U24BurstDirectCall_t28B16B97A00C3DB614657AB878D0FF496041E1C0_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = Try_00000732U24BurstDirectCall_GetFunctionPointer_m59ECCFF1396288F720B6FAB9BE4A2070A0934517(NULL);
		V_0 = L_1;
		intptr_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		intptr_t L_3 = ___state0;
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_4 = ___block1;
		intptr_t L_5 = V_0;
		typedef int32_t (CDECL *func_L_6)(intptr_t,Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3*);
		int32_t L_7 = ((func_L_6)L_5)(L_3,L_4);
		return L_7;
	}

IL_001f:
	{
		intptr_t L_8 = ___state0;
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_9 = ___block1;
		int32_t L_10;
		L_10 = RewindableAllocator_TryU24BurstManaged_m9FC90FBCAB23681675E5FF0BBE59BB7D5058ED52_inline(L_8, L_9, NULL);
		return L_10;
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
// System.Void Unity.Collections.xxHash3::Avx2HashLongInternalLoop(System.UInt64*,System.Byte*,System.Byte*,System.Int64,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void xxHash3_Avx2HashLongInternalLoop_m442746594450DC1E0B61061B9F3D1032C2D57529 (uint64_t* ___acc0, uint8_t* ___input1, uint8_t* ___dest2, int64_t ___length3, uint8_t* ___secret4, int32_t ___isHash645, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	uint8_t* V_2 = NULL;
	int32_t V_3 = 0;
	int64_t V_4 = 0;
	uint8_t* G_B4_0 = NULL;
	uint64_t* G_B4_1 = NULL;
	uint8_t* G_B3_0 = NULL;
	uint64_t* G_B3_1 = NULL;
	uintptr_t G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	uint8_t* G_B5_1 = NULL;
	uint64_t* G_B5_2 = NULL;
	uint8_t* G_B9_0 = NULL;
	uint64_t* G_B9_1 = NULL;
	uint8_t* G_B8_0 = NULL;
	uint64_t* G_B8_1 = NULL;
	uintptr_t G_B10_0;
	memset((&G_B10_0), 0, sizeof(G_B10_0));
	uint8_t* G_B10_1 = NULL;
	uint64_t* G_B10_2 = NULL;
	{
		// if (X86.Avx2.IsAvx2Supported)
		bool L_0;
		L_0 = Avx2_get_IsAvx2Supported_m768CA5D24C6148EBDF5E2FB487026D1A126D14E5(NULL);
		if (!L_0)
		{
			goto IL_00dd;
		}
	}
	{
		// var nb_blocks = (length-1) / BLOCK_LEN;
		int64_t L_1 = ___length3;
		V_0 = ((int64_t)(((int64_t)il2cpp_codegen_subtract(L_1, ((int64_t)1)))/((int64_t)((int32_t)1024))));
		// for (int n = 0; n < nb_blocks; n++)
		V_3 = 0;
		goto IL_0057;
	}

IL_001a:
	{
		// Avx2Accumulate(acc, input + n * BLOCK_LEN, dest == null ? null : dest + n * BLOCK_LEN, secret, NB_ROUNDS, isHash64);
		uint64_t* L_2 = ___acc0;
		uint8_t* L_3 = ___input1;
		int32_t L_4 = V_3;
		uint8_t* L_5 = ___dest2;
		G_B3_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, ((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)1024)))));
		G_B3_1 = L_2;
		if ((((intptr_t)L_5) == ((intptr_t)((uintptr_t)0))))
		{
			G_B4_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, ((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)1024)))));
			G_B4_1 = L_2;
			goto IL_0034;
		}
	}
	{
		uint8_t* L_6 = ___dest2;
		int32_t L_7 = V_3;
		G_B5_0 = ((uintptr_t)(intptr_t)(((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, ((int32_t)il2cpp_codegen_multiply(L_7, ((int32_t)1024)))))));
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0036;
	}

IL_0034:
	{
		G_B5_0 = ((uintptr_t)0);
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0036:
	{
		uint8_t* L_8 = ___secret4;
		int32_t L_9 = ___isHash645;
		xxHash3_Avx2Accumulate_m270AB6784390432C557F890E6E4281D6921D78B7(G_B5_2, G_B5_1, (uint8_t*)G_B5_0, L_8, ((int64_t)((int32_t)16)), L_9, NULL);
		// Avx2ScrambleAcc(acc, secret + SECRET_KEY_SIZE - STRIPE_LEN);
		uint64_t* L_10 = ___acc0;
		uint8_t* L_11 = ___secret4;
		xxHash3_Avx2ScrambleAcc_mD74A53B0BA0A96E8B0298A97A0C1E3DFA4C643D5(L_10, ((uint8_t*)il2cpp_codegen_subtract((intptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_11, ((int32_t)192))), ((int32_t)64))), NULL);
		// for (int n = 0; n < nb_blocks; n++)
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0057:
	{
		// for (int n = 0; n < nb_blocks; n++)
		int32_t L_13 = V_3;
		int64_t L_14 = V_0;
		if ((((int64_t)((int64_t)L_13)) < ((int64_t)L_14)))
		{
			goto IL_001a;
		}
	}
	{
		// var nbStripes = ((length-1) - (BLOCK_LEN * nb_blocks)) / STRIPE_LEN;
		int64_t L_15 = ___length3;
		int64_t L_16 = V_0;
		V_1 = ((int64_t)(((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_subtract(L_15, ((int64_t)1))), ((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)1024)), L_16))))/((int64_t)((int32_t)64))));
		// Avx2Accumulate(acc, input + nb_blocks * BLOCK_LEN, dest == null ? null : dest + nb_blocks * BLOCK_LEN, secret, nbStripes, isHash64);
		uint64_t* L_17 = ___acc0;
		uint8_t* L_18 = ___input1;
		int64_t L_19 = V_0;
		uint8_t* L_20 = ___dest2;
		G_B8_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)((int64_t)il2cpp_codegen_multiply(L_19, ((int64_t)((int32_t)1024)))))));
		G_B8_1 = L_17;
		if ((((intptr_t)L_20) == ((intptr_t)((uintptr_t)0))))
		{
			G_B9_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)((int64_t)il2cpp_codegen_multiply(L_19, ((int64_t)((int32_t)1024)))))));
			G_B9_1 = L_17;
			goto IL_008c;
		}
	}
	{
		uint8_t* L_21 = ___dest2;
		int64_t L_22 = V_0;
		G_B10_0 = ((uintptr_t)(intptr_t)(((uint8_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)((int64_t)il2cpp_codegen_multiply(L_22, ((int64_t)((int32_t)1024)))))))));
		G_B10_1 = G_B8_0;
		G_B10_2 = G_B8_1;
		goto IL_008e;
	}

IL_008c:
	{
		G_B10_0 = ((uintptr_t)0);
		G_B10_1 = G_B9_0;
		G_B10_2 = G_B9_1;
	}

IL_008e:
	{
		uint8_t* L_23 = ___secret4;
		int64_t L_24 = V_1;
		int32_t L_25 = ___isHash645;
		xxHash3_Avx2Accumulate_m270AB6784390432C557F890E6E4281D6921D78B7(G_B10_2, G_B10_1, (uint8_t*)G_B10_0, L_23, L_24, L_25, NULL);
		// var p = input + length - STRIPE_LEN;
		uint8_t* L_26 = ___input1;
		int64_t L_27 = ___length3;
		V_2 = ((uint8_t*)il2cpp_codegen_subtract((intptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)L_27))), ((int32_t)64)));
		// Avx2Accumulate512(acc, p, null, secret + SECRET_KEY_SIZE - STRIPE_LEN - SECRET_LASTACC_START);
		uint64_t* L_28 = ___acc0;
		uint8_t* L_29 = V_2;
		uint8_t* L_30 = ___secret4;
		xxHash3_Avx2Accumulate512_mB2B1BC058C2E3A9199E028CC115890D11E8B5ECD(L_28, L_29, (uint8_t*)((uintptr_t)0), ((uint8_t*)il2cpp_codegen_subtract((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_30, ((int32_t)192))), ((int32_t)64))), 7)), NULL);
		// if (dest != null)
		uint8_t* L_31 = ___dest2;
		if ((((intptr_t)L_31) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_00dd;
		}
	}
	{
		// var remaining = length % STRIPE_LEN;
		int64_t L_32 = ___length3;
		V_4 = ((int64_t)(L_32%((int64_t)((int32_t)64))));
		// if (remaining != 0)
		int64_t L_33 = V_4;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		// UnsafeUtility.MemCpy(dest + length - remaining, input + length - remaining, remaining);
		uint8_t* L_34 = ___dest2;
		int64_t L_35 = ___length3;
		int64_t L_36 = V_4;
		uint8_t* L_37 = ___input1;
		int64_t L_38 = ___length3;
		int64_t L_39 = V_4;
		int64_t L_40 = V_4;
		UnsafeUtility_MemCpy_m019E657B952C27F705607F0F3D371EEE526B716B((void*)((uint8_t*)il2cpp_codegen_subtract((intptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_34, ((intptr_t)L_35))), ((intptr_t)L_36))), (void*)((uint8_t*)il2cpp_codegen_subtract((intptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)L_38))), ((intptr_t)L_39))), L_40, NULL);
	}

IL_00dd:
	{
		// }
		return;
	}
}
// System.Void Unity.Collections.xxHash3::Avx2ScrambleAcc(System.UInt64*,System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void xxHash3_Avx2ScrambleAcc_mD74A53B0BA0A96E8B0298A97A0C1E3DFA4C643D5 (uint64_t* ___acc0, uint8_t* ___secret1, const RuntimeMethod* method) 
{
	v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A* V_0 = NULL;
	v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A* V_1 = NULL;
	v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A V_2;
	memset((&V_2), 0, sizeof(V_2));
	v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A V_3;
	memset((&V_3), 0, sizeof(V_3));
	v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A V_4;
	memset((&V_4), 0, sizeof(V_4));
	v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A V_5;
	memset((&V_5), 0, sizeof(V_5));
	v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A V_6;
	memset((&V_6), 0, sizeof(V_6));
	v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		// if (X86.Avx2.IsAvx2Supported)
		bool L_0;
		L_0 = Avx2_get_IsAvx2Supported_m768CA5D24C6148EBDF5E2FB487026D1A126D14E5(NULL);
		if (!L_0)
		{
			goto IL_00e8;
		}
	}
	{
		// var xAcc = (v256*) acc;
		uint64_t* L_1 = ___acc0;
		V_0 = (v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A*)L_1;
		// var xSecret = (v256*) secret;
		uint8_t* L_2 = ___secret1;
		V_1 = (v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A*)L_2;
		// var prime32 = X86.Avx.mm256_set1_epi32(unchecked((int) PRIME32_1));
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_3;
		L_3 = Avx_mm256_set1_epi32_m090A19934001DA4D60E2460DA6EB513576BAC1AA(((int32_t)-1640531535), NULL);
		V_2 = L_3;
		// var acc_vec = xAcc[0];
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A* L_4 = V_0;
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_5 = (*(v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A*)L_4);
		// var shifted = X86.Avx2.mm256_srli_epi64(acc_vec, 47);
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_6 = L_5;
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_7;
		L_7 = Avx2_mm256_srli_epi64_m2A26BF6C6102B50698B860B5791E667DB4A61476(L_6, ((int32_t)47), NULL);
		V_3 = L_7;
		// var data_vec = X86.Avx2.mm256_xor_si256(acc_vec, shifted);
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_8 = V_3;
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_9;
		L_9 = Avx2_mm256_xor_si256_mB72A18B3CE7384DB4F9B949A9C1CCB09CE169251(L_6, L_8, NULL);
		// var key_vec = X86.Avx.mm256_loadu_si256(xSecret + 0);
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A* L_10 = V_1;
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_11;
		L_11 = Avx_mm256_loadu_si256_m901E3172D0524718EDA6EC936E3038458AB2E583((void*)L_10, NULL);
		V_4 = L_11;
		// var data_key = X86.Avx2.mm256_xor_si256(data_vec, key_vec);
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_12 = V_4;
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_13;
		L_13 = Avx2_mm256_xor_si256_mB72A18B3CE7384DB4F9B949A9C1CCB09CE169251(L_9, L_12, NULL);
		// var data_key_hi = X86.Avx2.mm256_shuffle_epi32(data_key, X86.Sse.SHUFFLE(0, 3, 0, 1));
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_14 = L_13;
		int32_t L_15;
		L_15 = Sse_SHUFFLE_m0AC49DB7C7FA28E33C221650D8D17F5E4997DF43(0, 3, 0, 1, NULL);
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_16;
		L_16 = Avx2_mm256_shuffle_epi32_m146F8DC793F3A937DE06B44EDE328C514D8629AD(L_14, L_15, NULL);
		V_5 = L_16;
		// var prod_lo = X86.Avx2.mm256_mul_epu32(data_key, prime32);
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_17 = V_2;
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_18;
		L_18 = Avx2_mm256_mul_epu32_mA0631A12A2FD99EA52E52515C98309317A5A4901(L_14, L_17, NULL);
		V_6 = L_18;
		// var prod_hi = X86.Avx2.mm256_mul_epu32(data_key_hi, prime32);
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_19 = V_5;
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_20 = V_2;
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_21;
		L_21 = Avx2_mm256_mul_epu32_mA0631A12A2FD99EA52E52515C98309317A5A4901(L_19, L_20, NULL);
		V_7 = L_21;
		// xAcc[0] = X86.Avx2.mm256_add_epi64(prod_lo, X86.Avx2.mm256_slli_epi64(prod_hi, 32));
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A* L_22 = V_0;
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_23 = V_6;
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_24 = V_7;
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_25;
		L_25 = Avx2_mm256_slli_epi64_m3CAEA58228BF7EA5747F1F96B04F602980D3FC41(L_24, ((int32_t)32), NULL);
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_26;
		L_26 = Avx2_mm256_add_epi64_mFE840E749332B5FFDFAD46011D773DC77A81004A(L_23, L_25, NULL);
		*(v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A*)L_22 = L_26;
		// acc_vec = xAcc[1];
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A* L_27 = V_0;
		uint32_t L_28 = sizeof(v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A);
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_29 = (*(v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A*)((v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A*)il2cpp_codegen_add((intptr_t)L_27, (int32_t)L_28)));
		// shifted = X86.Avx2.mm256_srli_epi64(acc_vec, 47);
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_30 = L_29;
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_31;
		L_31 = Avx2_mm256_srli_epi64_m2A26BF6C6102B50698B860B5791E667DB4A61476(L_30, ((int32_t)47), NULL);
		V_3 = L_31;
		// data_vec = X86.Avx2.mm256_xor_si256(acc_vec, shifted);
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_32 = V_3;
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_33;
		L_33 = Avx2_mm256_xor_si256_mB72A18B3CE7384DB4F9B949A9C1CCB09CE169251(L_30, L_32, NULL);
		// key_vec = X86.Avx.mm256_loadu_si256(xSecret + 1);
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A* L_34 = V_1;
		uint32_t L_35 = sizeof(v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A);
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_36;
		L_36 = Avx_mm256_loadu_si256_m901E3172D0524718EDA6EC936E3038458AB2E583((void*)((v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A*)il2cpp_codegen_add((intptr_t)L_34, (int32_t)L_35)), NULL);
		V_4 = L_36;
		// data_key = X86.Avx2.mm256_xor_si256(data_vec, key_vec);
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_37 = V_4;
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_38;
		L_38 = Avx2_mm256_xor_si256_mB72A18B3CE7384DB4F9B949A9C1CCB09CE169251(L_33, L_37, NULL);
		// data_key_hi = X86.Avx2.mm256_shuffle_epi32(data_key, X86.Sse.SHUFFLE(0, 3, 0, 1));
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_39 = L_38;
		int32_t L_40;
		L_40 = Sse_SHUFFLE_m0AC49DB7C7FA28E33C221650D8D17F5E4997DF43(0, 3, 0, 1, NULL);
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_41;
		L_41 = Avx2_mm256_shuffle_epi32_m146F8DC793F3A937DE06B44EDE328C514D8629AD(L_39, L_40, NULL);
		V_5 = L_41;
		// prod_lo = X86.Avx2.mm256_mul_epu32(data_key, prime32);
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_42 = V_2;
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_43;
		L_43 = Avx2_mm256_mul_epu32_mA0631A12A2FD99EA52E52515C98309317A5A4901(L_39, L_42, NULL);
		V_6 = L_43;
		// prod_hi = X86.Avx2.mm256_mul_epu32(data_key_hi, prime32);
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_44 = V_5;
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_45 = V_2;
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_46;
		L_46 = Avx2_mm256_mul_epu32_mA0631A12A2FD99EA52E52515C98309317A5A4901(L_44, L_45, NULL);
		V_7 = L_46;
		// xAcc[1] = X86.Avx2.mm256_add_epi64(prod_lo, X86.Avx2.mm256_slli_epi64(prod_hi, 32));
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A* L_47 = V_0;
		uint32_t L_48 = sizeof(v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A);
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_49 = V_6;
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_50 = V_7;
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_51;
		L_51 = Avx2_mm256_slli_epi64_m3CAEA58228BF7EA5747F1F96B04F602980D3FC41(L_50, ((int32_t)32), NULL);
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_52;
		L_52 = Avx2_mm256_add_epi64_mFE840E749332B5FFDFAD46011D773DC77A81004A(L_49, L_51, NULL);
		*(v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A*)((v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A*)il2cpp_codegen_add((intptr_t)L_47, (int32_t)L_48)) = L_52;
	}

IL_00e8:
	{
		// }
		return;
	}
}
// System.Void Unity.Collections.xxHash3::Avx2Accumulate(System.UInt64*,System.Byte*,System.Byte*,System.Byte*,System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void xxHash3_Avx2Accumulate_m270AB6784390432C557F890E6E4281D6921D78B7 (uint64_t* ___acc0, uint8_t* ___input1, uint8_t* ___dest2, uint8_t* ___secret3, int64_t ___nbStripes4, int32_t ___isHash645, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint8_t* V_1 = NULL;
	uint8_t* G_B4_0 = NULL;
	uint64_t* G_B4_1 = NULL;
	uint8_t* G_B3_0 = NULL;
	uint64_t* G_B3_1 = NULL;
	uintptr_t G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	uint8_t* G_B5_1 = NULL;
	uint64_t* G_B5_2 = NULL;
	{
		// if (X86.Avx2.IsAvx2Supported)
		bool L_0;
		L_0 = Avx2_get_IsAvx2Supported_m768CA5D24C6148EBDF5E2FB487026D1A126D14E5(NULL);
		if (!L_0)
		{
			goto IL_0037;
		}
	}
	{
		// for (var n = 0; n < nbStripes; n++)
		V_0 = 0;
		goto IL_0031;
	}

IL_000b:
	{
		// var xInput = input + n * STRIPE_LEN;
		uint8_t* L_1 = ___input1;
		int32_t L_2 = V_0;
		V_1 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, ((int32_t)il2cpp_codegen_multiply(L_2, ((int32_t)64)))));
		// Avx2Accumulate512(acc, xInput, dest == null ? null : dest + n * STRIPE_LEN,
		//     secret + n * SECRET_CONSUME_RATE);
		uint64_t* L_3 = ___acc0;
		uint8_t* L_4 = V_1;
		uint8_t* L_5 = ___dest2;
		G_B3_0 = L_4;
		G_B3_1 = L_3;
		if ((((intptr_t)L_5) == ((intptr_t)((uintptr_t)0))))
		{
			G_B4_0 = L_4;
			G_B4_1 = L_3;
			goto IL_0021;
		}
	}
	{
		uint8_t* L_6 = ___dest2;
		int32_t L_7 = V_0;
		G_B5_0 = ((uintptr_t)(intptr_t)(((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, ((int32_t)il2cpp_codegen_multiply(L_7, ((int32_t)64)))))));
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0023;
	}

IL_0021:
	{
		G_B5_0 = ((uintptr_t)0);
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0023:
	{
		uint8_t* L_8 = ___secret3;
		int32_t L_9 = V_0;
		xxHash3_Avx2Accumulate512_mB2B1BC058C2E3A9199E028CC115890D11E8B5ECD(G_B5_2, G_B5_1, (uint8_t*)G_B5_0, ((uint8_t*)il2cpp_codegen_add((intptr_t)L_8, ((int32_t)il2cpp_codegen_multiply(L_9, 8)))), NULL);
		// for (var n = 0; n < nbStripes; n++)
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0031:
	{
		// for (var n = 0; n < nbStripes; n++)
		int32_t L_11 = V_0;
		int64_t L_12 = ___nbStripes4;
		if ((((int64_t)((int64_t)L_11)) < ((int64_t)L_12)))
		{
			goto IL_000b;
		}
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void Unity.Collections.xxHash3::Avx2Accumulate512(System.UInt64*,System.Byte*,System.Byte*,System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void xxHash3_Avx2Accumulate512_mB2B1BC058C2E3A9199E028CC115890D11E8B5ECD (uint64_t* ___acc0, uint8_t* ___input1, uint8_t* ___dest2, uint8_t* ___secret3, const RuntimeMethod* method) 
{
	v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A* V_0 = NULL;
	v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A* V_1 = NULL;
	v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A* V_2 = NULL;
	v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A V_3;
	memset((&V_3), 0, sizeof(V_3));
	v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A V_4;
	memset((&V_4), 0, sizeof(V_4));
	v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A V_5;
	memset((&V_5), 0, sizeof(V_5));
	v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A V_6;
	memset((&V_6), 0, sizeof(V_6));
	v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A V_7;
	memset((&V_7), 0, sizeof(V_7));
	v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A V_8;
	memset((&V_8), 0, sizeof(V_8));
	v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	{
		// if (X86.Avx2.IsAvx2Supported)
		bool L_0;
		L_0 = Avx2_get_IsAvx2Supported_m768CA5D24C6148EBDF5E2FB487026D1A126D14E5(NULL);
		if (!L_0)
		{
			goto IL_0107;
		}
	}
	{
		// var xAcc = (v256*) acc;
		uint64_t* L_1 = ___acc0;
		V_0 = (v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A*)L_1;
		// var xSecret = (v256*) secret;
		uint8_t* L_2 = ___secret3;
		V_1 = (v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A*)L_2;
		// var xInput = (v256*) input;
		uint8_t* L_3 = ___input1;
		V_2 = (v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A*)L_3;
		// var data_vec = X86.Avx.mm256_loadu_si256(xInput + 0);
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A* L_4 = V_2;
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_5;
		L_5 = Avx_mm256_loadu_si256_m901E3172D0524718EDA6EC936E3038458AB2E583((void*)L_4, NULL);
		V_3 = L_5;
		// var key_vec  = X86.Avx.mm256_loadu_si256(xSecret + 0);
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A* L_6 = V_1;
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_7;
		L_7 = Avx_mm256_loadu_si256_m901E3172D0524718EDA6EC936E3038458AB2E583((void*)L_6, NULL);
		V_4 = L_7;
		// var data_key = X86.Avx2.mm256_xor_si256(data_vec, key_vec);
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_8 = V_3;
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_9 = V_4;
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_10;
		L_10 = Avx2_mm256_xor_si256_mB72A18B3CE7384DB4F9B949A9C1CCB09CE169251(L_8, L_9, NULL);
		// if (dest != null)
		uint8_t* L_11 = ___dest2;
		G_B2_0 = L_10;
		if ((((intptr_t)L_11) == ((intptr_t)((uintptr_t)0))))
		{
			G_B3_0 = L_10;
			goto IL_0033;
		}
	}
	{
		// X86.Avx.mm256_storeu_si256(dest, data_vec);
		uint8_t* L_12 = ___dest2;
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_13 = V_3;
		Avx_mm256_storeu_si256_m4C8CDEA9A8A86D7325841D658A07E996E779163F((void*)L_12, L_13, NULL);
		G_B3_0 = G_B2_0;
	}

IL_0033:
	{
		// var data_key_lo = X86.Avx2.mm256_shuffle_epi32(data_key, X86.Sse.SHUFFLE(0, 3, 0, 1));
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_14 = G_B3_0;
		int32_t L_15;
		L_15 = Sse_SHUFFLE_m0AC49DB7C7FA28E33C221650D8D17F5E4997DF43(0, 3, 0, 1, NULL);
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_16;
		L_16 = Avx2_mm256_shuffle_epi32_m146F8DC793F3A937DE06B44EDE328C514D8629AD(L_14, L_15, NULL);
		V_5 = L_16;
		// var product = X86.Avx2.mm256_mul_epu32(data_key, data_key_lo);
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_17 = V_5;
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_18;
		L_18 = Avx2_mm256_mul_epu32_mA0631A12A2FD99EA52E52515C98309317A5A4901(L_14, L_17, NULL);
		V_6 = L_18;
		// var data_swap= X86.Avx2.mm256_shuffle_epi32(data_vec, X86.Sse.SHUFFLE(1, 0, 3, 2));
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_19 = V_3;
		int32_t L_20;
		L_20 = Sse_SHUFFLE_m0AC49DB7C7FA28E33C221650D8D17F5E4997DF43(1, 0, 3, 2, NULL);
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_21;
		L_21 = Avx2_mm256_shuffle_epi32_m146F8DC793F3A937DE06B44EDE328C514D8629AD(L_19, L_20, NULL);
		V_7 = L_21;
		// var sum= X86.Avx2.mm256_add_epi64(xAcc[0], data_swap);
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A* L_22 = V_0;
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_23 = (*(v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A*)L_22);
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_24 = V_7;
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_25;
		L_25 = Avx2_mm256_add_epi64_mFE840E749332B5FFDFAD46011D773DC77A81004A(L_23, L_24, NULL);
		V_8 = L_25;
		// xAcc[0] = X86.Avx2.mm256_add_epi64(product, sum);
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A* L_26 = V_0;
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_27 = V_6;
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_28 = V_8;
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_29;
		L_29 = Avx2_mm256_add_epi64_mFE840E749332B5FFDFAD46011D773DC77A81004A(L_27, L_28, NULL);
		*(v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A*)L_26 = L_29;
		// data_vec = X86.Avx.mm256_loadu_si256(xInput + 1);
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A* L_30 = V_2;
		uint32_t L_31 = sizeof(v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A);
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_32;
		L_32 = Avx_mm256_loadu_si256_m901E3172D0524718EDA6EC936E3038458AB2E583((void*)((v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A*)il2cpp_codegen_add((intptr_t)L_30, (int32_t)L_31)), NULL);
		V_3 = L_32;
		// key_vec = X86.Avx.mm256_loadu_si256(xSecret + 1);
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A* L_33 = V_1;
		uint32_t L_34 = sizeof(v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A);
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_35;
		L_35 = Avx_mm256_loadu_si256_m901E3172D0524718EDA6EC936E3038458AB2E583((void*)((v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A*)il2cpp_codegen_add((intptr_t)L_33, (int32_t)L_34)), NULL);
		V_4 = L_35;
		// data_key = X86.Avx2.mm256_xor_si256(data_vec, key_vec);
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_36 = V_3;
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_37 = V_4;
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_38;
		L_38 = Avx2_mm256_xor_si256_mB72A18B3CE7384DB4F9B949A9C1CCB09CE169251(L_36, L_37, NULL);
		// if (dest != null)
		uint8_t* L_39 = ___dest2;
		G_B4_0 = L_38;
		if ((((intptr_t)L_39) == ((intptr_t)((uintptr_t)0))))
		{
			G_B5_0 = L_38;
			goto IL_00b0;
		}
	}
	{
		// X86.Avx.mm256_storeu_si256(dest + 32, data_vec);
		uint8_t* L_40 = ___dest2;
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_41 = V_3;
		Avx_mm256_storeu_si256_m4C8CDEA9A8A86D7325841D658A07E996E779163F((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_40, ((int32_t)32))), L_41, NULL);
		G_B5_0 = G_B4_0;
	}

IL_00b0:
	{
		// data_key_lo = X86.Avx2.mm256_shuffle_epi32(data_key, X86.Sse.SHUFFLE(0, 3, 0, 1));
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_42 = G_B5_0;
		int32_t L_43;
		L_43 = Sse_SHUFFLE_m0AC49DB7C7FA28E33C221650D8D17F5E4997DF43(0, 3, 0, 1, NULL);
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_44;
		L_44 = Avx2_mm256_shuffle_epi32_m146F8DC793F3A937DE06B44EDE328C514D8629AD(L_42, L_43, NULL);
		V_5 = L_44;
		// product = X86.Avx2.mm256_mul_epu32(data_key, data_key_lo);
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_45 = V_5;
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_46;
		L_46 = Avx2_mm256_mul_epu32_mA0631A12A2FD99EA52E52515C98309317A5A4901(L_42, L_45, NULL);
		V_6 = L_46;
		// data_swap = X86.Avx2.mm256_shuffle_epi32(data_vec, X86.Sse.SHUFFLE(1, 0, 3, 2));
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_47 = V_3;
		int32_t L_48;
		L_48 = Sse_SHUFFLE_m0AC49DB7C7FA28E33C221650D8D17F5E4997DF43(1, 0, 3, 2, NULL);
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_49;
		L_49 = Avx2_mm256_shuffle_epi32_m146F8DC793F3A937DE06B44EDE328C514D8629AD(L_47, L_48, NULL);
		V_7 = L_49;
		// sum = X86.Avx2.mm256_add_epi64(xAcc[1], data_swap);
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A* L_50 = V_0;
		uint32_t L_51 = sizeof(v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A);
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_52 = (*(v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A*)((v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A*)il2cpp_codegen_add((intptr_t)L_50, (int32_t)L_51)));
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_53 = V_7;
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_54;
		L_54 = Avx2_mm256_add_epi64_mFE840E749332B5FFDFAD46011D773DC77A81004A(L_52, L_53, NULL);
		V_8 = L_54;
		// xAcc[1] = X86.Avx2.mm256_add_epi64(product, sum);
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A* L_55 = V_0;
		uint32_t L_56 = sizeof(v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A);
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_57 = V_6;
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_58 = V_8;
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_59;
		L_59 = Avx2_mm256_add_epi64_mFE840E749332B5FFDFAD46011D773DC77A81004A(L_57, L_58, NULL);
		*(v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A*)((v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A*)il2cpp_codegen_add((intptr_t)L_55, (int32_t)L_56)) = L_59;
	}

IL_0107:
	{
		// }
		return;
	}
}
// System.UInt64 Unity.Collections.xxHash3::Hash64Long(System.Byte*,System.Byte*,System.Int64,System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t xxHash3_Hash64Long_m139E7D0E4F9BEE31A67C6B0DA3D89AA93773D4B9 (uint8_t* ___input0, uint8_t* ___dest1, int64_t ___length2, uint8_t* ___secret3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hash64Long_00000769U24BurstDirectCall_tCB68055E3DECA22A01777D16D1C3024A66FB6D94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var addr = stackalloc byte[STRIPE_LEN + 31];
		uint8_t* L_0 = ___input0;
		uint8_t* L_1 = ___dest1;
		int64_t L_2 = ___length2;
		uint8_t* L_3 = ___secret3;
		il2cpp_codegen_runtime_class_init_inline(Hash64Long_00000769U24BurstDirectCall_tCB68055E3DECA22A01777D16D1C3024A66FB6D94_il2cpp_TypeInfo_var);
		uint64_t L_4;
		L_4 = Hash64Long_00000769U24BurstDirectCall_Invoke_m1AA4699AB6B75E84AC2D149C1BABD3BF09CE3752(L_0, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
// System.Void Unity.Collections.xxHash3::Hash128Long(System.Byte*,System.Byte*,System.Int64,System.Byte*,Unity.Mathematics.uint4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void xxHash3_Hash128Long_mB811A64DE35E597BEF6A1F1566456674B26FA2C5 (uint8_t* ___input0, uint8_t* ___dest1, int64_t ___length2, uint8_t* ___secret3, uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9* ___result4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hash128Long_00000770U24BurstDirectCall_tA453B39A0B08507B472F985F7D9086A85E22CFFA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var addr = stackalloc byte[STRIPE_LEN + 31];
		uint8_t* L_0 = ___input0;
		uint8_t* L_1 = ___dest1;
		int64_t L_2 = ___length2;
		uint8_t* L_3 = ___secret3;
		uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9* L_4 = ___result4;
		il2cpp_codegen_runtime_class_init_inline(Hash128Long_00000770U24BurstDirectCall_tA453B39A0B08507B472F985F7D9086A85E22CFFA_il2cpp_TypeInfo_var);
		Hash128Long_00000770U24BurstDirectCall_Invoke_m617BBF6D8F11F7780500926C618F5A6A3CCFD1E4(L_0, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
// Unity.Mathematics.uint4 Unity.Collections.xxHash3::ToUint4(System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 xxHash3_ToUint4_m6DA767007FADBF9532A2E5173996473BEDE21220 (uint64_t ___ul00, uint64_t ___ul11, const RuntimeMethod* method) 
{
	{
		// return new uint4((uint)(ul0 & 0xFFFFFFFF), (uint)(ul0 >> 32), (uint)(ul1 & 0xFFFFFFFF), (uint)(ul1 >> 32));
		uint64_t L_0 = ___ul00;
		uint64_t L_1 = ___ul00;
		uint64_t L_2 = ___ul11;
		uint64_t L_3 = ___ul11;
		uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 L_4;
		memset((&L_4), 0, sizeof(L_4));
		uint4__ctor_m59B6A219A0285C60FCF2977679BF89C72B502008_inline((&L_4), ((int32_t)(uint32_t)((int64_t)((int64_t)L_0&((int64_t)(uint64_t)((uint32_t)(-1)))))), ((int32_t)(uint32_t)((int64_t)((uint64_t)L_1>>((int32_t)32)))), ((int32_t)(uint32_t)((int64_t)((int64_t)L_2&((int64_t)(uint64_t)((uint32_t)(-1)))))), ((int32_t)(uint32_t)((int64_t)((uint64_t)L_3>>((int32_t)32)))), /*hidden argument*/NULL);
		return L_4;
	}
}
// System.UInt64 Unity.Collections.xxHash3::Read64LE(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t xxHash3_Read64LE_m142BE5079FBF51DF81C53FAB5E7021ECA764DC65 (void* ___addr0, const RuntimeMethod* method) 
{
	{
		// private static unsafe ulong Read64LE(void* addr) => *(ulong*) addr;
		void* L_0 = ___addr0;
		int64_t L_1 = *((int64_t*)L_0);
		return L_1;
	}
}
// System.Void Unity.Collections.xxHash3::Write64LE(System.Void*,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void xxHash3_Write64LE_m081CFB5625644F1EA14C692C00DD342F9D8CFF8F (void* ___addr0, uint64_t ___value1, const RuntimeMethod* method) 
{
	{
		// private static unsafe void Write64LE(void* addr, ulong value) => *(ulong*) addr = value;
		void* L_0 = ___addr0;
		uint64_t L_1 = ___value1;
		*((int64_t*)L_0) = (int64_t)L_1;
		return;
	}
}
// System.UInt64 Unity.Collections.xxHash3::Mul32To64(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t xxHash3_Mul32To64_m658CA5D40AAB84E56DF2C0433A34E209F3C236DE (uint32_t ___x0, uint32_t ___y1, const RuntimeMethod* method) 
{
	{
		// private static ulong Mul32To64(uint x, uint y) => (ulong) x * y;
		uint32_t L_0 = ___x0;
		uint32_t L_1 = ___y1;
		return ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_0), ((int64_t)(uint64_t)L_1)));
	}
}
// System.UInt64 Unity.Collections.xxHash3::XorShift64(System.UInt64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t xxHash3_XorShift64_m60FE95AE47D67ACD4AA70E8C3AE81A92C3C89955 (uint64_t ___v640, int32_t ___shift1, const RuntimeMethod* method) 
{
	{
		// return v64 ^ (v64 >> shift);
		uint64_t L_0 = ___v640;
		uint64_t L_1 = ___v640;
		int32_t L_2 = ___shift1;
		return ((int64_t)((int64_t)L_0^((int64_t)((uint64_t)L_1>>((int32_t)(L_2&((int32_t)63)))))));
	}
}
// System.UInt64 Unity.Collections.xxHash3::Mul128Fold64(System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t xxHash3_Mul128Fold64_mA7EB7CAED01CEFA6204C0344F5DD7CD7625AABB5 (uint64_t ___lhs0, uint64_t ___rhs1, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		// var lo = Common.umul128(lhs, rhs, out var hi);
		uint64_t L_0 = ___lhs0;
		uint64_t L_1 = ___rhs1;
		uint64_t L_2;
		L_2 = Common_umul128_mB9316CECE9C94618BA3A48AB6185DB217039CBCA(L_0, L_1, (&V_0), NULL);
		// return lo ^ hi;
		uint64_t L_3 = V_0;
		return ((int64_t)((int64_t)L_2^(int64_t)L_3));
	}
}
// System.UInt64 Unity.Collections.xxHash3::Avalanche(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t xxHash3_Avalanche_mBE469AA9C171E827977A1C02AB4F54450CB6B382 (uint64_t ___h640, const RuntimeMethod* method) 
{
	{
		// h64 = XorShift64(h64, 37);
		uint64_t L_0 = ___h640;
		uint64_t L_1;
		L_1 = xxHash3_XorShift64_m60FE95AE47D67ACD4AA70E8C3AE81A92C3C89955_inline(L_0, ((int32_t)37), NULL);
		___h640 = L_1;
		// h64 *= 0x165667919E3779F9UL;
		uint64_t L_2 = ___h640;
		___h640 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_2, ((int64_t)1609587791953885689LL)));
		// h64 = XorShift64(h64, 32);
		uint64_t L_3 = ___h640;
		uint64_t L_4;
		L_4 = xxHash3_XorShift64_m60FE95AE47D67ACD4AA70E8C3AE81A92C3C89955_inline(L_3, ((int32_t)32), NULL);
		___h640 = L_4;
		// return h64;
		uint64_t L_5 = ___h640;
		return L_5;
	}
}
// System.UInt64 Unity.Collections.xxHash3::Mix2Acc(System.UInt64,System.UInt64,System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t xxHash3_Mix2Acc_mD770DD066F75B7813FE9495ED10135605D6F63A1 (uint64_t ___acc00, uint64_t ___acc11, uint8_t* ___secret2, const RuntimeMethod* method) 
{
	{
		// return Mul128Fold64(acc0 ^ Read64LE(secret), acc1 ^ Read64LE(secret+8));
		uint64_t L_0 = ___acc00;
		uint8_t* L_1 = ___secret2;
		uint64_t L_2;
		L_2 = xxHash3_Read64LE_m142BE5079FBF51DF81C53FAB5E7021ECA764DC65_inline((void*)L_1, NULL);
		uint64_t L_3 = ___acc11;
		uint8_t* L_4 = ___secret2;
		uint64_t L_5;
		L_5 = xxHash3_Read64LE_m142BE5079FBF51DF81C53FAB5E7021ECA764DC65_inline((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, 8)), NULL);
		uint64_t L_6;
		L_6 = xxHash3_Mul128Fold64_mA7EB7CAED01CEFA6204C0344F5DD7CD7625AABB5_inline(((int64_t)((int64_t)L_0^(int64_t)L_2)), ((int64_t)((int64_t)L_3^(int64_t)L_5)), NULL);
		return L_6;
	}
}
// System.UInt64 Unity.Collections.xxHash3::MergeAcc(System.UInt64*,System.Byte*,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t xxHash3_MergeAcc_m95092AEC7B1C5BB19BF70E55CA030CAE37C79161 (uint64_t* ___acc0, uint8_t* ___secret1, uint64_t ___start2, const RuntimeMethod* method) 
{
	{
		// var result64 = start;
		uint64_t L_0 = ___start2;
		// result64 += Mix2Acc(acc[0], acc[1], secret + 0);
		uint64_t* L_1 = ___acc0;
		int64_t L_2 = *((int64_t*)L_1);
		uint64_t* L_3 = ___acc0;
		int64_t L_4 = *((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_3, 8)));
		uint8_t* L_5 = ___secret1;
		uint64_t L_6;
		L_6 = xxHash3_Mix2Acc_mD770DD066F75B7813FE9495ED10135605D6F63A1_inline(L_2, L_4, L_5, NULL);
		// result64 += Mix2Acc(acc[2], acc[3], secret + 16);
		uint64_t* L_7 = ___acc0;
		int64_t L_8 = *((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 8)))));
		uint64_t* L_9 = ___acc0;
		int64_t L_10 = *((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)3), 8)))));
		uint8_t* L_11 = ___secret1;
		uint64_t L_12;
		L_12 = xxHash3_Mix2Acc_mD770DD066F75B7813FE9495ED10135605D6F63A1_inline(L_8, L_10, ((uint8_t*)il2cpp_codegen_add((intptr_t)L_11, ((int32_t)16))), NULL);
		// result64 += Mix2Acc(acc[4], acc[5], secret + 32);
		uint64_t* L_13 = ___acc0;
		int64_t L_14 = *((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)4), 8)))));
		uint64_t* L_15 = ___acc0;
		int64_t L_16 = *((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)5), 8)))));
		uint8_t* L_17 = ___secret1;
		uint64_t L_18;
		L_18 = xxHash3_Mix2Acc_mD770DD066F75B7813FE9495ED10135605D6F63A1_inline(L_14, L_16, ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((int32_t)32))), NULL);
		// result64 += Mix2Acc(acc[6], acc[7], secret + 48);
		uint64_t* L_19 = ___acc0;
		int64_t L_20 = *((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)6), 8)))));
		uint64_t* L_21 = ___acc0;
		int64_t L_22 = *((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)7), 8)))));
		uint8_t* L_23 = ___secret1;
		uint64_t L_24;
		L_24 = xxHash3_Mix2Acc_mD770DD066F75B7813FE9495ED10135605D6F63A1_inline(L_20, L_22, ((uint8_t*)il2cpp_codegen_add((intptr_t)L_23, ((int32_t)48))), NULL);
		// return Avalanche(result64);
		uint64_t L_25;
		L_25 = xxHash3_Avalanche_mBE469AA9C171E827977A1C02AB4F54450CB6B382_inline(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_0, (int64_t)L_6)), (int64_t)L_12)), (int64_t)L_18)), (int64_t)L_24)), NULL);
		return L_25;
	}
}
// System.Void Unity.Collections.xxHash3::DefaultHashLongInternalLoop(System.UInt64*,System.Byte*,System.Byte*,System.Int64,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void xxHash3_DefaultHashLongInternalLoop_m3D2C33BD3DA90FA61B83E38DE7D85F519FF5B103 (uint64_t* ___acc0, uint8_t* ___input1, uint8_t* ___dest2, int64_t ___length3, uint8_t* ___secret4, int32_t ___isHash645, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	uint8_t* V_2 = NULL;
	int32_t V_3 = 0;
	int64_t V_4 = 0;
	uint8_t* G_B3_0 = NULL;
	uint64_t* G_B3_1 = NULL;
	uint8_t* G_B2_0 = NULL;
	uint64_t* G_B2_1 = NULL;
	uintptr_t G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	uint8_t* G_B4_1 = NULL;
	uint64_t* G_B4_2 = NULL;
	uint8_t* G_B8_0 = NULL;
	uint64_t* G_B8_1 = NULL;
	uint8_t* G_B7_0 = NULL;
	uint64_t* G_B7_1 = NULL;
	uintptr_t G_B9_0;
	memset((&G_B9_0), 0, sizeof(G_B9_0));
	uint8_t* G_B9_1 = NULL;
	uint64_t* G_B9_2 = NULL;
	{
		// var nb_blocks = (length-1) / BLOCK_LEN;
		int64_t L_0 = ___length3;
		V_0 = ((int64_t)(((int64_t)il2cpp_codegen_subtract(L_0, ((int64_t)1)))/((int64_t)((int32_t)1024))));
		// for (int n = 0; n < nb_blocks; n++)
		V_3 = 0;
		goto IL_004d;
	}

IL_0010:
	{
		// DefaultAccumulate(acc, input + n * BLOCK_LEN, dest == null ? null : dest + n * BLOCK_LEN, secret,
		//     NB_ROUNDS, isHash64);
		uint64_t* L_1 = ___acc0;
		uint8_t* L_2 = ___input1;
		int32_t L_3 = V_3;
		uint8_t* L_4 = ___dest2;
		G_B2_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_2, ((int32_t)il2cpp_codegen_multiply(L_3, ((int32_t)1024)))));
		G_B2_1 = L_1;
		if ((((intptr_t)L_4) == ((intptr_t)((uintptr_t)0))))
		{
			G_B3_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_2, ((int32_t)il2cpp_codegen_multiply(L_3, ((int32_t)1024)))));
			G_B3_1 = L_1;
			goto IL_002a;
		}
	}
	{
		uint8_t* L_5 = ___dest2;
		int32_t L_6 = V_3;
		G_B4_0 = ((uintptr_t)(intptr_t)(((uint8_t*)il2cpp_codegen_add((intptr_t)L_5, ((int32_t)il2cpp_codegen_multiply(L_6, ((int32_t)1024)))))));
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_002c;
	}

IL_002a:
	{
		G_B4_0 = ((uintptr_t)0);
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_002c:
	{
		uint8_t* L_7 = ___secret4;
		int32_t L_8 = ___isHash645;
		xxHash3_DefaultAccumulate_m7DA7DD552587A8E4F8DDF6ECF15A9E3BA9F0FF99(G_B4_2, G_B4_1, (uint8_t*)G_B4_0, L_7, ((int64_t)((int32_t)16)), L_8, NULL);
		// DefaultScrambleAcc(acc, secret + SECRET_KEY_SIZE - STRIPE_LEN);
		uint64_t* L_9 = ___acc0;
		uint8_t* L_10 = ___secret4;
		xxHash3_DefaultScrambleAcc_m0C7101A15C7DC90645515C5AD54A93064925CCE9(L_9, ((uint8_t*)il2cpp_codegen_subtract((intptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_10, ((int32_t)192))), ((int32_t)64))), NULL);
		// for (int n = 0; n < nb_blocks; n++)
		int32_t L_11 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004d:
	{
		// for (int n = 0; n < nb_blocks; n++)
		int32_t L_12 = V_3;
		int64_t L_13 = V_0;
		if ((((int64_t)((int64_t)L_12)) < ((int64_t)L_13)))
		{
			goto IL_0010;
		}
	}
	{
		// var nbStripes = ((length-1) - (BLOCK_LEN * nb_blocks)) / STRIPE_LEN;
		int64_t L_14 = ___length3;
		int64_t L_15 = V_0;
		V_1 = ((int64_t)(((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_subtract(L_14, ((int64_t)1))), ((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)1024)), L_15))))/((int64_t)((int32_t)64))));
		// DefaultAccumulate(acc, input + nb_blocks * BLOCK_LEN, dest == null ? null : dest + nb_blocks * BLOCK_LEN,
		//     secret, nbStripes, isHash64);
		uint64_t* L_16 = ___acc0;
		uint8_t* L_17 = ___input1;
		int64_t L_18 = V_0;
		uint8_t* L_19 = ___dest2;
		G_B7_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)((int64_t)il2cpp_codegen_multiply(L_18, ((int64_t)((int32_t)1024)))))));
		G_B7_1 = L_16;
		if ((((intptr_t)L_19) == ((intptr_t)((uintptr_t)0))))
		{
			G_B8_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)((int64_t)il2cpp_codegen_multiply(L_18, ((int64_t)((int32_t)1024)))))));
			G_B8_1 = L_16;
			goto IL_0082;
		}
	}
	{
		uint8_t* L_20 = ___dest2;
		int64_t L_21 = V_0;
		G_B9_0 = ((uintptr_t)(intptr_t)(((uint8_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)((int64_t)il2cpp_codegen_multiply(L_21, ((int64_t)((int32_t)1024)))))))));
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		goto IL_0084;
	}

IL_0082:
	{
		G_B9_0 = ((uintptr_t)0);
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
	}

IL_0084:
	{
		uint8_t* L_22 = ___secret4;
		int64_t L_23 = V_1;
		int32_t L_24 = ___isHash645;
		xxHash3_DefaultAccumulate_m7DA7DD552587A8E4F8DDF6ECF15A9E3BA9F0FF99(G_B9_2, G_B9_1, (uint8_t*)G_B9_0, L_22, L_23, L_24, NULL);
		// var p = input + length - STRIPE_LEN;
		uint8_t* L_25 = ___input1;
		int64_t L_26 = ___length3;
		V_2 = ((uint8_t*)il2cpp_codegen_subtract((intptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)L_26))), ((int32_t)64)));
		// DefaultAccumulate512(acc, p, null, secret + SECRET_KEY_SIZE - STRIPE_LEN - SECRET_LASTACC_START,
		//     isHash64);
		uint64_t* L_27 = ___acc0;
		uint8_t* L_28 = V_2;
		uint8_t* L_29 = ___secret4;
		int32_t L_30 = ___isHash645;
		xxHash3_DefaultAccumulate512_mEDA479285F49F88B0C611808FD0DF25DAEC7FD30(L_27, L_28, (uint8_t*)((uintptr_t)0), ((uint8_t*)il2cpp_codegen_subtract((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_29, ((int32_t)192))), ((int32_t)64))), 7)), L_30, NULL);
		// if (dest != null)
		uint8_t* L_31 = ___dest2;
		if ((((intptr_t)L_31) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_00d5;
		}
	}
	{
		// var remaining = length % STRIPE_LEN;
		int64_t L_32 = ___length3;
		V_4 = ((int64_t)(L_32%((int64_t)((int32_t)64))));
		// if (remaining != 0)
		int64_t L_33 = V_4;
		if (!L_33)
		{
			goto IL_00d5;
		}
	}
	{
		// UnsafeUtility.MemCpy(dest + length - remaining, input + length - remaining, remaining);
		uint8_t* L_34 = ___dest2;
		int64_t L_35 = ___length3;
		int64_t L_36 = V_4;
		uint8_t* L_37 = ___input1;
		int64_t L_38 = ___length3;
		int64_t L_39 = V_4;
		int64_t L_40 = V_4;
		UnsafeUtility_MemCpy_m019E657B952C27F705607F0F3D371EEE526B716B((void*)((uint8_t*)il2cpp_codegen_subtract((intptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_34, ((intptr_t)L_35))), ((intptr_t)L_36))), (void*)((uint8_t*)il2cpp_codegen_subtract((intptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)L_38))), ((intptr_t)L_39))), L_40, NULL);
	}

IL_00d5:
	{
		// }
		return;
	}
}
// System.Void Unity.Collections.xxHash3::DefaultAccumulate(System.UInt64*,System.Byte*,System.Byte*,System.Byte*,System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void xxHash3_DefaultAccumulate_m7DA7DD552587A8E4F8DDF6ECF15A9E3BA9F0FF99 (uint64_t* ___acc0, uint8_t* ___input1, uint8_t* ___dest2, uint8_t* ___secret3, int64_t ___nbStripes4, int32_t ___isHash645, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint8_t* G_B3_0 = NULL;
	uint64_t* G_B3_1 = NULL;
	uint8_t* G_B2_0 = NULL;
	uint64_t* G_B2_1 = NULL;
	uintptr_t G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	uint8_t* G_B4_1 = NULL;
	uint64_t* G_B4_2 = NULL;
	{
		// for (int n = 0; n < nbStripes; n++)
		V_0 = 0;
		goto IL_002a;
	}

IL_0004:
	{
		// DefaultAccumulate512(acc, input + n * STRIPE_LEN, dest == null ? null : dest + n * STRIPE_LEN,
		//     secret + n * SECRET_CONSUME_RATE, isHash64);
		uint64_t* L_0 = ___acc0;
		uint8_t* L_1 = ___input1;
		int32_t L_2 = V_0;
		uint8_t* L_3 = ___dest2;
		G_B2_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, ((int32_t)il2cpp_codegen_multiply(L_2, ((int32_t)64)))));
		G_B2_1 = L_0;
		if ((((intptr_t)L_3) == ((intptr_t)((uintptr_t)0))))
		{
			G_B3_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, ((int32_t)il2cpp_codegen_multiply(L_2, ((int32_t)64)))));
			G_B3_1 = L_0;
			goto IL_0018;
		}
	}
	{
		uint8_t* L_4 = ___dest2;
		int32_t L_5 = V_0;
		G_B4_0 = ((uintptr_t)(intptr_t)(((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, ((int32_t)il2cpp_codegen_multiply(L_5, ((int32_t)64)))))));
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_001a;
	}

IL_0018:
	{
		G_B4_0 = ((uintptr_t)0);
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_001a:
	{
		uint8_t* L_6 = ___secret3;
		int32_t L_7 = V_0;
		int32_t L_8 = ___isHash645;
		xxHash3_DefaultAccumulate512_mEDA479285F49F88B0C611808FD0DF25DAEC7FD30(G_B4_2, G_B4_1, (uint8_t*)G_B4_0, ((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, ((int32_t)il2cpp_codegen_multiply(L_7, 8)))), L_8, NULL);
		// for (int n = 0; n < nbStripes; n++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_002a:
	{
		// for (int n = 0; n < nbStripes; n++)
		int32_t L_10 = V_0;
		int64_t L_11 = ___nbStripes4;
		if ((((int64_t)((int64_t)L_10)) < ((int64_t)L_11)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Collections.xxHash3::DefaultAccumulate512(System.UInt64*,System.Byte*,System.Byte*,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void xxHash3_DefaultAccumulate512_mEDA479285F49F88B0C611808FD0DF25DAEC7FD30 (uint64_t* ___acc0, uint8_t* ___input1, uint8_t* ___dest2, uint8_t* ___secret3, int32_t ___isHash644, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	{
		// var count = ACC_NB;
		V_0 = 8;
		// for (var i = 0; i < count; i++)
		V_1 = 0;
		goto IL_0058;
	}

IL_0006:
	{
		// var data_val = Read64LE(input + 8 * i);
		uint8_t* L_0 = ___input1;
		int32_t L_1 = V_1;
		uint64_t L_2;
		L_2 = xxHash3_Read64LE_m142BE5079FBF51DF81C53FAB5E7021ECA764DC65_inline((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(8, L_1)))), NULL);
		V_2 = L_2;
		// var data_key = data_val ^ Read64LE(secret + i * 8);
		uint64_t L_3 = V_2;
		uint8_t* L_4 = ___secret3;
		int32_t L_5 = V_1;
		uint64_t L_6;
		L_6 = xxHash3_Read64LE_m142BE5079FBF51DF81C53FAB5E7021ECA764DC65_inline((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, ((int32_t)il2cpp_codegen_multiply(L_5, 8)))), NULL);
		V_3 = ((int64_t)((int64_t)L_3^(int64_t)L_6));
		// if (dest != null)
		uint8_t* L_7 = ___dest2;
		if ((((intptr_t)L_7) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_002e;
		}
	}
	{
		// Write64LE(dest + 8 * i, data_val);
		uint8_t* L_8 = ___dest2;
		int32_t L_9 = V_1;
		uint64_t L_10 = V_2;
		xxHash3_Write64LE_m081CFB5625644F1EA14C692C00DD342F9D8CFF8F_inline((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_8, ((int32_t)il2cpp_codegen_multiply(8, L_9)))), L_10, NULL);
	}

IL_002e:
	{
		// acc[i ^ 1] += data_val;
		uint64_t* L_11 = ___acc0;
		int32_t L_12 = V_1;
		uint64_t* L_13 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)(L_12^1))), 8))));
		int64_t L_14 = *((int64_t*)L_13);
		uint64_t L_15 = V_2;
		*((int64_t*)L_13) = (int64_t)((int64_t)il2cpp_codegen_add(L_14, (int64_t)L_15));
		// acc[i] += Mul32To64((uint) (data_key & 0xFFFFFFFF), (uint) (data_key >> 32));
		uint64_t* L_16 = ___acc0;
		int32_t L_17 = V_1;
		uint64_t* L_18 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 8))));
		int64_t L_19 = *((int64_t*)L_18);
		uint64_t L_20 = V_3;
		uint64_t L_21 = V_3;
		uint64_t L_22;
		L_22 = xxHash3_Mul32To64_m658CA5D40AAB84E56DF2C0433A34E209F3C236DE_inline(((int32_t)(uint32_t)((int64_t)((int64_t)L_20&((int64_t)(uint64_t)((uint32_t)(-1)))))), ((int32_t)(uint32_t)((int64_t)((uint64_t)L_21>>((int32_t)32)))), NULL);
		*((int64_t*)L_18) = (int64_t)((int64_t)il2cpp_codegen_add(L_19, (int64_t)L_22));
		// for (var i = 0; i < count; i++)
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0058:
	{
		// for (var i = 0; i < count; i++)
		int32_t L_24 = V_1;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0006;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Collections.xxHash3::DefaultScrambleAcc(System.UInt64*,System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void xxHash3_DefaultScrambleAcc_m0C7101A15C7DC90645515C5AD54A93064925CCE9 (uint64_t* ___acc0, uint8_t* ___secret1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	{
		// for (var i = 0; i < ACC_NB; i++)
		V_0 = 0;
		goto IL_0039;
	}

IL_0004:
	{
		// var key64 = Read64LE(secret + 8 * i);
		uint8_t* L_0 = ___secret1;
		int32_t L_1 = V_0;
		uint64_t L_2;
		L_2 = xxHash3_Read64LE_m142BE5079FBF51DF81C53FAB5E7021ECA764DC65_inline((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(8, L_1)))), NULL);
		V_1 = L_2;
		// var acc64 = acc[i];
		uint64_t* L_3 = ___acc0;
		int32_t L_4 = V_0;
		int64_t L_5 = *((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_4), 8)))));
		V_2 = L_5;
		// acc64 = XorShift64(acc64, 47);
		uint64_t L_6 = V_2;
		uint64_t L_7;
		L_7 = xxHash3_XorShift64_m60FE95AE47D67ACD4AA70E8C3AE81A92C3C89955_inline(L_6, ((int32_t)47), NULL);
		V_2 = L_7;
		// acc64 ^= key64;
		uint64_t L_8 = V_2;
		uint64_t L_9 = V_1;
		V_2 = ((int64_t)((int64_t)L_8^(int64_t)L_9));
		// acc64 *= PRIME32_1;
		uint64_t L_10 = V_2;
		V_2 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_10, ((int64_t)(uint64_t)((uint32_t)((int32_t)-1640531535)))));
		// acc[i] = acc64;
		uint64_t* L_11 = ___acc0;
		int32_t L_12 = V_0;
		uint64_t L_13 = V_2;
		*((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_12), 8))))) = (int64_t)L_13;
		// for (var i = 0; i < ACC_NB; i++)
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0039:
	{
		// for (var i = 0; i < ACC_NB; i++)
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) < ((int32_t)8)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.UInt64 Unity.Collections.xxHash3::Hash64Long$BurstManaged(System.Byte*,System.Byte*,System.Int64,System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t xxHash3_Hash64LongU24BurstManaged_mD990588FAC78D5CBFC165A8404B27BDE4FB2B3E1 (uint8_t* ___input0, uint8_t* ___dest1, int64_t ___length2, uint8_t* ___secret3, const RuntimeMethod* method) 
{
	uint64_t* V_0 = NULL;
	{
		// var addr = stackalloc byte[STRIPE_LEN + 31];
		int8_t* L_0 = (int8_t*) alloca(((uintptr_t)((int32_t)95)));
		memset(L_0, 0, ((uintptr_t)((int32_t)95)));
		// var acc = (ulong*) ((ulong) addr + 31 & 0xFFFFFFFFFFFFFFE0); // Aligned the allocated address on 32 bytes
		V_0 = (uint64_t*)((uintptr_t)((int64_t)(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)(intptr_t)(L_0)), ((int64_t)((int32_t)31))))&((int64_t)((int32_t)-32)))));
		// acc[0] = PRIME32_3;
		uint64_t* L_1 = V_0;
		*((int64_t*)L_1) = (int64_t)((int64_t)(uint64_t)((uint32_t)((int32_t)-1028477379)));
		// acc[1] = PRIME64_1;
		uint64_t* L_2 = V_0;
		*((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_2, 8))) = (int64_t)((int64_t)-7046029288634856825LL);
		// acc[2] = PRIME64_2;
		uint64_t* L_3 = V_0;
		*((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 8))))) = (int64_t)((int64_t)-4417276706812531889LL);
		// acc[3] = PRIME64_3;
		uint64_t* L_4 = V_0;
		*((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)3), 8))))) = (int64_t)((int64_t)1609587929392839161LL);
		// acc[4] = PRIME64_4;
		uint64_t* L_5 = V_0;
		*((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)4), 8))))) = (int64_t)((int64_t)-8796714831421723037LL);
		// acc[5] = PRIME32_2;
		uint64_t* L_6 = V_0;
		*((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)5), 8))))) = (int64_t)((int64_t)(uint64_t)((uint32_t)((int32_t)-2048144777)));
		// acc[6] = PRIME64_5;
		uint64_t* L_7 = V_0;
		*((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)6), 8))))) = (int64_t)((int64_t)2870177450012600261LL);
		// acc[7] = PRIME32_1;
		uint64_t* L_8 = V_0;
		*((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)7), 8))))) = (int64_t)((int64_t)(uint64_t)((uint32_t)((int32_t)-1640531535)));
		// if (X86.Avx2.IsAvx2Supported)
		bool L_9;
		L_9 = Avx2_get_IsAvx2Supported_m768CA5D24C6148EBDF5E2FB487026D1A126D14E5(NULL);
		if (!L_9)
		{
			goto IL_0093;
		}
	}
	{
		// Avx2HashLongInternalLoop(acc, input, dest, length, secret, 1);
		uint64_t* L_10 = V_0;
		uint8_t* L_11 = ___input0;
		uint8_t* L_12 = ___dest1;
		int64_t L_13 = ___length2;
		uint8_t* L_14 = ___secret3;
		xxHash3_Avx2HashLongInternalLoop_m442746594450DC1E0B61061B9F3D1032C2D57529(L_10, L_11, L_12, L_13, L_14, 1, NULL);
		goto IL_009e;
	}

IL_0093:
	{
		// DefaultHashLongInternalLoop(acc, input, dest, length, secret, 1);
		uint64_t* L_15 = V_0;
		uint8_t* L_16 = ___input0;
		uint8_t* L_17 = ___dest1;
		int64_t L_18 = ___length2;
		uint8_t* L_19 = ___secret3;
		xxHash3_DefaultHashLongInternalLoop_m3D2C33BD3DA90FA61B83E38DE7D85F519FF5B103(L_15, L_16, L_17, L_18, L_19, 1, NULL);
	}

IL_009e:
	{
		// return MergeAcc(acc, secret + SECRET_MERGEACCS_START, (ulong) length * PRIME64_1);
		uint64_t* L_20 = V_0;
		uint8_t* L_21 = ___secret3;
		int64_t L_22 = ___length2;
		uint64_t L_23;
		L_23 = xxHash3_MergeAcc_m95092AEC7B1C5BB19BF70E55CA030CAE37C79161(L_20, ((uint8_t*)il2cpp_codegen_add((intptr_t)L_21, ((int32_t)11))), ((int64_t)il2cpp_codegen_multiply(L_22, ((int64_t)-7046029288634856825LL))), NULL);
		return L_23;
	}
}
// System.Void Unity.Collections.xxHash3::Hash128Long$BurstManaged(System.Byte*,System.Byte*,System.Int64,System.Byte*,Unity.Mathematics.uint4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void xxHash3_Hash128LongU24BurstManaged_m08DB7B8209EBE3584489E17EBB40B64D29F9C9B4 (uint8_t* ___input0, uint8_t* ___dest1, int64_t ___length2, uint8_t* ___secret3, uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9* ___result4, const RuntimeMethod* method) 
{
	uint64_t* V_0 = NULL;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	{
		// var addr = stackalloc byte[STRIPE_LEN + 31];
		int8_t* L_0 = (int8_t*) alloca(((uintptr_t)((int32_t)95)));
		memset(L_0, 0, ((uintptr_t)((int32_t)95)));
		// var acc = (ulong*) ((ulong) addr + 31 & 0xFFFFFFFFFFFFFFE0); // Aligned the allocated address on 32 bytes
		V_0 = (uint64_t*)((uintptr_t)((int64_t)(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)(intptr_t)(L_0)), ((int64_t)((int32_t)31))))&((int64_t)((int32_t)-32)))));
		// acc[0] = PRIME32_3;
		uint64_t* L_1 = V_0;
		*((int64_t*)L_1) = (int64_t)((int64_t)(uint64_t)((uint32_t)((int32_t)-1028477379)));
		// acc[1] = PRIME64_1;
		uint64_t* L_2 = V_0;
		*((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_2, 8))) = (int64_t)((int64_t)-7046029288634856825LL);
		// acc[2] = PRIME64_2;
		uint64_t* L_3 = V_0;
		*((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 8))))) = (int64_t)((int64_t)-4417276706812531889LL);
		// acc[3] = PRIME64_3;
		uint64_t* L_4 = V_0;
		*((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)3), 8))))) = (int64_t)((int64_t)1609587929392839161LL);
		// acc[4] = PRIME64_4;
		uint64_t* L_5 = V_0;
		*((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)4), 8))))) = (int64_t)((int64_t)-8796714831421723037LL);
		// acc[5] = PRIME32_2;
		uint64_t* L_6 = V_0;
		*((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)5), 8))))) = (int64_t)((int64_t)(uint64_t)((uint32_t)((int32_t)-2048144777)));
		// acc[6] = PRIME64_5;
		uint64_t* L_7 = V_0;
		*((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)6), 8))))) = (int64_t)((int64_t)2870177450012600261LL);
		// acc[7] = PRIME32_1;
		uint64_t* L_8 = V_0;
		*((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)7), 8))))) = (int64_t)((int64_t)(uint64_t)((uint32_t)((int32_t)-1640531535)));
		// if (X86.Avx2.IsAvx2Supported)
		bool L_9;
		L_9 = Avx2_get_IsAvx2Supported_m768CA5D24C6148EBDF5E2FB487026D1A126D14E5(NULL);
		if (!L_9)
		{
			goto IL_0093;
		}
	}
	{
		// Avx2HashLongInternalLoop(acc, input, dest, length, secret, 0);
		uint64_t* L_10 = V_0;
		uint8_t* L_11 = ___input0;
		uint8_t* L_12 = ___dest1;
		int64_t L_13 = ___length2;
		uint8_t* L_14 = ___secret3;
		xxHash3_Avx2HashLongInternalLoop_m442746594450DC1E0B61061B9F3D1032C2D57529(L_10, L_11, L_12, L_13, L_14, 0, NULL);
		goto IL_009e;
	}

IL_0093:
	{
		// DefaultHashLongInternalLoop(acc, input, dest, length, secret, 0);
		uint64_t* L_15 = V_0;
		uint8_t* L_16 = ___input0;
		uint8_t* L_17 = ___dest1;
		int64_t L_18 = ___length2;
		uint8_t* L_19 = ___secret3;
		xxHash3_DefaultHashLongInternalLoop_m3D2C33BD3DA90FA61B83E38DE7D85F519FF5B103(L_15, L_16, L_17, L_18, L_19, 0, NULL);
	}

IL_009e:
	{
		// var low64 = MergeAcc(acc, secret + SECRET_MERGEACCS_START, (ulong) length * PRIME64_1);
		uint64_t* L_20 = V_0;
		uint8_t* L_21 = ___secret3;
		int64_t L_22 = ___length2;
		uint64_t L_23;
		L_23 = xxHash3_MergeAcc_m95092AEC7B1C5BB19BF70E55CA030CAE37C79161(L_20, ((uint8_t*)il2cpp_codegen_add((intptr_t)L_21, ((int32_t)11))), ((int64_t)il2cpp_codegen_multiply(L_22, ((int64_t)-7046029288634856825LL))), NULL);
		V_1 = L_23;
		// var high64 = MergeAcc(acc, secret + SECRET_KEY_SIZE - 64 - SECRET_MERGEACCS_START,
		//     ~((ulong) length * PRIME64_2));
		uint64_t* L_24 = V_0;
		uint8_t* L_25 = ___secret3;
		int64_t L_26 = ___length2;
		uint64_t L_27;
		L_27 = xxHash3_MergeAcc_m95092AEC7B1C5BB19BF70E55CA030CAE37C79161(L_24, ((uint8_t*)il2cpp_codegen_subtract((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_25, ((int32_t)192))), ((int32_t)64))), ((int32_t)11))), ((~((int64_t)il2cpp_codegen_multiply(L_26, ((int64_t)-4417276706812531889LL))))), NULL);
		V_2 = L_27;
		// result = ToUint4(low64, high64);
		uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9* L_28 = ___result4;
		uint64_t L_29 = V_1;
		uint64_t L_30 = V_2;
		uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 L_31;
		L_31 = xxHash3_ToUint4_m6DA767007FADBF9532A2E5173996473BEDE21220(L_29, L_30, NULL);
		*(uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9*)L_28 = L_31;
		// }
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
uint64_t Hash64Long_00000769U24PostfixBurstDelegate_Invoke_m5762A04B0055F54E0F93FD66B7B395D0F42086F3_Multicast(Hash64Long_00000769U24PostfixBurstDelegate_t6B1CD155B058EDDE4C693B8A52B462FBC4049F62* __this, uint8_t* ___input0, uint8_t* ___dest1, int64_t ___length2, uint8_t* ___secret3, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	uint64_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Hash64Long_00000769U24PostfixBurstDelegate_t6B1CD155B058EDDE4C693B8A52B462FBC4049F62* currentDelegate = reinterpret_cast<Hash64Long_00000769U24PostfixBurstDelegate_t6B1CD155B058EDDE4C693B8A52B462FBC4049F62*>(delegatesToInvoke[i]);
		typedef uint64_t (*FunctionPointerType) (RuntimeObject*, uint8_t*, uint8_t*, int64_t, uint8_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___input0, ___dest1, ___length2, ___secret3, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
uint64_t Hash64Long_00000769U24PostfixBurstDelegate_Invoke_m5762A04B0055F54E0F93FD66B7B395D0F42086F3_Open(Hash64Long_00000769U24PostfixBurstDelegate_t6B1CD155B058EDDE4C693B8A52B462FBC4049F62* __this, uint8_t* ___input0, uint8_t* ___dest1, int64_t ___length2, uint8_t* ___secret3, const RuntimeMethod* method)
{
	typedef uint64_t (*FunctionPointerType) (uint8_t*, uint8_t*, int64_t, uint8_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___input0, ___dest1, ___length2, ___secret3, method);
}
uint64_t Hash64Long_00000769U24PostfixBurstDelegate_Invoke_m5762A04B0055F54E0F93FD66B7B395D0F42086F3_OpenStaticInvoker(Hash64Long_00000769U24PostfixBurstDelegate_t6B1CD155B058EDDE4C693B8A52B462FBC4049F62* __this, uint8_t* ___input0, uint8_t* ___dest1, int64_t ___length2, uint8_t* ___secret3, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< uint64_t, uint8_t*, uint8_t*, int64_t, uint8_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___input0, ___dest1, ___length2, ___secret3);
}
uint64_t Hash64Long_00000769U24PostfixBurstDelegate_Invoke_m5762A04B0055F54E0F93FD66B7B395D0F42086F3_ClosedStaticInvoker(Hash64Long_00000769U24PostfixBurstDelegate_t6B1CD155B058EDDE4C693B8A52B462FBC4049F62* __this, uint8_t* ___input0, uint8_t* ___dest1, int64_t ___length2, uint8_t* ___secret3, const RuntimeMethod* method)
{
	return InvokerFuncInvoker5< uint64_t, RuntimeObject*, uint8_t*, uint8_t*, int64_t, uint8_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___input0, ___dest1, ___length2, ___secret3);
}
IL2CPP_EXTERN_C  uint64_t DelegatePInvokeWrapper_Hash64Long_00000769U24PostfixBurstDelegate_t6B1CD155B058EDDE4C693B8A52B462FBC4049F62 (Hash64Long_00000769U24PostfixBurstDelegate_t6B1CD155B058EDDE4C693B8A52B462FBC4049F62* __this, uint8_t* ___input0, uint8_t* ___dest1, int64_t ___length2, uint8_t* ___secret3, const RuntimeMethod* method)
{
	typedef uint64_t (DEFAULT_CALL *PInvokeFunc)(uint8_t*, uint8_t*, int64_t, uint8_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	uint64_t returnValue = il2cppPInvokeFunc(___input0, ___dest1, ___length2, ___secret3);

	return returnValue;
}
// System.Void Unity.Collections.xxHash3/Unity.Collections.Hash64Long_00000769$PostfixBurstDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hash64Long_00000769U24PostfixBurstDelegate__ctor_mAB0BAF9264A023415CA8D3BC5DF71C4BF8071D2C (Hash64Long_00000769U24PostfixBurstDelegate_t6B1CD155B058EDDE4C693B8A52B462FBC4049F62* __this, RuntimeObject* p0, intptr_t p1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)p1);
	__this->___method_3 = p1;
	__this->___m_target_2 = p0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)p0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)p1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)p1))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)p1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Hash64Long_00000769U24PostfixBurstDelegate_Invoke_m5762A04B0055F54E0F93FD66B7B395D0F42086F3_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&Hash64Long_00000769U24PostfixBurstDelegate_Invoke_m5762A04B0055F54E0F93FD66B7B395D0F42086F3_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Hash64Long_00000769U24PostfixBurstDelegate_Invoke_m5762A04B0055F54E0F93FD66B7B395D0F42086F3_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&Hash64Long_00000769U24PostfixBurstDelegate_Invoke_m5762A04B0055F54E0F93FD66B7B395D0F42086F3_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&Hash64Long_00000769U24PostfixBurstDelegate_Invoke_m5762A04B0055F54E0F93FD66B7B395D0F42086F3_Multicast;
}
// System.UInt64 Unity.Collections.xxHash3/Unity.Collections.Hash64Long_00000769$PostfixBurstDelegate::Invoke(System.Byte*,System.Byte*,System.Int64,System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Hash64Long_00000769U24PostfixBurstDelegate_Invoke_m5762A04B0055F54E0F93FD66B7B395D0F42086F3 (Hash64Long_00000769U24PostfixBurstDelegate_t6B1CD155B058EDDE4C693B8A52B462FBC4049F62* __this, uint8_t* ___input0, uint8_t* ___dest1, int64_t ___length2, uint8_t* ___secret3, const RuntimeMethod* method) 
{
	typedef uint64_t (*FunctionPointerType) (RuntimeObject*, uint8_t*, uint8_t*, int64_t, uint8_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___input0, ___dest1, ___length2, ___secret3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Collections.xxHash3/Unity.Collections.Hash64Long_00000769$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hash64Long_00000769U24BurstDirectCall_GetFunctionPointerDiscard_m6A2C3CDD93F7E1338C11540FAD304332C8629318 (intptr_t* p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hash64Long_00000769U24BurstDirectCall_tCB68055E3DECA22A01777D16D1C3024A66FB6D94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Hash64Long_00000769U24BurstDirectCall_tCB68055E3DECA22A01777D16D1C3024A66FB6D94_il2cpp_TypeInfo_var);
		intptr_t L_0 = ((Hash64Long_00000769U24BurstDirectCall_tCB68055E3DECA22A01777D16D1C3024A66FB6D94_StaticFields*)il2cpp_codegen_static_fields_for(Hash64Long_00000769U24BurstDirectCall_tCB68055E3DECA22A01777D16D1C3024A66FB6D94_il2cpp_TypeInfo_var))->___Pointer_0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Hash64Long_00000769U24BurstDirectCall_tCB68055E3DECA22A01777D16D1C3024A66FB6D94_il2cpp_TypeInfo_var);
		intptr_t L_1 = ((Hash64Long_00000769U24BurstDirectCall_tCB68055E3DECA22A01777D16D1C3024A66FB6D94_StaticFields*)il2cpp_codegen_static_fields_for(Hash64Long_00000769U24BurstDirectCall_tCB68055E3DECA22A01777D16D1C3024A66FB6D94_il2cpp_TypeInfo_var))->___DeferredCompilation_1;
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		void* L_2;
		L_2 = BurstCompiler_GetILPPMethodFunctionPointer_m850347229EDA4058D224F885446BEE0137831BD0(L_1, NULL);
		((Hash64Long_00000769U24BurstDirectCall_tCB68055E3DECA22A01777D16D1C3024A66FB6D94_StaticFields*)il2cpp_codegen_static_fields_for(Hash64Long_00000769U24BurstDirectCall_tCB68055E3DECA22A01777D16D1C3024A66FB6D94_il2cpp_TypeInfo_var))->___Pointer_0 = (intptr_t)L_2;
	}

IL_0019:
	{
		intptr_t* L_3 = p0;
		il2cpp_codegen_runtime_class_init_inline(Hash64Long_00000769U24BurstDirectCall_tCB68055E3DECA22A01777D16D1C3024A66FB6D94_il2cpp_TypeInfo_var);
		intptr_t L_4 = ((Hash64Long_00000769U24BurstDirectCall_tCB68055E3DECA22A01777D16D1C3024A66FB6D94_StaticFields*)il2cpp_codegen_static_fields_for(Hash64Long_00000769U24BurstDirectCall_tCB68055E3DECA22A01777D16D1C3024A66FB6D94_il2cpp_TypeInfo_var))->___Pointer_0;
		*((intptr_t*)L_3) = (intptr_t)L_4;
		return;
	}
}
// System.IntPtr Unity.Collections.xxHash3/Unity.Collections.Hash64Long_00000769$BurstDirectCall::GetFunctionPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Hash64Long_00000769U24BurstDirectCall_GetFunctionPointer_m4B2527C1C7A26E4C4DDEE5085BA74268B41ABF1F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hash64Long_00000769U24BurstDirectCall_tCB68055E3DECA22A01777D16D1C3024A66FB6D94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		V_0 = ((intptr_t)0);
		il2cpp_codegen_runtime_class_init_inline(Hash64Long_00000769U24BurstDirectCall_tCB68055E3DECA22A01777D16D1C3024A66FB6D94_il2cpp_TypeInfo_var);
		Hash64Long_00000769U24BurstDirectCall_GetFunctionPointerDiscard_m6A2C3CDD93F7E1338C11540FAD304332C8629318((&V_0), NULL);
		intptr_t L_0 = V_0;
		return L_0;
	}
}
// System.Void Unity.Collections.xxHash3/Unity.Collections.Hash64Long_00000769$BurstDirectCall::Constructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hash64Long_00000769U24BurstDirectCall_Constructor_m5DA8CD882874F9BB78C13CA1D3FC15C62447AEEC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hash64Long_00000769U24BurstDirectCall_tCB68055E3DECA22A01777D16D1C3024A66FB6D94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hash64Long_00000769U24PostfixBurstDelegate_t6B1CD155B058EDDE4C693B8A52B462FBC4049F62_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&xxHash3_Hash64LongU24BurstManaged_mD990588FAC78D5CBFC165A8404B27BDE4FB2B3E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&xxHash3_Hash64Long_m139E7D0E4F9BEE31A67C6B0DA3D89AA93773D4B9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 L_0 = { reinterpret_cast<intptr_t> (xxHash3_Hash64Long_m139E7D0E4F9BEE31A67C6B0DA3D89AA93773D4B9_RuntimeMethod_var) };
		RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 L_1 = { reinterpret_cast<intptr_t> (xxHash3_Hash64LongU24BurstManaged_mD990588FAC78D5CBFC165A8404B27BDE4FB2B3E1_RuntimeMethod_var) };
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Hash64Long_00000769U24PostfixBurstDelegate_t6B1CD155B058EDDE4C693B8A52B462FBC4049F62_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = BurstCompiler_CompileILPPMethod_m2ADEDFEFDB17376C1A1FFD7C2D1A0C242AB78A8B(L_0, L_1, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Hash64Long_00000769U24BurstDirectCall_tCB68055E3DECA22A01777D16D1C3024A66FB6D94_il2cpp_TypeInfo_var);
		((Hash64Long_00000769U24BurstDirectCall_tCB68055E3DECA22A01777D16D1C3024A66FB6D94_StaticFields*)il2cpp_codegen_static_fields_for(Hash64Long_00000769U24BurstDirectCall_tCB68055E3DECA22A01777D16D1C3024A66FB6D94_il2cpp_TypeInfo_var))->___DeferredCompilation_1 = L_3;
		return;
	}
}
// System.Void Unity.Collections.xxHash3/Unity.Collections.Hash64Long_00000769$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hash64Long_00000769U24BurstDirectCall_Initialize_m95E7F7B2E4CC1AF0E063BBF05A1BF11F6CCB2328 (const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void Unity.Collections.xxHash3/Unity.Collections.Hash64Long_00000769$BurstDirectCall::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hash64Long_00000769U24BurstDirectCall__cctor_mE79D5C6F4A1E1EE68B02F300383F0938CE1FFC6F (const RuntimeMethod* method) 
{
	{
		Hash64Long_00000769U24BurstDirectCall_Constructor_m5DA8CD882874F9BB78C13CA1D3FC15C62447AEEC(NULL);
		return;
	}
}
// System.UInt64 Unity.Collections.xxHash3/Unity.Collections.Hash64Long_00000769$BurstDirectCall::Invoke(System.Byte*,System.Byte*,System.Int64,System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Hash64Long_00000769U24BurstDirectCall_Invoke_m1AA4699AB6B75E84AC2D149C1BABD3BF09CE3752 (uint8_t* ___input0, uint8_t* ___dest1, int64_t ___length2, uint8_t* ___secret3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hash64Long_00000769U24BurstDirectCall_tCB68055E3DECA22A01777D16D1C3024A66FB6D94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = BurstCompiler_get_IsEnabled_mEDA2FAA92A224EC22E16A1AB9E8C55FB0DECD755(NULL);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Hash64Long_00000769U24BurstDirectCall_tCB68055E3DECA22A01777D16D1C3024A66FB6D94_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = Hash64Long_00000769U24BurstDirectCall_GetFunctionPointer_m4B2527C1C7A26E4C4DDEE5085BA74268B41ABF1F(NULL);
		V_0 = L_1;
		intptr_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		uint8_t* L_3 = ___input0;
		uint8_t* L_4 = ___dest1;
		int64_t L_5 = ___length2;
		uint8_t* L_6 = ___secret3;
		intptr_t L_7 = V_0;
		typedef uint64_t (CDECL *func_L_8)(uint8_t*,uint8_t*,int64_t,uint8_t*);
		uint64_t L_9 = ((func_L_8)L_7)(L_3,L_4,L_5,L_6);
		return L_9;
	}

IL_0021:
	{
		uint8_t* L_10 = ___input0;
		uint8_t* L_11 = ___dest1;
		int64_t L_12 = ___length2;
		uint8_t* L_13 = ___secret3;
		uint64_t L_14;
		L_14 = xxHash3_Hash64LongU24BurstManaged_mD990588FAC78D5CBFC165A8404B27BDE4FB2B3E1_inline(L_10, L_11, L_12, L_13, NULL);
		return L_14;
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
void Hash128Long_00000770U24PostfixBurstDelegate_Invoke_mA50F7E7BB006519CCE88B6D91529E051AA9CE7EB_Multicast(Hash128Long_00000770U24PostfixBurstDelegate_t465BDAD95315333D41C341EBD47FE4F629555038* __this, uint8_t* ___input0, uint8_t* ___dest1, int64_t ___length2, uint8_t* ___secret3, uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9* ___result4, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Hash128Long_00000770U24PostfixBurstDelegate_t465BDAD95315333D41C341EBD47FE4F629555038* currentDelegate = reinterpret_cast<Hash128Long_00000770U24PostfixBurstDelegate_t465BDAD95315333D41C341EBD47FE4F629555038*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, uint8_t*, uint8_t*, int64_t, uint8_t*, uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___input0, ___dest1, ___length2, ___secret3, ___result4, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void Hash128Long_00000770U24PostfixBurstDelegate_Invoke_mA50F7E7BB006519CCE88B6D91529E051AA9CE7EB_Open(Hash128Long_00000770U24PostfixBurstDelegate_t465BDAD95315333D41C341EBD47FE4F629555038* __this, uint8_t* ___input0, uint8_t* ___dest1, int64_t ___length2, uint8_t* ___secret3, uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9* ___result4, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (uint8_t*, uint8_t*, int64_t, uint8_t*, uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___input0, ___dest1, ___length2, ___secret3, ___result4, method);
}
void Hash128Long_00000770U24PostfixBurstDelegate_Invoke_mA50F7E7BB006519CCE88B6D91529E051AA9CE7EB_OpenStaticInvoker(Hash128Long_00000770U24PostfixBurstDelegate_t465BDAD95315333D41C341EBD47FE4F629555038* __this, uint8_t* ___input0, uint8_t* ___dest1, int64_t ___length2, uint8_t* ___secret3, uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9* ___result4, const RuntimeMethod* method)
{
	InvokerActionInvoker5< uint8_t*, uint8_t*, int64_t, uint8_t*, uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9* >::Invoke(__this->___method_ptr_0, method, NULL, ___input0, ___dest1, ___length2, ___secret3, ___result4);
}
void Hash128Long_00000770U24PostfixBurstDelegate_Invoke_mA50F7E7BB006519CCE88B6D91529E051AA9CE7EB_ClosedStaticInvoker(Hash128Long_00000770U24PostfixBurstDelegate_t465BDAD95315333D41C341EBD47FE4F629555038* __this, uint8_t* ___input0, uint8_t* ___dest1, int64_t ___length2, uint8_t* ___secret3, uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9* ___result4, const RuntimeMethod* method)
{
	InvokerActionInvoker6< RuntimeObject*, uint8_t*, uint8_t*, int64_t, uint8_t*, uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___input0, ___dest1, ___length2, ___secret3, ___result4);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_Hash128Long_00000770U24PostfixBurstDelegate_t465BDAD95315333D41C341EBD47FE4F629555038 (Hash128Long_00000770U24PostfixBurstDelegate_t465BDAD95315333D41C341EBD47FE4F629555038* __this, uint8_t* ___input0, uint8_t* ___dest1, int64_t ___length2, uint8_t* ___secret3, uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9* ___result4, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(uint8_t*, uint8_t*, int64_t, uint8_t*, uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___input0, ___dest1, ___length2, ___secret3, ___result4);

}
// System.Void Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000770$PostfixBurstDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hash128Long_00000770U24PostfixBurstDelegate__ctor_mE19E7866EFC9EF255D17341483DEC923613C5C0D (Hash128Long_00000770U24PostfixBurstDelegate_t465BDAD95315333D41C341EBD47FE4F629555038* __this, RuntimeObject* p0, intptr_t p1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)p1);
	__this->___method_3 = p1;
	__this->___m_target_2 = p0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)p0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)p1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)p1))
	{
		bool isOpen = parameterCount == 5;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)p1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Hash128Long_00000770U24PostfixBurstDelegate_Invoke_mA50F7E7BB006519CCE88B6D91529E051AA9CE7EB_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&Hash128Long_00000770U24PostfixBurstDelegate_Invoke_mA50F7E7BB006519CCE88B6D91529E051AA9CE7EB_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Hash128Long_00000770U24PostfixBurstDelegate_Invoke_mA50F7E7BB006519CCE88B6D91529E051AA9CE7EB_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 4;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&Hash128Long_00000770U24PostfixBurstDelegate_Invoke_mA50F7E7BB006519CCE88B6D91529E051AA9CE7EB_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&Hash128Long_00000770U24PostfixBurstDelegate_Invoke_mA50F7E7BB006519CCE88B6D91529E051AA9CE7EB_Multicast;
}
// System.Void Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000770$PostfixBurstDelegate::Invoke(System.Byte*,System.Byte*,System.Int64,System.Byte*,Unity.Mathematics.uint4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hash128Long_00000770U24PostfixBurstDelegate_Invoke_mA50F7E7BB006519CCE88B6D91529E051AA9CE7EB (Hash128Long_00000770U24PostfixBurstDelegate_t465BDAD95315333D41C341EBD47FE4F629555038* __this, uint8_t* ___input0, uint8_t* ___dest1, int64_t ___length2, uint8_t* ___secret3, uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9* ___result4, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, uint8_t*, uint8_t*, int64_t, uint8_t*, uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___input0, ___dest1, ___length2, ___secret3, ___result4, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000770$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hash128Long_00000770U24BurstDirectCall_GetFunctionPointerDiscard_m53CB212EA6BE49C05ADEF17C73045AEDC034AFF4 (intptr_t* p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hash128Long_00000770U24BurstDirectCall_tA453B39A0B08507B472F985F7D9086A85E22CFFA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Hash128Long_00000770U24BurstDirectCall_tA453B39A0B08507B472F985F7D9086A85E22CFFA_il2cpp_TypeInfo_var);
		intptr_t L_0 = ((Hash128Long_00000770U24BurstDirectCall_tA453B39A0B08507B472F985F7D9086A85E22CFFA_StaticFields*)il2cpp_codegen_static_fields_for(Hash128Long_00000770U24BurstDirectCall_tA453B39A0B08507B472F985F7D9086A85E22CFFA_il2cpp_TypeInfo_var))->___Pointer_0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Hash128Long_00000770U24BurstDirectCall_tA453B39A0B08507B472F985F7D9086A85E22CFFA_il2cpp_TypeInfo_var);
		intptr_t L_1 = ((Hash128Long_00000770U24BurstDirectCall_tA453B39A0B08507B472F985F7D9086A85E22CFFA_StaticFields*)il2cpp_codegen_static_fields_for(Hash128Long_00000770U24BurstDirectCall_tA453B39A0B08507B472F985F7D9086A85E22CFFA_il2cpp_TypeInfo_var))->___DeferredCompilation_1;
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		void* L_2;
		L_2 = BurstCompiler_GetILPPMethodFunctionPointer_m850347229EDA4058D224F885446BEE0137831BD0(L_1, NULL);
		((Hash128Long_00000770U24BurstDirectCall_tA453B39A0B08507B472F985F7D9086A85E22CFFA_StaticFields*)il2cpp_codegen_static_fields_for(Hash128Long_00000770U24BurstDirectCall_tA453B39A0B08507B472F985F7D9086A85E22CFFA_il2cpp_TypeInfo_var))->___Pointer_0 = (intptr_t)L_2;
	}

IL_0019:
	{
		intptr_t* L_3 = p0;
		il2cpp_codegen_runtime_class_init_inline(Hash128Long_00000770U24BurstDirectCall_tA453B39A0B08507B472F985F7D9086A85E22CFFA_il2cpp_TypeInfo_var);
		intptr_t L_4 = ((Hash128Long_00000770U24BurstDirectCall_tA453B39A0B08507B472F985F7D9086A85E22CFFA_StaticFields*)il2cpp_codegen_static_fields_for(Hash128Long_00000770U24BurstDirectCall_tA453B39A0B08507B472F985F7D9086A85E22CFFA_il2cpp_TypeInfo_var))->___Pointer_0;
		*((intptr_t*)L_3) = (intptr_t)L_4;
		return;
	}
}
// System.IntPtr Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000770$BurstDirectCall::GetFunctionPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Hash128Long_00000770U24BurstDirectCall_GetFunctionPointer_m23A4CE813A0A57DE32573B8488E8563BEA4E213C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hash128Long_00000770U24BurstDirectCall_tA453B39A0B08507B472F985F7D9086A85E22CFFA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		V_0 = ((intptr_t)0);
		il2cpp_codegen_runtime_class_init_inline(Hash128Long_00000770U24BurstDirectCall_tA453B39A0B08507B472F985F7D9086A85E22CFFA_il2cpp_TypeInfo_var);
		Hash128Long_00000770U24BurstDirectCall_GetFunctionPointerDiscard_m53CB212EA6BE49C05ADEF17C73045AEDC034AFF4((&V_0), NULL);
		intptr_t L_0 = V_0;
		return L_0;
	}
}
// System.Void Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000770$BurstDirectCall::Constructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hash128Long_00000770U24BurstDirectCall_Constructor_mA7370FE9286219498239AB05856AC51223D639AB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hash128Long_00000770U24BurstDirectCall_tA453B39A0B08507B472F985F7D9086A85E22CFFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hash128Long_00000770U24PostfixBurstDelegate_t465BDAD95315333D41C341EBD47FE4F629555038_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&xxHash3_Hash128LongU24BurstManaged_m08DB7B8209EBE3584489E17EBB40B64D29F9C9B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&xxHash3_Hash128Long_mB811A64DE35E597BEF6A1F1566456674B26FA2C5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 L_0 = { reinterpret_cast<intptr_t> (xxHash3_Hash128Long_mB811A64DE35E597BEF6A1F1566456674B26FA2C5_RuntimeMethod_var) };
		RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 L_1 = { reinterpret_cast<intptr_t> (xxHash3_Hash128LongU24BurstManaged_m08DB7B8209EBE3584489E17EBB40B64D29F9C9B4_RuntimeMethod_var) };
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Hash128Long_00000770U24PostfixBurstDelegate_t465BDAD95315333D41C341EBD47FE4F629555038_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = BurstCompiler_CompileILPPMethod_m2ADEDFEFDB17376C1A1FFD7C2D1A0C242AB78A8B(L_0, L_1, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Hash128Long_00000770U24BurstDirectCall_tA453B39A0B08507B472F985F7D9086A85E22CFFA_il2cpp_TypeInfo_var);
		((Hash128Long_00000770U24BurstDirectCall_tA453B39A0B08507B472F985F7D9086A85E22CFFA_StaticFields*)il2cpp_codegen_static_fields_for(Hash128Long_00000770U24BurstDirectCall_tA453B39A0B08507B472F985F7D9086A85E22CFFA_il2cpp_TypeInfo_var))->___DeferredCompilation_1 = L_3;
		return;
	}
}
// System.Void Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000770$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hash128Long_00000770U24BurstDirectCall_Initialize_m662C1AF632941013940D96BD64C16FC023773B1E (const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000770$BurstDirectCall::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hash128Long_00000770U24BurstDirectCall__cctor_m155D2154CF2B0E3C594D06F32F5C3D113D1F2C8B (const RuntimeMethod* method) 
{
	{
		Hash128Long_00000770U24BurstDirectCall_Constructor_mA7370FE9286219498239AB05856AC51223D639AB(NULL);
		return;
	}
}
// System.Void Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000770$BurstDirectCall::Invoke(System.Byte*,System.Byte*,System.Int64,System.Byte*,Unity.Mathematics.uint4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hash128Long_00000770U24BurstDirectCall_Invoke_m617BBF6D8F11F7780500926C618F5A6A3CCFD1E4 (uint8_t* ___input0, uint8_t* ___dest1, int64_t ___length2, uint8_t* ___secret3, uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9* ___result4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hash128Long_00000770U24BurstDirectCall_tA453B39A0B08507B472F985F7D9086A85E22CFFA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = BurstCompiler_get_IsEnabled_mEDA2FAA92A224EC22E16A1AB9E8C55FB0DECD755(NULL);
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Hash128Long_00000770U24BurstDirectCall_tA453B39A0B08507B472F985F7D9086A85E22CFFA_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = Hash128Long_00000770U24BurstDirectCall_GetFunctionPointer_m23A4CE813A0A57DE32573B8488E8563BEA4E213C(NULL);
		V_0 = L_1;
		intptr_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		uint8_t* L_3 = ___input0;
		uint8_t* L_4 = ___dest1;
		int64_t L_5 = ___length2;
		uint8_t* L_6 = ___secret3;
		uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9* L_7 = ___result4;
		intptr_t L_8 = V_0;
		typedef void (CDECL *func_L_9)(uint8_t*,uint8_t*,int64_t,uint8_t*,uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9*);
		((func_L_9)L_8)(L_3,L_4,L_5,L_6,L_7);
		return;
	}

IL_0023:
	{
		uint8_t* L_10 = ___input0;
		uint8_t* L_11 = ___dest1;
		int64_t L_12 = ___length2;
		uint8_t* L_13 = ___secret3;
		uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9* L_14 = ___result4;
		xxHash3_Hash128LongU24BurstManaged_m08DB7B8209EBE3584489E17EBB40B64D29F9C9B4_inline(L_10, L_11, L_12, L_13, L_14, NULL);
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
// System.Void $BurstDirectCallInitializer::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U24BurstDirectCallInitializer_Initialize_mF1E148DB6A518A7ABD5E39159E45B9270A7CD052 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hash128Long_00000770U24BurstDirectCall_tA453B39A0B08507B472F985F7D9086A85E22CFFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hash64Long_00000769U24BurstDirectCall_tCB68055E3DECA22A01777D16D1C3024A66FB6D94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Try_00000732U24BurstDirectCall_t28B16B97A00C3DB614657AB878D0FF496041E1C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Try_00000A0CU24BurstDirectCall_t6914F9B847539B29521FF1DD1E19FD3F8369EDEA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Try_00000A1AU24BurstDirectCall_t970F9722E1AFBB5D8419EC11F27DBC08866F197B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Try_00000A0CU24BurstDirectCall_t6914F9B847539B29521FF1DD1E19FD3F8369EDEA_il2cpp_TypeInfo_var);
		Try_00000A0CU24BurstDirectCall_Initialize_mB794E7AFF05A339E2F654C879FF924F63626E56E(NULL);
		il2cpp_codegen_runtime_class_init_inline(Try_00000A1AU24BurstDirectCall_t970F9722E1AFBB5D8419EC11F27DBC08866F197B_il2cpp_TypeInfo_var);
		Try_00000A1AU24BurstDirectCall_Initialize_m5C3A9A99F6293196E32C82585B7C5AE040237CC5(NULL);
		il2cpp_codegen_runtime_class_init_inline(Try_00000732U24BurstDirectCall_t28B16B97A00C3DB614657AB878D0FF496041E1C0_il2cpp_TypeInfo_var);
		Try_00000732U24BurstDirectCall_Initialize_m60452591A440414FE20227B6301BE60B45B56389(NULL);
		il2cpp_codegen_runtime_class_init_inline(Hash64Long_00000769U24BurstDirectCall_tCB68055E3DECA22A01777D16D1C3024A66FB6D94_il2cpp_TypeInfo_var);
		Hash64Long_00000769U24BurstDirectCall_Initialize_m95E7F7B2E4CC1AF0E063BBF05A1BF11F6CCB2328(NULL);
		il2cpp_codegen_runtime_class_init_inline(Hash128Long_00000770U24BurstDirectCall_tA453B39A0B08507B472F985F7D9086A85E22CFFA_il2cpp_TypeInfo_var);
		Hash128Long_00000770U24BurstDirectCall_Initialize_m662C1AF632941013940D96BD64C16FC023773B1E(NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TryFunction_Invoke_mED723D46A7B0C4B590ABECE0868EA02AD94D07A2_inline (TryFunction_tC277E17D1D6AD4EF20C1FC1D8F91A559208AA5CA* __this, intptr_t ___allocatorState0, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block1, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___allocatorState0, ___block1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AllocatorHandle_get_Value_m24A0A3E433794106E43E9140CC2BB55493C8F30F_inline (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* __this, const RuntimeMethod* method) 
{
	{
		// public int Value => Index;
		uint16_t L_0 = __this->___Index_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_max_m5DA4D66E3CC78BDFF8218BA039D6EBB1AC223826_inline (int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	{
		// public static int max(int x, int y) { return x > y ? x : y; }
		int32_t L_0 = ___x0;
		int32_t L_1 = ___y1;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_2 = ___y1;
		return L_2;
	}

IL_0006:
	{
		int32_t L_3 = ___x0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_lzcnt_mEA5B799F963166998842F3108EBCD9954DF5BB10_inline (int32_t ___x0, const RuntimeMethod* method) 
{
	{
		// public static int lzcnt(int x) { return lzcnt((uint)x); }
		int32_t L_0 = ___x0;
		int32_t L_1;
		L_1 = math_lzcnt_m6DFB607C7809FB32EB0CC7AC71F76CA53DEE7792_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StackAllocator_TryU24BurstManaged_m8C725A7308CCA2FCF709053D2660D37BBB1990E7_inline (intptr_t ___allocatorState0, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block1, const RuntimeMethod* method) 
{
	{
		// return ((StackAllocator*)allocatorState)->Try(ref block);
		intptr_t L_0 = ___allocatorState0;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_0, NULL);
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_2 = ___block1;
		int32_t L_3;
		L_3 = StackAllocator_Try_m46B9AAB118C2ACCDB8B0A54DA8E27209CA152558((StackAllocator_t1ADF9AA8B94A0AF7788BC1E34E6A833E7F008124*)L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 StackAllocator_get_Handle_m31D630726EF42BC6C432F8751E6B2BE346BB2267_inline (StackAllocator_t1ADF9AA8B94A0AF7788BC1E34E6A833E7F008124* __this, const RuntimeMethod* method) 
{
	{
		// public AllocatorHandle Handle { get { return m_handle; } set { m_handle = value; } }
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = __this->___m_handle_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SlabAllocator_TryU24BurstManaged_m484D87FD1C7B43A0E6B77864265E0370AC734EA5_inline (intptr_t ___allocatorState0, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block1, const RuntimeMethod* method) 
{
	{
		// return ((SlabAllocator*)allocatorState)->Try(ref block);
		intptr_t L_0 = ___allocatorState0;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_0, NULL);
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_2 = ___block1;
		int32_t L_3;
		L_3 = SlabAllocator_Try_mE7D3D58D59FB68AE5FA9FF99C0C69FD854F482CD((SlabAllocator_t1E255FCD698DFC3C2B043645B30E794330CD10ED*)L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 SlabAllocator_get_Handle_m09C2CCD8BCEA26214DC514707F222B228A1E04BE_inline (SlabAllocator_t1E255FCD698DFC3C2B043645B30E794330CD10ED* __this, const RuntimeMethod* method) 
{
	{
		// public AllocatorHandle Handle { get { return m_handle; } set { m_handle = value; } }
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = __this->___m_handle_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t math_min_m15E98E776355732C47A31FC18FB408EF53AB86D5_inline (int64_t ___x0, int64_t ___y1, const RuntimeMethod* method) 
{
	{
		// public static long min(long x, long y) { return x < y ? x : y; }
		int64_t L_0 = ___x0;
		int64_t L_1 = ___y1;
		if ((((int64_t)L_0) < ((int64_t)L_1)))
		{
			goto IL_0006;
		}
	}
	{
		int64_t L_2 = ___y1;
		return L_2;
	}

IL_0006:
	{
		int64_t L_3 = ___x0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RewindableAllocator_TryU24BurstManaged_m9FC90FBCAB23681675E5FF0BBE59BB7D5058ED52_inline (intptr_t ___state0, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block1, const RuntimeMethod* method) 
{
	{
		// unsafe { return ((RewindableAllocator*)state)->Try(ref block); }
		intptr_t L_0 = ___state0;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_0, NULL);
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_2 = ___block1;
		int32_t L_3;
		L_3 = RewindableAllocator_Try_m6C020E9D4D72801E38775286491991C3FCE064ED((RewindableAllocator_tB18F8ADC8F2EE36E1F51FCCCFF0AC093108EF254*)L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t math_ceilpow2_m0BAC2B7C7BA2E1E9504697CC4D4D514A0924F95F_inline (int64_t ___x0, const RuntimeMethod* method) 
{
	{
		// x -= 1;
		int64_t L_0 = ___x0;
		___x0 = ((int64_t)il2cpp_codegen_subtract(L_0, ((int64_t)1)));
		// x |= x >> 1;
		int64_t L_1 = ___x0;
		int64_t L_2 = ___x0;
		___x0 = ((int64_t)(L_1|((int64_t)(L_2>>1))));
		// x |= x >> 2;
		int64_t L_3 = ___x0;
		int64_t L_4 = ___x0;
		___x0 = ((int64_t)(L_3|((int64_t)(L_4>>2))));
		// x |= x >> 4;
		int64_t L_5 = ___x0;
		int64_t L_6 = ___x0;
		___x0 = ((int64_t)(L_5|((int64_t)(L_6>>4))));
		// x |= x >> 8;
		int64_t L_7 = ___x0;
		int64_t L_8 = ___x0;
		___x0 = ((int64_t)(L_7|((int64_t)(L_8>>8))));
		// x |= x >> 16;
		int64_t L_9 = ___x0;
		int64_t L_10 = ___x0;
		___x0 = ((int64_t)(L_9|((int64_t)(L_10>>((int32_t)16)))));
		// x |= x >> 32;
		int64_t L_11 = ___x0;
		int64_t L_12 = ___x0;
		___x0 = ((int64_t)(L_11|((int64_t)(L_12>>((int32_t)32)))));
		// return x + 1;
		int64_t L_13 = ___x0;
		return ((int64_t)il2cpp_codegen_add(L_13, ((int64_t)1)));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t math_max_m12316F7EB8EFE05E444EC4167FD2C640414166F6_inline (int64_t ___x0, int64_t ___y1, const RuntimeMethod* method) 
{
	{
		// public static long max(long x, long y) { return x > y ? x : y; }
		int64_t L_0 = ___x0;
		int64_t L_1 = ___y1;
		if ((((int64_t)L_0) > ((int64_t)L_1)))
		{
			goto IL_0006;
		}
	}
	{
		int64_t L_2 = ___y1;
		return L_2;
	}

IL_0006:
	{
		int64_t L_3 = ___x0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 RewindableAllocator_get_Handle_mF81EDA2102485C46965AAB56347E8F64FE551D9E_inline (RewindableAllocator_tB18F8ADC8F2EE36E1F51FCCCFF0AC093108EF254* __this, const RuntimeMethod* method) 
{
	{
		// public AllocatorManager.AllocatorHandle Handle { get { return m_handle; } set { m_handle = value; } }
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = __this->___m_handle_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void uint4__ctor_m59B6A219A0285C60FCF2977679BF89C72B502008_inline (uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9* __this, uint32_t ___x0, uint32_t ___y1, uint32_t ___z2, uint32_t ___w3, const RuntimeMethod* method) 
{
	{
		// this.x = x;
		uint32_t L_0 = ___x0;
		__this->___x_0 = L_0;
		// this.y = y;
		uint32_t L_1 = ___y1;
		__this->___y_1 = L_1;
		// this.z = z;
		uint32_t L_2 = ___z2;
		__this->___z_2 = L_2;
		// this.w = w;
		uint32_t L_3 = ___w3;
		__this->___w_3 = L_3;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t xxHash3_XorShift64_m60FE95AE47D67ACD4AA70E8C3AE81A92C3C89955_inline (uint64_t ___v640, int32_t ___shift1, const RuntimeMethod* method) 
{
	{
		// return v64 ^ (v64 >> shift);
		uint64_t L_0 = ___v640;
		uint64_t L_1 = ___v640;
		int32_t L_2 = ___shift1;
		return ((int64_t)((int64_t)L_0^((int64_t)((uint64_t)L_1>>((int32_t)(L_2&((int32_t)63)))))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t xxHash3_Read64LE_m142BE5079FBF51DF81C53FAB5E7021ECA764DC65_inline (void* ___addr0, const RuntimeMethod* method) 
{
	{
		// private static unsafe ulong Read64LE(void* addr) => *(ulong*) addr;
		void* L_0 = ___addr0;
		int64_t L_1 = *((int64_t*)L_0);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t xxHash3_Mul128Fold64_mA7EB7CAED01CEFA6204C0344F5DD7CD7625AABB5_inline (uint64_t ___lhs0, uint64_t ___rhs1, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		// var lo = Common.umul128(lhs, rhs, out var hi);
		uint64_t L_0 = ___lhs0;
		uint64_t L_1 = ___rhs1;
		uint64_t L_2;
		L_2 = Common_umul128_mB9316CECE9C94618BA3A48AB6185DB217039CBCA(L_0, L_1, (&V_0), NULL);
		// return lo ^ hi;
		uint64_t L_3 = V_0;
		return ((int64_t)((int64_t)L_2^(int64_t)L_3));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t xxHash3_Mix2Acc_mD770DD066F75B7813FE9495ED10135605D6F63A1_inline (uint64_t ___acc00, uint64_t ___acc11, uint8_t* ___secret2, const RuntimeMethod* method) 
{
	{
		// return Mul128Fold64(acc0 ^ Read64LE(secret), acc1 ^ Read64LE(secret+8));
		uint64_t L_0 = ___acc00;
		uint8_t* L_1 = ___secret2;
		uint64_t L_2;
		L_2 = xxHash3_Read64LE_m142BE5079FBF51DF81C53FAB5E7021ECA764DC65_inline((void*)L_1, NULL);
		uint64_t L_3 = ___acc11;
		uint8_t* L_4 = ___secret2;
		uint64_t L_5;
		L_5 = xxHash3_Read64LE_m142BE5079FBF51DF81C53FAB5E7021ECA764DC65_inline((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, 8)), NULL);
		uint64_t L_6;
		L_6 = xxHash3_Mul128Fold64_mA7EB7CAED01CEFA6204C0344F5DD7CD7625AABB5_inline(((int64_t)((int64_t)L_0^(int64_t)L_2)), ((int64_t)((int64_t)L_3^(int64_t)L_5)), NULL);
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t xxHash3_Avalanche_mBE469AA9C171E827977A1C02AB4F54450CB6B382_inline (uint64_t ___h640, const RuntimeMethod* method) 
{
	{
		// h64 = XorShift64(h64, 37);
		uint64_t L_0 = ___h640;
		uint64_t L_1;
		L_1 = xxHash3_XorShift64_m60FE95AE47D67ACD4AA70E8C3AE81A92C3C89955_inline(L_0, ((int32_t)37), NULL);
		___h640 = L_1;
		// h64 *= 0x165667919E3779F9UL;
		uint64_t L_2 = ___h640;
		___h640 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_2, ((int64_t)1609587791953885689LL)));
		// h64 = XorShift64(h64, 32);
		uint64_t L_3 = ___h640;
		uint64_t L_4;
		L_4 = xxHash3_XorShift64_m60FE95AE47D67ACD4AA70E8C3AE81A92C3C89955_inline(L_3, ((int32_t)32), NULL);
		___h640 = L_4;
		// return h64;
		uint64_t L_5 = ___h640;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void xxHash3_Write64LE_m081CFB5625644F1EA14C692C00DD342F9D8CFF8F_inline (void* ___addr0, uint64_t ___value1, const RuntimeMethod* method) 
{
	{
		// private static unsafe void Write64LE(void* addr, ulong value) => *(ulong*) addr = value;
		void* L_0 = ___addr0;
		uint64_t L_1 = ___value1;
		*((int64_t*)L_0) = (int64_t)L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t xxHash3_Mul32To64_m658CA5D40AAB84E56DF2C0433A34E209F3C236DE_inline (uint32_t ___x0, uint32_t ___y1, const RuntimeMethod* method) 
{
	{
		// private static ulong Mul32To64(uint x, uint y) => (ulong) x * y;
		uint32_t L_0 = ___x0;
		uint32_t L_1 = ___y1;
		return ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_0), ((int64_t)(uint64_t)L_1)));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t xxHash3_Hash64LongU24BurstManaged_mD990588FAC78D5CBFC165A8404B27BDE4FB2B3E1_inline (uint8_t* ___input0, uint8_t* ___dest1, int64_t ___length2, uint8_t* ___secret3, const RuntimeMethod* method) 
{
	uint64_t* V_0 = NULL;
	{
		// var addr = stackalloc byte[STRIPE_LEN + 31];
		int8_t* L_0 = (int8_t*) alloca(((uintptr_t)((int32_t)95)));
		memset(L_0, 0, ((uintptr_t)((int32_t)95)));
		// var acc = (ulong*) ((ulong) addr + 31 & 0xFFFFFFFFFFFFFFE0); // Aligned the allocated address on 32 bytes
		V_0 = (uint64_t*)((uintptr_t)((int64_t)(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)(intptr_t)(L_0)), ((int64_t)((int32_t)31))))&((int64_t)((int32_t)-32)))));
		// acc[0] = PRIME32_3;
		uint64_t* L_1 = V_0;
		*((int64_t*)L_1) = (int64_t)((int64_t)(uint64_t)((uint32_t)((int32_t)-1028477379)));
		// acc[1] = PRIME64_1;
		uint64_t* L_2 = V_0;
		*((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_2, 8))) = (int64_t)((int64_t)-7046029288634856825LL);
		// acc[2] = PRIME64_2;
		uint64_t* L_3 = V_0;
		*((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 8))))) = (int64_t)((int64_t)-4417276706812531889LL);
		// acc[3] = PRIME64_3;
		uint64_t* L_4 = V_0;
		*((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)3), 8))))) = (int64_t)((int64_t)1609587929392839161LL);
		// acc[4] = PRIME64_4;
		uint64_t* L_5 = V_0;
		*((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)4), 8))))) = (int64_t)((int64_t)-8796714831421723037LL);
		// acc[5] = PRIME32_2;
		uint64_t* L_6 = V_0;
		*((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)5), 8))))) = (int64_t)((int64_t)(uint64_t)((uint32_t)((int32_t)-2048144777)));
		// acc[6] = PRIME64_5;
		uint64_t* L_7 = V_0;
		*((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)6), 8))))) = (int64_t)((int64_t)2870177450012600261LL);
		// acc[7] = PRIME32_1;
		uint64_t* L_8 = V_0;
		*((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)7), 8))))) = (int64_t)((int64_t)(uint64_t)((uint32_t)((int32_t)-1640531535)));
		// if (X86.Avx2.IsAvx2Supported)
		bool L_9;
		L_9 = Avx2_get_IsAvx2Supported_m768CA5D24C6148EBDF5E2FB487026D1A126D14E5(NULL);
		if (!L_9)
		{
			goto IL_0093;
		}
	}
	{
		// Avx2HashLongInternalLoop(acc, input, dest, length, secret, 1);
		uint64_t* L_10 = V_0;
		uint8_t* L_11 = ___input0;
		uint8_t* L_12 = ___dest1;
		int64_t L_13 = ___length2;
		uint8_t* L_14 = ___secret3;
		xxHash3_Avx2HashLongInternalLoop_m442746594450DC1E0B61061B9F3D1032C2D57529(L_10, L_11, L_12, L_13, L_14, 1, NULL);
		goto IL_009e;
	}

IL_0093:
	{
		// DefaultHashLongInternalLoop(acc, input, dest, length, secret, 1);
		uint64_t* L_15 = V_0;
		uint8_t* L_16 = ___input0;
		uint8_t* L_17 = ___dest1;
		int64_t L_18 = ___length2;
		uint8_t* L_19 = ___secret3;
		xxHash3_DefaultHashLongInternalLoop_m3D2C33BD3DA90FA61B83E38DE7D85F519FF5B103(L_15, L_16, L_17, L_18, L_19, 1, NULL);
	}

IL_009e:
	{
		// return MergeAcc(acc, secret + SECRET_MERGEACCS_START, (ulong) length * PRIME64_1);
		uint64_t* L_20 = V_0;
		uint8_t* L_21 = ___secret3;
		int64_t L_22 = ___length2;
		uint64_t L_23;
		L_23 = xxHash3_MergeAcc_m95092AEC7B1C5BB19BF70E55CA030CAE37C79161(L_20, ((uint8_t*)il2cpp_codegen_add((intptr_t)L_21, ((int32_t)11))), ((int64_t)il2cpp_codegen_multiply(L_22, ((int64_t)-7046029288634856825LL))), NULL);
		return L_23;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void xxHash3_Hash128LongU24BurstManaged_m08DB7B8209EBE3584489E17EBB40B64D29F9C9B4_inline (uint8_t* ___input0, uint8_t* ___dest1, int64_t ___length2, uint8_t* ___secret3, uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9* ___result4, const RuntimeMethod* method) 
{
	uint64_t* V_0 = NULL;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	{
		// var addr = stackalloc byte[STRIPE_LEN + 31];
		int8_t* L_0 = (int8_t*) alloca(((uintptr_t)((int32_t)95)));
		memset(L_0, 0, ((uintptr_t)((int32_t)95)));
		// var acc = (ulong*) ((ulong) addr + 31 & 0xFFFFFFFFFFFFFFE0); // Aligned the allocated address on 32 bytes
		V_0 = (uint64_t*)((uintptr_t)((int64_t)(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)(intptr_t)(L_0)), ((int64_t)((int32_t)31))))&((int64_t)((int32_t)-32)))));
		// acc[0] = PRIME32_3;
		uint64_t* L_1 = V_0;
		*((int64_t*)L_1) = (int64_t)((int64_t)(uint64_t)((uint32_t)((int32_t)-1028477379)));
		// acc[1] = PRIME64_1;
		uint64_t* L_2 = V_0;
		*((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_2, 8))) = (int64_t)((int64_t)-7046029288634856825LL);
		// acc[2] = PRIME64_2;
		uint64_t* L_3 = V_0;
		*((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 8))))) = (int64_t)((int64_t)-4417276706812531889LL);
		// acc[3] = PRIME64_3;
		uint64_t* L_4 = V_0;
		*((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)3), 8))))) = (int64_t)((int64_t)1609587929392839161LL);
		// acc[4] = PRIME64_4;
		uint64_t* L_5 = V_0;
		*((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)4), 8))))) = (int64_t)((int64_t)-8796714831421723037LL);
		// acc[5] = PRIME32_2;
		uint64_t* L_6 = V_0;
		*((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)5), 8))))) = (int64_t)((int64_t)(uint64_t)((uint32_t)((int32_t)-2048144777)));
		// acc[6] = PRIME64_5;
		uint64_t* L_7 = V_0;
		*((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)6), 8))))) = (int64_t)((int64_t)2870177450012600261LL);
		// acc[7] = PRIME32_1;
		uint64_t* L_8 = V_0;
		*((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)7), 8))))) = (int64_t)((int64_t)(uint64_t)((uint32_t)((int32_t)-1640531535)));
		// if (X86.Avx2.IsAvx2Supported)
		bool L_9;
		L_9 = Avx2_get_IsAvx2Supported_m768CA5D24C6148EBDF5E2FB487026D1A126D14E5(NULL);
		if (!L_9)
		{
			goto IL_0093;
		}
	}
	{
		// Avx2HashLongInternalLoop(acc, input, dest, length, secret, 0);
		uint64_t* L_10 = V_0;
		uint8_t* L_11 = ___input0;
		uint8_t* L_12 = ___dest1;
		int64_t L_13 = ___length2;
		uint8_t* L_14 = ___secret3;
		xxHash3_Avx2HashLongInternalLoop_m442746594450DC1E0B61061B9F3D1032C2D57529(L_10, L_11, L_12, L_13, L_14, 0, NULL);
		goto IL_009e;
	}

IL_0093:
	{
		// DefaultHashLongInternalLoop(acc, input, dest, length, secret, 0);
		uint64_t* L_15 = V_0;
		uint8_t* L_16 = ___input0;
		uint8_t* L_17 = ___dest1;
		int64_t L_18 = ___length2;
		uint8_t* L_19 = ___secret3;
		xxHash3_DefaultHashLongInternalLoop_m3D2C33BD3DA90FA61B83E38DE7D85F519FF5B103(L_15, L_16, L_17, L_18, L_19, 0, NULL);
	}

IL_009e:
	{
		// var low64 = MergeAcc(acc, secret + SECRET_MERGEACCS_START, (ulong) length * PRIME64_1);
		uint64_t* L_20 = V_0;
		uint8_t* L_21 = ___secret3;
		int64_t L_22 = ___length2;
		uint64_t L_23;
		L_23 = xxHash3_MergeAcc_m95092AEC7B1C5BB19BF70E55CA030CAE37C79161(L_20, ((uint8_t*)il2cpp_codegen_add((intptr_t)L_21, ((int32_t)11))), ((int64_t)il2cpp_codegen_multiply(L_22, ((int64_t)-7046029288634856825LL))), NULL);
		V_1 = L_23;
		// var high64 = MergeAcc(acc, secret + SECRET_KEY_SIZE - 64 - SECRET_MERGEACCS_START,
		//     ~((ulong) length * PRIME64_2));
		uint64_t* L_24 = V_0;
		uint8_t* L_25 = ___secret3;
		int64_t L_26 = ___length2;
		uint64_t L_27;
		L_27 = xxHash3_MergeAcc_m95092AEC7B1C5BB19BF70E55CA030CAE37C79161(L_24, ((uint8_t*)il2cpp_codegen_subtract((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_25, ((int32_t)192))), ((int32_t)64))), ((int32_t)11))), ((~((int64_t)il2cpp_codegen_multiply(L_26, ((int64_t)-4417276706812531889LL))))), NULL);
		V_2 = L_27;
		// result = ToUint4(low64, high64);
		uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9* L_28 = ___result4;
		uint64_t L_29 = V_1;
		uint64_t L_30 = V_2;
		uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 L_31;
		L_31 = xxHash3_ToUint4_m6DA767007FADBF9532A2E5173996473BEDE21220(L_29, L_30, NULL);
		*(uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9*)L_28 = L_31;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FunctionPointer_1__ctor_mE2BD136AA4DB860E4183D3293D3AE1A04B978DA3_gshared_inline (FunctionPointer_1_tE1DC1EC606FB2242FB50357BBA39BB4AEDECFCB2* __this, intptr_t ___ptr0, const RuntimeMethod* method) 
{
	{
		// _ptr = ptr;
		intptr_t L_0 = ___ptr0;
		__this->____ptr_0 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FixedList4096Bytes_1_get_Length_m5966340B356C0C2E1101474A1C7195300442C323_gshared_inline (FixedList4096Bytes_1_t33F84B814E5486E0193FA1B57DDED67F7E28E259* __this, const RuntimeMethod* method) 
{
	{
		// get => length;
		uint16_t L_0 = (uint16_t)__this->___length_0;
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_lzcnt_m6DFB607C7809FB32EB0CC7AC71F76CA53DEE7792_inline (uint32_t ___x0, const RuntimeMethod* method) 
{
	LongDoubleUnion_tD71C400B6C4CD1A7F13CE8125AC6BBC7A22791CA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (x == 0)
		uint32_t L_0 = ___x0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		// return 32;
		return ((int32_t)32);
	}

IL_0006:
	{
		// u.doubleValue = 0.0;
		(&V_0)->___doubleValue_1 = (0.0);
		// u.longValue = 0x4330000000000000L + x;
		uint32_t L_1 = ___x0;
		(&V_0)->___longValue_0 = ((int64_t)il2cpp_codegen_add(((int64_t)4841369599423283200LL), ((int64_t)(uint64_t)L_1)));
		// u.doubleValue -= 4503599627370496.0;
		double* L_2 = (&(&V_0)->___doubleValue_1);
		double* L_3 = L_2;
		double L_4 = *((double*)L_3);
		*((double*)L_3) = (double)((double)il2cpp_codegen_subtract(L_4, (4503599627370496.0)));
		// return 0x41E - (int)(u.longValue >> 52);
		LongDoubleUnion_tD71C400B6C4CD1A7F13CE8125AC6BBC7A22791CA L_5 = V_0;
		int64_t L_6 = L_5.___longValue_0;
		return ((int32_t)il2cpp_codegen_subtract(((int32_t)1054), ((int32_t)((int64_t)(L_6>>((int32_t)52))))));
	}
}
