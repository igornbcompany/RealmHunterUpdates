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
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<VisualDesignCafe.Nature.QualitySettings/GraphicsQuality>
struct Action_1_t7092C955DCB63C4B71ABEFF4198374A199F1CE5F;
// System.Action`1<VisualDesignCafe.Nature.QualitySettings/InteractionQuality>
struct Action_1_t18A965A5CD8412F57525B70C03F434E0BE590998;
// System.Action`1<VisualDesignCafe.Nature.QualitySettings/OverlayQuality>
struct Action_1_tA3A3EDA5B0123A198F5499DD1DD4245C6479E02F;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F;
// System.Func`2<UnityEngine.GameObject,System.Boolean>
struct Func_2_tD5855DA3DC1C614C29762075E12B0B72B8B1F51C;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject>
struct IEnumerable_1_t73E24A3585FE00B560A12D422A7066F996ACD0A0;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Object>
struct List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5;
// System.Collections.Generic.Stack`1<System.Diagnostics.Stopwatch>
struct Stack_1_t25EE16C4E420B6FB4CA506FBE4F0DD86D3CB2FB9;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>
struct UnityAction_2_t3E619780AA870611658EC8B01DA6EA2EC42B13CE;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Object[]
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;
// VisualDesignCafe.Nature.RuntimeEntryPoint[]
struct RuntimeEntryPointU5BU5D_t594D90D3D35666CEFC4AC17F21284AE3688B7634;
// System.Diagnostics.Stopwatch[]
struct StopwatchU5BU5D_t305847D86CE0304C990D73780CDD2EA25876241D;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// VisualDesignCafe.ShaderX.Materials.BaseMaterial
struct BaseMaterial_t75CEB54A6E97E52D865A51213E7D5A13D93DB7B2;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// VisualDesignCafe.Nature.Documentation
struct Documentation_t98901B5F2A18BC5FE7AB2E9ACA62605568EB3CC4;
// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
// UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14;
// UnityEngine.GUISettings
struct GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847;
// UnityEngine.GUISkin
struct GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9;
// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580;
// UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// VisualDesignCafe.Nature.GlobalWind
struct GlobalWind_tF5FCFBD4CBCAF95A274AE76E9919815030D57B39;
// VisualDesignCafe.Nature.ILog
struct ILog_t155FD098367AFF635DD24C219A232AFD737C5F5E;
// VisualDesignCafe.Nature.IndentScope
struct IndentScope_tEEB5AAFBB1CE219759931980C0A18784E5A604DC;
// VisualDesignCafe.ShaderX.Materials.LitKeywords
struct LitKeywords_t79960B8845A5F490D2B409BA1E932A5EF2CC63BD;
// VisualDesignCafe.ShaderX.Materials.LitMaterial
struct LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080;
// VisualDesignCafe.ShaderX.Materials.LitProperties
struct LitProperties_tF61AFEFD7B395EB31BEDF407C1E3FF75B8CEDCFA;
// VisualDesignCafe.Nature.Logger
struct Logger_t4DF9EAAB640217BD20B383B66F93562AF54782E4;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// VisualDesignCafe.Nature.Interaction.NatureCollider
struct NatureCollider_tB243C426E635A8BE6CD0B7B8A2AEE5792A0DC0F5;
// VisualDesignCafe.Nature.NatureKeywords
struct NatureKeywords_tBFBA1E002F6B3B15A55786BAD12487D9A339F693;
// VisualDesignCafe.Nature.NatureMaterial
struct NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA;
// VisualDesignCafe.Nature.Overlay.NatureOverlay
struct NatureOverlay_t1E132A12D5EDFD2A92ED7681ECEF050DF4D7BF41;
// VisualDesignCafe.Nature.NatureProperties
struct NatureProperties_t7365834912C7221456DDE3B30DA0847336A202B1;
// VisualDesignCafe.Nature.NotificationBox
struct NotificationBox_tFE81187F23AA2E251B93B075E0CD9D27A644A73A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Threading.Tasks.ParallelOptions
struct ParallelOptions_tB544CD8AB0089AA9973F610B95F7CA93E4A441D2;
// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5;
// VisualDesignCafe.Nature.Interaction.ResourceManager
struct ResourceManager_tB1AFFD87A43E76F35445AA8C5C592BBC56CDF590;
// VisualDesignCafe.Nature.RuntimeEntryPoint
struct RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967;
// VisualDesignCafe.Nature.RuntimeGlobalWindInitializer
struct RuntimeGlobalWindInitializer_t42E7C9AB78702F61DE18D7D2B3F362ED7B5FDDAD;
// VisualDesignCafe.Nature.ShaderResources
struct ShaderResources_t0D9AB98CBAAC245E280C145954C3811E16988ECA;
// System.Diagnostics.Stopwatch
struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// VisualDesignCafe.Nature.TimerScope
struct TimerScope_t02309056955DBD21C84793891CCD0155AF7DE187;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WindZone
struct WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7;
// UnityEngine.GUILayout/AreaScope
struct AreaScope_tFC337E3FECDEFD1C5546291EED65F7DA6CCCA50D;
// UnityEngine.GUILayout/HorizontalScope
struct HorizontalScope_t4007A61F85EEE56F34C66A864C60DF1B54975487;
// UnityEngine.GUILayout/VerticalScope
struct VerticalScope_t9ACF880A56D5C3E83E431ED09DCA4FBAC9F832BC;
// UnityEngine.GUISkin/SkinChangedDelegate
struct SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98;
// VisualDesignCafe.Nature.QualitySettings/GraphicsQuality
struct GraphicsQuality_tEC77150663125A38E81AF2C977C22DAACD11ADC2;
// VisualDesignCafe.Nature.QualitySettings/InteractionQuality
struct InteractionQuality_t2FF0E0485560DCDA3D579E9951D66B6BE0691D9C;
// VisualDesignCafe.Nature.QualitySettings/OverlayQuality
struct OverlayQuality_t85B45D8ED6E1BF50B54DF1A90A14F384C695DA56;
// VisualDesignCafe.Nature.RuntimeGlobalWindInitializer/<>c
struct U3CU3Ec_tD5AAFC1F780554421A1EE79F5B54FF94A14ED5D4;
// VisualDesignCafe.Nature.ShaderResources/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_tB7817BF36D3F1C02C3DAFE1C57BF9C90AEFEE55A;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t18A965A5CD8412F57525B70C03F434E0BE590998_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t7092C955DCB63C4B71ABEFF4198374A199F1CE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tA3A3EDA5B0123A198F5499DD1DD4245C6479E02F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AreaScope_tFC337E3FECDEFD1C5546291EED65F7DA6CCCA50D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tD5855DA3DC1C614C29762075E12B0B72B8B1F51C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GlobalWind_tF5FCFBD4CBCAF95A274AE76E9919815030D57B39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GraphicsQuality_tEC77150663125A38E81AF2C977C22DAACD11ADC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HorizontalScope_t4007A61F85EEE56F34C66A864C60DF1B54975487_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILog_t155FD098367AFF635DD24C219A232AFD737C5F5E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InteractionQuality_t2FF0E0485560DCDA3D579E9951D66B6BE0691D9C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Logger_t4DF9EAAB640217BD20B383B66F93562AF54782E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NatureShadersConfig_t8B13CFF7F101DE7E8A941A92FA32E1D31675400E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverlayQuality_t85B45D8ED6E1BF50B54DF1A90A14F384C695DA56_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParallelOptions_tB544CD8AB0089AA9973F610B95F7CA93E4A441D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Parallel_tEDD920942C8F814D55C6B029EACB00C81620BD14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QualitySettings_t6B8D916E68845D9DB6E6CCF2EEBCD6B2FDFBB720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResourceManager_tB1AFFD87A43E76F35445AA8C5C592BBC56CDF590_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShaderResources_t0D9AB98CBAAC245E280C145954C3811E16988ECA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_t25EE16C4E420B6FB4CA506FBE4F0DD86D3CB2FB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass8_0_tB7817BF36D3F1C02C3DAFE1C57BF9C90AEFEE55A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tD5AAFC1F780554421A1EE79F5B54FF94A14ED5D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_2_t3E619780AA870611658EC8B01DA6EA2EC42B13CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VerticalScope_t9ACF880A56D5C3E83E431ED09DCA4FBAC9F832BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral02097A8BF4E59FC772990A0F556C2C9F9961C139;
IL2CPP_EXTERN_C String_t* _stringLiteral09901DD7DFFA3020CCC8E4ACF7276C6EFA7317CC;
IL2CPP_EXTERN_C String_t* _stringLiteral0AC8A355883E655A34FE508D557B0601516BB54F;
IL2CPP_EXTERN_C String_t* _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A;
IL2CPP_EXTERN_C String_t* _stringLiteral12620BDB40B0DA68B35A6A31DFD4BD6F90D7D75D;
IL2CPP_EXTERN_C String_t* _stringLiteral18B61B6742D8AF90118923C54A797A7233F6AD18;
IL2CPP_EXTERN_C String_t* _stringLiteral1CD907B0BC9D663068EB5881E951496942035E8D;
IL2CPP_EXTERN_C String_t* _stringLiteral26651A642B482129A412E98B915F5B359BF612C0;
IL2CPP_EXTERN_C String_t* _stringLiteral299EB27FCF4FB01F7C385853D311630DE8637743;
IL2CPP_EXTERN_C String_t* _stringLiteral29E674AC59F39BEBAB85241EDACB34D1D4363E14;
IL2CPP_EXTERN_C String_t* _stringLiteral2F0DFC050054A9594B803B0A72988BA4666419EB;
IL2CPP_EXTERN_C String_t* _stringLiteral32EFDDFEAA75BD8C9B227E8BC9CCE4B7268C0716;
IL2CPP_EXTERN_C String_t* _stringLiteral359B8F97A0A7ED527FB45650F112EB5822253ECA;
IL2CPP_EXTERN_C String_t* _stringLiteral36B2A26CF5E9293710A0647339454921B0450901;
IL2CPP_EXTERN_C String_t* _stringLiteral38719FF7E7FA8790827118159B4046D7D9368754;
IL2CPP_EXTERN_C String_t* _stringLiteral3C8A9EBD047310A77B12DD35ECB88850C4BFFEBE;
IL2CPP_EXTERN_C String_t* _stringLiteral3D759EB39596DF946F001D3EF18CD50CEE17AB4F;
IL2CPP_EXTERN_C String_t* _stringLiteral3FD1832AB941CF70788CDA8BA0EC5E4A6D340207;
IL2CPP_EXTERN_C String_t* _stringLiteral475139F7AFB2EB5EFFFA047AD59C72201C43162D;
IL2CPP_EXTERN_C String_t* _stringLiteral4A95D59422A8A85BCAF78DF129CB3D525B429C07;
IL2CPP_EXTERN_C String_t* _stringLiteral4CFDDC9B6033DA4BB507DD933224F9BF284D7A65;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral4DCD386661CB6097472497BF04B65ED259EB3209;
IL2CPP_EXTERN_C String_t* _stringLiteral545D672831F6CB8E10D6BC99CE8C6930D5E38660;
IL2CPP_EXTERN_C String_t* _stringLiteral5DD7BFAE4B18F706204B4CE0597EDBC48E7F3F80;
IL2CPP_EXTERN_C String_t* _stringLiteral62CC6027FA1391FFF8B9EF0B9E561A47788CDECD;
IL2CPP_EXTERN_C String_t* _stringLiteral62DD1605E39490E75D2BA2962BFB1401DAED154E;
IL2CPP_EXTERN_C String_t* _stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260;
IL2CPP_EXTERN_C String_t* _stringLiteral6DE0F763543D833DDDF6560490CFBF783990FB94;
IL2CPP_EXTERN_C String_t* _stringLiteral6FF7A973A811BAC175ED134694273BE9579B30F6;
IL2CPP_EXTERN_C String_t* _stringLiteral716ADB1D0C262347EDFA404FE1538D84DB625B84;
IL2CPP_EXTERN_C String_t* _stringLiteral7233EADF7D2A53753670B9E24CE161CC40017684;
IL2CPP_EXTERN_C String_t* _stringLiteral76F5A483E810308D242081573812C0C4A70B70EC;
IL2CPP_EXTERN_C String_t* _stringLiteral78601036D1C1439FC502D831B3E0521E1450C550;
IL2CPP_EXTERN_C String_t* _stringLiteral792DE423F9E000F98AAB7A712B18EBC370F139FD;
IL2CPP_EXTERN_C String_t* _stringLiteral7A789A75D45A0FF4D9A8B29FE6D895DD8440C8E1;
IL2CPP_EXTERN_C String_t* _stringLiteral7BA3B7DC27615764497D1BC93E2F45225CEDB7F1;
IL2CPP_EXTERN_C String_t* _stringLiteral7DE03E5EBA0308517D1762F2C0DF3B9E2A2F1870;
IL2CPP_EXTERN_C String_t* _stringLiteral80C0F12418C58117BC29610DAD12C94894D07EF9;
IL2CPP_EXTERN_C String_t* _stringLiteral84F67E954366C9756B7B4A850798F3BC7E257377;
IL2CPP_EXTERN_C String_t* _stringLiteral853322B9FFE5CFDD2D1885AA59CC407160C03DC2;
IL2CPP_EXTERN_C String_t* _stringLiteral8801582F09E06B4D413CED6F42EA7FE4408BEF84;
IL2CPP_EXTERN_C String_t* _stringLiteral8ED5DF177B17350D8C29D580BD74F748662216AA;
IL2CPP_EXTERN_C String_t* _stringLiteral8FF3CD2C88399015271A96B99EB23CCD308784D6;
IL2CPP_EXTERN_C String_t* _stringLiteral986956EF9CEB14E99D6C192F8C2F38538EFC5A2D;
IL2CPP_EXTERN_C String_t* _stringLiteral9ACE3EEEBEB9B25F0F8632BDEB4FCB7A70DDEA34;
IL2CPP_EXTERN_C String_t* _stringLiteral9B075FE6415515752C77D69113024693227E5890;
IL2CPP_EXTERN_C String_t* _stringLiteral9CE801F863AFB4ABA4E0557489F485673DC1B7ED;
IL2CPP_EXTERN_C String_t* _stringLiteral9E5F0313853CBECC16996C202E0E39742A6A6E35;
IL2CPP_EXTERN_C String_t* _stringLiteralA496466597C70A1FE917BA917DE46D5EC4D27D60;
IL2CPP_EXTERN_C String_t* _stringLiteralA5AF58E2F4C601E4F62344871820D60824FF126B;
IL2CPP_EXTERN_C String_t* _stringLiteralA8F35979507EE2CEE3C7F8D73C77F5F1FBC2B712;
IL2CPP_EXTERN_C String_t* _stringLiteralB13F0051EF3CBDFF3A81EE6331B787440E4E3114;
IL2CPP_EXTERN_C String_t* _stringLiteralB41CAF4C8C6C82216F2D5FB5D6B5A71AE61912DA;
IL2CPP_EXTERN_C String_t* _stringLiteralB4F7FB4E94213E8C977717FD0F868688BCF6194A;
IL2CPP_EXTERN_C String_t* _stringLiteralB5D0F975EB1FAB7759ED5BDDF7A8243429008370;
IL2CPP_EXTERN_C String_t* _stringLiteralB647135ED349ACE71035F164D57AAAC743B2E7D9;
IL2CPP_EXTERN_C String_t* _stringLiteralB76E41BDD84DEE5E5798CB40C8917D99C5C671BC;
IL2CPP_EXTERN_C String_t* _stringLiteralB77249678DF63BB7438A25390C66F6DD9109EF03;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C1854F6613D615F3B61977639014EFE3B430AE;
IL2CPP_EXTERN_C String_t* _stringLiteralBB5F9376A64474C91C2F758DDF883ED1EE41FBC6;
IL2CPP_EXTERN_C String_t* _stringLiteralBDFC3ABBF53494D9AFEB81D77A493910809F1E30;
IL2CPP_EXTERN_C String_t* _stringLiteralBF7473F31749D506CBBE9A13C018FCE244410941;
IL2CPP_EXTERN_C String_t* _stringLiteralC36C08270F0656B15564B93B095160EB52C35960;
IL2CPP_EXTERN_C String_t* _stringLiteralCB444DDEB7123B6729FACF0C486D332CDC4427F5;
IL2CPP_EXTERN_C String_t* _stringLiteralCCC459B6F2EABAA6565EBB224169E5D96E2BDD3D;
IL2CPP_EXTERN_C String_t* _stringLiteralCECE74519E5D8D45A5F071792282B3F24236812B;
IL2CPP_EXTERN_C String_t* _stringLiteralD0586F14A26BB7A67D8E5092063E7D0084645518;
IL2CPP_EXTERN_C String_t* _stringLiteralD50BBF0E651CAFB8BF014236C4C1C9B825D96612;
IL2CPP_EXTERN_C String_t* _stringLiteralD63A8837BCCEAA128BEB458AD55432018F2FD767;
IL2CPP_EXTERN_C String_t* _stringLiteralD653BE16D6D62ACE9F2B37E94124E44C5E323029;
IL2CPP_EXTERN_C String_t* _stringLiteralD816716D7B936165E7512CB4E11B9998FD537868;
IL2CPP_EXTERN_C String_t* _stringLiteralDD75559CB2D614271074C571AAADAE43EEF79E90;
IL2CPP_EXTERN_C String_t* _stringLiteralE06D9193CE8413D0194CBC69F1ECDA9E470DC097;
IL2CPP_EXTERN_C String_t* _stringLiteralE90B8B5ABC23C40C149403A5760F98250FFFA464;
IL2CPP_EXTERN_C String_t* _stringLiteralEB987CB6059B0954BD15940514009377987A5A3C;
IL2CPP_EXTERN_C String_t* _stringLiteralEB9B7F5D0CFDFE240E6A1497B34DAC1A13F3ECE0;
IL2CPP_EXTERN_C String_t* _stringLiteralF5B86CEA500C9A5A52B82F5D5253C03318964786;
IL2CPP_EXTERN_C String_t* _stringLiteralF6EDA9235F48323E22A418492B5EEA3C5CB4D6F8;
IL2CPP_EXTERN_C String_t* _stringLiteralF91E78BD77B8AFA90A9E4C5FCB90C995DFFCF23D;
IL2CPP_EXTERN_C String_t* _stringLiteralFBBB48B207CB8B02FBC8C8E4B0C68F6F37CA773A;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m7C9DCCE51623032EB28B634BB0041243A7359124_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mAEB2333688211862F3BF025DED14A07DF2AB6862_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m3056C0403652CA8364963A1CDE5D5EACF19CB5B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m0CEFF9A8B2B0E57C5DDBA1134553DEBC37719CED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisRuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967_m2D0453CB50662DF237789E308974761DCEEF5983_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisGlobalWind_tF5FCFBD4CBCAF95A274AE76E9919815030D57B39_m777DBF73C4D803D504088DEE06478536E2754C62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967_m608CD40BDA78AC033F651C788DEB77B09AB34C14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m60F1F5D817C83DDC11235FD5524B8667F4C314F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m51249A9DD3B29478801AC004DEA026A63D4A6D9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA6D8F51281EF3C4183058B42C1930E0E885543EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1B0135DE2C4A4BCA4820D2FC9E060ED224FC24C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisRuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967_m44D42E7AB72E309EDBD8925DE2FB87FE66F76791_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RuntimeGlobalWindInitializer_OnActiveSceneChanged_m2641C9AD9CFEC8A4ED87DA771F24BFD17D1E3908_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Peek_m1618BCC889EC84BED1EF8009AEF6742B96FE5D79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_m0316352BB52A08E4E4B7098FD7A645A9D830CB04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m49E0F66D4565C0F72BB3532C81EF6E369CDF5ADF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_m39A6CD40BE1876549D724FD092977E7BC19BD4E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3COnActiveSceneChangedU3Eb__1_0_m573D6BC1B780C831A2F81E2EC02893438C1CA05D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_0_U3CGeneratePerlinNoiseTextureU3Eb__0_mD4511B5F63826F63E22A316A0CA4EBB181813614_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke;
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com;
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke;
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct RuntimeEntryPointU5BU5D_t594D90D3D35666CEFC4AC17F21284AE3688B7634;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t43FF47086B77E1A94189883A2BC72E7F752D89B2 
{
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
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

// System.Collections.Generic.List`1<UnityEngine.Object>
struct List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___s_emptyArray_5;
};

// System.Collections.Generic.Stack`1<System.Diagnostics.Stopwatch>
struct Stack_1_t25EE16C4E420B6FB4CA506FBE4F0DD86D3CB2FB9  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	StopwatchU5BU5D_t305847D86CE0304C990D73780CDD2EA25876241D* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};
struct Il2CppArrayBounds;

// VisualDesignCafe.ShaderX.Materials.BaseMaterial
struct BaseMaterial_t75CEB54A6E97E52D865A51213E7D5A13D93DB7B2  : public RuntimeObject
{
	// UnityEngine.Material VisualDesignCafe.ShaderX.Materials.BaseMaterial::Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___Material_0;
};

// VisualDesignCafe.Nature.Documentation
struct Documentation_t98901B5F2A18BC5FE7AB2E9ACA62605568EB3CC4  : public RuntimeObject
{
};

// UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2  : public RuntimeObject
{
	// System.String UnityEngine.GUIContent::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Texture UnityEngine.GUIContent::m_Image
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Image_1;
	// System.String UnityEngine.GUIContent::m_Tooltip
	String_t* ___m_Tooltip_2;
};

struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_StaticFields
{
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Text
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___s_Text_3;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Image
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___s_Image_4;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_TextImage
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___s_TextImage_5;
	// UnityEngine.GUIContent UnityEngine.GUIContent::none
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___none_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshaled_pinvoke
{
	char* ___m_Text_0;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Image_1;
	char* ___m_Tooltip_2;
};
// Native definition for COM marshalling of UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshaled_com
{
	Il2CppChar* ___m_Text_0;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Image_1;
	Il2CppChar* ___m_Tooltip_2;
};

// UnityEngine.GUILayoutOption
struct GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14  : public RuntimeObject
{
	// UnityEngine.GUILayoutOption/Type UnityEngine.GUILayoutOption::type
	int32_t ___type_0;
	// System.Object UnityEngine.GUILayoutOption::value
	RuntimeObject* ___value_1;
};

// VisualDesignCafe.Nature.IndentScope
struct IndentScope_tEEB5AAFBB1CE219759931980C0A18784E5A604DC  : public RuntimeObject
{
	// VisualDesignCafe.Nature.ILog VisualDesignCafe.Nature.IndentScope::_log
	RuntimeObject* ____log_0;
	// System.Boolean VisualDesignCafe.Nature.IndentScope::_brackets
	bool ____brackets_1;
};

// VisualDesignCafe.ShaderX.Materials.LitKeywords
struct LitKeywords_t79960B8845A5F490D2B409BA1E932A5EF2CC63BD  : public RuntimeObject
{
};

// VisualDesignCafe.ShaderX.Materials.LitProperties
struct LitProperties_tF61AFEFD7B395EB31BEDF407C1E3FF75B8CEDCFA  : public RuntimeObject
{
};

// VisualDesignCafe.Nature.Logger
struct Logger_t4DF9EAAB640217BD20B383B66F93562AF54782E4  : public RuntimeObject
{
	// System.Boolean VisualDesignCafe.Nature.Logger::<Debug>k__BackingField
	bool ___U3CDebugU3Ek__BackingField_0;
	// System.String VisualDesignCafe.Nature.Logger::_prefix
	String_t* ____prefix_1;
	// System.Int32 VisualDesignCafe.Nature.Logger::_indent
	int32_t ____indent_2;
	// System.Collections.Generic.Stack`1<System.Diagnostics.Stopwatch> VisualDesignCafe.Nature.Logger::_timers
	Stack_1_t25EE16C4E420B6FB4CA506FBE4F0DD86D3CB2FB9* ____timers_3;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// VisualDesignCafe.Nature.NatureShadersConfig
struct NatureShadersConfig_t8B13CFF7F101DE7E8A941A92FA32E1D31675400E  : public RuntimeObject
{
};

struct NatureShadersConfig_t8B13CFF7F101DE7E8A941A92FA32E1D31675400E_StaticFields
{
	// System.Boolean VisualDesignCafe.Nature.NatureShadersConfig::Debug
	bool ___Debug_2;
	// System.Boolean VisualDesignCafe.Nature.NatureShadersConfig::Verbose
	bool ___Verbose_3;
	// VisualDesignCafe.Nature.Logger VisualDesignCafe.Nature.NatureShadersConfig::_logger
	Logger_t4DF9EAAB640217BD20B383B66F93562AF54782E4* ____logger_4;
};

// VisualDesignCafe.Nature.NotificationBox
struct NotificationBox_tFE81187F23AA2E251B93B075E0CD9D27A644A73A  : public RuntimeObject
{
	// System.Boolean VisualDesignCafe.Nature.NotificationBox::<IsSceneView>k__BackingField
	bool ___U3CIsSceneViewU3Ek__BackingField_0;
	// System.Single VisualDesignCafe.Nature.NotificationBox::<MarginBottom>k__BackingField
	float ___U3CMarginBottomU3Ek__BackingField_1;
	// UnityEngine.GUIContent VisualDesignCafe.Nature.NotificationBox::_title
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ____title_2;
	// UnityEngine.GUIContent VisualDesignCafe.Nature.NotificationBox::_text
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ____text_3;
	// UnityEngine.GUIContent VisualDesignCafe.Nature.NotificationBox::_buttonContent
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ____buttonContent_4;
	// System.String VisualDesignCafe.Nature.NotificationBox::_buttonUrl
	String_t* ____buttonUrl_5;
	// System.Boolean VisualDesignCafe.Nature.NotificationBox::_stylesLoaded
	bool ____stylesLoaded_6;
	// UnityEngine.GUIStyle VisualDesignCafe.Nature.NotificationBox::_backgroundStyle
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ____backgroundStyle_7;
	// UnityEngine.GUIStyle VisualDesignCafe.Nature.NotificationBox::_textStyle
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ____textStyle_8;
	// UnityEngine.GUIStyle VisualDesignCafe.Nature.NotificationBox::_titleStyle
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ____titleStyle_9;
	// UnityEngine.GUIStyle VisualDesignCafe.Nature.NotificationBox::_buttonStyle
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ____buttonStyle_10;
};

// VisualDesignCafe.Nature.QualitySettings
struct QualitySettings_t6B8D916E68845D9DB6E6CCF2EEBCD6B2FDFBB720  : public RuntimeObject
{
};

struct QualitySettings_t6B8D916E68845D9DB6E6CCF2EEBCD6B2FDFBB720_StaticFields
{
	// VisualDesignCafe.Nature.QualitySettings/InteractionQuality VisualDesignCafe.Nature.QualitySettings::Interaction
	InteractionQuality_t2FF0E0485560DCDA3D579E9951D66B6BE0691D9C* ___Interaction_0;
	// VisualDesignCafe.Nature.QualitySettings/GraphicsQuality VisualDesignCafe.Nature.QualitySettings::Graphics
	GraphicsQuality_tEC77150663125A38E81AF2C977C22DAACD11ADC2* ___Graphics_1;
	// VisualDesignCafe.Nature.QualitySettings/OverlayQuality VisualDesignCafe.Nature.QualitySettings::Overlay
	OverlayQuality_t85B45D8ED6E1BF50B54DF1A90A14F384C695DA56* ___Overlay_2;
};

// VisualDesignCafe.Nature.Interaction.ResourceManager
struct ResourceManager_tB1AFFD87A43E76F35445AA8C5C592BBC56CDF590  : public RuntimeObject
{
};

struct ResourceManager_tB1AFFD87A43E76F35445AA8C5C592BBC56CDF590_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.Object> VisualDesignCafe.Nature.Interaction.ResourceManager::_objectsToDestroy
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ____objectsToDestroy_0;
};

// VisualDesignCafe.Nature.RuntimeGlobalWindInitializer
struct RuntimeGlobalWindInitializer_t42E7C9AB78702F61DE18D7D2B3F362ED7B5FDDAD  : public RuntimeObject
{
};

// VisualDesignCafe.Nature.ShaderResources
struct ShaderResources_t0D9AB98CBAAC245E280C145954C3811E16988ECA  : public RuntimeObject
{
	// UnityEngine.Texture2D VisualDesignCafe.Nature.ShaderResources::_perlinNoise
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ____perlinNoise_3;
};

// System.Diagnostics.Stopwatch
struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043  : public RuntimeObject
{
	// System.Int64 System.Diagnostics.Stopwatch::elapsed
	int64_t ___elapsed_2;
	// System.Int64 System.Diagnostics.Stopwatch::started
	int64_t ___started_3;
	// System.Boolean System.Diagnostics.Stopwatch::is_running
	bool ___is_running_4;
};

struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_StaticFields
{
	// System.Int64 System.Diagnostics.Stopwatch::Frequency
	int64_t ___Frequency_0;
	// System.Boolean System.Diagnostics.Stopwatch::IsHighResolution
	bool ___IsHighResolution_1;
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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// VisualDesignCafe.Nature.TimerScope
struct TimerScope_t02309056955DBD21C84793891CCD0155AF7DE187  : public RuntimeObject
{
	// VisualDesignCafe.Nature.ILog VisualDesignCafe.Nature.TimerScope::_log
	RuntimeObject* ____log_0;
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

// UnityEngine.GUI/Scope
struct Scope_tABBE889955F6CDF247A79D23BD517171F1C971DD  : public RuntimeObject
{
	// System.Boolean UnityEngine.GUI/Scope::m_Disposed
	bool ___m_Disposed_0;
};

// VisualDesignCafe.Nature.QualitySettings/GraphicsQuality
struct GraphicsQuality_tEC77150663125A38E81AF2C977C22DAACD11ADC2  : public RuntimeObject
{
	// System.Action`1<VisualDesignCafe.Nature.QualitySettings/GraphicsQuality> VisualDesignCafe.Nature.QualitySettings/GraphicsQuality::Changed
	Action_1_t7092C955DCB63C4B71ABEFF4198374A199F1CE5F* ___Changed_0;
	// VisualDesignCafe.Nature.QualitySettings/MaterialQuality VisualDesignCafe.Nature.QualitySettings/GraphicsQuality::<MaterialQuality>k__BackingField
	int32_t ___U3CMaterialQualityU3Ek__BackingField_1;
};

// VisualDesignCafe.Nature.QualitySettings/InteractionQuality
struct InteractionQuality_t2FF0E0485560DCDA3D579E9951D66B6BE0691D9C  : public RuntimeObject
{
	// System.Action`1<VisualDesignCafe.Nature.QualitySettings/InteractionQuality> VisualDesignCafe.Nature.QualitySettings/InteractionQuality::Changed
	Action_1_t18A965A5CD8412F57525B70C03F434E0BE590998* ___Changed_1;
	// System.Boolean VisualDesignCafe.Nature.QualitySettings/InteractionQuality::<Enabled>k__BackingField
	bool ___U3CEnabledU3Ek__BackingField_2;
	// System.Int32 VisualDesignCafe.Nature.QualitySettings/InteractionQuality::<Resolution>k__BackingField
	int32_t ___U3CResolutionU3Ek__BackingField_3;
	// System.Single VisualDesignCafe.Nature.QualitySettings/InteractionQuality::<Accuracy>k__BackingField
	float ___U3CAccuracyU3Ek__BackingField_4;
	// System.Single VisualDesignCafe.Nature.QualitySettings/InteractionQuality::<TrailPopupSpeed>k__BackingField
	float ___U3CTrailPopupSpeedU3Ek__BackingField_5;
};

// VisualDesignCafe.Nature.QualitySettings/OverlayQuality
struct OverlayQuality_t85B45D8ED6E1BF50B54DF1A90A14F384C695DA56  : public RuntimeObject
{
	// System.Action`1<VisualDesignCafe.Nature.QualitySettings/OverlayQuality> VisualDesignCafe.Nature.QualitySettings/OverlayQuality::Changed
	Action_1_tA3A3EDA5B0123A198F5499DD1DD4245C6479E02F* ___Changed_1;
	// System.Boolean VisualDesignCafe.Nature.QualitySettings/OverlayQuality::<Enabled>k__BackingField
	bool ___U3CEnabledU3Ek__BackingField_2;
	// System.Int32 VisualDesignCafe.Nature.QualitySettings/OverlayQuality::<Resolution>k__BackingField
	int32_t ___U3CResolutionU3Ek__BackingField_3;
	// System.Single VisualDesignCafe.Nature.QualitySettings/OverlayQuality::<Accuracy>k__BackingField
	float ___U3CAccuracyU3Ek__BackingField_4;
};

// VisualDesignCafe.Nature.RuntimeGlobalWindInitializer/<>c
struct U3CU3Ec_tD5AAFC1F780554421A1EE79F5B54FF94A14ED5D4  : public RuntimeObject
{
};

struct U3CU3Ec_tD5AAFC1F780554421A1EE79F5B54FF94A14ED5D4_StaticFields
{
	// VisualDesignCafe.Nature.RuntimeGlobalWindInitializer/<>c VisualDesignCafe.Nature.RuntimeGlobalWindInitializer/<>c::<>9
	U3CU3Ec_tD5AAFC1F780554421A1EE79F5B54FF94A14ED5D4* ___U3CU3E9_0;
	// System.Func`2<UnityEngine.GameObject,System.Boolean> VisualDesignCafe.Nature.RuntimeGlobalWindInitializer/<>c::<>9__1_0
	Func_2_tD5855DA3DC1C614C29762075E12B0B72B8B1F51C* ___U3CU3E9__1_0_1;
};

// VisualDesignCafe.Nature.ShaderResources/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_tB7817BF36D3F1C02C3DAFE1C57BF9C90AEFEE55A  : public RuntimeObject
{
	// System.Int32 VisualDesignCafe.Nature.ShaderResources/<>c__DisplayClass8_0::blockSize
	int32_t ___blockSize_0;
	// System.Int32 VisualDesignCafe.Nature.ShaderResources/<>c__DisplayClass8_0::textureHeightInt
	int32_t ___textureHeightInt_1;
	// System.Single VisualDesignCafe.Nature.ShaderResources/<>c__DisplayClass8_0::textureWidth
	float ___textureWidth_2;
	// System.Single VisualDesignCafe.Nature.ShaderResources/<>c__DisplayClass8_0::textureHeight
	float ___textureHeight_3;
	// UnityEngine.Color[] VisualDesignCafe.Nature.ShaderResources/<>c__DisplayClass8_0::pixels
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___pixels_4;
	// System.Int32 VisualDesignCafe.Nature.ShaderResources/<>c__DisplayClass8_0::textureWidthInt
	int32_t ___textureWidthInt_5;
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

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Object>
struct Enumerator_tE4F8BFD8BC4B29A1F907A500BE1A39F6AEECF80E 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____current_3;
};

// System.Nullable`1<System.Int64>
struct Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int64_t ___value_1;
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

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
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

// VisualDesignCafe.ShaderX.Materials.LitMaterial
struct LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080  : public BaseMaterial_t75CEB54A6E97E52D865A51213E7D5A13D93DB7B2
{
};

// VisualDesignCafe.Nature.NatureKeywords
struct NatureKeywords_tBFBA1E002F6B3B15A55786BAD12487D9A339F693  : public LitKeywords_t79960B8845A5F490D2B409BA1E932A5EF2CC63BD
{
};

// VisualDesignCafe.Nature.NatureProperties
struct NatureProperties_t7365834912C7221456DDE3B30DA0847336A202B1  : public LitProperties_tF61AFEFD7B395EB31BEDF407C1E3FF75B8CEDCFA
{
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

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
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

// UnityEngine.GUILayout/AreaScope
struct AreaScope_tFC337E3FECDEFD1C5546291EED65F7DA6CCCA50D  : public Scope_tABBE889955F6CDF247A79D23BD517171F1C971DD
{
};

// UnityEngine.GUILayout/HorizontalScope
struct HorizontalScope_t4007A61F85EEE56F34C66A864C60DF1B54975487  : public Scope_tABBE889955F6CDF247A79D23BD517171F1C971DD
{
};

// UnityEngine.GUILayout/VerticalScope
struct VerticalScope_t9ACF880A56D5C3E83E431ED09DCA4FBAC9F832BC  : public Scope_tABBE889955F6CDF247A79D23BD517171F1C971DD
{
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

// UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95  : public RuntimeObject
{
	// System.IntPtr UnityEngine.GUIStyleState::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyle UnityEngine.GUIStyleState::m_SourceStyle
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_SourceStyle_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com* ___m_SourceStyle_1;
};

// VisualDesignCafe.Nature.NatureMaterial
struct NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA  : public LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080
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

// System.Threading.Tasks.ParallelLoopResult
struct ParallelLoopResult_t9C383DA248DA9082ECBF057DE0879AB99EE6A734 
{
	// System.Boolean System.Threading.Tasks.ParallelLoopResult::_completed
	bool ____completed_0;
	// System.Nullable`1<System.Int64> System.Threading.Tasks.ParallelLoopResult::_lowestBreakIteration
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ____lowestBreakIteration_1;
};
// Native definition for P/Invoke marshalling of System.Threading.Tasks.ParallelLoopResult
struct ParallelLoopResult_t9C383DA248DA9082ECBF057DE0879AB99EE6A734_marshaled_pinvoke
{
	int32_t ____completed_0;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ____lowestBreakIteration_1;
};
// Native definition for COM marshalling of System.Threading.Tasks.ParallelLoopResult
struct ParallelLoopResult_t9C383DA248DA9082ECBF057DE0879AB99EE6A734_marshaled_com
{
	int32_t ____completed_0;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ____lowestBreakIteration_1;
};

// System.Threading.Tasks.ParallelOptions
struct ParallelOptions_tB544CD8AB0089AA9973F610B95F7CA93E4A441D2  : public RuntimeObject
{
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.ParallelOptions::_scheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ____scheduler_0;
	// System.Int32 System.Threading.Tasks.ParallelOptions::_maxDegreeOfParallelism
	int32_t ____maxDegreeOfParallelism_1;
	// System.Threading.CancellationToken System.Threading.Tasks.ParallelOptions::_cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ____cancellationToken_2;
};

// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5  : public RuntimeObject
{
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject* ___m_SourceStyle_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// VisualDesignCafe.Nature.WindSettings
struct WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23 
{
	// UnityEngine.Vector2 VisualDesignCafe.Nature.WindSettings::WindDirection
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___WindDirection_0;
	// System.Single VisualDesignCafe.Nature.WindSettings::WindStrength
	float ___WindStrength_1;
	// System.Single VisualDesignCafe.Nature.WindSettings::WindSpeed
	float ___WindSpeed_2;
	// System.Single VisualDesignCafe.Nature.WindSettings::Turbulence
	float ___Turbulence_3;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580  : public RuntimeObject
{
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Overflow_12;
	// System.String UnityEngine.GUIStyle::m_Name
	String_t* ___m_Name_13;
};

struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_StaticFields
{
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___s_None_15;
};
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Border_9;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Padding_10;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Margin_11;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Overflow_12;
	char* ___m_Name_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Normal_1;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Hover_2;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Active_3;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Focused_4;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnHover_6;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnActive_7;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnFocused_8;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Border_9;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Padding_10;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Margin_11;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Overflow_12;
	Il2CppChar* ___m_Name_13;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<VisualDesignCafe.Nature.QualitySettings/GraphicsQuality>
struct Action_1_t7092C955DCB63C4B71ABEFF4198374A199F1CE5F  : public MulticastDelegate_t
{
};

// System.Action`1<VisualDesignCafe.Nature.QualitySettings/InteractionQuality>
struct Action_1_t18A965A5CD8412F57525B70C03F434E0BE590998  : public MulticastDelegate_t
{
};

// System.Action`1<VisualDesignCafe.Nature.QualitySettings/OverlayQuality>
struct Action_1_tA3A3EDA5B0123A198F5499DD1DD4245C6479E02F  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.GameObject,System.Boolean>
struct Func_2_tD5855DA3DC1C614C29762075E12B0B72B8B1F51C  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>
struct UnityAction_2_t3E619780AA870611658EC8B01DA6EA2EC42B13CE  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.GUISkin
struct GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Font UnityEngine.GUISkin::m_Font
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font_4;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_box
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_box_5;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_button
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_button_6;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_toggle
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_toggle_7;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_label
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_label_8;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textField
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_textField_9;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textArea
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_textArea_10;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_window
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_window_11;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSlider
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalSlider_12;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalSliderThumb_13;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumbExtent
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalSliderThumbExtent_14;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSlider
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalSlider_15;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalSliderThumb_16;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumbExtent
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalSliderThumbExtent_17;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_SliderMixed
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_SliderMixed_18;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbar
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbar_19;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbarThumb_20;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarLeftButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbarLeftButton_21;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarRightButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbarRightButton_22;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbar
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbar_23;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbarThumb_24;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarUpButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbarUpButton_25;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarDownButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbarDownButton_26;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_ScrollView
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_ScrollView_27;
	// UnityEngine.GUIStyle[] UnityEngine.GUISkin::m_CustomStyles
	GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC* ___m_CustomStyles_28;
	// UnityEngine.GUISettings UnityEngine.GUISkin::m_Settings
	GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847* ___m_Settings_29;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle> UnityEngine.GUISkin::m_Styles
	Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* ___m_Styles_31;
};

struct GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_StaticFields
{
	// UnityEngine.GUIStyle UnityEngine.GUISkin::ms_Error
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___ms_Error_30;
	// UnityEngine.GUISkin/SkinChangedDelegate UnityEngine.GUISkin::m_SkinChanged
	SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98* ___m_SkinChanged_32;
	// UnityEngine.GUISkin UnityEngine.GUISkin::current
	GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* ___current_33;
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

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// VisualDesignCafe.Nature.GlobalWind
struct GlobalWind_tF5FCFBD4CBCAF95A274AE76E9919815030D57B39  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// VisualDesignCafe.Nature.WindSettings VisualDesignCafe.Nature.GlobalWind::_windSettings
	WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23 ____windSettings_5;
	// UnityEngine.WindZone VisualDesignCafe.Nature.GlobalWind::_sourceWindZone
	WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* ____sourceWindZone_6;
	// UnityEngine.Texture2D VisualDesignCafe.Nature.GlobalWind::_gustNoise
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ____gustNoise_7;
	// System.Int32 VisualDesignCafe.Nature.GlobalWind::_selectedPreset
	int32_t ____selectedPreset_8;
	// UnityEngine.Quaternion VisualDesignCafe.Nature.GlobalWind::_cachedRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ____cachedRotation_9;
	// System.Single VisualDesignCafe.Nature.GlobalWind::_cachedWindMain
	float ____cachedWindMain_10;
	// System.Single VisualDesignCafe.Nature.GlobalWind::_cachedWindPulseFrequency
	float ____cachedWindPulseFrequency_11;
	// System.Single VisualDesignCafe.Nature.GlobalWind::_cachedWindTurbulence
	float ____cachedWindTurbulence_12;
	// System.Double VisualDesignCafe.Nature.GlobalWind::_smoothWindOffset
	double ____smoothWindOffset_13;
	// System.Double VisualDesignCafe.Nature.GlobalWind::_cachedTime
	double ____cachedTime_14;
};

struct GlobalWind_tF5FCFBD4CBCAF95A274AE76E9919815030D57B39_StaticFields
{
	// VisualDesignCafe.Nature.GlobalWind VisualDesignCafe.Nature.GlobalWind::<Instance>k__BackingField
	GlobalWind_tF5FCFBD4CBCAF95A274AE76E9919815030D57B39* ___U3CInstanceU3Ek__BackingField_4;
};

// VisualDesignCafe.Nature.Interaction.NatureCollider
struct NatureCollider_tB243C426E635A8BE6CD0B7B8A2AEE5792A0DC0F5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// VisualDesignCafe.Nature.Overlay.NatureOverlay
struct NatureOverlay_t1E132A12D5EDFD2A92ED7681ECEF050DF4D7BF41  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// VisualDesignCafe.Nature.RuntimeEntryPoint
struct RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// VisualDesignCafe.Nature.ShaderResources VisualDesignCafe.Nature.RuntimeEntryPoint::_shaderResources
	ShaderResources_t0D9AB98CBAAC245E280C145954C3811E16988ECA* ____shaderResources_5;
	// System.Boolean VisualDesignCafe.Nature.RuntimeEntryPoint::_isDestroyed
	bool ____isDestroyed_6;
};

struct RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967_StaticFields
{
	// VisualDesignCafe.Nature.RuntimeEntryPoint VisualDesignCafe.Nature.RuntimeEntryPoint::_entryPoint
	RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967* ____entryPoint_4;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
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
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2  : public RuntimeArray
{
	ALIGN_FIELD (8) GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* m_Items[1];

	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// VisualDesignCafe.Nature.RuntimeEntryPoint[]
struct RuntimeEntryPointU5BU5D_t594D90D3D35666CEFC4AC17F21284AE3688B7634  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967* m_Items[1];

	inline RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389  : public RuntimeArray
{
	ALIGN_FIELD (8) Color_tD001788D726C3A7F1379BEED0260B9591F440C1F m_Items[1];

	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		m_Items[index] = value;
	}
};


// T System.Collections.Generic.Stack`1<System.Object>::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_Peek_mF0ECF6A61726B66E6D9B33D8C4DEAA47E586E6E4_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m70E8EDA96A608CE9BAB7FC8313B233AADA573BD4_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Object_FindObjectsOfType_TisRuntimeObject_m1E6D851F6A46D646E0554A94729E9AAE79B0E87A_gshared (const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m0C555E922D7495D9C81347C4CC01080514601692_gshared (UnityAction_2_t3E619780AA870611658EC8B01DA6EA2EC42B13CE* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_FirstOrDefault_TisRuntimeObject_m89A7FC9E77581DB0D6C05F91BD328EDCA61A19BA_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInChildren_TisRuntimeObject_mF44830CCE504347DFE1E61EC5F4E02A407D8122C_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___includeInactive0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87_gshared (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Nature.WindSettings::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindSettings_Apply_m5FBA1B2E1C870A569ECB4824EF8B927D526DF999 (WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23* __this, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Nature.GlobalWind::UpdateDirection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalWind_UpdateDirection_m7ADA3E28E1D92CF0DBF9706D337D81509E216272 (GlobalWind_tF5FCFBD4CBCAF95A274AE76E9919815030D57B39* __this, bool ___useCache0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Nature.GlobalWind::ValidateWindZone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalWind_ValidateWindZone_mED57F62DA786E786105C7364538600FE7675DB98 (GlobalWind_tF5FCFBD4CBCAF95A274AE76E9919815030D57B39* __this, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Nature.GlobalWind::CopyAndApply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalWind_CopyAndApply_m7659F1F231437446DC99BA7BBB5D76E47E5E0AA6 (GlobalWind_tF5FCFBD4CBCAF95A274AE76E9919815030D57B39* __this, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Nature.WindSettings::Apply(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindSettings_Apply_mD5A012EEEF00ECDB00B7ACB17E16BC97B6C5E5B4 (WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___gustNoise0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Shader::SetGlobalVector(System.String,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shader_SetGlobalVector_m885C9E39C787CA6F54E002C12E3D4280C353E438 (String_t* ___name0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value1, const RuntimeMethod* method) ;
// VisualDesignCafe.Nature.WindSettings VisualDesignCafe.Nature.GlobalWind::get_Settings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23 GlobalWind_get_Settings_m813CFB943FE51D6952978E6EFB02D0142FBE2A46 (GlobalWind_tF5FCFBD4CBCAF95A274AE76E9919815030D57B39* __this, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Nature.GlobalWind::set_Instance(VisualDesignCafe.Nature.GlobalWind)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GlobalWind_set_Instance_mB042DD4A9A7DD114113B30F9E885B7D7621AB188_inline (GlobalWind_tF5FCFBD4CBCAF95A274AE76E9919815030D57B39* ___value0, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Nature.GlobalWind::CopyFromWindZone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalWind_CopyFromWindZone_m5CB9E51EF6CE3C842619DD069AF6A59CF59AA862 (GlobalWind_tF5FCFBD4CBCAF95A274AE76E9919815030D57B39* __this, const RuntimeMethod* method) ;
// System.Boolean VisualDesignCafe.Nature.GlobalWind::WindZoneHasChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GlobalWind_WindZoneHasChanged_mFC4A0E2CFDEE191BF2F10A1C71271DDF3F7ABC0F (GlobalWind_tF5FCFBD4CBCAF95A274AE76E9919815030D57B39* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3 (const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Nature.GlobalWind::UpdateTime(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalWind_UpdateTime_m46D653F644373BE9DEB13DEB4D73A501A4B68EC3 (GlobalWind_tF5FCFBD4CBCAF95A274AE76E9919815030D57B39* __this, double ___time0, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Nature.GlobalWind::CacheWindZoneProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalWind_CacheWindZoneProperties_mBD6F9AD4CD3BF46F876EED5EAA81877201C465A7 (GlobalWind_tF5FCFBD4CBCAF95A274AE76E9919815030D57B39* __this, const RuntimeMethod* method) ;
// VisualDesignCafe.Nature.WindSettings VisualDesignCafe.Nature.WindSettings::FromWindZone(UnityEngine.WindZone)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23 WindSettings_FromWindZone_m50D8666521886AF2D62EDCFF697FC2E6D3BBB8B8 (WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* ___windZone0, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Nature.GlobalWind::set_Settings(VisualDesignCafe.Nature.WindSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalWind_set_Settings_m7C1591264853ADA793587F5FFB475ACC3A031B32 (GlobalWind_tF5FCFBD4CBCAF95A274AE76E9919815030D57B39* __this, WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Quaternion::op_Inequality(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Inequality_mC1922F160B14F6F404E46FFCC10B282D913BE354_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// System.Single UnityEngine.WindZone::get_windMain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WindZone_get_windMain_m49480166CDE759C98498B951148535FCCED788C0 (WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.WindZone::get_windPulseFrequency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WindZone_get_windPulseFrequency_mE95A49751644837A6668834E41F76D66C7E8173C (WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.WindZone::get_windTurbulence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WindZone_get_windTurbulence_mB7D83DE60E30847971D13C6601C46F14839F8448 (WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* __this, const RuntimeMethod* method) ;
// UnityEngine.WindZoneMode UnityEngine.WindZone::get_mode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindZone_get_mode_mE2B2472178BD6B397D1C9AEF225A38B7AC148FE7 (WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* __this, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m5C8299150E64600CBF5C92706AD610C21D0C0DC5 (RuntimeObject* ___message0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Quaternion::op_Equality(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Equality_m3DF1D708D3A0AFB11EACF42A9C068EF6DC508FBB_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 VisualDesignCafe.Nature.WindSettings::RotationToDirection(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 WindSettings_RotationToDirection_mA32CA352C60056E7E5F8077E1EEA80FD7623194D (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___quaternion0, const RuntimeMethod* method) ;
// VisualDesignCafe.Nature.WindSettings VisualDesignCafe.Nature.WindSettings::get_Calm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23 WindSettings_get_Calm_m69AD33EEED0088F6E7F67884E85F1C23CFFDB6BC (const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.ShaderX.Materials.LitKeywords::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LitKeywords__ctor_m72C0EB17EF959387A33C68F55164ED473D28081E (LitKeywords_t79960B8845A5F490D2B409BA1E932A5EF2CC63BD* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector4 VisualDesignCafe.ShaderX.Materials.BaseMaterial::TryGetVector(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 BaseMaterial_TryGetVector_m143D6BDE769623CFDEEC4C244B76F1F137537090 (BaseMaterial_t75CEB54A6E97E52D865A51213E7D5A13D93DB7B2* __this, String_t* ___propertyName0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector4_op_Implicit_m2D6D6CC60982A88F7B77B5D0452F1E1652C412A2_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_m6162D8136CFE97A5A8BD3B764F9074DB96AA5CD0_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Boolean VisualDesignCafe.ShaderX.Materials.BaseMaterial::TrySetVector(System.String,UnityEngine.Vector4,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseMaterial_TrySetVector_m45F536CB1E4EBC84AF5827183AF5282139B0597B (BaseMaterial_t75CEB54A6E97E52D865A51213E7D5A13D93DB7B2* __this, String_t* ___propertyName0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value1, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___validate2, const RuntimeMethod* method) ;
// System.Single VisualDesignCafe.ShaderX.Materials.BaseMaterial::TryGetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BaseMaterial_TryGetFloat_m0DE38E1A44D929C9D0C195D77FD094609A54266D (BaseMaterial_t75CEB54A6E97E52D865A51213E7D5A13D93DB7B2* __this, String_t* ___propertyName0, const RuntimeMethod* method) ;
// System.Boolean VisualDesignCafe.ShaderX.Materials.BaseMaterial::TrySetFloat(System.String,System.Single,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseMaterial_TrySetFloat_m3EA239D22D66BBAB3E08A9BEDAC1E764E2B864AF (BaseMaterial_t75CEB54A6E97E52D865A51213E7D5A13D93DB7B2* __this, String_t* ___propertyName0, float ___value1, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___validate2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector4_op_Implicit_m2EC16C74D768EEAA9BBC40DA11337F912014FC57_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_mB05287DC52FC87A756AB80E837E1EC22FEEB3937_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Color VisualDesignCafe.ShaderX.Materials.BaseMaterial::TryGetColor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F BaseMaterial_TryGetColor_m94A74823DA49D2B3BF061BFFF790211DCDABFB7E (BaseMaterial_t75CEB54A6E97E52D865A51213E7D5A13D93DB7B2* __this, String_t* ___propertyName0, const RuntimeMethod* method) ;
// System.Boolean VisualDesignCafe.ShaderX.Materials.BaseMaterial::TrySetColor(System.String,UnityEngine.Color,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseMaterial_TrySetColor_m69373663B82D54BE91DF90598FB3603BA830C00D (BaseMaterial_t75CEB54A6E97E52D865A51213E7D5A13D93DB7B2* __this, String_t* ___propertyName0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value1, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___validate2, const RuntimeMethod* method) ;
// UnityEngine.Texture VisualDesignCafe.ShaderX.Materials.BaseMaterial::TryGetTexture(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* BaseMaterial_TryGetTexture_m87D64B52B053AEF87CD64078CD4F28E1C6428CED (BaseMaterial_t75CEB54A6E97E52D865A51213E7D5A13D93DB7B2* __this, String_t* ___propertyName0, const RuntimeMethod* method) ;
// System.Boolean VisualDesignCafe.ShaderX.Materials.BaseMaterial::TrySetTexture(System.String,UnityEngine.Texture,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseMaterial_TrySetTexture_m3698AAFD35350A34A92081127786856F06B5B5AF (BaseMaterial_t75CEB54A6E97E52D865A51213E7D5A13D93DB7B2* __this, String_t* ___propertyName0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value1, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___validate2, const RuntimeMethod* method) ;
// System.Boolean VisualDesignCafe.Nature.NatureMaterial::get_WindEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NatureMaterial_get_WindEnabled_mD0DDD071E10EC482F2835232635CBCCE48EB22EA (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) ;
// System.Boolean VisualDesignCafe.Nature.NatureMaterial::get_BakedMeshData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NatureMaterial_get_BakedMeshData_m5602CE4AC335BFFF42D6A859DA18FAD3C48FA5BA (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Nature.NatureMaterial::set_WindEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_set_WindEnabled_mF70F0023C0E4079BB7D860FAFAE81CB25D9049A5 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Nature.NatureMaterial::set_BakedMeshData(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_set_BakedMeshData_m9DDA7CEA34910A3196E7E333ED412E308DC870CA (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.String VisualDesignCafe.Nature.NatureMaterial::ConvertVector4ToGUID(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NatureMaterial_ConvertVector4ToGUID_m2FF9558CF55D899FEBCBA2189E8D1B2D20404E48 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector4 VisualDesignCafe.Nature.NatureMaterial::ConvertGUIDToVector4(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 NatureMaterial_ConvertGUIDToVector4_mC06C6023399616AC64B444E0BFC4FE27356C1446 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, String_t* ___guid0, const RuntimeMethod* method) ;
// System.UInt32 VisualDesignCafe.Nature.NatureMaterial::GetDiffusionProfileHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NatureMaterial_GetDiffusionProfileHash_m1575F0FE313B7EDF367611067ABB683D6B881103 (String_t* ___assetGuid0, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Nature.NatureMaterial::set_DiffusionProfileHash(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_set_DiffusionProfileHash_m7E4A34BF1BE085DB9F0B3E8B53140EDC0927A75A (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, uint32_t ___value0, const RuntimeMethod* method) ;
// System.UInt32 VisualDesignCafe.Nature.NatureMaterial::Asuint(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NatureMaterial_Asuint_m932FAED75B94AEA7391908B2291E0D2502BAD999 (float ___val0, const RuntimeMethod* method) ;
// System.Single VisualDesignCafe.Nature.NatureMaterial::Asfloat(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NatureMaterial_Asfloat_m76D5BFD6A89289C9305BE49EA80BD2600D9E4CB3 (uint32_t ___val0, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.ShaderX.Materials.LitMaterial::.ctor(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LitMaterial__ctor_m31E602B441C3B61AF27CE0324AD08BE027C38A33 (LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.ShaderX.Materials.LitMaterial::Validate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LitMaterial_Validate_m130B7BEAEC069AE834C231DD3B18C7250C98B5C3 (LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* __this, bool ___clean0, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Nature.NatureMaterial::ValidateColorCorrection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_ValidateColorCorrection_mE9A09CBCFC3C0301FB3F6EE3BB1EC7F934425485 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Nature.NatureMaterial::ValidateMeshData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_ValidateMeshData_mCD60BD0238D0C4155F69B7D0484153B3C1DB0DDE (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Nature.NatureMaterial::ValidateWind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_ValidateWind_m0C00F9E684536A0B8EE00F8D4DE0F65E41F7AFB8 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Nature.NatureMaterial::ValidateInteraction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_ValidateInteraction_m954E946F9EC720314D4AD615DB481D0A3CB6DAEC (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Nature.NatureMaterial::ValidateOverlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_ValidateOverlay_m19AE5E00A8FF5A635FE56B58F38CA52203EC29C2 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Nature.NatureMaterial::ValidateTranslucency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_ValidateTranslucency_mA167A8721EF68961A0DC6AD1856E47A69742E073 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Nature.NatureMaterial::ValidateLightingQuality()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_ValidateLightingQuality_m48E9B7566659B7B46A5324D637D1B88FAA34E557 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Nature.NatureMaterial::ValidateSecondaryMaps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_ValidateSecondaryMaps_m50339D2453ECA45C7FC852E122E55F3DE4B5A8E0 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) ;
// System.Boolean VisualDesignCafe.ShaderX.Materials.BaseMaterial::GetKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseMaterial_GetKeyword_mE9ADE2DA9179CD345B093DDC34A69FA5F572E746 (BaseMaterial_t75CEB54A6E97E52D865A51213E7D5A13D93DB7B2* __this, String_t* ___keyword0, const RuntimeMethod* method) ;
// System.Boolean VisualDesignCafe.ShaderX.Materials.LitMaterial::get_TemporalAntiAliasing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LitMaterial_get_TemporalAntiAliasing_m4C2505672C0FCAB5DC6A3B8008E9A5C60F1ECB1C (LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* __this, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.ShaderX.Materials.BaseMaterial::SetKeyword(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMaterial_SetKeyword_m5DC6D210EDBE262DC9DFD535C87459576F55A329 (BaseMaterial_t75CEB54A6E97E52D865A51213E7D5A13D93DB7B2* __this, String_t* ___keyword0, bool ___isEnabled1, const RuntimeMethod* method) ;
// VisualDesignCafe.Nature.NatureMaterial/ColorCorrectionMode VisualDesignCafe.Nature.NatureMaterial::get_ColorCorrection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NatureMaterial_get_ColorCorrection_m7DE782A925D0071AD2BFFAF0F14076C697BFD5DC (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) ;
// System.Single VisualDesignCafe.Nature.NatureMaterial::get_Interaction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NatureMaterial_get_Interaction_m57F9446ACF8936B5D5F884F4B8B3289484C73F85 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) ;
// System.Boolean VisualDesignCafe.Nature.NatureMaterial::get_Overlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NatureMaterial_get_Overlay_m23ED466ECA0E9A5F963029CE02B8AA1759548FE0 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Material::HasProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Material_HasProperty_mC09A83B44E368A217F606DD4954FA080CC03EC6C (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean VisualDesignCafe.Nature.NatureMaterial::get_Translucency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NatureMaterial_get_Translucency_mA939969E3C63862E22DDCF3BB39FE7B9FA9DC726 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) ;
// System.Single VisualDesignCafe.Nature.NatureMaterial::get_TranslucencyStrength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NatureMaterial_get_TranslucencyStrength_mD8F490822211B4CCB6EDA3CE09654343B70F8047 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture VisualDesignCafe.Nature.NatureMaterial::get_ThicknessMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* NatureMaterial_get_ThicknessMap_m88F38A8E9BE2039DB882F05CBD988F5EEDE9F6A0 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// VisualDesignCafe.Nature.NatureMaterial/LightingQuality VisualDesignCafe.Nature.NatureMaterial::get_Lighting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NatureMaterial_get_Lighting_m29EEE0B0FB6706B8AE6B2852114B68908EA2DC64 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) ;
// VisualDesignCafe.ShaderX.Materials.LitMaterial/SurfaceMapMethod VisualDesignCafe.ShaderX.Materials.LitMaterial::get_SurfaceMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LitMaterial_get_SurfaceMap_mB89C14EBAEE3AE9617DEA1B4B17BE9C53345ED57 (LitMaterial_tA1E8DCD1C342306C4C4C42ABF451885807E50080* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture VisualDesignCafe.Nature.NatureMaterial::get_SecondaryMetallicGlossMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* NatureMaterial_get_SecondaryMetallicGlossMap_m092955F78D4AE4EDDC299114BC40E97E6C415C97 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture VisualDesignCafe.Nature.NatureMaterial::get_SecondaryOcclusionMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* NatureMaterial_get_SecondaryOcclusionMap_mEC2CB6723B8D7287F25CE6F218F642F93D89E6D8 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture VisualDesignCafe.Nature.NatureMaterial::get_SecondaryPackedMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* NatureMaterial_get_SecondaryPackedMap_mA38FA3CBA481F1E3E2F9851D353D5AC332B3CC1A (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture VisualDesignCafe.Nature.NatureMaterial::get_SecondaryNormalMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* NatureMaterial_get_SecondaryNormalMap_mF361E54E10EB5664EE7620646D3D3690C14C89FE (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture VisualDesignCafe.Nature.NatureMaterial::get_SecondaryAlbedoMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* NatureMaterial_get_SecondaryAlbedoMap_mD95C105DDACDA76C6BAA39E605F7D6E2C8BE5002 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) ;
// System.Single VisualDesignCafe.Nature.NatureMaterial::get_SecondaryMaps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NatureMaterial_get_SecondaryMaps_m85564065238011AE1DD55DDEA1BDF441A8F3CEA0 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Byte System.Byte::Parse(System.String,System.Globalization.NumberStyles)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Byte_Parse_m1D565A1D1F7DF553B5F6CF87AC883B9BE0A6A2D3 (String_t* ___s0, int32_t ___style1, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.String System.Byte::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Byte_ToString_m793A41EEEB7B422F6FE658E99D2F7683F59EE310 (uint8_t* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.IntPtr System.IntPtr::op_Explicit(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_m04BEF6277775C13DD8A986812AAA3FCEC32DCCBE (void* ___value0, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m92700C9E60BAB2FDAF6CE02C16EFE9DCB7D6035E (intptr_t ___source0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___destination1, int32_t ___startIndex2, int32_t ___length3, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.ShaderX.Materials.LitProperties::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LitProperties__ctor_m61E5FDF87043C7F8B9361FF174B6A8EE3BAF2DF1 (LitProperties_tF61AFEFD7B395EB31BEDF407C1E3FF75B8CEDCFA* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Diagnostics.Stopwatch>::Peek()
inline Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* Stack_1_Peek_m1618BCC889EC84BED1EF8009AEF6742B96FE5D79 (Stack_1_t25EE16C4E420B6FB4CA506FBE4F0DD86D3CB2FB9* __this, const RuntimeMethod* method)
{
	return ((  Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* (*) (Stack_1_t25EE16C4E420B6FB4CA506FBE4F0DD86D3CB2FB9*, const RuntimeMethod*))Stack_1_Peek_mF0ECF6A61726B66E6D9B33D8C4DEAA47E586E6E4_gshared)(__this, method);
}
// System.Int64 System.Diagnostics.Stopwatch::get_ElapsedMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Stopwatch_get_ElapsedMilliseconds_m8D8E60ADEB47D008C06D8E57D28D41EAE07AECBF (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Diagnostics.Stopwatch>::.ctor()
inline void Stack_1__ctor_m39A6CD40BE1876549D724FD092977E7BC19BD4E5 (Stack_1_t25EE16C4E420B6FB4CA506FBE4F0DD86D3CB2FB9* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t25EE16C4E420B6FB4CA506FBE4F0DD86D3CB2FB9*, const RuntimeMethod*))Stack_1__ctor_m70E8EDA96A608CE9BAB7FC8313B233AADA573BD4_gshared)(__this, method);
}
// System.Void System.Diagnostics.Stopwatch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch__ctor_mAFE6B2F45CF1C3469EF6D5307972BC098B473D0A (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Diagnostics.Stopwatch>::Push(T)
inline void Stack_1_Push_m49E0F66D4565C0F72BB3532C81EF6E369CDF5ADF (Stack_1_t25EE16C4E420B6FB4CA506FBE4F0DD86D3CB2FB9* __this, Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t25EE16C4E420B6FB4CA506FBE4F0DD86D3CB2FB9*, Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043*, const RuntimeMethod*))Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared)(__this, ___item0, method);
}
// System.Void System.Diagnostics.Stopwatch::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Start_m35906A38C7D336CF9DD35854C7E170D762A55915 (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Diagnostics.Stopwatch>::Pop()
inline Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* Stack_1_Pop_m0316352BB52A08E4E4B7098FD7A645A9D830CB04 (Stack_1_t25EE16C4E420B6FB4CA506FBE4F0DD86D3CB2FB9* __this, const RuntimeMethod* method)
{
	return ((  Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* (*) (Stack_1_t25EE16C4E420B6FB4CA506FBE4F0DD86D3CB2FB9*, const RuntimeMethod*))Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared)(__this, method);
}
// System.Void System.Diagnostics.Stopwatch::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Stop_m8F2A2EFD9D7D5B4180A5E5379E5443864618D7DC (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) ;
// System.String VisualDesignCafe.Nature.Logger::GetIndent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Logger_GetIndent_m3C6A07D49F2E998C932DED53A08E5B2EADE066B8 (Logger_t4DF9EAAB640217BD20B383B66F93562AF54782E4* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarningFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarningFormat_m0D4A31935564D0FA042103C1231DBBD2ED0BC20A (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogErrorFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogErrorFormat_mA33C95EF832A60D72A7EE26074E13A86BE7E30C6 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Boolean VisualDesignCafe.Nature.Logger::get_Debug()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Logger_get_Debug_m4821830C62DAD7C94D5B9B72E7F94C09BA11E72E_inline (Logger_t4DF9EAAB640217BD20B383B66F93562AF54782E4* __this, const RuntimeMethod* method) ;
// System.String System.String::CreateString(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mAA0705B41B390BDB42F67894B9B67C956814C71B (String_t* __this, Il2CppChar ___c0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Nature.Logger::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger__ctor_m269E386D119D59B4547E0715D890CF207F0EDB32 (Logger_t4DF9EAAB640217BD20B383B66F93562AF54782E4* __this, String_t* ___prefix0, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Nature.Logger::set_Debug(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Logger_set_Debug_mEDD96EF8C2219B8FAE6415D40598DBE461CEC9D8_inline (Logger_t4DF9EAAB640217BD20B383B66F93562AF54782E4* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIContent::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent__ctor_mD2BDF82C1E1F75DEEF36F2C8EDB60FFB49EE4DBC (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* __this, String_t* ___text0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* GUIStyle_get_normal_mDEA2808FBD692E505784BD9E521738B4321BCA8F (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture2D UnityEngine.Texture2D::get_whiteTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* Texture2D_get_whiteTexture_m7999084E0B635CF834F8DD2D840FAA71720404DA (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyleState::set_background(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_set_background_mD92FC76F8956A8EBB022C3E8EA02822D79F451C4 (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectOffset::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectOffset__ctor_m30E309D1C1C0864870686683EF1FCA8DA791D179 (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* __this, int32_t ___left0, int32_t ___right1, int32_t ___top2, int32_t ___bottom3, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::set_padding(UnityEngine.RectOffset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_padding_m0C69415588C6032B372A48B1A1366CF43A083E14 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::set_margin(UnityEngine.RectOffset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_margin_m9AAB6691C260ECD89195BE151F2ADDBF2E740C85 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___value0, const RuntimeMethod* method) ;
// UnityEngine.GUIStyle UnityEngine.GUIStyle::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUIStyle_op_Implicit_m67078950FC601939AC9678CAEDE8E171B812AE89 (String_t* ___str0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::.ctor(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle__ctor_m17492C8BACB0D28C7701C11500A7132F11B5F04E (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___other0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::set_stretchHeight(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_stretchHeight_m51C55ED43AA4EDE125E0C423FA0D301E81C09378 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* GUI_get_skin_m65083FBB1A0F6F33052E2AED126DD43FA34653B1 (const RuntimeMethod* method) ;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_label()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_label_m99E1A8D6D8592F88F581437D24DB1EDE05C63E5E (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_m0377DB707B566C8E21DA3CD99963210F6D57D234 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::set_fontSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_fontSize_m7F6DFD61AC55072C95DC3825B77FAE3F75F1CCFF (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::set_fontStyle(UnityEngine.FontStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_fontStyle_m4166D61FBF25225F4A85BBEABCECE3F2DCEE714D (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::set_border(UnityEngine.RectOffset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_border_mA11481A8F139D4403E0764E07F49516D390CC6A7 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::set_wordWrap(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_wordWrap_m7A232701F60F4EB8FAFA57F6BAF9F94731DD009C (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyleState::set_textColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_set_textColor_m5868D12858E6402247953BCCDDA7A543BE6084F1 (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::set_richText(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_richText_m44045419099BECD812230D338FBBD6642A589CCD (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Nature.NotificationBox::LoadStyles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationBox_LoadStyles_mA53A32DD144F813FB98375AE6438F8E7EED1F68A (NotificationBox_tFE81187F23AA2E251B93B075E0CD9D27A644A73A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::CalcMinMaxWidth(UnityEngine.GUIContent,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_CalcMinMaxWidth_m6BBF836B9A9B2B4BA11DC448B03E441DEDC2CCA4 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___content0, float* ___minWidth1, float* ___maxWidth2, const RuntimeMethod* method) ;
// System.Single UnityEngine.GUIStyle::CalcHeight(UnityEngine.GUIContent,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUIStyle_CalcHeight_m57DA8F6020AE71B561ABCBCE74E0E58FD2ECC5E8 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___content0, float ___width1, const RuntimeMethod* method) ;
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_padding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* GUIStyle_get_padding_m04E3210A51B2522158941AFA97ADC19C835987C2 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectOffset::get_vertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectOffset_get_vertical_m43E46D9F313BB617044184A65350E6498A0709F0 (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* __this, const RuntimeMethod* method) ;
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_margin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* GUIStyle_get_margin_mD0AABA2CB3FB0CFC3C414635E6225D3003315D1B (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectOffset::get_horizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectOffset_get_horizontal_m5C1795C027E4987A8532DC27D88FB3B9FFEC1352 (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* __this, const RuntimeMethod* method) ;
// System.Boolean VisualDesignCafe.Nature.NotificationBox::get_IsSceneView()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NotificationBox_get_IsSceneView_m1E3F5B2CE472B6019C45D6CE006880823F3D933A_inline (NotificationBox_tFE81187F23AA2E251B93B075E0CD9D27A644A73A* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Screen::get_dpi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Screen_get_dpi_mD5BB95E605FABD335F0D4736EE4860A0AA98A50D (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectOffset::get_left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectOffset_get_left_mA406D7AFF76E48507EF143CDB1D157C4D5430D90 (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectOffset::get_bottom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectOffset_get_bottom_mDF9C1EC125F94245D5532C34FCFB65BE0F2A9D0B (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single VisualDesignCafe.Nature.NotificationBox::get_MarginBottom()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float NotificationBox_get_MarginBottom_m748B66708EEE2F0A14809C5F3E991750AA2DF6BC_inline (NotificationBox_tFE81187F23AA2E251B93B075E0CD9D27A644A73A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_y(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout/AreaScope::.ctor(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AreaScope__ctor_m1E386F0B912D31B6A93BC246F56CDB0785EA77BF (AreaScope_tFC337E3FECDEFD1C5546291EED65F7DA6CCCA50D* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___screenRect0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::FlexibleSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_FlexibleSpace_m034CCB8A75D407325DB670958160C057FC7A5EAE (const RuntimeMethod* method) ;
// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color32::op_Implicit(UnityEngine.Color32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___c0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::set_backgroundColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_backgroundColor_mD83447BE5F90369CB39C37943528A4D8751B14A1 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::MaxWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GUILayout_MaxWidth_m8AD51EFD3981488BB5B3B0405797143B4ECCE047 (float ___maxWidth0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout/VerticalScope::.ctor(UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerticalScope__ctor_m7366A349A2878624900FFDF22A17BB7C08C51FC5 (VerticalScope_t9ACF880A56D5C3E83E431ED09DCA4FBAC9F832BC* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___style0, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options1, const RuntimeMethod* method) ;
// T[] System.Array::Empty<UnityEngine.GUILayoutOption>()
inline GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline (const RuntimeMethod* method)
{
	return ((  GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline)(method);
}
// System.Void UnityEngine.GUILayout/HorizontalScope::.ctor(UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalScope__ctor_mA3200557B33D8E50B19CEED31A803F2BD95682DC (HorizontalScope_t4007A61F85EEE56F34C66A864C60DF1B54975487* __this, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout/VerticalScope::.ctor(UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerticalScope__ctor_mB95783F186602B85693ABDAEBDD9487C1A403027 (VerticalScope_t9ACF880A56D5C3E83E431ED09DCA4FBAC9F832BC* __this, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::Label(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_Label_m5C3BE81053B9EE684544F9FB7E363FFCF25B53E9 (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___content0, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___style1, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options2, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) ;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GUILayout_Height_m6992DED02A160BA83D50072295F926A938413C11 (float ___height0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUILayout::Button(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUILayout_Button_mC566C6F0AD5A9F42B69A3417F96E14248A0A2806 (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___content0, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___style1, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::OpenURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_OpenURL_m9F74228B576891156330C84B72218C08BEB9F564 (String_t* ___url0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::Space(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_Space_m9991854C4545EA58CAD8F949BF1FC1F89CF119FE (float ___pixels0, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Nature.QualitySettings/InteractionQuality::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionQuality_Apply_m55BE510DAC8E5A8974EFF6EC7EF3A8ECB270E86F (InteractionQuality_t2FF0E0485560DCDA3D579E9951D66B6BE0691D9C* __this, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Nature.QualitySettings/GraphicsQuality::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphicsQuality_Apply_mB93F7801105309A6F176114D0CD2FB8E9402DC99 (GraphicsQuality_tEC77150663125A38E81AF2C977C22DAACD11ADC2* __this, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Nature.QualitySettings/OverlayQuality::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverlayQuality_Apply_mA55764CD68AE5D026805CE34D7607A5A97D2CFFC (OverlayQuality_t85B45D8ED6E1BF50B54DF1A90A14F384C695DA56* __this, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Nature.QualitySettings/InteractionQuality::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionQuality__ctor_m53B4EDFD03FE6814AFC3007CCE0293A4E4E9B87F (InteractionQuality_t2FF0E0485560DCDA3D579E9951D66B6BE0691D9C* __this, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Nature.QualitySettings/GraphicsQuality::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphicsQuality__ctor_m4A9C3044567597B22424B225AC8D13EDC9AD9020 (GraphicsQuality_tEC77150663125A38E81AF2C977C22DAACD11ADC2* __this, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Nature.QualitySettings/OverlayQuality::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverlayQuality__ctor_m9FDC3CA1EDE0D98409D33E63509FC5485D52DAA8 (OverlayQuality_t85B45D8ED6E1BF50B54DF1A90A14F384C695DA56* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Boolean VisualDesignCafe.Nature.QualitySettings/InteractionQuality::get_Enabled()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InteractionQuality_get_Enabled_m273B99E3E77766F62B4AFAE5145C54B2EB55E3EE_inline (InteractionQuality_t2FF0E0485560DCDA3D579E9951D66B6BE0691D9C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Shader::DisableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shader_DisableKeyword_m6427E6828CF809F12752AE2CF70E6A79281A3DB2 (String_t* ___keyword0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Shader::EnableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shader_EnableKeyword_m24DB964DE6795F323916C317DDDB88061E6D5761 (String_t* ___keyword0, const RuntimeMethod* method) ;
// System.Void System.Action`1<VisualDesignCafe.Nature.QualitySettings/InteractionQuality>::Invoke(T)
inline void Action_1_Invoke_mB45454B09435AF35BF1E4E47FFDE455EC3F5A72D_inline (Action_1_t18A965A5CD8412F57525B70C03F434E0BE590998* __this, InteractionQuality_t2FF0E0485560DCDA3D579E9951D66B6BE0691D9C* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t18A965A5CD8412F57525B70C03F434E0BE590998*, InteractionQuality_t2FF0E0485560DCDA3D579E9951D66B6BE0691D9C*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// VisualDesignCafe.Nature.QualitySettings/MaterialQuality VisualDesignCafe.Nature.QualitySettings/GraphicsQuality::get_MaterialQuality()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GraphicsQuality_get_MaterialQuality_mADB53532DD514A94E15E6B817238779B3471EB6E_inline (GraphicsQuality_tEC77150663125A38E81AF2C977C22DAACD11ADC2* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<VisualDesignCafe.Nature.QualitySettings/GraphicsQuality>::Invoke(T)
inline void Action_1_Invoke_m84B0852424E5B49AC06111862CA6F068B7C119DC_inline (Action_1_t7092C955DCB63C4B71ABEFF4198374A199F1CE5F* __this, GraphicsQuality_tEC77150663125A38E81AF2C977C22DAACD11ADC2* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t7092C955DCB63C4B71ABEFF4198374A199F1CE5F*, GraphicsQuality_tEC77150663125A38E81AF2C977C22DAACD11ADC2*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Boolean VisualDesignCafe.Nature.QualitySettings/OverlayQuality::get_Enabled()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool OverlayQuality_get_Enabled_m4A5E1020366FDB43ED2DBA4939015B15FE5BAD8E_inline (OverlayQuality_t85B45D8ED6E1BF50B54DF1A90A14F384C695DA56* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<VisualDesignCafe.Nature.QualitySettings/OverlayQuality>::Invoke(T)
inline void Action_1_Invoke_m0BB24730A9DA824B62796C2641EC35C52E9A22B7_inline (Action_1_tA3A3EDA5B0123A198F5499DD1DD4245C6479E02F* __this, OverlayQuality_t85B45D8ED6E1BF50B54DF1A90A14F384C695DA56* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tA3A3EDA5B0123A198F5499DD1DD4245C6479E02F*, OverlayQuality_t85B45D8ED6E1BF50B54DF1A90A14F384C695DA56*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// VisualDesignCafe.Nature.RuntimeEntryPoint VisualDesignCafe.Nature.RuntimeEntryPoint::FindExistingEntryPointInScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967* RuntimeEntryPoint_FindExistingEntryPointInScene_m795739EFB9A2BEDFCB31F26003D50B3AC619432D (const RuntimeMethod* method) ;
// VisualDesignCafe.Nature.RuntimeEntryPoint VisualDesignCafe.Nature.RuntimeEntryPoint::CreateEntryPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967* RuntimeEntryPoint_CreateEntryPoint_mFEF8A8B13E006AFC2A2F70CA1FD2E658042A2332 (const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<VisualDesignCafe.Nature.RuntimeEntryPoint>()
inline RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967* GameObject_AddComponent_TisRuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967_m2D0453CB50662DF237789E308974761DCEEF5983 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T[] UnityEngine.Object::FindObjectsOfType<VisualDesignCafe.Nature.RuntimeEntryPoint>()
inline RuntimeEntryPointU5BU5D_t594D90D3D35666CEFC4AC17F21284AE3688B7634* Object_FindObjectsOfType_TisRuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967_m44D42E7AB72E309EDBD8925DE2FB87FE66F76791 (const RuntimeMethod* method)
{
	return ((  RuntimeEntryPointU5BU5D_t594D90D3D35666CEFC4AC17F21284AE3688B7634* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m1E6D851F6A46D646E0554A94729E9AAE79B0E87A_gshared)(method);
}
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetSceneAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetSceneAt_m5444433E1CD78FC2E573330630000B5A73E0FBF4 (int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SceneManagement.Scene::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Scene_IsValid_m0D5200731D3E26ECBBB55803F9242965A14A4599 (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SceneManagement.Scene::get_isLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Scene_get_isLoaded_m5BC54CEB27330040A0BC69E66E94EE97E87298BC (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject[] UnityEngine.SceneManagement.Scene::GetRootGameObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* Scene_GetRootGameObjects_mFDE0BF9EA926F30EC9AE71F33E0AE4D5D4EC5C5B (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<VisualDesignCafe.Nature.RuntimeEntryPoint>()
inline RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967* GameObject_GetComponent_TisRuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967_m608CD40BDA78AC033F651C788DEB77B09AB34C14 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Int32 UnityEngine.SceneManagement.SceneManager::get_sceneCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SceneManager_get_sceneCount_mDB2658B632F95AB171E500C1519A681507B9230B (const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Nature.ShaderResources::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderResources__ctor_m47D572330D8C45D44A061F0030475E39C3958F0F (ShaderResources_t0D9AB98CBAAC245E280C145954C3811E16988ECA* __this, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Nature.ShaderResources::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderResources_Initialize_mB1757A506881C3DECBA2F3F1C4AA6BF3983AE123 (ShaderResources_t0D9AB98CBAAC245E280C145954C3811E16988ECA* __this, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Nature.ShaderResources::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderResources_Destroy_m8D84A3397A7B882097038ABCD47EB99D1600E7E1 (ShaderResources_t0D9AB98CBAAC245E280C145954C3811E16988ECA* __this, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Nature.RuntimeEntryPoint::LoadResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeEntryPoint_LoadResources_mF3B5B7C0A739480AD0BEF0A3766FD2AEEEC0A248 (RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967* __this, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Nature.RuntimeEntryPoint::UnloadResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeEntryPoint_UnloadResources_m5500C3E64945AE746D67867176F108E62BB4FDB5 (RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_2__ctor_m0C555E922D7495D9C81347C4CC01080514601692 (UnityAction_2_t3E619780AA870611658EC8B01DA6EA2EC42B13CE* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_t3E619780AA870611658EC8B01DA6EA2EC42B13CE*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_2__ctor_m0C555E922D7495D9C81347C4CC01080514601692_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::add_activeSceneChanged(UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_add_activeSceneChanged_mC9236EE99263057E56736C4D044401A8F238155B (UnityAction_2_t3E619780AA870611658EC8B01DA6EA2EC42B13CE* ___value0, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE (const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Nature.RuntimeGlobalWindInitializer::OnActiveSceneChanged(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeGlobalWindInitializer_OnActiveSceneChanged_m2641C9AD9CFEC8A4ED87DA771F24BFD17D1E3908 (Scene_tA1DC762B79745EB5140F054C884855B922318356 ___previousScene0, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___activeScene1, const RuntimeMethod* method) ;
// System.Void System.Func`2<UnityEngine.GameObject,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m9EDB1EDE49108C1136C6B0DD3DD5D2F843F5936E (Func_2_tD5855DA3DC1C614C29762075E12B0B72B8B1F51C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tD5855DA3DC1C614C29762075E12B0B72B8B1F51C*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// TSource System.Linq.Enumerable::FirstOrDefault<UnityEngine.GameObject>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Enumerable_FirstOrDefault_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m7C9DCCE51623032EB28B634BB0041243A7359124 (RuntimeObject* ___source0, Func_2_tD5855DA3DC1C614C29762075E12B0B72B8B1F51C* ___predicate1, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (RuntimeObject*, Func_2_tD5855DA3DC1C614C29762075E12B0B72B8B1F51C*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_m89A7FC9E77581DB0D6C05F91BD328EDCA61A19BA_gshared)(___source0, ___predicate1, method);
}
// System.Void VisualDesignCafe.Nature.RuntimeGlobalWindInitializer::ApplyDefaultWind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeGlobalWindInitializer_ApplyDefaultWind_mC16127C8F50C6DA34ADAC4547D872C66108E6FE5 (const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Nature.RuntimeGlobalWindInitializer/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m52D0F19CC6DB6C3F1AB65A063D70E98AAC71542A (U3CU3Ec_tD5AAFC1F780554421A1EE79F5B54FF94A14ED5D4* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<VisualDesignCafe.Nature.GlobalWind>(System.Boolean)
inline GlobalWind_tF5FCFBD4CBCAF95A274AE76E9919815030D57B39* GameObject_GetComponentInChildren_TisGlobalWind_tF5FCFBD4CBCAF95A274AE76E9919815030D57B39_m777DBF73C4D803D504088DEE06478536E2754C62 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	return ((  GlobalWind_tF5FCFBD4CBCAF95A274AE76E9919815030D57B39* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, bool, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mF44830CCE504347DFE1E61EC5F4E02A407D8122C_gshared)(__this, ___includeInactive0, method);
}
// UnityEngine.Texture2D VisualDesignCafe.Nature.ShaderResources::GeneratePerlinNoiseTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ShaderResources_GeneratePerlinNoiseTexture_mFB44EBF45252D4438E242DA221F4CCBE31B0CAC7 (ShaderResources_t0D9AB98CBAAC245E280C145954C3811E16988ECA* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture2D VisualDesignCafe.Nature.ShaderResources::get_PerlinNoise()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ShaderResources_get_PerlinNoise_m96B6FD493E4C81171A8C3ACC07DA958D7486EED5 (ShaderResources_t0D9AB98CBAAC245E280C145954C3811E16988ECA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Shader::SetGlobalTexture(System.String,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shader_SetGlobalTexture_mABB6E994E67D083BEBE142B4CC8FA77137C2D021 (String_t* ___name0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Shader::SetGlobalFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shader_SetGlobalFloat_mFA8F651003951E6319C952475148713F521243BF (String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Nature.ShaderResources/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m4E0A1433C1A767B7B4225F0D4616A3B0267C11BF (U3CU3Ec__DisplayClass8_0_tB7817BF36D3F1C02C3DAFE1C57BF9C90AEFEE55A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SystemInfo::SupportsTextureFormat(UnityEngine.TextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_SupportsTextureFormat_mB0695AD83D5244AFA9D65520E13FBC54F438A43D (int32_t ___format0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SystemInfo::get_processorCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_processorCount_m9161DEC1BC6A1D2431C23A291D3EDB288C2D9BD0 (const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.ParallelOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelOptions__ctor_mF265F14718D64C314C41033FA0ED96D0C9012077 (ParallelOptions_tB544CD8AB0089AA9973F610B95F7CA93E4A441D2* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.ParallelOptions::set_MaxDegreeOfParallelism(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelOptions_set_MaxDegreeOfParallelism_m26888A1D55B2D22DDF6BB13345ECCEA237F60461 (ParallelOptions_tB544CD8AB0089AA9973F610B95F7CA93E4A441D2* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87 (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.ParallelLoopResult System.Threading.Tasks.Parallel::For(System.Int32,System.Int32,System.Threading.Tasks.ParallelOptions,System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParallelLoopResult_t9C383DA248DA9082ECBF057DE0879AB99EE6A734 Parallel_For_mC4C76C10A63654F4BD90C42506ADFC4D38DBAFDC (int32_t ___fromInclusive0, int32_t ___toExclusive1, ParallelOptions_tB544CD8AB0089AA9973F610B95F7CA93E4A441D2* ___parallelOptions2, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___body3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::SetPixels(UnityEngine.Color[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixels_mAE0CDFA15FA96F840D7FFADC31405D8AF20D9073 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___colors0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_m36EE27E6F1BF7FB8C70A1D749DC4EE249810AA3A (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, bool ___updateMipmaps0, bool ___makeNoLongerReadable1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::PerlinNoise(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_PerlinNoise_mFDD2B12BE1FE4E890FA9FCD5CE6D7A90CAA779D4 (float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Nature.WindSettings::.ctor(VisualDesignCafe.Nature.WindSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindSettings__ctor_mBF206FCEC8E85C28C2FD3E1D0F21C6B7C22C1B39 (WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23* __this, WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23 ___other0, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Nature.WindSettings::.ctor(UnityEngine.Vector2,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindSettings__ctor_mFB6BC567B9D2C4ABB99C4D7721F632ABC1FFF4C9 (WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___gustDirection0, float ___windStrength1, float ___windSpeed2, float ___turbulence3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_mBE520C0BA6BB8F452B206BF1D9F4AAD1873CCA85_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m1FD55F67090B321AC9488CA325A72E454E6BCA37_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.WindZone::set_windMain(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindZone_set_windMain_mECB9DF2D5BAB9FD545891C3409B36CC57605F2DF (WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WindZone::set_windPulseFrequency(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindZone_set_windPulseFrequency_m389F653CF33A959B9CCF4998AA18D0E392FCE5BA (WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WindZone::set_windTurbulence(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindZone_set_windTurbulence_m61C6D929BE93A628E05A3C6C3557FF660D58231B (WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Nature.WindSettings::ApplyToWindZone(UnityEngine.WindZone)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindSettings_ApplyToWindZone_m13C01570FE6CB15E3F63C2477B0FAA34CB18329B (WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23* __this, WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* ___zone0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Object>::Add(T)
inline void List_1_Add_m60F1F5D817C83DDC11235FD5524B8667F4C314F9_inline (List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Object>::GetEnumerator()
inline Enumerator_tE4F8BFD8BC4B29A1F907A500BE1A39F6AEECF80E List_1_GetEnumerator_mA6D8F51281EF3C4183058B42C1930E0E885543EF (List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tE4F8BFD8BC4B29A1F907A500BE1A39F6AEECF80E (*) (List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Object>::Dispose()
inline void Enumerator_Dispose_mAEB2333688211862F3BF025DED14A07DF2AB6862 (Enumerator_tE4F8BFD8BC4B29A1F907A500BE1A39F6AEECF80E* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE4F8BFD8BC4B29A1F907A500BE1A39F6AEECF80E*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Object>::get_Current()
inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Enumerator_get_Current_m0CEFF9A8B2B0E57C5DDBA1134553DEBC37719CED_inline (Enumerator_tE4F8BFD8BC4B29A1F907A500BE1A39F6AEECF80E* __this, const RuntimeMethod* method)
{
	return ((  Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* (*) (Enumerator_tE4F8BFD8BC4B29A1F907A500BE1A39F6AEECF80E*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Object>::MoveNext()
inline bool Enumerator_MoveNext_m3056C0403652CA8364963A1CDE5D5EACF19CB5B8 (Enumerator_tE4F8BFD8BC4B29A1F907A500BE1A39F6AEECF80E* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tE4F8BFD8BC4B29A1F907A500BE1A39F6AEECF80E*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Object>::Clear()
inline void List_1_Clear_m51249A9DD3B29478801AC004DEA026A63D4A6D9B_inline (List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Object>::.ctor()
inline void List_1__ctor_m1B0135DE2C4A4BCA4820D2FC9E060ED224FC24C0 (List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_m4A80D03D7B7DEC054E2175E53D072675649C6713_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Quaternion::IsEqualUsingDot(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_m5C6AC5F5C56B27C25DDF612BEEF40F28CA44CA31_inline (float ___dot0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m9B2C77284AEE6F2C43B6C42F1F888FB4FC904462 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m864320DA2D027C186C95B2A5BC2C66B0EB4A6C11 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) ;
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
// System.Void VisualDesignCafe.Nature.Documentation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Documentation__ctor_mA370C350DE7C2FB0D81B3F3B0E2510C302DF6FF3 (Documentation_t98901B5F2A18BC5FE7AB2E9ACA62605568EB3CC4* __this, const RuntimeMethod* method) 
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
// VisualDesignCafe.Nature.GlobalWind VisualDesignCafe.Nature.GlobalWind::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlobalWind_tF5FCFBD4CBCAF95A274AE76E9919815030D57B39* GlobalWind_get_Instance_mF68F627CC8103EC8C28D9DAA7E46E32AEC2F70AE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalWind_tF5FCFBD4CBCAF95A274AE76E9919815030D57B39_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GlobalWind_tF5FCFBD4CBCAF95A274AE76E9919815030D57B39* L_0 = ((GlobalWind_tF5FCFBD4CBCAF95A274AE76E9919815030D57B39_StaticFields*)il2cpp_codegen_static_fields_for(GlobalWind_tF5FCFBD4CBCAF95A274AE76E9919815030D57B39_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void VisualDesignCafe.Nature.GlobalWind::set_Instance(VisualDesignCafe.Nature.GlobalWind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalWind_set_Instance_mB042DD4A9A7DD114113B30F9E885B7D7621AB188 (GlobalWind_tF5FCFBD4CBCAF95A274AE76E9919815030D57B39* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalWind_tF5FCFBD4CBCAF95A274AE76E9919815030D57B39_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GlobalWind_tF5FCFBD4CBCAF95A274AE76E9919815030D57B39* L_0 = ___value0;
		((GlobalWind_tF5FCFBD4CBCAF95A274AE76E9919815030D57B39_StaticFields*)il2cpp_codegen_static_fields_for(GlobalWind_tF5FCFBD4CBCAF95A274AE76E9919815030D57B39_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((GlobalWind_tF5FCFBD4CBCAF95A274AE76E9919815030D57B39_StaticFields*)il2cpp_codegen_static_fields_for(GlobalWind_tF5FCFBD4CBCAF95A274AE76E9919815030D57B39_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// VisualDesignCafe.Nature.WindSettings VisualDesignCafe.Nature.GlobalWind::get_Settings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23 GlobalWind_get_Settings_m813CFB943FE51D6952978E6EFB02D0142FBE2A46 (GlobalWind_tF5FCFBD4CBCAF95A274AE76E9919815030D57B39* __this, const RuntimeMethod* method) 
{
	WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23 L_0 = __this->____windSettings_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23 L_1 = V_0;
		return L_1;
	}
}
// System.Void VisualDesignCafe.Nature.GlobalWind::set_Settings(VisualDesignCafe.Nature.WindSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalWind_set_Settings_m7C1591264853ADA793587F5FFB475ACC3A031B32 (GlobalWind_tF5FCFBD4CBCAF95A274AE76E9919815030D57B39* __this, WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23 ___value0, const RuntimeMethod* method) 
{
	{
		WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23 L_0 = ___value0;
		__this->____windSettings_5 = L_0;
		WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23* L_1 = (&__this->____windSettings_5);
		WindSettings_Apply_m5FBA1B2E1C870A569ECB4824EF8B927D526DF999(L_1, NULL);
		GlobalWind_UpdateDirection_m7ADA3E28E1D92CF0DBF9706D337D81509E216272(__this, (bool)0, NULL);
		return;
	}
}
// UnityEngine.WindZone VisualDesignCafe.Nature.GlobalWind::get_Zone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* GlobalWind_get_Zone_m4C50839E6376C41C5A46B1DE5690E74EA1654F32 (GlobalWind_tF5FCFBD4CBCAF95A274AE76E9919815030D57B39* __this, const RuntimeMethod* method) 
{
	WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* V_0 = NULL;
	{
		WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* L_0 = __this->____sourceWindZone_6;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* L_1 = V_0;
		return L_1;
	}
}
// System.Void VisualDesignCafe.Nature.GlobalWind::set_Zone(UnityEngine.WindZone)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalWind_set_Zone_m4CE0A786037BD116CCC33B7F52DFBF9A6C9E2BCD (GlobalWind_tF5FCFBD4CBCAF95A274AE76E9919815030D57B39* __this, WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* L_0 = ___value0;
		__this->____sourceWindZone_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____sourceWindZone_6), (void*)L_0);
		WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		GlobalWind_ValidateWindZone_mED57F62DA786E786105C7364538600FE7675DB98(__this, NULL);
		GlobalWind_CopyAndApply_m7659F1F231437446DC99BA7BBB5D76E47E5E0AA6(__this, NULL);
	}

IL_0023:
	{
		return;
	}
}
// UnityEngine.Texture2D VisualDesignCafe.Nature.GlobalWind::get_GustNoise()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* GlobalWind_get_GustNoise_mDEDE142EFC1BE411BED82B32F13DD93E0395E822 (GlobalWind_tF5FCFBD4CBCAF95A274AE76E9919815030D57B39* __this, const RuntimeMethod* method) 
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_0 = NULL;
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = __this->____gustNoise_7;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_1 = V_0;
		return L_1;
	}
}
// System.Void VisualDesignCafe.Nature.GlobalWind::set_GustNoise(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalWind_set_GustNoise_mA84A46AF752A693A54F520AF617B9FBFE54F3C5F (GlobalWind_tF5FCFBD4CBCAF95A274AE76E9919815030D57B39* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___value0, const RuntimeMethod* method) 
{
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___value0;
		__this->____gustNoise_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gustNoise_7), (void*)L_0);
		WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23* L_1 = (&__this->____windSettings_5);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = __this->____gustNoise_7;
		WindSettings_Apply_mD5A012EEEF00ECDB00B7ACB17E16BC97B6C5E5B4(L_1, L_2, NULL);
		return;
	}
}
// System.Void VisualDesignCafe.Nature.GlobalWind::UpdateTime(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalWind_UpdateTime_m46D653F644373BE9DEB13DEB4D73A501A4B68EC3 (GlobalWind_tF5FCFBD4CBCAF95A274AE76E9919815030D57B39* __this, double ___time0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral475139F7AFB2EB5EFFFA047AD59C72201C43162D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8801582F09E06B4D413CED6F42EA7FE4408BEF84);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		double L_0 = ___time0;
		double L_1 = __this->____cachedTime_14;
		V_0 = ((double)il2cpp_codegen_subtract(L_0, L_1));
		double L_2 = ___time0;
		__this->____cachedTime_14 = L_2;
		double L_3 = __this->____smoothWindOffset_13;
		double L_4 = __this->____smoothWindOffset_13;
		double L_5 = __this->____smoothWindOffset_13;
		double L_6 = __this->____smoothWindOffset_13;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_7), ((float)il2cpp_codegen_multiply(((float)L_3), (6.0f))), ((float)il2cpp_codegen_multiply(((float)L_4), (0.150000006f))), ((float)il2cpp_codegen_multiply(((float)L_5), (3.5f))), ((float)il2cpp_codegen_multiply(((float)L_6), (3.5f))), /*hidden argument*/NULL);
		Shader_SetGlobalVector_m885C9E39C787CA6F54E002C12E3D4280C353E438(_stringLiteral475139F7AFB2EB5EFFFA047AD59C72201C43162D, L_7, NULL);
		double L_8 = __this->____smoothWindOffset_13;
		double L_9 = V_0;
		WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23 L_10;
		L_10 = GlobalWind_get_Settings_m813CFB943FE51D6952978E6EFB02D0142FBE2A46(__this, NULL);
		float L_11 = L_10.___WindSpeed_2;
		__this->____smoothWindOffset_13 = ((double)il2cpp_codegen_add(L_8, ((double)il2cpp_codegen_multiply(L_9, ((double)L_11)))));
		double L_12 = __this->____smoothWindOffset_13;
		double L_13 = __this->____smoothWindOffset_13;
		double L_14 = __this->____smoothWindOffset_13;
		double L_15 = __this->____smoothWindOffset_13;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_16), ((float)il2cpp_codegen_multiply(((float)L_12), (6.0f))), ((float)il2cpp_codegen_multiply(((float)L_13), (0.150000006f))), ((float)il2cpp_codegen_multiply(((float)L_14), (3.5f))), ((float)il2cpp_codegen_multiply(((float)L_15), (3.5f))), /*hidden argument*/NULL);
		Shader_SetGlobalVector_m885C9E39C787CA6F54E002C12E3D4280C353E438(_stringLiteral8801582F09E06B4D413CED6F42EA7FE4408BEF84, L_16, NULL);
		return;
	}
}
// System.Void VisualDesignCafe.Nature.GlobalWind::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalWind_OnEnable_m1FEC94217CF8C63D098F83AA45ECD682B50FFC00 (GlobalWind_tF5FCFBD4CBCAF95A274AE76E9919815030D57B39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		GlobalWind_set_Instance_mB042DD4A9A7DD114113B30F9E885B7D7621AB188_inline(__this, NULL);
		GlobalWind_ValidateWindZone_mED57F62DA786E786105C7364538600FE7675DB98(__this, NULL);
		WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* L_0 = __this->____sourceWindZone_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		GlobalWind_CopyFromWindZone_m5CB9E51EF6CE3C842619DD069AF6A59CF59AA862(__this, NULL);
		goto IL_0030;
	}

IL_0028:
	{
		GlobalWind_UpdateDirection_m7ADA3E28E1D92CF0DBF9706D337D81509E216272(__this, (bool)0, NULL);
	}

IL_0030:
	{
		WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23* L_3 = (&__this->____windSettings_5);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4 = __this->____gustNoise_7;
		WindSettings_Apply_mD5A012EEEF00ECDB00B7ACB17E16BC97B6C5E5B4(L_3, L_4, NULL);
		return;
	}
}
// System.Void VisualDesignCafe.Nature.GlobalWind::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalWind_Update_m79E2FF2A7E8D66309AC1D8ADA599744D886F84F9 (GlobalWind_tF5FCFBD4CBCAF95A274AE76E9919815030D57B39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* L_0 = __this->____sourceWindZone_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		bool L_2;
		L_2 = GlobalWind_WindZoneHasChanged_mFC4A0E2CFDEE191BF2F10A1C71271DDF3F7ABC0F(__this, NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		GlobalWind_CopyAndApply_m7659F1F231437446DC99BA7BBB5D76E47E5E0AA6(__this, NULL);
	}

IL_0023:
	{
		bool L_4;
		L_4 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		float L_6;
		L_6 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		GlobalWind_UpdateTime_m46D653F644373BE9DEB13DEB4D73A501A4B68EC3(__this, ((double)L_6), NULL);
	}

IL_0039:
	{
		GlobalWind_UpdateDirection_m7ADA3E28E1D92CF0DBF9706D337D81509E216272(__this, (bool)1, NULL);
		return;
	}
}
// System.Void VisualDesignCafe.Nature.GlobalWind::CopyAndApply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalWind_CopyAndApply_m7659F1F231437446DC99BA7BBB5D76E47E5E0AA6 (GlobalWind_tF5FCFBD4CBCAF95A274AE76E9919815030D57B39* __this, const RuntimeMethod* method) 
{
	{
		GlobalWind_CacheWindZoneProperties_mBD6F9AD4CD3BF46F876EED5EAA81877201C465A7(__this, NULL);
		GlobalWind_CopyFromWindZone_m5CB9E51EF6CE3C842619DD069AF6A59CF59AA862(__this, NULL);
		return;
	}
}
// System.Void VisualDesignCafe.Nature.GlobalWind::CopyFromWindZone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalWind_CopyFromWindZone_m5CB9E51EF6CE3C842619DD069AF6A59CF59AA862 (GlobalWind_tF5FCFBD4CBCAF95A274AE76E9919815030D57B39* __this, const RuntimeMethod* method) 
{
	{
		WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* L_0 = __this->____sourceWindZone_6;
		WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23 L_1;
		L_1 = WindSettings_FromWindZone_m50D8666521886AF2D62EDCFF697FC2E6D3BBB8B8(L_0, NULL);
		GlobalWind_set_Settings_m7C1591264853ADA793587F5FFB475ACC3A031B32(__this, L_1, NULL);
		return;
	}
}
// System.Boolean VisualDesignCafe.Nature.GlobalWind::WindZoneHasChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GlobalWind_WindZoneHasChanged_mFC4A0E2CFDEE191BF2F10A1C71271DDF3F7ABC0F (GlobalWind_tF5FCFBD4CBCAF95A274AE76E9919815030D57B39* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->____cachedRotation_9;
		WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* L_1 = __this->____sourceWindZone_6;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
		NullCheck(L_2);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_2, NULL);
		bool L_4;
		L_4 = Quaternion_op_Inequality_mC1922F160B14F6F404E46FFCC10B282D913BE354_inline(L_0, L_3, NULL);
		V_0 = L_4;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_0084;
	}

IL_0024:
	{
		float L_6 = __this->____cachedWindMain_10;
		WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* L_7 = __this->____sourceWindZone_6;
		NullCheck(L_7);
		float L_8;
		L_8 = WindZone_get_windMain_m49480166CDE759C98498B951148535FCCED788C0(L_7, NULL);
		V_2 = (bool)((((int32_t)((((float)L_6) == ((float)L_8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_0084;
	}

IL_0042:
	{
		float L_10 = __this->____cachedWindPulseFrequency_11;
		WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* L_11 = __this->____sourceWindZone_6;
		NullCheck(L_11);
		float L_12;
		L_12 = WindZone_get_windPulseFrequency_mE95A49751644837A6668834E41F76D66C7E8173C(L_11, NULL);
		V_3 = (bool)((((int32_t)((((float)L_10) == ((float)L_12))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_0060;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_0084;
	}

IL_0060:
	{
		float L_14 = __this->____cachedWindTurbulence_12;
		WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* L_15 = __this->____sourceWindZone_6;
		NullCheck(L_15);
		float L_16;
		L_16 = WindZone_get_windTurbulence_mB7D83DE60E30847971D13C6601C46F14839F8448(L_15, NULL);
		V_4 = (bool)((((int32_t)((((float)L_14) == ((float)L_16))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_0080;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_0084;
	}

IL_0080:
	{
		V_1 = (bool)0;
		goto IL_0084;
	}

IL_0084:
	{
		bool L_18 = V_1;
		return L_18;
	}
}
// System.Void VisualDesignCafe.Nature.GlobalWind::CacheWindZoneProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalWind_CacheWindZoneProperties_mBD6F9AD4CD3BF46F876EED5EAA81877201C465A7 (GlobalWind_tF5FCFBD4CBCAF95A274AE76E9919815030D57B39* __this, const RuntimeMethod* method) 
{
	{
		WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* L_0 = __this->____sourceWindZone_6;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_1, NULL);
		__this->____cachedRotation_9 = L_2;
		WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* L_3 = __this->____sourceWindZone_6;
		NullCheck(L_3);
		float L_4;
		L_4 = WindZone_get_windMain_m49480166CDE759C98498B951148535FCCED788C0(L_3, NULL);
		__this->____cachedWindMain_10 = L_4;
		WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* L_5 = __this->____sourceWindZone_6;
		NullCheck(L_5);
		float L_6;
		L_6 = WindZone_get_windPulseFrequency_mE95A49751644837A6668834E41F76D66C7E8173C(L_5, NULL);
		__this->____cachedWindPulseFrequency_11 = L_6;
		WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* L_7 = __this->____sourceWindZone_6;
		NullCheck(L_7);
		float L_8;
		L_8 = WindZone_get_windTurbulence_mB7D83DE60E30847971D13C6601C46F14839F8448(L_7, NULL);
		__this->____cachedWindTurbulence_12 = L_8;
		return;
	}
}
// System.Void VisualDesignCafe.Nature.GlobalWind::ValidateWindZone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalWind_ValidateWindZone_mED57F62DA786E786105C7364538600FE7675DB98 (GlobalWind_tF5FCFBD4CBCAF95A274AE76E9919815030D57B39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6FF7A973A811BAC175ED134694273BE9579B30F6);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* L_0 = __this->____sourceWindZone_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* L_2 = __this->____sourceWindZone_6;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = WindZone_get_mode_mE2B2472178BD6B397D1C9AEF225A38B7AC148FE7(L_2, NULL);
		G_B3_0 = ((!(((uint32_t)L_3) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		Type_t* L_5;
		L_5 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_5);
		String_t* L_7;
		L_7 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_6, _stringLiteral6FF7A973A811BAC175ED134694273BE9579B30F6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m5C8299150E64600CBF5C92706AD610C21D0C0DC5(L_7, __this, NULL);
	}

IL_0040:
	{
		return;
	}
}
// System.Void VisualDesignCafe.Nature.GlobalWind::UpdateDirection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalWind_UpdateDirection_m7ADA3E28E1D92CF0DBF9706D337D81509E216272 (GlobalWind_tF5FCFBD4CBCAF95A274AE76E9919815030D57B39* __this, bool ___useCache0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* L_0 = __this->____sourceWindZone_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		goto IL_006d;
	}

IL_0013:
	{
		bool L_3 = ___useCache0;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_4, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = __this->____cachedRotation_9;
		bool L_7;
		L_7 = Quaternion_op_Equality_m3DF1D708D3A0AFB11EACF42A9C068EF6DC508FBB_inline(L_5, L_6, NULL);
		G_B5_0 = ((int32_t)(L_7));
		goto IL_002f;
	}

IL_002e:
	{
		G_B5_0 = 0;
	}

IL_002f:
	{
		V_1 = (bool)G_B5_0;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0035;
		}
	}
	{
		goto IL_006d;
	}

IL_0035:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_9, NULL);
		__this->____cachedRotation_9 = L_10;
		WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23* L_11 = (&__this->____windSettings_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_12);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_12, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = WindSettings_RotationToDirection_mA32CA352C60056E7E5F8077E1EEA80FD7623194D(L_13, NULL);
		L_11->___WindDirection_0 = L_14;
		WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23* L_15 = (&__this->____windSettings_5);
		WindSettings_Apply_m5FBA1B2E1C870A569ECB4824EF8B927D526DF999(L_15, NULL);
	}

IL_006d:
	{
		return;
	}
}
// System.Void VisualDesignCafe.Nature.GlobalWind::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalWind__ctor_m4B30AE72F856A02F48621C9495CEC52381737645 (GlobalWind_tF5FCFBD4CBCAF95A274AE76E9919815030D57B39* __this, const RuntimeMethod* method) 
{
	{
		WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23 L_0;
		L_0 = WindSettings_get_Calm_m69AD33EEED0088F6E7F67884E85F1C23CFFDB6BC(NULL);
		__this->____windSettings_5 = L_0;
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
// System.Void VisualDesignCafe.Nature.NatureKeywords::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureKeywords__ctor_m05C9BF135F97733D599B08E997B603A4CABE4FF1 (NatureKeywords_tBFBA1E002F6B3B15A55786BAD12487D9A339F693* __this, const RuntimeMethod* method) 
{
	{
		LitKeywords__ctor_m72C0EB17EF959387A33C68F55164ED473D28081E(__this, NULL);
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
// UnityEngine.Vector2 VisualDesignCafe.Nature.NatureMaterial::get_ScaleFade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 NatureMaterial_get_ScaleFade_m8FFF31036FFE105C520DF1554247A3B002649F9A (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9ACE3EEEBEB9B25F0F8632BDEB4FCB7A70DDEA34);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0;
		L_0 = BaseMaterial_TryGetVector_m143D6BDE769623CFDEEC4C244B76F1F137537090(__this, _stringLiteral9ACE3EEEBEB9B25F0F8632BDEB4FCB7A70DDEA34, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector4_op_Implicit_m2D6D6CC60982A88F7B77B5D0452F1E1652C412A2_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void VisualDesignCafe.Nature.NatureMaterial::set_ScaleFade(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_set_ScaleFade_mEB737AA14E9609A78D22C25BED6EAB06B5CB8018 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9ACE3EEEBEB9B25F0F8632BDEB4FCB7A70DDEA34);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___value0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = Vector4_op_Implicit_m6162D8136CFE97A5A8BD3B764F9074DB96AA5CD0_inline(L_0, NULL);
		bool L_2;
		L_2 = BaseMaterial_TrySetVector_m45F536CB1E4EBC84AF5827183AF5282139B0597B(__this, _stringLiteral9ACE3EEEBEB9B25F0F8632BDEB4FCB7A70DDEA34, L_1, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		return;
	}
}
// System.Boolean VisualDesignCafe.Nature.NatureMaterial::get_NatureRendererControlsDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NatureMaterial_get_NatureRendererControlsDistance_m52CFBBD2DE9634E68B532208DC299A69DEA7959A (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36B2A26CF5E9293710A0647339454921B0450901);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0;
		L_0 = BaseMaterial_TryGetFloat_m0DE38E1A44D929C9D0C195D77FD094609A54266D(__this, _stringLiteral36B2A26CF5E9293710A0647339454921B0450901, NULL);
		return (bool)((((float)L_0) == ((float)(1.0f)))? 1 : 0);
	}
}
// System.Void VisualDesignCafe.Nature.NatureMaterial::set_NatureRendererControlsDistance(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_set_NatureRendererControlsDistance_m484A65CCF1D58A2064F816826358F73C2470C12E (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36B2A26CF5E9293710A0647339454921B0450901);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = NULL;
	NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* G_B3_2 = NULL;
	{
		bool L_0 = ___value0;
		G_B1_0 = _stringLiteral36B2A26CF5E9293710A0647339454921B0450901;
		G_B1_1 = __this;
		if (L_0)
		{
			G_B2_0 = _stringLiteral36B2A26CF5E9293710A0647339454921B0450901;
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
// VisualDesignCafe.Nature.NatureMaterial/ColorCorrectionMode VisualDesignCafe.Nature.NatureMaterial::get_ColorCorrection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NatureMaterial_get_ColorCorrection_m7DE782A925D0071AD2BFFAF0F14076C697BFD5DC (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02097A8BF4E59FC772990A0F556C2C9F9961C139);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0;
		L_0 = BaseMaterial_TryGetFloat_m0DE38E1A44D929C9D0C195D77FD094609A54266D(__this, _stringLiteral02097A8BF4E59FC772990A0F556C2C9F9961C139, NULL);
		return (int32_t)(il2cpp_codegen_cast_double_to_int<int32_t>(L_0));
	}
}
// System.Void VisualDesignCafe.Nature.NatureMaterial::set_ColorCorrection(VisualDesignCafe.Nature.NatureMaterial/ColorCorrectionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_set_ColorCorrection_mF5CC88BF30C0A99F197490BFB27897F4371E3F69 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02097A8BF4E59FC772990A0F556C2C9F9961C139);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value0;
		bool L_1;
		L_1 = BaseMaterial_TrySetFloat_m3EA239D22D66BBAB3E08A9BEDAC1E764E2B864AF(__this, _stringLiteral02097A8BF4E59FC772990A0F556C2C9F9961C139, ((float)L_0), (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		return;
	}
}
// UnityEngine.Vector3 VisualDesignCafe.Nature.NatureMaterial::get_HSL()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 NatureMaterial_get_HSL_m29FC2D9E15BEE3D26CE3ED0E8ED7B298C9A805B2 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E5F0313853CBECC16996C202E0E39742A6A6E35);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0;
		L_0 = BaseMaterial_TryGetVector_m143D6BDE769623CFDEEC4C244B76F1F137537090(__this, _stringLiteral9E5F0313853CBECC16996C202E0E39742A6A6E35, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector4_op_Implicit_m2EC16C74D768EEAA9BBC40DA11337F912014FC57_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void VisualDesignCafe.Nature.NatureMaterial::set_HSL(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_set_HSL_m4C7C7146B8D95B089EC396C266CDB2BC07E22C6A (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E5F0313853CBECC16996C202E0E39742A6A6E35);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = Vector4_op_Implicit_mB05287DC52FC87A756AB80E837E1EC22FEEB3937_inline(L_0, NULL);
		bool L_2;
		L_2 = BaseMaterial_TrySetVector_m45F536CB1E4EBC84AF5827183AF5282139B0597B(__this, _stringLiteral9E5F0313853CBECC16996C202E0E39742A6A6E35, L_1, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		return;
	}
}
// UnityEngine.Vector3 VisualDesignCafe.Nature.NatureMaterial::get_HSLVariation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 NatureMaterial_get_HSLVariation_m8CBA8C56B0CE78EDE8C835EA15757D877A5DC59F (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD653BE16D6D62ACE9F2B37E94124E44C5E323029);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0;
		L_0 = BaseMaterial_TryGetVector_m143D6BDE769623CFDEEC4C244B76F1F137537090(__this, _stringLiteralD653BE16D6D62ACE9F2B37E94124E44C5E323029, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector4_op_Implicit_m2EC16C74D768EEAA9BBC40DA11337F912014FC57_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void VisualDesignCafe.Nature.NatureMaterial::set_HSLVariation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_set_HSLVariation_m120CCC22F0DC6C937A832805AE717487D7955BFD (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD653BE16D6D62ACE9F2B37E94124E44C5E323029);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = Vector4_op_Implicit_mB05287DC52FC87A756AB80E837E1EC22FEEB3937_inline(L_0, NULL);
		bool L_2;
		L_2 = BaseMaterial_TrySetVector_m45F536CB1E4EBC84AF5827183AF5282139B0597B(__this, _stringLiteralD653BE16D6D62ACE9F2B37E94124E44C5E323029, L_1, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		return;
	}
}
// UnityEngine.Color VisualDesignCafe.Nature.NatureMaterial::get_TintVariation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F NatureMaterial_get_TintVariation_m3CAF5F1D5805770A3BBF6F2621034278E237AAEF (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB987CB6059B0954BD15940514009377987A5A3C);
		s_Il2CppMethodInitialized = true;
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = BaseMaterial_TryGetColor_m94A74823DA49D2B3BF061BFFF790211DCDABFB7E(__this, _stringLiteralEB987CB6059B0954BD15940514009377987A5A3C, NULL);
		return L_0;
	}
}
// System.Void VisualDesignCafe.Nature.NatureMaterial::set_TintVariation(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_set_TintVariation_m4A69CF1F039BB5A8B54670D9219CB928966AECF0 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB987CB6059B0954BD15940514009377987A5A3C);
		s_Il2CppMethodInitialized = true;
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___value0;
		bool L_1;
		L_1 = BaseMaterial_TrySetColor_m69373663B82D54BE91DF90598FB3603BA830C00D(__this, _stringLiteralEB987CB6059B0954BD15940514009377987A5A3C, L_0, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		return;
	}
}
// System.Single VisualDesignCafe.Nature.NatureMaterial::get_ColorVariationSpread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NatureMaterial_get_ColorVariationSpread_m19FB218EEF6F89B0EE1B445A007E7CD45B786064 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral545D672831F6CB8E10D6BC99CE8C6930D5E38660);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0;
		L_0 = BaseMaterial_TryGetFloat_m0DE38E1A44D929C9D0C195D77FD094609A54266D(__this, _stringLiteral545D672831F6CB8E10D6BC99CE8C6930D5E38660, NULL);
		return L_0;
	}
}
// System.Void VisualDesignCafe.Nature.NatureMaterial::set_ColorVariationSpread(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_set_ColorVariationSpread_m6CC24B9751570A436BAD8F7F25934F907C25D6A6 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral545D672831F6CB8E10D6BC99CE8C6930D5E38660);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___value0;
		bool L_1;
		L_1 = BaseMaterial_TrySetFloat_m3EA239D22D66BBAB3E08A9BEDAC1E764E2B864AF(__this, _stringLiteral545D672831F6CB8E10D6BC99CE8C6930D5E38660, L_0, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		return;
	}
}
// System.Single VisualDesignCafe.Nature.NatureMaterial::get_VertexNormalStrength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NatureMaterial_get_VertexNormalStrength_mE49E8F4B1C1C20392868E050D4B371AE9D78C17D (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5AF58E2F4C601E4F62344871820D60824FF126B);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0;
		L_0 = BaseMaterial_TryGetFloat_m0DE38E1A44D929C9D0C195D77FD094609A54266D(__this, _stringLiteralA5AF58E2F4C601E4F62344871820D60824FF126B, NULL);
		return L_0;
	}
}
// System.Void VisualDesignCafe.Nature.NatureMaterial::set_VertexNormalStrength(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_set_VertexNormalStrength_m5045DD2821CF0C14CA3A1076A447D092D6611A21 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5AF58E2F4C601E4F62344871820D60824FF126B);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___value0;
		bool L_1;
		L_1 = BaseMaterial_TrySetFloat_m3EA239D22D66BBAB3E08A9BEDAC1E764E2B864AF(__this, _stringLiteralA5AF58E2F4C601E4F62344871820D60824FF126B, L_0, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		return;
	}
}
// System.Single VisualDesignCafe.Nature.NatureMaterial::get_SecondaryMaps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NatureMaterial_get_SecondaryMaps_m85564065238011AE1DD55DDEA1BDF441A8F3CEA0 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB41CAF4C8C6C82216F2D5FB5D6B5A71AE61912DA);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0;
		L_0 = BaseMaterial_TryGetFloat_m0DE38E1A44D929C9D0C195D77FD094609A54266D(__this, _stringLiteralB41CAF4C8C6C82216F2D5FB5D6B5A71AE61912DA, NULL);
		return L_0;
	}
}
// System.Void VisualDesignCafe.Nature.NatureMaterial::set_SecondaryMaps(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_set_SecondaryMaps_mC937EA6736EC79DCACDFF2B2C1283E73E561C4FC (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB41CAF4C8C6C82216F2D5FB5D6B5A71AE61912DA);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___value0;
		bool L_1;
		L_1 = BaseMaterial_TrySetFloat_m3EA239D22D66BBAB3E08A9BEDAC1E764E2B864AF(__this, _stringLiteralB41CAF4C8C6C82216F2D5FB5D6B5A71AE61912DA, L_0, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		return;
	}
}
// UnityEngine.Texture VisualDesignCafe.Nature.NatureMaterial::get_SecondaryAlbedoMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* NatureMaterial_get_SecondaryAlbedoMap_mD95C105DDACDA76C6BAA39E605F7D6E2C8BE5002 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C1854F6613D615F3B61977639014EFE3B430AE);
		s_Il2CppMethodInitialized = true;
	}
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0;
		L_0 = BaseMaterial_TryGetTexture_m87D64B52B053AEF87CD64078CD4F28E1C6428CED(__this, _stringLiteralB7C1854F6613D615F3B61977639014EFE3B430AE, NULL);
		return L_0;
	}
}
// System.Void VisualDesignCafe.Nature.NatureMaterial::set_SecondaryAlbedoMap(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_set_SecondaryAlbedoMap_mB946C0A6AF79D79492509135AF30ECCFBD3101AD (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C1854F6613D615F3B61977639014EFE3B430AE);
		s_Il2CppMethodInitialized = true;
	}
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = ___value0;
		bool L_1;
		L_1 = BaseMaterial_TrySetTexture_m3698AAFD35350A34A92081127786856F06B5B5AF(__this, _stringLiteralB7C1854F6613D615F3B61977639014EFE3B430AE, L_0, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		return;
	}
}
// System.Single VisualDesignCafe.Nature.NatureMaterial::get_SecondaryGlossiness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NatureMaterial_get_SecondaryGlossiness_mBBDBB42C399EBD766977B3F92617EF0A8AFDCA7D (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD75559CB2D614271074C571AAADAE43EEF79E90);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0;
		L_0 = BaseMaterial_TryGetFloat_m0DE38E1A44D929C9D0C195D77FD094609A54266D(__this, _stringLiteralDD75559CB2D614271074C571AAADAE43EEF79E90, NULL);
		return L_0;
	}
}
// System.Void VisualDesignCafe.Nature.NatureMaterial::set_SecondaryGlossiness(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_set_SecondaryGlossiness_m4A04CF459175AA3151801F593E28743DAC7D9E1D (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD75559CB2D614271074C571AAADAE43EEF79E90);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___value0;
		bool L_1;
		L_1 = BaseMaterial_TrySetFloat_m3EA239D22D66BBAB3E08A9BEDAC1E764E2B864AF(__this, _stringLiteralDD75559CB2D614271074C571AAADAE43EEF79E90, L_0, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		return;
	}
}
// UnityEngine.Vector2 VisualDesignCafe.Nature.NatureMaterial::get_SecondaryGlossRemap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 NatureMaterial_get_SecondaryGlossRemap_mF8BFAA4A5D1FC9155E1808D70E4041D3506C4C0A (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0AC8A355883E655A34FE508D557B0601516BB54F);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0;
		L_0 = BaseMaterial_TryGetVector_m143D6BDE769623CFDEEC4C244B76F1F137537090(__this, _stringLiteral0AC8A355883E655A34FE508D557B0601516BB54F, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector4_op_Implicit_m2D6D6CC60982A88F7B77B5D0452F1E1652C412A2_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void VisualDesignCafe.Nature.NatureMaterial::set_SecondaryGlossRemap(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_set_SecondaryGlossRemap_m4A6C2AD53F781F071FDB3916BC10DC20C0BCE41A (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0AC8A355883E655A34FE508D557B0601516BB54F);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___value0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = Vector4_op_Implicit_m6162D8136CFE97A5A8BD3B764F9074DB96AA5CD0_inline(L_0, NULL);
		bool L_2;
		L_2 = BaseMaterial_TrySetVector_m45F536CB1E4EBC84AF5827183AF5282139B0597B(__this, _stringLiteral0AC8A355883E655A34FE508D557B0601516BB54F, L_1, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		return;
	}
}
// System.Single VisualDesignCafe.Nature.NatureMaterial::get_SecondaryMetallic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NatureMaterial_get_SecondaryMetallic_m93513DF17AD998CAE187F843D1AF04EEAB2FFA84 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B075FE6415515752C77D69113024693227E5890);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0;
		L_0 = BaseMaterial_TryGetFloat_m0DE38E1A44D929C9D0C195D77FD094609A54266D(__this, _stringLiteral9B075FE6415515752C77D69113024693227E5890, NULL);
		return L_0;
	}
}
// System.Void VisualDesignCafe.Nature.NatureMaterial::set_SecondaryMetallic(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_set_SecondaryMetallic_m014377FB6EECE9E205FD8789AD8D27A6ED47EB07 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B075FE6415515752C77D69113024693227E5890);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___value0;
		bool L_1;
		L_1 = BaseMaterial_TrySetFloat_m3EA239D22D66BBAB3E08A9BEDAC1E764E2B864AF(__this, _stringLiteral9B075FE6415515752C77D69113024693227E5890, L_0, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		return;
	}
}
// UnityEngine.Texture VisualDesignCafe.Nature.NatureMaterial::get_SecondaryMetallicGlossMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* NatureMaterial_get_SecondaryMetallicGlossMap_m092955F78D4AE4EDDC299114BC40E97E6C415C97 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18B61B6742D8AF90118923C54A797A7233F6AD18);
		s_Il2CppMethodInitialized = true;
	}
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0;
		L_0 = BaseMaterial_TryGetTexture_m87D64B52B053AEF87CD64078CD4F28E1C6428CED(__this, _stringLiteral18B61B6742D8AF90118923C54A797A7233F6AD18, NULL);
		return L_0;
	}
}
// System.Void VisualDesignCafe.Nature.NatureMaterial::set_SecondaryMetallicGlossMap(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_set_SecondaryMetallicGlossMap_mE58E701A76DD9B5632A01E028093F7A513573379 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18B61B6742D8AF90118923C54A797A7233F6AD18);
		s_Il2CppMethodInitialized = true;
	}
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = ___value0;
		bool L_1;
		L_1 = BaseMaterial_TrySetTexture_m3698AAFD35350A34A92081127786856F06B5B5AF(__this, _stringLiteral18B61B6742D8AF90118923C54A797A7233F6AD18, L_0, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		return;
	}
}
// UnityEngine.Texture VisualDesignCafe.Nature.NatureMaterial::get_SecondaryNormalMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* NatureMaterial_get_SecondaryNormalMap_mF361E54E10EB5664EE7620646D3D3690C14C89FE (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB13F0051EF3CBDFF3A81EE6331B787440E4E3114);
		s_Il2CppMethodInitialized = true;
	}
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0;
		L_0 = BaseMaterial_TryGetTexture_m87D64B52B053AEF87CD64078CD4F28E1C6428CED(__this, _stringLiteralB13F0051EF3CBDFF3A81EE6331B787440E4E3114, NULL);
		return L_0;
	}
}
// System.Void VisualDesignCafe.Nature.NatureMaterial::set_SecondaryNormalMap(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_set_SecondaryNormalMap_mE367CC01EF14BF8F914963DA2E4268B24CCCDAA0 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB13F0051EF3CBDFF3A81EE6331B787440E4E3114);
		s_Il2CppMethodInitialized = true;
	}
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = ___value0;
		bool L_1;
		L_1 = BaseMaterial_TrySetTexture_m3698AAFD35350A34A92081127786856F06B5B5AF(__this, _stringLiteralB13F0051EF3CBDFF3A81EE6331B787440E4E3114, L_0, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		return;
	}
}
// System.Single VisualDesignCafe.Nature.NatureMaterial::get_SecondaryNormalMapScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NatureMaterial_get_SecondaryNormalMapScale_m863B994B1490FD5101C1EA5A126DF58399A544C6 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral853322B9FFE5CFDD2D1885AA59CC407160C03DC2);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0;
		L_0 = BaseMaterial_TryGetFloat_m0DE38E1A44D929C9D0C195D77FD094609A54266D(__this, _stringLiteral853322B9FFE5CFDD2D1885AA59CC407160C03DC2, NULL);
		return L_0;
	}
}
// System.Void VisualDesignCafe.Nature.NatureMaterial::set_SecondaryNormalMapScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_set_SecondaryNormalMapScale_mB935EE8DD7080ABC42E5E94946C34A6E056AB2D7 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral853322B9FFE5CFDD2D1885AA59CC407160C03DC2);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___value0;
		bool L_1;
		L_1 = BaseMaterial_TrySetFloat_m3EA239D22D66BBAB3E08A9BEDAC1E764E2B864AF(__this, _stringLiteral853322B9FFE5CFDD2D1885AA59CC407160C03DC2, L_0, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		return;
	}
}
// UnityEngine.Texture VisualDesignCafe.Nature.NatureMaterial::get_SecondaryOcclusionMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* NatureMaterial_get_SecondaryOcclusionMap_mEC2CB6723B8D7287F25CE6F218F642F93D89E6D8 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBBB48B207CB8B02FBC8C8E4B0C68F6F37CA773A);
		s_Il2CppMethodInitialized = true;
	}
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0;
		L_0 = BaseMaterial_TryGetTexture_m87D64B52B053AEF87CD64078CD4F28E1C6428CED(__this, _stringLiteralFBBB48B207CB8B02FBC8C8E4B0C68F6F37CA773A, NULL);
		return L_0;
	}
}
// System.Void VisualDesignCafe.Nature.NatureMaterial::set_SecondaryOcclusionMap(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_set_SecondaryOcclusionMap_m616DDEDD99B829675253D903E23210BC01B9F34F (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBBB48B207CB8B02FBC8C8E4B0C68F6F37CA773A);
		s_Il2CppMethodInitialized = true;
	}
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = ___value0;
		bool L_1;
		L_1 = BaseMaterial_TrySetTexture_m3698AAFD35350A34A92081127786856F06B5B5AF(__this, _stringLiteralFBBB48B207CB8B02FBC8C8E4B0C68F6F37CA773A, L_0, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		return;
	}
}
// UnityEngine.Vector2 VisualDesignCafe.Nature.NatureMaterial::get_SecondaryOcclusionRemap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 NatureMaterial_get_SecondaryOcclusionRemap_mA9B65F656974809AD85C77C98547CF22D8C710CE (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4CFDDC9B6033DA4BB507DD933224F9BF284D7A65);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0;
		L_0 = BaseMaterial_TryGetVector_m143D6BDE769623CFDEEC4C244B76F1F137537090(__this, _stringLiteral4CFDDC9B6033DA4BB507DD933224F9BF284D7A65, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector4_op_Implicit_m2D6D6CC60982A88F7B77B5D0452F1E1652C412A2_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void VisualDesignCafe.Nature.NatureMaterial::set_SecondaryOcclusionRemap(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_set_SecondaryOcclusionRemap_mFE4C68A268D047FC3FCC28C7839696CE809AA292 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4CFDDC9B6033DA4BB507DD933224F9BF284D7A65);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___value0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = Vector4_op_Implicit_m6162D8136CFE97A5A8BD3B764F9074DB96AA5CD0_inline(L_0, NULL);
		bool L_2;
		L_2 = BaseMaterial_TrySetVector_m45F536CB1E4EBC84AF5827183AF5282139B0597B(__this, _stringLiteral4CFDDC9B6033DA4BB507DD933224F9BF284D7A65, L_1, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		return;
	}
}
// UnityEngine.Texture VisualDesignCafe.Nature.NatureMaterial::get_SecondaryPackedMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* NatureMaterial_get_SecondaryPackedMap_mA38FA3CBA481F1E3E2F9851D353D5AC332B3CC1A (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB9B7F5D0CFDFE240E6A1497B34DAC1A13F3ECE0);
		s_Il2CppMethodInitialized = true;
	}
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0;
		L_0 = BaseMaterial_TryGetTexture_m87D64B52B053AEF87CD64078CD4F28E1C6428CED(__this, _stringLiteralEB9B7F5D0CFDFE240E6A1497B34DAC1A13F3ECE0, NULL);
		return L_0;
	}
}
// System.Void VisualDesignCafe.Nature.NatureMaterial::set_SecondaryPackedMap(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_set_SecondaryPackedMap_m46D895EFE6C2CB0834CDB04DAC7C3EADF9586E7A (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB9B7F5D0CFDFE240E6A1497B34DAC1A13F3ECE0);
		s_Il2CppMethodInitialized = true;
	}
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = ___value0;
		bool L_1;
		L_1 = BaseMaterial_TrySetTexture_m3698AAFD35350A34A92081127786856F06B5B5AF(__this, _stringLiteralEB9B7F5D0CFDFE240E6A1497B34DAC1A13F3ECE0, L_0, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		return;
	}
}
// System.Boolean VisualDesignCafe.Nature.NatureMaterial::get_BakedMeshData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NatureMaterial_get_BakedMeshData_m5602CE4AC335BFFF42D6A859DA18FAD3C48FA5BA (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB444DDEB7123B6729FACF0C486D332CDC4427F5);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0;
		L_0 = BaseMaterial_TryGetFloat_m0DE38E1A44D929C9D0C195D77FD094609A54266D(__this, _stringLiteralCB444DDEB7123B6729FACF0C486D332CDC4427F5, NULL);
		return (bool)((((float)L_0) > ((float)(0.0f)))? 1 : 0);
	}
}
// System.Void VisualDesignCafe.Nature.NatureMaterial::set_BakedMeshData(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_set_BakedMeshData_m9DDA7CEA34910A3196E7E333ED412E308DC870CA (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB444DDEB7123B6729FACF0C486D332CDC4427F5);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = NULL;
	NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* G_B3_2 = NULL;
	{
		bool L_0 = ___value0;
		G_B1_0 = _stringLiteralCB444DDEB7123B6729FACF0C486D332CDC4427F5;
		G_B1_1 = __this;
		if (L_0)
		{
			G_B2_0 = _stringLiteralCB444DDEB7123B6729FACF0C486D332CDC4427F5;
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
// System.Single VisualDesignCafe.Nature.NatureMaterial::get_ObjectHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NatureMaterial_get_ObjectHeight_mB8922061D5182BA97AE007313C73F7AFDFB28458 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62DD1605E39490E75D2BA2962BFB1401DAED154E);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0;
		L_0 = BaseMaterial_TryGetFloat_m0DE38E1A44D929C9D0C195D77FD094609A54266D(__this, _stringLiteral62DD1605E39490E75D2BA2962BFB1401DAED154E, NULL);
		return L_0;
	}
}
// System.Void VisualDesignCafe.Nature.NatureMaterial::set_ObjectHeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_set_ObjectHeight_mE307F5B30115D2755C4A7ED8C8EB760CA94E9E5B (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62DD1605E39490E75D2BA2962BFB1401DAED154E);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___value0;
		bool L_1;
		L_1 = BaseMaterial_TrySetFloat_m3EA239D22D66BBAB3E08A9BEDAC1E764E2B864AF(__this, _stringLiteral62DD1605E39490E75D2BA2962BFB1401DAED154E, L_0, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		return;
	}
}
// System.Single VisualDesignCafe.Nature.NatureMaterial::get_ObjectRadius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NatureMaterial_get_ObjectRadius_mF4494766A49D7D993DD24433907CF6086E103C2E (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09901DD7DFFA3020CCC8E4ACF7276C6EFA7317CC);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0;
		L_0 = BaseMaterial_TryGetFloat_m0DE38E1A44D929C9D0C195D77FD094609A54266D(__this, _stringLiteral09901DD7DFFA3020CCC8E4ACF7276C6EFA7317CC, NULL);
		return L_0;
	}
}
// System.Void VisualDesignCafe.Nature.NatureMaterial::set_ObjectRadius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_set_ObjectRadius_m1DDDEB9883D6200AE4449307EB6A6509A91FCF77 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09901DD7DFFA3020CCC8E4ACF7276C6EFA7317CC);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___value0;
		bool L_1;
		L_1 = BaseMaterial_TrySetFloat_m3EA239D22D66BBAB3E08A9BEDAC1E764E2B864AF(__this, _stringLiteral09901DD7DFFA3020CCC8E4ACF7276C6EFA7317CC, L_0, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		return;
	}
}
// System.Boolean VisualDesignCafe.Nature.NatureMaterial::get_WindEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NatureMaterial_get_WindEnabled_mD0DDD071E10EC482F2835232635CBCCE48EB22EA (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32EFDDFEAA75BD8C9B227E8BC9CCE4B7268C0716);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0;
		L_0 = BaseMaterial_TryGetFloat_m0DE38E1A44D929C9D0C195D77FD094609A54266D(__this, _stringLiteral32EFDDFEAA75BD8C9B227E8BC9CCE4B7268C0716, NULL);
		return (bool)((((int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_0)) > ((int32_t)0))? 1 : 0);
	}
}
// System.Void VisualDesignCafe.Nature.NatureMaterial::set_WindEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_set_WindEnabled_mF70F0023C0E4079BB7D860FAFAE81CB25D9049A5 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32EFDDFEAA75BD8C9B227E8BC9CCE4B7268C0716);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = NULL;
	NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* G_B3_2 = NULL;
	{
		bool L_0 = ___value0;
		G_B1_0 = _stringLiteral32EFDDFEAA75BD8C9B227E8BC9CCE4B7268C0716;
		G_B1_1 = __this;
		if (L_0)
		{
			G_B2_0 = _stringLiteral32EFDDFEAA75BD8C9B227E8BC9CCE4B7268C0716;
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
// VisualDesignCafe.Nature.NatureMaterial/WindMode VisualDesignCafe.Nature.NatureMaterial::get_Wind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NatureMaterial_get_Wind_mA81FBDA3E0C2908108CECCB40A71C0230FBE5137 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) 
{
	int32_t G_B5_0 = 0;
	{
		bool L_0;
		L_0 = NatureMaterial_get_WindEnabled_mD0DDD071E10EC482F2835232635CBCCE48EB22EA(__this, NULL);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		G_B5_0 = 0;
		goto IL_0017;
	}

IL_000b:
	{
		bool L_1;
		L_1 = NatureMaterial_get_BakedMeshData_m5602CE4AC335BFFF42D6A859DA18FAD3C48FA5BA(__this, NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		G_B5_0 = 2;
		goto IL_0017;
	}

IL_0016:
	{
		G_B5_0 = 1;
	}

IL_0017:
	{
		return (int32_t)(G_B5_0);
	}
}
// System.Void VisualDesignCafe.Nature.NatureMaterial::set_Wind(VisualDesignCafe.Nature.NatureMaterial/WindMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_set_Wind_m9505EBC9DB45027D6141460718E326D308721C20 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___value0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_003b;
			}
			case 1:
			{
				goto IL_0029;
			}
			case 2:
			{
				goto IL_0017;
			}
		}
	}
	{
		goto IL_0045;
	}

IL_0017:
	{
		NatureMaterial_set_WindEnabled_mF70F0023C0E4079BB7D860FAFAE81CB25D9049A5(__this, (bool)1, NULL);
		NatureMaterial_set_BakedMeshData_m9DDA7CEA34910A3196E7E333ED412E308DC870CA(__this, (bool)0, NULL);
		goto IL_0045;
	}

IL_0029:
	{
		NatureMaterial_set_WindEnabled_mF70F0023C0E4079BB7D860FAFAE81CB25D9049A5(__this, (bool)1, NULL);
		NatureMaterial_set_BakedMeshData_m9DDA7CEA34910A3196E7E333ED412E308DC870CA(__this, (bool)1, NULL);
		goto IL_0045;
	}

IL_003b:
	{
		NatureMaterial_set_WindEnabled_mF70F0023C0E4079BB7D860FAFAE81CB25D9049A5(__this, (bool)0, NULL);
		goto IL_0045;
	}

IL_0045:
	{
		return;
	}
}
// System.Single VisualDesignCafe.Nature.NatureMaterial::get_WindVariation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NatureMaterial_get_WindVariation_m337AF608E18035D0670E1FF5BA055F5ADF334469 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB5F9376A64474C91C2F758DDF883ED1EE41FBC6);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0;
		L_0 = BaseMaterial_TryGetFloat_m0DE38E1A44D929C9D0C195D77FD094609A54266D(__this, _stringLiteralBB5F9376A64474C91C2F758DDF883ED1EE41FBC6, NULL);
		return L_0;
	}
}
// System.Void VisualDesignCafe.Nature.NatureMaterial::set_WindVariation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_set_WindVariation_m6A8BD35D4D8B458E272B61A04E5AA0DD69F60731 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB5F9376A64474C91C2F758DDF883ED1EE41FBC6);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___value0;
		bool L_1;
		L_1 = BaseMaterial_TrySetFloat_m3EA239D22D66BBAB3E08A9BEDAC1E764E2B864AF(__this, _stringLiteralBB5F9376A64474C91C2F758DDF883ED1EE41FBC6, L_0, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		return;
	}
}
// System.Single VisualDesignCafe.Nature.NatureMaterial::get_WindStrength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NatureMaterial_get_WindStrength_mA0874B8AD7A3B75A02F8231804392B37E7F3F285 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D759EB39596DF946F001D3EF18CD50CEE17AB4F);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0;
		L_0 = BaseMaterial_TryGetFloat_m0DE38E1A44D929C9D0C195D77FD094609A54266D(__this, _stringLiteral3D759EB39596DF946F001D3EF18CD50CEE17AB4F, NULL);
		return L_0;
	}
}
// System.Void VisualDesignCafe.Nature.NatureMaterial::set_WindStrength(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_set_WindStrength_m69C1DCB569D33B8D18F820693A9C7AEFD07BB728 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D759EB39596DF946F001D3EF18CD50CEE17AB4F);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___value0;
		bool L_1;
		L_1 = BaseMaterial_TrySetFloat_m3EA239D22D66BBAB3E08A9BEDAC1E764E2B864AF(__this, _stringLiteral3D759EB39596DF946F001D3EF18CD50CEE17AB4F, L_0, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		return;
	}
}
// System.Single VisualDesignCafe.Nature.NatureMaterial::get_TurbulenceStrength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NatureMaterial_get_TurbulenceStrength_mDE821D74D635482F13A04247D4908F4A3B5FE2A6 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral986956EF9CEB14E99D6C192F8C2F38538EFC5A2D);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0;
		L_0 = BaseMaterial_TryGetFloat_m0DE38E1A44D929C9D0C195D77FD094609A54266D(__this, _stringLiteral986956EF9CEB14E99D6C192F8C2F38538EFC5A2D, NULL);
		return L_0;
	}
}
// System.Void VisualDesignCafe.Nature.NatureMaterial::set_TurbulenceStrength(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_set_TurbulenceStrength_mBBB9361C5AA851656009E0307565285DA84B6F24 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral986956EF9CEB14E99D6C192F8C2F38538EFC5A2D);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___value0;
		bool L_1;
		L_1 = BaseMaterial_TrySetFloat_m3EA239D22D66BBAB3E08A9BEDAC1E764E2B864AF(__this, _stringLiteral986956EF9CEB14E99D6C192F8C2F38538EFC5A2D, L_0, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		return;
	}
}
// System.Single VisualDesignCafe.Nature.NatureMaterial::get_RecalculateWindNormals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NatureMaterial_get_RecalculateWindNormals_mEA666F6E49D4AAF27BB362D670027A495B55766F (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29E674AC59F39BEBAB85241EDACB34D1D4363E14);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0;
		L_0 = BaseMaterial_TryGetFloat_m0DE38E1A44D929C9D0C195D77FD094609A54266D(__this, _stringLiteral29E674AC59F39BEBAB85241EDACB34D1D4363E14, NULL);
		return L_0;
	}
}
// System.Void VisualDesignCafe.Nature.NatureMaterial::set_RecalculateWindNormals(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_set_RecalculateWindNormals_m099CC1D3DBDA2203EFDD520269FF438323F8E64F (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29E674AC59F39BEBAB85241EDACB34D1D4363E14);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___value0;
		bool L_1;
		L_1 = BaseMaterial_TrySetFloat_m3EA239D22D66BBAB3E08A9BEDAC1E764E2B864AF(__this, _stringLiteral29E674AC59F39BEBAB85241EDACB34D1D4363E14, L_0, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		return;
	}
}
// UnityEngine.Vector2 VisualDesignCafe.Nature.NatureMaterial::get_WindFade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 NatureMaterial_get_WindFade_m0D0720BF52BC191785CCA67C016A228368DFA2A0 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF91E78BD77B8AFA90A9E4C5FCB90C995DFFCF23D);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0;
		L_0 = BaseMaterial_TryGetVector_m143D6BDE769623CFDEEC4C244B76F1F137537090(__this, _stringLiteralF91E78BD77B8AFA90A9E4C5FCB90C995DFFCF23D, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector4_op_Implicit_m2D6D6CC60982A88F7B77B5D0452F1E1652C412A2_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void VisualDesignCafe.Nature.NatureMaterial::set_WindFade(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_set_WindFade_m1D9E48AEED8C4E6A48BA25B748A3FFB5EEA192CF (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF91E78BD77B8AFA90A9E4C5FCB90C995DFFCF23D);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___value0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = Vector4_op_Implicit_m6162D8136CFE97A5A8BD3B764F9074DB96AA5CD0_inline(L_0, NULL);
		bool L_2;
		L_2 = BaseMaterial_TrySetVector_m45F536CB1E4EBC84AF5827183AF5282139B0597B(__this, _stringLiteralF91E78BD77B8AFA90A9E4C5FCB90C995DFFCF23D, L_1, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		return;
	}
}
// UnityEngine.Vector2 VisualDesignCafe.Nature.NatureMaterial::get_TrunkBendFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 NatureMaterial_get_TrunkBendFactor_mC5C1E7686E15DB4958DAD1A948AB3DC796997F4E (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A789A75D45A0FF4D9A8B29FE6D895DD8440C8E1);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0;
		L_0 = BaseMaterial_TryGetVector_m143D6BDE769623CFDEEC4C244B76F1F137537090(__this, _stringLiteral7A789A75D45A0FF4D9A8B29FE6D895DD8440C8E1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector4_op_Implicit_m2D6D6CC60982A88F7B77B5D0452F1E1652C412A2_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void VisualDesignCafe.Nature.NatureMaterial::set_TrunkBendFactor(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_set_TrunkBendFactor_m724CC2E0ABA4DEE16D667E60F18234F840681D59 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A789A75D45A0FF4D9A8B29FE6D895DD8440C8E1);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___value0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = Vector4_op_Implicit_m6162D8136CFE97A5A8BD3B764F9074DB96AA5CD0_inline(L_0, NULL);
		bool L_2;
		L_2 = BaseMaterial_TrySetVector_m45F536CB1E4EBC84AF5827183AF5282139B0597B(__this, _stringLiteral7A789A75D45A0FF4D9A8B29FE6D895DD8440C8E1, L_1, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		return;
	}
}
// System.Single VisualDesignCafe.Nature.NatureMaterial::get_Interaction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NatureMaterial_get_Interaction_m57F9446ACF8936B5D5F884F4B8B3289484C73F85 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0586F14A26BB7A67D8E5092063E7D0084645518);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0;
		L_0 = BaseMaterial_TryGetFloat_m0DE38E1A44D929C9D0C195D77FD094609A54266D(__this, _stringLiteralD0586F14A26BB7A67D8E5092063E7D0084645518, NULL);
		return L_0;
	}
}
// System.Void VisualDesignCafe.Nature.NatureMaterial::set_Interaction(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_set_Interaction_m1DAC0529C720BE5D0B8565D702EF3B6ABEBAE840 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0586F14A26BB7A67D8E5092063E7D0084645518);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___value0;
		bool L_1;
		L_1 = BaseMaterial_TrySetFloat_m3EA239D22D66BBAB3E08A9BEDAC1E764E2B864AF(__this, _stringLiteralD0586F14A26BB7A67D8E5092063E7D0084645518, L_0, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		return;
	}
}
// System.Single VisualDesignCafe.Nature.NatureMaterial::get_InteractionDuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NatureMaterial_get_InteractionDuration_m80C53EE091102AD3809DB3606C3439BDE81AF666 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6EDA9235F48323E22A418492B5EEA3C5CB4D6F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0;
		L_0 = BaseMaterial_TryGetFloat_m0DE38E1A44D929C9D0C195D77FD094609A54266D(__this, _stringLiteralF6EDA9235F48323E22A418492B5EEA3C5CB4D6F8, NULL);
		return L_0;
	}
}
// System.Void VisualDesignCafe.Nature.NatureMaterial::set_InteractionDuration(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_set_InteractionDuration_m6A928B15BEF26C23AA2BE8EDF1E41D7B58BB92D4 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6EDA9235F48323E22A418492B5EEA3C5CB4D6F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___value0;
		bool L_1;
		L_1 = BaseMaterial_TrySetFloat_m3EA239D22D66BBAB3E08A9BEDAC1E764E2B864AF(__this, _stringLiteralF6EDA9235F48323E22A418492B5EEA3C5CB4D6F8, L_0, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		return;
	}
}
// System.Single VisualDesignCafe.Nature.NatureMaterial::get_InteractionStrength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NatureMaterial_get_InteractionStrength_m8D8CFBDB9EB64B3F426F708D9C926D3AE4248527 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C8A9EBD047310A77B12DD35ECB88850C4BFFEBE);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0;
		L_0 = BaseMaterial_TryGetFloat_m0DE38E1A44D929C9D0C195D77FD094609A54266D(__this, _stringLiteral3C8A9EBD047310A77B12DD35ECB88850C4BFFEBE, NULL);
		return L_0;
	}
}
// System.Void VisualDesignCafe.Nature.NatureMaterial::set_InteractionStrength(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_set_InteractionStrength_mDB2C8D4C5F34A230337EA939C5EE8AE1AC1ADF4F (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C8A9EBD047310A77B12DD35ECB88850C4BFFEBE);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___value0;
		bool L_1;
		L_1 = BaseMaterial_TrySetFloat_m3EA239D22D66BBAB3E08A9BEDAC1E764E2B864AF(__this, _stringLiteral3C8A9EBD047310A77B12DD35ECB88850C4BFFEBE, L_0, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		return;
	}
}
// System.Single VisualDesignCafe.Nature.NatureMaterial::get_InteractionPushDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NatureMaterial_get_InteractionPushDown_mF866C469D6F9AAC892B521591D2CE57D22882D8A (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84F67E954366C9756B7B4A850798F3BC7E257377);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0;
		L_0 = BaseMaterial_TryGetFloat_m0DE38E1A44D929C9D0C195D77FD094609A54266D(__this, _stringLiteral84F67E954366C9756B7B4A850798F3BC7E257377, NULL);
		return L_0;
	}
}
// System.Void VisualDesignCafe.Nature.NatureMaterial::set_InteractionPushDown(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_set_InteractionPushDown_m9703A7B72EA9BBF2D9D3C66EFAB95C1EAE7AF0A3 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84F67E954366C9756B7B4A850798F3BC7E257377);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___value0;
		bool L_1;
		L_1 = BaseMaterial_TrySetFloat_m3EA239D22D66BBAB3E08A9BEDAC1E764E2B864AF(__this, _stringLiteral84F67E954366C9756B7B4A850798F3BC7E257377, L_0, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		return;
	}
}
// System.Boolean VisualDesignCafe.Nature.NatureMaterial::get_Translucency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NatureMaterial_get_Translucency_mA939969E3C63862E22DDCF3BB39FE7B9FA9DC726 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral792DE423F9E000F98AAB7A712B18EBC370F139FD);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0;
		L_0 = BaseMaterial_TryGetFloat_m0DE38E1A44D929C9D0C195D77FD094609A54266D(__this, _stringLiteral792DE423F9E000F98AAB7A712B18EBC370F139FD, NULL);
		return (bool)((((float)L_0) == ((float)(1.0f)))? 1 : 0);
	}
}
// System.Void VisualDesignCafe.Nature.NatureMaterial::set_Translucency(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_set_Translucency_m22D5E849D5C63F65813219F2C1E6B6BA91A0428F (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral792DE423F9E000F98AAB7A712B18EBC370F139FD);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = NULL;
	NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* G_B3_2 = NULL;
	{
		bool L_0 = ___value0;
		G_B1_0 = _stringLiteral792DE423F9E000F98AAB7A712B18EBC370F139FD;
		G_B1_1 = __this;
		if (L_0)
		{
			G_B2_0 = _stringLiteral792DE423F9E000F98AAB7A712B18EBC370F139FD;
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
// VisualDesignCafe.Nature.NatureMaterial/BlendMode VisualDesignCafe.Nature.NatureMaterial::get_TranslucencyBlendMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NatureMaterial_get_TranslucencyBlendMode_mAC90DF8077ADAC638785ACAF611EA84748C391CA (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DCD386661CB6097472497BF04B65ED259EB3209);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0;
		L_0 = BaseMaterial_TryGetFloat_m0DE38E1A44D929C9D0C195D77FD094609A54266D(__this, _stringLiteral4DCD386661CB6097472497BF04B65ED259EB3209, NULL);
		return (int32_t)(il2cpp_codegen_cast_double_to_int<int32_t>(L_0));
	}
}
// System.Void VisualDesignCafe.Nature.NatureMaterial::set_TranslucencyBlendMode(VisualDesignCafe.Nature.NatureMaterial/BlendMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_set_TranslucencyBlendMode_m98E9968A0176A835BC594975598A25D1B82B1D1E (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DCD386661CB6097472497BF04B65ED259EB3209);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value0;
		bool L_1;
		L_1 = BaseMaterial_TrySetFloat_m3EA239D22D66BBAB3E08A9BEDAC1E764E2B864AF(__this, _stringLiteral4DCD386661CB6097472497BF04B65ED259EB3209, ((float)L_0), (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		return;
	}
}
// System.Single VisualDesignCafe.Nature.NatureMaterial::get_TranslucencyStrength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NatureMaterial_get_TranslucencyStrength_mD8F490822211B4CCB6EDA3CE09654343B70F8047 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4F7FB4E94213E8C977717FD0F868688BCF6194A);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0;
		L_0 = BaseMaterial_TryGetFloat_m0DE38E1A44D929C9D0C195D77FD094609A54266D(__this, _stringLiteralB4F7FB4E94213E8C977717FD0F868688BCF6194A, NULL);
		return L_0;
	}
}
// System.Void VisualDesignCafe.Nature.NatureMaterial::set_TranslucencyStrength(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_set_TranslucencyStrength_m422A52CF376364D64223D32218AE51C40D6A3C1A (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4F7FB4E94213E8C977717FD0F868688BCF6194A);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___value0;
		bool L_1;
		L_1 = BaseMaterial_TrySetFloat_m3EA239D22D66BBAB3E08A9BEDAC1E764E2B864AF(__this, _stringLiteralB4F7FB4E94213E8C977717FD0F868688BCF6194A, L_0, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		return;
	}
}
// System.Single VisualDesignCafe.Nature.NatureMaterial::get_TranslucencyDistortion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NatureMaterial_get_TranslucencyDistortion_m25BA53E18A884416FCE2F2A62237944A486DEF94 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE06D9193CE8413D0194CBC69F1ECDA9E470DC097);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0;
		L_0 = BaseMaterial_TryGetFloat_m0DE38E1A44D929C9D0C195D77FD094609A54266D(__this, _stringLiteralE06D9193CE8413D0194CBC69F1ECDA9E470DC097, NULL);
		return L_0;
	}
}
// System.Void VisualDesignCafe.Nature.NatureMaterial::set_TranslucencyDistortion(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_set_TranslucencyDistortion_mC54C8336C4A7D9CB88B80A7EF6498D98449AC75B (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE06D9193CE8413D0194CBC69F1ECDA9E470DC097);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___value0;
		bool L_1;
		L_1 = BaseMaterial_TrySetFloat_m3EA239D22D66BBAB3E08A9BEDAC1E764E2B864AF(__this, _stringLiteralE06D9193CE8413D0194CBC69F1ECDA9E470DC097, L_0, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		return;
	}
}
// System.Single VisualDesignCafe.Nature.NatureMaterial::get_TranslucencyScattering()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NatureMaterial_get_TranslucencyScattering_m3308B19E56CE2DD801B21E354E3BC7A3F0F926BD (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB76E41BDD84DEE5E5798CB40C8917D99C5C671BC);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0;
		L_0 = BaseMaterial_TryGetFloat_m0DE38E1A44D929C9D0C195D77FD094609A54266D(__this, _stringLiteralB76E41BDD84DEE5E5798CB40C8917D99C5C671BC, NULL);
		return L_0;
	}
}
// System.Void VisualDesignCafe.Nature.NatureMaterial::set_TranslucencyScattering(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_set_TranslucencyScattering_mF9C63C4F42857F7C8063B2BED82A2AC2658BD12A (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB76E41BDD84DEE5E5798CB40C8917D99C5C671BC);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___value0;
		bool L_1;
		L_1 = BaseMaterial_TrySetFloat_m3EA239D22D66BBAB3E08A9BEDAC1E764E2B864AF(__this, _stringLiteralB76E41BDD84DEE5E5798CB40C8917D99C5C671BC, L_0, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		return;
	}
}
// System.Single VisualDesignCafe.Nature.NatureMaterial::get_TranslucencyColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NatureMaterial_get_TranslucencyColor_m4F30E87176068600D7399A18416ECE2A8B83D9BD (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FF3CD2C88399015271A96B99EB23CCD308784D6);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0;
		L_0 = BaseMaterial_TryGetFloat_m0DE38E1A44D929C9D0C195D77FD094609A54266D(__this, _stringLiteral8FF3CD2C88399015271A96B99EB23CCD308784D6, NULL);
		return L_0;
	}
}
// System.Void VisualDesignCafe.Nature.NatureMaterial::set_TranslucencyColor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_set_TranslucencyColor_m7AA4164D7FF8CF6DD00920ACB16A398C73E10E65 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FF3CD2C88399015271A96B99EB23CCD308784D6);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___value0;
		bool L_1;
		L_1 = BaseMaterial_TrySetFloat_m3EA239D22D66BBAB3E08A9BEDAC1E764E2B864AF(__this, _stringLiteral8FF3CD2C88399015271A96B99EB23CCD308784D6, L_0, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		return;
	}
}
// System.Single VisualDesignCafe.Nature.NatureMaterial::get_TranslucencyAmbient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NatureMaterial_get_TranslucencyAmbient_mE65D4E968C2954E99ACAB0D4C2241526921811A4 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCC459B6F2EABAA6565EBB224169E5D96E2BDD3D);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0;
		L_0 = BaseMaterial_TryGetFloat_m0DE38E1A44D929C9D0C195D77FD094609A54266D(__this, _stringLiteralCCC459B6F2EABAA6565EBB224169E5D96E2BDD3D, NULL);
		return L_0;
	}
}
// System.Void VisualDesignCafe.Nature.NatureMaterial::set_TranslucencyAmbient(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_set_TranslucencyAmbient_mC5D2D150D574973913E20F89E2CBD0FBC288B8F4 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCC459B6F2EABAA6565EBB224169E5D96E2BDD3D);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___value0;
		bool L_1;
		L_1 = BaseMaterial_TrySetFloat_m3EA239D22D66BBAB3E08A9BEDAC1E764E2B864AF(__this, _stringLiteralCCC459B6F2EABAA6565EBB224169E5D96E2BDD3D, L_0, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		return;
	}
}
// UnityEngine.Texture VisualDesignCafe.Nature.NatureMaterial::get_ThicknessMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* NatureMaterial_get_ThicknessMap_m88F38A8E9BE2039DB882F05CBD988F5EEDE9F6A0 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5D0F975EB1FAB7759ED5BDDF7A8243429008370);
		s_Il2CppMethodInitialized = true;
	}
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0;
		L_0 = BaseMaterial_TryGetTexture_m87D64B52B053AEF87CD64078CD4F28E1C6428CED(__this, _stringLiteralB5D0F975EB1FAB7759ED5BDDF7A8243429008370, NULL);
		return L_0;
	}
}
// System.Void VisualDesignCafe.Nature.NatureMaterial::set_ThicknessMap(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_set_ThicknessMap_m9B0D8334593F23348967575DE8C9840E8C4B6584 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5D0F975EB1FAB7759ED5BDDF7A8243429008370);
		s_Il2CppMethodInitialized = true;
	}
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = ___value0;
		bool L_1;
		L_1 = BaseMaterial_TrySetTexture_m3698AAFD35350A34A92081127786856F06B5B5AF(__this, _stringLiteralB5D0F975EB1FAB7759ED5BDDF7A8243429008370, L_0, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		return;
	}
}
// UnityEngine.Vector2 VisualDesignCafe.Nature.NatureMaterial::get_ThicknessRemap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 NatureMaterial_get_ThicknessRemap_mE3095DD6F815C53884BAB411278875648ED91E44 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB77249678DF63BB7438A25390C66F6DD9109EF03);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0;
		L_0 = BaseMaterial_TryGetVector_m143D6BDE769623CFDEEC4C244B76F1F137537090(__this, _stringLiteralB77249678DF63BB7438A25390C66F6DD9109EF03, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector4_op_Implicit_m2D6D6CC60982A88F7B77B5D0452F1E1652C412A2_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void VisualDesignCafe.Nature.NatureMaterial::set_ThicknessRemap(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_set_ThicknessRemap_mB41B6A3BE4486033C0FDA7B117D19204A2575E7B (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB77249678DF63BB7438A25390C66F6DD9109EF03);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___value0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = Vector4_op_Implicit_m6162D8136CFE97A5A8BD3B764F9074DB96AA5CD0_inline(L_0, NULL);
		bool L_2;
		L_2 = BaseMaterial_TrySetVector_m45F536CB1E4EBC84AF5827183AF5282139B0597B(__this, _stringLiteralB77249678DF63BB7438A25390C66F6DD9109EF03, L_1, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		return;
	}
}
// System.String VisualDesignCafe.Nature.NatureMaterial::get_DiffusionProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NatureMaterial_get_DiffusionProfile_mDA70CA3287C0F72FAC2169B0536C69120CCB3BAD (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECE74519E5D8D45A5F071792282B3F24236812B);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0;
		L_0 = BaseMaterial_TryGetVector_m143D6BDE769623CFDEEC4C244B76F1F137537090(__this, _stringLiteralCECE74519E5D8D45A5F071792282B3F24236812B, NULL);
		String_t* L_1;
		L_1 = NatureMaterial_ConvertVector4ToGUID_m2FF9558CF55D899FEBCBA2189E8D1B2D20404E48(__this, L_0, NULL);
		return L_1;
	}
}
// System.Void VisualDesignCafe.Nature.NatureMaterial::set_DiffusionProfile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_set_DiffusionProfile_mAD188799A1C1C20473D880FD7FF173AE7D9F18B0 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECE74519E5D8D45A5F071792282B3F24236812B);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = NatureMaterial_ConvertGUIDToVector4_mC06C6023399616AC64B444E0BFC4FE27356C1446(__this, L_0, NULL);
		bool L_2;
		L_2 = BaseMaterial_TrySetVector_m45F536CB1E4EBC84AF5827183AF5282139B0597B(__this, _stringLiteralCECE74519E5D8D45A5F071792282B3F24236812B, L_1, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		String_t* L_3 = ___value0;
		uint32_t L_4;
		L_4 = NatureMaterial_GetDiffusionProfileHash_m1575F0FE313B7EDF367611067ABB683D6B881103(L_3, NULL);
		NatureMaterial_set_DiffusionProfileHash_m7E4A34BF1BE085DB9F0B3E8B53140EDC0927A75A(__this, L_4, NULL);
		return;
	}
}
// System.UInt32 VisualDesignCafe.Nature.NatureMaterial::get_DiffusionProfileHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NatureMaterial_get_DiffusionProfileHash_mF5EBA2399A943B4BB755CA58BC41935AFB22F98B (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral716ADB1D0C262347EDFA404FE1538D84DB625B84);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0;
		L_0 = BaseMaterial_TryGetFloat_m0DE38E1A44D929C9D0C195D77FD094609A54266D(__this, _stringLiteral716ADB1D0C262347EDFA404FE1538D84DB625B84, NULL);
		uint32_t L_1;
		L_1 = NatureMaterial_Asuint_m932FAED75B94AEA7391908B2291E0D2502BAD999(L_0, NULL);
		return L_1;
	}
}
// System.Void VisualDesignCafe.Nature.NatureMaterial::set_DiffusionProfileHash(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_set_DiffusionProfileHash_m7E4A34BF1BE085DB9F0B3E8B53140EDC0927A75A (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, uint32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral716ADB1D0C262347EDFA404FE1538D84DB625B84);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = ___value0;
		float L_1;
		L_1 = NatureMaterial_Asfloat_m76D5BFD6A89289C9305BE49EA80BD2600D9E4CB3(L_0, NULL);
		bool L_2;
		L_2 = BaseMaterial_TrySetFloat_m3EA239D22D66BBAB3E08A9BEDAC1E764E2B864AF(__this, _stringLiteral716ADB1D0C262347EDFA404FE1538D84DB625B84, L_1, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		return;
	}
}
// System.Boolean VisualDesignCafe.Nature.NatureMaterial::get_Overlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NatureMaterial_get_Overlay_m23ED466ECA0E9A5F963029CE02B8AA1759548FE0 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC36C08270F0656B15564B93B095160EB52C35960);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0;
		L_0 = BaseMaterial_TryGetFloat_m0DE38E1A44D929C9D0C195D77FD094609A54266D(__this, _stringLiteralC36C08270F0656B15564B93B095160EB52C35960, NULL);
		return (bool)((((float)L_0) == ((float)(1.0f)))? 1 : 0);
	}
}
// System.Void VisualDesignCafe.Nature.NatureMaterial::set_Overlay(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_set_Overlay_m11C1FF1F1A90A1B74C73BC5DE41FD5C93F355035 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC36C08270F0656B15564B93B095160EB52C35960);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = NULL;
	NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* G_B3_2 = NULL;
	{
		bool L_0 = ___value0;
		G_B1_0 = _stringLiteralC36C08270F0656B15564B93B095160EB52C35960;
		G_B1_1 = __this;
		if (L_0)
		{
			G_B2_0 = _stringLiteralC36C08270F0656B15564B93B095160EB52C35960;
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
// System.Boolean VisualDesignCafe.Nature.NatureMaterial::get_SampleAlphaOverlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NatureMaterial_get_SampleAlphaOverlay_m2D00794580DE3EF3E0EF3134C2DE298571DD941C (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38719FF7E7FA8790827118159B4046D7D9368754);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0;
		L_0 = BaseMaterial_TryGetFloat_m0DE38E1A44D929C9D0C195D77FD094609A54266D(__this, _stringLiteral38719FF7E7FA8790827118159B4046D7D9368754, NULL);
		return (bool)((((float)L_0) == ((float)(1.0f)))? 1 : 0);
	}
}
// System.Void VisualDesignCafe.Nature.NatureMaterial::set_SampleAlphaOverlay(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_set_SampleAlphaOverlay_m5987D2AEE16200E3873A4C44CCD998DB00DA1D01 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38719FF7E7FA8790827118159B4046D7D9368754);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = NULL;
	NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* G_B3_2 = NULL;
	{
		bool L_0 = ___value0;
		G_B1_0 = _stringLiteral38719FF7E7FA8790827118159B4046D7D9368754;
		G_B1_1 = __this;
		if (L_0)
		{
			G_B2_0 = _stringLiteral38719FF7E7FA8790827118159B4046D7D9368754;
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
// System.Boolean VisualDesignCafe.Nature.NatureMaterial::get_SampleColorOverlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NatureMaterial_get_SampleColorOverlay_m778BE9A31460A0D42F4F2E2048873FCC7A1EC44B (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BA3B7DC27615764497D1BC93E2F45225CEDB7F1);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0;
		L_0 = BaseMaterial_TryGetFloat_m0DE38E1A44D929C9D0C195D77FD094609A54266D(__this, _stringLiteral7BA3B7DC27615764497D1BC93E2F45225CEDB7F1, NULL);
		return (bool)((((float)L_0) == ((float)(1.0f)))? 1 : 0);
	}
}
// System.Void VisualDesignCafe.Nature.NatureMaterial::set_SampleColorOverlay(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_set_SampleColorOverlay_m4DC0E12236A2DB96F42900CC5A87F4ABC88896E3 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BA3B7DC27615764497D1BC93E2F45225CEDB7F1);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = NULL;
	NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* G_B3_2 = NULL;
	{
		bool L_0 = ___value0;
		G_B1_0 = _stringLiteral7BA3B7DC27615764497D1BC93E2F45225CEDB7F1;
		G_B1_1 = __this;
		if (L_0)
		{
			G_B2_0 = _stringLiteral7BA3B7DC27615764497D1BC93E2F45225CEDB7F1;
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
// System.Single VisualDesignCafe.Nature.NatureMaterial::get_PerspectiveCorrection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NatureMaterial_get_PerspectiveCorrection_mD45B0FAF980B0B969D380EBF0726884E9470C83E (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78601036D1C1439FC502D831B3E0521E1450C550);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0;
		L_0 = BaseMaterial_TryGetFloat_m0DE38E1A44D929C9D0C195D77FD094609A54266D(__this, _stringLiteral78601036D1C1439FC502D831B3E0521E1450C550, NULL);
		return L_0;
	}
}
// System.Void VisualDesignCafe.Nature.NatureMaterial::set_PerspectiveCorrection(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_set_PerspectiveCorrection_m6696CA86C9BE66BA40DD412B67E8329D7AB1A0FA (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78601036D1C1439FC502D831B3E0521E1450C550);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___value0;
		bool L_1;
		L_1 = BaseMaterial_TrySetFloat_m3EA239D22D66BBAB3E08A9BEDAC1E764E2B864AF(__this, _stringLiteral78601036D1C1439FC502D831B3E0521E1450C550, L_0, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		return;
	}
}
// VisualDesignCafe.Nature.NatureMaterial/LightingQuality VisualDesignCafe.Nature.NatureMaterial::get_Lighting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NatureMaterial_get_Lighting_m29EEE0B0FB6706B8AE6B2852114B68908EA2DC64 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDFC3ABBF53494D9AFEB81D77A493910809F1E30);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0;
		L_0 = BaseMaterial_TryGetFloat_m0DE38E1A44D929C9D0C195D77FD094609A54266D(__this, _stringLiteralBDFC3ABBF53494D9AFEB81D77A493910809F1E30, NULL);
		return (int32_t)(il2cpp_codegen_cast_double_to_int<int32_t>(L_0));
	}
}
// System.Void VisualDesignCafe.Nature.NatureMaterial::set_Lighting(VisualDesignCafe.Nature.NatureMaterial/LightingQuality)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_set_Lighting_m94B52711AF84E310F3902BDC38C6091FFDD1CD87 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDFC3ABBF53494D9AFEB81D77A493910809F1E30);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value0;
		bool L_1;
		L_1 = BaseMaterial_TrySetFloat_m3EA239D22D66BBAB3E08A9BEDAC1E764E2B864AF(__this, _stringLiteralBDFC3ABBF53494D9AFEB81D77A493910809F1E30, ((float)L_0), (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		return;
	}
}
// System.Void VisualDesignCafe.Nature.NatureMaterial::.ctor(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial__ctor_mE124370F6D1DF9D085D2D6A8ACEECAF1958293E1 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, const RuntimeMethod* method) 
{
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___material0;
		LitMaterial__ctor_m31E602B441C3B61AF27CE0324AD08BE027C38A33(__this, L_0, NULL);
		return;
	}
}
// System.Void VisualDesignCafe.Nature.NatureMaterial::Validate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_Validate_mD742A252E75A41F6ECA7D8D7772AF55775E753DB (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, bool ___clean0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD50BBF0E651CAFB8BF014236C4C1C9B825D96612);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE90B8B5ABC23C40C149403A5760F98250FFFA464);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B2_0 = 0;
	NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* G_B2_1 = NULL;
	int32_t G_B1_0 = 0;
	NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* G_B3_2 = NULL;
	{
		bool L_0 = ___clean0;
		LitMaterial_Validate_m130B7BEAEC069AE834C231DD3B18C7250C98B5C3(__this, L_0, NULL);
		NatureMaterial_ValidateColorCorrection_mE9A09CBCFC3C0301FB3F6EE3BB1EC7F934425485(__this, NULL);
		NatureMaterial_ValidateMeshData_mCD60BD0238D0C4155F69B7D0484153B3C1DB0DDE(__this, NULL);
		NatureMaterial_ValidateWind_m0C00F9E684536A0B8EE00F8D4DE0F65E41F7AFB8(__this, NULL);
		NatureMaterial_ValidateInteraction_m954E946F9EC720314D4AD615DB481D0A3CB6DAEC(__this, NULL);
		NatureMaterial_ValidateOverlay_m19AE5E00A8FF5A635FE56B58F38CA52203EC29C2(__this, NULL);
		NatureMaterial_ValidateTranslucency_mA167A8721EF68961A0DC6AD1856E47A69742E073(__this, NULL);
		NatureMaterial_ValidateLightingQuality_m48E9B7566659B7B46A5324D637D1B88FAA34E557(__this, NULL);
		NatureMaterial_ValidateSecondaryMaps_m50339D2453ECA45C7FC852E122E55F3DE4B5A8E0(__this, NULL);
		bool L_1;
		L_1 = BaseMaterial_GetKeyword_mE9ADE2DA9179CD345B093DDC34A69FA5F572E746(__this, _stringLiteralD50BBF0E651CAFB8BF014236C4C1C9B825D96612, NULL);
		G_B1_0 = 0;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = 0;
			G_B2_1 = __this;
			goto IL_005d;
		}
	}
	{
		bool L_2;
		L_2 = BaseMaterial_GetKeyword_mE9ADE2DA9179CD345B093DDC34A69FA5F572E746(__this, _stringLiteralE90B8B5ABC23C40C149403A5760F98250FFFA464, NULL);
		G_B3_0 = ((int32_t)(L_2));
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_005e;
	}

IL_005d:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_005e:
	{
		bool L_3;
		L_3 = LitMaterial_get_TemporalAntiAliasing_m4C2505672C0FCAB5DC6A3B8008E9A5C60F1ECB1C(__this, NULL);
		NullCheck(G_B3_2);
		VirtualActionInvoker3< bool, bool, bool >::Invoke(6 /* System.Void VisualDesignCafe.ShaderX.Materials.BaseMaterial::ValidatePasses(System.Boolean,System.Boolean,System.Boolean) */, G_B3_2, (bool)G_B3_1, (bool)G_B3_0, (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0));
		return;
	}
}
// System.Void VisualDesignCafe.Nature.NatureMaterial::ValidateMeshData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_ValidateMeshData_mCD60BD0238D0C4155F69B7D0484153B3C1DB0DDE (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF7473F31749D506CBBE9A13C018FCE244410941);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = NatureMaterial_get_BakedMeshData_m5602CE4AC335BFFF42D6A859DA18FAD3C48FA5BA(__this, NULL);
		BaseMaterial_SetKeyword_m5DC6D210EDBE262DC9DFD535C87459576F55A329(__this, _stringLiteralBF7473F31749D506CBBE9A13C018FCE244410941, L_0, NULL);
		return;
	}
}
// System.Void VisualDesignCafe.Nature.NatureMaterial::ValidateColorCorrection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_ValidateColorCorrection_mE9A09CBCFC3C0301FB3F6EE3BB1EC7F934425485 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral359B8F97A0A7ED527FB45650F112EB5822253ECA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DE0F763543D833DDDF6560490CFBF783990FB94);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = NatureMaterial_get_ColorCorrection_m7DE782A925D0071AD2BFFAF0F14076C697BFD5DC(__this, NULL);
		BaseMaterial_SetKeyword_m5DC6D210EDBE262DC9DFD535C87459576F55A329(__this, _stringLiteral359B8F97A0A7ED527FB45650F112EB5822253ECA, (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0), NULL);
		int32_t L_1;
		L_1 = NatureMaterial_get_ColorCorrection_m7DE782A925D0071AD2BFFAF0F14076C697BFD5DC(__this, NULL);
		BaseMaterial_SetKeyword_m5DC6D210EDBE262DC9DFD535C87459576F55A329(__this, _stringLiteral6DE0F763543D833DDDF6560490CFBF783990FB94, (bool)((((int32_t)L_1) == ((int32_t)1))? 1 : 0), NULL);
		return;
	}
}
// System.Void VisualDesignCafe.Nature.NatureMaterial::ValidateWind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_ValidateWind_m0C00F9E684536A0B8EE00F8D4DE0F65E41F7AFB8 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CD907B0BC9D663068EB5881E951496942035E8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5B86CEA500C9A5A52B82F5D5253C03318964786);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = NatureMaterial_get_WindEnabled_mD0DDD071E10EC482F2835232635CBCCE48EB22EA(__this, NULL);
		BaseMaterial_SetKeyword_m5DC6D210EDBE262DC9DFD535C87459576F55A329(__this, _stringLiteral1CD907B0BC9D663068EB5881E951496942035E8D, (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0), NULL);
		bool L_1;
		L_1 = NatureMaterial_get_WindEnabled_mD0DDD071E10EC482F2835232635CBCCE48EB22EA(__this, NULL);
		BaseMaterial_SetKeyword_m5DC6D210EDBE262DC9DFD535C87459576F55A329(__this, _stringLiteralF5B86CEA500C9A5A52B82F5D5253C03318964786, L_1, NULL);
		return;
	}
}
// System.Void VisualDesignCafe.Nature.NatureMaterial::ValidateInteraction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_ValidateInteraction_m954E946F9EC720314D4AD615DB481D0A3CB6DAEC (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F0DFC050054A9594B803B0A72988BA4666419EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7233EADF7D2A53753670B9E24CE161CC40017684);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0;
		L_0 = NatureMaterial_get_Interaction_m57F9446ACF8936B5D5F884F4B8B3289484C73F85(__this, NULL);
		BaseMaterial_SetKeyword_m5DC6D210EDBE262DC9DFD535C87459576F55A329(__this, _stringLiteral7233EADF7D2A53753670B9E24CE161CC40017684, (bool)((((float)L_0) < ((float)(1.0f)))? 1 : 0), NULL);
		float L_1;
		L_1 = NatureMaterial_get_Interaction_m57F9446ACF8936B5D5F884F4B8B3289484C73F85(__this, NULL);
		BaseMaterial_SetKeyword_m5DC6D210EDBE262DC9DFD535C87459576F55A329(__this, _stringLiteral2F0DFC050054A9594B803B0A72988BA4666419EB, (bool)((((int32_t)((!(((float)L_1) >= ((float)(1.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		return;
	}
}
// System.Void VisualDesignCafe.Nature.NatureMaterial::ValidateOverlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_ValidateOverlay_m19AE5E00A8FF5A635FE56B58F38CA52203EC29C2 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12620BDB40B0DA68B35A6A31DFD4BD6F90D7D75D);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = NatureMaterial_get_Overlay_m23ED466ECA0E9A5F963029CE02B8AA1759548FE0(__this, NULL);
		BaseMaterial_SetKeyword_m5DC6D210EDBE262DC9DFD535C87459576F55A329(__this, _stringLiteral12620BDB40B0DA68B35A6A31DFD4BD6F90D7D75D, L_0, NULL);
		return;
	}
}
// System.Void VisualDesignCafe.Nature.NatureMaterial::ValidateTranslucency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_ValidateTranslucency_mA167A8721EF68961A0DC6AD1856E47A69742E073 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4F7FB4E94213E8C977717FD0F868688BCF6194A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD50BBF0E651CAFB8BF014236C4C1C9B825D96612);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE90B8B5ABC23C40C149403A5760F98250FFFA464);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* G_B4_0 = NULL;
	NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* G_B4_1 = NULL;
	String_t* G_B2_0 = NULL;
	NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* G_B2_1 = NULL;
	String_t* G_B3_0 = NULL;
	NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	String_t* G_B5_1 = NULL;
	NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* G_B5_2 = NULL;
	String_t* G_B8_0 = NULL;
	NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* G_B8_1 = NULL;
	String_t* G_B6_0 = NULL;
	NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* G_B6_1 = NULL;
	String_t* G_B7_0 = NULL;
	NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* G_B7_1 = NULL;
	int32_t G_B9_0 = 0;
	String_t* G_B9_1 = NULL;
	NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* G_B9_2 = NULL;
	String_t* G_B12_0 = NULL;
	NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* G_B12_1 = NULL;
	String_t* G_B11_0 = NULL;
	NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* G_B11_1 = NULL;
	int32_t G_B13_0 = 0;
	String_t* G_B13_1 = NULL;
	NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* G_B13_2 = NULL;
	String_t* G_B15_0 = NULL;
	NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* G_B15_1 = NULL;
	String_t* G_B14_0 = NULL;
	NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* G_B14_1 = NULL;
	int32_t G_B16_0 = 0;
	String_t* G_B16_1 = NULL;
	NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* G_B16_2 = NULL;
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ((BaseMaterial_t75CEB54A6E97E52D865A51213E7D5A13D93DB7B2*)__this)->___Material_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Material_HasProperty_mC09A83B44E368A217F606DD4954FA080CC03EC6C(L_0, _stringLiteralB4F7FB4E94213E8C977717FD0F868688BCF6194A, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0079;
		}
	}
	{
		bool L_3;
		L_3 = NatureMaterial_get_Translucency_mA939969E3C63862E22DDCF3BB39FE7B9FA9DC726(__this, NULL);
		G_B2_0 = _stringLiteralD50BBF0E651CAFB8BF014236C4C1C9B825D96612;
		G_B2_1 = __this;
		if (!L_3)
		{
			G_B4_0 = _stringLiteralD50BBF0E651CAFB8BF014236C4C1C9B825D96612;
			G_B4_1 = __this;
			goto IL_003f;
		}
	}
	{
		float L_4;
		L_4 = NatureMaterial_get_TranslucencyStrength_mD8F490822211B4CCB6EDA3CE09654343B70F8047(__this, NULL);
		G_B3_0 = G_B2_0;
		G_B3_1 = G_B2_1;
		if ((!(((float)L_4) > ((float)(0.0f)))))
		{
			G_B4_0 = G_B2_0;
			G_B4_1 = G_B2_1;
			goto IL_003f;
		}
	}
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_5;
		L_5 = NatureMaterial_get_ThicknessMap_m88F38A8E9BE2039DB882F05CBD988F5EEDE9F6A0(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B5_0 = ((int32_t)(L_6));
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0040;
	}

IL_003f:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0040:
	{
		NullCheck(G_B5_2);
		BaseMaterial_SetKeyword_m5DC6D210EDBE262DC9DFD535C87459576F55A329(G_B5_2, G_B5_1, (bool)G_B5_0, NULL);
		bool L_7;
		L_7 = NatureMaterial_get_Translucency_mA939969E3C63862E22DDCF3BB39FE7B9FA9DC726(__this, NULL);
		G_B6_0 = _stringLiteralE90B8B5ABC23C40C149403A5760F98250FFFA464;
		G_B6_1 = __this;
		if (!L_7)
		{
			G_B8_0 = _stringLiteralE90B8B5ABC23C40C149403A5760F98250FFFA464;
			G_B8_1 = __this;
			goto IL_006f;
		}
	}
	{
		float L_8;
		L_8 = NatureMaterial_get_TranslucencyStrength_mD8F490822211B4CCB6EDA3CE09654343B70F8047(__this, NULL);
		G_B7_0 = G_B6_0;
		G_B7_1 = G_B6_1;
		if ((!(((float)L_8) > ((float)(0.0f)))))
		{
			G_B8_0 = G_B6_0;
			G_B8_1 = G_B6_1;
			goto IL_006f;
		}
	}
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_9;
		L_9 = NatureMaterial_get_ThicknessMap_m88F38A8E9BE2039DB882F05CBD988F5EEDE9F6A0(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B9_0 = ((int32_t)(L_10));
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		goto IL_0070;
	}

IL_006f:
	{
		G_B9_0 = 0;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
	}

IL_0070:
	{
		NullCheck(G_B9_2);
		BaseMaterial_SetKeyword_m5DC6D210EDBE262DC9DFD535C87459576F55A329(G_B9_2, G_B9_1, (bool)G_B9_0, NULL);
		goto IL_00c1;
	}

IL_0079:
	{
		bool L_11;
		L_11 = NatureMaterial_get_Translucency_mA939969E3C63862E22DDCF3BB39FE7B9FA9DC726(__this, NULL);
		G_B11_0 = _stringLiteralD50BBF0E651CAFB8BF014236C4C1C9B825D96612;
		G_B11_1 = __this;
		if (!L_11)
		{
			G_B12_0 = _stringLiteralD50BBF0E651CAFB8BF014236C4C1C9B825D96612;
			G_B12_1 = __this;
			goto IL_0096;
		}
	}
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_12;
		L_12 = NatureMaterial_get_ThicknessMap_m88F38A8E9BE2039DB882F05CBD988F5EEDE9F6A0(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_12, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B13_0 = ((int32_t)(L_13));
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		goto IL_0097;
	}

IL_0096:
	{
		G_B13_0 = 0;
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
	}

IL_0097:
	{
		NullCheck(G_B13_2);
		BaseMaterial_SetKeyword_m5DC6D210EDBE262DC9DFD535C87459576F55A329(G_B13_2, G_B13_1, (bool)G_B13_0, NULL);
		bool L_14;
		L_14 = NatureMaterial_get_Translucency_mA939969E3C63862E22DDCF3BB39FE7B9FA9DC726(__this, NULL);
		G_B14_0 = _stringLiteralE90B8B5ABC23C40C149403A5760F98250FFFA464;
		G_B14_1 = __this;
		if (!L_14)
		{
			G_B15_0 = _stringLiteralE90B8B5ABC23C40C149403A5760F98250FFFA464;
			G_B15_1 = __this;
			goto IL_00b9;
		}
	}
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_15;
		L_15 = NatureMaterial_get_ThicknessMap_m88F38A8E9BE2039DB882F05CBD988F5EEDE9F6A0(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B16_0 = ((int32_t)(L_16));
		G_B16_1 = G_B14_0;
		G_B16_2 = G_B14_1;
		goto IL_00ba;
	}

IL_00b9:
	{
		G_B16_0 = 0;
		G_B16_1 = G_B15_0;
		G_B16_2 = G_B15_1;
	}

IL_00ba:
	{
		NullCheck(G_B16_2);
		BaseMaterial_SetKeyword_m5DC6D210EDBE262DC9DFD535C87459576F55A329(G_B16_2, G_B16_1, (bool)G_B16_0, NULL);
	}

IL_00c1:
	{
		return;
	}
}
// System.Void VisualDesignCafe.Nature.NatureMaterial::ValidateLightingQuality()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_ValidateLightingQuality_m48E9B7566659B7B46A5324D637D1B88FAA34E557 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DD7BFAE4B18F706204B4CE0597EDBC48E7F3F80);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8ED5DF177B17350D8C29D580BD74F748662216AA);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = NatureMaterial_get_Lighting_m29EEE0B0FB6706B8AE6B2852114B68908EA2DC64(__this, NULL);
		BaseMaterial_SetKeyword_m5DC6D210EDBE262DC9DFD535C87459576F55A329(__this, _stringLiteral5DD7BFAE4B18F706204B4CE0597EDBC48E7F3F80, (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0), NULL);
		int32_t L_1;
		L_1 = NatureMaterial_get_Lighting_m29EEE0B0FB6706B8AE6B2852114B68908EA2DC64(__this, NULL);
		BaseMaterial_SetKeyword_m5DC6D210EDBE262DC9DFD535C87459576F55A329(__this, _stringLiteral8ED5DF177B17350D8C29D580BD74F748662216AA, (bool)((((int32_t)L_1) == ((int32_t)1))? 1 : 0), NULL);
		return;
	}
}
// System.Void VisualDesignCafe.Nature.NatureMaterial::ValidateSecondaryMaps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureMaterial_ValidateSecondaryMaps_m50339D2453ECA45C7FC852E122E55F3DE4B5A8E0 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A95D59422A8A85BCAF78DF129CB3D525B429C07);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B5_0 = 0;
	{
		V_0 = (bool)0;
		int32_t L_0;
		L_0 = LitMaterial_get_SurfaceMap_mB89C14EBAEE3AE9617DEA1B4B17BE9C53345ED57(__this, NULL);
		V_1 = L_0;
		int32_t L_1 = V_1;
		switch (L_1)
		{
			case 0:
			{
				goto IL_004d;
			}
			case 1:
			{
				goto IL_001e;
			}
			case 2:
			{
				goto IL_003e;
			}
		}
	}
	{
		goto IL_0051;
	}

IL_001e:
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_2;
		L_2 = NatureMaterial_get_SecondaryMetallicGlossMap_m092955F78D4AE4EDDC299114BC40E97E6C415C97(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_3)
		{
			goto IL_003a;
		}
	}
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_4;
		L_4 = NatureMaterial_get_SecondaryOcclusionMap_mEC2CB6723B8D7287F25CE6F218F642F93D89E6D8(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B5_0 = ((int32_t)(L_5));
		goto IL_003b;
	}

IL_003a:
	{
		G_B5_0 = 1;
	}

IL_003b:
	{
		V_0 = (bool)G_B5_0;
		goto IL_0051;
	}

IL_003e:
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_6;
		L_6 = NatureMaterial_get_SecondaryPackedMap_mA38FA3CBA481F1E3E2F9851D353D5AC332B3CC1A(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_7;
		goto IL_0051;
	}

IL_004d:
	{
		V_0 = (bool)0;
		goto IL_0051;
	}

IL_0051:
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_8;
		L_8 = NatureMaterial_get_SecondaryNormalMap_mF361E54E10EB5664EE7620646D3D3690C14C89FE(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_9;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0063;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_0063:
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_11;
		L_11 = NatureMaterial_get_SecondaryAlbedoMap_mD95C105DDACDA76C6BAA39E605F7D6E2C8BE5002(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_3 = L_12;
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_0075;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_0075:
	{
		float L_14;
		L_14 = NatureMaterial_get_SecondaryMaps_m85564065238011AE1DD55DDEA1BDF441A8F3CEA0(__this, NULL);
		bool L_15 = V_0;
		BaseMaterial_SetKeyword_m5DC6D210EDBE262DC9DFD535C87459576F55A329(__this, _stringLiteral4A95D59422A8A85BCAF78DF129CB3D525B429C07, (bool)((int32_t)(((((float)L_14) > ((float)(0.0f)))? 1 : 0)&(int32_t)L_15)), NULL);
		return;
	}
}
// UnityEngine.Vector4 VisualDesignCafe.Nature.NatureMaterial::ConvertGUIDToVector4(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 NatureMaterial_ConvertGUIDToVector4_mC06C6023399616AC64B444E0BFC4FE27356C1446 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, String_t* ___guid0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	uint8_t* V_4 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_1 = L_0;
		V_2 = 0;
		goto IL_0028;
	}

IL_000d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_1;
		int32_t L_2 = V_2;
		String_t* L_3 = ___guid0;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		String_t* L_5;
		L_5 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_3, ((int32_t)il2cpp_codegen_multiply(L_4, 2)), 2, NULL);
		uint8_t L_6;
		L_6 = Byte_Parse_m1D565A1D1F7DF553B5F6CF87AC883B9BE0A6A2D3(L_5, ((int32_t)515), NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (uint8_t)L_6);
		int32_t L_7 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0028:
	{
		int32_t L_8 = V_2;
		V_3 = (bool)((((int32_t)L_8) < ((int32_t)((int32_t)16)))? 1 : 0);
		bool L_9 = V_3;
		if (L_9)
		{
			goto IL_000d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = L_10;
		V_5 = L_11;
		if (!L_11)
		{
			goto IL_003e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_5;
		NullCheck(L_12);
		if (((int32_t)(((RuntimeArray*)L_12)->max_length)))
		{
			goto IL_0044;
		}
	}

IL_003e:
	{
		V_4 = (uint8_t*)((uintptr_t)0);
		goto IL_004f;
	}

IL_0044:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_5;
		NullCheck(L_13);
		V_4 = (uint8_t*)((uintptr_t)((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_004f:
	{
		uint8_t* L_14 = V_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_15 = (*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)L_14);
		V_0 = L_15;
		V_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_16 = V_0;
		V_6 = L_16;
		goto IL_0060;
	}

IL_0060:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_17 = V_6;
		return L_17;
	}
}
// System.String VisualDesignCafe.Nature.NatureMaterial::ConvertVector4ToGUID(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NatureMaterial_ConvertVector4ToGUID_m2FF9558CF55D899FEBCBA2189E8D1B2D20404E48 (NatureMaterial_t52A9047B159902DFF96C659A4E306842041C99DA* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	String_t* V_5 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		V_1 = (uint8_t*)((uintptr_t)(&___vector0));
		V_3 = 0;
		goto IL_0028;
	}

IL_0010:
	{
		StringBuilder_t* L_1 = V_0;
		uint8_t* L_2 = V_1;
		int32_t L_3 = V_3;
		String_t* L_4;
		L_4 = Byte_ToString_m793A41EEEB7B422F6FE658E99D2F7683F59EE310((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_2, L_3)), _stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260, NULL);
		NullCheck(L_1);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, L_4, NULL);
		int32_t L_6 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0028:
	{
		int32_t L_7 = V_3;
		V_4 = (bool)((((int32_t)L_7) < ((int32_t)((int32_t)16)))? 1 : 0);
		bool L_8 = V_4;
		if (L_8)
		{
			goto IL_0010;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_2 = L_9;
		uint8_t* L_10 = V_1;
		intptr_t L_11;
		L_11 = IntPtr_op_Explicit_m04BEF6277775C13DD8A986812AAA3FCEC32DCCBE((void*)L_10, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_m92700C9E60BAB2FDAF6CE02C16EFE9DCB7D6035E(L_11, L_12, 0, ((int32_t)16), NULL);
		StringBuilder_t* L_13 = V_0;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_13);
		V_5 = L_14;
		goto IL_0056;
	}

IL_0056:
	{
		String_t* L_15 = V_5;
		return L_15;
	}
}
// System.Single VisualDesignCafe.Nature.NatureMaterial::Asfloat(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NatureMaterial_Asfloat_m76D5BFD6A89289C9305BE49EA80BD2600D9E4CB3 (uint32_t ___val0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = *((float*)((uintptr_t)(&___val0)));
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Single VisualDesignCafe.Nature.NatureMaterial::Asfloat(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NatureMaterial_Asfloat_m245C33DECF75300E8EDEBE3B9490D8C119700649 (int32_t ___val0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = *((float*)((uintptr_t)(&___val0)));
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Int32 VisualDesignCafe.Nature.NatureMaterial::Asint(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NatureMaterial_Asint_mB6940F9FD33213C54B721D5DADD23A14E413F607 (float ___val0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = *((int32_t*)((uintptr_t)(&___val0)));
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt32 VisualDesignCafe.Nature.NatureMaterial::Asuint(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NatureMaterial_Asuint_m932FAED75B94AEA7391908B2291E0D2502BAD999 (float ___val0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		int32_t L_0 = *((uint32_t*)((uintptr_t)(&___val0)));
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt32 VisualDesignCafe.Nature.NatureMaterial::GetDiffusionProfileHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NatureMaterial_GetDiffusionProfileHash_m1575F0FE313B7EDF367611067ABB683D6B881103 (String_t* ___assetGuid0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	bool V_3 = false;
	uint32_t V_4 = 0;
	{
		String_t* L_0 = ___assetGuid0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		V_3 = L_1;
		bool L_2 = V_3;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		V_4 = 0;
		goto IL_002f;
	}

IL_0010:
	{
		String_t* L_3 = ___assetGuid0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_3);
		V_0 = L_4;
		uint32_t L_5 = V_0;
		V_1 = ((int32_t)((int32_t)L_5&((int32_t)8388607)));
		V_2 = ((int32_t)128);
		uint32_t L_6 = V_2;
		uint32_t L_7 = V_1;
		V_4 = ((int32_t)(((int32_t)((int32_t)L_6<<((int32_t)23)))|(int32_t)L_7));
		goto IL_002f;
	}

IL_002f:
	{
		uint32_t L_8 = V_4;
		return L_8;
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
// System.Void VisualDesignCafe.Nature.NatureProperties::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureProperties__ctor_mA9EC63723584302AED882DA78335FB074030D72F (NatureProperties_t7365834912C7221456DDE3B30DA0847336A202B1* __this, const RuntimeMethod* method) 
{
	{
		LitProperties__ctor_m61E5FDF87043C7F8B9361FF174B6A8EE3BAF2DF1(__this, NULL);
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
// System.Void VisualDesignCafe.Nature.IndentScope::.ctor(VisualDesignCafe.Nature.ILog,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndentScope__ctor_m0BA835FF999BE8F6ABFEF01260D8866E9B5D95F3 (IndentScope_tEEB5AAFBB1CE219759931980C0A18784E5A604DC* __this, RuntimeObject* ___log0, String_t* ___message1, bool ___brackets2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILog_t155FD098367AFF635DD24C219A232AFD737C5F5E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B7_0 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		bool L_0 = ___brackets2;
		__this->____brackets_1 = L_0;
		RuntimeObject* L_1 = ___log0;
		__this->____log_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____log_0), (void*)L_1);
		String_t* L_2 = ___message1;
		V_0 = (bool)((!(((RuntimeObject*)(String_t*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		RuntimeObject* L_4 = __this->____log_0;
		RuntimeObject* L_5 = L_4;
		G_B2_0 = L_5;
		if (L_5)
		{
			G_B3_0 = L_5;
			goto IL_002a;
		}
	}
	{
		goto IL_0031;
	}

IL_002a:
	{
		String_t* L_6 = ___message1;
		NullCheck(G_B3_0);
		InterfaceActionInvoker1< String_t* >::Invoke(5 /* System.Void VisualDesignCafe.Nature.ILog::Log(System.String) */, ILog_t155FD098367AFF635DD24C219A232AFD737C5F5E_il2cpp_TypeInfo_var, G_B3_0, L_6);
	}

IL_0031:
	{
		bool L_7 = ___brackets2;
		V_1 = L_7;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_004d;
		}
	}
	{
		RuntimeObject* L_9 = __this->____log_0;
		RuntimeObject* L_10 = L_9;
		G_B6_0 = L_10;
		if (L_10)
		{
			G_B7_0 = L_10;
			goto IL_0042;
		}
	}
	{
		goto IL_004d;
	}

IL_0042:
	{
		NullCheck(G_B7_0);
		InterfaceActionInvoker1< String_t* >::Invoke(5 /* System.Void VisualDesignCafe.Nature.ILog::Log(System.String) */, ILog_t155FD098367AFF635DD24C219A232AFD737C5F5E_il2cpp_TypeInfo_var, G_B7_0, _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
	}

IL_004d:
	{
		RuntimeObject* L_11 = __this->____log_0;
		RuntimeObject* L_12 = L_11;
		G_B9_0 = L_12;
		if (L_12)
		{
			G_B10_0 = L_12;
			goto IL_0059;
		}
	}
	{
		goto IL_005f;
	}

IL_0059:
	{
		NullCheck(G_B10_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void VisualDesignCafe.Nature.ILog::Indent() */, ILog_t155FD098367AFF635DD24C219A232AFD737C5F5E_il2cpp_TypeInfo_var, G_B10_0);
	}

IL_005f:
	{
		return;
	}
}
// System.Void VisualDesignCafe.Nature.IndentScope::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndentScope_Dispose_mE2D148A596FD9027120CB571ACD3F83BC2B6DD81 (IndentScope_tEEB5AAFBB1CE219759931980C0A18784E5A604DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILog_t155FD098367AFF635DD24C219A232AFD737C5F5E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____log_0;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		goto IL_0013;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(4 /* System.Void VisualDesignCafe.Nature.ILog::Unindent() */, ILog_t155FD098367AFF635DD24C219A232AFD737C5F5E_il2cpp_TypeInfo_var, G_B2_0);
	}

IL_0013:
	{
		bool L_2 = __this->____brackets_1;
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_4 = __this->____log_0;
		RuntimeObject* L_5 = L_4;
		G_B5_0 = L_5;
		if (L_5)
		{
			G_B6_0 = L_5;
			goto IL_0029;
		}
	}
	{
		goto IL_0034;
	}

IL_0029:
	{
		NullCheck(G_B6_0);
		InterfaceActionInvoker1< String_t* >::Invoke(5 /* System.Void VisualDesignCafe.Nature.ILog::Log(System.String) */, ILog_t155FD098367AFF635DD24C219A232AFD737C5F5E_il2cpp_TypeInfo_var, G_B6_0, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
	}

IL_0034:
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
// System.Int64 VisualDesignCafe.Nature.TimerScope::get_ElapsedMiliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t TimerScope_get_ElapsedMiliseconds_mB84B6561CD7F0E7EE85C8FA479C930E42C30A2F8 (TimerScope_t02309056955DBD21C84793891CCD0155AF7DE187* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILog_t155FD098367AFF635DD24C219A232AFD737C5F5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	int64_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = __this->____log_0;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000e;
		}
	}
	{
		G_B3_0 = ((int64_t)0);
		goto IL_0013;
	}

IL_000e:
	{
		NullCheck(G_B2_0);
		int64_t L_2;
		L_2 = InterfaceFuncInvoker0< int64_t >::Invoke(0 /* System.Int64 VisualDesignCafe.Nature.ILog::get_ElapsedMilliseconds() */, ILog_t155FD098367AFF635DD24C219A232AFD737C5F5E_il2cpp_TypeInfo_var, G_B2_0);
		G_B3_0 = L_2;
	}

IL_0013:
	{
		return G_B3_0;
	}
}
// System.Void VisualDesignCafe.Nature.TimerScope::.ctor(VisualDesignCafe.Nature.ILog)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerScope__ctor_m80FF2AD29DB28E8ADD3534CA2CBE5A63DA22E2AC (TimerScope_t02309056955DBD21C84793891CCD0155AF7DE187* __this, RuntimeObject* ___log0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILog_t155FD098367AFF635DD24C219A232AFD737C5F5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___log0;
		__this->____log_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____log_0), (void*)L_0);
		RuntimeObject* L_1 = __this->____log_0;
		RuntimeObject* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_001b;
		}
	}
	{
		goto IL_0021;
	}

IL_001b:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(1 /* System.Void VisualDesignCafe.Nature.ILog::StartTimer() */, ILog_t155FD098367AFF635DD24C219A232AFD737C5F5E_il2cpp_TypeInfo_var, G_B2_0);
	}

IL_0021:
	{
		return;
	}
}
// System.Void VisualDesignCafe.Nature.TimerScope::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerScope_Dispose_m0BB9FCA626832607E83969A18F94084F3434BB73 (TimerScope_t02309056955DBD21C84793891CCD0155AF7DE187* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILog_t155FD098367AFF635DD24C219A232AFD737C5F5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____log_0;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		goto IL_0013;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		int64_t L_2;
		L_2 = InterfaceFuncInvoker0< int64_t >::Invoke(2 /* System.Int64 VisualDesignCafe.Nature.ILog::StopTimer() */, ILog_t155FD098367AFF635DD24C219A232AFD737C5F5E_il2cpp_TypeInfo_var, G_B2_0);
	}

IL_0013:
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
// System.Int64 VisualDesignCafe.Nature.Logger::get_ElapsedMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Logger_get_ElapsedMilliseconds_mEF6DEDB16852A9CBBCF1979DD72079BCBAE33C11 (Logger_t4DF9EAAB640217BD20B383B66F93562AF54782E4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Peek_m1618BCC889EC84BED1EF8009AEF6742B96FE5D79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stack_1_t25EE16C4E420B6FB4CA506FBE4F0DD86D3CB2FB9* L_0 = __this->____timers_3;
		NullCheck(L_0);
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_1;
		L_1 = Stack_1_Peek_m1618BCC889EC84BED1EF8009AEF6742B96FE5D79(L_0, Stack_1_Peek_m1618BCC889EC84BED1EF8009AEF6742B96FE5D79_RuntimeMethod_var);
		NullCheck(L_1);
		int64_t L_2;
		L_2 = Stopwatch_get_ElapsedMilliseconds_m8D8E60ADEB47D008C06D8E57D28D41EAE07AECBF(L_1, NULL);
		return L_2;
	}
}
// System.Boolean VisualDesignCafe.Nature.Logger::get_Debug()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Logger_get_Debug_m4821830C62DAD7C94D5B9B72E7F94C09BA11E72E (Logger_t4DF9EAAB640217BD20B383B66F93562AF54782E4* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CDebugU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void VisualDesignCafe.Nature.Logger::set_Debug(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_set_Debug_mEDD96EF8C2219B8FAE6415D40598DBE461CEC9D8 (Logger_t4DF9EAAB640217BD20B383B66F93562AF54782E4* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CDebugU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Void VisualDesignCafe.Nature.Logger::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger__ctor_m269E386D119D59B4547E0715D890CF207F0EDB32 (Logger_t4DF9EAAB640217BD20B383B66F93562AF54782E4* __this, String_t* ___prefix0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_m39A6CD40BE1876549D724FD092977E7BC19BD4E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_t25EE16C4E420B6FB4CA506FBE4F0DD86D3CB2FB9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stack_1_t25EE16C4E420B6FB4CA506FBE4F0DD86D3CB2FB9* L_0 = (Stack_1_t25EE16C4E420B6FB4CA506FBE4F0DD86D3CB2FB9*)il2cpp_codegen_object_new(Stack_1_t25EE16C4E420B6FB4CA506FBE4F0DD86D3CB2FB9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Stack_1__ctor_m39A6CD40BE1876549D724FD092977E7BC19BD4E5(L_0, Stack_1__ctor_m39A6CD40BE1876549D724FD092977E7BC19BD4E5_RuntimeMethod_var);
		__this->____timers_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____timers_3), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_1 = ___prefix0;
		__this->____prefix_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____prefix_1), (void*)L_1);
		return;
	}
}
// System.Void VisualDesignCafe.Nature.Logger::StartTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_StartTimer_m1E16D4E2F7844B58F3CBCF36ED55DCB7E21E1377 (Logger_t4DF9EAAB640217BD20B383B66F93562AF54782E4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m49E0F66D4565C0F72BB3532C81EF6E369CDF5ADF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* V_0 = NULL;
	{
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_0 = (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043*)il2cpp_codegen_object_new(Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Stopwatch__ctor_mAFE6B2F45CF1C3469EF6D5307972BC098B473D0A(L_0, NULL);
		V_0 = L_0;
		Stack_1_t25EE16C4E420B6FB4CA506FBE4F0DD86D3CB2FB9* L_1 = __this->____timers_3;
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_2 = V_0;
		NullCheck(L_1);
		Stack_1_Push_m49E0F66D4565C0F72BB3532C81EF6E369CDF5ADF(L_1, L_2, Stack_1_Push_m49E0F66D4565C0F72BB3532C81EF6E369CDF5ADF_RuntimeMethod_var);
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_3 = V_0;
		NullCheck(L_3);
		Stopwatch_Start_m35906A38C7D336CF9DD35854C7E170D762A55915(L_3, NULL);
		return;
	}
}
// System.Int64 VisualDesignCafe.Nature.Logger::StopTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Logger_StopTimer_m9E615AB69D0273599F546C7E4CFA5F7A15A544BD (Logger_t4DF9EAAB640217BD20B383B66F93562AF54782E4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_m0316352BB52A08E4E4B7098FD7A645A9D830CB04_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* V_0 = NULL;
	int64_t V_1 = 0;
	{
		Stack_1_t25EE16C4E420B6FB4CA506FBE4F0DD86D3CB2FB9* L_0 = __this->____timers_3;
		NullCheck(L_0);
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_1;
		L_1 = Stack_1_Pop_m0316352BB52A08E4E4B7098FD7A645A9D830CB04(L_0, Stack_1_Pop_m0316352BB52A08E4E4B7098FD7A645A9D830CB04_RuntimeMethod_var);
		V_0 = L_1;
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_2 = V_0;
		NullCheck(L_2);
		Stopwatch_Stop_m8F2A2EFD9D7D5B4180A5E5379E5443864618D7DC(L_2, NULL);
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_3 = V_0;
		NullCheck(L_3);
		int64_t L_4;
		L_4 = Stopwatch_get_ElapsedMilliseconds_m8D8E60ADEB47D008C06D8E57D28D41EAE07AECBF(L_3, NULL);
		V_1 = L_4;
		goto IL_001d;
	}

IL_001d:
	{
		int64_t L_5 = V_1;
		return L_5;
	}
}
// System.Void VisualDesignCafe.Nature.Logger::Indent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_Indent_mAF6FCA66CD28B44A3B0A7F06E5FEF6EBD049D86D (Logger_t4DF9EAAB640217BD20B383B66F93562AF54782E4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____indent_2;
		__this->____indent_2 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		return;
	}
}
// System.Void VisualDesignCafe.Nature.Logger::Unindent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_Unindent_m40A89FF3F97C74BD6C3BC09A44E9052D03ACE802 (Logger_t4DF9EAAB640217BD20B383B66F93562AF54782E4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____indent_2;
		__this->____indent_2 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		return;
	}
}
// System.Void VisualDesignCafe.Nature.Logger::Log(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_Log_mA9F4B5714D89D549EBCF85F6C371F146FD5C2A5A (Logger_t4DF9EAAB640217BD20B383B66F93562AF54782E4* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->____prefix_1;
		String_t* L_1;
		L_1 = Logger_GetIndent_m3C6A07D49F2E998C932DED53A08E5B2EADE066B8(__this, NULL);
		String_t* L_2 = ___message0;
		String_t* L_3;
		L_3 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_0, L_1, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_3, NULL);
		return;
	}
}
// System.Void VisualDesignCafe.Nature.Logger::LogFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_LogFormat_m3E2BB3CA0347C96EC43AD22BFF2BC66EF527F76F (Logger_t4DF9EAAB640217BD20B383B66F93562AF54782E4* __this, String_t* ___message0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->____prefix_1;
		String_t* L_1;
		L_1 = Logger_GetIndent_m3C6A07D49F2E998C932DED53A08E5B2EADE066B8(__this, NULL);
		String_t* L_2 = ___message0;
		String_t* L_3;
		L_3 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_0, L_1, L_2, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___args1;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(L_3, L_4, NULL);
		return;
	}
}
// System.Void VisualDesignCafe.Nature.Logger::LogWarning(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_LogWarning_m3283389D5D0A76BF171EA62B8FBC95BFF4EB2978 (Logger_t4DF9EAAB640217BD20B383B66F93562AF54782E4* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->____prefix_1;
		String_t* L_1;
		L_1 = Logger_GetIndent_m3C6A07D49F2E998C932DED53A08E5B2EADE066B8(__this, NULL);
		String_t* L_2 = ___message0;
		String_t* L_3;
		L_3 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_0, L_1, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_3, NULL);
		return;
	}
}
// System.Void VisualDesignCafe.Nature.Logger::LogWarningFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_LogWarningFormat_m95F32F0EDA57010539FA8D9AFE923DBDF84395A5 (Logger_t4DF9EAAB640217BD20B383B66F93562AF54782E4* __this, String_t* ___message0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->____prefix_1;
		String_t* L_1;
		L_1 = Logger_GetIndent_m3C6A07D49F2E998C932DED53A08E5B2EADE066B8(__this, NULL);
		String_t* L_2 = ___message0;
		String_t* L_3;
		L_3 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_0, L_1, L_2, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___args1;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarningFormat_m0D4A31935564D0FA042103C1231DBBD2ED0BC20A(L_3, L_4, NULL);
		return;
	}
}
// System.Void VisualDesignCafe.Nature.Logger::LogError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_LogError_m5F667CAFDEC782A8BFAF192DA4DF0CCCC8E7441F (Logger_t4DF9EAAB640217BD20B383B66F93562AF54782E4* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->____prefix_1;
		String_t* L_1;
		L_1 = Logger_GetIndent_m3C6A07D49F2E998C932DED53A08E5B2EADE066B8(__this, NULL);
		String_t* L_2 = ___message0;
		String_t* L_3;
		L_3 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_0, L_1, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_3, NULL);
		return;
	}
}
// System.Void VisualDesignCafe.Nature.Logger::LogErrorFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_LogErrorFormat_mDF9FC299BF1181AC77E16A8D42CC866738936F6B (Logger_t4DF9EAAB640217BD20B383B66F93562AF54782E4* __this, String_t* ___message0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->____prefix_1;
		String_t* L_1;
		L_1 = Logger_GetIndent_m3C6A07D49F2E998C932DED53A08E5B2EADE066B8(__this, NULL);
		String_t* L_2 = ___message0;
		String_t* L_3;
		L_3 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_0, L_1, L_2, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___args1;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_mA33C95EF832A60D72A7EE26074E13A86BE7E30C6(L_3, L_4, NULL);
		return;
	}
}
// System.String VisualDesignCafe.Nature.Logger::GetIndent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Logger_GetIndent_m3C6A07D49F2E998C932DED53A08E5B2EADE066B8 (Logger_t4DF9EAAB640217BD20B383B66F93562AF54782E4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	bool V_2 = false;
	{
		bool L_0;
		L_0 = Logger_get_Debug_m4821830C62DAD7C94D5B9B72E7F94C09BA11E72E_inline(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_1 = L_2;
		goto IL_003d;
	}

IL_0016:
	{
		int32_t L_3 = __this->____indent_2;
		V_2 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_1 = L_5;
		goto IL_003d;
	}

IL_002b:
	{
		int32_t L_6 = __this->____indent_2;
		String_t* L_7;
		L_7 = String_CreateString_mAA0705B41B390BDB42F67894B9B67C956814C71B(NULL, ((int32_t)32), ((int32_t)il2cpp_codegen_multiply(L_6, 4)), NULL);
		V_1 = L_7;
		goto IL_003d;
	}

IL_003d:
	{
		String_t* L_8 = V_1;
		return L_8;
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
// VisualDesignCafe.Nature.Logger VisualDesignCafe.Nature.NatureShadersConfig::get_Log()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Logger_t4DF9EAAB640217BD20B383B66F93562AF54782E4* NatureShadersConfig_get_Log_m397720A0576E478D9ECF3119A9CCCA42FE15EB49 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t4DF9EAAB640217BD20B383B66F93562AF54782E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NatureShadersConfig_t8B13CFF7F101DE7E8A941A92FA32E1D31675400E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26651A642B482129A412E98B915F5B359BF612C0);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Logger_t4DF9EAAB640217BD20B383B66F93562AF54782E4* V_1 = NULL;
	int32_t G_B3_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(NatureShadersConfig_t8B13CFF7F101DE7E8A941A92FA32E1D31675400E_il2cpp_TypeInfo_var);
		Logger_t4DF9EAAB640217BD20B383B66F93562AF54782E4* L_0 = ((NatureShadersConfig_t8B13CFF7F101DE7E8A941A92FA32E1D31675400E_StaticFields*)il2cpp_codegen_static_fields_for(NatureShadersConfig_t8B13CFF7F101DE7E8A941A92FA32E1D31675400E_il2cpp_TypeInfo_var))->____logger_4;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NatureShadersConfig_t8B13CFF7F101DE7E8A941A92FA32E1D31675400E_il2cpp_TypeInfo_var);
		bool L_1 = ((NatureShadersConfig_t8B13CFF7F101DE7E8A941A92FA32E1D31675400E_StaticFields*)il2cpp_codegen_static_fields_for(NatureShadersConfig_t8B13CFF7F101DE7E8A941A92FA32E1D31675400E_il2cpp_TypeInfo_var))->___Debug_2;
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 0;
	}

IL_0010:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		Logger_t4DF9EAAB640217BD20B383B66F93562AF54782E4* L_3 = (Logger_t4DF9EAAB640217BD20B383B66F93562AF54782E4*)il2cpp_codegen_object_new(Logger_t4DF9EAAB640217BD20B383B66F93562AF54782E4_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Logger__ctor_m269E386D119D59B4547E0715D890CF207F0EDB32(L_3, _stringLiteral26651A642B482129A412E98B915F5B359BF612C0, NULL);
		Logger_t4DF9EAAB640217BD20B383B66F93562AF54782E4* L_4 = L_3;
		NullCheck(L_4);
		Logger_set_Debug_mEDD96EF8C2219B8FAE6415D40598DBE461CEC9D8_inline(L_4, (bool)1, NULL);
		il2cpp_codegen_runtime_class_init_inline(NatureShadersConfig_t8B13CFF7F101DE7E8A941A92FA32E1D31675400E_il2cpp_TypeInfo_var);
		((NatureShadersConfig_t8B13CFF7F101DE7E8A941A92FA32E1D31675400E_StaticFields*)il2cpp_codegen_static_fields_for(NatureShadersConfig_t8B13CFF7F101DE7E8A941A92FA32E1D31675400E_il2cpp_TypeInfo_var))->____logger_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((NatureShadersConfig_t8B13CFF7F101DE7E8A941A92FA32E1D31675400E_StaticFields*)il2cpp_codegen_static_fields_for(NatureShadersConfig_t8B13CFF7F101DE7E8A941A92FA32E1D31675400E_il2cpp_TypeInfo_var))->____logger_4), (void*)L_4);
	}

IL_002b:
	{
		il2cpp_codegen_runtime_class_init_inline(NatureShadersConfig_t8B13CFF7F101DE7E8A941A92FA32E1D31675400E_il2cpp_TypeInfo_var);
		Logger_t4DF9EAAB640217BD20B383B66F93562AF54782E4* L_5 = ((NatureShadersConfig_t8B13CFF7F101DE7E8A941A92FA32E1D31675400E_StaticFields*)il2cpp_codegen_static_fields_for(NatureShadersConfig_t8B13CFF7F101DE7E8A941A92FA32E1D31675400E_il2cpp_TypeInfo_var))->____logger_4;
		V_1 = L_5;
		goto IL_0033;
	}

IL_0033:
	{
		Logger_t4DF9EAAB640217BD20B383B66F93562AF54782E4* L_6 = V_1;
		return L_6;
	}
}
// System.Void VisualDesignCafe.Nature.NatureShadersConfig::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureShadersConfig__cctor_mC1176486BCCC92D77D06750B6B4B99CCB2420718 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NatureShadersConfig_t8B13CFF7F101DE7E8A941A92FA32E1D31675400E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((NatureShadersConfig_t8B13CFF7F101DE7E8A941A92FA32E1D31675400E_StaticFields*)il2cpp_codegen_static_fields_for(NatureShadersConfig_t8B13CFF7F101DE7E8A941A92FA32E1D31675400E_il2cpp_TypeInfo_var))->___Debug_2 = (bool)0;
		((NatureShadersConfig_t8B13CFF7F101DE7E8A941A92FA32E1D31675400E_StaticFields*)il2cpp_codegen_static_fields_for(NatureShadersConfig_t8B13CFF7F101DE7E8A941A92FA32E1D31675400E_il2cpp_TypeInfo_var))->___Verbose_3 = (bool)0;
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
// System.Boolean VisualDesignCafe.Nature.NotificationBox::get_IsSceneView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NotificationBox_get_IsSceneView_m1E3F5B2CE472B6019C45D6CE006880823F3D933A (NotificationBox_tFE81187F23AA2E251B93B075E0CD9D27A644A73A* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsSceneViewU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void VisualDesignCafe.Nature.NotificationBox::set_IsSceneView(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationBox_set_IsSceneView_m6F04D7D7B545179FEDDA1116EB1B37F325BA9900 (NotificationBox_tFE81187F23AA2E251B93B075E0CD9D27A644A73A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CIsSceneViewU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Single VisualDesignCafe.Nature.NotificationBox::get_MarginBottom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NotificationBox_get_MarginBottom_m748B66708EEE2F0A14809C5F3E991750AA2DF6BC (NotificationBox_tFE81187F23AA2E251B93B075E0CD9D27A644A73A* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___U3CMarginBottomU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void VisualDesignCafe.Nature.NotificationBox::set_MarginBottom(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationBox_set_MarginBottom_m91B8EC99936C5B97EBDDC56FFE4C464F3E79AF9F (NotificationBox_tFE81187F23AA2E251B93B075E0CD9D27A644A73A* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		__this->___U3CMarginBottomU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Void VisualDesignCafe.Nature.NotificationBox::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationBox__ctor_m55F7396110A49D7C7A18DE879AE6AB15A8E3A6BF (NotificationBox_tFE81187F23AA2E251B93B075E0CD9D27A644A73A* __this, String_t* ___title0, String_t* ___text1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___title0;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_1 = (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*)il2cpp_codegen_object_new(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GUIContent__ctor_mD2BDF82C1E1F75DEEF36F2C8EDB60FFB49EE4DBC(L_1, L_0, NULL);
		__this->____title_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____title_2), (void*)L_1);
		String_t* L_2 = ___text1;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_3 = (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*)il2cpp_codegen_object_new(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		GUIContent__ctor_mD2BDF82C1E1F75DEEF36F2C8EDB60FFB49EE4DBC(L_3, L_2, NULL);
		__this->____text_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____text_3), (void*)L_3);
		return;
	}
}
// System.Void VisualDesignCafe.Nature.NotificationBox::.ctor(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationBox__ctor_mE1FEC2C5FBED37C9153712D7362B012494DAE08A (NotificationBox_tFE81187F23AA2E251B93B075E0CD9D27A644A73A* __this, String_t* ___title0, String_t* ___text1, String_t* ___button2, String_t* ___url3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___title0;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_1 = (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*)il2cpp_codegen_object_new(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GUIContent__ctor_mD2BDF82C1E1F75DEEF36F2C8EDB60FFB49EE4DBC(L_1, L_0, NULL);
		__this->____title_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____title_2), (void*)L_1);
		String_t* L_2 = ___text1;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_3 = (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*)il2cpp_codegen_object_new(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		GUIContent__ctor_mD2BDF82C1E1F75DEEF36F2C8EDB60FFB49EE4DBC(L_3, L_2, NULL);
		__this->____text_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____text_3), (void*)L_3);
		String_t* L_4 = ___button2;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_5 = (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*)il2cpp_codegen_object_new(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		GUIContent__ctor_mD2BDF82C1E1F75DEEF36F2C8EDB60FFB49EE4DBC(L_5, L_4, NULL);
		__this->____buttonContent_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buttonContent_4), (void*)L_5);
		String_t* L_6 = ___url3;
		__this->____buttonUrl_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buttonUrl_5), (void*)L_6);
		return;
	}
}
// System.Void VisualDesignCafe.Nature.NotificationBox::LoadStyles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationBox_LoadStyles_mA53A32DD144F813FB98375AE6438F8E7EED1F68A (NotificationBox_tFE81187F23AA2E251B93B075E0CD9D27A644A73A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DE03E5EBA0308517D1762F2C0DF3B9E2A2F1870);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_1;
	memset((&V_1), 0, sizeof(V_1));
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* G_B2_0 = NULL;
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* G_B2_1 = NULL;
	NotificationBox_tFE81187F23AA2E251B93B075E0CD9D27A644A73A* G_B2_2 = NULL;
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* G_B1_0 = NULL;
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* G_B1_1 = NULL;
	NotificationBox_tFE81187F23AA2E251B93B075E0CD9D27A644A73A* G_B1_2 = NULL;
	int32_t G_B3_0 = 0;
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* G_B3_1 = NULL;
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* G_B3_2 = NULL;
	NotificationBox_tFE81187F23AA2E251B93B075E0CD9D27A644A73A* G_B3_3 = NULL;
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* G_B5_0 = NULL;
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* G_B5_1 = NULL;
	NotificationBox_tFE81187F23AA2E251B93B075E0CD9D27A644A73A* G_B5_2 = NULL;
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* G_B4_0 = NULL;
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* G_B4_1 = NULL;
	NotificationBox_tFE81187F23AA2E251B93B075E0CD9D27A644A73A* G_B4_2 = NULL;
	int32_t G_B6_0 = 0;
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* G_B6_1 = NULL;
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* G_B6_2 = NULL;
	NotificationBox_tFE81187F23AA2E251B93B075E0CD9D27A644A73A* G_B6_3 = NULL;
	{
		__this->____stylesLoaded_6 = (bool)1;
		V_0 = ((int32_t)15);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_0, NULL);
		__this->____backgroundStyle_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____backgroundStyle_7), (void*)L_0);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = __this->____backgroundStyle_7;
		NullCheck(L_1);
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_2;
		L_2 = GUIStyle_get_normal_mDEA2808FBD692E505784BD9E521738B4321BCA8F(L_1, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_3;
		L_3 = Texture2D_get_whiteTexture_m7999084E0B635CF834F8DD2D840FAA71720404DA(NULL);
		NullCheck(L_2);
		GUIStyleState_set_background_mD92FC76F8956A8EBB022C3E8EA02822D79F451C4(L_2, L_3, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_4 = __this->____backgroundStyle_7;
		int32_t L_5 = V_0;
		int32_t L_6 = V_0;
		int32_t L_7 = V_0;
		int32_t L_8 = V_0;
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_9 = (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5*)il2cpp_codegen_object_new(RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		RectOffset__ctor_m30E309D1C1C0864870686683EF1FCA8DA791D179(L_9, L_5, ((int32_t)il2cpp_codegen_add(L_6, 2)), L_7, ((int32_t)il2cpp_codegen_subtract(L_8, 2)), NULL);
		NullCheck(L_4);
		GUIStyle_set_padding_m0C69415588C6032B372A48B1A1366CF43A083E14(L_4, L_9, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_10 = __this->____backgroundStyle_7;
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_11 = (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5*)il2cpp_codegen_object_new(RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		RectOffset__ctor_m30E309D1C1C0864870686683EF1FCA8DA791D179(L_11, ((int32_t)10), 0, 0, ((int32_t)10), NULL);
		NullCheck(L_10);
		GUIStyle_set_margin_m9AAB6691C260ECD89195BE151F2ADDBF2E740C85(L_10, L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_12;
		L_12 = GUIStyle_op_Implicit_m67078950FC601939AC9678CAEDE8E171B812AE89(_stringLiteral7DE03E5EBA0308517D1762F2C0DF3B9E2A2F1870, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_13 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		GUIStyle__ctor_m17492C8BACB0D28C7701C11500A7132F11B5F04E(L_13, L_12, NULL);
		__this->____buttonStyle_10 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buttonStyle_10), (void*)L_13);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_14 = __this->____buttonStyle_10;
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_15 = (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5*)il2cpp_codegen_object_new(RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		RectOffset__ctor_m30E309D1C1C0864870686683EF1FCA8DA791D179(L_15, ((int32_t)25), ((int32_t)25), 2, 2, NULL);
		NullCheck(L_14);
		GUIStyle_set_padding_m0C69415588C6032B372A48B1A1366CF43A083E14(L_14, L_15, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_16 = __this->____buttonStyle_10;
		int32_t L_17 = V_0;
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_18 = (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5*)il2cpp_codegen_object_new(RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		RectOffset__ctor_m30E309D1C1C0864870686683EF1FCA8DA791D179(L_18, L_17, 0, 0, 0, NULL);
		NullCheck(L_16);
		GUIStyle_set_margin_m9AAB6691C260ECD89195BE151F2ADDBF2E740C85(L_16, L_18, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_19 = __this->____buttonStyle_10;
		NullCheck(L_19);
		GUIStyle_set_stretchHeight_m51C55ED43AA4EDE125E0C423FA0D301E81C09378(L_19, (bool)1, NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_20;
		L_20 = GUI_get_skin_m65083FBB1A0F6F33052E2AED126DD43FA34653B1(NULL);
		NullCheck(L_20);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_21;
		L_21 = GUISkin_get_label_m99E1A8D6D8592F88F581437D24DB1EDE05C63E5E(L_20, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_22 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		GUIStyle__ctor_m17492C8BACB0D28C7701C11500A7132F11B5F04E(L_22, L_21, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_23 = L_22;
		bool L_24;
		L_24 = Application_get_isEditor_m0377DB707B566C8E21DA3CD99963210F6D57D234(NULL);
		G_B1_0 = L_23;
		G_B1_1 = L_23;
		G_B1_2 = __this;
		if (L_24)
		{
			G_B2_0 = L_23;
			G_B2_1 = L_23;
			G_B2_2 = __this;
			goto IL_00c6;
		}
	}
	{
		G_B3_0 = ((int32_t)15);
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_00c8;
	}

IL_00c6:
	{
		G_B3_0 = ((int32_t)11);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_00c8:
	{
		NullCheck(G_B3_1);
		GUIStyle_set_fontSize_m7F6DFD61AC55072C95DC3825B77FAE3F75F1CCFF(G_B3_1, G_B3_0, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_25 = G_B3_2;
		NullCheck(L_25);
		GUIStyle_set_fontStyle_m4166D61FBF25225F4A85BBEABCECE3F2DCEE714D(L_25, 0, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_26 = L_25;
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_27 = (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5*)il2cpp_codegen_object_new(RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		RectOffset__ctor_m30E309D1C1C0864870686683EF1FCA8DA791D179(L_27, 0, 0, 2, 0, NULL);
		NullCheck(L_26);
		GUIStyle_set_margin_m9AAB6691C260ECD89195BE151F2ADDBF2E740C85(L_26, L_27, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_28 = L_26;
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_29 = (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5*)il2cpp_codegen_object_new(RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		RectOffset__ctor_m30E309D1C1C0864870686683EF1FCA8DA791D179(L_29, 0, 0, 0, 0, NULL);
		NullCheck(L_28);
		GUIStyle_set_border_mA11481A8F139D4403E0764E07F49516D390CC6A7(L_28, L_29, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_30 = L_28;
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_31 = (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5*)il2cpp_codegen_object_new(RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		RectOffset__ctor_m30E309D1C1C0864870686683EF1FCA8DA791D179(L_31, 0, 0, 0, 0, NULL);
		NullCheck(L_30);
		GUIStyle_set_padding_m0C69415588C6032B372A48B1A1366CF43A083E14(L_30, L_31, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_32 = L_30;
		NullCheck(L_32);
		GUIStyle_set_wordWrap_m7A232701F60F4EB8FAFA57F6BAF9F94731DD009C(L_32, (bool)0, NULL);
		NullCheck(G_B3_3);
		G_B3_3->____textStyle_8 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_3->____textStyle_8), (void*)L_32);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_33;
		L_33 = GUI_get_skin_m65083FBB1A0F6F33052E2AED126DD43FA34653B1(NULL);
		NullCheck(L_33);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_34;
		L_34 = GUISkin_get_label_m99E1A8D6D8592F88F581437D24DB1EDE05C63E5E(L_33, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_35 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		GUIStyle__ctor_m17492C8BACB0D28C7701C11500A7132F11B5F04E(L_35, L_34, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_36 = L_35;
		bool L_37;
		L_37 = Application_get_isEditor_m0377DB707B566C8E21DA3CD99963210F6D57D234(NULL);
		G_B4_0 = L_36;
		G_B4_1 = L_36;
		G_B4_2 = __this;
		if (L_37)
		{
			G_B5_0 = L_36;
			G_B5_1 = L_36;
			G_B5_2 = __this;
			goto IL_012f;
		}
	}
	{
		G_B6_0 = ((int32_t)11);
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0131;
	}

IL_012f:
	{
		G_B6_0 = ((int32_t)9);
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0131:
	{
		NullCheck(G_B6_1);
		GUIStyle_set_fontSize_m7F6DFD61AC55072C95DC3825B77FAE3F75F1CCFF(G_B6_1, G_B6_0, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_38 = G_B6_2;
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_39 = (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5*)il2cpp_codegen_object_new(RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var);
		NullCheck(L_39);
		RectOffset__ctor_m30E309D1C1C0864870686683EF1FCA8DA791D179(L_39, 0, 0, 0, 0, NULL);
		NullCheck(L_38);
		GUIStyle_set_margin_m9AAB6691C260ECD89195BE151F2ADDBF2E740C85(L_38, L_39, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_40 = L_38;
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_41 = (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5*)il2cpp_codegen_object_new(RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		RectOffset__ctor_m30E309D1C1C0864870686683EF1FCA8DA791D179(L_41, 0, 0, 0, 0, NULL);
		NullCheck(L_40);
		GUIStyle_set_border_mA11481A8F139D4403E0764E07F49516D390CC6A7(L_40, L_41, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_42 = L_40;
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_43 = (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5*)il2cpp_codegen_object_new(RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var);
		NullCheck(L_43);
		RectOffset__ctor_m30E309D1C1C0864870686683EF1FCA8DA791D179(L_43, 0, 0, 0, 0, NULL);
		NullCheck(L_42);
		GUIStyle_set_padding_m0C69415588C6032B372A48B1A1366CF43A083E14(L_42, L_43, NULL);
		NullCheck(G_B6_3);
		G_B6_3->____titleStyle_9 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&G_B6_3->____titleStyle_9), (void*)L_42);
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&V_1), (0.5f), (0.5f), (0.5f), (1.0f), NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_44 = __this->____titleStyle_9;
		NullCheck(L_44);
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_45;
		L_45 = GUIStyle_get_normal_mDEA2808FBD692E505784BD9E521738B4321BCA8F(L_44, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_46 = V_1;
		NullCheck(L_45);
		GUIStyleState_set_textColor_m5868D12858E6402247953BCCDDA7A543BE6084F1(L_45, L_46, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_47 = __this->____titleStyle_9;
		NullCheck(L_47);
		GUIStyle_set_richText_m44045419099BECD812230D338FBBD6642A589CCD(L_47, (bool)1, NULL);
		return;
	}
}
// System.Void VisualDesignCafe.Nature.NotificationBox::Draw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationBox_Draw_m4AC64EE8E362C05BAC5891C6009A01A34F8EBD74 (NotificationBox_tFE81187F23AA2E251B93B075E0CD9D27A644A73A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AreaScope_tFC337E3FECDEFD1C5546291EED65F7DA6CCCA50D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HorizontalScope_t4007A61F85EEE56F34C66A864C60DF1B54975487_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VerticalScope_t9ACF880A56D5C3E83E431ED09DCA4FBAC9F832BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	bool V_11 = false;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	AreaScope_tFC337E3FECDEFD1C5546291EED65F7DA6CCCA50D* V_14 = NULL;
	VerticalScope_t9ACF880A56D5C3E83E431ED09DCA4FBAC9F832BC* V_15 = NULL;
	HorizontalScope_t4007A61F85EEE56F34C66A864C60DF1B54975487* V_16 = NULL;
	VerticalScope_t9ACF880A56D5C3E83E431ED09DCA4FBAC9F832BC* V_17 = NULL;
	VerticalScope_t9ACF880A56D5C3E83E431ED09DCA4FBAC9F832BC* V_18 = NULL;
	bool V_19 = false;
	bool V_20 = false;
	int32_t G_B5_0 = 0;
	float G_B12_0 = 0.0f;
	int32_t G_B24_0 = 0;
	{
		bool L_0 = __this->____stylesLoaded_6;
		V_10 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_10;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		NotificationBox_LoadStyles_mA53A32DD144F813FB98375AE6438F8E7EED1F68A(__this, NULL);
	}

IL_0017:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_2 = __this->____textStyle_8;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_3 = __this->____text_3;
		NullCheck(L_2);
		GUIStyle_CalcMinMaxWidth_m6BBF836B9A9B2B4BA11DC448B03E441DEDC2CCA4(L_2, L_3, (&V_0), (&V_1), NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_4 = __this->____textStyle_8;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_5 = __this->____text_3;
		float L_6 = V_1;
		NullCheck(L_4);
		float L_7;
		L_7 = GUIStyle_CalcHeight_m57DA8F6020AE71B561ABCBCE74E0E58FD2ECC5E8(L_4, L_5, L_6, NULL);
		V_2 = L_7;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_8 = __this->____titleStyle_9;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_9 = __this->____title_2;
		NullCheck(L_8);
		GUIStyle_CalcMinMaxWidth_m6BBF836B9A9B2B4BA11DC448B03E441DEDC2CCA4(L_8, L_9, (&V_3), (&V_4), NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_10 = __this->____titleStyle_9;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_11 = __this->____title_2;
		float L_12 = V_4;
		NullCheck(L_10);
		float L_13;
		L_13 = GUIStyle_CalcHeight_m57DA8F6020AE71B561ABCBCE74E0E58FD2ECC5E8(L_10, L_11, L_12, NULL);
		V_5 = L_13;
		float L_14 = V_2;
		float L_15 = V_5;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_16 = __this->____backgroundStyle_7;
		NullCheck(L_16);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_17;
		L_17 = GUIStyle_get_padding_m04E3210A51B2522158941AFA97ADC19C835987C2(L_16, NULL);
		NullCheck(L_17);
		int32_t L_18;
		L_18 = RectOffset_get_vertical_m43E46D9F313BB617044184A65350E6498A0709F0(L_17, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_19 = __this->____backgroundStyle_7;
		NullCheck(L_19);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_20;
		L_20 = GUIStyle_get_margin_mD0AABA2CB3FB0CFC3C414635E6225D3003315D1B(L_19, NULL);
		NullCheck(L_20);
		int32_t L_21;
		L_21 = RectOffset_get_vertical_m43E46D9F313BB617044184A65350E6498A0709F0(L_20, NULL);
		V_6 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_14, L_15)), ((float)L_18))), ((float)L_21)));
		float L_22 = V_4;
		float L_23 = V_1;
		float L_24;
		L_24 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_22, L_23, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_25 = __this->____backgroundStyle_7;
		NullCheck(L_25);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_26;
		L_26 = GUIStyle_get_padding_m04E3210A51B2522158941AFA97ADC19C835987C2(L_25, NULL);
		NullCheck(L_26);
		int32_t L_27;
		L_27 = RectOffset_get_horizontal_m5C1795C027E4987A8532DC27D88FB3B9FFEC1352(L_26, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_28 = __this->____backgroundStyle_7;
		NullCheck(L_28);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_29;
		L_29 = GUIStyle_get_margin_mD0AABA2CB3FB0CFC3C414635E6225D3003315D1B(L_28, NULL);
		NullCheck(L_29);
		int32_t L_30;
		L_30 = RectOffset_get_horizontal_m5C1795C027E4987A8532DC27D88FB3B9FFEC1352(L_29, NULL);
		V_7 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_24, ((float)L_27))), ((float)L_30)));
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_31 = __this->____buttonContent_4;
		if (!L_31)
		{
			goto IL_00db;
		}
	}
	{
		String_t* L_32 = __this->____buttonUrl_5;
		bool L_33;
		L_33 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_32, NULL);
		G_B5_0 = ((((int32_t)L_33) == ((int32_t)0))? 1 : 0);
		goto IL_00dc;
	}

IL_00db:
	{
		G_B5_0 = 0;
	}

IL_00dc:
	{
		V_11 = (bool)G_B5_0;
		bool L_34 = V_11;
		if (!L_34)
		{
			goto IL_0101;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_35 = __this->____buttonStyle_10;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_36 = __this->____buttonContent_4;
		NullCheck(L_35);
		GUIStyle_CalcMinMaxWidth_m6BBF836B9A9B2B4BA11DC448B03E441DEDC2CCA4(L_35, L_36, (&V_12), (&V_13), NULL);
		float L_37 = V_7;
		float L_38 = V_13;
		V_7 = ((float)il2cpp_codegen_add(L_37, L_38));
	}

IL_0101:
	{
		bool L_39;
		L_39 = NotificationBox_get_IsSceneView_m1E3F5B2CE472B6019C45D6CE006880823F3D933A_inline(__this, NULL);
		if (L_39)
		{
			goto IL_0110;
		}
	}
	{
		G_B12_0 = (1.0f);
		goto IL_012e;
	}

IL_0110:
	{
		float L_40;
		L_40 = Screen_get_dpi_mD5BB95E605FABD335F0D4736EE4860A0AA98A50D(NULL);
		if ((((float)L_40) > ((float)(0.0f))))
		{
			goto IL_0123;
		}
	}
	{
		G_B12_0 = (1.0f);
		goto IL_012e;
	}

IL_0123:
	{
		float L_41;
		L_41 = Screen_get_dpi_mD5BB95E605FABD335F0D4736EE4860A0AA98A50D(NULL);
		G_B12_0 = ((float)(L_41/(96.0f)));
	}

IL_012e:
	{
		V_8 = G_B12_0;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_42 = __this->____backgroundStyle_7;
		NullCheck(L_42);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_43;
		L_43 = GUIStyle_get_margin_mD0AABA2CB3FB0CFC3C414635E6225D3003315D1B(L_42, NULL);
		NullCheck(L_43);
		int32_t L_44;
		L_44 = RectOffset_get_left_mA406D7AFF76E48507EF143CDB1D157C4D5430D90(L_43, NULL);
		int32_t L_45;
		L_45 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		float L_46 = V_8;
		float L_47 = V_6;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_48 = __this->____backgroundStyle_7;
		NullCheck(L_48);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_49;
		L_49 = GUIStyle_get_margin_mD0AABA2CB3FB0CFC3C414635E6225D3003315D1B(L_48, NULL);
		NullCheck(L_49);
		int32_t L_50;
		L_50 = RectOffset_get_bottom_mDF9C1EC125F94245D5532C34FCFB65BE0F2A9D0B(L_49, NULL);
		float L_51 = V_7;
		float L_52 = V_6;
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_9), ((float)L_44), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)(((float)L_45)/L_46)), L_47)), ((float)L_50))), L_51, L_52, NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_53 = (&V_9);
		float L_54;
		L_54 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49(L_53, NULL);
		float L_55;
		L_55 = NotificationBox_get_MarginBottom_m748B66708EEE2F0A14809C5F3E991750AA2DF6BC_inline(__this, NULL);
		Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629(L_53, ((float)il2cpp_codegen_subtract(L_54, L_55)), NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_56 = V_9;
		AreaScope_tFC337E3FECDEFD1C5546291EED65F7DA6CCCA50D* L_57 = (AreaScope_tFC337E3FECDEFD1C5546291EED65F7DA6CCCA50D*)il2cpp_codegen_object_new(AreaScope_tFC337E3FECDEFD1C5546291EED65F7DA6CCCA50D_il2cpp_TypeInfo_var);
		NullCheck(L_57);
		AreaScope__ctor_m1E386F0B912D31B6A93BC246F56CDB0785EA77BF(L_57, L_56, NULL);
		V_14 = L_57;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_02cf:
			{// begin finally (depth: 1)
				{
					AreaScope_tFC337E3FECDEFD1C5546291EED65F7DA6CCCA50D* L_58 = V_14;
					if (!L_58)
					{
						goto IL_02db;
					}
				}
				{
					AreaScope_tFC337E3FECDEFD1C5546291EED65F7DA6CCCA50D* L_59 = V_14;
					NullCheck(L_59);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_59);
				}

IL_02db:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				GUILayout_FlexibleSpace_m034CCB8A75D407325DB670958160C057FC7A5EAE(NULL);
				Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_60;
				memset((&L_60), 0, sizeof(L_60));
				Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_60), (uint8_t)((int32_t)40), (uint8_t)((int32_t)40), (uint8_t)((int32_t)40), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_61;
				L_61 = Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline(L_60, NULL);
				il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
				GUI_set_backgroundColor_mD83447BE5F90369CB39C37943528A4D8751B14A1(L_61, NULL);
				GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_62 = __this->____backgroundStyle_7;
				GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_63 = (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)SZArrayNew(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var, (uint32_t)1);
				GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_64 = L_63;
				float L_65 = V_1;
				GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_66;
				L_66 = GUILayout_MaxWidth_m8AD51EFD3981488BB5B3B0405797143B4ECCE047(L_65, NULL);
				NullCheck(L_64);
				ArrayElementTypeCheck (L_64, L_66);
				(L_64)->SetAt(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14*)L_66);
				VerticalScope_t9ACF880A56D5C3E83E431ED09DCA4FBAC9F832BC* L_67 = (VerticalScope_t9ACF880A56D5C3E83E431ED09DCA4FBAC9F832BC*)il2cpp_codegen_object_new(VerticalScope_t9ACF880A56D5C3E83E431ED09DCA4FBAC9F832BC_il2cpp_TypeInfo_var);
				NullCheck(L_67);
				VerticalScope__ctor_m7366A349A2878624900FFDF22A17BB7C08C51FC5(L_67, L_62, L_64, NULL);
				V_15 = L_67;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_02b4_1:
					{// begin finally (depth: 2)
						{
							VerticalScope_t9ACF880A56D5C3E83E431ED09DCA4FBAC9F832BC* L_68 = V_15;
							if (!L_68)
							{
								goto IL_02c0_1;
							}
						}
						{
							VerticalScope_t9ACF880A56D5C3E83E431ED09DCA4FBAC9F832BC* L_69 = V_15;
							NullCheck(L_69);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_69);
						}

IL_02c0_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_70;
						L_70 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
						HorizontalScope_t4007A61F85EEE56F34C66A864C60DF1B54975487* L_71 = (HorizontalScope_t4007A61F85EEE56F34C66A864C60DF1B54975487*)il2cpp_codegen_object_new(HorizontalScope_t4007A61F85EEE56F34C66A864C60DF1B54975487_il2cpp_TypeInfo_var);
						NullCheck(L_71);
						HorizontalScope__ctor_mA3200557B33D8E50B19CEED31A803F2BD95682DC(L_71, L_70, NULL);
						V_16 = L_71;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_02a4_2:
							{// begin finally (depth: 3)
								{
									HorizontalScope_t4007A61F85EEE56F34C66A864C60DF1B54975487* L_72 = V_16;
									if (!L_72)
									{
										goto IL_02b0_2;
									}
								}
								{
									HorizontalScope_t4007A61F85EEE56F34C66A864C60DF1B54975487* L_73 = V_16;
									NullCheck(L_73);
									InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_73);
								}

IL_02b0_2:
								{
									return;
								}
							}// end finally (depth: 3)
						});
						try
						{// begin try (depth: 3)
							{
								GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_74;
								L_74 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
								VerticalScope_t9ACF880A56D5C3E83E431ED09DCA4FBAC9F832BC* L_75 = (VerticalScope_t9ACF880A56D5C3E83E431ED09DCA4FBAC9F832BC*)il2cpp_codegen_object_new(VerticalScope_t9ACF880A56D5C3E83E431ED09DCA4FBAC9F832BC_il2cpp_TypeInfo_var);
								NullCheck(L_75);
								VerticalScope__ctor_mB95783F186602B85693ABDAEBDD9487C1A403027(L_75, L_74, NULL);
								V_17 = L_75;
							}
							{
								auto __finallyBlock = il2cpp::utils::Finally([&]
								{

FINALLY_0212_3:
									{// begin finally (depth: 4)
										{
											VerticalScope_t9ACF880A56D5C3E83E431ED09DCA4FBAC9F832BC* L_76 = V_17;
											if (!L_76)
											{
												goto IL_021e_3;
											}
										}
										{
											VerticalScope_t9ACF880A56D5C3E83E431ED09DCA4FBAC9F832BC* L_77 = V_17;
											NullCheck(L_77);
											InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_77);
										}

IL_021e_3:
										{
											return;
										}
									}// end finally (depth: 4)
								});
								try
								{// begin try (depth: 4)
									GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_78 = __this->____title_2;
									GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_79 = __this->____titleStyle_9;
									GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_80;
									L_80 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
									GUILayout_Label_m5C3BE81053B9EE684544F9FB7E363FFCF25B53E9(L_78, L_79, L_80, NULL);
									GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_81 = __this->____text_3;
									GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_82 = __this->____textStyle_8;
									GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_83;
									L_83 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
									GUILayout_Label_m5C3BE81053B9EE684544F9FB7E363FFCF25B53E9(L_81, L_82, L_83, NULL);
									goto IL_021f_3;
								}// end try (depth: 4)
								catch(Il2CppExceptionWrapper& e)
								{
									__finallyBlock.StoreException(e.ex);
								}
							}

IL_021f_3:
							{
								GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_84;
								L_84 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
								VerticalScope_t9ACF880A56D5C3E83E431ED09DCA4FBAC9F832BC* L_85 = (VerticalScope_t9ACF880A56D5C3E83E431ED09DCA4FBAC9F832BC*)il2cpp_codegen_object_new(VerticalScope_t9ACF880A56D5C3E83E431ED09DCA4FBAC9F832BC_il2cpp_TypeInfo_var);
								NullCheck(L_85);
								VerticalScope__ctor_mB95783F186602B85693ABDAEBDD9487C1A403027(L_85, L_84, NULL);
								V_18 = L_85;
							}
							{
								auto __finallyBlock = il2cpp::utils::Finally([&]
								{

FINALLY_0294_3:
									{// begin finally (depth: 4)
										{
											VerticalScope_t9ACF880A56D5C3E83E431ED09DCA4FBAC9F832BC* L_86 = V_18;
											if (!L_86)
											{
												goto IL_02a0_3;
											}
										}
										{
											VerticalScope_t9ACF880A56D5C3E83E431ED09DCA4FBAC9F832BC* L_87 = V_18;
											NullCheck(L_87);
											InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_87);
										}

IL_02a0_3:
										{
											return;
										}
									}// end finally (depth: 4)
								});
								try
								{// begin try (depth: 4)
									{
										Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_88;
										L_88 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
										il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
										GUI_set_backgroundColor_mD83447BE5F90369CB39C37943528A4D8751B14A1(L_88, NULL);
										GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_89 = __this->____buttonContent_4;
										if (!L_89)
										{
											goto IL_024f_4;
										}
									}
									{
										String_t* L_90 = __this->____buttonUrl_5;
										bool L_91;
										L_91 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_90, NULL);
										G_B24_0 = ((((int32_t)L_91) == ((int32_t)0))? 1 : 0);
										goto IL_0250_4;
									}

IL_024f_4:
									{
										G_B24_0 = 0;
									}

IL_0250_4:
									{
										V_19 = (bool)G_B24_0;
										bool L_92 = V_19;
										if (!L_92)
										{
											goto IL_0291_4;
										}
									}
									{
										GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_93 = __this->____buttonContent_4;
										GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_94 = __this->____buttonStyle_10;
										GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_95 = (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)SZArrayNew(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var, (uint32_t)1);
										GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_96 = L_95;
										float L_97 = V_5;
										float L_98 = V_2;
										GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_99;
										L_99 = GUILayout_Height_m6992DED02A160BA83D50072295F926A938413C11(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_97, L_98)), (1.0f))), NULL);
										NullCheck(L_96);
										ArrayElementTypeCheck (L_96, L_99);
										(L_96)->SetAt(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14*)L_99);
										bool L_100;
										L_100 = GUILayout_Button_mC566C6F0AD5A9F42B69A3417F96E14248A0A2806(L_93, L_94, L_96, NULL);
										V_20 = L_100;
										bool L_101 = V_20;
										if (!L_101)
										{
											goto IL_0291_4;
										}
									}
									{
										String_t* L_102 = __this->____buttonUrl_5;
										Application_OpenURL_m9F74228B576891156330C84B72218C08BEB9F564(L_102, NULL);
									}

IL_0291_4:
									{
										goto IL_02a1_3;
									}
								}// end try (depth: 4)
								catch(Il2CppExceptionWrapper& e)
								{
									__finallyBlock.StoreException(e.ex);
								}
							}

IL_02a1_3:
							{
								goto IL_02b1_2;
							}
						}// end try (depth: 3)
						catch(Il2CppExceptionWrapper& e)
						{
							__finallyBlock.StoreException(e.ex);
						}
					}

IL_02b1_2:
					{
						goto IL_02c1_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_02c1_1:
			{
				GUILayout_Space_m9991854C4545EA58CAD8F949BF1FC1F89CF119FE((30.0f), NULL);
				goto IL_02dc;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_02dc:
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
// System.Void VisualDesignCafe.Nature.QualitySettings::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QualitySettings_Apply_m52E0E8C2C18B4AA7BC8F7DEADCC1108CF1B9DACB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QualitySettings_t6B8D916E68845D9DB6E6CCF2EEBCD6B2FDFBB720_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(QualitySettings_t6B8D916E68845D9DB6E6CCF2EEBCD6B2FDFBB720_il2cpp_TypeInfo_var);
		InteractionQuality_t2FF0E0485560DCDA3D579E9951D66B6BE0691D9C* L_0 = ((QualitySettings_t6B8D916E68845D9DB6E6CCF2EEBCD6B2FDFBB720_StaticFields*)il2cpp_codegen_static_fields_for(QualitySettings_t6B8D916E68845D9DB6E6CCF2EEBCD6B2FDFBB720_il2cpp_TypeInfo_var))->___Interaction_0;
		NullCheck(L_0);
		InteractionQuality_Apply_m55BE510DAC8E5A8974EFF6EC7EF3A8ECB270E86F(L_0, NULL);
		GraphicsQuality_tEC77150663125A38E81AF2C977C22DAACD11ADC2* L_1 = ((QualitySettings_t6B8D916E68845D9DB6E6CCF2EEBCD6B2FDFBB720_StaticFields*)il2cpp_codegen_static_fields_for(QualitySettings_t6B8D916E68845D9DB6E6CCF2EEBCD6B2FDFBB720_il2cpp_TypeInfo_var))->___Graphics_1;
		NullCheck(L_1);
		GraphicsQuality_Apply_mB93F7801105309A6F176114D0CD2FB8E9402DC99(L_1, NULL);
		OverlayQuality_t85B45D8ED6E1BF50B54DF1A90A14F384C695DA56* L_2 = ((QualitySettings_t6B8D916E68845D9DB6E6CCF2EEBCD6B2FDFBB720_StaticFields*)il2cpp_codegen_static_fields_for(QualitySettings_t6B8D916E68845D9DB6E6CCF2EEBCD6B2FDFBB720_il2cpp_TypeInfo_var))->___Overlay_2;
		NullCheck(L_2);
		OverlayQuality_Apply_mA55764CD68AE5D026805CE34D7607A5A97D2CFFC(L_2, NULL);
		return;
	}
}
// System.Void VisualDesignCafe.Nature.QualitySettings::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QualitySettings__cctor_mEE67C48D2238EA961E3D650662DE7069FC4D30F4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsQuality_tEC77150663125A38E81AF2C977C22DAACD11ADC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractionQuality_t2FF0E0485560DCDA3D579E9951D66B6BE0691D9C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverlayQuality_t85B45D8ED6E1BF50B54DF1A90A14F384C695DA56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QualitySettings_t6B8D916E68845D9DB6E6CCF2EEBCD6B2FDFBB720_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		InteractionQuality_t2FF0E0485560DCDA3D579E9951D66B6BE0691D9C* L_0 = (InteractionQuality_t2FF0E0485560DCDA3D579E9951D66B6BE0691D9C*)il2cpp_codegen_object_new(InteractionQuality_t2FF0E0485560DCDA3D579E9951D66B6BE0691D9C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		InteractionQuality__ctor_m53B4EDFD03FE6814AFC3007CCE0293A4E4E9B87F(L_0, NULL);
		((QualitySettings_t6B8D916E68845D9DB6E6CCF2EEBCD6B2FDFBB720_StaticFields*)il2cpp_codegen_static_fields_for(QualitySettings_t6B8D916E68845D9DB6E6CCF2EEBCD6B2FDFBB720_il2cpp_TypeInfo_var))->___Interaction_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((QualitySettings_t6B8D916E68845D9DB6E6CCF2EEBCD6B2FDFBB720_StaticFields*)il2cpp_codegen_static_fields_for(QualitySettings_t6B8D916E68845D9DB6E6CCF2EEBCD6B2FDFBB720_il2cpp_TypeInfo_var))->___Interaction_0), (void*)L_0);
		GraphicsQuality_tEC77150663125A38E81AF2C977C22DAACD11ADC2* L_1 = (GraphicsQuality_tEC77150663125A38E81AF2C977C22DAACD11ADC2*)il2cpp_codegen_object_new(GraphicsQuality_tEC77150663125A38E81AF2C977C22DAACD11ADC2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GraphicsQuality__ctor_m4A9C3044567597B22424B225AC8D13EDC9AD9020(L_1, NULL);
		((QualitySettings_t6B8D916E68845D9DB6E6CCF2EEBCD6B2FDFBB720_StaticFields*)il2cpp_codegen_static_fields_for(QualitySettings_t6B8D916E68845D9DB6E6CCF2EEBCD6B2FDFBB720_il2cpp_TypeInfo_var))->___Graphics_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((QualitySettings_t6B8D916E68845D9DB6E6CCF2EEBCD6B2FDFBB720_StaticFields*)il2cpp_codegen_static_fields_for(QualitySettings_t6B8D916E68845D9DB6E6CCF2EEBCD6B2FDFBB720_il2cpp_TypeInfo_var))->___Graphics_1), (void*)L_1);
		OverlayQuality_t85B45D8ED6E1BF50B54DF1A90A14F384C695DA56* L_2 = (OverlayQuality_t85B45D8ED6E1BF50B54DF1A90A14F384C695DA56*)il2cpp_codegen_object_new(OverlayQuality_t85B45D8ED6E1BF50B54DF1A90A14F384C695DA56_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		OverlayQuality__ctor_m9FDC3CA1EDE0D98409D33E63509FC5485D52DAA8(L_2, NULL);
		((QualitySettings_t6B8D916E68845D9DB6E6CCF2EEBCD6B2FDFBB720_StaticFields*)il2cpp_codegen_static_fields_for(QualitySettings_t6B8D916E68845D9DB6E6CCF2EEBCD6B2FDFBB720_il2cpp_TypeInfo_var))->___Overlay_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((QualitySettings_t6B8D916E68845D9DB6E6CCF2EEBCD6B2FDFBB720_StaticFields*)il2cpp_codegen_static_fields_for(QualitySettings_t6B8D916E68845D9DB6E6CCF2EEBCD6B2FDFBB720_il2cpp_TypeInfo_var))->___Overlay_2), (void*)L_2);
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
// System.Void VisualDesignCafe.Nature.QualitySettings/InteractionQuality::add_Changed(System.Action`1<VisualDesignCafe.Nature.QualitySettings/InteractionQuality>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionQuality_add_Changed_mE28F77363F8334FAA2D137ED985EBA0F0EE010C8 (InteractionQuality_t2FF0E0485560DCDA3D579E9951D66B6BE0691D9C* __this, Action_1_t18A965A5CD8412F57525B70C03F434E0BE590998* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t18A965A5CD8412F57525B70C03F434E0BE590998_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t18A965A5CD8412F57525B70C03F434E0BE590998* V_0 = NULL;
	Action_1_t18A965A5CD8412F57525B70C03F434E0BE590998* V_1 = NULL;
	Action_1_t18A965A5CD8412F57525B70C03F434E0BE590998* V_2 = NULL;
	{
		Action_1_t18A965A5CD8412F57525B70C03F434E0BE590998* L_0 = __this->___Changed_1;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t18A965A5CD8412F57525B70C03F434E0BE590998* L_1 = V_0;
		V_1 = L_1;
		Action_1_t18A965A5CD8412F57525B70C03F434E0BE590998* L_2 = V_1;
		Action_1_t18A965A5CD8412F57525B70C03F434E0BE590998* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((Action_1_t18A965A5CD8412F57525B70C03F434E0BE590998*)Castclass((RuntimeObject*)L_4, Action_1_t18A965A5CD8412F57525B70C03F434E0BE590998_il2cpp_TypeInfo_var));
		Action_1_t18A965A5CD8412F57525B70C03F434E0BE590998** L_5 = (&__this->___Changed_1);
		Action_1_t18A965A5CD8412F57525B70C03F434E0BE590998* L_6 = V_2;
		Action_1_t18A965A5CD8412F57525B70C03F434E0BE590998* L_7 = V_1;
		Action_1_t18A965A5CD8412F57525B70C03F434E0BE590998* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t18A965A5CD8412F57525B70C03F434E0BE590998*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t18A965A5CD8412F57525B70C03F434E0BE590998* L_9 = V_0;
		Action_1_t18A965A5CD8412F57525B70C03F434E0BE590998* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t18A965A5CD8412F57525B70C03F434E0BE590998*)L_9) == ((RuntimeObject*)(Action_1_t18A965A5CD8412F57525B70C03F434E0BE590998*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void VisualDesignCafe.Nature.QualitySettings/InteractionQuality::remove_Changed(System.Action`1<VisualDesignCafe.Nature.QualitySettings/InteractionQuality>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionQuality_remove_Changed_m002CE2E51C36D6E549365327AE8D2B98E9D939DB (InteractionQuality_t2FF0E0485560DCDA3D579E9951D66B6BE0691D9C* __this, Action_1_t18A965A5CD8412F57525B70C03F434E0BE590998* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t18A965A5CD8412F57525B70C03F434E0BE590998_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t18A965A5CD8412F57525B70C03F434E0BE590998* V_0 = NULL;
	Action_1_t18A965A5CD8412F57525B70C03F434E0BE590998* V_1 = NULL;
	Action_1_t18A965A5CD8412F57525B70C03F434E0BE590998* V_2 = NULL;
	{
		Action_1_t18A965A5CD8412F57525B70C03F434E0BE590998* L_0 = __this->___Changed_1;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t18A965A5CD8412F57525B70C03F434E0BE590998* L_1 = V_0;
		V_1 = L_1;
		Action_1_t18A965A5CD8412F57525B70C03F434E0BE590998* L_2 = V_1;
		Action_1_t18A965A5CD8412F57525B70C03F434E0BE590998* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((Action_1_t18A965A5CD8412F57525B70C03F434E0BE590998*)Castclass((RuntimeObject*)L_4, Action_1_t18A965A5CD8412F57525B70C03F434E0BE590998_il2cpp_TypeInfo_var));
		Action_1_t18A965A5CD8412F57525B70C03F434E0BE590998** L_5 = (&__this->___Changed_1);
		Action_1_t18A965A5CD8412F57525B70C03F434E0BE590998* L_6 = V_2;
		Action_1_t18A965A5CD8412F57525B70C03F434E0BE590998* L_7 = V_1;
		Action_1_t18A965A5CD8412F57525B70C03F434E0BE590998* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t18A965A5CD8412F57525B70C03F434E0BE590998*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t18A965A5CD8412F57525B70C03F434E0BE590998* L_9 = V_0;
		Action_1_t18A965A5CD8412F57525B70C03F434E0BE590998* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t18A965A5CD8412F57525B70C03F434E0BE590998*)L_9) == ((RuntimeObject*)(Action_1_t18A965A5CD8412F57525B70C03F434E0BE590998*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Boolean VisualDesignCafe.Nature.QualitySettings/InteractionQuality::get_Enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteractionQuality_get_Enabled_m273B99E3E77766F62B4AFAE5145C54B2EB55E3EE (InteractionQuality_t2FF0E0485560DCDA3D579E9951D66B6BE0691D9C* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CEnabledU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void VisualDesignCafe.Nature.QualitySettings/InteractionQuality::set_Enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionQuality_set_Enabled_m08318333200007F1EA6E9DEEF83D2017DE6EFC75 (InteractionQuality_t2FF0E0485560DCDA3D579E9951D66B6BE0691D9C* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CEnabledU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Int32 VisualDesignCafe.Nature.QualitySettings/InteractionQuality::get_Resolution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InteractionQuality_get_Resolution_m27541982F7FFD2FA68A2DCAA735D0347E01D3FD5 (InteractionQuality_t2FF0E0485560DCDA3D579E9951D66B6BE0691D9C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CResolutionU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void VisualDesignCafe.Nature.QualitySettings/InteractionQuality::set_Resolution(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionQuality_set_Resolution_m781A8E6E8FEA3A8AA6EBA7905B1B3EC4BBDAE203 (InteractionQuality_t2FF0E0485560DCDA3D579E9951D66B6BE0691D9C* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CResolutionU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Single VisualDesignCafe.Nature.QualitySettings/InteractionQuality::get_Accuracy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InteractionQuality_get_Accuracy_m0A36F8C51BEDCAB85DBF2FFD79627AA3368D28C9 (InteractionQuality_t2FF0E0485560DCDA3D579E9951D66B6BE0691D9C* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___U3CAccuracyU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void VisualDesignCafe.Nature.QualitySettings/InteractionQuality::set_Accuracy(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionQuality_set_Accuracy_mF33C09E6AA891C0662C9BFA81F999BFF7577368F (InteractionQuality_t2FF0E0485560DCDA3D579E9951D66B6BE0691D9C* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		__this->___U3CAccuracyU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Single VisualDesignCafe.Nature.QualitySettings/InteractionQuality::get_TrailPopupSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InteractionQuality_get_TrailPopupSpeed_m1AD66A7033D9CF5948DC08B3B7F70B305EF4C860 (InteractionQuality_t2FF0E0485560DCDA3D579E9951D66B6BE0691D9C* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___U3CTrailPopupSpeedU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void VisualDesignCafe.Nature.QualitySettings/InteractionQuality::set_TrailPopupSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionQuality_set_TrailPopupSpeed_m1AA498BC117ED154FCC5F090728FD892F53169E6 (InteractionQuality_t2FF0E0485560DCDA3D579E9951D66B6BE0691D9C* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		__this->___U3CTrailPopupSpeedU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Void VisualDesignCafe.Nature.QualitySettings/InteractionQuality::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionQuality_Apply_m55BE510DAC8E5A8974EFF6EC7EF3A8ECB270E86F (InteractionQuality_t2FF0E0485560DCDA3D579E9951D66B6BE0691D9C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7233EADF7D2A53753670B9E24CE161CC40017684);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Action_1_t18A965A5CD8412F57525B70C03F434E0BE590998* G_B5_0 = NULL;
	Action_1_t18A965A5CD8412F57525B70C03F434E0BE590998* G_B4_0 = NULL;
	{
		bool L_0;
		L_0 = InteractionQuality_get_Enabled_m273B99E3E77766F62B4AFAE5145C54B2EB55E3EE_inline(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		Shader_DisableKeyword_m6427E6828CF809F12752AE2CF70E6A79281A3DB2(_stringLiteral7233EADF7D2A53753670B9E24CE161CC40017684, NULL);
		goto IL_0023;
	}

IL_0018:
	{
		Shader_EnableKeyword_m24DB964DE6795F323916C317DDDB88061E6D5761(_stringLiteral7233EADF7D2A53753670B9E24CE161CC40017684, NULL);
	}

IL_0023:
	{
		Action_1_t18A965A5CD8412F57525B70C03F434E0BE590998* L_2 = __this->___Changed_1;
		Action_1_t18A965A5CD8412F57525B70C03F434E0BE590998* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_002f;
		}
	}
	{
		goto IL_0036;
	}

IL_002f:
	{
		NullCheck(G_B5_0);
		Action_1_Invoke_mB45454B09435AF35BF1E4E47FFDE455EC3F5A72D_inline(G_B5_0, __this, NULL);
	}

IL_0036:
	{
		return;
	}
}
// System.Void VisualDesignCafe.Nature.QualitySettings/InteractionQuality::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionQuality__ctor_m53B4EDFD03FE6814AFC3007CCE0293A4E4E9B87F (InteractionQuality_t2FF0E0485560DCDA3D579E9951D66B6BE0691D9C* __this, const RuntimeMethod* method) 
{
	{
		__this->___U3CEnabledU3Ek__BackingField_2 = (bool)1;
		__this->___U3CResolutionU3Ek__BackingField_3 = ((int32_t)1024);
		__this->___U3CAccuracyU3Ek__BackingField_4 = (5.0f);
		__this->___U3CTrailPopupSpeedU3Ek__BackingField_5 = (1.0f);
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
// System.Void VisualDesignCafe.Nature.QualitySettings/GraphicsQuality::add_Changed(System.Action`1<VisualDesignCafe.Nature.QualitySettings/GraphicsQuality>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphicsQuality_add_Changed_m6E46BD17396DB1735CC1FEA1C1A640640916EDFD (GraphicsQuality_tEC77150663125A38E81AF2C977C22DAACD11ADC2* __this, Action_1_t7092C955DCB63C4B71ABEFF4198374A199F1CE5F* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7092C955DCB63C4B71ABEFF4198374A199F1CE5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t7092C955DCB63C4B71ABEFF4198374A199F1CE5F* V_0 = NULL;
	Action_1_t7092C955DCB63C4B71ABEFF4198374A199F1CE5F* V_1 = NULL;
	Action_1_t7092C955DCB63C4B71ABEFF4198374A199F1CE5F* V_2 = NULL;
	{
		Action_1_t7092C955DCB63C4B71ABEFF4198374A199F1CE5F* L_0 = __this->___Changed_0;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t7092C955DCB63C4B71ABEFF4198374A199F1CE5F* L_1 = V_0;
		V_1 = L_1;
		Action_1_t7092C955DCB63C4B71ABEFF4198374A199F1CE5F* L_2 = V_1;
		Action_1_t7092C955DCB63C4B71ABEFF4198374A199F1CE5F* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((Action_1_t7092C955DCB63C4B71ABEFF4198374A199F1CE5F*)Castclass((RuntimeObject*)L_4, Action_1_t7092C955DCB63C4B71ABEFF4198374A199F1CE5F_il2cpp_TypeInfo_var));
		Action_1_t7092C955DCB63C4B71ABEFF4198374A199F1CE5F** L_5 = (&__this->___Changed_0);
		Action_1_t7092C955DCB63C4B71ABEFF4198374A199F1CE5F* L_6 = V_2;
		Action_1_t7092C955DCB63C4B71ABEFF4198374A199F1CE5F* L_7 = V_1;
		Action_1_t7092C955DCB63C4B71ABEFF4198374A199F1CE5F* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t7092C955DCB63C4B71ABEFF4198374A199F1CE5F*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t7092C955DCB63C4B71ABEFF4198374A199F1CE5F* L_9 = V_0;
		Action_1_t7092C955DCB63C4B71ABEFF4198374A199F1CE5F* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t7092C955DCB63C4B71ABEFF4198374A199F1CE5F*)L_9) == ((RuntimeObject*)(Action_1_t7092C955DCB63C4B71ABEFF4198374A199F1CE5F*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void VisualDesignCafe.Nature.QualitySettings/GraphicsQuality::remove_Changed(System.Action`1<VisualDesignCafe.Nature.QualitySettings/GraphicsQuality>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphicsQuality_remove_Changed_m3959897F93B4AA1363615C6A79A2C02A9A6DAC2A (GraphicsQuality_tEC77150663125A38E81AF2C977C22DAACD11ADC2* __this, Action_1_t7092C955DCB63C4B71ABEFF4198374A199F1CE5F* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7092C955DCB63C4B71ABEFF4198374A199F1CE5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t7092C955DCB63C4B71ABEFF4198374A199F1CE5F* V_0 = NULL;
	Action_1_t7092C955DCB63C4B71ABEFF4198374A199F1CE5F* V_1 = NULL;
	Action_1_t7092C955DCB63C4B71ABEFF4198374A199F1CE5F* V_2 = NULL;
	{
		Action_1_t7092C955DCB63C4B71ABEFF4198374A199F1CE5F* L_0 = __this->___Changed_0;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t7092C955DCB63C4B71ABEFF4198374A199F1CE5F* L_1 = V_0;
		V_1 = L_1;
		Action_1_t7092C955DCB63C4B71ABEFF4198374A199F1CE5F* L_2 = V_1;
		Action_1_t7092C955DCB63C4B71ABEFF4198374A199F1CE5F* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((Action_1_t7092C955DCB63C4B71ABEFF4198374A199F1CE5F*)Castclass((RuntimeObject*)L_4, Action_1_t7092C955DCB63C4B71ABEFF4198374A199F1CE5F_il2cpp_TypeInfo_var));
		Action_1_t7092C955DCB63C4B71ABEFF4198374A199F1CE5F** L_5 = (&__this->___Changed_0);
		Action_1_t7092C955DCB63C4B71ABEFF4198374A199F1CE5F* L_6 = V_2;
		Action_1_t7092C955DCB63C4B71ABEFF4198374A199F1CE5F* L_7 = V_1;
		Action_1_t7092C955DCB63C4B71ABEFF4198374A199F1CE5F* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t7092C955DCB63C4B71ABEFF4198374A199F1CE5F*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t7092C955DCB63C4B71ABEFF4198374A199F1CE5F* L_9 = V_0;
		Action_1_t7092C955DCB63C4B71ABEFF4198374A199F1CE5F* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t7092C955DCB63C4B71ABEFF4198374A199F1CE5F*)L_9) == ((RuntimeObject*)(Action_1_t7092C955DCB63C4B71ABEFF4198374A199F1CE5F*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// VisualDesignCafe.Nature.QualitySettings/MaterialQuality VisualDesignCafe.Nature.QualitySettings/GraphicsQuality::get_MaterialQuality()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsQuality_get_MaterialQuality_mADB53532DD514A94E15E6B817238779B3471EB6E (GraphicsQuality_tEC77150663125A38E81AF2C977C22DAACD11ADC2* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CMaterialQualityU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void VisualDesignCafe.Nature.QualitySettings/GraphicsQuality::set_MaterialQuality(VisualDesignCafe.Nature.QualitySettings/MaterialQuality)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphicsQuality_set_MaterialQuality_mDCAC9E7D8458BE80525D1F0640541525356B34B2 (GraphicsQuality_tEC77150663125A38E81AF2C977C22DAACD11ADC2* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CMaterialQualityU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Void VisualDesignCafe.Nature.QualitySettings/GraphicsQuality::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphicsQuality_Apply_mB93F7801105309A6F176114D0CD2FB8E9402DC99 (GraphicsQuality_tEC77150663125A38E81AF2C977C22DAACD11ADC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3FD1832AB941CF70788CDA8BA0EC5E4A6D340207);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8F35979507EE2CEE3C7F8D73C77F5F1FBC2B712);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB647135ED349ACE71035F164D57AAAC743B2E7D9);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Action_1_t7092C955DCB63C4B71ABEFF4198374A199F1CE5F* G_B7_0 = NULL;
	Action_1_t7092C955DCB63C4B71ABEFF4198374A199F1CE5F* G_B6_0 = NULL;
	{
		int32_t L_0;
		L_0 = GraphicsQuality_get_MaterialQuality_mADB53532DD514A94E15E6B817238779B3471EB6E_inline(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001c;
			}
			case 1:
			{
				goto IL_003f;
			}
			case 2:
			{
				goto IL_0062;
			}
		}
	}
	{
		goto IL_0085;
	}

IL_001c:
	{
		Shader_DisableKeyword_m6427E6828CF809F12752AE2CF70E6A79281A3DB2(_stringLiteral3FD1832AB941CF70788CDA8BA0EC5E4A6D340207, NULL);
		Shader_DisableKeyword_m6427E6828CF809F12752AE2CF70E6A79281A3DB2(_stringLiteralA8F35979507EE2CEE3C7F8D73C77F5F1FBC2B712, NULL);
		Shader_EnableKeyword_m24DB964DE6795F323916C317DDDB88061E6D5761(_stringLiteralB647135ED349ACE71035F164D57AAAC743B2E7D9, NULL);
		goto IL_0085;
	}

IL_003f:
	{
		Shader_DisableKeyword_m6427E6828CF809F12752AE2CF70E6A79281A3DB2(_stringLiteral3FD1832AB941CF70788CDA8BA0EC5E4A6D340207, NULL);
		Shader_DisableKeyword_m6427E6828CF809F12752AE2CF70E6A79281A3DB2(_stringLiteralB647135ED349ACE71035F164D57AAAC743B2E7D9, NULL);
		Shader_EnableKeyword_m24DB964DE6795F323916C317DDDB88061E6D5761(_stringLiteralA8F35979507EE2CEE3C7F8D73C77F5F1FBC2B712, NULL);
		goto IL_0085;
	}

IL_0062:
	{
		Shader_DisableKeyword_m6427E6828CF809F12752AE2CF70E6A79281A3DB2(_stringLiteralA8F35979507EE2CEE3C7F8D73C77F5F1FBC2B712, NULL);
		Shader_DisableKeyword_m6427E6828CF809F12752AE2CF70E6A79281A3DB2(_stringLiteralB647135ED349ACE71035F164D57AAAC743B2E7D9, NULL);
		Shader_EnableKeyword_m24DB964DE6795F323916C317DDDB88061E6D5761(_stringLiteral3FD1832AB941CF70788CDA8BA0EC5E4A6D340207, NULL);
		goto IL_0085;
	}

IL_0085:
	{
		Action_1_t7092C955DCB63C4B71ABEFF4198374A199F1CE5F* L_2 = __this->___Changed_0;
		Action_1_t7092C955DCB63C4B71ABEFF4198374A199F1CE5F* L_3 = L_2;
		G_B6_0 = L_3;
		if (L_3)
		{
			G_B7_0 = L_3;
			goto IL_0091;
		}
	}
	{
		goto IL_0098;
	}

IL_0091:
	{
		NullCheck(G_B7_0);
		Action_1_Invoke_m84B0852424E5B49AC06111862CA6F068B7C119DC_inline(G_B7_0, __this, NULL);
	}

IL_0098:
	{
		return;
	}
}
// System.Void VisualDesignCafe.Nature.QualitySettings/GraphicsQuality::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphicsQuality__ctor_m4A9C3044567597B22424B225AC8D13EDC9AD9020 (GraphicsQuality_tEC77150663125A38E81AF2C977C22DAACD11ADC2* __this, const RuntimeMethod* method) 
{
	{
		__this->___U3CMaterialQualityU3Ek__BackingField_1 = 0;
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
// System.Void VisualDesignCafe.Nature.QualitySettings/OverlayQuality::add_Changed(System.Action`1<VisualDesignCafe.Nature.QualitySettings/OverlayQuality>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverlayQuality_add_Changed_mF322C32685BC70E7673092F5CF9B02726E942A3D (OverlayQuality_t85B45D8ED6E1BF50B54DF1A90A14F384C695DA56* __this, Action_1_tA3A3EDA5B0123A198F5499DD1DD4245C6479E02F* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tA3A3EDA5B0123A198F5499DD1DD4245C6479E02F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tA3A3EDA5B0123A198F5499DD1DD4245C6479E02F* V_0 = NULL;
	Action_1_tA3A3EDA5B0123A198F5499DD1DD4245C6479E02F* V_1 = NULL;
	Action_1_tA3A3EDA5B0123A198F5499DD1DD4245C6479E02F* V_2 = NULL;
	{
		Action_1_tA3A3EDA5B0123A198F5499DD1DD4245C6479E02F* L_0 = __this->___Changed_1;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tA3A3EDA5B0123A198F5499DD1DD4245C6479E02F* L_1 = V_0;
		V_1 = L_1;
		Action_1_tA3A3EDA5B0123A198F5499DD1DD4245C6479E02F* L_2 = V_1;
		Action_1_tA3A3EDA5B0123A198F5499DD1DD4245C6479E02F* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((Action_1_tA3A3EDA5B0123A198F5499DD1DD4245C6479E02F*)Castclass((RuntimeObject*)L_4, Action_1_tA3A3EDA5B0123A198F5499DD1DD4245C6479E02F_il2cpp_TypeInfo_var));
		Action_1_tA3A3EDA5B0123A198F5499DD1DD4245C6479E02F** L_5 = (&__this->___Changed_1);
		Action_1_tA3A3EDA5B0123A198F5499DD1DD4245C6479E02F* L_6 = V_2;
		Action_1_tA3A3EDA5B0123A198F5499DD1DD4245C6479E02F* L_7 = V_1;
		Action_1_tA3A3EDA5B0123A198F5499DD1DD4245C6479E02F* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_tA3A3EDA5B0123A198F5499DD1DD4245C6479E02F*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tA3A3EDA5B0123A198F5499DD1DD4245C6479E02F* L_9 = V_0;
		Action_1_tA3A3EDA5B0123A198F5499DD1DD4245C6479E02F* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tA3A3EDA5B0123A198F5499DD1DD4245C6479E02F*)L_9) == ((RuntimeObject*)(Action_1_tA3A3EDA5B0123A198F5499DD1DD4245C6479E02F*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void VisualDesignCafe.Nature.QualitySettings/OverlayQuality::remove_Changed(System.Action`1<VisualDesignCafe.Nature.QualitySettings/OverlayQuality>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverlayQuality_remove_Changed_m515FCC5EDE647450C17D3C1F185694FF8267EC4F (OverlayQuality_t85B45D8ED6E1BF50B54DF1A90A14F384C695DA56* __this, Action_1_tA3A3EDA5B0123A198F5499DD1DD4245C6479E02F* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tA3A3EDA5B0123A198F5499DD1DD4245C6479E02F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tA3A3EDA5B0123A198F5499DD1DD4245C6479E02F* V_0 = NULL;
	Action_1_tA3A3EDA5B0123A198F5499DD1DD4245C6479E02F* V_1 = NULL;
	Action_1_tA3A3EDA5B0123A198F5499DD1DD4245C6479E02F* V_2 = NULL;
	{
		Action_1_tA3A3EDA5B0123A198F5499DD1DD4245C6479E02F* L_0 = __this->___Changed_1;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tA3A3EDA5B0123A198F5499DD1DD4245C6479E02F* L_1 = V_0;
		V_1 = L_1;
		Action_1_tA3A3EDA5B0123A198F5499DD1DD4245C6479E02F* L_2 = V_1;
		Action_1_tA3A3EDA5B0123A198F5499DD1DD4245C6479E02F* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((Action_1_tA3A3EDA5B0123A198F5499DD1DD4245C6479E02F*)Castclass((RuntimeObject*)L_4, Action_1_tA3A3EDA5B0123A198F5499DD1DD4245C6479E02F_il2cpp_TypeInfo_var));
		Action_1_tA3A3EDA5B0123A198F5499DD1DD4245C6479E02F** L_5 = (&__this->___Changed_1);
		Action_1_tA3A3EDA5B0123A198F5499DD1DD4245C6479E02F* L_6 = V_2;
		Action_1_tA3A3EDA5B0123A198F5499DD1DD4245C6479E02F* L_7 = V_1;
		Action_1_tA3A3EDA5B0123A198F5499DD1DD4245C6479E02F* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_tA3A3EDA5B0123A198F5499DD1DD4245C6479E02F*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tA3A3EDA5B0123A198F5499DD1DD4245C6479E02F* L_9 = V_0;
		Action_1_tA3A3EDA5B0123A198F5499DD1DD4245C6479E02F* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tA3A3EDA5B0123A198F5499DD1DD4245C6479E02F*)L_9) == ((RuntimeObject*)(Action_1_tA3A3EDA5B0123A198F5499DD1DD4245C6479E02F*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Boolean VisualDesignCafe.Nature.QualitySettings/OverlayQuality::get_Enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OverlayQuality_get_Enabled_m4A5E1020366FDB43ED2DBA4939015B15FE5BAD8E (OverlayQuality_t85B45D8ED6E1BF50B54DF1A90A14F384C695DA56* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CEnabledU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void VisualDesignCafe.Nature.QualitySettings/OverlayQuality::set_Enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverlayQuality_set_Enabled_m65D6E607FA5F23101BF8519491A013ADAC200CFF (OverlayQuality_t85B45D8ED6E1BF50B54DF1A90A14F384C695DA56* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CEnabledU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Int32 VisualDesignCafe.Nature.QualitySettings/OverlayQuality::get_Resolution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OverlayQuality_get_Resolution_m29E0ECE1CFFB7E518DD38A0AC1EC74E87F280663 (OverlayQuality_t85B45D8ED6E1BF50B54DF1A90A14F384C695DA56* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CResolutionU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void VisualDesignCafe.Nature.QualitySettings/OverlayQuality::set_Resolution(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverlayQuality_set_Resolution_m8335AFEB7FDC0F0DEDFC99B6F8E258AAC4CDD9CC (OverlayQuality_t85B45D8ED6E1BF50B54DF1A90A14F384C695DA56* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CResolutionU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Single VisualDesignCafe.Nature.QualitySettings/OverlayQuality::get_Accuracy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float OverlayQuality_get_Accuracy_mB4088310490F080A10B0355FB3B74F151EF224D0 (OverlayQuality_t85B45D8ED6E1BF50B54DF1A90A14F384C695DA56* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___U3CAccuracyU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void VisualDesignCafe.Nature.QualitySettings/OverlayQuality::set_Accuracy(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverlayQuality_set_Accuracy_m851617E6D113BACB6A590E731DFBC50A43ECD706 (OverlayQuality_t85B45D8ED6E1BF50B54DF1A90A14F384C695DA56* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		__this->___U3CAccuracyU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void VisualDesignCafe.Nature.QualitySettings/OverlayQuality::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverlayQuality_Apply_mA55764CD68AE5D026805CE34D7607A5A97D2CFFC (OverlayQuality_t85B45D8ED6E1BF50B54DF1A90A14F384C695DA56* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12620BDB40B0DA68B35A6A31DFD4BD6F90D7D75D);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Action_1_tA3A3EDA5B0123A198F5499DD1DD4245C6479E02F* G_B5_0 = NULL;
	Action_1_tA3A3EDA5B0123A198F5499DD1DD4245C6479E02F* G_B4_0 = NULL;
	{
		bool L_0;
		L_0 = OverlayQuality_get_Enabled_m4A5E1020366FDB43ED2DBA4939015B15FE5BAD8E_inline(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		Shader_EnableKeyword_m24DB964DE6795F323916C317DDDB88061E6D5761(_stringLiteral12620BDB40B0DA68B35A6A31DFD4BD6F90D7D75D, NULL);
		goto IL_0023;
	}

IL_0018:
	{
		Shader_DisableKeyword_m6427E6828CF809F12752AE2CF70E6A79281A3DB2(_stringLiteral12620BDB40B0DA68B35A6A31DFD4BD6F90D7D75D, NULL);
	}

IL_0023:
	{
		Action_1_tA3A3EDA5B0123A198F5499DD1DD4245C6479E02F* L_2 = __this->___Changed_1;
		Action_1_tA3A3EDA5B0123A198F5499DD1DD4245C6479E02F* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_002f;
		}
	}
	{
		goto IL_0036;
	}

IL_002f:
	{
		NullCheck(G_B5_0);
		Action_1_Invoke_m0BB24730A9DA824B62796C2641EC35C52E9A22B7_inline(G_B5_0, __this, NULL);
	}

IL_0036:
	{
		return;
	}
}
// System.Void VisualDesignCafe.Nature.QualitySettings/OverlayQuality::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverlayQuality__ctor_m9FDC3CA1EDE0D98409D33E63509FC5485D52DAA8 (OverlayQuality_t85B45D8ED6E1BF50B54DF1A90A14F384C695DA56* __this, const RuntimeMethod* method) 
{
	{
		__this->___U3CEnabledU3Ek__BackingField_2 = (bool)1;
		__this->___U3CResolutionU3Ek__BackingField_3 = ((int32_t)2048);
		__this->___U3CAccuracyU3Ek__BackingField_4 = (4.0f);
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
// System.Void VisualDesignCafe.Nature.RuntimeEntryPoint::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeEntryPoint_Load_mD9EFE6985713DB0B0E13DAC7FF4E851605775B1D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967* L_0 = ((RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967_il2cpp_TypeInfo_var))->____entryPoint_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967* L_3;
		L_3 = RuntimeEntryPoint_FindExistingEntryPointInScene_m795739EFB9A2BEDFCB31F26003D50B3AC619432D(NULL);
		((RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967_il2cpp_TypeInfo_var))->____entryPoint_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967_il2cpp_TypeInfo_var))->____entryPoint_4), (void*)L_3);
		RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967* L_4 = ((RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967_il2cpp_TypeInfo_var))->____entryPoint_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967* L_7;
		L_7 = RuntimeEntryPoint_CreateEntryPoint_mFEF8A8B13E006AFC2A2F70CA1FD2E658042A2332(NULL);
		((RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967_il2cpp_TypeInfo_var))->____entryPoint_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967_il2cpp_TypeInfo_var))->____entryPoint_4), (void*)L_7);
	}

IL_0034:
	{
	}

IL_0035:
	{
		return;
	}
}
// System.Void VisualDesignCafe.Nature.RuntimeEntryPoint::Unload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeEntryPoint_Unload_mAD891265349AC83EE67788201513B1854285CFBA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967* L_0 = ((RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967_il2cpp_TypeInfo_var))->____entryPoint_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967* L_3 = ((RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967_il2cpp_TypeInfo_var))->____entryPoint_4;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_4, NULL);
	}

IL_0020:
	{
		return;
	}
}
// VisualDesignCafe.Nature.RuntimeEntryPoint VisualDesignCafe.Nature.RuntimeEntryPoint::CreateEntryPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967* RuntimeEntryPoint_CreateEntryPoint_mFEF8A8B13E006AFC2A2F70CA1FD2E658042A2332 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisRuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967_m2D0453CB50662DF237789E308974761DCEEF5983_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD63A8837BCCEAA128BEB458AD55432018F2FD767);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	bool V_1 = false;
	RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967* V_2 = NULL;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_0, _stringLiteralD63A8837BCCEAA128BEB458AD55432018F2FD767, NULL);
		V_0 = L_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = V_0;
		NullCheck(L_1);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_1, ((int32_t)61), NULL);
		bool L_2;
		L_2 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(L_4, NULL);
	}

IL_0025:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_0;
		NullCheck(L_5);
		RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967* L_6;
		L_6 = GameObject_AddComponent_TisRuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967_m2D0453CB50662DF237789E308974761DCEEF5983(L_5, GameObject_AddComponent_TisRuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967_m2D0453CB50662DF237789E308974761DCEEF5983_RuntimeMethod_var);
		V_2 = L_6;
		goto IL_002e;
	}

IL_002e:
	{
		RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967* L_7 = V_2;
		return L_7;
	}
}
// VisualDesignCafe.Nature.RuntimeEntryPoint VisualDesignCafe.Nature.RuntimeEntryPoint::FindExistingEntryPointInScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967* RuntimeEntryPoint_FindExistingEntryPointInScene_m795739EFB9A2BEDFCB31F26003D50B3AC619432D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967_m608CD40BDA78AC033F651C788DEB77B09AB34C14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisRuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967_m44D42E7AB72E309EDBD8925DE2FB87FE66F76791_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeEntryPointU5BU5D_t594D90D3D35666CEFC4AC17F21284AE3688B7634* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967* V_2 = NULL;
	bool V_3 = false;
	RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967* V_4 = NULL;
	int32_t V_5 = 0;
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_8 = NULL;
	int32_t V_9 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_10 = NULL;
	RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967* V_11 = NULL;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	int32_t G_B9_0 = 0;
	int32_t G_B15_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		RuntimeEntryPointU5BU5D_t594D90D3D35666CEFC4AC17F21284AE3688B7634* L_0;
		L_0 = Object_FindObjectsOfType_TisRuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967_m44D42E7AB72E309EDBD8925DE2FB87FE66F76791(Object_FindObjectsOfType_TisRuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967_m44D42E7AB72E309EDBD8925DE2FB87FE66F76791_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0029;
	}

IL_000c:
	{
		RuntimeEntryPointU5BU5D_t594D90D3D35666CEFC4AC17F21284AE3688B7634* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967* L_5 = V_2;
		NullCheck(L_5);
		bool L_6 = L_5->____isDestroyed_6;
		V_3 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0025;
		}
	}
	{
		RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967* L_8 = V_2;
		V_4 = L_8;
		goto IL_00dd;
	}

IL_0025:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0029:
	{
		int32_t L_10 = V_1;
		RuntimeEntryPointU5BU5D_t594D90D3D35666CEFC4AC17F21284AE3688B7634* L_11 = V_0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_000c;
		}
	}
	{
		V_5 = 0;
		goto IL_00c6;
	}

IL_0037:
	{
		int32_t L_12 = V_5;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_13;
		L_13 = SceneManager_GetSceneAt_m5444433E1CD78FC2E573330630000B5A73E0FBF4(L_12, NULL);
		V_6 = L_13;
		bool L_14;
		L_14 = Scene_IsValid_m0D5200731D3E26ECBBB55803F9242965A14A4599((&V_6), NULL);
		if (!L_14)
		{
			goto IL_0056;
		}
	}
	{
		bool L_15;
		L_15 = Scene_get_isLoaded_m5BC54CEB27330040A0BC69E66E94EE97E87298BC((&V_6), NULL);
		G_B9_0 = ((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
		goto IL_0057;
	}

IL_0056:
	{
		G_B9_0 = 1;
	}

IL_0057:
	{
		V_7 = (bool)G_B9_0;
		bool L_16 = V_7;
		if (!L_16)
		{
			goto IL_005f;
		}
	}
	{
		goto IL_00c0;
	}

IL_005f:
	{
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_17;
		L_17 = Scene_GetRootGameObjects_mFDE0BF9EA926F30EC9AE71F33E0AE4D5D4EC5C5B((&V_6), NULL);
		V_8 = L_17;
		V_9 = 0;
		goto IL_00b7;
	}

IL_006e:
	{
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_18 = V_8;
		int32_t L_19 = V_9;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_10 = L_21;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = V_10;
		NullCheck(L_22);
		RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967* L_23;
		L_23 = GameObject_GetComponent_TisRuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967_m608CD40BDA78AC033F651C788DEB77B09AB34C14(L_22, GameObject_GetComponent_TisRuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967_m608CD40BDA78AC033F651C788DEB77B09AB34C14_RuntimeMethod_var);
		V_11 = L_23;
		RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967* L_24 = V_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_24, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_25)
		{
			goto IL_0092;
		}
	}
	{
		RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967* L_26 = V_11;
		NullCheck(L_26);
		bool L_27 = L_26->____isDestroyed_6;
		G_B15_0 = ((int32_t)(L_27));
		goto IL_0093;
	}

IL_0092:
	{
		G_B15_0 = 0;
	}

IL_0093:
	{
		V_12 = (bool)G_B15_0;
		bool L_28 = V_12;
		if (!L_28)
		{
			goto IL_009c;
		}
	}
	{
		V_11 = (RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967*)NULL;
	}

IL_009c:
	{
		RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967* L_29 = V_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_30;
		L_30 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_29, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_13 = L_30;
		bool L_31 = V_13;
		if (!L_31)
		{
			goto IL_00b0;
		}
	}
	{
		RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967* L_32 = V_11;
		V_4 = L_32;
		goto IL_00dd;
	}

IL_00b0:
	{
		int32_t L_33 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00b7:
	{
		int32_t L_34 = V_9;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_35 = V_8;
		NullCheck(L_35);
		if ((((int32_t)L_34) < ((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length)))))
		{
			goto IL_006e;
		}
	}
	{
	}

IL_00c0:
	{
		int32_t L_36 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00c6:
	{
		int32_t L_37 = V_5;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		int32_t L_38;
		L_38 = SceneManager_get_sceneCount_mDB2658B632F95AB171E500C1519A681507B9230B(NULL);
		V_14 = (bool)((((int32_t)L_37) < ((int32_t)L_38))? 1 : 0);
		bool L_39 = V_14;
		if (L_39)
		{
			goto IL_0037;
		}
	}
	{
		V_4 = (RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967*)NULL;
		goto IL_00dd;
	}

IL_00dd:
	{
		RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967* L_40 = V_4;
		return L_40;
	}
}
// System.Void VisualDesignCafe.Nature.RuntimeEntryPoint::LoadResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeEntryPoint_LoadResources_mF3B5B7C0A739480AD0BEF0A3766FD2AEEEC0A248 (RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderResources_t0D9AB98CBAAC245E280C145954C3811E16988ECA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		ShaderResources_t0D9AB98CBAAC245E280C145954C3811E16988ECA* L_0 = __this->____shaderResources_5;
		V_0 = (bool)((((RuntimeObject*)(ShaderResources_t0D9AB98CBAAC245E280C145954C3811E16988ECA*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		ShaderResources_t0D9AB98CBAAC245E280C145954C3811E16988ECA* L_2 = (ShaderResources_t0D9AB98CBAAC245E280C145954C3811E16988ECA*)il2cpp_codegen_object_new(ShaderResources_t0D9AB98CBAAC245E280C145954C3811E16988ECA_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ShaderResources__ctor_m47D572330D8C45D44A061F0030475E39C3958F0F(L_2, NULL);
		__this->____shaderResources_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____shaderResources_5), (void*)L_2);
	}

IL_0019:
	{
		ShaderResources_t0D9AB98CBAAC245E280C145954C3811E16988ECA* L_3 = __this->____shaderResources_5;
		NullCheck(L_3);
		ShaderResources_Initialize_mB1757A506881C3DECBA2F3F1C4AA6BF3983AE123(L_3, NULL);
		return;
	}
}
// System.Void VisualDesignCafe.Nature.RuntimeEntryPoint::UnloadResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeEntryPoint_UnloadResources_m5500C3E64945AE746D67867176F108E62BB4FDB5 (RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967* __this, const RuntimeMethod* method) 
{
	ShaderResources_t0D9AB98CBAAC245E280C145954C3811E16988ECA* G_B2_0 = NULL;
	ShaderResources_t0D9AB98CBAAC245E280C145954C3811E16988ECA* G_B1_0 = NULL;
	{
		ShaderResources_t0D9AB98CBAAC245E280C145954C3811E16988ECA* L_0 = __this->____shaderResources_5;
		ShaderResources_t0D9AB98CBAAC245E280C145954C3811E16988ECA* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		goto IL_0013;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		ShaderResources_Destroy_m8D84A3397A7B882097038ABCD47EB99D1600E7E1(G_B2_0, NULL);
	}

IL_0013:
	{
		return;
	}
}
// System.Void VisualDesignCafe.Nature.RuntimeEntryPoint::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeEntryPoint_Awake_m6565AE68451B2A38AF36797D84F687FA346F4020 (RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967* __this, const RuntimeMethod* method) 
{
	{
		RuntimeEntryPoint_LoadResources_mF3B5B7C0A739480AD0BEF0A3766FD2AEEEC0A248(__this, NULL);
		return;
	}
}
// System.Void VisualDesignCafe.Nature.RuntimeEntryPoint::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeEntryPoint_OnGUI_mDADC7BD512089D4397F1F7AC0AF9712ED109AE9D (RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void VisualDesignCafe.Nature.RuntimeEntryPoint::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeEntryPoint_OnDestroy_m8051C15E9B5D4771403097B6BDBCBD90AF42ED13 (RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->____isDestroyed_6 = (bool)1;
		RuntimeEntryPoint_UnloadResources_m5500C3E64945AE746D67867176F108E62BB4FDB5(__this, NULL);
		((RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967_il2cpp_TypeInfo_var))->____entryPoint_4 = (RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967_il2cpp_TypeInfo_var))->____entryPoint_4), (void*)(RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967*)NULL);
		return;
	}
}
// System.Void VisualDesignCafe.Nature.RuntimeEntryPoint::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeEntryPoint__ctor_m24035523AC74D0B3554DE69351D323D12D11041A (RuntimeEntryPoint_t5C86C677ED18586E1537E25AD233BA036987B967* __this, const RuntimeMethod* method) 
{
	{
		__this->____isDestroyed_6 = (bool)0;
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
// System.Void VisualDesignCafe.Nature.RuntimeGlobalWindInitializer::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeGlobalWindInitializer_Initialize_m288F957FA529171954DA26F1441B0BB797121668 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeGlobalWindInitializer_OnActiveSceneChanged_m2641C9AD9CFEC8A4ED87DA771F24BFD17D1E3908_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_t3E619780AA870611658EC8B01DA6EA2EC42B13CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnityAction_2_t3E619780AA870611658EC8B01DA6EA2EC42B13CE* L_0 = (UnityAction_2_t3E619780AA870611658EC8B01DA6EA2EC42B13CE*)il2cpp_codegen_object_new(UnityAction_2_t3E619780AA870611658EC8B01DA6EA2EC42B13CE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityAction_2__ctor_m0C555E922D7495D9C81347C4CC01080514601692(L_0, NULL, (intptr_t)((void*)RuntimeGlobalWindInitializer_OnActiveSceneChanged_m2641C9AD9CFEC8A4ED87DA771F24BFD17D1E3908_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_add_activeSceneChanged_mC9236EE99263057E56736C4D044401A8F238155B(L_0, NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(Scene_tA1DC762B79745EB5140F054C884855B922318356));
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_1 = V_0;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_2;
		L_2 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		RuntimeGlobalWindInitializer_OnActiveSceneChanged_m2641C9AD9CFEC8A4ED87DA771F24BFD17D1E3908(L_1, L_2, NULL);
		return;
	}
}
// System.Void VisualDesignCafe.Nature.RuntimeGlobalWindInitializer::OnActiveSceneChanged(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeGlobalWindInitializer_OnActiveSceneChanged_m2641C9AD9CFEC8A4ED87DA771F24BFD17D1E3908 (Scene_tA1DC762B79745EB5140F054C884855B922318356 ___previousScene0, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___activeScene1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m7C9DCCE51623032EB28B634BB0041243A7359124_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tD5855DA3DC1C614C29762075E12B0B72B8B1F51C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3COnActiveSceneChangedU3Eb__1_0_m573D6BC1B780C831A2F81E2EC02893438C1CA05D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD5AAFC1F780554421A1EE79F5B54FF94A14ED5D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	bool V_1 = false;
	Func_2_tD5855DA3DC1C614C29762075E12B0B72B8B1F51C* G_B2_0 = NULL;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* G_B2_1 = NULL;
	Func_2_tD5855DA3DC1C614C29762075E12B0B72B8B1F51C* G_B1_0 = NULL;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* G_B1_1 = NULL;
	{
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0;
		L_0 = Scene_GetRootGameObjects_mFDE0BF9EA926F30EC9AE71F33E0AE4D5D4EC5C5B((&___activeScene1), NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD5AAFC1F780554421A1EE79F5B54FF94A14ED5D4_il2cpp_TypeInfo_var);
		Func_2_tD5855DA3DC1C614C29762075E12B0B72B8B1F51C* L_1 = ((U3CU3Ec_tD5AAFC1F780554421A1EE79F5B54FF94A14ED5D4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD5AAFC1F780554421A1EE79F5B54FF94A14ED5D4_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1;
		Func_2_tD5855DA3DC1C614C29762075E12B0B72B8B1F51C* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0027;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD5AAFC1F780554421A1EE79F5B54FF94A14ED5D4_il2cpp_TypeInfo_var);
		U3CU3Ec_tD5AAFC1F780554421A1EE79F5B54FF94A14ED5D4* L_3 = ((U3CU3Ec_tD5AAFC1F780554421A1EE79F5B54FF94A14ED5D4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD5AAFC1F780554421A1EE79F5B54FF94A14ED5D4_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tD5855DA3DC1C614C29762075E12B0B72B8B1F51C* L_4 = (Func_2_tD5855DA3DC1C614C29762075E12B0B72B8B1F51C*)il2cpp_codegen_object_new(Func_2_tD5855DA3DC1C614C29762075E12B0B72B8B1F51C_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Func_2__ctor_m9EDB1EDE49108C1136C6B0DD3DD5D2F843F5936E(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3COnActiveSceneChangedU3Eb__1_0_m573D6BC1B780C831A2F81E2EC02893438C1CA05D_RuntimeMethod_var), NULL);
		Func_2_tD5855DA3DC1C614C29762075E12B0B72B8B1F51C* L_5 = L_4;
		((U3CU3Ec_tD5AAFC1F780554421A1EE79F5B54FF94A14ED5D4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD5AAFC1F780554421A1EE79F5B54FF94A14ED5D4_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD5AAFC1F780554421A1EE79F5B54FF94A14ED5D4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD5AAFC1F780554421A1EE79F5B54FF94A14ED5D4_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0027:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Enumerable_FirstOrDefault_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m7C9DCCE51623032EB28B634BB0041243A7359124((RuntimeObject*)G_B2_1, G_B2_0, Enumerable_FirstOrDefault_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m7C9DCCE51623032EB28B634BB0041243A7359124_RuntimeMethod_var);
		V_0 = L_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_8;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		RuntimeGlobalWindInitializer_ApplyDefaultWind_mC16127C8F50C6DA34ADAC4547D872C66108E6FE5(NULL);
	}

IL_003e:
	{
		return;
	}
}
// System.Void VisualDesignCafe.Nature.RuntimeGlobalWindInitializer::ApplyDefaultWind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeGlobalWindInitializer_ApplyDefaultWind_mC16127C8F50C6DA34ADAC4547D872C66108E6FE5 (const RuntimeMethod* method) 
{
	WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23 L_0;
		L_0 = WindSettings_get_Calm_m69AD33EEED0088F6E7F67884E85F1C23CFFDB6BC(NULL);
		V_0 = L_0;
		WindSettings_Apply_m5FBA1B2E1C870A569ECB4824EF8B927D526DF999((&V_0), NULL);
		return;
	}
}
// System.Void VisualDesignCafe.Nature.RuntimeGlobalWindInitializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeGlobalWindInitializer__ctor_mFB38A9B75384EFFB23673003EE5BC21B8C434658 (RuntimeGlobalWindInitializer_t42E7C9AB78702F61DE18D7D2B3F362ED7B5FDDAD* __this, const RuntimeMethod* method) 
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
// System.Void VisualDesignCafe.Nature.RuntimeGlobalWindInitializer/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mF727ED35AA614615DE71C47515C59DE8BC22048B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD5AAFC1F780554421A1EE79F5B54FF94A14ED5D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tD5AAFC1F780554421A1EE79F5B54FF94A14ED5D4* L_0 = (U3CU3Ec_tD5AAFC1F780554421A1EE79F5B54FF94A14ED5D4*)il2cpp_codegen_object_new(U3CU3Ec_tD5AAFC1F780554421A1EE79F5B54FF94A14ED5D4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m52D0F19CC6DB6C3F1AB65A063D70E98AAC71542A(L_0, NULL);
		((U3CU3Ec_tD5AAFC1F780554421A1EE79F5B54FF94A14ED5D4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD5AAFC1F780554421A1EE79F5B54FF94A14ED5D4_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD5AAFC1F780554421A1EE79F5B54FF94A14ED5D4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD5AAFC1F780554421A1EE79F5B54FF94A14ED5D4_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void VisualDesignCafe.Nature.RuntimeGlobalWindInitializer/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m52D0F19CC6DB6C3F1AB65A063D70E98AAC71542A (U3CU3Ec_tD5AAFC1F780554421A1EE79F5B54FF94A14ED5D4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean VisualDesignCafe.Nature.RuntimeGlobalWindInitializer/<>c::<OnActiveSceneChanged>b__1_0(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3COnActiveSceneChangedU3Eb__1_0_m573D6BC1B780C831A2F81E2EC02893438C1CA05D (U3CU3Ec_tD5AAFC1F780554421A1EE79F5B54FF94A14ED5D4* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___g0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisGlobalWind_tF5FCFBD4CBCAF95A274AE76E9919815030D57B39_m777DBF73C4D803D504088DEE06478536E2754C62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___g0;
		NullCheck(L_0);
		GlobalWind_tF5FCFBD4CBCAF95A274AE76E9919815030D57B39* L_1;
		L_1 = GameObject_GetComponentInChildren_TisGlobalWind_tF5FCFBD4CBCAF95A274AE76E9919815030D57B39_m777DBF73C4D803D504088DEE06478536E2754C62(L_0, (bool)1, GameObject_GetComponentInChildren_TisGlobalWind_tF5FCFBD4CBCAF95A274AE76E9919815030D57B39_m777DBF73C4D803D504088DEE06478536E2754C62_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
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
// UnityEngine.Texture2D VisualDesignCafe.Nature.ShaderResources::get_PerlinNoise()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ShaderResources_get_PerlinNoise_m96B6FD493E4C81171A8C3ACC07DA958D7486EED5 (ShaderResources_t0D9AB98CBAAC245E280C145954C3811E16988ECA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_1 = NULL;
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = __this->____perlinNoise_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_3;
		L_3 = ShaderResources_GeneratePerlinNoiseTexture_mFB44EBF45252D4438E242DA221F4CCBE31B0CAC7(__this, NULL);
		__this->____perlinNoise_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____perlinNoise_3), (void*)L_3);
	}

IL_001d:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4 = __this->____perlinNoise_3;
		V_1 = L_4;
		goto IL_0026;
	}

IL_0026:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5 = V_1;
		return L_5;
	}
}
// System.Void VisualDesignCafe.Nature.ShaderResources::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderResources_Initialize_mB1757A506881C3DECBA2F3F1C4AA6BF3983AE123 (ShaderResources_t0D9AB98CBAAC245E280C145954C3811E16988ECA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral299EB27FCF4FB01F7C385853D311630DE8637743);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76F5A483E810308D242081573812C0C4A70B70EC);
		s_Il2CppMethodInitialized = true;
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0;
		L_0 = ShaderResources_get_PerlinNoise_m96B6FD493E4C81171A8C3ACC07DA958D7486EED5(__this, NULL);
		Shader_SetGlobalTexture_mABB6E994E67D083BEBE142B4CC8FA77137C2D021(_stringLiteral299EB27FCF4FB01F7C385853D311630DE8637743, L_0, NULL);
		Shader_SetGlobalFloat_mFA8F651003951E6319C952475148713F521243BF(_stringLiteral76F5A483E810308D242081573812C0C4A70B70EC, (0.00390625f), NULL);
		return;
	}
}
// System.Void VisualDesignCafe.Nature.ShaderResources::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderResources_Destroy_m8D84A3397A7B882097038ABCD47EB99D1600E7E1 (ShaderResources_t0D9AB98CBAAC245E280C145954C3811E16988ECA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = __this->____perlinNoise_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_3 = __this->____perlinNoise_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_3, NULL);
	}

IL_001d:
	{
		return;
	}
}
// UnityEngine.Texture2D VisualDesignCafe.Nature.ShaderResources::GeneratePerlinNoiseTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ShaderResources_GeneratePerlinNoiseTexture_mFB44EBF45252D4438E242DA221F4CCBE31B0CAC7 (ShaderResources_t0D9AB98CBAAC245E280C145954C3811E16988ECA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParallelOptions_tB544CD8AB0089AA9973F610B95F7CA93E4A441D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parallel_tEDD920942C8F814D55C6B029EACB00C81620BD14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_U3CGeneratePerlinNoiseTextureU3Eb__0_mD4511B5F63826F63E22A316A0CA4EBB181813614_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_tB7817BF36D3F1C02C3DAFE1C57BF9C90AEFEE55A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD816716D7B936165E7512CB4E11B9998FD537868);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass8_0_tB7817BF36D3F1C02C3DAFE1C57BF9C90AEFEE55A* V_0 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_1 = NULL;
	int32_t V_2 = 0;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_3 = NULL;
	int32_t G_B2_0 = 0;
	int32_t G_B2_1 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B1_1 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	int32_t G_B3_2 = 0;
	{
		U3CU3Ec__DisplayClass8_0_tB7817BF36D3F1C02C3DAFE1C57BF9C90AEFEE55A* L_0 = (U3CU3Ec__DisplayClass8_0_tB7817BF36D3F1C02C3DAFE1C57BF9C90AEFEE55A*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass8_0_tB7817BF36D3F1C02C3DAFE1C57BF9C90AEFEE55A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass8_0__ctor_m4E0A1433C1A767B7B4225F0D4616A3B0267C11BF(L_0, NULL);
		V_0 = L_0;
		bool L_1;
		L_1 = SystemInfo_SupportsTextureFormat_mB0695AD83D5244AFA9D65520E13FBC54F438A43D(((int32_t)63), NULL);
		G_B1_0 = ((int32_t)2048);
		G_B1_1 = ((int32_t)2048);
		if (L_1)
		{
			G_B2_0 = ((int32_t)2048);
			G_B2_1 = ((int32_t)2048);
			goto IL_001d;
		}
	}
	{
		G_B3_0 = 5;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001f;
	}

IL_001d:
	{
		G_B3_0 = ((int32_t)63);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001f:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_2, G_B3_2, G_B3_1, G_B3_0, (bool)0, NULL);
		V_1 = L_2;
		U3CU3Ec__DisplayClass8_0_tB7817BF36D3F1C02C3DAFE1C57BF9C90AEFEE55A* L_3 = V_0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4 = V_1;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_4);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_6 = V_1;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_6);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_8 = (ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)SZArrayNew(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_5, L_7)));
		NullCheck(L_3);
		L_3->___pixels_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___pixels_4), (void*)L_8);
		U3CU3Ec__DisplayClass8_0_tB7817BF36D3F1C02C3DAFE1C57BF9C90AEFEE55A* L_9 = V_0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_10);
		NullCheck(L_9);
		L_9->___textureWidth_2 = ((float)L_11);
		U3CU3Ec__DisplayClass8_0_tB7817BF36D3F1C02C3DAFE1C57BF9C90AEFEE55A* L_12 = V_0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_13 = V_1;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_13);
		NullCheck(L_12);
		L_12->___textureHeight_3 = ((float)L_14);
		U3CU3Ec__DisplayClass8_0_tB7817BF36D3F1C02C3DAFE1C57BF9C90AEFEE55A* L_15 = V_0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_16 = V_1;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_16);
		NullCheck(L_15);
		L_15->___textureWidthInt_5 = L_17;
		U3CU3Ec__DisplayClass8_0_tB7817BF36D3F1C02C3DAFE1C57BF9C90AEFEE55A* L_18 = V_0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_19 = V_1;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_19);
		NullCheck(L_18);
		L_18->___textureHeightInt_1 = L_20;
		U3CU3Ec__DisplayClass8_0_tB7817BF36D3F1C02C3DAFE1C57BF9C90AEFEE55A* L_21 = V_0;
		int32_t L_22;
		L_22 = SystemInfo_get_processorCount_m9161DEC1BC6A1D2431C23A291D3EDB288C2D9BD0(NULL);
		NullCheck(L_21);
		L_21->___blockSize_0 = L_22;
		U3CU3Ec__DisplayClass8_0_tB7817BF36D3F1C02C3DAFE1C57BF9C90AEFEE55A* L_23 = V_0;
		NullCheck(L_23);
		float L_24 = L_23->___textureHeight_3;
		U3CU3Ec__DisplayClass8_0_tB7817BF36D3F1C02C3DAFE1C57BF9C90AEFEE55A* L_25 = V_0;
		NullCheck(L_25);
		int32_t L_26 = L_25->___blockSize_0;
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)(il2cpp_codegen_cast_double_to_int<int32_t>(L_24)/L_26)), 1));
		int32_t L_27 = V_2;
		ParallelOptions_tB544CD8AB0089AA9973F610B95F7CA93E4A441D2* L_28 = (ParallelOptions_tB544CD8AB0089AA9973F610B95F7CA93E4A441D2*)il2cpp_codegen_object_new(ParallelOptions_tB544CD8AB0089AA9973F610B95F7CA93E4A441D2_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		ParallelOptions__ctor_mF265F14718D64C314C41033FA0ED96D0C9012077(L_28, NULL);
		ParallelOptions_tB544CD8AB0089AA9973F610B95F7CA93E4A441D2* L_29 = L_28;
		int32_t L_30;
		L_30 = SystemInfo_get_processorCount_m9161DEC1BC6A1D2431C23A291D3EDB288C2D9BD0(NULL);
		NullCheck(L_29);
		ParallelOptions_set_MaxDegreeOfParallelism_m26888A1D55B2D22DDF6BB13345ECCEA237F60461(L_29, L_30, NULL);
		U3CU3Ec__DisplayClass8_0_tB7817BF36D3F1C02C3DAFE1C57BF9C90AEFEE55A* L_31 = V_0;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_32 = (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)il2cpp_codegen_object_new(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87(L_32, L_31, (intptr_t)((void*)U3CU3Ec__DisplayClass8_0_U3CGeneratePerlinNoiseTextureU3Eb__0_mD4511B5F63826F63E22A316A0CA4EBB181813614_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(Parallel_tEDD920942C8F814D55C6B029EACB00C81620BD14_il2cpp_TypeInfo_var);
		ParallelLoopResult_t9C383DA248DA9082ECBF057DE0879AB99EE6A734 L_33;
		L_33 = Parallel_For_mC4C76C10A63654F4BD90C42506ADFC4D38DBAFDC(0, L_27, L_29, L_32, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_34 = V_1;
		NullCheck(L_34);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_34, _stringLiteralD816716D7B936165E7512CB4E11B9998FD537868, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_35 = V_1;
		U3CU3Ec__DisplayClass8_0_tB7817BF36D3F1C02C3DAFE1C57BF9C90AEFEE55A* L_36 = V_0;
		NullCheck(L_36);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_37 = L_36->___pixels_4;
		NullCheck(L_35);
		Texture2D_SetPixels_mAE0CDFA15FA96F840D7FFADC31405D8AF20D9073(L_35, L_37, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_38 = V_1;
		NullCheck(L_38);
		Texture2D_Apply_m36EE27E6F1BF7FB8C70A1D749DC4EE249810AA3A(L_38, (bool)0, (bool)0, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_39 = V_1;
		NullCheck(L_39);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_39, 1, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_40 = V_1;
		NullCheck(L_40);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_40, ((int32_t)61), NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_41 = V_1;
		V_3 = L_41;
		goto IL_00e8;
	}

IL_00e8:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_42 = V_3;
		return L_42;
	}
}
// System.Void VisualDesignCafe.Nature.ShaderResources::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderResources__ctor_m47D572330D8C45D44A061F0030475E39C3958F0F (ShaderResources_t0D9AB98CBAAC245E280C145954C3811E16988ECA* __this, const RuntimeMethod* method) 
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
// System.Void VisualDesignCafe.Nature.ShaderResources/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m4E0A1433C1A767B7B4225F0D4616A3B0267C11BF (U3CU3Ec__DisplayClass8_0_tB7817BF36D3F1C02C3DAFE1C57BF9C90AEFEE55A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void VisualDesignCafe.Nature.ShaderResources/<>c__DisplayClass8_0::<GeneratePerlinNoiseTexture>b__0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0_U3CGeneratePerlinNoiseTextureU3Eb__0_mD4511B5F63826F63E22A316A0CA4EBB181813614 (U3CU3Ec__DisplayClass8_0_tB7817BF36D3F1C02C3DAFE1C57BF9C90AEFEE55A* __this, int32_t ___block0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		V_1 = L_0;
		V_2 = 0;
		goto IL_00ac;
	}

IL_000e:
	{
		int32_t L_1 = ___block0;
		int32_t L_2 = __this->___blockSize_0;
		int32_t L_3 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_1, L_2)), L_3));
		int32_t L_4 = V_3;
		int32_t L_5 = __this->___textureHeightInt_1;
		V_4 = (bool)((((int32_t)L_4) < ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_4;
		if (!L_6)
		{
			goto IL_00a7;
		}
	}
	{
		V_5 = 0;
		goto IL_0097;
	}

IL_002e:
	{
		int32_t L_7 = V_5;
		float L_8 = __this->___textureWidth_2;
		int32_t L_9 = V_3;
		float L_10 = __this->___textureHeight_3;
		float L_11;
		L_11 = Mathf_PerlinNoise_mFDD2B12BE1FE4E890FA9FCD5CE6D7A90CAA779D4(((float)il2cpp_codegen_multiply(((float)(((float)L_7)/L_8)), (256.0f))), ((float)il2cpp_codegen_multiply(((float)(((float)L_9)/L_10)), (256.0f))), NULL);
		V_0 = L_11;
		float L_12 = V_0;
		float L_13;
		L_13 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(((float)il2cpp_codegen_multiply(L_12, (1.20000005f))), NULL);
		V_0 = L_13;
		float L_14 = V_0;
		(&V_1)->___r_0 = L_14;
		float L_15 = V_0;
		(&V_1)->___g_1 = L_15;
		float L_16 = V_0;
		(&V_1)->___b_2 = L_16;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_17 = __this->___pixels_4;
		int32_t L_18 = V_5;
		int32_t L_19 = V_3;
		int32_t L_20 = __this->___textureWidthInt_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_21 = V_1;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_18, ((int32_t)il2cpp_codegen_multiply(L_19, L_20))))), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_21);
		int32_t L_22 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0097:
	{
		int32_t L_23 = V_5;
		int32_t L_24 = __this->___textureWidthInt_5;
		V_6 = (bool)((((int32_t)L_23) < ((int32_t)L_24))? 1 : 0);
		bool L_25 = V_6;
		if (L_25)
		{
			goto IL_002e;
		}
	}

IL_00a7:
	{
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_00ac:
	{
		int32_t L_27 = V_2;
		int32_t L_28 = __this->___blockSize_0;
		V_7 = (bool)((((int32_t)L_27) < ((int32_t)L_28))? 1 : 0);
		bool L_29 = V_7;
		if (L_29)
		{
			goto IL_000e;
		}
	}
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
// VisualDesignCafe.Nature.WindSettings VisualDesignCafe.Nature.WindSettings::get_None()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23 WindSettings_get_None_m3882F7A87DC176DB268A606431BA93838F2C920D (const RuntimeMethod* method) 
{
	WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_0), (0.699999988f), (0.300000012f), /*hidden argument*/NULL);
		(&V_0)->___WindDirection_0 = L_0;
		(&V_0)->___WindStrength_1 = (0.0f);
		(&V_0)->___Turbulence_3 = (0.0f);
		(&V_0)->___WindSpeed_2 = (0.5f);
		WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23 L_1 = V_0;
		V_1 = L_1;
		goto IL_0047;
	}

IL_0047:
	{
		WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23 L_2 = V_1;
		return L_2;
	}
}
// VisualDesignCafe.Nature.WindSettings VisualDesignCafe.Nature.WindSettings::get_Calm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23 WindSettings_get_Calm_m69AD33EEED0088F6E7F67884E85F1C23CFFDB6BC (const RuntimeMethod* method) 
{
	WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_0), (0.699999988f), (0.300000012f), /*hidden argument*/NULL);
		(&V_0)->___WindDirection_0 = L_0;
		(&V_0)->___WindStrength_1 = (0.0500000007f);
		(&V_0)->___Turbulence_3 = (0.0500000007f);
		(&V_0)->___WindSpeed_2 = (0.5f);
		WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23 L_1 = V_0;
		V_1 = L_1;
		goto IL_0047;
	}

IL_0047:
	{
		WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23 L_2 = V_1;
		return L_2;
	}
}
// VisualDesignCafe.Nature.WindSettings VisualDesignCafe.Nature.WindSettings::get_Breeze()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23 WindSettings_get_Breeze_m537AB94E75D98ED0B00200BDA46FA11B4E0465E3 (const RuntimeMethod* method) 
{
	WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_0), (0.699999988f), (0.300000012f), /*hidden argument*/NULL);
		(&V_0)->___WindDirection_0 = L_0;
		(&V_0)->___WindStrength_1 = (0.200000003f);
		(&V_0)->___Turbulence_3 = (0.200000003f);
		(&V_0)->___WindSpeed_2 = (0.5f);
		WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23 L_1 = V_0;
		V_1 = L_1;
		goto IL_0047;
	}

IL_0047:
	{
		WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23 L_2 = V_1;
		return L_2;
	}
}
// VisualDesignCafe.Nature.WindSettings VisualDesignCafe.Nature.WindSettings::get_StrongBreeze()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23 WindSettings_get_StrongBreeze_m81B8406CCA227D1261CEC4A1CC25BCF518041E78 (const RuntimeMethod* method) 
{
	WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_0), (0.699999988f), (0.300000012f), /*hidden argument*/NULL);
		(&V_0)->___WindDirection_0 = L_0;
		(&V_0)->___WindStrength_1 = (0.5f);
		(&V_0)->___Turbulence_3 = (0.5f);
		(&V_0)->___WindSpeed_2 = (0.75f);
		WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23 L_1 = V_0;
		V_1 = L_1;
		goto IL_0047;
	}

IL_0047:
	{
		WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23 L_2 = V_1;
		return L_2;
	}
}
// VisualDesignCafe.Nature.WindSettings VisualDesignCafe.Nature.WindSettings::get_Storm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23 WindSettings_get_Storm_m788791DB6D38F4B4E9AA924D0135A83E6EC54CF9 (const RuntimeMethod* method) 
{
	WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_0), (0.699999988f), (0.300000012f), /*hidden argument*/NULL);
		(&V_0)->___WindDirection_0 = L_0;
		(&V_0)->___WindStrength_1 = (1.0f);
		(&V_0)->___Turbulence_3 = (1.0f);
		(&V_0)->___WindSpeed_2 = (1.0f);
		WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23 L_1 = V_0;
		V_1 = L_1;
		goto IL_0047;
	}

IL_0047:
	{
		WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23 L_2 = V_1;
		return L_2;
	}
}
// VisualDesignCafe.Nature.WindSettings VisualDesignCafe.Nature.WindSettings::FromWindZone(UnityEngine.WindZone)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23 WindSettings_FromWindZone_m50D8666521886AF2D62EDCFF697FC2E6D3BBB8B8 (WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* ___windZone0, const RuntimeMethod* method) 
{
	WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23));
		WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* L_0 = ___windZone0;
		NullCheck(L_0);
		float L_1;
		L_1 = WindZone_get_windMain_m49480166CDE759C98498B951148535FCCED788C0(L_0, NULL);
		(&V_0)->___WindStrength_1 = ((float)il2cpp_codegen_multiply(L_1, (0.200000003f)));
		WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* L_2 = ___windZone0;
		NullCheck(L_2);
		float L_3;
		L_3 = WindZone_get_windPulseFrequency_mE95A49751644837A6668834E41F76D66C7E8173C(L_2, NULL);
		(&V_0)->___WindSpeed_2 = L_3;
		WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* L_4 = ___windZone0;
		NullCheck(L_4);
		float L_5;
		L_5 = WindZone_get_windTurbulence_mB7D83DE60E30847971D13C6601C46F14839F8448(L_4, NULL);
		(&V_0)->___Turbulence_3 = ((float)il2cpp_codegen_multiply(L_5, (0.200000003f)));
		WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* L_6 = ___windZone0;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		NullCheck(L_7);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_7, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = WindSettings_RotationToDirection_mA32CA352C60056E7E5F8077E1EEA80FD7623194D(L_8, NULL);
		(&V_0)->___WindDirection_0 = L_9;
		WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23 L_10 = V_0;
		V_1 = L_10;
		goto IL_0057;
	}

IL_0057:
	{
		WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23 L_11 = V_1;
		return L_11;
	}
}
// UnityEngine.Vector2 VisualDesignCafe.Nature.WindSettings::RotationToDirection(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 WindSettings_RotationToDirection_mA32CA352C60056E7E5F8077E1EEA80FD7623194D (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___quaternion0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&___quaternion0), NULL);
		float L_1 = L_0.___y_3;
		V_0 = L_1;
		float L_2 = V_0;
		float L_3;
		L_3 = sinf(((float)il2cpp_codegen_multiply(L_2, (0.0174532924f))));
		float L_4 = V_0;
		float L_5;
		L_5 = cosf(((float)il2cpp_codegen_multiply(L_4, (0.0174532924f))));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), L_3, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline((&V_1), NULL);
		V_2 = L_7;
		goto IL_0036;
	}

IL_0036:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_2;
		return L_8;
	}
}
// System.Void VisualDesignCafe.Nature.WindSettings::.ctor(VisualDesignCafe.Nature.WindSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindSettings__ctor_mBF206FCEC8E85C28C2FD3E1D0F21C6B7C22C1B39 (WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23* __this, WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23 ___other0, const RuntimeMethod* method) 
{
	{
		WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23 L_0 = ___other0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = L_0.___WindDirection_0;
		__this->___WindDirection_0 = L_1;
		WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23 L_2 = ___other0;
		float L_3 = L_2.___WindStrength_1;
		__this->___WindStrength_1 = L_3;
		WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23 L_4 = ___other0;
		float L_5 = L_4.___WindSpeed_2;
		__this->___WindSpeed_2 = L_5;
		WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23 L_6 = ___other0;
		float L_7 = L_6.___Turbulence_3;
		__this->___Turbulence_3 = L_7;
		return;
	}
}
IL2CPP_EXTERN_C  void WindSettings__ctor_mBF206FCEC8E85C28C2FD3E1D0F21C6B7C22C1B39_AdjustorThunk (RuntimeObject* __this, WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23 ___other0, const RuntimeMethod* method)
{
	WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23*>(__this + _offset);
	WindSettings__ctor_mBF206FCEC8E85C28C2FD3E1D0F21C6B7C22C1B39(_thisAdjusted, ___other0, method);
}
// System.Void VisualDesignCafe.Nature.WindSettings::.ctor(UnityEngine.Vector2,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindSettings__ctor_mFB6BC567B9D2C4ABB99C4D7721F632ABC1FFF4C9 (WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___gustDirection0, float ___windStrength1, float ___windSpeed2, float ___turbulence3, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___gustDirection0;
		__this->___WindDirection_0 = L_0;
		float L_1 = ___windStrength1;
		__this->___WindStrength_1 = L_1;
		float L_2 = ___windSpeed2;
		__this->___WindSpeed_2 = L_2;
		float L_3 = ___turbulence3;
		__this->___Turbulence_3 = L_3;
		return;
	}
}
IL2CPP_EXTERN_C  void WindSettings__ctor_mFB6BC567B9D2C4ABB99C4D7721F632ABC1FFF4C9_AdjustorThunk (RuntimeObject* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___gustDirection0, float ___windStrength1, float ___windSpeed2, float ___turbulence3, const RuntimeMethod* method)
{
	WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23*>(__this + _offset);
	WindSettings__ctor_mFB6BC567B9D2C4ABB99C4D7721F632ABC1FFF4C9(_thisAdjusted, ___gustDirection0, ___windStrength1, ___windSpeed2, ___turbulence3, method);
}
// System.Void VisualDesignCafe.Nature.WindSettings::Apply(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindSettings_Apply_mD5A012EEEF00ECDB00B7ACB17E16BC97B6C5E5B4 (WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___gustNoise0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA496466597C70A1FE917BA917DE46D5EC4D27D60);
		s_Il2CppMethodInitialized = true;
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___gustNoise0;
		Shader_SetGlobalTexture_mABB6E994E67D083BEBE142B4CC8FA77137C2D021(_stringLiteralA496466597C70A1FE917BA917DE46D5EC4D27D60, L_0, NULL);
		WindSettings_Apply_m5FBA1B2E1C870A569ECB4824EF8B927D526DF999(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void WindSettings_Apply_mD5A012EEEF00ECDB00B7ACB17E16BC97B6C5E5B4_AdjustorThunk (RuntimeObject* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___gustNoise0, const RuntimeMethod* method)
{
	WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23*>(__this + _offset);
	WindSettings_Apply_mD5A012EEEF00ECDB00B7ACB17E16BC97B6C5E5B4(_thisAdjusted, ___gustNoise0, method);
}
// System.Void VisualDesignCafe.Nature.WindSettings::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindSettings_Apply_m5FBA1B2E1C870A569ECB4824EF8B927D526DF999 (WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62CC6027FA1391FFF8B9EF0B9E561A47788CDECD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80C0F12418C58117BC29610DAD12C94894D07EF9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE801F863AFB4ABA4E0557489F485673DC1B7ED);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = (&__this->___WindDirection_0);
		float L_1 = L_0->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = (&__this->___WindDirection_0);
		float L_3 = L_2->___y_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector4__ctor_mBE520C0BA6BB8F452B206BF1D9F4AAD1873CCA85_inline((&L_4), L_1, (0.0f), L_3, /*hidden argument*/NULL);
		Shader_SetGlobalVector_m885C9E39C787CA6F54E002C12E3D4280C353E438(_stringLiteral80C0F12418C58117BC29610DAD12C94894D07EF9, L_4, NULL);
		float L_5 = __this->___WindSpeed_2;
		float L_6 = __this->___WindStrength_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector4__ctor_m1FD55F67090B321AC9488CA325A72E454E6BCA37_inline((&L_7), L_5, L_6, /*hidden argument*/NULL);
		Shader_SetGlobalVector_m885C9E39C787CA6F54E002C12E3D4280C353E438(_stringLiteral62CC6027FA1391FFF8B9EF0B9E561A47788CDECD, L_7, NULL);
		float L_8 = __this->___WindSpeed_2;
		float L_9 = __this->___Turbulence_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector4__ctor_m1FD55F67090B321AC9488CA325A72E454E6BCA37_inline((&L_10), L_8, L_9, /*hidden argument*/NULL);
		Shader_SetGlobalVector_m885C9E39C787CA6F54E002C12E3D4280C353E438(_stringLiteral9CE801F863AFB4ABA4E0557489F485673DC1B7ED, L_10, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void WindSettings_Apply_m5FBA1B2E1C870A569ECB4824EF8B927D526DF999_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23*>(__this + _offset);
	WindSettings_Apply_m5FBA1B2E1C870A569ECB4824EF8B927D526DF999(_thisAdjusted, method);
}
// System.Void VisualDesignCafe.Nature.WindSettings::ApplyToWindZone(UnityEngine.WindZone)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindSettings_ApplyToWindZone_m13C01570FE6CB15E3F63C2477B0FAA34CB18329B (WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23* __this, WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* ___zone0, const RuntimeMethod* method) 
{
	{
		WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* L_0 = ___zone0;
		float L_1 = __this->___WindStrength_1;
		NullCheck(L_0);
		WindZone_set_windMain_mECB9DF2D5BAB9FD545891C3409B36CC57605F2DF(L_0, ((float)il2cpp_codegen_multiply(L_1, (5.0f))), NULL);
		WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* L_2 = ___zone0;
		float L_3 = __this->___WindSpeed_2;
		NullCheck(L_2);
		WindZone_set_windPulseFrequency_m389F653CF33A959B9CCF4998AA18D0E392FCE5BA(L_2, L_3, NULL);
		WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* L_4 = ___zone0;
		float L_5 = __this->___Turbulence_3;
		NullCheck(L_4);
		WindZone_set_windTurbulence_m61C6D929BE93A628E05A3C6C3557FF660D58231B(L_4, ((float)il2cpp_codegen_multiply(L_5, (5.0f))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void WindSettings_ApplyToWindZone_m13C01570FE6CB15E3F63C2477B0FAA34CB18329B_AdjustorThunk (RuntimeObject* __this, WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* ___zone0, const RuntimeMethod* method)
{
	WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WindSettings_t58ED442727C5AF1CD21334CE3FFBBE3D19E2CA23*>(__this + _offset);
	WindSettings_ApplyToWindZone_m13C01570FE6CB15E3F63C2477B0FAA34CB18329B(_thisAdjusted, ___zone0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VisualDesignCafe.Nature.Overlay.NatureOverlay::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureOverlay__ctor_mE387C379783C03A8D5BFC66390A49F3F18220D36 (NatureOverlay_t1E132A12D5EDFD2A92ED7681ECEF050DF4D7BF41* __this, const RuntimeMethod* method) 
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
// System.Void VisualDesignCafe.Nature.Interaction.NatureCollider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureCollider__ctor_mAE0BFCD019AF51D6E24A4E23B096D733143AA887 (NatureCollider_tB243C426E635A8BE6CD0B7B8A2AEE5792A0DC0F5* __this, const RuntimeMethod* method) 
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
// System.Void VisualDesignCafe.Nature.Interaction.ResourceManager::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager_Destroy_m9390C0526798F91150485A069CA1D30ABECE33ED (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m60F1F5D817C83DDC11235FD5524B8667F4C314F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceManager_tB1AFFD87A43E76F35445AA8C5C592BBC56CDF590_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0;
		L_0 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2 = ___obj0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_2, NULL);
		goto IL_001f;
	}

IL_0013:
	{
		il2cpp_codegen_runtime_class_init_inline(ResourceManager_tB1AFFD87A43E76F35445AA8C5C592BBC56CDF590_il2cpp_TypeInfo_var);
		List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* L_3 = ((ResourceManager_tB1AFFD87A43E76F35445AA8C5C592BBC56CDF590_StaticFields*)il2cpp_codegen_static_fields_for(ResourceManager_tB1AFFD87A43E76F35445AA8C5C592BBC56CDF590_il2cpp_TypeInfo_var))->____objectsToDestroy_0;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_4 = ___obj0;
		NullCheck(L_3);
		List_1_Add_m60F1F5D817C83DDC11235FD5524B8667F4C314F9_inline(L_3, L_4, List_1_Add_m60F1F5D817C83DDC11235FD5524B8667F4C314F9_RuntimeMethod_var);
	}

IL_001f:
	{
		return;
	}
}
// System.Void VisualDesignCafe.Nature.Interaction.ResourceManager::DestroyPending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager_DestroyPending_mA40123DF52D0A0AB10A928F18942D639EE78A6FC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mAEB2333688211862F3BF025DED14A07DF2AB6862_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m3056C0403652CA8364963A1CDE5D5EACF19CB5B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m0CEFF9A8B2B0E57C5DDBA1134553DEBC37719CED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m51249A9DD3B29478801AC004DEA026A63D4A6D9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA6D8F51281EF3C4183058B42C1930E0E885543EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceManager_tB1AFFD87A43E76F35445AA8C5C592BBC56CDF590_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tE4F8BFD8BC4B29A1F907A500BE1A39F6AEECF80E V_0;
	memset((&V_0), 0, sizeof(V_0));
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	bool V_2 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(ResourceManager_tB1AFFD87A43E76F35445AA8C5C592BBC56CDF590_il2cpp_TypeInfo_var);
		List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* L_0 = ((ResourceManager_tB1AFFD87A43E76F35445AA8C5C592BBC56CDF590_StaticFields*)il2cpp_codegen_static_fields_for(ResourceManager_tB1AFFD87A43E76F35445AA8C5C592BBC56CDF590_il2cpp_TypeInfo_var))->____objectsToDestroy_0;
		NullCheck(L_0);
		Enumerator_tE4F8BFD8BC4B29A1F907A500BE1A39F6AEECF80E L_1;
		L_1 = List_1_GetEnumerator_mA6D8F51281EF3C4183058B42C1930E0E885543EF(L_0, List_1_GetEnumerator_mA6D8F51281EF3C4183058B42C1930E0E885543EF_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0034:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mAEB2333688211862F3BF025DED14A07DF2AB6862((&V_0), Enumerator_Dispose_mAEB2333688211862F3BF025DED14A07DF2AB6862_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0029_1;
			}

IL_000f_1:
			{
				Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2;
				L_2 = Enumerator_get_Current_m0CEFF9A8B2B0E57C5DDBA1134553DEBC37719CED_inline((&V_0), Enumerator_get_Current_m0CEFF9A8B2B0E57C5DDBA1134553DEBC37719CED_RuntimeMethod_var);
				V_1 = L_2;
				Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_3 = V_1;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_4;
				L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				V_2 = L_4;
				bool L_5 = V_2;
				if (!L_5)
				{
					goto IL_0029_1;
				}
			}
			{
				Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_6 = V_1;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_6, NULL);
			}

IL_0029_1:
			{
				bool L_7;
				L_7 = Enumerator_MoveNext_m3056C0403652CA8364963A1CDE5D5EACF19CB5B8((&V_0), Enumerator_MoveNext_m3056C0403652CA8364963A1CDE5D5EACF19CB5B8_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_000f_1;
				}
			}
			{
				goto IL_0043;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0043:
	{
		il2cpp_codegen_runtime_class_init_inline(ResourceManager_tB1AFFD87A43E76F35445AA8C5C592BBC56CDF590_il2cpp_TypeInfo_var);
		List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* L_8 = ((ResourceManager_tB1AFFD87A43E76F35445AA8C5C592BBC56CDF590_StaticFields*)il2cpp_codegen_static_fields_for(ResourceManager_tB1AFFD87A43E76F35445AA8C5C592BBC56CDF590_il2cpp_TypeInfo_var))->____objectsToDestroy_0;
		NullCheck(L_8);
		List_1_Clear_m51249A9DD3B29478801AC004DEA026A63D4A6D9B_inline(L_8, List_1_Clear_m51249A9DD3B29478801AC004DEA026A63D4A6D9B_RuntimeMethod_var);
		return;
	}
}
// System.Void VisualDesignCafe.Nature.Interaction.ResourceManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager__ctor_m939C5CD29B1B1674A669152911A3929F18E30F4C (ResourceManager_tB1AFFD87A43E76F35445AA8C5C592BBC56CDF590* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void VisualDesignCafe.Nature.Interaction.ResourceManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager__cctor_mCD3FFBE01929F7EF4383EF1B060166CCC476D7FB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1B0135DE2C4A4BCA4820D2FC9E060ED224FC24C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceManager_tB1AFFD87A43E76F35445AA8C5C592BBC56CDF590_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* L_0 = (List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3*)il2cpp_codegen_object_new(List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m1B0135DE2C4A4BCA4820D2FC9E060ED224FC24C0(L_0, List_1__ctor_m1B0135DE2C4A4BCA4820D2FC9E060ED224FC24C0_RuntimeMethod_var);
		((ResourceManager_tB1AFFD87A43E76F35445AA8C5C592BBC56CDF590_StaticFields*)il2cpp_codegen_static_fields_for(ResourceManager_tB1AFFD87A43E76F35445AA8C5C592BBC56CDF590_il2cpp_TypeInfo_var))->____objectsToDestroy_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ResourceManager_tB1AFFD87A43E76F35445AA8C5C592BBC56CDF590_StaticFields*)il2cpp_codegen_static_fields_for(ResourceManager_tB1AFFD87A43E76F35445AA8C5C592BBC56CDF590_il2cpp_TypeInfo_var))->____objectsToDestroy_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GlobalWind_set_Instance_mB042DD4A9A7DD114113B30F9E885B7D7621AB188_inline (GlobalWind_tF5FCFBD4CBCAF95A274AE76E9919815030D57B39* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalWind_tF5FCFBD4CBCAF95A274AE76E9919815030D57B39_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GlobalWind_tF5FCFBD4CBCAF95A274AE76E9919815030D57B39* L_0 = ___value0;
		((GlobalWind_tF5FCFBD4CBCAF95A274AE76E9919815030D57B39_StaticFields*)il2cpp_codegen_static_fields_for(GlobalWind_tF5FCFBD4CBCAF95A274AE76E9919815030D57B39_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((GlobalWind_tF5FCFBD4CBCAF95A274AE76E9919815030D57B39_StaticFields*)il2cpp_codegen_static_fields_for(GlobalWind_tF5FCFBD4CBCAF95A274AE76E9919815030D57B39_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Inequality_mC1922F160B14F6F404E46FFCC10B282D913BE354_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___rhs1;
		bool L_2;
		L_2 = Quaternion_op_Equality_m3DF1D708D3A0AFB11EACF42A9C068EF6DC508FBB_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Equality_m3DF1D708D3A0AFB11EACF42A9C068EF6DC508FBB_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___rhs1;
		float L_2;
		L_2 = Quaternion_Dot_m4A80D03D7B7DEC054E2175E53D072675649C6713_inline(L_0, L_1, NULL);
		bool L_3;
		L_3 = Quaternion_IsEqualUsingDot_m5C6AC5F5C56B27C25DDF612BEEF40F28CA44CA31_inline(L_2, NULL);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector4_op_Implicit_m2D6D6CC60982A88F7B77B5D0452F1E1652C412A2_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___v0;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___v0;
		float L_3 = L_2.___y_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_m6162D8136CFE97A5A8BD3B764F9074DB96AA5CD0_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_4), L_1, L_3, (0.0f), (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001f;
	}

IL_001f:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector4_op_Implicit_m2EC16C74D768EEAA9BBC40DA11337F912014FC57_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___v0;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___v0;
		float L_3 = L_2.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___v0;
		float L_5 = L_4.___z_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), L_1, L_3, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Logger_get_Debug_m4821830C62DAD7C94D5B9B72E7F94C09BA11E72E_inline (Logger_t4DF9EAAB640217BD20B383B66F93562AF54782E4* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CDebugU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Logger_set_Debug_mEDD96EF8C2219B8FAE6415D40598DBE461CEC9D8_inline (Logger_t4DF9EAAB640217BD20B383B66F93562AF54782E4* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CDebugU3Ek__BackingField_0 = L_0;
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NotificationBox_get_IsSceneView_m1E3F5B2CE472B6019C45D6CE006880823F3D933A_inline (NotificationBox_tFE81187F23AA2E251B93B075E0CD9D27A644A73A* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsSceneViewU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float NotificationBox_get_MarginBottom_m748B66708EEE2F0A14809C5F3E991750AA2DF6BC_inline (NotificationBox_tFE81187F23AA2E251B93B075E0CD9D27A644A73A* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___U3CMarginBottomU3Ek__BackingField_1;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InteractionQuality_get_Enabled_m273B99E3E77766F62B4AFAE5145C54B2EB55E3EE_inline (InteractionQuality_t2FF0E0485560DCDA3D579E9951D66B6BE0691D9C* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CEnabledU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GraphicsQuality_get_MaterialQuality_mADB53532DD514A94E15E6B817238779B3471EB6E_inline (GraphicsQuality_tEC77150663125A38E81AF2C977C22DAACD11ADC2* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CMaterialQualityU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool OverlayQuality_get_Enabled_m4A5E1020366FDB43ED2DBA4939015B15FE5BAD8E_inline (OverlayQuality_t85B45D8ED6E1BF50B54DF1A90A14F384C695DA56* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CEnabledU3Ek__BackingField_2;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m9B2C77284AEE6F2C43B6C42F1F888FB4FC904462(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m864320DA2D027C186C95B2A5BC2C66B0EB4A6C11(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_0, L_1, NULL);
		Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = V_0;
		V_1 = L_2;
		goto IL_0020;
	}

IL_0020:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_1;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_mBE520C0BA6BB8F452B206BF1D9F4AAD1873CCA85_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_1 = L_0;
		float L_1 = ___y1;
		__this->___y_2 = L_1;
		float L_2 = ___z2;
		__this->___z_3 = L_2;
		__this->___w_4 = (0.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m1FD55F67090B321AC9488CA325A72E454E6BCA37_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_1 = L_0;
		float L_1 = ___y1;
		__this->___y_2 = L_1;
		__this->___z_3 = (0.0f);
		__this->___w_4 = (0.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_m4A80D03D7B7DEC054E2175E53D072675649C6713_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___a0;
		float L_9 = L_8.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___b1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___a0;
		float L_13 = L_12.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___b1;
		float L_15 = L_14.___w_3;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15))));
		goto IL_003b;
	}

IL_003b:
	{
		float L_16 = V_0;
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_m5C6AC5F5C56B27C25DDF612BEEF40F28CA44CA31_inline (float ___dot0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		float L_0 = ___dot0;
		V_0 = (bool)((((float)L_0) > ((float)(0.999998987f)))? 1 : 0);
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		float L_0;
		L_0 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(__this, NULL);
		V_0 = L_0;
		float L_1 = V_0;
		V_1 = (bool)((((float)L_1) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this);
		float L_4 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline(L_3, L_4, NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_5;
		goto IL_0033;
	}

IL_0028:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_6;
	}

IL_0033:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)(L_1/L_2)), ((float)(L_4/L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
