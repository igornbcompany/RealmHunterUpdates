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

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<RenderHeads.Media.AVProMovieCapture.FileWritingHandler>
struct Action_1_t0F662C44DABB9C04CC1EEF3C68ACC88349244505;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F;
// System.Collections.Generic.List`1<RenderHeads.Media.AVProMovieCapture.FileWritingHandler>
struct List_1_t5249CBB408A0B19433CB2FDF7B56113C1F34E530;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// UnityEngine.Camera[]
struct CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// RenderHeads.Media.AVProMovieCapture.FileWritingHandler[]
struct FileWritingHandlerU5BU5D_t38E3575404203F822D34FC4873AC3D3EBAA46851;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Resolution[]
struct ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// UnityEngine.WebCamDevice[]
struct WebCamDeviceU5BU5D_tA5B1352BDE6FE233B66C3ABF96E00EB3215629F5;
// RenderHeads.Media.AVProMovieCapture.Demos.WebcamCaptureDemo/Instance[]
struct InstanceU5BU5D_tB5C15354627E88FE454CB01D8D6601A138AD8B35;
// RenderHeads.Media.AVProMovieCapture.Demos.AmbisonicAudioDemo
struct AmbisonicAudioDemo_tEA7E9C8274964CBA1BA9486FEAC41294B07AE2C0;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// RenderHeads.Media.AVProMovieCapture.CaptureBase
struct CaptureBase_t2607C47ED8359FDEAC49AB637D4BD5F48F2CA26D;
// RenderHeads.Media.AVProMovieCapture.CaptureFromTexture
struct CaptureFromTexture_t0C3BE946CB6E84ACF24D9998B009E007740BA5D2;
// RenderHeads.Media.AVProMovieCapture.CaptureFromWebCamTexture
struct CaptureFromWebCamTexture_t525D72022DA921320BDCDA434967582CFFC1913A;
// RenderHeads.Media.AVProMovieCapture.CaptureGUI
struct CaptureGUI_t4BD3D37209E44BDE2731E0ADC390D8BC56532BF3;
// RenderHeads.Media.AVProMovieCapture.CaptureStats
struct CaptureStats_t5DC4444931DAE81C5F25D9DC0D7DDCE9D3C48FC0;
// RenderHeads.Media.AVProMovieCapture.Codec
struct Codec_t5B18D0EB85F882306BEB0BD1068871455A8A9FD1;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// RenderHeads.Media.AVProMovieCapture.Device
struct Device_t7EAAEBAB812E709E010E21A018A24D24F912C94D;
// RenderHeads.Media.AVProMovieCapture.EncoderHints
struct EncoderHints_t2C3E7156B7E28652AA3E485C7B0AEECC2E34B3A8;
// System.IO.FileInfo
struct FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C;
// RenderHeads.Media.AVProMovieCapture.FileWritingHandler
struct FileWritingHandler_tE89A30B4C2545943B94F9C5A2E02E9CF2937FA74;
// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14;
// UnityEngine.GUISettings
struct GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847;
// UnityEngine.GUISkin
struct GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9;
// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// RenderHeads.Media.AVProMovieCapture.MotionBlur
struct MotionBlur_t5688196760D7AFA119BAFF86663059AB25E3CD05;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// RenderHeads.Media.AVProMovieCapture.Demos.ScreenCaptureDemo
struct ScreenCaptureDemo_t7F6399781CBC95A17FC78A409454EC9C3F7993C0;
// RenderHeads.Media.AVProMovieCapture.Demos.ScriptCaptureDemo
struct ScriptCaptureDemo_t6A7B4F2D5BEF58E978B2B91C3B0A7E654AD1280E;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// System.String
struct String_t;
// RenderHeads.Media.AVProMovieCapture.Demos.SurroundCaptureDemo
struct SurroundCaptureDemo_tEF7586B514D759430F857A0F204C0FE859E3C4B7;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// RenderHeads.Media.AVProMovieCapture.Demos.TextureCaptureDemo
struct TextureCaptureDemo_t8FB0B1D1A285833D28FE8459509CADE103126ADB;
// RenderHeads.Media.AVProMovieCapture.TimelineController
struct TimelineController_tE267FEEEFDD8D3BAFCB98978E989FB553231E9BF;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// RenderHeads.Media.AVProMovieCapture.UnityAudioCapture
struct UnityAudioCapture_t296E2C5488EF68ECA60158E3852D846772C5010A;
// RenderHeads.Media.AVProMovieCapture.VideoEncoderHints
struct VideoEncoderHints_tC37F228E65505C6DE8CA5866F681943F61B914E0;
// RenderHeads.Media.AVProMovieCapture.VideoPlayerController
struct VideoPlayerController_tFE3CFD6A98D6B0068C20506A5D0A2DDF6B7A730E;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.WebCamTexture
struct WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749;
// RenderHeads.Media.AVProMovieCapture.Demos.WebcamCaptureDemo
struct WebcamCaptureDemo_t86B716D0EB5CD8F4DA28BF88D59D2576FA2499D9;
// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.GUISkin/SkinChangedDelegate
struct SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98;
// RenderHeads.Media.AVProMovieCapture.Demos.ScreenCaptureDemo/<Start>d__8
struct U3CStartU3Ed__8_t637F17609C889C0DE2B1E61CD58DA75EC4E2B790;
// RenderHeads.Media.AVProMovieCapture.Demos.SurroundCaptureDemo/<KillCube>d__10
struct U3CKillCubeU3Ed__10_tB186C73D645377CCA71BB6B0D9CED6ADF1C808B9;
// RenderHeads.Media.AVProMovieCapture.Demos.WebcamCaptureDemo/<Start>d__8
struct U3CStartU3Ed__8_t129049BF6EB694C1463C8F441BFE52C23D1E3F58;
// RenderHeads.Media.AVProMovieCapture.Demos.WebcamCaptureDemo/Instance
struct Instance_t1B5CF60907DEE4026BAC889B9A6CA8B98A29135B;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t0F662C44DABB9C04CC1EEF3C68ACC88349244505_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CodecManager_t325A927E25AA3EBA4354F51BC876421015138284_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InstanceU5BU5D_tB5C15354627E88FE454CB01D8D6601A138AD8B35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Instance_t1B5CF60907DEE4026BAC889B9A6CA8B98A29135B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t5249CBB408A0B19433CB2FDF7B56113C1F34E530_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativePlugin_t1E0FA2D9F22D8AB20E5E933EF695B307CA85FA0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CKillCubeU3Ed__10_tB186C73D645377CCA71BB6B0D9CED6ADF1C808B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartU3Ed__8_t129049BF6EB694C1463C8F441BFE52C23D1E3F58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartU3Ed__8_t637F17609C889C0DE2B1E61CD58DA75EC4E2B790_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0985A1EBC1BDF4F7AA2CCCA86E0218E4EBDFF032;
IL2CPP_EXTERN_C String_t* _stringLiteral1B9482E5DE789E9FEEE800E443EBC576C3CE46EA;
IL2CPP_EXTERN_C String_t* _stringLiteral2E920B77007F6A0248CE38E4BC265149940D9E1F;
IL2CPP_EXTERN_C String_t* _stringLiteral5CB4078F5FCC736B51D737E0D8C8629F6379DF86;
IL2CPP_EXTERN_C String_t* _stringLiteral9CE11C6AF008F73AAE7D90F6E72278287941D053;
IL2CPP_EXTERN_C String_t* _stringLiteralAC5D522344E318147335684D20896995AE5743DE;
IL2CPP_EXTERN_C String_t* _stringLiteralBC2DC76BB597B323163591EE8157694A8FFC41CE;
IL2CPP_EXTERN_C String_t* _stringLiteralCB989E320B83DC0FA9C57C085D286D8C61B1AD06;
IL2CPP_EXTERN_C String_t* _stringLiteralFED6A18BDAAD9D7FAEE6AD54E6607CB8D5FB0F82;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mC5E7355DB1245283172909C09FD4BF4CD338F588_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mBC9522AF36E9265CFBBDA6AC47BB6D31C4F04AA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB3891BF47A79CF2A5017187409207EEEBF5B4686_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCaptureFromWebCamTexture_t525D72022DA921320BDCDA434967582CFFC1913A_mF182986E3F7793C10A55F6976F6B19D0C7547471_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCaptureGUI_t4BD3D37209E44BDE2731E0ADC390D8BC56532BF3_m81666B1464B54456766D532F75D06B6C0FE35107_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m2F215CF8483D53368BB97348A2E1395537C43403_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m383AC19C149D9DAFFFE1F1C178DEE4FF0BD907F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6DD2E528B694E1BF27A34AD5D41DA106FF82743C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDF71A398879F91A3E18B2928202CEDBF991CF36D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m1822C7DC5EEAD63F7011AB37E1548B4097F1D9CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScreenCaptureDemo_OnBeginFinalFileWriting_m38D35F2405D3F66DE5FBE1908D2EB66E68BA443D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CKillCubeU3Ed__10_System_Collections_IEnumerator_Reset_mE09426D0DB13836EC7B36568363077D7430FE789_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ed__8_System_Collections_IEnumerator_Reset_m9862F22C8C53C5DCB8EA0B031EC6E6B5EF302C6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ed__8_System_Collections_IEnumerator_Reset_mDD173F964249D06A11A4F983CB34862C18842C49_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525;

struct AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
struct WebCamDeviceU5BU5D_tA5B1352BDE6FE233B66C3ABF96E00EB3215629F5;
struct InstanceU5BU5D_tB5C15354627E88FE454CB01D8D6601A138AD8B35;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tE77FEB0AEBEFF20F590EF5A4C890660068F64560 
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

// System.Collections.Generic.List`1<RenderHeads.Media.AVProMovieCapture.FileWritingHandler>
struct List_1_t5249CBB408A0B19433CB2FDF7B56113C1F34E530  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	FileWritingHandlerU5BU5D_t38E3575404203F822D34FC4873AC3D3EBAA46851* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t5249CBB408A0B19433CB2FDF7B56113C1F34E530_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	FileWritingHandlerU5BU5D_t38E3575404203F822D34FC4873AC3D3EBAA46851* ___s_emptyArray_5;
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
struct Il2CppArrayBounds;

// RenderHeads.Media.AVProMovieCapture.Codec
struct Codec_t5B18D0EB85F882306BEB0BD1068871455A8A9FD1  : public RuntimeObject
{
	// RenderHeads.Media.AVProMovieCapture.CodecType RenderHeads.Media.AVProMovieCapture.Codec::_codecType
	int32_t ____codecType_0;
	// System.Int32 RenderHeads.Media.AVProMovieCapture.Codec::_index
	int32_t ____index_1;
	// System.String RenderHeads.Media.AVProMovieCapture.Codec::_name
	String_t* ____name_2;
	// System.Boolean RenderHeads.Media.AVProMovieCapture.Codec::_hasConfigWindow
	bool ____hasConfigWindow_3;
	// RenderHeads.Media.AVProMovieCapture.MediaApi RenderHeads.Media.AVProMovieCapture.Codec::_api
	int32_t ____api_4;
};

// UnityEngine.GUILayoutOption
struct GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14  : public RuntimeObject
{
	// UnityEngine.GUILayoutOption/Type UnityEngine.GUILayoutOption::type
	int32_t ___type_0;
	// System.Object UnityEngine.GUILayoutOption::value
	RuntimeObject* ___value_1;
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

// RenderHeads.Media.AVProMovieCapture.VideoEncoderHints
#pragma pack(push, tp, 1)
struct VideoEncoderHints_tC37F228E65505C6DE8CA5866F681943F61B914E0  : public RuntimeObject
{
	// System.UInt32 RenderHeads.Media.AVProMovieCapture.VideoEncoderHints::averageBitrate
	uint32_t ___averageBitrate_0;
	// System.UInt32 RenderHeads.Media.AVProMovieCapture.VideoEncoderHints::maximumBitrate
	uint32_t ___maximumBitrate_1;
	// System.Single RenderHeads.Media.AVProMovieCapture.VideoEncoderHints::quality
	float ___quality_2;
	// System.UInt32 RenderHeads.Media.AVProMovieCapture.VideoEncoderHints::keyframeInterval
	uint32_t ___keyframeInterval_3;
	// System.Boolean RenderHeads.Media.AVProMovieCapture.VideoEncoderHints::allowFastStartStreamingPostProcess
	bool ___allowFastStartStreamingPostProcess_4;
	// System.Boolean RenderHeads.Media.AVProMovieCapture.VideoEncoderHints::supportTransparency
	bool ___supportTransparency_5;
	// System.Boolean RenderHeads.Media.AVProMovieCapture.VideoEncoderHints::useHardwareEncoding
	bool ___useHardwareEncoding_6;
	// RenderHeads.Media.AVProMovieCapture.NoneAutoCustom RenderHeads.Media.AVProMovieCapture.VideoEncoderHints::injectStereoPacking
	int32_t ___injectStereoPacking_7;
	// RenderHeads.Media.AVProMovieCapture.StereoPacking RenderHeads.Media.AVProMovieCapture.VideoEncoderHints::stereoPacking
	int32_t ___stereoPacking_8;
	// RenderHeads.Media.AVProMovieCapture.NoneAutoCustom RenderHeads.Media.AVProMovieCapture.VideoEncoderHints::injectSphericalVideoLayout
	int32_t ___injectSphericalVideoLayout_9;
	// RenderHeads.Media.AVProMovieCapture.SphericalVideoLayout RenderHeads.Media.AVProMovieCapture.VideoEncoderHints::sphericalVideoLayout
	int32_t ___sphericalVideoLayout_10;
};
#pragma pack(pop, tp)
// Native definition for P/Invoke marshalling of RenderHeads.Media.AVProMovieCapture.VideoEncoderHints
#pragma pack(push, tp, 1)
struct VideoEncoderHints_tC37F228E65505C6DE8CA5866F681943F61B914E0_marshaled_pinvoke
{
	uint32_t ___averageBitrate_0;
	uint32_t ___maximumBitrate_1;
	float ___quality_2;
	uint32_t ___keyframeInterval_3;
	uint8_t ___allowFastStartStreamingPostProcess_4;
	uint8_t ___supportTransparency_5;
	uint8_t ___useHardwareEncoding_6;
	int32_t ___injectStereoPacking_7;
	int32_t ___stereoPacking_8;
	int32_t ___injectSphericalVideoLayout_9;
	int32_t ___sphericalVideoLayout_10;
};
#pragma pack(pop, tp)
// Native definition for COM marshalling of RenderHeads.Media.AVProMovieCapture.VideoEncoderHints
#pragma pack(push, tp, 1)
struct VideoEncoderHints_tC37F228E65505C6DE8CA5866F681943F61B914E0_marshaled_com
{
	uint32_t ___averageBitrate_0;
	uint32_t ___maximumBitrate_1;
	float ___quality_2;
	uint32_t ___keyframeInterval_3;
	uint8_t ___allowFastStartStreamingPostProcess_4;
	uint8_t ___supportTransparency_5;
	uint8_t ___useHardwareEncoding_6;
	int32_t ___injectStereoPacking_7;
	int32_t ___stereoPacking_8;
	int32_t ___injectSphericalVideoLayout_9;
	int32_t ___sphericalVideoLayout_10;
};
#pragma pack(pop, tp)

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

// RenderHeads.Media.AVProMovieCapture.Demos.ScreenCaptureDemo/<Start>d__8
struct U3CStartU3Ed__8_t637F17609C889C0DE2B1E61CD58DA75EC4E2B790  : public RuntimeObject
{
	// System.Int32 RenderHeads.Media.AVProMovieCapture.Demos.ScreenCaptureDemo/<Start>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object RenderHeads.Media.AVProMovieCapture.Demos.ScreenCaptureDemo/<Start>d__8::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// RenderHeads.Media.AVProMovieCapture.Demos.ScreenCaptureDemo RenderHeads.Media.AVProMovieCapture.Demos.ScreenCaptureDemo/<Start>d__8::<>4__this
	ScreenCaptureDemo_t7F6399781CBC95A17FC78A409454EC9C3F7993C0* ___U3CU3E4__this_2;
};

// RenderHeads.Media.AVProMovieCapture.Demos.SurroundCaptureDemo/<KillCube>d__10
struct U3CKillCubeU3Ed__10_tB186C73D645377CCA71BB6B0D9CED6ADF1C808B9  : public RuntimeObject
{
	// System.Int32 RenderHeads.Media.AVProMovieCapture.Demos.SurroundCaptureDemo/<KillCube>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object RenderHeads.Media.AVProMovieCapture.Demos.SurroundCaptureDemo/<KillCube>d__10::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.GameObject RenderHeads.Media.AVProMovieCapture.Demos.SurroundCaptureDemo/<KillCube>d__10::go
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go_2;
};

// RenderHeads.Media.AVProMovieCapture.Demos.WebcamCaptureDemo/<Start>d__8
struct U3CStartU3Ed__8_t129049BF6EB694C1463C8F441BFE52C23D1E3F58  : public RuntimeObject
{
	// System.Int32 RenderHeads.Media.AVProMovieCapture.Demos.WebcamCaptureDemo/<Start>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object RenderHeads.Media.AVProMovieCapture.Demos.WebcamCaptureDemo/<Start>d__8::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// RenderHeads.Media.AVProMovieCapture.Demos.WebcamCaptureDemo RenderHeads.Media.AVProMovieCapture.Demos.WebcamCaptureDemo/<Start>d__8::<>4__this
	WebcamCaptureDemo_t86B716D0EB5CD8F4DA28BF88D59D2576FA2499D9* ___U3CU3E4__this_2;
};

// RenderHeads.Media.AVProMovieCapture.Demos.WebcamCaptureDemo/Instance
struct Instance_t1B5CF60907DEE4026BAC889B9A6CA8B98A29135B  : public RuntimeObject
{
	// System.String RenderHeads.Media.AVProMovieCapture.Demos.WebcamCaptureDemo/Instance::name
	String_t* ___name_0;
	// UnityEngine.WebCamTexture RenderHeads.Media.AVProMovieCapture.Demos.WebcamCaptureDemo/Instance::texture
	WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* ___texture_1;
	// RenderHeads.Media.AVProMovieCapture.CaptureFromWebCamTexture RenderHeads.Media.AVProMovieCapture.Demos.WebcamCaptureDemo/Instance::capture
	CaptureFromWebCamTexture_t525D72022DA921320BDCDA434967582CFFC1913A* ___capture_2;
	// RenderHeads.Media.AVProMovieCapture.CaptureGUI RenderHeads.Media.AVProMovieCapture.Demos.WebcamCaptureDemo/Instance::gui
	CaptureGUI_t4BD3D37209E44BDE2731E0ADC390D8BC56532BF3* ___gui_3;
};

// System.Collections.Generic.List`1/Enumerator<RenderHeads.Media.AVProMovieCapture.FileWritingHandler>
struct Enumerator_t6B44FB01A89CB1188659B9C4D818F4A3E3079743 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t5249CBB408A0B19433CB2FDF7B56113C1F34E530* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	FileWritingHandler_tE89A30B4C2545943B94F9C5A2E02E9CF2937FA74* ____current_3;
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.WebCamDevice
struct WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C 
{
	// System.String UnityEngine.WebCamDevice::m_Name
	String_t* ___m_Name_0;
	// System.String UnityEngine.WebCamDevice::m_DepthCameraName
	String_t* ___m_DepthCameraName_1;
	// System.Int32 UnityEngine.WebCamDevice::m_Flags
	int32_t ___m_Flags_2;
	// UnityEngine.WebCamKind UnityEngine.WebCamDevice::m_Kind
	int32_t ___m_Kind_3;
	// UnityEngine.Resolution[] UnityEngine.WebCamDevice::m_Resolutions
	ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A* ___m_Resolutions_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.WebCamDevice
struct WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_marshaled_pinvoke
{
	char* ___m_Name_0;
	char* ___m_DepthCameraName_1;
	int32_t ___m_Flags_2;
	int32_t ___m_Kind_3;
	Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525* ___m_Resolutions_4;
};
// Native definition for COM marshalling of UnityEngine.WebCamDevice
struct WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_marshaled_com
{
	Il2CppChar* ___m_Name_0;
	Il2CppChar* ___m_DepthCameraName_1;
	int32_t ___m_Flags_2;
	int32_t ___m_Kind_3;
	Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525* ___m_Resolutions_4;
};

// RenderHeads.Media.AVProMovieCapture.Demos.AmbisonicAudioDemo/Instance
struct Instance_tB0B9AFE02918B851B5E31586F2FA0FFE9544C5B1 
{
	// System.Single RenderHeads.Media.AVProMovieCapture.Demos.AmbisonicAudioDemo/Instance::x
	float ___x_0;
	// System.Single RenderHeads.Media.AVProMovieCapture.Demos.AmbisonicAudioDemo/Instance::y
	float ___y_1;
	// System.Single RenderHeads.Media.AVProMovieCapture.Demos.AmbisonicAudioDemo/Instance::z
	float ___z_2;
	// System.Single RenderHeads.Media.AVProMovieCapture.Demos.AmbisonicAudioDemo/Instance::radius
	float ___radius_3;
};

// RenderHeads.Media.AVProMovieCapture.MP4FileProcessing/Options
struct Options_t3C457D0A71C21C9A6BA24DBE7F0B1717994A5767 
{
	// System.Boolean RenderHeads.Media.AVProMovieCapture.MP4FileProcessing/Options::applyFastStart
	bool ___applyFastStart_0;
	// System.Boolean RenderHeads.Media.AVProMovieCapture.MP4FileProcessing/Options::applyStereoMode
	bool ___applyStereoMode_1;
	// RenderHeads.Media.AVProMovieCapture.StereoPacking RenderHeads.Media.AVProMovieCapture.MP4FileProcessing/Options::stereoMode
	int32_t ___stereoMode_2;
	// System.Boolean RenderHeads.Media.AVProMovieCapture.MP4FileProcessing/Options::applySphericalVideoLayout
	bool ___applySphericalVideoLayout_3;
	// RenderHeads.Media.AVProMovieCapture.SphericalVideoLayout RenderHeads.Media.AVProMovieCapture.MP4FileProcessing/Options::sphericalVideoLayout
	int32_t ___sphericalVideoLayout_4;
};
// Native definition for P/Invoke marshalling of RenderHeads.Media.AVProMovieCapture.MP4FileProcessing/Options
struct Options_t3C457D0A71C21C9A6BA24DBE7F0B1717994A5767_marshaled_pinvoke
{
	int32_t ___applyFastStart_0;
	int32_t ___applyStereoMode_1;
	int32_t ___stereoMode_2;
	int32_t ___applySphericalVideoLayout_3;
	int32_t ___sphericalVideoLayout_4;
};
// Native definition for COM marshalling of RenderHeads.Media.AVProMovieCapture.MP4FileProcessing/Options
struct Options_t3C457D0A71C21C9A6BA24DBE7F0B1717994A5767_marshaled_com
{
	int32_t ___applyFastStart_0;
	int32_t ___applyStereoMode_1;
	int32_t ___stereoMode_2;
	int32_t ___applySphericalVideoLayout_3;
	int32_t ___sphericalVideoLayout_4;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
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

// RenderHeads.Media.AVProMovieCapture.FileWritingHandler
struct FileWritingHandler_tE89A30B4C2545943B94F9C5A2E02E9CF2937FA74  : public RuntimeObject
{
	// System.String RenderHeads.Media.AVProMovieCapture.FileWritingHandler::_path
	String_t* ____path_0;
	// System.Int32 RenderHeads.Media.AVProMovieCapture.FileWritingHandler::_handle
	int32_t ____handle_1;
	// System.Boolean RenderHeads.Media.AVProMovieCapture.FileWritingHandler::_deleteFile
	bool ____deleteFile_2;
	// RenderHeads.Media.AVProMovieCapture.OutputTarget RenderHeads.Media.AVProMovieCapture.FileWritingHandler::_outputTarget
	int32_t ____outputTarget_3;
	// RenderHeads.Media.AVProMovieCapture.MP4FileProcessing/Options RenderHeads.Media.AVProMovieCapture.FileWritingHandler::_postOptions
	Options_t3C457D0A71C21C9A6BA24DBE7F0B1717994A5767 ____postOptions_4;
	// System.Threading.ManualResetEvent RenderHeads.Media.AVProMovieCapture.FileWritingHandler::_postProcessEvent
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ____postProcessEvent_5;
};

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
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

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
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

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// System.Action`1<RenderHeads.Media.AVProMovieCapture.FileWritingHandler>
struct Action_1_t0F662C44DABB9C04CC1EEF3C68ACC88349244505  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
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

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.WebCamTexture
struct WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
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

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// RenderHeads.Media.AVProMovieCapture.Demos.AmbisonicAudioDemo
struct AmbisonicAudioDemo_tEA7E9C8274964CBA1BA9486FEAC41294B07AE2C0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform[] RenderHeads.Media.AVProMovieCapture.Demos.AmbisonicAudioDemo::_audioObjects
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ____audioObjects_4;
	// UnityEngine.AudioSource[] RenderHeads.Media.AVProMovieCapture.Demos.AmbisonicAudioDemo::_audioSources
	AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* ____audioSources_5;
	// System.Int32 RenderHeads.Media.AVProMovieCapture.Demos.AmbisonicAudioDemo::index
	int32_t ___index_6;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// RenderHeads.Media.AVProMovieCapture.CaptureBase
struct CaptureBase_t2607C47ED8359FDEAC49AB637D4BD5F48F2CA26D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// RenderHeads.Media.AVProMovieCapture.EncoderHints RenderHeads.Media.AVProMovieCapture.CaptureBase::_encoderHintsWindows
	EncoderHints_t2C3E7156B7E28652AA3E485C7B0AEECC2E34B3A8* ____encoderHintsWindows_4;
	// RenderHeads.Media.AVProMovieCapture.EncoderHints RenderHeads.Media.AVProMovieCapture.CaptureBase::_encoderHintsMacOS
	EncoderHints_t2C3E7156B7E28652AA3E485C7B0AEECC2E34B3A8* ____encoderHintsMacOS_5;
	// RenderHeads.Media.AVProMovieCapture.EncoderHints RenderHeads.Media.AVProMovieCapture.CaptureBase::_encoderHintsIOS
	EncoderHints_t2C3E7156B7E28652AA3E485C7B0AEECC2E34B3A8* ____encoderHintsIOS_6;
	// UnityEngine.KeyCode RenderHeads.Media.AVProMovieCapture.CaptureBase::_captureKey
	int32_t ____captureKey_7;
	// System.Boolean RenderHeads.Media.AVProMovieCapture.CaptureBase::_isRealTime
	bool ____isRealTime_8;
	// System.Boolean RenderHeads.Media.AVProMovieCapture.CaptureBase::_persistAcrossSceneLoads
	bool ____persistAcrossSceneLoads_9;
	// RenderHeads.Media.AVProMovieCapture.StartTriggerMode RenderHeads.Media.AVProMovieCapture.CaptureBase::_startTrigger
	int32_t ____startTrigger_10;
	// RenderHeads.Media.AVProMovieCapture.StartDelayMode RenderHeads.Media.AVProMovieCapture.CaptureBase::_startDelay
	int32_t ____startDelay_11;
	// System.Single RenderHeads.Media.AVProMovieCapture.CaptureBase::_startDelaySeconds
	float ____startDelaySeconds_12;
	// RenderHeads.Media.AVProMovieCapture.StopMode RenderHeads.Media.AVProMovieCapture.CaptureBase::_stopMode
	int32_t ____stopMode_13;
	// System.Int32 RenderHeads.Media.AVProMovieCapture.CaptureBase::_stopFrames
	int32_t ____stopFrames_14;
	// System.Single RenderHeads.Media.AVProMovieCapture.CaptureBase::_stopSeconds
	float ____stopSeconds_15;
	// System.String[] RenderHeads.Media.AVProMovieCapture.CaptureBase::_videoCodecPriorityWindows
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____videoCodecPriorityWindows_24;
	// System.String[] RenderHeads.Media.AVProMovieCapture.CaptureBase::_videoCodecPriorityMacOS
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____videoCodecPriorityMacOS_25;
	// System.String[] RenderHeads.Media.AVProMovieCapture.CaptureBase::_audioCodecPriorityWindows
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____audioCodecPriorityWindows_26;
	// System.String[] RenderHeads.Media.AVProMovieCapture.CaptureBase::_audioCodecPriorityMacOS
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____audioCodecPriorityMacOS_27;
	// System.Single RenderHeads.Media.AVProMovieCapture.CaptureBase::_frameRate
	float ____frameRate_28;
	// System.Int32 RenderHeads.Media.AVProMovieCapture.CaptureBase::_timelapseScale
	int32_t ____timelapseScale_29;
	// RenderHeads.Media.AVProMovieCapture.CaptureBase/FrameUpdateMode RenderHeads.Media.AVProMovieCapture.CaptureBase::_frameUpdateMode
	int32_t ____frameUpdateMode_30;
	// RenderHeads.Media.AVProMovieCapture.CaptureBase/DownScale RenderHeads.Media.AVProMovieCapture.CaptureBase::_downScale
	int32_t ____downScale_31;
	// UnityEngine.Vector2 RenderHeads.Media.AVProMovieCapture.CaptureBase::_maxVideoSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____maxVideoSize_32;
	// System.Int32 RenderHeads.Media.AVProMovieCapture.CaptureBase::_forceVideoCodecIndexWindows
	int32_t ____forceVideoCodecIndexWindows_33;
	// System.Int32 RenderHeads.Media.AVProMovieCapture.CaptureBase::_forceVideoCodecIndexMacOS
	int32_t ____forceVideoCodecIndexMacOS_34;
	// System.Int32 RenderHeads.Media.AVProMovieCapture.CaptureBase::_forceVideoCodecIndexIOS
	int32_t ____forceVideoCodecIndexIOS_35;
	// System.Int32 RenderHeads.Media.AVProMovieCapture.CaptureBase::_forceAudioCodecIndexWindows
	int32_t ____forceAudioCodecIndexWindows_36;
	// System.Int32 RenderHeads.Media.AVProMovieCapture.CaptureBase::_forceAudioCodecIndexMacOS
	int32_t ____forceAudioCodecIndexMacOS_37;
	// System.Int32 RenderHeads.Media.AVProMovieCapture.CaptureBase::_forceAudioCodecIndexIOS
	int32_t ____forceAudioCodecIndexIOS_38;
	// System.Boolean RenderHeads.Media.AVProMovieCapture.CaptureBase::_flipVertically
	bool ____flipVertically_39;
	// System.Boolean RenderHeads.Media.AVProMovieCapture.CaptureBase::_forceGpuFlush
	bool ____forceGpuFlush_40;
	// System.Boolean RenderHeads.Media.AVProMovieCapture.CaptureBase::_useWaitForEndOfFrame
	bool ____useWaitForEndOfFrame_41;
	// System.Boolean RenderHeads.Media.AVProMovieCapture.CaptureBase::_logCaptureStartStop
	bool ____logCaptureStartStop_42;
	// RenderHeads.Media.AVProMovieCapture.AudioCaptureSource RenderHeads.Media.AVProMovieCapture.CaptureBase::_audioCaptureSource
	int32_t ____audioCaptureSource_43;
	// RenderHeads.Media.AVProMovieCapture.UnityAudioCapture RenderHeads.Media.AVProMovieCapture.CaptureBase::_unityAudioCapture
	UnityAudioCapture_t296E2C5488EF68ECA60158E3852D846772C5010A* ____unityAudioCapture_44;
	// System.Int32 RenderHeads.Media.AVProMovieCapture.CaptureBase::_forceAudioInputDeviceIndex
	int32_t ____forceAudioInputDeviceIndex_45;
	// System.Int32 RenderHeads.Media.AVProMovieCapture.CaptureBase::_manualAudioSampleRate
	int32_t ____manualAudioSampleRate_46;
	// System.Int32 RenderHeads.Media.AVProMovieCapture.CaptureBase::_manualAudioChannelCount
	int32_t ____manualAudioChannelCount_47;
	// RenderHeads.Media.AVProMovieCapture.OutputTarget RenderHeads.Media.AVProMovieCapture.CaptureBase::_outputTarget
	int32_t ____outputTarget_48;
	// RenderHeads.Media.AVProMovieCapture.CaptureBase/OutputPath RenderHeads.Media.AVProMovieCapture.CaptureBase::_outputFolderType
	int32_t ____outputFolderType_51;
	// System.String RenderHeads.Media.AVProMovieCapture.CaptureBase::_outputFolderPath
	String_t* ____outputFolderPath_52;
	// System.String RenderHeads.Media.AVProMovieCapture.CaptureBase::_filenamePrefix
	String_t* ____filenamePrefix_53;
	// System.Boolean RenderHeads.Media.AVProMovieCapture.CaptureBase::_appendFilenameTimestamp
	bool ____appendFilenameTimestamp_54;
	// System.Boolean RenderHeads.Media.AVProMovieCapture.CaptureBase::_allowManualFileExtension
	bool ____allowManualFileExtension_55;
	// System.String RenderHeads.Media.AVProMovieCapture.CaptureBase::_filenameExtension
	String_t* ____filenameExtension_56;
	// System.String RenderHeads.Media.AVProMovieCapture.CaptureBase::_namedPipePath
	String_t* ____namedPipePath_57;
	// System.Int32 RenderHeads.Media.AVProMovieCapture.CaptureBase::_imageSequenceStartFrame
	int32_t ____imageSequenceStartFrame_58;
	// System.Int32 RenderHeads.Media.AVProMovieCapture.CaptureBase::_imageSequenceZeroDigits
	int32_t ____imageSequenceZeroDigits_59;
	// RenderHeads.Media.AVProMovieCapture.ImageSequenceFormat RenderHeads.Media.AVProMovieCapture.CaptureBase::_imageSequenceFormatWindows
	int32_t ____imageSequenceFormatWindows_60;
	// RenderHeads.Media.AVProMovieCapture.ImageSequenceFormat RenderHeads.Media.AVProMovieCapture.CaptureBase::_imageSequenceFormatMacOS
	int32_t ____imageSequenceFormatMacOS_61;
	// RenderHeads.Media.AVProMovieCapture.ImageSequenceFormat RenderHeads.Media.AVProMovieCapture.CaptureBase::_imageSequenceFormatIOS
	int32_t ____imageSequenceFormatIOS_62;
	// RenderHeads.Media.AVProMovieCapture.CaptureBase/Resolution RenderHeads.Media.AVProMovieCapture.CaptureBase::_renderResolution
	int32_t ____renderResolution_63;
	// UnityEngine.Vector2 RenderHeads.Media.AVProMovieCapture.CaptureBase::_renderSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____renderSize_64;
	// System.Int32 RenderHeads.Media.AVProMovieCapture.CaptureBase::_renderAntiAliasing
	int32_t ____renderAntiAliasing_65;
	// System.Boolean RenderHeads.Media.AVProMovieCapture.CaptureBase::_useMotionBlur
	bool ____useMotionBlur_66;
	// System.Int32 RenderHeads.Media.AVProMovieCapture.CaptureBase::_motionBlurSamples
	int32_t ____motionBlurSamples_67;
	// UnityEngine.Camera[] RenderHeads.Media.AVProMovieCapture.CaptureBase::_motionBlurCameras
	CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* ____motionBlurCameras_68;
	// RenderHeads.Media.AVProMovieCapture.MotionBlur RenderHeads.Media.AVProMovieCapture.CaptureBase::_motionBlur
	MotionBlur_t5688196760D7AFA119BAFF86663059AB25E3CD05* ____motionBlur_69;
	// System.Boolean RenderHeads.Media.AVProMovieCapture.CaptureBase::_allowVSyncDisable
	bool ____allowVSyncDisable_70;
	// System.Boolean RenderHeads.Media.AVProMovieCapture.CaptureBase::_supportTextureRecreate
	bool ____supportTextureRecreate_71;
	// System.Int32 RenderHeads.Media.AVProMovieCapture.CaptureBase::_minimumDiskSpaceMB
	int32_t ____minimumDiskSpaceMB_72;
	// RenderHeads.Media.AVProMovieCapture.TimelineController RenderHeads.Media.AVProMovieCapture.CaptureBase::_timelineController
	TimelineController_tE267FEEEFDD8D3BAFCB98978E989FB553231E9BF* ____timelineController_73;
	// RenderHeads.Media.AVProMovieCapture.VideoPlayerController RenderHeads.Media.AVProMovieCapture.CaptureBase::_videoPlayerController
	VideoPlayerController_tFE3CFD6A98D6B0068C20506A5D0A2DDF6B7A730E* ____videoPlayerController_74;
	// UnityEngine.Texture2D RenderHeads.Media.AVProMovieCapture.CaptureBase::_texture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ____texture_75;
	// System.Int32 RenderHeads.Media.AVProMovieCapture.CaptureBase::_handle
	int32_t ____handle_76;
	// System.Int32 RenderHeads.Media.AVProMovieCapture.CaptureBase::_targetWidth
	int32_t ____targetWidth_77;
	// System.Int32 RenderHeads.Media.AVProMovieCapture.CaptureBase::_targetHeight
	int32_t ____targetHeight_78;
	// System.Boolean RenderHeads.Media.AVProMovieCapture.CaptureBase::_capturing
	bool ____capturing_79;
	// System.Boolean RenderHeads.Media.AVProMovieCapture.CaptureBase::_paused
	bool ____paused_80;
	// System.String RenderHeads.Media.AVProMovieCapture.CaptureBase::_filePath
	String_t* ____filePath_81;
	// System.IO.FileInfo RenderHeads.Media.AVProMovieCapture.CaptureBase::_fileInfo
	FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* ____fileInfo_82;
	// RenderHeads.Media.AVProMovieCapture.NativePlugin/PixelFormat RenderHeads.Media.AVProMovieCapture.CaptureBase::_pixelFormat
	int32_t ____pixelFormat_83;
	// RenderHeads.Media.AVProMovieCapture.Codec RenderHeads.Media.AVProMovieCapture.CaptureBase::_selectedVideoCodec
	Codec_t5B18D0EB85F882306BEB0BD1068871455A8A9FD1* ____selectedVideoCodec_84;
	// RenderHeads.Media.AVProMovieCapture.Codec RenderHeads.Media.AVProMovieCapture.CaptureBase::_selectedAudioCodec
	Codec_t5B18D0EB85F882306BEB0BD1068871455A8A9FD1* ____selectedAudioCodec_85;
	// RenderHeads.Media.AVProMovieCapture.Device RenderHeads.Media.AVProMovieCapture.CaptureBase::_selectedAudioInputDevice
	Device_t7EAAEBAB812E709E010E21A018A24D24F912C94D* ____selectedAudioInputDevice_86;
	// System.Int32 RenderHeads.Media.AVProMovieCapture.CaptureBase::_oldVSyncCount
	int32_t ____oldVSyncCount_87;
	// System.Single RenderHeads.Media.AVProMovieCapture.CaptureBase::_oldFixedDeltaTime
	float ____oldFixedDeltaTime_88;
	// System.Boolean RenderHeads.Media.AVProMovieCapture.CaptureBase::_isTopDown
	bool ____isTopDown_89;
	// System.Boolean RenderHeads.Media.AVProMovieCapture.CaptureBase::_isDirectX11
	bool ____isDirectX11_90;
	// System.Boolean RenderHeads.Media.AVProMovieCapture.CaptureBase::_queuedStartCapture
	bool ____queuedStartCapture_91;
	// System.Boolean RenderHeads.Media.AVProMovieCapture.CaptureBase::_queuedStopCapture
	bool ____queuedStopCapture_92;
	// System.Single RenderHeads.Media.AVProMovieCapture.CaptureBase::_captureStartTime
	float ____captureStartTime_93;
	// System.Single RenderHeads.Media.AVProMovieCapture.CaptureBase::_capturePrePauseTotalTime
	float ____capturePrePauseTotalTime_94;
	// System.Single RenderHeads.Media.AVProMovieCapture.CaptureBase::_timeSinceLastFrame
	float ____timeSinceLastFrame_95;
	// UnityEngine.YieldInstruction RenderHeads.Media.AVProMovieCapture.CaptureBase::_waitForEndOfFrame
	YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D* ____waitForEndOfFrame_96;
	// System.Int64 RenderHeads.Media.AVProMovieCapture.CaptureBase::_freeDiskSpaceMB
	int64_t ____freeDiskSpaceMB_97;
	// System.Single RenderHeads.Media.AVProMovieCapture.CaptureBase::_startDelayTimer
	float ____startDelayTimer_98;
	// System.Boolean RenderHeads.Media.AVProMovieCapture.CaptureBase::_startPaused
	bool ____startPaused_99;
	// System.Action`1<RenderHeads.Media.AVProMovieCapture.FileWritingHandler> RenderHeads.Media.AVProMovieCapture.CaptureBase::_beginFinalFileWritingAction
	Action_1_t0F662C44DABB9C04CC1EEF3C68ACC88349244505* ____beginFinalFileWritingAction_100;
	// System.Collections.Generic.List`1<RenderHeads.Media.AVProMovieCapture.FileWritingHandler> RenderHeads.Media.AVProMovieCapture.CaptureBase::_pendingFileWrites
	List_1_t5249CBB408A0B19433CB2FDF7B56113C1F34E530* ____pendingFileWrites_101;
	// RenderHeads.Media.AVProMovieCapture.CaptureStats RenderHeads.Media.AVProMovieCapture.CaptureBase::_stats
	CaptureStats_t5DC4444931DAE81C5F25D9DC0D7DDCE9D3C48FC0* ____stats_102;
};

struct CaptureBase_t2607C47ED8359FDEAC49AB637D4BD5F48F2CA26D_StaticFields
{
	// System.String[] RenderHeads.Media.AVProMovieCapture.CaptureBase::DefaultVideoCodecPriorityWindows
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___DefaultVideoCodecPriorityWindows_16;
	// System.String[] RenderHeads.Media.AVProMovieCapture.CaptureBase::DefaultVideoCodecPriorityMacOS
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___DefaultVideoCodecPriorityMacOS_17;
	// System.String[] RenderHeads.Media.AVProMovieCapture.CaptureBase::DefaultAudioCodecPriorityWindows
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___DefaultAudioCodecPriorityWindows_18;
	// System.String[] RenderHeads.Media.AVProMovieCapture.CaptureBase::DefaultAudioCodecPriorityMacOS
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___DefaultAudioCodecPriorityMacOS_19;
	// System.String[] RenderHeads.Media.AVProMovieCapture.CaptureBase::DefaultAudioCodecPriorityIOS
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___DefaultAudioCodecPriorityIOS_20;
	// System.String[] RenderHeads.Media.AVProMovieCapture.CaptureBase::DefaultAudioCaptureDevicePriorityWindow
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___DefaultAudioCaptureDevicePriorityWindow_21;
	// System.String[] RenderHeads.Media.AVProMovieCapture.CaptureBase::DefaultAudioCaptureDevicePriorityMacOS
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___DefaultAudioCaptureDevicePriorityMacOS_22;
	// System.String[] RenderHeads.Media.AVProMovieCapture.CaptureBase::DefaultAudioCaptureDevicePriorityIOS
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___DefaultAudioCaptureDevicePriorityIOS_23;
	// System.Boolean RenderHeads.Media.AVProMovieCapture.CaptureBase::_isInitialised
	bool ____isInitialised_103;
	// System.Boolean RenderHeads.Media.AVProMovieCapture.CaptureBase::_isApplicationQuiting
	bool ____isApplicationQuiting_104;
};

// RenderHeads.Media.AVProMovieCapture.CaptureGUI
struct CaptureGUI_t4BD3D37209E44BDE2731E0ADC390D8BC56532BF3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// RenderHeads.Media.AVProMovieCapture.CaptureBase RenderHeads.Media.AVProMovieCapture.CaptureGUI::_movieCapture
	CaptureBase_t2607C47ED8359FDEAC49AB637D4BD5F48F2CA26D* ____movieCapture_4;
	// System.Boolean RenderHeads.Media.AVProMovieCapture.CaptureGUI::_showUI
	bool ____showUI_5;
	// System.Boolean RenderHeads.Media.AVProMovieCapture.CaptureGUI::_whenRecordingAutoHideUI
	bool ____whenRecordingAutoHideUI_6;
	// UnityEngine.GUISkin RenderHeads.Media.AVProMovieCapture.CaptureGUI::_guiSkin
	GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* ____guiSkin_7;
	// RenderHeads.Media.AVProMovieCapture.CaptureGUI/Section RenderHeads.Media.AVProMovieCapture.CaptureGUI::_shownSection
	int32_t ____shownSection_10;
	// System.String[] RenderHeads.Media.AVProMovieCapture.CaptureGUI::_videoCodecNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____videoCodecNames_11;
	// System.String[] RenderHeads.Media.AVProMovieCapture.CaptureGUI::_audioCodecNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____audioCodecNames_12;
	// System.Boolean[] RenderHeads.Media.AVProMovieCapture.CaptureGUI::_videoCodecConfigurable
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ____videoCodecConfigurable_13;
	// System.Boolean[] RenderHeads.Media.AVProMovieCapture.CaptureGUI::_audioCodecConfigurable
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ____audioCodecConfigurable_14;
	// System.String[] RenderHeads.Media.AVProMovieCapture.CaptureGUI::_audioDeviceNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____audioDeviceNames_15;
	// System.String[] RenderHeads.Media.AVProMovieCapture.CaptureGUI::_downScales
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____downScales_16;
	// System.String[] RenderHeads.Media.AVProMovieCapture.CaptureGUI::_outputType
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____outputType_17;
	// System.Int32 RenderHeads.Media.AVProMovieCapture.CaptureGUI::_downScaleIndex
	int32_t ____downScaleIndex_18;
	// UnityEngine.GUIStyle RenderHeads.Media.AVProMovieCapture.CaptureGUI::_tintableBox
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ____tintableBox_19;
	// UnityEngine.Vector2 RenderHeads.Media.AVProMovieCapture.CaptureGUI::_videoPos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____videoPos_20;
	// UnityEngine.Vector2 RenderHeads.Media.AVProMovieCapture.CaptureGUI::_audioPos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____audioPos_21;
	// UnityEngine.Vector2 RenderHeads.Media.AVProMovieCapture.CaptureGUI::_audioCodecPos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____audioCodecPos_22;
	// UnityEngine.Vector2 RenderHeads.Media.AVProMovieCapture.CaptureGUI::_imageCodecPos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____imageCodecPos_23;
	// System.Int64 RenderHeads.Media.AVProMovieCapture.CaptureGUI::_lastFileSize
	int64_t ____lastFileSize_24;
	// System.UInt32 RenderHeads.Media.AVProMovieCapture.CaptureGUI::_lastEncodedMinutes
	uint32_t ____lastEncodedMinutes_25;
	// System.UInt32 RenderHeads.Media.AVProMovieCapture.CaptureGUI::_lastEncodedSeconds
	uint32_t ____lastEncodedSeconds_26;
	// System.UInt32 RenderHeads.Media.AVProMovieCapture.CaptureGUI::_lastEncodedFrame
	uint32_t ____lastEncodedFrame_27;
};

struct CaptureGUI_t4BD3D37209E44BDE2731E0ADC390D8BC56532BF3_StaticFields
{
	// System.String[] RenderHeads.Media.AVProMovieCapture.CaptureGUI::CommonFrameRateNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___CommonFrameRateNames_8;
	// System.Single[] RenderHeads.Media.AVProMovieCapture.CaptureGUI::CommonFrameRateValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___CommonFrameRateValues_9;
};

// RenderHeads.Media.AVProMovieCapture.Demos.ScreenCaptureDemo
struct ScreenCaptureDemo_t7F6399781CBC95A17FC78A409454EC9C3F7993C0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioClip RenderHeads.Media.AVProMovieCapture.Demos.ScreenCaptureDemo::_audioBG
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ____audioBG_4;
	// UnityEngine.AudioClip RenderHeads.Media.AVProMovieCapture.Demos.ScreenCaptureDemo::_audioHit
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ____audioHit_5;
	// System.Single RenderHeads.Media.AVProMovieCapture.Demos.ScreenCaptureDemo::_speed
	float ____speed_6;
	// RenderHeads.Media.AVProMovieCapture.CaptureBase RenderHeads.Media.AVProMovieCapture.Demos.ScreenCaptureDemo::_capture
	CaptureBase_t2607C47ED8359FDEAC49AB637D4BD5F48F2CA26D* ____capture_7;
	// UnityEngine.GUISkin RenderHeads.Media.AVProMovieCapture.Demos.ScreenCaptureDemo::_guiSkin
	GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* ____guiSkin_8;
	// System.Boolean RenderHeads.Media.AVProMovieCapture.Demos.ScreenCaptureDemo::_spinCamera
	bool ____spinCamera_9;
	// System.Single RenderHeads.Media.AVProMovieCapture.Demos.ScreenCaptureDemo::_timer
	float ____timer_10;
	// System.Collections.Generic.List`1<RenderHeads.Media.AVProMovieCapture.FileWritingHandler> RenderHeads.Media.AVProMovieCapture.Demos.ScreenCaptureDemo::_fileWritingHandlers
	List_1_t5249CBB408A0B19433CB2FDF7B56113C1F34E530* ____fileWritingHandlers_11;
};

// RenderHeads.Media.AVProMovieCapture.Demos.ScriptCaptureDemo
struct ScriptCaptureDemo_t6A7B4F2D5BEF58E978B2B91C3B0A7E654AD1280E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// RenderHeads.Media.AVProMovieCapture.Codec RenderHeads.Media.AVProMovieCapture.Demos.ScriptCaptureDemo::_videoCodec
	Codec_t5B18D0EB85F882306BEB0BD1068871455A8A9FD1* ____videoCodec_6;
	// System.Int32 RenderHeads.Media.AVProMovieCapture.Demos.ScriptCaptureDemo::_encoderHandle
	int32_t ____encoderHandle_7;
};

// RenderHeads.Media.AVProMovieCapture.Demos.SurroundCaptureDemo
struct SurroundCaptureDemo_tEF7586B514D759430F857A0F204C0FE859E3C4B7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform RenderHeads.Media.AVProMovieCapture.Demos.SurroundCaptureDemo::_spawnPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____spawnPoint_4;
	// UnityEngine.GameObject RenderHeads.Media.AVProMovieCapture.Demos.SurroundCaptureDemo::_cubePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____cubePrefab_5;
	// System.Boolean RenderHeads.Media.AVProMovieCapture.Demos.SurroundCaptureDemo::_spawn
	bool ____spawn_6;
	// System.Single RenderHeads.Media.AVProMovieCapture.Demos.SurroundCaptureDemo::_timer
	float ____timer_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> RenderHeads.Media.AVProMovieCapture.Demos.SurroundCaptureDemo::_cubes
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____cubes_10;
};

// RenderHeads.Media.AVProMovieCapture.Demos.TextureCaptureDemo
struct TextureCaptureDemo_t8FB0B1D1A285833D28FE8459509CADE103126ADB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Shader RenderHeads.Media.AVProMovieCapture.Demos.TextureCaptureDemo::_shader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ____shader_4;
	// System.Int32 RenderHeads.Media.AVProMovieCapture.Demos.TextureCaptureDemo::_textureWidth
	int32_t ____textureWidth_5;
	// System.Int32 RenderHeads.Media.AVProMovieCapture.Demos.TextureCaptureDemo::_textureHeight
	int32_t ____textureHeight_6;
	// RenderHeads.Media.AVProMovieCapture.CaptureFromTexture RenderHeads.Media.AVProMovieCapture.Demos.TextureCaptureDemo::_movieCapture
	CaptureFromTexture_t0C3BE946CB6E84ACF24D9998B009E007740BA5D2* ____movieCapture_7;
	// UnityEngine.Material RenderHeads.Media.AVProMovieCapture.Demos.TextureCaptureDemo::_material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ____material_8;
	// UnityEngine.RenderTexture RenderHeads.Media.AVProMovieCapture.Demos.TextureCaptureDemo::_texture
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ____texture_9;
};

// RenderHeads.Media.AVProMovieCapture.Demos.WebcamCaptureDemo
struct WebcamCaptureDemo_t86B716D0EB5CD8F4DA28BF88D59D2576FA2499D9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GUISkin RenderHeads.Media.AVProMovieCapture.Demos.WebcamCaptureDemo::_skin
	GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* ____skin_4;
	// UnityEngine.GameObject RenderHeads.Media.AVProMovieCapture.Demos.WebcamCaptureDemo::_prefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____prefab_5;
	// System.Int32 RenderHeads.Media.AVProMovieCapture.Demos.WebcamCaptureDemo::_webcamResolutionWidth
	int32_t ____webcamResolutionWidth_6;
	// System.Int32 RenderHeads.Media.AVProMovieCapture.Demos.WebcamCaptureDemo::_webcamResolutionHeight
	int32_t ____webcamResolutionHeight_7;
	// System.Int32 RenderHeads.Media.AVProMovieCapture.Demos.WebcamCaptureDemo::_webcamFrameRate
	int32_t ____webcamFrameRate_8;
	// RenderHeads.Media.AVProMovieCapture.Demos.WebcamCaptureDemo/Instance[] RenderHeads.Media.AVProMovieCapture.Demos.WebcamCaptureDemo::_instances
	InstanceU5BU5D_tB5C15354627E88FE454CB01D8D6601A138AD8B35* ____instances_9;
	// System.Int32 RenderHeads.Media.AVProMovieCapture.Demos.WebcamCaptureDemo::_selectedWebcamIndex
	int32_t ____selectedWebcamIndex_10;
};

// RenderHeads.Media.AVProMovieCapture.CaptureFromTexture
struct CaptureFromTexture_t0C3BE946CB6E84ACF24D9998B009E007740BA5D2  : public CaptureBase_t2607C47ED8359FDEAC49AB637D4BD5F48F2CA26D
{
	// System.Boolean RenderHeads.Media.AVProMovieCapture.CaptureFromTexture::_manualUpdate
	bool ____manualUpdate_105;
	// UnityEngine.Texture RenderHeads.Media.AVProMovieCapture.CaptureFromTexture::_sourceTexture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ____sourceTexture_106;
	// UnityEngine.RenderTexture RenderHeads.Media.AVProMovieCapture.CaptureFromTexture::_resolveTexture
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ____resolveTexture_107;
	// System.IntPtr RenderHeads.Media.AVProMovieCapture.CaptureFromTexture::_targetNativePointer
	intptr_t ____targetNativePointer_108;
	// System.Boolean RenderHeads.Media.AVProMovieCapture.CaptureFromTexture::_isSourceTextureChanged
	bool ____isSourceTextureChanged_109;
};

// RenderHeads.Media.AVProMovieCapture.CaptureFromWebCamTexture
struct CaptureFromWebCamTexture_t525D72022DA921320BDCDA434967582CFFC1913A  : public CaptureFromTexture_t0C3BE946CB6E84ACF24D9998B009E007740BA5D2
{
	// UnityEngine.WebCamTexture RenderHeads.Media.AVProMovieCapture.CaptureFromWebCamTexture::_webcam
	WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* ____webcam_110;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

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
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2  : public RuntimeArray
{
	ALIGN_FIELD (8) AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* m_Items[1];

	inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// RenderHeads.Media.AVProMovieCapture.Demos.WebcamCaptureDemo/Instance[]
struct InstanceU5BU5D_tB5C15354627E88FE454CB01D8D6601A138AD8B35  : public RuntimeArray
{
	ALIGN_FIELD (8) Instance_t1B5CF60907DEE4026BAC889B9A6CA8B98A29135B* m_Items[1];

	inline Instance_t1B5CF60907DEE4026BAC889B9A6CA8B98A29135B* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Instance_t1B5CF60907DEE4026BAC889B9A6CA8B98A29135B** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Instance_t1B5CF60907DEE4026BAC889B9A6CA8B98A29135B* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Instance_t1B5CF60907DEE4026BAC889B9A6CA8B98A29135B* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Instance_t1B5CF60907DEE4026BAC889B9A6CA8B98A29135B** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Instance_t1B5CF60907DEE4026BAC889B9A6CA8B98A29135B* value)
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
// UnityEngine.WebCamDevice[]
struct WebCamDeviceU5BU5D_tA5B1352BDE6FE233B66C3ABF96E00EB3215629F5  : public RuntimeArray
{
	ALIGN_FIELD (8) WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C m_Items[1];

	inline WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DepthCameraName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Resolutions_4), (void*)NULL);
		#endif
	}
	inline WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DepthCameraName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Resolutions_4), (void*)NULL);
		#endif
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


// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;

// System.Void UnityEngine.AudioSource::GetOutputData(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_GetOutputData_m8AEF8365E3B162E379E1D5FA6C1607999DE458F3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___samples0, int32_t ___channel1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_timeSinceLevelLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_timeSinceLevelLoad_m0AA090B0D9CF98F4A7E8AE81ABE29459DBE28C9A (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::PingPong(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_PingPong_m157C55BCFEA2BB96680B7B29D714C3F9390551C9_inline (float ___t0, float ___length1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void RenderHeads.Media.AVProMovieCapture.Demos.ScreenCaptureDemo/<Start>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__8__ctor_mB1558E3A149A709F32D0A9FE38DA03C916E7CA62 (U3CStartU3Ed__8_t637F17609C889C0DE2B1E61CD58DA75EC4E2B790* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<RenderHeads.Media.AVProMovieCapture.FileWritingHandler>::Add(T)
inline void List_1_Add_m2F215CF8483D53368BB97348A2E1395537C43403_inline (List_1_t5249CBB408A0B19433CB2FDF7B56113C1F34E530* __this, FileWritingHandler_tE89A30B4C2545943B94F9C5A2E02E9CF2937FA74* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5249CBB408A0B19433CB2FDF7B56113C1F34E530*, FileWritingHandler_tE89A30B4C2545943B94F9C5A2E02E9CF2937FA74*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean RenderHeads.Media.AVProMovieCapture.CaptureBase::IsCapturing()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CaptureBase_IsCapturing_m7E4A3398A3CDF34A5898E03632C56D6A23E7C105_inline (CaptureBase_t2607C47ED8359FDEAC49AB637D4BD5F48F2CA26D* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::PlayClipAtPoint(UnityEngine.AudioClip,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayClipAtPoint_mDF9531618C28411888855FD6B4B58F315083B8AC (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_get_value_m87344B352E686178D743B14C468EEE01757E9D43 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_backgroundColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_backgroundColor_m036FD8C316A93A0B168ACC89AFF16D396B872138 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134 (const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::RotateAround(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_RotateAround_m489C5BE8B8B15D0A5F4863DE6D23FF2CC8FA76C6 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis1, float ___angle2, const RuntimeMethod* method) ;
// System.Boolean RenderHeads.Media.AVProMovieCapture.FileWritingHandler::Cleanup(System.Collections.Generic.List`1<RenderHeads.Media.AVProMovieCapture.FileWritingHandler>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FileWritingHandler_Cleanup_m3970A85B7538075E01B20395F473716D2FBFAC2F (List_1_t5249CBB408A0B19433CB2FDF7B56113C1F34E530* ___list0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<RenderHeads.Media.AVProMovieCapture.FileWritingHandler>::get_Count()
inline int32_t List_1_get_Count_m1822C7DC5EEAD63F7011AB37E1548B4097F1D9CA_inline (List_1_t5249CBB408A0B19433CB2FDF7B56113C1F34E530* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t5249CBB408A0B19433CB2FDF7B56113C1F34E530*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<RenderHeads.Media.AVProMovieCapture.FileWritingHandler>::GetEnumerator()
inline Enumerator_t6B44FB01A89CB1188659B9C4D818F4A3E3079743 List_1_GetEnumerator_m383AC19C149D9DAFFFE1F1C178DEE4FF0BD907F8 (List_1_t5249CBB408A0B19433CB2FDF7B56113C1F34E530* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t6B44FB01A89CB1188659B9C4D818F4A3E3079743 (*) (List_1_t5249CBB408A0B19433CB2FDF7B56113C1F34E530*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<RenderHeads.Media.AVProMovieCapture.FileWritingHandler>::Dispose()
inline void Enumerator_Dispose_mC5E7355DB1245283172909C09FD4BF4CD338F588 (Enumerator_t6B44FB01A89CB1188659B9C4D818F4A3E3079743* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t6B44FB01A89CB1188659B9C4D818F4A3E3079743*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<RenderHeads.Media.AVProMovieCapture.FileWritingHandler>::get_Current()
inline FileWritingHandler_tE89A30B4C2545943B94F9C5A2E02E9CF2937FA74* Enumerator_get_Current_mB3891BF47A79CF2A5017187409207EEEBF5B4686_inline (Enumerator_t6B44FB01A89CB1188659B9C4D818F4A3E3079743* __this, const RuntimeMethod* method)
{
	return ((  FileWritingHandler_tE89A30B4C2545943B94F9C5A2E02E9CF2937FA74* (*) (Enumerator_t6B44FB01A89CB1188659B9C4D818F4A3E3079743*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void RenderHeads.Media.AVProMovieCapture.FileWritingHandler::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileWritingHandler_Dispose_mC90D8BE8C1524EEB1BED64C0D7D37E8E532FB6F8 (FileWritingHandler_tE89A30B4C2545943B94F9C5A2E02E9CF2937FA74* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<RenderHeads.Media.AVProMovieCapture.FileWritingHandler>::MoveNext()
inline bool Enumerator_MoveNext_mBC9522AF36E9265CFBBDA6AC47BB6D31C4F04AA7 (Enumerator_t6B44FB01A89CB1188659B9C4D818F4A3E3079743* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t6B44FB01A89CB1188659B9C4D818F4A3E3079743*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_skin_mA5C192FA26B27648E37945E0DA7A679C09E88BAB (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Time::get_frameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Time_get_frameCount_m88E5008FE9451A892DE1F43DC8587213075890A8 (const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Label_mF161ED74A26AEC05C8A56F0B95F78482CE7ED5C7 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position0, String_t* ___text1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<RenderHeads.Media.AVProMovieCapture.FileWritingHandler>::.ctor(System.Int32)
inline void List_1__ctor_mDF71A398879F91A3E18B2928202CEDBF991CF36D (List_1_t5249CBB408A0B19433CB2FDF7B56113C1F34E530* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5249CBB408A0B19433CB2FDF7B56113C1F34E530*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___capacity0, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Action`1<RenderHeads.Media.AVProMovieCapture.FileWritingHandler> RenderHeads.Media.AVProMovieCapture.CaptureBase::get_BeginFinalFileWritingAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_t0F662C44DABB9C04CC1EEF3C68ACC88349244505* CaptureBase_get_BeginFinalFileWritingAction_m280DF863DE153A3CE05E25DE2FE6D4D59729FCA5_inline (CaptureBase_t2607C47ED8359FDEAC49AB637D4BD5F48F2CA26D* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<RenderHeads.Media.AVProMovieCapture.FileWritingHandler>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mDF00ACDD28056069FE8267ED8C05CC01D000AFBF (Action_1_t0F662C44DABB9C04CC1EEF3C68ACC88349244505* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t0F662C44DABB9C04CC1EEF3C68ACC88349244505*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Void RenderHeads.Media.AVProMovieCapture.CaptureBase::set_BeginFinalFileWritingAction(System.Action`1<RenderHeads.Media.AVProMovieCapture.FileWritingHandler>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CaptureBase_set_BeginFinalFileWritingAction_m146A0CEDF1B0A18BFF59F5702EDFF3E8604F668B_inline (CaptureBase_t2607C47ED8359FDEAC49AB637D4BD5F48F2CA26D* __this, Action_1_t0F662C44DABB9C04CC1EEF3C68ACC88349244505* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::HasUserAuthorization(UnityEngine.UserAuthorization)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_HasUserAuthorization_m7F27C13F7826778FF93CFE0DAAC4BFA995AECB2B (int32_t ___mode0, const RuntimeMethod* method) ;
// UnityEngine.AsyncOperation UnityEngine.Application::RequestUserAuthorization(UnityEngine.UserAuthorization)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* Application_RequestUserAuthorization_mF727A4C8BD43DD486DF6254AA531D256383AEDD7 (int32_t ___mode0, const RuntimeMethod* method) ;
// System.Void RenderHeads.Media.AVProMovieCapture.NativePlugin::SetMicrophoneRecordingHint(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativePlugin_SetMicrophoneRecordingHint_m0714F10FE992F8DD1832C8CC7B9A400F8701BF40 (bool ___enabled0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Boolean RenderHeads.Media.AVProMovieCapture.NativePlugin::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativePlugin_Init_mA0A0FBA0E5824FBAEA032B420B4A81DBE67A2A46 (const RuntimeMethod* method) ;
// RenderHeads.Media.AVProMovieCapture.Codec RenderHeads.Media.AVProMovieCapture.CodecManager::FindCodec(RenderHeads.Media.AVProMovieCapture.CodecType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Codec_t5B18D0EB85F882306BEB0BD1068871455A8A9FD1* CodecManager_FindCodec_m8D752DF8E80732953B40ACBCBC38D026876868E9 (int32_t ___codecType0, String_t* ___name1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void RenderHeads.Media.AVProMovieCapture.NativePlugin::Deinit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativePlugin_Deinit_m09B58339DFEB48036703A4F6D9B61C3D05129944 (const RuntimeMethod* method) ;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_Alloc_m1FC35418B654D3F48B4F70D525EBD6A208A59075 (RuntimeObject* ___value0, int32_t ___type1, const RuntimeMethod* method) ;
// System.Int32 RenderHeads.Media.AVProMovieCapture.Codec::get_Index()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Codec_get_Index_mA1402EA62FD725AD4F7A88B0E57D3ED03C394899_inline (Codec_t5B18D0EB85F882306BEB0BD1068871455A8A9FD1* __this, const RuntimeMethod* method) ;
// System.Int32 RenderHeads.Media.AVProMovieCapture.NativePlugin::CreateRecorderVideo(System.String,System.UInt32,System.UInt32,System.Single,System.Int32,System.Boolean,System.Boolean,System.Int32,RenderHeads.Media.AVProMovieCapture.AudioCaptureSource,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,RenderHeads.Media.AVProMovieCapture.VideoEncoderHints)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativePlugin_CreateRecorderVideo_m43B1425CF7F56371E7072C8361E031515676C553 (String_t* ___filename0, uint32_t ___width1, uint32_t ___height2, float ___frameRate3, int32_t ___format4, bool ___isRealTime5, bool ___isTopDown6, int32_t ___videoCodecIndex7, int32_t ___audioSource8, int32_t ___audioSampleRate9, int32_t ___audioChannelCount10, int32_t ___audioInputDeviceIndex11, int32_t ___audioCodecIndex12, bool ___forceGpuFlush13, VideoEncoderHints_tC37F228E65505C6DE8CA5866F681943F61B914E0* ___hints14, const RuntimeMethod* method) ;
// System.Boolean RenderHeads.Media.AVProMovieCapture.NativePlugin::Start(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativePlugin_Start_m4A7FBADFF9600DDFBF8FB5680F0EDFB010AB13DC (int32_t ___handle0, const RuntimeMethod* method) ;
// System.Boolean RenderHeads.Media.AVProMovieCapture.NativePlugin::IsNewFrameDue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativePlugin_IsNewFrameDue_m360708C31FF2495ED662CBA0CE29BB1EF91C90BE (int32_t ___handle0, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.GCHandle::AddrOfPinnedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Void RenderHeads.Media.AVProMovieCapture.NativePlugin::EncodeFrame(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativePlugin_EncodeFrame_mCFCC79475F7AAC5534087D9E7FF385DCCC064C6D (int32_t ___handle0, intptr_t ___data1, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::Sleep(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Sleep_m63B7D29DC735584F4D80373E48C91B34FF32D1A0 (int32_t ___millisecondsTimeout0, const RuntimeMethod* method) ;
// System.Void RenderHeads.Media.AVProMovieCapture.NativePlugin::Stop(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativePlugin_Stop_m23897047A25C792BEDE5190BD41D877709172E17 (int32_t ___handle0, bool ___skipPendingFrames1, const RuntimeMethod* method) ;
// System.Void RenderHeads.Media.AVProMovieCapture.NativePlugin::FreeRecorder(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativePlugin_FreeRecorder_m20D8348E04543E63C7119187C96E4AC404336E6F (int32_t ___handle0, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.InteropServices.GCHandle::get_IsAllocated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Void RenderHeads.Media.AVProMovieCapture.Demos.SurroundCaptureDemo::SpawnCube()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurroundCaptureDemo_SpawnCube_m283C3BB666687C40676A19A80F810999B0D59861 (SurroundCaptureDemo_tEF7586B514D759430F857A0F204C0FE859E3C4B7* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void RenderHeads.Media.AVProMovieCapture.Demos.SurroundCaptureDemo::RemoveCube()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurroundCaptureDemo_RemoveCube_m9A6C571408F3F4B78CA5F85E08994F8C6F1C81DB (SurroundCaptureDemo_tEF7586B514D759430F857A0F204C0FE859E3C4B7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared)(___original0, ___position1, ___rotation2, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.Transform>()
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::AddExplosionForce(System.Single,UnityEngine.Vector3,System.Single,System.Single,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddExplosionForce_mE4673F6D1DA0C206DA79659E9005A0F067348402 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, float ___explosionForce0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___explosionPosition1, float ___explosionRadius2, float ___upwardsModifier3, int32_t ___mode4, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___p0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.Collider>()
inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_mD754B72714F15210DDA429A096D853852FF437AB (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void RenderHeads.Media.AVProMovieCapture.Demos.SurroundCaptureDemo/<KillCube>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CKillCubeU3Ed__10__ctor_m00AC89DFB9E9CDACDA4D392156E81B9B9FC23846 (U3CKillCubeU3Ed__10_tB186C73D645377CCA71BB6B0D9CED6ADF1C808B9* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor(System.Int32)
inline void List_1__ctor_m6DD2E528B694E1BF27A34AD5D41DA106FF82743C (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___capacity0, method);
}
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shader0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat,UnityEngine.RenderTextureReadWrite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture__ctor_m68A1B9CAA1BE0B597C5F4895C296E21502D0C962 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, int32_t ___format3, int32_t ___readWrite4, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.RenderTexture::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderTexture_Create_mA6E4D3CCC84AC3F68E85AA0D6609E1692C672AD2 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void RenderHeads.Media.AVProMovieCapture.CaptureFromTexture::SetSourceTexture(UnityEngine.Texture)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CaptureFromTexture_SetSourceTexture_mBB9CB307C4442C34DF3D7D826B40EB86C316C360_inline (CaptureFromTexture_t0C3BE946CB6E84ACF24D9998B009E007740BA5D2* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture0, const RuntimeMethod* method) ;
// System.Void RenderHeads.Media.AVProMovieCapture.Demos.TextureCaptureDemo::UpdateTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureCaptureDemo_UpdateTexture_m5C46E123EF60A7926DDC4316D4E200534624E865 (TextureCaptureDemo_t8FB0B1D1A285833D28FE8459509CADE103126ADB* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture2D UnityEngine.Texture2D::get_whiteTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* Texture2D_get_whiteTexture_m7999084E0B635CF834F8DD2D840FAA71720404DA (const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m4055EA37BA8BAEF7EF29830F86ED13227780F4DD (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat2, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::set_depth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_depth_m3587BACB56CB2809E28F64EB459A0A5EC9E33BCC (int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_DrawTexture_mD37A6215E8A48EF54F88D27698505A09CFADBF0E (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___image1, int32_t ___scaleMode2, bool ___alphaBlend3, const RuntimeMethod* method) ;
// System.Void RenderHeads.Media.AVProMovieCapture.Demos.WebcamCaptureDemo/<Start>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__8__ctor_m5BC1F2E404FA303E9D9C013AA48A2192A3BEA496 (U3CStartU3Ed__8_t129049BF6EB694C1463C8F441BFE52C23D1E3F58* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WebCamTexture::.ctor(System.String,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture__ctor_mAF6018FD8752F8527E23C6A800A314C87322D1DD (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, String_t* ___deviceName0, int32_t ___requestedWidth1, int32_t ___requestedHeight2, int32_t ___requestedFPS3, const RuntimeMethod* method) ;
// System.Void UnityEngine.WebCamTexture::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture_Play_mAB313C6F98D5433C414DA31DD96316BDE8D19A26 (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.WebCamTexture::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebCamTexture_get_isPlaying_mE53901F249CD5FFF9D1C31DDCC2FC331DCEA80CF (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, const RuntimeMethod* method) ;
// System.Void RenderHeads.Media.AVProMovieCapture.CaptureFromWebCamTexture::set_WebCamTexture(UnityEngine.WebCamTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureFromWebCamTexture_set_WebCamTexture_m9C23C4FB3883E624D90AC094CCC2FA12B917B414 (CaptureFromWebCamTexture_t525D72022DA921320BDCDA434967582CFFC1913A* __this, WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.Void RenderHeads.Media.AVProMovieCapture.Demos.WebcamCaptureDemo::StopWebcam(RenderHeads.Media.AVProMovieCapture.Demos.WebcamCaptureDemo/Instance)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebcamCaptureDemo_StopWebcam_m80EB1D0F3BD7A9C2D711C886B5749EE5DDFC0089 (WebcamCaptureDemo_t86B716D0EB5CD8F4DA28BF88D59D2576FA2499D9* __this, Instance_t1B5CF60907DEE4026BAC889B9A6CA8B98A29135B* ___instance0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WebCamTexture::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture_Stop_m6239B5D1E10C53B57BB30E124E3F541EBD46A184 (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, const RuntimeMethod* method) ;
// System.Void RenderHeads.Media.AVProMovieCapture.CaptureGUI::set_ShowUI(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CaptureGUI_set_ShowUI_mAE6F814E4C5BD17A6EEBADB05CD90D03F4879E36_inline (CaptureGUI_t4BD3D37209E44BDE2731E0ADC390D8BC56532BF3* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void RenderHeads.Media.AVProMovieCapture.Demos.WebcamCaptureDemo::StartWebcam(RenderHeads.Media.AVProMovieCapture.Demos.WebcamCaptureDemo/Instance)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebcamCaptureDemo_StartWebcam_m63AB17C600FC5AFDE0F49B68034E228DCA439877 (WebcamCaptureDemo_t86B716D0EB5CD8F4DA28BF88D59D2576FA2499D9* __this, Instance_t1B5CF60907DEE4026BAC889B9A6CA8B98A29135B* ___instance0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::BeginArea(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_BeginArea_mA941799D3368A14C4ED7AC8516806369EAF01692 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___screenRect0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<UnityEngine.GUILayoutOption>()
inline GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline (const RuntimeMethod* method)
{
	return ((  GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline)(method);
}
// System.Void UnityEngine.GUILayout::BeginVertical(UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_BeginVertical_mEA80BF63631637EDAAD761D32BAFC49A404F0842 (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_Label_mCB93C0DE81ECE87DE34C8B959C5885E9B6E4FEBA (String_t* ___text0, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options1, const RuntimeMethod* method) ;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::ExpandWidth(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GUILayout_ExpandWidth_m9597958487AFF2D7EE649CA0EEABDA4F862AC692 (bool ___expand0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_BeginHorizontal_mB753A68BD1357463FEA9F7273FED94085A79BA37 (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.GUI::get_backgroundColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GUI_get_backgroundColor_mEC7D5EC6B1877C56FB459EDBAEE90E38C141AB99 (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mCE0CF50E59713C5A8F6AAC2C6648CF0EDBEEB27B_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::set_backgroundColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_backgroundColor_mD83447BE5F90369CB39C37943528A4D8751B14A1 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_color_mBB4E17B3600770E2EEEA61AA956D2207EAF112C7 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_m336EB73DD4A5B11B7F405CF4BC7F37A466FB4FF7_inline (const RuntimeMethod* method) ;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GUILayout_Width_m3CD0F9B520A1B7BF065D30844E2F9965277E1DAA (float ___width0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUILayout::Button(System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUILayout_Button_m6D4E3D32A001EF42DB5C2052B4C19AB3B518566C (String_t* ___text0, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options1, const RuntimeMethod* method) ;
// System.Void RenderHeads.Media.AVProMovieCapture.Demos.WebcamCaptureDemo::SelectWebcam(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebcamCaptureDemo_SelectWebcam_mDB506877480CADEDE571DA05725CC011828D0E41 (WebcamCaptureDemo_t86B716D0EB5CD8F4DA28BF88D59D2576FA2499D9* __this, int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::GetRect(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D GUILayoutUtility_GetRect_mC4C37778FB240DCFF4C8A59860DC2D52806D09F2 (float ___width0, float ___height1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_DrawTexture_m4DC8E4DE66E5B806D6C71E9BFC8B122DB2A51F09 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___image1, const RuntimeMethod* method) ;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::MinWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GUILayout_MinWidth_mB70FB513BEE31220D6DDD10F8EACD616A90C2ED1 (float ___minWidth0, const RuntimeMethod* method) ;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::MaxWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GUILayout_MaxWidth_m8AD51EFD3981488BB5B3B0405797143B4ECCE047 (float ___maxWidth0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::EndHorizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_EndHorizontal_mCB61DC8BE8359CAB9911BDD4F2AB6819AB75DBEC (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::EndVertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_EndVertical_mF2C806265D9B04E715EC1656FA9392332C59EEBC (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::EndArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_EndArea_m1A496B300C5FDCEA653A1652CBA173F42E134371 (const RuntimeMethod* method) ;
// UnityEngine.WebCamDevice[] UnityEngine.WebCamTexture::get_devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebCamDeviceU5BU5D_tA5B1352BDE6FE233B66C3ABF96E00EB3215629F5* WebCamTexture_get_devices_mB2BEC8F4A104FD1B50EDC910C75379129D936EAF (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared)(___original0, method);
}
// System.Void RenderHeads.Media.AVProMovieCapture.Demos.WebcamCaptureDemo/Instance::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instance__ctor_m69890B1729452BC768374A34A963457745B2657E (Instance_t1B5CF60907DEE4026BAC889B9A6CA8B98A29135B* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.WebCamDevice::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebCamDevice_get_name_m2BF75E8EA486668299906EAC9B35214890D4601E (WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<RenderHeads.Media.AVProMovieCapture.CaptureFromWebCamTexture>()
inline CaptureFromWebCamTexture_t525D72022DA921320BDCDA434967582CFFC1913A* GameObject_GetComponent_TisCaptureFromWebCamTexture_t525D72022DA921320BDCDA434967582CFFC1913A_mF182986E3F7793C10A55F6976F6B19D0C7547471 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CaptureFromWebCamTexture_t525D72022DA921320BDCDA434967582CFFC1913A* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void RenderHeads.Media.AVProMovieCapture.CaptureBase::set_FilenamePrefix(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CaptureBase_set_FilenamePrefix_mA7CAE85E11DD10B97D47CF3949A6BC2460DA80EF_inline (CaptureBase_t2607C47ED8359FDEAC49AB637D4BD5F48F2CA26D* __this, String_t* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<RenderHeads.Media.AVProMovieCapture.CaptureGUI>()
inline CaptureGUI_t4BD3D37209E44BDE2731E0ADC390D8BC56532BF3* GameObject_GetComponent_TisCaptureGUI_t4BD3D37209E44BDE2731E0ADC390D8BC56532BF3_m81666B1464B54456766D532F75D06B6C0FE35107 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CaptureGUI_t4BD3D37209E44BDE2731E0ADC390D8BC56532BF3* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Repeat(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m1ACDE7EF466FB6CCAD29B3866E4A239A8530E9D5_inline (float ___t0, float ___length1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
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
// System.Void RenderHeads.Media.AVProMovieCapture.Demos.AmbisonicAudioDemo::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AmbisonicAudioDemo_Update_m8407FD05EB301AB5075D6E56F5C31F27CAB0510B (AmbisonicAudioDemo_tEA7E9C8274964CBA1BA9486FEAC41294B07AE2C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	int32_t V_1 = 0;
	AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* V_2 = NULL;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* V_6 = NULL;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	{
		// float[] samples = new float[4];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_0;
		// foreach (AudioSource audio in _audioSources)
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_1 = __this->____audioSources_5;
		V_2 = L_1;
		V_3 = 0;
		goto IL_0088;
	}

IL_0012:
	{
		// foreach (AudioSource audio in _audioSources)
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_2 = V_2;
		int32_t L_3 = V_3;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		// audio.GetOutputData(samples, 0);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6 = L_5;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = V_0;
		NullCheck(L_6);
		AudioSource_GetOutputData_m8AEF8365E3B162E379E1D5FA6C1607999DE458F3(L_6, L_7, 0, NULL);
		// float sample = Mathf.Abs(samples[2]);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = 2;
		float L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		float L_11;
		L_11 = fabsf(L_10);
		V_4 = L_11;
		// sample = Mathf.Sqrt(sample);
		float L_12 = V_4;
		float L_13;
		L_13 = sqrtf(L_12);
		V_4 = L_13;
		// float scale = audio.gameObject.transform.localScale.x;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_14 = L_6;
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_14, NULL);
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_16, NULL);
		float L_18 = L_17.___x_2;
		V_5 = L_18;
		// scale = 0.15f + Mathf.Lerp(scale, sample, Time.deltaTime * 20f) * 0.85f;
		float L_19 = V_5;
		float L_20 = V_4;
		float L_21;
		L_21 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_22;
		L_22 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_19, L_20, ((float)il2cpp_codegen_multiply(L_21, (20.0f))), NULL);
		V_5 = ((float)il2cpp_codegen_add((0.150000006f), ((float)il2cpp_codegen_multiply(L_22, (0.850000024f)))));
		// audio.gameObject.transform.localScale = Vector3.one * scale;
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_14, NULL);
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		float L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_25, L_26, NULL);
		NullCheck(L_24);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_24, L_27, NULL);
		int32_t L_28 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0088:
	{
		// foreach (AudioSource audio in _audioSources)
		int32_t L_29 = V_3;
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_30 = V_2;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_0012;
		}
	}
	{
		// int index = 0;
		V_1 = 0;
		// foreach (Transform t in _audioObjects)
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_31 = __this->____audioObjects_4;
		V_6 = L_31;
		V_3 = 0;
		goto IL_0135;
	}

IL_009f:
	{
		// foreach (Transform t in _audioObjects)
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_32 = V_6;
		int32_t L_33 = V_3;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		// float time = Time.timeSinceLevelLoad + index * 1.321f;
		float L_36;
		L_36 = Time_get_timeSinceLevelLoad_m0AA090B0D9CF98F4A7E8AE81ABE29459DBE28C9A(NULL);
		int32_t L_37 = V_1;
		// float tt = Mathf.PingPong(Mathf.Sin(time * 2.23f) + 1f, 2f) / 2f;
		float L_38 = ((float)il2cpp_codegen_add(L_36, ((float)il2cpp_codegen_multiply(((float)L_37), (1.32099998f)))));
		float L_39;
		L_39 = sinf(((float)il2cpp_codegen_multiply(L_38, (2.23000002f))));
		float L_40;
		L_40 = Mathf_PingPong_m157C55BCFEA2BB96680B7B29D714C3F9390551C9_inline(((float)il2cpp_codegen_add(L_39, (1.0f))), (2.0f), NULL);
		V_7 = ((float)(L_40/(2.0f)));
		// float r = Mathf.Lerp(0.5f, 3f, tt);
		float L_41 = V_7;
		float L_42;
		L_42 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline((0.5f), (3.0f), L_41, NULL);
		V_8 = L_42;
		// float x = Mathf.Sin(time * 1f) * r;
		float L_43 = L_38;
		float L_44;
		L_44 = sinf(((float)il2cpp_codegen_multiply(L_43, (1.0f))));
		float L_45 = V_8;
		V_9 = ((float)il2cpp_codegen_multiply(L_44, L_45));
		// float z = Mathf.Cos(time * 1.13f) * r;
		float L_46 = L_43;
		float L_47;
		L_47 = cosf(((float)il2cpp_codegen_multiply(L_46, (1.13f))));
		float L_48 = V_8;
		V_10 = ((float)il2cpp_codegen_multiply(L_47, L_48));
		// float y = Mathf.Sin(time * 1.23f) * 1f;
		float L_49;
		L_49 = sinf(((float)il2cpp_codegen_multiply(L_46, (1.23000002f))));
		V_11 = ((float)il2cpp_codegen_multiply(L_49, (1.0f)));
		// t.position = new Vector3(x, y, z);
		float L_50 = V_9;
		float L_51 = V_11;
		float L_52 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		memset((&L_53), 0, sizeof(L_53));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_53), L_50, L_51, L_52, /*hidden argument*/NULL);
		NullCheck(L_35);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_35, L_53, NULL);
		// index++;
		int32_t L_54 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_54, 1));
		int32_t L_55 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_55, 1));
	}

IL_0135:
	{
		// foreach (Transform t in _audioObjects)
		int32_t L_56 = V_3;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_57 = V_6;
		NullCheck(L_57);
		if ((((int32_t)L_56) < ((int32_t)((int32_t)(((RuntimeArray*)L_57)->max_length)))))
		{
			goto IL_009f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProMovieCapture.Demos.AmbisonicAudioDemo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AmbisonicAudioDemo__ctor_m4732F751A80A72FF977ADCBD2F3099C939F2957F (AmbisonicAudioDemo_tEA7E9C8274964CBA1BA9486FEAC41294B07AE2C0* __this, const RuntimeMethod* method) 
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.IEnumerator RenderHeads.Media.AVProMovieCapture.Demos.ScreenCaptureDemo::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScreenCaptureDemo_Start_m34783366E8C83D4C70B3D02BE9A5A9B688C4713C (ScreenCaptureDemo_t7F6399781CBC95A17FC78A409454EC9C3F7993C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartU3Ed__8_t637F17609C889C0DE2B1E61CD58DA75EC4E2B790_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartU3Ed__8_t637F17609C889C0DE2B1E61CD58DA75EC4E2B790* L_0 = (U3CStartU3Ed__8_t637F17609C889C0DE2B1E61CD58DA75EC4E2B790*)il2cpp_codegen_object_new(U3CStartU3Ed__8_t637F17609C889C0DE2B1E61CD58DA75EC4E2B790_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStartU3Ed__8__ctor_mB1558E3A149A709F32D0A9FE38DA03C916E7CA62(L_0, 0, NULL);
		U3CStartU3Ed__8_t637F17609C889C0DE2B1E61CD58DA75EC4E2B790* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void RenderHeads.Media.AVProMovieCapture.Demos.ScreenCaptureDemo::OnBeginFinalFileWriting(RenderHeads.Media.AVProMovieCapture.FileWritingHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenCaptureDemo_OnBeginFinalFileWriting_m38D35F2405D3F66DE5FBE1908D2EB66E68BA443D (ScreenCaptureDemo_t7F6399781CBC95A17FC78A409454EC9C3F7993C0* __this, FileWritingHandler_tE89A30B4C2545943B94F9C5A2E02E9CF2937FA74* ___handler0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m2F215CF8483D53368BB97348A2E1395537C43403_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _fileWritingHandlers.Add(handler);
		List_1_t5249CBB408A0B19433CB2FDF7B56113C1F34E530* L_0 = __this->____fileWritingHandlers_11;
		FileWritingHandler_tE89A30B4C2545943B94F9C5A2E02E9CF2937FA74* L_1 = ___handler0;
		NullCheck(L_0);
		List_1_Add_m2F215CF8483D53368BB97348A2E1395537C43403_inline(L_0, L_1, List_1_Add_m2F215CF8483D53368BB97348A2E1395537C43403_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProMovieCapture.Demos.ScreenCaptureDemo::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenCaptureDemo_Update_m3188B5061D3202E215E07B5BF5FCF61A5A4CF410 (ScreenCaptureDemo_t7F6399781CBC95A17FC78A409454EC9C3F7993C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1822C7DC5EEAD63F7011AB37E1548B4097F1D9CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC5D522344E318147335684D20896995AE5743DE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKeyDown(KeyCode.S))
		bool L_0;
		L_0 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)115), NULL);
		if (!L_0)
		{
			goto IL_0065;
		}
	}
	{
		// if (_audioHit != null && _capture != null && _capture.IsCapturing())
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = __this->____audioHit_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0065;
		}
	}
	{
		CaptureBase_t2607C47ED8359FDEAC49AB637D4BD5F48F2CA26D* L_3 = __this->____capture_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0065;
		}
	}
	{
		CaptureBase_t2607C47ED8359FDEAC49AB637D4BD5F48F2CA26D* L_5 = __this->____capture_7;
		NullCheck(L_5);
		bool L_6;
		L_6 = CaptureBase_IsCapturing_m7E4A3398A3CDF34A5898E03632C56D6A23E7C105_inline(L_5, NULL);
		if (!L_6)
		{
			goto IL_0065;
		}
	}
	{
		// AudioSource.PlayClipAtPoint(_audioHit, Vector3.zero);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_7 = __this->____audioHit_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		AudioSource_PlayClipAtPoint_mDF9531618C28411888855FD6B4B58F315083B8AC(L_7, L_8, NULL);
		// Camera.main.backgroundColor = new Color(Random.value, Random.value, Random.value, 0);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_9;
		L_9 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		float L_10;
		L_10 = Random_get_value_m87344B352E686178D743B14C468EEE01757E9D43(NULL);
		float L_11;
		L_11 = Random_get_value_m87344B352E686178D743B14C468EEE01757E9D43(NULL);
		float L_12;
		L_12 = Random_get_value_m87344B352E686178D743B14C468EEE01757E9D43(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
		memset((&L_13), 0, sizeof(L_13));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_13), L_10, L_11, L_12, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_9);
		Camera_set_backgroundColor_m036FD8C316A93A0B168ACC89AFF16D396B872138(L_9, L_13, NULL);
	}

IL_0065:
	{
		// if (Input.GetKeyDown(KeyCode.Escape))
		bool L_14;
		L_14 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)27), NULL);
		if (!L_14)
		{
			goto IL_009e;
		}
	}
	{
		// if (_capture != null && _capture.IsCapturing())
		CaptureBase_t2607C47ED8359FDEAC49AB637D4BD5F48F2CA26D* L_15 = __this->____capture_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_16)
		{
			goto IL_0099;
		}
	}
	{
		CaptureBase_t2607C47ED8359FDEAC49AB637D4BD5F48F2CA26D* L_17 = __this->____capture_7;
		NullCheck(L_17);
		bool L_18;
		L_18 = CaptureBase_IsCapturing_m7E4A3398A3CDF34A5898E03632C56D6A23E7C105_inline(L_17, NULL);
		if (!L_18)
		{
			goto IL_0099;
		}
	}
	{
		// _capture.StopCapture();
		CaptureBase_t2607C47ED8359FDEAC49AB637D4BD5F48F2CA26D* L_19 = __this->____capture_7;
		NullCheck(L_19);
		VirtualActionInvoker3< bool, bool, bool >::Invoke(11 /* System.Void RenderHeads.Media.AVProMovieCapture.CaptureBase::StopCapture(System.Boolean,System.Boolean,System.Boolean) */, L_19, (bool)0, (bool)0, (bool)0);
		goto IL_009e;
	}

IL_0099:
	{
		// Application.Quit();
		Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134(NULL);
	}

IL_009e:
	{
		// if (_spinCamera && Camera.main != null)
		bool L_20 = __this->____spinCamera_9;
		if (!L_20)
		{
			goto IL_00de;
		}
	}
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_21;
		L_21 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_21, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_22)
		{
			goto IL_00de;
		}
	}
	{
		// Camera.main.transform.RotateAround(Vector3.zero, Vector3.up, 20f * Time.deltaTime * _speed);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_23;
		L_23 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		float L_27;
		L_27 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_28 = __this->____speed_6;
		NullCheck(L_24);
		Transform_RotateAround_m489C5BE8B8B15D0A5F4863DE6D23FF2CC8FA76C6(L_24, L_25, L_26, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((20.0f), L_27)), L_28)), NULL);
	}

IL_00de:
	{
		// if (FileWritingHandler.Cleanup(_fileWritingHandlers))
		List_1_t5249CBB408A0B19433CB2FDF7B56113C1F34E530* L_29 = __this->____fileWritingHandlers_11;
		bool L_30;
		L_30 = FileWritingHandler_Cleanup_m3970A85B7538075E01B20395F473716D2FBFAC2F(L_29, NULL);
		if (!L_30)
		{
			goto IL_0102;
		}
	}
	{
		// if (_fileWritingHandlers.Count == 0)
		List_1_t5249CBB408A0B19433CB2FDF7B56113C1F34E530* L_31 = __this->____fileWritingHandlers_11;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = List_1_get_Count_m1822C7DC5EEAD63F7011AB37E1548B4097F1D9CA_inline(L_31, List_1_get_Count_m1822C7DC5EEAD63F7011AB37E1548B4097F1D9CA_RuntimeMethod_var);
		if (L_32)
		{
			goto IL_0102;
		}
	}
	{
		// Debug.Log("All pending file writes completed");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralAC5D522344E318147335684D20896995AE5743DE, NULL);
	}

IL_0102:
	{
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProMovieCapture.Demos.ScreenCaptureDemo::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenCaptureDemo_OnDestroy_mC09A2F3B537D2779E4F62DA7046A66482BFDDCB9 (ScreenCaptureDemo_t7F6399781CBC95A17FC78A409454EC9C3F7993C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC5E7355DB1245283172909C09FD4BF4CD338F588_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBC9522AF36E9265CFBBDA6AC47BB6D31C4F04AA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB3891BF47A79CF2A5017187409207EEEBF5B4686_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m383AC19C149D9DAFFFE1F1C178DEE4FF0BD907F8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t6B44FB01A89CB1188659B9C4D818F4A3E3079743 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (FileWritingHandler handler in _fileWritingHandlers)
		List_1_t5249CBB408A0B19433CB2FDF7B56113C1F34E530* L_0 = __this->____fileWritingHandlers_11;
		NullCheck(L_0);
		Enumerator_t6B44FB01A89CB1188659B9C4D818F4A3E3079743 L_1;
		L_1 = List_1_GetEnumerator_m383AC19C149D9DAFFFE1F1C178DEE4FF0BD907F8(L_0, List_1_GetEnumerator_m383AC19C149D9DAFFFE1F1C178DEE4FF0BD907F8_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mC5E7355DB1245283172909C09FD4BF4CD338F588((&V_0), Enumerator_Dispose_mC5E7355DB1245283172909C09FD4BF4CD338F588_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001a_1;
			}

IL_000e_1:
			{
				// foreach (FileWritingHandler handler in _fileWritingHandlers)
				FileWritingHandler_tE89A30B4C2545943B94F9C5A2E02E9CF2937FA74* L_2;
				L_2 = Enumerator_get_Current_mB3891BF47A79CF2A5017187409207EEEBF5B4686_inline((&V_0), Enumerator_get_Current_mB3891BF47A79CF2A5017187409207EEEBF5B4686_RuntimeMethod_var);
				// handler.Dispose();
				NullCheck(L_2);
				FileWritingHandler_Dispose_mC90D8BE8C1524EEB1BED64C0D7D37E8E532FB6F8(L_2, NULL);
			}

IL_001a_1:
			{
				// foreach (FileWritingHandler handler in _fileWritingHandlers)
				bool L_3;
				L_3 = Enumerator_MoveNext_mBC9522AF36E9265CFBBDA6AC47BB6D31C4F04AA7((&V_0), Enumerator_MoveNext_mBC9522AF36E9265CFBBDA6AC47BB6D31C4F04AA7_RuntimeMethod_var);
				if (L_3)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0033;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProMovieCapture.Demos.ScreenCaptureDemo::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenCaptureDemo_OnGUI_mD628779DDF58AA90207EE7EA31DD5C7DA07827DD (ScreenCaptureDemo_t7F6399781CBC95A17FC78A409454EC9C3F7993C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E920B77007F6A0248CE38E4BC265149940D9E1F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// GUI.skin = _guiSkin;
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_0 = __this->____guiSkin_8;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_set_skin_mA5C192FA26B27648E37945E0DA7A679C09E88BAB(L_0, NULL);
		// Rect r = new Rect(Screen.width - 108, 64, 128, 28);
		int32_t L_1;
		L_1 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2;
		memset((&L_2), 0, sizeof(L_2));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_2), ((float)((int32_t)il2cpp_codegen_subtract(L_1, ((int32_t)108)))), (64.0f), (128.0f), (28.0f), /*hidden argument*/NULL);
		// GUI.Label(r, "Frame " + Time.frameCount);
		int32_t L_3;
		L_3 = Time_get_frameCount_m88E5008FE9451A892DE1F43DC8587213075890A8(NULL);
		V_0 = L_3;
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_5;
		L_5 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral2E920B77007F6A0248CE38E4BC265149940D9E1F, L_4, NULL);
		GUI_Label_mF161ED74A26AEC05C8A56F0B95F78482CE7ED5C7(L_2, L_5, NULL);
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProMovieCapture.Demos.ScreenCaptureDemo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenCaptureDemo__ctor_m6F6F29264FAE7BE16FD680A776A0335EA62A9B13 (ScreenCaptureDemo_t7F6399781CBC95A17FC78A409454EC9C3F7993C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDF71A398879F91A3E18B2928202CEDBF991CF36D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5249CBB408A0B19433CB2FDF7B56113C1F34E530_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] float _speed = 1.0f;
		__this->____speed_6 = (1.0f);
		// [SerializeField] bool _spinCamera = true;
		__this->____spinCamera_9 = (bool)1;
		// private List<FileWritingHandler> _fileWritingHandlers = new List<FileWritingHandler>(4);
		List_1_t5249CBB408A0B19433CB2FDF7B56113C1F34E530* L_0 = (List_1_t5249CBB408A0B19433CB2FDF7B56113C1F34E530*)il2cpp_codegen_object_new(List_1_t5249CBB408A0B19433CB2FDF7B56113C1F34E530_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mDF71A398879F91A3E18B2928202CEDBF991CF36D(L_0, 4, List_1__ctor_mDF71A398879F91A3E18B2928202CEDBF991CF36D_RuntimeMethod_var);
		__this->____fileWritingHandlers_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____fileWritingHandlers_11), (void*)L_0);
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
// System.Void RenderHeads.Media.AVProMovieCapture.Demos.ScreenCaptureDemo/<Start>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__8__ctor_mB1558E3A149A709F32D0A9FE38DA03C916E7CA62 (U3CStartU3Ed__8_t637F17609C889C0DE2B1E61CD58DA75EC4E2B790* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void RenderHeads.Media.AVProMovieCapture.Demos.ScreenCaptureDemo/<Start>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__8_System_IDisposable_Dispose_m2C53FBB7DA063CDDA02272684F9314AC1E9DBBE2 (U3CStartU3Ed__8_t637F17609C889C0DE2B1E61CD58DA75EC4E2B790* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean RenderHeads.Media.AVProMovieCapture.Demos.ScreenCaptureDemo/<Start>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__8_MoveNext_m5BF3F28B47DB7CF460DD940DF0CA394A28B11DC2 (U3CStartU3Ed__8_t637F17609C889C0DE2B1E61CD58DA75EC4E2B790* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t0F662C44DABB9C04CC1EEF3C68ACC88349244505_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativePlugin_t1E0FA2D9F22D8AB20E5E933EF695B307CA85FA0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScreenCaptureDemo_OnBeginFinalFileWriting_m38D35F2405D3F66DE5FBE1908D2EB66E68BA443D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ScreenCaptureDemo_t7F6399781CBC95A17FC78A409454EC9C3F7993C0* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ScreenCaptureDemo_t7F6399781CBC95A17FC78A409454EC9C3F7993C0* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_008e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (_audioBG != null)
		ScreenCaptureDemo_t7F6399781CBC95A17FC78A409454EC9C3F7993C0* L_4 = V_1;
		NullCheck(L_4);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_5 = L_4->____audioBG_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_003c;
		}
	}
	{
		// AudioSource.PlayClipAtPoint(_audioBG, Vector3.zero);
		ScreenCaptureDemo_t7F6399781CBC95A17FC78A409454EC9C3F7993C0* L_7 = V_1;
		NullCheck(L_7);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_8 = L_7->____audioBG_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		AudioSource_PlayClipAtPoint_mDF9531618C28411888855FD6B4B58F315083B8AC(L_8, L_9, NULL);
	}

IL_003c:
	{
		// if (_capture != null)
		ScreenCaptureDemo_t7F6399781CBC95A17FC78A409454EC9C3F7993C0* L_10 = V_1;
		NullCheck(L_10);
		CaptureBase_t2607C47ED8359FDEAC49AB637D4BD5F48F2CA26D* L_11 = L_10->____capture_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_12)
		{
			goto IL_0071;
		}
	}
	{
		// _capture.BeginFinalFileWritingAction += OnBeginFinalFileWriting;
		ScreenCaptureDemo_t7F6399781CBC95A17FC78A409454EC9C3F7993C0* L_13 = V_1;
		NullCheck(L_13);
		CaptureBase_t2607C47ED8359FDEAC49AB637D4BD5F48F2CA26D* L_14 = L_13->____capture_7;
		CaptureBase_t2607C47ED8359FDEAC49AB637D4BD5F48F2CA26D* L_15 = L_14;
		NullCheck(L_15);
		Action_1_t0F662C44DABB9C04CC1EEF3C68ACC88349244505* L_16;
		L_16 = CaptureBase_get_BeginFinalFileWritingAction_m280DF863DE153A3CE05E25DE2FE6D4D59729FCA5_inline(L_15, NULL);
		ScreenCaptureDemo_t7F6399781CBC95A17FC78A409454EC9C3F7993C0* L_17 = V_1;
		Action_1_t0F662C44DABB9C04CC1EEF3C68ACC88349244505* L_18 = (Action_1_t0F662C44DABB9C04CC1EEF3C68ACC88349244505*)il2cpp_codegen_object_new(Action_1_t0F662C44DABB9C04CC1EEF3C68ACC88349244505_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		Action_1__ctor_mDF00ACDD28056069FE8267ED8C05CC01D000AFBF(L_18, L_17, (intptr_t)((void*)ScreenCaptureDemo_OnBeginFinalFileWriting_m38D35F2405D3F66DE5FBE1908D2EB66E68BA443D_RuntimeMethod_var), NULL);
		Delegate_t* L_19;
		L_19 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_16, L_18, NULL);
		NullCheck(L_15);
		CaptureBase_set_BeginFinalFileWritingAction_m146A0CEDF1B0A18BFF59F5702EDFF3E8604F668B_inline(L_15, ((Action_1_t0F662C44DABB9C04CC1EEF3C68ACC88349244505*)Castclass((RuntimeObject*)L_19, Action_1_t0F662C44DABB9C04CC1EEF3C68ACC88349244505_il2cpp_TypeInfo_var)), NULL);
	}

IL_0071:
	{
		// if (!Application.HasUserAuthorization(UserAuthorization.Microphone))
		bool L_20;
		L_20 = Application_HasUserAuthorization_m7F27C13F7826778FF93CFE0DAAC4BFA995AECB2B(2, NULL);
		if (L_20)
		{
			goto IL_0095;
		}
	}
	{
		// yield return Application.RequestUserAuthorization(UserAuthorization.Microphone);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_21;
		L_21 = Application_RequestUserAuthorization_mF727A4C8BD43DD486DF6254AA531D256383AEDD7(2, NULL);
		__this->___U3CU3E2__current_1 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_21);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_008e:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0095:
	{
		// if (Application.HasUserAuthorization(UserAuthorization.Microphone))
		bool L_22;
		L_22 = Application_HasUserAuthorization_m7F27C13F7826778FF93CFE0DAAC4BFA995AECB2B(2, NULL);
		if (!L_22)
		{
			goto IL_00a3;
		}
	}
	{
		// NativePlugin.SetMicrophoneRecordingHint(true);
		il2cpp_codegen_runtime_class_init_inline(NativePlugin_t1E0FA2D9F22D8AB20E5E933EF695B307CA85FA0B_il2cpp_TypeInfo_var);
		NativePlugin_SetMicrophoneRecordingHint_m0714F10FE992F8DD1832C8CC7B9A400F8701BF40((bool)1, NULL);
	}

IL_00a3:
	{
		// }
		return (bool)0;
	}
}
// System.Object RenderHeads.Media.AVProMovieCapture.Demos.ScreenCaptureDemo/<Start>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0842BBC106E84EC0CF4C5595ADBE064B2BBF2888 (U3CStartU3Ed__8_t637F17609C889C0DE2B1E61CD58DA75EC4E2B790* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void RenderHeads.Media.AVProMovieCapture.Demos.ScreenCaptureDemo/<Start>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__8_System_Collections_IEnumerator_Reset_m9862F22C8C53C5DCB8EA0B031EC6E6B5EF302C6D (U3CStartU3Ed__8_t637F17609C889C0DE2B1E61CD58DA75EC4E2B790* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartU3Ed__8_System_Collections_IEnumerator_Reset_m9862F22C8C53C5DCB8EA0B031EC6E6B5EF302C6D_RuntimeMethod_var)));
	}
}
// System.Object RenderHeads.Media.AVProMovieCapture.Demos.ScreenCaptureDemo/<Start>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__8_System_Collections_IEnumerator_get_Current_m9E9E54AF95918CF9E9C0F647F39F7B3409A60A0A (U3CStartU3Ed__8_t637F17609C889C0DE2B1E61CD58DA75EC4E2B790* __this, const RuntimeMethod* method) 
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
// System.Void RenderHeads.Media.AVProMovieCapture.Demos.ScriptCaptureDemo::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptCaptureDemo_Start_m76AAFF611CF688BFD95905665D477FE0E6B0D6CF (ScriptCaptureDemo_t6A7B4F2D5BEF58E978B2B91C3B0A7E654AD1280E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodecManager_t325A927E25AA3EBA4354F51BC876421015138284_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativePlugin_t1E0FA2D9F22D8AB20E5E933EF695B307CA85FA0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CB4078F5FCC736B51D737E0D8C8629F6379DF86);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB989E320B83DC0FA9C57C085D286D8C61B1AD06);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (NativePlugin.Init())
		il2cpp_codegen_runtime_class_init_inline(NativePlugin_t1E0FA2D9F22D8AB20E5E933EF695B307CA85FA0B_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = NativePlugin_Init_mA0A0FBA0E5824FBAEA032B420B4A81DBE67A2A46(NULL);
		if (!L_0)
		{
			goto IL_0032;
		}
	}
	{
		// _videoCodec = CodecManager.FindCodec(CodecType.Video, X264CodecName);
		il2cpp_codegen_runtime_class_init_inline(CodecManager_t325A927E25AA3EBA4354F51BC876421015138284_il2cpp_TypeInfo_var);
		Codec_t5B18D0EB85F882306BEB0BD1068871455A8A9FD1* L_1;
		L_1 = CodecManager_FindCodec_m8D752DF8E80732953B40ACBCBC38D026876868E9(0, _stringLiteral5CB4078F5FCC736B51D737E0D8C8629F6379DF86, NULL);
		__this->____videoCodec_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____videoCodec_6), (void*)L_1);
		// if (_videoCodec == null)
		Codec_t5B18D0EB85F882306BEB0BD1068871455A8A9FD1* L_2 = __this->____videoCodec_6;
		if (L_2)
		{
			goto IL_0039;
		}
	}
	{
		// _videoCodec = CodecManager.FindCodec(CodecType.Video, FallbackCodecName);
		il2cpp_codegen_runtime_class_init_inline(CodecManager_t325A927E25AA3EBA4354F51BC876421015138284_il2cpp_TypeInfo_var);
		Codec_t5B18D0EB85F882306BEB0BD1068871455A8A9FD1* L_3;
		L_3 = CodecManager_FindCodec_m8D752DF8E80732953B40ACBCBC38D026876868E9(0, _stringLiteralCB989E320B83DC0FA9C57C085D286D8C61B1AD06, NULL);
		__this->____videoCodec_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____videoCodec_6), (void*)L_3);
		return;
	}

IL_0032:
	{
		// this.enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProMovieCapture.Demos.ScriptCaptureDemo::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptCaptureDemo_OnDestroy_m78B43DFE9AD93BD5B6F45230C14067D87CB005A9 (ScriptCaptureDemo_t6A7B4F2D5BEF58E978B2B91C3B0A7E654AD1280E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativePlugin_t1E0FA2D9F22D8AB20E5E933EF695B307CA85FA0B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NativePlugin.Deinit();
		il2cpp_codegen_runtime_class_init_inline(NativePlugin_t1E0FA2D9F22D8AB20E5E933EF695B307CA85FA0B_il2cpp_TypeInfo_var);
		NativePlugin_Deinit_m09B58339DFEB48036703A4F6D9B61C3D05129944(NULL);
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProMovieCapture.Demos.ScriptCaptureDemo::CreateVideoFromByteArray(System.String,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptCaptureDemo_CreateVideoFromByteArray_mDF62EF97876990702106DDCCD10D38375F4F646E (ScriptCaptureDemo_t6A7B4F2D5BEF58E978B2B91C3B0A7E654AD1280E* __this, String_t* ___filePath0, int32_t ___width1, int32_t ___height2, int32_t ___frameRate3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativePlugin_t1E0FA2D9F22D8AB20E5E933EF695B307CA85FA0B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// byte[] frameData = new byte[width * height * 4];
		int32_t L_0 = ___width1;
		int32_t L_1 = ___height2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_0, L_1)), 4)));
		// GCHandle frameHandle = GCHandle.Alloc(frameData, GCHandleType.Pinned);
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_3;
		L_3 = GCHandle_Alloc_m1FC35418B654D3F48B4F70D525EBD6A208A59075((RuntimeObject*)L_2, 3, NULL);
		V_0 = L_3;
		// int encoderHandle = NativePlugin.CreateRecorderVideo(filePath, (uint)width, (uint)height, frameRate, (int)NativePlugin.PixelFormat.RGBA32, false, false, _videoCodec.Index, AudioCaptureSource.None, 0, 0, -1, -1, true, null);
		String_t* L_4 = ___filePath0;
		int32_t L_5 = ___width1;
		int32_t L_6 = ___height2;
		int32_t L_7 = ___frameRate3;
		Codec_t5B18D0EB85F882306BEB0BD1068871455A8A9FD1* L_8 = __this->____videoCodec_6;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Codec_get_Index_mA1402EA62FD725AD4F7A88B0E57D3ED03C394899_inline(L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(NativePlugin_t1E0FA2D9F22D8AB20E5E933EF695B307CA85FA0B_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = NativePlugin_CreateRecorderVideo_m43B1425CF7F56371E7072C8361E031515676C553(L_4, L_5, L_6, ((float)L_7), 0, (bool)0, (bool)0, L_9, 0, 0, 0, (-1), (-1), (bool)1, (VideoEncoderHints_tC37F228E65505C6DE8CA5866F681943F61B914E0*)NULL, NULL);
		V_1 = L_10;
		// if (encoderHandle >= 0)
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		// NativePlugin.Start(encoderHandle);
		int32_t L_12 = V_1;
		il2cpp_codegen_runtime_class_init_inline(NativePlugin_t1E0FA2D9F22D8AB20E5E933EF695B307CA85FA0B_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = NativePlugin_Start_m4A7FBADFF9600DDFBF8FB5680F0EDFB010AB13DC(L_12, NULL);
		// int numFrames = 100;
		V_2 = ((int32_t)100);
		// for (int i = 0; i < numFrames; i++)
		V_3 = 0;
		goto IL_0076;
	}

IL_0044:
	{
		// int numAttempts = 32;
		V_4 = ((int32_t)32);
		goto IL_006d;
	}

IL_004a:
	{
		// if (NativePlugin.IsNewFrameDue(encoderHandle))
		int32_t L_14 = V_1;
		il2cpp_codegen_runtime_class_init_inline(NativePlugin_t1E0FA2D9F22D8AB20E5E933EF695B307CA85FA0B_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = NativePlugin_IsNewFrameDue_m360708C31FF2495ED662CBA0CE29BB1EF91C90BE(L_14, NULL);
		if (!L_15)
		{
			goto IL_0061;
		}
	}
	{
		// NativePlugin.EncodeFrame(encoderHandle, frameHandle.AddrOfPinnedObject());
		int32_t L_16 = V_1;
		intptr_t L_17;
		L_17 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6((&V_0), NULL);
		il2cpp_codegen_runtime_class_init_inline(NativePlugin_t1E0FA2D9F22D8AB20E5E933EF695B307CA85FA0B_il2cpp_TypeInfo_var);
		NativePlugin_EncodeFrame_mCFCC79475F7AAC5534087D9E7FF385DCCC064C6D(L_16, L_17, NULL);
		// break;
		goto IL_0072;
	}

IL_0061:
	{
		// System.Threading.Thread.Sleep(1);
		Thread_Sleep_m63B7D29DC735584F4D80373E48C91B34FF32D1A0(1, NULL);
		// numAttempts--;
		int32_t L_18 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
	}

IL_006d:
	{
		// while (numAttempts > 0)
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) > ((int32_t)0)))
		{
			goto IL_004a;
		}
	}

IL_0072:
	{
		// for (int i = 0; i < numFrames; i++)
		int32_t L_20 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0076:
	{
		// for (int i = 0; i < numFrames; i++)
		int32_t L_21 = V_3;
		int32_t L_22 = V_2;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0044;
		}
	}
	{
		// NativePlugin.Stop(encoderHandle, false);
		int32_t L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(NativePlugin_t1E0FA2D9F22D8AB20E5E933EF695B307CA85FA0B_il2cpp_TypeInfo_var);
		NativePlugin_Stop_m23897047A25C792BEDE5190BD41D877709172E17(L_23, (bool)0, NULL);
		// NativePlugin.FreeRecorder(encoderHandle);
		int32_t L_24 = V_1;
		NativePlugin_FreeRecorder_m20D8348E04543E63C7119187C96E4AC404336E6F(L_24, NULL);
	}

IL_0087:
	{
		// if (frameHandle.IsAllocated)
		bool L_25;
		L_25 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843((&V_0), NULL);
		if (!L_25)
		{
			goto IL_0097;
		}
	}
	{
		// frameHandle.Free();
		GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3((&V_0), NULL);
	}

IL_0097:
	{
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProMovieCapture.Demos.ScriptCaptureDemo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptCaptureDemo__ctor_m2C56F066FE02B595CD5BA124445A902056904122 (ScriptCaptureDemo_t6A7B4F2D5BEF58E978B2B91C3B0A7E654AD1280E* __this, const RuntimeMethod* method) 
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
// System.Void RenderHeads.Media.AVProMovieCapture.Demos.SurroundCaptureDemo::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurroundCaptureDemo_Update_m10D04DD9408D5241133FBAC7F4CB4AC4E1415654 (SurroundCaptureDemo_tEF7586B514D759430F857A0F204C0FE859E3C4B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _timer -= Time.deltaTime;
		float L_0 = __this->____timer_9;
		float L_1;
		L_1 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->____timer_9 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// if (_timer <= 0f)
		float L_2 = __this->____timer_9;
		if ((!(((float)L_2) <= ((float)(0.0f)))))
		{
			goto IL_0055;
		}
	}
	{
		// if (_spawn)
		bool L_3 = __this->____spawn_6;
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		// _timer = SpawnTime;
		__this->____timer_9 = (0.25f);
		// SpawnCube();
		SurroundCaptureDemo_SpawnCube_m283C3BB666687C40676A19A80F810999B0D59861(__this, NULL);
	}

IL_0038:
	{
		// if (_cubes.Count > MaxCubes || !_spawn)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = __this->____cubes_10;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_4, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_5) > ((int32_t)((int32_t)48))))
		{
			goto IL_004f;
		}
	}
	{
		bool L_6 = __this->____spawn_6;
		if (L_6)
		{
			goto IL_0055;
		}
	}

IL_004f:
	{
		// RemoveCube();
		SurroundCaptureDemo_RemoveCube_m9A6C571408F3F4B78CA5F85E08994F8C6F1C81DB(__this, NULL);
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProMovieCapture.Demos.SurroundCaptureDemo::SpawnCube()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurroundCaptureDemo_SpawnCube_m283C3BB666687C40676A19A80F810999B0D59861 (SurroundCaptureDemo_tEF7586B514D759430F857A0F204C0FE859E3C4B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	{
		// Quaternion rotation = Quaternion.Euler(Random.Range(-180f, 180f), Random.Range(-180f, 180f), Random.Range(-180f, 180f));
		float L_0;
		L_0 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((-180.0f), (180.0f), NULL);
		float L_1;
		L_1 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((-180.0f), (180.0f), NULL);
		float L_2;
		L_2 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((-180.0f), (180.0f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		// float scale = Random.Range(0.1f, 0.6f);
		float L_4;
		L_4 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((0.100000001f), (0.600000024f), NULL);
		V_1 = L_4;
		// GameObject go = (GameObject)GameObject.Instantiate(_cubePrefab, _spawnPoint.position, rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->____cubePrefab_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->____spawnPoint_4;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_5, L_7, L_8, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		V_2 = L_9;
		// Transform t = go.GetComponent<Transform>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = V_2;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728(L_10, GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728_RuntimeMethod_var);
		// go.GetComponent<Rigidbody>().AddExplosionForce(10f, _spawnPoint.position, 5f, 0f, ForceMode.Impulse);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = V_2;
		NullCheck(L_12);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_13;
		L_13 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_12, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = __this->____spawnPoint_4;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		NullCheck(L_13);
		Rigidbody_AddExplosionForce_mE4673F6D1DA0C206DA79659E9005A0F067348402(L_13, (10.0f), L_15, (5.0f), (0.0f), 1, NULL);
		// t.localScale = new Vector3(scale * 2f, scale, scale * 2f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = L_11;
		float L_17 = V_1;
		float L_18 = V_1;
		float L_19 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_20), ((float)il2cpp_codegen_multiply(L_17, (2.0f))), L_18, ((float)il2cpp_codegen_multiply(L_19, (2.0f))), /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_16, L_20, NULL);
		// t.SetParent(_spawnPoint);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = __this->____spawnPoint_4;
		NullCheck(L_16);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_16, L_21, NULL);
		// _cubes.Add(go);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_22 = __this->____cubes_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = V_2;
		NullCheck(L_22);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_22, L_23, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProMovieCapture.Demos.SurroundCaptureDemo::RemoveCube()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurroundCaptureDemo_RemoveCube_m9A6C571408F3F4B78CA5F85E08994F8C6F1C81DB (SurroundCaptureDemo_tEF7586B514D759430F857A0F204C0FE859E3C4B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B9482E5DE789E9FEEE800E443EBC576C3CE46EA);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// if (_cubes.Count > 0)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->____cubes_10;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_0, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		// GameObject go = _cubes[0];
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = __this->____cubes_10;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_2, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		V_0 = L_3;
		// go.GetComponent<Collider>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_0;
		NullCheck(L_4);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_5;
		L_5 = GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597(L_4, GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		NullCheck(L_5);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_5, (bool)0, NULL);
		// _cubes.RemoveAt(0);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6 = __this->____cubes_10;
		NullCheck(L_6);
		List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260(L_6, 0, List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var);
		// StartCoroutine("KillCube", go);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_0;
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_8;
		L_8 = MonoBehaviour_StartCoroutine_mD754B72714F15210DDA429A096D853852FF437AB(__this, _stringLiteral1B9482E5DE789E9FEEE800E443EBC576C3CE46EA, L_7, NULL);
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator RenderHeads.Media.AVProMovieCapture.Demos.SurroundCaptureDemo::KillCube(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SurroundCaptureDemo_KillCube_m6662D7BB00B0D4B350441D25596BAE9D2F601CBC (SurroundCaptureDemo_tEF7586B514D759430F857A0F204C0FE859E3C4B7* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CKillCubeU3Ed__10_tB186C73D645377CCA71BB6B0D9CED6ADF1C808B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CKillCubeU3Ed__10_tB186C73D645377CCA71BB6B0D9CED6ADF1C808B9* L_0 = (U3CKillCubeU3Ed__10_tB186C73D645377CCA71BB6B0D9CED6ADF1C808B9*)il2cpp_codegen_object_new(U3CKillCubeU3Ed__10_tB186C73D645377CCA71BB6B0D9CED6ADF1C808B9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CKillCubeU3Ed__10__ctor_m00AC89DFB9E9CDACDA4D392156E81B9B9FC23846(L_0, 0, NULL);
		U3CKillCubeU3Ed__10_tB186C73D645377CCA71BB6B0D9CED6ADF1C808B9* L_1 = L_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___go0;
		NullCheck(L_1);
		L_1->___go_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___go_2), (void*)L_2);
		return L_1;
	}
}
// System.Void RenderHeads.Media.AVProMovieCapture.Demos.SurroundCaptureDemo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurroundCaptureDemo__ctor_mD7B312F6E1D8E522622E45A3CD52F7F523E70F32 (SurroundCaptureDemo_tEF7586B514D759430F857A0F204C0FE859E3C4B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6DD2E528B694E1BF27A34AD5D41DA106FF82743C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] bool _spawn = true;
		__this->____spawn_6 = (bool)1;
		// private float _timer = SpawnTime;
		__this->____timer_9 = (0.25f);
		// private List<GameObject> _cubes = new List<GameObject>(32);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m6DD2E528B694E1BF27A34AD5D41DA106FF82743C(L_0, ((int32_t)32), List_1__ctor_m6DD2E528B694E1BF27A34AD5D41DA106FF82743C_RuntimeMethod_var);
		__this->____cubes_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____cubes_10), (void*)L_0);
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
// System.Void RenderHeads.Media.AVProMovieCapture.Demos.SurroundCaptureDemo/<KillCube>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CKillCubeU3Ed__10__ctor_m00AC89DFB9E9CDACDA4D392156E81B9B9FC23846 (U3CKillCubeU3Ed__10_tB186C73D645377CCA71BB6B0D9CED6ADF1C808B9* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void RenderHeads.Media.AVProMovieCapture.Demos.SurroundCaptureDemo/<KillCube>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CKillCubeU3Ed__10_System_IDisposable_Dispose_mA72232D7EBBA18B40589CB6A3C74713A58158431 (U3CKillCubeU3Ed__10_tB186C73D645377CCA71BB6B0D9CED6ADF1C808B9* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean RenderHeads.Media.AVProMovieCapture.Demos.SurroundCaptureDemo/<KillCube>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CKillCubeU3Ed__10_MoveNext_m0B2B71A775A834F718D83D6F7AB651B2F8FA4E93 (U3CKillCubeU3Ed__10_tB186C73D645377CCA71BB6B0D9CED6ADF1C808B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0030;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(1.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, (1.5f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0030:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Destroy(go);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___go_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_4, NULL);
		// }
		return (bool)0;
	}
}
// System.Object RenderHeads.Media.AVProMovieCapture.Demos.SurroundCaptureDemo/<KillCube>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CKillCubeU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m15DB5E96CAA282720CF24A5129C1E4ED46BB4D36 (U3CKillCubeU3Ed__10_tB186C73D645377CCA71BB6B0D9CED6ADF1C808B9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void RenderHeads.Media.AVProMovieCapture.Demos.SurroundCaptureDemo/<KillCube>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CKillCubeU3Ed__10_System_Collections_IEnumerator_Reset_mE09426D0DB13836EC7B36568363077D7430FE789 (U3CKillCubeU3Ed__10_tB186C73D645377CCA71BB6B0D9CED6ADF1C808B9* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CKillCubeU3Ed__10_System_Collections_IEnumerator_Reset_mE09426D0DB13836EC7B36568363077D7430FE789_RuntimeMethod_var)));
	}
}
// System.Object RenderHeads.Media.AVProMovieCapture.Demos.SurroundCaptureDemo/<KillCube>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CKillCubeU3Ed__10_System_Collections_IEnumerator_get_Current_m25996DC049EC36739E5C45352A33D14C24E4E276 (U3CKillCubeU3Ed__10_tB186C73D645377CCA71BB6B0D9CED6ADF1C808B9* __this, const RuntimeMethod* method) 
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
// System.Void RenderHeads.Media.AVProMovieCapture.Demos.TextureCaptureDemo::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureCaptureDemo_Start_mDAC1E699E2BA4BBEB8F1EA17B4A641D715F77943 (TextureCaptureDemo_t8FB0B1D1A285833D28FE8459509CADE103126ADB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _material = new Material(_shader);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_0 = __this->____shader_4;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_1, L_0, NULL);
		__this->____material_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____material_8), (void*)L_1);
		// _texture = new RenderTexture(_textureWidth, _textureHeight, 0, RenderTextureFormat.ARGB32, RenderTextureReadWrite.Linear);
		int32_t L_2 = __this->____textureWidth_5;
		int32_t L_3 = __this->____textureHeight_6;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_4 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)il2cpp_codegen_object_new(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		RenderTexture__ctor_m68A1B9CAA1BE0B597C5F4895C296E21502D0C962(L_4, L_2, L_3, 0, 0, 1, NULL);
		__this->____texture_9 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____texture_9), (void*)L_4);
		// _texture.filterMode = FilterMode.Bilinear;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = __this->____texture_9;
		NullCheck(L_5);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_5, 1, NULL);
		// _texture.Create();
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_6 = __this->____texture_9;
		NullCheck(L_6);
		bool L_7;
		L_7 = RenderTexture_Create_mA6E4D3CCC84AC3F68E85AA0D6609E1692C672AD2(L_6, NULL);
		// if (_movieCapture)
		CaptureFromTexture_t0C3BE946CB6E84ACF24D9998B009E007740BA5D2* L_8 = __this->____movieCapture_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_8, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		// _movieCapture.SetSourceTexture(_texture);
		CaptureFromTexture_t0C3BE946CB6E84ACF24D9998B009E007740BA5D2* L_10 = __this->____movieCapture_7;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_11 = __this->____texture_9;
		NullCheck(L_10);
		CaptureFromTexture_SetSourceTexture_mBB9CB307C4442C34DF3D7D826B40EB86C316C360_inline(L_10, L_11, NULL);
	}

IL_0061:
	{
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProMovieCapture.Demos.TextureCaptureDemo::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureCaptureDemo_OnDestroy_m0E822CF52D45EC113CF9C7E3FAE2029CEB2C9159 (TextureCaptureDemo_t8FB0B1D1A285833D28FE8459509CADE103126ADB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_material != null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____material_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// Material.Destroy(_material);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->____material_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_2, NULL);
		// _material = null;
		__this->____material_8 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____material_8), (void*)(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL);
	}

IL_0020:
	{
		// if (_texture != null)
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_3 = __this->____texture_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		// RenderTexture.Destroy(_texture);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = __this->____texture_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_5, NULL);
		// _texture = null;
		__this->____texture_9 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____texture_9), (void*)(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL);
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProMovieCapture.Demos.TextureCaptureDemo::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureCaptureDemo_Update_m5D13C5D0B90A2DBC1ED959F73BDF55CDB1198E47 (TextureCaptureDemo_t8FB0B1D1A285833D28FE8459509CADE103126ADB* __this, const RuntimeMethod* method) 
{
	{
		// UpdateTexture();
		TextureCaptureDemo_UpdateTexture_m5C46E123EF60A7926DDC4316D4E200534624E865(__this, NULL);
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProMovieCapture.Demos.TextureCaptureDemo::UpdateTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureCaptureDemo_UpdateTexture_m5C46E123EF60A7926DDC4316D4E200534624E865 (TextureCaptureDemo_t8FB0B1D1A285833D28FE8459509CADE103126ADB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Graphics.Blit(Texture2D.whiteTexture, _texture, _material);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0;
		L_0 = Texture2D_get_whiteTexture_m7999084E0B635CF834F8DD2D840FAA71720404DA(NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_1 = __this->____texture_9;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->____material_8;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m4055EA37BA8BAEF7EF29830F86ED13227780F4DD(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProMovieCapture.Demos.TextureCaptureDemo::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureCaptureDemo_OnGUI_mDF099CC15D7B04E2B83560BD57C63762A6489167 (TextureCaptureDemo_t8FB0B1D1A285833D28FE8459509CADE103126ADB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_texture != null)
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = __this->____texture_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		// GUI.depth = 100;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_set_depth_m3587BACB56CB2809E28F64EB459A0A5EC9E33BCC(((int32_t)100), NULL);
		// GUI.DrawTexture(new Rect(0f, 0f, Screen.width, Screen.height), _texture, ScaleMode.ScaleToFit, false);
		int32_t L_2;
		L_2 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		int32_t L_3;
		L_3 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_4;
		memset((&L_4), 0, sizeof(L_4));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_4), (0.0f), (0.0f), ((float)L_2), ((float)L_3), /*hidden argument*/NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = __this->____texture_9;
		GUI_DrawTexture_mD37A6215E8A48EF54F88D27698505A09CFADBF0E(L_4, L_5, 2, (bool)0, NULL);
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProMovieCapture.Demos.TextureCaptureDemo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureCaptureDemo__ctor_mE024083D12DC391F00717C9AE956CB9AF6DCAA6D (TextureCaptureDemo_t8FB0B1D1A285833D28FE8459509CADE103126ADB* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] int _textureWidth = 1024;
		__this->____textureWidth_5 = ((int32_t)1024);
		// [SerializeField] int _textureHeight = 1024;
		__this->____textureHeight_6 = ((int32_t)1024);
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
// System.Collections.IEnumerator RenderHeads.Media.AVProMovieCapture.Demos.WebcamCaptureDemo::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebcamCaptureDemo_Start_m0717C006FE1A2FF372A8C9ABC209E9916A31F61C (WebcamCaptureDemo_t86B716D0EB5CD8F4DA28BF88D59D2576FA2499D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartU3Ed__8_t129049BF6EB694C1463C8F441BFE52C23D1E3F58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartU3Ed__8_t129049BF6EB694C1463C8F441BFE52C23D1E3F58* L_0 = (U3CStartU3Ed__8_t129049BF6EB694C1463C8F441BFE52C23D1E3F58*)il2cpp_codegen_object_new(U3CStartU3Ed__8_t129049BF6EB694C1463C8F441BFE52C23D1E3F58_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStartU3Ed__8__ctor_m5BC1F2E404FA303E9D9C013AA48A2192A3BEA496(L_0, 0, NULL);
		U3CStartU3Ed__8_t129049BF6EB694C1463C8F441BFE52C23D1E3F58* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void RenderHeads.Media.AVProMovieCapture.Demos.WebcamCaptureDemo::StartWebcam(RenderHeads.Media.AVProMovieCapture.Demos.WebcamCaptureDemo/Instance)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebcamCaptureDemo_StartWebcam_m63AB17C600FC5AFDE0F49B68034E228DCA439877 (WebcamCaptureDemo_t86B716D0EB5CD8F4DA28BF88D59D2576FA2499D9* __this, Instance_t1B5CF60907DEE4026BAC889B9A6CA8B98A29135B* ___instance0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC2DC76BB597B323163591EE8157694A8FFC41CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFED6A18BDAAD9D7FAEE6AD54E6607CB8D5FB0F82);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance.texture = new WebCamTexture(instance.name, _webcamResolutionWidth, _webcamResolutionHeight, _webcamFrameRate);
		Instance_t1B5CF60907DEE4026BAC889B9A6CA8B98A29135B* L_0 = ___instance0;
		Instance_t1B5CF60907DEE4026BAC889B9A6CA8B98A29135B* L_1 = ___instance0;
		NullCheck(L_1);
		String_t* L_2 = L_1->___name_0;
		int32_t L_3 = __this->____webcamResolutionWidth_6;
		int32_t L_4 = __this->____webcamResolutionHeight_7;
		int32_t L_5 = __this->____webcamFrameRate_8;
		WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* L_6 = (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749*)il2cpp_codegen_object_new(WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WebCamTexture__ctor_mAF6018FD8752F8527E23C6A800A314C87322D1DD(L_6, L_2, L_3, L_4, L_5, NULL);
		NullCheck(L_0);
		L_0->___texture_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___texture_1), (void*)L_6);
		// instance.texture.Play();
		Instance_t1B5CF60907DEE4026BAC889B9A6CA8B98A29135B* L_7 = ___instance0;
		NullCheck(L_7);
		WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* L_8 = L_7->___texture_1;
		NullCheck(L_8);
		WebCamTexture_Play_mAB313C6F98D5433C414DA31DD96316BDE8D19A26(L_8, NULL);
		// if (instance.texture.isPlaying)
		Instance_t1B5CF60907DEE4026BAC889B9A6CA8B98A29135B* L_9 = ___instance0;
		NullCheck(L_9);
		WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* L_10 = L_9->___texture_1;
		NullCheck(L_10);
		bool L_11;
		L_11 = WebCamTexture_get_isPlaying_mE53901F249CD5FFF9D1C31DDCC2FC331DCEA80CF(L_10, NULL);
		if (!L_11)
		{
			goto IL_007c;
		}
	}
	{
		// instance.capture.WebCamTexture = instance.texture;
		Instance_t1B5CF60907DEE4026BAC889B9A6CA8B98A29135B* L_12 = ___instance0;
		NullCheck(L_12);
		CaptureFromWebCamTexture_t525D72022DA921320BDCDA434967582CFFC1913A* L_13 = L_12->___capture_2;
		Instance_t1B5CF60907DEE4026BAC889B9A6CA8B98A29135B* L_14 = ___instance0;
		NullCheck(L_14);
		WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* L_15 = L_14->___texture_1;
		NullCheck(L_13);
		CaptureFromWebCamTexture_set_WebCamTexture_m9C23C4FB3883E624D90AC094CCC2FA12B917B414(L_13, L_15, NULL);
		// Debug.Log(string.Format("Running webcam in mode {0}x{1}", instance.texture.width, instance.texture.height));
		Instance_t1B5CF60907DEE4026BAC889B9A6CA8B98A29135B* L_16 = ___instance0;
		NullCheck(L_16);
		WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* L_17 = L_16->___texture_1;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_17);
		int32_t L_19 = L_18;
		RuntimeObject* L_20 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_19);
		Instance_t1B5CF60907DEE4026BAC889B9A6CA8B98A29135B* L_21 = ___instance0;
		NullCheck(L_21);
		WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* L_22 = L_21->___texture_1;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_22);
		int32_t L_24 = L_23;
		RuntimeObject* L_25 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_24);
		String_t* L_26;
		L_26 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteralFED6A18BDAAD9D7FAEE6AD54E6607CB8D5FB0F82, L_20, L_25, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_26, NULL);
		return;
	}

IL_007c:
	{
		// Debug.Log(string.Format("Unable to start webcam in mode {0}x{1}@{2}", _webcamResolutionWidth, _webcamResolutionHeight, _webcamFrameRate));
		int32_t L_27 = __this->____webcamResolutionWidth_6;
		int32_t L_28 = L_27;
		RuntimeObject* L_29 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_28);
		int32_t L_30 = __this->____webcamResolutionHeight_7;
		int32_t L_31 = L_30;
		RuntimeObject* L_32 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_31);
		int32_t L_33 = __this->____webcamFrameRate_8;
		int32_t L_34 = L_33;
		RuntimeObject* L_35 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_34);
		String_t* L_36;
		L_36 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(_stringLiteralBC2DC76BB597B323163591EE8157694A8FFC41CE, L_29, L_32, L_35, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_36, NULL);
		// StopWebcam(instance);
		Instance_t1B5CF60907DEE4026BAC889B9A6CA8B98A29135B* L_37 = ___instance0;
		WebcamCaptureDemo_StopWebcam_m80EB1D0F3BD7A9C2D711C886B5749EE5DDFC0089(__this, L_37, NULL);
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProMovieCapture.Demos.WebcamCaptureDemo::StopWebcam(RenderHeads.Media.AVProMovieCapture.Demos.WebcamCaptureDemo/Instance)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebcamCaptureDemo_StopWebcam_m80EB1D0F3BD7A9C2D711C886B5749EE5DDFC0089 (WebcamCaptureDemo_t86B716D0EB5CD8F4DA28BF88D59D2576FA2499D9* __this, Instance_t1B5CF60907DEE4026BAC889B9A6CA8B98A29135B* ___instance0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance.texture != null)
		Instance_t1B5CF60907DEE4026BAC889B9A6CA8B98A29135B* L_0 = ___instance0;
		NullCheck(L_0);
		WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* L_1 = L_0->___texture_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0060;
		}
	}
	{
		// if (instance.capture != null && instance.capture.IsCapturing())
		Instance_t1B5CF60907DEE4026BAC889B9A6CA8B98A29135B* L_3 = ___instance0;
		NullCheck(L_3);
		CaptureFromWebCamTexture_t525D72022DA921320BDCDA434967582CFFC1913A* L_4 = L_3->___capture_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		Instance_t1B5CF60907DEE4026BAC889B9A6CA8B98A29135B* L_6 = ___instance0;
		NullCheck(L_6);
		CaptureFromWebCamTexture_t525D72022DA921320BDCDA434967582CFFC1913A* L_7 = L_6->___capture_2;
		NullCheck(L_7);
		bool L_8;
		L_8 = CaptureBase_IsCapturing_m7E4A3398A3CDF34A5898E03632C56D6A23E7C105_inline(L_7, NULL);
		if (!L_8)
		{
			goto IL_0043;
		}
	}
	{
		// instance.capture.WebCamTexture = null;
		Instance_t1B5CF60907DEE4026BAC889B9A6CA8B98A29135B* L_9 = ___instance0;
		NullCheck(L_9);
		CaptureFromWebCamTexture_t525D72022DA921320BDCDA434967582CFFC1913A* L_10 = L_9->___capture_2;
		NullCheck(L_10);
		CaptureFromWebCamTexture_set_WebCamTexture_m9C23C4FB3883E624D90AC094CCC2FA12B917B414(L_10, (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749*)NULL, NULL);
		// instance.capture.StopCapture();
		Instance_t1B5CF60907DEE4026BAC889B9A6CA8B98A29135B* L_11 = ___instance0;
		NullCheck(L_11);
		CaptureFromWebCamTexture_t525D72022DA921320BDCDA434967582CFFC1913A* L_12 = L_11->___capture_2;
		NullCheck(L_12);
		VirtualActionInvoker3< bool, bool, bool >::Invoke(11 /* System.Void RenderHeads.Media.AVProMovieCapture.CaptureBase::StopCapture(System.Boolean,System.Boolean,System.Boolean) */, L_12, (bool)0, (bool)0, (bool)0);
	}

IL_0043:
	{
		// instance.texture.Stop();
		Instance_t1B5CF60907DEE4026BAC889B9A6CA8B98A29135B* L_13 = ___instance0;
		NullCheck(L_13);
		WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* L_14 = L_13->___texture_1;
		NullCheck(L_14);
		WebCamTexture_Stop_m6239B5D1E10C53B57BB30E124E3F541EBD46A184(L_14, NULL);
		// Destroy(instance.texture);
		Instance_t1B5CF60907DEE4026BAC889B9A6CA8B98A29135B* L_15 = ___instance0;
		NullCheck(L_15);
		WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* L_16 = L_15->___texture_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_16, NULL);
		// instance.texture = null;
		Instance_t1B5CF60907DEE4026BAC889B9A6CA8B98A29135B* L_17 = ___instance0;
		NullCheck(L_17);
		L_17->___texture_1 = (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_17->___texture_1), (void*)(WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749*)NULL);
	}

IL_0060:
	{
		// _selectedWebcamIndex = -1;
		__this->____selectedWebcamIndex_10 = (-1);
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProMovieCapture.Demos.WebcamCaptureDemo::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebcamCaptureDemo_OnDestroy_m05961D3AFE8B4B3D2A6F3FCC5C1FEDEC6C805599 (WebcamCaptureDemo_t86B716D0EB5CD8F4DA28BF88D59D2576FA2499D9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < _instances.Length; i++)
		V_0 = 0;
		goto IL_0016;
	}

IL_0004:
	{
		// StopWebcam(_instances[i]);
		InstanceU5BU5D_tB5C15354627E88FE454CB01D8D6601A138AD8B35* L_0 = __this->____instances_9;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Instance_t1B5CF60907DEE4026BAC889B9A6CA8B98A29135B* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		WebcamCaptureDemo_StopWebcam_m80EB1D0F3BD7A9C2D711C886B5749EE5DDFC0089(__this, L_3, NULL);
		// for (int i = 0; i < _instances.Length; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0016:
	{
		// for (int i = 0; i < _instances.Length; i++)
		int32_t L_5 = V_0;
		InstanceU5BU5D_tB5C15354627E88FE454CB01D8D6601A138AD8B35* L_6 = __this->____instances_9;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProMovieCapture.Demos.WebcamCaptureDemo::SelectWebcam(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebcamCaptureDemo_SelectWebcam_mDB506877480CADEDE571DA05725CC011828D0E41 (WebcamCaptureDemo_t86B716D0EB5CD8F4DA28BF88D59D2576FA2499D9* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (_selectedWebcamIndex >= 0)
		int32_t L_0 = __this->____selectedWebcamIndex_10;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		// StopWebcam(_instances[_selectedWebcamIndex]);
		InstanceU5BU5D_tB5C15354627E88FE454CB01D8D6601A138AD8B35* L_1 = __this->____instances_9;
		int32_t L_2 = __this->____selectedWebcamIndex_10;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Instance_t1B5CF60907DEE4026BAC889B9A6CA8B98A29135B* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		WebcamCaptureDemo_StopWebcam_m80EB1D0F3BD7A9C2D711C886B5749EE5DDFC0089(__this, L_4, NULL);
		// _selectedWebcamIndex = -1;
		__this->____selectedWebcamIndex_10 = (-1);
	}

IL_0023:
	{
		// if (index >= 0)
		int32_t L_5 = ___index0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_006f;
		}
	}
	{
		// _selectedWebcamIndex = index;
		int32_t L_6 = ___index0;
		__this->____selectedWebcamIndex_10 = L_6;
		// for (int j = 0; j < _instances.Length; j++)
		V_0 = 0;
		goto IL_0051;
	}

IL_0032:
	{
		// _instances[j].gui.ShowUI = (j == _selectedWebcamIndex);
		InstanceU5BU5D_tB5C15354627E88FE454CB01D8D6601A138AD8B35* L_7 = __this->____instances_9;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Instance_t1B5CF60907DEE4026BAC889B9A6CA8B98A29135B* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		CaptureGUI_t4BD3D37209E44BDE2731E0ADC390D8BC56532BF3* L_11 = L_10->___gui_3;
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____selectedWebcamIndex_10;
		NullCheck(L_11);
		CaptureGUI_set_ShowUI_mAE6F814E4C5BD17A6EEBADB05CD90D03F4879E36_inline(L_11, (bool)((((int32_t)L_12) == ((int32_t)L_13))? 1 : 0), NULL);
		// for (int j = 0; j < _instances.Length; j++)
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0051:
	{
		// for (int j = 0; j < _instances.Length; j++)
		int32_t L_15 = V_0;
		InstanceU5BU5D_tB5C15354627E88FE454CB01D8D6601A138AD8B35* L_16 = __this->____instances_9;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_0032;
		}
	}
	{
		// StartWebcam(_instances[_selectedWebcamIndex]);
		InstanceU5BU5D_tB5C15354627E88FE454CB01D8D6601A138AD8B35* L_17 = __this->____instances_9;
		int32_t L_18 = __this->____selectedWebcamIndex_10;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Instance_t1B5CF60907DEE4026BAC889B9A6CA8B98A29135B* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		WebcamCaptureDemo_StartWebcam_m63AB17C600FC5AFDE0F49B68034E228DCA439877(__this, L_20, NULL);
	}

IL_006f:
	{
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProMovieCapture.Demos.WebcamCaptureDemo::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebcamCaptureDemo_OnGUI_mA9328A5650972C1EB57DDF4E97EB496CD96724CC (WebcamCaptureDemo_t86B716D0EB5CD8F4DA28BF88D59D2576FA2499D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE11C6AF008F73AAE7D90F6E72278287941D053);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Instance_t1B5CF60907DEE4026BAC889B9A6CA8B98A29135B* V_1 = NULL;
	float V_2 = 0.0f;
	{
		// GUI.skin = _skin;
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_0 = __this->____skin_4;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_set_skin_mA5C192FA26B27648E37945E0DA7A679C09E88BAB(L_0, NULL);
		// GUILayout.BeginArea(new Rect(Screen.width - 512, 0, 512, Screen.height));
		int32_t L_1;
		L_1 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		int32_t L_2;
		L_2 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3;
		memset((&L_3), 0, sizeof(L_3));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_3), ((float)((int32_t)il2cpp_codegen_subtract(L_1, ((int32_t)512)))), (0.0f), (512.0f), ((float)L_2), /*hidden argument*/NULL);
		GUILayout_BeginArea_mA941799D3368A14C4ED7AC8516806369EAF01692(L_3, NULL);
		// GUILayout.BeginVertical();
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_4;
		L_4 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_BeginVertical_mEA80BF63631637EDAAD761D32BAFC49A404F0842(L_4, NULL);
		// GUILayout.Label("Select webcam:");
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_5;
		L_5 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_Label_mCB93C0DE81ECE87DE34C8B959C5885E9B6E4FEBA(_stringLiteral9CE11C6AF008F73AAE7D90F6E72278287941D053, L_5, NULL);
		// for (int i = 0; i < _instances.Length; i++)
		V_0 = 0;
		goto IL_01a4;
	}

IL_0051:
	{
		// Instance webcam = _instances[i];
		InstanceU5BU5D_tB5C15354627E88FE454CB01D8D6601A138AD8B35* L_6 = __this->____instances_9;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Instance_t1B5CF60907DEE4026BAC889B9A6CA8B98A29135B* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_1 = L_9;
		// GUILayout.BeginHorizontal(GUILayout.ExpandWidth(true));
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_10 = (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)SZArrayNew(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var, (uint32_t)1);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_11 = L_10;
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_12;
		L_12 = GUILayout_ExpandWidth_m9597958487AFF2D7EE649CA0EEABDA4F862AC692((bool)1, NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14*)L_12);
		GUILayout_BeginHorizontal_mB753A68BD1357463FEA9F7273FED94085A79BA37(L_11, NULL);
		// if (webcam.capture.IsCapturing())
		Instance_t1B5CF60907DEE4026BAC889B9A6CA8B98A29135B* L_13 = V_1;
		NullCheck(L_13);
		CaptureFromWebCamTexture_t525D72022DA921320BDCDA434967582CFFC1913A* L_14 = L_13->___capture_2;
		NullCheck(L_14);
		bool L_15;
		L_15 = CaptureBase_IsCapturing_m7E4A3398A3CDF34A5898E03632C56D6A23E7C105_inline(L_14, NULL);
		if (!L_15)
		{
			goto IL_00bb;
		}
	}
	{
		// float t = Mathf.PingPong(Time.timeSinceLevelLoad, 0.25f) * 4f;
		float L_16;
		L_16 = Time_get_timeSinceLevelLoad_m0AA090B0D9CF98F4A7E8AE81ABE29459DBE28C9A(NULL);
		float L_17;
		L_17 = Mathf_PingPong_m157C55BCFEA2BB96680B7B29D714C3F9390551C9_inline(L_16, (0.25f), NULL);
		V_2 = ((float)il2cpp_codegen_multiply(L_17, (4.0f)));
		// GUI.backgroundColor = Color.Lerp(GUI.backgroundColor, Color.white, t);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18;
		L_18 = GUI_get_backgroundColor_mEC7D5EC6B1877C56FB459EDBAEE90E38C141AB99(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19;
		L_19 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		float L_20 = V_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_21;
		L_21 = Color_Lerp_mCE0CF50E59713C5A8F6AAC2C6648CF0EDBEEB27B_inline(L_18, L_19, L_20, NULL);
		GUI_set_backgroundColor_mD83447BE5F90369CB39C37943528A4D8751B14A1(L_21, NULL);
		// GUI.color = Color.Lerp(Color.red, Color.white, t);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		L_22 = Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23;
		L_23 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		float L_24 = V_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25;
		L_25 = Color_Lerp_mCE0CF50E59713C5A8F6AAC2C6648CF0EDBEEB27B_inline(L_22, L_23, L_24, NULL);
		GUI_set_color_mBB4E17B3600770E2EEEA61AA956D2207EAF112C7(L_25, NULL);
	}

IL_00bb:
	{
		// if (_selectedWebcamIndex == i)
		int32_t L_26 = __this->____selectedWebcamIndex_10;
		int32_t L_27 = V_0;
		if ((!(((uint32_t)L_26) == ((uint32_t)L_27))))
		{
			goto IL_00ce;
		}
	}
	{
		// GUI.backgroundColor = Color.green;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28;
		L_28 = Color_get_green_m336EB73DD4A5B11B7F405CF4BC7F37A466FB4FF7_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_set_backgroundColor_mD83447BE5F90369CB39C37943528A4D8751B14A1(L_28, NULL);
	}

IL_00ce:
	{
		// if (GUILayout.Button(webcam.name, GUILayout.Width(200), GUILayout.ExpandWidth(true)))
		Instance_t1B5CF60907DEE4026BAC889B9A6CA8B98A29135B* L_29 = V_1;
		NullCheck(L_29);
		String_t* L_30 = L_29->___name_0;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_31 = (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)SZArrayNew(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var, (uint32_t)2);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_32 = L_31;
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_33;
		L_33 = GUILayout_Width_m3CD0F9B520A1B7BF065D30844E2F9965277E1DAA((200.0f), NULL);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_33);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14*)L_33);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_34 = L_32;
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_35;
		L_35 = GUILayout_ExpandWidth_m9597958487AFF2D7EE649CA0EEABDA4F862AC692((bool)1, NULL);
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_35);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(1), (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14*)L_35);
		bool L_36;
		L_36 = GUILayout_Button_m6D4E3D32A001EF42DB5C2052B4C19AB3B518566C(L_30, L_34, NULL);
		if (!L_36)
		{
			goto IL_0110;
		}
	}
	{
		// if (_selectedWebcamIndex != i)
		int32_t L_37 = __this->____selectedWebcamIndex_10;
		int32_t L_38 = V_0;
		if ((((int32_t)L_37) == ((int32_t)L_38)))
		{
			goto IL_0109;
		}
	}
	{
		// SelectWebcam(i);
		int32_t L_39 = V_0;
		WebcamCaptureDemo_SelectWebcam_mDB506877480CADEDE571DA05725CC011828D0E41(__this, L_39, NULL);
		goto IL_0110;
	}

IL_0109:
	{
		// StopWebcam(webcam);
		Instance_t1B5CF60907DEE4026BAC889B9A6CA8B98A29135B* L_40 = V_1;
		WebcamCaptureDemo_StopWebcam_m80EB1D0F3BD7A9C2D711C886B5749EE5DDFC0089(__this, L_40, NULL);
	}

IL_0110:
	{
		// GUI.backgroundColor = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41;
		L_41 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_set_backgroundColor_mD83447BE5F90369CB39C37943528A4D8751B14A1(L_41, NULL);
		// GUI.color = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_42;
		L_42 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		GUI_set_color_mBB4E17B3600770E2EEEA61AA956D2207EAF112C7(L_42, NULL);
		// if (webcam.texture != null)
		Instance_t1B5CF60907DEE4026BAC889B9A6CA8B98A29135B* L_43 = V_1;
		NullCheck(L_43);
		WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* L_44 = L_43->___texture_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_45;
		L_45 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_44, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_45)
		{
			goto IL_0168;
		}
	}
	{
		// Rect camRect = GUILayoutUtility.GetRect(256, 256.0f / (webcam.texture.width / (float)webcam.texture.height));
		Instance_t1B5CF60907DEE4026BAC889B9A6CA8B98A29135B* L_46 = V_1;
		NullCheck(L_46);
		WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* L_47 = L_46->___texture_1;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_47);
		Instance_t1B5CF60907DEE4026BAC889B9A6CA8B98A29135B* L_49 = V_1;
		NullCheck(L_49);
		WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* L_50 = L_49->___texture_1;
		NullCheck(L_50);
		int32_t L_51;
		L_51 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_50);
		il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_52;
		L_52 = GUILayoutUtility_GetRect_mC4C37778FB240DCFF4C8A59860DC2D52806D09F2((256.0f), ((float)((256.0f)/((float)(((float)L_48)/((float)L_51))))), NULL);
		// GUI.DrawTexture(camRect, webcam.texture);
		Instance_t1B5CF60907DEE4026BAC889B9A6CA8B98A29135B* L_53 = V_1;
		NullCheck(L_53);
		WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* L_54 = L_53->___texture_1;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_DrawTexture_m4DC8E4DE66E5B806D6C71E9BFC8B122DB2A51F09(L_52, L_54, NULL);
		goto IL_019b;
	}

IL_0168:
	{
		// GUILayout.Label(string.Empty, GUILayout.MinWidth(256.0f), GUILayout.MaxWidth(256.0f), GUILayout.ExpandWidth(false));
		String_t* L_55 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_56 = (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)SZArrayNew(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var, (uint32_t)3);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_57 = L_56;
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_58;
		L_58 = GUILayout_MinWidth_mB70FB513BEE31220D6DDD10F8EACD616A90C2ED1((256.0f), NULL);
		NullCheck(L_57);
		ArrayElementTypeCheck (L_57, L_58);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14*)L_58);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_59 = L_57;
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_60;
		L_60 = GUILayout_MaxWidth_m8AD51EFD3981488BB5B3B0405797143B4ECCE047((256.0f), NULL);
		NullCheck(L_59);
		ArrayElementTypeCheck (L_59, L_60);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(1), (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14*)L_60);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_61 = L_59;
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_62;
		L_62 = GUILayout_ExpandWidth_m9597958487AFF2D7EE649CA0EEABDA4F862AC692((bool)0, NULL);
		NullCheck(L_61);
		ArrayElementTypeCheck (L_61, L_62);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(2), (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14*)L_62);
		GUILayout_Label_mCB93C0DE81ECE87DE34C8B959C5885E9B6E4FEBA(L_55, L_61, NULL);
	}

IL_019b:
	{
		// GUILayout.EndHorizontal();
		GUILayout_EndHorizontal_mCB61DC8BE8359CAB9911BDD4F2AB6819AB75DBEC(NULL);
		// for (int i = 0; i < _instances.Length; i++)
		int32_t L_63 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_63, 1));
	}

IL_01a4:
	{
		// for (int i = 0; i < _instances.Length; i++)
		int32_t L_64 = V_0;
		InstanceU5BU5D_tB5C15354627E88FE454CB01D8D6601A138AD8B35* L_65 = __this->____instances_9;
		NullCheck(L_65);
		if ((((int32_t)L_64) < ((int32_t)((int32_t)(((RuntimeArray*)L_65)->max_length)))))
		{
			goto IL_0051;
		}
	}
	{
		// GUILayout.EndVertical();
		GUILayout_EndVertical_mF2C806265D9B04E715EC1656FA9392332C59EEBC(NULL);
		// GUILayout.EndArea();
		GUILayout_EndArea_m1A496B300C5FDCEA653A1652CBA173F42E134371(NULL);
		// }
		return;
	}
}
// System.Void RenderHeads.Media.AVProMovieCapture.Demos.WebcamCaptureDemo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebcamCaptureDemo__ctor_m9E75D8ED3997339F0610B1A8D3A39FFAC6FE1B3E (WebcamCaptureDemo_t86B716D0EB5CD8F4DA28BF88D59D2576FA2499D9* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] int _webcamResolutionWidth = 640;
		__this->____webcamResolutionWidth_6 = ((int32_t)640);
		// [SerializeField] int _webcamResolutionHeight = 480;
		__this->____webcamResolutionHeight_7 = ((int32_t)480);
		// [SerializeField] int _webcamFrameRate = 30;
		__this->____webcamFrameRate_8 = ((int32_t)30);
		// private int _selectedWebcamIndex = -1;
		__this->____selectedWebcamIndex_10 = (-1);
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
// System.Void RenderHeads.Media.AVProMovieCapture.Demos.WebcamCaptureDemo/Instance::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instance__ctor_m69890B1729452BC768374A34A963457745B2657E (Instance_t1B5CF60907DEE4026BAC889B9A6CA8B98A29135B* __this, const RuntimeMethod* method) 
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
// System.Void RenderHeads.Media.AVProMovieCapture.Demos.WebcamCaptureDemo/<Start>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__8__ctor_m5BC1F2E404FA303E9D9C013AA48A2192A3BEA496 (U3CStartU3Ed__8_t129049BF6EB694C1463C8F441BFE52C23D1E3F58* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void RenderHeads.Media.AVProMovieCapture.Demos.WebcamCaptureDemo/<Start>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__8_System_IDisposable_Dispose_mEE163C6D8911ABC8FD1E34AE2D4E056EF7DE33A3 (U3CStartU3Ed__8_t129049BF6EB694C1463C8F441BFE52C23D1E3F58* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean RenderHeads.Media.AVProMovieCapture.Demos.WebcamCaptureDemo/<Start>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__8_MoveNext_m6FA0A4A7BF2B257163050B470B79A49C5F7846CE (U3CStartU3Ed__8_t129049BF6EB694C1463C8F441BFE52C23D1E3F58* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCaptureFromWebCamTexture_t525D72022DA921320BDCDA434967582CFFC1913A_mF182986E3F7793C10A55F6976F6B19D0C7547471_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCaptureGUI_t4BD3D37209E44BDE2731E0ADC390D8BC56532BF3_m81666B1464B54456766D532F75D06B6C0FE35107_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InstanceU5BU5D_tB5C15354627E88FE454CB01D8D6601A138AD8B35_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Instance_t1B5CF60907DEE4026BAC889B9A6CA8B98A29135B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0985A1EBC1BDF4F7AA2CCCA86E0218E4EBDFF032);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WebcamCaptureDemo_t86B716D0EB5CD8F4DA28BF88D59D2576FA2499D9* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_4 = NULL;
	Instance_t1B5CF60907DEE4026BAC889B9A6CA8B98A29135B* V_5 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		WebcamCaptureDemo_t86B716D0EB5CD8F4DA28BF88D59D2576FA2499D9* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00e7;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// int numCams = WebCamTexture.devices.Length;
		WebCamDeviceU5BU5D_tA5B1352BDE6FE233B66C3ABF96E00EB3215629F5* L_4;
		L_4 = WebCamTexture_get_devices_mB2BEC8F4A104FD1B50EDC910C75379129D936EAF(NULL);
		NullCheck(L_4);
		V_2 = ((int32_t)(((RuntimeArray*)L_4)->max_length));
		// _instances = new Instance[numCams];
		WebcamCaptureDemo_t86B716D0EB5CD8F4DA28BF88D59D2576FA2499D9* L_5 = V_1;
		int32_t L_6 = V_2;
		InstanceU5BU5D_tB5C15354627E88FE454CB01D8D6601A138AD8B35* L_7 = (InstanceU5BU5D_tB5C15354627E88FE454CB01D8D6601A138AD8B35*)(InstanceU5BU5D_tB5C15354627E88FE454CB01D8D6601A138AD8B35*)SZArrayNew(InstanceU5BU5D_tB5C15354627E88FE454CB01D8D6601A138AD8B35_il2cpp_TypeInfo_var, (uint32_t)L_6);
		NullCheck(L_5);
		L_5->____instances_9 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->____instances_9), (void*)L_7);
		// for (int i = 0; i < numCams; i++)
		V_3 = 0;
		goto IL_00b8;
	}

IL_0039:
	{
		// GameObject go = (GameObject)GameObject.Instantiate(_prefab);
		WebcamCaptureDemo_t86B716D0EB5CD8F4DA28BF88D59D2576FA2499D9* L_8 = V_1;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = L_8->____prefab_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D(L_9, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		V_4 = L_10;
		// Instance instance = new Instance();
		Instance_t1B5CF60907DEE4026BAC889B9A6CA8B98A29135B* L_11 = (Instance_t1B5CF60907DEE4026BAC889B9A6CA8B98A29135B*)il2cpp_codegen_object_new(Instance_t1B5CF60907DEE4026BAC889B9A6CA8B98A29135B_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Instance__ctor_m69890B1729452BC768374A34A963457745B2657E(L_11, NULL);
		V_5 = L_11;
		// instance.name = WebCamTexture.devices[i].name;
		Instance_t1B5CF60907DEE4026BAC889B9A6CA8B98A29135B* L_12 = V_5;
		WebCamDeviceU5BU5D_tA5B1352BDE6FE233B66C3ABF96E00EB3215629F5* L_13;
		L_13 = WebCamTexture_get_devices_mB2BEC8F4A104FD1B50EDC910C75379129D936EAF(NULL);
		int32_t L_14 = V_3;
		NullCheck(L_13);
		String_t* L_15;
		L_15 = WebCamDevice_get_name_m2BF75E8EA486668299906EAC9B35214890D4601E(((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14))), NULL);
		NullCheck(L_12);
		L_12->___name_0 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->___name_0), (void*)L_15);
		// instance.capture = go.GetComponent<CaptureFromWebCamTexture>();
		Instance_t1B5CF60907DEE4026BAC889B9A6CA8B98A29135B* L_16 = V_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = V_4;
		NullCheck(L_17);
		CaptureFromWebCamTexture_t525D72022DA921320BDCDA434967582CFFC1913A* L_18;
		L_18 = GameObject_GetComponent_TisCaptureFromWebCamTexture_t525D72022DA921320BDCDA434967582CFFC1913A_mF182986E3F7793C10A55F6976F6B19D0C7547471(L_17, GameObject_GetComponent_TisCaptureFromWebCamTexture_t525D72022DA921320BDCDA434967582CFFC1913A_mF182986E3F7793C10A55F6976F6B19D0C7547471_RuntimeMethod_var);
		NullCheck(L_16);
		L_16->___capture_2 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&L_16->___capture_2), (void*)L_18);
		// instance.capture.FilenamePrefix = "Demo4Webcam-" + i;
		Instance_t1B5CF60907DEE4026BAC889B9A6CA8B98A29135B* L_19 = V_5;
		NullCheck(L_19);
		CaptureFromWebCamTexture_t525D72022DA921320BDCDA434967582CFFC1913A* L_20 = L_19->___capture_2;
		String_t* L_21;
		L_21 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_3), NULL);
		String_t* L_22;
		L_22 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral0985A1EBC1BDF4F7AA2CCCA86E0218E4EBDFF032, L_21, NULL);
		NullCheck(L_20);
		CaptureBase_set_FilenamePrefix_mA7CAE85E11DD10B97D47CF3949A6BC2460DA80EF_inline(L_20, L_22, NULL);
		// instance.gui = go.GetComponent<CaptureGUI>();
		Instance_t1B5CF60907DEE4026BAC889B9A6CA8B98A29135B* L_23 = V_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = V_4;
		NullCheck(L_24);
		CaptureGUI_t4BD3D37209E44BDE2731E0ADC390D8BC56532BF3* L_25;
		L_25 = GameObject_GetComponent_TisCaptureGUI_t4BD3D37209E44BDE2731E0ADC390D8BC56532BF3_m81666B1464B54456766D532F75D06B6C0FE35107(L_24, GameObject_GetComponent_TisCaptureGUI_t4BD3D37209E44BDE2731E0ADC390D8BC56532BF3_m81666B1464B54456766D532F75D06B6C0FE35107_RuntimeMethod_var);
		NullCheck(L_23);
		L_23->___gui_3 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&L_23->___gui_3), (void*)L_25);
		// instance.gui.ShowUI = false;
		Instance_t1B5CF60907DEE4026BAC889B9A6CA8B98A29135B* L_26 = V_5;
		NullCheck(L_26);
		CaptureGUI_t4BD3D37209E44BDE2731E0ADC390D8BC56532BF3* L_27 = L_26->___gui_3;
		NullCheck(L_27);
		CaptureGUI_set_ShowUI_mAE6F814E4C5BD17A6EEBADB05CD90D03F4879E36_inline(L_27, (bool)0, NULL);
		// _instances[i] = instance;
		WebcamCaptureDemo_t86B716D0EB5CD8F4DA28BF88D59D2576FA2499D9* L_28 = V_1;
		NullCheck(L_28);
		InstanceU5BU5D_tB5C15354627E88FE454CB01D8D6601A138AD8B35* L_29 = L_28->____instances_9;
		int32_t L_30 = V_3;
		Instance_t1B5CF60907DEE4026BAC889B9A6CA8B98A29135B* L_31 = V_5;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_31);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (Instance_t1B5CF60907DEE4026BAC889B9A6CA8B98A29135B*)L_31);
		// for (int i = 0; i < numCams; i++)
		int32_t L_32 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_00b8:
	{
		// for (int i = 0; i < numCams; i++)
		int32_t L_33 = V_3;
		int32_t L_34 = V_2;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0039;
		}
	}
	{
		// if (numCams > 0)
		int32_t L_35 = V_2;
		if ((((int32_t)L_35) <= ((int32_t)0)))
		{
			goto IL_00ca;
		}
	}
	{
		// SelectWebcam(0);
		WebcamCaptureDemo_t86B716D0EB5CD8F4DA28BF88D59D2576FA2499D9* L_36 = V_1;
		NullCheck(L_36);
		WebcamCaptureDemo_SelectWebcam_mDB506877480CADEDE571DA05725CC011828D0E41(L_36, 0, NULL);
	}

IL_00ca:
	{
		// if (!Application.HasUserAuthorization(UserAuthorization.WebCam))
		bool L_37;
		L_37 = Application_HasUserAuthorization_m7F27C13F7826778FF93CFE0DAAC4BFA995AECB2B(1, NULL);
		if (L_37)
		{
			goto IL_00ee;
		}
	}
	{
		// yield return Application.RequestUserAuthorization(UserAuthorization.WebCam);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_38;
		L_38 = Application_RequestUserAuthorization_mF727A4C8BD43DD486DF6254AA531D256383AEDD7(1, NULL);
		__this->___U3CU3E2__current_1 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_38);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00e7:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00ee:
	{
		// }
		return (bool)0;
	}
}
// System.Object RenderHeads.Media.AVProMovieCapture.Demos.WebcamCaptureDemo/<Start>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mDBE876C7A877E81CA24E82630A018FE3FE5E1F58 (U3CStartU3Ed__8_t129049BF6EB694C1463C8F441BFE52C23D1E3F58* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void RenderHeads.Media.AVProMovieCapture.Demos.WebcamCaptureDemo/<Start>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__8_System_Collections_IEnumerator_Reset_mDD173F964249D06A11A4F983CB34862C18842C49 (U3CStartU3Ed__8_t129049BF6EB694C1463C8F441BFE52C23D1E3F58* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartU3Ed__8_System_Collections_IEnumerator_Reset_mDD173F964249D06A11A4F983CB34862C18842C49_RuntimeMethod_var)));
	}
}
// System.Object RenderHeads.Media.AVProMovieCapture.Demos.WebcamCaptureDemo/<Start>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__8_System_Collections_IEnumerator_get_Current_mC9DF03AED39913A42DE59EA0193DAF8F8EF53481 (U3CStartU3Ed__8_t129049BF6EB694C1463C8F441BFE52C23D1E3F58* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_PingPong_m157C55BCFEA2BB96680B7B29D714C3F9390551C9_inline (float ___t0, float ___length1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___t0;
		float L_1 = ___length1;
		float L_2;
		L_2 = Mathf_Repeat_m1ACDE7EF466FB6CCAD29B3866E4A239A8530E9D5_inline(L_0, ((float)il2cpp_codegen_multiply(L_1, (2.0f))), NULL);
		___t0 = L_2;
		float L_3 = ___length1;
		float L_4 = ___t0;
		float L_5 = ___length1;
		float L_6;
		L_6 = fabsf(((float)il2cpp_codegen_subtract(L_4, L_5)));
		V_0 = ((float)il2cpp_codegen_subtract(L_3, L_6));
		goto IL_001d;
	}

IL_001d:
	{
		float L_7 = V_0;
		return L_7;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CaptureBase_IsCapturing_m7E4A3398A3CDF34A5898E03632C56D6A23E7C105_inline (CaptureBase_t2607C47ED8359FDEAC49AB637D4BD5F48F2CA26D* __this, const RuntimeMethod* method) 
{
	{
		// return _capturing;
		bool L_0 = __this->____capturing_79;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_t0F662C44DABB9C04CC1EEF3C68ACC88349244505* CaptureBase_get_BeginFinalFileWritingAction_m280DF863DE153A3CE05E25DE2FE6D4D59729FCA5_inline (CaptureBase_t2607C47ED8359FDEAC49AB637D4BD5F48F2CA26D* __this, const RuntimeMethod* method) 
{
	{
		// get { return _beginFinalFileWritingAction; }
		Action_1_t0F662C44DABB9C04CC1EEF3C68ACC88349244505* L_0 = __this->____beginFinalFileWritingAction_100;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CaptureBase_set_BeginFinalFileWritingAction_m146A0CEDF1B0A18BFF59F5702EDFF3E8604F668B_inline (CaptureBase_t2607C47ED8359FDEAC49AB637D4BD5F48F2CA26D* __this, Action_1_t0F662C44DABB9C04CC1EEF3C68ACC88349244505* ___value0, const RuntimeMethod* method) 
{
	{
		// set { _beginFinalFileWritingAction = value; }
		Action_1_t0F662C44DABB9C04CC1EEF3C68ACC88349244505* L_0 = ___value0;
		__this->____beginFinalFileWritingAction_100 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____beginFinalFileWritingAction_100), (void*)L_0);
		// set { _beginFinalFileWritingAction = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Codec_get_Index_mA1402EA62FD725AD4F7A88B0E57D3ED03C394899_inline (Codec_t5B18D0EB85F882306BEB0BD1068871455A8A9FD1* __this, const RuntimeMethod* method) 
{
	{
		// public int Index { get { return _index; } }
		int32_t L_0 = __this->____index_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CaptureFromTexture_SetSourceTexture_mBB9CB307C4442C34DF3D7D826B40EB86C316C360_inline (CaptureFromTexture_t0C3BE946CB6E84ACF24D9998B009E007740BA5D2* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture0, const RuntimeMethod* method) 
{
	{
		// _sourceTexture = texture;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = ___texture0;
		__this->____sourceTexture_106 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____sourceTexture_106), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CaptureGUI_set_ShowUI_mAE6F814E4C5BD17A6EEBADB05CD90D03F4879E36_inline (CaptureGUI_t4BD3D37209E44BDE2731E0ADC390D8BC56532BF3* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { _showUI = value; }
		bool L_0 = ___value0;
		__this->____showUI_5 = L_0;
		// set { _showUI = value; }
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mCE0CF50E59713C5A8F6AAC2C6648CF0EDBEEB27B_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, float ___t2, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		___t2 = L_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___a0;
		float L_3 = L_2.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___b1;
		float L_5 = L_4.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___a0;
		float L_7 = L_6.___r_0;
		float L_8 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___a0;
		float L_10 = L_9.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = ___b1;
		float L_12 = L_11.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___a0;
		float L_14 = L_13.___g_1;
		float L_15 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = ___a0;
		float L_17 = L_16.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = ___b1;
		float L_19 = L_18.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = ___a0;
		float L_21 = L_20.___b_2;
		float L_22 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = ___a0;
		float L_24 = L_23.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = ___b1;
		float L_26 = L_25.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27 = ___a0;
		float L_28 = L_27.___a_3;
		float L_29 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30;
		memset((&L_30), 0, sizeof(L_30));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_30), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), ((float)il2cpp_codegen_add(L_24, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_26, L_28)), L_29)))), /*hidden argument*/NULL);
		V_0 = L_30;
		goto IL_0069;
	}

IL_0069:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31 = V_0;
		return L_31;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_m336EB73DD4A5B11B7F405CF4BC7F37A466FB4FF7_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CaptureBase_set_FilenamePrefix_mA7CAE85E11DD10B97D47CF3949A6BC2460DA80EF_inline (CaptureBase_t2607C47ED8359FDEAC49AB637D4BD5F48F2CA26D* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set { _filenamePrefix = value; }
		String_t* L_0 = ___value0;
		__this->____filenamePrefix_53 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____filenamePrefix_53), (void*)L_0);
		// set { _filenamePrefix = value; }
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m1ACDE7EF466FB6CCAD29B3866E4A239A8530E9D5_inline (float ___t0, float ___length1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___t0;
		float L_1 = ___t0;
		float L_2 = ___length1;
		float L_3;
		L_3 = floorf(((float)(L_1/L_2)));
		float L_4 = ___length1;
		float L_5 = ___length1;
		float L_6;
		L_6 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(((float)il2cpp_codegen_subtract(L_0, ((float)il2cpp_codegen_multiply(L_3, L_4)))), (0.0f), L_5, NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
