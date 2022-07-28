#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MethodInfo>
struct Dictionary_2_tA6171034F19E116CFB6E9839DA229454DA8469E3;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.String,System.Type>
struct Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A;
// System.Collections.Generic.Dictionary`2<System.Type,System.Type[]>
struct Dictionary_2_t362AB1E36F58A6769607F7DA6835762F36230B74;
// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs>
struct EventHandler_1_tF46A0252BA462E35F6B72C69AB6C0F751E7443D7;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Reflection.MethodInfo>
struct KeyCollection_t8CE391DDA4D9D05BEBBD8BC1B7CDBC1E69D18EEB;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Type>
struct KeyCollection_t0E4390205378461F38BE857216C35DA687D245FA;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Type[]>
struct KeyCollection_tD46DDF0B5F4B43A2F4DDA95224578C09392707B9;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Reflection.MethodInfo>
struct ValueCollection_t192350132BDCBDF69BAECF947FCC6964C1A9245A;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Type>
struct ValueCollection_tA14BD0EE42AEA7EBFF2E10776A87B14C678C2E11;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Type[]>
struct ValueCollection_t0A41AAA2D82658B39D9F011753F07D968D7F0CC5;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Reflection.MethodInfo>[]
struct EntryU5BU5D_tA4087ACE866E9A7D51189A094DE9815D743332C6;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Type>[]
struct EntryU5BU5D_t544267CEF10C325101E064C4EC137C5A1ADC3D92;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Type[]>[]
struct EntryU5BU5D_tD6C3CBA304307BA1C2D7B6A58B35C4B544CD5DF7;
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.Reflection.Assembly
struct Assembly_t;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t74AF5FF25F520B9786A20D862AE69BE733774A42;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// VisualDesignCafe.ShaderX.Materials.BaseMaterial
struct BaseMaterial_t75CEB54A6E97E52D865A51213E7D5A13D93DB7B2;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.CultureAwareComparer
struct CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// VisualDesignCafe.ShaderX.Materials.LitKeywords
struct LitKeywords_t79960B8845A5F490D2B409BA1E932A5EF2CC63BD;
// VisualDesignCafe.ShaderX.Materials.LitMaterial
struct LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080;
// VisualDesignCafe.ShaderX.Materials.LitProperties
struct LitProperties_tF61AFEFD7B395EB31BEDF407C1E3FF75B8CEDCFA;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.OrdinalCaseSensitiveComparer
struct OrdinalCaseSensitiveComparer_t581CA7CB51DCF00B6012A697A4B4B3067144521A;
// System.OrdinalIgnoreCaseComparer
struct OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0;
// System.ResolveEventHandler
struct ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// VisualDesignCafe.ShaderX.ShaderProperty
struct ShaderProperty_tF413E994D5B3F5F4FA685CC1656E6539C265F64C;
// System.String
struct String_t;
// System.StringComparer
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// System.Type
struct Type_t;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t362AB1E36F58A6769607F7DA6835762F36230B74_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA6171034F19E116CFB6E9839DA229454DA8469E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReflectionHelper_t0921D73EBBF63D36D9A2AE711F34FE18896FCAA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0E57359E147D3245E0022D7C14F3F57C0026940E;
IL2CPP_EXTERN_C String_t* _stringLiteral101ABEE848638F167DD466C2B19866E5EA5FACE3;
IL2CPP_EXTERN_C String_t* _stringLiteral16353F9BE83017A3E46479ADF6323A09B7B58E24;
IL2CPP_EXTERN_C String_t* _stringLiteral17863920B5F72471659AD01703F458D84098D66C;
IL2CPP_EXTERN_C String_t* _stringLiteral17870CA6693777D85F2129A2C9A2AF8DCEDFC342;
IL2CPP_EXTERN_C String_t* _stringLiteral18A0D054A81F8042DD1845F93DB9CDD1B4022D45;
IL2CPP_EXTERN_C String_t* _stringLiteral2EEBCA85FFEEDE3E375378C4D632ED4E350F3661;
IL2CPP_EXTERN_C String_t* _stringLiteral30D5B3AF9F2828B7CC03C6AAB712AF102E707992;
IL2CPP_EXTERN_C String_t* _stringLiteral3450A2BB8216F70D528215A296AEDB3D212C7EED;
IL2CPP_EXTERN_C String_t* _stringLiteral38B8C8C0BD25C5963BB0276F350E52AE4F3288D3;
IL2CPP_EXTERN_C String_t* _stringLiteral394B8C6C8CA442EF8C63386789D48EEDD0084236;
IL2CPP_EXTERN_C String_t* _stringLiteral40BFB095782D36D1B276A40A276C76911EF9318F;
IL2CPP_EXTERN_C String_t* _stringLiteral4D50BAA80F9AF3978F2A9E3FAEAAFCA90BE86E11;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8A139418EF0697974054E94254DECA0AE09AAC;
IL2CPP_EXTERN_C String_t* _stringLiteral5235BC8A11AC79193A67E99975CCDBC94A0FA351;
IL2CPP_EXTERN_C String_t* _stringLiteral5ADCA981E6C4267AC85B8E846F5831F15F6A9359;
IL2CPP_EXTERN_C String_t* _stringLiteral61BB919A48A634682A5A8760841B82F6744E4FCE;
IL2CPP_EXTERN_C String_t* _stringLiteral635F3DE8EC68E3F30863B57372B304DFB5D3E35A;
IL2CPP_EXTERN_C String_t* _stringLiteral6A04387AC50CA145040DA7825FFA0F9B66C2D910;
IL2CPP_EXTERN_C String_t* _stringLiteral6B2A1B56C01168B957C372A26B6603146D81645B;
IL2CPP_EXTERN_C String_t* _stringLiteral6DA7DAB552B215AA3F740CDFE25D920B82670895;
IL2CPP_EXTERN_C String_t* _stringLiteral72D498F039FD562896966E064E8315EA0BCE68C5;
IL2CPP_EXTERN_C String_t* _stringLiteral756AB349BAC425C88DAB956F1C5628699A5936D8;
IL2CPP_EXTERN_C String_t* _stringLiteral79A2B5AD5F0F5233F56842788A5EEE2E935E90F7;
IL2CPP_EXTERN_C String_t* _stringLiteral7C85375E1757085679E8F5E8CA6DBE7C0A66A736;
IL2CPP_EXTERN_C String_t* _stringLiteral7DFF184E720DE9F82A38C545FF0B2D4530AEB175;
IL2CPP_EXTERN_C String_t* _stringLiteral8555801F4146548F386C45EBCBE78A18D3EFDAC3;
IL2CPP_EXTERN_C String_t* _stringLiteral991E6DC25D3E3FF20513AD0E8D1B989F49176BA7;
IL2CPP_EXTERN_C String_t* _stringLiteral99A0B52CE21318A073B5A8933EAE03811D210D18;
IL2CPP_EXTERN_C String_t* _stringLiteralA2A3DF99788A73C2F0FE7267B988915F72D2C1F1;
IL2CPP_EXTERN_C String_t* _stringLiteralA83F88E5441C58DB1F038F62D2433D6BDEAB6145;
IL2CPP_EXTERN_C String_t* _stringLiteralAB969AE5DD9963D63AC521BB1315A34407675F96;
IL2CPP_EXTERN_C String_t* _stringLiteralB4150C3447E11CCBF4486D8C6677CF174D84602A;
IL2CPP_EXTERN_C String_t* _stringLiteralB432A1F3451EAF8B497E185F11A4FAA30ECC23A3;
IL2CPP_EXTERN_C String_t* _stringLiteralB4C4D1D09A7A19E98CDB242EB6E2D43CC2AA11D0;
IL2CPP_EXTERN_C String_t* _stringLiteralB8066350B6E79405BBA4C2ACA4628C51C7B096B4;
IL2CPP_EXTERN_C String_t* _stringLiteralB8E26C0D2C29FEF651F8DE36B8F14426427E2F96;
IL2CPP_EXTERN_C String_t* _stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466;
IL2CPP_EXTERN_C String_t* _stringLiteralBA25FBAEEFFB772291FB6D7DD9330839737B6D49;
IL2CPP_EXTERN_C String_t* _stringLiteralBCD140DD8E7ED9046F7125A7AA691E0581341132;
IL2CPP_EXTERN_C String_t* _stringLiteralC8EAF2AD70D954066F69E9FA7FFA9771B71269CE;
IL2CPP_EXTERN_C String_t* _stringLiteralE147FC8F66BE740F2F8674E00CBC75BC21B73934;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralFD658A45C611B58E7557EE1D77363255C4BE74F3;
IL2CPP_EXTERN_C const RuntimeMethod* BaseMaterial__ctor_mA2755C139A4922320C9BA364D7132A93E11EAFF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mABB0055F51D71AEB872FC7C3C1726FBF9371E402_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mC475FA2B0084A824E2793B2C28CE67FB6E3FEC6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m6FF7CEBC358B5FB27641B13E3366E8C3C73DA78C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mE0C4D261B09389DB77B83000113FF4342A8DFE5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mF0801D8FE6D0681DB8297BDBEA8578266FC968EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mCE419CA3315C54931F0112B3A9156E00FFB86CE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mD50E387D30F70E1F0A66F0230DE70CA791753F38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionHelper_Invoke_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mDB49D171607F4061ECBA03AC91686E3303A8E9EA_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t3E6CD9D2EC0BBCD4ED167B8EC3C8CA5FF24BA2DA 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MethodInfo>
struct Dictionary_2_tA6171034F19E116CFB6E9839DA229454DA8469E3  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tA4087ACE866E9A7D51189A094DE9815D743332C6* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t8CE391DDA4D9D05BEBBD8BC1B7CDBC1E69D18EEB* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t192350132BDCBDF69BAECF947FCC6964C1A9245A* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Type>
struct Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t544267CEF10C325101E064C4EC137C5A1ADC3D92* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t0E4390205378461F38BE857216C35DA687D245FA* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tA14BD0EE42AEA7EBFF2E10776A87B14C678C2E11* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,System.Type[]>
struct Dictionary_2_t362AB1E36F58A6769607F7DA6835762F36230B74  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tD6C3CBA304307BA1C2D7B6A58B35C4B544CD5DF7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tD46DDF0B5F4B43A2F4DDA95224578C09392707B9* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t0A41AAA2D82658B39D9F011753F07D968D7F0CC5* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};
struct Il2CppArrayBounds;

// System.Reflection.Assembly
struct Assembly_t  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// VisualDesignCafe.ShaderX.Materials.BaseMaterial
struct BaseMaterial_t75CEB54A6E97E52D865A51213E7D5A13D93DB7B2  : public RuntimeObject
{
	// UnityEngine.Material VisualDesignCafe.ShaderX.Materials.BaseMaterial::Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___Material_0;
};

// VisualDesignCafe.ShaderX.ColorExtensions
struct ColorExtensions_tB91790401F63B018AFDE7F60DE9373DDFDA36C74  : public RuntimeObject
{
};

// VisualDesignCafe.ShaderX.Materials.LitKeywords
struct LitKeywords_t79960B8845A5F490D2B409BA1E932A5EF2CC63BD  : public RuntimeObject
{
};

// VisualDesignCafe.ShaderX.Materials.LitProperties
struct LitProperties_tF61AFEFD7B395EB31BEDF407C1E3FF75B8CEDCFA  : public RuntimeObject
{
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// VisualDesignCafe.ShaderX.ReflectionHelper
struct ReflectionHelper_t0921D73EBBF63D36D9A2AE711F34FE18896FCAA0  : public RuntimeObject
{
};

struct ReflectionHelper_t0921D73EBBF63D36D9A2AE711F34FE18896FCAA0_StaticFields
{
	// System.Reflection.BindingFlags VisualDesignCafe.ShaderX.ReflectionHelper::_allBindings
	int32_t ____allBindings_0;
	// System.Reflection.BindingFlags VisualDesignCafe.ShaderX.ReflectionHelper::_staticBindings
	int32_t ____staticBindings_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MethodInfo> VisualDesignCafe.ShaderX.ReflectionHelper::_methodCache
	Dictionary_2_tA6171034F19E116CFB6E9839DA229454DA8469E3* ____methodCache_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Type> VisualDesignCafe.ShaderX.ReflectionHelper::_typeNameCache
	Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* ____typeNameCache_3;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Type[]> VisualDesignCafe.ShaderX.ReflectionHelper::_typeCache
	Dictionary_2_t362AB1E36F58A6769607F7DA6835762F36230B74* ____typeCache_4;
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

// System.StringComparer
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06  : public RuntimeObject
{
};

struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_StaticFields
{
	// System.CultureAwareComparer System.StringComparer::s_invariantCulture
	CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD* ___s_invariantCulture_0;
	// System.CultureAwareComparer System.StringComparer::s_invariantCultureIgnoreCase
	CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD* ___s_invariantCultureIgnoreCase_1;
	// System.OrdinalCaseSensitiveComparer System.StringComparer::s_ordinal
	OrdinalCaseSensitiveComparer_t581CA7CB51DCF00B6012A697A4B4B3067144521A* ___s_ordinal_2;
	// System.OrdinalIgnoreCaseComparer System.StringComparer::s_ordinalIgnoreCase
	OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0* ___s_ordinalIgnoreCase_3;
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

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
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

// VisualDesignCafe.ShaderX.Materials.LitMaterial
struct LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080  : public BaseMaterial_t75CEB54A6E97E52D865A51213E7D5A13D93DB7B2
{
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// System.OrdinalComparer
struct OrdinalComparer_tBB06915E213A5D4C8C617ED5478E8BF30C2B2170  : public StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06
{
	// System.Boolean System.OrdinalComparer::_ignoreCase
	bool ____ignoreCase_4;
};

// VisualDesignCafe.ShaderX.ShaderProperty
struct ShaderProperty_tF413E994D5B3F5F4FA685CC1656E6539C265F64C  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String VisualDesignCafe.ShaderX.ShaderProperty::Name
	String_t* ___Name_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IntPtr System.AppDomain::_mono_app_domain
	intptr_t ____mono_app_domain_1;
	// System.Object System.AppDomain::_evidence
	RuntimeObject* ____evidence_6;
	// System.Object System.AppDomain::_granted
	RuntimeObject* ____granted_7;
	// System.Int32 System.AppDomain::_principalPolicy
	int32_t ____principalPolicy_8;
	// System.AssemblyLoadEventHandler System.AppDomain::AssemblyLoad
	AssemblyLoadEventHandler_t74AF5FF25F520B9786A20D862AE69BE733774A42* ___AssemblyLoad_9;
	// System.ResolveEventHandler System.AppDomain::AssemblyResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___AssemblyResolve_10;
	// System.EventHandler System.AppDomain::DomainUnload
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___DomainUnload_11;
	// System.EventHandler System.AppDomain::ProcessExit
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___ProcessExit_12;
	// System.ResolveEventHandler System.AppDomain::ResourceResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___ResourceResolve_13;
	// System.ResolveEventHandler System.AppDomain::TypeResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___TypeResolve_14;
	// System.UnhandledExceptionEventHandler System.AppDomain::UnhandledException
	UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C* ___UnhandledException_15;
	// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs> System.AppDomain::FirstChanceException
	EventHandler_1_tF46A0252BA462E35F6B72C69AB6C0F751E7443D7* ___FirstChanceException_16;
	// System.Object System.AppDomain::_domain_manager
	RuntimeObject* ____domain_manager_17;
	// System.ResolveEventHandler System.AppDomain::ReflectionOnlyAssemblyResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___ReflectionOnlyAssemblyResolve_18;
	// System.Object System.AppDomain::_activation
	RuntimeObject* ____activation_19;
	// System.Object System.AppDomain::_applicationIdentity
	RuntimeObject* ____applicationIdentity_20;
	// System.Collections.Generic.List`1<System.String> System.AppDomain::compatibility_switch
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
};

struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_StaticFields
{
	// System.String System.AppDomain::_process_guid
	String_t* ____process_guid_2;
};

struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_ThreadStaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::type_resolve_in_progress
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___type_resolve_in_progress_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___assembly_resolve_in_progress_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress_refonly
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___assembly_resolve_in_progress_refonly_5;
};
// Native definition for P/Invoke marshalling of System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshaled_pinvoke : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_9;
	Il2CppMethodPointer ___AssemblyResolve_10;
	Il2CppMethodPointer ___DomainUnload_11;
	Il2CppMethodPointer ___ProcessExit_12;
	Il2CppMethodPointer ___ResourceResolve_13;
	Il2CppMethodPointer ___TypeResolve_14;
	Il2CppMethodPointer ___UnhandledException_15;
	Il2CppMethodPointer ___FirstChanceException_16;
	Il2CppIUnknown* ____domain_manager_17;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_18;
	Il2CppIUnknown* ____activation_19;
	Il2CppIUnknown* ____applicationIdentity_20;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
};
// Native definition for COM marshalling of System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshaled_com : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_9;
	Il2CppMethodPointer ___AssemblyResolve_10;
	Il2CppMethodPointer ___DomainUnload_11;
	Il2CppMethodPointer ___ProcessExit_12;
	Il2CppMethodPointer ___ResourceResolve_13;
	Il2CppMethodPointer ___TypeResolve_14;
	Il2CppMethodPointer ___UnhandledException_15;
	Il2CppMethodPointer ___FirstChanceException_16;
	Il2CppIUnknown* ____domain_manager_17;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_18;
	Il2CppIUnknown* ____activation_19;
	Il2CppIUnknown* ____applicationIdentity_20;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
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

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
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

// System.OrdinalIgnoreCaseComparer
struct OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0  : public OrdinalComparer_tBB06915E213A5D4C8C617ED5478E8BF30C2B2170
{
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
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

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339  : public RuntimeArray
{
	ALIGN_FIELD (8) Assembly_t* m_Items[1];

	inline Assembly_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Assembly_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Assembly_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Assembly_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Assembly_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Assembly_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB2760A703784902BE10E873BC760166EC9693D63_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method) ;
// System.Boolean VisualDesignCafe.ShaderX.ReflectionHelper::Invoke<System.Boolean>(System.String,System.String,T&,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionHelper_Invoke_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mDB49D171607F4061ECBA03AC91686E3303A8E9EA_gshared (String_t* ___typeName0, String_t* ___methodName1, bool* ___returnValue2, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___parameters3, const RuntimeMethod* method) ;

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Type VisualDesignCafe.ShaderX.ReflectionHelper::GetType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* ReflectionHelper_GetType_mB49035569241C8B45A0112E47D5868A7DB3B2AE5 (String_t* ___fullName0, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m71AAC993EBBDBA44EE73847D68F71C70AF7AD1D5 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Boolean VisualDesignCafe.ShaderX.ReflectionHelper::Invoke(System.Type,System.String,System.Object&,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionHelper_Invoke_mCD79C7CAFA46EB250C02A351486603CAC1AD5F65 (Type_t* ___type0, String_t* ___methodName1, RuntimeObject** ___returnValue2, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___parameters3, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Type>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mABB0055F51D71AEB872FC7C3C1726FBF9371E402 (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* __this, String_t* ___key0, Type_t** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A*, String_t*, Type_t**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.AppDomain System.AppDomain::get_CurrentDomain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* AppDomain_get_CurrentDomain_m5085B6AF21A19506C85E0650C46BE35A18011CFE (const RuntimeMethod* method) ;
// System.Reflection.Assembly[] System.AppDomain::GetAssemblies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* AppDomain_GetAssemblies_m8EE862747CADACB8CC0BDDBD8CA7DAD7BD9D9249 (AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Type>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mD50E387D30F70E1F0A66F0230DE70CA791753F38 (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* __this, String_t* ___key0, Type_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A*, String_t*, Type_t*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MethodInfo>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mC475FA2B0084A824E2793B2C28CE67FB6E3FEC6D (Dictionary_2_tA6171034F19E116CFB6E9839DA229454DA8469E3* __this, String_t* ___key0, MethodInfo_t** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA6171034F19E116CFB6E9839DA229454DA8469E3*, String_t*, MethodInfo_t**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Type_GetMethod_m9E66B5053F150537A74C490C1DA5174A7875189D (Type_t* __this, String_t* ___name0, int32_t ___bindingAttr1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MethodInfo>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mCE419CA3315C54931F0112B3A9156E00FFB86CE2 (Dictionary_2_tA6171034F19E116CFB6E9839DA229454DA8469E3* __this, String_t* ___key0, MethodInfo_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA6171034F19E116CFB6E9839DA229454DA8469E3*, String_t*, MethodInfo_t*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Reflection.MethodInfo::op_Equality(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Equality_m3F6B020142F59A9A1549CEB6C7A43798FBA18BEB (MethodInfo_t* ___left0, MethodInfo_t* ___right1, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodBase::get_IsStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E (MethodBase_t* __this, const RuntimeMethod* method) ;
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826 (MethodBase_t* __this, RuntimeObject* ___obj0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___parameters1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MethodInfo>::.ctor()
inline void Dictionary_2__ctor_m6FF7CEBC358B5FB27641B13E3366E8C3C73DA78C (Dictionary_2_tA6171034F19E116CFB6E9839DA229454DA8469E3* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA6171034F19E116CFB6E9839DA229454DA8469E3*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.StringComparer System.StringComparer::get_OrdinalIgnoreCase()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* StringComparer_get_OrdinalIgnoreCase_m4206775241793096770A30CE686D3B342AEDDE6E_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Type>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
inline void Dictionary_2__ctor_mF0801D8FE6D0681DB8297BDBEA8578266FC968EE (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mB2760A703784902BE10E873BC760166EC9693D63_gshared)(__this, ___comparer0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Type[]>::.ctor()
inline void Dictionary_2__ctor_mE0C4D261B09389DB77B83000113FF4342A8DFE5A (Dictionary_2_t362AB1E36F58A6769607F7DA6835762F36230B74* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t362AB1E36F58A6769607F7DA6835762F36230B74*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Material::IsKeywordEnabled(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Material_IsKeywordEnabled_m95EDB12868EBE7F404755CB79E5958B7DFA342D0 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___keyword0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::EnableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___keyword0, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.ShaderX.Materials.BaseMaterial::SetDirty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMaterial_SetDirty_m7530FC961B4E51406AD53CA2F2A1BA17A10BE5FB (BaseMaterial_t75CEB54A6E97E52D865A51213E7D5A13D93DB7B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::DisableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___keyword0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Material::HasProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Material_HasProperty_mC09A83B44E368A217F606DD4954FA080CC03EC6C (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Material::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Material_GetInt_mA772B615274DD11B37A352BC66EFA81BFD9C13EA (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Material::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Material_GetFloat_m2A77F10E6AA13EA3FA56166EFEA897115A14FA5A (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* Material_GetTexture_mBA07A377A7DDD29CD53E6F687DE6D49A42C0C719 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value1, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Material::GetColor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Material_GetColor_mAC702C70081A597DD2AA2F4627B1A1C65DDF6609 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Color::op_Inequality(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Inequality_m4A31CEDC6B46367D219D0358AC94F5F66C3849CA_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value1, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_clear_m8B58EA88C92F7DD2C66F0EC1BCC8AC697D631298_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Material::GetVector(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Material_GetVector_mA2011D4DA2CC58003AE90DBF0802CF5EE31B014D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector4::op_Inequality(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Inequality_m23600308603A706A9DD6057603DEA82E9A6F9FEF_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetVector(System.String,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value1, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_zero_m51B18794FAF141EBD06CA9907E6F7DF9D60F3515_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_m0377DB707B566C8E21DA3CD99963210F6D57D234 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337 (const RuntimeMethod* method) ;
// System.Boolean VisualDesignCafe.ShaderX.ReflectionHelper::Invoke<System.Boolean>(System.String,System.String,T&,System.Object[])
inline bool ReflectionHelper_Invoke_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mDB49D171607F4061ECBA03AC91686E3303A8E9EA (String_t* ___typeName0, String_t* ___methodName1, bool* ___returnValue2, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___parameters3, const RuntimeMethod* method)
{
	return ((  bool (*) (String_t*, String_t*, bool*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))ReflectionHelper_Invoke_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mDB49D171607F4061ECBA03AC91686E3303A8E9EA_gshared)(___typeName0, ___methodName1, ___returnValue2, ___parameters3, method);
}
// System.Boolean VisualDesignCafe.ShaderX.ReflectionHelper::Invoke(System.String,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionHelper_Invoke_m0F38CF553BA5F602D4F9811041D99B4FC1C4B7B8 (String_t* ___typeName0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___parameters2, const RuntimeMethod* method) ;
// System.Single VisualDesignCafe.ShaderX.Materials.BaseMaterial::TryGetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BaseMaterial_TryGetFloat_m0DE38E1A44D929C9D0C195D77FD094609A54266D (BaseMaterial_t75CEB54A6E97E52D865A51213E7D5A13D93DB7B2* __this, String_t* ___propertyName0, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.ShaderX.Materials.BaseMaterial::SetupStencil(System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMaterial_SetupStencil_m958CAE62CC584A2A9CC511D4317A9CE8F01C174D (BaseMaterial_t75CEB54A6E97E52D865A51213E7D5A13D93DB7B2* __this, bool ___receivesSSR0, bool ___useSplitLighting1, bool ___excludeFromTAA2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetShaderPassEnabled(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetShaderPassEnabled_m4F7DF6DD61B576788E359A177460363993E2C288 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___passName0, bool ___enabled1, const RuntimeMethod* method) ;
// System.Boolean VisualDesignCafe.ShaderX.Materials.BaseMaterial::GetKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseMaterial_GetKeyword_mE9ADE2DA9179CD345B093DDC34A69FA5F572E746 (BaseMaterial_t75CEB54A6E97E52D865A51213E7D5A13D93DB7B2* __this, String_t* ___keyword0, const RuntimeMethod* method) ;
// System.Boolean VisualDesignCafe.ShaderX.Materials.BaseMaterial::TrySetInt(System.String,System.Int32,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseMaterial_TrySetInt_m212B6743D942D3FCF64E009F271F6CA998370BE5 (BaseMaterial_t75CEB54A6E97E52D865A51213E7D5A13D93DB7B2* __this, String_t* ___propertyName0, int32_t ___value1, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___validate2, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.ShaderX.Materials.BaseMaterial::ComputeStencilProperties(System.Boolean,System.Boolean,System.Boolean,System.Int32&,System.Int32&,System.Int32&,System.Int32&,System.Int32&,System.Int32&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMaterial_ComputeStencilProperties_m27F9CDDB36C7B68015D56B8A3342D3CC926E06E4 (BaseMaterial_t75CEB54A6E97E52D865A51213E7D5A13D93DB7B2* __this, bool ___receivesSSR0, bool ___useSplitLighting1, bool ___excludeFromTAA2, int32_t* ___stencilRef3, int32_t* ___stencilWriteMask4, int32_t* ___stencilRefDepth5, int32_t* ___stencilWriteMaskDepth6, int32_t* ___stencilRefGBuffer7, int32_t* ___stencilWriteMaskGBuffer8, int32_t* ___stencilRefMV9, int32_t* ___stencilWriteMaskMV10, const RuntimeMethod* method) ;
// System.Boolean VisualDesignCafe.ShaderX.Materials.BaseMaterial::TrySetFloat(System.String,System.Single,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseMaterial_TrySetFloat_m3EA239D22D66BBAB3E08A9BEDAC1E764E2B864AF (BaseMaterial_t75CEB54A6E97E52D865A51213E7D5A13D93DB7B2* __this, String_t* ___propertyName0, float ___value1, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___validate2, const RuntimeMethod* method) ;
// UnityEngine.Texture VisualDesignCafe.ShaderX.Materials.BaseMaterial::TryGetTexture(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* BaseMaterial_TryGetTexture_m87D64B52B053AEF87CD64078CD4F28E1C6428CED (BaseMaterial_t75CEB54A6E97E52D865A51213E7D5A13D93DB7B2* __this, String_t* ___propertyName0, const RuntimeMethod* method) ;
// UnityEngine.Color VisualDesignCafe.ShaderX.Materials.BaseMaterial::TryGetColor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F BaseMaterial_TryGetColor_m94A74823DA49D2B3BF061BFFF790211DCDABFB7E (BaseMaterial_t75CEB54A6E97E52D865A51213E7D5A13D93DB7B2* __this, String_t* ___propertyName0, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.ShaderX.Materials.BaseMaterial::.ctor(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMaterial__ctor_mA2755C139A4922320C9BA364D7132A93E11EAFF0 (BaseMaterial_t75CEB54A6E97E52D865A51213E7D5A13D93DB7B2* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.ShaderX.Materials.LitMaterial::ClearKeywords()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LitMaterial_ClearKeywords_mF72BAAD31B38B868E3FF9CEC37ED864663C21FE7 (LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* __this, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.ShaderX.Materials.LitMaterial::ValidateAlphaTest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LitMaterial_ValidateAlphaTest_m040938C2F1B29994C3E1225DB94541568792E76C (LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* __this, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.ShaderX.Materials.LitMaterial::ValidateNormalMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LitMaterial_ValidateNormalMap_m0E9F20488C99C44026243D6FC4CAE48DC1F9CD5A (LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* __this, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.ShaderX.Materials.LitMaterial::ValidateSurfaceMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LitMaterial_ValidateSurfaceMap_m15AD3C4C5E8335E5B6D20DF847C8B87B7977FD90 (LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* __this, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.ShaderX.Materials.LitMaterial::ValidateEmission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LitMaterial_ValidateEmission_m666305B1643BDBA4293E710DF5005EFA3DFE7C02 (LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* __this, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.ShaderX.Materials.LitMaterial::ValidateSpecularHighlights()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LitMaterial_ValidateSpecularHighlights_mCD1C2AF897CC6B3184B178F823DF6B23CEF283BC (LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* __this, const RuntimeMethod* method) ;
// System.Boolean VisualDesignCafe.ShaderX.Materials.LitMaterial::get_TemporalAntiAliasing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LitMaterial_get_TemporalAntiAliasing_m4C2505672C0FCAB5DC6A3B8008E9A5C60F1ECB1C (LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* __this, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.ShaderX.Materials.LitMaterial::ValidateRenderQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LitMaterial_ValidateRenderQueue_m47B41DB9C7BE7D208A05B9994CD087B741C63D16 (LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_shaderKeywords(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_shaderKeywords_mD650CF82B2DBB75F001E373E2E1ACA30876F3AB8 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___value0, const RuntimeMethod* method) ;
// System.Boolean VisualDesignCafe.ShaderX.Materials.LitMaterial::get_SpecularHighlights()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LitMaterial_get_SpecularHighlights_mC45EB7D24C283DFDDE5468E4501EC503A8DA5FB6 (LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* __this, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.ShaderX.Materials.BaseMaterial::SetKeyword(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMaterial_SetKeyword_m5DC6D210EDBE262DC9DFD535C87459576F55A329 (BaseMaterial_t75CEB54A6E97E52D865A51213E7D5A13D93DB7B2* __this, String_t* ___keyword0, bool ___isEnabled1, const RuntimeMethod* method) ;
// System.Boolean VisualDesignCafe.ShaderX.Materials.LitMaterial::get_AlphaTest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LitMaterial_get_AlphaTest_m93D4EE690FF48C9C0B5A3A7603E098DAC7903D23 (LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* __this, const RuntimeMethod* method) ;
// System.Single VisualDesignCafe.ShaderX.Materials.LitMaterial::get_AlphaTestThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LitMaterial_get_AlphaTestThreshold_m27D75579E146192A1761E8C78DB2E02DEBFCB06F (LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture VisualDesignCafe.ShaderX.Materials.LitMaterial::get_NormalMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* LitMaterial_get_NormalMap_m44CA71B6A42199ED2589C643063A8FB38EA048E1 (LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* __this, const RuntimeMethod* method) ;
// System.Single VisualDesignCafe.ShaderX.Materials.LitMaterial::get_NormalMapScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LitMaterial_get_NormalMapScale_mD736596084880A501E720228C443D8EC29341D94 (LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* __this, const RuntimeMethod* method) ;
// VisualDesignCafe.ShaderX.Materials.LitMaterial/SurfaceMapMethod VisualDesignCafe.ShaderX.Materials.LitMaterial::get_SurfaceMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LitMaterial_get_SurfaceMap_mB89C14EBAEE3AE9617DEA1B4B17BE9C53345ED57 (LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture VisualDesignCafe.ShaderX.Materials.LitMaterial::get_MetallicGlossMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* LitMaterial_get_MetallicGlossMap_m9D0F1F5958745E312E54059E5999B6962D2C3895 (LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture VisualDesignCafe.ShaderX.Materials.LitMaterial::get_OcclusionMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* LitMaterial_get_OcclusionMap_m0C3AA4684A2909895E91534FF77E934AC5ADFE59 (LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture VisualDesignCafe.ShaderX.Materials.LitMaterial::get_PackedMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* LitMaterial_get_PackedMap_m01A5C7F54F51452D4A486F70691859AEBEF96E22 (LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* __this, const RuntimeMethod* method) ;
// System.Single VisualDesignCafe.ShaderX.Materials.LitMaterial::get_EmissionIntensity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LitMaterial_get_EmissionIntensity_m73F59B01BDDF4F74FFEE43EE3E7018EE9B04C011 (LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* __this, const RuntimeMethod* method) ;
// UnityEngine.Color VisualDesignCafe.ShaderX.Materials.LitMaterial::get_EmissionColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F LitMaterial_get_EmissionColor_m7CB64AD8A9C2144D2763DA69CCA722198CC71163 (LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline (const RuntimeMethod* method) ;
// System.Boolean VisualDesignCafe.ShaderX.ColorExtensions::Equals(UnityEngine.Color,UnityEngine.Color,VisualDesignCafe.ShaderX.ColorComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColorExtensions_Equals_m06CB5F69F879EE26E52BC1D76C6C6C7355888C20 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___other1, int32_t ___comparison2, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Material::get_renderQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Material_get_renderQueue_mC427C54D2667620CBB845559DA4DA31BE166C757 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_renderQueue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean VisualDesignCafe.ShaderX.Materials.LitMaterial::get_MotionVectors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LitMaterial_get_MotionVectors_m5B56A2060B556F6510549E9E663C35DEB2179E24 (LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* __this, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.ShaderX.Materials.BaseMaterial::ValidatePasses(System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMaterial_ValidatePasses_mD5920F891A11F3BEFC342946013982CA31FD866D (BaseMaterial_t75CEB54A6E97E52D865A51213E7D5A13D93DB7B2* __this, bool ___receivesSSR0, bool ___useSplitLighting1, bool ___excludeFromTAA2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Color::op_Equality(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Equality_m3A255F888F9300ABB36ED2BC0640CFFDAAEFED2F_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector4::op_Equality(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_m80E2AA0626A70EF9DCC4F4C215F674A22D6DE937_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
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
// System.Boolean VisualDesignCafe.ShaderX.ColorExtensions::Equals(UnityEngine.Color,UnityEngine.Color,VisualDesignCafe.ShaderX.ColorComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColorExtensions_Equals_m06CB5F69F879EE26E52BC1D76C6C6C7355888C20 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___other1, int32_t ___comparison2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___color0;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___other1;
		float L_3 = L_2.___r_0;
		V_0 = (bool)((((float)L_1) == ((float)L_3))? 1 : 0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___color0;
		float L_5 = L_4.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___other1;
		float L_7 = L_6.___g_1;
		V_1 = (bool)((((float)L_5) == ((float)L_7))? 1 : 0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___color0;
		float L_9 = L_8.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = ___other1;
		float L_11 = L_10.___b_2;
		V_2 = (bool)((((float)L_9) == ((float)L_11))? 1 : 0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = ___color0;
		float L_13 = L_12.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = ___other1;
		float L_15 = L_14.___a_3;
		V_3 = (bool)((((float)L_13) == ((float)L_15))? 1 : 0);
		int32_t L_16 = ___comparison2;
		int32_t L_17 = L_16;
		int32_t L_18 = 1;
		bool L_19 = il2cpp_codegen_enum_has_flag((int32_t)L_17, (int32_t)L_18);
		V_4 = L_19;
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_0056;
		}
	}
	{
		V_3 = (bool)1;
	}

IL_0056:
	{
		bool L_21 = V_0;
		bool L_22 = V_1;
		bool L_23 = V_2;
		bool L_24 = V_3;
		V_5 = (bool)((int32_t)(((int32_t)(((int32_t)((int32_t)L_21&(int32_t)L_22))&(int32_t)L_23))&(int32_t)L_24));
		goto IL_0061;
	}

IL_0061:
	{
		bool L_25 = V_5;
		return L_25;
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
// System.Void VisualDesignCafe.ShaderX.ShaderProperty::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderProperty__ctor_m9964C48766E825467E88C9AAD2598E0B7EFE4859 (ShaderProperty_tF413E994D5B3F5F4FA685CC1656E6539C265F64C* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___name0;
		__this->___Name_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Name_0), (void*)L_0);
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
// System.Boolean VisualDesignCafe.ShaderX.ReflectionHelper::Invoke(System.String,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionHelper_Invoke_m0F38CF553BA5F602D4F9811041D99B4FC1C4B7B8 (String_t* ___typeName0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___parameters2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionHelper_t0921D73EBBF63D36D9A2AE711F34FE18896FCAA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	{
		String_t* L_0 = ___typeName0;
		il2cpp_codegen_runtime_class_init_inline(ReflectionHelper_t0921D73EBBF63D36D9A2AE711F34FE18896FCAA0_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = ReflectionHelper_GetType_mB49035569241C8B45A0112E47D5868A7DB3B2AE5(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Type_op_Inequality_m71AAC993EBBDBA44EE73847D68F71C70AF7AD1D5(L_2, (Type_t*)NULL, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		Type_t* L_5 = V_0;
		String_t* L_6 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = ___parameters2;
		il2cpp_codegen_runtime_class_init_inline(ReflectionHelper_t0921D73EBBF63D36D9A2AE711F34FE18896FCAA0_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = ReflectionHelper_Invoke_mCD79C7CAFA46EB250C02A351486603CAC1AD5F65(L_5, L_6, (&V_2), L_7, NULL);
		V_3 = L_8;
		goto IL_0024;
	}

IL_0020:
	{
		V_3 = (bool)0;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_9 = V_3;
		return L_9;
	}
}
// System.Type VisualDesignCafe.ShaderX.ReflectionHelper::GetType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* ReflectionHelper_GetType_mB49035569241C8B45A0112E47D5868A7DB3B2AE5 (String_t* ___fullName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mABB0055F51D71AEB872FC7C3C1726FBF9371E402_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mD50E387D30F70E1F0A66F0230DE70CA791753F38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionHelper_t0921D73EBBF63D36D9A2AE711F34FE18896FCAA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	Type_t* V_2 = NULL;
	AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* V_3 = NULL;
	int32_t V_4 = 0;
	Assembly_t* V_5 = NULL;
	bool V_6 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		il2cpp_codegen_runtime_class_init_inline(ReflectionHelper_t0921D73EBBF63D36D9A2AE711F34FE18896FCAA0_il2cpp_TypeInfo_var);
		Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* L_0 = ((ReflectionHelper_t0921D73EBBF63D36D9A2AE711F34FE18896FCAA0_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionHelper_t0921D73EBBF63D36D9A2AE711F34FE18896FCAA0_il2cpp_TypeInfo_var))->____typeNameCache_3;
		String_t* L_1 = ___fullName0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mABB0055F51D71AEB872FC7C3C1726FBF9371E402(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_mABB0055F51D71AEB872FC7C3C1726FBF9371E402_RuntimeMethod_var);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0016;
		}
	}
	{
		Type_t* L_4 = V_0;
		V_2 = L_4;
		goto IL_007e;
	}

IL_0016:
	{
		AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* L_5;
		L_5 = AppDomain_get_CurrentDomain_m5085B6AF21A19506C85E0650C46BE35A18011CFE(NULL);
		NullCheck(L_5);
		AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_6;
		L_6 = AppDomain_GetAssemblies_m8EE862747CADACB8CC0BDDBD8CA7DAD7BD9D9249(L_5, NULL);
		V_3 = L_6;
		V_4 = 0;
		goto IL_0066;
	}

IL_0027:
	{
		AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_7 = V_3;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Assembly_t* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_5 = L_10;
	}
	try
	{// begin try (depth: 1)
		{
			Assembly_t* L_11 = V_5;
			String_t* L_12 = ___fullName0;
			NullCheck(L_11);
			Type_t* L_13;
			L_13 = VirtualFuncInvoker3< Type_t*, String_t*, bool, bool >::Invoke(30 /* System.Type System.Reflection.Assembly::GetType(System.String,System.Boolean,System.Boolean) */, L_11, L_12, (bool)0, (bool)1);
			V_0 = L_13;
			Type_t* L_14 = V_0;
			il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
			bool L_15;
			L_15 = Type_op_Inequality_m71AAC993EBBDBA44EE73847D68F71C70AF7AD1D5(L_14, (Type_t*)NULL, NULL);
			V_6 = L_15;
			bool L_16 = V_6;
			if (!L_16)
			{
				goto IL_0058_1;
			}
		}
		{
			il2cpp_codegen_runtime_class_init_inline(ReflectionHelper_t0921D73EBBF63D36D9A2AE711F34FE18896FCAA0_il2cpp_TypeInfo_var);
			Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* L_17 = ((ReflectionHelper_t0921D73EBBF63D36D9A2AE711F34FE18896FCAA0_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionHelper_t0921D73EBBF63D36D9A2AE711F34FE18896FCAA0_il2cpp_TypeInfo_var))->____typeNameCache_3;
			String_t* L_18 = ___fullName0;
			Type_t* L_19 = V_0;
			NullCheck(L_17);
			Dictionary_2_set_Item_mD50E387D30F70E1F0A66F0230DE70CA791753F38(L_17, L_18, L_19, Dictionary_2_set_Item_mD50E387D30F70E1F0A66F0230DE70CA791753F38_RuntimeMethod_var);
			Type_t* L_20 = V_0;
			V_2 = L_20;
			goto IL_007e;
		}

IL_0058_1:
		{
			goto IL_0060;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_005b;
		}
		throw e;
	}

CATCH_005b:
	{// begin catch(System.Exception)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0060;
	}// end catch (depth: 1)

IL_0060:
	{
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0066:
	{
		int32_t L_22 = V_4;
		AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_23 = V_3;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))
		{
			goto IL_0027;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ReflectionHelper_t0921D73EBBF63D36D9A2AE711F34FE18896FCAA0_il2cpp_TypeInfo_var);
		Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* L_24 = ((ReflectionHelper_t0921D73EBBF63D36D9A2AE711F34FE18896FCAA0_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionHelper_t0921D73EBBF63D36D9A2AE711F34FE18896FCAA0_il2cpp_TypeInfo_var))->____typeNameCache_3;
		String_t* L_25 = ___fullName0;
		NullCheck(L_24);
		Dictionary_2_set_Item_mD50E387D30F70E1F0A66F0230DE70CA791753F38(L_24, L_25, (Type_t*)NULL, Dictionary_2_set_Item_mD50E387D30F70E1F0A66F0230DE70CA791753F38_RuntimeMethod_var);
		V_2 = (Type_t*)NULL;
		goto IL_007e;
	}

IL_007e:
	{
		Type_t* L_26 = V_2;
		return L_26;
	}
}
// System.Boolean VisualDesignCafe.ShaderX.ReflectionHelper::Invoke(System.Type,System.String,System.Object&,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionHelper_Invoke_mCD79C7CAFA46EB250C02A351486603CAC1AD5F65 (Type_t* ___type0, String_t* ___methodName1, RuntimeObject** ___returnValue2, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___parameters3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mC475FA2B0084A824E2793B2C28CE67FB6E3FEC6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mCE419CA3315C54931F0112B3A9156E00FFB86CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionHelper_t0921D73EBBF63D36D9A2AE711F34FE18896FCAA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	MethodInfo_t* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		RuntimeObject** L_0 = ___returnValue2;
		*((RuntimeObject**)L_0) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)NULL);
		Type_t* L_1 = ___type0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(27 /* System.String System.Type::get_FullName() */, L_1);
		String_t* L_3 = ___methodName1;
		String_t* L_4;
		L_4 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_2, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_3, NULL);
		V_0 = L_4;
		il2cpp_codegen_runtime_class_init_inline(ReflectionHelper_t0921D73EBBF63D36D9A2AE711F34FE18896FCAA0_il2cpp_TypeInfo_var);
		Dictionary_2_tA6171034F19E116CFB6E9839DA229454DA8469E3* L_5 = ((ReflectionHelper_t0921D73EBBF63D36D9A2AE711F34FE18896FCAA0_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionHelper_t0921D73EBBF63D36D9A2AE711F34FE18896FCAA0_il2cpp_TypeInfo_var))->____methodCache_2;
		String_t* L_6 = V_0;
		NullCheck(L_5);
		bool L_7;
		L_7 = Dictionary_2_TryGetValue_mC475FA2B0084A824E2793B2C28CE67FB6E3FEC6D(L_5, L_6, (&V_1), Dictionary_2_TryGetValue_mC475FA2B0084A824E2793B2C28CE67FB6E3FEC6D_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ReflectionHelper_t0921D73EBBF63D36D9A2AE711F34FE18896FCAA0_il2cpp_TypeInfo_var);
		Dictionary_2_tA6171034F19E116CFB6E9839DA229454DA8469E3* L_9 = ((ReflectionHelper_t0921D73EBBF63D36D9A2AE711F34FE18896FCAA0_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionHelper_t0921D73EBBF63D36D9A2AE711F34FE18896FCAA0_il2cpp_TypeInfo_var))->____methodCache_2;
		String_t* L_10 = V_0;
		Type_t* L_11 = ___type0;
		String_t* L_12 = ___methodName1;
		int32_t L_13 = ((ReflectionHelper_t0921D73EBBF63D36D9A2AE711F34FE18896FCAA0_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionHelper_t0921D73EBBF63D36D9A2AE711F34FE18896FCAA0_il2cpp_TypeInfo_var))->____allBindings_0;
		NullCheck(L_11);
		MethodInfo_t* L_14;
		L_14 = Type_GetMethod_m9E66B5053F150537A74C490C1DA5174A7875189D(L_11, L_12, L_13, NULL);
		MethodInfo_t* L_15 = L_14;
		V_1 = L_15;
		NullCheck(L_9);
		Dictionary_2_set_Item_mCE419CA3315C54931F0112B3A9156E00FFB86CE2(L_9, L_10, L_15, Dictionary_2_set_Item_mCE419CA3315C54931F0112B3A9156E00FFB86CE2_RuntimeMethod_var);
	}

IL_0044:
	{
		MethodInfo_t* L_16 = V_1;
		bool L_17;
		L_17 = MethodInfo_op_Equality_m3F6B020142F59A9A1549CEB6C7A43798FBA18BEB(L_16, (MethodInfo_t*)NULL, NULL);
		V_3 = L_17;
		bool L_18 = V_3;
		if (!L_18)
		{
			goto IL_0054;
		}
	}
	{
		V_4 = (bool)0;
		goto IL_0084;
	}

IL_0054:
	{
		MethodInfo_t* L_19 = V_1;
		NullCheck(L_19);
		bool L_20;
		L_20 = MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E(L_19, NULL);
		V_5 = L_20;
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_006c;
		}
	}
	{
		RuntimeObject** L_22 = ___returnValue2;
		MethodInfo_t* L_23 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = ___parameters3;
		NullCheck(L_23);
		RuntimeObject* L_25;
		L_25 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_23, NULL, L_24, NULL);
		*((RuntimeObject**)L_22) = (RuntimeObject*)L_25;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_22, (void*)(RuntimeObject*)L_25);
		goto IL_007f;
	}

IL_006c:
	{
		RuntimeObject** L_26 = ___returnValue2;
		MethodInfo_t* L_27 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28 = ___parameters3;
		NullCheck(L_28);
		int32_t L_29 = 0;
		RuntimeObject* L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_31 = ___parameters3;
		NullCheck(L_31);
		int32_t L_32 = 1;
		RuntimeObject* L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_27);
		RuntimeObject* L_34;
		L_34 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_27, L_30, ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)Castclass((RuntimeObject*)L_33, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), NULL);
		*((RuntimeObject**)L_26) = (RuntimeObject*)L_34;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_26, (void*)(RuntimeObject*)L_34);
	}

IL_007f:
	{
		V_4 = (bool)1;
		goto IL_0084;
	}

IL_0084:
	{
		bool L_35 = V_4;
		return L_35;
	}
}
// System.Void VisualDesignCafe.ShaderX.ReflectionHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionHelper__cctor_m3C951C15EFFA632CDEB18FA07D03C1E916A0A0D2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m6FF7CEBC358B5FB27641B13E3366E8C3C73DA78C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mE0C4D261B09389DB77B83000113FF4342A8DFE5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mF0801D8FE6D0681DB8297BDBEA8578266FC968EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t362AB1E36F58A6769607F7DA6835762F36230B74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA6171034F19E116CFB6E9839DA229454DA8469E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionHelper_t0921D73EBBF63D36D9A2AE711F34FE18896FCAA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((ReflectionHelper_t0921D73EBBF63D36D9A2AE711F34FE18896FCAA0_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionHelper_t0921D73EBBF63D36D9A2AE711F34FE18896FCAA0_il2cpp_TypeInfo_var))->____allBindings_0 = ((int32_t)60);
		((ReflectionHelper_t0921D73EBBF63D36D9A2AE711F34FE18896FCAA0_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionHelper_t0921D73EBBF63D36D9A2AE711F34FE18896FCAA0_il2cpp_TypeInfo_var))->____staticBindings_1 = ((int32_t)56);
		Dictionary_2_tA6171034F19E116CFB6E9839DA229454DA8469E3* L_0 = (Dictionary_2_tA6171034F19E116CFB6E9839DA229454DA8469E3*)il2cpp_codegen_object_new(Dictionary_2_tA6171034F19E116CFB6E9839DA229454DA8469E3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m6FF7CEBC358B5FB27641B13E3366E8C3C73DA78C(L_0, Dictionary_2__ctor_m6FF7CEBC358B5FB27641B13E3366E8C3C73DA78C_RuntimeMethod_var);
		((ReflectionHelper_t0921D73EBBF63D36D9A2AE711F34FE18896FCAA0_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionHelper_t0921D73EBBF63D36D9A2AE711F34FE18896FCAA0_il2cpp_TypeInfo_var))->____methodCache_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ReflectionHelper_t0921D73EBBF63D36D9A2AE711F34FE18896FCAA0_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionHelper_t0921D73EBBF63D36D9A2AE711F34FE18896FCAA0_il2cpp_TypeInfo_var))->____methodCache_2), (void*)L_0);
		il2cpp_codegen_runtime_class_init_inline(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* L_1;
		L_1 = StringComparer_get_OrdinalIgnoreCase_m4206775241793096770A30CE686D3B342AEDDE6E_inline(NULL);
		Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* L_2 = (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A*)il2cpp_codegen_object_new(Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_mF0801D8FE6D0681DB8297BDBEA8578266FC968EE(L_2, L_1, Dictionary_2__ctor_mF0801D8FE6D0681DB8297BDBEA8578266FC968EE_RuntimeMethod_var);
		((ReflectionHelper_t0921D73EBBF63D36D9A2AE711F34FE18896FCAA0_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionHelper_t0921D73EBBF63D36D9A2AE711F34FE18896FCAA0_il2cpp_TypeInfo_var))->____typeNameCache_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((ReflectionHelper_t0921D73EBBF63D36D9A2AE711F34FE18896FCAA0_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionHelper_t0921D73EBBF63D36D9A2AE711F34FE18896FCAA0_il2cpp_TypeInfo_var))->____typeNameCache_3), (void*)L_2);
		Dictionary_2_t362AB1E36F58A6769607F7DA6835762F36230B74* L_3 = (Dictionary_2_t362AB1E36F58A6769607F7DA6835762F36230B74*)il2cpp_codegen_object_new(Dictionary_2_t362AB1E36F58A6769607F7DA6835762F36230B74_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Dictionary_2__ctor_mE0C4D261B09389DB77B83000113FF4342A8DFE5A(L_3, Dictionary_2__ctor_mE0C4D261B09389DB77B83000113FF4342A8DFE5A_RuntimeMethod_var);
		((ReflectionHelper_t0921D73EBBF63D36D9A2AE711F34FE18896FCAA0_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionHelper_t0921D73EBBF63D36D9A2AE711F34FE18896FCAA0_il2cpp_TypeInfo_var))->____typeCache_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((ReflectionHelper_t0921D73EBBF63D36D9A2AE711F34FE18896FCAA0_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionHelper_t0921D73EBBF63D36D9A2AE711F34FE18896FCAA0_il2cpp_TypeInfo_var))->____typeCache_4), (void*)L_3);
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
// System.Void VisualDesignCafe.ShaderX.Materials.BaseMaterial::.ctor(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMaterial__ctor_mA2755C139A4922320C9BA364D7132A93E11EAFF0 (BaseMaterial_t75CEB54A6E97E52D865A51213E7D5A13D93DB7B2* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, const RuntimeMethod* method) 
{
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B2_0 = NULL;
	BaseMaterial_t75CEB54A6E97E52D865A51213E7D5A13D93DB7B2* G_B2_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B1_0 = NULL;
	BaseMaterial_t75CEB54A6E97E52D865A51213E7D5A13D93DB7B2* G_B1_1 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___material0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0019;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3450A2BB8216F70D528215A296AEDB3D212C7EED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BaseMaterial__ctor_mA2755C139A4922320C9BA364D7132A93E11EAFF0_RuntimeMethod_var)));
	}

IL_0019:
	{
		NullCheck(G_B2_1);
		G_B2_1->___Material_0 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___Material_0), (void*)G_B2_0);
		return;
	}
}
// System.Void VisualDesignCafe.ShaderX.Materials.BaseMaterial::Validate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMaterial_Validate_mCDD3D61A7630784A0BBC5D7E2F0854A8CDA3DD6A (BaseMaterial_t75CEB54A6E97E52D865A51213E7D5A13D93DB7B2* __this, bool ___clean0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void VisualDesignCafe.ShaderX.Materials.BaseMaterial::SetKeyword(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMaterial_SetKeyword_m5DC6D210EDBE262DC9DFD535C87459576F55A329 (BaseMaterial_t75CEB54A6E97E52D865A51213E7D5A13D93DB7B2* __this, String_t* ___keyword0, bool ___isEnabled1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		bool L_0 = ___isEnabled1;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___Material_0;
		String_t* L_3 = ___keyword0;
		NullCheck(L_2);
		bool L_4;
		L_4 = Material_IsKeywordEnabled_m95EDB12868EBE7F404755CB79E5958B7DFA342D0(L_2, L_3, NULL);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = __this->___Material_0;
		String_t* L_7 = ___keyword0;
		NullCheck(L_6);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_6, L_7, NULL);
		BaseMaterial_SetDirty_m7530FC961B4E51406AD53CA2F2A1BA17A10BE5FB(__this, NULL);
	}

IL_0030:
	{
		goto IL_005b;
	}

IL_0033:
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = __this->___Material_0;
		String_t* L_9 = ___keyword0;
		NullCheck(L_8);
		bool L_10;
		L_10 = Material_IsKeywordEnabled_m95EDB12868EBE7F404755CB79E5958B7DFA342D0(L_8, L_9, NULL);
		V_2 = L_10;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_005a;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = __this->___Material_0;
		String_t* L_13 = ___keyword0;
		NullCheck(L_12);
		Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C(L_12, L_13, NULL);
		BaseMaterial_SetDirty_m7530FC961B4E51406AD53CA2F2A1BA17A10BE5FB(__this, NULL);
	}

IL_005a:
	{
	}

IL_005b:
	{
		return;
	}
}
// System.Boolean VisualDesignCafe.ShaderX.Materials.BaseMaterial::GetKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseMaterial_GetKeyword_mE9ADE2DA9179CD345B093DDC34A69FA5F572E746 (BaseMaterial_t75CEB54A6E97E52D865A51213E7D5A13D93DB7B2* __this, String_t* ___keyword0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___Material_0;
		String_t* L_1 = ___keyword0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Material_IsKeywordEnabled_m95EDB12868EBE7F404755CB79E5958B7DFA342D0(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean VisualDesignCafe.ShaderX.Materials.BaseMaterial::TrySetInt(System.String,System.Int32,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseMaterial_TrySetInt_m212B6743D942D3FCF64E009F271F6CA998370BE5 (BaseMaterial_t75CEB54A6E97E52D865A51213E7D5A13D93DB7B2* __this, String_t* ___propertyName0, int32_t ___value1, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___validate2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___Material_0;
		String_t* L_1 = ___propertyName0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Material_HasProperty_mC09A83B44E368A217F606DD4954FA080CC03EC6C(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_004f;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___Material_0;
		String_t* L_5 = ___propertyName0;
		NullCheck(L_4);
		int32_t L_6;
		L_6 = Material_GetInt_mA772B615274DD11B37A352BC66EFA81BFD9C13EA(L_4, L_5, NULL);
		int32_t L_7 = ___value1;
		V_1 = (bool)((((int32_t)((((int32_t)L_6) == ((int32_t)L_7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_004b;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = __this->___Material_0;
		String_t* L_10 = ___propertyName0;
		int32_t L_11 = ___value1;
		NullCheck(L_9);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_9, L_10, L_11, NULL);
		BaseMaterial_SetDirty_m7530FC961B4E51406AD53CA2F2A1BA17A10BE5FB(__this, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_12 = ___validate2;
		if (L_12)
		{
			goto IL_0043;
		}
	}
	{
		goto IL_004a;
	}

IL_0043:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_13 = ___validate2;
		NullCheck(L_13);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_13, NULL);
	}

IL_004a:
	{
	}

IL_004b:
	{
		V_2 = (bool)1;
		goto IL_0053;
	}

IL_004f:
	{
		V_2 = (bool)0;
		goto IL_0053;
	}

IL_0053:
	{
		bool L_14 = V_2;
		return L_14;
	}
}
// System.Boolean VisualDesignCafe.ShaderX.Materials.BaseMaterial::TrySetFloat(System.String,System.Single,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseMaterial_TrySetFloat_m3EA239D22D66BBAB3E08A9BEDAC1E764E2B864AF (BaseMaterial_t75CEB54A6E97E52D865A51213E7D5A13D93DB7B2* __this, String_t* ___propertyName0, float ___value1, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___validate2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___Material_0;
		String_t* L_1 = ___propertyName0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Material_HasProperty_mC09A83B44E368A217F606DD4954FA080CC03EC6C(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_004f;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___Material_0;
		String_t* L_5 = ___propertyName0;
		NullCheck(L_4);
		float L_6;
		L_6 = Material_GetFloat_m2A77F10E6AA13EA3FA56166EFEA897115A14FA5A(L_4, L_5, NULL);
		float L_7 = ___value1;
		V_1 = (bool)((((int32_t)((((float)L_6) == ((float)L_7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_004b;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = __this->___Material_0;
		String_t* L_10 = ___propertyName0;
		float L_11 = ___value1;
		NullCheck(L_9);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_9, L_10, L_11, NULL);
		BaseMaterial_SetDirty_m7530FC961B4E51406AD53CA2F2A1BA17A10BE5FB(__this, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_12 = ___validate2;
		if (L_12)
		{
			goto IL_0043;
		}
	}
	{
		goto IL_004a;
	}

IL_0043:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_13 = ___validate2;
		NullCheck(L_13);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_13, NULL);
	}

IL_004a:
	{
	}

IL_004b:
	{
		V_2 = (bool)1;
		goto IL_0053;
	}

IL_004f:
	{
		V_2 = (bool)0;
		goto IL_0053;
	}

IL_0053:
	{
		bool L_14 = V_2;
		return L_14;
	}
}
// System.Single VisualDesignCafe.ShaderX.Materials.BaseMaterial::TryGetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BaseMaterial_TryGetFloat_m0DE38E1A44D929C9D0C195D77FD094609A54266D (BaseMaterial_t75CEB54A6E97E52D865A51213E7D5A13D93DB7B2* __this, String_t* ___propertyName0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___Material_0;
		String_t* L_1 = ___propertyName0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Material_HasProperty_mC09A83B44E368A217F606DD4954FA080CC03EC6C(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		G_B3_0 = (0.0f);
		goto IL_0022;
	}

IL_0016:
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = __this->___Material_0;
		String_t* L_4 = ___propertyName0;
		NullCheck(L_3);
		float L_5;
		L_5 = Material_GetFloat_m2A77F10E6AA13EA3FA56166EFEA897115A14FA5A(L_3, L_4, NULL);
		G_B3_0 = L_5;
	}

IL_0022:
	{
		V_0 = G_B3_0;
		goto IL_0025;
	}

IL_0025:
	{
		float L_6 = V_0;
		return L_6;
	}
}
// System.Boolean VisualDesignCafe.ShaderX.Materials.BaseMaterial::TrySetTexture(System.String,UnityEngine.Texture,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseMaterial_TrySetTexture_m3698AAFD35350A34A92081127786856F06B5B5AF (BaseMaterial_t75CEB54A6E97E52D865A51213E7D5A13D93DB7B2* __this, String_t* ___propertyName0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value1, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___validate2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___Material_0;
		String_t* L_1 = ___propertyName0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Material_HasProperty_mC09A83B44E368A217F606DD4954FA080CC03EC6C(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_004f;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___Material_0;
		String_t* L_5 = ___propertyName0;
		NullCheck(L_4);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_6;
		L_6 = Material_GetTexture_mBA07A377A7DDD29CD53E6F687DE6D49A42C0C719(L_4, L_5, NULL);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_7 = ___value1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_6, L_7, NULL);
		V_1 = L_8;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_004b;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10 = __this->___Material_0;
		String_t* L_11 = ___propertyName0;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_12 = ___value1;
		NullCheck(L_10);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_10, L_11, L_12, NULL);
		BaseMaterial_SetDirty_m7530FC961B4E51406AD53CA2F2A1BA17A10BE5FB(__this, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_13 = ___validate2;
		if (L_13)
		{
			goto IL_0043;
		}
	}
	{
		goto IL_004a;
	}

IL_0043:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_14 = ___validate2;
		NullCheck(L_14);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_14, NULL);
	}

IL_004a:
	{
	}

IL_004b:
	{
		V_2 = (bool)1;
		goto IL_0053;
	}

IL_004f:
	{
		V_2 = (bool)0;
		goto IL_0053;
	}

IL_0053:
	{
		bool L_15 = V_2;
		return L_15;
	}
}
// UnityEngine.Texture VisualDesignCafe.ShaderX.Materials.BaseMaterial::TryGetTexture(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* BaseMaterial_TryGetTexture_m87D64B52B053AEF87CD64078CD4F28E1C6428CED (BaseMaterial_t75CEB54A6E97E52D865A51213E7D5A13D93DB7B2* __this, String_t* ___propertyName0, const RuntimeMethod* method) 
{
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* V_0 = NULL;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* G_B3_0 = NULL;
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___Material_0;
		String_t* L_1 = ___propertyName0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Material_HasProperty_mC09A83B44E368A217F606DD4954FA080CC03EC6C(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		G_B3_0 = ((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)(NULL));
		goto IL_001e;
	}

IL_0012:
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = __this->___Material_0;
		String_t* L_4 = ___propertyName0;
		NullCheck(L_3);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_5;
		L_5 = Material_GetTexture_mBA07A377A7DDD29CD53E6F687DE6D49A42C0C719(L_3, L_4, NULL);
		G_B3_0 = L_5;
	}

IL_001e:
	{
		V_0 = G_B3_0;
		goto IL_0021;
	}

IL_0021:
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_6 = V_0;
		return L_6;
	}
}
// System.Boolean VisualDesignCafe.ShaderX.Materials.BaseMaterial::TrySetColor(System.String,UnityEngine.Color,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseMaterial_TrySetColor_m69373663B82D54BE91DF90598FB3603BA830C00D (BaseMaterial_t75CEB54A6E97E52D865A51213E7D5A13D93DB7B2* __this, String_t* ___propertyName0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value1, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___validate2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___Material_0;
		String_t* L_1 = ___propertyName0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Material_HasProperty_mC09A83B44E368A217F606DD4954FA080CC03EC6C(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_004f;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___Material_0;
		String_t* L_5 = ___propertyName0;
		NullCheck(L_4);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Material_GetColor_mAC702C70081A597DD2AA2F4627B1A1C65DDF6609(L_4, L_5, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = ___value1;
		bool L_8;
		L_8 = Color_op_Inequality_m4A31CEDC6B46367D219D0358AC94F5F66C3849CA_inline(L_6, L_7, NULL);
		V_1 = L_8;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_004b;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10 = __this->___Material_0;
		String_t* L_11 = ___propertyName0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = ___value1;
		NullCheck(L_10);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_10, L_11, L_12, NULL);
		BaseMaterial_SetDirty_m7530FC961B4E51406AD53CA2F2A1BA17A10BE5FB(__this, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_13 = ___validate2;
		if (L_13)
		{
			goto IL_0043;
		}
	}
	{
		goto IL_004a;
	}

IL_0043:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_14 = ___validate2;
		NullCheck(L_14);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_14, NULL);
	}

IL_004a:
	{
	}

IL_004b:
	{
		V_2 = (bool)1;
		goto IL_0053;
	}

IL_004f:
	{
		V_2 = (bool)0;
		goto IL_0053;
	}

IL_0053:
	{
		bool L_15 = V_2;
		return L_15;
	}
}
// UnityEngine.Color VisualDesignCafe.ShaderX.Materials.BaseMaterial::TryGetColor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F BaseMaterial_TryGetColor_m94A74823DA49D2B3BF061BFFF790211DCDABFB7E (BaseMaterial_t75CEB54A6E97E52D865A51213E7D5A13D93DB7B2* __this, String_t* ___propertyName0, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___Material_0;
		String_t* L_1 = ___propertyName0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Material_HasProperty_mC09A83B44E368A217F606DD4954FA080CC03EC6C(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_get_clear_m8B58EA88C92F7DD2C66F0EC1BCC8AC697D631298_inline(NULL);
		G_B3_0 = L_3;
		goto IL_0022;
	}

IL_0016:
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___Material_0;
		String_t* L_5 = ___propertyName0;
		NullCheck(L_4);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Material_GetColor_mAC702C70081A597DD2AA2F4627B1A1C65DDF6609(L_4, L_5, NULL);
		G_B3_0 = L_6;
	}

IL_0022:
	{
		V_0 = G_B3_0;
		goto IL_0025;
	}

IL_0025:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = V_0;
		return L_7;
	}
}
// System.Boolean VisualDesignCafe.ShaderX.Materials.BaseMaterial::TrySetVector(System.String,UnityEngine.Vector4,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseMaterial_TrySetVector_m45F536CB1E4EBC84AF5827183AF5282139B0597B (BaseMaterial_t75CEB54A6E97E52D865A51213E7D5A13D93DB7B2* __this, String_t* ___propertyName0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value1, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___validate2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___Material_0;
		String_t* L_1 = ___propertyName0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Material_HasProperty_mC09A83B44E368A217F606DD4954FA080CC03EC6C(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_004f;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___Material_0;
		String_t* L_5 = ___propertyName0;
		NullCheck(L_4);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6;
		L_6 = Material_GetVector_mA2011D4DA2CC58003AE90DBF0802CF5EE31B014D(L_4, L_5, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7 = ___value1;
		bool L_8;
		L_8 = Vector4_op_Inequality_m23600308603A706A9DD6057603DEA82E9A6F9FEF_inline(L_6, L_7, NULL);
		V_1 = L_8;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_004b;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10 = __this->___Material_0;
		String_t* L_11 = ___propertyName0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = ___value1;
		NullCheck(L_10);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_10, L_11, L_12, NULL);
		BaseMaterial_SetDirty_m7530FC961B4E51406AD53CA2F2A1BA17A10BE5FB(__this, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_13 = ___validate2;
		if (L_13)
		{
			goto IL_0043;
		}
	}
	{
		goto IL_004a;
	}

IL_0043:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_14 = ___validate2;
		NullCheck(L_14);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_14, NULL);
	}

IL_004a:
	{
	}

IL_004b:
	{
		V_2 = (bool)1;
		goto IL_0053;
	}

IL_004f:
	{
		V_2 = (bool)0;
		goto IL_0053;
	}

IL_0053:
	{
		bool L_15 = V_2;
		return L_15;
	}
}
// UnityEngine.Vector4 VisualDesignCafe.ShaderX.Materials.BaseMaterial::TryGetVector(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 BaseMaterial_TryGetVector_m143D6BDE769623CFDEEC4C244B76F1F137537090 (BaseMaterial_t75CEB54A6E97E52D865A51213E7D5A13D93DB7B2* __this, String_t* ___propertyName0, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___Material_0;
		String_t* L_1 = ___propertyName0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Material_HasProperty_mC09A83B44E368A217F606DD4954FA080CC03EC6C(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3;
		L_3 = Vector4_get_zero_m51B18794FAF141EBD06CA9907E6F7DF9D60F3515_inline(NULL);
		G_B3_0 = L_3;
		goto IL_0022;
	}

IL_0016:
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___Material_0;
		String_t* L_5 = ___propertyName0;
		NullCheck(L_4);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6;
		L_6 = Material_GetVector_mA2011D4DA2CC58003AE90DBF0802CF5EE31B014D(L_4, L_5, NULL);
		G_B3_0 = L_6;
	}

IL_0022:
	{
		V_0 = G_B3_0;
		goto IL_0025;
	}

IL_0025:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7 = V_0;
		return L_7;
	}
}
// System.Void VisualDesignCafe.ShaderX.Materials.BaseMaterial::SetDirty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMaterial_SetDirty_m7530FC961B4E51406AD53CA2F2A1BA17A10BE5FB (BaseMaterial_t75CEB54A6E97E52D865A51213E7D5A13D93DB7B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionHelper_Invoke_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mDB49D171607F4061ECBA03AC91686E3303A8E9EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionHelper_t0921D73EBBF63D36D9A2AE711F34FE18896FCAA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E57359E147D3245E0022D7C14F3F57C0026940E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B2A1B56C01168B957C372A26B6603146D81645B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8066350B6E79405BBA4C2ACA4628C51C7B096B4);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B6_0 = 0;
	{
		bool L_0;
		L_0 = Application_get_isEditor_m0377DB707B566C8E21DA3CD99963210F6D57D234(NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		goto IL_006c;
	}

IL_000f:
	{
		bool L_2;
		L_2 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_004d;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = __this->___Material_0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		il2cpp_codegen_runtime_class_init_inline(ReflectionHelper_t0921D73EBBF63D36D9A2AE711F34FE18896FCAA0_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = ReflectionHelper_Invoke_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mDB49D171607F4061ECBA03AC91686E3303A8E9EA(_stringLiteral6B2A1B56C01168B957C372A26B6603146D81645B, _stringLiteral0E57359E147D3245E0022D7C14F3F57C0026940E, (&V_3), L_5, ReflectionHelper_Invoke_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mDB49D171607F4061ECBA03AC91686E3303A8E9EA_RuntimeMethod_var);
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0043;
		}
	}
	{
		bool L_9 = V_3;
		G_B6_0 = ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B6_0 = 1;
	}

IL_0044:
	{
		V_4 = (bool)G_B6_0;
		bool L_10 = V_4;
		if (!L_10)
		{
			goto IL_004c;
		}
	}
	{
		goto IL_006c;
	}

IL_004c:
	{
	}

IL_004d:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_11;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___Material_0;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_13);
		il2cpp_codegen_runtime_class_init_inline(ReflectionHelper_t0921D73EBBF63D36D9A2AE711F34FE18896FCAA0_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = ReflectionHelper_Invoke_m0F38CF553BA5F602D4F9811041D99B4FC1C4B7B8(_stringLiteral6B2A1B56C01168B957C372A26B6603146D81645B, _stringLiteralB8066350B6E79405BBA4C2ACA4628C51C7B096B4, L_12, NULL);
	}

IL_006c:
	{
		return;
	}
}
// System.Boolean VisualDesignCafe.ShaderX.Materials.BaseMaterial::GetMotionVectorsEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseMaterial_GetMotionVectorsEnabled_mBA3CC8D559A0AB5DC94FCEA32CF0499AC7923261 (BaseMaterial_t75CEB54A6E97E52D865A51213E7D5A13D93DB7B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral756AB349BAC425C88DAB956F1C5628699A5936D8);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		float L_0;
		L_0 = BaseMaterial_TryGetFloat_m0DE38E1A44D929C9D0C195D77FD094609A54266D(__this, _stringLiteral756AB349BAC425C88DAB956F1C5628699A5936D8, NULL);
		V_0 = (bool)((((float)L_0) > ((float)(0.0f)))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void VisualDesignCafe.ShaderX.Materials.BaseMaterial::ValidatePasses(System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMaterial_ValidatePasses_mD5920F891A11F3BEFC342946013982CA31FD866D (BaseMaterial_t75CEB54A6E97E52D865A51213E7D5A13D93DB7B2* __this, bool ___receivesSSR0, bool ___useSplitLighting1, bool ___excludeFromTAA2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17863920B5F72471659AD01703F458D84098D66C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18A0D054A81F8042DD1845F93DB9CDD1B4022D45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30D5B3AF9F2828B7CC03C6AAB712AF102E707992);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5ADCA981E6C4267AC85B8E846F5831F15F6A9359);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral635F3DE8EC68E3F30863B57372B304DFB5D3E35A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral991E6DC25D3E3FF20513AD0E8D1B989F49176BA7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA83F88E5441C58DB1F038F62D2433D6BDEAB6145);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA25FBAEEFFB772291FB6D7DD9330839737B6D49);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = ___receivesSSR0;
		bool L_1 = ___useSplitLighting1;
		bool L_2 = ___excludeFromTAA2;
		BaseMaterial_SetupStencil_m958CAE62CC584A2A9CC511D4317A9CE8F01C174D(__this, L_0, L_1, L_2, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = __this->___Material_0;
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean VisualDesignCafe.ShaderX.Materials.BaseMaterial::GetMotionVectorsEnabled() */, __this);
		NullCheck(L_3);
		Material_SetShaderPassEnabled_m4F7DF6DD61B576788E359A177460363993E2C288(L_3, _stringLiteral18A0D054A81F8042DD1845F93DB9CDD1B4022D45, L_4, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = __this->___Material_0;
		NullCheck(L_5);
		Material_SetShaderPassEnabled_m4F7DF6DD61B576788E359A177460363993E2C288(L_5, _stringLiteral991E6DC25D3E3FF20513AD0E8D1B989F49176BA7, (bool)0, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = __this->___Material_0;
		NullCheck(L_6);
		Material_SetShaderPassEnabled_m4F7DF6DD61B576788E359A177460363993E2C288(L_6, _stringLiteralBA25FBAEEFFB772291FB6D7DD9330839737B6D49, (bool)0, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___Material_0;
		NullCheck(L_7);
		Material_SetShaderPassEnabled_m4F7DF6DD61B576788E359A177460363993E2C288(L_7, _stringLiteral5ADCA981E6C4267AC85B8E846F5831F15F6A9359, (bool)0, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = __this->___Material_0;
		NullCheck(L_8);
		Material_SetShaderPassEnabled_m4F7DF6DD61B576788E359A177460363993E2C288(L_8, _stringLiteral635F3DE8EC68E3F30863B57372B304DFB5D3E35A, (bool)0, NULL);
		bool L_9;
		L_9 = BaseMaterial_GetKeyword_mE9ADE2DA9179CD345B093DDC34A69FA5F572E746(__this, _stringLiteral30D5B3AF9F2828B7CC03C6AAB712AF102E707992, NULL);
		V_0 = L_9;
		bool L_10 = V_0;
		if (!L_10)
		{
			goto IL_0099;
		}
	}
	{
		bool L_11;
		L_11 = BaseMaterial_TrySetInt_m212B6743D942D3FCF64E009F271F6CA998370BE5(__this, _stringLiteralA83F88E5441C58DB1F038F62D2433D6BDEAB6145, 3, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		bool L_12;
		L_12 = BaseMaterial_TrySetInt_m212B6743D942D3FCF64E009F271F6CA998370BE5(__this, _stringLiteral17863920B5F72471659AD01703F458D84098D66C, 3, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		goto IL_00b7;
	}

IL_0099:
	{
		bool L_13;
		L_13 = BaseMaterial_TrySetInt_m212B6743D942D3FCF64E009F271F6CA998370BE5(__this, _stringLiteralA83F88E5441C58DB1F038F62D2433D6BDEAB6145, 4, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		bool L_14;
		L_14 = BaseMaterial_TrySetInt_m212B6743D942D3FCF64E009F271F6CA998370BE5(__this, _stringLiteral17863920B5F72471659AD01703F458D84098D66C, 4, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
	}

IL_00b7:
	{
		return;
	}
}
// System.Void VisualDesignCafe.ShaderX.Materials.BaseMaterial::ComputeStencilProperties(System.Boolean,System.Boolean,System.Boolean,System.Int32&,System.Int32&,System.Int32&,System.Int32&,System.Int32&,System.Int32&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMaterial_ComputeStencilProperties_m27F9CDDB36C7B68015D56B8A3342D3CC926E06E4 (BaseMaterial_t75CEB54A6E97E52D865A51213E7D5A13D93DB7B2* __this, bool ___receivesSSR0, bool ___useSplitLighting1, bool ___excludeFromTAA2, int32_t* ___stencilRef3, int32_t* ___stencilWriteMask4, int32_t* ___stencilRefDepth5, int32_t* ___stencilWriteMaskDepth6, int32_t* ___stencilRefGBuffer7, int32_t* ___stencilWriteMaskGBuffer8, int32_t* ___stencilRefMV9, int32_t* ___stencilWriteMaskMV10, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		int32_t* L_0 = ___stencilRef3;
		*((int32_t*)L_0) = (int32_t)0;
		int32_t* L_1 = ___stencilWriteMask4;
		*((int32_t*)L_1) = (int32_t)6;
		int32_t* L_2 = ___stencilRefDepth5;
		*((int32_t*)L_2) = (int32_t)0;
		int32_t* L_3 = ___stencilWriteMaskDepth6;
		*((int32_t*)L_3) = (int32_t)0;
		int32_t* L_4 = ___stencilRefGBuffer7;
		*((int32_t*)L_4) = (int32_t)2;
		int32_t* L_5 = ___stencilWriteMaskGBuffer8;
		*((int32_t*)L_5) = (int32_t)6;
		int32_t* L_6 = ___stencilRefMV9;
		*((int32_t*)L_6) = (int32_t)((int32_t)32);
		int32_t* L_7 = ___stencilWriteMaskMV10;
		*((int32_t*)L_7) = (int32_t)((int32_t)32);
		bool L_8 = ___useSplitLighting1;
		V_0 = L_8;
		bool L_9 = V_0;
		if (!L_9)
		{
			goto IL_003a;
		}
	}
	{
		int32_t* L_10 = ___stencilRefGBuffer7;
		int32_t* L_11 = ___stencilRefGBuffer7;
		int32_t L_12 = *((int32_t*)L_11);
		*((int32_t*)L_10) = (int32_t)((int32_t)(L_12|4));
		int32_t* L_13 = ___stencilRef3;
		int32_t* L_14 = ___stencilRef3;
		int32_t L_15 = *((int32_t*)L_14);
		*((int32_t*)L_13) = (int32_t)((int32_t)(L_15|4));
	}

IL_003a:
	{
		bool L_16 = ___receivesSSR0;
		V_1 = L_16;
		bool L_17 = V_1;
		if (!L_17)
		{
			goto IL_0059;
		}
	}
	{
		int32_t* L_18 = ___stencilRefDepth5;
		int32_t* L_19 = ___stencilRefDepth5;
		int32_t L_20 = *((int32_t*)L_19);
		*((int32_t*)L_18) = (int32_t)((int32_t)(L_20|8));
		int32_t* L_21 = ___stencilRefGBuffer7;
		int32_t* L_22 = ___stencilRefGBuffer7;
		int32_t L_23 = *((int32_t*)L_22);
		*((int32_t*)L_21) = (int32_t)((int32_t)(L_23|8));
		int32_t* L_24 = ___stencilRefMV9;
		int32_t* L_25 = ___stencilRefMV9;
		int32_t L_26 = *((int32_t*)L_25);
		*((int32_t*)L_24) = (int32_t)((int32_t)(L_26|8));
	}

IL_0059:
	{
		int32_t* L_27 = ___stencilWriteMaskDepth6;
		int32_t* L_28 = ___stencilWriteMaskDepth6;
		int32_t L_29 = *((int32_t*)L_28);
		*((int32_t*)L_27) = (int32_t)((int32_t)(L_29|8));
		int32_t* L_30 = ___stencilWriteMaskGBuffer8;
		int32_t* L_31 = ___stencilWriteMaskGBuffer8;
		int32_t L_32 = *((int32_t*)L_31);
		*((int32_t*)L_30) = (int32_t)((int32_t)(L_32|8));
		int32_t* L_33 = ___stencilWriteMaskMV10;
		int32_t* L_34 = ___stencilWriteMaskMV10;
		int32_t L_35 = *((int32_t*)L_34);
		*((int32_t*)L_33) = (int32_t)((int32_t)(L_35|8));
		return;
	}
}
// System.Void VisualDesignCafe.ShaderX.Materials.BaseMaterial::SetupStencil(System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMaterial_SetupStencil_m958CAE62CC584A2A9CC511D4317A9CE8F01C174D (BaseMaterial_t75CEB54A6E97E52D865A51213E7D5A13D93DB7B2* __this, bool ___receivesSSR0, bool ___useSplitLighting1, bool ___excludeFromTAA2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral101ABEE848638F167DD466C2B19866E5EA5FACE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16353F9BE83017A3E46479ADF6323A09B7B58E24);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral394B8C6C8CA442EF8C63386789D48EEDD0084236);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8A139418EF0697974054E94254DECA0AE09AAC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61BB919A48A634682A5A8760841B82F6744E4FCE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A04387AC50CA145040DA7825FFA0F9B66C2D910);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DA7DAB552B215AA3F740CDFE25D920B82670895);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DFF184E720DE9F82A38C545FF0B2D4530AEB175);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8E26C0D2C29FEF651F8DE36B8F14426427E2F96);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD658A45C611B58E7557EE1D77363255C4BE74F3);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	{
		bool L_0 = ___receivesSSR0;
		bool L_1 = ___useSplitLighting1;
		bool L_2 = ___excludeFromTAA2;
		BaseMaterial_ComputeStencilProperties_m27F9CDDB36C7B68015D56B8A3342D3CC926E06E4(__this, L_0, L_1, L_2, (&V_0), (&V_1), (&V_2), (&V_3), (&V_4), (&V_5), (&V_6), (&V_7), NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = __this->___Material_0;
		NullCheck(L_3);
		bool L_4;
		L_4 = Material_HasProperty_mC09A83B44E368A217F606DD4954FA080CC03EC6C(L_3, _stringLiteral4D8A139418EF0697974054E94254DECA0AE09AAC, NULL);
		V_8 = L_4;
		bool L_5 = V_8;
		if (!L_5)
		{
			goto IL_0057;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = __this->___Material_0;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_6, _stringLiteral4D8A139418EF0697974054E94254DECA0AE09AAC, L_7, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = __this->___Material_0;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_8, _stringLiteral394B8C6C8CA442EF8C63386789D48EEDD0084236, L_9, NULL);
	}

IL_0057:
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10 = __this->___Material_0;
		NullCheck(L_10);
		bool L_11;
		L_11 = Material_HasProperty_mC09A83B44E368A217F606DD4954FA080CC03EC6C(L_10, _stringLiteralB8E26C0D2C29FEF651F8DE36B8F14426427E2F96, NULL);
		V_9 = L_11;
		bool L_12 = V_9;
		if (!L_12)
		{
			goto IL_0093;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___Material_0;
		int32_t L_14 = V_2;
		NullCheck(L_13);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_13, _stringLiteralB8E26C0D2C29FEF651F8DE36B8F14426427E2F96, L_14, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15 = __this->___Material_0;
		int32_t L_16 = V_3;
		NullCheck(L_15);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_15, _stringLiteral101ABEE848638F167DD466C2B19866E5EA5FACE3, L_16, NULL);
	}

IL_0093:
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___Material_0;
		NullCheck(L_17);
		bool L_18;
		L_18 = Material_HasProperty_mC09A83B44E368A217F606DD4954FA080CC03EC6C(L_17, _stringLiteral6A04387AC50CA145040DA7825FFA0F9B66C2D910, NULL);
		V_10 = L_18;
		bool L_19 = V_10;
		if (!L_19)
		{
			goto IL_00d1;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20 = __this->___Material_0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_20, _stringLiteral6A04387AC50CA145040DA7825FFA0F9B66C2D910, L_21, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_22 = __this->___Material_0;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_22, _stringLiteral16353F9BE83017A3E46479ADF6323A09B7B58E24, L_23, NULL);
	}

IL_00d1:
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_24 = __this->___Material_0;
		NullCheck(L_24);
		bool L_25;
		L_25 = Material_HasProperty_mC09A83B44E368A217F606DD4954FA080CC03EC6C(L_24, _stringLiteralFD658A45C611B58E7557EE1D77363255C4BE74F3, NULL);
		V_11 = L_25;
		bool L_26 = V_11;
		if (!L_26)
		{
			goto IL_010d;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27 = __this->___Material_0;
		NullCheck(L_27);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_27, _stringLiteralFD658A45C611B58E7557EE1D77363255C4BE74F3, 4, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_28 = __this->___Material_0;
		NullCheck(L_28);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_28, _stringLiteral7DFF184E720DE9F82A38C545FF0B2D4530AEB175, 4, NULL);
	}

IL_010d:
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29 = __this->___Material_0;
		NullCheck(L_29);
		bool L_30;
		L_30 = Material_HasProperty_mC09A83B44E368A217F606DD4954FA080CC03EC6C(L_29, _stringLiteral61BB919A48A634682A5A8760841B82F6744E4FCE, NULL);
		V_12 = L_30;
		bool L_31 = V_12;
		if (!L_31)
		{
			goto IL_014b;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_32 = __this->___Material_0;
		int32_t L_33 = V_6;
		NullCheck(L_32);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_32, _stringLiteral61BB919A48A634682A5A8760841B82F6744E4FCE, L_33, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_34 = __this->___Material_0;
		int32_t L_35 = V_7;
		NullCheck(L_34);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_34, _stringLiteral6DA7DAB552B215AA3F740CDFE25D920B82670895, L_35, NULL);
	}

IL_014b:
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
// System.Void VisualDesignCafe.ShaderX.Materials.LitKeywords::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LitKeywords__ctor_m72C0EB17EF959387A33C68F55164ED473D28081E (LitKeywords_t79960B8845A5F490D2B409BA1E932A5EF2CC63BD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Boolean VisualDesignCafe.ShaderX.Materials.LitMaterial::get_AlphaTest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LitMaterial_get_AlphaTest_m93D4EE690FF48C9C0B5A3A7603E098DAC7903D23 (LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4150C3447E11CCBF4486D8C6677CF174D84602A);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0;
		L_0 = BaseMaterial_TryGetFloat_m0DE38E1A44D929C9D0C195D77FD094609A54266D(__this, _stringLiteralB4150C3447E11CCBF4486D8C6677CF174D84602A, NULL);
		return (bool)((((float)L_0) == ((float)(1.0f)))? 1 : 0);
	}
}
// System.Void VisualDesignCafe.ShaderX.Materials.LitMaterial::set_AlphaTest(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LitMaterial_set_AlphaTest_m25C32C4029CFE7B25AA7BA3E6225C0E1B6F21135 (LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4150C3447E11CCBF4486D8C6677CF174D84602A);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = NULL;
	LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* G_B3_2 = NULL;
	{
		bool L_0 = ___value0;
		G_B1_0 = _stringLiteralB4150C3447E11CCBF4486D8C6677CF174D84602A;
		G_B1_1 = __this;
		if (L_0)
		{
			G_B2_0 = _stringLiteralB4150C3447E11CCBF4486D8C6677CF174D84602A;
			G_B2_1 = __this;
			goto IL_000c;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_000d;
	}

IL_000c:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_000d:
	{
		NullCheck(G_B3_2);
		bool L_1;
		L_1 = BaseMaterial_TrySetFloat_m3EA239D22D66BBAB3E08A9BEDAC1E764E2B864AF(G_B3_2, G_B3_1, ((float)G_B3_0), (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		return;
	}
}
// System.Single VisualDesignCafe.ShaderX.Materials.LitMaterial::get_AlphaTestThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LitMaterial_get_AlphaTestThreshold_m27D75579E146192A1761E8C78DB2E02DEBFCB06F (LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99A0B52CE21318A073B5A8933EAE03811D210D18);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0;
		L_0 = BaseMaterial_TryGetFloat_m0DE38E1A44D929C9D0C195D77FD094609A54266D(__this, _stringLiteral99A0B52CE21318A073B5A8933EAE03811D210D18, NULL);
		return L_0;
	}
}
// System.Void VisualDesignCafe.ShaderX.Materials.LitMaterial::set_AlphaTestThreshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LitMaterial_set_AlphaTestThreshold_mA3E3DBF4F26BED630AB9E73785DAC6AC17D61099 (LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99A0B52CE21318A073B5A8933EAE03811D210D18);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___value0;
		bool L_1;
		L_1 = BaseMaterial_TrySetFloat_m3EA239D22D66BBAB3E08A9BEDAC1E764E2B864AF(__this, _stringLiteral99A0B52CE21318A073B5A8933EAE03811D210D18, L_0, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		return;
	}
}
// System.Void VisualDesignCafe.ShaderX.Materials.LitMaterial::set_DoubleSided(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LitMaterial_set_DoubleSided_m1CFF424C75D37BC6FF2109C838B37ECEAAF0C042 (LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8555801F4146548F386C45EBCBE78A18D3EFDAC3);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = NULL;
	LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* G_B3_2 = NULL;
	{
		bool L_0 = ___value0;
		G_B1_0 = _stringLiteral8555801F4146548F386C45EBCBE78A18D3EFDAC3;
		G_B1_1 = __this;
		if (L_0)
		{
			G_B2_0 = _stringLiteral8555801F4146548F386C45EBCBE78A18D3EFDAC3;
			G_B2_1 = __this;
			goto IL_000c;
		}
	}
	{
		G_B3_0 = 2;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_000d;
	}

IL_000c:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_000d:
	{
		NullCheck(G_B3_2);
		bool L_1;
		L_1 = BaseMaterial_TrySetFloat_m3EA239D22D66BBAB3E08A9BEDAC1E764E2B864AF(G_B3_2, G_B3_1, ((float)G_B3_0), (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		return;
	}
}
// System.Void VisualDesignCafe.ShaderX.Materials.LitMaterial::set_DoubleSidedNormalMode(VisualDesignCafe.ShaderX.Materials.LitMaterial/DoubleSidedNormals)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LitMaterial_set_DoubleSidedNormalMode_m860D1E64D5424CDFBC05BE86550DA95564037841 (LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2EEBCA85FFEEDE3E375378C4D632ED4E350F3661);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value0;
		bool L_1;
		L_1 = BaseMaterial_TrySetFloat_m3EA239D22D66BBAB3E08A9BEDAC1E764E2B864AF(__this, _stringLiteral2EEBCA85FFEEDE3E375378C4D632ED4E350F3661, ((float)L_0), (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		return;
	}
}
// UnityEngine.Texture VisualDesignCafe.ShaderX.Materials.LitMaterial::get_NormalMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* LitMaterial_get_NormalMap_m44CA71B6A42199ED2589C643063A8FB38EA048E1 (LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17870CA6693777D85F2129A2C9A2AF8DCEDFC342);
		s_Il2CppMethodInitialized = true;
	}
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0;
		L_0 = BaseMaterial_TryGetTexture_m87D64B52B053AEF87CD64078CD4F28E1C6428CED(__this, _stringLiteral17870CA6693777D85F2129A2C9A2AF8DCEDFC342, NULL);
		return L_0;
	}
}
// System.Single VisualDesignCafe.ShaderX.Materials.LitMaterial::get_NormalMapScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LitMaterial_get_NormalMapScale_mD736596084880A501E720228C443D8EC29341D94 (LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB969AE5DD9963D63AC521BB1315A34407675F96);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0;
		L_0 = BaseMaterial_TryGetFloat_m0DE38E1A44D929C9D0C195D77FD094609A54266D(__this, _stringLiteralAB969AE5DD9963D63AC521BB1315A34407675F96, NULL);
		return L_0;
	}
}
// VisualDesignCafe.ShaderX.Materials.LitMaterial/SurfaceMapMethod VisualDesignCafe.ShaderX.Materials.LitMaterial::get_SurfaceMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LitMaterial_get_SurfaceMap_mB89C14EBAEE3AE9617DEA1B4B17BE9C53345ED57 (LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCD140DD8E7ED9046F7125A7AA691E0581341132);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0;
		L_0 = BaseMaterial_TryGetFloat_m0DE38E1A44D929C9D0C195D77FD094609A54266D(__this, _stringLiteralBCD140DD8E7ED9046F7125A7AA691E0581341132, NULL);
		return (int32_t)(il2cpp_codegen_cast_double_to_int<int32_t>(L_0));
	}
}
// System.Void VisualDesignCafe.ShaderX.Materials.LitMaterial::set_SurfaceMap(VisualDesignCafe.ShaderX.Materials.LitMaterial/SurfaceMapMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LitMaterial_set_SurfaceMap_m8B13B4EBBE40F9C9E9F8630822981CC6BF156A30 (LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCD140DD8E7ED9046F7125A7AA691E0581341132);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value0;
		bool L_1;
		L_1 = BaseMaterial_TrySetFloat_m3EA239D22D66BBAB3E08A9BEDAC1E764E2B864AF(__this, _stringLiteralBCD140DD8E7ED9046F7125A7AA691E0581341132, ((float)L_0), (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		return;
	}
}
// UnityEngine.Texture VisualDesignCafe.ShaderX.Materials.LitMaterial::get_PackedMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* LitMaterial_get_PackedMap_m01A5C7F54F51452D4A486F70691859AEBEF96E22 (LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79A2B5AD5F0F5233F56842788A5EEE2E935E90F7);
		s_Il2CppMethodInitialized = true;
	}
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0;
		L_0 = BaseMaterial_TryGetTexture_m87D64B52B053AEF87CD64078CD4F28E1C6428CED(__this, _stringLiteral79A2B5AD5F0F5233F56842788A5EEE2E935E90F7, NULL);
		return L_0;
	}
}
// UnityEngine.Texture VisualDesignCafe.ShaderX.Materials.LitMaterial::get_MetallicGlossMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* LitMaterial_get_MetallicGlossMap_m9D0F1F5958745E312E54059E5999B6962D2C3895 (LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE147FC8F66BE740F2F8674E00CBC75BC21B73934);
		s_Il2CppMethodInitialized = true;
	}
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0;
		L_0 = BaseMaterial_TryGetTexture_m87D64B52B053AEF87CD64078CD4F28E1C6428CED(__this, _stringLiteralE147FC8F66BE740F2F8674E00CBC75BC21B73934, NULL);
		return L_0;
	}
}
// UnityEngine.Texture VisualDesignCafe.ShaderX.Materials.LitMaterial::get_OcclusionMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* LitMaterial_get_OcclusionMap_m0C3AA4684A2909895E91534FF77E934AC5ADFE59 (LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40BFB095782D36D1B276A40A276C76911EF9318F);
		s_Il2CppMethodInitialized = true;
	}
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0;
		L_0 = BaseMaterial_TryGetTexture_m87D64B52B053AEF87CD64078CD4F28E1C6428CED(__this, _stringLiteral40BFB095782D36D1B276A40A276C76911EF9318F, NULL);
		return L_0;
	}
}
// System.Void VisualDesignCafe.ShaderX.Materials.LitMaterial::set_Glossiness(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LitMaterial_set_Glossiness_m4C20016B4388EF0E1BF6C9899073409FE22E050F (LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2A3DF99788A73C2F0FE7267B988915F72D2C1F1);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___value0;
		bool L_1;
		L_1 = BaseMaterial_TrySetFloat_m3EA239D22D66BBAB3E08A9BEDAC1E764E2B864AF(__this, _stringLiteralA2A3DF99788A73C2F0FE7267B988915F72D2C1F1, L_0, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		return;
	}
}
// UnityEngine.Color VisualDesignCafe.ShaderX.Materials.LitMaterial::get_EmissionColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F LitMaterial_get_EmissionColor_m7CB64AD8A9C2144D2763DA69CCA722198CC71163 (LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466);
		s_Il2CppMethodInitialized = true;
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = BaseMaterial_TryGetColor_m94A74823DA49D2B3BF061BFFF790211DCDABFB7E(__this, _stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466, NULL);
		return L_0;
	}
}
// System.Single VisualDesignCafe.ShaderX.Materials.LitMaterial::get_EmissionIntensity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LitMaterial_get_EmissionIntensity_m73F59B01BDDF4F74FFEE43EE3E7018EE9B04C011 (LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D50BAA80F9AF3978F2A9E3FAEAAFCA90BE86E11);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0;
		L_0 = BaseMaterial_TryGetFloat_m0DE38E1A44D929C9D0C195D77FD094609A54266D(__this, _stringLiteral4D50BAA80F9AF3978F2A9E3FAEAAFCA90BE86E11, NULL);
		return L_0;
	}
}
// System.Boolean VisualDesignCafe.ShaderX.Materials.LitMaterial::get_SpecularHighlights()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LitMaterial_get_SpecularHighlights_mC45EB7D24C283DFDDE5468E4501EC503A8DA5FB6 (LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38B8C8C0BD25C5963BB0276F350E52AE4F3288D3);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0;
		L_0 = BaseMaterial_TryGetFloat_m0DE38E1A44D929C9D0C195D77FD094609A54266D(__this, _stringLiteral38B8C8C0BD25C5963BB0276F350E52AE4F3288D3, NULL);
		return (bool)((((float)L_0) == ((float)(1.0f)))? 1 : 0);
	}
}
// System.Void VisualDesignCafe.ShaderX.Materials.LitMaterial::set_SpecularHighlights(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LitMaterial_set_SpecularHighlights_m106B47C4BC60BE899D90C290E9C77B9A7AAF9BC1 (LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38B8C8C0BD25C5963BB0276F350E52AE4F3288D3);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = NULL;
	LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* G_B3_2 = NULL;
	{
		bool L_0 = ___value0;
		G_B1_0 = _stringLiteral38B8C8C0BD25C5963BB0276F350E52AE4F3288D3;
		G_B1_1 = __this;
		if (L_0)
		{
			G_B2_0 = _stringLiteral38B8C8C0BD25C5963BB0276F350E52AE4F3288D3;
			G_B2_1 = __this;
			goto IL_000c;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_000d;
	}

IL_000c:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_000d:
	{
		NullCheck(G_B3_2);
		bool L_1;
		L_1 = BaseMaterial_TrySetFloat_m3EA239D22D66BBAB3E08A9BEDAC1E764E2B864AF(G_B3_2, G_B3_1, ((float)G_B3_0), (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		return;
	}
}
// System.Boolean VisualDesignCafe.ShaderX.Materials.LitMaterial::get_MotionVectors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LitMaterial_get_MotionVectors_m5B56A2060B556F6510549E9E663C35DEB2179E24 (LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral756AB349BAC425C88DAB956F1C5628699A5936D8);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0;
		L_0 = BaseMaterial_TryGetFloat_m0DE38E1A44D929C9D0C195D77FD094609A54266D(__this, _stringLiteral756AB349BAC425C88DAB956F1C5628699A5936D8, NULL);
		return (bool)((((float)L_0) == ((float)(1.0f)))? 1 : 0);
	}
}
// System.Boolean VisualDesignCafe.ShaderX.Materials.LitMaterial::get_TemporalAntiAliasing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LitMaterial_get_TemporalAntiAliasing_m4C2505672C0FCAB5DC6A3B8008E9A5C60F1ECB1C (LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4C4D1D09A7A19E98CDB242EB6E2D43CC2AA11D0);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0;
		L_0 = BaseMaterial_TryGetFloat_m0DE38E1A44D929C9D0C195D77FD094609A54266D(__this, _stringLiteralB4C4D1D09A7A19E98CDB242EB6E2D43CC2AA11D0, NULL);
		return (bool)((((float)L_0) == ((float)(1.0f)))? 1 : 0);
	}
}
// System.Void VisualDesignCafe.ShaderX.Materials.LitMaterial::.ctor(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LitMaterial__ctor_m31E602B441C3B61AF27CE0324AD08BE027C38A33 (LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, const RuntimeMethod* method) 
{
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___material0;
		BaseMaterial__ctor_mA2755C139A4922320C9BA364D7132A93E11EAFF0(__this, L_0, NULL);
		return;
	}
}
// System.Void VisualDesignCafe.ShaderX.Materials.LitMaterial::Validate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LitMaterial_Validate_m130B7BEAEC069AE834C231DD3B18C7250C98B5C3 (LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* __this, bool ___clean0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0 = ___clean0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		LitMaterial_ClearKeywords_mF72BAAD31B38B868E3FF9CEC37ED864663C21FE7(__this, NULL);
	}

IL_000d:
	{
		LitMaterial_ValidateAlphaTest_m040938C2F1B29994C3E1225DB94541568792E76C(__this, NULL);
		LitMaterial_ValidateNormalMap_m0E9F20488C99C44026243D6FC4CAE48DC1F9CD5A(__this, NULL);
		LitMaterial_ValidateSurfaceMap_m15AD3C4C5E8335E5B6D20DF847C8B87B7977FD90(__this, NULL);
		LitMaterial_ValidateEmission_m666305B1643BDBA4293E710DF5005EFA3DFE7C02(__this, NULL);
		LitMaterial_ValidateSpecularHighlights_mCD1C2AF897CC6B3184B178F823DF6B23CEF283BC(__this, NULL);
		bool L_2;
		L_2 = LitMaterial_get_TemporalAntiAliasing_m4C2505672C0FCAB5DC6A3B8008E9A5C60F1ECB1C(__this, NULL);
		VirtualActionInvoker3< bool, bool, bool >::Invoke(6 /* System.Void VisualDesignCafe.ShaderX.Materials.BaseMaterial::ValidatePasses(System.Boolean,System.Boolean,System.Boolean) */, __this, (bool)0, (bool)0, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0));
		LitMaterial_ValidateRenderQueue_m47B41DB9C7BE7D208A05B9994CD087B741C63D16(__this, NULL);
		return;
	}
}
// System.Void VisualDesignCafe.ShaderX.Materials.LitMaterial::ClearKeywords()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LitMaterial_ClearKeywords_mF72BAAD31B38B868E3FF9CEC37ED864663C21FE7 (LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* __this, const RuntimeMethod* method) 
{
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ((BaseMaterial_t75CEB54A6E97E52D865A51213E7D5A13D93DB7B2*)__this)->___Material_0;
		NullCheck(L_0);
		Material_set_shaderKeywords_mD650CF82B2DBB75F001E373E2E1ACA30876F3AB8(L_0, (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL, NULL);
		return;
	}
}
// System.Void VisualDesignCafe.ShaderX.Materials.LitMaterial::ValidateSpecularHighlights()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LitMaterial_ValidateSpecularHighlights_mCD1C2AF897CC6B3184B178F823DF6B23CEF283BC (LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB432A1F3451EAF8B497E185F11A4FAA30ECC23A3);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = LitMaterial_get_SpecularHighlights_mC45EB7D24C283DFDDE5468E4501EC503A8DA5FB6(__this, NULL);
		BaseMaterial_SetKeyword_m5DC6D210EDBE262DC9DFD535C87459576F55A329(__this, _stringLiteralB432A1F3451EAF8B497E185F11A4FAA30ECC23A3, (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0), NULL);
		return;
	}
}
// System.Void VisualDesignCafe.ShaderX.Materials.LitMaterial::ValidateAlphaTest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LitMaterial_ValidateAlphaTest_m040938C2F1B29994C3E1225DB94541568792E76C (LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30D5B3AF9F2828B7CC03C6AAB712AF102E707992);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = NULL;
	LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* G_B3_2 = NULL;
	{
		bool L_0;
		L_0 = LitMaterial_get_AlphaTest_m93D4EE690FF48C9C0B5A3A7603E098DAC7903D23(__this, NULL);
		G_B1_0 = _stringLiteral30D5B3AF9F2828B7CC03C6AAB712AF102E707992;
		G_B1_1 = __this;
		if (!L_0)
		{
			G_B2_0 = _stringLiteral30D5B3AF9F2828B7CC03C6AAB712AF102E707992;
			G_B2_1 = __this;
			goto IL_001e;
		}
	}
	{
		float L_1;
		L_1 = LitMaterial_get_AlphaTestThreshold_m27D75579E146192A1761E8C78DB2E02DEBFCB06F(__this, NULL);
		G_B3_0 = ((((float)L_1) > ((float)(0.0f)))? 1 : 0);
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001f:
	{
		NullCheck(G_B3_2);
		BaseMaterial_SetKeyword_m5DC6D210EDBE262DC9DFD535C87459576F55A329(G_B3_2, G_B3_1, (bool)G_B3_0, NULL);
		return;
	}
}
// System.Void VisualDesignCafe.ShaderX.Materials.LitMaterial::ValidateNormalMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LitMaterial_ValidateNormalMap_m0E9F20488C99C44026243D6FC4CAE48DC1F9CD5A (LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5235BC8A11AC79193A67E99975CCDBC94A0FA351);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = NULL;
	LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* G_B3_2 = NULL;
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0;
		L_0 = LitMaterial_get_NormalMap_m44CA71B6A42199ED2589C643063A8FB38EA048E1(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B1_0 = _stringLiteral5235BC8A11AC79193A67E99975CCDBC94A0FA351;
		G_B1_1 = __this;
		if (!L_1)
		{
			G_B2_0 = _stringLiteral5235BC8A11AC79193A67E99975CCDBC94A0FA351;
			G_B2_1 = __this;
			goto IL_0027;
		}
	}
	{
		float L_2;
		L_2 = LitMaterial_get_NormalMapScale_mD736596084880A501E720228C443D8EC29341D94(__this, NULL);
		G_B3_0 = ((((int32_t)((((float)L_2) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0028:
	{
		NullCheck(G_B3_2);
		BaseMaterial_SetKeyword_m5DC6D210EDBE262DC9DFD535C87459576F55A329(G_B3_2, G_B3_1, (bool)G_B3_0, NULL);
		return;
	}
}
// System.Void VisualDesignCafe.ShaderX.Materials.LitMaterial::ValidateSurfaceMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LitMaterial_ValidateSurfaceMap_m15AD3C4C5E8335E5B6D20DF847C8B87B7977FD90 (LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C85375E1757085679E8F5E8CA6DBE7C0A66A736);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8EAF2AD70D954066F69E9FA7FFA9771B71269CE);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B5_0 = NULL;
	LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* G_B5_1 = NULL;
	String_t* G_B1_0 = NULL;
	LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* G_B1_1 = NULL;
	String_t* G_B3_0 = NULL;
	LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* G_B3_1 = NULL;
	String_t* G_B2_0 = NULL;
	LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* G_B2_1 = NULL;
	int32_t G_B4_0 = 0;
	String_t* G_B4_1 = NULL;
	LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* G_B4_2 = NULL;
	int32_t G_B6_0 = 0;
	String_t* G_B6_1 = NULL;
	LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* G_B6_2 = NULL;
	String_t* G_B8_0 = NULL;
	LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* G_B8_1 = NULL;
	String_t* G_B7_0 = NULL;
	LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* G_B7_1 = NULL;
	int32_t G_B9_0 = 0;
	String_t* G_B9_1 = NULL;
	LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* G_B9_2 = NULL;
	{
		int32_t L_0;
		L_0 = LitMaterial_get_SurfaceMap_mB89C14EBAEE3AE9617DEA1B4B17BE9C53345ED57(__this, NULL);
		G_B1_0 = _stringLiteral7C85375E1757085679E8F5E8CA6DBE7C0A66A736;
		G_B1_1 = __this;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			G_B5_0 = _stringLiteral7C85375E1757085679E8F5E8CA6DBE7C0A66A736;
			G_B5_1 = __this;
			goto IL_002f;
		}
	}
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_1;
		L_1 = LitMaterial_get_MetallicGlossMap_m9D0F1F5958745E312E54059E5999B6962D2C3895(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B2_0 = G_B1_0;
		G_B2_1 = G_B1_1;
		if (L_2)
		{
			G_B3_0 = G_B1_0;
			G_B3_1 = G_B1_1;
			goto IL_002c;
		}
	}
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_3;
		L_3 = LitMaterial_get_OcclusionMap_m0C3AA4684A2909895E91534FF77E934AC5ADFE59(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B4_0 = ((int32_t)(L_4));
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_002d;
	}

IL_002c:
	{
		G_B4_0 = 1;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_002d:
	{
		G_B6_0 = G_B4_0;
		G_B6_1 = G_B4_1;
		G_B6_2 = G_B4_2;
		goto IL_0030;
	}

IL_002f:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_0030:
	{
		NullCheck(G_B6_2);
		BaseMaterial_SetKeyword_m5DC6D210EDBE262DC9DFD535C87459576F55A329(G_B6_2, G_B6_1, (bool)G_B6_0, NULL);
		int32_t L_5;
		L_5 = LitMaterial_get_SurfaceMap_mB89C14EBAEE3AE9617DEA1B4B17BE9C53345ED57(__this, NULL);
		G_B7_0 = _stringLiteralC8EAF2AD70D954066F69E9FA7FFA9771B71269CE;
		G_B7_1 = __this;
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			G_B8_0 = _stringLiteralC8EAF2AD70D954066F69E9FA7FFA9771B71269CE;
			G_B8_1 = __this;
			goto IL_0053;
		}
	}
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_6;
		L_6 = LitMaterial_get_PackedMap_m01A5C7F54F51452D4A486F70691859AEBEF96E22(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B9_0 = ((int32_t)(L_7));
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		goto IL_0054;
	}

IL_0053:
	{
		G_B9_0 = 0;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
	}

IL_0054:
	{
		NullCheck(G_B9_2);
		BaseMaterial_SetKeyword_m5DC6D210EDBE262DC9DFD535C87459576F55A329(G_B9_2, G_B9_1, (bool)G_B9_0, NULL);
		return;
	}
}
// System.Void VisualDesignCafe.ShaderX.Materials.LitMaterial::ValidateEmission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LitMaterial_ValidateEmission_m666305B1643BDBA4293E710DF5005EFA3DFE7C02 (LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72D498F039FD562896966E064E8315EA0BCE68C5);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = NULL;
	LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* G_B3_2 = NULL;
	{
		float L_0;
		L_0 = LitMaterial_get_EmissionIntensity_m73F59B01BDDF4F74FFEE43EE3E7018EE9B04C011(__this, NULL);
		G_B1_0 = _stringLiteral72D498F039FD562896966E064E8315EA0BCE68C5;
		G_B1_1 = __this;
		if ((((float)L_0) == ((float)(0.0f))))
		{
			G_B2_0 = _stringLiteral72D498F039FD562896966E064E8315EA0BCE68C5;
			G_B2_1 = __this;
			goto IL_002a;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = LitMaterial_get_EmissionColor_m7CB64AD8A9C2144D2763DA69CCA722198CC71163(__this, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		bool L_3;
		L_3 = ColorExtensions_Equals_m06CB5F69F879EE26E52BC1D76C6C6C7355888C20(L_1, L_2, 1, NULL);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_002b;
	}

IL_002a:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_002b:
	{
		NullCheck(G_B3_2);
		BaseMaterial_SetKeyword_m5DC6D210EDBE262DC9DFD535C87459576F55A329(G_B3_2, G_B3_1, (bool)G_B3_0, NULL);
		return;
	}
}
// System.Void VisualDesignCafe.ShaderX.Materials.LitMaterial::ValidateRenderQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LitMaterial_ValidateRenderQueue_m47B41DB9C7BE7D208A05B9994CD087B741C63D16 (LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30D5B3AF9F2828B7CC03C6AAB712AF102E707992);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0;
		L_0 = BaseMaterial_GetKeyword_mE9ADE2DA9179CD345B093DDC34A69FA5F572E746(__this, _stringLiteral30D5B3AF9F2828B7CC03C6AAB712AF102E707992, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = ((BaseMaterial_t75CEB54A6E97E52D865A51213E7D5A13D93DB7B2*)__this)->___Material_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = ((BaseMaterial_t75CEB54A6E97E52D865A51213E7D5A13D93DB7B2*)__this)->___Material_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Material_get_renderQueue_mC427C54D2667620CBB845559DA4DA31BE166C757(L_3, NULL);
		int32_t L_5;
		L_5 = Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline(L_4, ((int32_t)2450), ((int32_t)2999), NULL);
		NullCheck(L_2);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_2, L_5, NULL);
		goto IL_0062;
	}

IL_003a:
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = ((BaseMaterial_t75CEB54A6E97E52D865A51213E7D5A13D93DB7B2*)__this)->___Material_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = ((BaseMaterial_t75CEB54A6E97E52D865A51213E7D5A13D93DB7B2*)__this)->___Material_0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Material_get_renderQueue_mC427C54D2667620CBB845559DA4DA31BE166C757(L_7, NULL);
		int32_t L_9;
		L_9 = Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline(L_8, ((int32_t)2000), ((int32_t)2449), NULL);
		NullCheck(L_6);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_6, L_9, NULL);
	}

IL_0062:
	{
		return;
	}
}
// System.Boolean VisualDesignCafe.ShaderX.Materials.LitMaterial::GetMotionVectorsEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LitMaterial_GetMotionVectorsEnabled_m44CCC229A1BB735E1F78A3A9C28185CCA517D966 (LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = LitMaterial_get_MotionVectors_m5B56A2060B556F6510549E9E663C35DEB2179E24(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void VisualDesignCafe.ShaderX.Materials.LitMaterial::ValidatePasses(System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LitMaterial_ValidatePasses_mD2C971DD33DF2A725F0E3D35D21B469DA39229A6 (LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* __this, bool ___receivesSSR0, bool ___useSplitLighting1, bool ___excludeFromTAA2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17863920B5F72471659AD01703F458D84098D66C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30D5B3AF9F2828B7CC03C6AAB712AF102E707992);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA83F88E5441C58DB1F038F62D2433D6BDEAB6145);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = ___receivesSSR0;
		bool L_1 = ___useSplitLighting1;
		bool L_2 = ___excludeFromTAA2;
		BaseMaterial_ValidatePasses_mD5920F891A11F3BEFC342946013982CA31FD866D(__this, L_0, L_1, L_2, NULL);
		bool L_3;
		L_3 = BaseMaterial_GetKeyword_mE9ADE2DA9179CD345B093DDC34A69FA5F572E746(__this, _stringLiteral30D5B3AF9F2828B7CC03C6AAB712AF102E707992, NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_003a;
		}
	}
	{
		bool L_5;
		L_5 = BaseMaterial_TrySetInt_m212B6743D942D3FCF64E009F271F6CA998370BE5(__this, _stringLiteralA83F88E5441C58DB1F038F62D2433D6BDEAB6145, 3, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		bool L_6;
		L_6 = BaseMaterial_TrySetInt_m212B6743D942D3FCF64E009F271F6CA998370BE5(__this, _stringLiteral17863920B5F72471659AD01703F458D84098D66C, 3, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		goto IL_0058;
	}

IL_003a:
	{
		bool L_7;
		L_7 = BaseMaterial_TrySetInt_m212B6743D942D3FCF64E009F271F6CA998370BE5(__this, _stringLiteralA83F88E5441C58DB1F038F62D2433D6BDEAB6145, 4, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		bool L_8;
		L_8 = BaseMaterial_TrySetInt_m212B6743D942D3FCF64E009F271F6CA998370BE5(__this, _stringLiteral17863920B5F72471659AD01703F458D84098D66C, 4, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
	}

IL_0058:
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
// System.Void VisualDesignCafe.ShaderX.Materials.LitProperties::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LitProperties__ctor_m61E5FDF87043C7F8B9361FF174B6A8EE3BAF2DF1 (LitProperties_tF61AFEFD7B395EB31BEDF407C1E3FF75B8CEDCFA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* StringComparer_get_OrdinalIgnoreCase_m4206775241793096770A30CE686D3B342AEDDE6E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0* L_0 = ((StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_StaticFields*)il2cpp_codegen_static_fields_for(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var))->___s_ordinalIgnoreCase_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Inequality_m4A31CEDC6B46367D219D0358AC94F5F66C3849CA_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___lhs0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___rhs1;
		bool L_2;
		L_2 = Color_op_Equality_m3A255F888F9300ABB36ED2BC0640CFFDAAEFED2F_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_clear_m8B58EA88C92F7DD2C66F0EC1BCC8AC697D631298_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Inequality_m23600308603A706A9DD6057603DEA82E9A6F9FEF_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___lhs0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector4_op_Equality_m80E2AA0626A70EF9DCC4F4C215F674A22D6DE937_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_zero_m51B18794FAF141EBD06CA9907E6F7DF9D60F3515_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ((Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields*)il2cpp_codegen_static_fields_for(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___value0;
		int32_t L_1 = ___min1;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		int32_t L_4 = ___value0;
		int32_t L_5 = ___max2;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		int32_t L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Equality_m3A255F888F9300ABB36ED2BC0640CFFDAAEFED2F_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___lhs0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline(L_0, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___rhs1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3;
		L_3 = Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline(L_2, NULL);
		bool L_4;
		L_4 = Vector4_op_Equality_m80E2AA0626A70EF9DCC4F4C215F674A22D6DE937_inline(L_1, L_3, NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_m80E2AA0626A70EF9DCC4F4C215F674A22D6DE937_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___lhs0;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___rhs1;
		float L_3 = L_2.___x_1;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___lhs0;
		float L_5 = L_4.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___rhs1;
		float L_7 = L_6.___y_2;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = ___lhs0;
		float L_9 = L_8.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___rhs1;
		float L_11 = L_10.___z_3;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = ___lhs0;
		float L_13 = L_12.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = ___rhs1;
		float L_15 = L_14.___w_4;
		V_3 = ((float)il2cpp_codegen_subtract(L_13, L_15));
		float L_16 = V_0;
		float L_17 = V_0;
		float L_18 = V_1;
		float L_19 = V_1;
		float L_20 = V_2;
		float L_21 = V_2;
		float L_22 = V_3;
		float L_23 = V_3;
		V_4 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_16, L_17)), ((float)il2cpp_codegen_multiply(L_18, L_19)))), ((float)il2cpp_codegen_multiply(L_20, L_21)))), ((float)il2cpp_codegen_multiply(L_22, L_23))));
		float L_24 = V_4;
		V_5 = (bool)((((float)L_24) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0057;
	}

IL_0057:
	{
		bool L_25 = V_5;
		return L_25;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___c0;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___c0;
		float L_3 = L_2.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___c0;
		float L_5 = L_4.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___c0;
		float L_7 = L_6.___a_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0021;
	}

IL_0021:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_1 = L_0;
		float L_1 = ___y1;
		__this->___y_2 = L_1;
		float L_2 = ___z2;
		__this->___z_3 = L_2;
		float L_3 = ___w3;
		__this->___w_4 = L_3;
		return;
	}
}
