#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera>
struct Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3;
// System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,System.Object>
struct Action_2_t38DEBB6BD6AE1CA882236F63F7E1DB3781D38994;
// System.Collections.Generic.Dictionary`2<UnityEngine.Hash128,System.Int32[]>
struct Dictionary_2_tCB9019887EB0254D4745B0724BC12327C5B63792;
// System.Collections.Generic.Dictionary`2<UnityEngine.Hash128,System.Int32>
struct Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Rendering.Universal.ScriptableRendererData>
struct IEnumerable_1_t89914CC013B1C9FF86FACFF085052D10D2ED63C8;
// System.Collections.Generic.IEnumerator`1<System.Action`2<UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.CommandBuffer>>
struct IEnumerator_1_t5926539DBBB2302C569D0A07AF3A95A874CEBE33;
// System.Collections.Generic.SortedDictionary`2/KeyCollection<System.Int32,System.Collections.Generic.List`1<StylizedGrass.GrassBender>>
struct KeyCollection_tE8C734B393B7CF27FEA743DFB92498D25F52265F;
// System.Collections.Generic.List`1<UnityEngine.Camera>
struct List_1_tD2FA3273746E404D72561E8324608D18B52B533E;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<StylizedGrass.GrassBender>
struct List_1_t49364358CC095949053FDAC3CDE0F381C4DB93C6;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Int64>
struct List_1_tF9D88C946600C782EE786A252258C0AA97BD019A;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.ScriptableRenderPass>
struct List_1_t2E485E650BF1E41358CE56A69323E183C5A89CB6;
// System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.ScriptableRendererData>
struct List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424;
// System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.ScriptableRendererFeature>
struct List_1_t2121653FB628940E808D105AD2C17E0F20AFB3A6;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317;
// System.Collections.Generic.List`1<StylizedGrass.GrassColorMapRenderer/LayerScaleSettings>
struct List_1_tA28F6808989CF34898F6297C5FA6A643BA930F88;
// System.Collections.Generic.SortedSet`1/Node<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<StylizedGrass.GrassBender>>>
struct Node_tCF235A0DA8EBCF9F36BDCCD5B9CCF7E75C3C870E;
// System.Collections.Generic.SortedSet`1/Node<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct Node_t9428B1AE1DCFBDF646991CC0C0390F53939E1987;
// System.Collections.Generic.SortedDictionary`2<System.Int32,System.Collections.Generic.List`1<StylizedGrass.GrassBender>>
struct SortedDictionary_2_tAF165674EA735D9A7BCDBE5EEC973D10DC83FB30;
// System.Collections.Generic.SortedDictionary`2<System.Int32,System.Object>
struct SortedDictionary_2_t84C54AB886B687592198FD4D32DD4EFC9B5C1A28;
// System.Collections.Generic.SortedSet`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<StylizedGrass.GrassBender>>>
struct SortedSet_1_t7417FA61EA00F8889469995449C84CFE43946ED2;
// System.Collections.Generic.SortedSet`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct SortedSet_1_t8407F81306592F16ACD473979739094A09F684E7;
// System.Collections.Generic.Stack`1<System.Collections.Generic.SortedSet`1/Node<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<StylizedGrass.GrassBender>>>>
struct Stack_1_t96D5E60DCA682A4AB1ACF6E83EE6292BF6383F02;
// System.Collections.Generic.Stack`1<System.Collections.Generic.SortedSet`1/Node<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>>
struct Stack_1_t311266B2ECD5409479F7BC6F9BA2617342EBBF82;
// System.Collections.Generic.TreeSet`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<StylizedGrass.GrassBender>>>
struct TreeSet_1_t3A5F95ADED97FC3545C2AA14CC91BE05B15BE101;
// System.Collections.Generic.SortedDictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<StylizedGrass.GrassBender>>
struct ValueCollection_t7AA3DDD2F4AC6E0A974FCA05F98B5A397D79AF3F;
// UnityEngine.Experimental.Rendering.GraphicsFormat[][]
struct GraphicsFormatU5BU5DU5BU5D_t1424BD937A890524D2A66FF39E61DEB0F10FE0A2;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
// UnityEngine.Rendering.RenderTargetIdentifier[][]
struct RenderTargetIdentifierU5BU5DU5BU5D_tDB35F8D017FE3AD8BB35E08E323074D47C5A10BB;
// UnityEngine.Rendering.AttachmentDescriptor[]
struct AttachmentDescriptorU5BU5D_tC70107EBD955FE94BA31C7FDC146069EF9C547C1;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// UnityEngine.GradientAlphaKey[]
struct GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E;
// UnityEngine.GradientColorKey[]
struct GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18;
// UnityEngine.Rendering.GraphicsDeviceType[]
struct GraphicsDeviceTypeU5BU5D_t4322565F239068C66BF47053B83BD6A9A9D16408;
// UnityEngine.Experimental.Rendering.GraphicsFormat[]
struct GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5;
// StylizedGrass.GrassBender[]
struct GrassBenderU5BU5D_tC5369E1D7348E377977F87AA9D89E53939BD209D;
// UnityEngine.Hash128[]
struct Hash128U5BU5D_tB104E7247B842648E447B7FCF4748077DC1F8C98;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Plane[]
struct PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE;
// UnityEngine.Rendering.RenderBufferStoreAction[]
struct RenderBufferStoreActionU5BU5D_tFEA8F5DD460573EA9F35FBEC5727D1804C5DCBF5;
// UnityEngine.Rendering.RenderTargetIdentifier[]
struct RenderTargetIdentifierU5BU5D_t179798C153B7CE381B41C57863F98CB24023C4CE;
// UnityEngine.Rendering.Universal.ScriptableRenderer[]
struct ScriptableRendererU5BU5D_t9B15C048BCE03A67E830F1C79989B6A3E43788E6;
// UnityEngine.Rendering.Universal.ScriptableRendererData[]
struct ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
// StylizedGrass.GrassColorMapRenderer/LayerScaleSettings[]
struct LayerScaleSettingsU5BU5D_tA7619FF281D5A48423EF6A3B8E5375768F3415CB;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Rendering.CullingAllocationInfo
struct CullingAllocationInfo_tB260F5CD0B290F74E145EB16E54B901CC68D9D5A;
// UnityEngine.Profiling.CustomSampler
struct CustomSampler_tDA472186F08B4016626F032F944036BADFDB5487;
// UnityEngine.Rendering.Universal.DebugHandler
struct DebugHandler_t3A09E2CFD1CA6F5C192968A6FF19EE4863F44DA4;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// StylizedGrass.DrawGrassBenders
struct DrawGrassBenders_tF4005AC5C190E9951BA18E65AABDF30FDD9D1A75;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E;
// StylizedGrass.GrassBender
struct GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74;
// StylizedGrass.GrassBenderBase
struct GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675;
// StylizedGrass.GrassColorMap
struct GrassColorMap_tFF56A23499EB504A6EF9567C018A41C0B689D1E2;
// StylizedGrass.GrassColorMapRenderer
struct GrassColorMapRenderer_t888182E165920AC4818E5B27C9A9DC7458D446FC;
// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// UnityEngine.ParticleSystemRenderer
struct ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4;
// UnityEngine.Rendering.Universal.PostProcessData
struct PostProcessData_t106B5638205D5CBAF18F2573047F2DC23BDB2F05;
// UnityEngine.Rendering.ProfilingSampler
struct ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE;
// UnityEngine.Profiling.Recorder
struct Recorder_t0A14385FB0F5829CAAC1E16F88B095769D648C90;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.Rendering.Universal.ScriptableRenderPass
struct ScriptableRenderPass_tEA38F6C7AD8D111A2251E4C2A7530BCEE7D6D2B0;
// UnityEngine.Rendering.Universal.ScriptableRenderer
struct ScriptableRenderer_tF15B95BB85F26BE4B4719901D909831B89DC8892;
// UnityEngine.Rendering.Universal.ScriptableRendererData
struct ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7;
// UnityEngine.Rendering.Universal.ScriptableRendererFeature
struct ScriptableRendererFeature_tF2ED08AD2498105378D4DAB0386A0F8A144EF4C6;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// UnityEngine.Rendering.Universal.StencilStateData
struct StencilStateData_t4181AB6F6A795950C67270CB147999D915071462;
// System.String
struct String_t;
// StylizedGrass.StylizedGrassRenderer
struct StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.TrailRenderer
struct TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.Rendering.Universal.UniversalAdditionalCameraData
struct UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93;
// UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset
struct UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232;
// UnityEngine.Rendering.Universal.UniversalRendererData
struct UniversalRendererData_t57D400CEB38765F55EB74FDBD786B9A73C293CA6;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Rendering.VolumeStack
struct VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8;
// UnityEngine.WindZone
struct WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7;
// UnityEngine.Rendering.Universal.XRPass
struct XRPass_t0A618D61DBC9E3F8BC970B7C9D2679375C6C8A24;
// UnityEngine.Rendering.Universal.XRSystemData
struct XRSystemData_t89A064914358326F98105E94D5F082C186133DE6;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// StylizedGrass.DrawGrassBenders/DrawGrassBendersPass
struct DrawGrassBendersPass_t910E752F82318AB6034D3395872D033459AEBA0B;
// StylizedGrass.GrassColorMapRenderer/LayerScaleSettings
struct LayerScaleSettings_tE44EE1A6013CD343A97C2DBF4EDC3C316F614372;
// UnityEngine.Rendering.Universal.ScriptableRenderer/RenderingFeatures
struct RenderingFeatures_t31044CBDCDC2F05194BFA2A2122FBD937D78A371;
// UnityEngine.Rendering.Universal.ScriptableRendererData/DebugShaderResources
struct DebugShaderResources_tDE399BFF5E1E9403CD4793CD8C8A51796C682B8B;
// UnityEngine.Rendering.Universal.UniversalRendererData/ShaderResources
struct ShaderResources_t9E48D1BC255505EC66B90558EF6489F704FD3663;

IL2CPP_EXTERN_C RuntimeClass* Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommandBufferPool_t88CACA06AB445EE4743F5C4D742C73761A2DEF0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DrawGrassBendersPass_t910E752F82318AB6034D3395872D033459AEBA0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DrawGrassBenders_tF4005AC5C190E9951BA18E65AABDF30FDD9D1A75_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GrassColorMapRenderer_t888182E165920AC4818E5B27C9A9DC7458D446FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GrassColorMap_tFF56A23499EB504A6EF9567C018A41C0B689D1E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t49364358CC095949053FDAC3CDE0F381C4DB93C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA28F6808989CF34898F6297C5FA6A643BA930F88_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SortedDictionary_2_tAF165674EA735D9A7BCDBE5EEC973D10DC83FB30_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniversalRenderPipeline_t54B4737DC500C08628C5BE283D8C583C14DED98F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1788F3FA76626915BE1F3840373A5424D640257C;
IL2CPP_EXTERN_C String_t* _stringLiteral332D551A4B644254ABAE75D476D4580748717A01;
IL2CPP_EXTERN_C String_t* _stringLiteral3D2CBA34D2BA79A0AB06DCD303B7F84AD97F607D;
IL2CPP_EXTERN_C String_t* _stringLiteral4ED044DFB4E3D8CA98B39C54D6578B8B4B6D3CC1;
IL2CPP_EXTERN_C String_t* _stringLiteral522D81700B38299D297FAF66CD8CB9203497E711;
IL2CPP_EXTERN_C String_t* _stringLiteral5979F63DFA1F57D0F4CD7AA0BCFC0ED5BF86FBF4;
IL2CPP_EXTERN_C String_t* _stringLiteral5C81E6D93BAE5B4AD36FC3E0025D12CAA0F4AC20;
IL2CPP_EXTERN_C String_t* _stringLiteral64452ED5C9848E1613115ED834570A2C2D932292;
IL2CPP_EXTERN_C String_t* _stringLiteral6751FCC2C5B72B7CE6B4E748575B582B2D79189D;
IL2CPP_EXTERN_C String_t* _stringLiteral7B0FDC1EF9BE9A783FF473D07EBA1F5341BB4348;
IL2CPP_EXTERN_C String_t* _stringLiteral8D30FE729EAE606742ABC5D6CD5D27E362131E31;
IL2CPP_EXTERN_C String_t* _stringLiteralA7341096046FB6A11C034C08590E42470CF0B27F;
IL2CPP_EXTERN_C String_t* _stringLiteralA83783C37264A72A89CEF0E35BC5FEEB5D8AFF7D;
IL2CPP_EXTERN_C String_t* _stringLiteralB6686C3042C6C456D55EF628ACE003309DA8F894;
IL2CPP_EXTERN_C String_t* _stringLiteralC341FAB7EB586F5B01F4EF063D8F0F695CF6B43E;
IL2CPP_EXTERN_C String_t* _stringLiteralCB5B519DB686B9B04D0ABDF00F13D1CEC9E8D1E7;
IL2CPP_EXTERN_C String_t* _stringLiteralD4ACB0176F541FE77605488A1DA1A3A1276ACCFA;
IL2CPP_EXTERN_C String_t* _stringLiteralD5FF77C5852934F1B8471E0D64FAB91AA74886A9;
IL2CPP_EXTERN_C String_t* _stringLiteralEB914766B701D338CA138D3FA4260AFA5884EC78;
IL2CPP_EXTERN_C String_t* _stringLiteralF258EE4F09E872FBAA6A85B511E874C35D1AC95D;
IL2CPP_EXTERN_C String_t* _stringLiteralF55CCDD8E80529DC06D269D0ED4CDF0C20888944;
IL2CPP_EXTERN_C String_t* _stringLiteralF873D6748545B7516CD56A7A617453AEC82E7C8D;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_mBD9F283ADB0A9ACB7BD542CFA753D3C1CFF61C1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4_mDB29DD32DF46B9659262256BDBD5B4F1BB805023_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m47A4BF75BA274162C71AF06BD04E5EBC34FB1652_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mE8981DCC1DCF1F21135CCF0AAE8D246D323BFDCE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m48A899DD35F7911EF8387E837F28120EECB48159_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mEC1C5D8C1EF85ACD68FE53D378C563DD5A1D4D09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m6C8B04815C4BD13D841F144D715B22A2A03FE935_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB18F3D0A36082CB27E6C808CE00663BA522B1430_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0933BC50E883CDEF6FA83FE190DA37CCB2802142_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisUniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93_m257D49B2F0B2F6DAFF2E3EC7F53B5930D5BB6D46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4_m54DB46FE3C050979EF32114330D91F9EF130CAEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mF843E42B80EBE3855515C7DB8383BF866EE554F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m2DF4CA5BB1F0D09ACDF2CA7997F4D7ABEB7EF0E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mD564DD588CF150AFDB80F4773D248194256B6A34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m7FF0F9331146763E7C1C71B6F92EEF57A910B9D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m9AD1B78955B814B3E3FF4280DA24D52C49C33D15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m465B0C13FFC94B1899F7A2100B7016A727799461_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m1CD9F787AAC79257AE253C33BB5A97DA836B5FF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m9D07AEEC3BD3364325EA28BEBF09C4D5BFB2ED18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mA20937394A0961A947EFE502EBD77AD6245B7D9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m34C8555D6DCC2D0287E23BFB31223CF1D0734217_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m3D40447848D115F7F599B8FB0CD16BF7AF124800_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC621C78FA7B6151052CE01470CF3E8933D760DA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDD19270367F605476E9B7A7A9872D28C89FFF6D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m0D82ED0B4026D60A06E782BC0EF84A20C66632EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2_Add_m1A3B3A97252451F290D08F8211CCD759E7A024C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2_ContainsKey_m4FCDDE38B6BC3DEB3CAA69F6AE43A7634BFE07BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2_GetEnumerator_m056A676D2467C09A4E2FE3C9D0D31CC4C5C96410_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2_Remove_m0C5D8BC5E128A3FE7E1DB9D627A4EDB34670AC31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2_TryGetValue_m9E0D377BD764744E181D9D933304080032FE16C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2__ctor_m79DF4A3FF0A2EADB029A76CE314075150AE9B48A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2_get_Item_mC3B6F52FE3CF2C891D21A324117B3293B0618538_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2_set_Item_mEDFA8C159889FC46120EE1152739EA9A465A69A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StylizedGrassRenderer_OnCameraRender_m3FF1C3C1F0DE3F80EA1802EC6CB86D70C3B0CE54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E;
struct GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE;
struct ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t6E31B73C6793E590FDB084F42CFB0FEFDEB969FC 
{
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<StylizedGrass.GrassBender>
struct List_1_t49364358CC095949053FDAC3CDE0F381C4DB93C6  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GrassBenderU5BU5D_tC5369E1D7348E377977F87AA9D89E53939BD209D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t49364358CC095949053FDAC3CDE0F381C4DB93C6_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GrassBenderU5BU5D_tC5369E1D7348E377977F87AA9D89E53939BD209D* ___s_emptyArray_5;
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

// System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.ScriptableRendererData>
struct List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<StylizedGrass.GrassColorMapRenderer/LayerScaleSettings>
struct List_1_tA28F6808989CF34898F6297C5FA6A643BA930F88  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	LayerScaleSettingsU5BU5D_tA7619FF281D5A48423EF6A3B8E5375768F3415CB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA28F6808989CF34898F6297C5FA6A643BA930F88_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	LayerScaleSettingsU5BU5D_tA7619FF281D5A48423EF6A3B8E5375768F3415CB* ___s_emptyArray_5;
};

// System.Collections.Generic.SortedDictionary`2<System.Int32,System.Collections.Generic.List`1<StylizedGrass.GrassBender>>
struct SortedDictionary_2_tAF165674EA735D9A7BCDBE5EEC973D10DC83FB30  : public RuntimeObject
{
	// System.Collections.Generic.SortedDictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.SortedDictionary`2::_keys
	KeyCollection_tE8C734B393B7CF27FEA743DFB92498D25F52265F* ____keys_0;
	// System.Collections.Generic.SortedDictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.SortedDictionary`2::_values
	ValueCollection_t7AA3DDD2F4AC6E0A974FCA05F98B5A397D79AF3F* ____values_1;
	// System.Collections.Generic.TreeSet`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.SortedDictionary`2::_set
	TreeSet_1_t3A5F95ADED97FC3545C2AA14CC91BE05B15BE101* ____set_2;
};
struct Il2CppArrayBounds;

// StylizedGrass.GrassBenderBase
struct GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675  : public RuntimeObject
{
};

struct GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_StaticFields
{
	// UnityEngine.Material StylizedGrass.GrassBenderBase::_TrailMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ____TrailMaterial_2;
	// UnityEngine.Material StylizedGrass.GrassBenderBase::_MeshMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ____MeshMaterial_3;
	// UnityEngine.GradientColorKey[] StylizedGrass.GrassBenderBase::colorKeys
	GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* ___colorKeys_5;
	// UnityEngine.GradientAlphaKey[] StylizedGrass.GrassBenderBase::alphaKeys
	GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E* ___alphaKeys_6;
	// UnityEngine.Gradient StylizedGrass.GrassBenderBase::m_Gradient
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___m_Gradient_7;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// StylizedGrass.PipelineUtilities
struct PipelineUtilities_t1A196FE3D8662A0BD4FD3763F500D244DBAB2679  : public RuntimeObject
{
};

// UnityEngine.Rendering.ProfilingSampler
struct ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE  : public RuntimeObject
{
	// UnityEngine.Profiling.CustomSampler UnityEngine.Rendering.ProfilingSampler::<sampler>k__BackingField
	CustomSampler_tDA472186F08B4016626F032F944036BADFDB5487* ___U3CsamplerU3Ek__BackingField_0;
	// UnityEngine.Profiling.CustomSampler UnityEngine.Rendering.ProfilingSampler::<inlineSampler>k__BackingField
	CustomSampler_tDA472186F08B4016626F032F944036BADFDB5487* ___U3CinlineSamplerU3Ek__BackingField_1;
	// System.String UnityEngine.Rendering.ProfilingSampler::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_2;
	// UnityEngine.Profiling.Recorder UnityEngine.Rendering.ProfilingSampler::m_Recorder
	Recorder_t0A14385FB0F5829CAAC1E16F88B095769D648C90* ___m_Recorder_3;
	// UnityEngine.Profiling.Recorder UnityEngine.Rendering.ProfilingSampler::m_InlineRecorder
	Recorder_t0A14385FB0F5829CAAC1E16F88B095769D648C90* ___m_InlineRecorder_4;
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

// StylizedGrass.GrassColorMapRenderer/LayerScaleSettings
struct LayerScaleSettings_tE44EE1A6013CD343A97C2DBF4EDC3C316F614372  : public RuntimeObject
{
	// System.Int32 StylizedGrass.GrassColorMapRenderer/LayerScaleSettings::layerID
	int32_t ___layerID_0;
	// System.Single StylizedGrass.GrassColorMapRenderer/LayerScaleSettings::strength
	float ___strength_1;
};

// System.Collections.Generic.SortedSet`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<StylizedGrass.GrassBender>>>
struct Enumerator_t6DD250C310AC62507F0823EA03BD2154DBE6571E 
{
	// System.Collections.Generic.SortedSet`1<T> System.Collections.Generic.SortedSet`1/Enumerator::_tree
	SortedSet_1_t7417FA61EA00F8889469995449C84CFE43946ED2* ____tree_1;
	// System.Int32 System.Collections.Generic.SortedSet`1/Enumerator::_version
	int32_t ____version_2;
	// System.Collections.Generic.Stack`1<System.Collections.Generic.SortedSet`1/Node<T>> System.Collections.Generic.SortedSet`1/Enumerator::_stack
	Stack_1_t96D5E60DCA682A4AB1ACF6E83EE6292BF6383F02* ____stack_3;
	// System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1/Enumerator::_current
	Node_tCF235A0DA8EBCF9F36BDCCD5B9CCF7E75C3C870E* ____current_4;
	// System.Boolean System.Collections.Generic.SortedSet`1/Enumerator::_reverse
	bool ____reverse_5;
};

struct Enumerator_t6DD250C310AC62507F0823EA03BD2154DBE6571E_StaticFields
{
	// System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1/Enumerator::s_dummyNode
	Node_tCF235A0DA8EBCF9F36BDCCD5B9CCF7E75C3C870E* ___s_dummyNode_0;
};

// System.Collections.Generic.SortedSet`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct Enumerator_t4C822747FB71DA16CE8594D2B3D99238D90A2767 
{
	// System.Collections.Generic.SortedSet`1<T> System.Collections.Generic.SortedSet`1/Enumerator::_tree
	SortedSet_1_t8407F81306592F16ACD473979739094A09F684E7* ____tree_1;
	// System.Int32 System.Collections.Generic.SortedSet`1/Enumerator::_version
	int32_t ____version_2;
	// System.Collections.Generic.Stack`1<System.Collections.Generic.SortedSet`1/Node<T>> System.Collections.Generic.SortedSet`1/Enumerator::_stack
	Stack_1_t311266B2ECD5409479F7BC6F9BA2617342EBBF82* ____stack_3;
	// System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1/Enumerator::_current
	Node_t9428B1AE1DCFBDF646991CC0C0390F53939E1987* ____current_4;
	// System.Boolean System.Collections.Generic.SortedSet`1/Enumerator::_reverse
	bool ____reverse_5;
};

struct Enumerator_t4C822747FB71DA16CE8594D2B3D99238D90A2767_StaticFields
{
	// System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1/Enumerator::s_dummyNode
	Node_t9428B1AE1DCFBDF646991CC0C0390F53939E1987* ___s_dummyNode_0;
};

// System.Collections.Generic.List`1/Enumerator<StylizedGrass.GrassBender>
struct Enumerator_t1E184C07819A261240EFECEC64868C4A47CF8329 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t49364358CC095949053FDAC3CDE0F381C4DB93C6* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* ____current_3;
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

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<StylizedGrass.GrassBender>>
struct KeyValuePair_2_t09168EAB2A211CC87832F23427F39072F447B6AB 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	List_1_t49364358CC095949053FDAC3CDE0F381C4DB93C6* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// Unity.Collections.NativeArray`1<System.Int32>
struct NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Rendering.VisibleLight>
struct NativeArray_1_t71485A1E60B31CCAD3E525C907CF172E8B804468 
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
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

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
};

// UnityEngine.GradientAlphaKey
struct GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 
{
	// System.Single UnityEngine.GradientAlphaKey::alpha
	float ___alpha_0;
	// System.Single UnityEngine.GradientAlphaKey::time
	float ___time_1;
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

// UnityEngine.Rendering.Universal.PostProcessingData
struct PostProcessingData_tFA75BF22951C600258B2707AF7A113E4EDA49BD4 
{
	// UnityEngine.Rendering.Universal.ColorGradingMode UnityEngine.Rendering.Universal.PostProcessingData::gradingMode
	int32_t ___gradingMode_0;
	// System.Int32 UnityEngine.Rendering.Universal.PostProcessingData::lutSize
	int32_t ___lutSize_1;
	// System.Boolean UnityEngine.Rendering.Universal.PostProcessingData::useFastSRGBLinearConversion
	bool ___useFastSRGBLinearConversion_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.Rendering.Universal.PostProcessingData
struct PostProcessingData_tFA75BF22951C600258B2707AF7A113E4EDA49BD4_marshaled_pinvoke
{
	int32_t ___gradingMode_0;
	int32_t ___lutSize_1;
	int32_t ___useFastSRGBLinearConversion_2;
};
// Native definition for COM marshalling of UnityEngine.Rendering.Universal.PostProcessingData
struct PostProcessingData_tFA75BF22951C600258B2707AF7A113E4EDA49BD4_marshaled_com
{
	int32_t ___gradingMode_0;
	int32_t ___lutSize_1;
	int32_t ___useFastSRGBLinearConversion_2;
};

// UnityEngine.Rendering.ProfilingScope
struct ProfilingScope_t57898BA31E8EF8F083EF84E0DA2737AC61CBC5BD 
{
	union
	{
		struct
		{
		};
		uint8_t ProfilingScope_t57898BA31E8EF8F083EF84E0DA2737AC61CBC5BD__padding[1];
	};
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// UnityEngine.RenderTextureDescriptor
struct RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 
{
	// System.Int32 UnityEngine.RenderTextureDescriptor::<width>k__BackingField
	int32_t ___U3CwidthU3Ek__BackingField_0;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<height>k__BackingField
	int32_t ___U3CheightU3Ek__BackingField_1;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<msaaSamples>k__BackingField
	int32_t ___U3CmsaaSamplesU3Ek__BackingField_2;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<volumeDepth>k__BackingField
	int32_t ___U3CvolumeDepthU3Ek__BackingField_3;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<mipCount>k__BackingField
	int32_t ___U3CmipCountU3Ek__BackingField_4;
	// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTextureDescriptor::_graphicsFormat
	int32_t ____graphicsFormat_5;
	// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTextureDescriptor::<stencilFormat>k__BackingField
	int32_t ___U3CstencilFormatU3Ek__BackingField_6;
	// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTextureDescriptor::<depthStencilFormat>k__BackingField
	int32_t ___U3CdepthStencilFormatU3Ek__BackingField_7;
	// UnityEngine.Rendering.TextureDimension UnityEngine.RenderTextureDescriptor::<dimension>k__BackingField
	int32_t ___U3CdimensionU3Ek__BackingField_8;
	// UnityEngine.Rendering.ShadowSamplingMode UnityEngine.RenderTextureDescriptor::<shadowSamplingMode>k__BackingField
	int32_t ___U3CshadowSamplingModeU3Ek__BackingField_9;
	// UnityEngine.VRTextureUsage UnityEngine.RenderTextureDescriptor::<vrUsage>k__BackingField
	int32_t ___U3CvrUsageU3Ek__BackingField_10;
	// UnityEngine.RenderTextureCreationFlags UnityEngine.RenderTextureDescriptor::_flags
	int32_t ____flags_11;
	// UnityEngine.RenderTextureMemoryless UnityEngine.RenderTextureDescriptor::<memoryless>k__BackingField
	int32_t ___U3CmemorylessU3Ek__BackingField_12;
};

// UnityEngine.Rendering.ShaderTagId
struct ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 
{
	// System.Int32 UnityEngine.Rendering.ShaderTagId::m_Id
	int32_t ___m_Id_1;
};

struct ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_StaticFields
{
	// UnityEngine.Rendering.ShaderTagId UnityEngine.Rendering.ShaderTagId::none
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___none_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// UnityEngine.ParticleSystem/ColorOverLifetimeModule
struct ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/ColorOverLifetimeModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/ColorOverLifetimeModule
struct ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/ColorOverLifetimeModule
struct ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/MainModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// UnityEngine.ParticleSystem/TrailModule
struct TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/TrailModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/TrailModule
struct TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/TrailModule
struct TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// System.Collections.Generic.SortedDictionary`2/Enumerator<System.Int32,System.Collections.Generic.List`1<StylizedGrass.GrassBender>>
struct Enumerator_t51D33DAA04D7882DF86642A002CF48AD940E2390 
{
	// System.Collections.Generic.SortedSet`1/Enumerator<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.SortedDictionary`2/Enumerator::_treeEnum
	Enumerator_t6DD250C310AC62507F0823EA03BD2154DBE6571E ____treeEnum_0;
	// System.Int32 System.Collections.Generic.SortedDictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_1;
};

// System.Collections.Generic.SortedDictionary`2/Enumerator<System.Int32,System.Object>
struct Enumerator_tF77AFC317EFFE0D2C9C9BADF1972E6EFEEBE6657 
{
	// System.Collections.Generic.SortedSet`1/Enumerator<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.SortedDictionary`2/Enumerator::_treeEnum
	Enumerator_t4C822747FB71DA16CE8594D2B3D99238D90A2767 ____treeEnum_0;
	// System.Int32 System.Collections.Generic.SortedDictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_1;
};

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.Rendering.Universal.CameraData
struct CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E 
{
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.Universal.CameraData::m_ViewMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_ViewMatrix_0;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.Universal.CameraData::m_ProjectionMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_ProjectionMatrix_1;
	// UnityEngine.Camera UnityEngine.Rendering.Universal.CameraData::camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera_2;
	// UnityEngine.Rendering.Universal.CameraRenderType UnityEngine.Rendering.Universal.CameraData::renderType
	int32_t ___renderType_3;
	// UnityEngine.RenderTexture UnityEngine.Rendering.Universal.CameraData::targetTexture
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___targetTexture_4;
	// UnityEngine.RenderTextureDescriptor UnityEngine.Rendering.Universal.CameraData::cameraTargetDescriptor
	RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 ___cameraTargetDescriptor_5;
	// UnityEngine.Rect UnityEngine.Rendering.Universal.CameraData::pixelRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___pixelRect_6;
	// System.Int32 UnityEngine.Rendering.Universal.CameraData::pixelWidth
	int32_t ___pixelWidth_7;
	// System.Int32 UnityEngine.Rendering.Universal.CameraData::pixelHeight
	int32_t ___pixelHeight_8;
	// System.Single UnityEngine.Rendering.Universal.CameraData::aspectRatio
	float ___aspectRatio_9;
	// System.Single UnityEngine.Rendering.Universal.CameraData::renderScale
	float ___renderScale_10;
	// UnityEngine.Rendering.Universal.ImageScalingMode UnityEngine.Rendering.Universal.CameraData::imageScalingMode
	int32_t ___imageScalingMode_11;
	// UnityEngine.Rendering.Universal.ImageUpscalingFilter UnityEngine.Rendering.Universal.CameraData::upscalingFilter
	int32_t ___upscalingFilter_12;
	// System.Boolean UnityEngine.Rendering.Universal.CameraData::fsrOverrideSharpness
	bool ___fsrOverrideSharpness_13;
	// System.Single UnityEngine.Rendering.Universal.CameraData::fsrSharpness
	float ___fsrSharpness_14;
	// System.Boolean UnityEngine.Rendering.Universal.CameraData::clearDepth
	bool ___clearDepth_15;
	// UnityEngine.CameraType UnityEngine.Rendering.Universal.CameraData::cameraType
	int32_t ___cameraType_16;
	// System.Boolean UnityEngine.Rendering.Universal.CameraData::isDefaultViewport
	bool ___isDefaultViewport_17;
	// System.Boolean UnityEngine.Rendering.Universal.CameraData::isHdrEnabled
	bool ___isHdrEnabled_18;
	// System.Boolean UnityEngine.Rendering.Universal.CameraData::requiresDepthTexture
	bool ___requiresDepthTexture_19;
	// System.Boolean UnityEngine.Rendering.Universal.CameraData::requiresOpaqueTexture
	bool ___requiresOpaqueTexture_20;
	// System.Boolean UnityEngine.Rendering.Universal.CameraData::postProcessingRequiresDepthTexture
	bool ___postProcessingRequiresDepthTexture_21;
	// System.Boolean UnityEngine.Rendering.Universal.CameraData::xrRendering
	bool ___xrRendering_22;
	// UnityEngine.Rendering.SortingCriteria UnityEngine.Rendering.Universal.CameraData::defaultOpaqueSortFlags
	int32_t ___defaultOpaqueSortFlags_23;
	// UnityEngine.Rendering.Universal.XRPass UnityEngine.Rendering.Universal.CameraData::xr
	XRPass_t0A618D61DBC9E3F8BC970B7C9D2679375C6C8A24* ___xr_24;
	// System.Boolean UnityEngine.Rendering.Universal.CameraData::isStereoEnabled
	bool ___isStereoEnabled_25;
	// System.Single UnityEngine.Rendering.Universal.CameraData::maxShadowDistance
	float ___maxShadowDistance_26;
	// System.Boolean UnityEngine.Rendering.Universal.CameraData::postProcessEnabled
	bool ___postProcessEnabled_27;
	// System.Collections.Generic.IEnumerator`1<System.Action`2<UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.CommandBuffer>> UnityEngine.Rendering.Universal.CameraData::captureActions
	RuntimeObject* ___captureActions_28;
	// UnityEngine.LayerMask UnityEngine.Rendering.Universal.CameraData::volumeLayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___volumeLayerMask_29;
	// UnityEngine.Transform UnityEngine.Rendering.Universal.CameraData::volumeTrigger
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___volumeTrigger_30;
	// System.Boolean UnityEngine.Rendering.Universal.CameraData::isStopNaNEnabled
	bool ___isStopNaNEnabled_31;
	// System.Boolean UnityEngine.Rendering.Universal.CameraData::isDitheringEnabled
	bool ___isDitheringEnabled_32;
	// UnityEngine.Rendering.Universal.AntialiasingMode UnityEngine.Rendering.Universal.CameraData::antialiasing
	int32_t ___antialiasing_33;
	// UnityEngine.Rendering.Universal.AntialiasingQuality UnityEngine.Rendering.Universal.CameraData::antialiasingQuality
	int32_t ___antialiasingQuality_34;
	// UnityEngine.Rendering.Universal.ScriptableRenderer UnityEngine.Rendering.Universal.CameraData::renderer
	ScriptableRenderer_tF15B95BB85F26BE4B4719901D909831B89DC8892* ___renderer_35;
	// System.Boolean UnityEngine.Rendering.Universal.CameraData::resolveFinalTarget
	bool ___resolveFinalTarget_36;
	// UnityEngine.Vector3 UnityEngine.Rendering.Universal.CameraData::worldSpaceCameraPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldSpaceCameraPos_37;
};
// Native definition for P/Invoke marshalling of UnityEngine.Rendering.Universal.CameraData
struct CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E_marshaled_pinvoke
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_ViewMatrix_0;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_ProjectionMatrix_1;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera_2;
	int32_t ___renderType_3;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___targetTexture_4;
	RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 ___cameraTargetDescriptor_5;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___pixelRect_6;
	int32_t ___pixelWidth_7;
	int32_t ___pixelHeight_8;
	float ___aspectRatio_9;
	float ___renderScale_10;
	int32_t ___imageScalingMode_11;
	int32_t ___upscalingFilter_12;
	int32_t ___fsrOverrideSharpness_13;
	float ___fsrSharpness_14;
	int32_t ___clearDepth_15;
	int32_t ___cameraType_16;
	int32_t ___isDefaultViewport_17;
	int32_t ___isHdrEnabled_18;
	int32_t ___requiresDepthTexture_19;
	int32_t ___requiresOpaqueTexture_20;
	int32_t ___postProcessingRequiresDepthTexture_21;
	int32_t ___xrRendering_22;
	int32_t ___defaultOpaqueSortFlags_23;
	XRPass_t0A618D61DBC9E3F8BC970B7C9D2679375C6C8A24* ___xr_24;
	int32_t ___isStereoEnabled_25;
	float ___maxShadowDistance_26;
	int32_t ___postProcessEnabled_27;
	RuntimeObject* ___captureActions_28;
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___volumeLayerMask_29;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___volumeTrigger_30;
	int32_t ___isStopNaNEnabled_31;
	int32_t ___isDitheringEnabled_32;
	int32_t ___antialiasing_33;
	int32_t ___antialiasingQuality_34;
	ScriptableRenderer_tF15B95BB85F26BE4B4719901D909831B89DC8892* ___renderer_35;
	int32_t ___resolveFinalTarget_36;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldSpaceCameraPos_37;
};
// Native definition for COM marshalling of UnityEngine.Rendering.Universal.CameraData
struct CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E_marshaled_com
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_ViewMatrix_0;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_ProjectionMatrix_1;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera_2;
	int32_t ___renderType_3;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___targetTexture_4;
	RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 ___cameraTargetDescriptor_5;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___pixelRect_6;
	int32_t ___pixelWidth_7;
	int32_t ___pixelHeight_8;
	float ___aspectRatio_9;
	float ___renderScale_10;
	int32_t ___imageScalingMode_11;
	int32_t ___upscalingFilter_12;
	int32_t ___fsrOverrideSharpness_13;
	float ___fsrSharpness_14;
	int32_t ___clearDepth_15;
	int32_t ___cameraType_16;
	int32_t ___isDefaultViewport_17;
	int32_t ___isHdrEnabled_18;
	int32_t ___requiresDepthTexture_19;
	int32_t ___requiresOpaqueTexture_20;
	int32_t ___postProcessingRequiresDepthTexture_21;
	int32_t ___xrRendering_22;
	int32_t ___defaultOpaqueSortFlags_23;
	XRPass_t0A618D61DBC9E3F8BC970B7C9D2679375C6C8A24* ___xr_24;
	int32_t ___isStereoEnabled_25;
	float ___maxShadowDistance_26;
	int32_t ___postProcessEnabled_27;
	RuntimeObject* ___captureActions_28;
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___volumeLayerMask_29;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___volumeTrigger_30;
	int32_t ___isStopNaNEnabled_31;
	int32_t ___isDitheringEnabled_32;
	int32_t ___antialiasing_33;
	int32_t ___antialiasingQuality_34;
	ScriptableRenderer_tF15B95BB85F26BE4B4719901D909831B89DC8892* ___renderer_35;
	int32_t ___resolveFinalTarget_36;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldSpaceCameraPos_37;
};

// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Rendering.CommandBuffer::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Rendering.CullingResults
struct CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 
{
	// System.IntPtr UnityEngine.Rendering.CullingResults::ptr
	intptr_t ___ptr_0;
	// UnityEngine.Rendering.CullingAllocationInfo* UnityEngine.Rendering.CullingResults::m_AllocationInfo
	CullingAllocationInfo_tB260F5CD0B290F74E145EB16E54B901CC68D9D5A* ___m_AllocationInfo_1;
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

// UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Gradient::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.GradientColorKey
struct GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A 
{
	// UnityEngine.Color UnityEngine.GradientColorKey::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_0;
	// System.Single UnityEngine.GradientColorKey::time
	float ___time_1;
};

// UnityEngine.Rendering.Universal.LightData
struct LightData_t6A82F1C9AA97327A5EE9C16A3E949918F3A55470 
{
	// System.Int32 UnityEngine.Rendering.Universal.LightData::mainLightIndex
	int32_t ___mainLightIndex_0;
	// System.Int32 UnityEngine.Rendering.Universal.LightData::additionalLightsCount
	int32_t ___additionalLightsCount_1;
	// System.Int32 UnityEngine.Rendering.Universal.LightData::maxPerObjectAdditionalLightsCount
	int32_t ___maxPerObjectAdditionalLightsCount_2;
	// Unity.Collections.NativeArray`1<UnityEngine.Rendering.VisibleLight> UnityEngine.Rendering.Universal.LightData::visibleLights
	NativeArray_1_t71485A1E60B31CCAD3E525C907CF172E8B804468 ___visibleLights_3;
	// Unity.Collections.NativeArray`1<System.Int32> UnityEngine.Rendering.Universal.LightData::originalIndices
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___originalIndices_4;
	// System.Boolean UnityEngine.Rendering.Universal.LightData::shadeAdditionalLightsPerVertex
	bool ___shadeAdditionalLightsPerVertex_5;
	// System.Boolean UnityEngine.Rendering.Universal.LightData::supportsMixedLighting
	bool ___supportsMixedLighting_6;
	// System.Boolean UnityEngine.Rendering.Universal.LightData::reflectionProbeBoxProjection
	bool ___reflectionProbeBoxProjection_7;
	// System.Boolean UnityEngine.Rendering.Universal.LightData::reflectionProbeBlending
	bool ___reflectionProbeBlending_8;
	// System.Boolean UnityEngine.Rendering.Universal.LightData::supportsLightLayers
	bool ___supportsLightLayers_9;
	// System.Boolean UnityEngine.Rendering.Universal.LightData::supportsAdditionalLights
	bool ___supportsAdditionalLights_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.Rendering.Universal.LightData
struct LightData_t6A82F1C9AA97327A5EE9C16A3E949918F3A55470_marshaled_pinvoke
{
	int32_t ___mainLightIndex_0;
	int32_t ___additionalLightsCount_1;
	int32_t ___maxPerObjectAdditionalLightsCount_2;
	NativeArray_1_t71485A1E60B31CCAD3E525C907CF172E8B804468 ___visibleLights_3;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___originalIndices_4;
	int32_t ___shadeAdditionalLightsPerVertex_5;
	int32_t ___supportsMixedLighting_6;
	int32_t ___reflectionProbeBoxProjection_7;
	int32_t ___reflectionProbeBlending_8;
	int32_t ___supportsLightLayers_9;
	int32_t ___supportsAdditionalLights_10;
};
// Native definition for COM marshalling of UnityEngine.Rendering.Universal.LightData
struct LightData_t6A82F1C9AA97327A5EE9C16A3E949918F3A55470_marshaled_com
{
	int32_t ___mainLightIndex_0;
	int32_t ___additionalLightsCount_1;
	int32_t ___maxPerObjectAdditionalLightsCount_2;
	NativeArray_1_t71485A1E60B31CCAD3E525C907CF172E8B804468 ___visibleLights_3;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___originalIndices_4;
	int32_t ___shadeAdditionalLightsPerVertex_5;
	int32_t ___supportsMixedLighting_6;
	int32_t ___reflectionProbeBoxProjection_7;
	int32_t ___reflectionProbeBlending_8;
	int32_t ___supportsLightLayers_9;
	int32_t ___supportsAdditionalLights_10;
};

// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D  : public RuntimeObject
{
	// System.IntPtr UnityEngine.MaterialPropertyBlock::m_Ptr
	intptr_t ___m_Ptr_0;
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

// UnityEngine.Plane
struct Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C 
{
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_2;
};

// UnityEngine.Rendering.RenderTargetIdentifier
struct RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B 
{
	// UnityEngine.Rendering.BuiltinRenderTextureType UnityEngine.Rendering.RenderTargetIdentifier::m_Type
	int32_t ___m_Type_1;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_NameID
	int32_t ___m_NameID_2;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_InstanceID
	int32_t ___m_InstanceID_3;
	// System.IntPtr UnityEngine.Rendering.RenderTargetIdentifier::m_BufferPointer
	intptr_t ___m_BufferPointer_4;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_MipLevel
	int32_t ___m_MipLevel_5;
	// UnityEngine.CubemapFace UnityEngine.Rendering.RenderTargetIdentifier::m_CubeFace
	int32_t ___m_CubeFace_6;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_DepthSlice
	int32_t ___m_DepthSlice_7;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Rendering.ScriptableRenderContext
struct ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 
{
	// System.IntPtr UnityEngine.Rendering.ScriptableRenderContext::m_Ptr
	intptr_t ___m_Ptr_1;
};

struct ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_StaticFields
{
	// UnityEngine.Rendering.ShaderTagId UnityEngine.Rendering.ScriptableRenderContext::kRenderTypeTag
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___kRenderTypeTag_0;
};

// UnityEngine.Rendering.Universal.ShadowData
struct ShadowData_tA165FDF7CA4CE6BEA8B649FFAB91C59ED684D832 
{
	// System.Boolean UnityEngine.Rendering.Universal.ShadowData::supportsMainLightShadows
	bool ___supportsMainLightShadows_0;
	// System.Boolean UnityEngine.Rendering.Universal.ShadowData::requiresScreenSpaceShadowResolve
	bool ___requiresScreenSpaceShadowResolve_1;
	// System.Int32 UnityEngine.Rendering.Universal.ShadowData::mainLightShadowmapWidth
	int32_t ___mainLightShadowmapWidth_2;
	// System.Int32 UnityEngine.Rendering.Universal.ShadowData::mainLightShadowmapHeight
	int32_t ___mainLightShadowmapHeight_3;
	// System.Int32 UnityEngine.Rendering.Universal.ShadowData::mainLightShadowCascadesCount
	int32_t ___mainLightShadowCascadesCount_4;
	// UnityEngine.Vector3 UnityEngine.Rendering.Universal.ShadowData::mainLightShadowCascadesSplit
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___mainLightShadowCascadesSplit_5;
	// System.Single UnityEngine.Rendering.Universal.ShadowData::mainLightShadowCascadeBorder
	float ___mainLightShadowCascadeBorder_6;
	// System.Boolean UnityEngine.Rendering.Universal.ShadowData::supportsAdditionalLightShadows
	bool ___supportsAdditionalLightShadows_7;
	// System.Int32 UnityEngine.Rendering.Universal.ShadowData::additionalLightsShadowmapWidth
	int32_t ___additionalLightsShadowmapWidth_8;
	// System.Int32 UnityEngine.Rendering.Universal.ShadowData::additionalLightsShadowmapHeight
	int32_t ___additionalLightsShadowmapHeight_9;
	// System.Boolean UnityEngine.Rendering.Universal.ShadowData::supportsSoftShadows
	bool ___supportsSoftShadows_10;
	// System.Int32 UnityEngine.Rendering.Universal.ShadowData::shadowmapDepthBufferBits
	int32_t ___shadowmapDepthBufferBits_11;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.Rendering.Universal.ShadowData::bias
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___bias_12;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.Rendering.Universal.ShadowData::resolution
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___resolution_13;
	// System.Boolean UnityEngine.Rendering.Universal.ShadowData::isKeywordAdditionalLightShadowsEnabled
	bool ___isKeywordAdditionalLightShadowsEnabled_14;
	// System.Boolean UnityEngine.Rendering.Universal.ShadowData::isKeywordSoftShadowsEnabled
	bool ___isKeywordSoftShadowsEnabled_15;
};
// Native definition for P/Invoke marshalling of UnityEngine.Rendering.Universal.ShadowData
struct ShadowData_tA165FDF7CA4CE6BEA8B649FFAB91C59ED684D832_marshaled_pinvoke
{
	int32_t ___supportsMainLightShadows_0;
	int32_t ___requiresScreenSpaceShadowResolve_1;
	int32_t ___mainLightShadowmapWidth_2;
	int32_t ___mainLightShadowmapHeight_3;
	int32_t ___mainLightShadowCascadesCount_4;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___mainLightShadowCascadesSplit_5;
	float ___mainLightShadowCascadeBorder_6;
	int32_t ___supportsAdditionalLightShadows_7;
	int32_t ___additionalLightsShadowmapWidth_8;
	int32_t ___additionalLightsShadowmapHeight_9;
	int32_t ___supportsSoftShadows_10;
	int32_t ___shadowmapDepthBufferBits_11;
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___bias_12;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___resolution_13;
	int32_t ___isKeywordAdditionalLightShadowsEnabled_14;
	int32_t ___isKeywordSoftShadowsEnabled_15;
};
// Native definition for COM marshalling of UnityEngine.Rendering.Universal.ShadowData
struct ShadowData_tA165FDF7CA4CE6BEA8B649FFAB91C59ED684D832_marshaled_com
{
	int32_t ___supportsMainLightShadows_0;
	int32_t ___requiresScreenSpaceShadowResolve_1;
	int32_t ___mainLightShadowmapWidth_2;
	int32_t ___mainLightShadowmapHeight_3;
	int32_t ___mainLightShadowCascadesCount_4;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___mainLightShadowCascadesSplit_5;
	float ___mainLightShadowCascadeBorder_6;
	int32_t ___supportsAdditionalLightShadows_7;
	int32_t ___additionalLightsShadowmapWidth_8;
	int32_t ___additionalLightsShadowmapHeight_9;
	int32_t ___supportsSoftShadows_10;
	int32_t ___shadowmapDepthBufferBits_11;
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___bias_12;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___resolution_13;
	int32_t ___isKeywordAdditionalLightShadowsEnabled_14;
	int32_t ___isKeywordSoftShadowsEnabled_15;
};

// UnityEngine.ParticleSystem/MinMaxGradient
struct MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 
{
	// UnityEngine.ParticleSystemGradientMode UnityEngine.ParticleSystem/MinMaxGradient::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.Gradient UnityEngine.ParticleSystem/MinMaxGradient::m_GradientMin
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___m_GradientMin_1;
	// UnityEngine.Gradient UnityEngine.ParticleSystem/MinMaxGradient::m_GradientMax
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___m_GradientMax_2;
	// UnityEngine.Color UnityEngine.ParticleSystem/MinMaxGradient::m_ColorMin
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_ColorMin_3;
	// UnityEngine.Color UnityEngine.ParticleSystem/MinMaxGradient::m_ColorMax
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_ColorMax_4;
};

// UnityEngine.Rendering.AttachmentDescriptor
struct AttachmentDescriptor_tBAC9B26B50BB0838C5C0CC22BB296F9DFF41276E 
{
	// UnityEngine.Rendering.RenderBufferLoadAction UnityEngine.Rendering.AttachmentDescriptor::m_LoadAction
	int32_t ___m_LoadAction_0;
	// UnityEngine.Rendering.RenderBufferStoreAction UnityEngine.Rendering.AttachmentDescriptor::m_StoreAction
	int32_t ___m_StoreAction_1;
	// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Rendering.AttachmentDescriptor::m_Format
	int32_t ___m_Format_2;
	// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.AttachmentDescriptor::m_LoadStoreTarget
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___m_LoadStoreTarget_3;
	// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.AttachmentDescriptor::m_ResolveTarget
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___m_ResolveTarget_4;
	// UnityEngine.Color UnityEngine.Rendering.AttachmentDescriptor::m_ClearColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_ClearColor_5;
	// System.Single UnityEngine.Rendering.AttachmentDescriptor::m_ClearDepth
	float ___m_ClearDepth_6;
	// System.UInt32 UnityEngine.Rendering.AttachmentDescriptor::m_ClearStencil
	uint32_t ___m_ClearStencil_7;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.Rendering.Universal.RenderingData
struct RenderingData_tAAA01190551D6D5954314E3E1E85B58DD45EED71 
{
	// UnityEngine.Rendering.CullingResults UnityEngine.Rendering.Universal.RenderingData::cullResults
	CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ___cullResults_0;
	// UnityEngine.Rendering.Universal.CameraData UnityEngine.Rendering.Universal.RenderingData::cameraData
	CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E ___cameraData_1;
	// UnityEngine.Rendering.Universal.LightData UnityEngine.Rendering.Universal.RenderingData::lightData
	LightData_t6A82F1C9AA97327A5EE9C16A3E949918F3A55470 ___lightData_2;
	// UnityEngine.Rendering.Universal.ShadowData UnityEngine.Rendering.Universal.RenderingData::shadowData
	ShadowData_tA165FDF7CA4CE6BEA8B649FFAB91C59ED684D832 ___shadowData_3;
	// UnityEngine.Rendering.Universal.PostProcessingData UnityEngine.Rendering.Universal.RenderingData::postProcessingData
	PostProcessingData_tFA75BF22951C600258B2707AF7A113E4EDA49BD4 ___postProcessingData_4;
	// System.Boolean UnityEngine.Rendering.Universal.RenderingData::supportsDynamicBatching
	bool ___supportsDynamicBatching_5;
	// UnityEngine.Rendering.PerObjectData UnityEngine.Rendering.Universal.RenderingData::perObjectData
	int32_t ___perObjectData_6;
	// System.Boolean UnityEngine.Rendering.Universal.RenderingData::postProcessingEnabled
	bool ___postProcessingEnabled_7;
};
// Native definition for P/Invoke marshalling of UnityEngine.Rendering.Universal.RenderingData
struct RenderingData_tAAA01190551D6D5954314E3E1E85B58DD45EED71_marshaled_pinvoke
{
	CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ___cullResults_0;
	CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E_marshaled_pinvoke ___cameraData_1;
	LightData_t6A82F1C9AA97327A5EE9C16A3E949918F3A55470_marshaled_pinvoke ___lightData_2;
	ShadowData_tA165FDF7CA4CE6BEA8B649FFAB91C59ED684D832_marshaled_pinvoke ___shadowData_3;
	PostProcessingData_tFA75BF22951C600258B2707AF7A113E4EDA49BD4_marshaled_pinvoke ___postProcessingData_4;
	int32_t ___supportsDynamicBatching_5;
	int32_t ___perObjectData_6;
	int32_t ___postProcessingEnabled_7;
};
// Native definition for COM marshalling of UnityEngine.Rendering.Universal.RenderingData
struct RenderingData_tAAA01190551D6D5954314E3E1E85B58DD45EED71_marshaled_com
{
	CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ___cullResults_0;
	CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E_marshaled_com ___cameraData_1;
	LightData_t6A82F1C9AA97327A5EE9C16A3E949918F3A55470_marshaled_com ___lightData_2;
	ShadowData_tA165FDF7CA4CE6BEA8B649FFAB91C59ED684D832_marshaled_com ___shadowData_3;
	PostProcessingData_tFA75BF22951C600258B2707AF7A113E4EDA49BD4_marshaled_com ___postProcessingData_4;
	int32_t ___supportsDynamicBatching_5;
	int32_t ___perObjectData_6;
	int32_t ___postProcessingEnabled_7;
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

// UnityEngine.Rendering.Universal.ScriptableRenderPass
struct ScriptableRenderPass_tEA38F6C7AD8D111A2251E4C2A7530BCEE7D6D2B0  : public RuntimeObject
{
	// UnityEngine.Rendering.Universal.RenderPassEvent UnityEngine.Rendering.Universal.ScriptableRenderPass::<renderPassEvent>k__BackingField
	int32_t ___U3CrenderPassEventU3Ek__BackingField_0;
	// UnityEngine.Rendering.RenderBufferStoreAction[] UnityEngine.Rendering.Universal.ScriptableRenderPass::m_ColorStoreActions
	RenderBufferStoreActionU5BU5D_tFEA8F5DD460573EA9F35FBEC5727D1804C5DCBF5* ___m_ColorStoreActions_1;
	// UnityEngine.Rendering.RenderBufferStoreAction UnityEngine.Rendering.Universal.ScriptableRenderPass::m_DepthStoreAction
	int32_t ___m_DepthStoreAction_2;
	// System.Boolean[] UnityEngine.Rendering.Universal.ScriptableRenderPass::m_OverriddenColorStoreActions
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___m_OverriddenColorStoreActions_3;
	// System.Boolean UnityEngine.Rendering.Universal.ScriptableRenderPass::m_OverriddenDepthStoreAction
	bool ___m_OverriddenDepthStoreAction_4;
	// UnityEngine.Rendering.ProfilingSampler UnityEngine.Rendering.Universal.ScriptableRenderPass::<profilingSampler>k__BackingField
	ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* ___U3CprofilingSamplerU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Rendering.Universal.ScriptableRenderPass::<overrideCameraTarget>k__BackingField
	bool ___U3CoverrideCameraTargetU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Rendering.Universal.ScriptableRenderPass::<isBlitRenderPass>k__BackingField
	bool ___U3CisBlitRenderPassU3Ek__BackingField_7;
	// System.Boolean UnityEngine.Rendering.Universal.ScriptableRenderPass::<useNativeRenderPass>k__BackingField
	bool ___U3CuseNativeRenderPassU3Ek__BackingField_8;
	// System.Int32 UnityEngine.Rendering.Universal.ScriptableRenderPass::<renderTargetWidth>k__BackingField
	int32_t ___U3CrenderTargetWidthU3Ek__BackingField_9;
	// System.Int32 UnityEngine.Rendering.Universal.ScriptableRenderPass::<renderTargetHeight>k__BackingField
	int32_t ___U3CrenderTargetHeightU3Ek__BackingField_10;
	// System.Int32 UnityEngine.Rendering.Universal.ScriptableRenderPass::<renderTargetSampleCount>k__BackingField
	int32_t ___U3CrenderTargetSampleCountU3Ek__BackingField_11;
	// System.Boolean UnityEngine.Rendering.Universal.ScriptableRenderPass::<depthOnly>k__BackingField
	bool ___U3CdepthOnlyU3Ek__BackingField_12;
	// System.Boolean UnityEngine.Rendering.Universal.ScriptableRenderPass::<isLastPass>k__BackingField
	bool ___U3CisLastPassU3Ek__BackingField_13;
	// System.Int32 UnityEngine.Rendering.Universal.ScriptableRenderPass::<renderPassQueueIndex>k__BackingField
	int32_t ___U3CrenderPassQueueIndexU3Ek__BackingField_14;
	// Unity.Collections.NativeArray`1<System.Int32> UnityEngine.Rendering.Universal.ScriptableRenderPass::m_ColorAttachmentIndices
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___m_ColorAttachmentIndices_15;
	// Unity.Collections.NativeArray`1<System.Int32> UnityEngine.Rendering.Universal.ScriptableRenderPass::m_InputAttachmentIndices
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___m_InputAttachmentIndices_16;
	// UnityEngine.Experimental.Rendering.GraphicsFormat[] UnityEngine.Rendering.Universal.ScriptableRenderPass::<renderTargetFormat>k__BackingField
	GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* ___U3CrenderTargetFormatU3Ek__BackingField_17;
	// UnityEngine.Rendering.RenderTargetIdentifier[] UnityEngine.Rendering.Universal.ScriptableRenderPass::m_ColorAttachments
	RenderTargetIdentifierU5BU5D_t179798C153B7CE381B41C57863F98CB24023C4CE* ___m_ColorAttachments_18;
	// UnityEngine.Rendering.RenderTargetIdentifier[] UnityEngine.Rendering.Universal.ScriptableRenderPass::m_InputAttachments
	RenderTargetIdentifierU5BU5D_t179798C153B7CE381B41C57863F98CB24023C4CE* ___m_InputAttachments_19;
	// System.Boolean[] UnityEngine.Rendering.Universal.ScriptableRenderPass::m_InputAttachmentIsTransient
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___m_InputAttachmentIsTransient_20;
	// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.Universal.ScriptableRenderPass::m_DepthAttachment
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___m_DepthAttachment_21;
	// UnityEngine.Rendering.Universal.ScriptableRenderPassInput UnityEngine.Rendering.Universal.ScriptableRenderPass::m_Input
	int32_t ___m_Input_22;
	// UnityEngine.Rendering.ClearFlag UnityEngine.Rendering.Universal.ScriptableRenderPass::m_ClearFlag
	int32_t ___m_ClearFlag_23;
	// UnityEngine.Color UnityEngine.Rendering.Universal.ScriptableRenderPass::m_ClearColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_ClearColor_24;
};

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera>
struct Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// StylizedGrass.GrassColorMap
struct GrassColorMap_tFF56A23499EB504A6EF9567C018A41C0B689D1E2  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Int32 StylizedGrass.GrassColorMap::resolution
	int32_t ___resolution_4;
	// UnityEngine.Bounds StylizedGrass.GrassColorMap::bounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___bounds_5;
	// UnityEngine.Vector4 StylizedGrass.GrassColorMap::uv
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv_6;
	// UnityEngine.Texture2D StylizedGrass.GrassColorMap::texture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture_7;
	// UnityEngine.Texture2D StylizedGrass.GrassColorMap::customTex
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___customTex_8;
	// System.Boolean StylizedGrass.GrassColorMap::overrideTexture
	bool ___overrideTexture_9;
	// System.Boolean StylizedGrass.GrassColorMap::hasScalemap
	bool ___hasScalemap_10;
};

struct GrassColorMap_tFF56A23499EB504A6EF9567C018A41C0B689D1E2_StaticFields
{
	// StylizedGrass.GrassColorMap StylizedGrass.GrassColorMap::Active
	GrassColorMap_tFF56A23499EB504A6EF9567C018A41C0B689D1E2* ___Active_11;
};

// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rendering.RenderPipelineAsset
struct RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rendering.Universal.ScriptableRenderer
struct ScriptableRenderer_tF15B95BB85F26BE4B4719901D909831B89DC8892  : public RuntimeObject
{
	// System.Int32 UnityEngine.Rendering.Universal.ScriptableRenderer::m_LastBeginSubpassPassIndex
	int32_t ___m_LastBeginSubpassPassIndex_2;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Hash128,System.Int32[]> UnityEngine.Rendering.Universal.ScriptableRenderer::m_MergeableRenderPassesMap
	Dictionary_2_tCB9019887EB0254D4745B0724BC12327C5B63792* ___m_MergeableRenderPassesMap_3;
	// System.Int32[][] UnityEngine.Rendering.Universal.ScriptableRenderer::m_MergeableRenderPassesMapArrays
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ___m_MergeableRenderPassesMapArrays_4;
	// UnityEngine.Hash128[] UnityEngine.Rendering.Universal.ScriptableRenderer::m_PassIndexToPassHash
	Hash128U5BU5D_tB104E7247B842648E447B7FCF4748077DC1F8C98* ___m_PassIndexToPassHash_5;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Hash128,System.Int32> UnityEngine.Rendering.Universal.ScriptableRenderer::m_RenderPassesAttachmentCount
	Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* ___m_RenderPassesAttachmentCount_6;
	// UnityEngine.Rendering.AttachmentDescriptor[] UnityEngine.Rendering.Universal.ScriptableRenderer::m_ActiveColorAttachmentDescriptors
	AttachmentDescriptorU5BU5D_tC70107EBD955FE94BA31C7FDC146069EF9C547C1* ___m_ActiveColorAttachmentDescriptors_7;
	// UnityEngine.Rendering.AttachmentDescriptor UnityEngine.Rendering.Universal.ScriptableRenderer::m_ActiveDepthAttachmentDescriptor
	AttachmentDescriptor_tBAC9B26B50BB0838C5C0CC22BB296F9DFF41276E ___m_ActiveDepthAttachmentDescriptor_8;
	// System.Boolean[] UnityEngine.Rendering.Universal.ScriptableRenderer::m_IsActiveColorAttachmentTransient
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___m_IsActiveColorAttachmentTransient_9;
	// UnityEngine.Rendering.RenderBufferStoreAction[] UnityEngine.Rendering.Universal.ScriptableRenderer::m_FinalColorStoreAction
	RenderBufferStoreActionU5BU5D_tFEA8F5DD460573EA9F35FBEC5727D1804C5DCBF5* ___m_FinalColorStoreAction_10;
	// UnityEngine.Rendering.RenderBufferStoreAction UnityEngine.Rendering.Universal.ScriptableRenderer::m_FinalDepthStoreAction
	int32_t ___m_FinalDepthStoreAction_11;
	// UnityEngine.Rendering.ProfilingSampler UnityEngine.Rendering.Universal.ScriptableRenderer::<profilingExecute>k__BackingField
	ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* ___U3CprofilingExecuteU3Ek__BackingField_12;
	// UnityEngine.Rendering.Universal.DebugHandler UnityEngine.Rendering.Universal.ScriptableRenderer::<DebugHandler>k__BackingField
	DebugHandler_t3A09E2CFD1CA6F5C192968A6FF19EE4863F44DA4* ___U3CDebugHandlerU3Ek__BackingField_13;
	// UnityEngine.Rendering.Universal.ScriptableRenderer/RenderingFeatures UnityEngine.Rendering.Universal.ScriptableRenderer::<supportedRenderingFeatures>k__BackingField
	RenderingFeatures_t31044CBDCDC2F05194BFA2A2122FBD937D78A371* ___U3CsupportedRenderingFeaturesU3Ek__BackingField_15;
	// UnityEngine.Rendering.GraphicsDeviceType[] UnityEngine.Rendering.Universal.ScriptableRenderer::<unsupportedGraphicsDeviceTypes>k__BackingField
	GraphicsDeviceTypeU5BU5D_t4322565F239068C66BF47053B83BD6A9A9D16408* ___U3CunsupportedGraphicsDeviceTypesU3Ek__BackingField_16;
	// UnityEngine.Rendering.Universal.StoreActionsOptimization UnityEngine.Rendering.Universal.ScriptableRenderer::m_StoreActionsOptimizationSetting
	int32_t ___m_StoreActionsOptimizationSetting_17;
	// System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.ScriptableRenderPass> UnityEngine.Rendering.Universal.ScriptableRenderer::m_ActiveRenderPassQueue
	List_1_t2E485E650BF1E41358CE56A69323E183C5A89CB6* ___m_ActiveRenderPassQueue_20;
	// System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.ScriptableRendererFeature> UnityEngine.Rendering.Universal.ScriptableRenderer::m_RendererFeatures
	List_1_t2121653FB628940E808D105AD2C17E0F20AFB3A6* ___m_RendererFeatures_21;
	// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.Universal.ScriptableRenderer::m_CameraColorTarget
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___m_CameraColorTarget_22;
	// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.Universal.ScriptableRenderer::m_CameraDepthTarget
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___m_CameraDepthTarget_23;
	// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.Universal.ScriptableRenderer::m_CameraResolveTarget
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___m_CameraResolveTarget_24;
	// System.Boolean UnityEngine.Rendering.Universal.ScriptableRenderer::m_FirstTimeCameraColorTargetIsBound
	bool ___m_FirstTimeCameraColorTargetIsBound_25;
	// System.Boolean UnityEngine.Rendering.Universal.ScriptableRenderer::m_FirstTimeCameraDepthTargetIsBound
	bool ___m_FirstTimeCameraDepthTargetIsBound_26;
	// System.Boolean UnityEngine.Rendering.Universal.ScriptableRenderer::m_IsPipelineExecuting
	bool ___m_IsPipelineExecuting_27;
	// System.Boolean UnityEngine.Rendering.Universal.ScriptableRenderer::isCameraColorTargetValid
	bool ___isCameraColorTargetValid_28;
	// System.Boolean UnityEngine.Rendering.Universal.ScriptableRenderer::disableNativeRenderPassInFeatures
	bool ___disableNativeRenderPassInFeatures_29;
	// System.Boolean UnityEngine.Rendering.Universal.ScriptableRenderer::useRenderPassEnabled
	bool ___useRenderPassEnabled_30;
	// System.Boolean UnityEngine.Rendering.Universal.ScriptableRenderer::<useDepthPriming>k__BackingField
	bool ___U3CuseDepthPrimingU3Ek__BackingField_38;
	// System.Boolean UnityEngine.Rendering.Universal.ScriptableRenderer::<stripShadowsOffVariants>k__BackingField
	bool ___U3CstripShadowsOffVariantsU3Ek__BackingField_39;
	// System.Boolean UnityEngine.Rendering.Universal.ScriptableRenderer::<stripAdditionalLightOffVariants>k__BackingField
	bool ___U3CstripAdditionalLightOffVariantsU3Ek__BackingField_40;
};

struct ScriptableRenderer_tF15B95BB85F26BE4B4719901D909831B89DC8892_StaticFields
{
	// UnityEngine.Rendering.Universal.ScriptableRenderer UnityEngine.Rendering.Universal.ScriptableRenderer::current
	ScriptableRenderer_tF15B95BB85F26BE4B4719901D909831B89DC8892* ___current_14;
	// System.Boolean UnityEngine.Rendering.Universal.ScriptableRenderer::m_UseOptimizedStoreActions
	bool ___m_UseOptimizedStoreActions_18;
	// UnityEngine.Rendering.RenderTargetIdentifier[] UnityEngine.Rendering.Universal.ScriptableRenderer::m_ActiveColorAttachments
	RenderTargetIdentifierU5BU5D_t179798C153B7CE381B41C57863F98CB24023C4CE* ___m_ActiveColorAttachments_31;
	// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.Universal.ScriptableRenderer::m_ActiveDepthAttachment
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___m_ActiveDepthAttachment_32;
	// UnityEngine.Rendering.RenderBufferStoreAction[] UnityEngine.Rendering.Universal.ScriptableRenderer::m_ActiveColorStoreActions
	RenderBufferStoreActionU5BU5D_tFEA8F5DD460573EA9F35FBEC5727D1804C5DCBF5* ___m_ActiveColorStoreActions_33;
	// UnityEngine.Rendering.RenderBufferStoreAction UnityEngine.Rendering.Universal.ScriptableRenderer::m_ActiveDepthStoreAction
	int32_t ___m_ActiveDepthStoreAction_34;
	// UnityEngine.Rendering.RenderTargetIdentifier[][] UnityEngine.Rendering.Universal.ScriptableRenderer::m_TrimmedColorAttachmentCopies
	RenderTargetIdentifierU5BU5DU5BU5D_tDB35F8D017FE3AD8BB35E08E323074D47C5A10BB* ___m_TrimmedColorAttachmentCopies_35;
	// UnityEngine.Plane[] UnityEngine.Rendering.Universal.ScriptableRenderer::s_Planes
	PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE* ___s_Planes_36;
	// UnityEngine.Vector4[] UnityEngine.Rendering.Universal.ScriptableRenderer::s_VectorPlanes
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___s_VectorPlanes_37;
};

// UnityEngine.Rendering.Universal.ScriptableRendererData
struct ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean UnityEngine.Rendering.Universal.ScriptableRendererData::<isInvalidated>k__BackingField
	bool ___U3CisInvalidatedU3Ek__BackingField_4;
	// UnityEngine.Rendering.Universal.ScriptableRendererData/DebugShaderResources UnityEngine.Rendering.Universal.ScriptableRendererData::debugShaders
	DebugShaderResources_tDE399BFF5E1E9403CD4793CD8C8A51796C682B8B* ___debugShaders_5;
	// System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.ScriptableRendererFeature> UnityEngine.Rendering.Universal.ScriptableRendererData::m_RendererFeatures
	List_1_t2121653FB628940E808D105AD2C17E0F20AFB3A6* ___m_RendererFeatures_6;
	// System.Collections.Generic.List`1<System.Int64> UnityEngine.Rendering.Universal.ScriptableRendererData::m_RendererFeatureMap
	List_1_tF9D88C946600C782EE786A252258C0AA97BD019A* ___m_RendererFeatureMap_7;
	// System.Boolean UnityEngine.Rendering.Universal.ScriptableRendererData::m_UseNativeRenderPass
	bool ___m_UseNativeRenderPass_8;
};

// UnityEngine.Rendering.Universal.ScriptableRendererFeature
struct ScriptableRendererFeature_tF2ED08AD2498105378D4DAB0386A0F8A144EF4C6  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean UnityEngine.Rendering.Universal.ScriptableRendererFeature::m_Active
	bool ___m_Active_4;
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.WindZone
struct WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// StylizedGrass.DrawGrassBenders/DrawGrassBendersPass
struct DrawGrassBendersPass_t910E752F82318AB6034D3395872D033459AEBA0B  : public ScriptableRenderPass_tEA38F6C7AD8D111A2251E4C2A7530BCEE7D6D2B0
{
	// UnityEngine.Rendering.ProfilingSampler StylizedGrass.DrawGrassBenders/DrawGrassBendersPass::profilerSampler
	ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* ___profilerSampler_26;
	// UnityEngine.MaterialPropertyBlock StylizedGrass.DrawGrassBenders/DrawGrassBendersPass::props
	MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___props_27;
	// System.Int32 StylizedGrass.DrawGrassBenders/DrawGrassBendersPass::paramsID
	int32_t ___paramsID_28;
	// UnityEngine.Plane[] StylizedGrass.DrawGrassBenders/DrawGrassBendersPass::frustrumPlanes
	PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE* ___frustrumPlanes_29;
	// System.Boolean StylizedGrass.DrawGrassBenders/DrawGrassBendersPass::trailEnabled
	bool ___trailEnabled_30;
	// UnityEngine.MeshRenderer StylizedGrass.DrawGrassBenders/DrawGrassBendersPass::m_MeshRenderer
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___m_MeshRenderer_31;
	// UnityEngine.TrailRenderer StylizedGrass.DrawGrassBenders/DrawGrassBendersPass::m_TrailRenderer
	TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* ___m_TrailRenderer_32;
	// UnityEngine.LineRenderer StylizedGrass.DrawGrassBenders/DrawGrassBendersPass::m_LineRenderer
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___m_LineRenderer_33;
	// UnityEngine.ParticleSystemRenderer StylizedGrass.DrawGrassBenders/DrawGrassBendersPass::m_ParticleRenderer
	ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* ___m_ParticleRenderer_34;
	// UnityEngine.ParticleSystem/ColorOverLifetimeModule StylizedGrass.DrawGrassBenders/DrawGrassBendersPass::m_ParticleRendererGrad
	ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 ___m_ParticleRendererGrad_35;
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// StylizedGrass.DrawGrassBenders
struct DrawGrassBenders_tF4005AC5C190E9951BA18E65AABDF30FDD9D1A75  : public ScriptableRendererFeature_tF2ED08AD2498105378D4DAB0386A0F8A144EF4C6
{
	// StylizedGrass.DrawGrassBenders/DrawGrassBendersPass StylizedGrass.DrawGrassBenders::m_ScriptablePass
	DrawGrassBendersPass_t910E752F82318AB6034D3395872D033459AEBA0B* ___m_ScriptablePass_5;
};

struct DrawGrassBenders_tF4005AC5C190E9951BA18E65AABDF30FDD9D1A75_StaticFields
{
	// System.String StylizedGrass.DrawGrassBenders::RendererGUID
	String_t* ___RendererGUID_6;
};

// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.ParticleSystemRenderer
struct ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.TrailRenderer
struct TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset
struct UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232  : public RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E
{
	// UnityEngine.Shader UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_DefaultShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___m_DefaultShader_4;
	// UnityEngine.Rendering.Universal.ScriptableRenderer[] UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_Renderers
	ScriptableRendererU5BU5D_t9B15C048BCE03A67E830F1C79989B6A3E43788E6* ___m_Renderers_5;
	// System.Int32 UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::k_AssetVersion
	int32_t ___k_AssetVersion_6;
	// System.Int32 UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::k_AssetPreviousVersion
	int32_t ___k_AssetPreviousVersion_7;
	// UnityEngine.Rendering.Universal.RendererType UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_RendererType
	int32_t ___m_RendererType_8;
	// UnityEngine.Rendering.Universal.ScriptableRendererData UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_RendererData
	ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* ___m_RendererData_9;
	// UnityEngine.Rendering.Universal.ScriptableRendererData[] UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_RendererDataList
	ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169* ___m_RendererDataList_10;
	// System.Int32 UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_DefaultRendererIndex
	int32_t ___m_DefaultRendererIndex_11;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_RequireDepthTexture
	bool ___m_RequireDepthTexture_12;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_RequireOpaqueTexture
	bool ___m_RequireOpaqueTexture_13;
	// UnityEngine.Rendering.Universal.Downsampling UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_OpaqueDownsampling
	int32_t ___m_OpaqueDownsampling_14;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_SupportsTerrainHoles
	bool ___m_SupportsTerrainHoles_15;
	// UnityEngine.Rendering.Universal.StoreActionsOptimization UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_StoreActionsOptimization
	int32_t ___m_StoreActionsOptimization_16;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_SupportsHDR
	bool ___m_SupportsHDR_17;
	// UnityEngine.Rendering.Universal.MsaaQuality UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_MSAA
	int32_t ___m_MSAA_18;
	// System.Single UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_RenderScale
	float ___m_RenderScale_19;
	// UnityEngine.Rendering.Universal.UpscalingFilterSelection UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_UpscalingFilter
	int32_t ___m_UpscalingFilter_20;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_FsrOverrideSharpness
	bool ___m_FsrOverrideSharpness_21;
	// System.Single UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_FsrSharpness
	float ___m_FsrSharpness_22;
	// UnityEngine.Rendering.Universal.LightRenderingMode UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_MainLightRenderingMode
	int32_t ___m_MainLightRenderingMode_23;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_MainLightShadowsSupported
	bool ___m_MainLightShadowsSupported_24;
	// UnityEngine.Rendering.Universal.ShadowResolution UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_MainLightShadowmapResolution
	int32_t ___m_MainLightShadowmapResolution_25;
	// UnityEngine.Rendering.Universal.LightRenderingMode UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_AdditionalLightsRenderingMode
	int32_t ___m_AdditionalLightsRenderingMode_26;
	// System.Int32 UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_AdditionalLightsPerObjectLimit
	int32_t ___m_AdditionalLightsPerObjectLimit_27;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_AdditionalLightShadowsSupported
	bool ___m_AdditionalLightShadowsSupported_28;
	// UnityEngine.Rendering.Universal.ShadowResolution UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_AdditionalLightsShadowmapResolution
	int32_t ___m_AdditionalLightsShadowmapResolution_29;
	// System.Int32 UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_AdditionalLightsShadowResolutionTierLow
	int32_t ___m_AdditionalLightsShadowResolutionTierLow_30;
	// System.Int32 UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_AdditionalLightsShadowResolutionTierMedium
	int32_t ___m_AdditionalLightsShadowResolutionTierMedium_31;
	// System.Int32 UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_AdditionalLightsShadowResolutionTierHigh
	int32_t ___m_AdditionalLightsShadowResolutionTierHigh_32;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_ReflectionProbeBlending
	bool ___m_ReflectionProbeBlending_33;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_ReflectionProbeBoxProjection
	bool ___m_ReflectionProbeBoxProjection_34;
	// System.Single UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_ShadowDistance
	float ___m_ShadowDistance_35;
	// System.Int32 UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_ShadowCascadeCount
	int32_t ___m_ShadowCascadeCount_36;
	// System.Single UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_Cascade2Split
	float ___m_Cascade2Split_37;
	// UnityEngine.Vector2 UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_Cascade3Split
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Cascade3Split_38;
	// UnityEngine.Vector3 UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_Cascade4Split
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Cascade4Split_39;
	// System.Single UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_CascadeBorder
	float ___m_CascadeBorder_40;
	// System.Single UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_ShadowDepthBias
	float ___m_ShadowDepthBias_41;
	// System.Single UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_ShadowNormalBias
	float ___m_ShadowNormalBias_42;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_SoftShadowsSupported
	bool ___m_SoftShadowsSupported_43;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_ConservativeEnclosingSphere
	bool ___m_ConservativeEnclosingSphere_44;
	// System.Int32 UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_NumIterationsEnclosingSphere
	int32_t ___m_NumIterationsEnclosingSphere_45;
	// UnityEngine.Rendering.Universal.LightCookieResolution UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_AdditionalLightsCookieResolution
	int32_t ___m_AdditionalLightsCookieResolution_46;
	// UnityEngine.Rendering.Universal.LightCookieFormat UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_AdditionalLightsCookieFormat
	int32_t ___m_AdditionalLightsCookieFormat_47;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_UseSRPBatcher
	bool ___m_UseSRPBatcher_48;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_SupportsDynamicBatching
	bool ___m_SupportsDynamicBatching_49;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_MixedLightingSupported
	bool ___m_MixedLightingSupported_50;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_SupportsLightLayers
	bool ___m_SupportsLightLayers_51;
	// UnityEngine.Rendering.Universal.PipelineDebugLevel UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_DebugLevel
	int32_t ___m_DebugLevel_52;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_UseAdaptivePerformance
	bool ___m_UseAdaptivePerformance_53;
	// UnityEngine.Rendering.Universal.ColorGradingMode UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_ColorGradingMode
	int32_t ___m_ColorGradingMode_54;
	// System.Int32 UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_ColorGradingLutSize
	int32_t ___m_ColorGradingLutSize_55;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_UseFastSRGBLinearConversion
	bool ___m_UseFastSRGBLinearConversion_56;
	// UnityEngine.Rendering.Universal.ShadowQuality UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_ShadowType
	int32_t ___m_ShadowType_57;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_LocalShadowsSupported
	bool ___m_LocalShadowsSupported_58;
	// UnityEngine.Rendering.Universal.ShadowResolution UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_LocalShadowsAtlasResolution
	int32_t ___m_LocalShadowsAtlasResolution_59;
	// System.Int32 UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_MaxPixelLights
	int32_t ___m_MaxPixelLights_60;
	// UnityEngine.Rendering.Universal.ShadowResolution UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_ShadowAtlasResolution
	int32_t ___m_ShadowAtlasResolution_61;
	// UnityEngine.Rendering.Universal.ShaderVariantLogLevel UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_ShaderVariantLogLevel
	int32_t ___m_ShaderVariantLogLevel_62;
	// UnityEngine.Rendering.Universal.VolumeFrameworkUpdateMode UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_VolumeFrameworkUpdateMode
	int32_t ___m_VolumeFrameworkUpdateMode_63;
	// UnityEngine.Rendering.Universal.ShadowCascadesOption UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_ShadowCascades
	int32_t ___m_ShadowCascades_72;
};

struct UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232_StaticFields
{
	// System.Int32 UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::AdditionalLightsDefaultShadowResolutionTierLow
	int32_t ___AdditionalLightsDefaultShadowResolutionTierLow_68;
	// System.Int32 UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::AdditionalLightsDefaultShadowResolutionTierMedium
	int32_t ___AdditionalLightsDefaultShadowResolutionTierMedium_69;
	// System.Int32 UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::AdditionalLightsDefaultShadowResolutionTierHigh
	int32_t ___AdditionalLightsDefaultShadowResolutionTierHigh_70;
	// UnityEngine.Experimental.Rendering.GraphicsFormat[][] UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::s_LightCookieFormatList
	GraphicsFormatU5BU5DU5BU5D_t1424BD937A890524D2A66FF39E61DEB0F10FE0A2* ___s_LightCookieFormatList_71;
};

// UnityEngine.Rendering.Universal.UniversalRendererData
struct UniversalRendererData_t57D400CEB38765F55EB74FDBD786B9A73C293CA6  : public ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7
{
	// UnityEngine.Rendering.Universal.PostProcessData UnityEngine.Rendering.Universal.UniversalRendererData::postProcessData
	PostProcessData_t106B5638205D5CBAF18F2573047F2DC23BDB2F05* ___postProcessData_9;
	// UnityEngine.Rendering.Universal.XRSystemData UnityEngine.Rendering.Universal.UniversalRendererData::xrSystemData
	XRSystemData_t89A064914358326F98105E94D5F082C186133DE6* ___xrSystemData_10;
	// UnityEngine.Rendering.Universal.UniversalRendererData/ShaderResources UnityEngine.Rendering.Universal.UniversalRendererData::shaders
	ShaderResources_t9E48D1BC255505EC66B90558EF6489F704FD3663* ___shaders_11;
	// System.Int32 UnityEngine.Rendering.Universal.UniversalRendererData::m_AssetVersion
	int32_t ___m_AssetVersion_13;
	// UnityEngine.LayerMask UnityEngine.Rendering.Universal.UniversalRendererData::m_OpaqueLayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_OpaqueLayerMask_14;
	// UnityEngine.LayerMask UnityEngine.Rendering.Universal.UniversalRendererData::m_TransparentLayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_TransparentLayerMask_15;
	// UnityEngine.Rendering.Universal.StencilStateData UnityEngine.Rendering.Universal.UniversalRendererData::m_DefaultStencilState
	StencilStateData_t4181AB6F6A795950C67270CB147999D915071462* ___m_DefaultStencilState_16;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalRendererData::m_ShadowTransparentReceive
	bool ___m_ShadowTransparentReceive_17;
	// UnityEngine.Rendering.Universal.RenderingMode UnityEngine.Rendering.Universal.UniversalRendererData::m_RenderingMode
	int32_t ___m_RenderingMode_18;
	// UnityEngine.Rendering.Universal.DepthPrimingMode UnityEngine.Rendering.Universal.UniversalRendererData::m_DepthPrimingMode
	int32_t ___m_DepthPrimingMode_19;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalRendererData::m_AccurateGbufferNormals
	bool ___m_AccurateGbufferNormals_20;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalRendererData::m_ClusteredRendering
	bool ___m_ClusteredRendering_21;
	// UnityEngine.Rendering.Universal.TileSize UnityEngine.Rendering.Universal.UniversalRendererData::m_TileSize
	int32_t ___m_TileSize_23;
	// UnityEngine.Rendering.Universal.IntermediateTextureMode UnityEngine.Rendering.Universal.UniversalRendererData::m_IntermediateTextureMode
	int32_t ___m_IntermediateTextureMode_24;
};

// StylizedGrass.GrassBender
struct GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// StylizedGrass.GrassBenderBase/BenderType StylizedGrass.GrassBender::benderType
	int32_t ___benderType_4;
	// System.Int32 StylizedGrass.GrassBender::layer
	int32_t ___layer_5;
	// System.Int32 StylizedGrass.GrassBender::sortingLayer
	int32_t ___sortingLayer_6;
	// UnityEngine.Mesh StylizedGrass.GrassBender::bakedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___bakedMesh_7;
	// UnityEngine.Mesh StylizedGrass.GrassBender::particleTrailMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___particleTrailMesh_8;
	// System.Single StylizedGrass.GrassBender::heightOffset
	float ___heightOffset_9;
	// System.Single StylizedGrass.GrassBender::strength
	float ___strength_10;
	// System.Single StylizedGrass.GrassBender::pushStrength
	float ___pushStrength_11;
	// System.Single StylizedGrass.GrassBender::scaleMultiplier
	float ___scaleMultiplier_12;
	// UnityEngine.AnimationCurve StylizedGrass.GrassBender::strengthOverLifetime
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___strengthOverLifetime_13;
	// UnityEngine.Gradient StylizedGrass.GrassBender::strengthGradient
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___strengthGradient_14;
	// System.Boolean StylizedGrass.GrassBender::alphaBlending
	bool ___alphaBlending_15;
	// UnityEngine.MeshFilter StylizedGrass.GrassBender::meshFilter
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___meshFilter_16;
	// UnityEngine.Mesh StylizedGrass.GrassBender::mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh_17;
	// UnityEngine.MeshRenderer StylizedGrass.GrassBender::meshRenderer
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___meshRenderer_18;
	// UnityEngine.TrailRenderer StylizedGrass.GrassBender::trailRenderer
	TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* ___trailRenderer_19;
	// System.Boolean StylizedGrass.GrassBender::forceUpdating
	bool ___forceUpdating_20;
	// System.Single StylizedGrass.GrassBender::trailAccuracy
	float ___trailAccuracy_21;
	// System.Single StylizedGrass.GrassBender::trailLifetime
	float ___trailLifetime_22;
	// System.Single StylizedGrass.GrassBender::trailRadius
	float ___trailRadius_23;
	// UnityEngine.AnimationCurve StylizedGrass.GrassBender::widthOverLifetime
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___widthOverLifetime_24;
	// UnityEngine.ParticleSystem StylizedGrass.GrassBender::particleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___particleSystem_25;
	// UnityEngine.ParticleSystemRenderer StylizedGrass.GrassBender::particleRenderer
	ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* ___particleRenderer_26;
	// System.Boolean StylizedGrass.GrassBender::hasParticleTrails
	bool ___hasParticleTrails_27;
	// UnityEngine.ParticleSystem/ColorOverLifetimeModule StylizedGrass.GrassBender::psGrad
	ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 ___psGrad_28;
	// UnityEngine.LineRenderer StylizedGrass.GrassBender::lineRenderer
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___lineRenderer_29;
	// UnityEngine.Vector3 StylizedGrass.GrassBender::targetPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition_30;
};

// StylizedGrass.GrassColorMapRenderer
struct GrassColorMapRenderer_t888182E165920AC4818E5B27C9A9DC7458D446FC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Rendering.Universal.UniversalRendererData StylizedGrass.GrassColorMapRenderer::renderData
	UniversalRendererData_t57D400CEB38765F55EB74FDBD786B9A73C293CA6* ___renderData_5;
	// StylizedGrass.GrassColorMap StylizedGrass.GrassColorMapRenderer::colorMap
	GrassColorMap_tFF56A23499EB504A6EF9567C018A41C0B689D1E2* ___colorMap_6;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> StylizedGrass.GrassColorMapRenderer::terrainObjects
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___terrainObjects_7;
	// System.Int32 StylizedGrass.GrassColorMapRenderer::resIdx
	int32_t ___resIdx_8;
	// System.Int32 StylizedGrass.GrassColorMapRenderer::resolution
	int32_t ___resolution_9;
	// UnityEngine.LayerMask StylizedGrass.GrassColorMapRenderer::renderLayer
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___renderLayer_10;
	// System.Boolean StylizedGrass.GrassColorMapRenderer::useLayers
	bool ___useLayers_11;
	// System.Boolean StylizedGrass.GrassColorMapRenderer::thirdPartyShader
	bool ___thirdPartyShader_12;
	// UnityEngine.Camera StylizedGrass.GrassColorMapRenderer::renderCam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___renderCam_13;
	// System.Boolean StylizedGrass.GrassColorMapRenderer::showBounds
	bool ___showBounds_14;
	// System.Collections.Generic.List`1<StylizedGrass.GrassColorMapRenderer/LayerScaleSettings> StylizedGrass.GrassColorMapRenderer::layerScaleSettings
	List_1_tA28F6808989CF34898F6297C5FA6A643BA930F88* ___layerScaleSettings_15;
};

struct GrassColorMapRenderer_t888182E165920AC4818E5B27C9A9DC7458D446FC_StaticFields
{
	// StylizedGrass.GrassColorMapRenderer StylizedGrass.GrassColorMapRenderer::Instance
	GrassColorMapRenderer_t888182E165920AC4818E5B27C9A9DC7458D446FC* ___Instance_4;
};

// StylizedGrass.StylizedGrassRenderer
struct StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Rendering.Universal.ScriptableRendererData StylizedGrass.StylizedGrassRenderer::bendRenderer
	ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* ___bendRenderer_5;
	// System.Boolean StylizedGrass.StylizedGrassRenderer::debug
	bool ___debug_7;
	// System.Boolean StylizedGrass.StylizedGrassRenderer::followCamera
	bool ___followCamera_8;
	// System.Single StylizedGrass.StylizedGrassRenderer::renderExtends
	float ___renderExtends_9;
	// UnityEngine.Transform StylizedGrass.StylizedGrassRenderer::followTarget
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___followTarget_10;
	// UnityEngine.RenderTexture StylizedGrass.StylizedGrassRenderer::vectorRT
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___vectorRT_11;
	// UnityEngine.Camera StylizedGrass.StylizedGrassRenderer::renderCam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___renderCam_12;
	// System.Int32 StylizedGrass.StylizedGrassRenderer::resolution
	int32_t ___resolution_13;
	// System.Int32 StylizedGrass.StylizedGrassRenderer::m_resolution
	int32_t ___m_resolution_14;
	// StylizedGrass.GrassColorMap StylizedGrass.StylizedGrassRenderer::colorMap
	GrassColorMap_tFF56A23499EB504A6EF9567C018A41C0B689D1E2* ___colorMap_15;
	// System.Boolean StylizedGrass.StylizedGrassRenderer::listenToWindZone
	bool ___listenToWindZone_16;
	// UnityEngine.WindZone StylizedGrass.StylizedGrassRenderer::windZone
	WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* ___windZone_17;
	// UnityEngine.Vector3 StylizedGrass.StylizedGrassRenderer::targetPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition_21;
	// UnityEngine.Bounds StylizedGrass.StylizedGrassRenderer::bounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___bounds_22;
	// UnityEngine.Vector4 StylizedGrass.StylizedGrassRenderer::uv
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv_23;
};

struct StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_StaticFields
{
	// StylizedGrass.StylizedGrassRenderer StylizedGrass.StylizedGrassRenderer::Instance
	StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9* ___Instance_4;
	// System.Collections.Generic.SortedDictionary`2<System.Int32,System.Collections.Generic.List`1<StylizedGrass.GrassBender>> StylizedGrass.StylizedGrassRenderer::GrassBenders
	SortedDictionary_2_tAF165674EA735D9A7BCDBE5EEC973D10DC83FB30* ___GrassBenders_18;
	// System.Collections.Generic.List`1<StylizedGrass.GrassBender> StylizedGrass.StylizedGrassRenderer::BenderLayer
	List_1_t49364358CC095949053FDAC3CDE0F381C4DB93C6* ___BenderLayer_19;
	// System.Int32 StylizedGrass.StylizedGrassRenderer::benderCount
	int32_t ___benderCount_20;
	// System.Int32 StylizedGrass.StylizedGrassRenderer::_BendMap
	int32_t ____BendMap_24;
	// System.Int32 StylizedGrass.StylizedGrassRenderer::_BendMapUV
	int32_t ____BendMapUV_25;
	// UnityEngine.Color StylizedGrass.StylizedGrassRenderer::neutralVector
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___neutralVector_26;
	// System.Int32 StylizedGrass.StylizedGrassRenderer::_GlobalWindParams
	int32_t ____GlobalWindParams_27;
	// System.Int32 StylizedGrass.StylizedGrassRenderer::_BendRenderParams
	int32_t ____BendRenderParams_28;
};

// UnityEngine.Rendering.Universal.UniversalAdditionalCameraData
struct UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_RenderShadows
	bool ___m_RenderShadows_8;
	// UnityEngine.Rendering.Universal.CameraOverrideOption UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_RequiresDepthTextureOption
	int32_t ___m_RequiresDepthTextureOption_9;
	// UnityEngine.Rendering.Universal.CameraOverrideOption UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_RequiresOpaqueTextureOption
	int32_t ___m_RequiresOpaqueTextureOption_10;
	// UnityEngine.Rendering.Universal.CameraRenderType UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_CameraType
	int32_t ___m_CameraType_11;
	// System.Collections.Generic.List`1<UnityEngine.Camera> UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_Cameras
	List_1_tD2FA3273746E404D72561E8324608D18B52B533E* ___m_Cameras_12;
	// System.Int32 UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_RendererIndex
	int32_t ___m_RendererIndex_13;
	// UnityEngine.LayerMask UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_VolumeLayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_VolumeLayerMask_14;
	// UnityEngine.Transform UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_VolumeTrigger
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_VolumeTrigger_15;
	// UnityEngine.Rendering.Universal.VolumeFrameworkUpdateMode UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_VolumeFrameworkUpdateModeOption
	int32_t ___m_VolumeFrameworkUpdateModeOption_16;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_RenderPostProcessing
	bool ___m_RenderPostProcessing_17;
	// UnityEngine.Rendering.Universal.AntialiasingMode UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_Antialiasing
	int32_t ___m_Antialiasing_18;
	// UnityEngine.Rendering.Universal.AntialiasingQuality UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_AntialiasingQuality
	int32_t ___m_AntialiasingQuality_19;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_StopNaN
	bool ___m_StopNaN_20;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_Dithering
	bool ___m_Dithering_21;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_ClearDepth
	bool ___m_ClearDepth_22;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_AllowXRRendering
	bool ___m_AllowXRRendering_23;
	// UnityEngine.Camera UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_24;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_RequiresDepthTexture
	bool ___m_RequiresDepthTexture_25;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_RequiresColorTexture
	bool ___m_RequiresColorTexture_26;
	// System.Single UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_Version
	float ___m_Version_27;
	// UnityEngine.Rendering.VolumeStack UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_VolumeStack
	VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* ___m_VolumeStack_29;
};

struct UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93_StaticFields
{
	// UnityEngine.Rendering.Universal.UniversalAdditionalCameraData UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::s_DefaultAdditionalCameraData
	UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* ___s_DefaultAdditionalCameraData_28;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Plane[]
struct PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE  : public RuntimeArray
{
	ALIGN_FIELD (8) Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C m_Items[1];

	inline Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.GradientColorKey[]
struct GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18  : public RuntimeArray
{
	ALIGN_FIELD (8) GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A m_Items[1];

	inline GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.GradientAlphaKey[]
struct GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E  : public RuntimeArray
{
	ALIGN_FIELD (8) GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 m_Items[1];

	inline GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Rendering.Universal.ScriptableRendererData[]
struct ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169  : public RuntimeArray
{
	ALIGN_FIELD (8) ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* m_Items[1];

	inline ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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


// System.Collections.Generic.SortedDictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.SortedDictionary`2<System.Int32,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tF77AFC317EFFE0D2C9C9BADF1972E6EFEEBE6657 SortedDictionary_2_GetEnumerator_mC6A6DA4C249F5DC2A9CDA29E10140E10BFE4251A_gshared (SortedDictionary_2_t84C54AB886B687592198FD4D32DD4EFC9B5C1A28* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.SortedDictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m8FEB9A09D7BAD7243929F23B457BAA6A1E0BDC32_gshared (Enumerator_tF77AFC317EFFE0D2C9C9BADF1972E6EFEEBE6657* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.SortedDictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 Enumerator_get_Current_m69D6C20125D63CBD384CAF8602D08FDE8B992F7E_gshared (Enumerator_tF77AFC317EFFE0D2C9C9BADF1972E6EFEEBE6657* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_gshared_inline (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.SortedDictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m6C8AC4EA02FC896C11AE0DD2AC5EC35CAAFA8704_gshared (Enumerator_tF77AFC317EFFE0D2C9C9BADF1972E6EFEEBE6657* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.ParticleSystem/ColorOverLifetimeModule>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 Component_GetComponent_TisColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_mBD9F283ADB0A9ACB7BD542CFA753D3C1CFF61C1F_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.SortedDictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedDictionary_2_ContainsKey_m6122FE27DF48CEE6255894462DD3ACC18E577F77_gshared (SortedDictionary_2_t84C54AB886B687592198FD4D32DD4EFC9B5C1A28* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.SortedDictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedDictionary_2_TryGetValue_mA1A5691811AFB363350AE4D3923AF6293D4A870C_gshared (SortedDictionary_2_t84C54AB886B687592198FD4D32DD4EFC9B5C1A28* __this, int32_t ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.SortedDictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedDictionary_2_set_Item_m025E4919C28FFF325548A96C8C4EA9EB6F56CA5B_gshared (SortedDictionary_2_t84C54AB886B687592198FD4D32DD4EFC9B5C1A28* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.SortedDictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedDictionary_2_Add_mB53A52EFB6E2653371B46C741A90B64E45256CC6_gshared (SortedDictionary_2_t84C54AB886B687592198FD4D32DD4EFC9B5C1A28* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.SortedDictionary`2<System.Int32,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedDictionary_2_get_Item_m4E411DD8E7D7FDFF450A8693BE6436B1B67CED9C_gshared (SortedDictionary_2_t84C54AB886B687592198FD4D32DD4EFC9B5C1A28* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.SortedDictionary`2<System.Int32,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedDictionary_2_Remove_m5887B54660DABADB47FF6F481C778E22194FD02C_gshared (SortedDictionary_2_t84C54AB886B687592198FD4D32DD4EFC9B5C1A28* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Void System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m80999490097638177C6B639CEA321424D5BB0991_gshared (Action_2_t38DEBB6BD6AE1CA882236F63F7E1DB3781D38994* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.SortedDictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedDictionary_2__ctor_mBF581F7779C3421B4650532D703CE4DC483CDED3_gshared (SortedDictionary_2_t84C54AB886B687592198FD4D32DD4EFC9B5C1A28* __this, const RuntimeMethod* method) ;

// System.Void StylizedGrass.DrawGrassBenders/DrawGrassBendersPass::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawGrassBendersPass__ctor_m81A2E22EA68EE32F98A85EC00DCB234642B998F1 (DrawGrassBendersPass_t910E752F82318AB6034D3395872D033459AEBA0B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.ScriptableRenderPass::set_renderPassEvent(UnityEngine.Rendering.Universal.RenderPassEvent)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScriptableRenderPass_set_renderPassEvent_m63FA581FFDE1C69C2E1358BD0B8DB30275334960_inline (ScriptableRenderPass_tEA38F6C7AD8D111A2251E4C2A7530BCEE7D6D2B0* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.ScriptableRenderer::EnqueuePass(UnityEngine.Rendering.Universal.ScriptableRenderPass)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderer_EnqueuePass_m62AC5EFBA8DECFD514CAFC4EFDCFBF88C710954F (ScriptableRenderer_tF15B95BB85F26BE4B4719901D909831B89DC8892* __this, ScriptableRenderPass_tEA38F6C7AD8D111A2251E4C2A7530BCEE7D6D2B0* ___pass0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.ScriptableRendererFeature::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRendererFeature__ctor_mA05EC9569A5DCF48CDD98E1FC5838857E2C4C001 (ScriptableRendererFeature_tF2ED08AD2498105378D4DAB0386A0F8A144EF4C6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MaterialPropertyBlock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock__ctor_m14C3432585F7BB65028BCD64A0FD6607A1B490FB (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ProfilingSampler::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilingSampler__ctor_m26500989FCDB07FA33C9A3BB7F215CBD892F5BB7 (ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.String UnityEngine.Rendering.ProfilingSampler::get_name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProfilingSampler_get_name_mF1C3E7B9540171DD93186A4DFEF33CE331E92D79_inline (ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* __this, const RuntimeMethod* method) ;
// UnityEngine.Rendering.CommandBuffer UnityEngine.Rendering.CommandBufferPool::Get(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* CommandBufferPool_Get_mC33780CD170099A0E396A2F3A9AFB46509B31625 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GeometryUtility::CalculateFrustumPlanes(UnityEngine.Camera,UnityEngine.Plane[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeometryUtility_CalculateFrustumPlanes_m17485A67D781871CC9948BA6594EF383AFE91780 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera0, PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE* ___planes1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ProfilingScope::.ctor(UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.ProfilingSampler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilingScope__ctor_mE15813DF7651C1A3B6AFD6465AD4B973E8F1DBFC (ProfilingScope_t57898BA31E8EF8F083EF84E0DA2737AC61CBC5BD* __this, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___cmd0, ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* ___sampler1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ProfilingScope::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilingScope_Dispose_m4231A2ACA1F8E345BB0078310A9F7601704C8BE4 (ProfilingScope_t57898BA31E8EF8F083EF84E0DA2737AC61CBC5BD* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.SortedDictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.SortedDictionary`2<System.Int32,System.Collections.Generic.List`1<StylizedGrass.GrassBender>>::GetEnumerator()
inline Enumerator_t51D33DAA04D7882DF86642A002CF48AD940E2390 SortedDictionary_2_GetEnumerator_m056A676D2467C09A4E2FE3C9D0D31CC4C5C96410 (SortedDictionary_2_tAF165674EA735D9A7BCDBE5EEC973D10DC83FB30* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t51D33DAA04D7882DF86642A002CF48AD940E2390 (*) (SortedDictionary_2_tAF165674EA735D9A7BCDBE5EEC973D10DC83FB30*, const RuntimeMethod*))SortedDictionary_2_GetEnumerator_mC6A6DA4C249F5DC2A9CDA29E10140E10BFE4251A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.SortedDictionary`2/Enumerator<System.Int32,System.Collections.Generic.List`1<StylizedGrass.GrassBender>>::Dispose()
inline void Enumerator_Dispose_mE8981DCC1DCF1F21135CCF0AAE8D246D323BFDCE (Enumerator_t51D33DAA04D7882DF86642A002CF48AD940E2390* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t51D33DAA04D7882DF86642A002CF48AD940E2390*, const RuntimeMethod*))Enumerator_Dispose_m8FEB9A09D7BAD7243929F23B457BAA6A1E0BDC32_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.SortedDictionary`2/Enumerator<System.Int32,System.Collections.Generic.List`1<StylizedGrass.GrassBender>>::get_Current()
inline KeyValuePair_2_t09168EAB2A211CC87832F23427F39072F447B6AB Enumerator_get_Current_mB18F3D0A36082CB27E6C808CE00663BA522B1430 (Enumerator_t51D33DAA04D7882DF86642A002CF48AD940E2390* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t09168EAB2A211CC87832F23427F39072F447B6AB (*) (Enumerator_t51D33DAA04D7882DF86642A002CF48AD940E2390*, const RuntimeMethod*))Enumerator_get_Current_m69D6C20125D63CBD384CAF8602D08FDE8B992F7E_gshared)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<StylizedGrass.GrassBender>>::get_Value()
inline List_1_t49364358CC095949053FDAC3CDE0F381C4DB93C6* KeyValuePair_2_get_Value_mF843E42B80EBE3855515C7DB8383BF866EE554F3_inline (KeyValuePair_2_t09168EAB2A211CC87832F23427F39072F447B6AB* __this, const RuntimeMethod* method)
{
	return ((  List_1_t49364358CC095949053FDAC3CDE0F381C4DB93C6* (*) (KeyValuePair_2_t09168EAB2A211CC87832F23427F39072F447B6AB*, const RuntimeMethod*))KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<StylizedGrass.GrassBender>::GetEnumerator()
inline Enumerator_t1E184C07819A261240EFECEC64868C4A47CF8329 List_1_GetEnumerator_m465B0C13FFC94B1899F7A2100B7016A727799461 (List_1_t49364358CC095949053FDAC3CDE0F381C4DB93C6* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t1E184C07819A261240EFECEC64868C4A47CF8329 (*) (List_1_t49364358CC095949053FDAC3CDE0F381C4DB93C6*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<StylizedGrass.GrassBender>::Dispose()
inline void Enumerator_Dispose_m47A4BF75BA274162C71AF06BD04E5EBC34FB1652 (Enumerator_t1E184C07819A261240EFECEC64868C4A47CF8329* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1E184C07819A261240EFECEC64868C4A47CF8329*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<StylizedGrass.GrassBender>::get_Current()
inline GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* Enumerator_get_Current_m6C8B04815C4BD13D841F144D715B22A2A03FE935_inline (Enumerator_t1E184C07819A261240EFECEC64868C4A47CF8329* __this, const RuntimeMethod* method)
{
	return ((  GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* (*) (Enumerator_t1E184C07819A261240EFECEC64868C4A47CF8329*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Void UnityEngine.MaterialPropertyBlock::SetVector(System.Int32,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock_SetVector_m22B010D99231EF5684063F4A07F5948854D590B3 (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* __this, int32_t ___nameID0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.TrailRenderer::get_emitting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrailRenderer_get_emitting_mF633E40B6977B5A771FEDC92A0A140CC9214EF1B (TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* __this, const RuntimeMethod* method) ;
// UnityEngine.Bounds UnityEngine.Renderer::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GeometryUtility::TestPlanesAABB(UnityEngine.Plane[],UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GeometryUtility_TestPlanesAABB_m7656F6C599D2FF8FE9B69AF3E6DAEFBAD4A4FA8B (PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE* ___planes0, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___bounds1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::SetPropertyBlock(UnityEngine.MaterialPropertyBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_SetPropertyBlock_mF565698782FE54580B17CC0BFF9B0C4F0D68DF50 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___properties0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TrailRenderer::set_emitting(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailRenderer_set_emitting_m16F5AF286796F5A3525EC91EAC427D61302A098B (TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.TrailRenderer::set_generateLightingData(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailRenderer_set_generateLightingData_mF26581D4CA70ACA1E79ACEC624F407E8AC884FB3 (TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.TrailRenderer::set_widthMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailRenderer_set_widthMultiplier_m3362BDEED1C1AEF9AEDB9862D69FA48676A09F83 (TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.TrailRenderer::set_time(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailRenderer_set_time_mD4760D84A531B310E2A4069F87B4E2EF2FEF4C23 (TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.TrailRenderer::set_minVertexDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailRenderer_set_minVertexDistance_mC7843F4657DFA38B81F3EED14649098CB13CFF33 (TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.TrailRenderer::set_widthCurve(UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailRenderer_set_widthCurve_m3B01263997001A811365849CF7F9DA29FEECBEA6 (TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Gradient StylizedGrass.GrassBenderBase::GetGradient(UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* GrassBenderBase_GetGradient_mEAA36EC17914C94520C487C13C7D0DD44A67E940 (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___curve0, const RuntimeMethod* method) ;
// System.Void UnityEngine.TrailRenderer::set_colorGradient(UnityEngine.Gradient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailRenderer_set_colorGradient_mC34D57ADD50DE4272061BA1E0F4BEFB34E12A7CF (TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* __this, Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Renderer::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TrailRenderer::BakeMesh(UnityEngine.Mesh,UnityEngine.Camera,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailRenderer_BakeMesh_mA44A8AF62401D45BE83975D0A480D2B3DC7D9338 (TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh0, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera1, bool ___useTransform2, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m94A09872C449C26863FF10D0FDF87842D91BECD6_inline (const RuntimeMethod* method) ;
// UnityEngine.Material StylizedGrass.GrassBenderBase::get_TrailMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GrassBenderBase_get_TrailMaterial_m7B63234FED83539B02EAED656F2439A45162D08B (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::DrawMesh(UnityEngine.Mesh,UnityEngine.Matrix4x4,UnityEngine.Material,System.Int32,System.Int32,UnityEngine.MaterialPropertyBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_DrawMesh_m5C2FA266FB98E3B7F59009B501824511E47003D9 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___matrix1, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material2, int32_t ___submeshIndex3, int32_t ___shaderPass4, MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___properties5, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystem/ColorOverLifetimeModule UnityEngine.ParticleSystem::get_colorOverLifetime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 ParticleSystem_get_colorOverLifetime_mD8C72661EFE9BB063126752E744544EE2FF5814C (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/ColorOverLifetimeModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorOverLifetimeModule_set_enabled_m356D3ABCE0A5B979105F546C2EAA54702297059C (ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystem/MinMaxGradient UnityEngine.ParticleSystem/MinMaxGradient::op_Implicit(UnityEngine.Gradient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 MinMaxGradient_op_Implicit_mF5C930FA4699150E9F43160A724BAFA8803B7306 (Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___gradient0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/ColorOverLifetimeModule::set_color(UnityEngine.ParticleSystem/MinMaxGradient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorOverLifetimeModule_set_color_m054950B589DA58FFD5BDBC10A70304BF89E3C86B (ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9* __this, MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 ___value0, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystem/MainModule UnityEngine.ParticleSystem::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystemSimulationSpace UnityEngine.ParticleSystem/MainModule::get_simulationSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MainModule_get_simulationSpace_m03E205A92F6CF911F0CD82DA457D156609C02ADC (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystemRenderer::BakeMesh(UnityEngine.Mesh,UnityEngine.Camera,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystemRenderer_BakeMesh_m9CC200A5574186FB88AA904ABF70FBDA957E5141 (ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh0, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera1, bool ___useTransform2, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Renderer::get_localToWorldMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Renderer_get_localToWorldMatrix_mCC910A9BA14BDA7A5BACE0D13B5456358FA8EC22 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Material StylizedGrass.GrassBenderBase::get_MeshMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GrassBenderBase_get_MeshMaterial_m0D3C635831A7C5266855E7FC7FD0EFFAEBD023FD (const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystemRenderer::BakeTrailsMesh(UnityEngine.Mesh,UnityEngine.Camera,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystemRenderer_BakeTrailsMesh_mDAD9AB8BD85A68CC7BD0B4DF02A7558F1845AC34 (ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh0, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera1, bool ___useTransform2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::DrawRenderer(UnityEngine.Renderer,UnityEngine.Material,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_DrawRenderer_m0E01900E0CA8B52F3BB03C82A27214A354007138 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___renderer0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material1, int32_t ___submeshIndex2, int32_t ___shaderPass3, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::BakeMesh(UnityEngine.Mesh,UnityEngine.Camera,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_BakeMesh_m97DF71CB60AE42AC5BBDDA384BD3D91DDB97F8F0 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh0, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera1, bool ___useTransform2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.LineRenderer::get_useWorldSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LineRenderer_get_useWorldSpace_mF11E798A740B698FAC9895D7E338358F497CCB64 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<StylizedGrass.GrassBender>::MoveNext()
inline bool Enumerator_MoveNext_mEC1C5D8C1EF85ACD68FE53D378C563DD5A1D4D09 (Enumerator_t1E184C07819A261240EFECEC64868C4A47CF8329* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t1E184C07819A261240EFECEC64868C4A47CF8329*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.SortedDictionary`2/Enumerator<System.Int32,System.Collections.Generic.List`1<StylizedGrass.GrassBender>>::MoveNext()
inline bool Enumerator_MoveNext_m48A899DD35F7911EF8387E837F28120EECB48159 (Enumerator_t51D33DAA04D7882DF86642A002CF48AD940E2390* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t51D33DAA04D7882DF86642A002CF48AD940E2390*, const RuntimeMethod*))Enumerator_MoveNext_m6C8AC4EA02FC896C11AE0DD2AC5EC35CAAFA8704_gshared)(__this, method);
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::ExecuteCommandBuffer(UnityEngine.Rendering.CommandBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_ExecuteCommandBuffer_mBAE37DFC699B7167A6E2C59012066C44A31E9896 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___commandBuffer0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBufferPool::Release(UnityEngine.Rendering.CommandBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBufferPool_Release_mEC46D8373A95DEC68F1FBD2D77FF3F76917631BF (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___buffer0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::ReleaseTemporaryRT(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_ReleaseTemporaryRT_m4651A4B373DF432AA44F06A6F20852ED5996CC8E (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, int32_t ___nameID0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.ScriptableRenderPass::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderPass__ctor_mE49D4FF8E68A854367A4081E664B8DBA74E6B752 (ScriptableRenderPass_tEA38F6C7AD8D111A2251E4C2A7530BCEE7D6D2B0* __this, const RuntimeMethod* method) ;
// System.Void StylizedGrass.StylizedGrassRenderer::RegisterBender(StylizedGrass.GrassBender)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StylizedGrassRenderer_RegisterBender_m5AE3C2EC6859C9EC7C07AE78BFE1A63E8B389D66 (GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* ___gb0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_forceRenderingOff(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_forceRenderingOff_mD3833D66401E67D2B73A7E1EEE4010E27AF21BC0 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::set_generateLightingData(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_generateLightingData_m20217E0C2FBB8239E2A3661AB30AD33D0051129F (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void StylizedGrass.StylizedGrassRenderer::UnRegisterBender(StylizedGrass.GrassBender)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StylizedGrassRenderer_UnRegisterBender_m3F4029D5079118C05EFDD81EC8084A6F21B01C2C (GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* ___gb0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.ParticleSystemRenderer>()
inline ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* GameObject_GetComponent_TisParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4_m54DB46FE3C050979EF32114330D91F9EF130CAEA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.ParticleSystem/ColorOverLifetimeModule>()
inline ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 Component_GetComponent_TisColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_mBD9F283ADB0A9ACB7BD542CFA753D3C1CFF61C1F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_mBD9F283ADB0A9ACB7BD542CFA753D3C1CFF61C1F_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.LineRenderer>()
inline LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Random::get_insideUnitSphere()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Random_get_insideUnitSphere_mDC65508F8B735E93612D4A1D482792B5DA4DC26C (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Mesh UnityEngine.MeshFilter::get_sharedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_color_mFD4A7935FF025F5922374A8DD797BA0558BF1AD2 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawWireMesh(UnityEngine.Mesh,System.Int32,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawWireMesh_m7BCC7C0F3490E46C0D9CCC2E040DC6039C29E3B3 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh0, int32_t ___submeshIndex1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation3, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale4, const RuntimeMethod* method) ;
// UnityEngine.AnimationCurve UnityEngine.AnimationCurve::Linear(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* AnimationCurve_Linear_m9C6C4ECB6BF4F0515EBD4EFDA97CF623B92B1362 (float ___timeStart0, float ___valueStart1, float ___timeEnd2, float ___valueEnd3, const RuntimeMethod* method) ;
// UnityEngine.AnimationCurve UnityEngine.AnimationCurve::Constant(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* AnimationCurve_Constant_m93803F6C10DA605BE95DC7D13A7F2F8E2FE1DE41 (float ___timeStart0, float ___timeEnd1, float ___value2, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shader0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_enableInstancing(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_enableInstancing_m84BA72A28BCFE94B50535BDE410A539A7CD7AF80 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.ParticleSystemRenderer>()
inline ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* Component_GetComponent_TisParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4_mDB29DD32DF46B9659262256BDBD5B4F1BB805023 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.ParticleSystem/TrailModule UnityEngine.ParticleSystem::get_trails()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D ParticleSystem_get_trails_mDDDD23F6C3540ECD10E42BB0A4F9ECBADC294C66 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ParticleSystem/TrailModule::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrailModule_get_enabled_m78262C91CD53A91AFC1472EA65B64EA0D064EE0C (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, float ___time0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gradient::SetKeys(UnityEngine.GradientColorKey[],UnityEngine.GradientAlphaKey[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gradient_SetKeys_mE03CE269C19C4F08F1ED57F7151082304DDBB5D8 (Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* __this, GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* ___colorKeys0, GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E* ___alphaKeys1, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gradient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gradient__ctor_m5EC470BB063D4831774C7CDA5D471EBEB5CE7B54 (Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m5C8299150E64600CBF5C92706AD610C21D0C0DC5 (RuntimeObject* ___message0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Shader::SetGlobalTexture(System.String,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shader_SetGlobalTexture_mABB6E994E67D083BEBE142B4CC8FA77137C2D021 (String_t* ___name0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Shader::SetGlobalVector(System.String,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shader_SetGlobalVector_m885C9E39C787CA6F54E002C12E3D4280C353E438 (String_t* ___name0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value1, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_zero_m51B18794FAF141EBD06CA9907E6F7DF9D60F3515_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void StylizedGrass.GrassColorMapRenderer::AssignColorMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrassColorMapRenderer_AssignColorMap_m7A11AF2CF34281B35BD2F8113B22DFD213386677 (GrassColorMapRenderer_t888182E165920AC4818E5B27C9A9DC7458D446FC* __this, const RuntimeMethod* method) ;
// System.Void StylizedGrass.GrassColorMap::DisableGlobally()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrassColorMap_DisableGlobally_mC582256D8408C825A209896870ADEE1F5431D046 (const RuntimeMethod* method) ;
// UnityEngine.Color32 UnityEngine.Color32::op_Implicit(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Color32_op_Implicit_m7EFA0B83AD1AE15567E9BC2FA2B8E66D3BFE1395_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color32::op_Implicit(UnityEngine.Color32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___c0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawCube(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawCube_mE7D2162786517A14E8A740C7887CD08A3105B192 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___center0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___size1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawWireCube(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawWireCube_m31971565E5002365FE94256FFE1DC5B070FDBBA7 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___center0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___size1, const RuntimeMethod* method) ;
// System.Void StylizedGrass.GrassColorMap::SetActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrassColorMap_SetActive_m949DC85E2CE8FC8C757DCA8036EB9C3FB4941F21 (GrassColorMap_tFF56A23499EB504A6EF9567C018A41C0B689D1E2* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<StylizedGrass.GrassColorMapRenderer/LayerScaleSettings>::.ctor()
inline void List_1__ctor_m3D40447848D115F7F599B8FB0CD16BF7AF124800 (List_1_tA28F6808989CF34898F6297C5FA6A643BA930F88* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA28F6808989CF34898F6297C5FA6A643BA930F88*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset UnityEngine.Rendering.Universal.UniversalRenderPipeline::get_asset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232* UniversalRenderPipeline_get_asset_mE97A926D00D90276CC9442857014B7180EF02819 (const RuntimeMethod* method) ;
// System.Void StylizedGrass.PipelineUtilities::AddRendererToPipeline(UnityEngine.Rendering.Universal.ScriptableRendererData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PipelineUtilities_AddRendererToPipeline_mE8337A9A859B46362D04C04D5025CF078833049F (ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* ___pass0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.ScriptableRendererData>::.ctor()
inline void List_1__ctor_m34C8555D6DCC2D0287E23BFB31223CF1D0734217 (List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.ScriptableRendererData>::Add(T)
inline void List_1_Add_mD564DD588CF150AFDB80F4773D248194256B6A34_inline (List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424* __this, ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424*, ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T[] System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.ScriptableRendererData>::ToArray()
inline ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169* List_1_ToArray_mA20937394A0961A947EFE502EBD77AD6245B7D9C (List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424* __this, const RuntimeMethod* method)
{
	return ((  ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169* (*) (List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C (FieldInfo_t* __this, RuntimeObject* ___obj0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.ScriptableRendererData>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_mDD19270367F605476E9B7A7A9872D28C89FFF6D8 (List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared)(__this, ___collection0, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.ScriptableRendererData>::Contains(T)
inline bool List_1_Contains_m7FF0F9331146763E7C1C71B6F92EEF57A910B9D8 (List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424* __this, ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424*, ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.ScriptableRendererData>::Remove(T)
inline bool List_1_Remove_m9D07AEEC3BD3364325EA28BEBF09C4D5BFB2ED18 (List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424* __this, ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424*, ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::SetRenderer(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniversalAdditionalCameraData_SetRenderer_m486F07D0F0D14B3F112CB6AFF01B12BE187AE255_inline (UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.SortedDictionary`2<System.Int32,System.Collections.Generic.List`1<StylizedGrass.GrassBender>>::ContainsKey(TKey)
inline bool SortedDictionary_2_ContainsKey_m4FCDDE38B6BC3DEB3CAA69F6AE43A7634BFE07BC (SortedDictionary_2_tAF165674EA735D9A7BCDBE5EEC973D10DC83FB30* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (SortedDictionary_2_tAF165674EA735D9A7BCDBE5EEC973D10DC83FB30*, int32_t, const RuntimeMethod*))SortedDictionary_2_ContainsKey_m6122FE27DF48CEE6255894462DD3ACC18E577F77_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.SortedDictionary`2<System.Int32,System.Collections.Generic.List`1<StylizedGrass.GrassBender>>::TryGetValue(TKey,TValue&)
inline bool SortedDictionary_2_TryGetValue_m9E0D377BD764744E181D9D933304080032FE16C0 (SortedDictionary_2_tAF165674EA735D9A7BCDBE5EEC973D10DC83FB30* __this, int32_t ___key0, List_1_t49364358CC095949053FDAC3CDE0F381C4DB93C6** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (SortedDictionary_2_tAF165674EA735D9A7BCDBE5EEC973D10DC83FB30*, int32_t, List_1_t49364358CC095949053FDAC3CDE0F381C4DB93C6**, const RuntimeMethod*))SortedDictionary_2_TryGetValue_mA1A5691811AFB363350AE4D3923AF6293D4A870C_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.List`1<StylizedGrass.GrassBender>::Contains(T)
inline bool List_1_Contains_m9AD1B78955B814B3E3FF4280DA24D52C49C33D15 (List_1_t49364358CC095949053FDAC3CDE0F381C4DB93C6* __this, GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t49364358CC095949053FDAC3CDE0F381C4DB93C6*, GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<StylizedGrass.GrassBender>::Add(T)
inline void List_1_Add_m2DF4CA5BB1F0D09ACDF2CA7997F4D7ABEB7EF0E3_inline (List_1_t49364358CC095949053FDAC3CDE0F381C4DB93C6* __this, GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t49364358CC095949053FDAC3CDE0F381C4DB93C6*, GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.SortedDictionary`2<System.Int32,System.Collections.Generic.List`1<StylizedGrass.GrassBender>>::set_Item(TKey,TValue)
inline void SortedDictionary_2_set_Item_mEDFA8C159889FC46120EE1152739EA9A465A69A5 (SortedDictionary_2_tAF165674EA735D9A7BCDBE5EEC973D10DC83FB30* __this, int32_t ___key0, List_1_t49364358CC095949053FDAC3CDE0F381C4DB93C6* ___value1, const RuntimeMethod* method)
{
	((  void (*) (SortedDictionary_2_tAF165674EA735D9A7BCDBE5EEC973D10DC83FB30*, int32_t, List_1_t49364358CC095949053FDAC3CDE0F381C4DB93C6*, const RuntimeMethod*))SortedDictionary_2_set_Item_m025E4919C28FFF325548A96C8C4EA9EB6F56CA5B_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<StylizedGrass.GrassBender>::.ctor()
inline void List_1__ctor_mC621C78FA7B6151052CE01470CF3E8933D760DA1 (List_1_t49364358CC095949053FDAC3CDE0F381C4DB93C6* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t49364358CC095949053FDAC3CDE0F381C4DB93C6*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.SortedDictionary`2<System.Int32,System.Collections.Generic.List`1<StylizedGrass.GrassBender>>::Add(TKey,TValue)
inline void SortedDictionary_2_Add_m1A3B3A97252451F290D08F8211CCD759E7A024C5 (SortedDictionary_2_tAF165674EA735D9A7BCDBE5EEC973D10DC83FB30* __this, int32_t ___key0, List_1_t49364358CC095949053FDAC3CDE0F381C4DB93C6* ___value1, const RuntimeMethod* method)
{
	((  void (*) (SortedDictionary_2_tAF165674EA735D9A7BCDBE5EEC973D10DC83FB30*, int32_t, List_1_t49364358CC095949053FDAC3CDE0F381C4DB93C6*, const RuntimeMethod*))SortedDictionary_2_Add_mB53A52EFB6E2653371B46C741A90B64E45256CC6_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.List`1<StylizedGrass.GrassBender>::Remove(T)
inline bool List_1_Remove_m1CD9F787AAC79257AE253C33BB5A97DA836B5FF9 (List_1_t49364358CC095949053FDAC3CDE0F381C4DB93C6* __this, GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t49364358CC095949053FDAC3CDE0F381C4DB93C6*, GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// TValue System.Collections.Generic.SortedDictionary`2<System.Int32,System.Collections.Generic.List`1<StylizedGrass.GrassBender>>::get_Item(TKey)
inline List_1_t49364358CC095949053FDAC3CDE0F381C4DB93C6* SortedDictionary_2_get_Item_mC3B6F52FE3CF2C891D21A324117B3293B0618538 (SortedDictionary_2_tAF165674EA735D9A7BCDBE5EEC973D10DC83FB30* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  List_1_t49364358CC095949053FDAC3CDE0F381C4DB93C6* (*) (SortedDictionary_2_tAF165674EA735D9A7BCDBE5EEC973D10DC83FB30*, int32_t, const RuntimeMethod*))SortedDictionary_2_get_Item_m4E411DD8E7D7FDFF450A8693BE6436B1B67CED9C_gshared)(__this, ___key0, method);
}
// System.Int32 System.Collections.Generic.List`1<StylizedGrass.GrassBender>::get_Count()
inline int32_t List_1_get_Count_m0D82ED0B4026D60A06E782BC0EF84A20C66632EF_inline (List_1_t49364358CC095949053FDAC3CDE0F381C4DB93C6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t49364358CC095949053FDAC3CDE0F381C4DB93C6*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.SortedDictionary`2<System.Int32,System.Collections.Generic.List`1<StylizedGrass.GrassBender>>::Remove(TKey)
inline bool SortedDictionary_2_Remove_m0C5D8BC5E128A3FE7E1DB9D627A4EDB34670AC31 (SortedDictionary_2_tAF165674EA735D9A7BCDBE5EEC973D10DC83FB30* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (SortedDictionary_2_tAF165674EA735D9A7BCDBE5EEC973D10DC83FB30*, int32_t, const RuntimeMethod*))SortedDictionary_2_Remove_m5887B54660DABADB47FF6F481C778E22194FD02C_gshared)(__this, ___key0, method);
}
// System.Void System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mBEB5B9B513FE305CE98CA8065CC6E6CC0E5A4D51 (Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_m80999490097638177C6B639CEA321424D5BB0991_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Rendering.RenderPipelineManager::add_beginCameraRendering(System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_add_beginCameraRendering_mF8416C1EB5B9FF130A7F638B842E283CAA83BC2B (Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* ___value0, const RuntimeMethod* method) ;
// System.Void StylizedGrass.StylizedGrassRenderer::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StylizedGrassRenderer_Init_mBD0AC6FAE840E78D17077E06373FD9CF22734537 (StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.RenderPipelineManager::remove_beginCameraRendering(System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_remove_beginCameraRendering_m1612AF680F9518D63562A8AC8C521A326B1C6C71 (Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Shader::SetGlobalVector(System.Int32,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shader_SetGlobalVector_m8A7D161EE6CD6D21EAEC6A70E30B5E0897F5A84E (int32_t ___nameID0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void StylizedGrass.StylizedGrassRenderer::CreateVectorMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StylizedGrassRenderer_CreateVectorMap_mF23A02364C4F426C407CFD6C404D0867D0B6733A (StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9* __this, const RuntimeMethod* method) ;
// System.Void StylizedGrass.StylizedGrassRenderer::UpdateCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StylizedGrassRenderer_UpdateCamera_m22632A2AAD040EE8405DA37E922F850D563ABC79 (StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera StylizedGrass.StylizedGrassRenderer::CreateCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* StylizedGrassRenderer_CreateCamera_mF68A191FF6EC29E865ECA6EBB9C119B79AA42D0C (StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Shader::SetGlobalTexture(System.Int32,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shader_SetGlobalTexture_m4DF21A2D64AA4CF5B3A77BBBCA33D5195308BE2E (int32_t ___nameID0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value1, const RuntimeMethod* method) ;
// System.Single UnityEngine.WindZone::get_windMain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WindZone_get_windMain_m49480166CDE759C98498B951148535FCCED788C0 (WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* GameObject_AddComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0933BC50E883CDEF6FA83FE190DA37CCB2802142 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Int32 UnityEngine.Object::GetInstanceID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_orthographic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_orthographic_m64915C0840A68E526830A69F1C40257206185020 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_depth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_depth_m595FA2A4FEBC90E730810BBFB55E4A2C2134066F (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_clearFlags(UnityEngine.CameraClearFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_clearFlags_m66541D9CC43CBAA5FE7364A50D43CA5569FD4D93 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_cullingMask(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_cullingMask_m14F426710530BA8FA53AEC02F79C418AA558CB32 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_backgroundColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_backgroundColor_m036FD8C316A93A0B168ACC89AFF16D396B872138 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_useOcclusionCulling(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_useOcclusionCulling_mD3036B0CBB5E6A1BF33810AB8FDEE3CD1A4D7C04 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_allowHDR(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_allowHDR_m44211153DAF6DF9A51142EC7760A53777C1F3315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_allowMSAA(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_allowMSAA_m7BE26D3FAAA64202C49DE6CA95C02A85770F8268 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_forceIntoRenderTexture(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_forceIntoRenderTexture_mBD476C952C128BEAF51E85C4635DBFD85ABAB7BA (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.Rendering.Universal.UniversalAdditionalCameraData>()
inline UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* GameObject_AddComponent_TisUniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93_m257D49B2F0B2F6DAFF2E3EC7F53B5930D5BB6D46 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::set_renderShadows(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniversalAdditionalCameraData_set_renderShadows_m435F35FAAF4700DC51E6A806D2BEF8A01A3A010B_inline (UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::set_renderPostProcessing(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniversalAdditionalCameraData_set_renderPostProcessing_mDECCE7AC172D0C20AC42E6393A24D4841AA4E0F6_inline (UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::set_antialiasing(UnityEngine.Rendering.Universal.AntialiasingMode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniversalAdditionalCameraData_set_antialiasing_m23C70E866A9D3F64662628843E1FA13A9FA90AA7_inline (UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::set_requiresColorOption(UnityEngine.Rendering.Universal.CameraOverrideOption)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniversalAdditionalCameraData_set_requiresColorOption_m70A4CD657A3C82549B7159183BEB50131E7C59AA_inline (UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::set_requiresDepthOption(UnityEngine.Rendering.Universal.CameraOverrideOption)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniversalAdditionalCameraData_set_requiresDepthOption_m7BA4C2691693C5175B57BACC7750A2FCC88DFA62_inline (UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::set_requiresColorTexture(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniversalAdditionalCameraData_set_requiresColorTexture_m26FE59EAD31B15DB1746D2717106552281AF041D (UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::set_requiresDepthTexture(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniversalAdditionalCameraData_set_requiresDepthTexture_mCDA8FD4FD620FF4A6E67EF807137D7B5458F6F54 (UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void StylizedGrass.PipelineUtilities::AssignRendererToCamera(UnityEngine.Rendering.Universal.UniversalAdditionalCameraData,UnityEngine.Rendering.Universal.ScriptableRendererData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PipelineUtilities_AssignRendererToCamera_mFFCF06755D35757211D89632DCFCE31AE72CEA68 (UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* ___camData0, ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* ___pass1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline (float ___f0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::NextPowerOfTwo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_NextPowerOfTwo_m25B17CBCFB02762842BE3725618DD97C7C4B1014 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_targetTexture(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_targetTexture_mE6C740F21A72DA47FB5B1D31D208710738A836C4 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTextureDescriptor::set_width(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_width_m3B2494007BFE3AD4D14403407C9B24F5045E7E10_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTextureDescriptor::set_height(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_height_m1FE41111472DAA9B5E80FFAF3445004D72A3CFA5_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTextureDescriptor::set_depthBufferBits(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_depthBufferBits_mA3710C0D6E485BA6465B328CD8B1954F0E4C5819 (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTextureDescriptor::set_graphicsFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_graphicsFormat_m037DA25F9A8B956D830C7B7E5C6E258DC1133A13 (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTextureDescriptor::set_enableRandomWrite(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_enableRandomWrite_m915CC9F6A154C5D7EF38FC9C9415DEFB67D481F4 (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTextureDescriptor::set_autoGenerateMips(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_autoGenerateMips_mB49837BA39F45B3F814928C8C471A082A4BDC414 (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTextureDescriptor::set_useMipMap(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_useMipMap_m2A2A3BC4C8ECCC532AC33E7034502EB2AE242539 (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTextureDescriptor::set_volumeDepth(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_volumeDepth_mEF9610D1C14182417A01B7243DEE6B559A13B34D_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTextureDescriptor::set_msaaSamples(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_msaaSamples_m6910E09489372746391B14FBAF59A7237539D6C4_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTextureDescriptor::set_dimension(UnityEngine.Rendering.TextureDimension)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_dimension_mCE9A4A08454BB2D9DFE3E505EC336FD480078F39_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTextureDescriptor::set_sRGB(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_sRGB_mAB7A494EE8C496C22B3BBBCB90488312D46F3429 (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTextureDescriptor::set_vrUsage(UnityEngine.VRTextureUsage)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_vrUsage_m994CB3D4B250A70BE005D9FDFD24D868E07A52F0_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTextureDescriptor::set_bindMS(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_bindMS_m40A5B13ECDCA2A5E916047DACD10A7B04068AB83 (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTextureDescriptor::set_memoryless(UnityEngine.RenderTextureMemoryless)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_memoryless_m9ECE149930C0E2629A5CD9DA1CD0EA2A01FFE1B2_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTextureDescriptor::set_shadowSamplingMode(UnityEngine.Rendering.ShadowSamplingMode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_shadowSamplingMode_m4B4CE918DFFF1CC5E3AF981456E186F15FC5DB93_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::.ctor(UnityEngine.RenderTextureDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture__ctor_m1CBDB7F13C2CE49A31EE654081F01C4F874EA5E3 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 ___desc0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_useMipMap(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_useMipMap_mB280A39DAB18372D3A0050FF20F730E5B0B44C32 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_anisoLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_anisoLevel_m768759DE9D6BE15FCE995F5FC468980B904B9D1F (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_isPowerOfTwo(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_isPowerOfTwo_mC484FC101ACE1B1BAFF21FA71F633A39765987A4 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.CameraType UnityEngine.Camera::get_cameraType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_cameraType_m85434C4C986D2EAC04FBFA44B284840AFC497851 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// UnityEngine.HideFlags UnityEngine.Object::get_hideFlags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_get_hideFlags_mA08F5E41671B8C6B5073C6B9E2799BCE6E0DF7F3 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_orthographicSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_orthographicSize_m76DD021032ACB3DDBD052B75EC66DCE3A7295A5C (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_farClipPlane(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_farClipPlane_m84EF39B09573168734613481FD979BFF31C60139 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 StylizedGrass.StylizedGrassRenderer::SnapToTexel(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 StylizedGrassRenderer_SnapToTexel_m9BC2AC49FB6BF2ABA05175281F1DE0C0AE5907AA (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, float ___texelSize1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Bounds::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds__ctor_mAF7B238B9FBF90C495E5D7951760085A93119C5A (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___center0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___size1, const RuntimeMethod* method) ;
// System.Single StylizedGrass.StylizedGrassRenderer::SnapToTexel(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float StylizedGrassRenderer_SnapToTexel_mB94A9D543010BBE5757785C6A7D749EA28C65F06 (float ___pos0, float ___texelSize1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline (float ___f0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.SortedDictionary`2<System.Int32,System.Collections.Generic.List`1<StylizedGrass.GrassBender>>::.ctor()
inline void SortedDictionary_2__ctor_m79DF4A3FF0A2EADB029A76CE314075150AE9B48A (SortedDictionary_2_tAF165674EA735D9A7BCDBE5EEC973D10DC83FB30* __this, const RuntimeMethod* method)
{
	((  void (*) (SortedDictionary_2_tAF165674EA735D9A7BCDBE5EEC973D10DC83FB30*, const RuntimeMethod*))SortedDictionary_2__ctor_mBF581F7779C3421B4650532D703CE4DC483CDED3_gshared)(__this, method);
}
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method) ;
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
// System.Void StylizedGrass.DrawGrassBenders::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawGrassBenders_Create_m72DFAF08C6711C1E41F125990BB0E147E3602652 (DrawGrassBenders_tF4005AC5C190E9951BA18E65AABDF30FDD9D1A75* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DrawGrassBendersPass_t910E752F82318AB6034D3395872D033459AEBA0B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_ScriptablePass = new DrawGrassBendersPass();
		DrawGrassBendersPass_t910E752F82318AB6034D3395872D033459AEBA0B* L_0 = (DrawGrassBendersPass_t910E752F82318AB6034D3395872D033459AEBA0B*)il2cpp_codegen_object_new(DrawGrassBendersPass_t910E752F82318AB6034D3395872D033459AEBA0B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DrawGrassBendersPass__ctor_m81A2E22EA68EE32F98A85EC00DCB234642B998F1(L_0, NULL);
		__this->___m_ScriptablePass_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ScriptablePass_5), (void*)L_0);
		// m_ScriptablePass.renderPassEvent = RenderPassEvent.AfterRendering;
		DrawGrassBendersPass_t910E752F82318AB6034D3395872D033459AEBA0B* L_1 = __this->___m_ScriptablePass_5;
		NullCheck(L_1);
		ScriptableRenderPass_set_renderPassEvent_m63FA581FFDE1C69C2E1358BD0B8DB30275334960_inline(L_1, ((int32_t)1000), NULL);
		// }
		return;
	}
}
// System.Void StylizedGrass.DrawGrassBenders::AddRenderPasses(UnityEngine.Rendering.Universal.ScriptableRenderer,UnityEngine.Rendering.Universal.RenderingData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawGrassBenders_AddRenderPasses_m1592EA3C31FA7C0C6DA7CFB008019AB1DF24527C (DrawGrassBenders_tF4005AC5C190E9951BA18E65AABDF30FDD9D1A75* __this, ScriptableRenderer_tF15B95BB85F26BE4B4719901D909831B89DC8892* ___renderer0, RenderingData_tAAA01190551D6D5954314E3E1E85B58DD45EED71* ___renderingData1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(StylizedGrassRenderer.Instance) renderer.EnqueuePass(m_ScriptablePass);
		il2cpp_codegen_runtime_class_init_inline(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var);
		StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9* L_0 = ((StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_StaticFields*)il2cpp_codegen_static_fields_for(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var))->___Instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// if(StylizedGrassRenderer.Instance) renderer.EnqueuePass(m_ScriptablePass);
		ScriptableRenderer_tF15B95BB85F26BE4B4719901D909831B89DC8892* L_2 = ___renderer0;
		DrawGrassBendersPass_t910E752F82318AB6034D3395872D033459AEBA0B* L_3 = __this->___m_ScriptablePass_5;
		NullCheck(L_2);
		ScriptableRenderer_EnqueuePass_m62AC5EFBA8DECFD514CAFC4EFDCFBF88C710954F(L_2, L_3, NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void StylizedGrass.DrawGrassBenders::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawGrassBenders__ctor_m0B0851D60C954D64B2F6F351626A383399AFDBF4 (DrawGrassBenders_tF4005AC5C190E9951BA18E65AABDF30FDD9D1A75* __this, const RuntimeMethod* method) 
{
	{
		ScriptableRendererFeature__ctor_mA05EC9569A5DCF48CDD98E1FC5838857E2C4C001(__this, NULL);
		return;
	}
}
// System.Void StylizedGrass.DrawGrassBenders::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawGrassBenders__cctor_m055482EC7DA55F006F251F40A08B5650EF865FDA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DrawGrassBenders_tF4005AC5C190E9951BA18E65AABDF30FDD9D1A75_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF55CCDD8E80529DC06D269D0ED4CDF0C20888944);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string RendererGUID = "6646d2562bb9379498d38addaba2d66d";
		((DrawGrassBenders_tF4005AC5C190E9951BA18E65AABDF30FDD9D1A75_StaticFields*)il2cpp_codegen_static_fields_for(DrawGrassBenders_tF4005AC5C190E9951BA18E65AABDF30FDD9D1A75_il2cpp_TypeInfo_var))->___RendererGUID_6 = _stringLiteralF55CCDD8E80529DC06D269D0ED4CDF0C20888944;
		Il2CppCodeGenWriteBarrier((void**)(&((DrawGrassBenders_tF4005AC5C190E9951BA18E65AABDF30FDD9D1A75_StaticFields*)il2cpp_codegen_static_fields_for(DrawGrassBenders_tF4005AC5C190E9951BA18E65AABDF30FDD9D1A75_il2cpp_TypeInfo_var))->___RendererGUID_6), (void*)_stringLiteralF55CCDD8E80529DC06D269D0ED4CDF0C20888944);
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
// System.Void StylizedGrass.DrawGrassBenders/DrawGrassBendersPass::Configure(UnityEngine.Rendering.CommandBuffer,UnityEngine.RenderTextureDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawGrassBendersPass_Configure_m912A716151CE4A35A6C0A5FB6749168B1B8E0A51 (DrawGrassBendersPass_t910E752F82318AB6034D3395872D033459AEBA0B* __this, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___cmd0, RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 ___cameraTextureDescriptor1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB5B519DB686B9B04D0ABDF00F13D1CEC9E8D1E7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (props == null) props = new MaterialPropertyBlock();
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_0 = __this->___props_27;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (props == null) props = new MaterialPropertyBlock();
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_1 = (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D*)il2cpp_codegen_object_new(MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MaterialPropertyBlock__ctor_m14C3432585F7BB65028BCD64A0FD6607A1B490FB(L_1, NULL);
		__this->___props_27 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___props_27), (void*)L_1);
	}

IL_0013:
	{
		// if(profilerSampler == null) profilerSampler = new ProfilingSampler(profilerTag);
		ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* L_2 = __this->___profilerSampler_26;
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		// if(profilerSampler == null) profilerSampler = new ProfilingSampler(profilerTag);
		ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* L_3 = (ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE*)il2cpp_codegen_object_new(ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ProfilingSampler__ctor_m26500989FCDB07FA33C9A3BB7F215CBD892F5BB7(L_3, _stringLiteralCB5B519DB686B9B04D0ABDF00F13D1CEC9E8D1E7, NULL);
		__this->___profilerSampler_26 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___profilerSampler_26), (void*)L_3);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void StylizedGrass.DrawGrassBenders/DrawGrassBendersPass::Execute(UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Rendering.Universal.RenderingData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawGrassBendersPass_Execute_m0DBA09CF2BAE439A8E8B5C93F4D100DC08297F04 (DrawGrassBendersPass_t910E752F82318AB6034D3395872D033459AEBA0B* __this, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___context0, RenderingData_tAAA01190551D6D5954314E3E1E85B58DD45EED71* ___renderingData1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommandBufferPool_t88CACA06AB445EE4743F5C4D742C73761A2DEF0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m47A4BF75BA274162C71AF06BD04E5EBC34FB1652_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mE8981DCC1DCF1F21135CCF0AAE8D246D323BFDCE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m48A899DD35F7911EF8387E837F28120EECB48159_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mEC1C5D8C1EF85ACD68FE53D378C563DD5A1D4D09_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6C8B04815C4BD13D841F144D715B22A2A03FE935_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB18F3D0A36082CB27E6C808CE00663BA522B1430_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mF843E42B80EBE3855515C7DB8383BF866EE554F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m465B0C13FFC94B1899F7A2100B7016A727799461_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_GetEnumerator_m056A676D2467C09A4E2FE3C9D0D31CC4C5C96410_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* V_0 = NULL;
	ProfilingScope_t57898BA31E8EF8F083EF84E0DA2737AC61CBC5BD V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_t51D33DAA04D7882DF86642A002CF48AD940E2390 V_2;
	memset((&V_2), 0, sizeof(V_2));
	KeyValuePair_2_t09168EAB2A211CC87832F23427F39072F447B6AB V_3;
	memset((&V_3), 0, sizeof(V_3));
	Enumerator_t1E184C07819A261240EFECEC64868C4A47CF8329 V_4;
	memset((&V_4), 0, sizeof(V_4));
	GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* V_5 = NULL;
	ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 V_8;
	memset((&V_8), 0, sizeof(V_8));
	DrawGrassBendersPass_t910E752F82318AB6034D3395872D033459AEBA0B* G_B12_0 = NULL;
	DrawGrassBendersPass_t910E752F82318AB6034D3395872D033459AEBA0B* G_B11_0 = NULL;
	int32_t G_B13_0 = 0;
	DrawGrassBendersPass_t910E752F82318AB6034D3395872D033459AEBA0B* G_B13_1 = NULL;
	int32_t G_B19_0 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B19_1 = NULL;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 G_B19_2;
	memset((&G_B19_2), 0, sizeof(G_B19_2));
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* G_B19_3 = NULL;
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* G_B19_4 = NULL;
	int32_t G_B18_0 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B18_1 = NULL;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 G_B18_2;
	memset((&G_B18_2), 0, sizeof(G_B18_2));
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* G_B18_3 = NULL;
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* G_B18_4 = NULL;
	int32_t G_B20_0 = 0;
	int32_t G_B20_1 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B20_2 = NULL;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 G_B20_3;
	memset((&G_B20_3), 0, sizeof(G_B20_3));
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* G_B20_4 = NULL;
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* G_B20_5 = NULL;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* G_B29_0 = NULL;
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* G_B29_1 = NULL;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* G_B28_0 = NULL;
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* G_B28_1 = NULL;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 G_B30_0;
	memset((&G_B30_0), 0, sizeof(G_B30_0));
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* G_B30_1 = NULL;
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* G_B30_2 = NULL;
	int32_t G_B32_0 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B32_1 = NULL;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 G_B32_2;
	memset((&G_B32_2), 0, sizeof(G_B32_2));
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* G_B32_3 = NULL;
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* G_B32_4 = NULL;
	int32_t G_B31_0 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B31_1 = NULL;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 G_B31_2;
	memset((&G_B31_2), 0, sizeof(G_B31_2));
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* G_B31_3 = NULL;
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* G_B31_4 = NULL;
	int32_t G_B33_0 = 0;
	int32_t G_B33_1 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B33_2 = NULL;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 G_B33_3;
	memset((&G_B33_3), 0, sizeof(G_B33_3));
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* G_B33_4 = NULL;
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* G_B33_5 = NULL;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* G_B38_0 = NULL;
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* G_B38_1 = NULL;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* G_B37_0 = NULL;
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* G_B37_1 = NULL;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 G_B39_0;
	memset((&G_B39_0), 0, sizeof(G_B39_0));
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* G_B39_1 = NULL;
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* G_B39_2 = NULL;
	int32_t G_B41_0 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B41_1 = NULL;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 G_B41_2;
	memset((&G_B41_2), 0, sizeof(G_B41_2));
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* G_B41_3 = NULL;
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* G_B41_4 = NULL;
	int32_t G_B40_0 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B40_1 = NULL;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 G_B40_2;
	memset((&G_B40_2), 0, sizeof(G_B40_2));
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* G_B40_3 = NULL;
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* G_B40_4 = NULL;
	int32_t G_B42_0 = 0;
	int32_t G_B42_1 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B42_2 = NULL;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 G_B42_3;
	memset((&G_B42_3), 0, sizeof(G_B42_3));
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* G_B42_4 = NULL;
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* G_B42_5 = NULL;
	int32_t G_B48_0 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B48_1 = NULL;
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* G_B48_2 = NULL;
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* G_B48_3 = NULL;
	int32_t G_B47_0 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B47_1 = NULL;
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* G_B47_2 = NULL;
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* G_B47_3 = NULL;
	int32_t G_B49_0 = 0;
	int32_t G_B49_1 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B49_2 = NULL;
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* G_B49_3 = NULL;
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* G_B49_4 = NULL;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* G_B57_0 = NULL;
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* G_B57_1 = NULL;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* G_B56_0 = NULL;
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* G_B56_1 = NULL;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 G_B58_0;
	memset((&G_B58_0), 0, sizeof(G_B58_0));
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* G_B58_1 = NULL;
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* G_B58_2 = NULL;
	int32_t G_B60_0 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B60_1 = NULL;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 G_B60_2;
	memset((&G_B60_2), 0, sizeof(G_B60_2));
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* G_B60_3 = NULL;
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* G_B60_4 = NULL;
	int32_t G_B59_0 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B59_1 = NULL;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 G_B59_2;
	memset((&G_B59_2), 0, sizeof(G_B59_2));
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* G_B59_3 = NULL;
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* G_B59_4 = NULL;
	int32_t G_B61_0 = 0;
	int32_t G_B61_1 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B61_2 = NULL;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 G_B61_3;
	memset((&G_B61_3), 0, sizeof(G_B61_3));
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* G_B61_4 = NULL;
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* G_B61_5 = NULL;
	{
		// var cmd = CommandBufferPool.Get(profilerSampler.name);
		ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* L_0 = __this->___profilerSampler_26;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = ProfilingSampler_get_name_mF1C3E7B9540171DD93186A4DFEF33CE331E92D79_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(CommandBufferPool_t88CACA06AB445EE4743F5C4D742C73761A2DEF0F_il2cpp_TypeInfo_var);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_2;
		L_2 = CommandBufferPool_Get_mC33780CD170099A0E396A2F3A9AFB46509B31625(L_1, NULL);
		V_0 = L_2;
		// GeometryUtility.CalculateFrustumPlanes(StylizedGrassRenderer.Instance.renderCam, frustrumPlanes);
		il2cpp_codegen_runtime_class_init_inline(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var);
		StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9* L_3 = ((StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_StaticFields*)il2cpp_codegen_static_fields_for(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_3);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = L_3->___renderCam_12;
		PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE* L_5 = __this->___frustrumPlanes_29;
		GeometryUtility_CalculateFrustumPlanes_m17485A67D781871CC9948BA6594EF383AFE91780(L_4, L_5, NULL);
		// using (new ProfilingScope(cmd, profilerSampler))
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_6 = V_0;
		ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* L_7 = __this->___profilerSampler_26;
		ProfilingScope__ctor_mE15813DF7651C1A3B6AFD6465AD4B973E8F1DBFC((&V_1), L_6, L_7, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_054c:
			{// begin finally (depth: 1)
				ProfilingScope_Dispose_m4231A2ACA1F8E345BB0078310A9F7601704C8BE4((&V_1), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// foreach (KeyValuePair<int, List<GrassBender>> layer in StylizedGrassRenderer.GrassBenders)
				il2cpp_codegen_runtime_class_init_inline(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var);
				SortedDictionary_2_tAF165674EA735D9A7BCDBE5EEC973D10DC83FB30* L_8 = ((StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_StaticFields*)il2cpp_codegen_static_fields_for(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var))->___GrassBenders_18;
				NullCheck(L_8);
				Enumerator_t51D33DAA04D7882DF86642A002CF48AD940E2390 L_9;
				L_9 = SortedDictionary_2_GetEnumerator_m056A676D2467C09A4E2FE3C9D0D31CC4C5C96410(L_8, SortedDictionary_2_GetEnumerator_m056A676D2467C09A4E2FE3C9D0D31CC4C5C96410_RuntimeMethod_var);
				V_2 = L_9;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_053e_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_mE8981DCC1DCF1F21135CCF0AAE8D246D323BFDCE((&V_2), Enumerator_Dispose_mE8981DCC1DCF1F21135CCF0AAE8D246D323BFDCE_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_0530_2;
					}

IL_0044_2:
					{
						// foreach (KeyValuePair<int, List<GrassBender>> layer in StylizedGrassRenderer.GrassBenders)
						KeyValuePair_2_t09168EAB2A211CC87832F23427F39072F447B6AB L_10;
						L_10 = Enumerator_get_Current_mB18F3D0A36082CB27E6C808CE00663BA522B1430((&V_2), Enumerator_get_Current_mB18F3D0A36082CB27E6C808CE00663BA522B1430_RuntimeMethod_var);
						V_3 = L_10;
						// foreach (GrassBender b in layer.Value)
						List_1_t49364358CC095949053FDAC3CDE0F381C4DB93C6* L_11;
						L_11 = KeyValuePair_2_get_Value_mF843E42B80EBE3855515C7DB8383BF866EE554F3_inline((&V_3), KeyValuePair_2_get_Value_mF843E42B80EBE3855515C7DB8383BF866EE554F3_RuntimeMethod_var);
						NullCheck(L_11);
						Enumerator_t1E184C07819A261240EFECEC64868C4A47CF8329 L_12;
						L_12 = List_1_GetEnumerator_m465B0C13FFC94B1899F7A2100B7016A727799461(L_11, List_1_GetEnumerator_m465B0C13FFC94B1899F7A2100B7016A727799461_RuntimeMethod_var);
						V_4 = L_12;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0522_2:
							{// begin finally (depth: 3)
								Enumerator_Dispose_m47A4BF75BA274162C71AF06BD04E5EBC34FB1652((&V_4), Enumerator_Dispose_m47A4BF75BA274162C71AF06BD04E5EBC34FB1652_RuntimeMethod_var);
								return;
							}// end finally (depth: 3)
						});
						try
						{// begin try (depth: 3)
							{
								goto IL_0514_3;
							}

IL_005f_3:
							{
								// foreach (GrassBender b in layer.Value)
								GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_13;
								L_13 = Enumerator_get_Current_m6C8B04815C4BD13D841F144D715B22A2A03FE935_inline((&V_4), Enumerator_get_Current_m6C8B04815C4BD13D841F144D715B22A2A03FE935_RuntimeMethod_var);
								V_5 = L_13;
								// if (b.enabled == false) continue;
								GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_14 = V_5;
								NullCheck(L_14);
								bool L_15;
								L_15 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_14, NULL);
								if (!L_15)
								{
									goto IL_0514_3;
								}
							}
							{
								// props.SetVector(paramsID, new Vector4(b.strength, b.heightOffset, b.pushStrength, b.scaleMultiplier));
								MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_16 = __this->___props_27;
								int32_t L_17 = __this->___paramsID_28;
								GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_18 = V_5;
								NullCheck(L_18);
								float L_19 = L_18->___strength_10;
								GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_20 = V_5;
								NullCheck(L_20);
								float L_21 = L_20->___heightOffset_9;
								GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_22 = V_5;
								NullCheck(L_22);
								float L_23 = L_22->___pushStrength_11;
								GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_24 = V_5;
								NullCheck(L_24);
								float L_25 = L_24->___scaleMultiplier_12;
								Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_26;
								memset((&L_26), 0, sizeof(L_26));
								Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_26), L_19, L_21, L_23, L_25, /*hidden argument*/NULL);
								NullCheck(L_16);
								MaterialPropertyBlock_SetVector_m22B010D99231EF5684063F4A07F5948854D590B3(L_16, L_17, L_26, NULL);
								// if (b.benderType == GrassBenderBase.BenderType.Trail)
								GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_27 = V_5;
								NullCheck(L_27);
								int32_t L_28 = L_27->___benderType_4;
								if ((!(((uint32_t)L_28) == ((uint32_t)1))))
								{
									goto IL_0234_3;
								}
							}
							{
								// if (!b.trailRenderer) continue;
								GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_29 = V_5;
								NullCheck(L_29);
								TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* L_30 = L_29->___trailRenderer_19;
								il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
								bool L_31;
								L_31 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_30, NULL);
								if (!L_31)
								{
									goto IL_0514_3;
								}
							}
							{
								// if (!b.trailRenderer.emitting) continue;
								GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_32 = V_5;
								NullCheck(L_32);
								TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* L_33 = L_32->___trailRenderer_19;
								NullCheck(L_33);
								bool L_34;
								L_34 = TrailRenderer_get_emitting_mF633E40B6977B5A771FEDC92A0A140CC9214EF1B(L_33, NULL);
								if (!L_34)
								{
									goto IL_0514_3;
								}
							}
							{
								// if (!GeometryUtility.TestPlanesAABB(frustrumPlanes, b.trailRenderer.bounds)) continue;
								PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE* L_35 = __this->___frustrumPlanes_29;
								GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_36 = V_5;
								NullCheck(L_36);
								TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* L_37 = L_36->___trailRenderer_19;
								NullCheck(L_37);
								Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_38;
								L_38 = Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C(L_37, NULL);
								bool L_39;
								L_39 = GeometryUtility_TestPlanesAABB_m7656F6C599D2FF8FE9B69AF3E6DAEFBAD4A4FA8B(L_35, L_38, NULL);
								if (!L_39)
								{
									goto IL_0514_3;
								}
							}
							{
								// m_TrailRenderer = b.trailRenderer;
								GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_40 = V_5;
								NullCheck(L_40);
								TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* L_41 = L_40->___trailRenderer_19;
								__this->___m_TrailRenderer_32 = L_41;
								Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TrailRenderer_32), (void*)L_41);
								// m_TrailRenderer.SetPropertyBlock(props);
								TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* L_42 = __this->___m_TrailRenderer_32;
								MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_43 = __this->___props_27;
								NullCheck(L_42);
								Renderer_SetPropertyBlock_mF565698782FE54580B17CC0BFF9B0C4F0D68DF50(L_42, L_43, NULL);
								// m_TrailRenderer.emitting = b.gameObject.activeInHierarchy;
								TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* L_44 = __this->___m_TrailRenderer_32;
								GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_45 = V_5;
								NullCheck(L_45);
								GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46;
								L_46 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_45, NULL);
								NullCheck(L_46);
								bool L_47;
								L_47 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_46, NULL);
								NullCheck(L_44);
								TrailRenderer_set_emitting_m16F5AF286796F5A3525EC91EAC427D61302A098B(L_44, L_47, NULL);
								// m_TrailRenderer.generateLightingData = true;
								TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* L_48 = __this->___m_TrailRenderer_32;
								NullCheck(L_48);
								TrailRenderer_set_generateLightingData_mF26581D4CA70ACA1E79ACEC624F407E8AC884FB3(L_48, (bool)1, NULL);
								// m_TrailRenderer.widthMultiplier = b.trailRadius;
								TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* L_49 = __this->___m_TrailRenderer_32;
								GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_50 = V_5;
								NullCheck(L_50);
								float L_51 = L_50->___trailRadius_23;
								NullCheck(L_49);
								TrailRenderer_set_widthMultiplier_m3362BDEED1C1AEF9AEDB9862D69FA48676A09F83(L_49, L_51, NULL);
								// m_TrailRenderer.time = b.trailLifetime;
								TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* L_52 = __this->___m_TrailRenderer_32;
								GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_53 = V_5;
								NullCheck(L_53);
								float L_54 = L_53->___trailLifetime_22;
								NullCheck(L_52);
								TrailRenderer_set_time_mD4760D84A531B310E2A4069F87B4E2EF2FEF4C23(L_52, L_54, NULL);
								// m_TrailRenderer.minVertexDistance = b.trailAccuracy;
								TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* L_55 = __this->___m_TrailRenderer_32;
								GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_56 = V_5;
								NullCheck(L_56);
								float L_57 = L_56->___trailAccuracy_21;
								NullCheck(L_55);
								TrailRenderer_set_minVertexDistance_mC7843F4657DFA38B81F3EED14649098CB13CFF33(L_55, L_57, NULL);
								// m_TrailRenderer.widthCurve = b.widthOverLifetime;
								TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* L_58 = __this->___m_TrailRenderer_32;
								GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_59 = V_5;
								NullCheck(L_59);
								AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_60 = L_59->___widthOverLifetime_24;
								NullCheck(L_58);
								TrailRenderer_set_widthCurve_m3B01263997001A811365849CF7F9DA29FEECBEA6(L_58, L_60, NULL);
								// m_TrailRenderer.colorGradient = GrassBenderBase.GetGradient(b.strengthOverLifetime);
								TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* L_61 = __this->___m_TrailRenderer_32;
								GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_62 = V_5;
								NullCheck(L_62);
								AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_63 = L_62->___strengthOverLifetime_13;
								il2cpp_codegen_runtime_class_init_inline(GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_il2cpp_TypeInfo_var);
								Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_64;
								L_64 = GrassBenderBase_GetGradient_mEAA36EC17914C94520C487C13C7D0DD44A67E940(L_63, NULL);
								NullCheck(L_61);
								TrailRenderer_set_colorGradient_mC34D57ADD50DE4272061BA1E0F4BEFB34E12A7CF(L_61, L_64, NULL);
								// trailEnabled = m_TrailRenderer.enabled ? true : false;
								TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* L_65 = __this->___m_TrailRenderer_32;
								NullCheck(L_65);
								bool L_66;
								L_66 = Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54(L_65, NULL);
								G_B11_0 = __this;
								if (L_66)
								{
									G_B12_0 = __this;
									goto IL_01a2_3;
								}
							}
							{
								G_B13_0 = 0;
								G_B13_1 = G_B11_0;
								goto IL_01a3_3;
							}

IL_01a2_3:
							{
								G_B13_0 = 1;
								G_B13_1 = G_B12_0;
							}

IL_01a3_3:
							{
								NullCheck(G_B13_1);
								G_B13_1->___trailEnabled_30 = (bool)G_B13_0;
								// if (!trailEnabled) m_TrailRenderer.enabled = true;
								bool L_67 = __this->___trailEnabled_30;
								if (L_67)
								{
									goto IL_01bc_3;
								}
							}
							{
								// if (!trailEnabled) m_TrailRenderer.enabled = true;
								TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* L_68 = __this->___m_TrailRenderer_32;
								NullCheck(L_68);
								Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_68, (bool)1, NULL);
							}

IL_01bc_3:
							{
								// if (b.bakedMesh == null) b.bakedMesh = new Mesh();
								GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_69 = V_5;
								NullCheck(L_69);
								Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_70 = L_69->___bakedMesh_7;
								il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
								bool L_71;
								L_71 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_70, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
								if (!L_71)
								{
									goto IL_01d7_3;
								}
							}
							{
								// if (b.bakedMesh == null) b.bakedMesh = new Mesh();
								GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_72 = V_5;
								Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_73 = (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)il2cpp_codegen_object_new(Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
								NullCheck(L_73);
								Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00(L_73, NULL);
								NullCheck(L_72);
								L_72->___bakedMesh_7 = L_73;
								Il2CppCodeGenWriteBarrier((void**)(&L_72->___bakedMesh_7), (void*)L_73);
							}

IL_01d7_3:
							{
								// m_TrailRenderer.BakeMesh(b.bakedMesh, renderingData.cameraData.camera, false);
								TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* L_74 = __this->___m_TrailRenderer_32;
								GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_75 = V_5;
								NullCheck(L_75);
								Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_76 = L_75->___bakedMesh_7;
								RenderingData_tAAA01190551D6D5954314E3E1E85B58DD45EED71* L_77 = ___renderingData1;
								CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_78 = (&L_77->___cameraData_1);
								Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_79 = L_78->___camera_2;
								NullCheck(L_74);
								TrailRenderer_BakeMesh_mA44A8AF62401D45BE83975D0A480D2B3DC7D9338(L_74, L_76, L_79, (bool)0, NULL);
								// cmd.DrawMesh(b.bakedMesh, Matrix4x4.identity, GrassBenderBase.TrailMaterial, 0, b.alphaBlending ? 1 : 0, props);
								CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_80 = V_0;
								GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_81 = V_5;
								NullCheck(L_81);
								Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_82 = L_81->___bakedMesh_7;
								Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_83;
								L_83 = Matrix4x4_get_identity_m94A09872C449C26863FF10D0FDF87842D91BECD6_inline(NULL);
								il2cpp_codegen_runtime_class_init_inline(GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_il2cpp_TypeInfo_var);
								Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_84;
								L_84 = GrassBenderBase_get_TrailMaterial_m7B63234FED83539B02EAED656F2439A45162D08B(NULL);
								GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_85 = V_5;
								NullCheck(L_85);
								bool L_86 = L_85->___alphaBlending_15;
								G_B18_0 = 0;
								G_B18_1 = L_84;
								G_B18_2 = L_83;
								G_B18_3 = L_82;
								G_B18_4 = L_80;
								if (L_86)
								{
									G_B19_0 = 0;
									G_B19_1 = L_84;
									G_B19_2 = L_83;
									G_B19_3 = L_82;
									G_B19_4 = L_80;
									goto IL_0214_3;
								}
							}
							{
								G_B20_0 = 0;
								G_B20_1 = G_B18_0;
								G_B20_2 = G_B18_1;
								G_B20_3 = G_B18_2;
								G_B20_4 = G_B18_3;
								G_B20_5 = G_B18_4;
								goto IL_0215_3;
							}

IL_0214_3:
							{
								G_B20_0 = 1;
								G_B20_1 = G_B19_0;
								G_B20_2 = G_B19_1;
								G_B20_3 = G_B19_2;
								G_B20_4 = G_B19_3;
								G_B20_5 = G_B19_4;
							}

IL_0215_3:
							{
								MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_87 = __this->___props_27;
								NullCheck(G_B20_5);
								CommandBuffer_DrawMesh_m5C2FA266FB98E3B7F59009B501824511E47003D9(G_B20_5, G_B20_4, G_B20_3, G_B20_2, G_B20_1, G_B20_0, L_87, NULL);
								// if (!trailEnabled) m_TrailRenderer.enabled = false;
								bool L_88 = __this->___trailEnabled_30;
								if (L_88)
								{
									goto IL_0234_3;
								}
							}
							{
								// if (!trailEnabled) m_TrailRenderer.enabled = false;
								TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* L_89 = __this->___m_TrailRenderer_32;
								NullCheck(L_89);
								Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_89, (bool)0, NULL);
							}

IL_0234_3:
							{
								// if (b.benderType == GrassBenderBase.BenderType.ParticleSystem)
								GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_90 = V_5;
								NullCheck(L_90);
								int32_t L_91 = L_90->___benderType_4;
								if ((!(((uint32_t)L_91) == ((uint32_t)2))))
								{
									goto IL_03c5_3;
								}
							}
							{
								// if (!b.particleSystem) continue;
								GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_92 = V_5;
								NullCheck(L_92);
								ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_93 = L_92->___particleSystem_25;
								il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
								bool L_94;
								L_94 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_93, NULL);
								if (!L_94)
								{
									goto IL_0514_3;
								}
							}
							{
								// if (!GeometryUtility.TestPlanesAABB(frustrumPlanes, b.particleRenderer.bounds)) continue;
								PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE* L_95 = __this->___frustrumPlanes_29;
								GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_96 = V_5;
								NullCheck(L_96);
								ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* L_97 = L_96->___particleRenderer_26;
								NullCheck(L_97);
								Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_98;
								L_98 = Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C(L_97, NULL);
								bool L_99;
								L_99 = GeometryUtility_TestPlanesAABB_m7656F6C599D2FF8FE9B69AF3E6DAEFBAD4A4FA8B(L_95, L_98, NULL);
								if (!L_99)
								{
									goto IL_0514_3;
								}
							}
							{
								// m_ParticleRenderer = b.particleRenderer;
								GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_100 = V_5;
								NullCheck(L_100);
								ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* L_101 = L_100->___particleRenderer_26;
								__this->___m_ParticleRenderer_34 = L_101;
								Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ParticleRenderer_34), (void*)L_101);
								// m_ParticleRenderer.SetPropertyBlock(props);
								ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* L_102 = __this->___m_ParticleRenderer_34;
								MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_103 = __this->___props_27;
								NullCheck(L_102);
								Renderer_SetPropertyBlock_mF565698782FE54580B17CC0BFF9B0C4F0D68DF50(L_102, L_103, NULL);
								// var grad = b.particleSystem.colorOverLifetime;
								GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_104 = V_5;
								NullCheck(L_104);
								ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_105 = L_104->___particleSystem_25;
								NullCheck(L_105);
								ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_106;
								L_106 = ParticleSystem_get_colorOverLifetime_mD8C72661EFE9BB063126752E744544EE2FF5814C(L_105, NULL);
								V_6 = L_106;
								// grad.enabled = true;
								ColorOverLifetimeModule_set_enabled_m356D3ABCE0A5B979105F546C2EAA54702297059C((&V_6), (bool)1, NULL);
								// grad.color = GrassBenderBase.GetGradient(b.strengthOverLifetime);
								GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_107 = V_5;
								NullCheck(L_107);
								AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_108 = L_107->___strengthOverLifetime_13;
								il2cpp_codegen_runtime_class_init_inline(GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_il2cpp_TypeInfo_var);
								Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_109;
								L_109 = GrassBenderBase_GetGradient_mEAA36EC17914C94520C487C13C7D0DD44A67E940(L_108, NULL);
								MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_110;
								L_110 = MinMaxGradient_op_Implicit_mF5C930FA4699150E9F43160A724BAFA8803B7306(L_109, NULL);
								ColorOverLifetimeModule_set_color_m054950B589DA58FFD5BDBC10A70304BF89E3C86B((&V_6), L_110, NULL);
								// bool localSpace = b.particleSystem.main.simulationSpace == ParticleSystemSimulationSpace.Local;
								GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_111 = V_5;
								NullCheck(L_111);
								ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_112 = L_111->___particleSystem_25;
								NullCheck(L_112);
								MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_113;
								L_113 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_112, NULL);
								V_8 = L_113;
								int32_t L_114;
								L_114 = MainModule_get_simulationSpace_m03E205A92F6CF911F0CD82DA457D156609C02ADC((&V_8), NULL);
								V_7 = (bool)((((int32_t)L_114) == ((int32_t)0))? 1 : 0);
								// if (!b.bakedMesh) b.bakedMesh = new Mesh();
								GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_115 = V_5;
								NullCheck(L_115);
								Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_116 = L_115->___bakedMesh_7;
								il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
								bool L_117;
								L_117 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_116, NULL);
								if (L_117)
								{
									goto IL_02ee_3;
								}
							}
							{
								// if (!b.bakedMesh) b.bakedMesh = new Mesh();
								GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_118 = V_5;
								Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_119 = (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)il2cpp_codegen_object_new(Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
								NullCheck(L_119);
								Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00(L_119, NULL);
								NullCheck(L_118);
								L_118->___bakedMesh_7 = L_119;
								Il2CppCodeGenWriteBarrier((void**)(&L_118->___bakedMesh_7), (void*)L_119);
							}

IL_02ee_3:
							{
								// m_ParticleRenderer.BakeMesh(b.bakedMesh, renderingData.cameraData.camera);
								ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* L_120 = __this->___m_ParticleRenderer_34;
								GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_121 = V_5;
								NullCheck(L_121);
								Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_122 = L_121->___bakedMesh_7;
								RenderingData_tAAA01190551D6D5954314E3E1E85B58DD45EED71* L_123 = ___renderingData1;
								CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_124 = (&L_123->___cameraData_1);
								Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_125 = L_124->___camera_2;
								NullCheck(L_120);
								ParticleSystemRenderer_BakeMesh_m9CC200A5574186FB88AA904ABF70FBDA957E5141(L_120, L_122, L_125, (bool)0, NULL);
								// cmd.DrawMesh(b.bakedMesh, localSpace ? m_ParticleRenderer.localToWorldMatrix : Matrix4x4.identity, GrassBenderBase.MeshMaterial, 0, b.alphaBlending ? 1 : 0, props);
								CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_126 = V_0;
								GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_127 = V_5;
								NullCheck(L_127);
								Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_128 = L_127->___bakedMesh_7;
								bool L_129 = V_7;
								G_B28_0 = L_128;
								G_B28_1 = L_126;
								if (L_129)
								{
									G_B29_0 = L_128;
									G_B29_1 = L_126;
									goto IL_031f_3;
								}
							}
							{
								Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_130;
								L_130 = Matrix4x4_get_identity_m94A09872C449C26863FF10D0FDF87842D91BECD6_inline(NULL);
								G_B30_0 = L_130;
								G_B30_1 = G_B28_0;
								G_B30_2 = G_B28_1;
								goto IL_032a_3;
							}

IL_031f_3:
							{
								ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* L_131 = __this->___m_ParticleRenderer_34;
								NullCheck(L_131);
								Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_132;
								L_132 = Renderer_get_localToWorldMatrix_mCC910A9BA14BDA7A5BACE0D13B5456358FA8EC22(L_131, NULL);
								G_B30_0 = L_132;
								G_B30_1 = G_B29_0;
								G_B30_2 = G_B29_1;
							}

IL_032a_3:
							{
								il2cpp_codegen_runtime_class_init_inline(GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_il2cpp_TypeInfo_var);
								Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_133;
								L_133 = GrassBenderBase_get_MeshMaterial_m0D3C635831A7C5266855E7FC7FD0EFFAEBD023FD(NULL);
								GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_134 = V_5;
								NullCheck(L_134);
								bool L_135 = L_134->___alphaBlending_15;
								G_B31_0 = 0;
								G_B31_1 = L_133;
								G_B31_2 = G_B30_0;
								G_B31_3 = G_B30_1;
								G_B31_4 = G_B30_2;
								if (L_135)
								{
									G_B32_0 = 0;
									G_B32_1 = L_133;
									G_B32_2 = G_B30_0;
									G_B32_3 = G_B30_1;
									G_B32_4 = G_B30_2;
									goto IL_033c_3;
								}
							}
							{
								G_B33_0 = 0;
								G_B33_1 = G_B31_0;
								G_B33_2 = G_B31_1;
								G_B33_3 = G_B31_2;
								G_B33_4 = G_B31_3;
								G_B33_5 = G_B31_4;
								goto IL_033d_3;
							}

IL_033c_3:
							{
								G_B33_0 = 1;
								G_B33_1 = G_B32_0;
								G_B33_2 = G_B32_1;
								G_B33_3 = G_B32_2;
								G_B33_4 = G_B32_3;
								G_B33_5 = G_B32_4;
							}

IL_033d_3:
							{
								MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_136 = __this->___props_27;
								NullCheck(G_B33_5);
								CommandBuffer_DrawMesh_m5C2FA266FB98E3B7F59009B501824511E47003D9(G_B33_5, G_B33_4, G_B33_3, G_B33_2, G_B33_1, G_B33_0, L_136, NULL);
								// if (b.hasParticleTrails)
								GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_137 = V_5;
								NullCheck(L_137);
								bool L_138 = L_137->___hasParticleTrails_27;
								if (!L_138)
								{
									goto IL_03c5_3;
								}
							}
							{
								// if (!b.particleTrailMesh) b.particleTrailMesh = new Mesh();
								GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_139 = V_5;
								NullCheck(L_139);
								Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_140 = L_139->___particleTrailMesh_8;
								il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
								bool L_141;
								L_141 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_140, NULL);
								if (L_141)
								{
									goto IL_036b_3;
								}
							}
							{
								// if (!b.particleTrailMesh) b.particleTrailMesh = new Mesh();
								GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_142 = V_5;
								Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_143 = (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)il2cpp_codegen_object_new(Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
								NullCheck(L_143);
								Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00(L_143, NULL);
								NullCheck(L_142);
								L_142->___particleTrailMesh_8 = L_143;
								Il2CppCodeGenWriteBarrier((void**)(&L_142->___particleTrailMesh_8), (void*)L_143);
							}

IL_036b_3:
							{
								// m_ParticleRenderer.BakeTrailsMesh(b.particleTrailMesh, renderingData.cameraData.camera);
								ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* L_144 = __this->___m_ParticleRenderer_34;
								GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_145 = V_5;
								NullCheck(L_145);
								Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_146 = L_145->___particleTrailMesh_8;
								RenderingData_tAAA01190551D6D5954314E3E1E85B58DD45EED71* L_147 = ___renderingData1;
								CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_148 = (&L_147->___cameraData_1);
								Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_149 = L_148->___camera_2;
								NullCheck(L_144);
								ParticleSystemRenderer_BakeTrailsMesh_mDAD9AB8BD85A68CC7BD0B4DF02A7558F1845AC34(L_144, L_146, L_149, (bool)0, NULL);
								// cmd.DrawMesh(b.particleTrailMesh, localSpace ? m_ParticleRenderer.localToWorldMatrix : Matrix4x4.identity, GrassBenderBase.TrailMaterial, 1, b.alphaBlending ? 1 : 0, props);
								CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_150 = V_0;
								GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_151 = V_5;
								NullCheck(L_151);
								Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_152 = L_151->___particleTrailMesh_8;
								bool L_153 = V_7;
								G_B37_0 = L_152;
								G_B37_1 = L_150;
								if (L_153)
								{
									G_B38_0 = L_152;
									G_B38_1 = L_150;
									goto IL_039c_3;
								}
							}
							{
								Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_154;
								L_154 = Matrix4x4_get_identity_m94A09872C449C26863FF10D0FDF87842D91BECD6_inline(NULL);
								G_B39_0 = L_154;
								G_B39_1 = G_B37_0;
								G_B39_2 = G_B37_1;
								goto IL_03a7_3;
							}

IL_039c_3:
							{
								ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* L_155 = __this->___m_ParticleRenderer_34;
								NullCheck(L_155);
								Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_156;
								L_156 = Renderer_get_localToWorldMatrix_mCC910A9BA14BDA7A5BACE0D13B5456358FA8EC22(L_155, NULL);
								G_B39_0 = L_156;
								G_B39_1 = G_B38_0;
								G_B39_2 = G_B38_1;
							}

IL_03a7_3:
							{
								il2cpp_codegen_runtime_class_init_inline(GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_il2cpp_TypeInfo_var);
								Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_157;
								L_157 = GrassBenderBase_get_TrailMaterial_m7B63234FED83539B02EAED656F2439A45162D08B(NULL);
								GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_158 = V_5;
								NullCheck(L_158);
								bool L_159 = L_158->___alphaBlending_15;
								G_B40_0 = 1;
								G_B40_1 = L_157;
								G_B40_2 = G_B39_0;
								G_B40_3 = G_B39_1;
								G_B40_4 = G_B39_2;
								if (L_159)
								{
									G_B41_0 = 1;
									G_B41_1 = L_157;
									G_B41_2 = G_B39_0;
									G_B41_3 = G_B39_1;
									G_B41_4 = G_B39_2;
									goto IL_03b9_3;
								}
							}
							{
								G_B42_0 = 0;
								G_B42_1 = G_B40_0;
								G_B42_2 = G_B40_1;
								G_B42_3 = G_B40_2;
								G_B42_4 = G_B40_3;
								G_B42_5 = G_B40_4;
								goto IL_03ba_3;
							}

IL_03b9_3:
							{
								G_B42_0 = 1;
								G_B42_1 = G_B41_0;
								G_B42_2 = G_B41_1;
								G_B42_3 = G_B41_2;
								G_B42_4 = G_B41_3;
								G_B42_5 = G_B41_4;
							}

IL_03ba_3:
							{
								MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_160 = __this->___props_27;
								NullCheck(G_B42_5);
								CommandBuffer_DrawMesh_m5C2FA266FB98E3B7F59009B501824511E47003D9(G_B42_5, G_B42_4, G_B42_3, G_B42_2, G_B42_1, G_B42_0, L_160, NULL);
							}

IL_03c5_3:
							{
								// if (b.benderType == GrassBenderBase.BenderType.Mesh)
								GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_161 = V_5;
								NullCheck(L_161);
								int32_t L_162 = L_161->___benderType_4;
								if (L_162)
								{
									goto IL_0438_3;
								}
							}
							{
								// if (!b.meshRenderer) continue;
								GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_163 = V_5;
								NullCheck(L_163);
								MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_164 = L_163->___meshRenderer_18;
								il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
								bool L_165;
								L_165 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_164, NULL);
								if (!L_165)
								{
									goto IL_0514_3;
								}
							}
							{
								// if (!GeometryUtility.TestPlanesAABB(frustrumPlanes, b.meshRenderer.bounds)) continue;
								PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE* L_166 = __this->___frustrumPlanes_29;
								GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_167 = V_5;
								NullCheck(L_167);
								MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_168 = L_167->___meshRenderer_18;
								NullCheck(L_168);
								Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_169;
								L_169 = Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C(L_168, NULL);
								bool L_170;
								L_170 = GeometryUtility_TestPlanesAABB_m7656F6C599D2FF8FE9B69AF3E6DAEFBAD4A4FA8B(L_166, L_169, NULL);
								if (!L_170)
								{
									goto IL_0514_3;
								}
							}
							{
								// m_MeshRenderer = b.meshRenderer;
								GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_171 = V_5;
								NullCheck(L_171);
								MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_172 = L_171->___meshRenderer_18;
								__this->___m_MeshRenderer_31 = L_172;
								Il2CppCodeGenWriteBarrier((void**)(&__this->___m_MeshRenderer_31), (void*)L_172);
								// m_MeshRenderer.SetPropertyBlock(props);
								MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_173 = __this->___m_MeshRenderer_31;
								MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_174 = __this->___props_27;
								NullCheck(L_173);
								Renderer_SetPropertyBlock_mF565698782FE54580B17CC0BFF9B0C4F0D68DF50(L_173, L_174, NULL);
								// cmd.DrawRenderer(m_MeshRenderer, GrassBenderBase.MeshMaterial, 0, b.alphaBlending ? 1 : 0);
								CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_175 = V_0;
								MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_176 = __this->___m_MeshRenderer_31;
								il2cpp_codegen_runtime_class_init_inline(GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_il2cpp_TypeInfo_var);
								Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_177;
								L_177 = GrassBenderBase_get_MeshMaterial_m0D3C635831A7C5266855E7FC7FD0EFFAEBD023FD(NULL);
								GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_178 = V_5;
								NullCheck(L_178);
								bool L_179 = L_178->___alphaBlending_15;
								G_B47_0 = 0;
								G_B47_1 = L_177;
								G_B47_2 = L_176;
								G_B47_3 = L_175;
								if (L_179)
								{
									G_B48_0 = 0;
									G_B48_1 = L_177;
									G_B48_2 = L_176;
									G_B48_3 = L_175;
									goto IL_0432_3;
								}
							}
							{
								G_B49_0 = 0;
								G_B49_1 = G_B47_0;
								G_B49_2 = G_B47_1;
								G_B49_3 = G_B47_2;
								G_B49_4 = G_B47_3;
								goto IL_0433_3;
							}

IL_0432_3:
							{
								G_B49_0 = 1;
								G_B49_1 = G_B48_0;
								G_B49_2 = G_B48_1;
								G_B49_3 = G_B48_2;
								G_B49_4 = G_B48_3;
							}

IL_0433_3:
							{
								NullCheck(G_B49_4);
								CommandBuffer_DrawRenderer_m0E01900E0CA8B52F3BB03C82A27214A354007138(G_B49_4, G_B49_3, G_B49_2, G_B49_1, G_B49_0, NULL);
							}

IL_0438_3:
							{
								// if (b.benderType == GrassBenderBase.BenderType.Line)
								GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_180 = V_5;
								NullCheck(L_180);
								int32_t L_181 = L_180->___benderType_4;
								if ((!(((uint32_t)L_181) == ((uint32_t)3))))
								{
									goto IL_0514_3;
								}
							}
							{
								// if(b.lineRenderer == null) continue;
								GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_182 = V_5;
								NullCheck(L_182);
								LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_183 = L_182->___lineRenderer_29;
								il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
								bool L_184;
								L_184 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_183, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
								if (L_184)
								{
									goto IL_0514_3;
								}
							}
							{
								// if (!GeometryUtility.TestPlanesAABB(frustrumPlanes, b.lineRenderer.bounds)) continue;
								PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE* L_185 = __this->___frustrumPlanes_29;
								GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_186 = V_5;
								NullCheck(L_186);
								LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_187 = L_186->___lineRenderer_29;
								NullCheck(L_187);
								Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_188;
								L_188 = Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C(L_187, NULL);
								bool L_189;
								L_189 = GeometryUtility_TestPlanesAABB_m7656F6C599D2FF8FE9B69AF3E6DAEFBAD4A4FA8B(L_185, L_188, NULL);
								if (!L_189)
								{
									goto IL_0514_3;
								}
							}
							{
								// m_LineRenderer = b.lineRenderer;
								GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_190 = V_5;
								NullCheck(L_190);
								LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_191 = L_190->___lineRenderer_29;
								__this->___m_LineRenderer_33 = L_191;
								Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LineRenderer_33), (void*)L_191);
								// m_LineRenderer.SetPropertyBlock(props);
								LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_192 = __this->___m_LineRenderer_33;
								MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_193 = __this->___props_27;
								NullCheck(L_192);
								Renderer_SetPropertyBlock_mF565698782FE54580B17CC0BFF9B0C4F0D68DF50(L_192, L_193, NULL);
								// if (b.bakedMesh == null) b.bakedMesh = new Mesh();
								GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_194 = V_5;
								NullCheck(L_194);
								Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_195 = L_194->___bakedMesh_7;
								il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
								bool L_196;
								L_196 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_195, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
								if (!L_196)
								{
									goto IL_04ac_3;
								}
							}
							{
								// if (b.bakedMesh == null) b.bakedMesh = new Mesh();
								GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_197 = V_5;
								Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_198 = (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)il2cpp_codegen_object_new(Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
								NullCheck(L_198);
								Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00(L_198, NULL);
								NullCheck(L_197);
								L_197->___bakedMesh_7 = L_198;
								Il2CppCodeGenWriteBarrier((void**)(&L_197->___bakedMesh_7), (void*)L_198);
							}

IL_04ac_3:
							{
								// m_LineRenderer.BakeMesh(b.bakedMesh, renderingData.cameraData.camera, false);
								LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_199 = __this->___m_LineRenderer_33;
								GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_200 = V_5;
								NullCheck(L_200);
								Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_201 = L_200->___bakedMesh_7;
								RenderingData_tAAA01190551D6D5954314E3E1E85B58DD45EED71* L_202 = ___renderingData1;
								CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_203 = (&L_202->___cameraData_1);
								Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_204 = L_203->___camera_2;
								NullCheck(L_199);
								LineRenderer_BakeMesh_m97DF71CB60AE42AC5BBDDA384BD3D91DDB97F8F0(L_199, L_201, L_204, (bool)0, NULL);
								// cmd.DrawMesh(b.bakedMesh, m_LineRenderer.useWorldSpace ? Matrix4x4.identity : m_LineRenderer.transform.localToWorldMatrix, GrassBenderBase.TrailMaterial, 0, b.alphaBlending ? 1 : 0, props);
								CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_205 = V_0;
								GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_206 = V_5;
								NullCheck(L_206);
								Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_207 = L_206->___bakedMesh_7;
								LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_208 = __this->___m_LineRenderer_33;
								NullCheck(L_208);
								bool L_209;
								L_209 = LineRenderer_get_useWorldSpace_mF11E798A740B698FAC9895D7E338358F497CCB64(L_208, NULL);
								G_B56_0 = L_207;
								G_B56_1 = L_205;
								if (L_209)
								{
									G_B57_0 = L_207;
									G_B57_1 = L_205;
									goto IL_04f1_3;
								}
							}
							{
								LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_210 = __this->___m_LineRenderer_33;
								NullCheck(L_210);
								Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_211;
								L_211 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_210, NULL);
								NullCheck(L_211);
								Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_212;
								L_212 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_211, NULL);
								G_B58_0 = L_212;
								G_B58_1 = G_B56_0;
								G_B58_2 = G_B56_1;
								goto IL_04f6_3;
							}

IL_04f1_3:
							{
								Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_213;
								L_213 = Matrix4x4_get_identity_m94A09872C449C26863FF10D0FDF87842D91BECD6_inline(NULL);
								G_B58_0 = L_213;
								G_B58_1 = G_B57_0;
								G_B58_2 = G_B57_1;
							}

IL_04f6_3:
							{
								il2cpp_codegen_runtime_class_init_inline(GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_il2cpp_TypeInfo_var);
								Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_214;
								L_214 = GrassBenderBase_get_TrailMaterial_m7B63234FED83539B02EAED656F2439A45162D08B(NULL);
								GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_215 = V_5;
								NullCheck(L_215);
								bool L_216 = L_215->___alphaBlending_15;
								G_B59_0 = 0;
								G_B59_1 = L_214;
								G_B59_2 = G_B58_0;
								G_B59_3 = G_B58_1;
								G_B59_4 = G_B58_2;
								if (L_216)
								{
									G_B60_0 = 0;
									G_B60_1 = L_214;
									G_B60_2 = G_B58_0;
									G_B60_3 = G_B58_1;
									G_B60_4 = G_B58_2;
									goto IL_0508_3;
								}
							}
							{
								G_B61_0 = 0;
								G_B61_1 = G_B59_0;
								G_B61_2 = G_B59_1;
								G_B61_3 = G_B59_2;
								G_B61_4 = G_B59_3;
								G_B61_5 = G_B59_4;
								goto IL_0509_3;
							}

IL_0508_3:
							{
								G_B61_0 = 1;
								G_B61_1 = G_B60_0;
								G_B61_2 = G_B60_1;
								G_B61_3 = G_B60_2;
								G_B61_4 = G_B60_3;
								G_B61_5 = G_B60_4;
							}

IL_0509_3:
							{
								MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_217 = __this->___props_27;
								NullCheck(G_B61_5);
								CommandBuffer_DrawMesh_m5C2FA266FB98E3B7F59009B501824511E47003D9(G_B61_5, G_B61_4, G_B61_3, G_B61_2, G_B61_1, G_B61_0, L_217, NULL);
							}

IL_0514_3:
							{
								// foreach (GrassBender b in layer.Value)
								bool L_218;
								L_218 = Enumerator_MoveNext_mEC1C5D8C1EF85ACD68FE53D378C563DD5A1D4D09((&V_4), Enumerator_MoveNext_mEC1C5D8C1EF85ACD68FE53D378C563DD5A1D4D09_RuntimeMethod_var);
								if (L_218)
								{
									goto IL_005f_3;
								}
							}
							{
								goto IL_0530_2;
							}
						}// end try (depth: 3)
						catch(Il2CppExceptionWrapper& e)
						{
							__finallyBlock.StoreException(e.ex);
						}
					}

IL_0530_2:
					{
						// foreach (KeyValuePair<int, List<GrassBender>> layer in StylizedGrassRenderer.GrassBenders)
						bool L_219;
						L_219 = Enumerator_MoveNext_m48A899DD35F7911EF8387E837F28120EECB48159((&V_2), Enumerator_MoveNext_m48A899DD35F7911EF8387E837F28120EECB48159_RuntimeMethod_var);
						if (L_219)
						{
							goto IL_0044_2;
						}
					}
					{
						goto IL_055a;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_055a:
	{
		// context.ExecuteCommandBuffer(cmd);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_220 = V_0;
		ScriptableRenderContext_ExecuteCommandBuffer_mBAE37DFC699B7167A6E2C59012066C44A31E9896((&___context0), L_220, NULL);
		// CommandBufferPool.Release(cmd);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_221 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CommandBufferPool_t88CACA06AB445EE4743F5C4D742C73761A2DEF0F_il2cpp_TypeInfo_var);
		CommandBufferPool_Release_mEC46D8373A95DEC68F1FBD2D77FF3F76917631BF(L_221, NULL);
		// }
		return;
	}
}
// System.Void StylizedGrass.DrawGrassBenders/DrawGrassBendersPass::OnCameraCleanup(UnityEngine.Rendering.CommandBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawGrassBendersPass_OnCameraCleanup_m0BF1058B8C78B68563797D9C139155DE751D80E9 (DrawGrassBendersPass_t910E752F82318AB6034D3395872D033459AEBA0B* __this, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___cmd0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cmd.ReleaseTemporaryRT(StylizedGrassRenderer._BendMap);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = ___cmd0;
		il2cpp_codegen_runtime_class_init_inline(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var);
		int32_t L_1 = ((StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_StaticFields*)il2cpp_codegen_static_fields_for(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var))->____BendMap_24;
		NullCheck(L_0);
		CommandBuffer_ReleaseTemporaryRT_m4651A4B373DF432AA44F06A6F20852ED5996CC8E(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void StylizedGrass.DrawGrassBenders/DrawGrassBendersPass::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawGrassBendersPass__ctor_m81A2E22EA68EE32F98A85EC00DCB234642B998F1 (DrawGrassBendersPass_t910E752F82318AB6034D3395872D033459AEBA0B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF873D6748545B7516CD56A7A617453AEC82E7C8D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private int paramsID = Shader.PropertyToID("_Params");
		int32_t L_0;
		L_0 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteralF873D6748545B7516CD56A7A617453AEC82E7C8D, NULL);
		__this->___paramsID_28 = L_0;
		// private Plane[] frustrumPlanes = new Plane[6];
		PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE* L_1 = (PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE*)(PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE*)SZArrayNew(PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE_il2cpp_TypeInfo_var, (uint32_t)6);
		__this->___frustrumPlanes_29 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___frustrumPlanes_29), (void*)L_1);
		ScriptableRenderPass__ctor_mE49D4FF8E68A854367A4081E664B8DBA74E6B752(__this, NULL);
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
// System.Void StylizedGrass.GrassBender::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrassBender_OnEnable_m62A737475FD4889186B05CC9ACB1E238DC43F5B7 (GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StylizedGrassRenderer.RegisterBender(this);
		il2cpp_codegen_runtime_class_init_inline(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var);
		StylizedGrassRenderer_RegisterBender_m5AE3C2EC6859C9EC7C07AE78BFE1A63E8B389D66(__this, NULL);
		// if (trailRenderer)
		TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* L_0 = __this->___trailRenderer_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		// trailRenderer.forceRenderingOff = true;
		TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* L_2 = __this->___trailRenderer_19;
		NullCheck(L_2);
		Renderer_set_forceRenderingOff_mD3833D66401E67D2B73A7E1EEE4010E27AF21BC0(L_2, (bool)1, NULL);
		// trailRenderer.emitting = true;
		TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* L_3 = __this->___trailRenderer_19;
		NullCheck(L_3);
		TrailRenderer_set_emitting_m16F5AF286796F5A3525EC91EAC427D61302A098B(L_3, (bool)1, NULL);
	}

IL_002b:
	{
		// if (lineRenderer)
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_4 = __this->___lineRenderer_29;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_4, NULL);
		if (!L_5)
		{
			goto IL_0050;
		}
	}
	{
		// lineRenderer.forceRenderingOff = true;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_6 = __this->___lineRenderer_29;
		NullCheck(L_6);
		Renderer_set_forceRenderingOff_mD3833D66401E67D2B73A7E1EEE4010E27AF21BC0(L_6, (bool)1, NULL);
		// lineRenderer.generateLightingData = true;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_7 = __this->___lineRenderer_29;
		NullCheck(L_7);
		LineRenderer_set_generateLightingData_m20217E0C2FBB8239E2A3661AB30AD33D0051129F(L_7, (bool)1, NULL);
	}

IL_0050:
	{
		// }
		return;
	}
}
// System.Void StylizedGrass.GrassBender::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrassBender_OnDisable_m0AF548AAD8A40A246C401643C0490C7806D052D0 (GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StylizedGrassRenderer.UnRegisterBender(this);
		il2cpp_codegen_runtime_class_init_inline(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var);
		StylizedGrassRenderer_UnRegisterBender_m3F4029D5079118C05EFDD81EC8084A6F21B01C2C(__this, NULL);
		// if (trailRenderer)
		TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* L_0 = __this->___trailRenderer_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// trailRenderer.emitting = false;
		TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* L_2 = __this->___trailRenderer_19;
		NullCheck(L_2);
		TrailRenderer_set_emitting_m16F5AF286796F5A3525EC91EAC427D61302A098B(L_2, (bool)0, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void StylizedGrass.GrassBender::SwitchLayer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrassBender_SwitchLayer_mF50704DFE42F97FEFC549E51B86C68EEDDE3A15E (GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* __this, int32_t ___layerNum0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (layerNum == this.sortingLayer) return;
		int32_t L_0 = ___layerNum0;
		int32_t L_1 = __this->___sortingLayer_6;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// if (layerNum == this.sortingLayer) return;
		return;
	}

IL_000a:
	{
		// StylizedGrassRenderer.UnRegisterBender(this);
		il2cpp_codegen_runtime_class_init_inline(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var);
		StylizedGrassRenderer_UnRegisterBender_m3F4029D5079118C05EFDD81EC8084A6F21B01C2C(__this, NULL);
		// this.sortingLayer = layerNum;
		int32_t L_2 = ___layerNum0;
		__this->___sortingLayer_6 = L_2;
		// StylizedGrassRenderer.RegisterBender(this);
		StylizedGrassRenderer_RegisterBender_m5AE3C2EC6859C9EC7C07AE78BFE1A63E8B389D66(__this, NULL);
		// }
		return;
	}
}
// System.Void StylizedGrass.GrassBender::SwitchBenderType(StylizedGrass.GrassBenderBase/BenderType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrassBender_SwitchBenderType_m1390E87092B67C398C9F488FC7541B92391FE25E (GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* __this, int32_t ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_mBD9F283ADB0A9ACB7BD542CFA753D3C1CFF61C1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4_m54DB46FE3C050979EF32114330D91F9EF130CAEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// benderType = type;
		int32_t L_0 = ___type0;
		__this->___benderType_4 = L_0;
		// if (trailRenderer && type != GrassBenderBase.BenderType.Trail)
		TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* L_1 = __this->___trailRenderer_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_1, NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_3 = ___type0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_001f;
		}
	}
	{
		// trailRenderer = null;
		__this->___trailRenderer_19 = (TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___trailRenderer_19), (void*)(TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39*)NULL);
	}

IL_001f:
	{
		// if (meshRenderer && type != GrassBenderBase.BenderType.Mesh)
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_4 = __this->___meshRenderer_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_4, NULL);
		if (!L_5)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_6 = ___type0;
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		// meshFilter = null;
		__this->___meshFilter_16 = (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meshFilter_16), (void*)(MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5*)NULL);
		// meshRenderer = null;
		__this->___meshRenderer_18 = (MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meshRenderer_18), (void*)(MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE*)NULL);
	}

IL_003d:
	{
		// if (meshRenderer && type == GrassBenderBase.BenderType.Mesh)
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_7 = __this->___meshRenderer_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_7, NULL);
		if (!L_8)
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_9 = ___type0;
		if (L_9)
		{
			goto IL_0063;
		}
	}
	{
		// meshFilter = meshRenderer.gameObject.GetComponent<MeshFilter>();
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_10 = __this->___meshRenderer_18;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		NullCheck(L_11);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_12;
		L_12 = GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8(L_11, GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var);
		__this->___meshFilter_16 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meshFilter_16), (void*)L_12);
	}

IL_0063:
	{
		// if (particleSystem && type != GrassBenderBase.BenderType.ParticleSystem)
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_13 = __this->___particleSystem_25;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_13, NULL);
		if (!L_14)
		{
			goto IL_007b;
		}
	}
	{
		int32_t L_15 = ___type0;
		if ((((int32_t)L_15) == ((int32_t)2)))
		{
			goto IL_007b;
		}
	}
	{
		// particleSystem = null;
		__this->___particleSystem_25 = (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___particleSystem_25), (void*)(ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1*)NULL);
	}

IL_007b:
	{
		// if (particleSystem && type == GrassBenderBase.BenderType.ParticleSystem)
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_16 = __this->___particleSystem_25;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_16, NULL);
		if (!L_17)
		{
			goto IL_00b3;
		}
	}
	{
		int32_t L_18 = ___type0;
		if ((!(((uint32_t)L_18) == ((uint32_t)2))))
		{
			goto IL_00b3;
		}
	}
	{
		// particleRenderer = particleSystem.gameObject.GetComponent<ParticleSystemRenderer>();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_19 = __this->___particleSystem_25;
		NullCheck(L_19);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_19, NULL);
		NullCheck(L_20);
		ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* L_21;
		L_21 = GameObject_GetComponent_TisParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4_m54DB46FE3C050979EF32114330D91F9EF130CAEA(L_20, GameObject_GetComponent_TisParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4_m54DB46FE3C050979EF32114330D91F9EF130CAEA_RuntimeMethod_var);
		__this->___particleRenderer_26 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___particleRenderer_26), (void*)L_21);
		// psGrad = particleSystem.GetComponent<ParticleSystem.ColorOverLifetimeModule>();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_22 = __this->___particleSystem_25;
		NullCheck(L_22);
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_23;
		L_23 = Component_GetComponent_TisColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_mBD9F283ADB0A9ACB7BD542CFA753D3C1CFF61C1F(L_22, Component_GetComponent_TisColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_mBD9F283ADB0A9ACB7BD542CFA753D3C1CFF61C1F_RuntimeMethod_var);
		__this->___psGrad_28 = L_23;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___psGrad_28))->___m_ParticleSystem_0), (void*)NULL);
	}

IL_00b3:
	{
		// if (lineRenderer && type != GrassBenderBase.BenderType.Line)
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_24 = __this->___lineRenderer_29;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_24, NULL);
		if (!L_25)
		{
			goto IL_00cb;
		}
	}
	{
		int32_t L_26 = ___type0;
		if ((((int32_t)L_26) == ((int32_t)3)))
		{
			goto IL_00cb;
		}
	}
	{
		// lineRenderer = null;
		__this->___lineRenderer_29 = (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lineRenderer_29), (void*)(LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D*)NULL);
	}

IL_00cb:
	{
		// if (!lineRenderer && type == GrassBenderBase.BenderType.Line)
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_27 = __this->___lineRenderer_29;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_27, NULL);
		if (L_28)
		{
			goto IL_00f4;
		}
	}
	{
		int32_t L_29 = ___type0;
		if ((!(((uint32_t)L_29) == ((uint32_t)3))))
		{
			goto IL_00f4;
		}
	}
	{
		// lineRenderer = GetComponent<LineRenderer>();
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_30;
		L_30 = Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49(__this, Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var);
		__this->___lineRenderer_29 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lineRenderer_29), (void*)L_30);
		// lineRenderer.generateLightingData = true;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_31 = __this->___lineRenderer_29;
		NullCheck(L_31);
		LineRenderer_set_generateLightingData_m20217E0C2FBB8239E2A3661AB30AD33D0051129F(L_31, (bool)1, NULL);
	}

IL_00f4:
	{
		// }
		return;
	}
}
// System.Void StylizedGrass.GrassBender::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrassBender_Update_m94ED9EA721F8897A909C6E38FC118418ACBF94F1 (GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (benderType == GrassBenderBase.BenderType.Trail && trailRenderer && forceUpdating)
		int32_t L_0 = __this->___benderType_4;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0074;
		}
	}
	{
		TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* L_1 = __this->___trailRenderer_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_1, NULL);
		if (!L_2)
		{
			goto IL_0074;
		}
	}
	{
		bool L_3 = __this->___forceUpdating_20;
		if (!L_3)
		{
			goto IL_0074;
		}
	}
	{
		// targetPosition = trailRenderer.transform.position;
		TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* L_4 = __this->___trailRenderer_19;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		__this->___targetPosition_30 = L_6;
		// trailRenderer.transform.position = Vector3.Lerp(targetPosition, targetPosition + (Random.insideUnitSphere * 0.0001f), Time.deltaTime * 1000f);
		TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* L_7 = __this->___trailRenderer_19;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = __this->___targetPosition_30;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->___targetPosition_30;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Random_get_insideUnitSphere_mDC65508F8B735E93612D4A1D482792B5DA4DC26C(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_11, (9.99999975E-05f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_10, L_12, NULL);
		float L_14;
		L_14 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_9, L_13, ((float)il2cpp_codegen_multiply(L_14, (1000.0f))), NULL);
		NullCheck(L_8);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_8, L_15, NULL);
	}

IL_0074:
	{
		// }
		return;
	}
}
// System.Void StylizedGrass.GrassBender::OnDrawGizmosSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrassBender_OnDrawGizmosSelected_m869196DA0A06AFF4156EA68333A40F98AAF4E392 (GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (meshFilter)
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_0 = __this->___meshFilter_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_00b4;
		}
	}
	{
		// if (benderType == GrassBenderBase.BenderType.Mesh && meshFilter.sharedMesh)
		int32_t L_2 = __this->___benderType_4;
		if (L_2)
		{
			goto IL_00b4;
		}
	}
	{
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_3 = __this->___meshFilter_16;
		NullCheck(L_3);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_4;
		L_4 = MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_4, NULL);
		if (!L_5)
		{
			goto IL_00b4;
		}
	}
	{
		// Gizmos.color = new Color(0f, 0f, 0f, 0.2f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		memset((&L_6), 0, sizeof(L_6));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_6), (0.0f), (0.0f), (0.0f), (0.200000003f), /*hidden argument*/NULL);
		Gizmos_set_color_mFD4A7935FF025F5922374A8DD797BA0558BF1AD2(L_6, NULL);
		// Gizmos.DrawWireMesh(meshFilter.sharedMesh, 0, meshFilter.transform.position + new Vector3(0f, heightOffset, 0f), meshFilter.transform.rotation, meshFilter.transform.lossyScale * scaleMultiplier);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_7 = __this->___meshFilter_16;
		NullCheck(L_7);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_8;
		L_8 = MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C(L_7, NULL);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_9 = __this->___meshFilter_16;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		float L_12 = __this->___heightOffset_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_13), (0.0f), L_12, (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_11, L_13, NULL);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_15 = __this->___meshFilter_16;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_15, NULL);
		NullCheck(L_16);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_16, NULL);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_18 = __this->___meshFilter_16;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_18, NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_19, NULL);
		float L_21 = __this->___scaleMultiplier_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_20, L_21, NULL);
		Gizmos_DrawWireMesh_m7BCC7C0F3490E46C0D9CCC2E040DC6039C29E3B3(L_8, 0, L_14, L_17, L_22, NULL);
	}

IL_00b4:
	{
		// }
		return;
	}
}
// System.Void StylizedGrass.GrassBender::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrassBender__ctor_mEE4D3AEAE8E7A24F103DDA8612F0994DA1FEBCD5 (GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* __this, const RuntimeMethod* method) 
{
	{
		// public float strength = 1f;
		__this->___strength_10 = (1.0f);
		// public float pushStrength = 1f;
		__this->___pushStrength_11 = (1.0f);
		// public float scaleMultiplier = 1f;
		__this->___scaleMultiplier_12 = (1.0f);
		// public AnimationCurve strengthOverLifetime = AnimationCurve.Linear(0f, 1f, 1f, 0f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0;
		L_0 = AnimationCurve_Linear_m9C6C4ECB6BF4F0515EBD4EFDA97CF623B92B1362((0.0f), (1.0f), (1.0f), (0.0f), NULL);
		__this->___strengthOverLifetime_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___strengthOverLifetime_13), (void*)L_0);
		// public float trailAccuracy = 0.33f;
		__this->___trailAccuracy_21 = (0.330000013f);
		// public float trailLifetime = 2f;
		__this->___trailLifetime_22 = (2.0f);
		// public float trailRadius = 3;
		__this->___trailRadius_23 = (3.0f);
		// public AnimationCurve widthOverLifetime = AnimationCurve.Constant(0f, 1f, 1f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_1;
		L_1 = AnimationCurve_Constant_m93803F6C10DA605BE95DC7D13A7F2F8E2FE1DE41((0.0f), (1.0f), (1.0f), NULL);
		__this->___widthOverLifetime_24 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___widthOverLifetime_24), (void*)L_1);
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
// UnityEngine.Material StylizedGrass.GrassBenderBase::get_TrailMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GrassBenderBase_get_TrailMaterial_m7B63234FED83539B02EAED656F2439A45162D08B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1788F3FA76626915BE1F3840373A5424D640257C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_TrailMaterial)
		il2cpp_codegen_runtime_class_init_inline(GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_il2cpp_TypeInfo_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ((GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_StaticFields*)il2cpp_codegen_static_fields_for(GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_il2cpp_TypeInfo_var))->____TrailMaterial_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (L_1)
		{
			goto IL_002b;
		}
	}
	{
		// _TrailMaterial = new Material(Shader.Find(TRAIL_SHADER_NAME));
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2;
		L_2 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(_stringLiteral1788F3FA76626915BE1F3840373A5424D640257C, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_3, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_il2cpp_TypeInfo_var);
		((GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_StaticFields*)il2cpp_codegen_static_fields_for(GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_il2cpp_TypeInfo_var))->____TrailMaterial_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_StaticFields*)il2cpp_codegen_static_fields_for(GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_il2cpp_TypeInfo_var))->____TrailMaterial_2), (void*)L_3);
		// _TrailMaterial.enableInstancing = true;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = ((GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_StaticFields*)il2cpp_codegen_static_fields_for(GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_il2cpp_TypeInfo_var))->____TrailMaterial_2;
		NullCheck(L_4);
		Material_set_enableInstancing_m84BA72A28BCFE94B50535BDE410A539A7CD7AF80(L_4, (bool)1, NULL);
	}

IL_002b:
	{
		// return _TrailMaterial;
		il2cpp_codegen_runtime_class_init_inline(GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_il2cpp_TypeInfo_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = ((GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_StaticFields*)il2cpp_codegen_static_fields_for(GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_il2cpp_TypeInfo_var))->____TrailMaterial_2;
		return L_5;
	}
}
// UnityEngine.Material StylizedGrass.GrassBenderBase::get_MeshMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GrassBenderBase_get_MeshMaterial_m0D3C635831A7C5266855E7FC7FD0EFFAEBD023FD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5979F63DFA1F57D0F4CD7AA0BCFC0ED5BF86FBF4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(!_MeshMaterial)
		il2cpp_codegen_runtime_class_init_inline(GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_il2cpp_TypeInfo_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ((GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_StaticFields*)il2cpp_codegen_static_fields_for(GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_il2cpp_TypeInfo_var))->____MeshMaterial_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (L_1)
		{
			goto IL_002b;
		}
	}
	{
		// _MeshMaterial = new Material(Shader.Find(MESH_SHADER_NAME));
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2;
		L_2 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(_stringLiteral5979F63DFA1F57D0F4CD7AA0BCFC0ED5BF86FBF4, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_3, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_il2cpp_TypeInfo_var);
		((GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_StaticFields*)il2cpp_codegen_static_fields_for(GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_il2cpp_TypeInfo_var))->____MeshMaterial_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_StaticFields*)il2cpp_codegen_static_fields_for(GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_il2cpp_TypeInfo_var))->____MeshMaterial_3), (void*)L_3);
		// _MeshMaterial.enableInstancing = true;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = ((GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_StaticFields*)il2cpp_codegen_static_fields_for(GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_il2cpp_TypeInfo_var))->____MeshMaterial_3;
		NullCheck(L_4);
		Material_set_enableInstancing_m84BA72A28BCFE94B50535BDE410A539A7CD7AF80(L_4, (bool)1, NULL);
	}

IL_002b:
	{
		// return _MeshMaterial;
		il2cpp_codegen_runtime_class_init_inline(GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_il2cpp_TypeInfo_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = ((GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_StaticFields*)il2cpp_codegen_static_fields_for(GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_il2cpp_TypeInfo_var))->____MeshMaterial_3;
		return L_5;
	}
}
// System.Void StylizedGrass.GrassBenderBase::ValidateParticleSystem(StylizedGrass.GrassBender)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrassBenderBase_ValidateParticleSystem_m2BFF0E1A0495AC5A4641DBCD5E2514EF864FDE30 (GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* ___b0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4_mDB29DD32DF46B9659262256BDBD5B4F1BB805023_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!b.particleSystem) return;
		GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_0 = ___b0;
		NullCheck(L_0);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_1 = L_0->___particleSystem_25;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_1, NULL);
		if (L_2)
		{
			goto IL_000e;
		}
	}
	{
		// if (!b.particleSystem) return;
		return;
	}

IL_000e:
	{
		// if (!b.particleRenderer) b.particleRenderer = b.particleSystem.GetComponent<ParticleSystemRenderer>();
		GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_3 = ___b0;
		NullCheck(L_3);
		ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* L_4 = L_3->___particleRenderer_26;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_4, NULL);
		if (L_5)
		{
			goto IL_002c;
		}
	}
	{
		// if (!b.particleRenderer) b.particleRenderer = b.particleSystem.GetComponent<ParticleSystemRenderer>();
		GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_6 = ___b0;
		GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_7 = ___b0;
		NullCheck(L_7);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_8 = L_7->___particleSystem_25;
		NullCheck(L_8);
		ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* L_9;
		L_9 = Component_GetComponent_TisParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4_mDB29DD32DF46B9659262256BDBD5B4F1BB805023(L_8, Component_GetComponent_TisParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4_mDB29DD32DF46B9659262256BDBD5B4F1BB805023_RuntimeMethod_var);
		NullCheck(L_6);
		L_6->___particleRenderer_26 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___particleRenderer_26), (void*)L_9);
	}

IL_002c:
	{
		// b.psGrad = b.particleSystem.colorOverLifetime;
		GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_10 = ___b0;
		GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_11 = ___b0;
		NullCheck(L_11);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_12 = L_11->___particleSystem_25;
		NullCheck(L_12);
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_13;
		L_13 = ParticleSystem_get_colorOverLifetime_mD8C72661EFE9BB063126752E744544EE2FF5814C(L_12, NULL);
		NullCheck(L_10);
		L_10->___psGrad_28 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_10->___psGrad_28))->___m_ParticleSystem_0), (void*)NULL);
		// b.hasParticleTrails = b.particleSystem.trails.enabled;
		GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_14 = ___b0;
		GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_15 = ___b0;
		NullCheck(L_15);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_16 = L_15->___particleSystem_25;
		NullCheck(L_16);
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_17;
		L_17 = ParticleSystem_get_trails_mDDDD23F6C3540ECD10E42BB0A4F9ECBADC294C66(L_16, NULL);
		V_0 = L_17;
		bool L_18;
		L_18 = TrailModule_get_enabled_m78262C91CD53A91AFC1472EA65B64EA0D064EE0C((&V_0), NULL);
		NullCheck(L_14);
		L_14->___hasParticleTrails_27 = L_18;
		// }
		return;
	}
}
// UnityEngine.Gradient StylizedGrass.GrassBenderBase::GetGradient(UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* GrassBenderBase_GetGradient_mEAA36EC17914C94520C487C13C7D0DD44A67E940 (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___curve0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* G_B5_0 = NULL;
	GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* G_B4_0 = NULL;
	float G_B6_0 = 0.0f;
	GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* G_B6_1 = NULL;
	float G_B9_0 = 0.0f;
	{
		// if (curve == null) curve = AnimationCurve.Linear(0f, 1f, 1f, 0f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = ___curve0;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		// if (curve == null) curve = AnimationCurve.Linear(0f, 1f, 1f, 0f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_1;
		L_1 = AnimationCurve_Linear_m9C6C4ECB6BF4F0515EBD4EFDA97CF623B92B1362((0.0f), (1.0f), (1.0f), (0.0f), NULL);
		___curve0 = L_1;
	}

IL_001e:
	{
		// for (int i = 0; i < GRADIENT_ACCURACY; i++)
		V_0 = 0;
		goto IL_0073;
	}

IL_0022:
	{
		// float s = (float)i / (float)GRADIENT_ACCURACY;
		int32_t L_2 = V_0;
		V_1 = ((float)(((float)L_2)/(8.0f)));
		// colorKeys[i].time = i == 1 ? 0.05f : s;
		il2cpp_codegen_runtime_class_init_inline(GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_il2cpp_TypeInfo_var);
		GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* L_3 = ((GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_StaticFields*)il2cpp_codegen_static_fields_for(GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_il2cpp_TypeInfo_var))->___colorKeys_5;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = V_0;
		G_B4_0 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)));
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			G_B5_0 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)));
			goto IL_003d;
		}
	}
	{
		float L_6 = V_1;
		G_B6_0 = L_6;
		G_B6_1 = G_B4_0;
		goto IL_0042;
	}

IL_003d:
	{
		G_B6_0 = (0.0500000007f);
		G_B6_1 = G_B5_0;
	}

IL_0042:
	{
		G_B6_1->___time_1 = G_B6_0;
		// var value = i == 0 ? 0 : curve.Evaluate(s);
		int32_t L_7 = V_0;
		if (!L_7)
		{
			goto IL_0053;
		}
	}
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_8 = ___curve0;
		float L_9 = V_1;
		NullCheck(L_8);
		float L_10;
		L_10 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_8, L_9, NULL);
		G_B9_0 = L_10;
		goto IL_0058;
	}

IL_0053:
	{
		G_B9_0 = (0.0f);
	}

IL_0058:
	{
		V_2 = G_B9_0;
		// colorKeys[i].color.r = value;
		il2cpp_codegen_runtime_class_init_inline(GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_il2cpp_TypeInfo_var);
		GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* L_11 = ((GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_StaticFields*)il2cpp_codegen_static_fields_for(GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_il2cpp_TypeInfo_var))->___colorKeys_5;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_13 = (&((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->___color_0);
		float L_14 = V_2;
		L_13->___r_0 = L_14;
		// for (int i = 0; i < GRADIENT_ACCURACY; i++)
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0073:
	{
		// for (int i = 0; i < GRADIENT_ACCURACY; i++)
		int32_t L_16 = V_0;
		if ((((int32_t)L_16) < ((int32_t)8)))
		{
			goto IL_0022;
		}
	}
	{
		// alphaKeys[0].time = 0;
		il2cpp_codegen_runtime_class_init_inline(GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_il2cpp_TypeInfo_var);
		GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E* L_17 = ((GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_StaticFields*)il2cpp_codegen_static_fields_for(GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_il2cpp_TypeInfo_var))->___alphaKeys_6;
		NullCheck(L_17);
		((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___time_1 = (0.0f);
		// alphaKeys[0].alpha = 1f;
		GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E* L_18 = ((GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_StaticFields*)il2cpp_codegen_static_fields_for(GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_il2cpp_TypeInfo_var))->___alphaKeys_6;
		NullCheck(L_18);
		((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___alpha_0 = (1.0f);
		// alphaKeys[1].time = 1f;
		GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E* L_19 = ((GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_StaticFields*)il2cpp_codegen_static_fields_for(GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_il2cpp_TypeInfo_var))->___alphaKeys_6;
		NullCheck(L_19);
		((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___time_1 = (1.0f);
		// alphaKeys[1].alpha = 1f;
		GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E* L_20 = ((GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_StaticFields*)il2cpp_codegen_static_fields_for(GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_il2cpp_TypeInfo_var))->___alphaKeys_6;
		NullCheck(L_20);
		((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___alpha_0 = (1.0f);
		// m_Gradient.SetKeys(colorKeys, alphaKeys);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_21 = ((GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_StaticFields*)il2cpp_codegen_static_fields_for(GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_il2cpp_TypeInfo_var))->___m_Gradient_7;
		GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* L_22 = ((GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_StaticFields*)il2cpp_codegen_static_fields_for(GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_il2cpp_TypeInfo_var))->___colorKeys_5;
		GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E* L_23 = ((GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_StaticFields*)il2cpp_codegen_static_fields_for(GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_il2cpp_TypeInfo_var))->___alphaKeys_6;
		NullCheck(L_21);
		Gradient_SetKeys_mE03CE269C19C4F08F1ED57F7151082304DDBB5D8(L_21, L_22, L_23, NULL);
		// return m_Gradient;
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_24 = ((GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_StaticFields*)il2cpp_codegen_static_fields_for(GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_il2cpp_TypeInfo_var))->___m_Gradient_7;
		return L_24;
	}
}
// System.Void StylizedGrass.GrassBenderBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrassBenderBase__ctor_m164469B3874600D3B6116892BD766F137CD4E279 (GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void StylizedGrass.GrassBenderBase::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrassBenderBase__cctor_mC5E424B354BFCF7470557A9436DED844FFBB1483 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static GradientColorKey[] colorKeys = new GradientColorKey[GRADIENT_ACCURACY];
		GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* L_0 = (GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18*)(GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18*)SZArrayNew(GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18_il2cpp_TypeInfo_var, (uint32_t)8);
		((GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_StaticFields*)il2cpp_codegen_static_fields_for(GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_il2cpp_TypeInfo_var))->___colorKeys_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_StaticFields*)il2cpp_codegen_static_fields_for(GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_il2cpp_TypeInfo_var))->___colorKeys_5), (void*)L_0);
		// private static GradientAlphaKey[] alphaKeys = new GradientAlphaKey[2];
		GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E* L_1 = (GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E*)(GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E*)SZArrayNew(GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E_il2cpp_TypeInfo_var, (uint32_t)2);
		((GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_StaticFields*)il2cpp_codegen_static_fields_for(GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_il2cpp_TypeInfo_var))->___alphaKeys_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_StaticFields*)il2cpp_codegen_static_fields_for(GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_il2cpp_TypeInfo_var))->___alphaKeys_6), (void*)L_1);
		// private static Gradient m_Gradient = new Gradient();
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_2 = (Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*)il2cpp_codegen_object_new(Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Gradient__ctor_m5EC470BB063D4831774C7CDA5D471EBEB5CE7B54(L_2, NULL);
		((GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_StaticFields*)il2cpp_codegen_static_fields_for(GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_il2cpp_TypeInfo_var))->___m_Gradient_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_StaticFields*)il2cpp_codegen_static_fields_for(GrassBenderBase_tCB10882FC7F67FB8CD3A7409833AA167EB3D8675_il2cpp_TypeInfo_var))->___m_Gradient_7), (void*)L_2);
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
// System.Void StylizedGrass.GrassColorMap::SetActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrassColorMap_SetActive_m949DC85E2CE8FC8C757DCA8036EB9C3FB4941F21 (GrassColorMap_tFF56A23499EB504A6EF9567C018A41C0B689D1E2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrassColorMap_tFF56A23499EB504A6EF9567C018A41C0B689D1E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B0FDC1EF9BE9A783FF473D07EBA1F5341BB4348);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D30FE729EAE606742ABC5D6CD5D27E362131E31);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA83783C37264A72A89CEF0E35BC5FEEB5D8AFF7D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B6_0 = NULL;
	String_t* G_B5_0 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	{
		// if (!texture || (overrideTexture && !customTex))
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = __this->___texture_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		bool L_2 = __this->___overrideTexture_9;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_3 = __this->___customTex_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_3, NULL);
		if (L_4)
		{
			goto IL_002e;
		}
	}

IL_0022:
	{
		// Debug.LogWarning("Tried to activate grass color map with null texture", this);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m5C8299150E64600CBF5C92706AD610C21D0C0DC5(_stringLiteralA83783C37264A72A89CEF0E35BC5FEEB5D8AFF7D, __this, NULL);
		// return;
		return;
	}

IL_002e:
	{
		// Shader.SetGlobalTexture("_ColorMap", overrideTexture ? customTex : texture);
		bool L_5 = __this->___overrideTexture_9;
		G_B5_0 = _stringLiteral7B0FDC1EF9BE9A783FF473D07EBA1F5341BB4348;
		if (L_5)
		{
			G_B6_0 = _stringLiteral7B0FDC1EF9BE9A783FF473D07EBA1F5341BB4348;
			goto IL_0043;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_6 = __this->___texture_7;
		G_B7_0 = L_6;
		G_B7_1 = G_B5_0;
		goto IL_0049;
	}

IL_0043:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = __this->___customTex_8;
		G_B7_0 = L_7;
		G_B7_1 = G_B6_0;
	}

IL_0049:
	{
		Shader_SetGlobalTexture_mABB6E994E67D083BEBE142B4CC8FA77137C2D021(G_B7_1, G_B7_0, NULL);
		// uv.w = 1f;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_8 = (&__this->___uv_6);
		L_8->___w_4 = (1.0f);
		// Shader.SetGlobalVector("_ColorMapUV", uv);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = __this->___uv_6;
		Shader_SetGlobalVector_m885C9E39C787CA6F54E002C12E3D4280C353E438(_stringLiteral8D30FE729EAE606742ABC5D6CD5D27E362131E31, L_9, NULL);
		// Active = this;
		((GrassColorMap_tFF56A23499EB504A6EF9567C018A41C0B689D1E2_StaticFields*)il2cpp_codegen_static_fields_for(GrassColorMap_tFF56A23499EB504A6EF9567C018A41C0B689D1E2_il2cpp_TypeInfo_var))->___Active_11 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((GrassColorMap_tFF56A23499EB504A6EF9567C018A41C0B689D1E2_StaticFields*)il2cpp_codegen_static_fields_for(GrassColorMap_tFF56A23499EB504A6EF9567C018A41C0B689D1E2_il2cpp_TypeInfo_var))->___Active_11), (void*)__this);
		// }
		return;
	}
}
// System.Void StylizedGrass.GrassColorMap::DisableGlobally()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrassColorMap_DisableGlobally_mC582256D8408C825A209896870ADEE1F5431D046 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrassColorMap_tFF56A23499EB504A6EF9567C018A41C0B689D1E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B0FDC1EF9BE9A783FF473D07EBA1F5341BB4348);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D30FE729EAE606742ABC5D6CD5D27E362131E31);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Shader.SetGlobalTexture("_ColorMap", null);
		Shader_SetGlobalTexture_mABB6E994E67D083BEBE142B4CC8FA77137C2D021(_stringLiteral7B0FDC1EF9BE9A783FF473D07EBA1F5341BB4348, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL, NULL);
		// Shader.SetGlobalVector("_ColorMapUV", Vector4.zero);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0;
		L_0 = Vector4_get_zero_m51B18794FAF141EBD06CA9907E6F7DF9D60F3515_inline(NULL);
		Shader_SetGlobalVector_m885C9E39C787CA6F54E002C12E3D4280C353E438(_stringLiteral8D30FE729EAE606742ABC5D6CD5D27E362131E31, L_0, NULL);
		// Active = null;
		((GrassColorMap_tFF56A23499EB504A6EF9567C018A41C0B689D1E2_StaticFields*)il2cpp_codegen_static_fields_for(GrassColorMap_tFF56A23499EB504A6EF9567C018A41C0B689D1E2_il2cpp_TypeInfo_var))->___Active_11 = (GrassColorMap_tFF56A23499EB504A6EF9567C018A41C0B689D1E2*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((GrassColorMap_tFF56A23499EB504A6EF9567C018A41C0B689D1E2_StaticFields*)il2cpp_codegen_static_fields_for(GrassColorMap_tFF56A23499EB504A6EF9567C018A41C0B689D1E2_il2cpp_TypeInfo_var))->___Active_11), (void*)(GrassColorMap_tFF56A23499EB504A6EF9567C018A41C0B689D1E2*)NULL);
		// }
		return;
	}
}
// System.Void StylizedGrass.GrassColorMap::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrassColorMap__ctor_m1757C2120A0D93F72D6764597092A4B38B96721E (GrassColorMap_tFF56A23499EB504A6EF9567C018A41C0B689D1E2* __this, const RuntimeMethod* method) 
{
	{
		// public int resolution = 1024;
		__this->___resolution_4 = ((int32_t)1024);
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void StylizedGrass.GrassColorMapRenderer::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrassColorMapRenderer_OnEnable_mBCDB825510EEE46CB266E23C1FBECB715B2D48FC (GrassColorMapRenderer_t888182E165920AC4818E5B27C9A9DC7458D446FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrassColorMapRenderer_t888182E165920AC4818E5B27C9A9DC7458D446FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance = this;
		((GrassColorMapRenderer_t888182E165920AC4818E5B27C9A9DC7458D446FC_StaticFields*)il2cpp_codegen_static_fields_for(GrassColorMapRenderer_t888182E165920AC4818E5B27C9A9DC7458D446FC_il2cpp_TypeInfo_var))->___Instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((GrassColorMapRenderer_t888182E165920AC4818E5B27C9A9DC7458D446FC_StaticFields*)il2cpp_codegen_static_fields_for(GrassColorMapRenderer_t888182E165920AC4818E5B27C9A9DC7458D446FC_il2cpp_TypeInfo_var))->___Instance_4), (void*)__this);
		// AssignColorMap();
		GrassColorMapRenderer_AssignColorMap_m7A11AF2CF34281B35BD2F8113B22DFD213386677(__this, NULL);
		// }
		return;
	}
}
// System.Void StylizedGrass.GrassColorMapRenderer::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrassColorMapRenderer_OnDisable_mB6A687D139A6433BD073360231DC258A9CB4DA12 (GrassColorMapRenderer_t888182E165920AC4818E5B27C9A9DC7458D446FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrassColorMapRenderer_t888182E165920AC4818E5B27C9A9DC7458D446FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance = null;
		((GrassColorMapRenderer_t888182E165920AC4818E5B27C9A9DC7458D446FC_StaticFields*)il2cpp_codegen_static_fields_for(GrassColorMapRenderer_t888182E165920AC4818E5B27C9A9DC7458D446FC_il2cpp_TypeInfo_var))->___Instance_4 = (GrassColorMapRenderer_t888182E165920AC4818E5B27C9A9DC7458D446FC*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((GrassColorMapRenderer_t888182E165920AC4818E5B27C9A9DC7458D446FC_StaticFields*)il2cpp_codegen_static_fields_for(GrassColorMapRenderer_t888182E165920AC4818E5B27C9A9DC7458D446FC_il2cpp_TypeInfo_var))->___Instance_4), (void*)(GrassColorMapRenderer_t888182E165920AC4818E5B27C9A9DC7458D446FC*)NULL);
		// GrassColorMap.DisableGlobally();
		GrassColorMap_DisableGlobally_mC582256D8408C825A209896870ADEE1F5431D046(NULL);
		// }
		return;
	}
}
// System.Void StylizedGrass.GrassColorMapRenderer::OnDrawGizmosSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrassColorMapRenderer_OnDrawGizmosSelected_m5566B32A23059F2FBA3536674888FF1517723829 (GrassColorMapRenderer_t888182E165920AC4818E5B27C9A9DC7458D446FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!colorMap || !showBounds) return;
		GrassColorMap_tFF56A23499EB504A6EF9567C018A41C0B689D1E2* L_0 = __this->___colorMap_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		bool L_2 = __this->___showBounds_14;
		if (L_2)
		{
			goto IL_0016;
		}
	}

IL_0015:
	{
		// if (!colorMap || !showBounds) return;
		return;
	}

IL_0016:
	{
		// Color32 color = new Color(0f, 0.66f, 1f, 0.25f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		memset((&L_3), 0, sizeof(L_3));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_3), (0.0f), (0.660000026f), (1.0f), (0.25f), /*hidden argument*/NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_4;
		L_4 = Color32_op_Implicit_m7EFA0B83AD1AE15567E9BC2FA2B8E66D3BFE1395_inline(L_3, NULL);
		// Gizmos.color = color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline(L_4, NULL);
		Gizmos_set_color_mFD4A7935FF025F5922374A8DD797BA0558BF1AD2(L_5, NULL);
		// Gizmos.DrawCube(colorMap.bounds.center, colorMap.bounds.size);
		GrassColorMap_tFF56A23499EB504A6EF9567C018A41C0B689D1E2* L_6 = __this->___colorMap_6;
		NullCheck(L_6);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_7 = (&L_6->___bounds_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3(L_7, NULL);
		GrassColorMap_tFF56A23499EB504A6EF9567C018A41C0B689D1E2* L_9 = __this->___colorMap_6;
		NullCheck(L_9);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_10 = (&L_9->___bounds_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4(L_10, NULL);
		Gizmos_DrawCube_mE7D2162786517A14E8A740C7887CD08A3105B192(L_8, L_11, NULL);
		// color = new Color(0f, 0.66f, 1f, 1f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), (0.0f), (0.660000026f), (1.0f), (1.0f), /*hidden argument*/NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_13;
		L_13 = Color32_op_Implicit_m7EFA0B83AD1AE15567E9BC2FA2B8E66D3BFE1395_inline(L_12, NULL);
		// Gizmos.color = color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14;
		L_14 = Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline(L_13, NULL);
		Gizmos_set_color_mFD4A7935FF025F5922374A8DD797BA0558BF1AD2(L_14, NULL);
		// Gizmos.DrawWireCube(colorMap.bounds.center, colorMap.bounds.size);
		GrassColorMap_tFF56A23499EB504A6EF9567C018A41C0B689D1E2* L_15 = __this->___colorMap_6;
		NullCheck(L_15);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_16 = (&L_15->___bounds_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3(L_16, NULL);
		GrassColorMap_tFF56A23499EB504A6EF9567C018A41C0B689D1E2* L_18 = __this->___colorMap_6;
		NullCheck(L_18);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_19 = (&L_18->___bounds_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4(L_19, NULL);
		Gizmos_DrawWireCube_m31971565E5002365FE94256FFE1DC5B070FDBBA7(L_17, L_20, NULL);
		// }
		return;
	}
}
// System.Void StylizedGrass.GrassColorMapRenderer::AssignColorMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrassColorMapRenderer_AssignColorMap_m7A11AF2CF34281B35BD2F8113B22DFD213386677 (GrassColorMapRenderer_t888182E165920AC4818E5B27C9A9DC7458D446FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!colorMap) return;
		GrassColorMap_tFF56A23499EB504A6EF9567C018A41C0B689D1E2* L_0 = __this->___colorMap_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// if (!colorMap) return;
		return;
	}

IL_000e:
	{
		// colorMap.SetActive();
		GrassColorMap_tFF56A23499EB504A6EF9567C018A41C0B689D1E2* L_2 = __this->___colorMap_6;
		NullCheck(L_2);
		GrassColorMap_SetActive_m949DC85E2CE8FC8C757DCA8036EB9C3FB4941F21(L_2, NULL);
		// }
		return;
	}
}
// System.Void StylizedGrass.GrassColorMapRenderer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrassColorMapRenderer__ctor_m5BE35E71927B0AF12BC8F216339B41E27A360A29 (GrassColorMapRenderer_t888182E165920AC4818E5B27C9A9DC7458D446FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m3D40447848D115F7F599B8FB0CD16BF7AF124800_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA28F6808989CF34898F6297C5FA6A643BA930F88_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<GameObject> terrainObjects = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___terrainObjects_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___terrainObjects_7), (void*)L_0);
		// public int resIdx = 4;
		__this->___resIdx_8 = 4;
		// public int resolution = 1024;
		__this->___resolution_9 = ((int32_t)1024);
		// public bool showBounds = true;
		__this->___showBounds_14 = (bool)1;
		// public List<LayerScaleSettings> layerScaleSettings = new List<LayerScaleSettings>();
		List_1_tA28F6808989CF34898F6297C5FA6A643BA930F88* L_1 = (List_1_tA28F6808989CF34898F6297C5FA6A643BA930F88*)il2cpp_codegen_object_new(List_1_tA28F6808989CF34898F6297C5FA6A643BA930F88_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m3D40447848D115F7F599B8FB0CD16BF7AF124800(L_1, List_1__ctor_m3D40447848D115F7F599B8FB0CD16BF7AF124800_RuntimeMethod_var);
		__this->___layerScaleSettings_15 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___layerScaleSettings_15), (void*)L_1);
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
// System.Void StylizedGrass.GrassColorMapRenderer/LayerScaleSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayerScaleSettings__ctor_m67E60FD28E97C19E01EB57293CF9BD13872C1C14 (LayerScaleSettings_tE44EE1A6013CD343A97C2DBF4EDC3C316F614372* __this, const RuntimeMethod* method) 
{
	{
		// public float strength = 1f;
		__this->___strength_1 = (1.0f);
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
// UnityEngine.Rendering.Universal.UniversalRendererData StylizedGrass.PipelineUtilities::GetRenderer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniversalRendererData_t57D400CEB38765F55EB74FDBD786B9A73C293CA6* PipelineUtilities_GetRenderer_mED758A8234BB1E318455CB063E568DC04DEEE5E0 (String_t* ___guid0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral522D81700B38299D297FAF66CD8CB9203497E711);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogError("StylizedGrass.PipelineUtilities.GetRenderer() cannot be called in a build, it requires AssetDatabase. References to renderers should be saved beforehand!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral522D81700B38299D297FAF66CD8CB9203497E711, NULL);
		// return null;
		return (UniversalRendererData_t57D400CEB38765F55EB74FDBD786B9A73C293CA6*)NULL;
	}
}
// System.Void StylizedGrass.PipelineUtilities::ValidatePipelineRenderers(UnityEngine.Rendering.Universal.ScriptableRendererData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PipelineUtilities_ValidatePipelineRenderers_m848B10CB3EE5D1349E41CF7E18B813B1ED07369A (ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* ___pass0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniversalRenderPipeline_t54B4737DC500C08628C5BE283D8C583C14DED98F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C81E6D93BAE5B4AD36FC3E0025D12CAA0F4AC20);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC341FAB7EB586F5B01F4EF063D8F0F695CF6B43E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		// if (pass == null)
		ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* L_0 = ___pass0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// Debug.LogError("Pass is null");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralC341FAB7EB586F5B01F4EF063D8F0F695CF6B43E, NULL);
		// return;
		return;
	}

IL_0014:
	{
		// BindingFlags bindings = System.Reflection.BindingFlags.NonPublic | System.Reflection.BindingFlags.Instance;
		V_0 = ((int32_t)36);
		// ScriptableRendererData[] m_rendererDataList = (ScriptableRendererData[])typeof(UniversalRenderPipelineAsset).GetField(renderDataListFieldName, bindings).GetValue(UniversalRenderPipeline.asset);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_2, NULL);
		int32_t L_4 = V_0;
		NullCheck(L_3);
		FieldInfo_t* L_5;
		L_5 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(89 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_3, _stringLiteral5C81E6D93BAE5B4AD36FC3E0025D12CAA0F4AC20, L_4);
		il2cpp_codegen_runtime_class_init_inline(UniversalRenderPipeline_t54B4737DC500C08628C5BE283D8C583C14DED98F_il2cpp_TypeInfo_var);
		UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232* L_6;
		L_6 = UniversalRenderPipeline_get_asset_mE97A926D00D90276CC9442857014B7180EF02819(NULL);
		NullCheck(L_5);
		RuntimeObject* L_7;
		L_7 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(26 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_5, L_6);
		V_1 = ((ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169*)Castclass((RuntimeObject*)L_7, ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169_il2cpp_TypeInfo_var));
		// bool isPresent = false;
		V_2 = (bool)0;
		// for (int i = 0; i < m_rendererDataList.Length; i++)
		V_3 = 0;
		goto IL_0053;
	}

IL_0042:
	{
		// if (m_rendererDataList[i] == pass) isPresent = true;
		ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169* L_8 = V_1;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* L_12 = ___pass0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_004f;
		}
	}
	{
		// if (m_rendererDataList[i] == pass) isPresent = true;
		V_2 = (bool)1;
	}

IL_004f:
	{
		// for (int i = 0; i < m_rendererDataList.Length; i++)
		int32_t L_14 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0053:
	{
		// for (int i = 0; i < m_rendererDataList.Length; i++)
		int32_t L_15 = V_3;
		ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169* L_16 = V_1;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_0042;
		}
	}
	{
		// if (!isPresent)
		bool L_17 = V_2;
		if (L_17)
		{
			goto IL_0062;
		}
	}
	{
		// AddRendererToPipeline(pass);
		ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* L_18 = ___pass0;
		PipelineUtilities_AddRendererToPipeline_mE8337A9A859B46362D04C04D5025CF078833049F(L_18, NULL);
	}

IL_0062:
	{
		// }
		return;
	}
}
// System.Void StylizedGrass.PipelineUtilities::AddRendererToPipeline(UnityEngine.Rendering.Universal.ScriptableRendererData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PipelineUtilities_AddRendererToPipeline_mE8337A9A859B46362D04C04D5025CF078833049F (ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* ___pass0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD564DD588CF150AFDB80F4773D248194256B6A34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mA20937394A0961A947EFE502EBD77AD6245B7D9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m34C8555D6DCC2D0287E23BFB31223CF1D0734217_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniversalRenderPipeline_t54B4737DC500C08628C5BE283D8C583C14DED98F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C81E6D93BAE5B4AD36FC3E0025D12CAA0F4AC20);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169* V_1 = NULL;
	List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// if (pass == null) return;
		ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* L_0 = ___pass0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// if (pass == null) return;
		return;
	}

IL_000a:
	{
		// BindingFlags bindings = System.Reflection.BindingFlags.NonPublic | System.Reflection.BindingFlags.Instance;
		V_0 = ((int32_t)36);
		// ScriptableRendererData[] m_rendererDataList = (ScriptableRendererData[])typeof(UniversalRenderPipelineAsset).GetField(renderDataListFieldName, bindings).GetValue(UniversalRenderPipeline.asset);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_2, NULL);
		int32_t L_4 = V_0;
		NullCheck(L_3);
		FieldInfo_t* L_5;
		L_5 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(89 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_3, _stringLiteral5C81E6D93BAE5B4AD36FC3E0025D12CAA0F4AC20, L_4);
		il2cpp_codegen_runtime_class_init_inline(UniversalRenderPipeline_t54B4737DC500C08628C5BE283D8C583C14DED98F_il2cpp_TypeInfo_var);
		UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232* L_6;
		L_6 = UniversalRenderPipeline_get_asset_mE97A926D00D90276CC9442857014B7180EF02819(NULL);
		NullCheck(L_5);
		RuntimeObject* L_7;
		L_7 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(26 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_5, L_6);
		V_1 = ((ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169*)Castclass((RuntimeObject*)L_7, ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169_il2cpp_TypeInfo_var));
		// List<ScriptableRendererData> rendererDataList = new List<ScriptableRendererData>();
		List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424* L_8 = (List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424*)il2cpp_codegen_object_new(List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		List_1__ctor_m34C8555D6DCC2D0287E23BFB31223CF1D0734217(L_8, List_1__ctor_m34C8555D6DCC2D0287E23BFB31223CF1D0734217_RuntimeMethod_var);
		V_2 = L_8;
		// for (int i = 0; i < m_rendererDataList.Length; i++)
		V_3 = 0;
		goto IL_0049;
	}

IL_003c:
	{
		// rendererDataList.Add(m_rendererDataList[i]);
		List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424* L_9 = V_2;
		ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169* L_10 = V_1;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_9);
		List_1_Add_mD564DD588CF150AFDB80F4773D248194256B6A34_inline(L_9, L_13, List_1_Add_mD564DD588CF150AFDB80F4773D248194256B6A34_RuntimeMethod_var);
		// for (int i = 0; i < m_rendererDataList.Length; i++)
		int32_t L_14 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0049:
	{
		// for (int i = 0; i < m_rendererDataList.Length; i++)
		int32_t L_15 = V_3;
		ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169* L_16 = V_1;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_003c;
		}
	}
	{
		// rendererDataList.Add(pass);
		List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424* L_17 = V_2;
		ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* L_18 = ___pass0;
		NullCheck(L_17);
		List_1_Add_mD564DD588CF150AFDB80F4773D248194256B6A34_inline(L_17, L_18, List_1_Add_mD564DD588CF150AFDB80F4773D248194256B6A34_RuntimeMethod_var);
		// typeof(UniversalRenderPipelineAsset).GetField(renderDataListFieldName, bindings).SetValue(UniversalRenderPipeline.asset, rendererDataList.ToArray());
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_19, NULL);
		int32_t L_21 = V_0;
		NullCheck(L_20);
		FieldInfo_t* L_22;
		L_22 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(89 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_20, _stringLiteral5C81E6D93BAE5B4AD36FC3E0025D12CAA0F4AC20, L_21);
		il2cpp_codegen_runtime_class_init_inline(UniversalRenderPipeline_t54B4737DC500C08628C5BE283D8C583C14DED98F_il2cpp_TypeInfo_var);
		UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232* L_23;
		L_23 = UniversalRenderPipeline_get_asset_mE97A926D00D90276CC9442857014B7180EF02819(NULL);
		List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424* L_24 = V_2;
		NullCheck(L_24);
		ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169* L_25;
		L_25 = List_1_ToArray_mA20937394A0961A947EFE502EBD77AD6245B7D9C(L_24, List_1_ToArray_mA20937394A0961A947EFE502EBD77AD6245B7D9C_RuntimeMethod_var);
		NullCheck(L_22);
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_22, L_23, (RuntimeObject*)L_25, NULL);
		// }
		return;
	}
}
// System.Void StylizedGrass.PipelineUtilities::RemoveRendererFromPipeline(UnityEngine.Rendering.Universal.ScriptableRendererData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PipelineUtilities_RemoveRendererFromPipeline_mCD8A910BDAC7617A1C4127F85DC6304D09D88DB3 (ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* ___pass0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m7FF0F9331146763E7C1C71B6F92EEF57A910B9D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m9D07AEEC3BD3364325EA28BEBF09C4D5BFB2ED18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mA20937394A0961A947EFE502EBD77AD6245B7D9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDD19270367F605476E9B7A7A9872D28C89FFF6D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniversalRenderPipeline_t54B4737DC500C08628C5BE283D8C583C14DED98F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C81E6D93BAE5B4AD36FC3E0025D12CAA0F4AC20);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424* V_1 = NULL;
	{
		// if (pass == null) return;
		ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* L_0 = ___pass0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// if (pass == null) return;
		return;
	}

IL_000a:
	{
		// BindingFlags bindings = System.Reflection.BindingFlags.NonPublic | System.Reflection.BindingFlags.Instance;
		V_0 = ((int32_t)36);
		// ScriptableRendererData[] m_rendererDataList = (ScriptableRendererData[])typeof(UniversalRenderPipelineAsset).GetField(renderDataListFieldName, bindings).GetValue(UniversalRenderPipeline.asset);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_2, NULL);
		int32_t L_4 = V_0;
		NullCheck(L_3);
		FieldInfo_t* L_5;
		L_5 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(89 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_3, _stringLiteral5C81E6D93BAE5B4AD36FC3E0025D12CAA0F4AC20, L_4);
		il2cpp_codegen_runtime_class_init_inline(UniversalRenderPipeline_t54B4737DC500C08628C5BE283D8C583C14DED98F_il2cpp_TypeInfo_var);
		UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232* L_6;
		L_6 = UniversalRenderPipeline_get_asset_mE97A926D00D90276CC9442857014B7180EF02819(NULL);
		NullCheck(L_5);
		RuntimeObject* L_7;
		L_7 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(26 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_5, L_6);
		// List<ScriptableRendererData> rendererDataList = new List<ScriptableRendererData>(m_rendererDataList);
		List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424* L_8 = (List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424*)il2cpp_codegen_object_new(List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		List_1__ctor_mDD19270367F605476E9B7A7A9872D28C89FFF6D8(L_8, (RuntimeObject*)((ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169*)Castclass((RuntimeObject*)L_7, ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169_il2cpp_TypeInfo_var)), List_1__ctor_mDD19270367F605476E9B7A7A9872D28C89FFF6D8_RuntimeMethod_var);
		V_1 = L_8;
		// if(rendererDataList.Contains(pass)) rendererDataList.Remove((pass));
		List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424* L_9 = V_1;
		ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* L_10 = ___pass0;
		NullCheck(L_9);
		bool L_11;
		L_11 = List_1_Contains_m7FF0F9331146763E7C1C71B6F92EEF57A910B9D8(L_9, L_10, List_1_Contains_m7FF0F9331146763E7C1C71B6F92EEF57A910B9D8_RuntimeMethod_var);
		if (!L_11)
		{
			goto IL_0048;
		}
	}
	{
		// if(rendererDataList.Contains(pass)) rendererDataList.Remove((pass));
		List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424* L_12 = V_1;
		ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* L_13 = ___pass0;
		NullCheck(L_12);
		bool L_14;
		L_14 = List_1_Remove_m9D07AEEC3BD3364325EA28BEBF09C4D5BFB2ED18(L_12, L_13, List_1_Remove_m9D07AEEC3BD3364325EA28BEBF09C4D5BFB2ED18_RuntimeMethod_var);
	}

IL_0048:
	{
		// typeof(UniversalRenderPipelineAsset).GetField(renderDataListFieldName, bindings).SetValue(UniversalRenderPipeline.asset, rendererDataList.ToArray());
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_15, NULL);
		int32_t L_17 = V_0;
		NullCheck(L_16);
		FieldInfo_t* L_18;
		L_18 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(89 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_16, _stringLiteral5C81E6D93BAE5B4AD36FC3E0025D12CAA0F4AC20, L_17);
		il2cpp_codegen_runtime_class_init_inline(UniversalRenderPipeline_t54B4737DC500C08628C5BE283D8C583C14DED98F_il2cpp_TypeInfo_var);
		UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232* L_19;
		L_19 = UniversalRenderPipeline_get_asset_mE97A926D00D90276CC9442857014B7180EF02819(NULL);
		List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424* L_20 = V_1;
		NullCheck(L_20);
		ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169* L_21;
		L_21 = List_1_ToArray_mA20937394A0961A947EFE502EBD77AD6245B7D9C(L_20, List_1_ToArray_mA20937394A0961A947EFE502EBD77AD6245B7D9C_RuntimeMethod_var);
		NullCheck(L_18);
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_18, L_19, (RuntimeObject*)L_21, NULL);
		// }
		return;
	}
}
// System.Void StylizedGrass.PipelineUtilities::AssignRendererToCamera(UnityEngine.Rendering.Universal.UniversalAdditionalCameraData,UnityEngine.Rendering.Universal.ScriptableRendererData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PipelineUtilities_AssignRendererToCamera_mFFCF06755D35757211D89632DCFCE31AE72CEA68 (UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* ___camData0, ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* ___pass1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniversalRenderPipeline_t54B4737DC500C08628C5BE283D8C583C14DED98F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C81E6D93BAE5B4AD36FC3E0025D12CAA0F4AC20);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF258EE4F09E872FBAA6A85B511E874C35D1AC95D);
		s_Il2CppMethodInitialized = true;
	}
	ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (UniversalRenderPipeline.asset)
		il2cpp_codegen_runtime_class_init_inline(UniversalRenderPipeline_t54B4737DC500C08628C5BE283D8C583C14DED98F_il2cpp_TypeInfo_var);
		UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232* L_0;
		L_0 = UniversalRenderPipeline_get_asset_mE97A926D00D90276CC9442857014B7180EF02819(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_005b;
		}
	}
	{
		// if (pass)
		ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* L_2 = ___pass1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_2, NULL);
		if (!L_3)
		{
			goto IL_0065;
		}
	}
	{
		// ScriptableRendererData[] rendererDataList = (ScriptableRendererData[])typeof(UniversalRenderPipelineAsset).GetField(renderDataListFieldName, System.Reflection.BindingFlags.NonPublic | System.Reflection.BindingFlags.Instance).GetValue(UniversalRenderPipeline.asset);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		NullCheck(L_5);
		FieldInfo_t* L_6;
		L_6 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(89 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_5, _stringLiteral5C81E6D93BAE5B4AD36FC3E0025D12CAA0F4AC20, ((int32_t)36));
		il2cpp_codegen_runtime_class_init_inline(UniversalRenderPipeline_t54B4737DC500C08628C5BE283D8C583C14DED98F_il2cpp_TypeInfo_var);
		UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232* L_7;
		L_7 = UniversalRenderPipeline_get_asset_mE97A926D00D90276CC9442857014B7180EF02819(NULL);
		NullCheck(L_6);
		RuntimeObject* L_8;
		L_8 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(26 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_6, L_7);
		V_0 = ((ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169*)Castclass((RuntimeObject*)L_8, ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169_il2cpp_TypeInfo_var));
		// for (int i = 0; i < rendererDataList.Length; i++)
		V_1 = 0;
		goto IL_0054;
	}

IL_003e:
	{
		// if (rendererDataList[i] == pass) camData.SetRenderer(i);
		ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* L_13 = ___pass1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_12, L_13, NULL);
		if (!L_14)
		{
			goto IL_0050;
		}
	}
	{
		// if (rendererDataList[i] == pass) camData.SetRenderer(i);
		UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* L_15 = ___camData0;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		UniversalAdditionalCameraData_SetRenderer_m486F07D0F0D14B3F112CB6AFF01B12BE187AE255_inline(L_15, L_16, NULL);
	}

IL_0050:
	{
		// for (int i = 0; i < rendererDataList.Length; i++)
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0054:
	{
		// for (int i = 0; i < rendererDataList.Length; i++)
		int32_t L_18 = V_1;
		ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169* L_19 = V_0;
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))
		{
			goto IL_003e;
		}
	}
	{
		return;
	}

IL_005b:
	{
		// Debug.LogError("[StylizedGrassRenderer] No Universal Render Pipeline is currently active.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralF258EE4F09E872FBAA6A85B511E874C35D1AC95D, NULL);
	}

IL_0065:
	{
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
// System.Void StylizedGrass.StylizedGrassRenderer::RegisterBender(StylizedGrass.GrassBender)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StylizedGrassRenderer_RegisterBender_m5AE3C2EC6859C9EC7C07AE78BFE1A63E8B389D66 (GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* ___gb0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m2DF4CA5BB1F0D09ACDF2CA7997F4D7ABEB7EF0E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m9AD1B78955B814B3E3FF4280DA24D52C49C33D15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC621C78FA7B6151052CE01470CF3E8933D760DA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t49364358CC095949053FDAC3CDE0F381C4DB93C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_Add_m1A3B3A97252451F290D08F8211CCD759E7A024C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_ContainsKey_m4FCDDE38B6BC3DEB3CAA69F6AE43A7634BFE07BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_TryGetValue_m9E0D377BD764744E181D9D933304080032FE16C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_set_Item_mEDFA8C159889FC46120EE1152739EA9A465A69A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GrassBenders.ContainsKey(gb.sortingLayer))
		il2cpp_codegen_runtime_class_init_inline(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var);
		SortedDictionary_2_tAF165674EA735D9A7BCDBE5EEC973D10DC83FB30* L_0 = ((StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_StaticFields*)il2cpp_codegen_static_fields_for(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var))->___GrassBenders_18;
		GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_1 = ___gb0;
		NullCheck(L_1);
		int32_t L_2 = L_1->___sortingLayer_6;
		NullCheck(L_0);
		bool L_3;
		L_3 = SortedDictionary_2_ContainsKey_m4FCDDE38B6BC3DEB3CAA69F6AE43A7634BFE07BC(L_0, L_2, SortedDictionary_2_ContainsKey_m4FCDDE38B6BC3DEB3CAA69F6AE43A7634BFE07BC_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0062;
		}
	}
	{
		// GrassBenders.TryGetValue(gb.sortingLayer, out BenderLayer);
		il2cpp_codegen_runtime_class_init_inline(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var);
		SortedDictionary_2_tAF165674EA735D9A7BCDBE5EEC973D10DC83FB30* L_4 = ((StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_StaticFields*)il2cpp_codegen_static_fields_for(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var))->___GrassBenders_18;
		GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_5 = ___gb0;
		NullCheck(L_5);
		int32_t L_6 = L_5->___sortingLayer_6;
		NullCheck(L_4);
		bool L_7;
		L_7 = SortedDictionary_2_TryGetValue_m9E0D377BD764744E181D9D933304080032FE16C0(L_4, L_6, (&((StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_StaticFields*)il2cpp_codegen_static_fields_for(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var))->___BenderLayer_19), SortedDictionary_2_TryGetValue_m9E0D377BD764744E181D9D933304080032FE16C0_RuntimeMethod_var);
		// if (BenderLayer.Contains(gb) == false)
		List_1_t49364358CC095949053FDAC3CDE0F381C4DB93C6* L_8 = ((StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_StaticFields*)il2cpp_codegen_static_fields_for(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var))->___BenderLayer_19;
		GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_9 = ___gb0;
		NullCheck(L_8);
		bool L_10;
		L_10 = List_1_Contains_m9AD1B78955B814B3E3FF4280DA24D52C49C33D15(L_8, L_9, List_1_Contains_m9AD1B78955B814B3E3FF4280DA24D52C49C33D15_RuntimeMethod_var);
		if (L_10)
		{
			goto IL_0098;
		}
	}
	{
		// BenderLayer.Add(gb);
		il2cpp_codegen_runtime_class_init_inline(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var);
		List_1_t49364358CC095949053FDAC3CDE0F381C4DB93C6* L_11 = ((StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_StaticFields*)il2cpp_codegen_static_fields_for(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var))->___BenderLayer_19;
		GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_12 = ___gb0;
		NullCheck(L_11);
		List_1_Add_m2DF4CA5BB1F0D09ACDF2CA7997F4D7ABEB7EF0E3_inline(L_11, L_12, List_1_Add_m2DF4CA5BB1F0D09ACDF2CA7997F4D7ABEB7EF0E3_RuntimeMethod_var);
		// GrassBenders[gb.sortingLayer] = BenderLayer;
		SortedDictionary_2_tAF165674EA735D9A7BCDBE5EEC973D10DC83FB30* L_13 = ((StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_StaticFields*)il2cpp_codegen_static_fields_for(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var))->___GrassBenders_18;
		GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_14 = ___gb0;
		NullCheck(L_14);
		int32_t L_15 = L_14->___sortingLayer_6;
		List_1_t49364358CC095949053FDAC3CDE0F381C4DB93C6* L_16 = ((StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_StaticFields*)il2cpp_codegen_static_fields_for(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var))->___BenderLayer_19;
		NullCheck(L_13);
		SortedDictionary_2_set_Item_mEDFA8C159889FC46120EE1152739EA9A465A69A5(L_13, L_15, L_16, SortedDictionary_2_set_Item_mEDFA8C159889FC46120EE1152739EA9A465A69A5_RuntimeMethod_var);
		// benderCount++;
		int32_t L_17 = ((StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_StaticFields*)il2cpp_codegen_static_fields_for(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var))->___benderCount_20;
		((StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_StaticFields*)il2cpp_codegen_static_fields_for(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var))->___benderCount_20 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		return;
	}

IL_0062:
	{
		// BenderLayer = new List<GrassBender>();
		List_1_t49364358CC095949053FDAC3CDE0F381C4DB93C6* L_18 = (List_1_t49364358CC095949053FDAC3CDE0F381C4DB93C6*)il2cpp_codegen_object_new(List_1_t49364358CC095949053FDAC3CDE0F381C4DB93C6_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		List_1__ctor_mC621C78FA7B6151052CE01470CF3E8933D760DA1(L_18, List_1__ctor_mC621C78FA7B6151052CE01470CF3E8933D760DA1_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var);
		((StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_StaticFields*)il2cpp_codegen_static_fields_for(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var))->___BenderLayer_19 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&((StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_StaticFields*)il2cpp_codegen_static_fields_for(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var))->___BenderLayer_19), (void*)L_18);
		// BenderLayer.Add(gb);
		List_1_t49364358CC095949053FDAC3CDE0F381C4DB93C6* L_19 = ((StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_StaticFields*)il2cpp_codegen_static_fields_for(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var))->___BenderLayer_19;
		GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_20 = ___gb0;
		NullCheck(L_19);
		List_1_Add_m2DF4CA5BB1F0D09ACDF2CA7997F4D7ABEB7EF0E3_inline(L_19, L_20, List_1_Add_m2DF4CA5BB1F0D09ACDF2CA7997F4D7ABEB7EF0E3_RuntimeMethod_var);
		// GrassBenders.Add(gb.sortingLayer, BenderLayer);
		SortedDictionary_2_tAF165674EA735D9A7BCDBE5EEC973D10DC83FB30* L_21 = ((StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_StaticFields*)il2cpp_codegen_static_fields_for(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var))->___GrassBenders_18;
		GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_22 = ___gb0;
		NullCheck(L_22);
		int32_t L_23 = L_22->___sortingLayer_6;
		List_1_t49364358CC095949053FDAC3CDE0F381C4DB93C6* L_24 = ((StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_StaticFields*)il2cpp_codegen_static_fields_for(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var))->___BenderLayer_19;
		NullCheck(L_21);
		SortedDictionary_2_Add_m1A3B3A97252451F290D08F8211CCD759E7A024C5(L_21, L_23, L_24, SortedDictionary_2_Add_m1A3B3A97252451F290D08F8211CCD759E7A024C5_RuntimeMethod_var);
		// benderCount++;
		int32_t L_25 = ((StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_StaticFields*)il2cpp_codegen_static_fields_for(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var))->___benderCount_20;
		((StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_StaticFields*)il2cpp_codegen_static_fields_for(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var))->___benderCount_20 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0098:
	{
		// }
		return;
	}
}
// System.Void StylizedGrass.StylizedGrassRenderer::UnRegisterBender(StylizedGrass.GrassBender)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StylizedGrassRenderer_UnRegisterBender_m3F4029D5079118C05EFDD81EC8084A6F21B01C2C (GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* ___gb0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m1CD9F787AAC79257AE253C33BB5A97DA836B5FF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m0D82ED0B4026D60A06E782BC0EF84A20C66632EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_ContainsKey_m4FCDDE38B6BC3DEB3CAA69F6AE43A7634BFE07BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_Remove_m0C5D8BC5E128A3FE7E1DB9D627A4EDB34670AC31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_TryGetValue_m9E0D377BD764744E181D9D933304080032FE16C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_get_Item_mC3B6F52FE3CF2C891D21A324117B3293B0618538_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GrassBenders.ContainsKey(gb.sortingLayer))
		il2cpp_codegen_runtime_class_init_inline(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var);
		SortedDictionary_2_tAF165674EA735D9A7BCDBE5EEC973D10DC83FB30* L_0 = ((StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_StaticFields*)il2cpp_codegen_static_fields_for(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var))->___GrassBenders_18;
		GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_1 = ___gb0;
		NullCheck(L_1);
		int32_t L_2 = L_1->___sortingLayer_6;
		NullCheck(L_0);
		bool L_3;
		L_3 = SortedDictionary_2_ContainsKey_m4FCDDE38B6BC3DEB3CAA69F6AE43A7634BFE07BC(L_0, L_2, SortedDictionary_2_ContainsKey_m4FCDDE38B6BC3DEB3CAA69F6AE43A7634BFE07BC_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0068;
		}
	}
	{
		// GrassBenders.TryGetValue(gb.sortingLayer, out BenderLayer);
		il2cpp_codegen_runtime_class_init_inline(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var);
		SortedDictionary_2_tAF165674EA735D9A7BCDBE5EEC973D10DC83FB30* L_4 = ((StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_StaticFields*)il2cpp_codegen_static_fields_for(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var))->___GrassBenders_18;
		GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_5 = ___gb0;
		NullCheck(L_5);
		int32_t L_6 = L_5->___sortingLayer_6;
		NullCheck(L_4);
		bool L_7;
		L_7 = SortedDictionary_2_TryGetValue_m9E0D377BD764744E181D9D933304080032FE16C0(L_4, L_6, (&((StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_StaticFields*)il2cpp_codegen_static_fields_for(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var))->___BenderLayer_19), SortedDictionary_2_TryGetValue_m9E0D377BD764744E181D9D933304080032FE16C0_RuntimeMethod_var);
		// BenderLayer.Remove(gb);
		List_1_t49364358CC095949053FDAC3CDE0F381C4DB93C6* L_8 = ((StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_StaticFields*)il2cpp_codegen_static_fields_for(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var))->___BenderLayer_19;
		GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_9 = ___gb0;
		NullCheck(L_8);
		bool L_10;
		L_10 = List_1_Remove_m1CD9F787AAC79257AE253C33BB5A97DA836B5FF9(L_8, L_9, List_1_Remove_m1CD9F787AAC79257AE253C33BB5A97DA836B5FF9_RuntimeMethod_var);
		// benderCount--;
		int32_t L_11 = ((StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_StaticFields*)il2cpp_codegen_static_fields_for(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var))->___benderCount_20;
		((StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_StaticFields*)il2cpp_codegen_static_fields_for(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var))->___benderCount_20 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		// if (GrassBenders[gb.sortingLayer].Count == 0) GrassBenders.Remove(gb.sortingLayer);
		SortedDictionary_2_tAF165674EA735D9A7BCDBE5EEC973D10DC83FB30* L_12 = ((StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_StaticFields*)il2cpp_codegen_static_fields_for(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var))->___GrassBenders_18;
		GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_13 = ___gb0;
		NullCheck(L_13);
		int32_t L_14 = L_13->___sortingLayer_6;
		NullCheck(L_12);
		List_1_t49364358CC095949053FDAC3CDE0F381C4DB93C6* L_15;
		L_15 = SortedDictionary_2_get_Item_mC3B6F52FE3CF2C891D21A324117B3293B0618538(L_12, L_14, SortedDictionary_2_get_Item_mC3B6F52FE3CF2C891D21A324117B3293B0618538_RuntimeMethod_var);
		NullCheck(L_15);
		int32_t L_16;
		L_16 = List_1_get_Count_m0D82ED0B4026D60A06E782BC0EF84A20C66632EF_inline(L_15, List_1_get_Count_m0D82ED0B4026D60A06E782BC0EF84A20C66632EF_RuntimeMethod_var);
		if (L_16)
		{
			goto IL_0068;
		}
	}
	{
		// if (GrassBenders[gb.sortingLayer].Count == 0) GrassBenders.Remove(gb.sortingLayer);
		il2cpp_codegen_runtime_class_init_inline(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var);
		SortedDictionary_2_tAF165674EA735D9A7BCDBE5EEC973D10DC83FB30* L_17 = ((StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_StaticFields*)il2cpp_codegen_static_fields_for(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var))->___GrassBenders_18;
		GrassBender_tE7EDDD959A905E008E5C671D4D18C92484B3CC74* L_18 = ___gb0;
		NullCheck(L_18);
		int32_t L_19 = L_18->___sortingLayer_6;
		NullCheck(L_17);
		bool L_20;
		L_20 = SortedDictionary_2_Remove_m0C5D8BC5E128A3FE7E1DB9D627A4EDB34670AC31(L_17, L_19, SortedDictionary_2_Remove_m0C5D8BC5E128A3FE7E1DB9D627A4EDB34670AC31_RuntimeMethod_var);
	}

IL_0068:
	{
		// }
		return;
	}
}
// System.Void StylizedGrass.StylizedGrassRenderer::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StylizedGrassRenderer_OnEnable_mB03CC84F31C9DCF8326C0EB713E5FB9768B2EF68 (StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrassColorMapRenderer_t888182E165920AC4818E5B27C9A9DC7458D446FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StylizedGrassRenderer_OnCameraRender_m3FF1C3C1F0DE3F80EA1802EC6CB86D70C3B0CE54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance = this;
		il2cpp_codegen_runtime_class_init_inline(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var);
		((StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_StaticFields*)il2cpp_codegen_static_fields_for(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var))->___Instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_StaticFields*)il2cpp_codegen_static_fields_for(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var))->___Instance_4), (void*)__this);
		// RenderPipelineManager.beginCameraRendering += OnCameraRender;
		Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* L_0 = (Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3*)il2cpp_codegen_object_new(Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_2__ctor_mBEB5B9B513FE305CE98CA8065CC6E6CC0E5A4D51(L_0, __this, (intptr_t)((void*)StylizedGrassRenderer_OnCameraRender_m3FF1C3C1F0DE3F80EA1802EC6CB86D70C3B0CE54_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipelineManager_add_beginCameraRendering_mF8416C1EB5B9FF130A7F638B842E283CAA83BC2B(L_0, NULL);
		// Init();
		StylizedGrassRenderer_Init_mBD0AC6FAE840E78D17077E06373FD9CF22734537(__this, NULL);
		// if (colorMap)
		GrassColorMap_tFF56A23499EB504A6EF9567C018A41C0B689D1E2* L_1 = __this->___colorMap_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_1, NULL);
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		// colorMap.SetActive();
		GrassColorMap_tFF56A23499EB504A6EF9567C018A41C0B689D1E2* L_3 = __this->___colorMap_15;
		NullCheck(L_3);
		GrassColorMap_SetActive_m949DC85E2CE8FC8C757DCA8036EB9C3FB4941F21(L_3, NULL);
		return;
	}

IL_0036:
	{
		// if (!GrassColorMapRenderer.Instance) GrassColorMap.DisableGlobally();
		GrassColorMapRenderer_t888182E165920AC4818E5B27C9A9DC7458D446FC* L_4 = ((GrassColorMapRenderer_t888182E165920AC4818E5B27C9A9DC7458D446FC_StaticFields*)il2cpp_codegen_static_fields_for(GrassColorMapRenderer_t888182E165920AC4818E5B27C9A9DC7458D446FC_il2cpp_TypeInfo_var))->___Instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_4, NULL);
		if (L_5)
		{
			goto IL_0047;
		}
	}
	{
		// if (!GrassColorMapRenderer.Instance) GrassColorMap.DisableGlobally();
		GrassColorMap_DisableGlobally_mC582256D8408C825A209896870ADEE1F5431D046(NULL);
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void StylizedGrass.StylizedGrassRenderer::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StylizedGrassRenderer_OnDisable_mC8B4471B2AC31D563C53B5DF86B38E804B14C5CB (StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StylizedGrassRenderer_OnCameraRender_m3FF1C3C1F0DE3F80EA1802EC6CB86D70C3B0CE54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance = null;
		il2cpp_codegen_runtime_class_init_inline(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var);
		((StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_StaticFields*)il2cpp_codegen_static_fields_for(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var))->___Instance_4 = (StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_StaticFields*)il2cpp_codegen_static_fields_for(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var))->___Instance_4), (void*)(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9*)NULL);
		// RenderPipelineManager.beginCameraRendering -= OnCameraRender;
		Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* L_0 = (Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3*)il2cpp_codegen_object_new(Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_2__ctor_mBEB5B9B513FE305CE98CA8065CC6E6CC0E5A4D51(L_0, __this, (intptr_t)((void*)StylizedGrassRenderer_OnCameraRender_m3FF1C3C1F0DE3F80EA1802EC6CB86D70C3B0CE54_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipelineManager_remove_beginCameraRendering_m1612AF680F9518D63562A8AC8C521A326B1C6C71(L_0, NULL);
		// uv.w = 0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_1 = (&__this->___uv_23);
		L_1->___w_4 = (0.0f);
		// Shader.SetGlobalVector(_BendMapUV, uv);
		int32_t L_2 = ((StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_StaticFields*)il2cpp_codegen_static_fields_for(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var))->____BendMapUV_25;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3 = __this->___uv_23;
		Shader_SetGlobalVector_m8A7D161EE6CD6D21EAEC6A70E30B5E0897F5A84E(L_2, L_3, NULL);
		// if (renderCam)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = __this->___renderCam_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_4, NULL);
		if (!L_5)
		{
			goto IL_0066;
		}
	}
	{
		// DestroyImmediate(renderCam.gameObject);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6 = __this->___renderCam_12;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_7, NULL);
		// DestroyImmediate(vectorRT);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_8 = __this->___vectorRT_11;
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_8, NULL);
		// renderCam = null;
		__this->___renderCam_12 = (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___renderCam_12), (void*)(Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)NULL);
	}

IL_0066:
	{
		// Shader.SetGlobalVector(_GlobalWindParams, Vector4.zero);
		il2cpp_codegen_runtime_class_init_inline(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var);
		int32_t L_9 = ((StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_StaticFields*)il2cpp_codegen_static_fields_for(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var))->____GlobalWindParams_27;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10;
		L_10 = Vector4_get_zero_m51B18794FAF141EBD06CA9907E6F7DF9D60F3515_inline(NULL);
		Shader_SetGlobalVector_m8A7D161EE6CD6D21EAEC6A70E30B5E0897F5A84E(L_9, L_10, NULL);
		// }
		return;
	}
}
// System.Void StylizedGrass.StylizedGrassRenderer::SetPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StylizedGrassRenderer_SetPosition_m7C592B919A35FBB27720C69701DCE6E222946E4F (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral332D551A4B644254ABAE75D476D4580748717A01);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6686C3042C6C456D55EF628ACE003309DA8F894);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Instance)
		il2cpp_codegen_runtime_class_init_inline(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var);
		StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9* L_0 = ((StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_StaticFields*)il2cpp_codegen_static_fields_for(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var))->___Instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		// Debug.LogWarning("[Stylized Grass Renderer] Tried to set  follow target, but no instance is present");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteralB6686C3042C6C456D55EF628ACE003309DA8F894, NULL);
		// return;
		return;
	}

IL_0017:
	{
		// if (Instance.followTarget)
		il2cpp_codegen_runtime_class_init_inline(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var);
		StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9* L_2 = ((StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_StaticFields*)il2cpp_codegen_static_fields_for(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = L_2->___followTarget_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_3, NULL);
		if (!L_4)
		{
			goto IL_0051;
		}
	}
	{
		// Debug.LogWarning("[Stylized Grass Renderer] Tried to set position, but it is following " + Instance.followTarget.name, Instance.followTarget);
		il2cpp_codegen_runtime_class_init_inline(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var);
		StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9* L_5 = ((StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_StaticFields*)il2cpp_codegen_static_fields_for(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = L_5->___followTarget_10;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_6, NULL);
		String_t* L_8;
		L_8 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral332D551A4B644254ABAE75D476D4580748717A01, L_7, NULL);
		StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9* L_9 = ((StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_StaticFields*)il2cpp_codegen_static_fields_for(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = L_9->___followTarget_10;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m5C8299150E64600CBF5C92706AD610C21D0C0DC5(L_8, L_10, NULL);
		// return;
		return;
	}

IL_0051:
	{
		// Instance.transform.position = position;
		il2cpp_codegen_runtime_class_init_inline(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var);
		StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9* L_11 = ((StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_StaticFields*)il2cpp_codegen_static_fields_for(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___position0;
		NullCheck(L_12);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_12, L_13, NULL);
		// }
		return;
	}
}
// System.Void StylizedGrass.StylizedGrassRenderer::SetFollowTarget(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StylizedGrassRenderer_SetFollowTarget_m97A46A4DF2EBB9B4E5806ECC60EB03360C276D05 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4ACB0176F541FE77605488A1DA1A3A1276ACCFA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Instance)
		il2cpp_codegen_runtime_class_init_inline(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var);
		StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9* L_0 = ((StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_StaticFields*)il2cpp_codegen_static_fields_for(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var))->___Instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		// Debug.LogWarning("[Stylized Grass Renderer] Tried to set follow target, but no instance is present");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteralD4ACB0176F541FE77605488A1DA1A3A1276ACCFA, NULL);
		// return;
		return;
	}

IL_0017:
	{
		// Instance.followTarget = transform;
		il2cpp_codegen_runtime_class_init_inline(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var);
		StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9* L_2 = ((StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_StaticFields*)il2cpp_codegen_static_fields_for(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var))->___Instance_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___transform0;
		NullCheck(L_2);
		L_2->___followTarget_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___followTarget_10), (void*)L_3);
		// }
		return;
	}
}
// System.Void StylizedGrass.StylizedGrassRenderer::SetWindZone(UnityEngine.WindZone)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StylizedGrassRenderer_SetWindZone_m03EE525C32B782B3E7EC3C4EEBA1F428835B1D71 (WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* ___windZone0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB914766B701D338CA138D3FA4260AFA5884EC78);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Instance)
		il2cpp_codegen_runtime_class_init_inline(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var);
		StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9* L_0 = ((StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_StaticFields*)il2cpp_codegen_static_fields_for(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var))->___Instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		// Debug.LogWarning("Tried to set Stylized Grass Renderer wind zone, but no instance is present");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteralEB914766B701D338CA138D3FA4260AFA5884EC78, NULL);
		// return;
		return;
	}

IL_0017:
	{
		// Instance.windZone = windZone;
		il2cpp_codegen_runtime_class_init_inline(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var);
		StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9* L_2 = ((StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_StaticFields*)il2cpp_codegen_static_fields_for(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var))->___Instance_4;
		WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* L_3 = ___windZone0;
		NullCheck(L_2);
		L_2->___windZone_17 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___windZone_17), (void*)L_3);
		// }
		return;
	}
}
// System.Void StylizedGrass.StylizedGrassRenderer::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StylizedGrassRenderer_Init_mBD0AC6FAE840E78D17077E06373FD9CF22734537 (StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9* __this, const RuntimeMethod* method) 
{
	{
		// m_resolution = resolution;
		int32_t L_0 = __this->___resolution_13;
		__this->___m_resolution_14 = L_0;
		// CreateVectorMap();
		StylizedGrassRenderer_CreateVectorMap_mF23A02364C4F426C407CFD6C404D0867D0B6733A(__this, NULL);
		// }
		return;
	}
}
// System.Void StylizedGrass.StylizedGrassRenderer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StylizedGrassRenderer_Update_mFD8DABFE1AE36477D618D64D3EDD8682CB12F270 (StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (renderCam)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___renderCam_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// UpdateCamera();
		StylizedGrassRenderer_UpdateCamera_m22632A2AAD040EE8405DA37E922F850D563ABC79(__this, NULL);
		goto IL_0021;
	}

IL_0015:
	{
		// renderCam = CreateCamera();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = StylizedGrassRenderer_CreateCamera_mF68A191FF6EC29E865ECA6EBB9C119B79AA42D0C(__this, NULL);
		__this->___renderCam_12 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___renderCam_12), (void*)L_2);
	}

IL_0021:
	{
		// if (vectorRT)
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_3 = __this->___vectorRT_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		// Shader.SetGlobalTexture(_BendMap, vectorRT);
		il2cpp_codegen_runtime_class_init_inline(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var);
		int32_t L_5 = ((StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_StaticFields*)il2cpp_codegen_static_fields_for(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var))->____BendMap_24;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_6 = __this->___vectorRT_11;
		Shader_SetGlobalTexture_m4DF21A2D64AA4CF5B3A77BBBCA33D5195308BE2E(L_5, L_6, NULL);
	}

IL_003e:
	{
		// if (listenToWindZone)
		bool L_7 = __this->___listenToWindZone_16;
		if (!L_7)
		{
			goto IL_007e;
		}
	}
	{
		// if (windZone) Shader.SetGlobalVector(_GlobalWindParams, new Vector4(windZone.windMain, 0f, 0f, 1f));
		WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* L_8 = __this->___windZone_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_8, NULL);
		if (!L_9)
		{
			goto IL_008d;
		}
	}
	{
		// if (windZone) Shader.SetGlobalVector(_GlobalWindParams, new Vector4(windZone.windMain, 0f, 0f, 1f));
		il2cpp_codegen_runtime_class_init_inline(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var);
		int32_t L_10 = ((StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_StaticFields*)il2cpp_codegen_static_fields_for(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var))->____GlobalWindParams_27;
		WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* L_11 = __this->___windZone_17;
		NullCheck(L_11);
		float L_12;
		L_12 = WindZone_get_windMain_m49480166CDE759C98498B951148535FCCED788C0(L_11, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_13), L_12, (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		Shader_SetGlobalVector_m8A7D161EE6CD6D21EAEC6A70E30B5E0897F5A84E(L_10, L_13, NULL);
		goto IL_008d;
	}

IL_007e:
	{
		// Shader.SetGlobalVector(_GlobalWindParams, Vector4.zero);
		il2cpp_codegen_runtime_class_init_inline(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var);
		int32_t L_14 = ((StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_StaticFields*)il2cpp_codegen_static_fields_for(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var))->____GlobalWindParams_27;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_15;
		L_15 = Vector4_get_zero_m51B18794FAF141EBD06CA9907E6F7DF9D60F3515_inline(NULL);
		Shader_SetGlobalVector_m8A7D161EE6CD6D21EAEC6A70E30B5E0897F5A84E(L_14, L_15, NULL);
	}

IL_008d:
	{
		// Shader.SetGlobalVector(_BendMapUV, uv);
		il2cpp_codegen_runtime_class_init_inline(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var);
		int32_t L_16 = ((StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_StaticFields*)il2cpp_codegen_static_fields_for(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var))->____BendMapUV_25;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_17 = __this->___uv_23;
		Shader_SetGlobalVector_m8A7D161EE6CD6D21EAEC6A70E30B5E0897F5A84E(L_16, L_17, NULL);
		// Shader.SetGlobalVector(_BendRenderParams, new Vector4(this.transform.position.y, renderExtends, 0f, 0f));
		int32_t L_18 = ((StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_StaticFields*)il2cpp_codegen_static_fields_for(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var))->____BendRenderParams_28;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_19, NULL);
		float L_21 = L_20.___y_3;
		float L_22 = __this->___renderExtends_9;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_23), L_21, L_22, (0.0f), (0.0f), /*hidden argument*/NULL);
		Shader_SetGlobalVector_m8A7D161EE6CD6D21EAEC6A70E30B5E0897F5A84E(L_18, L_23, NULL);
		// }
		return;
	}
}
// UnityEngine.Camera StylizedGrass.StylizedGrassRenderer::CreateCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* StylizedGrassRenderer_CreateCamera_mF68A191FF6EC29E865ECA6EBB9C119B79AA42D0C (StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0933BC50E883CDEF6FA83FE190DA37CCB2802142_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisUniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93_m257D49B2F0B2F6DAFF2E3EC7F53B5930D5BB6D46_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniversalRenderPipeline_t54B4737DC500C08628C5BE283D8C583C14DED98F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6751FCC2C5B72B7CE6B4E748575B582B2D79189D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF258EE4F09E872FBAA6A85B511E874C35D1AC95D);
		s_Il2CppMethodInitialized = true;
	}
	UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* V_0 = NULL;
	int32_t V_1 = 0;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* G_B2_0 = NULL;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* G_B1_0 = NULL;
	{
		// Camera cam = new GameObject().AddComponent<Camera>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD(L_0, NULL);
		NullCheck(L_0);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = GameObject_AddComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0933BC50E883CDEF6FA83FE190DA37CCB2802142(L_0, GameObject_AddComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0933BC50E883CDEF6FA83FE190DA37CCB2802142_RuntimeMethod_var);
		// cam.gameObject.name = "GrassBendCamera " + GetInstanceID();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = L_1;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		int32_t L_4;
		L_4 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(__this, NULL);
		V_1 = L_4;
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_6;
		L_6 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral6751FCC2C5B72B7CE6B4E748575B582B2D79189D, L_5, NULL);
		NullCheck(L_3);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_3, L_6, NULL);
		// cam.transform.localEulerAngles = new Vector3(90f, 0f, 0f);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7 = L_2;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), (90.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_8, L_9, NULL);
		// cam.gameObject.hideFlags = HideFlags.HideAndDontSave;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_10 = L_7;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		NullCheck(L_11);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_11, ((int32_t)61), NULL);
		// cam.orthographic = true;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_12 = L_10;
		NullCheck(L_12);
		Camera_set_orthographic_m64915C0840A68E526830A69F1C40257206185020(L_12, (bool)1, NULL);
		// cam.depth = -100f;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_13 = L_12;
		NullCheck(L_13);
		Camera_set_depth_m595FA2A4FEBC90E730810BBFB55E4A2C2134066F(L_13, (-100.0f), NULL);
		// cam.clearFlags = CameraClearFlags.SolidColor;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_14 = L_13;
		NullCheck(L_14);
		Camera_set_clearFlags_m66541D9CC43CBAA5FE7364A50D43CA5569FD4D93(L_14, 2, NULL);
		// cam.cullingMask = 0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_15 = L_14;
		NullCheck(L_15);
		Camera_set_cullingMask_m14F426710530BA8FA53AEC02F79C418AA558CB32(L_15, 0, NULL);
		// cam.backgroundColor = neutralVector;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_16 = L_15;
		il2cpp_codegen_runtime_class_init_inline(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = ((StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_StaticFields*)il2cpp_codegen_static_fields_for(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var))->___neutralVector_26;
		NullCheck(L_16);
		Camera_set_backgroundColor_m036FD8C316A93A0B168ACC89AFF16D396B872138(L_16, L_17, NULL);
		// cam.useOcclusionCulling = false;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_18 = L_16;
		NullCheck(L_18);
		Camera_set_useOcclusionCulling_mD3036B0CBB5E6A1BF33810AB8FDEE3CD1A4D7C04(L_18, (bool)0, NULL);
		// cam.allowHDR = true;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_19 = L_18;
		NullCheck(L_19);
		Camera_set_allowHDR_m44211153DAF6DF9A51142EC7760A53777C1F3315(L_19, (bool)1, NULL);
		// cam.allowMSAA = false;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_20 = L_19;
		NullCheck(L_20);
		Camera_set_allowMSAA_m7BE26D3FAAA64202C49DE6CA95C02A85770F8268(L_20, (bool)0, NULL);
		// cam.forceIntoRenderTexture = true;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_21 = L_20;
		NullCheck(L_21);
		Camera_set_forceIntoRenderTexture_mBD476C952C128BEAF51E85C4635DBFD85ABAB7BA(L_21, (bool)1, NULL);
		// UniversalAdditionalCameraData camData = cam.gameObject.AddComponent<UniversalAdditionalCameraData>();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_22 = L_21;
		NullCheck(L_22);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_22, NULL);
		NullCheck(L_23);
		UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* L_24;
		L_24 = GameObject_AddComponent_TisUniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93_m257D49B2F0B2F6DAFF2E3EC7F53B5930D5BB6D46(L_23, GameObject_AddComponent_TisUniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93_m257D49B2F0B2F6DAFF2E3EC7F53B5930D5BB6D46_RuntimeMethod_var);
		V_0 = L_24;
		// camData.renderShadows = false;
		UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* L_25 = V_0;
		NullCheck(L_25);
		UniversalAdditionalCameraData_set_renderShadows_m435F35FAAF4700DC51E6A806D2BEF8A01A3A010B_inline(L_25, (bool)0, NULL);
		// camData.renderPostProcessing = false;
		UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* L_26 = V_0;
		NullCheck(L_26);
		UniversalAdditionalCameraData_set_renderPostProcessing_mDECCE7AC172D0C20AC42E6393A24D4841AA4E0F6_inline(L_26, (bool)0, NULL);
		// camData.antialiasing = AntialiasingMode.None;
		UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* L_27 = V_0;
		NullCheck(L_27);
		UniversalAdditionalCameraData_set_antialiasing_m23C70E866A9D3F64662628843E1FA13A9FA90AA7_inline(L_27, 0, NULL);
		// camData.requiresColorOption = CameraOverrideOption.Off;
		UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* L_28 = V_0;
		NullCheck(L_28);
		UniversalAdditionalCameraData_set_requiresColorOption_m70A4CD657A3C82549B7159183BEB50131E7C59AA_inline(L_28, 0, NULL);
		// camData.requiresDepthOption = CameraOverrideOption.Off;
		UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* L_29 = V_0;
		NullCheck(L_29);
		UniversalAdditionalCameraData_set_requiresDepthOption_m7BA4C2691693C5175B57BACC7750A2FCC88DFA62_inline(L_29, 0, NULL);
		// camData.requiresColorTexture = false;
		UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* L_30 = V_0;
		NullCheck(L_30);
		UniversalAdditionalCameraData_set_requiresColorTexture_m26FE59EAD31B15DB1746D2717106552281AF041D(L_30, (bool)0, NULL);
		// camData.requiresDepthTexture = false;
		UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* L_31 = V_0;
		NullCheck(L_31);
		UniversalAdditionalCameraData_set_requiresDepthTexture_mCDA8FD4FD620FF4A6E67EF807137D7B5458F6F54(L_31, (bool)0, NULL);
		// if (UniversalRenderPipeline.asset)
		il2cpp_codegen_runtime_class_init_inline(UniversalRenderPipeline_t54B4737DC500C08628C5BE283D8C583C14DED98F_il2cpp_TypeInfo_var);
		UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232* L_32;
		L_32 = UniversalRenderPipeline_get_asset_mE97A926D00D90276CC9442857014B7180EF02819(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_32, NULL);
		G_B1_0 = L_22;
		if (!L_33)
		{
			G_B2_0 = L_22;
			goto IL_00f6;
		}
	}
	{
		// PipelineUtilities.AssignRendererToCamera(camData, bendRenderer);
		UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* L_34 = V_0;
		ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* L_35 = __this->___bendRenderer_5;
		PipelineUtilities_AssignRendererToCamera_mFFCF06755D35757211D89632DCFCE31AE72CEA68(L_34, L_35, NULL);
		return G_B1_0;
	}

IL_00f6:
	{
		// Debug.LogError("[StylizedGrassRenderer] No Universal Render Pipeline is currently active.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralF258EE4F09E872FBAA6A85B511E874C35D1AC95D, NULL);
		// return cam;
		return G_B2_0;
	}
}
// System.Int32 StylizedGrass.StylizedGrassRenderer::CalculateResolution(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StylizedGrassRenderer_CalculateResolution_m3161A36C2CDD51B643265ECE46DBDBC42023D735 (float ___size0, const RuntimeMethod* method) 
{
	{
		// int res = Mathf.RoundToInt(size * TexelsPerMeter);
		float L_0 = ___size0;
		int32_t L_1;
		L_1 = Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline(((float)il2cpp_codegen_multiply(L_0, (16.0f))), NULL);
		// res = Mathf.NextPowerOfTwo(res);
		int32_t L_2;
		L_2 = Mathf_NextPowerOfTwo_m25B17CBCFB02762842BE3725618DD97C7C4B1014(L_1, NULL);
		// res = Mathf.Clamp(res, 256, 2048);
		int32_t L_3;
		L_3 = Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline(L_2, ((int32_t)256), ((int32_t)2048), NULL);
		// return res;
		return L_3;
	}
}
// System.Void StylizedGrass.StylizedGrassRenderer::CreateVectorMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StylizedGrassRenderer_CreateVectorMap_mF23A02364C4F426C407CFD6C404D0867D0B6733A (StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D2CBA34D2BA79A0AB06DCD303B7F84AD97F607D);
		s_Il2CppMethodInitialized = true;
	}
	RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// if (vectorRT != null)
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = __this->___vectorRT_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		// if (renderCam) renderCam.targetTexture = null;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = __this->___renderCam_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_2, NULL);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// if (renderCam) renderCam.targetTexture = null;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = __this->___renderCam_12;
		NullCheck(L_4);
		Camera_set_targetTexture_mE6C740F21A72DA47FB5B1D31D208710738A836C4(L_4, (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL, NULL);
	}

IL_0027:
	{
		// DestroyImmediate(vectorRT);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = __this->___vectorRT_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_5, NULL);
	}

IL_0032:
	{
		// RenderTextureDescriptor rtDsc = new RenderTextureDescriptor();
		il2cpp_codegen_initobj((&V_0), sizeof(RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46));
		// rtDsc.width = resolution;
		int32_t L_6 = __this->___resolution_13;
		RenderTextureDescriptor_set_width_m3B2494007BFE3AD4D14403407C9B24F5045E7E10_inline((&V_0), L_6, NULL);
		// rtDsc.height = resolution;
		int32_t L_7 = __this->___resolution_13;
		RenderTextureDescriptor_set_height_m1FE41111472DAA9B5E80FFAF3445004D72A3CFA5_inline((&V_0), L_7, NULL);
		// rtDsc.depthBufferBits = 0;
		RenderTextureDescriptor_set_depthBufferBits_mA3710C0D6E485BA6465B328CD8B1954F0E4C5819((&V_0), 0, NULL);
		// rtDsc.graphicsFormat = UnityEngine.Experimental.Rendering.GraphicsFormat.R16G16B16A16_SFloat;
		RenderTextureDescriptor_set_graphicsFormat_m037DA25F9A8B956D830C7B7E5C6E258DC1133A13((&V_0), ((int32_t)48), NULL);
		// rtDsc.enableRandomWrite = false; //Not supported on OpenGL
		RenderTextureDescriptor_set_enableRandomWrite_m915CC9F6A154C5D7EF38FC9C9415DEFB67D481F4((&V_0), (bool)0, NULL);
		// rtDsc.autoGenerateMips = false;
		RenderTextureDescriptor_set_autoGenerateMips_mB49837BA39F45B3F814928C8C471A082A4BDC414((&V_0), (bool)0, NULL);
		// rtDsc.useMipMap = false;
		RenderTextureDescriptor_set_useMipMap_m2A2A3BC4C8ECCC532AC33E7034502EB2AE242539((&V_0), (bool)0, NULL);
		// rtDsc.volumeDepth = 1;
		RenderTextureDescriptor_set_volumeDepth_mEF9610D1C14182417A01B7243DEE6B559A13B34D_inline((&V_0), 1, NULL);
		// rtDsc.msaaSamples = 1;
		RenderTextureDescriptor_set_msaaSamples_m6910E09489372746391B14FBAF59A7237539D6C4_inline((&V_0), 1, NULL);
		// rtDsc.dimension = TextureDimension.Tex2D;
		RenderTextureDescriptor_set_dimension_mCE9A4A08454BB2D9DFE3E505EC336FD480078F39_inline((&V_0), 2, NULL);
		// rtDsc.sRGB = false;
		RenderTextureDescriptor_set_sRGB_mAB7A494EE8C496C22B3BBBCB90488312D46F3429((&V_0), (bool)0, NULL);
		// rtDsc.vrUsage = VRTextureUsage.None;
		RenderTextureDescriptor_set_vrUsage_m994CB3D4B250A70BE005D9FDFD24D868E07A52F0_inline((&V_0), 0, NULL);
		// rtDsc.bindMS = false;
		RenderTextureDescriptor_set_bindMS_m40A5B13ECDCA2A5E916047DACD10A7B04068AB83((&V_0), (bool)0, NULL);
		// rtDsc.memoryless = RenderTextureMemoryless.None;
		RenderTextureDescriptor_set_memoryless_m9ECE149930C0E2629A5CD9DA1CD0EA2A01FFE1B2_inline((&V_0), 0, NULL);
		// rtDsc.shadowSamplingMode = ShadowSamplingMode.None;
		RenderTextureDescriptor_set_shadowSamplingMode_m4B4CE918DFFF1CC5E3AF981456E186F15FC5DB93_inline((&V_0), 2, NULL);
		// vectorRT = new RenderTexture(rtDsc)
		// {
		//     useMipMap = false,
		//     filterMode = FilterMode.Bilinear,
		//     wrapMode = TextureWrapMode.Clamp,
		//     anisoLevel = 0,
		// 
		//     name = "BendMap" + GetInstanceID(),
		//     isPowerOfTwo = true,
		//     hideFlags = HideFlags.DontSave
		// };
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 L_8 = V_0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_9 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)il2cpp_codegen_object_new(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		RenderTexture__ctor_m1CBDB7F13C2CE49A31EE654081F01C4F874EA5E3(L_9, L_8, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_10 = L_9;
		NullCheck(L_10);
		RenderTexture_set_useMipMap_mB280A39DAB18372D3A0050FF20F730E5B0B44C32(L_10, (bool)0, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_11 = L_10;
		NullCheck(L_11);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_11, 1, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_12 = L_11;
		NullCheck(L_12);
		Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E(L_12, 1, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_13 = L_12;
		NullCheck(L_13);
		Texture_set_anisoLevel_m768759DE9D6BE15FCE995F5FC468980B904B9D1F(L_13, 0, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_14 = L_13;
		int32_t L_15;
		L_15 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(__this, NULL);
		V_1 = L_15;
		String_t* L_16;
		L_16 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_17;
		L_17 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral3D2CBA34D2BA79A0AB06DCD303B7F84AD97F607D, L_16, NULL);
		NullCheck(L_14);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_14, L_17, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_18 = L_14;
		NullCheck(L_18);
		RenderTexture_set_isPowerOfTwo_mC484FC101ACE1B1BAFF21FA71F633A39765987A4(L_18, (bool)1, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_19 = L_18;
		NullCheck(L_19);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_19, ((int32_t)52), NULL);
		__this->___vectorRT_11 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___vectorRT_11), (void*)L_19);
		// }
		return;
	}
}
// System.Void StylizedGrass.StylizedGrassRenderer::OnCameraRender(UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StylizedGrassRenderer_OnCameraRender_m3FF1C3C1F0DE3F80EA1802EC6CB86D70C3B0CE54 (StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9* __this, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___context0, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___currentCam1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9* G_B3_0 = NULL;
	StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9* G_B2_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9* G_B4_1 = NULL;
	{
		// if (!followCamera)
		bool L_0 = __this->___followCamera_8;
		if (L_0)
		{
			goto IL_0039;
		}
	}
	{
		// targetPosition = followTarget ? followTarget.transform.position : this.transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___followTarget_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_1, NULL);
		G_B2_0 = __this;
		if (L_2)
		{
			G_B3_0 = __this;
			goto IL_0023;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		G_B4_0 = L_4;
		G_B4_1 = G_B2_0;
		goto IL_0033;
	}

IL_0023:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___followTarget_10;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		G_B4_0 = L_7;
		G_B4_1 = G_B3_0;
	}

IL_0033:
	{
		NullCheck(G_B4_1);
		G_B4_1->___targetPosition_21 = G_B4_0;
		// return;
		return;
	}

IL_0039:
	{
		// if (currentCam.cameraType != CameraType.SceneView && (currentCam.cameraType == CameraType.Reflection || currentCam.cameraType == CameraType.Preview || currentCam.hideFlags != HideFlags.None)) return;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8 = ___currentCam1;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Camera_get_cameraType_m85434C4C986D2EAC04FBFA44B284840AFC497851(L_8, NULL);
		if ((((int32_t)L_9) == ((int32_t)2)))
		{
			goto IL_005e;
		}
	}
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_10 = ___currentCam1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Camera_get_cameraType_m85434C4C986D2EAC04FBFA44B284840AFC497851(L_10, NULL);
		if ((((int32_t)L_11) == ((int32_t)((int32_t)16))))
		{
			goto IL_005d;
		}
	}
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_12 = ___currentCam1;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = Camera_get_cameraType_m85434C4C986D2EAC04FBFA44B284840AFC497851(L_12, NULL);
		if ((((int32_t)L_13) == ((int32_t)4)))
		{
			goto IL_005d;
		}
	}
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_14 = ___currentCam1;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = Object_get_hideFlags_mA08F5E41671B8C6B5073C6B9E2799BCE6E0DF7F3(L_14, NULL);
		if (!L_15)
		{
			goto IL_005e;
		}
	}

IL_005d:
	{
		// if (currentCam.cameraType != CameraType.SceneView && (currentCam.cameraType == CameraType.Reflection || currentCam.cameraType == CameraType.Preview || currentCam.hideFlags != HideFlags.None)) return;
		return;
	}

IL_005e:
	{
		// targetPosition = currentCam.transform.position + (currentCam.transform.forward * renderExtends);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_16 = ___currentCam1;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_19 = ___currentCam1;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_19, NULL);
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_20, NULL);
		float L_22 = __this->___renderExtends_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_21, L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_18, L_23, NULL);
		__this->___targetPosition_21 = L_24;
		// }
		return;
	}
}
// System.Void StylizedGrass.StylizedGrassRenderer::UpdateCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StylizedGrassRenderer_UpdateCamera_m22632A2AAD040EE8405DA37E922F850D563ABC79 (StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!renderCam) return;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___renderCam_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// if (!renderCam) return;
		return;
	}

IL_000e:
	{
		// renderCam.targetTexture = vectorRT;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = __this->___renderCam_12;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_3 = __this->___vectorRT_11;
		NullCheck(L_2);
		Camera_set_targetTexture_mE6C740F21A72DA47FB5B1D31D208710738A836C4(L_2, L_3, NULL);
		// renderCam.orthographicSize = renderExtends;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = __this->___renderCam_12;
		float L_5 = __this->___renderExtends_9;
		NullCheck(L_4);
		Camera_set_orthographicSize_m76DD021032ACB3DDBD052B75EC66DCE3A7295A5C(L_4, L_5, NULL);
		// renderCam.farClipPlane = 1000f;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6 = __this->___renderCam_12;
		NullCheck(L_6);
		Camera_set_farClipPlane_m84EF39B09573168734613481FD979BFF31C60139(L_6, (1000.0f), NULL);
		// targetPosition = SnapToTexel(targetPosition, (renderExtends * 2f) / resolution);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->___targetPosition_21;
		float L_8 = __this->___renderExtends_9;
		int32_t L_9 = __this->___resolution_13;
		il2cpp_codegen_runtime_class_init_inline(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = StylizedGrassRenderer_SnapToTexel_m9BC2AC49FB6BF2ABA05175281F1DE0C0AE5907AA(L_7, ((float)(((float)il2cpp_codegen_multiply(L_8, (2.0f)))/((float)L_9))), NULL);
		__this->___targetPosition_21 = L_10;
		// renderCam.transform.position = targetPosition + (Vector3.up * renderExtends);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_11 = __this->___renderCam_12;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = __this->___targetPosition_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		float L_15 = __this->___renderExtends_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_14, L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_13, L_16, NULL);
		NullCheck(L_12);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_12, L_17, NULL);
		// bounds = new Bounds(new Vector3(targetPosition.x, targetPosition.y, targetPosition.z), Vector3.one * (renderExtends * 2f));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_18 = (&__this->___targetPosition_21);
		float L_19 = L_18->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_20 = (&__this->___targetPosition_21);
		float L_21 = L_20->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_22 = (&__this->___targetPosition_21);
		float L_23 = L_22->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), L_19, L_21, L_23, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		float L_26 = __this->___renderExtends_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_25, ((float)il2cpp_codegen_multiply(L_26, (2.0f))), NULL);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Bounds__ctor_mAF7B238B9FBF90C495E5D7951760085A93119C5A((&L_28), L_24, L_27, /*hidden argument*/NULL);
		__this->___bounds_22 = L_28;
		// if (m_resolution != resolution) CreateVectorMap();
		int32_t L_29 = __this->___m_resolution_14;
		int32_t L_30 = __this->___resolution_13;
		if ((((int32_t)L_29) == ((int32_t)L_30)))
		{
			goto IL_00eb;
		}
	}
	{
		// if (m_resolution != resolution) CreateVectorMap();
		StylizedGrassRenderer_CreateVectorMap_mF23A02364C4F426C407CFD6C404D0867D0B6733A(__this, NULL);
	}

IL_00eb:
	{
		// m_resolution = resolution;
		int32_t L_31 = __this->___resolution_13;
		__this->___m_resolution_14 = L_31;
		// uv.x = 1f - bounds.center.x - 1f + renderExtends;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_32 = (&__this->___uv_23);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_33 = (&__this->___bounds_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3(L_33, NULL);
		float L_35 = L_34.___x_2;
		float L_36 = __this->___renderExtends_9;
		L_32->___x_1 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract((1.0f), L_35)), (1.0f))), L_36));
		// uv.y = 1f - bounds.center.z - 1f + renderExtends;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_37 = (&__this->___uv_23);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_38 = (&__this->___bounds_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3(L_38, NULL);
		float L_40 = L_39.___z_4;
		float L_41 = __this->___renderExtends_9;
		L_37->___y_2 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract((1.0f), L_40)), (1.0f))), L_41));
		// uv.z = renderExtends * 2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_42 = (&__this->___uv_23);
		float L_43 = __this->___renderExtends_9;
		L_42->___z_3 = ((float)il2cpp_codegen_multiply(L_43, (2.0f)));
		// uv.w = 1f; //Enable bend map sampling in shader
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_44 = (&__this->___uv_23);
		L_44->___w_4 = (1.0f);
		// }
		return;
	}
}
// UnityEngine.Vector3 StylizedGrass.StylizedGrassRenderer::SnapToTexel(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 StylizedGrassRenderer_SnapToTexel_m9BC2AC49FB6BF2ABA05175281F1DE0C0AE5907AA (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, float ___texelSize1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Vector3(SnapToTexel(pos.x, texelSize), SnapToTexel(pos.y, texelSize), SnapToTexel(pos.z, texelSize));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___pos0;
		float L_1 = L_0.___x_2;
		float L_2 = ___texelSize1;
		il2cpp_codegen_runtime_class_init_inline(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var);
		float L_3;
		L_3 = StylizedGrassRenderer_SnapToTexel_mB94A9D543010BBE5757785C6A7D749EA28C65F06(L_1, L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___pos0;
		float L_5 = L_4.___y_3;
		float L_6 = ___texelSize1;
		float L_7;
		L_7 = StylizedGrassRenderer_SnapToTexel_mB94A9D543010BBE5757785C6A7D749EA28C65F06(L_5, L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___pos0;
		float L_9 = L_8.___z_4;
		float L_10 = ___texelSize1;
		float L_11;
		L_11 = StylizedGrassRenderer_SnapToTexel_mB94A9D543010BBE5757785C6A7D749EA28C65F06(L_9, L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), L_3, L_7, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Single StylizedGrass.StylizedGrassRenderer::SnapToTexel(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float StylizedGrassRenderer_SnapToTexel_mB94A9D543010BBE5757785C6A7D749EA28C65F06 (float ___pos0, float ___texelSize1, const RuntimeMethod* method) 
{
	{
		// return Mathf.FloorToInt(pos / texelSize) * (texelSize) + (texelSize * 0.5f);
		float L_0 = ___pos0;
		float L_1 = ___texelSize1;
		int32_t L_2;
		L_2 = Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline(((float)(L_0/L_1)), NULL);
		float L_3 = ___texelSize1;
		float L_4 = ___texelSize1;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)L_2), L_3)), ((float)il2cpp_codegen_multiply(L_4, (0.5f)))));
	}
}
// System.Void StylizedGrass.StylizedGrassRenderer::OnDrawGizmosSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StylizedGrassRenderer_OnDrawGizmosSelected_m58572A08C837E86917E361DCA6A7DCFB4F9DAC6B (StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!renderCam) return;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___renderCam_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// if (!renderCam) return;
		return;
	}

IL_000e:
	{
		// Gizmos.color = new Color(1, 1, 1, 1f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		memset((&L_2), 0, sizeof(L_2));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_2), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		Gizmos_set_color_mFD4A7935FF025F5922374A8DD797BA0558BF1AD2(L_2, NULL);
		// Gizmos.DrawWireCube(bounds.center, bounds.size);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_3 = (&__this->___bounds_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3(L_3, NULL);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_5 = (&__this->___bounds_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4(L_5, NULL);
		Gizmos_DrawWireCube_m31971565E5002365FE94256FFE1DC5B070FDBBA7(L_4, L_6, NULL);
		// }
		return;
	}
}
// System.Void StylizedGrass.StylizedGrassRenderer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StylizedGrassRenderer__ctor_m9465F8B5D189E91FD61E557B8A430808D5A25AC3 (StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9* __this, const RuntimeMethod* method) 
{
	{
		// public bool followCamera = true;
		__this->___followCamera_8 = (bool)1;
		// public float renderExtends = 32f;
		__this->___renderExtends_9 = (32.0f);
		// public int resolution = 1024;
		__this->___resolution_13 = ((int32_t)1024);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void StylizedGrass.StylizedGrassRenderer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StylizedGrassRenderer__cctor_m542657484CA9F927585E6E65AACFFBE0C14B901A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2__ctor_m79DF4A3FF0A2EADB029A76CE314075150AE9B48A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_tAF165674EA735D9A7BCDBE5EEC973D10DC83FB30_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4ED044DFB4E3D8CA98B39C54D6578B8B4B6D3CC1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64452ED5C9848E1613115ED834570A2C2D932292);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7341096046FB6A11C034C08590E42470CF0B27F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5FF77C5852934F1B8471E0D64FAB91AA74886A9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static SortedDictionary<int, List<GrassBender>> GrassBenders = new SortedDictionary<int, List<GrassBender>>();
		SortedDictionary_2_tAF165674EA735D9A7BCDBE5EEC973D10DC83FB30* L_0 = (SortedDictionary_2_tAF165674EA735D9A7BCDBE5EEC973D10DC83FB30*)il2cpp_codegen_object_new(SortedDictionary_2_tAF165674EA735D9A7BCDBE5EEC973D10DC83FB30_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SortedDictionary_2__ctor_m79DF4A3FF0A2EADB029A76CE314075150AE9B48A(L_0, SortedDictionary_2__ctor_m79DF4A3FF0A2EADB029A76CE314075150AE9B48A_RuntimeMethod_var);
		((StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_StaticFields*)il2cpp_codegen_static_fields_for(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var))->___GrassBenders_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_StaticFields*)il2cpp_codegen_static_fields_for(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var))->___GrassBenders_18), (void*)L_0);
		// public static int _BendMap = Shader.PropertyToID("_BendMap");
		int32_t L_1;
		L_1 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteral4ED044DFB4E3D8CA98B39C54D6578B8B4B6D3CC1, NULL);
		((StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_StaticFields*)il2cpp_codegen_static_fields_for(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var))->____BendMap_24 = L_1;
		// public static int _BendMapUV = Shader.PropertyToID("_BendMapUV");
		int32_t L_2;
		L_2 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteralA7341096046FB6A11C034C08590E42470CF0B27F, NULL);
		((StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_StaticFields*)il2cpp_codegen_static_fields_for(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var))->____BendMapUV_25 = L_2;
		// private static Color neutralVector = new Color(0.5f, 0f, 0.5f, 0f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		memset((&L_3), 0, sizeof(L_3));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_3), (0.5f), (0.0f), (0.5f), (0.0f), /*hidden argument*/NULL);
		((StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_StaticFields*)il2cpp_codegen_static_fields_for(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var))->___neutralVector_26 = L_3;
		// private static int _GlobalWindParams = Shader.PropertyToID("_GlobalWindParams");
		int32_t L_4;
		L_4 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteralD5FF77C5852934F1B8471E0D64FAB91AA74886A9, NULL);
		((StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_StaticFields*)il2cpp_codegen_static_fields_for(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var))->____GlobalWindParams_27 = L_4;
		// private static int _BendRenderParams = Shader.PropertyToID("_BendRenderParams");
		int32_t L_5;
		L_5 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteral64452ED5C9848E1613115ED834570A2C2D932292, NULL);
		((StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_StaticFields*)il2cpp_codegen_static_fields_for(StylizedGrassRenderer_t654CCA85D1E8D5DB8F969EA552E25F12334815E9_il2cpp_TypeInfo_var))->____BendRenderParams_28 = L_5;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScriptableRenderPass_set_renderPassEvent_m63FA581FFDE1C69C2E1358BD0B8DB30275334960_inline (ScriptableRenderPass_tEA38F6C7AD8D111A2251E4C2A7530BCEE7D6D2B0* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public RenderPassEvent renderPassEvent { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CrenderPassEventU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProfilingSampler_get_name_mF1C3E7B9540171DD93186A4DFEF33CE331E92D79_inline (ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* __this, const RuntimeMethod* method) 
{
	{
		// public string name { get; private set; }
		String_t* L_0 = __this->___U3CnameU3Ek__BackingField_2;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m94A09872C449C26863FF10D0FDF87842D91BECD6_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ((Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields*)il2cpp_codegen_static_fields_for(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var))->___identityMatrix_17;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Color32_op_Implicit_m7EFA0B83AD1AE15567E9BC2FA2B8E66D3BFE1395_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___c0;
		float L_1 = L_0.___r_0;
		float L_2;
		L_2 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_1, NULL);
		float L_3;
		L_3 = bankers_roundf(((float)il2cpp_codegen_multiply(L_2, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___c0;
		float L_5 = L_4.___g_1;
		float L_6;
		L_6 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_5, NULL);
		float L_7;
		L_7 = bankers_roundf(((float)il2cpp_codegen_multiply(L_6, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___c0;
		float L_9 = L_8.___b_2;
		float L_10;
		L_10 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_9, NULL);
		float L_11;
		L_11 = bankers_roundf(((float)il2cpp_codegen_multiply(L_10, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = ___c0;
		float L_13 = L_12.___a_3;
		float L_14;
		L_14 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_13, NULL);
		float L_15;
		L_15 = bankers_roundf(((float)il2cpp_codegen_multiply(L_14, (255.0f))));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_16;
		memset((&L_16), 0, sizeof(L_16));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_16), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_3), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_7), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_11), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_15), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_0065;
	}

IL_0065:
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___c0, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = ___c0;
		uint8_t L_1 = L_0.___r_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_2 = ___c0;
		uint8_t L_3 = L_2.___g_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_4 = ___c0;
		uint8_t L_5 = L_4.___b_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_6 = ___c0;
		uint8_t L_7 = L_6.___a_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_8), ((float)(((float)L_1)/(255.0f))), ((float)(((float)L_3)/(255.0f))), ((float)(((float)L_5)/(255.0f))), ((float)(((float)L_7)/(255.0f))), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_003d;
	}

IL_003d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniversalAdditionalCameraData_SetRenderer_m486F07D0F0D14B3F112CB6AFF01B12BE187AE255_inline (UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		// m_RendererIndex = index;
		int32_t L_0 = ___index0;
		__this->___m_RendererIndex_13 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniversalAdditionalCameraData_set_renderShadows_m435F35FAAF4700DC51E6A806D2BEF8A01A3A010B_inline (UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_RenderShadows = value;
		bool L_0 = ___value0;
		__this->___m_RenderShadows_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniversalAdditionalCameraData_set_renderPostProcessing_mDECCE7AC172D0C20AC42E6393A24D4841AA4E0F6_inline (UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_RenderPostProcessing = value;
		bool L_0 = ___value0;
		__this->___m_RenderPostProcessing_17 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniversalAdditionalCameraData_set_antialiasing_m23C70E866A9D3F64662628843E1FA13A9FA90AA7_inline (UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_Antialiasing = value;
		int32_t L_0 = ___value0;
		__this->___m_Antialiasing_18 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniversalAdditionalCameraData_set_requiresColorOption_m70A4CD657A3C82549B7159183BEB50131E7C59AA_inline (UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_RequiresOpaqueTextureOption = value;
		int32_t L_0 = ___value0;
		__this->___m_RequiresOpaqueTextureOption_10 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniversalAdditionalCameraData_set_requiresDepthOption_m7BA4C2691693C5175B57BACC7750A2FCC88DFA62_inline (UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_RequiresDepthTextureOption = value;
		int32_t L_0 = ___value0;
		__this->___m_RequiresDepthTextureOption_9 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline (float ___f0, const RuntimeMethod* method) 
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
		L_1 = bankers_round(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_width_m3B2494007BFE3AD4D14403407C9B24F5045E7E10_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CwidthU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_height_m1FE41111472DAA9B5E80FFAF3445004D72A3CFA5_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CheightU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_volumeDepth_mEF9610D1C14182417A01B7243DEE6B559A13B34D_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CvolumeDepthU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_msaaSamples_m6910E09489372746391B14FBAF59A7237539D6C4_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CmsaaSamplesU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_dimension_mCE9A4A08454BB2D9DFE3E505EC336FD480078F39_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CdimensionU3Ek__BackingField_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_vrUsage_m994CB3D4B250A70BE005D9FDFD24D868E07A52F0_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CvrUsageU3Ek__BackingField_10 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_memoryless_m9ECE149930C0E2629A5CD9DA1CD0EA2A01FFE1B2_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CmemorylessU3Ek__BackingField_12 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_shadowSamplingMode_m4B4CE918DFFF1CC5E3AF981456E186F15FC5DB93_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CshadowSamplingModeU3Ek__BackingField_9 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline (float ___f0, const RuntimeMethod* method) 
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
		L_1 = floor(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_gshared_inline (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method) 
{
	{
		__this->___rgba_0 = 0;
		uint8_t L_0 = ___r0;
		__this->___r_1 = L_0;
		uint8_t L_1 = ___g1;
		__this->___g_2 = L_1;
		uint8_t L_2 = ___b2;
		__this->___b_3 = L_2;
		uint8_t L_3 = ___a3;
		__this->___a_4 = L_3;
		return;
	}
}
