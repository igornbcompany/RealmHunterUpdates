#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// System.Collections.Generic.Dictionary`2<GPUInstancer.GPUInstancerPrefabPrototype,GPUInstancer.GPUInstancerPrefabManager>
struct Dictionary_2_tA2CB848B96EBFA538BA5F6C57B7D6AC5B823010D;
// System.Collections.Generic.Dictionary`2<GPUInstancer.GPUInstancerPrototype,System.Collections.Generic.List`1<GPUInstancer.GPUInstancerPrefab>>
struct Dictionary_2_tC43096F13ED9D83A457231BE2BAC2919A52CAEDF;
// System.Collections.Generic.Dictionary`2<GPUInstancer.GPUInstancerPrototype,GPUInstancer.GPUInstancerRuntimeData>
struct Dictionary_2_tEBFC4EB1F7814E4E8C20F07F2DC73EE11A2454B0;
// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,UnityEngine.Transform>
struct Dictionary_2_t766523EA908A9FDA90684F190149A5842A87B737;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// GPUInstancer.GPUInstancerSpatialPartitioningData`1<GPUInstancer.GPUInstancerCell>
struct GPUInstancerSpatialPartitioningData_1_t27AD3BFDE5350768DC857569912E326952736F4C;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<UnityEngine.TreePrototype>
struct IEnumerable_1_t9A6BB5B29D972805BEE4AAB514FE3224F97A79E9;
// System.Collections.Generic.IEqualityComparer`1<GPUInstancer.GPUInstancerPrefabPrototype>
struct IEqualityComparer_1_t2663D82E4BCFB6AD395924D726C99101DF55B89D;
// System.Collections.Generic.Dictionary`2/KeyCollection<GPUInstancer.GPUInstancerPrefabPrototype,GPUInstancer.GPUInstancerPrefabManager>
struct KeyCollection_t5F876EE7A961132C9108D935E815607D83FE68B9;
// System.Collections.Generic.List`1<GPUInstancer.GPUInstancerManager>
struct List_1_tCFCDBF61C22E71B3C2667C807F40384311583709;
// System.Collections.Generic.List`1<GPUInstancer.GPUInstancerModificationCollider>
struct List_1_tB73353B56DB3D0F9455CB7EE8068BE1CE4BC90F9;
// System.Collections.Generic.List`1<GPUInstancer.GPUInstancerPrefab>
struct List_1_t6648D68F433CA3C3042A432FA55509EF0DAAFBFC;
// System.Collections.Generic.List`1<GPUInstancer.GPUInstancerPrototype>
struct List_1_tC51EA1C5181B70F9303231807AEAD89EF6C5CC0D;
// System.Collections.Generic.List`1<GPUInstancer.GPUInstancerPrototypeLOD>
struct List_1_tD44E367C5C31918684494310E03D64CA5572CE22;
// System.Collections.Generic.List`1<GPUInstancer.GPUInstancerRuntimeData>
struct List_1_t8FDAD79D15A0E06F4397907AE6788258276E8978;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<GPUInstancer.IPrefabVariationData>
struct List_1_t836805A1503A64DAB1E1E7124D2D315064404956;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<GPUInstancer.RegisteredPrefabsData>
struct List_1_tE4E2A86761253C49E8B82A7BDFEFB969D6D826DF;
// System.Collections.Generic.List`1<UnityEngine.Terrain>
struct List_1_tD2AD001A66810CB968E98D9E635A799408554017;
// System.Collections.Generic.List`1<System.Threading.Thread>
struct List_1_tC6F988464EEDD8B37B6AA2E9D311D598FC07845D;
// System.Collections.Generic.List`1<UnityEngine.TreeInstance>
struct List_1_t7CDBDADC2DD3F6FE5B92D1A5EE6F8B003233585A;
// System.Collections.Generic.List`1<UnityEngine.TreePrototype>
struct List_1_t3A63FEBEE36CEFD162E0AA45228A1D2BE509CC8B;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317;
// System.Predicate`1<GPUInstancer.GPUInstancerManager>
struct Predicate_1_tEA3D0E2F9E6B28A5C83A3212E006D2FAA92E4D2A;
// System.Predicate`1<GPUInstancer.GPUInstancerPrefab>
struct Predicate_1_t84E0FCF60569F1C2A783D33B6469ED9DEFDB63A2;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Collections.Generic.Queue`1<System.Action>
struct Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA;
// System.Collections.Generic.Queue`1<UnityEngine.Terrain>
struct Queue_1_tE01A60141352629DF933E9265CE9FA5C91C00DF3;
// System.Collections.Generic.Queue`1<GPUInstancer.GPUInstancerManager/GPUIThreadData>
struct Queue_1_t99DC9E0C385261FC4FFE84A2036E3050F46E4EB4;
// System.Collections.Generic.Dictionary`2/ValueCollection<GPUInstancer.GPUInstancerPrefabPrototype,GPUInstancer.GPUInstancerPrefabManager>
struct ValueCollection_tC6F1E66EA73D79BD0C630CBF2BB8BD607D8B08AC;
// System.Collections.Generic.Dictionary`2/Entry<GPUInstancer.GPUInstancerPrefabPrototype,GPUInstancer.GPUInstancerPrefabManager>[]
struct EntryU5BU5D_t60D2E9A20EEDC5AC732D5CF01FA11477EACB2EA6;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// GPUInstancer.GPUInstancerManager[]
struct GPUInstancerManagerU5BU5D_t8C23A26468D6774875B0140331D102B800527DE6;
// GPUInstancer.GPUInstancerPrefab[]
struct GPUInstancerPrefabU5BU5D_tC2ABF920D7030848D3C86A937C3D8DFF2AF56578;
// GPUInstancer.GPUInstancerPrefabManager[]
struct GPUInstancerPrefabManagerU5BU5D_tC361243D8434EF4292EDD10E7752D828EF40DE5A;
// GPUInstancer.GPUInstancerPrototype[]
struct GPUInstancerPrototypeU5BU5D_t12C37585F86F7EF29F90003A9028E00BC422EA02;
// GPUInstancer.GPUInstancerRuntimeData[]
struct GPUInstancerRuntimeDataU5BU5D_t01D30FE6FB34D5D0061439F3118C5A598307CE88;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.Terrain[]
struct TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE;
// UnityEngine.TreeInstance[]
struct TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429;
// UnityEngine.TreePrototype[]
struct TreePrototypeU5BU5D_tB0255CA167F991C2C9BA3BA55DF7417168D93B7A;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.ComputeBuffer
struct ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233;
// UnityEngine.ComputeShader
struct ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// GPUInstancer.GPUInstancerBillboard
struct GPUInstancerBillboard_tABC9A0089A8E13E87FD4EA590191394E50C39034;
// GPUInstancer.GPUInstancerCameraData
struct GPUInstancerCameraData_t29E2AF7FFF858FCA0292B236B85D19AE2C8F6540;
// GPUInstancer.GPUInstancerDetailManager
struct GPUInstancerDetailManager_tEFEDBDCFB8517C17BD810911B835F1C00EB75037;
// GPUInstancer.GPUInstancerFloatingOriginHandler
struct GPUInstancerFloatingOriginHandler_t6B0C4B2B67E325E44E174DA9C0969900A866F991;
// GPUInstancer.GPUInstancerManager
struct GPUInstancerManager_tBC70675B38834A3B91ED3392CCE3603FB3D44A8E;
// GPUInstancer.GPUInstancerPrefab
struct GPUInstancerPrefab_t7597694950D9BB7FBE8411A0A11CA1ADFD59C43A;
// GPUInstancer.GPUInstancerPrefabManager
struct GPUInstancerPrefabManager_t9BA464F68DAFB51AC82C0B30C1BEF0F84B0DEE40;
// GPUInstancer.GPUInstancerPrefabPrototype
struct GPUInstancerPrefabPrototype_tD5DFA3B45330511A1FC44F9C93293EC01FEDC818;
// GPUInstancer.GPUInstancerPrefabRuntimeHandler
struct GPUInstancerPrefabRuntimeHandler_t4A36ABA8BFC07F939ABA643034FAB8E6D982F18A;
// GPUInstancer.GPUInstancerPrototype
struct GPUInstancerPrototype_t8CC477296831E484428798CB96A46F21371C35CF;
// GPUInstancer.GPUInstancerRuntimeData
struct GPUInstancerRuntimeData_tAC3B9C6BB85D573FA2A3F5A8378873C2C131057C;
// GPUInstancer.GPUInstancerSettings
struct GPUInstancerSettings_t850B9BCFFFF734065F4B1D889BEA7A507C1E62EC;
// GPUInstancer.GPUInstancerTerrainManager
struct GPUInstancerTerrainManager_t5D14A71A3AF1435E15D974025C65071A3D39CD90;
// GPUInstancer.GPUInstancerTerrainProxy
struct GPUInstancerTerrainProxy_t5546E69F313AE403C14A490876A27887B65C46B5;
// GPUInstancer.GPUInstancerTerrainRuntimeHandler
struct GPUInstancerTerrainRuntimeHandler_t83B71307E1A72EB8DCF173F72977287BA3FB5C9F;
// GPUInstancer.GPUInstancerTerrainSettings
struct GPUInstancerTerrainSettings_t2CCB96E712A6B4310113C5A7555D1DD6AA761356;
// GPUInstancer.GPUInstancerTreeManager
struct GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// GPUInstancer.RegisteredPrefabsData
struct RegisteredPrefabsData_t4100EAEACC86FFD9D00154812C0DF9B40A54A9A2;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// System.String
struct String_t;
// UnityEngine.Terrain
struct Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667;
// UnityEngine.TerrainData
struct TerrainData_t615A68EAC648066681875D47FC641496D12F2E24;
// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.TreePrototype
struct TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// GPUInstancer.GPUInstancerPrefabManager/<>c
struct U3CU3Ec_t79188BB870B400A21E63BE62EACAA455E5726EDF;
// GPUInstancer.GPUInstancerPrefabPrototype/RigidbodyData
struct RigidbodyData_t3B4100128BC0F76322A0AD60FE93488CE528D500;
// GPUInstancer.GPUInstancerTreeManager/<ReplaceUnityTrees>d__9
struct U3CReplaceUnityTreesU3Ed__9_t549FD0ED894B9B6202161F931067A0D440ABD370;

IL2CPP_EXTERN_C RuntimeClass* ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA2CB848B96EBFA538BA5F6C57B7D6AC5B823010D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GPUInstancerConstants_tDDBEE279B5B3385A4B5C7A8D16DB9118C3594BAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GPUInstancerManager_tBC70675B38834A3B91ED3392CCE3603FB3D44A8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GPUInstancerPrefabManager_t9BA464F68DAFB51AC82C0B30C1BEF0F84B0DEE40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GPUInstancerPrefabPrototype_tD5DFA3B45330511A1FC44F9C93293EC01FEDC818_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GPUInstancerPrefabRuntimeHandler_t4A36ABA8BFC07F939ABA643034FAB8E6D982F18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GPUInstancerTerrainRuntimeHandler_t83B71307E1A72EB8DCF173F72977287BA3FB5C9F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GPUInstancerTreePrototype_tC24B0262BB0B3719EF8749B0EDD0CF72A5E6DDE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GrassKernelProperties_tCF7F7CD15ABCA41547E9F14DC450C7B214CE82C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3A63FEBEE36CEFD162E0AA45228A1D2BE509CC8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6648D68F433CA3C3042A432FA55509EF0DAAFBFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7CDBDADC2DD3F6FE5B92D1A5EE6F8B003233585A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_tEA3D0E2F9E6B28A5C83A3212E006D2FAA92E4D2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TreeKernelProperties_t6BE5B2BCD15C3E0230F8A9F556679E851821F7B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CReplaceUnityTreesU3Ed__9_t549FD0ED894B9B6202161F931067A0D440ABD370_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t79188BB870B400A21E63BE62EACAA455E5726EDF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VisibilityKernelPoperties_t130A6A364927AB8AF0BDAFBFE9ED17A1AE66DDB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral01166485D98C24B83AB5CD03FD57EA7EA0F9DE07;
IL2CPP_EXTERN_C String_t* _stringLiteral7CD90CA44025A7CBEB807F2FC1D2A1BE704684DF;
IL2CPP_EXTERN_C String_t* _stringLiteral961E7AD504BE11C952676B8F16DAD78E590DAF84;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisGPUInstancerPrefab_t7597694950D9BB7FBE8411A0A11CA1ADFD59C43A_m1AF2FEC9FC79CA536B85790F076EB7E327827C4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTerrain_t7F309492F67238DBFBC4566F47385B2A665CF667_m91BA1801D3A897D0F2234DFA7DC7359C6866064A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComputeBuffer_SetData_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mCDBB37084243E107C87E4A41FE8C2DA2FDA49C15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m0451468A20B55624482A267CFA3E6A467F201708_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mA03E27FDC6EE2F2DB156C8C3AD7EEC2381FC2BC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m929E1644A8BDD3CA46111F8EB25BFAC7F2990F87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m7AD8CD258B2C058B76EA9351BDEA2D1601F4650F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mDF898CD74A1FCFBBCE0B0B5B3A55D0E1C2D011FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m14F34EC787A601A0A73CFF7F211D7D062C3D7946_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m7991A4D8D43E9F9C7C0DA986DF3B4CB0FD31C41C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m484EE5C5D622FA0AA4863985628C97BD6EE145B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mD7701F92B473B07880859353BE2A8B469C161087_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mD34AA709207C6A86D64005E396AB58AC514D3BF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mFB99CEC61D38DFE0217DE0D134D6A7328B04AFD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GPUInstancerPrefabRuntimeHandler_U3CGetPrefabManagerU3Eb__6_0_mBC65FD4E212720175E955A0BCEA82E46B99E8957_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GPUInstancerPrefabRuntimeHandler_U3CGetPrefabManagerU3Eb__6_1_mD01E2D1FEEF1681F9C6FDE556163ECBD5BF21CBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GPUInstancerUtility_InitializeGPUBuffer_TisGPUInstancerRuntimeData_tAC3B9C6BB85D573FA2A3F5A8378873C2C131057C_mF77821C3A25E7869622BF59DD1A2A153C0420E56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GPUInstancerUtility_ReleaseInstanceBuffers_TisGPUInstancerRuntimeData_tAC3B9C6BB85D573FA2A3F5A8378873C2C131057C_m802800F338547CF5941905064A0558F75BD809AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GPUInstancerUtility_ReleaseInstanceBuffers_TisGPUInstancerRuntimeData_tAC3B9C6BB85D573FA2A3F5A8378873C2C131057C_mD21EE068398C494F77D5659BCD5BB50B5913D598_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m65F0731FF2C839C25530522F74BE029D34851222_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAC6D75EF36303133FA8504C2F1312008E4EA3C10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mA18E31FFF2BF42CB69AF0FF27338C0BCD2C8172C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Find_m2DB5663B504EF11F9334D5FC00809793DAC033C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m46772991FE7070A89F3C652D43B7DECEC1F7DE29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m874D417FA6CC11A80D7FF9C9E30203F7A6E306A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_IndexOf_m82CAFF5E3E3F737EBD566F7141AF68642507C3EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mE91259CC4BD7E6E02DCC8B2E13A8C2C0531F9CA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m2E3ECDF734E7FA10812DF2D499C4317EB881C405_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m3BBEEFAD7758746DA602FBB5D7EF3DC9420D909D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m15D691BE05DD1AA2E0BA3FF42048E48A19571484_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m471D74C9C79EBAA52041EC2BB0B66D962C9F91D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7A5FFB71CC0B9A11A8FF0FC535B7D700EF76ED20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m949FC18118317FF19F8F52941A28D9E771B6E1B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4EB3213CDA6D394BA00CA239D95B2ABCBFEDEDF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m970BE5CCB1F05BAF033736206A0C3142930127B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mCEA8EA9B52DAA0043B1D1AC4C592A47190144BFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mE78944B77F1FDA08CD652C58BF9EF9C8DCB1FA1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mA33F1471D122E315DDF532464CAC03912D0B1B45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisGPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00_m26D088EE0DD4881C355AF6B68E71B21B4CA8788F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisGPUInstancerPrefabManager_t9BA464F68DAFB51AC82C0B30C1BEF0F84B0DEE40_m27D11AF343801676AE91777A07F7E2054A7E1FCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8_mCB69A2628DBDDB3B597662E8BDF187516294F247_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CReplaceUnityTreesU3Ed__9_System_Collections_IEnumerator_Reset_m0680D4FC31B5443E461D5314D6298D258BB5CF93_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct GPUInstancerPrefabManagerU5BU5D_tC361243D8434EF4292EDD10E7752D828EF40DE5A;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429;
struct TreePrototypeU5BU5D_tB0255CA167F991C2C9BA3BA55DF7417168D93B7A;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<GPUInstancer.GPUInstancerPrefabPrototype,GPUInstancer.GPUInstancerPrefabManager>
struct Dictionary_2_tA2CB848B96EBFA538BA5F6C57B7D6AC5B823010D  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t60D2E9A20EEDC5AC732D5CF01FA11477EACB2EA6* ____entries_1;
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
	KeyCollection_t5F876EE7A961132C9108D935E815607D83FE68B9* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC6F1E66EA73D79BD0C630CBF2BB8BD607D8B08AC* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<GPUInstancer.GPUInstancerManager>
struct List_1_tCFCDBF61C22E71B3C2667C807F40384311583709  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GPUInstancerManagerU5BU5D_t8C23A26468D6774875B0140331D102B800527DE6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tCFCDBF61C22E71B3C2667C807F40384311583709_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GPUInstancerManagerU5BU5D_t8C23A26468D6774875B0140331D102B800527DE6* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<GPUInstancer.GPUInstancerPrefab>
struct List_1_t6648D68F433CA3C3042A432FA55509EF0DAAFBFC  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GPUInstancerPrefabU5BU5D_tC2ABF920D7030848D3C86A937C3D8DFF2AF56578* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t6648D68F433CA3C3042A432FA55509EF0DAAFBFC_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GPUInstancerPrefabU5BU5D_tC2ABF920D7030848D3C86A937C3D8DFF2AF56578* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<GPUInstancer.GPUInstancerPrototype>
struct List_1_tC51EA1C5181B70F9303231807AEAD89EF6C5CC0D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GPUInstancerPrototypeU5BU5D_t12C37585F86F7EF29F90003A9028E00BC422EA02* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tC51EA1C5181B70F9303231807AEAD89EF6C5CC0D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GPUInstancerPrototypeU5BU5D_t12C37585F86F7EF29F90003A9028E00BC422EA02* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<GPUInstancer.GPUInstancerRuntimeData>
struct List_1_t8FDAD79D15A0E06F4397907AE6788258276E8978  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GPUInstancerRuntimeDataU5BU5D_t01D30FE6FB34D5D0061439F3118C5A598307CE88* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8FDAD79D15A0E06F4397907AE6788258276E8978_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GPUInstancerRuntimeDataU5BU5D_t01D30FE6FB34D5D0061439F3118C5A598307CE88* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Terrain>
struct List_1_tD2AD001A66810CB968E98D9E635A799408554017  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tD2AD001A66810CB968E98D9E635A799408554017_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.TreeInstance>
struct List_1_t7CDBDADC2DD3F6FE5B92D1A5EE6F8B003233585A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t7CDBDADC2DD3F6FE5B92D1A5EE6F8B003233585A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.TreePrototype>
struct List_1_t3A63FEBEE36CEFD162E0AA45228A1D2BE509CC8B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TreePrototypeU5BU5D_tB0255CA167F991C2C9BA3BA55DF7417168D93B7A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t3A63FEBEE36CEFD162E0AA45228A1D2BE509CC8B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TreePrototypeU5BU5D_tB0255CA167F991C2C9BA3BA55DF7417168D93B7A* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// GPUInstancer.RegisteredPrefabsData
struct RegisteredPrefabsData_t4100EAEACC86FFD9D00154812C0DF9B40A54A9A2  : public RuntimeObject
{
	// GPUInstancer.GPUInstancerPrefabPrototype GPUInstancer.RegisteredPrefabsData::prefabPrototype
	GPUInstancerPrefabPrototype_tD5DFA3B45330511A1FC44F9C93293EC01FEDC818* ___prefabPrototype_0;
	// System.Collections.Generic.List`1<GPUInstancer.GPUInstancerPrefab> GPUInstancer.RegisteredPrefabsData::registeredPrefabs
	List_1_t6648D68F433CA3C3042A432FA55509EF0DAAFBFC* ___registeredPrefabs_1;
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

// UnityEngine.TreePrototype
struct TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D  : public RuntimeObject
{
	// UnityEngine.GameObject UnityEngine.TreePrototype::m_Prefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Prefab_0;
	// System.Single UnityEngine.TreePrototype::m_BendFactor
	float ___m_BendFactor_1;
	// System.Int32 UnityEngine.TreePrototype::m_NavMeshLod
	int32_t ___m_NavMeshLod_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.TreePrototype
struct TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Prefab_0;
	float ___m_BendFactor_1;
	int32_t ___m_NavMeshLod_2;
};
// Native definition for COM marshalling of UnityEngine.TreePrototype
struct TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Prefab_0;
	float ___m_BendFactor_1;
	int32_t ___m_NavMeshLod_2;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// GPUInstancer.GPUInstancerConstants/GrassKernelProperties
struct GrassKernelProperties_tCF7F7CD15ABCA41547E9F14DC450C7B214CE82C9  : public RuntimeObject
{
};

struct GrassKernelProperties_tCF7F7CD15ABCA41547E9F14DC450C7B214CE82C9_StaticFields
{
	// System.Int32 GPUInstancer.GPUInstancerConstants/GrassKernelProperties::DETAIL_MAP_DATA_BUFFER
	int32_t ___DETAIL_MAP_DATA_BUFFER_0;
	// System.Int32 GPUInstancer.GPUInstancerConstants/GrassKernelProperties::HEIGHT_MAP_DATA_BUFFER
	int32_t ___HEIGHT_MAP_DATA_BUFFER_1;
	// System.Int32 GPUInstancer.GPUInstancerConstants/GrassKernelProperties::COUNTER_BUFFER
	int32_t ___COUNTER_BUFFER_2;
	// System.Int32 GPUInstancer.GPUInstancerConstants/GrassKernelProperties::TERRAIN_DETAIL_RESOLUTION_DATA
	int32_t ___TERRAIN_DETAIL_RESOLUTION_DATA_3;
	// System.Int32 GPUInstancer.GPUInstancerConstants/GrassKernelProperties::TERRAIN_HEIGHT_RESOLUTION_DATA
	int32_t ___TERRAIN_HEIGHT_RESOLUTION_DATA_4;
	// System.Int32 GPUInstancer.GPUInstancerConstants/GrassKernelProperties::GRASS_START_POSITION_DATA
	int32_t ___GRASS_START_POSITION_DATA_5;
	// System.Int32 GPUInstancer.GPUInstancerConstants/GrassKernelProperties::TERRAIN_SIZE_DATA
	int32_t ___TERRAIN_SIZE_DATA_6;
	// System.Int32 GPUInstancer.GPUInstancerConstants/GrassKernelProperties::DETAIL_SCALE_DATA
	int32_t ___DETAIL_SCALE_DATA_7;
	// System.Int32 GPUInstancer.GPUInstancerConstants/GrassKernelProperties::DETAIL_AND_HEIGHT_MAP_SIZE_DATA
	int32_t ___DETAIL_AND_HEIGHT_MAP_SIZE_DATA_8;
	// System.Int32 GPUInstancer.GPUInstancerConstants/GrassKernelProperties::HEALTHY_DRY_NOISE_TEXTURE
	int32_t ___HEALTHY_DRY_NOISE_TEXTURE_9;
	// System.Int32 GPUInstancer.GPUInstancerConstants/GrassKernelProperties::NOISE_SPREAD
	int32_t ___NOISE_SPREAD_10;
	// System.Int32 GPUInstancer.GPUInstancerConstants/GrassKernelProperties::DETAIL_UNIQUE_VALUE
	int32_t ___DETAIL_UNIQUE_VALUE_11;
	// System.Int32 GPUInstancer.GPUInstancerConstants/GrassKernelProperties::DETAIL_DENSITY
	int32_t ___DETAIL_DENSITY_12;
};

// GPUInstancer.GPUInstancerConstants/TreeKernelProperties
struct TreeKernelProperties_t6BE5B2BCD15C3E0230F8A9F556679E851821F7B6  : public RuntimeObject
{
};

struct TreeKernelProperties_t6BE5B2BCD15C3E0230F8A9F556679E851821F7B6_StaticFields
{
	// System.Int32 GPUInstancer.GPUInstancerConstants/TreeKernelProperties::TREE_DATA
	int32_t ___TREE_DATA_0;
	// System.Int32 GPUInstancer.GPUInstancerConstants/TreeKernelProperties::TREE_SCALES
	int32_t ___TREE_SCALES_1;
	// System.Int32 GPUInstancer.GPUInstancerConstants/TreeKernelProperties::TERRAIN_POSITION
	int32_t ___TERRAIN_POSITION_2;
	// System.Int32 GPUInstancer.GPUInstancerConstants/TreeKernelProperties::IS_APPLY_ROTATION
	int32_t ___IS_APPLY_ROTATION_3;
	// System.Int32 GPUInstancer.GPUInstancerConstants/TreeKernelProperties::IS_APPLY_TERRAIN_HEIGHT
	int32_t ___IS_APPLY_TERRAIN_HEIGHT_4;
	// System.Int32 GPUInstancer.GPUInstancerConstants/TreeKernelProperties::PROTOTYPE_INDEX
	int32_t ___PROTOTYPE_INDEX_5;
};

// GPUInstancer.GPUInstancerConstants/VisibilityKernelPoperties
struct VisibilityKernelPoperties_t130A6A364927AB8AF0BDAFBFE9ED17A1AE66DDB0  : public RuntimeObject
{
};

struct VisibilityKernelPoperties_t130A6A364927AB8AF0BDAFBFE9ED17A1AE66DDB0_StaticFields
{
	// System.Int32 GPUInstancer.GPUInstancerConstants/VisibilityKernelPoperties::TRANSFORMATION_MATRIX_BUFFER
	int32_t ___TRANSFORMATION_MATRIX_BUFFER_0;
	// System.Int32 GPUInstancer.GPUInstancerConstants/VisibilityKernelPoperties::INSTANCE_LOD_BUFFER
	int32_t ___INSTANCE_LOD_BUFFER_1;
	// System.Int32[] GPUInstancer.GPUInstancerConstants/VisibilityKernelPoperties::TRANSFORMATION_MATRIX_APPEND_BUFFERS
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___TRANSFORMATION_MATRIX_APPEND_BUFFERS_2;
	// System.Int32 GPUInstancer.GPUInstancerConstants/VisibilityKernelPoperties::INSTANCE_DATA_BUFFER
	int32_t ___INSTANCE_DATA_BUFFER_3;
	// System.Int32 GPUInstancer.GPUInstancerConstants/VisibilityKernelPoperties::RENDERER_TRANSFORM_OFFSET
	int32_t ___RENDERER_TRANSFORM_OFFSET_4;
	// System.Int32 GPUInstancer.GPUInstancerConstants/VisibilityKernelPoperties::BUFFER_PARAMETER_MVP_MATRIX
	int32_t ___BUFFER_PARAMETER_MVP_MATRIX_5;
	// System.Int32 GPUInstancer.GPUInstancerConstants/VisibilityKernelPoperties::BUFFER_PARAMETER_MVP_MATRIX2
	int32_t ___BUFFER_PARAMETER_MVP_MATRIX2_6;
	// System.Int32 GPUInstancer.GPUInstancerConstants/VisibilityKernelPoperties::BUFFER_PARAMETER_BOUNDS_CENTER
	int32_t ___BUFFER_PARAMETER_BOUNDS_CENTER_7;
	// System.Int32 GPUInstancer.GPUInstancerConstants/VisibilityKernelPoperties::BUFFER_PARAMETER_BOUNDS_EXTENTS
	int32_t ___BUFFER_PARAMETER_BOUNDS_EXTENTS_8;
	// System.Int32 GPUInstancer.GPUInstancerConstants/VisibilityKernelPoperties::BUFFER_PARAMETER_FRUSTUM_CULL_SWITCH
	int32_t ___BUFFER_PARAMETER_FRUSTUM_CULL_SWITCH_9;
	// System.Int32 GPUInstancer.GPUInstancerConstants/VisibilityKernelPoperties::BUFFER_PARAMETER_HIERARCHICAL_Z_TEXTURE_SIZE
	int32_t ___BUFFER_PARAMETER_HIERARCHICAL_Z_TEXTURE_SIZE_10;
	// System.Int32 GPUInstancer.GPUInstancerConstants/VisibilityKernelPoperties::BUFFER_PARAMETER_FRUSTUM_OFFSET
	int32_t ___BUFFER_PARAMETER_FRUSTUM_OFFSET_11;
	// System.Int32 GPUInstancer.GPUInstancerConstants/VisibilityKernelPoperties::BUFFER_PARAMETER_MIN_VIEW_DISTANCE
	int32_t ___BUFFER_PARAMETER_MIN_VIEW_DISTANCE_12;
	// System.Int32 GPUInstancer.GPUInstancerConstants/VisibilityKernelPoperties::BUFFER_PARAMETER_MAX_VIEW_DISTANCE
	int32_t ___BUFFER_PARAMETER_MAX_VIEW_DISTANCE_13;
	// System.Int32 GPUInstancer.GPUInstancerConstants/VisibilityKernelPoperties::BUFFER_PARAMETER_CAMERA_POSITION
	int32_t ___BUFFER_PARAMETER_CAMERA_POSITION_14;
	// System.Int32 GPUInstancer.GPUInstancerConstants/VisibilityKernelPoperties::BUFFER_PARAMETER_BUFFER_SIZE
	int32_t ___BUFFER_PARAMETER_BUFFER_SIZE_15;
	// System.Int32 GPUInstancer.GPUInstancerConstants/VisibilityKernelPoperties::BUFFER_PARAMETER_OCCLUSION_OFFSET
	int32_t ___BUFFER_PARAMETER_OCCLUSION_OFFSET_16;
	// System.Int32 GPUInstancer.GPUInstancerConstants/VisibilityKernelPoperties::BUFFER_PARAMETER_OCCLUSION_ACCURACY
	int32_t ___BUFFER_PARAMETER_OCCLUSION_ACCURACY_17;
	// System.Int32 GPUInstancer.GPUInstancerConstants/VisibilityKernelPoperties::BUFFER_PARAMETER_SHADOW_DISTANCE
	int32_t ___BUFFER_PARAMETER_SHADOW_DISTANCE_18;
	// System.Int32 GPUInstancer.GPUInstancerConstants/VisibilityKernelPoperties::BUFFER_PARAMETER_LOD_SIZES
	int32_t ___BUFFER_PARAMETER_LOD_SIZES_19;
	// System.Int32 GPUInstancer.GPUInstancerConstants/VisibilityKernelPoperties::BUFFER_PARAMETER_LOD_SHIFT
	int32_t ___BUFFER_PARAMETER_LOD_SHIFT_20;
	// System.Int32 GPUInstancer.GPUInstancerConstants/VisibilityKernelPoperties::BUFFER_PARAMETER_LOD_APPEND_INDEX
	int32_t ___BUFFER_PARAMETER_LOD_APPEND_INDEX_21;
	// System.Int32 GPUInstancer.GPUInstancerConstants/VisibilityKernelPoperties::BUFFER_PARAMETER_LOD_COUNT
	int32_t ___BUFFER_PARAMETER_LOD_COUNT_22;
	// System.Int32 GPUInstancer.GPUInstancerConstants/VisibilityKernelPoperties::BUFFER_PARAMETER_LOD_LEVEL
	int32_t ___BUFFER_PARAMETER_LOD_LEVEL_23;
	// System.Int32 GPUInstancer.GPUInstancerConstants/VisibilityKernelPoperties::BUFFER_PARAMETER_HALF_ANGLE
	int32_t ___BUFFER_PARAMETER_HALF_ANGLE_24;
	// System.Int32 GPUInstancer.GPUInstancerConstants/VisibilityKernelPoperties::BUFFER_PARAMETER_ANIMATE_CROSS_FADE
	int32_t ___BUFFER_PARAMETER_ANIMATE_CROSS_FADE_25;
	// System.Int32 GPUInstancer.GPUInstancerConstants/VisibilityKernelPoperties::BUFFER_PARAMETER_DELTA_TIME
	int32_t ___BUFFER_PARAMETER_DELTA_TIME_26;
	// System.Int32 GPUInstancer.GPUInstancerConstants/VisibilityKernelPoperties::BUFFER_PARAMETER_FADE_LEVEL_MULTIPLIER
	int32_t ___BUFFER_PARAMETER_FADE_LEVEL_MULTIPLIER_27;
	// System.Int32 GPUInstancer.GPUInstancerConstants/VisibilityKernelPoperties::BUFFER_PARAMETER_OCCLUSION_CULL_SWITCH
	int32_t ___BUFFER_PARAMETER_OCCLUSION_CULL_SWITCH_28;
	// System.Int32 GPUInstancer.GPUInstancerConstants/VisibilityKernelPoperties::BUFFER_PARAMETER_HIERARCHICAL_Z_TEXTURE_MAP
	int32_t ___BUFFER_PARAMETER_HIERARCHICAL_Z_TEXTURE_MAP_29;
	// System.Int32 GPUInstancer.GPUInstancerConstants/VisibilityKernelPoperties::BUFFER_PARAMETER_MIN_CULLING_DISTANCE
	int32_t ___BUFFER_PARAMETER_MIN_CULLING_DISTANCE_30;
	// System.Int32 GPUInstancer.GPUInstancerConstants/VisibilityKernelPoperties::BUFFER_PARAMETER_SHADOW_LOD_MAP
	int32_t ___BUFFER_PARAMETER_SHADOW_LOD_MAP_31;
	// System.Int32 GPUInstancer.GPUInstancerConstants/VisibilityKernelPoperties::BUFFER_PARAMETER_CULL_SHADOW
	int32_t ___BUFFER_PARAMETER_CULL_SHADOW_32;
	// System.Int32 GPUInstancer.GPUInstancerConstants/VisibilityKernelPoperties::ARGS_BUFFER
	int32_t ___ARGS_BUFFER_33;
	// System.Int32 GPUInstancer.GPUInstancerConstants/VisibilityKernelPoperties::COUNT
	int32_t ___COUNT_34;
	// System.Int32 GPUInstancer.GPUInstancerConstants/VisibilityKernelPoperties::MAX_TEXTURE_SIZE
	int32_t ___MAX_TEXTURE_SIZE_35;
	// System.Int32 GPUInstancer.GPUInstancerConstants/VisibilityKernelPoperties::UNITY_RENDERING_LAYER
	int32_t ___UNITY_RENDERING_LAYER_36;
	// System.Int32 GPUInstancer.GPUInstancerConstants/VisibilityKernelPoperties::ARGS_BUFFER_INDEX
	int32_t ___ARGS_BUFFER_INDEX_37;
};

// GPUInstancer.GPUInstancerPrefabManager/<>c
struct U3CU3Ec_t79188BB870B400A21E63BE62EACAA455E5726EDF  : public RuntimeObject
{
};

struct U3CU3Ec_t79188BB870B400A21E63BE62EACAA455E5726EDF_StaticFields
{
	// GPUInstancer.GPUInstancerPrefabManager/<>c GPUInstancer.GPUInstancerPrefabManager/<>c::<>9
	U3CU3Ec_t79188BB870B400A21E63BE62EACAA455E5726EDF* ___U3CU3E9_0;
	// System.Predicate`1<GPUInstancer.GPUInstancerPrefab> GPUInstancer.GPUInstancerPrefabManager/<>c::<>9__27_0
	Predicate_1_t84E0FCF60569F1C2A783D33B6469ED9DEFDB63A2* ___U3CU3E9__27_0_1;
};

// GPUInstancer.GPUInstancerTreeManager/<ReplaceUnityTrees>d__9
struct U3CReplaceUnityTreesU3Ed__9_t549FD0ED894B9B6202161F931067A0D440ABD370  : public RuntimeObject
{
	// System.Int32 GPUInstancer.GPUInstancerTreeManager/<ReplaceUnityTrees>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GPUInstancer.GPUInstancerTreeManager/<ReplaceUnityTrees>d__9::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GPUInstancer.GPUInstancerTreeManager GPUInstancer.GPUInstancerTreeManager/<ReplaceUnityTrees>d__9::<>4__this
	GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00* ___U3CU3E4__this_2;
	// UnityEngine.Vector4[] GPUInstancer.GPUInstancerTreeManager/<ReplaceUnityTrees>d__9::<treeScales>5__2
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___U3CtreeScalesU3E5__2_3;
	// System.Int32[] GPUInstancer.GPUInstancerTreeManager/<ReplaceUnityTrees>d__9::<instanceCounts>5__3
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___U3CinstanceCountsU3E5__3_4;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> GPUInstancer.GPUInstancerTreeManager/<ReplaceUnityTrees>d__9::<treeDataList>5__4
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___U3CtreeDataListU3E5__4_5;
	// System.Int32 GPUInstancer.GPUInstancerTreeManager/<ReplaceUnityTrees>d__9::<instanceTotal>5__5
	int32_t ___U3CinstanceTotalU3E5__5_6;
	// UnityEngine.ComputeBuffer GPUInstancer.GPUInstancerTreeManager/<ReplaceUnityTrees>d__9::<treeDataBuffer>5__6
	ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___U3CtreeDataBufferU3E5__6_7;
	// UnityEngine.ComputeBuffer GPUInstancer.GPUInstancerTreeManager/<ReplaceUnityTrees>d__9::<treeScalesBuffer>5__7
	ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___U3CtreeScalesBufferU3E5__7_8;
	// UnityEngine.ComputeBuffer GPUInstancer.GPUInstancerTreeManager/<ReplaceUnityTrees>d__9::<counterBuffer>5__8
	ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___U3CcounterBufferU3E5__8_9;
	// System.UInt32[] GPUInstancer.GPUInstancerTreeManager/<ReplaceUnityTrees>d__9::<emptyCounterData>5__9
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___U3CemptyCounterDataU3E5__9_10;
	// System.Int32 GPUInstancer.GPUInstancerTreeManager/<ReplaceUnityTrees>d__9::<i>5__10
	int32_t ___U3CiU3E5__10_11;
};

// System.Collections.Generic.List`1/Enumerator<GPUInstancer.GPUInstancerPrototype>
struct Enumerator_tCB115E1B66E6D645F629474906EB24B2039FDE89 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tC51EA1C5181B70F9303231807AEAD89EF6C5CC0D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	GPUInstancerPrototype_t8CC477296831E484428798CB96A46F21371C35CF* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Terrain>
struct Enumerator_tE55827E469E8564863DA766418F79DE48A82AAA2 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tD2AD001A66810CB968E98D9E635A799408554017* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ____current_3;
};

// Unity.Collections.NativeArray`1<UnityEngine.Matrix4x4>
struct NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
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

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_t1B2FB1922284E63216D915D27754D5DA91A6416C 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_t1B2FB1922284E63216D915D27754D5DA91A6416C__padding[16];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
struct __StaticArrayInitTypeSizeU3D24_t3716DF6DCEFC50B63BA32F7A1E8894CE0A012695 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_t3716DF6DCEFC50B63BA32F7A1E8894CE0A012695__padding[24];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64
struct __StaticArrayInitTypeSizeU3D64_t2972A4B96DA95A0010FA426605722BE159F655DE 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D64_t2972A4B96DA95A0010FA426605722BE159F655DE__padding[64];
	};
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t46A201B05BF8409AF8F8D4520748192B898544AA  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t46A201B05BF8409AF8F8D4520748192B898544AA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::380098BBE372FB01EBDFC0BDC05E1BD35E2D0B763CC4B796E1C64B20CB9BE871
	__StaticArrayInitTypeSizeU3D64_t2972A4B96DA95A0010FA426605722BE159F655DE ___380098BBE372FB01EBDFC0BDC05E1BD35E2D0B763CC4B796E1C64B20CB9BE871_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::8CECAB868F5FBE29675FD9C26551B881163398510905578446182217DAD142C7
	__StaticArrayInitTypeSizeU3D16_t1B2FB1922284E63216D915D27754D5DA91A6416C ___8CECAB868F5FBE29675FD9C26551B881163398510905578446182217DAD142C7_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::A493ECF28E33055ADFE6BC8CA3E34E8C596165C57BE7A385BF0A924C74806A92
	__StaticArrayInitTypeSizeU3D24_t3716DF6DCEFC50B63BA32F7A1E8894CE0A012695 ___A493ECF28E33055ADFE6BC8CA3E34E8C596165C57BE7A385BF0A924C74806A92_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::D66391B60287B5A17C8ED7197F5C5B5ED7E25DF24E178E335F949CF467C49251
	__StaticArrayInitTypeSizeU3D64_t2972A4B96DA95A0010FA426605722BE159F655DE ___D66391B60287B5A17C8ED7197F5C5B5ED7E25DF24E178E335F949CF467C49251_3;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.ComputeBuffer
struct ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233  : public RuntimeObject
{
	// System.IntPtr UnityEngine.ComputeBuffer::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// GPUInstancer.GPUInstancerConstants
struct GPUInstancerConstants_tDDBEE279B5B3385A4B5C7A8D16DB9118C3594BAF  : public RuntimeObject
{
};

struct GPUInstancerConstants_tDDBEE279B5B3385A4B5C7A8D16DB9118C3594BAF_StaticFields
{
	// GPUInstancer.GPUInstancerSettings GPUInstancer.GPUInstancerConstants::_gpuiSettings
	GPUInstancerSettings_t850B9BCFFFF734065F4B1D889BEA7A507C1E62EC* ____gpuiSettings_0;
	// UnityEngine.Matrix4x4 GPUInstancer.GPUInstancerConstants::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_1;
	// System.Int32 GPUInstancer.GPUInstancerConstants::STRIDE_SIZE_MATRIX4X4
	int32_t ___STRIDE_SIZE_MATRIX4X4_2;
	// System.Int32 GPUInstancer.GPUInstancerConstants::STRIDE_SIZE_BOOL
	int32_t ___STRIDE_SIZE_BOOL_3;
	// System.Int32 GPUInstancer.GPUInstancerConstants::STRIDE_SIZE_INT
	int32_t ___STRIDE_SIZE_INT_4;
	// System.Int32 GPUInstancer.GPUInstancerConstants::STRIDE_SIZE_FLOAT
	int32_t ___STRIDE_SIZE_FLOAT_5;
	// System.Int32 GPUInstancer.GPUInstancerConstants::STRIDE_SIZE_FLOAT4
	int32_t ___STRIDE_SIZE_FLOAT4_6;
	// System.Single GPUInstancer.GPUInstancerConstants::COMPUTE_SHADER_THREAD_COUNT
	float ___COMPUTE_SHADER_THREAD_COUNT_7;
	// System.Single GPUInstancer.GPUInstancerConstants::COMPUTE_SHADER_THREAD_COUNT_2D
	float ___COMPUTE_SHADER_THREAD_COUNT_2D_8;
	// System.Int32 GPUInstancer.GPUInstancerConstants::COMPUTE_MAX_LOD_BUFFER
	int32_t ___COMPUTE_MAX_LOD_BUFFER_9;
	// System.Int32 GPUInstancer.GPUInstancerConstants::TEXTURE_MAX_SIZE
	int32_t ___TEXTURE_MAX_SIZE_10;
	// System.Boolean GPUInstancer.GPUInstancerConstants::DETAIL_STORE_INSTANCE_DATA
	bool ___DETAIL_STORE_INSTANCE_DATA_11;
	// System.String GPUInstancer.GPUInstancerConstants::GUID_COMPUTE_PLATFORM_DEFINES
	String_t* ___GUID_COMPUTE_PLATFORM_DEFINES_12;
	// System.String GPUInstancer.GPUInstancerConstants::GUID_CGINC_PLATFORM_DEPENDENT
	String_t* ___GUID_CGINC_PLATFORM_DEPENDENT_13;
	// System.String[] GPUInstancer.GPUInstancerConstants::CAMERA_COMPUTE_KERNELS
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___CAMERA_COMPUTE_KERNELS_14;
	// System.String[] GPUInstancer.GPUInstancerConstants::VISIBILITY_COMPUTE_KERNELS
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___VISIBILITY_COMPUTE_KERNELS_15;
	// System.String GPUInstancer.GPUInstancerConstants::CAMERA_COMPUTE_RESOURCE_PATH
	String_t* ___CAMERA_COMPUTE_RESOURCE_PATH_16;
	// System.String GPUInstancer.GPUInstancerConstants::CAMERA_VR_COMPUTE_RESOURCE_PATH
	String_t* ___CAMERA_VR_COMPUTE_RESOURCE_PATH_17;
	// System.String GPUInstancer.GPUInstancerConstants::VISIBILITY_COMPUTE_RESOURCE_PATH
	String_t* ___VISIBILITY_COMPUTE_RESOURCE_PATH_18;
	// System.String GPUInstancer.GPUInstancerConstants::VISIBILITY_COMPUTE_RESOURCE_PATH_VULKAN
	String_t* ___VISIBILITY_COMPUTE_RESOURCE_PATH_VULKAN_19;
	// System.String GPUInstancer.GPUInstancerConstants::BUFFER_TO_TEXTURE_COMPUTE_RESOURCE_PATH
	String_t* ___BUFFER_TO_TEXTURE_COMPUTE_RESOURCE_PATH_20;
	// System.String GPUInstancer.GPUInstancerConstants::BUFFER_TO_TEXTURE_KERNEL
	String_t* ___BUFFER_TO_TEXTURE_KERNEL_21;
	// System.String GPUInstancer.GPUInstancerConstants::BUFFER_TO_TEXTURE_CROSSFADE_KERNEL
	String_t* ___BUFFER_TO_TEXTURE_CROSSFADE_KERNEL_22;
	// System.String GPUInstancer.GPUInstancerConstants::ARGS_BUFFER_COMPUTE_RESOURCE_PATH
	String_t* ___ARGS_BUFFER_COMPUTE_RESOURCE_PATH_23;
	// System.String GPUInstancer.GPUInstancerConstants::ARGS_BUFFER_DOUBLE_INSTANCE_COUNT_KERNEL
	String_t* ___ARGS_BUFFER_DOUBLE_INSTANCE_COUNT_KERNEL_24;
	// System.Int32 GPUInstancer.GPUInstancerConstants::BUFFER_COROUTINE_STEP_NUMBER
	int32_t ___BUFFER_COROUTINE_STEP_NUMBER_25;
	// System.Int32 GPUInstancer.GPUInstancerConstants::DETAIL_BUFFER_MERGE_FRAME_LIMIT
	int32_t ___DETAIL_BUFFER_MERGE_FRAME_LIMIT_26;
	// System.String GPUInstancer.GPUInstancerConstants::COMPUTE_SET_DATA_PARTIAL_RESOURCE_PATH
	String_t* ___COMPUTE_SET_DATA_PARTIAL_RESOURCE_PATH_27;
	// System.String GPUInstancer.GPUInstancerConstants::COMPUTE_SET_DATA_PARTIAL_KERNEL
	String_t* ___COMPUTE_SET_DATA_PARTIAL_KERNEL_28;
	// System.String GPUInstancer.GPUInstancerConstants::COMPUTE_SET_DATA_SINGLE_KERNEL
	String_t* ___COMPUTE_SET_DATA_SINGLE_KERNEL_29;
	// UnityEngine.ComputeShader GPUInstancer.GPUInstancerConstants::computeBufferSetDataPartial
	ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* ___computeBufferSetDataPartial_30;
	// System.Int32 GPUInstancer.GPUInstancerConstants::computeBufferSetDataPartialKernelId
	int32_t ___computeBufferSetDataPartialKernelId_31;
	// System.Int32 GPUInstancer.GPUInstancerConstants::computeBufferSetDataSingleKernelId
	int32_t ___computeBufferSetDataSingleKernelId_32;
	// System.String GPUInstancer.GPUInstancerConstants::COMPUTE_BILLBOARD_RESOURCE_PATH
	String_t* ___COMPUTE_BILLBOARD_RESOURCE_PATH_33;
	// System.String GPUInstancer.GPUInstancerConstants::COMPUTE_BILLBOARD_DILATION_KERNEL
	String_t* ___COMPUTE_BILLBOARD_DILATION_KERNEL_34;
	// System.String GPUInstancer.GPUInstancerConstants::COMPUTE_TEXTURE_UTILS_PATH
	String_t* ___COMPUTE_TEXTURE_UTILS_PATH_35;
	// System.String GPUInstancer.GPUInstancerConstants::COMPUTE_COPY_TEXTURE_KERNEL
	String_t* ___COMPUTE_COPY_TEXTURE_KERNEL_36;
	// UnityEngine.ComputeShader GPUInstancer.GPUInstancerConstants::computeTextureUtils
	ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* ___computeTextureUtils_37;
	// System.Int32 GPUInstancer.GPUInstancerConstants::computeTextureUtilsCopyTextureId
	int32_t ___computeTextureUtilsCopyTextureId_38;
	// System.String GPUInstancer.GPUInstancerConstants::GRASS_INSTANTIATION_KERNEL
	String_t* ___GRASS_INSTANTIATION_KERNEL_39;
	// System.String GPUInstancer.GPUInstancerConstants::GRASS_INSTANTIATION_RESOURCE_PATH
	String_t* ___GRASS_INSTANTIATION_RESOURCE_PATH_40;
	// System.String GPUInstancer.GPUInstancerConstants::TREE_INSTANTIATION_KERNEL
	String_t* ___TREE_INSTANTIATION_KERNEL_41;
	// System.String GPUInstancer.GPUInstancerConstants::TREE_INSTANTIATION_RESOURCE_PATH
	String_t* ___TREE_INSTANTIATION_RESOURCE_PATH_42;
	// System.String GPUInstancer.GPUInstancerConstants::COMPUTE_RUNTIME_MODIFICATION_RESOURCE_PATH
	String_t* ___COMPUTE_RUNTIME_MODIFICATION_RESOURCE_PATH_43;
	// System.String GPUInstancer.GPUInstancerConstants::COMPUTE_TRANSFORM_OFFSET_KERNEL
	String_t* ___COMPUTE_TRANSFORM_OFFSET_KERNEL_44;
	// System.String GPUInstancer.GPUInstancerConstants::COMPUTE_REMOVE_INSIDE_BOUNDS_KERNEL
	String_t* ___COMPUTE_REMOVE_INSIDE_BOUNDS_KERNEL_45;
	// System.String GPUInstancer.GPUInstancerConstants::COMPUTE_REMOVE_INSIDE_BOX_KERNEL
	String_t* ___COMPUTE_REMOVE_INSIDE_BOX_KERNEL_46;
	// System.String GPUInstancer.GPUInstancerConstants::COMPUTE_REMOVE_INSIDE_SPHERE_KERNEL
	String_t* ___COMPUTE_REMOVE_INSIDE_SPHERE_KERNEL_47;
	// System.String GPUInstancer.GPUInstancerConstants::COMPUTE_REMOVE_INSIDE_CAPSULE_KERNEL
	String_t* ___COMPUTE_REMOVE_INSIDE_CAPSULE_KERNEL_48;
	// System.String GPUInstancer.GPUInstancerConstants::COMPUTE_MATRIX_OFFSET_KERNEL
	String_t* ___COMPUTE_MATRIX_OFFSET_KERNEL_49;
	// UnityEngine.ComputeShader GPUInstancer.GPUInstancerConstants::computeRuntimeModification
	ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* ___computeRuntimeModification_50;
	// System.Int32 GPUInstancer.GPUInstancerConstants::computeBufferTransformOffsetId
	int32_t ___computeBufferTransformOffsetId_51;
	// System.Int32 GPUInstancer.GPUInstancerConstants::computeRemoveInsideBoundsId
	int32_t ___computeRemoveInsideBoundsId_52;
	// System.Int32 GPUInstancer.GPUInstancerConstants::computeRemoveInsideBoxId
	int32_t ___computeRemoveInsideBoxId_53;
	// System.Int32 GPUInstancer.GPUInstancerConstants::computeRemoveInsideSphereId
	int32_t ___computeRemoveInsideSphereId_54;
	// System.Int32 GPUInstancer.GPUInstancerConstants::computeRemoveInsideCapsuleId
	int32_t ___computeRemoveInsideCapsuleId_55;
	// System.Int32 GPUInstancer.GPUInstancerConstants::computeBufferMatrixOffsetId
	int32_t ___computeBufferMatrixOffsetId_56;
	// System.String GPUInstancer.GPUInstancerConstants::SHADER_UNITY_STANDARD
	String_t* ___SHADER_UNITY_STANDARD_57;
	// System.String GPUInstancer.GPUInstancerConstants::SHADER_UNITY_STANDARD_SPECULAR
	String_t* ___SHADER_UNITY_STANDARD_SPECULAR_58;
	// System.String GPUInstancer.GPUInstancerConstants::SHADER_UNITY_STANDARD_ROUGHNESS
	String_t* ___SHADER_UNITY_STANDARD_ROUGHNESS_59;
	// System.String GPUInstancer.GPUInstancerConstants::SHADER_UNITY_VERTEXLIT
	String_t* ___SHADER_UNITY_VERTEXLIT_60;
	// System.String GPUInstancer.GPUInstancerConstants::SHADER_UNITY_SPEED_TREE
	String_t* ___SHADER_UNITY_SPEED_TREE_61;
	// System.String GPUInstancer.GPUInstancerConstants::SHADER_UNITY_SPEED_TREE_URP
	String_t* ___SHADER_UNITY_SPEED_TREE_URP_62;
	// System.String GPUInstancer.GPUInstancerConstants::SHADER_UNITY_SPEED_TREE_8
	String_t* ___SHADER_UNITY_SPEED_TREE_8_63;
	// System.String GPUInstancer.GPUInstancerConstants::SHADER_UNITY_SPEED_TREE_8_URP
	String_t* ___SHADER_UNITY_SPEED_TREE_8_URP_64;
	// System.String GPUInstancer.GPUInstancerConstants::SHADER_UNITY_TREE_CREATOR_BARK
	String_t* ___SHADER_UNITY_TREE_CREATOR_BARK_65;
	// System.String GPUInstancer.GPUInstancerConstants::SHADER_UNITY_TREE_CREATOR_BARK_OPTIMIZED
	String_t* ___SHADER_UNITY_TREE_CREATOR_BARK_OPTIMIZED_66;
	// System.String GPUInstancer.GPUInstancerConstants::SHADER_UNITY_TREE_CREATOR_LEAVES
	String_t* ___SHADER_UNITY_TREE_CREATOR_LEAVES_67;
	// System.String GPUInstancer.GPUInstancerConstants::SHADER_UNITY_TREE_CREATOR_LEAVES_OPTIMIZED
	String_t* ___SHADER_UNITY_TREE_CREATOR_LEAVES_OPTIMIZED_68;
	// System.String GPUInstancer.GPUInstancerConstants::SHADER_UNITY_TREE_CREATOR_LEAVES_FAST
	String_t* ___SHADER_UNITY_TREE_CREATOR_LEAVES_FAST_69;
	// System.String GPUInstancer.GPUInstancerConstants::SHADER_UNITY_TREE_CREATOR_LEAVES_FAST_OPTIMIZED
	String_t* ___SHADER_UNITY_TREE_CREATOR_LEAVES_FAST_OPTIMIZED_70;
	// System.String GPUInstancer.GPUInstancerConstants::SHADER_UNITY_TREE_SOFT_OCCLUSION_BARK
	String_t* ___SHADER_UNITY_TREE_SOFT_OCCLUSION_BARK_71;
	// System.String GPUInstancer.GPUInstancerConstants::SHADER_UNITY_TREE_SOFT_OCCLUSION_LEAVES
	String_t* ___SHADER_UNITY_TREE_SOFT_OCCLUSION_LEAVES_72;
	// System.String GPUInstancer.GPUInstancerConstants::SHADER_UNITY_INTERNAL_ERROR
	String_t* ___SHADER_UNITY_INTERNAL_ERROR_73;
	// System.String GPUInstancer.GPUInstancerConstants::SHADER_GPUI_STANDARD
	String_t* ___SHADER_GPUI_STANDARD_74;
	// System.String GPUInstancer.GPUInstancerConstants::SHADER_GPUI_STANDARD_SPECULAR
	String_t* ___SHADER_GPUI_STANDARD_SPECULAR_75;
	// System.String GPUInstancer.GPUInstancerConstants::SHADER_GPUI_STANDARD_ROUGHNESS
	String_t* ___SHADER_GPUI_STANDARD_ROUGHNESS_76;
	// System.String GPUInstancer.GPUInstancerConstants::SHADER_GPUI_VERTEXLIT
	String_t* ___SHADER_GPUI_VERTEXLIT_77;
	// System.String GPUInstancer.GPUInstancerConstants::SHADER_GPUI_FOLIAGE
	String_t* ___SHADER_GPUI_FOLIAGE_78;
	// System.String GPUInstancer.GPUInstancerConstants::SHADER_GPUI_FOLIAGE_LWRP
	String_t* ___SHADER_GPUI_FOLIAGE_LWRP_79;
	// System.String GPUInstancer.GPUInstancerConstants::SHADER_GPUI_FOLIAGE_HDRP
	String_t* ___SHADER_GPUI_FOLIAGE_HDRP_80;
	// System.String GPUInstancer.GPUInstancerConstants::SHADER_GPUI_FOLIAGE_URP
	String_t* ___SHADER_GPUI_FOLIAGE_URP_81;
	// System.String GPUInstancer.GPUInstancerConstants::SHADER_GPUI_SHADOWS_ONLY
	String_t* ___SHADER_GPUI_SHADOWS_ONLY_82;
	// System.String GPUInstancer.GPUInstancerConstants::SHADER_GPUI_HIZ_OCCLUSION_DEBUGGER
	String_t* ___SHADER_GPUI_HIZ_OCCLUSION_DEBUGGER_83;
	// System.String GPUInstancer.GPUInstancerConstants::SHADER_GPUI_SPEED_TREE
	String_t* ___SHADER_GPUI_SPEED_TREE_84;
	// System.String GPUInstancer.GPUInstancerConstants::SHADER_GPUI_SPEED_TREE_8
	String_t* ___SHADER_GPUI_SPEED_TREE_8_85;
	// System.String GPUInstancer.GPUInstancerConstants::SHADER_GPUI_TREE_PROXY
	String_t* ___SHADER_GPUI_TREE_PROXY_86;
	// System.String GPUInstancer.GPUInstancerConstants::SHADER_GPUI_TREE_CREATOR_BARK
	String_t* ___SHADER_GPUI_TREE_CREATOR_BARK_87;
	// System.String GPUInstancer.GPUInstancerConstants::SHADER_GPUI_TREE_CREATOR_BARK_OPTIMIZED
	String_t* ___SHADER_GPUI_TREE_CREATOR_BARK_OPTIMIZED_88;
	// System.String GPUInstancer.GPUInstancerConstants::SHADER_GPUI_TREE_CREATOR_LEAVES
	String_t* ___SHADER_GPUI_TREE_CREATOR_LEAVES_89;
	// System.String GPUInstancer.GPUInstancerConstants::SHADER_GPUI_TREE_CREATOR_LEAVES_OPTIMIZED
	String_t* ___SHADER_GPUI_TREE_CREATOR_LEAVES_OPTIMIZED_90;
	// System.String GPUInstancer.GPUInstancerConstants::SHADER_GPUI_TREE_CREATOR_LEAVES_FAST
	String_t* ___SHADER_GPUI_TREE_CREATOR_LEAVES_FAST_91;
	// System.String GPUInstancer.GPUInstancerConstants::SHADER_GPUI_TREE_CREATOR_LEAVES_FAST_OPTIMIZED
	String_t* ___SHADER_GPUI_TREE_CREATOR_LEAVES_FAST_OPTIMIZED_92;
	// System.String GPUInstancer.GPUInstancerConstants::SHADER_GPUI_TREE_SOFT_OCCLUSION_BARK
	String_t* ___SHADER_GPUI_TREE_SOFT_OCCLUSION_BARK_93;
	// System.String GPUInstancer.GPUInstancerConstants::SHADER_GPUI_TREE_SOFT_OCCLUSION_LEAVES
	String_t* ___SHADER_GPUI_TREE_SOFT_OCCLUSION_LEAVES_94;
	// System.String GPUInstancer.GPUInstancerConstants::SHADER_GPUI_BILLBOARD_2D_RENDERER_TREE
	String_t* ___SHADER_GPUI_BILLBOARD_2D_RENDERER_TREE_95;
	// System.String GPUInstancer.GPUInstancerConstants::SHADER_GPUI_BILLBOARD_2D_RENDERER_TREECREATOR
	String_t* ___SHADER_GPUI_BILLBOARD_2D_RENDERER_TREECREATOR_96;
	// System.String GPUInstancer.GPUInstancerConstants::SHADER_GPUI_BILLBOARD_2D_RENDERER_SOFTOCCLUSION
	String_t* ___SHADER_GPUI_BILLBOARD_2D_RENDERER_SOFTOCCLUSION_97;
	// System.String GPUInstancer.GPUInstancerConstants::SHADER_GPUI_BILLBOARD_2D_RENDERER_STANDARD
	String_t* ___SHADER_GPUI_BILLBOARD_2D_RENDERER_STANDARD_98;
	// System.String GPUInstancer.GPUInstancerConstants::SHADER_GPUI_BILLBOARD_ALBEDO_BAKER
	String_t* ___SHADER_GPUI_BILLBOARD_ALBEDO_BAKER_99;
	// System.String GPUInstancer.GPUInstancerConstants::SHADER_GPUI_BILLBOARD_NORMAL_BAKER
	String_t* ___SHADER_GPUI_BILLBOARD_NORMAL_BAKER_100;
	// System.String GPUInstancer.GPUInstancerConstants::SHADER_GPUI_ERROR
	String_t* ___SHADER_GPUI_ERROR_101;
	// System.String GPUInstancer.GPUInstancerConstants::SHADER_GPUI_BILLBOARD_2D_RENDERER_URP
	String_t* ___SHADER_GPUI_BILLBOARD_2D_RENDERER_URP_102;
	// System.String GPUInstancer.GPUInstancerConstants::SHADER_GPUI_BILLBOARD_2D_RENDERER_HDRP
	String_t* ___SHADER_GPUI_BILLBOARD_2D_RENDERER_HDRP_103;
	// System.String GPUInstancer.GPUInstancerConstants::DEFAULT_PATH_GUID
	String_t* ___DEFAULT_PATH_GUID_104;
	// System.String GPUInstancer.GPUInstancerConstants::RESOURCES_PATH
	String_t* ___RESOURCES_PATH_105;
	// System.String GPUInstancer.GPUInstancerConstants::SETTINGS_PATH
	String_t* ___SETTINGS_PATH_106;
	// System.String GPUInstancer.GPUInstancerConstants::SHADERS_PATH
	String_t* ___SHADERS_PATH_107;
	// System.String GPUInstancer.GPUInstancerConstants::EDITOR_TEXTURES_PATH
	String_t* ___EDITOR_TEXTURES_PATH_108;
	// System.String GPUInstancer.GPUInstancerConstants::NOISE_TEXTURES_PATH
	String_t* ___NOISE_TEXTURES_PATH_109;
	// System.String GPUInstancer.GPUInstancerConstants::GPUI_SETTINGS_DEFAULT_NAME
	String_t* ___GPUI_SETTINGS_DEFAULT_NAME_110;
	// System.String GPUInstancer.GPUInstancerConstants::SHADER_BINDINGS_DEFAULT_NAME
	String_t* ___SHADER_BINDINGS_DEFAULT_NAME_111;
	// System.String GPUInstancer.GPUInstancerConstants::BILLBOARD_ATLAS_BINDINGS_DEFAULT_NAME
	String_t* ___BILLBOARD_ATLAS_BINDINGS_DEFAULT_NAME_112;
	// System.String GPUInstancer.GPUInstancerConstants::SHADER_VARIANT_COLLECTION_DEFAULT_NAME
	String_t* ___SHADER_VARIANT_COLLECTION_DEFAULT_NAME_113;
	// System.String GPUInstancer.GPUInstancerConstants::PROTOTYPES_TERRAIN_PATH
	String_t* ___PROTOTYPES_TERRAIN_PATH_114;
	// System.String GPUInstancer.GPUInstancerConstants::PROTOTYPES_PREFAB_PATH
	String_t* ___PROTOTYPES_PREFAB_PATH_115;
	// System.String GPUInstancer.GPUInstancerConstants::PROTOTYPES_BILLBOARD_TEXTURES_PATH
	String_t* ___PROTOTYPES_BILLBOARD_TEXTURES_PATH_116;
	// System.String GPUInstancer.GPUInstancerConstants::PROTOTYPES_SHADERS_PATH
	String_t* ___PROTOTYPES_SHADERS_PATH_117;
	// System.String GPUInstancer.GPUInstancerConstants::PROTOTYPES_SERIALIZED_PATH
	String_t* ___PROTOTYPES_SERIALIZED_PATH_118;
	// System.String GPUInstancer.GPUInstancerConstants::FOLIAGE_SHADER_LWRP_PACKAGE_PATH
	String_t* ___FOLIAGE_SHADER_LWRP_PACKAGE_PATH_119;
	// System.String GPUInstancer.GPUInstancerConstants::FOLIAGE_SHADER_URP_PACKAGE_PATH
	String_t* ___FOLIAGE_SHADER_URP_PACKAGE_PATH_120;
	// System.String GPUInstancer.GPUInstancerConstants::FOLIAGE_SHADER_HDRP_PACKAGE_PATH
	String_t* ___FOLIAGE_SHADER_HDRP_PACKAGE_PATH_121;
	// System.String GPUInstancer.GPUInstancerConstants::FOLIAGE_SHADER_HDRP_TEMPLATE_MATERIAL_PATH
	String_t* ___FOLIAGE_SHADER_HDRP_TEMPLATE_MATERIAL_PATH_122;
	// System.String GPUInstancer.GPUInstancerConstants::BILLBOARD_SHADER_HDRP_TEMPLATE_MATERIAL_PATH
	String_t* ___BILLBOARD_SHADER_HDRP_TEMPLATE_MATERIAL_PATH_123;
	// System.String GPUInstancer.GPUInstancerConstants::_defaultPath
	String_t* ____defaultPath_124;
	// System.String GPUInstancer.GPUInstancerConstants::DEFAULT_HEALTHY_DRY_NOISE
	String_t* ___DEFAULT_HEALTHY_DRY_NOISE_125;
	// System.String GPUInstancer.GPUInstancerConstants::DEFAULT_WIND_WAVE_NOISE
	String_t* ___DEFAULT_WIND_WAVE_NOISE_126;
	// System.String GPUInstancer.GPUInstancerConstants::TEXT_PREFAB_TYPE_WARNING_TITLE
	String_t* ___TEXT_PREFAB_TYPE_WARNING_TITLE_127;
	// System.String GPUInstancer.GPUInstancerConstants::TEXT_PREFAB_TYPE_WARNING
	String_t* ___TEXT_PREFAB_TYPE_WARNING_128;
	// System.String GPUInstancer.GPUInstancerConstants::TEXT_TREE_PREFAB_TYPE_WARNING
	String_t* ___TEXT_TREE_PREFAB_TYPE_WARNING_129;
	// System.String GPUInstancer.GPUInstancerConstants::TEXT_PREFAB_TYPE_WARNING_3D
	String_t* ___TEXT_PREFAB_TYPE_WARNING_3D_130;
	// System.String GPUInstancer.GPUInstancerConstants::TEXT_OK
	String_t* ___TEXT_OK_131;
	// System.String GPUInstancer.GPUInstancerConstants::TEXT_deleteConfirmation
	String_t* ___TEXT_deleteConfirmation_132;
	// System.String GPUInstancer.GPUInstancerConstants::TEXT_deleteBillboard
	String_t* ___TEXT_deleteBillboard_133;
	// System.String GPUInstancer.GPUInstancerConstants::TEXT_keepTextures
	String_t* ___TEXT_keepTextures_134;
	// System.String GPUInstancer.GPUInstancerConstants::TEXT_delete
	String_t* ___TEXT_delete_135;
	// System.String GPUInstancer.GPUInstancerConstants::ERRORTEXT_cameraNotFound
	String_t* ___ERRORTEXT_cameraNotFound_136;
	// System.Int32 GPUInstancer.GPUInstancerConstants::DEBUG_INFO_SIZE
	int32_t ___DEBUG_INFO_SIZE_137;
	// System.String GPUInstancer.GPUInstancerConstants::ERRORTEXT_shaderGraph
	String_t* ___ERRORTEXT_shaderGraph_138;
};

// Unity.Jobs.JobHandle
struct JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 
{
	// System.IntPtr Unity.Jobs.JobHandle::jobGroup
	intptr_t ___jobGroup_0;
	// System.Int32 Unity.Jobs.JobHandle::version
	int32_t ___version_1;
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

// UnityEngine.Jobs.TransformAccessArray
struct TransformAccessArray_t104EDE5BB3DC7E294332BB1D2AA508CAEDEE83D4 
{
	// System.IntPtr UnityEngine.Jobs.TransformAccessArray::m_TransformArray
	intptr_t ___m_TransformArray_0;
};

// UnityEngine.TreeInstance
struct TreeInstance_t382B018173ED020660D262061EA9424682614F50 
{
	// UnityEngine.Vector3 UnityEngine.TreeInstance::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// System.Single UnityEngine.TreeInstance::widthScale
	float ___widthScale_1;
	// System.Single UnityEngine.TreeInstance::heightScale
	float ___heightScale_2;
	// System.Single UnityEngine.TreeInstance::rotation
	float ___rotation_3;
	// UnityEngine.Color32 UnityEngine.TreeInstance::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_4;
	// UnityEngine.Color32 UnityEngine.TreeInstance::lightmapColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___lightmapColor_5;
	// System.Int32 UnityEngine.TreeInstance::prototypeIndex
	int32_t ___prototypeIndex_6;
	// System.Single UnityEngine.TreeInstance::temporaryDistance
	float ___temporaryDistance_7;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.ComputeShader
struct ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// GPUInstancer.GPUInstancerRuntimeData
struct GPUInstancerRuntimeData_tAC3B9C6BB85D573FA2A3F5A8378873C2C131057C  : public RuntimeObject
{
	// GPUInstancer.GPUInstancerPrototype GPUInstancer.GPUInstancerRuntimeData::prototype
	GPUInstancerPrototype_t8CC477296831E484428798CB96A46F21371C35CF* ___prototype_0;
	// System.Collections.Generic.List`1<GPUInstancer.GPUInstancerPrototypeLOD> GPUInstancer.GPUInstancerRuntimeData::instanceLODs
	List_1_tD44E367C5C31918684494310E03D64CA5572CE22* ___instanceLODs_1;
	// UnityEngine.Bounds GPUInstancer.GPUInstancerRuntimeData::instanceBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___instanceBounds_2;
	// System.Single[] GPUInstancer.GPUInstancerRuntimeData::lodSizes
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___lodSizes_3;
	// System.Single GPUInstancer.GPUInstancerRuntimeData::lodBiasApplied
	float ___lodBiasApplied_4;
	// UnityEngine.Matrix4x4[] GPUInstancer.GPUInstancerRuntimeData::instanceDataArray
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___instanceDataArray_5;
	// Unity.Collections.NativeArray`1<UnityEngine.Matrix4x4> GPUInstancer.GPUInstancerRuntimeData::instanceDataNativeArray
	NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 ___instanceDataNativeArray_6;
	// UnityEngine.Jobs.TransformAccessArray GPUInstancer.GPUInstancerRuntimeData::instanceTransformAccessArray
	TransformAccessArray_t104EDE5BB3DC7E294332BB1D2AA508CAEDEE83D4 ___instanceTransformAccessArray_7;
	// Unity.Jobs.JobHandle GPUInstancer.GPUInstancerRuntimeData::dependentJob
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___dependentJob_8;
	// System.Int32 GPUInstancer.GPUInstancerRuntimeData::instanceCount
	int32_t ___instanceCount_9;
	// System.Int32 GPUInstancer.GPUInstancerRuntimeData::bufferSize
	int32_t ___bufferSize_10;
	// UnityEngine.ComputeBuffer GPUInstancer.GPUInstancerRuntimeData::transformationMatrixVisibilityBuffer
	ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___transformationMatrixVisibilityBuffer_11;
	// UnityEngine.ComputeBuffer GPUInstancer.GPUInstancerRuntimeData::argsBuffer
	ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___argsBuffer_12;
	// UnityEngine.ComputeBuffer GPUInstancer.GPUInstancerRuntimeData::instanceLODDataBuffer
	ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___instanceLODDataBuffer_13;
	// UnityEngine.RenderTexture GPUInstancer.GPUInstancerRuntimeData::instanceLODDataTexture
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___instanceLODDataTexture_14;
	// System.UInt32[] GPUInstancer.GPUInstancerRuntimeData::args
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___args_15;
	// System.Boolean GPUInstancer.GPUInstancerRuntimeData::hasShadowCasterBuffer
	bool ___hasShadowCasterBuffer_16;
	// UnityEngine.Material GPUInstancer.GPUInstancerRuntimeData::shadowCasterMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___shadowCasterMaterial_17;
	// UnityEngine.ComputeBuffer GPUInstancer.GPUInstancerRuntimeData::shadowArgsBuffer
	ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___shadowArgsBuffer_18;
	// System.UInt32[] GPUInstancer.GPUInstancerRuntimeData::shadowArgs
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___shadowArgs_19;
	// System.Boolean GPUInstancer.GPUInstancerRuntimeData::transformDataModified
	bool ___transformDataModified_20;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.TerrainData
struct TerrainData_t615A68EAC648066681875D47FC641496D12F2E24  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_StaticFields
{
	// System.Int32 UnityEngine.TerrainData::k_MaximumResolution
	int32_t ___k_MaximumResolution_10;
	// System.Int32 UnityEngine.TerrainData::k_MinimumDetailResolutionPerPatch
	int32_t ___k_MinimumDetailResolutionPerPatch_11;
	// System.Int32 UnityEngine.TerrainData::k_MaximumDetailResolutionPerPatch
	int32_t ___k_MaximumDetailResolutionPerPatch_12;
	// System.Int32 UnityEngine.TerrainData::k_MaximumDetailPatchCount
	int32_t ___k_MaximumDetailPatchCount_13;
	// System.Int32 UnityEngine.TerrainData::k_MaximumDetailsPerRes
	int32_t ___k_MaximumDetailsPerRes_14;
	// System.Int32 UnityEngine.TerrainData::k_MinimumAlphamapResolution
	int32_t ___k_MinimumAlphamapResolution_15;
	// System.Int32 UnityEngine.TerrainData::k_MaximumAlphamapResolution
	int32_t ___k_MaximumAlphamapResolution_16;
	// System.Int32 UnityEngine.TerrainData::k_MinimumBaseMapResolution
	int32_t ___k_MinimumBaseMapResolution_17;
	// System.Int32 UnityEngine.TerrainData::k_MaximumBaseMapResolution
	int32_t ___k_MaximumBaseMapResolution_18;
};

// System.Predicate`1<GPUInstancer.GPUInstancerManager>
struct Predicate_1_tEA3D0E2F9E6B28A5C83A3212E006D2FAA92E4D2A  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// GPUInstancer.GPUInstancerPrototype
struct GPUInstancerPrototype_t8CC477296831E484428798CB96A46F21371C35CF  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.GameObject GPUInstancer.GPUInstancerPrototype::prefabObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefabObject_4;
	// System.Boolean GPUInstancer.GPUInstancerPrototype::isShadowCasting
	bool ___isShadowCasting_5;
	// System.Boolean GPUInstancer.GPUInstancerPrototype::useCustomShadowDistance
	bool ___useCustomShadowDistance_6;
	// System.Single GPUInstancer.GPUInstancerPrototype::shadowDistance
	float ___shadowDistance_7;
	// System.Single[] GPUInstancer.GPUInstancerPrototype::shadowLODMap
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___shadowLODMap_8;
	// System.Boolean GPUInstancer.GPUInstancerPrototype::useOriginalShaderForShadow
	bool ___useOriginalShaderForShadow_9;
	// System.Boolean GPUInstancer.GPUInstancerPrototype::cullShadows
	bool ___cullShadows_10;
	// System.Single GPUInstancer.GPUInstancerPrototype::minDistance
	float ___minDistance_11;
	// System.Single GPUInstancer.GPUInstancerPrototype::maxDistance
	float ___maxDistance_12;
	// System.Boolean GPUInstancer.GPUInstancerPrototype::isFrustumCulling
	bool ___isFrustumCulling_13;
	// System.Boolean GPUInstancer.GPUInstancerPrototype::isOcclusionCulling
	bool ___isOcclusionCulling_14;
	// System.Single GPUInstancer.GPUInstancerPrototype::frustumOffset
	float ___frustumOffset_15;
	// System.Single GPUInstancer.GPUInstancerPrototype::minCullingDistance
	float ___minCullingDistance_16;
	// System.Single GPUInstancer.GPUInstancerPrototype::occlusionOffset
	float ___occlusionOffset_17;
	// System.Int32 GPUInstancer.GPUInstancerPrototype::occlusionAccuracy
	int32_t ___occlusionAccuracy_18;
	// UnityEngine.Vector3 GPUInstancer.GPUInstancerPrototype::boundsOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___boundsOffset_19;
	// System.Boolean GPUInstancer.GPUInstancerPrototype::isLODCrossFade
	bool ___isLODCrossFade_20;
	// System.Boolean GPUInstancer.GPUInstancerPrototype::isLODCrossFadeAnimate
	bool ___isLODCrossFadeAnimate_21;
	// System.Single GPUInstancer.GPUInstancerPrototype::lodFadeTransitionWidth
	float ___lodFadeTransitionWidth_22;
	// System.Single GPUInstancer.GPUInstancerPrototype::lodBiasAdjustment
	float ___lodBiasAdjustment_23;
	// GPUInstancer.GPUInstancerBillboard GPUInstancer.GPUInstancerPrototype::billboard
	GPUInstancerBillboard_tABC9A0089A8E13E87FD4EA590191394E50C39034* ___billboard_24;
	// System.Boolean GPUInstancer.GPUInstancerPrototype::isBillboardDisabled
	bool ___isBillboardDisabled_25;
	// System.Boolean GPUInstancer.GPUInstancerPrototype::useGeneratedBillboard
	bool ___useGeneratedBillboard_26;
	// System.Boolean GPUInstancer.GPUInstancerPrototype::checkedForBillboardExtensions
	bool ___checkedForBillboardExtensions_27;
	// System.Boolean GPUInstancer.GPUInstancerPrototype::autoUpdateTransformData
	bool ___autoUpdateTransformData_28;
	// GPUInstancer.GPUInstancerTreeType GPUInstancer.GPUInstancerPrototype::treeType
	int32_t ___treeType_29;
	// System.String GPUInstancer.GPUInstancerPrototype::warningText
	String_t* ___warningText_30;
	// UnityEngine.Shader GPUInstancer.GPUInstancerPrototype::warningShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___warningShader_31;
};

// GPUInstancer.GPUInstancerTerrainSettings
struct GPUInstancerTerrainSettings_t2CCB96E712A6B4310113C5A7555D1DD6AA761356  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String GPUInstancer.GPUInstancerTerrainSettings::terrainDataGUID
	String_t* ___terrainDataGUID_4;
	// System.Single GPUInstancer.GPUInstancerTerrainSettings::maxDetailDistance
	float ___maxDetailDistance_5;
	// System.Single GPUInstancer.GPUInstancerTerrainSettings::maxTreeDistance
	float ___maxTreeDistance_6;
	// UnityEngine.Vector2 GPUInstancer.GPUInstancerTerrainSettings::windVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___windVector_7;
	// UnityEngine.Texture2D GPUInstancer.GPUInstancerTerrainSettings::healthyDryNoiseTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___healthyDryNoiseTexture_8;
	// UnityEngine.Texture2D GPUInstancer.GPUInstancerTerrainSettings::windWaveNormalTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___windWaveNormalTexture_9;
	// System.Boolean GPUInstancer.GPUInstancerTerrainSettings::autoSPCellSize
	bool ___autoSPCellSize_10;
	// System.Int32 GPUInstancer.GPUInstancerTerrainSettings::preferedSPCellSize
	int32_t ___preferedSPCellSize_11;
	// System.Single GPUInstancer.GPUInstancerTerrainSettings::detailDensity
	float ___detailDensity_12;
	// System.String GPUInstancer.GPUInstancerTerrainSettings::warningText
	String_t* ___warningText_13;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// GPUInstancer.GPUInstancerPrefabPrototype
struct GPUInstancerPrefabPrototype_tD5DFA3B45330511A1FC44F9C93293EC01FEDC818  : public GPUInstancerPrototype_t8CC477296831E484428798CB96A46F21371C35CF
{
	// System.Boolean GPUInstancer.GPUInstancerPrefabPrototype::enableRuntimeModifications
	bool ___enableRuntimeModifications_32;
	// System.Boolean GPUInstancer.GPUInstancerPrefabPrototype::startWithRigidBody
	bool ___startWithRigidBody_33;
	// System.Boolean GPUInstancer.GPUInstancerPrefabPrototype::addRemoveInstancesAtRuntime
	bool ___addRemoveInstancesAtRuntime_34;
	// System.Int32 GPUInstancer.GPUInstancerPrefabPrototype::extraBufferSize
	int32_t ___extraBufferSize_35;
	// System.Boolean GPUInstancer.GPUInstancerPrefabPrototype::addRuntimeHandlerScript
	bool ___addRuntimeHandlerScript_36;
	// System.Boolean GPUInstancer.GPUInstancerPrefabPrototype::hasRigidBody
	bool ___hasRigidBody_37;
	// GPUInstancer.GPUInstancerPrefabPrototype/RigidbodyData GPUInstancer.GPUInstancerPrefabPrototype::rigidbodyData
	RigidbodyData_t3B4100128BC0F76322A0AD60FE93488CE528D500* ___rigidbodyData_38;
	// System.Boolean GPUInstancer.GPUInstancerPrefabPrototype::meshRenderersDisabled
	bool ___meshRenderersDisabled_39;
	// System.Boolean GPUInstancer.GPUInstancerPrefabPrototype::isTransformsSerialized
	bool ___isTransformsSerialized_40;
	// UnityEngine.TextAsset GPUInstancer.GPUInstancerPrefabPrototype::serializedTransformData
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___serializedTransformData_41;
	// System.Int32 GPUInstancer.GPUInstancerPrefabPrototype::serializedTransformDataCount
	int32_t ___serializedTransformDataCount_42;
};

// GPUInstancer.GPUInstancerTreePrototype
struct GPUInstancerTreePrototype_tC24B0262BB0B3719EF8749B0EDD0CF72A5E6DDE2  : public GPUInstancerPrototype_t8CC477296831E484428798CB96A46F21371C35CF
{
	// System.Int32 GPUInstancer.GPUInstancerTreePrototype::prototypeIndex
	int32_t ___prototypeIndex_32;
	// System.Boolean GPUInstancer.GPUInstancerTreePrototype::isApplyRotation
	bool ___isApplyRotation_33;
	// System.Boolean GPUInstancer.GPUInstancerTreePrototype::isApplyPrefabScale
	bool ___isApplyPrefabScale_34;
	// System.Boolean GPUInstancer.GPUInstancerTreePrototype::isApplyTerrainHeight
	bool ___isApplyTerrainHeight_35;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Terrain
struct Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// GPUInstancer.GPUInstancerManager
struct GPUInstancerManager_tBC70675B38834A3B91ED3392CCE3603FB3D44A8E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<GPUInstancer.GPUInstancerPrototype> GPUInstancer.GPUInstancerManager::prototypeList
	List_1_tC51EA1C5181B70F9303231807AEAD89EF6C5CC0D* ___prototypeList_4;
	// System.Boolean GPUInstancer.GPUInstancerManager::autoSelectCamera
	bool ___autoSelectCamera_5;
	// GPUInstancer.GPUInstancerCameraData GPUInstancer.GPUInstancerManager::cameraData
	GPUInstancerCameraData_t29E2AF7FFF858FCA0292B236B85D19AE2C8F6540* ___cameraData_6;
	// System.Boolean GPUInstancer.GPUInstancerManager::useFloatingOriginHandler
	bool ___useFloatingOriginHandler_7;
	// System.Boolean GPUInstancer.GPUInstancerManager::applyFloatingOriginRotationAndScale
	bool ___applyFloatingOriginRotationAndScale_8;
	// UnityEngine.Transform GPUInstancer.GPUInstancerManager::floatingOriginTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___floatingOriginTransform_9;
	// GPUInstancer.GPUInstancerFloatingOriginHandler GPUInstancer.GPUInstancerManager::floatingOriginHandler
	GPUInstancerFloatingOriginHandler_t6B0C4B2B67E325E44E174DA9C0969900A866F991* ___floatingOriginHandler_10;
	// System.Collections.Generic.List`1<GPUInstancer.GPUInstancerRuntimeData> GPUInstancer.GPUInstancerManager::runtimeDataList
	List_1_t8FDAD79D15A0E06F4397907AE6788258276E8978* ___runtimeDataList_11;
	// UnityEngine.Bounds GPUInstancer.GPUInstancerManager::instancingBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___instancingBounds_12;
	// System.Boolean GPUInstancer.GPUInstancerManager::isFrustumCulling
	bool ___isFrustumCulling_13;
	// System.Boolean GPUInstancer.GPUInstancerManager::isOcclusionCulling
	bool ___isOcclusionCulling_14;
	// System.Single GPUInstancer.GPUInstancerManager::minCullingDistance
	float ___minCullingDistance_15;
	// GPUInstancer.GPUInstancerSpatialPartitioningData`1<GPUInstancer.GPUInstancerCell> GPUInstancer.GPUInstancerManager::spData
	GPUInstancerSpatialPartitioningData_1_t27AD3BFDE5350768DC857569912E326952736F4C* ___spData_16;
	// System.Collections.Generic.List`1<System.Threading.Thread> GPUInstancer.GPUInstancerManager::activeThreads
	List_1_tC6F988464EEDD8B37B6AA2E9D311D598FC07845D* ___activeThreads_30;
	// System.Collections.Generic.Queue`1<GPUInstancer.GPUInstancerManager/GPUIThreadData> GPUInstancer.GPUInstancerManager::threadStartQueue
	Queue_1_t99DC9E0C385261FC4FFE84A2036E3050F46E4EB4* ___threadStartQueue_31;
	// System.Collections.Generic.Queue`1<System.Action> GPUInstancer.GPUInstancerManager::threadQueue
	Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* ___threadQueue_32;
	// System.Boolean GPUInstancer.GPUInstancerManager::isInitial
	bool ___isInitial_40;
	// System.Boolean GPUInstancer.GPUInstancerManager::isInitialized
	bool ___isInitialized_41;
	// System.Boolean GPUInstancer.GPUInstancerManager::isQuiting
	bool ___isQuiting_42;
	// System.Collections.Generic.Dictionary`2<GPUInstancer.GPUInstancerPrototype,GPUInstancer.GPUInstancerRuntimeData> GPUInstancer.GPUInstancerManager::runtimeDataDictionary
	Dictionary_2_tEBFC4EB1F7814E4E8C20F07F2DC73EE11A2454B0* ___runtimeDataDictionary_43;
	// UnityEngine.LayerMask GPUInstancer.GPUInstancerManager::layerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___layerMask_44;
	// System.Boolean GPUInstancer.GPUInstancerManager::lightProbeDisabled
	bool ___lightProbeDisabled_45;
	// System.Exception GPUInstancer.GPUInstancerManager::threadException
	Exception_t* ___threadException_46;
};

struct GPUInstancerManager_tBC70675B38834A3B91ED3392CCE3603FB3D44A8E_StaticFields
{
	// System.Collections.Generic.List`1<GPUInstancer.GPUInstancerManager> GPUInstancer.GPUInstancerManager::activeManagerList
	List_1_tCFCDBF61C22E71B3C2667C807F40384311583709* ___activeManagerList_17;
	// System.Boolean GPUInstancer.GPUInstancerManager::showRenderedAmount
	bool ___showRenderedAmount_18;
	// UnityEngine.ComputeShader GPUInstancer.GPUInstancerManager::_cameraComputeShader
	ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* ____cameraComputeShader_19;
	// UnityEngine.ComputeShader GPUInstancer.GPUInstancerManager::_cameraComputeShaderVR
	ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* ____cameraComputeShaderVR_20;
	// System.Int32[] GPUInstancer.GPUInstancerManager::_cameraComputeKernelIDs
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____cameraComputeKernelIDs_21;
	// UnityEngine.ComputeShader GPUInstancer.GPUInstancerManager::_visibilityComputeShader
	ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* ____visibilityComputeShader_22;
	// System.Int32[] GPUInstancer.GPUInstancerManager::_instanceVisibilityComputeKernelIDs
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____instanceVisibilityComputeKernelIDs_23;
	// UnityEngine.ComputeShader GPUInstancer.GPUInstancerManager::_bufferToTextureComputeShader
	ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* ____bufferToTextureComputeShader_24;
	// System.Int32 GPUInstancer.GPUInstancerManager::_bufferToTextureComputeKernelID
	int32_t ____bufferToTextureComputeKernelID_25;
	// System.Int32 GPUInstancer.GPUInstancerManager::_bufferToTextureCrossFadeComputeKernelID
	int32_t ____bufferToTextureCrossFadeComputeKernelID_26;
	// UnityEngine.ComputeShader GPUInstancer.GPUInstancerManager::_argsBufferComputeShader
	ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* ____argsBufferComputeShader_27;
	// System.Int32 GPUInstancer.GPUInstancerManager::_argsBufferDoubleInstanceCountComputeKernelID
	int32_t ____argsBufferDoubleInstanceCountComputeKernelID_28;
	// System.Int32 GPUInstancer.GPUInstancerManager::maxThreads
	int32_t ___maxThreads_29;
	// System.Int32 GPUInstancer.GPUInstancerManager::lastTreePositionUpdate
	int32_t ___lastTreePositionUpdate_33;
	// UnityEngine.GameObject GPUInstancer.GPUInstancerManager::treeProxyParent
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___treeProxyParent_34;
	// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,UnityEngine.Transform> GPUInstancer.GPUInstancerManager::treeProxyList
	Dictionary_2_t766523EA908A9FDA90684F190149A5842A87B737* ___treeProxyList_35;
	// System.Int32 GPUInstancer.GPUInstancerManager::lastDrawCallFrame
	int32_t ___lastDrawCallFrame_36;
	// System.Single GPUInstancer.GPUInstancerManager::lastDrawCallTime
	float ___lastDrawCallTime_37;
	// System.Single GPUInstancer.GPUInstancerManager::timeSinceLastDrawCall
	float ___timeSinceLastDrawCall_38;
	// UnityEngine.Vector4 GPUInstancer.GPUInstancerManager::_windVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____windVector_39;
};

// GPUInstancer.GPUInstancerPrefab
struct GPUInstancerPrefab_t7597694950D9BB7FBE8411A0A11CA1ADFD59C43A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// GPUInstancer.GPUInstancerPrefabPrototype GPUInstancer.GPUInstancerPrefab::prefabPrototype
	GPUInstancerPrefabPrototype_tD5DFA3B45330511A1FC44F9C93293EC01FEDC818* ___prefabPrototype_4;
	// System.Int32 GPUInstancer.GPUInstancerPrefab::gpuInstancerID
	int32_t ___gpuInstancerID_5;
	// GPUInstancer.PrefabInstancingState GPUInstancer.GPUInstancerPrefab::state
	int32_t ___state_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> GPUInstancer.GPUInstancerPrefab::variationDataList
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___variationDataList_7;
	// System.Boolean GPUInstancer.GPUInstancerPrefab::_isTransformSet
	bool ____isTransformSet_8;
	// UnityEngine.Transform GPUInstancer.GPUInstancerPrefab::_instanceTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____instanceTransform_9;
	// System.Boolean GPUInstancer.GPUInstancerPrefab::_isMatrixSet
	bool ____isMatrixSet_10;
	// UnityEngine.Matrix4x4 GPUInstancer.GPUInstancerPrefab::_localToWorldMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ____localToWorldMatrix_11;
};

// GPUInstancer.GPUInstancerPrefabRuntimeHandler
struct GPUInstancerPrefabRuntimeHandler_t4A36ABA8BFC07F939ABA643034FAB8E6D982F18A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// GPUInstancer.GPUInstancerPrefab GPUInstancer.GPUInstancerPrefabRuntimeHandler::gpuiPrefab
	GPUInstancerPrefab_t7597694950D9BB7FBE8411A0A11CA1ADFD59C43A* ___gpuiPrefab_4;
	// GPUInstancer.GPUInstancerPrefabManager GPUInstancer.GPUInstancerPrefabRuntimeHandler::_prefabManager
	GPUInstancerPrefabManager_t9BA464F68DAFB51AC82C0B30C1BEF0F84B0DEE40* ____prefabManager_5;
};

struct GPUInstancerPrefabRuntimeHandler_t4A36ABA8BFC07F939ABA643034FAB8E6D982F18A_StaticFields
{
	// System.Collections.Generic.Dictionary`2<GPUInstancer.GPUInstancerPrefabPrototype,GPUInstancer.GPUInstancerPrefabManager> GPUInstancer.GPUInstancerPrefabRuntimeHandler::_managerDictionary
	Dictionary_2_tA2CB848B96EBFA538BA5F6C57B7D6AC5B823010D* ____managerDictionary_6;
};

// GPUInstancer.GPUInstancerTerrainProxy
struct GPUInstancerTerrainProxy_t5546E69F313AE403C14A490876A27887B65C46B5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// GPUInstancer.GPUInstancerDetailManager GPUInstancer.GPUInstancerTerrainProxy::detailManager
	GPUInstancerDetailManager_tEFEDBDCFB8517C17BD810911B835F1C00EB75037* ___detailManager_4;
	// GPUInstancer.GPUInstancerTreeManager GPUInstancer.GPUInstancerTerrainProxy::treeManager
	GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00* ___treeManager_5;
	// System.Boolean GPUInstancer.GPUInstancerTerrainProxy::beingDestroyed
	bool ___beingDestroyed_6;
	// System.Int32 GPUInstancer.GPUInstancerTerrainProxy::terrainSelectedToolIndex
	int32_t ___terrainSelectedToolIndex_7;
};

// GPUInstancer.GPUInstancerTerrainRuntimeHandler
struct GPUInstancerTerrainRuntimeHandler_t83B71307E1A72EB8DCF173F72977287BA3FB5C9F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Terrain GPUInstancer.GPUInstancerTerrainRuntimeHandler::terrain
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain_4;
};

struct GPUInstancerTerrainRuntimeHandler_t83B71307E1A72EB8DCF173F72977287BA3FB5C9F_StaticFields
{
	// GPUInstancer.GPUInstancerTreeManager GPUInstancer.GPUInstancerTerrainRuntimeHandler::_treeManager
	GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00* ____treeManager_5;
};

// GPUInstancer.GPUInstancerPrefabManager
struct GPUInstancerPrefabManager_t9BA464F68DAFB51AC82C0B30C1BEF0F84B0DEE40  : public GPUInstancerManager_tBC70675B38834A3B91ED3392CCE3603FB3D44A8E
{
	// System.Collections.Generic.List`1<GPUInstancer.RegisteredPrefabsData> GPUInstancer.GPUInstancerPrefabManager::registeredPrefabs
	List_1_tE4E2A86761253C49E8B82A7BDFEFB969D6D826DF* ___registeredPrefabs_47;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> GPUInstancer.GPUInstancerPrefabManager::prefabList
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___prefabList_48;
	// System.Boolean GPUInstancer.GPUInstancerPrefabManager::enableMROnManagerDisable
	bool ___enableMROnManagerDisable_49;
	// System.Boolean GPUInstancer.GPUInstancerPrefabManager::enableMROnRemoveInstance
	bool ___enableMROnRemoveInstance_50;
	// System.Collections.Generic.List`1<GPUInstancer.GPUInstancerModificationCollider> GPUInstancer.GPUInstancerPrefabManager::_modificationColliders
	List_1_tB73353B56DB3D0F9455CB7EE8068BE1CE4BC90F9* ____modificationColliders_51;
	// System.Collections.Generic.Dictionary`2<GPUInstancer.GPUInstancerPrototype,System.Collections.Generic.List`1<GPUInstancer.GPUInstancerPrefab>> GPUInstancer.GPUInstancerPrefabManager::_registeredPrefabsRuntimeData
	Dictionary_2_tC43096F13ED9D83A457231BE2BAC2919A52CAEDF* ____registeredPrefabsRuntimeData_52;
	// System.Collections.Generic.List`1<GPUInstancer.IPrefabVariationData> GPUInstancer.GPUInstancerPrefabManager::_variationDataList
	List_1_t836805A1503A64DAB1E1E7124D2D315064404956* ____variationDataList_53;
};

// GPUInstancer.GPUInstancerTerrainManager
struct GPUInstancerTerrainManager_t5D14A71A3AF1435E15D974025C65071A3D39CD90  : public GPUInstancerManager_tBC70675B38834A3B91ED3392CCE3603FB3D44A8E
{
	// UnityEngine.Terrain GPUInstancer.GPUInstancerTerrainManager::_terrain
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ____terrain_47;
	// System.Collections.Generic.List`1<UnityEngine.Terrain> GPUInstancer.GPUInstancerTerrainManager::additionalTerrains
	List_1_tD2AD001A66810CB968E98D9E635A799408554017* ___additionalTerrains_48;
	// System.Collections.Generic.List`1<UnityEngine.Terrain> GPUInstancer.GPUInstancerTerrainManager::_terrains
	List_1_tD2AD001A66810CB968E98D9E635A799408554017* ____terrains_49;
	// GPUInstancer.GPUInstancerTerrainSettings GPUInstancer.GPUInstancerTerrainManager::terrainSettings
	GPUInstancerTerrainSettings_t2CCB96E712A6B4310113C5A7555D1DD6AA761356* ___terrainSettings_50;
	// System.Boolean GPUInstancer.GPUInstancerTerrainManager::replacingInstances
	bool ___replacingInstances_51;
	// System.Boolean GPUInstancer.GPUInstancerTerrainManager::initalizingInstances
	bool ___initalizingInstances_52;
	// System.Boolean GPUInstancer.GPUInstancerTerrainManager::_requiresTerrainUpdate
	bool ____requiresTerrainUpdate_53;
	// System.Collections.Generic.Queue`1<UnityEngine.Terrain> GPUInstancer.GPUInstancerTerrainManager::_terrainsToAdd
	Queue_1_tE01A60141352629DF933E9265CE9FA5C91C00DF3* ____terrainsToAdd_54;
	// System.Collections.Generic.Queue`1<UnityEngine.Terrain> GPUInstancer.GPUInstancerTerrainManager::_terrainsToRemove
	Queue_1_tE01A60141352629DF933E9265CE9FA5C91C00DF3* ____terrainsToRemove_55;
};

// GPUInstancer.GPUInstancerTreeManager
struct GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00  : public GPUInstancerTerrainManager_t5D14A71A3AF1435E15D974025C65071A3D39CD90
{
	// System.Boolean GPUInstancer.GPUInstancerTreeManager::initializeWithCoroutine
	bool ___initializeWithCoroutine_57;
	// System.Boolean GPUInstancer.GPUInstancerTreeManager::_isCoroutineActive
	bool ____isCoroutineActive_58;
};

struct GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00_StaticFields
{
	// UnityEngine.ComputeShader GPUInstancer.GPUInstancerTreeManager::_treeInstantiationComputeShader
	ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* ____treeInstantiationComputeShader_56;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// GPUInstancer.GPUInstancerPrefabManager[]
struct GPUInstancerPrefabManagerU5BU5D_tC361243D8434EF4292EDD10E7752D828EF40DE5A  : public RuntimeArray
{
	ALIGN_FIELD (8) GPUInstancerPrefabManager_t9BA464F68DAFB51AC82C0B30C1BEF0F84B0DEE40* m_Items[1];

	inline GPUInstancerPrefabManager_t9BA464F68DAFB51AC82C0B30C1BEF0F84B0DEE40* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GPUInstancerPrefabManager_t9BA464F68DAFB51AC82C0B30C1BEF0F84B0DEE40** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GPUInstancerPrefabManager_t9BA464F68DAFB51AC82C0B30C1BEF0F84B0DEE40* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GPUInstancerPrefabManager_t9BA464F68DAFB51AC82C0B30C1BEF0F84B0DEE40* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GPUInstancerPrefabManager_t9BA464F68DAFB51AC82C0B30C1BEF0F84B0DEE40** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GPUInstancerPrefabManager_t9BA464F68DAFB51AC82C0B30C1BEF0F84B0DEE40* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.TreePrototype[]
struct TreePrototypeU5BU5D_tB0255CA167F991C2C9BA3BA55DF7417168D93B7A  : public RuntimeArray
{
	ALIGN_FIELD (8) TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D* m_Items[1];

	inline TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.TreeInstance[]
struct TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429  : public RuntimeArray
{
	ALIGN_FIELD (8) TreeInstance_t382B018173ED020660D262061EA9424682614F50 m_Items[1];

	inline TreeInstance_t382B018173ED020660D262061EA9424682614F50 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TreeInstance_t382B018173ED020660D262061EA9424682614F50* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TreeInstance_t382B018173ED020660D262061EA9424682614F50 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TreeInstance_t382B018173ED020660D262061EA9424682614F50 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TreeInstance_t382B018173ED020660D262061EA9424682614F50* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TreeInstance_t382B018173ED020660D262061EA9424682614F50 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 m_Items[1];

	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Object_FindObjectsOfType_TisRuntimeObject_m1E6D851F6A46D646E0554A94729E9AAE79B0E87A_gshared (const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_Find_m5E78A210541B0D844FE27B94F509313623BE33D3_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___match0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared (const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_Load_TisRuntimeObject_m8B40A11CE62A4E445DADC28C81BD73922A4D4B65_gshared (String_t* ___path0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.TreeInstance>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m15D691BE05DD1AA2E0BA3FF42048E48A19571484_gshared (List_1_t7CDBDADC2DD3F6FE5B92D1A5EE6F8B003233585A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.TreeInstance>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mAC6D75EF36303133FA8504C2F1312008E4EA3C10_gshared_inline (List_1_t7CDBDADC2DD3F6FE5B92D1A5EE6F8B003233585A* __this, TreeInstance_t382B018173ED020660D262061EA9424682614F50 ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<UnityEngine.TreeInstance>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429* List_1_ToArray_m2E3ECDF734E7FA10812DF2D499C4317EB881C405_gshared (List_1_t7CDBDADC2DD3F6FE5B92D1A5EE6F8B003233585A* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7A5FFB71CC0B9A11A8FF0FC535B7D700EF76ED20_gshared (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m65F0731FF2C839C25530522F74BE029D34851222_gshared_inline (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector4>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m970BE5CCB1F05BAF033736206A0C3142930127B0_gshared_inline (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ComputeBuffer::SetData<UnityEngine.Vector4>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeBuffer_SetData_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mCDBB37084243E107C87E4A41FE8C2DA2FDA49C15_gshared (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* __this, List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___data0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void GPUInstancer.GPUInstancerUtility::ReleaseInstanceBuffers<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUInstancerUtility_ReleaseInstanceBuffers_TisRuntimeObject_m1EEC8FAA438C714B89F943094961E5EEA80E375C_gshared (RuntimeObject* ___runtimeData0, const RuntimeMethod* method) ;
// System.Void GPUInstancer.GPUInstancerUtility::InitializeGPUBuffer<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUInstancerUtility_InitializeGPUBuffer_TisRuntimeObject_m7AB072EB50A383CB36118C92170270C58C379EF1_gshared (RuntimeObject* ___runtimeData0, const RuntimeMethod* method) ;
// System.Void GPUInstancer.GPUInstancerUtility::ReleaseInstanceBuffers<System.Object>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUInstancerUtility_ReleaseInstanceBuffers_TisRuntimeObject_mD8E207C001D42038C4D30A713B21229A5C07EB28_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___runtimeDataList0, const RuntimeMethod* method) ;

// System.Void GPUInstancer.GPUInstancerPrefabManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m738ABA6D139BC46FF33CBFAA1C86906E6E9BB2C1 (U3CU3Ec_t79188BB870B400A21E63BE62EACAA455E5726EDF* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<GPUInstancer.GPUInstancerPrefab>::.ctor()
inline void List_1__ctor_m471D74C9C79EBAA52041EC2BB0B66D962C9F91D6 (List_1_t6648D68F433CA3C3042A432FA55509EF0DAAFBFC* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6648D68F433CA3C3042A432FA55509EF0DAAFBFC*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<GPUInstancer.GPUInstancerPrefab>()
inline GPUInstancerPrefab_t7597694950D9BB7FBE8411A0A11CA1ADFD59C43A* Component_GetComponent_TisGPUInstancerPrefab_t7597694950D9BB7FBE8411A0A11CA1ADFD59C43A_m1AF2FEC9FC79CA536B85790F076EB7E327827C4A (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  GPUInstancerPrefab_t7597694950D9BB7FBE8411A0A11CA1ADFD59C43A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<GPUInstancer.GPUInstancerPrefabPrototype,GPUInstancer.GPUInstancerPrefabManager>::.ctor()
inline void Dictionary_2__ctor_m7AD8CD258B2C058B76EA9351BDEA2D1601F4650F (Dictionary_2_tA2CB848B96EBFA538BA5F6C57B7D6AC5B823010D* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA2CB848B96EBFA538BA5F6C57B7D6AC5B823010D*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// T[] UnityEngine.Object::FindObjectsOfType<GPUInstancer.GPUInstancerPrefabManager>()
inline GPUInstancerPrefabManagerU5BU5D_tC361243D8434EF4292EDD10E7752D828EF40DE5A* Object_FindObjectsOfType_TisGPUInstancerPrefabManager_t9BA464F68DAFB51AC82C0B30C1BEF0F84B0DEE40_m27D11AF343801676AE91777A07F7E2054A7E1FCA (const RuntimeMethod* method)
{
	return ((  GPUInstancerPrefabManagerU5BU5D_tC361243D8434EF4292EDD10E7752D828EF40DE5A* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m1E6D851F6A46D646E0554A94729E9AAE79B0E87A_gshared)(method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<GPUInstancer.GPUInstancerPrototype>::GetEnumerator()
inline Enumerator_tCB115E1B66E6D645F629474906EB24B2039FDE89 List_1_GetEnumerator_m874D417FA6CC11A80D7FF9C9E30203F7A6E306A1 (List_1_tC51EA1C5181B70F9303231807AEAD89EF6C5CC0D* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tCB115E1B66E6D645F629474906EB24B2039FDE89 (*) (List_1_tC51EA1C5181B70F9303231807AEAD89EF6C5CC0D*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<GPUInstancer.GPUInstancerPrototype>::Dispose()
inline void Enumerator_Dispose_m7991A4D8D43E9F9C7C0DA986DF3B4CB0FD31C41C (Enumerator_tCB115E1B66E6D645F629474906EB24B2039FDE89* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tCB115E1B66E6D645F629474906EB24B2039FDE89*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<GPUInstancer.GPUInstancerPrototype>::get_Current()
inline GPUInstancerPrototype_t8CC477296831E484428798CB96A46F21371C35CF* Enumerator_get_Current_mFB99CEC61D38DFE0217DE0D134D6A7328B04AFD3_inline (Enumerator_tCB115E1B66E6D645F629474906EB24B2039FDE89* __this, const RuntimeMethod* method)
{
	return ((  GPUInstancerPrototype_t8CC477296831E484428798CB96A46F21371C35CF* (*) (Enumerator_tCB115E1B66E6D645F629474906EB24B2039FDE89*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<GPUInstancer.GPUInstancerPrefabPrototype,GPUInstancer.GPUInstancerPrefabManager>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mA03E27FDC6EE2F2DB156C8C3AD7EEC2381FC2BC9 (Dictionary_2_tA2CB848B96EBFA538BA5F6C57B7D6AC5B823010D* __this, GPUInstancerPrefabPrototype_tD5DFA3B45330511A1FC44F9C93293EC01FEDC818* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA2CB848B96EBFA538BA5F6C57B7D6AC5B823010D*, GPUInstancerPrefabPrototype_tD5DFA3B45330511A1FC44F9C93293EC01FEDC818*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<GPUInstancer.GPUInstancerPrefabPrototype,GPUInstancer.GPUInstancerPrefabManager>::Add(TKey,TValue)
inline void Dictionary_2_Add_m0451468A20B55624482A267CFA3E6A467F201708 (Dictionary_2_tA2CB848B96EBFA538BA5F6C57B7D6AC5B823010D* __this, GPUInstancerPrefabPrototype_tD5DFA3B45330511A1FC44F9C93293EC01FEDC818* ___key0, GPUInstancerPrefabManager_t9BA464F68DAFB51AC82C0B30C1BEF0F84B0DEE40* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA2CB848B96EBFA538BA5F6C57B7D6AC5B823010D*, GPUInstancerPrefabPrototype_tD5DFA3B45330511A1FC44F9C93293EC01FEDC818*, GPUInstancerPrefabManager_t9BA464F68DAFB51AC82C0B30C1BEF0F84B0DEE40*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<GPUInstancer.GPUInstancerPrototype>::MoveNext()
inline bool Enumerator_MoveNext_mD7701F92B473B07880859353BE2A8B469C161087 (Enumerator_tCB115E1B66E6D645F629474906EB24B2039FDE89* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tCB115E1B66E6D645F629474906EB24B2039FDE89*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// GPUInstancer.GPUInstancerPrefabManager GPUInstancer.GPUInstancerPrefabRuntimeHandler::GetPrefabManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GPUInstancerPrefabManager_t9BA464F68DAFB51AC82C0B30C1BEF0F84B0DEE40* GPUInstancerPrefabRuntimeHandler_GetPrefabManager_mF62D758DDAD4D2A7638EE0A8765601752AF15E65 (GPUInstancerPrefabRuntimeHandler_t4A36ABA8BFC07F939ABA643034FAB8E6D982F18A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<GPUInstancer.GPUInstancerPrefabPrototype,GPUInstancer.GPUInstancerPrefabManager>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m929E1644A8BDD3CA46111F8EB25BFAC7F2990F87 (Dictionary_2_tA2CB848B96EBFA538BA5F6C57B7D6AC5B823010D* __this, GPUInstancerPrefabPrototype_tD5DFA3B45330511A1FC44F9C93293EC01FEDC818* ___key0, GPUInstancerPrefabManager_t9BA464F68DAFB51AC82C0B30C1BEF0F84B0DEE40** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA2CB848B96EBFA538BA5F6C57B7D6AC5B823010D*, GPUInstancerPrefabPrototype_tD5DFA3B45330511A1FC44F9C93293EC01FEDC818*, GPUInstancerPrefabManager_t9BA464F68DAFB51AC82C0B30C1BEF0F84B0DEE40**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Predicate`1<GPUInstancer.GPUInstancerManager>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m8631D508BE387D9CE196A95AAE4B809A49D9D7A6 (Predicate_1_tEA3D0E2F9E6B28A5C83A3212E006D2FAA92E4D2A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_tEA3D0E2F9E6B28A5C83A3212E006D2FAA92E4D2A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___object0, ___method1, method);
}
// T System.Collections.Generic.List`1<GPUInstancer.GPUInstancerManager>::Find(System.Predicate`1<T>)
inline GPUInstancerManager_tBC70675B38834A3B91ED3392CCE3603FB3D44A8E* List_1_Find_m2DB5663B504EF11F9334D5FC00809793DAC033C6 (List_1_tCFCDBF61C22E71B3C2667C807F40384311583709* __this, Predicate_1_tEA3D0E2F9E6B28A5C83A3212E006D2FAA92E4D2A* ___match0, const RuntimeMethod* method)
{
	return ((  GPUInstancerManager_tBC70675B38834A3B91ED3392CCE3603FB3D44A8E* (*) (List_1_tCFCDBF61C22E71B3C2667C807F40384311583709*, Predicate_1_tEA3D0E2F9E6B28A5C83A3212E006D2FAA92E4D2A*, const RuntimeMethod*))List_1_Find_m5E78A210541B0D844FE27B94F509313623BE33D3_gshared)(__this, ___match0, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<GPUInstancer.GPUInstancerPrefabPrototype,GPUInstancer.GPUInstancerPrefabManager>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mDF898CD74A1FCFBBCE0B0B5B3A55D0E1C2D011FB (Dictionary_2_tA2CB848B96EBFA538BA5F6C57B7D6AC5B823010D* __this, GPUInstancerPrefabPrototype_tD5DFA3B45330511A1FC44F9C93293EC01FEDC818* ___key0, GPUInstancerPrefabManager_t9BA464F68DAFB51AC82C0B30C1BEF0F84B0DEE40* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA2CB848B96EBFA538BA5F6C57B7D6AC5B823010D*, GPUInstancerPrefabPrototype_tD5DFA3B45330511A1FC44F9C93293EC01FEDC818*, GPUInstancerPrefabManager_t9BA464F68DAFB51AC82C0B30C1BEF0F84B0DEE40*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<GPUInstancer.GPUInstancerPrototype>::Contains(T)
inline bool List_1_Contains_mA18E31FFF2BF42CB69AF0FF27338C0BCD2C8172C (List_1_tC51EA1C5181B70F9303231807AEAD89EF6C5CC0D* __this, GPUInstancerPrototype_t8CC477296831E484428798CB96A46F21371C35CF* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tC51EA1C5181B70F9303231807AEAD89EF6C5CC0D*, GPUInstancerPrototype_t8CC477296831E484428798CB96A46F21371C35CF*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Terrain>()
inline Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* Component_GetComponent_TisTerrain_t7F309492F67238DBFBC4566F47385B2A665CF667_m91BA1801D3A897D0F2234DFA7DC7359C6866064A (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Object::FindObjectOfType<GPUInstancer.GPUInstancerTreeManager>()
inline GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00* Object_FindObjectOfType_TisGPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00_m26D088EE0DD4881C355AF6B68E71B21B4CA8788F (const RuntimeMethod* method)
{
	return ((  GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Terrain::set_treeDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Terrain_set_treeDistance_m8836D1691B1C7BDC76725A624601E6543806C14C (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void GPUInstancer.GPUInstancerTerrainManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUInstancerTerrainManager_Awake_m2940059F1AA7D5F49CD1724B5C56A0800991C3FA (GPUInstancerTerrainManager_t5D14A71A3AF1435E15D974025C65071A3D39CD90* __this, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<UnityEngine.ComputeShader>(System.String)
inline ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* Resources_Load_TisComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8_mCB69A2628DBDDB3B597662E8BDF187516294F247 (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_m8B40A11CE62A4E445DADC28C81BD73922A4D4B65_gshared)(___path0, method);
}
// System.Void GPUInstancer.GPUInstancerTerrainManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUInstancerTerrainManager_Update_m50A3B999DD4405062F763E7C2719B5DFE6567D4F (GPUInstancerTerrainManager_t5D14A71A3AF1435E15D974025C65071A3D39CD90* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator GPUInstancer.GPUInstancerTreeManager::ReplaceUnityTrees()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GPUInstancerTreeManager_ReplaceUnityTrees_mBEA232C757C9FC05085F7B99F4FA102B478BDD21 (GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void GPUInstancer.GPUInstancerManager::ClearInstancingData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUInstancerManager_ClearInstancingData_mA91200FEF497C38E3482E35A0B0CED496825047F (GPUInstancerManager_tBC70675B38834A3B91ED3392CCE3603FB3D44A8E* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Terrain>::GetEnumerator()
inline Enumerator_tE55827E469E8564863DA766418F79DE48A82AAA2 List_1_GetEnumerator_m46772991FE7070A89F3C652D43B7DECEC1F7DE29 (List_1_tD2AD001A66810CB968E98D9E635A799408554017* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tE55827E469E8564863DA766418F79DE48A82AAA2 (*) (List_1_tD2AD001A66810CB968E98D9E635A799408554017*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Terrain>::Dispose()
inline void Enumerator_Dispose_m14F34EC787A601A0A73CFF7F211D7D062C3D7946 (Enumerator_tE55827E469E8564863DA766418F79DE48A82AAA2* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE55827E469E8564863DA766418F79DE48A82AAA2*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Terrain>::get_Current()
inline Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* Enumerator_get_Current_mD34AA709207C6A86D64005E396AB58AC514D3BF4_inline (Enumerator_tE55827E469E8564863DA766418F79DE48A82AAA2* __this, const RuntimeMethod* method)
{
	return ((  Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* (*) (Enumerator_tE55827E469E8564863DA766418F79DE48A82AAA2*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Single UnityEngine.Terrain::get_treeDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Terrain_get_treeDistance_mE5394C9AAD12F1BD5474B51615D2E3906404F77A (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Terrain>::MoveNext()
inline bool Enumerator_MoveNext_m484EE5C5D622FA0AA4863985628C97BD6EE145B7 (Enumerator_tE55827E469E8564863DA766418F79DE48A82AAA2* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tE55827E469E8564863DA766418F79DE48A82AAA2*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void GPUInstancer.GPUInstancerManager::GeneratePrototypes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUInstancerManager_GeneratePrototypes_m4530045E859E9ABAF2EA5EDBED12DFCCF9F54EA7 (GPUInstancerManager_tBC70675B38834A3B91ED3392CCE3603FB3D44A8E* __this, bool ___forceNew0, const RuntimeMethod* method) ;
// UnityEngine.Terrain GPUInstancer.GPUInstancerTerrainManager::get_terrain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* GPUInstancerTerrainManager_get_terrain_mFE98391DD97410787405C4632E1A7E3B2BBCF4BC (GPUInstancerTerrainManager_t5D14A71A3AF1435E15D974025C65071A3D39CD90* __this, const RuntimeMethod* method) ;
// UnityEngine.TerrainData UnityEngine.Terrain::get_terrainData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.TreePrototype[] UnityEngine.TerrainData::get_treePrototypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreePrototypeU5BU5D_tB0255CA167F991C2C9BA3BA55DF7417168D93B7A* TerrainData_get_treePrototypes_m0A43789B50E554DACB5DF88C86DA23B89DB33EEB (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) ;
// System.Void GPUInstancer.GPUInstancerUtility::SetTreeInstancePrototypes(UnityEngine.GameObject,System.Collections.Generic.List`1<GPUInstancer.GPUInstancerPrototype>,UnityEngine.TreePrototype[],GPUInstancer.GPUInstancerTerrainSettings,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUInstancerUtility_SetTreeInstancePrototypes_m6D421B9116AD688BF3A7A1240632E64747F26332 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, List_1_tC51EA1C5181B70F9303231807AEAD89EF6C5CC0D* ___treeIntancePrototypes1, TreePrototypeU5BU5D_tB0255CA167F991C2C9BA3BA55DF7417168D93B7A* ___treePrototypes2, GPUInstancerTerrainSettings_t2CCB96E712A6B4310113C5A7555D1DD6AA761356* ___terrainSettings3, bool ___forceNew4, const RuntimeMethod* method) ;
// System.Void GPUInstancer.GPUInstancerManager::InitializeRuntimeDataAndBuffers(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUInstancerManager_InitializeRuntimeDataAndBuffers_m4324A20B460F4B37D498EA94032D5EC6854555F1 (GPUInstancerManager_tBC70675B38834A3B91ED3392CCE3603FB3D44A8E* __this, bool ___forceNew0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<GPUInstancer.GPUInstancerPrototype>::get_Count()
inline int32_t List_1_get_Count_mCEA8EA9B52DAA0043B1D1AC4C592A47190144BFD_inline (List_1_tC51EA1C5181B70F9303231807AEAD89EF6C5CC0D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tC51EA1C5181B70F9303231807AEAD89EF6C5CC0D*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void GPUInstancer.GPUInstancerUtility::AddTreeInstanceRuntimeDataToList(System.Collections.Generic.List`1<GPUInstancer.GPUInstancerRuntimeData>,System.Collections.Generic.List`1<GPUInstancer.GPUInstancerPrototype>,GPUInstancer.GPUInstancerTerrainSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUInstancerUtility_AddTreeInstanceRuntimeDataToList_m8A04AB0464F03ABCEC69998809963798C29E8909 (List_1_t8FDAD79D15A0E06F4397907AE6788258276E8978* ___runtimeDataList0, List_1_tC51EA1C5181B70F9303231807AEAD89EF6C5CC0D* ___treePrototypes1, GPUInstancerTerrainSettings_t2CCB96E712A6B4310113C5A7555D1DD6AA761356* ___terrainSettings2, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<GPUInstancer.GPUInstancerPrototype>::IndexOf(T)
inline int32_t List_1_IndexOf_m82CAFF5E3E3F737EBD566F7141AF68642507C3EE (List_1_tC51EA1C5181B70F9303231807AEAD89EF6C5CC0D* __this, GPUInstancerPrototype_t8CC477296831E484428798CB96A46F21371C35CF* ___item0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tC51EA1C5181B70F9303231807AEAD89EF6C5CC0D*, GPUInstancerPrototype_t8CC477296831E484428798CB96A46F21371C35CF*, const RuntimeMethod*))List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.TreePrototype>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_m949FC18118317FF19F8F52941A28D9E771B6E1B5 (List_1_t3A63FEBEE36CEFD162E0AA45228A1D2BE509CC8B* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3A63FEBEE36CEFD162E0AA45228A1D2BE509CC8B*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared)(__this, ___collection0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.TreeInstance>::.ctor()
inline void List_1__ctor_m15D691BE05DD1AA2E0BA3FF42048E48A19571484 (List_1_t7CDBDADC2DD3F6FE5B92D1A5EE6F8B003233585A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7CDBDADC2DD3F6FE5B92D1A5EE6F8B003233585A*, const RuntimeMethod*))List_1__ctor_m15D691BE05DD1AA2E0BA3FF42048E48A19571484_gshared)(__this, method);
}
// UnityEngine.TreeInstance[] UnityEngine.TerrainData::get_treeInstances()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429* TerrainData_get_treeInstances_mDAB68FD1F3677BD5CB122EA943493D5FC94B2147 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.TreeInstance>::Add(T)
inline void List_1_Add_mAC6D75EF36303133FA8504C2F1312008E4EA3C10_inline (List_1_t7CDBDADC2DD3F6FE5B92D1A5EE6F8B003233585A* __this, TreeInstance_t382B018173ED020660D262061EA9424682614F50 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7CDBDADC2DD3F6FE5B92D1A5EE6F8B003233585A*, TreeInstance_t382B018173ED020660D262061EA9424682614F50, const RuntimeMethod*))List_1_Add_mAC6D75EF36303133FA8504C2F1312008E4EA3C10_gshared_inline)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.TreePrototype>::get_Count()
inline int32_t List_1_get_Count_mE78944B77F1FDA08CD652C58BF9EF9C8DCB1FA1D_inline (List_1_t3A63FEBEE36CEFD162E0AA45228A1D2BE509CC8B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3A63FEBEE36CEFD162E0AA45228A1D2BE509CC8B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.TreePrototype>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mE91259CC4BD7E6E02DCC8B2E13A8C2C0531F9CA6 (List_1_t3A63FEBEE36CEFD162E0AA45228A1D2BE509CC8B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3A63FEBEE36CEFD162E0AA45228A1D2BE509CC8B*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// T[] System.Collections.Generic.List`1<UnityEngine.TreeInstance>::ToArray()
inline TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429* List_1_ToArray_m2E3ECDF734E7FA10812DF2D499C4317EB881C405 (List_1_t7CDBDADC2DD3F6FE5B92D1A5EE6F8B003233585A* __this, const RuntimeMethod* method)
{
	return ((  TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429* (*) (List_1_t7CDBDADC2DD3F6FE5B92D1A5EE6F8B003233585A*, const RuntimeMethod*))List_1_ToArray_m2E3ECDF734E7FA10812DF2D499C4317EB881C405_gshared)(__this, method);
}
// System.Void UnityEngine.TerrainData::set_treeInstances(UnityEngine.TreeInstance[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_set_treeInstances_m4B62FA8A516D3839829AA50209897EDB7647F65D (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429* ___value0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<UnityEngine.TreePrototype>::ToArray()
inline TreePrototypeU5BU5D_tB0255CA167F991C2C9BA3BA55DF7417168D93B7A* List_1_ToArray_m3BBEEFAD7758746DA602FBB5D7EF3DC9420D909D (List_1_t3A63FEBEE36CEFD162E0AA45228A1D2BE509CC8B* __this, const RuntimeMethod* method)
{
	return ((  TreePrototypeU5BU5D_tB0255CA167F991C2C9BA3BA55DF7417168D93B7A* (*) (List_1_t3A63FEBEE36CEFD162E0AA45228A1D2BE509CC8B*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Void UnityEngine.TerrainData::set_treePrototypes(UnityEngine.TreePrototype[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_set_treePrototypes_m5F309E7FFEB234DA8450C4CBD43EB7045C33BCAA (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, TreePrototypeU5BU5D_tB0255CA167F991C2C9BA3BA55DF7417168D93B7A* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainData::RefreshPrototypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_RefreshPrototypes_mCB97A38BE96FAC08C2F2E8C1F38E88C7450CADBC (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) ;
// System.Void GPUInstancer.GPUInstancerManager::DeletePrototype(GPUInstancer.GPUInstancerPrototype,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUInstancerManager_DeletePrototype_mF09A587A8C06174A44906031AA251DE2BE24D919 (GPUInstancerManager_tBC70675B38834A3B91ED3392CCE3603FB3D44A8E* __this, GPUInstancerPrototype_t8CC477296831E484428798CB96A46F21371C35CF* ___prototype0, bool ___removeSO1, const RuntimeMethod* method) ;
// System.Void GPUInstancer.GPUInstancerTreeManager/<ReplaceUnityTrees>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReplaceUnityTreesU3Ed__9__ctor_m42D69E632F93268BF4D9A316C4D913FA6D24758D (U3CReplaceUnityTreesU3Ed__9_t549FD0ED894B9B6202161F931067A0D440ABD370* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void GPUInstancer.GPUInstancerTerrainManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUInstancerTerrainManager__ctor_m792E26DA2D8FCDB17CD507D4DA675512444DF683 (GPUInstancerTerrainManager_t5D14A71A3AF1435E15D974025C65071A3D39CD90* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_mB05287DC52FC87A756AB80E837E1EC22FEEB3937_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::.ctor()
inline void List_1__ctor_m7A5FFB71CC0B9A11A8FF0FC535B7D700EF76ED20 (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*, const RuntimeMethod*))List_1__ctor_m7A5FFB71CC0B9A11A8FF0FC535B7D700EF76ED20_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m385F8F46AD9C455E80053F42571A7CE321915C0A (RuntimeObject* ___message0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.TerrainData::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TerrainData_get_size_mCD3977F344B9DEBFF61DD537D03FEB9473838DA5 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Terrain::GetPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Terrain_GetPosition_m5A1020F22CA4B1818E69A3B9687668AFAB2C43F5 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::Add(T)
inline void List_1_Add_m65F0731FF2C839C25530522F74BE029D34851222_inline (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, const RuntimeMethod*))List_1_Add_m65F0731FF2C839C25530522F74BE029D34851222_gshared_inline)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector4>::get_Count()
inline int32_t List_1_get_Count_m970BE5CCB1F05BAF033736206A0C3142930127B0_inline (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*, const RuntimeMethod*))List_1_get_Count_m970BE5CCB1F05BAF033736206A0C3142930127B0_gshared_inline)(__this, method);
}
// System.Void UnityEngine.ComputeBuffer::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeBuffer__ctor_mE40DE5EF5ADAC29B6B4DECBD1EE33E8526202617 (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* __this, int32_t ___count0, int32_t ___stride1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ComputeBuffer::SetData<UnityEngine.Vector4>(System.Collections.Generic.List`1<T>)
inline void ComputeBuffer_SetData_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mCDBB37084243E107C87E4A41FE8C2DA2FDA49C15 (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* __this, List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___data0, const RuntimeMethod* method)
{
	((  void (*) (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*, List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*, const RuntimeMethod*))ComputeBuffer_SetData_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mCDBB37084243E107C87E4A41FE8C2DA2FDA49C15_gshared)(__this, ___data0, method);
}
// System.Void UnityEngine.ComputeBuffer::SetData(System.Array)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeBuffer_SetData_m9F845E6B347CE028FA9A987D740FC642D828013A (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* __this, RuntimeArray* ___data0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<GPUInstancer.GPUInstancerRuntimeData>::get_Item(System.Int32)
inline GPUInstancerRuntimeData_tAC3B9C6BB85D573FA2A3F5A8378873C2C131057C* List_1_get_Item_mA33F1471D122E315DDF532464CAC03912D0B1B45 (List_1_t8FDAD79D15A0E06F4397907AE6788258276E8978* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GPUInstancerRuntimeData_tAC3B9C6BB85D573FA2A3F5A8378873C2C131057C* (*) (List_1_t8FDAD79D15A0E06F4397907AE6788258276E8978*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void GPUInstancer.GPUInstancerUtility::ReleaseInstanceBuffers<GPUInstancer.GPUInstancerRuntimeData>(T)
inline void GPUInstancerUtility_ReleaseInstanceBuffers_TisGPUInstancerRuntimeData_tAC3B9C6BB85D573FA2A3F5A8378873C2C131057C_m802800F338547CF5941905064A0558F75BD809AA (GPUInstancerRuntimeData_tAC3B9C6BB85D573FA2A3F5A8378873C2C131057C* ___runtimeData0, const RuntimeMethod* method)
{
	((  void (*) (GPUInstancerRuntimeData_tAC3B9C6BB85D573FA2A3F5A8378873C2C131057C*, const RuntimeMethod*))GPUInstancerUtility_ReleaseInstanceBuffers_TisRuntimeObject_m1EEC8FAA438C714B89F943094961E5EEA80E375C_gshared)(___runtimeData0, method);
}
// System.Void UnityEngine.ComputeBuffer::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeBuffer_Release_mF1F157C929A0A5B2FDCD703A286EE09723450B72 (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ComputeShader::SetBuffer(System.Int32,System.Int32,UnityEngine.ComputeBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeShader_SetBuffer_m82184DFEA1DFC8788DBF2A97BAE1ACA422024FBF (ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* __this, int32_t ___kernelIndex0, int32_t ___nameID1, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___buffer2, const RuntimeMethod* method) ;
// System.Void UnityEngine.ComputeShader::SetInt(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeShader_SetInt_m5BED46962875818A120FA6D2E4FD820B62BCE8AD (ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* __this, int32_t ___nameID0, int32_t ___val1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ComputeShader::SetBool(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeShader_SetBool_mACF8675E1A5531A69C8D5A2C2A76FC1E006CB01E (ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* __this, int32_t ___nameID0, bool ___val1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::CeilToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_m04999E3DEB696135EFD620A30F51503D700C1998_inline (float ___f0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ComputeShader::Dispatch(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeShader_Dispatch_mEED7BA68C28B1B39E75208D0D4D9915D41985B0A (ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* __this, int32_t ___kernelIndex0, int32_t ___threadGroupsX1, int32_t ___threadGroupsY2, int32_t ___threadGroupsZ3, const RuntimeMethod* method) ;
// System.Void GPUInstancer.GPUInstancerUtility::InitializeGPUBuffer<GPUInstancer.GPUInstancerRuntimeData>(T)
inline void GPUInstancerUtility_InitializeGPUBuffer_TisGPUInstancerRuntimeData_tAC3B9C6BB85D573FA2A3F5A8378873C2C131057C_mF77821C3A25E7869622BF59DD1A2A153C0420E56 (GPUInstancerRuntimeData_tAC3B9C6BB85D573FA2A3F5A8378873C2C131057C* ___runtimeData0, const RuntimeMethod* method)
{
	((  void (*) (GPUInstancerRuntimeData_tAC3B9C6BB85D573FA2A3F5A8378873C2C131057C*, const RuntimeMethod*))GPUInstancerUtility_InitializeGPUBuffer_TisRuntimeObject_m7AB072EB50A383CB36118C92170270C58C379EF1_gshared)(___runtimeData0, method);
}
// System.Int32 System.Collections.Generic.List`1<GPUInstancer.GPUInstancerRuntimeData>::get_Count()
inline int32_t List_1_get_Count_m4EB3213CDA6D394BA00CA239D95B2ABCBFEDEDF2_inline (List_1_t8FDAD79D15A0E06F4397907AE6788258276E8978* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8FDAD79D15A0E06F4397907AE6788258276E8978*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void GPUInstancer.GPUInstancerUtility::ReleaseInstanceBuffers<GPUInstancer.GPUInstancerRuntimeData>(System.Collections.Generic.List`1<T>)
inline void GPUInstancerUtility_ReleaseInstanceBuffers_TisGPUInstancerRuntimeData_tAC3B9C6BB85D573FA2A3F5A8378873C2C131057C_mD21EE068398C494F77D5659BCD5BB50B5913D598 (List_1_t8FDAD79D15A0E06F4397907AE6788258276E8978* ___runtimeDataList0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8FDAD79D15A0E06F4397907AE6788258276E8978*, const RuntimeMethod*))GPUInstancerUtility_ReleaseInstanceBuffers_TisRuntimeObject_mD8E207C001D42038C4D30A713B21229A5C07EB28_gshared)(___runtimeDataList0, method);
}
// System.Void GPUInstancer.GPUInstancerUtility::TriggerEvent(GPUInstancer.GPUInstancerEventType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUInstancerUtility_TriggerEvent_m4245FCDBE2BF11942829A630067052A8488D839C (int32_t ___eventType0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GPUInstancer.GPUInstancerPrefabManager/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m343AD2E9464CA9A5E12B3A6DFABD09BD37CFDC9D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t79188BB870B400A21E63BE62EACAA455E5726EDF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t79188BB870B400A21E63BE62EACAA455E5726EDF* L_0 = (U3CU3Ec_t79188BB870B400A21E63BE62EACAA455E5726EDF*)il2cpp_codegen_object_new(U3CU3Ec_t79188BB870B400A21E63BE62EACAA455E5726EDF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m738ABA6D139BC46FF33CBFAA1C86906E6E9BB2C1(L_0, NULL);
		((U3CU3Ec_t79188BB870B400A21E63BE62EACAA455E5726EDF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t79188BB870B400A21E63BE62EACAA455E5726EDF_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t79188BB870B400A21E63BE62EACAA455E5726EDF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t79188BB870B400A21E63BE62EACAA455E5726EDF_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void GPUInstancer.GPUInstancerPrefabManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m738ABA6D139BC46FF33CBFAA1C86906E6E9BB2C1 (U3CU3Ec_t79188BB870B400A21E63BE62EACAA455E5726EDF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean GPUInstancer.GPUInstancerPrefabManager/<>c::<RemovePrefabInstance>b__27_0(GPUInstancer.GPUInstancerPrefab)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CRemovePrefabInstanceU3Eb__27_0_mE937D82D9C0F4695F8F44984A6A0E442BC37AAB3 (U3CU3Ec_t79188BB870B400A21E63BE62EACAA455E5726EDF* __this, GPUInstancerPrefab_t7597694950D9BB7FBE8411A0A11CA1ADFD59C43A* ___pi0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// prefabInstanceList.RemoveAll(pi => pi == null);
		GPUInstancerPrefab_t7597694950D9BB7FBE8411A0A11CA1ADFD59C43A* L_0 = ___pi0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return L_1;
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
// System.Void GPUInstancer.RegisteredPrefabsData::.ctor(GPUInstancer.GPUInstancerPrefabPrototype)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegisteredPrefabsData__ctor_mF2606B1AF107B9A8823C73AA79B0146B637B5EAB (RegisteredPrefabsData_t4100EAEACC86FFD9D00154812C0DF9B40A54A9A2* __this, GPUInstancerPrefabPrototype_tD5DFA3B45330511A1FC44F9C93293EC01FEDC818* ___prefabPrototype0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m471D74C9C79EBAA52041EC2BB0B66D962C9F91D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6648D68F433CA3C3042A432FA55509EF0DAAFBFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public RegisteredPrefabsData(GPUInstancerPrefabPrototype prefabPrototype)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.prefabPrototype = prefabPrototype;
		GPUInstancerPrefabPrototype_tD5DFA3B45330511A1FC44F9C93293EC01FEDC818* L_0 = ___prefabPrototype0;
		__this->___prefabPrototype_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___prefabPrototype_0), (void*)L_0);
		// registeredPrefabs = new List<GPUInstancerPrefab>();
		List_1_t6648D68F433CA3C3042A432FA55509EF0DAAFBFC* L_1 = (List_1_t6648D68F433CA3C3042A432FA55509EF0DAAFBFC*)il2cpp_codegen_object_new(List_1_t6648D68F433CA3C3042A432FA55509EF0DAAFBFC_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m471D74C9C79EBAA52041EC2BB0B66D962C9F91D6(L_1, List_1__ctor_m471D74C9C79EBAA52041EC2BB0B66D962C9F91D6_RuntimeMethod_var);
		__this->___registeredPrefabs_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___registeredPrefabs_1), (void*)L_1);
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
// System.Void GPUInstancer.GPUInstancerPrefabRuntimeHandler::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUInstancerPrefabRuntimeHandler_Awake_mBAFC6D310E981DDF6B1D0D71834C931B19D4132E (GPUInstancerPrefabRuntimeHandler_t4A36ABA8BFC07F939ABA643034FAB8E6D982F18A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisGPUInstancerPrefab_t7597694950D9BB7FBE8411A0A11CA1ADFD59C43A_m1AF2FEC9FC79CA536B85790F076EB7E327827C4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m0451468A20B55624482A267CFA3E6A467F201708_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mA03E27FDC6EE2F2DB156C8C3AD7EEC2381FC2BC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m7AD8CD258B2C058B76EA9351BDEA2D1601F4650F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA2CB848B96EBFA538BA5F6C57B7D6AC5B823010D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7991A4D8D43E9F9C7C0DA986DF3B4CB0FD31C41C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mD7701F92B473B07880859353BE2A8B469C161087_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mFB99CEC61D38DFE0217DE0D134D6A7328B04AFD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUInstancerPrefabPrototype_tD5DFA3B45330511A1FC44F9C93293EC01FEDC818_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUInstancerPrefabRuntimeHandler_t4A36ABA8BFC07F939ABA643034FAB8E6D982F18A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m874D417FA6CC11A80D7FF9C9E30203F7A6E306A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisGPUInstancerPrefabManager_t9BA464F68DAFB51AC82C0B30C1BEF0F84B0DEE40_m27D11AF343801676AE91777A07F7E2054A7E1FCA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GPUInstancerPrefabManagerU5BU5D_tC361243D8434EF4292EDD10E7752D828EF40DE5A* V_0 = NULL;
	GPUInstancerPrefabManagerU5BU5D_tC361243D8434EF4292EDD10E7752D828EF40DE5A* V_1 = NULL;
	int32_t V_2 = 0;
	GPUInstancerPrefabManager_t9BA464F68DAFB51AC82C0B30C1BEF0F84B0DEE40* V_3 = NULL;
	Enumerator_tCB115E1B66E6D645F629474906EB24B2039FDE89 V_4;
	memset((&V_4), 0, sizeof(V_4));
	GPUInstancerPrefabPrototype_tD5DFA3B45330511A1FC44F9C93293EC01FEDC818* V_5 = NULL;
	{
		// gpuiPrefab = GetComponent<GPUInstancerPrefab>();
		GPUInstancerPrefab_t7597694950D9BB7FBE8411A0A11CA1ADFD59C43A* L_0;
		L_0 = Component_GetComponent_TisGPUInstancerPrefab_t7597694950D9BB7FBE8411A0A11CA1ADFD59C43A_m1AF2FEC9FC79CA536B85790F076EB7E327827C4A(__this, Component_GetComponent_TisGPUInstancerPrefab_t7597694950D9BB7FBE8411A0A11CA1ADFD59C43A_m1AF2FEC9FC79CA536B85790F076EB7E327827C4A_RuntimeMethod_var);
		__this->___gpuiPrefab_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gpuiPrefab_4), (void*)L_0);
		// if (_managerDictionary == null)
		Dictionary_2_tA2CB848B96EBFA538BA5F6C57B7D6AC5B823010D* L_1 = ((GPUInstancerPrefabRuntimeHandler_t4A36ABA8BFC07F939ABA643034FAB8E6D982F18A_StaticFields*)il2cpp_codegen_static_fields_for(GPUInstancerPrefabRuntimeHandler_t4A36ABA8BFC07F939ABA643034FAB8E6D982F18A_il2cpp_TypeInfo_var))->____managerDictionary_6;
		if (L_1)
		{
			goto IL_008f;
		}
	}
	{
		// _managerDictionary = new Dictionary<GPUInstancerPrefabPrototype, GPUInstancerPrefabManager>();
		Dictionary_2_tA2CB848B96EBFA538BA5F6C57B7D6AC5B823010D* L_2 = (Dictionary_2_tA2CB848B96EBFA538BA5F6C57B7D6AC5B823010D*)il2cpp_codegen_object_new(Dictionary_2_tA2CB848B96EBFA538BA5F6C57B7D6AC5B823010D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m7AD8CD258B2C058B76EA9351BDEA2D1601F4650F(L_2, Dictionary_2__ctor_m7AD8CD258B2C058B76EA9351BDEA2D1601F4650F_RuntimeMethod_var);
		((GPUInstancerPrefabRuntimeHandler_t4A36ABA8BFC07F939ABA643034FAB8E6D982F18A_StaticFields*)il2cpp_codegen_static_fields_for(GPUInstancerPrefabRuntimeHandler_t4A36ABA8BFC07F939ABA643034FAB8E6D982F18A_il2cpp_TypeInfo_var))->____managerDictionary_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((GPUInstancerPrefabRuntimeHandler_t4A36ABA8BFC07F939ABA643034FAB8E6D982F18A_StaticFields*)il2cpp_codegen_static_fields_for(GPUInstancerPrefabRuntimeHandler_t4A36ABA8BFC07F939ABA643034FAB8E6D982F18A_il2cpp_TypeInfo_var))->____managerDictionary_6), (void*)L_2);
		// GPUInstancerPrefabManager[] prefabManagers = FindObjectsOfType<GPUInstancerPrefabManager>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GPUInstancerPrefabManagerU5BU5D_tC361243D8434EF4292EDD10E7752D828EF40DE5A* L_3;
		L_3 = Object_FindObjectsOfType_TisGPUInstancerPrefabManager_t9BA464F68DAFB51AC82C0B30C1BEF0F84B0DEE40_m27D11AF343801676AE91777A07F7E2054A7E1FCA(Object_FindObjectsOfType_TisGPUInstancerPrefabManager_t9BA464F68DAFB51AC82C0B30C1BEF0F84B0DEE40_m27D11AF343801676AE91777A07F7E2054A7E1FCA_RuntimeMethod_var);
		V_0 = L_3;
		// if (prefabManagers != null && prefabManagers.Length > 0)
		GPUInstancerPrefabManagerU5BU5D_tC361243D8434EF4292EDD10E7752D828EF40DE5A* L_4 = V_0;
		if (!L_4)
		{
			goto IL_008f;
		}
	}
	{
		GPUInstancerPrefabManagerU5BU5D_tC361243D8434EF4292EDD10E7752D828EF40DE5A* L_5 = V_0;
		NullCheck(L_5);
		if (!(((RuntimeArray*)L_5)->max_length))
		{
			goto IL_008f;
		}
	}
	{
		// foreach (GPUInstancerPrefabManager pm in prefabManagers)
		GPUInstancerPrefabManagerU5BU5D_tC361243D8434EF4292EDD10E7752D828EF40DE5A* L_6 = V_0;
		V_1 = L_6;
		V_2 = 0;
		goto IL_0089;
	}

IL_0030:
	{
		// foreach (GPUInstancerPrefabManager pm in prefabManagers)
		GPUInstancerPrefabManagerU5BU5D_tC361243D8434EF4292EDD10E7752D828EF40DE5A* L_7 = V_1;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		GPUInstancerPrefabManager_t9BA464F68DAFB51AC82C0B30C1BEF0F84B0DEE40* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_3 = L_10;
		// foreach (GPUInstancerPrefabPrototype prototype in pm.prototypeList)
		GPUInstancerPrefabManager_t9BA464F68DAFB51AC82C0B30C1BEF0F84B0DEE40* L_11 = V_3;
		NullCheck(L_11);
		List_1_tC51EA1C5181B70F9303231807AEAD89EF6C5CC0D* L_12 = ((GPUInstancerManager_tBC70675B38834A3B91ED3392CCE3603FB3D44A8E*)L_11)->___prototypeList_4;
		NullCheck(L_12);
		Enumerator_tCB115E1B66E6D645F629474906EB24B2039FDE89 L_13;
		L_13 = List_1_GetEnumerator_m874D417FA6CC11A80D7FF9C9E30203F7A6E306A1(L_12, List_1_GetEnumerator_m874D417FA6CC11A80D7FF9C9E30203F7A6E306A1_RuntimeMethod_var);
		V_4 = L_13;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0077:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m7991A4D8D43E9F9C7C0DA986DF3B4CB0FD31C41C((&V_4), Enumerator_Dispose_m7991A4D8D43E9F9C7C0DA986DF3B4CB0FD31C41C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_006c_1;
			}

IL_0043_1:
			{
				// foreach (GPUInstancerPrefabPrototype prototype in pm.prototypeList)
				GPUInstancerPrototype_t8CC477296831E484428798CB96A46F21371C35CF* L_14;
				L_14 = Enumerator_get_Current_mFB99CEC61D38DFE0217DE0D134D6A7328B04AFD3_inline((&V_4), Enumerator_get_Current_mFB99CEC61D38DFE0217DE0D134D6A7328B04AFD3_RuntimeMethod_var);
				V_5 = ((GPUInstancerPrefabPrototype_tD5DFA3B45330511A1FC44F9C93293EC01FEDC818*)CastclassClass((RuntimeObject*)L_14, GPUInstancerPrefabPrototype_tD5DFA3B45330511A1FC44F9C93293EC01FEDC818_il2cpp_TypeInfo_var));
				// if (!_managerDictionary.ContainsKey(prototype))
				Dictionary_2_tA2CB848B96EBFA538BA5F6C57B7D6AC5B823010D* L_15 = ((GPUInstancerPrefabRuntimeHandler_t4A36ABA8BFC07F939ABA643034FAB8E6D982F18A_StaticFields*)il2cpp_codegen_static_fields_for(GPUInstancerPrefabRuntimeHandler_t4A36ABA8BFC07F939ABA643034FAB8E6D982F18A_il2cpp_TypeInfo_var))->____managerDictionary_6;
				GPUInstancerPrefabPrototype_tD5DFA3B45330511A1FC44F9C93293EC01FEDC818* L_16 = V_5;
				NullCheck(L_15);
				bool L_17;
				L_17 = Dictionary_2_ContainsKey_mA03E27FDC6EE2F2DB156C8C3AD7EEC2381FC2BC9(L_15, L_16, Dictionary_2_ContainsKey_mA03E27FDC6EE2F2DB156C8C3AD7EEC2381FC2BC9_RuntimeMethod_var);
				if (L_17)
				{
					goto IL_006c_1;
				}
			}
			{
				// _managerDictionary.Add(prototype, pm);
				Dictionary_2_tA2CB848B96EBFA538BA5F6C57B7D6AC5B823010D* L_18 = ((GPUInstancerPrefabRuntimeHandler_t4A36ABA8BFC07F939ABA643034FAB8E6D982F18A_StaticFields*)il2cpp_codegen_static_fields_for(GPUInstancerPrefabRuntimeHandler_t4A36ABA8BFC07F939ABA643034FAB8E6D982F18A_il2cpp_TypeInfo_var))->____managerDictionary_6;
				GPUInstancerPrefabPrototype_tD5DFA3B45330511A1FC44F9C93293EC01FEDC818* L_19 = V_5;
				GPUInstancerPrefabManager_t9BA464F68DAFB51AC82C0B30C1BEF0F84B0DEE40* L_20 = V_3;
				NullCheck(L_18);
				Dictionary_2_Add_m0451468A20B55624482A267CFA3E6A467F201708(L_18, L_19, L_20, Dictionary_2_Add_m0451468A20B55624482A267CFA3E6A467F201708_RuntimeMethod_var);
			}

IL_006c_1:
			{
				// foreach (GPUInstancerPrefabPrototype prototype in pm.prototypeList)
				bool L_21;
				L_21 = Enumerator_MoveNext_mD7701F92B473B07880859353BE2A8B469C161087((&V_4), Enumerator_MoveNext_mD7701F92B473B07880859353BE2A8B469C161087_RuntimeMethod_var);
				if (L_21)
				{
					goto IL_0043_1;
				}
			}
			{
				goto IL_0085;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0085:
	{
		int32_t L_22 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0089:
	{
		// foreach (GPUInstancerPrefabManager pm in prefabManagers)
		int32_t L_23 = V_2;
		GPUInstancerPrefabManagerU5BU5D_tC361243D8434EF4292EDD10E7752D828EF40DE5A* L_24 = V_1;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))
		{
			goto IL_0030;
		}
	}

IL_008f:
	{
		// }
		return;
	}
}
// System.Void GPUInstancer.GPUInstancerPrefabRuntimeHandler::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUInstancerPrefabRuntimeHandler_OnEnable_m4EADEF89DC207D728F7F5F51FB98D0B6276CFE55 (GPUInstancerPrefabRuntimeHandler_t4A36ABA8BFC07F939ABA643034FAB8E6D982F18A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (gpuiPrefab.state == PrefabInstancingState.None)
		GPUInstancerPrefab_t7597694950D9BB7FBE8411A0A11CA1ADFD59C43A* L_0 = __this->___gpuiPrefab_4;
		NullCheck(L_0);
		int32_t L_1 = L_0->___state_6;
		if (L_1)
		{
			goto IL_0060;
		}
	}
	{
		// if (_prefabManager == null)
		GPUInstancerPrefabManager_t9BA464F68DAFB51AC82C0B30C1BEF0F84B0DEE40* L_2 = __this->____prefabManager_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// _prefabManager = GetPrefabManager();
		GPUInstancerPrefabManager_t9BA464F68DAFB51AC82C0B30C1BEF0F84B0DEE40* L_4;
		L_4 = GPUInstancerPrefabRuntimeHandler_GetPrefabManager_mF62D758DDAD4D2A7638EE0A8765601752AF15E65(__this, NULL);
		__this->____prefabManager_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____prefabManager_5), (void*)L_4);
	}

IL_0027:
	{
		// if (_prefabManager != null)
		GPUInstancerPrefabManager_t9BA464F68DAFB51AC82C0B30C1BEF0F84B0DEE40* L_5 = __this->____prefabManager_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0060;
		}
	}
	{
		// if (!_prefabManager.isInitialized)
		GPUInstancerPrefabManager_t9BA464F68DAFB51AC82C0B30C1BEF0F84B0DEE40* L_7 = __this->____prefabManager_5;
		NullCheck(L_7);
		bool L_8 = ((GPUInstancerManager_tBC70675B38834A3B91ED3392CCE3603FB3D44A8E*)L_7)->___isInitialized_41;
		if (L_8)
		{
			goto IL_004e;
		}
	}
	{
		// _prefabManager.InitializeRuntimeDataAndBuffers();
		GPUInstancerPrefabManager_t9BA464F68DAFB51AC82C0B30C1BEF0F84B0DEE40* L_9 = __this->____prefabManager_5;
		NullCheck(L_9);
		VirtualActionInvoker1< bool >::Invoke(14 /* System.Void GPUInstancer.GPUInstancerManager::InitializeRuntimeDataAndBuffers(System.Boolean) */, L_9, (bool)1);
	}

IL_004e:
	{
		// _prefabManager.AddPrefabInstance(gpuiPrefab, true);
		GPUInstancerPrefabManager_t9BA464F68DAFB51AC82C0B30C1BEF0F84B0DEE40* L_10 = __this->____prefabManager_5;
		GPUInstancerPrefab_t7597694950D9BB7FBE8411A0A11CA1ADFD59C43A* L_11 = __this->___gpuiPrefab_4;
		NullCheck(L_10);
		VirtualActionInvoker2< GPUInstancerPrefab_t7597694950D9BB7FBE8411A0A11CA1ADFD59C43A*, bool >::Invoke(29 /* System.Void GPUInstancer.GPUInstancerPrefabManager::AddPrefabInstance(GPUInstancer.GPUInstancerPrefab,System.Boolean) */, L_10, L_11, (bool)1);
	}

IL_0060:
	{
		// }
		return;
	}
}
// System.Void GPUInstancer.GPUInstancerPrefabRuntimeHandler::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUInstancerPrefabRuntimeHandler_OnDisable_m7323CC318EE52EA0157659208F85CD54463DE681 (GPUInstancerPrefabRuntimeHandler_t4A36ABA8BFC07F939ABA643034FAB8E6D982F18A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (gpuiPrefab.state == PrefabInstancingState.Instanced)
		GPUInstancerPrefab_t7597694950D9BB7FBE8411A0A11CA1ADFD59C43A* L_0 = __this->___gpuiPrefab_4;
		NullCheck(L_0);
		int32_t L_1 = L_0->___state_6;
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0055;
		}
	}
	{
		// if (_prefabManager == null)
		GPUInstancerPrefabManager_t9BA464F68DAFB51AC82C0B30C1BEF0F84B0DEE40* L_2 = __this->____prefabManager_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// _prefabManager = GetPrefabManager();
		GPUInstancerPrefabManager_t9BA464F68DAFB51AC82C0B30C1BEF0F84B0DEE40* L_4;
		L_4 = GPUInstancerPrefabRuntimeHandler_GetPrefabManager_mF62D758DDAD4D2A7638EE0A8765601752AF15E65(__this, NULL);
		__this->____prefabManager_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____prefabManager_5), (void*)L_4);
	}

IL_0028:
	{
		// if (_prefabManager != null && !_prefabManager.isQuiting)
		GPUInstancerPrefabManager_t9BA464F68DAFB51AC82C0B30C1BEF0F84B0DEE40* L_5 = __this->____prefabManager_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0055;
		}
	}
	{
		GPUInstancerPrefabManager_t9BA464F68DAFB51AC82C0B30C1BEF0F84B0DEE40* L_7 = __this->____prefabManager_5;
		NullCheck(L_7);
		bool L_8 = ((GPUInstancerManager_tBC70675B38834A3B91ED3392CCE3603FB3D44A8E*)L_7)->___isQuiting_42;
		if (L_8)
		{
			goto IL_0055;
		}
	}
	{
		// _prefabManager.RemovePrefabInstance(gpuiPrefab, false);
		GPUInstancerPrefabManager_t9BA464F68DAFB51AC82C0B30C1BEF0F84B0DEE40* L_9 = __this->____prefabManager_5;
		GPUInstancerPrefab_t7597694950D9BB7FBE8411A0A11CA1ADFD59C43A* L_10 = __this->___gpuiPrefab_4;
		NullCheck(L_9);
		VirtualActionInvoker2< GPUInstancerPrefab_t7597694950D9BB7FBE8411A0A11CA1ADFD59C43A*, bool >::Invoke(33 /* System.Void GPUInstancer.GPUInstancerPrefabManager::RemovePrefabInstance(GPUInstancer.GPUInstancerPrefab,System.Boolean) */, L_9, L_10, (bool)0);
	}

IL_0055:
	{
		// }
		return;
	}
}
// GPUInstancer.GPUInstancerPrefabManager GPUInstancer.GPUInstancerPrefabRuntimeHandler::GetPrefabManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GPUInstancerPrefabManager_t9BA464F68DAFB51AC82C0B30C1BEF0F84B0DEE40* GPUInstancerPrefabRuntimeHandler_GetPrefabManager_mF62D758DDAD4D2A7638EE0A8765601752AF15E65 (GPUInstancerPrefabRuntimeHandler_t4A36ABA8BFC07F939ABA643034FAB8E6D982F18A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m0451468A20B55624482A267CFA3E6A467F201708_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m929E1644A8BDD3CA46111F8EB25BFAC7F2990F87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mDF898CD74A1FCFBBCE0B0B5B3A55D0E1C2D011FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUInstancerManager_tBC70675B38834A3B91ED3392CCE3603FB3D44A8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUInstancerPrefabManager_t9BA464F68DAFB51AC82C0B30C1BEF0F84B0DEE40_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUInstancerPrefabRuntimeHandler_U3CGetPrefabManagerU3Eb__6_0_mBC65FD4E212720175E955A0BCEA82E46B99E8957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUInstancerPrefabRuntimeHandler_U3CGetPrefabManagerU3Eb__6_1_mD01E2D1FEEF1681F9C6FDE556163ECBD5BF21CBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUInstancerPrefabRuntimeHandler_t4A36ABA8BFC07F939ABA643034FAB8E6D982F18A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Find_m2DB5663B504EF11F9334D5FC00809793DAC033C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_tEA3D0E2F9E6B28A5C83A3212E006D2FAA92E4D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CD90CA44025A7CBEB807F2FC1D2A1BE704684DF);
		s_Il2CppMethodInitialized = true;
	}
	GPUInstancerPrefabManager_t9BA464F68DAFB51AC82C0B30C1BEF0F84B0DEE40* V_0 = NULL;
	GPUInstancerPrefabPrototype_tD5DFA3B45330511A1FC44F9C93293EC01FEDC818* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	GPUInstancerPrefabPrototype_tD5DFA3B45330511A1FC44F9C93293EC01FEDC818* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	String_t* G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	{
		// GPUInstancerPrefabManager prefabManager = null;
		V_0 = (GPUInstancerPrefabManager_t9BA464F68DAFB51AC82C0B30C1BEF0F84B0DEE40*)NULL;
		// if (GPUInstancerManager.activeManagerList != null)
		il2cpp_codegen_runtime_class_init_inline(GPUInstancerManager_tBC70675B38834A3B91ED3392CCE3603FB3D44A8E_il2cpp_TypeInfo_var);
		List_1_tCFCDBF61C22E71B3C2667C807F40384311583709* L_0 = ((GPUInstancerManager_tBC70675B38834A3B91ED3392CCE3603FB3D44A8E_StaticFields*)il2cpp_codegen_static_fields_for(GPUInstancerManager_tBC70675B38834A3B91ED3392CCE3603FB3D44A8E_il2cpp_TypeInfo_var))->___activeManagerList_17;
		if (!L_0)
		{
			goto IL_00ce;
		}
	}
	{
		// if (!_managerDictionary.TryGetValue(gpuiPrefab.prefabPrototype, out prefabManager))
		Dictionary_2_tA2CB848B96EBFA538BA5F6C57B7D6AC5B823010D* L_1 = ((GPUInstancerPrefabRuntimeHandler_t4A36ABA8BFC07F939ABA643034FAB8E6D982F18A_StaticFields*)il2cpp_codegen_static_fields_for(GPUInstancerPrefabRuntimeHandler_t4A36ABA8BFC07F939ABA643034FAB8E6D982F18A_il2cpp_TypeInfo_var))->____managerDictionary_6;
		GPUInstancerPrefab_t7597694950D9BB7FBE8411A0A11CA1ADFD59C43A* L_2 = __this->___gpuiPrefab_4;
		NullCheck(L_2);
		GPUInstancerPrefabPrototype_tD5DFA3B45330511A1FC44F9C93293EC01FEDC818* L_3 = L_2->___prefabPrototype_4;
		NullCheck(L_1);
		bool L_4;
		L_4 = Dictionary_2_TryGetValue_m929E1644A8BDD3CA46111F8EB25BFAC7F2990F87(L_1, L_3, (&V_0), Dictionary_2_TryGetValue_m929E1644A8BDD3CA46111F8EB25BFAC7F2990F87_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_0088;
		}
	}
	{
		// prefabManager = (GPUInstancerPrefabManager)GPUInstancerManager.activeManagerList.Find(manager => manager.prototypeList.Contains(gpuiPrefab.prefabPrototype));
		il2cpp_codegen_runtime_class_init_inline(GPUInstancerManager_tBC70675B38834A3B91ED3392CCE3603FB3D44A8E_il2cpp_TypeInfo_var);
		List_1_tCFCDBF61C22E71B3C2667C807F40384311583709* L_5 = ((GPUInstancerManager_tBC70675B38834A3B91ED3392CCE3603FB3D44A8E_StaticFields*)il2cpp_codegen_static_fields_for(GPUInstancerManager_tBC70675B38834A3B91ED3392CCE3603FB3D44A8E_il2cpp_TypeInfo_var))->___activeManagerList_17;
		Predicate_1_tEA3D0E2F9E6B28A5C83A3212E006D2FAA92E4D2A* L_6 = (Predicate_1_tEA3D0E2F9E6B28A5C83A3212E006D2FAA92E4D2A*)il2cpp_codegen_object_new(Predicate_1_tEA3D0E2F9E6B28A5C83A3212E006D2FAA92E4D2A_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Predicate_1__ctor_m8631D508BE387D9CE196A95AAE4B809A49D9D7A6(L_6, __this, (intptr_t)((void*)GPUInstancerPrefabRuntimeHandler_U3CGetPrefabManagerU3Eb__6_0_mBC65FD4E212720175E955A0BCEA82E46B99E8957_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		GPUInstancerManager_tBC70675B38834A3B91ED3392CCE3603FB3D44A8E* L_7;
		L_7 = List_1_Find_m2DB5663B504EF11F9334D5FC00809793DAC033C6(L_5, L_6, List_1_Find_m2DB5663B504EF11F9334D5FC00809793DAC033C6_RuntimeMethod_var);
		V_0 = ((GPUInstancerPrefabManager_t9BA464F68DAFB51AC82C0B30C1BEF0F84B0DEE40*)CastclassClass((RuntimeObject*)L_7, GPUInstancerPrefabManager_t9BA464F68DAFB51AC82C0B30C1BEF0F84B0DEE40_il2cpp_TypeInfo_var));
		// if (prefabManager == null)
		GPUInstancerPrefabManager_t9BA464F68DAFB51AC82C0B30C1BEF0F84B0DEE40* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0072;
		}
	}
	{
		// Debug.LogWarning("Can not find GPUI Prefab Manager for prototype: " + gpuiPrefab.prefabPrototype);
		GPUInstancerPrefab_t7597694950D9BB7FBE8411A0A11CA1ADFD59C43A* L_10 = __this->___gpuiPrefab_4;
		NullCheck(L_10);
		GPUInstancerPrefabPrototype_tD5DFA3B45330511A1FC44F9C93293EC01FEDC818* L_11 = L_10->___prefabPrototype_4;
		GPUInstancerPrefabPrototype_tD5DFA3B45330511A1FC44F9C93293EC01FEDC818* L_12 = L_11;
		G_B4_0 = L_12;
		G_B4_1 = _stringLiteral7CD90CA44025A7CBEB807F2FC1D2A1BE704684DF;
		if (L_12)
		{
			G_B5_0 = L_12;
			G_B5_1 = _stringLiteral7CD90CA44025A7CBEB807F2FC1D2A1BE704684DF;
			goto IL_0061;
		}
	}
	{
		G_B6_0 = ((String_t*)(NULL));
		G_B6_1 = G_B4_1;
		goto IL_0066;
	}

IL_0061:
	{
		NullCheck(G_B5_0);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B5_0);
		G_B6_0 = L_13;
		G_B6_1 = G_B5_1;
	}

IL_0066:
	{
		String_t* L_14;
		L_14 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(G_B6_1, G_B6_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_14, NULL);
		// return null;
		return (GPUInstancerPrefabManager_t9BA464F68DAFB51AC82C0B30C1BEF0F84B0DEE40*)NULL;
	}

IL_0072:
	{
		// _managerDictionary.Add(gpuiPrefab.prefabPrototype, prefabManager);
		Dictionary_2_tA2CB848B96EBFA538BA5F6C57B7D6AC5B823010D* L_15 = ((GPUInstancerPrefabRuntimeHandler_t4A36ABA8BFC07F939ABA643034FAB8E6D982F18A_StaticFields*)il2cpp_codegen_static_fields_for(GPUInstancerPrefabRuntimeHandler_t4A36ABA8BFC07F939ABA643034FAB8E6D982F18A_il2cpp_TypeInfo_var))->____managerDictionary_6;
		GPUInstancerPrefab_t7597694950D9BB7FBE8411A0A11CA1ADFD59C43A* L_16 = __this->___gpuiPrefab_4;
		NullCheck(L_16);
		GPUInstancerPrefabPrototype_tD5DFA3B45330511A1FC44F9C93293EC01FEDC818* L_17 = L_16->___prefabPrototype_4;
		GPUInstancerPrefabManager_t9BA464F68DAFB51AC82C0B30C1BEF0F84B0DEE40* L_18 = V_0;
		NullCheck(L_15);
		Dictionary_2_Add_m0451468A20B55624482A267CFA3E6A467F201708(L_15, L_17, L_18, Dictionary_2_Add_m0451468A20B55624482A267CFA3E6A467F201708_RuntimeMethod_var);
	}

IL_0088:
	{
		// if (prefabManager == null)
		GPUInstancerPrefabManager_t9BA464F68DAFB51AC82C0B30C1BEF0F84B0DEE40* L_19 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_19, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_20)
		{
			goto IL_00ce;
		}
	}
	{
		// prefabManager = (GPUInstancerPrefabManager)GPUInstancerManager.activeManagerList.Find(manager => manager.prototypeList.Contains(gpuiPrefab.prefabPrototype));
		il2cpp_codegen_runtime_class_init_inline(GPUInstancerManager_tBC70675B38834A3B91ED3392CCE3603FB3D44A8E_il2cpp_TypeInfo_var);
		List_1_tCFCDBF61C22E71B3C2667C807F40384311583709* L_21 = ((GPUInstancerManager_tBC70675B38834A3B91ED3392CCE3603FB3D44A8E_StaticFields*)il2cpp_codegen_static_fields_for(GPUInstancerManager_tBC70675B38834A3B91ED3392CCE3603FB3D44A8E_il2cpp_TypeInfo_var))->___activeManagerList_17;
		Predicate_1_tEA3D0E2F9E6B28A5C83A3212E006D2FAA92E4D2A* L_22 = (Predicate_1_tEA3D0E2F9E6B28A5C83A3212E006D2FAA92E4D2A*)il2cpp_codegen_object_new(Predicate_1_tEA3D0E2F9E6B28A5C83A3212E006D2FAA92E4D2A_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		Predicate_1__ctor_m8631D508BE387D9CE196A95AAE4B809A49D9D7A6(L_22, __this, (intptr_t)((void*)GPUInstancerPrefabRuntimeHandler_U3CGetPrefabManagerU3Eb__6_1_mD01E2D1FEEF1681F9C6FDE556163ECBD5BF21CBF_RuntimeMethod_var), NULL);
		NullCheck(L_21);
		GPUInstancerManager_tBC70675B38834A3B91ED3392CCE3603FB3D44A8E* L_23;
		L_23 = List_1_Find_m2DB5663B504EF11F9334D5FC00809793DAC033C6(L_21, L_22, List_1_Find_m2DB5663B504EF11F9334D5FC00809793DAC033C6_RuntimeMethod_var);
		V_0 = ((GPUInstancerPrefabManager_t9BA464F68DAFB51AC82C0B30C1BEF0F84B0DEE40*)CastclassClass((RuntimeObject*)L_23, GPUInstancerPrefabManager_t9BA464F68DAFB51AC82C0B30C1BEF0F84B0DEE40_il2cpp_TypeInfo_var));
		// if (prefabManager == null)
		GPUInstancerPrefabManager_t9BA464F68DAFB51AC82C0B30C1BEF0F84B0DEE40* L_24 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_24, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_25)
		{
			goto IL_00b8;
		}
	}
	{
		// return null;
		return (GPUInstancerPrefabManager_t9BA464F68DAFB51AC82C0B30C1BEF0F84B0DEE40*)NULL;
	}

IL_00b8:
	{
		// _managerDictionary[gpuiPrefab.prefabPrototype] = prefabManager;
		Dictionary_2_tA2CB848B96EBFA538BA5F6C57B7D6AC5B823010D* L_26 = ((GPUInstancerPrefabRuntimeHandler_t4A36ABA8BFC07F939ABA643034FAB8E6D982F18A_StaticFields*)il2cpp_codegen_static_fields_for(GPUInstancerPrefabRuntimeHandler_t4A36ABA8BFC07F939ABA643034FAB8E6D982F18A_il2cpp_TypeInfo_var))->____managerDictionary_6;
		GPUInstancerPrefab_t7597694950D9BB7FBE8411A0A11CA1ADFD59C43A* L_27 = __this->___gpuiPrefab_4;
		NullCheck(L_27);
		GPUInstancerPrefabPrototype_tD5DFA3B45330511A1FC44F9C93293EC01FEDC818* L_28 = L_27->___prefabPrototype_4;
		GPUInstancerPrefabManager_t9BA464F68DAFB51AC82C0B30C1BEF0F84B0DEE40* L_29 = V_0;
		NullCheck(L_26);
		Dictionary_2_set_Item_mDF898CD74A1FCFBBCE0B0B5B3A55D0E1C2D011FB(L_26, L_28, L_29, Dictionary_2_set_Item_mDF898CD74A1FCFBBCE0B0B5B3A55D0E1C2D011FB_RuntimeMethod_var);
	}

IL_00ce:
	{
		// return prefabManager;
		GPUInstancerPrefabManager_t9BA464F68DAFB51AC82C0B30C1BEF0F84B0DEE40* L_30 = V_0;
		return L_30;
	}
}
// System.Void GPUInstancer.GPUInstancerPrefabRuntimeHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUInstancerPrefabRuntimeHandler__ctor_m9D7B604E7DB8FAB5B126671D480BAC46C704A6C8 (GPUInstancerPrefabRuntimeHandler_t4A36ABA8BFC07F939ABA643034FAB8E6D982F18A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Boolean GPUInstancer.GPUInstancerPrefabRuntimeHandler::<GetPrefabManager>b__6_0(GPUInstancer.GPUInstancerManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GPUInstancerPrefabRuntimeHandler_U3CGetPrefabManagerU3Eb__6_0_mBC65FD4E212720175E955A0BCEA82E46B99E8957 (GPUInstancerPrefabRuntimeHandler_t4A36ABA8BFC07F939ABA643034FAB8E6D982F18A* __this, GPUInstancerManager_tBC70675B38834A3B91ED3392CCE3603FB3D44A8E* ___manager0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mA18E31FFF2BF42CB69AF0FF27338C0BCD2C8172C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// prefabManager = (GPUInstancerPrefabManager)GPUInstancerManager.activeManagerList.Find(manager => manager.prototypeList.Contains(gpuiPrefab.prefabPrototype));
		GPUInstancerManager_tBC70675B38834A3B91ED3392CCE3603FB3D44A8E* L_0 = ___manager0;
		NullCheck(L_0);
		List_1_tC51EA1C5181B70F9303231807AEAD89EF6C5CC0D* L_1 = L_0->___prototypeList_4;
		GPUInstancerPrefab_t7597694950D9BB7FBE8411A0A11CA1ADFD59C43A* L_2 = __this->___gpuiPrefab_4;
		NullCheck(L_2);
		GPUInstancerPrefabPrototype_tD5DFA3B45330511A1FC44F9C93293EC01FEDC818* L_3 = L_2->___prefabPrototype_4;
		NullCheck(L_1);
		bool L_4;
		L_4 = List_1_Contains_mA18E31FFF2BF42CB69AF0FF27338C0BCD2C8172C(L_1, L_3, List_1_Contains_mA18E31FFF2BF42CB69AF0FF27338C0BCD2C8172C_RuntimeMethod_var);
		return L_4;
	}
}
// System.Boolean GPUInstancer.GPUInstancerPrefabRuntimeHandler::<GetPrefabManager>b__6_1(GPUInstancer.GPUInstancerManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GPUInstancerPrefabRuntimeHandler_U3CGetPrefabManagerU3Eb__6_1_mD01E2D1FEEF1681F9C6FDE556163ECBD5BF21CBF (GPUInstancerPrefabRuntimeHandler_t4A36ABA8BFC07F939ABA643034FAB8E6D982F18A* __this, GPUInstancerManager_tBC70675B38834A3B91ED3392CCE3603FB3D44A8E* ___manager0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mA18E31FFF2BF42CB69AF0FF27338C0BCD2C8172C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// prefabManager = (GPUInstancerPrefabManager)GPUInstancerManager.activeManagerList.Find(manager => manager.prototypeList.Contains(gpuiPrefab.prefabPrototype));
		GPUInstancerManager_tBC70675B38834A3B91ED3392CCE3603FB3D44A8E* L_0 = ___manager0;
		NullCheck(L_0);
		List_1_tC51EA1C5181B70F9303231807AEAD89EF6C5CC0D* L_1 = L_0->___prototypeList_4;
		GPUInstancerPrefab_t7597694950D9BB7FBE8411A0A11CA1ADFD59C43A* L_2 = __this->___gpuiPrefab_4;
		NullCheck(L_2);
		GPUInstancerPrefabPrototype_tD5DFA3B45330511A1FC44F9C93293EC01FEDC818* L_3 = L_2->___prefabPrototype_4;
		NullCheck(L_1);
		bool L_4;
		L_4 = List_1_Contains_mA18E31FFF2BF42CB69AF0FF27338C0BCD2C8172C(L_1, L_3, List_1_Contains_mA18E31FFF2BF42CB69AF0FF27338C0BCD2C8172C_RuntimeMethod_var);
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
// System.Void GPUInstancer.GPUInstancerTerrainProxy::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUInstancerTerrainProxy_OnDestroy_m156811C423B9982D3DC90F7950AEF3415BB5B478 (GPUInstancerTerrainProxy_t5546E69F313AE403C14A490876A27887B65C46B5* __this, const RuntimeMethod* method) 
{
	{
		// beingDestroyed = true;
		__this->___beingDestroyed_6 = (bool)1;
		// }
		return;
	}
}
// System.Void GPUInstancer.GPUInstancerTerrainProxy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUInstancerTerrainProxy__ctor_mCC9C0A776341F4DDAA02FDA31B7B37E530B3A926 (GPUInstancerTerrainProxy_t5546E69F313AE403C14A490876A27887B65C46B5* __this, const RuntimeMethod* method) 
{
	{
		// public int terrainSelectedToolIndex = -1;
		__this->___terrainSelectedToolIndex_7 = (-1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void GPUInstancer.GPUInstancerTerrainRuntimeHandler::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUInstancerTerrainRuntimeHandler_Awake_mB6EC9519D36351E77BE5ED37D1F35715AD277CC3 (GPUInstancerTerrainRuntimeHandler_t83B71307E1A72EB8DCF173F72977287BA3FB5C9F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTerrain_t7F309492F67238DBFBC4566F47385B2A665CF667_m91BA1801D3A897D0F2234DFA7DC7359C6866064A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUInstancerTerrainRuntimeHandler_t83B71307E1A72EB8DCF173F72977287BA3FB5C9F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00_m26D088EE0DD4881C355AF6B68E71B21B4CA8788F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// terrain = GetComponent<Terrain>();
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_0;
		L_0 = Component_GetComponent_TisTerrain_t7F309492F67238DBFBC4566F47385B2A665CF667_m91BA1801D3A897D0F2234DFA7DC7359C6866064A(__this, Component_GetComponent_TisTerrain_t7F309492F67238DBFBC4566F47385B2A665CF667_m91BA1801D3A897D0F2234DFA7DC7359C6866064A_RuntimeMethod_var);
		__this->___terrain_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___terrain_4), (void*)L_0);
		// if (_treeManager == null)
		GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00* L_1 = ((GPUInstancerTerrainRuntimeHandler_t83B71307E1A72EB8DCF173F72977287BA3FB5C9F_StaticFields*)il2cpp_codegen_static_fields_for(GPUInstancerTerrainRuntimeHandler_t83B71307E1A72EB8DCF173F72977287BA3FB5C9F_il2cpp_TypeInfo_var))->____treeManager_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// _treeManager = FindObjectOfType<GPUInstancerTreeManager>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00* L_3;
		L_3 = Object_FindObjectOfType_TisGPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00_m26D088EE0DD4881C355AF6B68E71B21B4CA8788F(Object_FindObjectOfType_TisGPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00_m26D088EE0DD4881C355AF6B68E71B21B4CA8788F_RuntimeMethod_var);
		((GPUInstancerTerrainRuntimeHandler_t83B71307E1A72EB8DCF173F72977287BA3FB5C9F_StaticFields*)il2cpp_codegen_static_fields_for(GPUInstancerTerrainRuntimeHandler_t83B71307E1A72EB8DCF173F72977287BA3FB5C9F_il2cpp_TypeInfo_var))->____treeManager_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((GPUInstancerTerrainRuntimeHandler_t83B71307E1A72EB8DCF173F72977287BA3FB5C9F_StaticFields*)il2cpp_codegen_static_fields_for(GPUInstancerTerrainRuntimeHandler_t83B71307E1A72EB8DCF173F72977287BA3FB5C9F_il2cpp_TypeInfo_var))->____treeManager_5), (void*)L_3);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void GPUInstancer.GPUInstancerTerrainRuntimeHandler::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUInstancerTerrainRuntimeHandler_Reset_mCE05F7480A0105BE46442D23DCED984E057E357B (GPUInstancerTerrainRuntimeHandler_t83B71307E1A72EB8DCF173F72977287BA3FB5C9F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTerrain_t7F309492F67238DBFBC4566F47385B2A665CF667_m91BA1801D3A897D0F2234DFA7DC7359C6866064A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01166485D98C24B83AB5CD03FD57EA7EA0F9DE07);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GetComponent<Terrain>() == null)
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_0;
		L_0 = Component_GetComponent_TisTerrain_t7F309492F67238DBFBC4566F47385B2A665CF667_m91BA1801D3A897D0F2234DFA7DC7359C6866064A(__this, Component_GetComponent_TisTerrain_t7F309492F67238DBFBC4566F47385B2A665CF667_m91BA1801D3A897D0F2234DFA7DC7359C6866064A_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// Debug.LogError("GPUInstancerTerrainRuntimeHandler can only be added to a Terrain!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral01166485D98C24B83AB5CD03FD57EA7EA0F9DE07, NULL);
		// DestroyImmediate(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(__this, NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void GPUInstancer.GPUInstancerTerrainRuntimeHandler::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUInstancerTerrainRuntimeHandler_OnEnable_m621B268490A408A9A8ABF9A011C5D4FE09ED70CA (GPUInstancerTerrainRuntimeHandler_t83B71307E1A72EB8DCF173F72977287BA3FB5C9F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUInstancerTerrainRuntimeHandler_t83B71307E1A72EB8DCF173F72977287BA3FB5C9F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_treeManager != null)
		GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00* L_0 = ((GPUInstancerTerrainRuntimeHandler_t83B71307E1A72EB8DCF173F72977287BA3FB5C9F_StaticFields*)il2cpp_codegen_static_fields_for(GPUInstancerTerrainRuntimeHandler_t83B71307E1A72EB8DCF173F72977287BA3FB5C9F_il2cpp_TypeInfo_var))->____treeManager_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// _treeManager.AddTerrain(terrain);
		GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00* L_2 = ((GPUInstancerTerrainRuntimeHandler_t83B71307E1A72EB8DCF173F72977287BA3FB5C9F_StaticFields*)il2cpp_codegen_static_fields_for(GPUInstancerTerrainRuntimeHandler_t83B71307E1A72EB8DCF173F72977287BA3FB5C9F_il2cpp_TypeInfo_var))->____treeManager_5;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_3 = __this->___terrain_4;
		NullCheck(L_2);
		VirtualActionInvoker1< Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* >::Invoke(24 /* System.Void GPUInstancer.GPUInstancerTerrainManager::AddTerrain(UnityEngine.Terrain) */, L_2, L_3);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void GPUInstancer.GPUInstancerTerrainRuntimeHandler::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUInstancerTerrainRuntimeHandler_OnDisable_m56A99260D66B86EDAD96544525ED32DE9A108CF0 (GPUInstancerTerrainRuntimeHandler_t83B71307E1A72EB8DCF173F72977287BA3FB5C9F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUInstancerTerrainRuntimeHandler_t83B71307E1A72EB8DCF173F72977287BA3FB5C9F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_treeManager != null)
		GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00* L_0 = ((GPUInstancerTerrainRuntimeHandler_t83B71307E1A72EB8DCF173F72977287BA3FB5C9F_StaticFields*)il2cpp_codegen_static_fields_for(GPUInstancerTerrainRuntimeHandler_t83B71307E1A72EB8DCF173F72977287BA3FB5C9F_il2cpp_TypeInfo_var))->____treeManager_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		// _treeManager.RemoveTerrain(terrain);
		GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00* L_2 = ((GPUInstancerTerrainRuntimeHandler_t83B71307E1A72EB8DCF173F72977287BA3FB5C9F_StaticFields*)il2cpp_codegen_static_fields_for(GPUInstancerTerrainRuntimeHandler_t83B71307E1A72EB8DCF173F72977287BA3FB5C9F_il2cpp_TypeInfo_var))->____treeManager_5;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_3 = __this->___terrain_4;
		NullCheck(L_2);
		VirtualActionInvoker1< Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* >::Invoke(25 /* System.Void GPUInstancer.GPUInstancerTerrainManager::RemoveTerrain(UnityEngine.Terrain) */, L_2, L_3);
		// terrain.treeDistance = _treeManager.terrainSettings.maxTreeDistance;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_4 = __this->___terrain_4;
		GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00* L_5 = ((GPUInstancerTerrainRuntimeHandler_t83B71307E1A72EB8DCF173F72977287BA3FB5C9F_StaticFields*)il2cpp_codegen_static_fields_for(GPUInstancerTerrainRuntimeHandler_t83B71307E1A72EB8DCF173F72977287BA3FB5C9F_il2cpp_TypeInfo_var))->____treeManager_5;
		NullCheck(L_5);
		GPUInstancerTerrainSettings_t2CCB96E712A6B4310113C5A7555D1DD6AA761356* L_6 = ((GPUInstancerTerrainManager_t5D14A71A3AF1435E15D974025C65071A3D39CD90*)L_5)->___terrainSettings_50;
		NullCheck(L_6);
		float L_7 = L_6->___maxTreeDistance_6;
		NullCheck(L_4);
		Terrain_set_treeDistance_m8836D1691B1C7BDC76725A624601E6543806C14C(L_4, L_7, NULL);
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void GPUInstancer.GPUInstancerTerrainRuntimeHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUInstancerTerrainRuntimeHandler__ctor_mA76EAE36102E5F54009941695819F89A3527378B (GPUInstancerTerrainRuntimeHandler_t83B71307E1A72EB8DCF173F72977287BA3FB5C9F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void GPUInstancer.GPUInstancerTreeManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUInstancerTreeManager_Awake_mED4FFE7ACBCD917D4148192DDA6CD2BD6E1FD73E (GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUInstancerConstants_tDDBEE279B5B3385A4B5C7A8D16DB9118C3594BAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8_mCB69A2628DBDDB3B597662E8BDF187516294F247_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Awake();
		GPUInstancerTerrainManager_Awake_m2940059F1AA7D5F49CD1724B5C56A0800991C3FA(__this, NULL);
		// if (_treeInstantiationComputeShader == null)
		ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* L_0 = ((GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00_StaticFields*)il2cpp_codegen_static_fields_for(GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00_il2cpp_TypeInfo_var))->____treeInstantiationComputeShader_56;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// _treeInstantiationComputeShader = Resources.Load<ComputeShader>(GPUInstancerConstants.TREE_INSTANTIATION_RESOURCE_PATH);
		il2cpp_codegen_runtime_class_init_inline(GPUInstancerConstants_tDDBEE279B5B3385A4B5C7A8D16DB9118C3594BAF_il2cpp_TypeInfo_var);
		String_t* L_2 = ((GPUInstancerConstants_tDDBEE279B5B3385A4B5C7A8D16DB9118C3594BAF_StaticFields*)il2cpp_codegen_static_fields_for(GPUInstancerConstants_tDDBEE279B5B3385A4B5C7A8D16DB9118C3594BAF_il2cpp_TypeInfo_var))->___TREE_INSTANTIATION_RESOURCE_PATH_42;
		ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* L_3;
		L_3 = Resources_Load_TisComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8_mCB69A2628DBDDB3B597662E8BDF187516294F247(L_2, Resources_Load_TisComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8_mCB69A2628DBDDB3B597662E8BDF187516294F247_RuntimeMethod_var);
		((GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00_StaticFields*)il2cpp_codegen_static_fields_for(GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00_il2cpp_TypeInfo_var))->____treeInstantiationComputeShader_56 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00_StaticFields*)il2cpp_codegen_static_fields_for(GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00_il2cpp_TypeInfo_var))->____treeInstantiationComputeShader_56), (void*)L_3);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void GPUInstancer.GPUInstancerTreeManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUInstancerTreeManager_Update_mA7D35F810D3CC3ACC9DB59023B951A8C34D3ACE9 (GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00* __this, const RuntimeMethod* method) 
{
	{
		// base.Update();
		GPUInstancerTerrainManager_Update_m50A3B999DD4405062F763E7C2719B5DFE6567D4F(__this, NULL);
		// if (_requiresTerrainUpdate && !_isCoroutineActive)
		bool L_0 = ((GPUInstancerTerrainManager_t5D14A71A3AF1435E15D974025C65071A3D39CD90*)__this)->____requiresTerrainUpdate_53;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		bool L_1 = __this->____isCoroutineActive_58;
		if (L_1)
		{
			goto IL_002a;
		}
	}
	{
		// StartCoroutine(ReplaceUnityTrees());
		RuntimeObject* L_2;
		L_2 = GPUInstancerTreeManager_ReplaceUnityTrees_mBEA232C757C9FC05085F7B99F4FA102B478BDD21(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
		// _requiresTerrainUpdate = false;
		((GPUInstancerTerrainManager_t5D14A71A3AF1435E15D974025C65071A3D39CD90*)__this)->____requiresTerrainUpdate_53 = (bool)0;
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void GPUInstancer.GPUInstancerTreeManager::ClearInstancingData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUInstancerTreeManager_ClearInstancingData_m13AEB6AB23D11E8059B0D4D30BE946766DA642AF (GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m14F34EC787A601A0A73CFF7F211D7D062C3D7946_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m484EE5C5D622FA0AA4863985628C97BD6EE145B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD34AA709207C6A86D64005E396AB58AC514D3BF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m46772991FE7070A89F3C652D43B7DECEC1F7DE29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tE55827E469E8564863DA766418F79DE48A82AAA2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* V_1 = NULL;
	{
		// base.ClearInstancingData();
		GPUInstancerManager_ClearInstancingData_mA91200FEF497C38E3482E35A0B0CED496825047F(__this, NULL);
		// if(_terrains != null)
		List_1_tD2AD001A66810CB968E98D9E635A799408554017* L_0 = ((GPUInstancerTerrainManager_t5D14A71A3AF1435E15D974025C65071A3D39CD90*)__this)->____terrains_49;
		if (!L_0)
		{
			goto IL_0064;
		}
	}
	{
		// foreach (Terrain terrain in _terrains)
		List_1_tD2AD001A66810CB968E98D9E635A799408554017* L_1 = ((GPUInstancerTerrainManager_t5D14A71A3AF1435E15D974025C65071A3D39CD90*)__this)->____terrains_49;
		NullCheck(L_1);
		Enumerator_tE55827E469E8564863DA766418F79DE48A82AAA2 L_2;
		L_2 = List_1_GetEnumerator_m46772991FE7070A89F3C652D43B7DECEC1F7DE29(L_1, List_1_GetEnumerator_m46772991FE7070A89F3C652D43B7DECEC1F7DE29_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0056:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m14F34EC787A601A0A73CFF7F211D7D062C3D7946((&V_0), Enumerator_Dispose_m14F34EC787A601A0A73CFF7F211D7D062C3D7946_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_004b_1;
			}

IL_001c_1:
			{
				// foreach (Terrain terrain in _terrains)
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_3;
				L_3 = Enumerator_get_Current_mD34AA709207C6A86D64005E396AB58AC514D3BF4_inline((&V_0), Enumerator_get_Current_mD34AA709207C6A86D64005E396AB58AC514D3BF4_RuntimeMethod_var);
				V_1 = L_3;
				// if (terrain != null && terrain.treeDistance == 0)
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_4 = V_1;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_5;
				L_5 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_5)
				{
					goto IL_004b_1;
				}
			}
			{
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_6 = V_1;
				NullCheck(L_6);
				float L_7;
				L_7 = Terrain_get_treeDistance_mE5394C9AAD12F1BD5474B51615D2E3906404F77A(L_6, NULL);
				if ((!(((float)L_7) == ((float)(0.0f)))))
				{
					goto IL_004b_1;
				}
			}
			{
				// terrain.treeDistance = terrainSettings.maxTreeDistance;
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_8 = V_1;
				GPUInstancerTerrainSettings_t2CCB96E712A6B4310113C5A7555D1DD6AA761356* L_9 = ((GPUInstancerTerrainManager_t5D14A71A3AF1435E15D974025C65071A3D39CD90*)__this)->___terrainSettings_50;
				NullCheck(L_9);
				float L_10 = L_9->___maxTreeDistance_6;
				NullCheck(L_8);
				Terrain_set_treeDistance_m8836D1691B1C7BDC76725A624601E6543806C14C(L_8, L_10, NULL);
			}

IL_004b_1:
			{
				// foreach (Terrain terrain in _terrains)
				bool L_11;
				L_11 = Enumerator_MoveNext_m484EE5C5D622FA0AA4863985628C97BD6EE145B7((&V_0), Enumerator_MoveNext_m484EE5C5D622FA0AA4863985628C97BD6EE145B7_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_001c_1;
				}
			}
			{
				goto IL_0064;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0064:
	{
		// }
		return;
	}
}
// System.Void GPUInstancer.GPUInstancerTreeManager::GeneratePrototypes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUInstancerTreeManager_GeneratePrototypes_m352397E18A35EDA6BB06F8C98B62BEC2B5E3D75B (GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00* __this, bool ___forceNew0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.GeneratePrototypes(forceNew);
		bool L_0 = ___forceNew0;
		GPUInstancerManager_GeneratePrototypes_m4530045E859E9ABAF2EA5EDBED12DFCCF9F54EA7(__this, L_0, NULL);
		// if (terrainSettings != null && terrain != null && terrain.terrainData != null)
		GPUInstancerTerrainSettings_t2CCB96E712A6B4310113C5A7555D1DD6AA761356* L_1 = ((GPUInstancerTerrainManager_t5D14A71A3AF1435E15D974025C65071A3D39CD90*)__this)->___terrainSettings_50;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_005e;
		}
	}
	{
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_3;
		L_3 = GPUInstancerTerrainManager_get_terrain_mFE98391DD97410787405C4632E1A7E3B2BBCF4BC(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_005e;
		}
	}
	{
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_5;
		L_5 = GPUInstancerTerrainManager_get_terrain_mFE98391DD97410787405C4632E1A7E3B2BBCF4BC(__this, NULL);
		NullCheck(L_5);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_6;
		L_6 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_005e;
		}
	}
	{
		// GPUInstancerUtility.SetTreeInstancePrototypes(gameObject, prototypeList, terrain.terrainData.treePrototypes, terrainSettings, forceNew);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		List_1_tC51EA1C5181B70F9303231807AEAD89EF6C5CC0D* L_9 = ((GPUInstancerManager_tBC70675B38834A3B91ED3392CCE3603FB3D44A8E*)__this)->___prototypeList_4;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_10;
		L_10 = GPUInstancerTerrainManager_get_terrain_mFE98391DD97410787405C4632E1A7E3B2BBCF4BC(__this, NULL);
		NullCheck(L_10);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_11;
		L_11 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_10, NULL);
		NullCheck(L_11);
		TreePrototypeU5BU5D_tB0255CA167F991C2C9BA3BA55DF7417168D93B7A* L_12;
		L_12 = TerrainData_get_treePrototypes_m0A43789B50E554DACB5DF88C86DA23B89DB33EEB(L_11, NULL);
		GPUInstancerTerrainSettings_t2CCB96E712A6B4310113C5A7555D1DD6AA761356* L_13 = ((GPUInstancerTerrainManager_t5D14A71A3AF1435E15D974025C65071A3D39CD90*)__this)->___terrainSettings_50;
		bool L_14 = ___forceNew0;
		GPUInstancerUtility_SetTreeInstancePrototypes_m6D421B9116AD688BF3A7A1240632E64747F26332(L_8, L_9, L_12, L_13, L_14, NULL);
	}

IL_005e:
	{
		// }
		return;
	}
}
// System.Void GPUInstancer.GPUInstancerTreeManager::InitializeRuntimeDataAndBuffers(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUInstancerTreeManager_InitializeRuntimeDataAndBuffers_mEFBCD79D77366AC06354628BD396F2F35E3E6E6D (GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00* __this, bool ___forceNew0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mCEA8EA9B52DAA0043B1D1AC4C592A47190144BFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.InitializeRuntimeDataAndBuffers(forceNew);
		bool L_0 = ___forceNew0;
		GPUInstancerManager_InitializeRuntimeDataAndBuffers_m4324A20B460F4B37D498EA94032D5EC6854555F1(__this, L_0, NULL);
		// if (!forceNew && isInitialized)
		bool L_1 = ___forceNew0;
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		bool L_2 = ((GPUInstancerManager_tBC70675B38834A3B91ED3392CCE3603FB3D44A8E*)__this)->___isInitialized_41;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// return;
		return;
	}

IL_0013:
	{
		// if (terrainSettings == null)
		GPUInstancerTerrainSettings_t2CCB96E712A6B4310113C5A7555D1DD6AA761356* L_3 = ((GPUInstancerTerrainManager_t5D14A71A3AF1435E15D974025C65071A3D39CD90*)__this)->___terrainSettings_50;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		// return;
		return;
	}

IL_0022:
	{
		// if (prototypeList != null && prototypeList.Count > 0)
		List_1_tC51EA1C5181B70F9303231807AEAD89EF6C5CC0D* L_5 = ((GPUInstancerManager_tBC70675B38834A3B91ED3392CCE3603FB3D44A8E*)__this)->___prototypeList_4;
		if (!L_5)
		{
			goto IL_004f;
		}
	}
	{
		List_1_tC51EA1C5181B70F9303231807AEAD89EF6C5CC0D* L_6 = ((GPUInstancerManager_tBC70675B38834A3B91ED3392CCE3603FB3D44A8E*)__this)->___prototypeList_4;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_mCEA8EA9B52DAA0043B1D1AC4C592A47190144BFD_inline(L_6, List_1_get_Count_mCEA8EA9B52DAA0043B1D1AC4C592A47190144BFD_RuntimeMethod_var);
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		// GPUInstancerUtility.AddTreeInstanceRuntimeDataToList(runtimeDataList, prototypeList, terrainSettings);
		List_1_t8FDAD79D15A0E06F4397907AE6788258276E8978* L_8 = ((GPUInstancerManager_tBC70675B38834A3B91ED3392CCE3603FB3D44A8E*)__this)->___runtimeDataList_11;
		List_1_tC51EA1C5181B70F9303231807AEAD89EF6C5CC0D* L_9 = ((GPUInstancerManager_tBC70675B38834A3B91ED3392CCE3603FB3D44A8E*)__this)->___prototypeList_4;
		GPUInstancerTerrainSettings_t2CCB96E712A6B4310113C5A7555D1DD6AA761356* L_10 = ((GPUInstancerTerrainManager_t5D14A71A3AF1435E15D974025C65071A3D39CD90*)__this)->___terrainSettings_50;
		GPUInstancerUtility_AddTreeInstanceRuntimeDataToList_m8A04AB0464F03ABCEC69998809963798C29E8909(L_8, L_9, L_10, NULL);
	}

IL_004f:
	{
		// StartCoroutine(ReplaceUnityTrees());
		RuntimeObject* L_11;
		L_11 = GPUInstancerTreeManager_ReplaceUnityTrees_mBEA232C757C9FC05085F7B99F4FA102B478BDD21(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_12;
		L_12 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_11, NULL);
		// isInitialized = true;
		((GPUInstancerManager_tBC70675B38834A3B91ED3392CCE3603FB3D44A8E*)__this)->___isInitialized_41 = (bool)1;
		// }
		return;
	}
}
// System.Void GPUInstancer.GPUInstancerTreeManager::DeletePrototype(GPUInstancer.GPUInstancerPrototype,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUInstancerTreeManager_DeletePrototype_m9D654612569CB9940D2A473709184D73D9B4398D (GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00* __this, GPUInstancerPrototype_t8CC477296831E484428798CB96A46F21371C35CF* ___prototype0, bool ___removeSO1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAC6D75EF36303133FA8504C2F1312008E4EA3C10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_m82CAFF5E3E3F737EBD566F7141AF68642507C3EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mE91259CC4BD7E6E02DCC8B2E13A8C2C0531F9CA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2E3ECDF734E7FA10812DF2D499C4317EB881C405_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m3BBEEFAD7758746DA602FBB5D7EF3DC9420D909D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m15D691BE05DD1AA2E0BA3FF42048E48A19571484_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m949FC18118317FF19F8F52941A28D9E771B6E1B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE78944B77F1FDA08CD652C58BF9EF9C8DCB1FA1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3A63FEBEE36CEFD162E0AA45228A1D2BE509CC8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7CDBDADC2DD3F6FE5B92D1A5EE6F8B003233585A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	List_1_t3A63FEBEE36CEFD162E0AA45228A1D2BE509CC8B* V_1 = NULL;
	List_1_t7CDBDADC2DD3F6FE5B92D1A5EE6F8B003233585A* V_2 = NULL;
	TreeInstance_t382B018173ED020660D262061EA9424682614F50 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	{
		// if (terrainSettings != null && terrain != null && terrain.terrainData != null)
		GPUInstancerTerrainSettings_t2CCB96E712A6B4310113C5A7555D1DD6AA761356* L_0 = ((GPUInstancerTerrainManager_t5D14A71A3AF1435E15D974025C65071A3D39CD90*)__this)->___terrainSettings_50;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0135;
		}
	}
	{
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_2;
		L_2 = GPUInstancerTerrainManager_get_terrain_mFE98391DD97410787405C4632E1A7E3B2BBCF4BC(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0135;
		}
	}
	{
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_4;
		L_4 = GPUInstancerTerrainManager_get_terrain_mFE98391DD97410787405C4632E1A7E3B2BBCF4BC(__this, NULL);
		NullCheck(L_4);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_5;
		L_5 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0135;
		}
	}
	{
		// int treePrototypeIndex = prototypeList.IndexOf(prototype);
		List_1_tC51EA1C5181B70F9303231807AEAD89EF6C5CC0D* L_7 = ((GPUInstancerManager_tBC70675B38834A3B91ED3392CCE3603FB3D44A8E*)__this)->___prototypeList_4;
		GPUInstancerPrototype_t8CC477296831E484428798CB96A46F21371C35CF* L_8 = ___prototype0;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = List_1_IndexOf_m82CAFF5E3E3F737EBD566F7141AF68642507C3EE(L_7, L_8, List_1_IndexOf_m82CAFF5E3E3F737EBD566F7141AF68642507C3EE_RuntimeMethod_var);
		V_0 = L_9;
		// TreePrototype[] treePrototypes = terrain.terrainData.treePrototypes;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_10;
		L_10 = GPUInstancerTerrainManager_get_terrain_mFE98391DD97410787405C4632E1A7E3B2BBCF4BC(__this, NULL);
		NullCheck(L_10);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_11;
		L_11 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_10, NULL);
		NullCheck(L_11);
		TreePrototypeU5BU5D_tB0255CA167F991C2C9BA3BA55DF7417168D93B7A* L_12;
		L_12 = TerrainData_get_treePrototypes_m0A43789B50E554DACB5DF88C86DA23B89DB33EEB(L_11, NULL);
		// List<TreePrototype> newTreePrototypes = new List<TreePrototype>(treePrototypes);
		List_1_t3A63FEBEE36CEFD162E0AA45228A1D2BE509CC8B* L_13 = (List_1_t3A63FEBEE36CEFD162E0AA45228A1D2BE509CC8B*)il2cpp_codegen_object_new(List_1_t3A63FEBEE36CEFD162E0AA45228A1D2BE509CC8B_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		List_1__ctor_m949FC18118317FF19F8F52941A28D9E771B6E1B5(L_13, (RuntimeObject*)L_12, List_1__ctor_m949FC18118317FF19F8F52941A28D9E771B6E1B5_RuntimeMethod_var);
		V_1 = L_13;
		// List<TreeInstance> newTreeInstanceList = new List<TreeInstance>();
		List_1_t7CDBDADC2DD3F6FE5B92D1A5EE6F8B003233585A* L_14 = (List_1_t7CDBDADC2DD3F6FE5B92D1A5EE6F8B003233585A*)il2cpp_codegen_object_new(List_1_t7CDBDADC2DD3F6FE5B92D1A5EE6F8B003233585A_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		List_1__ctor_m15D691BE05DD1AA2E0BA3FF42048E48A19571484(L_14, List_1__ctor_m15D691BE05DD1AA2E0BA3FF42048E48A19571484_RuntimeMethod_var);
		V_2 = L_14;
		// for (int i = 0; i < terrain.terrainData.treeInstances.Length; i++)
		V_4 = 0;
		goto IL_00b5;
	}

IL_0066:
	{
		// treeInstance = terrain.terrainData.treeInstances[i];
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_15;
		L_15 = GPUInstancerTerrainManager_get_terrain_mFE98391DD97410787405C4632E1A7E3B2BBCF4BC(__this, NULL);
		NullCheck(L_15);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_16;
		L_16 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_15, NULL);
		NullCheck(L_16);
		TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429* L_17;
		L_17 = TerrainData_get_treeInstances_mDAB68FD1F3677BD5CB122EA943493D5FC94B2147(L_16, NULL);
		int32_t L_18 = V_4;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		TreeInstance_t382B018173ED020660D262061EA9424682614F50 L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_3 = L_20;
		// if (treeInstance.prototypeIndex < treePrototypeIndex)
		TreeInstance_t382B018173ED020660D262061EA9424682614F50 L_21 = V_3;
		int32_t L_22 = L_21.___prototypeIndex_6;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0090;
		}
	}
	{
		// newTreeInstanceList.Add(treeInstance);
		List_1_t7CDBDADC2DD3F6FE5B92D1A5EE6F8B003233585A* L_24 = V_2;
		TreeInstance_t382B018173ED020660D262061EA9424682614F50 L_25 = V_3;
		NullCheck(L_24);
		List_1_Add_mAC6D75EF36303133FA8504C2F1312008E4EA3C10_inline(L_24, L_25, List_1_Add_mAC6D75EF36303133FA8504C2F1312008E4EA3C10_RuntimeMethod_var);
		goto IL_00af;
	}

IL_0090:
	{
		// else if (treeInstance.prototypeIndex > treePrototypeIndex)
		TreeInstance_t382B018173ED020660D262061EA9424682614F50 L_26 = V_3;
		int32_t L_27 = L_26.___prototypeIndex_6;
		int32_t L_28 = V_0;
		if ((((int32_t)L_27) <= ((int32_t)L_28)))
		{
			goto IL_00af;
		}
	}
	{
		// treeInstance.prototypeIndex = treeInstance.prototypeIndex - 1;
		TreeInstance_t382B018173ED020660D262061EA9424682614F50 L_29 = V_3;
		int32_t L_30 = L_29.___prototypeIndex_6;
		(&V_3)->___prototypeIndex_6 = ((int32_t)il2cpp_codegen_subtract(L_30, 1));
		// newTreeInstanceList.Add(treeInstance);
		List_1_t7CDBDADC2DD3F6FE5B92D1A5EE6F8B003233585A* L_31 = V_2;
		TreeInstance_t382B018173ED020660D262061EA9424682614F50 L_32 = V_3;
		NullCheck(L_31);
		List_1_Add_mAC6D75EF36303133FA8504C2F1312008E4EA3C10_inline(L_31, L_32, List_1_Add_mAC6D75EF36303133FA8504C2F1312008E4EA3C10_RuntimeMethod_var);
	}

IL_00af:
	{
		// for (int i = 0; i < terrain.terrainData.treeInstances.Length; i++)
		int32_t L_33 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00b5:
	{
		// for (int i = 0; i < terrain.terrainData.treeInstances.Length; i++)
		int32_t L_34 = V_4;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_35;
		L_35 = GPUInstancerTerrainManager_get_terrain_mFE98391DD97410787405C4632E1A7E3B2BBCF4BC(__this, NULL);
		NullCheck(L_35);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_36;
		L_36 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_35, NULL);
		NullCheck(L_36);
		TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429* L_37;
		L_37 = TerrainData_get_treeInstances_mDAB68FD1F3677BD5CB122EA943493D5FC94B2147(L_36, NULL);
		NullCheck(L_37);
		if ((((int32_t)L_34) < ((int32_t)((int32_t)(((RuntimeArray*)L_37)->max_length)))))
		{
			goto IL_0066;
		}
	}
	{
		// if (newTreePrototypes.Count > treePrototypeIndex)
		List_1_t3A63FEBEE36CEFD162E0AA45228A1D2BE509CC8B* L_38 = V_1;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = List_1_get_Count_mE78944B77F1FDA08CD652C58BF9EF9C8DCB1FA1D_inline(L_38, List_1_get_Count_mE78944B77F1FDA08CD652C58BF9EF9C8DCB1FA1D_RuntimeMethod_var);
		int32_t L_40 = V_0;
		if ((((int32_t)L_39) <= ((int32_t)L_40)))
		{
			goto IL_00db;
		}
	}
	{
		// newTreePrototypes.RemoveAt(treePrototypeIndex);
		List_1_t3A63FEBEE36CEFD162E0AA45228A1D2BE509CC8B* L_41 = V_1;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		List_1_RemoveAt_mE91259CC4BD7E6E02DCC8B2E13A8C2C0531F9CA6(L_41, L_42, List_1_RemoveAt_mE91259CC4BD7E6E02DCC8B2E13A8C2C0531F9CA6_RuntimeMethod_var);
	}

IL_00db:
	{
		// terrain.terrainData.treeInstances = newTreeInstanceList.ToArray();
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_43;
		L_43 = GPUInstancerTerrainManager_get_terrain_mFE98391DD97410787405C4632E1A7E3B2BBCF4BC(__this, NULL);
		NullCheck(L_43);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_44;
		L_44 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_43, NULL);
		List_1_t7CDBDADC2DD3F6FE5B92D1A5EE6F8B003233585A* L_45 = V_2;
		NullCheck(L_45);
		TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429* L_46;
		L_46 = List_1_ToArray_m2E3ECDF734E7FA10812DF2D499C4317EB881C405(L_45, List_1_ToArray_m2E3ECDF734E7FA10812DF2D499C4317EB881C405_RuntimeMethod_var);
		NullCheck(L_44);
		TerrainData_set_treeInstances_m4B62FA8A516D3839829AA50209897EDB7647F65D(L_44, L_46, NULL);
		// terrain.terrainData.treePrototypes = newTreePrototypes.ToArray();
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_47;
		L_47 = GPUInstancerTerrainManager_get_terrain_mFE98391DD97410787405C4632E1A7E3B2BBCF4BC(__this, NULL);
		NullCheck(L_47);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_48;
		L_48 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_47, NULL);
		List_1_t3A63FEBEE36CEFD162E0AA45228A1D2BE509CC8B* L_49 = V_1;
		NullCheck(L_49);
		TreePrototypeU5BU5D_tB0255CA167F991C2C9BA3BA55DF7417168D93B7A* L_50;
		L_50 = List_1_ToArray_m3BBEEFAD7758746DA602FBB5D7EF3DC9420D909D(L_49, List_1_ToArray_m3BBEEFAD7758746DA602FBB5D7EF3DC9420D909D_RuntimeMethod_var);
		NullCheck(L_48);
		TerrainData_set_treePrototypes_m5F309E7FFEB234DA8450C4CBD43EB7045C33BCAA(L_48, L_50, NULL);
		// terrain.terrainData.RefreshPrototypes();
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_51;
		L_51 = GPUInstancerTerrainManager_get_terrain_mFE98391DD97410787405C4632E1A7E3B2BBCF4BC(__this, NULL);
		NullCheck(L_51);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_52;
		L_52 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_51, NULL);
		NullCheck(L_52);
		TerrainData_RefreshPrototypes_mCB97A38BE96FAC08C2F2E8C1F38E88C7450CADBC(L_52, NULL);
		// if (removeSO)
		bool L_53 = ___removeSO1;
		if (!L_53)
		{
			goto IL_0122;
		}
	}
	{
		// base.DeletePrototype(prototype, removeSO);
		GPUInstancerPrototype_t8CC477296831E484428798CB96A46F21371C35CF* L_54 = ___prototype0;
		bool L_55 = ___removeSO1;
		GPUInstancerManager_DeletePrototype_mF09A587A8C06174A44906031AA251DE2BE24D919(__this, L_54, L_55, NULL);
	}

IL_0122:
	{
		// GeneratePrototypes(false);
		VirtualActionInvoker1< bool >::Invoke(13 /* System.Void GPUInstancer.GPUInstancerManager::GeneratePrototypes(System.Boolean) */, __this, (bool)0);
		// if (!removeSO)
		bool L_56 = ___removeSO1;
		if (L_56)
		{
			goto IL_013d;
		}
	}
	{
		// base.DeletePrototype(prototype, removeSO);
		GPUInstancerPrototype_t8CC477296831E484428798CB96A46F21371C35CF* L_57 = ___prototype0;
		bool L_58 = ___removeSO1;
		GPUInstancerManager_DeletePrototype_mF09A587A8C06174A44906031AA251DE2BE24D919(__this, L_57, L_58, NULL);
		return;
	}

IL_0135:
	{
		// base.DeletePrototype(prototype, removeSO);
		GPUInstancerPrototype_t8CC477296831E484428798CB96A46F21371C35CF* L_59 = ___prototype0;
		bool L_60 = ___removeSO1;
		GPUInstancerManager_DeletePrototype_mF09A587A8C06174A44906031AA251DE2BE24D919(__this, L_59, L_60, NULL);
	}

IL_013d:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator GPUInstancer.GPUInstancerTreeManager::ReplaceUnityTrees()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GPUInstancerTreeManager_ReplaceUnityTrees_mBEA232C757C9FC05085F7B99F4FA102B478BDD21 (GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CReplaceUnityTreesU3Ed__9_t549FD0ED894B9B6202161F931067A0D440ABD370_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CReplaceUnityTreesU3Ed__9_t549FD0ED894B9B6202161F931067A0D440ABD370* L_0 = (U3CReplaceUnityTreesU3Ed__9_t549FD0ED894B9B6202161F931067A0D440ABD370*)il2cpp_codegen_object_new(U3CReplaceUnityTreesU3Ed__9_t549FD0ED894B9B6202161F931067A0D440ABD370_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CReplaceUnityTreesU3Ed__9__ctor_m42D69E632F93268BF4D9A316C4D913FA6D24758D(L_0, 0, NULL);
		U3CReplaceUnityTreesU3Ed__9_t549FD0ED894B9B6202161F931067A0D440ABD370* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void GPUInstancer.GPUInstancerTreeManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUInstancerTreeManager__ctor_m6782A3D28D48526216F37E97CC7C3C38A79ECA40 (GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00* __this, const RuntimeMethod* method) 
{
	{
		// public bool initializeWithCoroutine = true;
		__this->___initializeWithCoroutine_57 = (bool)1;
		GPUInstancerTerrainManager__ctor_m792E26DA2D8FCDB17CD507D4DA675512444DF683(__this, NULL);
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
// System.Void GPUInstancer.GPUInstancerTreeManager/<ReplaceUnityTrees>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReplaceUnityTreesU3Ed__9__ctor_m42D69E632F93268BF4D9A316C4D913FA6D24758D (U3CReplaceUnityTreesU3Ed__9_t549FD0ED894B9B6202161F931067A0D440ABD370* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GPUInstancer.GPUInstancerTreeManager/<ReplaceUnityTrees>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReplaceUnityTreesU3Ed__9_System_IDisposable_Dispose_m651CF66307211F2DD9D4B0DAD3B289382834A36F (U3CReplaceUnityTreesU3Ed__9_t549FD0ED894B9B6202161F931067A0D440ABD370* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GPUInstancer.GPUInstancerTreeManager/<ReplaceUnityTrees>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CReplaceUnityTreesU3Ed__9_MoveNext_m1AE005307E85782F790FC179DE6B88F3B1AE1172 (U3CReplaceUnityTreesU3Ed__9_t549FD0ED894B9B6202161F931067A0D440ABD370* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComputeBuffer_SetData_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mCDBB37084243E107C87E4A41FE8C2DA2FDA49C15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m14F34EC787A601A0A73CFF7F211D7D062C3D7946_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7991A4D8D43E9F9C7C0DA986DF3B4CB0FD31C41C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m484EE5C5D622FA0AA4863985628C97BD6EE145B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mD7701F92B473B07880859353BE2A8B469C161087_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD34AA709207C6A86D64005E396AB58AC514D3BF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mFB99CEC61D38DFE0217DE0D134D6A7328B04AFD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUInstancerConstants_tDDBEE279B5B3385A4B5C7A8D16DB9118C3594BAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUInstancerTreePrototype_tC24B0262BB0B3719EF8749B0EDD0CF72A5E6DDE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUInstancerUtility_InitializeGPUBuffer_TisGPUInstancerRuntimeData_tAC3B9C6BB85D573FA2A3F5A8378873C2C131057C_mF77821C3A25E7869622BF59DD1A2A153C0420E56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUInstancerUtility_ReleaseInstanceBuffers_TisGPUInstancerRuntimeData_tAC3B9C6BB85D573FA2A3F5A8378873C2C131057C_m802800F338547CF5941905064A0558F75BD809AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUInstancerUtility_ReleaseInstanceBuffers_TisGPUInstancerRuntimeData_tAC3B9C6BB85D573FA2A3F5A8378873C2C131057C_mD21EE068398C494F77D5659BCD5BB50B5913D598_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrassKernelProperties_tCF7F7CD15ABCA41547E9F14DC450C7B214CE82C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m65F0731FF2C839C25530522F74BE029D34851222_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m46772991FE7070A89F3C652D43B7DECEC1F7DE29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m874D417FA6CC11A80D7FF9C9E30203F7A6E306A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7A5FFB71CC0B9A11A8FF0FC535B7D700EF76ED20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4EB3213CDA6D394BA00CA239D95B2ABCBFEDEDF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m970BE5CCB1F05BAF033736206A0C3142930127B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mCEA8EA9B52DAA0043B1D1AC4C592A47190144BFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mA33F1471D122E315DDF532464CAC03912D0B1B45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreeKernelProperties_t6BE5B2BCD15C3E0230F8A9F556679E851821F7B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisibilityKernelPoperties_t130A6A364927AB8AF0BDAFBFE9ED17A1AE66DDB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral961E7AD504BE11C952676B8F16DAD78E590DAF84);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00* V_1 = NULL;
	int32_t V_2 = 0;
	Enumerator_tCB115E1B66E6D645F629474906EB24B2039FDE89 V_3;
	memset((&V_3), 0, sizeof(V_3));
	GPUInstancerTreePrototype_tC24B0262BB0B3719EF8749B0EDD0CF72A5E6DDE2* V_4 = NULL;
	Enumerator_tE55827E469E8564863DA766418F79DE48A82AAA2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* V_6 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429* V_9 = NULL;
	TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429* V_10 = NULL;
	int32_t V_11 = 0;
	TreeInstance_t382B018173ED020660D262061EA9424682614F50 V_12;
	memset((&V_12), 0, sizeof(V_12));
	GPUInstancerRuntimeData_tAC3B9C6BB85D573FA2A3F5A8378873C2C131057C* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t G_B7_0 = 0;
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* G_B7_1 = NULL;
	int32_t G_B6_0 = 0;
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* G_B6_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B8_0;
	memset((&G_B8_0), 0, sizeof(G_B8_0));
	int32_t G_B8_1 = 0;
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* G_B8_2 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_029f;
			}
			case 2:
			{
				goto IL_04b8;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// _isCoroutineActive = true;
		GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00* L_3 = V_1;
		NullCheck(L_3);
		L_3->____isCoroutineActive_58 = (bool)1;
		// if (prototypeList.Count > 0)
		GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00* L_4 = V_1;
		NullCheck(L_4);
		List_1_tC51EA1C5181B70F9303231807AEAD89EF6C5CC0D* L_5 = ((GPUInstancerManager_tBC70675B38834A3B91ED3392CCE3603FB3D44A8E*)L_4)->___prototypeList_4;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_mCEA8EA9B52DAA0043B1D1AC4C592A47190144BFD_inline(L_5, List_1_get_Count_mCEA8EA9B52DAA0043B1D1AC4C592A47190144BFD_RuntimeMethod_var);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0546;
		}
	}
	{
		// Vector4[] treeScales = new Vector4[prototypeList.Count];
		GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00* L_7 = V_1;
		NullCheck(L_7);
		List_1_tC51EA1C5181B70F9303231807AEAD89EF6C5CC0D* L_8 = ((GPUInstancerManager_tBC70675B38834A3B91ED3392CCE3603FB3D44A8E*)L_7)->___prototypeList_4;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_mCEA8EA9B52DAA0043B1D1AC4C592A47190144BFD_inline(L_8, List_1_get_Count_mCEA8EA9B52DAA0043B1D1AC4C592A47190144BFD_RuntimeMethod_var);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_10 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)(Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)SZArrayNew(Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD_il2cpp_TypeInfo_var, (uint32_t)L_9);
		__this->___U3CtreeScalesU3E5__2_3 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtreeScalesU3E5__2_3), (void*)L_10);
		// int count = 0;
		V_2 = 0;
		// foreach (GPUInstancerTreePrototype tp in prototypeList)
		GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00* L_11 = V_1;
		NullCheck(L_11);
		List_1_tC51EA1C5181B70F9303231807AEAD89EF6C5CC0D* L_12 = ((GPUInstancerManager_tBC70675B38834A3B91ED3392CCE3603FB3D44A8E*)L_11)->___prototypeList_4;
		NullCheck(L_12);
		Enumerator_tCB115E1B66E6D645F629474906EB24B2039FDE89 L_13;
		L_13 = List_1_GetEnumerator_m874D417FA6CC11A80D7FF9C9E30203F7A6E306A1(L_12, List_1_GetEnumerator_m874D417FA6CC11A80D7FF9C9E30203F7A6E306A1_RuntimeMethod_var);
		V_3 = L_13;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b6:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m7991A4D8D43E9F9C7C0DA986DF3B4CB0FD31C41C((&V_3), Enumerator_Dispose_m7991A4D8D43E9F9C7C0DA986DF3B4CB0FD31C41C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00ab_1;
			}

IL_0067_1:
			{
				// foreach (GPUInstancerTreePrototype tp in prototypeList)
				GPUInstancerPrototype_t8CC477296831E484428798CB96A46F21371C35CF* L_14;
				L_14 = Enumerator_get_Current_mFB99CEC61D38DFE0217DE0D134D6A7328B04AFD3_inline((&V_3), Enumerator_get_Current_mFB99CEC61D38DFE0217DE0D134D6A7328B04AFD3_RuntimeMethod_var);
				V_4 = ((GPUInstancerTreePrototype_tC24B0262BB0B3719EF8749B0EDD0CF72A5E6DDE2*)CastclassClass((RuntimeObject*)L_14, GPUInstancerTreePrototype_tC24B0262BB0B3719EF8749B0EDD0CF72A5E6DDE2_il2cpp_TypeInfo_var));
				// treeScales[count] = tp.isApplyPrefabScale ? tp.prefabObject.transform.localScale : Vector3.one;
				Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_15 = __this->___U3CtreeScalesU3E5__2_3;
				int32_t L_16 = V_2;
				GPUInstancerTreePrototype_tC24B0262BB0B3719EF8749B0EDD0CF72A5E6DDE2* L_17 = V_4;
				NullCheck(L_17);
				bool L_18 = L_17->___isApplyPrefabScale_34;
				G_B6_0 = L_16;
				G_B6_1 = L_15;
				if (L_18)
				{
					G_B7_0 = L_16;
					G_B7_1 = L_15;
					goto IL_008c_1;
				}
			}
			{
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
				L_19 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
				G_B8_0 = L_19;
				G_B8_1 = G_B6_0;
				G_B8_2 = G_B6_1;
				goto IL_009d_1;
			}

IL_008c_1:
			{
				GPUInstancerTreePrototype_tC24B0262BB0B3719EF8749B0EDD0CF72A5E6DDE2* L_20 = V_4;
				NullCheck(L_20);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = ((GPUInstancerPrototype_t8CC477296831E484428798CB96A46F21371C35CF*)L_20)->___prefabObject_4;
				NullCheck(L_21);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
				L_22 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_21, NULL);
				NullCheck(L_22);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
				L_23 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_22, NULL);
				G_B8_0 = L_23;
				G_B8_1 = G_B7_0;
				G_B8_2 = G_B7_1;
			}

IL_009d_1:
			{
				Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_24;
				L_24 = Vector4_op_Implicit_mB05287DC52FC87A756AB80E837E1EC22FEEB3937_inline(G_B8_0, NULL);
				NullCheck(G_B8_2);
				(G_B8_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B8_1), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_24);
				// count++;
				int32_t L_25 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_25, 1));
			}

IL_00ab_1:
			{
				// foreach (GPUInstancerTreePrototype tp in prototypeList)
				bool L_26;
				L_26 = Enumerator_MoveNext_mD7701F92B473B07880859353BE2A8B469C161087((&V_3), Enumerator_MoveNext_mD7701F92B473B07880859353BE2A8B469C161087_RuntimeMethod_var);
				if (L_26)
				{
					goto IL_0067_1;
				}
			}
			{
				goto IL_00c4;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00c4:
	{
		// int[] instanceCounts = new int[prototypeList.Count];
		GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00* L_27 = V_1;
		NullCheck(L_27);
		List_1_tC51EA1C5181B70F9303231807AEAD89EF6C5CC0D* L_28 = ((GPUInstancerManager_tBC70675B38834A3B91ED3392CCE3603FB3D44A8E*)L_27)->___prototypeList_4;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = List_1_get_Count_mCEA8EA9B52DAA0043B1D1AC4C592A47190144BFD_inline(L_28, List_1_get_Count_mCEA8EA9B52DAA0043B1D1AC4C592A47190144BFD_RuntimeMethod_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_29);
		__this->___U3CinstanceCountsU3E5__3_4 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CinstanceCountsU3E5__3_4), (void*)L_30);
		// List<Vector4> treeDataList = new List<Vector4>(); // prototypeIndex - positionx3 - rotation - scalex2
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_31 = (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*)il2cpp_codegen_object_new(List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		List_1__ctor_m7A5FFB71CC0B9A11A8FF0FC535B7D700EF76ED20(L_31, List_1__ctor_m7A5FFB71CC0B9A11A8FF0FC535B7D700EF76ED20_RuntimeMethod_var);
		__this->___U3CtreeDataListU3E5__4_5 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtreeDataListU3E5__4_5), (void*)L_31);
		// int instanceTotal = 0;
		__this->___U3CinstanceTotalU3E5__5_6 = 0;
		// foreach (Terrain terrain in _terrains)
		GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00* L_32 = V_1;
		NullCheck(L_32);
		List_1_tD2AD001A66810CB968E98D9E635A799408554017* L_33 = ((GPUInstancerTerrainManager_t5D14A71A3AF1435E15D974025C65071A3D39CD90*)L_32)->____terrains_49;
		NullCheck(L_33);
		Enumerator_tE55827E469E8564863DA766418F79DE48A82AAA2 L_34;
		L_34 = List_1_GetEnumerator_m46772991FE7070A89F3C652D43B7DECEC1F7DE29(L_33, List_1_GetEnumerator_m46772991FE7070A89F3C652D43B7DECEC1F7DE29_RuntimeMethod_var);
		V_5 = L_34;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0265:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m14F34EC787A601A0A73CFF7F211D7D062C3D7946((&V_5), Enumerator_Dispose_m14F34EC787A601A0A73CFF7F211D7D062C3D7946_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0257_1;
			}

IL_00fe_1:
			{
				// foreach (Terrain terrain in _terrains)
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_35;
				L_35 = Enumerator_get_Current_mD34AA709207C6A86D64005E396AB58AC514D3BF4_inline((&V_5), Enumerator_get_Current_mD34AA709207C6A86D64005E396AB58AC514D3BF4_RuntimeMethod_var);
				V_6 = L_35;
				// if (terrain == null)
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_36 = V_6;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_37;
				L_37 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_36, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (L_37)
				{
					goto IL_0257_1;
				}
			}
			{
				// if (terrain.terrainData.treePrototypes.Length > prototypeList.Count)
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_38 = V_6;
				NullCheck(L_38);
				TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_39;
				L_39 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_38, NULL);
				NullCheck(L_39);
				TreePrototypeU5BU5D_tB0255CA167F991C2C9BA3BA55DF7417168D93B7A* L_40;
				L_40 = TerrainData_get_treePrototypes_m0A43789B50E554DACB5DF88C86DA23B89DB33EEB(L_39, NULL);
				NullCheck(L_40);
				GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00* L_41 = V_1;
				NullCheck(L_41);
				List_1_tC51EA1C5181B70F9303231807AEAD89EF6C5CC0D* L_42 = ((GPUInstancerManager_tBC70675B38834A3B91ED3392CCE3603FB3D44A8E*)L_41)->___prototypeList_4;
				NullCheck(L_42);
				int32_t L_43;
				L_43 = List_1_get_Count_mCEA8EA9B52DAA0043B1D1AC4C592A47190144BFD_inline(L_42, List_1_get_Count_mCEA8EA9B52DAA0043B1D1AC4C592A47190144BFD_RuntimeMethod_var);
				if ((((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))) <= ((int32_t)L_43)))
				{
					goto IL_0140_1;
				}
			}
			{
				// Debug.LogError("Additional Terrain has more Tree prototypes than defined prototypes on the Tree Manager. Tree Manager requires every Terrain to have the same Tree prototypes defined.", terrain);
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_44 = V_6;
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_m385F8F46AD9C455E80053F42571A7CE321915C0A(_stringLiteral961E7AD504BE11C952676B8F16DAD78E590DAF84, L_44, NULL);
				// continue;
				goto IL_0257_1;
			}

IL_0140_1:
			{
				// terrain.treeDistance = 0f; // will not persist if called at runtime.
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_45 = V_6;
				NullCheck(L_45);
				Terrain_set_treeDistance_m8836D1691B1C7BDC76725A624601E6543806C14C(L_45, (0.0f), NULL);
				// Vector3 terrainSize = terrain.terrainData.size;
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_46 = V_6;
				NullCheck(L_46);
				TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_47;
				L_47 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_46, NULL);
				NullCheck(L_47);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
				L_48 = TerrainData_get_size_mCD3977F344B9DEBFF61DD537D03FEB9473838DA5(L_47, NULL);
				V_7 = L_48;
				// Vector3 terrainPosition = terrain.GetPosition();
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_49 = V_6;
				NullCheck(L_49);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
				L_50 = Terrain_GetPosition_m5A1020F22CA4B1818E69A3B9687668AFAB2C43F5(L_49, NULL);
				V_8 = L_50;
				// TreeInstance[] treeInstances = terrain.terrainData.treeInstances;
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_51 = V_6;
				NullCheck(L_51);
				TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_52;
				L_52 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_51, NULL);
				NullCheck(L_52);
				TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429* L_53;
				L_53 = TerrainData_get_treeInstances_mDAB68FD1F3677BD5CB122EA943493D5FC94B2147(L_52, NULL);
				V_9 = L_53;
				// instanceTotal += treeInstances.Length;
				int32_t L_54 = __this->___U3CinstanceTotalU3E5__5_6;
				TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429* L_55 = V_9;
				NullCheck(L_55);
				__this->___U3CinstanceTotalU3E5__5_6 = ((int32_t)il2cpp_codegen_add(L_54, ((int32_t)(((RuntimeArray*)L_55)->max_length))));
				// foreach (TreeInstance treeInstance in treeInstances)
				TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429* L_56 = V_9;
				V_10 = L_56;
				V_11 = 0;
				goto IL_024c_1;
			}

IL_018e_1:
			{
				// foreach (TreeInstance treeInstance in treeInstances)
				TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429* L_57 = V_10;
				int32_t L_58 = V_11;
				NullCheck(L_57);
				int32_t L_59 = L_58;
				TreeInstance_t382B018173ED020660D262061EA9424682614F50 L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
				V_12 = L_60;
				// treeDataList.Add(new Vector4(
				//     treeInstance.prototypeIndex,
				//     treeInstance.position.x * terrainSize.x + terrainPosition.x,
				//     treeInstance.position.y * terrainSize.y + terrainPosition.y,
				//     treeInstance.position.z * terrainSize.z + terrainPosition.z
				//     ));
				List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_61 = __this->___U3CtreeDataListU3E5__4_5;
				TreeInstance_t382B018173ED020660D262061EA9424682614F50 L_62 = V_12;
				int32_t L_63 = L_62.___prototypeIndex_6;
				TreeInstance_t382B018173ED020660D262061EA9424682614F50 L_64 = V_12;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65 = L_64.___position_0;
				float L_66 = L_65.___x_2;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67 = V_7;
				float L_68 = L_67.___x_2;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69 = V_8;
				float L_70 = L_69.___x_2;
				TreeInstance_t382B018173ED020660D262061EA9424682614F50 L_71 = V_12;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72 = L_71.___position_0;
				float L_73 = L_72.___y_3;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74 = V_7;
				float L_75 = L_74.___y_3;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = V_8;
				float L_77 = L_76.___y_3;
				TreeInstance_t382B018173ED020660D262061EA9424682614F50 L_78 = V_12;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79 = L_78.___position_0;
				float L_80 = L_79.___z_4;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81 = V_7;
				float L_82 = L_81.___z_4;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83 = V_8;
				float L_84 = L_83.___z_4;
				Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_85;
				memset((&L_85), 0, sizeof(L_85));
				Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_85), ((float)L_63), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_66, L_68)), L_70)), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_73, L_75)), L_77)), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_80, L_82)), L_84)), /*hidden argument*/NULL);
				NullCheck(L_61);
				List_1_Add_m65F0731FF2C839C25530522F74BE029D34851222_inline(L_61, L_85, List_1_Add_m65F0731FF2C839C25530522F74BE029D34851222_RuntimeMethod_var);
				// treeDataList.Add(new Vector4(
				//     treeInstance.rotation,
				//     treeInstance.widthScale,
				//     treeInstance.heightScale,
				//     0
				//     ));
				List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_86 = __this->___U3CtreeDataListU3E5__4_5;
				TreeInstance_t382B018173ED020660D262061EA9424682614F50 L_87 = V_12;
				float L_88 = L_87.___rotation_3;
				TreeInstance_t382B018173ED020660D262061EA9424682614F50 L_89 = V_12;
				float L_90 = L_89.___widthScale_1;
				TreeInstance_t382B018173ED020660D262061EA9424682614F50 L_91 = V_12;
				float L_92 = L_91.___heightScale_2;
				Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_93;
				memset((&L_93), 0, sizeof(L_93));
				Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_93), L_88, L_90, L_92, (0.0f), /*hidden argument*/NULL);
				NullCheck(L_86);
				List_1_Add_m65F0731FF2C839C25530522F74BE029D34851222_inline(L_86, L_93, List_1_Add_m65F0731FF2C839C25530522F74BE029D34851222_RuntimeMethod_var);
				// instanceCounts[treeInstance.prototypeIndex]++;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_94 = __this->___U3CinstanceCountsU3E5__3_4;
				TreeInstance_t382B018173ED020660D262061EA9424682614F50 L_95 = V_12;
				int32_t L_96 = L_95.___prototypeIndex_6;
				NullCheck(L_94);
				int32_t* L_97 = ((L_94)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_96)));
				int32_t L_98 = *((int32_t*)L_97);
				*((int32_t*)L_97) = (int32_t)((int32_t)il2cpp_codegen_add(L_98, 1));
				int32_t L_99 = V_11;
				V_11 = ((int32_t)il2cpp_codegen_add(L_99, 1));
			}

IL_024c_1:
			{
				// foreach (TreeInstance treeInstance in treeInstances)
				int32_t L_100 = V_11;
				TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429* L_101 = V_10;
				NullCheck(L_101);
				if ((((int32_t)L_100) < ((int32_t)((int32_t)(((RuntimeArray*)L_101)->max_length)))))
				{
					goto IL_018e_1;
				}
			}

IL_0257_1:
			{
				// foreach (Terrain terrain in _terrains)
				bool L_102;
				L_102 = Enumerator_MoveNext_m484EE5C5D622FA0AA4863985628C97BD6EE145B7((&V_5), Enumerator_MoveNext_m484EE5C5D622FA0AA4863985628C97BD6EE145B7_RuntimeMethod_var);
				if (L_102)
				{
					goto IL_00fe_1;
				}
			}
			{
				goto IL_0273;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0273:
	{
		// if (instanceTotal > 0)
		int32_t L_103 = __this->___U3CinstanceTotalU3E5__5_6;
		if ((((int32_t)L_103) <= ((int32_t)0)))
		{
			goto IL_0526;
		}
	}
	{
		// if (initializeWithCoroutine && !isInitialized)
		GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00* L_104 = V_1;
		NullCheck(L_104);
		bool L_105 = L_104->___initializeWithCoroutine_57;
		if (!L_105)
		{
			goto IL_02a6;
		}
	}
	{
		GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00* L_106 = V_1;
		NullCheck(L_106);
		bool L_107 = ((GPUInstancerManager_tBC70675B38834A3B91ED3392CCE3603FB3D44A8E*)L_106)->___isInitialized_41;
		if (L_107)
		{
			goto IL_02a6;
		}
	}
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_029f:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_02a6:
	{
		// ComputeBuffer treeDataBuffer = new ComputeBuffer(treeDataList.Count, GPUInstancerConstants.STRIDE_SIZE_FLOAT4);
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_108 = __this->___U3CtreeDataListU3E5__4_5;
		NullCheck(L_108);
		int32_t L_109;
		L_109 = List_1_get_Count_m970BE5CCB1F05BAF033736206A0C3142930127B0_inline(L_108, List_1_get_Count_m970BE5CCB1F05BAF033736206A0C3142930127B0_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(GPUInstancerConstants_tDDBEE279B5B3385A4B5C7A8D16DB9118C3594BAF_il2cpp_TypeInfo_var);
		int32_t L_110 = ((GPUInstancerConstants_tDDBEE279B5B3385A4B5C7A8D16DB9118C3594BAF_StaticFields*)il2cpp_codegen_static_fields_for(GPUInstancerConstants_tDDBEE279B5B3385A4B5C7A8D16DB9118C3594BAF_il2cpp_TypeInfo_var))->___STRIDE_SIZE_FLOAT4_6;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_111 = (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*)il2cpp_codegen_object_new(ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233_il2cpp_TypeInfo_var);
		NullCheck(L_111);
		ComputeBuffer__ctor_mE40DE5EF5ADAC29B6B4DECBD1EE33E8526202617(L_111, L_109, L_110, NULL);
		__this->___U3CtreeDataBufferU3E5__6_7 = L_111;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtreeDataBufferU3E5__6_7), (void*)L_111);
		// treeDataBuffer.SetData(treeDataList);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_112 = __this->___U3CtreeDataBufferU3E5__6_7;
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_113 = __this->___U3CtreeDataListU3E5__4_5;
		NullCheck(L_112);
		ComputeBuffer_SetData_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mCDBB37084243E107C87E4A41FE8C2DA2FDA49C15(L_112, L_113, ComputeBuffer_SetData_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mCDBB37084243E107C87E4A41FE8C2DA2FDA49C15_RuntimeMethod_var);
		// ComputeBuffer treeScalesBuffer = new ComputeBuffer(treeScales.Length, GPUInstancerConstants.STRIDE_SIZE_FLOAT4);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_114 = __this->___U3CtreeScalesU3E5__2_3;
		NullCheck(L_114);
		int32_t L_115 = ((GPUInstancerConstants_tDDBEE279B5B3385A4B5C7A8D16DB9118C3594BAF_StaticFields*)il2cpp_codegen_static_fields_for(GPUInstancerConstants_tDDBEE279B5B3385A4B5C7A8D16DB9118C3594BAF_il2cpp_TypeInfo_var))->___STRIDE_SIZE_FLOAT4_6;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_116 = (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*)il2cpp_codegen_object_new(ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233_il2cpp_TypeInfo_var);
		NullCheck(L_116);
		ComputeBuffer__ctor_mE40DE5EF5ADAC29B6B4DECBD1EE33E8526202617(L_116, ((int32_t)(((RuntimeArray*)L_114)->max_length)), L_115, NULL);
		__this->___U3CtreeScalesBufferU3E5__7_8 = L_116;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtreeScalesBufferU3E5__7_8), (void*)L_116);
		// treeScalesBuffer.SetData(treeScales);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_117 = __this->___U3CtreeScalesBufferU3E5__7_8;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_118 = __this->___U3CtreeScalesU3E5__2_3;
		NullCheck(L_117);
		ComputeBuffer_SetData_m9F845E6B347CE028FA9A987D740FC642D828013A(L_117, (RuntimeArray*)L_118, NULL);
		// ComputeBuffer counterBuffer = new ComputeBuffer(1, GPUInstancerConstants.STRIDE_SIZE_INT);
		int32_t L_119 = ((GPUInstancerConstants_tDDBEE279B5B3385A4B5C7A8D16DB9118C3594BAF_StaticFields*)il2cpp_codegen_static_fields_for(GPUInstancerConstants_tDDBEE279B5B3385A4B5C7A8D16DB9118C3594BAF_il2cpp_TypeInfo_var))->___STRIDE_SIZE_INT_4;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_120 = (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*)il2cpp_codegen_object_new(ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233_il2cpp_TypeInfo_var);
		NullCheck(L_120);
		ComputeBuffer__ctor_mE40DE5EF5ADAC29B6B4DECBD1EE33E8526202617(L_120, 1, L_119, NULL);
		__this->___U3CcounterBufferU3E5__8_9 = L_120;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcounterBufferU3E5__8_9), (void*)L_120);
		// uint[] emptyCounterData = new uint[1];
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_121 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->___U3CemptyCounterDataU3E5__9_10 = L_121;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CemptyCounterDataU3E5__9_10), (void*)L_121);
		// treeDataList = null;
		__this->___U3CtreeDataListU3E5__4_5 = (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtreeDataListU3E5__4_5), (void*)(List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*)NULL);
		// treeScales = null;
		__this->___U3CtreeScalesU3E5__2_3 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtreeScalesU3E5__2_3), (void*)(Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)NULL);
		// for (int i = 0; i < runtimeDataList.Count; i++)
		__this->___U3CiU3E5__10_11 = 0;
		goto IL_04d1;
	}

IL_0332:
	{
		// runtimeData = runtimeDataList[i];
		GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00* L_122 = V_1;
		NullCheck(L_122);
		List_1_t8FDAD79D15A0E06F4397907AE6788258276E8978* L_123 = ((GPUInstancerManager_tBC70675B38834A3B91ED3392CCE3603FB3D44A8E*)L_122)->___runtimeDataList_11;
		int32_t L_124 = __this->___U3CiU3E5__10_11;
		NullCheck(L_123);
		GPUInstancerRuntimeData_tAC3B9C6BB85D573FA2A3F5A8378873C2C131057C* L_125;
		L_125 = List_1_get_Item_mA33F1471D122E315DDF532464CAC03912D0B1B45(L_123, L_124, List_1_get_Item_mA33F1471D122E315DDF532464CAC03912D0B1B45_RuntimeMethod_var);
		V_13 = L_125;
		// int instanceCount = instanceCounts[i];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_126 = __this->___U3CinstanceCountsU3E5__3_4;
		int32_t L_127 = __this->___U3CiU3E5__10_11;
		NullCheck(L_126);
		int32_t L_128 = L_127;
		int32_t L_129 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		V_14 = L_129;
		// runtimeData.bufferSize = instanceCount;
		GPUInstancerRuntimeData_tAC3B9C6BB85D573FA2A3F5A8378873C2C131057C* L_130 = V_13;
		int32_t L_131 = V_14;
		NullCheck(L_130);
		L_130->___bufferSize_10 = L_131;
		// runtimeData.instanceCount = instanceCount;
		GPUInstancerRuntimeData_tAC3B9C6BB85D573FA2A3F5A8378873C2C131057C* L_132 = V_13;
		int32_t L_133 = V_14;
		NullCheck(L_132);
		L_132->___instanceCount_9 = L_133;
		// if (instanceCount == 0)
		int32_t L_134 = V_14;
		if (L_134)
		{
			goto IL_0376;
		}
	}
	{
		// GPUInstancerUtility.ReleaseInstanceBuffers(runtimeData);
		GPUInstancerRuntimeData_tAC3B9C6BB85D573FA2A3F5A8378873C2C131057C* L_135 = V_13;
		GPUInstancerUtility_ReleaseInstanceBuffers_TisGPUInstancerRuntimeData_tAC3B9C6BB85D573FA2A3F5A8378873C2C131057C_m802800F338547CF5941905064A0558F75BD809AA(L_135, GPUInstancerUtility_ReleaseInstanceBuffers_TisGPUInstancerRuntimeData_tAC3B9C6BB85D573FA2A3F5A8378873C2C131057C_m802800F338547CF5941905064A0558F75BD809AA_RuntimeMethod_var);
		// continue;
		goto IL_04bf;
	}

IL_0376:
	{
		// counterBuffer.SetData(emptyCounterData);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_136 = __this->___U3CcounterBufferU3E5__8_9;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_137 = __this->___U3CemptyCounterDataU3E5__9_10;
		NullCheck(L_136);
		ComputeBuffer_SetData_m9F845E6B347CE028FA9A987D740FC642D828013A(L_136, (RuntimeArray*)L_137, NULL);
		// if (runtimeData.transformationMatrixVisibilityBuffer != null)
		GPUInstancerRuntimeData_tAC3B9C6BB85D573FA2A3F5A8378873C2C131057C* L_138 = V_13;
		NullCheck(L_138);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_139 = L_138->___transformationMatrixVisibilityBuffer_11;
		if (!L_139)
		{
			goto IL_039c;
		}
	}
	{
		// runtimeData.transformationMatrixVisibilityBuffer.Release();
		GPUInstancerRuntimeData_tAC3B9C6BB85D573FA2A3F5A8378873C2C131057C* L_140 = V_13;
		NullCheck(L_140);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_141 = L_140->___transformationMatrixVisibilityBuffer_11;
		NullCheck(L_141);
		ComputeBuffer_Release_mF1F157C929A0A5B2FDCD703A286EE09723450B72(L_141, NULL);
	}

IL_039c:
	{
		// runtimeData.transformationMatrixVisibilityBuffer = new ComputeBuffer(instanceCount, GPUInstancerConstants.STRIDE_SIZE_MATRIX4X4);
		GPUInstancerRuntimeData_tAC3B9C6BB85D573FA2A3F5A8378873C2C131057C* L_142 = V_13;
		int32_t L_143 = V_14;
		il2cpp_codegen_runtime_class_init_inline(GPUInstancerConstants_tDDBEE279B5B3385A4B5C7A8D16DB9118C3594BAF_il2cpp_TypeInfo_var);
		int32_t L_144 = ((GPUInstancerConstants_tDDBEE279B5B3385A4B5C7A8D16DB9118C3594BAF_StaticFields*)il2cpp_codegen_static_fields_for(GPUInstancerConstants_tDDBEE279B5B3385A4B5C7A8D16DB9118C3594BAF_il2cpp_TypeInfo_var))->___STRIDE_SIZE_MATRIX4X4_2;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_145 = (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*)il2cpp_codegen_object_new(ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233_il2cpp_TypeInfo_var);
		NullCheck(L_145);
		ComputeBuffer__ctor_mE40DE5EF5ADAC29B6B4DECBD1EE33E8526202617(L_145, L_143, L_144, NULL);
		NullCheck(L_142);
		L_142->___transformationMatrixVisibilityBuffer_11 = L_145;
		Il2CppCodeGenWriteBarrier((void**)(&L_142->___transformationMatrixVisibilityBuffer_11), (void*)L_145);
		// _treeInstantiationComputeShader.SetBuffer(0,
		//     GPUInstancerConstants.VisibilityKernelPoperties.INSTANCE_DATA_BUFFER, runtimeData.transformationMatrixVisibilityBuffer);
		ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* L_146 = ((GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00_StaticFields*)il2cpp_codegen_static_fields_for(GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00_il2cpp_TypeInfo_var))->____treeInstantiationComputeShader_56;
		il2cpp_codegen_runtime_class_init_inline(VisibilityKernelPoperties_t130A6A364927AB8AF0BDAFBFE9ED17A1AE66DDB0_il2cpp_TypeInfo_var);
		int32_t L_147 = ((VisibilityKernelPoperties_t130A6A364927AB8AF0BDAFBFE9ED17A1AE66DDB0_StaticFields*)il2cpp_codegen_static_fields_for(VisibilityKernelPoperties_t130A6A364927AB8AF0BDAFBFE9ED17A1AE66DDB0_il2cpp_TypeInfo_var))->___INSTANCE_DATA_BUFFER_3;
		GPUInstancerRuntimeData_tAC3B9C6BB85D573FA2A3F5A8378873C2C131057C* L_148 = V_13;
		NullCheck(L_148);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_149 = L_148->___transformationMatrixVisibilityBuffer_11;
		NullCheck(L_146);
		ComputeShader_SetBuffer_m82184DFEA1DFC8788DBF2A97BAE1ACA422024FBF(L_146, 0, L_147, L_149, NULL);
		// _treeInstantiationComputeShader.SetBuffer(0,
		//     GPUInstancerConstants.TreeKernelProperties.TREE_DATA, treeDataBuffer);
		ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* L_150 = ((GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00_StaticFields*)il2cpp_codegen_static_fields_for(GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00_il2cpp_TypeInfo_var))->____treeInstantiationComputeShader_56;
		il2cpp_codegen_runtime_class_init_inline(TreeKernelProperties_t6BE5B2BCD15C3E0230F8A9F556679E851821F7B6_il2cpp_TypeInfo_var);
		int32_t L_151 = ((TreeKernelProperties_t6BE5B2BCD15C3E0230F8A9F556679E851821F7B6_StaticFields*)il2cpp_codegen_static_fields_for(TreeKernelProperties_t6BE5B2BCD15C3E0230F8A9F556679E851821F7B6_il2cpp_TypeInfo_var))->___TREE_DATA_0;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_152 = __this->___U3CtreeDataBufferU3E5__6_7;
		NullCheck(L_150);
		ComputeShader_SetBuffer_m82184DFEA1DFC8788DBF2A97BAE1ACA422024FBF(L_150, 0, L_151, L_152, NULL);
		// _treeInstantiationComputeShader.SetBuffer(0,
		//     GPUInstancerConstants.TreeKernelProperties.TREE_SCALES, treeScalesBuffer);
		ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* L_153 = ((GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00_StaticFields*)il2cpp_codegen_static_fields_for(GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00_il2cpp_TypeInfo_var))->____treeInstantiationComputeShader_56;
		int32_t L_154 = ((TreeKernelProperties_t6BE5B2BCD15C3E0230F8A9F556679E851821F7B6_StaticFields*)il2cpp_codegen_static_fields_for(TreeKernelProperties_t6BE5B2BCD15C3E0230F8A9F556679E851821F7B6_il2cpp_TypeInfo_var))->___TREE_SCALES_1;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_155 = __this->___U3CtreeScalesBufferU3E5__7_8;
		NullCheck(L_153);
		ComputeShader_SetBuffer_m82184DFEA1DFC8788DBF2A97BAE1ACA422024FBF(L_153, 0, L_154, L_155, NULL);
		// _treeInstantiationComputeShader.SetBuffer(0,
		//     GPUInstancerConstants.GrassKernelProperties.COUNTER_BUFFER, counterBuffer);
		ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* L_156 = ((GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00_StaticFields*)il2cpp_codegen_static_fields_for(GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00_il2cpp_TypeInfo_var))->____treeInstantiationComputeShader_56;
		il2cpp_codegen_runtime_class_init_inline(GrassKernelProperties_tCF7F7CD15ABCA41547E9F14DC450C7B214CE82C9_il2cpp_TypeInfo_var);
		int32_t L_157 = ((GrassKernelProperties_tCF7F7CD15ABCA41547E9F14DC450C7B214CE82C9_StaticFields*)il2cpp_codegen_static_fields_for(GrassKernelProperties_tCF7F7CD15ABCA41547E9F14DC450C7B214CE82C9_il2cpp_TypeInfo_var))->___COUNTER_BUFFER_2;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_158 = __this->___U3CcounterBufferU3E5__8_9;
		NullCheck(L_156);
		ComputeShader_SetBuffer_m82184DFEA1DFC8788DBF2A97BAE1ACA422024FBF(L_156, 0, L_157, L_158, NULL);
		// _treeInstantiationComputeShader.SetInt(
		//     GPUInstancerConstants.VisibilityKernelPoperties.BUFFER_PARAMETER_BUFFER_SIZE, instanceTotal);
		ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* L_159 = ((GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00_StaticFields*)il2cpp_codegen_static_fields_for(GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00_il2cpp_TypeInfo_var))->____treeInstantiationComputeShader_56;
		int32_t L_160 = ((VisibilityKernelPoperties_t130A6A364927AB8AF0BDAFBFE9ED17A1AE66DDB0_StaticFields*)il2cpp_codegen_static_fields_for(VisibilityKernelPoperties_t130A6A364927AB8AF0BDAFBFE9ED17A1AE66DDB0_il2cpp_TypeInfo_var))->___BUFFER_PARAMETER_BUFFER_SIZE_15;
		int32_t L_161 = __this->___U3CinstanceTotalU3E5__5_6;
		NullCheck(L_159);
		ComputeShader_SetInt_m5BED46962875818A120FA6D2E4FD820B62BCE8AD(L_159, L_160, L_161, NULL);
		// _treeInstantiationComputeShader.SetBool(
		//     GPUInstancerConstants.TreeKernelProperties.IS_APPLY_ROTATION, ((GPUInstancerTreePrototype)runtimeData.prototype).isApplyRotation);
		ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* L_162 = ((GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00_StaticFields*)il2cpp_codegen_static_fields_for(GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00_il2cpp_TypeInfo_var))->____treeInstantiationComputeShader_56;
		int32_t L_163 = ((TreeKernelProperties_t6BE5B2BCD15C3E0230F8A9F556679E851821F7B6_StaticFields*)il2cpp_codegen_static_fields_for(TreeKernelProperties_t6BE5B2BCD15C3E0230F8A9F556679E851821F7B6_il2cpp_TypeInfo_var))->___IS_APPLY_ROTATION_3;
		GPUInstancerRuntimeData_tAC3B9C6BB85D573FA2A3F5A8378873C2C131057C* L_164 = V_13;
		NullCheck(L_164);
		GPUInstancerPrototype_t8CC477296831E484428798CB96A46F21371C35CF* L_165 = L_164->___prototype_0;
		NullCheck(((GPUInstancerTreePrototype_tC24B0262BB0B3719EF8749B0EDD0CF72A5E6DDE2*)CastclassClass((RuntimeObject*)L_165, GPUInstancerTreePrototype_tC24B0262BB0B3719EF8749B0EDD0CF72A5E6DDE2_il2cpp_TypeInfo_var)));
		bool L_166 = ((GPUInstancerTreePrototype_tC24B0262BB0B3719EF8749B0EDD0CF72A5E6DDE2*)CastclassClass((RuntimeObject*)L_165, GPUInstancerTreePrototype_tC24B0262BB0B3719EF8749B0EDD0CF72A5E6DDE2_il2cpp_TypeInfo_var))->___isApplyRotation_33;
		NullCheck(L_162);
		ComputeShader_SetBool_mACF8675E1A5531A69C8D5A2C2A76FC1E006CB01E(L_162, L_163, L_166, NULL);
		// _treeInstantiationComputeShader.SetBool(
		//     GPUInstancerConstants.TreeKernelProperties.IS_APPLY_TERRAIN_HEIGHT, ((GPUInstancerTreePrototype)runtimeData.prototype).isApplyTerrainHeight);
		ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* L_167 = ((GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00_StaticFields*)il2cpp_codegen_static_fields_for(GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00_il2cpp_TypeInfo_var))->____treeInstantiationComputeShader_56;
		int32_t L_168 = ((TreeKernelProperties_t6BE5B2BCD15C3E0230F8A9F556679E851821F7B6_StaticFields*)il2cpp_codegen_static_fields_for(TreeKernelProperties_t6BE5B2BCD15C3E0230F8A9F556679E851821F7B6_il2cpp_TypeInfo_var))->___IS_APPLY_TERRAIN_HEIGHT_4;
		GPUInstancerRuntimeData_tAC3B9C6BB85D573FA2A3F5A8378873C2C131057C* L_169 = V_13;
		NullCheck(L_169);
		GPUInstancerPrototype_t8CC477296831E484428798CB96A46F21371C35CF* L_170 = L_169->___prototype_0;
		NullCheck(((GPUInstancerTreePrototype_tC24B0262BB0B3719EF8749B0EDD0CF72A5E6DDE2*)CastclassClass((RuntimeObject*)L_170, GPUInstancerTreePrototype_tC24B0262BB0B3719EF8749B0EDD0CF72A5E6DDE2_il2cpp_TypeInfo_var)));
		bool L_171 = ((GPUInstancerTreePrototype_tC24B0262BB0B3719EF8749B0EDD0CF72A5E6DDE2*)CastclassClass((RuntimeObject*)L_170, GPUInstancerTreePrototype_tC24B0262BB0B3719EF8749B0EDD0CF72A5E6DDE2_il2cpp_TypeInfo_var))->___isApplyTerrainHeight_35;
		NullCheck(L_167);
		ComputeShader_SetBool_mACF8675E1A5531A69C8D5A2C2A76FC1E006CB01E(L_167, L_168, L_171, NULL);
		// _treeInstantiationComputeShader.SetInt(
		//     GPUInstancerConstants.TreeKernelProperties.PROTOTYPE_INDEX, i);
		ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* L_172 = ((GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00_StaticFields*)il2cpp_codegen_static_fields_for(GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00_il2cpp_TypeInfo_var))->____treeInstantiationComputeShader_56;
		int32_t L_173 = ((TreeKernelProperties_t6BE5B2BCD15C3E0230F8A9F556679E851821F7B6_StaticFields*)il2cpp_codegen_static_fields_for(TreeKernelProperties_t6BE5B2BCD15C3E0230F8A9F556679E851821F7B6_il2cpp_TypeInfo_var))->___PROTOTYPE_INDEX_5;
		int32_t L_174 = __this->___U3CiU3E5__10_11;
		NullCheck(L_172);
		ComputeShader_SetInt_m5BED46962875818A120FA6D2E4FD820B62BCE8AD(L_172, L_173, L_174, NULL);
		// _treeInstantiationComputeShader.Dispatch(0,
		//     Mathf.CeilToInt(instanceTotal / GPUInstancerConstants.COMPUTE_SHADER_THREAD_COUNT), 1, 1);
		ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* L_175 = ((GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00_StaticFields*)il2cpp_codegen_static_fields_for(GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00_il2cpp_TypeInfo_var))->____treeInstantiationComputeShader_56;
		int32_t L_176 = __this->___U3CinstanceTotalU3E5__5_6;
		float L_177 = ((GPUInstancerConstants_tDDBEE279B5B3385A4B5C7A8D16DB9118C3594BAF_StaticFields*)il2cpp_codegen_static_fields_for(GPUInstancerConstants_tDDBEE279B5B3385A4B5C7A8D16DB9118C3594BAF_il2cpp_TypeInfo_var))->___COMPUTE_SHADER_THREAD_COUNT_7;
		int32_t L_178;
		L_178 = Mathf_CeilToInt_m04999E3DEB696135EFD620A30F51503D700C1998_inline(((float)(((float)L_176)/L_177)), NULL);
		NullCheck(L_175);
		ComputeShader_Dispatch_mEED7BA68C28B1B39E75208D0D4D9915D41985B0A(L_175, 0, L_178, 1, 1, NULL);
		// GPUInstancerUtility.InitializeGPUBuffer(runtimeData);
		GPUInstancerRuntimeData_tAC3B9C6BB85D573FA2A3F5A8378873C2C131057C* L_179 = V_13;
		GPUInstancerUtility_InitializeGPUBuffer_TisGPUInstancerRuntimeData_tAC3B9C6BB85D573FA2A3F5A8378873C2C131057C_mF77821C3A25E7869622BF59DD1A2A153C0420E56(L_179, GPUInstancerUtility_InitializeGPUBuffer_TisGPUInstancerRuntimeData_tAC3B9C6BB85D573FA2A3F5A8378873C2C131057C_mF77821C3A25E7869622BF59DD1A2A153C0420E56_RuntimeMethod_var);
		// if (initializeWithCoroutine && !isInitialized)
		GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00* L_180 = V_1;
		NullCheck(L_180);
		bool L_181 = L_180->___initializeWithCoroutine_57;
		if (!L_181)
		{
			goto IL_04bf;
		}
	}
	{
		GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00* L_182 = V_1;
		NullCheck(L_182);
		bool L_183 = ((GPUInstancerManager_tBC70675B38834A3B91ED3392CCE3603FB3D44A8E*)L_182)->___isInitialized_41;
		if (L_183)
		{
			goto IL_04bf;
		}
	}
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_04b8:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_04bf:
	{
		// for (int i = 0; i < runtimeDataList.Count; i++)
		int32_t L_184 = __this->___U3CiU3E5__10_11;
		V_11 = L_184;
		int32_t L_185 = V_11;
		__this->___U3CiU3E5__10_11 = ((int32_t)il2cpp_codegen_add(L_185, 1));
	}

IL_04d1:
	{
		// for (int i = 0; i < runtimeDataList.Count; i++)
		int32_t L_186 = __this->___U3CiU3E5__10_11;
		GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00* L_187 = V_1;
		NullCheck(L_187);
		List_1_t8FDAD79D15A0E06F4397907AE6788258276E8978* L_188 = ((GPUInstancerManager_tBC70675B38834A3B91ED3392CCE3603FB3D44A8E*)L_187)->___runtimeDataList_11;
		NullCheck(L_188);
		int32_t L_189;
		L_189 = List_1_get_Count_m4EB3213CDA6D394BA00CA239D95B2ABCBFEDEDF2_inline(L_188, List_1_get_Count_m4EB3213CDA6D394BA00CA239D95B2ABCBFEDEDF2_RuntimeMethod_var);
		if ((((int32_t)L_186) < ((int32_t)L_189)))
		{
			goto IL_0332;
		}
	}
	{
		// treeDataBuffer.Release();
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_190 = __this->___U3CtreeDataBufferU3E5__6_7;
		NullCheck(L_190);
		ComputeBuffer_Release_mF1F157C929A0A5B2FDCD703A286EE09723450B72(L_190, NULL);
		// treeScalesBuffer.Release();
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_191 = __this->___U3CtreeScalesBufferU3E5__7_8;
		NullCheck(L_191);
		ComputeBuffer_Release_mF1F157C929A0A5B2FDCD703A286EE09723450B72(L_191, NULL);
		// counterBuffer.Release();
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_192 = __this->___U3CcounterBufferU3E5__8_9;
		NullCheck(L_192);
		ComputeBuffer_Release_mF1F157C929A0A5B2FDCD703A286EE09723450B72(L_192, NULL);
		// }
		__this->___U3CtreeDataBufferU3E5__6_7 = (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtreeDataBufferU3E5__6_7), (void*)(ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*)NULL);
		__this->___U3CtreeScalesBufferU3E5__7_8 = (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtreeScalesBufferU3E5__7_8), (void*)(ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*)NULL);
		__this->___U3CcounterBufferU3E5__8_9 = (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcounterBufferU3E5__8_9), (void*)(ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*)NULL);
		__this->___U3CemptyCounterDataU3E5__9_10 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CemptyCounterDataU3E5__9_10), (void*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL);
		goto IL_0531;
	}

IL_0526:
	{
		// GPUInstancerUtility.ReleaseInstanceBuffers(runtimeDataList);
		GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00* L_193 = V_1;
		NullCheck(L_193);
		List_1_t8FDAD79D15A0E06F4397907AE6788258276E8978* L_194 = ((GPUInstancerManager_tBC70675B38834A3B91ED3392CCE3603FB3D44A8E*)L_193)->___runtimeDataList_11;
		GPUInstancerUtility_ReleaseInstanceBuffers_TisGPUInstancerRuntimeData_tAC3B9C6BB85D573FA2A3F5A8378873C2C131057C_mD21EE068398C494F77D5659BCD5BB50B5913D598(L_194, GPUInstancerUtility_ReleaseInstanceBuffers_TisGPUInstancerRuntimeData_tAC3B9C6BB85D573FA2A3F5A8378873C2C131057C_mD21EE068398C494F77D5659BCD5BB50B5913D598_RuntimeMethod_var);
	}

IL_0531:
	{
		// }
		__this->___U3CtreeScalesU3E5__2_3 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtreeScalesU3E5__2_3), (void*)(Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)NULL);
		__this->___U3CinstanceCountsU3E5__3_4 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CinstanceCountsU3E5__3_4), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		__this->___U3CtreeDataListU3E5__4_5 = (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtreeDataListU3E5__4_5), (void*)(List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*)NULL);
	}

IL_0546:
	{
		// isInitial = true;
		GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00* L_195 = V_1;
		NullCheck(L_195);
		((GPUInstancerManager_tBC70675B38834A3B91ED3392CCE3603FB3D44A8E*)L_195)->___isInitial_40 = (bool)1;
		// if (!isInitialized)
		GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00* L_196 = V_1;
		NullCheck(L_196);
		bool L_197 = ((GPUInstancerManager_tBC70675B38834A3B91ED3392CCE3603FB3D44A8E*)L_196)->___isInitialized_41;
		if (L_197)
		{
			goto IL_055b;
		}
	}
	{
		// GPUInstancerUtility.TriggerEvent(GPUInstancerEventType.TreeInitializationFinished);
		GPUInstancerUtility_TriggerEvent_m4245FCDBE2BF11942829A630067052A8488D839C(1, NULL);
	}

IL_055b:
	{
		// _isCoroutineActive = false;
		GPUInstancerTreeManager_t891053B3DF2ABAC8212CE06D7478398E92F98B00* L_198 = V_1;
		NullCheck(L_198);
		L_198->____isCoroutineActive_58 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object GPUInstancer.GPUInstancerTreeManager/<ReplaceUnityTrees>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CReplaceUnityTreesU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m92848A4486AC4A76E6636B02CCEEC1264A9380DB (U3CReplaceUnityTreesU3Ed__9_t549FD0ED894B9B6202161F931067A0D440ABD370* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GPUInstancer.GPUInstancerTreeManager/<ReplaceUnityTrees>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReplaceUnityTreesU3Ed__9_System_Collections_IEnumerator_Reset_m0680D4FC31B5443E461D5314D6298D258BB5CF93 (U3CReplaceUnityTreesU3Ed__9_t549FD0ED894B9B6202161F931067A0D440ABD370* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CReplaceUnityTreesU3Ed__9_System_Collections_IEnumerator_Reset_m0680D4FC31B5443E461D5314D6298D258BB5CF93_RuntimeMethod_var)));
	}
}
// System.Object GPUInstancer.GPUInstancerTreeManager/<ReplaceUnityTrees>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CReplaceUnityTreesU3Ed__9_System_Collections_IEnumerator_get_Current_m042BF85CD0456A3B376DE2CF8E7EEEBC98CC7A15 (U3CReplaceUnityTreesU3Ed__9_t549FD0ED894B9B6202161F931067A0D440ABD370* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m4B1AF3EC8A8974D2C3B0B499FCC152EFFA6C95F0 (String_t* ___s0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___s0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_mB05287DC52FC87A756AB80E837E1EC22FEEB3937_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___v0;
		float L_5 = L_4.___z_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_6), L_1, L_3, L_5, (0.0f), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7 = V_0;
		return L_7;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_m04999E3DEB696135EFD620A30F51503D700C1998_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = ceil(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mAC6D75EF36303133FA8504C2F1312008E4EA3C10_gshared_inline (List_1_t7CDBDADC2DD3F6FE5B92D1A5EE6F8B003233585A* __this, TreeInstance_t382B018173ED020660D262061EA9424682614F50 ___item0, const RuntimeMethod* method) 
{
	TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429* L_1 = (TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429* L_6 = V_0;
		int32_t L_7 = V_1;
		TreeInstance_t382B018173ED020660D262061EA9424682614F50 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (TreeInstance_t382B018173ED020660D262061EA9424682614F50)L_8);
		return;
	}

IL_0034:
	{
		TreeInstance_t382B018173ED020660D262061EA9424682614F50 L_9 = ___item0;
		((  void (*) (List_1_t7CDBDADC2DD3F6FE5B92D1A5EE6F8B003233585A*, TreeInstance_t382B018173ED020660D262061EA9424682614F50, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m65F0731FF2C839C25530522F74BE029D34851222_gshared_inline (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___item0, const RuntimeMethod* method) 
{
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_1 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_6 = V_0;
		int32_t L_7 = V_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_8);
		return;
	}

IL_0034:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = ___item0;
		((  void (*) (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m970BE5CCB1F05BAF033736206A0C3142930127B0_gshared_inline (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
