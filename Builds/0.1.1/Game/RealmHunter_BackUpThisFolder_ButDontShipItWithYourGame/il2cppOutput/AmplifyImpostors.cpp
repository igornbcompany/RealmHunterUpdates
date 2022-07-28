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

// System.Comparison`1<UnityEngine.Vector2>
struct Comparison_1_t30B79D9F5F84D1FC372D3727914E6F0CA6B42F65;
// System.Collections.Generic.Dictionary`2<UnityEngine.Material,UnityEngine.Material>
struct Dictionary_2_t7B0F5D63DDA1E532530982C8043F0A132FF9745F;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector2>
struct IEnumerable_1_t6C47A8FE62321E6AD75C312B8549AFD2B13F0591;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Material>
struct IEqualityComparer_1_t6B41DEB890FDAC740B9404C2145A832F69F8012A;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Material,UnityEngine.Material>
struct KeyCollection_tE2D2FBAACB892969AF207BE39E8423377D387147;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<UnityEngine.MeshFilter>
struct List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<AmplifyImpostors.TextureOutput>
struct List_1_t0448AD99A177BC2606599BEAB410C01DDFEE7687;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B;
// System.Predicate`1<UnityEngine.Vector2>
struct Predicate_1_t7744EBE2271FC2C4CBF28703CF361AF669D73B95;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Material,UnityEngine.Material>
struct ValueCollection_tC5EDBCA66FC418CDFE8AACA9CDDCD7412CCA06D9;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.Material,UnityEngine.Material>[]
struct EntryU5BU5D_t81FACE1E301FDE5854554AC4D5BF4CF544F1179A;
// UnityEngine.Vector2[][]
struct Vector2U5BU5DU5BU5D_t02CC59651AB42ABB047B0391F32F881D7E7A0092;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// UnityEngine.MeshFilter[]
struct MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Rendering.RenderTargetIdentifier[]
struct RenderTargetIdentifierU5BU5D_t179798C153B7CE381B41C57863F98CB24023C4CE;
// UnityEngine.RenderTexture[]
struct RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A;
// AmplifyImpostors.TextureOutput[]
struct TextureOutputU5BU5D_tD88DFBBC73AD7244187A115FF780F4437E4FF3F7;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// AmplifyImpostors.AmplifyImpostor
struct AmplifyImpostor_tE757F7B6A3714CB07452670A8C4491B8CC747B3D;
// AmplifyImpostors.AmplifyImpostorAsset
struct AmplifyImpostorAsset_t8EC9563BE7AD641AE5EF7369E4677234BD158F1C;
// AmplifyImpostors.AmplifyImpostorBakePreset
struct AmplifyImpostorBakePreset_tB4321CCFBD0C4932C80B16CBAD3565C7B04D782A;
// AmplifyImpostors.BakeHDRPTool
struct BakeHDRPTool_t31E336586982DA3974E8127E92D5E59D552F951B;
// System.IO.BinaryWriter
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.Encoder
struct Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// ExtendedFlycam
struct ExtendedFlycam_t0410DF4AC94411C97FD334EC2AD9CC14A539CE15;
// ForestMaker
struct ForestMaker_t8B01D0DC7F71B9A150B11F605468D46E85858CD8;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.LODGroup
struct LODGroup_tA4C4F98D3F698143BC7529146AB31A3D2EF24D9A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// AmplifyImpostors.TextureOutput
struct TextureOutput_t5DA7CF51AFA4E662ABD5BEE0CEC6CC5159BD448B;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// AmplifyImpostors.Triangulator
struct Triangulator_tB201648A1D8A86DFA5BA3B50ECAA301D7D07123E;
// System.Type
struct Type_t;
// AmplifyImpostors.VersionInfo
struct VersionInfo_t48D5E5F39CB7970719C48D19825B1CB56AF101F7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// AmplifyImpostors.Vector2Ex/<>c
struct U3CU3Ec_t5AA2192F2C3EF1E998258301FA66B029084AF095;
// AmplifyImpostors.Vector2Ex/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t83480A865FF4BA1AE0BC2DA5F0DDECF243A8C957;

IL2CPP_EXTERN_C RuntimeClass* BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Comparison_1_t30B79D9F5F84D1FC372D3727914E6F0CA6B42F65_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t7B0F5D63DDA1E532530982C8043F0A132FF9745F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0448AD99A177BC2606599BEAB410C01DDFEE7687_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t7744EBE2271FC2C4CBF28703CF361AF669D73B95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTargetIdentifierU5BU5D_t179798C153B7CE381B41C57863F98CB24023C4CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpriteUtilityEx_tAE1EBA72E33F74C27E6F0CD15EF301770DC178B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2DEx_tC0E3140D8E9BC44B42583F1BCCECEF71A9A59150_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureOutput_t5DA7CF51AFA4E662ABD5BEE0CEC6CC5159BD448B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Triangulator_tB201648A1D8A86DFA5BA3B50ECAA301D7D07123E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_t83480A865FF4BA1AE0BC2DA5F0DDECF243A8C957_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t5AA2192F2C3EF1E998258301FA66B029084AF095_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5DU5BU5D_t02CC59651AB42ABB047B0391F32F881D7E7A0092_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VersionInfo_t48D5E5F39CB7970719C48D19825B1CB56AF101F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tA06CB68372E283C085AA7A5F853F92FD6E118B87____E157F1250D3AD5BB797DB4766E316424315B66E1FBA23FE6C84F9966F2265CAD_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral173972C42ADBABD3115E67AA407F725C56F5B044;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral2A05286D8BF9B4FE1D0593DFD446582B7D71C8D1;
IL2CPP_EXTERN_C String_t* _stringLiteral2C173DA80D18B5C4ADB5904CE60C97161DC79E87;
IL2CPP_EXTERN_C String_t* _stringLiteral347AE41DEB51E5C24D439F61C0DEC02AEB379143;
IL2CPP_EXTERN_C String_t* _stringLiteral471089BE66AC5DA10544936EFDBCCCD99CC5C821;
IL2CPP_EXTERN_C String_t* _stringLiteral4A6FA1DA252FEC9A3786ABE380086A0FE61D1697;
IL2CPP_EXTERN_C String_t* _stringLiteral4B27BFC27B5C98B524DD18892F6D318DBBA780BA;
IL2CPP_EXTERN_C String_t* _stringLiteral4C7842F39CAFA5406A2F9A0F557D8D8667F9798A;
IL2CPP_EXTERN_C String_t* _stringLiteral565F9C56DD9483223083FD5E97FB3FF2136D8C25;
IL2CPP_EXTERN_C String_t* _stringLiteral5C7B9222D9F376215CB65708C03B0CF20272C229;
IL2CPP_EXTERN_C String_t* _stringLiteral5D8EF61C72F6DF1EEE107B7E72F83434BBA9D324;
IL2CPP_EXTERN_C String_t* _stringLiteral5F2F71323EE1C823062888821810540F23561E8A;
IL2CPP_EXTERN_C String_t* _stringLiteral6320D23BA8D529632E72998CCD0FE8627FB267E4;
IL2CPP_EXTERN_C String_t* _stringLiteral657E6CBF491350BE05C2BD10E4D61DEA801744C2;
IL2CPP_EXTERN_C String_t* _stringLiteral67FC3B1EFE258D885DE32E898CA3A66F99EDF90E;
IL2CPP_EXTERN_C String_t* _stringLiteral6D84EC851B9A1D42DA33C099A9894034BFFC157C;
IL2CPP_EXTERN_C String_t* _stringLiteral6F98743F9D37A27D62A61808CF2139EBDC613D95;
IL2CPP_EXTERN_C String_t* _stringLiteral7F531D4DFC1D00512035C60D81C733914A3E9FC0;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral81943B70956ECCD22D7491A919E6BE30E1EEFFE9;
IL2CPP_EXTERN_C String_t* _stringLiteral8244FF4469CD24AECA8F7B1B293CA6DF261B2861;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral918EAAC3063A7B4BF82DBA25562B975C5F712D6C;
IL2CPP_EXTERN_C String_t* _stringLiteral936602A478A63146F6EF71635039909217F66F00;
IL2CPP_EXTERN_C String_t* _stringLiteral978600362E17418CDF6C99B1CA1CF6CCCCBEF31A;
IL2CPP_EXTERN_C String_t* _stringLiteral9F46E5D2973B2B1D06B690EFA981CFC096E5DED1;
IL2CPP_EXTERN_C String_t* _stringLiteralA0FED56C1FB93B8FFC56FEA9C03F3C74F92D809A;
IL2CPP_EXTERN_C String_t* _stringLiteralA33A5CAE02B786C2060461DF8C6764B4C05E9423;
IL2CPP_EXTERN_C String_t* _stringLiteralA74EA15A49BB463C292FDB96BA4FF5DE30D72558;
IL2CPP_EXTERN_C String_t* _stringLiteralA8F82C0C2397173589D92E3D439EC75AEBB603F9;
IL2CPP_EXTERN_C String_t* _stringLiteralABF796D94D594BC965F5370898DD45DC98E42503;
IL2CPP_EXTERN_C String_t* _stringLiteralAC1019871BBF52D81334EBE531E97EB566035E97;
IL2CPP_EXTERN_C String_t* _stringLiteralAD096CB2DE3B9F333712C095AE4D157F87E643C9;
IL2CPP_EXTERN_C String_t* _stringLiteralB78AE6D5DE258AD55142707C4F5599B2FDA85727;
IL2CPP_EXTERN_C String_t* _stringLiteralB78DF7621651B991FAD45DC18055EA06269B40E9;
IL2CPP_EXTERN_C String_t* _stringLiteralB971F925ED49B82BC09040ED59ECF4780469122F;
IL2CPP_EXTERN_C String_t* _stringLiteralBCF0D23863042E55540C90CF70FA3CCB5DE77135;
IL2CPP_EXTERN_C String_t* _stringLiteralC039C76C75C3D2C9CEF09D2192726F84A5DFA575;
IL2CPP_EXTERN_C String_t* _stringLiteralCC755BAA1D6CD9058F3A8FAF0C73B9922AEC608B;
IL2CPP_EXTERN_C String_t* _stringLiteralCD57B1939B6E2F4CAFC224B8EB311A24A3B33563;
IL2CPP_EXTERN_C String_t* _stringLiteralCF46806076510A5B175A911F127607D39D6442F5;
IL2CPP_EXTERN_C String_t* _stringLiteralD22D3025953F507F343D6D95F6F21FBA35BD146C;
IL2CPP_EXTERN_C String_t* _stringLiteralD5A59EF736212174C538CE94E1A1BC47039BEBCB;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDE1C317FB05D738347D176BE79342CE7C8379A82;
IL2CPP_EXTERN_C String_t* _stringLiteralE49805E8C78E82F62CEC1B2C378C4DDF1796E9FC;
IL2CPP_EXTERN_C String_t* _stringLiteralE87636BB81B4F627EB9DB4762BCF85812B1DC2B4;
IL2CPP_EXTERN_C String_t* _stringLiteralEF9849C4BB8B75A005F8BD6AD0B3C421A586A13B;
IL2CPP_EXTERN_C String_t* _stringLiteralF257F125A2F6B5D2A2A29FCAA536931C125AF6B3;
IL2CPP_EXTERN_C const RuntimeMethod* Array_FindAll_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m360F9A238A493AE524F17EFCE128B1FAD72EA20B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mB22ACA25FDC85004C7264DA6FE3AB3C2355417D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m1544A31070A94F187BC8B7B345E9958557DAEA57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Sort_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mC4B49058AD0FA6B4F0E0B8B28E28CE55F6D988FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mB81AEBAD0FDC07C870309E662E4CB1134CA76188_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m23BA91B0F6DC61F753378785862281334A780902_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m71CCF46E896A3B30D201D7DE113D036ED5BB2971_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m05E005148A355590FF412AEBEC05295C4AB9446C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mD3489066F1D31C8808AB463745D3B804D567C602_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m61B5C03832F0F13F7FFB8AEA4BF9B0FB108751EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mAA67D06FC2C56B827B0BFD4A1F4E79FA460FD334_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mD4C103A14262CBA39F94C6D28E01D6B9C3C77D43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m230C0120AEEB00A0FB41EFB49B43B4666CC9C410_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m2DCDE5FFA7020B15019DC9EB26D48CB88BE23252_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m47377D7758798C489896B13DDD6EAFEC1B6D9917_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Reverse_m09394C650409964E568ED088D88C1BA78EE468DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m105596C2159C46B75E96D26ACEC0A5C1C1F5C5EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDB37C597C4185D9DAC4F9E3B580B7C4F1693EAAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE87D19792408B0284962521E4F189E704CEE1A8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mDC2E5CCB816A4C2AA7D447D4912E8F0AAD561C73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mEA72181DA04067D7475922C8DBA014128689F30B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m02C7ACCE499B7BEF14CBC7F7DE12EFF41A29E458_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1DDAF5804C36E171686D1F31AEDD7D32876E8348_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpriteUtilityEx_get_Type_m88BEB114DB8D278C5AAF9689DD45D384122CCB3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Type_GetType_m80C621C4D91A89DDEE6D3DDF343925B30F99BC45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CConvexHullU3Eb__3_0_m7D5AD1FDC54E7F74DD52302225578ACF552B11EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3CReduceLeastSignificantVerticeU3Eb__0_m6DCF3F41AC63B55D529970E4641AC1A5A9EAFE13_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct Vector2U5BU5DU5BU5D_t02CC59651AB42ABB047B0391F32F881D7E7A0092;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct RenderTargetIdentifierU5BU5D_t179798C153B7CE381B41C57863F98CB24023C4CE;
struct RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6;
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tAF4179A24D49B924F5E7AFB4EEB1F872259B269B 
{
};

// System.Collections.Generic.Dictionary`2<UnityEngine.Material,UnityEngine.Material>
struct Dictionary_2_t7B0F5D63DDA1E532530982C8043F0A132FF9745F  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t81FACE1E301FDE5854554AC4D5BF4CF544F1179A* ____entries_1;
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
	KeyCollection_tE2D2FBAACB892969AF207BE39E8423377D387147* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC5EDBCA66FC418CDFE8AACA9CDDCD7412CCA06D9* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.MeshFilter>
struct List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA* ___s_emptyArray_5;
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

// System.Collections.Generic.List`1<AmplifyImpostors.TextureOutput>
struct List_1_t0448AD99A177BC2606599BEAB410C01DDFEE7687  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TextureOutputU5BU5D_tD88DFBBC73AD7244187A115FF780F4437E4FF3F7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0448AD99A177BC2606599BEAB410C01DDFEE7687_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TextureOutputU5BU5D_tD88DFBBC73AD7244187A115FF780F4437E4FF3F7* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// AmplifyImpostors.BakeHDRPTool
struct BakeHDRPTool_t31E336586982DA3974E8127E92D5E59D552F951B  : public RuntimeObject
{
};

// System.IO.BinaryWriter
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E  : public RuntimeObject
{
	// System.IO.Stream System.IO.BinaryWriter::OutStream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___OutStream_1;
	// System.Byte[] System.IO.BinaryWriter::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_2;
	// System.Text.Encoding System.IO.BinaryWriter::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_3;
	// System.Text.Encoder System.IO.BinaryWriter::_encoder
	Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA* ____encoder_4;
	// System.Boolean System.IO.BinaryWriter::_leaveOpen
	bool ____leaveOpen_5;
	// System.Byte[] System.IO.BinaryWriter::_largeByteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____largeByteBuffer_6;
	// System.Int32 System.IO.BinaryWriter::_maxChars
	int32_t ____maxChars_7;
};

struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_StaticFields
{
	// System.IO.BinaryWriter System.IO.BinaryWriter::Null
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___Null_0;
};

// AmplifyImpostors.BoundsEx
struct BoundsEx_t0CA5D7BB52E1018CCE5FE607A721987A7E834773  : public RuntimeObject
{
};

// AmplifyImpostors.ImpostorBakingTools
struct ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB  : public RuntimeObject
{
};

struct ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_StaticFields
{
	// System.String AmplifyImpostors.ImpostorBakingTools::PrefGlobalFolder
	String_t* ___PrefGlobalFolder_0;
	// System.String AmplifyImpostors.ImpostorBakingTools::PrefGlobalRelativeFolder
	String_t* ___PrefGlobalRelativeFolder_1;
	// System.String AmplifyImpostors.ImpostorBakingTools::PrefGlobalDefault
	String_t* ___PrefGlobalDefault_2;
	// System.String AmplifyImpostors.ImpostorBakingTools::PrefGlobalTexImport
	String_t* ___PrefGlobalTexImport_3;
	// System.String AmplifyImpostors.ImpostorBakingTools::PrefGlobalCreateLodGroup
	String_t* ___PrefGlobalCreateLodGroup_4;
	// System.String AmplifyImpostors.ImpostorBakingTools::PrefGlobalGBuffer0Name
	String_t* ___PrefGlobalGBuffer0Name_5;
	// System.String AmplifyImpostors.ImpostorBakingTools::PrefGlobalGBuffer1Name
	String_t* ___PrefGlobalGBuffer1Name_6;
	// System.String AmplifyImpostors.ImpostorBakingTools::PrefGlobalGBuffer2Name
	String_t* ___PrefGlobalGBuffer2Name_7;
	// System.String AmplifyImpostors.ImpostorBakingTools::PrefGlobalGBuffer3Name
	String_t* ___PrefGlobalGBuffer3Name_8;
	// System.String AmplifyImpostors.ImpostorBakingTools::PrefGlobalBakingOptions
	String_t* ___PrefGlobalBakingOptions_9;
	// System.String AmplifyImpostors.ImpostorBakingTools::PrefDataImpType
	String_t* ___PrefDataImpType_10;
	// System.String AmplifyImpostors.ImpostorBakingTools::PrefDataTexSizeLocked
	String_t* ___PrefDataTexSizeLocked_11;
	// System.String AmplifyImpostors.ImpostorBakingTools::PrefDataTexSizeSelected
	String_t* ___PrefDataTexSizeSelected_12;
	// System.String AmplifyImpostors.ImpostorBakingTools::PrefDataTexSizeX
	String_t* ___PrefDataTexSizeX_13;
	// System.String AmplifyImpostors.ImpostorBakingTools::PrefDataTexSizeY
	String_t* ___PrefDataTexSizeY_14;
	// System.String AmplifyImpostors.ImpostorBakingTools::PrefDataDecoupledFrames
	String_t* ___PrefDataDecoupledFrames_15;
	// System.String AmplifyImpostors.ImpostorBakingTools::PrefDataXFrames
	String_t* ___PrefDataXFrames_16;
	// System.String AmplifyImpostors.ImpostorBakingTools::PrefDataYFrames
	String_t* ___PrefDataYFrames_17;
	// System.String AmplifyImpostors.ImpostorBakingTools::PrefDataPixelBleeding
	String_t* ___PrefDataPixelBleeding_18;
	// System.String AmplifyImpostors.ImpostorBakingTools::PrefDataTolerance
	String_t* ___PrefDataTolerance_19;
	// System.String AmplifyImpostors.ImpostorBakingTools::PrefDataNormalScale
	String_t* ___PrefDataNormalScale_20;
	// System.String AmplifyImpostors.ImpostorBakingTools::PrefDataMaxVertices
	String_t* ___PrefDataMaxVertices_21;
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

// AmplifyImpostors.RenderTextureEx
struct RenderTextureEx_t76B0E3F0C4134A11DFF037BEB4C3BECCCEAF9EB7  : public RuntimeObject
{
};

// AmplifyImpostors.SpriteUtilityEx
struct SpriteUtilityEx_tAE1EBA72E33F74C27E6F0CD15EF301770DC178B2  : public RuntimeObject
{
};

struct SpriteUtilityEx_tAE1EBA72E33F74C27E6F0CD15EF301770DC178B2_StaticFields
{
	// System.Type AmplifyImpostors.SpriteUtilityEx::type
	Type_t* ___type_0;
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

// AmplifyImpostors.Texture2DEx
struct Texture2DEx_tC0E3140D8E9BC44B42583F1BCCECEF71A9A59150  : public RuntimeObject
{
};

struct Texture2DEx_tC0E3140D8E9BC44B42583F1BCCECEF71A9A59150_StaticFields
{
	// System.Byte[] AmplifyImpostors.Texture2DEx::Footer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Footer_0;
};

// AmplifyImpostors.TextureOutput
struct TextureOutput_t5DA7CF51AFA4E662ABD5BEE0CEC6CC5159BD448B  : public RuntimeObject
{
	// System.Int32 AmplifyImpostors.TextureOutput::Index
	int32_t ___Index_0;
	// AmplifyImpostors.OverrideMask AmplifyImpostors.TextureOutput::OverrideMask
	int32_t ___OverrideMask_1;
	// System.Boolean AmplifyImpostors.TextureOutput::Active
	bool ___Active_2;
	// System.String AmplifyImpostors.TextureOutput::Name
	String_t* ___Name_3;
	// AmplifyImpostors.TextureScale AmplifyImpostors.TextureOutput::Scale
	int32_t ___Scale_4;
	// System.Boolean AmplifyImpostors.TextureOutput::SRGB
	bool ___SRGB_5;
	// AmplifyImpostors.TextureChannels AmplifyImpostors.TextureOutput::Channels
	int32_t ___Channels_6;
	// AmplifyImpostors.TextureCompression AmplifyImpostors.TextureOutput::Compression
	int32_t ___Compression_7;
	// AmplifyImpostors.ImageFormat AmplifyImpostors.TextureOutput::ImageFormat
	int32_t ___ImageFormat_8;
};

// AmplifyImpostors.Triangulator
struct Triangulator_tB201648A1D8A86DFA5BA3B50ECAA301D7D07123E  : public RuntimeObject
{
	// System.Collections.Generic.List`1<UnityEngine.Vector2> AmplifyImpostors.Triangulator::m_points
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___m_points_0;
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

// AmplifyImpostors.Vector2Ex
struct Vector2Ex_t890808B565877D0F8367768CBA47C2177E2E02E8  : public RuntimeObject
{
};

// AmplifyImpostors.VersionInfo
struct VersionInfo_t48D5E5F39CB7970719C48D19825B1CB56AF101F7  : public RuntimeObject
{
};

struct VersionInfo_t48D5E5F39CB7970719C48D19825B1CB56AF101F7_StaticFields
{
	// System.Byte AmplifyImpostors.VersionInfo::Revision
	uint8_t ___Revision_3;
};

// AmplifyImpostors.Vector2Ex/<>c
struct U3CU3Ec_t5AA2192F2C3EF1E998258301FA66B029084AF095  : public RuntimeObject
{
};

struct U3CU3Ec_t5AA2192F2C3EF1E998258301FA66B029084AF095_StaticFields
{
	// AmplifyImpostors.Vector2Ex/<>c AmplifyImpostors.Vector2Ex/<>c::<>9
	U3CU3Ec_t5AA2192F2C3EF1E998258301FA66B029084AF095* ___U3CU3E9_0;
	// System.Comparison`1<UnityEngine.Vector2> AmplifyImpostors.Vector2Ex/<>c::<>9__3_0
	Comparison_1_t30B79D9F5F84D1FC372D3727914E6F0CA6B42F65* ___U3CU3E9__3_0_1;
};

// AmplifyImpostors.Vector2Ex/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t83480A865FF4BA1AE0BC2DA5F0DDECF243A8C957  : public RuntimeObject
{
	// UnityEngine.Vector2[] AmplifyImpostors.Vector2Ex/<>c__DisplayClass5_0::P
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___P_0;
	// System.Int32 AmplifyImpostors.Vector2Ex/<>c__DisplayClass5_0::smallestIndex
	int32_t ___smallestIndex_1;
};

// System.Collections.Generic.KeyValuePair`2<UnityEngine.Material,UnityEngine.Material>
struct KeyValuePair_2_t2913F672181757C35EF65E5366FB4F700F5FE5DA 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
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

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
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

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};

struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
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

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_4;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=18
struct __StaticArrayInitTypeSizeU3D18_t96A42178A27F7DB162C7B3E9044BB9A41CDCAF82 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D18_t96A42178A27F7DB162C7B3E9044BB9A41CDCAF82__padding[18];
	};
};

// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Material,UnityEngine.Material>
struct Enumerator_t07C26ED2F5F8668F764FEEBCAA3E15D546EF661B 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t7B0F5D63DDA1E532530982C8043F0A132FF9745F* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t2913F672181757C35EF65E5366FB4F700F5FE5DA ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tA06CB68372E283C085AA7A5F853F92FD6E118B87  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_tA06CB68372E283C085AA7A5F853F92FD6E118B87_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=18 <PrivateImplementationDetails>::E157F1250D3AD5BB797DB4766E316424315B66E1FBA23FE6C84F9966F2265CAD
	__StaticArrayInitTypeSizeU3D18_t96A42178A27F7DB162C7B3E9044BB9A41CDCAF82 ___E157F1250D3AD5BB797DB4766E316424315B66E1FBA23FE6C84F9966F2265CAD_0;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Rendering.CommandBuffer::m_Ptr
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

// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_5;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_6;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_7;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_8;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_9;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_10;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_11;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_12;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_13;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask_14;
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

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
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

// System.Comparison`1<UnityEngine.Vector2>
struct Comparison_1_t30B79D9F5F84D1FC372D3727914E6F0CA6B42F65  : public MulticastDelegate_t
{
};

// System.Predicate`1<UnityEngine.Vector2>
struct Predicate_1_t7744EBE2271FC2C4CBF28703CF361AF669D73B95  : public MulticastDelegate_t
{
};

// AmplifyImpostors.AmplifyImpostorAsset
struct AmplifyImpostorAsset_t8EC9563BE7AD641AE5EF7369E4677234BD158F1C  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Material AmplifyImpostors.AmplifyImpostorAsset::Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___Material_4;
	// UnityEngine.Mesh AmplifyImpostors.AmplifyImpostorAsset::Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___Mesh_5;
	// System.Int32 AmplifyImpostors.AmplifyImpostorAsset::Version
	int32_t ___Version_6;
	// AmplifyImpostors.ImpostorType AmplifyImpostors.AmplifyImpostorAsset::ImpostorType
	int32_t ___ImpostorType_7;
	// System.Boolean AmplifyImpostors.AmplifyImpostorAsset::LockedSizes
	bool ___LockedSizes_8;
	// System.Int32 AmplifyImpostors.AmplifyImpostorAsset::SelectedSize
	int32_t ___SelectedSize_9;
	// UnityEngine.Vector2 AmplifyImpostors.AmplifyImpostorAsset::TexSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___TexSize_10;
	// System.Boolean AmplifyImpostors.AmplifyImpostorAsset::DecoupleAxisFrames
	bool ___DecoupleAxisFrames_11;
	// System.Int32 AmplifyImpostors.AmplifyImpostorAsset::HorizontalFrames
	int32_t ___HorizontalFrames_12;
	// System.Int32 AmplifyImpostors.AmplifyImpostorAsset::VerticalFrames
	int32_t ___VerticalFrames_13;
	// System.Int32 AmplifyImpostors.AmplifyImpostorAsset::PixelPadding
	int32_t ___PixelPadding_14;
	// System.Int32 AmplifyImpostors.AmplifyImpostorAsset::MaxVertices
	int32_t ___MaxVertices_15;
	// System.Single AmplifyImpostors.AmplifyImpostorAsset::Tolerance
	float ___Tolerance_16;
	// System.Single AmplifyImpostors.AmplifyImpostorAsset::NormalScale
	float ___NormalScale_17;
	// UnityEngine.Vector2[] AmplifyImpostors.AmplifyImpostorAsset::ShapePoints
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___ShapePoints_18;
	// AmplifyImpostors.AmplifyImpostorBakePreset AmplifyImpostors.AmplifyImpostorAsset::Preset
	AmplifyImpostorBakePreset_tB4321CCFBD0C4932C80B16CBAD3565C7B04D782A* ___Preset_19;
	// System.Collections.Generic.List`1<AmplifyImpostors.TextureOutput> AmplifyImpostors.AmplifyImpostorAsset::OverrideOutput
	List_1_t0448AD99A177BC2606599BEAB410C01DDFEE7687* ___OverrideOutput_20;
};

// AmplifyImpostors.AmplifyImpostorBakePreset
struct AmplifyImpostorBakePreset_tB4321CCFBD0C4932C80B16CBAD3565C7B04D782A  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Shader AmplifyImpostors.AmplifyImpostorBakePreset::BakeShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___BakeShader_4;
	// UnityEngine.Shader AmplifyImpostors.AmplifyImpostorBakePreset::RuntimeShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___RuntimeShader_5;
	// AmplifyImpostors.PresetPipeline AmplifyImpostors.AmplifyImpostorBakePreset::Pipeline
	int32_t ___Pipeline_6;
	// System.Int32 AmplifyImpostors.AmplifyImpostorBakePreset::AlphaIndex
	int32_t ___AlphaIndex_7;
	// System.Collections.Generic.List`1<AmplifyImpostors.TextureOutput> AmplifyImpostors.AmplifyImpostorBakePreset::Output
	List_1_t0448AD99A177BC2606599BEAB410C01DDFEE7687* ___Output_8;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.LODGroup
struct LODGroup_tA4C4F98D3F698143BC7529146AB31A3D2EF24D9A  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
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

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// AmplifyImpostors.AmplifyImpostor
struct AmplifyImpostor_tE757F7B6A3714CB07452670A8C4491B8CC747B3D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// AmplifyImpostors.AmplifyImpostorAsset AmplifyImpostors.AmplifyImpostor::m_data
	AmplifyImpostorAsset_t8EC9563BE7AD641AE5EF7369E4677234BD158F1C* ___m_data_18;
	// UnityEngine.Transform AmplifyImpostors.AmplifyImpostor::m_rootTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_rootTransform_19;
	// UnityEngine.LODGroup AmplifyImpostors.AmplifyImpostor::m_lodGroup
	LODGroup_tA4C4F98D3F698143BC7529146AB31A3D2EF24D9A* ___m_lodGroup_20;
	// UnityEngine.Renderer[] AmplifyImpostors.AmplifyImpostor::m_renderers
	RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* ___m_renderers_21;
	// AmplifyImpostors.LODReplacement AmplifyImpostors.AmplifyImpostor::m_lodReplacement
	int32_t ___m_lodReplacement_22;
	// AmplifyImpostors.RenderPipelineInUse AmplifyImpostors.AmplifyImpostor::m_renderPipelineInUse
	int32_t ___m_renderPipelineInUse_23;
	// System.Int32 AmplifyImpostors.AmplifyImpostor::m_insertIndex
	int32_t ___m_insertIndex_24;
	// UnityEngine.GameObject AmplifyImpostors.AmplifyImpostor::m_lastImpostor
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_lastImpostor_25;
	// System.String AmplifyImpostors.AmplifyImpostor::m_folderPath
	String_t* ___m_folderPath_26;
	// System.String AmplifyImpostors.AmplifyImpostor::m_impostorName
	String_t* ___m_impostorName_27;
	// AmplifyImpostors.CutMode AmplifyImpostors.AmplifyImpostor::m_cutMode
	int32_t ___m_cutMode_28;
	// UnityEngine.RenderTexture[] AmplifyImpostors.AmplifyImpostor::m_rtGBuffers
	RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* ___m_rtGBuffers_32;
	// UnityEngine.RenderTexture[] AmplifyImpostors.AmplifyImpostor::m_alphaGBuffers
	RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* ___m_alphaGBuffers_33;
	// UnityEngine.RenderTexture AmplifyImpostors.AmplifyImpostor::m_trueDepth
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_trueDepth_34;
	// UnityEngine.Texture2D AmplifyImpostors.AmplifyImpostor::m_alphaTex
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_alphaTex_35;
	// System.Single AmplifyImpostors.AmplifyImpostor::m_xyFitSize
	float ___m_xyFitSize_36;
	// System.Single AmplifyImpostors.AmplifyImpostor::m_depthFitSize
	float ___m_depthFitSize_37;
	// UnityEngine.Vector2 AmplifyImpostors.AmplifyImpostor::m_pixelOffset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_pixelOffset_38;
	// UnityEngine.Bounds AmplifyImpostors.AmplifyImpostor::m_originalBound
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_originalBound_39;
	// UnityEngine.Vector3 AmplifyImpostors.AmplifyImpostor::m_oriPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_oriPos_40;
	// UnityEngine.Quaternion AmplifyImpostors.AmplifyImpostor::m_oriRot
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_oriRot_41;
	// UnityEngine.Vector3 AmplifyImpostors.AmplifyImpostor::m_oriSca
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_oriSca_42;
};

// ExtendedFlycam
struct ExtendedFlycam_t0410DF4AC94411C97FD334EC2AD9CC14A539CE15  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single ExtendedFlycam::cameraSensitivity
	float ___cameraSensitivity_4;
	// System.Single ExtendedFlycam::climbSpeed
	float ___climbSpeed_5;
	// System.Single ExtendedFlycam::normalMoveSpeed
	float ___normalMoveSpeed_6;
	// System.Single ExtendedFlycam::slowMoveFactor
	float ___slowMoveFactor_7;
	// System.Single ExtendedFlycam::fastMoveFactor
	float ___fastMoveFactor_8;
	// System.Single ExtendedFlycam::rotationX
	float ___rotationX_9;
	// System.Single ExtendedFlycam::rotationY
	float ___rotationY_10;
};

// ForestMaker
struct ForestMaker_t8B01D0DC7F71B9A150B11F605468D46E85858CD8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ForestMaker::m_treePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_treePrefab_4;
	// System.Int32 ForestMaker::m_amount
	int32_t ___m_amount_5;
	// UnityEngine.GameObject ForestMaker::m_ground
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_ground_6;
	// System.Single ForestMaker::m_radiusDistance
	float ___m_radiusDistance_7;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Renderer[]
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A  : public RuntimeArray
{
	ALIGN_FIELD (8) Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* m_Items[1];

	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.RenderTexture[]
struct RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6  : public RuntimeArray
{
	ALIGN_FIELD (8) RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* m_Items[1];

	inline RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Rendering.RenderTargetIdentifier[]
struct RenderTargetIdentifierU5BU5D_t179798C153B7CE381B41C57863F98CB24023C4CE  : public RuntimeArray
{
	ALIGN_FIELD (8) RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B m_Items[1];

	inline RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D  : public RuntimeArray
{
	ALIGN_FIELD (8) Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* m_Items[1];

	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[][]
struct Vector2U5BU5DU5BU5D_t02CC59651AB42ABB047B0391F32F881D7E7A0092  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* m_Items[1];

	inline Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259  : public RuntimeArray
{
	ALIGN_FIELD (8) Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B m_Items[1];

	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
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


// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_gshared_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_gshared (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Comparison`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparison_1__ctor_m00B27E3ACB966A745A2A894A7CF0CA6AB4E66B4F_gshared (Comparison_1_t30B79D9F5F84D1FC372D3727914E6F0CA6B42F65* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Array::Sort<UnityEngine.Vector2>(T[],System.Comparison`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mC4B49058AD0FA6B4F0E0B8B28E28CE55F6D988FC_gshared (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___array0, Comparison_1_t30B79D9F5F84D1FC372D3727914E6F0CA6B42F65* ___comparison1, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<UnityEngine.Vector2>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m1544A31070A94F187BC8B7B345E9958557DAEA57_gshared (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA** ___array0, int32_t ___newSize1, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_mFBDD941A383278B84BD8E0B75B1D3C9E9D46238B_gshared (Predicate_1_t7744EBE2271FC2C4CBF28703CF361AF669D73B95* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T[] System.Array::FindAll<UnityEngine.Vector2>(T[],System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* Array_FindAll_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m360F9A238A493AE524F17EFCE128B1FAD72EA20B_gshared (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___array0, Predicate_1_t7744EBE2271FC2C4CBF28703CF361AF669D73B95* ___match1, const RuntimeMethod* method) ;
// System.Int32 System.Array::IndexOf<UnityEngine.Vector2>(T[],T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mB22ACA25FDC85004C7264DA6FE3AB3C2355417D4_gshared (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___array0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F_gshared (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m105596C2159C46B75E96D26ACEC0A5C1C1F5C5EC_gshared (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_gshared_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Reverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m09394C650409964E568ED088D88C1BA78EE468DC_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.Cursor::set_lockState(UnityEngine.CursorLockMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_lockState_m5CA1C31AF58CE2CDFD4F6999B4F42C9D0DF8A99D (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Cursor::set_visible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_visible_mC2A804ADF7411AC885923A2E9F3108BCC85C1AE4 (bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.CursorLockMode UnityEngine.Cursor::get_lockState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cursor_get_lockState_m99E97A23A051AA1167B9C49C3F6E8244E74531AE (const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_AngleAxis_m01A869DC10F976FAF493B66F15D6D6977BB61DA8 (float ___angle0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_mA75C525C1E78B5BB99E9B7A63EF68C731043FE18_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Lerp_m7BE5A2D8FA33A15A5145B2F5261707CA17C3E792 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A (int32_t ___key0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared)(___original0, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<AmplifyImpostors.TextureOutput>::get_Count()
inline int32_t List_1_get_Count_mDC2E5CCB816A4C2AA7D447D4912E8F0AAD561C73_inline (List_1_t0448AD99A177BC2606599BEAB410C01DDFEE7687* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t0448AD99A177BC2606599BEAB410C01DDFEE7687*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void UnityEngine.RenderTexture::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture__ctor_m0C81127DE754F64FDD3E80E94BE11054B2791F98 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, int32_t ___format3, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.RenderTexture::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderTexture_Create_mA6E4D3CCC84AC3F68E85AA0D6609E1692C672AD2 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<AmplifyImpostors.TextureOutput>::get_Item(System.Int32)
inline TextureOutput_t5DA7CF51AFA4E662ABD5BEE0CEC6CC5159BD448B* List_1_get_Item_m02C7ACCE499B7BEF14CBC7F7DE12EFF41A29E458 (List_1_t0448AD99A177BC2606599BEAB410C01DDFEE7687* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  TextureOutput_t5DA7CF51AFA4E662ABD5BEE0CEC6CC5159BD448B* (*) (List_1_t0448AD99A177BC2606599BEAB410C01DDFEE7687*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.RenderTexture::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture__ctor_m53215A8EDDE262932758186108347685F6A512C4 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, int32_t ___format3, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_active_m045EA53D62FBF79693265E33D14D8E0E8151A37E (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_Release_mE7399D6187A0E38945D2913D0FFB41247143AB1E (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Material,UnityEngine.Material>::.ctor()
inline void Dictionary_2__ctor_mD3489066F1D31C8808AB463745D3B804D567C602 (Dictionary_2_t7B0F5D63DDA1E532530982C8043F0A132FF9745F* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7B0F5D63DDA1E532530982C8043F0A132FF9745F*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void UnityEngine.Rendering.CommandBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer__ctor_m9445F1606331B732FCA393591F3E230714FD5FF4 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_set_name_mEC83B7FE28D6817A36A8B894A661D6D217488965 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, String_t* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.RenderTargetIdentifier::op_Implicit(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B RenderTargetIdentifier_op_Implicit_m91673C4B60A050517CD535B84B9B88CF9D5BB5CE (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___tex0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::SetRenderTarget(UnityEngine.Rendering.RenderTargetIdentifier[],UnityEngine.Rendering.RenderTargetIdentifier)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetRenderTarget_mEB1DFBA6D3C2B51946FADBFF25D6BB58A0199A04 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, RenderTargetIdentifierU5BU5D_t179798C153B7CE381B41C57863F98CB24023C4CE* ___colors0, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___depth1, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_clear_m8B58EA88C92F7DD2C66F0EC1BCC8AC697D631298_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::ClearRenderTarget(System.Boolean,System.Boolean,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_ClearRenderTarget_mAE759EFA193F3F683A244826504EB0DBB51CB62A (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, bool ___clearDepth0, bool ___clearColor1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor2, float ___depth3, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.MeshFilter>::.ctor()
inline void List_1__ctor_mE87D19792408B0284962521E4F189E704CEE1A8C (List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// UnityEngine.Renderer[] AmplifyImpostors.AmplifyImpostor::get_Renderers()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* AmplifyImpostor_get_Renderers_mE743B4A3FD10A48EF555974A7833B062F4585DCD_inline (AmplifyImpostor_tE757F7B6A3714CB07452670A8C4491B8CC747B3D* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Renderer::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Rendering.ShadowCastingMode UnityEngine.Renderer::get_shadowCastingMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Renderer_get_shadowCastingMode_m15B0BCD8948C2DAFDF58FD8041DB55084AC59FE8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.MeshFilter>::Add(T)
inline void List_1_Add_m2DCDE5FFA7020B15019DC9EB26D48CB88BE23252_inline (List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* __this, MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930*, MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Mesh UnityEngine.MeshFilter::get_sharedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.MeshFilter>::get_Count()
inline int32_t List_1_get_Count_mEA72181DA04067D7475922C8DBA014128689F30B_inline (List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// UnityEngine.Matrix4x4 AmplifyImpostors.AmplifyImpostor::GetCameraRotationMatrix(AmplifyImpostors.ImpostorType,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 AmplifyImpostor_GetCameraRotationMatrix_m7B957D9944609272E5B66BB9CE84517033E84E73 (AmplifyImpostor_tE757F7B6A3714CB07452670A8C4491B8CC747B3D* __this, int32_t ___impostorType0, int32_t ___hframes1, int32_t ___vframes2, int32_t ___x3, int32_t ___y4, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.MeshFilter>::get_Item(System.Int32)
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* List_1_get_Item_m1DDAF5804C36E171686D1F31AEDD7D32876E8348 (List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* (*) (List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Bounds UnityEngine.Mesh::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Mesh_get_bounds_m9E3A46226824676703990270A722A89A4860A100 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_worldToLocalMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Renderer::get_localToWorldMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Renderer_get_localToWorldMatrix_mCC910A9BA14BDA7A5BACE0D13B5456358FA8EC22 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_op_Multiply_m7649669D493400913FF60AFB04B1C19F14E0FDB0 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___lhs0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Bounds AmplifyImpostors.BoundsEx::Transform(UnityEngine.Bounds,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 BoundsEx_Transform_m8C0564D73B860CEC7C616B15237F4B9166E223BF (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___bounds0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___matrix1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Bounds::Encapsulate(UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds_Encapsulate_m7C70C382B9380A8C962074C78E189B53CE8F7A22 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___bounds0, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_inverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_inverse_m4F4A881CD789281EA90EB68CFD39F36C8A81E6BD (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::LookAt(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_LookAt_mBB8D69CBC1DA4632A9C24A5A8D7B08A36378EED2 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___to1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___up2, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Ortho(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_Ortho_m2C3F7FDC23CFC7E6D59009362559FDC0B6A3DC25 (float ___left0, float ___right1, float ___bottom2, float ___top3, float ___zNear4, float ___zFar5, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.GL::GetGPUProjectionMatrix(UnityEngine.Matrix4x4,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GL_GetGPUProjectionMatrix_m5E0E33B107C7CA271DC6E9B3DBD45F5D8FA56688 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___proj0, bool ___renderIntoTexture1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::SetViewProjectionMatrices(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetViewProjectionMatrices_m50A472F193C13207D81B5EC8FB007F76E36A8C75 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___view0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___proj1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::SetViewport(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetViewport_m3BCCABB7493369D88DB15EE43C41D9858AE2574D (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___pixelRect0, const RuntimeMethod* method) ;
// System.Void AmplifyImpostors.BakeHDRPTool::SetupShaderVariableGlobals(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Rendering.CommandBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BakeHDRPTool_SetupShaderVariableGlobals_mC29896918A4B6FBE1F0327212DBAE95812CC76A5 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___viewMat0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___projMatrix1, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___commandBuffer2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::SetGlobalMatrix(System.String,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetGlobalMatrix_mBADE644FA9946E1AD6D4B4575BFD146A113B0911 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, String_t* ___name0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value1, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_zero_m51B18794FAF141EBD06CA9907E6F7DF9D60F3515_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::SetGlobalVector(System.String,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetGlobalVector_mA5AF1BDEA174489A81DCE9D3E0415331FB05CE47 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, String_t* ___name0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value1, const RuntimeMethod* method) ;
// UnityEngine.Material[] UnityEngine.Renderer::get_sharedMaterials()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* Renderer_get_sharedMaterials_m0B61AFD8EDA35A70C796FFB2F28BB62380051ABF (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Material::FindPass(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Material_FindPass_mCCAAC088EE0E39AD5950BA41E965371417DBCFBC (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___passName0, const RuntimeMethod* method) ;
// System.String UnityEngine.Material::GetTag(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Material_GetTag_m0B37070270E231B88808DB1B3F9EF4C1851627D4 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___tag0, bool ___searchFallbacks1, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Material::get_passCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Material_get_passCount_m7BA071AFFA34DC3E49B56A16CB8B098566BDE765 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::EnableShaderKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_EnableShaderKeyword_m9DE5732149961F1EA14B295D9E72914E1CC7DA5A (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, String_t* ___keyword0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Material,UnityEngine.Material>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m05E005148A355590FF412AEBEC05295C4AB9446C (Dictionary_2_t7B0F5D63DDA1E532530982C8043F0A132FF9745F* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___key0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t7B0F5D63DDA1E532530982C8043F0A132FF9745F*, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shader0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Material,UnityEngine.Material>::Add(TKey,TValue)
inline void Dictionary_2_Add_mB81AEBAD0FDC07C870309E662E4CB1134CA76188 (Dictionary_2_t7B0F5D63DDA1E532530982C8043F0A132FF9745F* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___key0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7B0F5D63DDA1E532530982C8043F0A132FF9745F*, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Int32 UnityEngine.Renderer::get_lightmapIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Renderer_get_lightmapIndex_m54938EF40D6EC5F3673C52C99DCA8109C8211147 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Renderer::get_realtimeLightmapIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Renderer_get_realtimeLightmapIndex_mC5186849F60301D8D9ACA247A7AC317C8CDC297A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Renderer::get_lightmapScaleOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Renderer_get_lightmapScaleOffset_m4F9B66CD1212370CEAF1024A6748130C9C55702A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Renderer::get_realtimeLightmapScaleOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Renderer_get_realtimeLightmapScaleOffset_m4E1F185D15FAE29503C27AAAA2D694C8D015D2A1 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::DisableShaderKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_DisableShaderKeyword_m2B66FB1F672F3EE51FEA8A2CBA24AA6B7E4454BD (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, String_t* ___keyword0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::DrawRenderer(UnityEngine.Renderer,UnityEngine.Material,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_DrawRenderer_m0E01900E0CA8B52F3BB03C82A27214A354007138 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___renderer0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material1, int32_t ___submeshIndex2, int32_t ___shaderPass3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::ExecuteCommandBuffer(UnityEngine.Rendering.CommandBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_ExecuteCommandBuffer_m6DF8B1F93BA2BD9BED8F911A05A64D56BC1FFBA1 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___buffer0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.MeshFilter>::Clear()
inline void List_1_Clear_m47377D7758798C489896B13DDD6EAFEC1B6D9917_inline (List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Material,UnityEngine.Material>::GetEnumerator()
inline Enumerator_t07C26ED2F5F8668F764FEEBCAA3E15D546EF661B Dictionary_2_GetEnumerator_m71CCF46E896A3B30D201D7DE113D036ED5BB2971 (Dictionary_2_t7B0F5D63DDA1E532530982C8043F0A132FF9745F* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t07C26ED2F5F8668F764FEEBCAA3E15D546EF661B (*) (Dictionary_2_t7B0F5D63DDA1E532530982C8043F0A132FF9745F*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Material,UnityEngine.Material>::Dispose()
inline void Enumerator_Dispose_m61B5C03832F0F13F7FFB8AEA4BF9B0FB108751EA (Enumerator_t07C26ED2F5F8668F764FEEBCAA3E15D546EF661B* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t07C26ED2F5F8668F764FEEBCAA3E15D546EF661B*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Material,UnityEngine.Material>::get_Current()
inline KeyValuePair_2_t2913F672181757C35EF65E5366FB4F700F5FE5DA Enumerator_get_Current_mD4C103A14262CBA39F94C6D28E01D6B9C3C77D43_inline (Enumerator_t07C26ED2F5F8668F764FEEBCAA3E15D546EF661B* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t2913F672181757C35EF65E5366FB4F700F5FE5DA (*) (Enumerator_t07C26ED2F5F8668F764FEEBCAA3E15D546EF661B*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<UnityEngine.Material,UnityEngine.Material>::get_Value()
inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* KeyValuePair_2_get_Value_m230C0120AEEB00A0FB41EFB49B43B4666CC9C410_inline (KeyValuePair_2_t2913F672181757C35EF65E5366FB4F700F5FE5DA* __this, const RuntimeMethod* method)
{
	return ((  Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* (*) (KeyValuePair_2_t2913F672181757C35EF65E5366FB4F700F5FE5DA*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Material,UnityEngine.Material>::MoveNext()
inline bool Enumerator_MoveNext_mAA67D06FC2C56B827B0BFD4A1F4E79FA460FD334 (Enumerator_t07C26ED2F5F8668F764FEEBCAA3E15D546EF661B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t07C26ED2F5F8668F764FEEBCAA3E15D546EF661B*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Material,UnityEngine.Material>::Clear()
inline void Dictionary_2_Clear_m23BA91B0F6DC61F753378785862281334A780902 (Dictionary_2_t7B0F5D63DDA1E532530982C8043F0A132FF9745F* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7B0F5D63DDA1E532530982C8043F0A132FF9745F*, const RuntimeMethod*))Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared)(__this, method);
}
// System.Void UnityEngine.Rendering.CommandBuffer::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_Release_m7D3C99D5B1598F727BD2E0E115FAD6A4E1A123A6 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m94A09872C449C26863FF10D0FDF87842D91BECD6_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Rotate(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_Rotate_mE2C31B51EEC282F2969B9C2BE24BD73E312807E8 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___q0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 AmplifyImpostors.AmplifyImpostor::OctahedronToVector(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 AmplifyImpostor_OctahedronToVector_mDDE664219388ACF1202A3F2EEBB6754360368B0B (AmplifyImpostor_tE757F7B6A3714CB07452670A8C4491B8CC747B3D* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mE6859FEBE85BC0AE72A14159988151FF69BF4401 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upwards1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 AmplifyImpostors.AmplifyImpostor::HemiOctahedronToVector(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 AmplifyImpostor_HemiOctahedronToVector_mCD49FD719E79C5DD714489C3550845D84C0CDB5D (AmplifyImpostor_tE757F7B6A3714CB07452670A8C4491B8CC747B3D* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::Set(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Set_m1C7E543216734FB513F9CEBA44C50E6FC2AFD49D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___newX0, float ___newY1, float ___newZ2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void AmplifyImpostors.SpriteUtilityEx::GenerateOutline(UnityEngine.Texture2D,UnityEngine.Rect,System.Single,System.Byte,System.Boolean,UnityEngine.Vector2[][]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteUtilityEx_GenerateOutline_m4C89EA92F3720CB901100866A06393BAAC293913 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect1, float ___detail2, uint8_t ___alphaTolerance3, bool ___holeDetection4, Vector2U5BU5DU5BU5D_t02CC59651AB42ABB047B0391F32F881D7E7A0092** ___paths5, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::Scale(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Scale_mC9AFC562DF393640663C6FFC733EADD343FB6B65_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2[] AmplifyImpostors.Vector2Ex::ConvexHull(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* Vector2Ex_ConvexHull_m3F5DCB24D8B364C01F246CE3B9EFE80BA97F9019 (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___P0, const RuntimeMethod* method) ;
// UnityEngine.Vector2[] AmplifyImpostors.Vector2Ex::ReduceVertices(UnityEngine.Vector2[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* Vector2Ex_ReduceVertices_m5DC8BBEA77ABF8AAD3456BC255DB4FD59BD631DA (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___P0, int32_t ___maxVertices1, const RuntimeMethod* method) ;
// UnityEngine.Vector2[] AmplifyImpostors.Vector2Ex::ScaleAlongNormals(UnityEngine.Vector2[],System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* Vector2Ex_ScaleAlongNormals_m622B47DD9726BAB1637B513D1A962E39015735FF (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___P0, float ___scaleAmount1, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m4239F97ECC23A71F4191B8722362A1AA38E2E98F (RuntimeArray* ___sourceArray0, RuntimeArray* ___destinationArray1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void AmplifyImpostors.Triangulator::.ctor(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Triangulator__ctor_m20D91D7FE56A804525A65824D83526D12F8D4E24 (Triangulator_tB201648A1D8A86DFA5BA3B50ECAA301D7D07123E* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___points0, const RuntimeMethod* method) ;
// System.Int32[] AmplifyImpostors.Triangulator::Triangulate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Triangulator_Triangulate_m5FF6C65699EE4999598D16DBF678DE8EE184D020 (Triangulator_tB201648A1D8A86DFA5BA3B50ECAA301D7D07123E* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.Vector2> AmplifyImpostors.Triangulator::get_Points()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* Triangulator_get_Points_m1560D679DCB06E74B19DDAFB6D946043D999BB33_inline (Triangulator_tB201648A1D8A86DFA5BA3B50ECAA301D7D07123E* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Count()
inline int32_t List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, const RuntimeMethod*))List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Item(System.Int32)
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543 (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, int32_t, const RuntimeMethod*))List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_uv_m6ED9C50E0DA8166DD48AC40FD6C828B9AD2E9617 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_triangles_m124405320579A8D92711BB5A124644963A26F60B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::RecalculateNormals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_RecalculateNormals_m3AA2788914611444E030CA310E03E3CFE683902B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Bounds::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds__ctor_mAF7B238B9FBF90C495E5D7951760085A93119C5A (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___center0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___size1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_bounds(UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_bounds_m2E526E9B61ACA77D644C22A9D8EB49583012B54E (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<AmplifyImpostors.TextureOutput>::.ctor()
inline void List_1__ctor_mDB37C597C4185D9DAC4F9E3B580B7C4F1693EAAC (List_1_t0448AD99A177BC2606599BEAB410C01DDFEE7687* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0448AD99A177BC2606599BEAB410C01DDFEE7687*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Object System.Object::MemberwiseClone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_MemberwiseClone_m0676AEE25C3CF7C09F15ECF9EC5CC407863617B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint3x4(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_extents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix4x4_MultiplyVector_mFD12F86A473E90BBB0002149ABA3917B2A518937 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Bounds::set_center(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds_set_center_m891869DD5B1BEEE2D17907BBFB7EB79AAE44884B (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Bounds::set_extents(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds_set_extents_m09496358547B86A93EFE7BE6371E7A6FE937C46F (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.TextureFormat UnityEngine.Texture2D::get_format()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Texture2D_get_format_mE39DD922F83CA1097383309278BB6F20636A7D9D (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m9E93692A2BB0E34119603FF6A5D44F6A132052E8 (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryWriter__ctor_mF2F1235E378C3EC493A8C816597BCEB4205A9CA0 (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___output0, const RuntimeMethod* method) ;
// UnityEngine.Color32[] UnityEngine.Texture2D::GetPixels32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* Texture2D_GetPixels32_m48230192E7543765C1A517F251D1D9BFCFB58C3D (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Boolean AmplifyImpostors.Texture2DEx::Equals(UnityEngine.Color32,UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Texture2DEx_Equals_m7B16C4056E1DF7BC32706ECED858AC553E6A7659 (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___first0, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___second1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Min(System.Int32[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_m464FF96F8532FE33EB226E049BDAB1885AB67366_inline (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___values0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Type AmplifyImpostors.SpriteUtilityEx::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* SpriteUtilityEx_get_Type_m88BEB114DB8D278C5AAF9689DD45D384122CCB3D (const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Type_GetMethod_m9E66B5053F150537A74C490C1DA5174A7875189D (Type_t* __this, String_t* ___name0, int32_t ___bindingAttr1, const RuntimeMethod* method) ;
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826 (MethodBase_t* __this, RuntimeObject* ___obj0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___parameters1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RenderTexture::get_depth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderTexture_get_depth_mFF0403F4DE88EDEAD9A8C3D56FA5C4EEB0FDD305 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, const RuntimeMethod* method) ;
// UnityEngine.RenderTextureFormat UnityEngine.RenderTexture::get_format()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderTexture_get_format_m58556ABB91A1FADA8044BEEA2E8C55280768CF35 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* RenderTexture_GetTemporary_mEB21705B78CAF6B8F1F6617453A8EE8A94498DE2 (int32_t ___width0, int32_t ___height1, int32_t ___depthBuffer2, int32_t ___format3, const RuntimeMethod* method) ;
// System.Void System.Comparison`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
inline void Comparison_1__ctor_m00B27E3ACB966A745A2A894A7CF0CA6AB4E66B4F (Comparison_1_t30B79D9F5F84D1FC372D3727914E6F0CA6B42F65* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Comparison_1_t30B79D9F5F84D1FC372D3727914E6F0CA6B42F65*, RuntimeObject*, intptr_t, const RuntimeMethod*))Comparison_1__ctor_m00B27E3ACB966A745A2A894A7CF0CA6AB4E66B4F_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Array::Sort<UnityEngine.Vector2>(T[],System.Comparison`1<T>)
inline void Array_Sort_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mC4B49058AD0FA6B4F0E0B8B28E28CE55F6D988FC (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___array0, Comparison_1_t30B79D9F5F84D1FC372D3727914E6F0CA6B42F65* ___comparison1, const RuntimeMethod* method)
{
	((  void (*) (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*, Comparison_1_t30B79D9F5F84D1FC372D3727914E6F0CA6B42F65*, const RuntimeMethod*))Array_Sort_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mC4B49058AD0FA6B4F0E0B8B28E28CE55F6D988FC_gshared)(___array0, ___comparison1, method);
}
// System.Single AmplifyImpostors.Vector2Ex::Cross(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2Ex_Cross_m6B7DFF570DEC9F8D39E7B40408722A9A676590D2 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___O0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___A1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___B2, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<UnityEngine.Vector2>(T[]&,System.Int32)
inline void Array_Resize_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m1544A31070A94F187BC8B7B345E9958557DAEA57 (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA**, int32_t, const RuntimeMethod*))Array_Resize_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m1544A31070A94F187BC8B7B345E9958557DAEA57_gshared)(___array0, ___newSize1, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void AmplifyImpostors.Vector2Ex/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m2289A4F754618E86E7DC0A7B1BF8B75911953E70 (U3CU3Ec__DisplayClass5_0_t83480A865FF4BA1AE0BC2DA5F0DDECF243A8C957* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 AmplifyImpostors.Vector2Ex::GetIntersectionPointCoordinates(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2Ex_GetIntersectionPointCoordinates_m02BA444FBF77C4D4471D5334E73AE5ED90759104 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___A10, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___A21, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___B12, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___B23, const RuntimeMethod* method) ;
// System.Single AmplifyImpostors.Vector2Ex::TriangleArea(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2Ex_TriangleArea_m5636808ADA571E4A08B0DE35CC1165701883E8A8 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___O0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___A1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___B2, const RuntimeMethod* method) ;
// System.Single AmplifyImpostors.Vector2Ex::OutsideBounds(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2Ex_OutsideBounds_mA331BDC16E52CE3F585896AB889896C4228E140C (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___P0, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_mFBDD941A383278B84BD8E0B75B1D3C9E9D46238B (Predicate_1_t7744EBE2271FC2C4CBF28703CF361AF669D73B95* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t7744EBE2271FC2C4CBF28703CF361AF669D73B95*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_mFBDD941A383278B84BD8E0B75B1D3C9E9D46238B_gshared)(__this, ___object0, ___method1, method);
}
// T[] System.Array::FindAll<UnityEngine.Vector2>(T[],System.Predicate`1<T>)
inline Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* Array_FindAll_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m360F9A238A493AE524F17EFCE128B1FAD72EA20B (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___array0, Predicate_1_t7744EBE2271FC2C4CBF28703CF361AF669D73B95* ___match1, const RuntimeMethod* method)
{
	return ((  Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* (*) (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*, Predicate_1_t7744EBE2271FC2C4CBF28703CF361AF669D73B95*, const RuntimeMethod*))Array_FindAll_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m360F9A238A493AE524F17EFCE128B1FAD72EA20B_gshared)(___array0, ___match1, method);
}
// System.Single UnityEngine.Rect::get_xMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_xMin(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_xMin_mA873FCFAF9EABA46A026B73CA045192DF1946F19 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_xMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_xMax(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_xMax_m97C28D468455A6D19325D0D862E80A093240D49D (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_yMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_yMin(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_yMin_m9F780E509B9215A9E5826178CF664BD0E486D4EE (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_yMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_yMax(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_yMax_mCF452040E0068A4B3CB15994C0B4B6AD4D78E04B (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m830F00B616D7A2130E46E974DFB27E9DA7FE30E5 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// UnityEngine.Vector2[] AmplifyImpostors.Vector2Ex::ReduceLeastSignificantVertice(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* Vector2Ex_ReduceLeastSignificantVertice_m0514351A829FE85A2F10F91D107E2CBE9C888DDA (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___P0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::Lerp(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Lerp_mF3BD6827807680A529E800FD027734D40A3597E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m232E885D3C7BB6A96D5FEF4494709BA170447604_inline (const RuntimeMethod* method) ;
// System.Void AmplifyImpostors.Vector2Ex/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m28EA3554DD59C4E417619505425AE5FCB44E2691 (U3CU3Ec_t5AA2192F2C3EF1E998258301FA66B029084AF095* __this, const RuntimeMethod* method) ;
// System.Int32 System.Single::CompareTo(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F (float* __this, float ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Array::IndexOf<UnityEngine.Vector2>(T[],T)
inline int32_t Array_IndexOf_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mB22ACA25FDC85004C7264DA6FE3AB3C2355417D4 (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___array0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))Array_IndexOf_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mB22ACA25FDC85004C7264DA6FE3AB3C2355417D4_gshared)(___array0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor()
inline void List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, const RuntimeMethod*))List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_m105596C2159C46B75E96D26ACEC0A5C1C1F5C5EC (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m105596C2159C46B75E96D26ACEC0A5C1C1F5C5EC_gshared)(__this, ___collection0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Add(T)
inline void List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared)(__this, method);
}
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_gshared)(__this, method);
}
// System.Single AmplifyImpostors.Triangulator::Area()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Triangulator_Area_m795C06102D0B8326DFBE9A33C29341C960EB663A (Triangulator_tB201648A1D8A86DFA5BA3B50ECAA301D7D07123E* __this, const RuntimeMethod* method) ;
// System.Boolean AmplifyImpostors.Triangulator::Snip(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Triangulator_Snip_mB920074AAEF3A405CF0B7D6D85B1C4DA62F1ABAC (Triangulator_tB201648A1D8A86DFA5BA3B50ECAA301D7D07123E* __this, int32_t ___u0, int32_t ___v1, int32_t ___w2, int32_t ___n3, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___V4, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
inline void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Reverse()
inline void List_1_Reverse_m09394C650409964E568ED088D88C1BA78EE468DC (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_Reverse_m09394C650409964E568ED088D88C1BA78EE468DC_gshared)(__this, method);
}
// System.Boolean AmplifyImpostors.Triangulator::InsideTriangle(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Triangulator_InsideTriangle_m4279D2BA40AEBE80ADFCAE5A71258B0139FCD1EE (Triangulator_tB201648A1D8A86DFA5BA3B50ECAA301D7D07123E* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pt0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v11, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v22, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v33, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.String System.Byte::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Byte_ToString_mB80CE094B94215119578E4D796566E71D7277EE4 (uint8_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Int32 AmplifyImpostors.VersionInfo::get_FullNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VersionInfo_get_FullNumber_mD890CE4401F0B816C60A5B253D2E66B9AD27C7E8 (const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
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
// System.Void ExtendedFlycam::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtendedFlycam_Start_m5BF073A7C14AF571FB461E2BCC28D750F489AD2B (ExtendedFlycam_t0410DF4AC94411C97FD334EC2AD9CC14A539CE15* __this, const RuntimeMethod* method) 
{
	{
		// Cursor.lockState = CursorLockMode.Locked;
		Cursor_set_lockState_m5CA1C31AF58CE2CDFD4F6999B4F42C9D0DF8A99D(1, NULL);
		// Cursor.visible = false;
		Cursor_set_visible_mC2A804ADF7411AC885923A2E9F3108BCC85C1AE4((bool)0, NULL);
		// }
		return;
	}
}
// System.Void ExtendedFlycam::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtendedFlycam_Update_mCDCF0575D76E3510160B5A946AB046DC81292643 (ExtendedFlycam_t0410DF4AC94411C97FD334EC2AD9CC14A539CE15* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if( Cursor.lockState != CursorLockMode.None )
		int32_t L_0;
		L_0 = Cursor_get_lockState_m99E97A23A051AA1167B9C49C3F6E8244E74531AE(NULL);
		if (!L_0)
		{
			goto IL_004f;
		}
	}
	{
		// rotationX += Input.GetAxis( "Mouse X" ) * cameraSensitivity * Time.deltaTime;
		float L_1 = __this->___rotationX_9;
		float L_2;
		L_2 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		float L_3 = __this->___cameraSensitivity_4;
		float L_4;
		L_4 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___rotationX_9 = ((float)il2cpp_codegen_add(L_1, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_2, L_3)), L_4))));
		// rotationY += Input.GetAxis( "Mouse Y" ) * cameraSensitivity * Time.deltaTime;
		float L_5 = __this->___rotationY_10;
		float L_6;
		L_6 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		float L_7 = __this->___cameraSensitivity_4;
		float L_8;
		L_8 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___rotationY_10 = ((float)il2cpp_codegen_add(L_5, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_6, L_7)), L_8))));
	}

IL_004f:
	{
		// rotationY = Mathf.Clamp( rotationY, -90, 90 );
		float L_9 = __this->___rotationY_10;
		float L_10;
		L_10 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_9, (-90.0f), (90.0f), NULL);
		__this->___rotationY_10 = L_10;
		// Quaternion temp = Quaternion.AngleAxis( rotationX, Vector3.up );
		float L_11 = __this->___rotationX_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Quaternion_AngleAxis_m01A869DC10F976FAF493B66F15D6D6977BB61DA8(L_11, L_12, NULL);
		V_0 = L_13;
		// temp *= Quaternion.AngleAxis( rotationY, Vector3.left );
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = V_0;
		float L_15 = __this->___rotationY_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_get_left_mA75C525C1E78B5BB99E9B7A63EF68C731043FE18_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Quaternion_AngleAxis_m01A869DC10F976FAF493B66F15D6D6977BB61DA8(L_15, L_16, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_14, L_17, NULL);
		V_0 = L_18;
		// transform.localRotation = Quaternion.Lerp( transform.localRotation, temp, Time.deltaTime * 5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_20);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21;
		L_21 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_20, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = V_0;
		float L_23;
		L_23 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24;
		L_24 = Quaternion_Lerp_m7BE5A2D8FA33A15A5145B2F5261707CA17C3E792(L_21, L_22, ((float)il2cpp_codegen_multiply(L_23, (5.0f))), NULL);
		NullCheck(L_19);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_19, L_24, NULL);
		// if( Input.GetKey( KeyCode.LeftShift ) || Input.GetKey( KeyCode.RightShift ) )
		bool L_25;
		L_25 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)304), NULL);
		if (L_25)
		{
			goto IL_00d4;
		}
	}
	{
		bool L_26;
		L_26 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)303), NULL);
		if (!L_26)
		{
			goto IL_01fc;
		}
	}

IL_00d4:
	{
		// transform.position += transform.forward * ( normalMoveSpeed * fastMoveFactor ) * Input.GetAxis( "Vertical" ) * Time.deltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28 = L_27;
		NullCheck(L_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_28, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_30, NULL);
		float L_32 = __this->___normalMoveSpeed_6;
		float L_33 = __this->___fastMoveFactor_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_31, ((float)il2cpp_codegen_multiply(L_32, L_33)), NULL);
		float L_35;
		L_35 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_34, L_35, NULL);
		float L_37;
		L_37 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_36, L_37, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_29, L_38, NULL);
		NullCheck(L_28);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_28, L_39, NULL);
		// transform.position += transform.right * ( normalMoveSpeed * fastMoveFactor ) * Input.GetAxis( "Horizontal" ) * Time.deltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41 = L_40;
		NullCheck(L_41);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_41, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_43);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_43, NULL);
		float L_45 = __this->___normalMoveSpeed_6;
		float L_46 = __this->___fastMoveFactor_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_44, ((float)il2cpp_codegen_multiply(L_45, L_46)), NULL);
		float L_48;
		L_48 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_47, L_48, NULL);
		float L_50;
		L_50 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_49, L_50, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_42, L_51, NULL);
		NullCheck(L_41);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_41, L_52, NULL);
		// if( Input.GetKey( KeyCode.Q ) ) { transform.position += Vector3.up * climbSpeed * fastMoveFactor * Time.deltaTime; }
		bool L_53;
		L_53 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)113), NULL);
		if (!L_53)
		{
			goto IL_01b0;
		}
	}
	{
		// if( Input.GetKey( KeyCode.Q ) ) { transform.position += Vector3.up * climbSpeed * fastMoveFactor * Time.deltaTime; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_54;
		L_54 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_55 = L_54;
		NullCheck(L_55);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_55, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		L_57 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		float L_58 = __this->___climbSpeed_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_57, L_58, NULL);
		float L_60 = __this->___fastMoveFactor_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		L_61 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_59, L_60, NULL);
		float L_62;
		L_62 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_61, L_62, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64;
		L_64 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_56, L_63, NULL);
		NullCheck(L_55);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_55, L_64, NULL);
	}

IL_01b0:
	{
		// if( Input.GetKey( KeyCode.E ) ) { transform.position -= Vector3.up * climbSpeed * fastMoveFactor * Time.deltaTime; }
		bool L_65;
		L_65 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)101), NULL);
		if (!L_65)
		{
			goto IL_043b;
		}
	}
	{
		// if( Input.GetKey( KeyCode.E ) ) { transform.position -= Vector3.up * climbSpeed * fastMoveFactor * Time.deltaTime; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_66;
		L_66 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_67 = L_66;
		NullCheck(L_67);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		L_68 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_67, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		L_69 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		float L_70 = __this->___climbSpeed_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		L_71 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_69, L_70, NULL);
		float L_72 = __this->___fastMoveFactor_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73;
		L_73 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_71, L_72, NULL);
		float L_74;
		L_74 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75;
		L_75 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_73, L_74, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76;
		L_76 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_68, L_75, NULL);
		NullCheck(L_67);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_67, L_76, NULL);
		goto IL_043b;
	}

IL_01fc:
	{
		// else if( Input.GetKey( KeyCode.LeftControl ) || Input.GetKey( KeyCode.RightControl ) )
		bool L_77;
		L_77 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)306), NULL);
		if (L_77)
		{
			goto IL_0217;
		}
	}
	{
		bool L_78;
		L_78 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)305), NULL);
		if (!L_78)
		{
			goto IL_033f;
		}
	}

IL_0217:
	{
		// transform.position += transform.forward * ( normalMoveSpeed * slowMoveFactor ) * Input.GetAxis( "Vertical" ) * Time.deltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_79;
		L_79 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_80 = L_79;
		NullCheck(L_80);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81;
		L_81 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_80, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_82;
		L_82 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_82);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83;
		L_83 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_82, NULL);
		float L_84 = __this->___normalMoveSpeed_6;
		float L_85 = __this->___slowMoveFactor_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86;
		L_86 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_83, ((float)il2cpp_codegen_multiply(L_84, L_85)), NULL);
		float L_87;
		L_87 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		L_88 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_86, L_87, NULL);
		float L_89;
		L_89 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90;
		L_90 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_88, L_89, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91;
		L_91 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_81, L_90, NULL);
		NullCheck(L_80);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_80, L_91, NULL);
		// transform.position += transform.right * ( normalMoveSpeed * slowMoveFactor ) * Input.GetAxis( "Horizontal" ) * Time.deltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_92;
		L_92 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_93 = L_92;
		NullCheck(L_93);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94;
		L_94 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_93, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_95;
		L_95 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_95);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96;
		L_96 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_95, NULL);
		float L_97 = __this->___normalMoveSpeed_6;
		float L_98 = __this->___slowMoveFactor_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_99;
		L_99 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_96, ((float)il2cpp_codegen_multiply(L_97, L_98)), NULL);
		float L_100;
		L_100 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_101;
		L_101 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_99, L_100, NULL);
		float L_102;
		L_102 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_103;
		L_103 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_101, L_102, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_104;
		L_104 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_94, L_103, NULL);
		NullCheck(L_93);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_93, L_104, NULL);
		// if( Input.GetKey( KeyCode.Q ) ) { transform.position += Vector3.up * climbSpeed * slowMoveFactor * Time.deltaTime; }
		bool L_105;
		L_105 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)113), NULL);
		if (!L_105)
		{
			goto IL_02f3;
		}
	}
	{
		// if( Input.GetKey( KeyCode.Q ) ) { transform.position += Vector3.up * climbSpeed * slowMoveFactor * Time.deltaTime; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_106;
		L_106 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_107 = L_106;
		NullCheck(L_107);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		L_108 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_107, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_109;
		L_109 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		float L_110 = __this->___climbSpeed_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_111;
		L_111 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_109, L_110, NULL);
		float L_112 = __this->___slowMoveFactor_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_113;
		L_113 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_111, L_112, NULL);
		float L_114;
		L_114 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_115;
		L_115 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_113, L_114, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_116;
		L_116 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_108, L_115, NULL);
		NullCheck(L_107);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_107, L_116, NULL);
	}

IL_02f3:
	{
		// if( Input.GetKey( KeyCode.E ) ) { transform.position -= Vector3.up * climbSpeed * slowMoveFactor * Time.deltaTime; }
		bool L_117;
		L_117 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)101), NULL);
		if (!L_117)
		{
			goto IL_043b;
		}
	}
	{
		// if( Input.GetKey( KeyCode.E ) ) { transform.position -= Vector3.up * climbSpeed * slowMoveFactor * Time.deltaTime; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_118;
		L_118 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_119 = L_118;
		NullCheck(L_119);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_120;
		L_120 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_119, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_121;
		L_121 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		float L_122 = __this->___climbSpeed_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_123;
		L_123 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_121, L_122, NULL);
		float L_124 = __this->___slowMoveFactor_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_125;
		L_125 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_123, L_124, NULL);
		float L_126;
		L_126 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_127;
		L_127 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_125, L_126, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_128;
		L_128 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_120, L_127, NULL);
		NullCheck(L_119);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_119, L_128, NULL);
		goto IL_043b;
	}

IL_033f:
	{
		// transform.position += transform.forward * normalMoveSpeed * Input.GetAxis( "Vertical" ) * Time.deltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_129;
		L_129 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_130 = L_129;
		NullCheck(L_130);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_131;
		L_131 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_130, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_132;
		L_132 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_132);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_133;
		L_133 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_132, NULL);
		float L_134 = __this->___normalMoveSpeed_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_135;
		L_135 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_133, L_134, NULL);
		float L_136;
		L_136 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_137;
		L_137 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_135, L_136, NULL);
		float L_138;
		L_138 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_139;
		L_139 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_137, L_138, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_140;
		L_140 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_131, L_139, NULL);
		NullCheck(L_130);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_130, L_140, NULL);
		// transform.position += transform.right * normalMoveSpeed * Input.GetAxis( "Horizontal" ) * Time.deltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_141;
		L_141 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_142 = L_141;
		NullCheck(L_142);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_143;
		L_143 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_142, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_144;
		L_144 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_144);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_145;
		L_145 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_144, NULL);
		float L_146 = __this->___normalMoveSpeed_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_147;
		L_147 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_145, L_146, NULL);
		float L_148;
		L_148 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_149;
		L_149 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_147, L_148, NULL);
		float L_150;
		L_150 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_151;
		L_151 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_149, L_150, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_152;
		L_152 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_143, L_151, NULL);
		NullCheck(L_142);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_142, L_152, NULL);
		// if( Input.GetKey( KeyCode.Q ) ) { transform.position += Vector3.up * climbSpeed * Time.deltaTime; }
		bool L_153;
		L_153 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)113), NULL);
		if (!L_153)
		{
			goto IL_0402;
		}
	}
	{
		// if( Input.GetKey( KeyCode.Q ) ) { transform.position += Vector3.up * climbSpeed * Time.deltaTime; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_154;
		L_154 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_155 = L_154;
		NullCheck(L_155);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_156;
		L_156 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_155, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_157;
		L_157 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		float L_158 = __this->___climbSpeed_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_159;
		L_159 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_157, L_158, NULL);
		float L_160;
		L_160 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_161;
		L_161 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_159, L_160, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_162;
		L_162 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_156, L_161, NULL);
		NullCheck(L_155);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_155, L_162, NULL);
	}

IL_0402:
	{
		// if( Input.GetKey( KeyCode.E ) ) { transform.position -= Vector3.up * climbSpeed * Time.deltaTime; }
		bool L_163;
		L_163 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)101), NULL);
		if (!L_163)
		{
			goto IL_043b;
		}
	}
	{
		// if( Input.GetKey( KeyCode.E ) ) { transform.position -= Vector3.up * climbSpeed * Time.deltaTime; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_164;
		L_164 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_165 = L_164;
		NullCheck(L_165);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_166;
		L_166 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_165, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_167;
		L_167 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		float L_168 = __this->___climbSpeed_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_169;
		L_169 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_167, L_168, NULL);
		float L_170;
		L_170 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_171;
		L_171 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_169, L_170, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_172;
		L_172 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_166, L_171, NULL);
		NullCheck(L_165);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_165, L_172, NULL);
	}

IL_043b:
	{
		// if( Input.GetKeyDown( KeyCode.End ) || Input.GetKeyDown( KeyCode.Escape ) )
		bool L_173;
		L_173 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)279), NULL);
		if (L_173)
		{
			goto IL_0450;
		}
	}
	{
		bool L_174;
		L_174 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)27), NULL);
		if (!L_174)
		{
			goto IL_0470;
		}
	}

IL_0450:
	{
		// if( Cursor.lockState == CursorLockMode.None )
		int32_t L_175;
		L_175 = Cursor_get_lockState_m99E97A23A051AA1167B9C49C3F6E8244E74531AE(NULL);
		if (L_175)
		{
			goto IL_0464;
		}
	}
	{
		// Cursor.lockState = CursorLockMode.Locked;
		Cursor_set_lockState_m5CA1C31AF58CE2CDFD4F6999B4F42C9D0DF8A99D(1, NULL);
		// Cursor.visible = false;
		Cursor_set_visible_mC2A804ADF7411AC885923A2E9F3108BCC85C1AE4((bool)0, NULL);
		return;
	}

IL_0464:
	{
		// Cursor.lockState = CursorLockMode.None;
		Cursor_set_lockState_m5CA1C31AF58CE2CDFD4F6999B4F42C9D0DF8A99D(0, NULL);
		// Cursor.visible = true;
		Cursor_set_visible_mC2A804ADF7411AC885923A2E9F3108BCC85C1AE4((bool)1, NULL);
	}

IL_0470:
	{
		// }
		return;
	}
}
// System.Void ExtendedFlycam::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtendedFlycam__ctor_m3F362DF3491FFCBBFD16C5CAEAC612C824B09FE1 (ExtendedFlycam_t0410DF4AC94411C97FD334EC2AD9CC14A539CE15* __this, const RuntimeMethod* method) 
{
	{
		// public float cameraSensitivity = 90;
		__this->___cameraSensitivity_4 = (90.0f);
		// public float climbSpeed = 4;
		__this->___climbSpeed_5 = (4.0f);
		// public float normalMoveSpeed = 10;
		__this->___normalMoveSpeed_6 = (10.0f);
		// public float slowMoveFactor = 0.25f;
		__this->___slowMoveFactor_7 = (0.25f);
		// public float fastMoveFactor = 3;
		__this->___fastMoveFactor_8 = (3.0f);
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
// System.Void ForestMaker::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ForestMaker_Start_m5924472B0B3460784FA27BACAE64010D47639A41 (ForestMaker_t8B01D0DC7F71B9A150B11F605468D46E85858CD8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	float G_B7_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B7_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B7_2 = NULL;
	float G_B6_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B6_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B6_2 = NULL;
	float G_B8_0 = 0.0f;
	float G_B8_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B8_2 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B8_3 = NULL;
	{
		// if( m_treePrefab == null )
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_treePrefab_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// m_ground.transform.localScale = new Vector3( m_amount * 10, 1, m_amount * 5 * 1.866f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___m_ground_6;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		int32_t L_4 = __this->___m_amount_5;
		int32_t L_5 = __this->___m_amount_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((float)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)10)))), (1.0f), ((float)il2cpp_codegen_multiply(((float)((int32_t)il2cpp_codegen_multiply(L_5, 5))), (1.86600006f))), /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_3, L_6, NULL);
		// for( int i = -m_amount / 2; i <= m_amount / 2; i++ )
		int32_t L_7 = __this->___m_amount_5;
		V_0 = ((int32_t)(((-L_7))/2));
		goto IL_0157;
	}

IL_0051:
	{
		// for( int j = -m_amount / 2; j <= m_amount / 2; j++ )
		int32_t L_8 = __this->___m_amount_5;
		V_1 = ((int32_t)(((-L_8))/2));
		goto IL_0145;
	}

IL_0060:
	{
		// if( Random.Range( 0f, 1.0f ) > 0.5f )
		float L_9;
		L_9 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((0.0f), (1.0f), NULL);
		if ((((float)L_9) > ((float)(0.5f))))
		{
			goto IL_0141;
		}
	}
	{
		// GameObject newGo = Instantiate<GameObject>( m_treePrefab);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___m_treePrefab_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D(L_10, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		// Vector3 newPos = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_2 = L_12;
		// newPos.x = ( i + j * 0.5f - (int)((j < 0?j-1f:j) / 2.0f) ) * 2 * m_radiusDistance;
		int32_t L_13 = V_0;
		int32_t L_14 = V_1;
		int32_t L_15 = V_1;
		G_B6_0 = ((float)il2cpp_codegen_add(((float)L_13), ((float)il2cpp_codegen_multiply(((float)L_14), (0.5f)))));
		G_B6_1 = (&V_2);
		G_B6_2 = L_11;
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			G_B7_0 = ((float)il2cpp_codegen_add(((float)L_13), ((float)il2cpp_codegen_multiply(((float)L_14), (0.5f)))));
			G_B7_1 = (&V_2);
			G_B7_2 = L_11;
			goto IL_009f;
		}
	}
	{
		int32_t L_16 = V_1;
		G_B8_0 = ((float)L_16);
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		G_B8_3 = G_B6_2;
		goto IL_00a7;
	}

IL_009f:
	{
		int32_t L_17 = V_1;
		G_B8_0 = ((float)il2cpp_codegen_subtract(((float)L_17), (1.0f)));
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
		G_B8_3 = G_B7_2;
	}

IL_00a7:
	{
		float L_18 = __this->___m_radiusDistance_7;
		G_B8_2->___x_2 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(G_B8_1, ((float)il2cpp_codegen_cast_double_to_int<int32_t>(((float)(G_B8_0/(2.0f))))))), (2.0f))), L_18));
		// newPos.z = ( j ) * 1.866f * m_radiusDistance;
		int32_t L_19 = V_1;
		float L_20 = __this->___m_radiusDistance_7;
		(&V_2)->___z_4 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)L_19), (1.86600006f))), L_20));
		// newGo.transform.position = newPos;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = G_B8_3;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_2;
		NullCheck(L_22);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_22, L_23, NULL);
		// float size = Random.Range( 1f, 1.5f );
		float L_24;
		L_24 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((1.0f), (1.5f), NULL);
		V_3 = L_24;
		// newGo.transform.localScale = Vector3.one * size;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = L_21;
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		float L_28 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_27, L_28, NULL);
		NullCheck(L_26);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_26, L_29, NULL);
		// newGo.transform.Rotate( Random.Range( -10f, 10f ), Random.Range( -180f, 180f ), Random.Range( -10f, 10f ) );
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_25, NULL);
		float L_31;
		L_31 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((-10.0f), (10.0f), NULL);
		float L_32;
		L_32 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((-180.0f), (180.0f), NULL);
		float L_33;
		L_33 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((-10.0f), (10.0f), NULL);
		NullCheck(L_30);
		Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2(L_30, L_31, L_32, L_33, NULL);
	}

IL_0141:
	{
		// for( int j = -m_amount / 2; j <= m_amount / 2; j++ )
		int32_t L_34 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_0145:
	{
		// for( int j = -m_amount / 2; j <= m_amount / 2; j++ )
		int32_t L_35 = V_1;
		int32_t L_36 = __this->___m_amount_5;
		if ((((int32_t)L_35) <= ((int32_t)((int32_t)(L_36/2)))))
		{
			goto IL_0060;
		}
	}
	{
		// for( int i = -m_amount / 2; i <= m_amount / 2; i++ )
		int32_t L_37 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_0157:
	{
		// for( int i = -m_amount / 2; i <= m_amount / 2; i++ )
		int32_t L_38 = V_0;
		int32_t L_39 = __this->___m_amount_5;
		if ((((int32_t)L_38) <= ((int32_t)((int32_t)(L_39/2)))))
		{
			goto IL_0051;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ForestMaker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ForestMaker__ctor_m2F33D7DBD49B07098ABC03AC8CFC72EFED368B72 (ForestMaker_t8B01D0DC7F71B9A150B11F605468D46E85858CD8* __this, const RuntimeMethod* method) 
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
// AmplifyImpostors.AmplifyImpostorAsset AmplifyImpostors.AmplifyImpostor::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AmplifyImpostorAsset_t8EC9563BE7AD641AE5EF7369E4677234BD158F1C* AmplifyImpostor_get_Data_mBCFC3A4AE1520CAC2F32B7DE2930EDA058BF0AC5 (AmplifyImpostor_tE757F7B6A3714CB07452670A8C4491B8CC747B3D* __this, const RuntimeMethod* method) 
{
	{
		// public AmplifyImpostorAsset Data { get { return m_data; } set { m_data = value; } }
		AmplifyImpostorAsset_t8EC9563BE7AD641AE5EF7369E4677234BD158F1C* L_0 = __this->___m_data_18;
		return L_0;
	}
}
// System.Void AmplifyImpostors.AmplifyImpostor::set_Data(AmplifyImpostors.AmplifyImpostorAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AmplifyImpostor_set_Data_m70DACEFBDBEA1644EA99178791BDE53899133885 (AmplifyImpostor_tE757F7B6A3714CB07452670A8C4491B8CC747B3D* __this, AmplifyImpostorAsset_t8EC9563BE7AD641AE5EF7369E4677234BD158F1C* ___value0, const RuntimeMethod* method) 
{
	{
		// public AmplifyImpostorAsset Data { get { return m_data; } set { m_data = value; } }
		AmplifyImpostorAsset_t8EC9563BE7AD641AE5EF7369E4677234BD158F1C* L_0 = ___value0;
		__this->___m_data_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_data_18), (void*)L_0);
		// public AmplifyImpostorAsset Data { get { return m_data; } set { m_data = value; } }
		return;
	}
}
// UnityEngine.Transform AmplifyImpostors.AmplifyImpostor::get_RootTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* AmplifyImpostor_get_RootTransform_m1D6E9D66A46D7639A41456BC535B6C5F82B850C5 (AmplifyImpostor_tE757F7B6A3714CB07452670A8C4491B8CC747B3D* __this, const RuntimeMethod* method) 
{
	{
		// public Transform RootTransform { get { return m_rootTransform; } set { m_rootTransform = value; } }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_rootTransform_19;
		return L_0;
	}
}
// System.Void AmplifyImpostors.AmplifyImpostor::set_RootTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AmplifyImpostor_set_RootTransform_m71EA0941730C75910E54E8410604763BD7DC30C6 (AmplifyImpostor_tE757F7B6A3714CB07452670A8C4491B8CC747B3D* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) 
{
	{
		// public Transform RootTransform { get { return m_rootTransform; } set { m_rootTransform = value; } }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___value0;
		__this->___m_rootTransform_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_rootTransform_19), (void*)L_0);
		// public Transform RootTransform { get { return m_rootTransform; } set { m_rootTransform = value; } }
		return;
	}
}
// UnityEngine.LODGroup AmplifyImpostors.AmplifyImpostor::get_LodGroup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LODGroup_tA4C4F98D3F698143BC7529146AB31A3D2EF24D9A* AmplifyImpostor_get_LodGroup_mD7C386954D255D6F15A6169359ABA783728DFBC3 (AmplifyImpostor_tE757F7B6A3714CB07452670A8C4491B8CC747B3D* __this, const RuntimeMethod* method) 
{
	{
		// public LODGroup LodGroup { get { return m_lodGroup; } set { m_lodGroup = value; } }
		LODGroup_tA4C4F98D3F698143BC7529146AB31A3D2EF24D9A* L_0 = __this->___m_lodGroup_20;
		return L_0;
	}
}
// System.Void AmplifyImpostors.AmplifyImpostor::set_LodGroup(UnityEngine.LODGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AmplifyImpostor_set_LodGroup_m46CE228F8FFD8428F25AFBB50F8CAF763B9881CE (AmplifyImpostor_tE757F7B6A3714CB07452670A8C4491B8CC747B3D* __this, LODGroup_tA4C4F98D3F698143BC7529146AB31A3D2EF24D9A* ___value0, const RuntimeMethod* method) 
{
	{
		// public LODGroup LodGroup { get { return m_lodGroup; } set { m_lodGroup = value; } }
		LODGroup_tA4C4F98D3F698143BC7529146AB31A3D2EF24D9A* L_0 = ___value0;
		__this->___m_lodGroup_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_lodGroup_20), (void*)L_0);
		// public LODGroup LodGroup { get { return m_lodGroup; } set { m_lodGroup = value; } }
		return;
	}
}
// UnityEngine.Renderer[] AmplifyImpostors.AmplifyImpostor::get_Renderers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* AmplifyImpostor_get_Renderers_mE743B4A3FD10A48EF555974A7833B062F4585DCD (AmplifyImpostor_tE757F7B6A3714CB07452670A8C4491B8CC747B3D* __this, const RuntimeMethod* method) 
{
	{
		// public Renderer[] Renderers { get { return m_renderers; } set { m_renderers = value; } }
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_0 = __this->___m_renderers_21;
		return L_0;
	}
}
// System.Void AmplifyImpostors.AmplifyImpostor::set_Renderers(UnityEngine.Renderer[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AmplifyImpostor_set_Renderers_m65C8D18A35650834623A62BB8CD331C910EF1509 (AmplifyImpostor_tE757F7B6A3714CB07452670A8C4491B8CC747B3D* __this, RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* ___value0, const RuntimeMethod* method) 
{
	{
		// public Renderer[] Renderers { get { return m_renderers; } set { m_renderers = value; } }
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_0 = ___value0;
		__this->___m_renderers_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_renderers_21), (void*)L_0);
		// public Renderer[] Renderers { get { return m_renderers; } set { m_renderers = value; } }
		return;
	}
}
// System.Void AmplifyImpostors.AmplifyImpostor::GenerateTextures(System.Collections.Generic.List`1<AmplifyImpostors.TextureOutput>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AmplifyImpostor_GenerateTextures_m782736DCF8B68F672344D2F3581107EB46D76774 (AmplifyImpostor_tE757F7B6A3714CB07452670A8C4491B8CC747B3D* __this, List_1_t0448AD99A177BC2606599BEAB410C01DDFEE7687* ___outputList0, bool ___standardRendering1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mDC2E5CCB816A4C2AA7D447D4912E8F0AAD561C73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m02C7ACCE499B7BEF14CBC7F7DE12EFF41A29E458_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	int32_t G_B6_2 = 0;
	int32_t G_B6_3 = 0;
	RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* G_B6_4 = NULL;
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	int32_t G_B5_2 = 0;
	int32_t G_B5_3 = 0;
	RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* G_B5_4 = NULL;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	int32_t G_B7_2 = 0;
	int32_t G_B7_3 = 0;
	int32_t G_B7_4 = 0;
	RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* G_B7_5 = NULL;
	{
		// m_rtGBuffers = new RenderTexture[ outputList.Count ];
		List_1_t0448AD99A177BC2606599BEAB410C01DDFEE7687* L_0 = ___outputList0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mDC2E5CCB816A4C2AA7D447D4912E8F0AAD561C73_inline(L_0, List_1_get_Count_mDC2E5CCB816A4C2AA7D447D4912E8F0AAD561C73_RuntimeMethod_var);
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_2 = (RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6*)(RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6*)SZArrayNew(RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6_il2cpp_TypeInfo_var, (uint32_t)L_1);
		__this->___m_rtGBuffers_32 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_rtGBuffers_32), (void*)L_2);
		// if( standardRendering && m_renderPipelineInUse == RenderPipelineInUse.HD )
		bool L_3 = ___standardRendering1;
		if (!L_3)
		{
			goto IL_016c;
		}
	}
	{
		int32_t L_4 = __this->___m_renderPipelineInUse_23;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_016c;
		}
	}
	{
		// var sformat = UnityEngine.Experimental.Rendering.GraphicsFormat.R8G8B8A8_SRGB;
		V_0 = 4;
		// var uformat = UnityEngine.Experimental.Rendering.GraphicsFormat.R8G8B8A8_UNorm;
		V_1 = 8;
		// var fformat = UnityEngine.Experimental.Rendering.GraphicsFormat.R16G16B16A16_SFloat;
		V_2 = ((int32_t)48);
		// m_rtGBuffers[ 0 ] = new RenderTexture( (int)m_data.TexSize.x, (int)m_data.TexSize.y, 16, sformat );
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_5 = __this->___m_rtGBuffers_32;
		AmplifyImpostorAsset_t8EC9563BE7AD641AE5EF7369E4677234BD158F1C* L_6 = __this->___m_data_18;
		NullCheck(L_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_7 = (&L_6->___TexSize_10);
		float L_8 = L_7->___x_0;
		AmplifyImpostorAsset_t8EC9563BE7AD641AE5EF7369E4677234BD158F1C* L_9 = __this->___m_data_18;
		NullCheck(L_9);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_10 = (&L_9->___TexSize_10);
		float L_11 = L_10->___y_1;
		int32_t L_12 = V_0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_13 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)il2cpp_codegen_object_new(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		RenderTexture__ctor_m0C81127DE754F64FDD3E80E94BE11054B2791F98(L_13, il2cpp_codegen_cast_double_to_int<int32_t>(L_8), il2cpp_codegen_cast_double_to_int<int32_t>(L_11), ((int32_t)16), L_12, NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_13);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)L_13);
		// m_rtGBuffers[ 0 ].Create();
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_14 = __this->___m_rtGBuffers_32;
		NullCheck(L_14);
		int32_t L_15 = 0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_16);
		bool L_17;
		L_17 = RenderTexture_Create_mA6E4D3CCC84AC3F68E85AA0D6609E1692C672AD2(L_16, NULL);
		// m_rtGBuffers[ 1 ] = new RenderTexture( (int)m_data.TexSize.x, (int)m_data.TexSize.y, 16, uformat );
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_18 = __this->___m_rtGBuffers_32;
		AmplifyImpostorAsset_t8EC9563BE7AD641AE5EF7369E4677234BD158F1C* L_19 = __this->___m_data_18;
		NullCheck(L_19);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_20 = (&L_19->___TexSize_10);
		float L_21 = L_20->___x_0;
		AmplifyImpostorAsset_t8EC9563BE7AD641AE5EF7369E4677234BD158F1C* L_22 = __this->___m_data_18;
		NullCheck(L_22);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_23 = (&L_22->___TexSize_10);
		float L_24 = L_23->___y_1;
		int32_t L_25 = V_1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_26 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)il2cpp_codegen_object_new(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		RenderTexture__ctor_m0C81127DE754F64FDD3E80E94BE11054B2791F98(L_26, il2cpp_codegen_cast_double_to_int<int32_t>(L_21), il2cpp_codegen_cast_double_to_int<int32_t>(L_24), ((int32_t)16), L_25, NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_26);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(1), (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)L_26);
		// m_rtGBuffers[ 1 ].Create();
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_27 = __this->___m_rtGBuffers_32;
		NullCheck(L_27);
		int32_t L_28 = 1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_29);
		bool L_30;
		L_30 = RenderTexture_Create_mA6E4D3CCC84AC3F68E85AA0D6609E1692C672AD2(L_29, NULL);
		// m_rtGBuffers[ 2 ] = new RenderTexture( (int)m_data.TexSize.x, (int)m_data.TexSize.y, 16, uformat );
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_31 = __this->___m_rtGBuffers_32;
		AmplifyImpostorAsset_t8EC9563BE7AD641AE5EF7369E4677234BD158F1C* L_32 = __this->___m_data_18;
		NullCheck(L_32);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_33 = (&L_32->___TexSize_10);
		float L_34 = L_33->___x_0;
		AmplifyImpostorAsset_t8EC9563BE7AD641AE5EF7369E4677234BD158F1C* L_35 = __this->___m_data_18;
		NullCheck(L_35);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_36 = (&L_35->___TexSize_10);
		float L_37 = L_36->___y_1;
		int32_t L_38 = V_1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_39 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)il2cpp_codegen_object_new(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		NullCheck(L_39);
		RenderTexture__ctor_m0C81127DE754F64FDD3E80E94BE11054B2791F98(L_39, il2cpp_codegen_cast_double_to_int<int32_t>(L_34), il2cpp_codegen_cast_double_to_int<int32_t>(L_37), ((int32_t)16), L_38, NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_39);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(2), (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)L_39);
		// m_rtGBuffers[ 2 ].Create();
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_40 = __this->___m_rtGBuffers_32;
		NullCheck(L_40);
		int32_t L_41 = 2;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_42);
		bool L_43;
		L_43 = RenderTexture_Create_mA6E4D3CCC84AC3F68E85AA0D6609E1692C672AD2(L_42, NULL);
		// m_rtGBuffers[ 3 ] = new RenderTexture( (int)m_data.TexSize.x, (int)m_data.TexSize.y, 16, fformat );
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_44 = __this->___m_rtGBuffers_32;
		AmplifyImpostorAsset_t8EC9563BE7AD641AE5EF7369E4677234BD158F1C* L_45 = __this->___m_data_18;
		NullCheck(L_45);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_46 = (&L_45->___TexSize_10);
		float L_47 = L_46->___x_0;
		AmplifyImpostorAsset_t8EC9563BE7AD641AE5EF7369E4677234BD158F1C* L_48 = __this->___m_data_18;
		NullCheck(L_48);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_49 = (&L_48->___TexSize_10);
		float L_50 = L_49->___y_1;
		int32_t L_51 = V_2;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_52 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)il2cpp_codegen_object_new(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		NullCheck(L_52);
		RenderTexture__ctor_m0C81127DE754F64FDD3E80E94BE11054B2791F98(L_52, il2cpp_codegen_cast_double_to_int<int32_t>(L_47), il2cpp_codegen_cast_double_to_int<int32_t>(L_50), ((int32_t)16), L_51, NULL);
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_52);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(3), (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)L_52);
		// m_rtGBuffers[ 3 ].Create();
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_53 = __this->___m_rtGBuffers_32;
		NullCheck(L_53);
		int32_t L_54 = 3;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		NullCheck(L_55);
		bool L_56;
		L_56 = RenderTexture_Create_mA6E4D3CCC84AC3F68E85AA0D6609E1692C672AD2(L_55, NULL);
		// m_rtGBuffers[ 4 ] = new RenderTexture( (int)m_data.TexSize.x, (int)m_data.TexSize.y, 16, uformat );
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_57 = __this->___m_rtGBuffers_32;
		AmplifyImpostorAsset_t8EC9563BE7AD641AE5EF7369E4677234BD158F1C* L_58 = __this->___m_data_18;
		NullCheck(L_58);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_59 = (&L_58->___TexSize_10);
		float L_60 = L_59->___x_0;
		AmplifyImpostorAsset_t8EC9563BE7AD641AE5EF7369E4677234BD158F1C* L_61 = __this->___m_data_18;
		NullCheck(L_61);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_62 = (&L_61->___TexSize_10);
		float L_63 = L_62->___y_1;
		int32_t L_64 = V_1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_65 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)il2cpp_codegen_object_new(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		NullCheck(L_65);
		RenderTexture__ctor_m0C81127DE754F64FDD3E80E94BE11054B2791F98(L_65, il2cpp_codegen_cast_double_to_int<int32_t>(L_60), il2cpp_codegen_cast_double_to_int<int32_t>(L_63), ((int32_t)16), L_64, NULL);
		NullCheck(L_57);
		ArrayElementTypeCheck (L_57, L_65);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(4), (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)L_65);
		// m_rtGBuffers[ 4 ].Create();
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_66 = __this->___m_rtGBuffers_32;
		NullCheck(L_66);
		int32_t L_67 = 4;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_68 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		NullCheck(L_68);
		bool L_69;
		L_69 = RenderTexture_Create_mA6E4D3CCC84AC3F68E85AA0D6609E1692C672AD2(L_68, NULL);
		goto IL_01d0;
	}

IL_016c:
	{
		// for( int i = 0; i < m_rtGBuffers.Length; i++ )
		V_3 = 0;
		goto IL_01c5;
	}

IL_0170:
	{
		// m_rtGBuffers[ i ] = new RenderTexture( (int)m_data.TexSize.x, (int)m_data.TexSize.y, 16, outputList[ i ].SRGB ? RenderTextureFormat.ARGB32 : RenderTextureFormat.ARGBHalf );
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_70 = __this->___m_rtGBuffers_32;
		int32_t L_71 = V_3;
		AmplifyImpostorAsset_t8EC9563BE7AD641AE5EF7369E4677234BD158F1C* L_72 = __this->___m_data_18;
		NullCheck(L_72);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_73 = (&L_72->___TexSize_10);
		float L_74 = L_73->___x_0;
		AmplifyImpostorAsset_t8EC9563BE7AD641AE5EF7369E4677234BD158F1C* L_75 = __this->___m_data_18;
		NullCheck(L_75);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_76 = (&L_75->___TexSize_10);
		float L_77 = L_76->___y_1;
		List_1_t0448AD99A177BC2606599BEAB410C01DDFEE7687* L_78 = ___outputList0;
		int32_t L_79 = V_3;
		NullCheck(L_78);
		TextureOutput_t5DA7CF51AFA4E662ABD5BEE0CEC6CC5159BD448B* L_80;
		L_80 = List_1_get_Item_m02C7ACCE499B7BEF14CBC7F7DE12EFF41A29E458(L_78, L_79, List_1_get_Item_m02C7ACCE499B7BEF14CBC7F7DE12EFF41A29E458_RuntimeMethod_var);
		NullCheck(L_80);
		bool L_81 = L_80->___SRGB_5;
		G_B5_0 = ((int32_t)16);
		G_B5_1 = il2cpp_codegen_cast_double_to_int<int32_t>(L_77);
		G_B5_2 = il2cpp_codegen_cast_double_to_int<int32_t>(L_74);
		G_B5_3 = L_71;
		G_B5_4 = L_70;
		if (L_81)
		{
			G_B6_0 = ((int32_t)16);
			G_B6_1 = il2cpp_codegen_cast_double_to_int<int32_t>(L_77);
			G_B6_2 = il2cpp_codegen_cast_double_to_int<int32_t>(L_74);
			G_B6_3 = L_71;
			G_B6_4 = L_70;
			goto IL_01ac;
		}
	}
	{
		G_B7_0 = 2;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		G_B7_3 = G_B5_2;
		G_B7_4 = G_B5_3;
		G_B7_5 = G_B5_4;
		goto IL_01ad;
	}

IL_01ac:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
		G_B7_3 = G_B6_2;
		G_B7_4 = G_B6_3;
		G_B7_5 = G_B6_4;
	}

IL_01ad:
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_82 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)il2cpp_codegen_object_new(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		NullCheck(L_82);
		RenderTexture__ctor_m53215A8EDDE262932758186108347685F6A512C4(L_82, G_B7_3, G_B7_2, G_B7_1, G_B7_0, NULL);
		NullCheck(G_B7_5);
		ArrayElementTypeCheck (G_B7_5, L_82);
		(G_B7_5)->SetAt(static_cast<il2cpp_array_size_t>(G_B7_4), (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)L_82);
		// m_rtGBuffers[ i ].Create();
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_83 = __this->___m_rtGBuffers_32;
		int32_t L_84 = V_3;
		NullCheck(L_83);
		int32_t L_85 = L_84;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		NullCheck(L_86);
		bool L_87;
		L_87 = RenderTexture_Create_mA6E4D3CCC84AC3F68E85AA0D6609E1692C672AD2(L_86, NULL);
		// for( int i = 0; i < m_rtGBuffers.Length; i++ )
		int32_t L_88 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_88, 1));
	}

IL_01c5:
	{
		// for( int i = 0; i < m_rtGBuffers.Length; i++ )
		int32_t L_89 = V_3;
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_90 = __this->___m_rtGBuffers_32;
		NullCheck(L_90);
		if ((((int32_t)L_89) < ((int32_t)((int32_t)(((RuntimeArray*)L_90)->max_length)))))
		{
			goto IL_0170;
		}
	}

IL_01d0:
	{
		// m_trueDepth = new RenderTexture( (int)m_data.TexSize.x, (int)m_data.TexSize.y, 16, RenderTextureFormat.Depth );
		AmplifyImpostorAsset_t8EC9563BE7AD641AE5EF7369E4677234BD158F1C* L_91 = __this->___m_data_18;
		NullCheck(L_91);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_92 = (&L_91->___TexSize_10);
		float L_93 = L_92->___x_0;
		AmplifyImpostorAsset_t8EC9563BE7AD641AE5EF7369E4677234BD158F1C* L_94 = __this->___m_data_18;
		NullCheck(L_94);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_95 = (&L_94->___TexSize_10);
		float L_96 = L_95->___y_1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_97 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)il2cpp_codegen_object_new(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		NullCheck(L_97);
		RenderTexture__ctor_m53215A8EDDE262932758186108347685F6A512C4(L_97, il2cpp_codegen_cast_double_to_int<int32_t>(L_93), il2cpp_codegen_cast_double_to_int<int32_t>(L_96), ((int32_t)16), 1, NULL);
		__this->___m_trueDepth_34 = L_97;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_trueDepth_34), (void*)L_97);
		// m_trueDepth.Create();
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_98 = __this->___m_trueDepth_34;
		NullCheck(L_98);
		bool L_99;
		L_99 = RenderTexture_Create_mA6E4D3CCC84AC3F68E85AA0D6609E1692C672AD2(L_98, NULL);
		// }
		return;
	}
}
// System.Void AmplifyImpostors.AmplifyImpostor::GenerateAlphaTextures(System.Collections.Generic.List`1<AmplifyImpostors.TextureOutput>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AmplifyImpostor_GenerateAlphaTextures_m456CC526143EBE71198D8A142320FD97F7173CC8 (AmplifyImpostor_tE757F7B6A3714CB07452670A8C4491B8CC747B3D* __this, List_1_t0448AD99A177BC2606599BEAB410C01DDFEE7687* ___outputList0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mDC2E5CCB816A4C2AA7D447D4912E8F0AAD561C73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m02C7ACCE499B7BEF14CBC7F7DE12EFF41A29E458_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	int32_t G_B3_2 = 0;
	int32_t G_B3_3 = 0;
	RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* G_B3_4 = NULL;
	int32_t G_B2_0 = 0;
	int32_t G_B2_1 = 0;
	int32_t G_B2_2 = 0;
	int32_t G_B2_3 = 0;
	RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* G_B2_4 = NULL;
	int32_t G_B4_0 = 0;
	int32_t G_B4_1 = 0;
	int32_t G_B4_2 = 0;
	int32_t G_B4_3 = 0;
	int32_t G_B4_4 = 0;
	RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* G_B4_5 = NULL;
	{
		// m_alphaGBuffers = new RenderTexture[ outputList.Count ];
		List_1_t0448AD99A177BC2606599BEAB410C01DDFEE7687* L_0 = ___outputList0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mDC2E5CCB816A4C2AA7D447D4912E8F0AAD561C73_inline(L_0, List_1_get_Count_mDC2E5CCB816A4C2AA7D447D4912E8F0AAD561C73_RuntimeMethod_var);
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_2 = (RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6*)(RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6*)SZArrayNew(RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6_il2cpp_TypeInfo_var, (uint32_t)L_1);
		__this->___m_alphaGBuffers_33 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_alphaGBuffers_33), (void*)L_2);
		// for( int i = 0; i < m_alphaGBuffers.Length; ++i )
		V_0 = 0;
		goto IL_0052;
	}

IL_0015:
	{
		// m_alphaGBuffers[ i ] = new RenderTexture( MinAlphaResolution, MinAlphaResolution, 16, outputList[ i ].SRGB ? RenderTextureFormat.ARGB32 : RenderTextureFormat.ARGBHalf );
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_3 = __this->___m_alphaGBuffers_33;
		int32_t L_4 = V_0;
		List_1_t0448AD99A177BC2606599BEAB410C01DDFEE7687* L_5 = ___outputList0;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		TextureOutput_t5DA7CF51AFA4E662ABD5BEE0CEC6CC5159BD448B* L_7;
		L_7 = List_1_get_Item_m02C7ACCE499B7BEF14CBC7F7DE12EFF41A29E458(L_5, L_6, List_1_get_Item_m02C7ACCE499B7BEF14CBC7F7DE12EFF41A29E458_RuntimeMethod_var);
		NullCheck(L_7);
		bool L_8 = L_7->___SRGB_5;
		G_B2_0 = ((int32_t)16);
		G_B2_1 = ((int32_t)256);
		G_B2_2 = ((int32_t)256);
		G_B2_3 = L_4;
		G_B2_4 = L_3;
		if (L_8)
		{
			G_B3_0 = ((int32_t)16);
			G_B3_1 = ((int32_t)256);
			G_B3_2 = ((int32_t)256);
			G_B3_3 = L_4;
			G_B3_4 = L_3;
			goto IL_0039;
		}
	}
	{
		G_B4_0 = 2;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		G_B4_3 = G_B2_2;
		G_B4_4 = G_B2_3;
		G_B4_5 = G_B2_4;
		goto IL_003a;
	}

IL_0039:
	{
		G_B4_0 = 0;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
		G_B4_3 = G_B3_2;
		G_B4_4 = G_B3_3;
		G_B4_5 = G_B3_4;
	}

IL_003a:
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_9 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)il2cpp_codegen_object_new(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		RenderTexture__ctor_m53215A8EDDE262932758186108347685F6A512C4(L_9, G_B4_3, G_B4_2, G_B4_1, G_B4_0, NULL);
		NullCheck(G_B4_5);
		ArrayElementTypeCheck (G_B4_5, L_9);
		(G_B4_5)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_4), (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)L_9);
		// m_alphaGBuffers[ i ].Create();
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_10 = __this->___m_alphaGBuffers_33;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		bool L_14;
		L_14 = RenderTexture_Create_mA6E4D3CCC84AC3F68E85AA0D6609E1692C672AD2(L_13, NULL);
		// for( int i = 0; i < m_alphaGBuffers.Length; ++i )
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0052:
	{
		// for( int i = 0; i < m_alphaGBuffers.Length; ++i )
		int32_t L_16 = V_0;
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_17 = __this->___m_alphaGBuffers_33;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_0015;
		}
	}
	{
		// m_trueDepth = new RenderTexture( MinAlphaResolution, MinAlphaResolution, 16, RenderTextureFormat.Depth );
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_18 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)il2cpp_codegen_object_new(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		RenderTexture__ctor_m53215A8EDDE262932758186108347685F6A512C4(L_18, ((int32_t)256), ((int32_t)256), ((int32_t)16), 1, NULL);
		__this->___m_trueDepth_34 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_trueDepth_34), (void*)L_18);
		// m_trueDepth.Create();
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_19 = __this->___m_trueDepth_34;
		NullCheck(L_19);
		bool L_20;
		L_20 = RenderTexture_Create_mA6E4D3CCC84AC3F68E85AA0D6609E1692C672AD2(L_19, NULL);
		// }
		return;
	}
}
// System.Void AmplifyImpostors.AmplifyImpostor::ClearBuffers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AmplifyImpostor_ClearBuffers_m167BA063B1716FCEBDD98A1500924A50BB5DE9F5 (AmplifyImpostor_tE757F7B6A3714CB07452670A8C4491B8CC747B3D* __this, const RuntimeMethod* method) 
{
	RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// RenderTexture.active = null;
		RenderTexture_set_active_m045EA53D62FBF79693265E33D14D8E0E8151A37E((RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL, NULL);
		// foreach( var rt in m_rtGBuffers )
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_0 = __this->___m_rtGBuffers_32;
		V_0 = L_0;
		V_1 = 0;
		goto IL_001d;
	}

IL_0011:
	{
		// foreach( var rt in m_rtGBuffers )
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// rt.Release();
		NullCheck(L_4);
		RenderTexture_Release_mE7399D6187A0E38945D2913D0FFB41247143AB1E(L_4, NULL);
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_001d:
	{
		// foreach( var rt in m_rtGBuffers )
		int32_t L_6 = V_1;
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_7 = V_0;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_0011;
		}
	}
	{
		// m_rtGBuffers = null;
		__this->___m_rtGBuffers_32 = (RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_rtGBuffers_32), (void*)(RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6*)NULL);
		// }
		return;
	}
}
// System.Void AmplifyImpostors.AmplifyImpostor::ClearAlphaBuffers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AmplifyImpostor_ClearAlphaBuffers_m9F2299ED90A457CDF3C3F25A43FB0A1B0F6DD76B (AmplifyImpostor_tE757F7B6A3714CB07452670A8C4491B8CC747B3D* __this, const RuntimeMethod* method) 
{
	RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// RenderTexture.active = null;
		RenderTexture_set_active_m045EA53D62FBF79693265E33D14D8E0E8151A37E((RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL, NULL);
		// foreach( var rt in m_alphaGBuffers )
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_0 = __this->___m_alphaGBuffers_33;
		V_0 = L_0;
		V_1 = 0;
		goto IL_001d;
	}

IL_0011:
	{
		// foreach( var rt in m_alphaGBuffers )
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// rt.Release();
		NullCheck(L_4);
		RenderTexture_Release_mE7399D6187A0E38945D2913D0FFB41247143AB1E(L_4, NULL);
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_001d:
	{
		// foreach( var rt in m_alphaGBuffers )
		int32_t L_6 = V_1;
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_7 = V_0;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_0011;
		}
	}
	{
		// m_alphaGBuffers = null;
		__this->___m_alphaGBuffers_33 = (RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_alphaGBuffers_33), (void*)(RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6*)NULL);
		// }
		return;
	}
}
// System.Void AmplifyImpostors.AmplifyImpostor::RenderImpostor(AmplifyImpostors.ImpostorType,System.Int32,System.Boolean,System.Boolean,System.Boolean,UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AmplifyImpostor_RenderImpostor_mF2FBE07B17A74FA3F8E1EF978727F4C9B0CAE6FF (AmplifyImpostor_tE757F7B6A3714CB07452670A8C4491B8CC747B3D* __this, int32_t ___impostorType0, int32_t ___targetAmount1, bool ___impostorMaps2, bool ___combinedAlphas3, bool ___useMinResolution4, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___customShader5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mB81AEBAD0FDC07C870309E662E4CB1134CA76188_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m23BA91B0F6DC61F753378785862281334A780902_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m71CCF46E896A3B30D201D7DE113D036ED5BB2971_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m05E005148A355590FF412AEBEC05295C4AB9446C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mD3489066F1D31C8808AB463745D3B804D567C602_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t7B0F5D63DDA1E532530982C8043F0A132FF9745F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m61B5C03832F0F13F7FFB8AEA4BF9B0FB108751EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mAA67D06FC2C56B827B0BFD4A1F4E79FA460FD334_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD4C103A14262CBA39F94C6D28E01D6B9C3C77D43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m230C0120AEEB00A0FB41EFB49B43B4666CC9C410_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m2DCDE5FFA7020B15019DC9EB26D48CB88BE23252_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m47377D7758798C489896B13DDD6EAFEC1B6D9917_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE87D19792408B0284962521E4F189E704CEE1A8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mEA72181DA04067D7475922C8DBA014128689F30B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1DDAF5804C36E171686D1F31AEDD7D32876E8348_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTargetIdentifierU5BU5D_t179798C153B7CE381B41C57863F98CB24023C4CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C173DA80D18B5C4ADB5904CE60C97161DC79E87);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral471089BE66AC5DA10544936EFDBCCCD99CC5C821);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B27BFC27B5C98B524DD18892F6D318DBBA780BA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral565F9C56DD9483223083FD5E97FB3FF2136D8C25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D8EF61C72F6DF1EEE107B7E72F83434BBA9D324);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D84EC851B9A1D42DA33C099A9894034BFFC157C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F98743F9D37A27D62A61808CF2139EBDC613D95);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral978600362E17418CDF6C99B1CA1CF6CCCCBEF31A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F46E5D2973B2B1D06B690EFA981CFC096E5DED1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA74EA15A49BB463C292FDB96BA4FF5DE30D72558);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC1019871BBF52D81334EBE531E97EB566035E97);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB78AE6D5DE258AD55142707C4F5599B2FDA85727);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB78DF7621651B991FAD45DC18055EA06269B40E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCF0D23863042E55540C90CF70FA3CCB5DE77135);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC039C76C75C3D2C9CEF09D2192726F84A5DFA575);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC755BAA1D6CD9058F3A8FAF0C73B9922AEC608B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF46806076510A5B175A911F127607D39D6442F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD22D3025953F507F343D6D95F6F21FBA35BD146C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5A59EF736212174C538CE94E1A1BC47039BEBCB);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Dictionary_2_t7B0F5D63DDA1E532530982C8043F0A132FF9745F* V_1 = NULL;
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* V_2 = NULL;
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* V_6 = NULL;
	int32_t V_7 = 0;
	RenderTargetIdentifierU5BU5D_t179798C153B7CE381B41C57863F98CB24023C4CE* V_8 = NULL;
	int32_t V_9 = 0;
	RenderTargetIdentifierU5BU5D_t179798C153B7CE381B41C57863F98CB24023C4CE* V_10 = NULL;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_16;
	memset((&V_16), 0, sizeof(V_16));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_17;
	memset((&V_17), 0, sizeof(V_17));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_18;
	memset((&V_18), 0, sizeof(V_18));
	float V_19 = 0.0f;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_20;
	memset((&V_20), 0, sizeof(V_20));
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* V_23 = NULL;
	int32_t V_24 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_25 = NULL;
	int32_t V_26 = 0;
	int32_t V_27 = 0;
	bool V_28 = false;
	bool V_29 = false;
	int32_t V_30 = 0;
	Enumerator_t07C26ED2F5F8668F764FEEBCAA3E15D546EF661B V_31;
	memset((&V_31), 0, sizeof(V_31));
	KeyValuePair_2_t2913F672181757C35EF65E5366FB4F700F5FE5DA V_32;
	memset((&V_32), 0, sizeof(V_32));
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_33 = NULL;
	int32_t G_B47_0 = 0;
	float G_B47_1 = 0.0f;
	float G_B47_2 = 0.0f;
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* G_B47_3 = NULL;
	int32_t G_B46_0 = 0;
	float G_B46_1 = 0.0f;
	float G_B46_2 = 0.0f;
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* G_B46_3 = NULL;
	int32_t G_B48_0 = 0;
	int32_t G_B48_1 = 0;
	float G_B48_2 = 0.0f;
	float G_B48_3 = 0.0f;
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* G_B48_4 = NULL;
	{
		// if( !impostorMaps && !combinedAlphas ) //leave early
		bool L_0 = ___impostorMaps2;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		bool L_1 = ___combinedAlphas3;
		if (L_1)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// if( targetAmount <= 0 )
		int32_t L_2 = ___targetAmount1;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		// return;
		return;
	}

IL_000d:
	{
		// bool standardrendering = customShader == null;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_3 = ___customShader5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_4;
		// Dictionary<Material, Material> bakeMats = new Dictionary<Material, Material>();
		Dictionary_2_t7B0F5D63DDA1E532530982C8043F0A132FF9745F* L_5 = (Dictionary_2_t7B0F5D63DDA1E532530982C8043F0A132FF9745F*)il2cpp_codegen_object_new(Dictionary_2_t7B0F5D63DDA1E532530982C8043F0A132FF9745F_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Dictionary_2__ctor_mD3489066F1D31C8808AB463745D3B804D567C602(L_5, Dictionary_2__ctor_mD3489066F1D31C8808AB463745D3B804D567C602_RuntimeMethod_var);
		V_1 = L_5;
		// CommandBuffer commandBuffer = new CommandBuffer();
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_6 = (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7*)il2cpp_codegen_object_new(CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		CommandBuffer__ctor_m9445F1606331B732FCA393591F3E230714FD5FF4(L_6, NULL);
		V_2 = L_6;
		// if( impostorMaps )
		bool L_7 = ___impostorMaps2;
		if (!L_7)
		{
			goto IL_0084;
		}
	}
	{
		// commandBuffer.name = "GBufferCatcher";
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_8 = V_2;
		NullCheck(L_8);
		CommandBuffer_set_name_mEC83B7FE28D6817A36A8B894A661D6D217488965(L_8, _stringLiteralC039C76C75C3D2C9CEF09D2192726F84A5DFA575, NULL);
		// RenderTargetIdentifier[] rtIDs = new RenderTargetIdentifier[ targetAmount ];
		int32_t L_9 = ___targetAmount1;
		RenderTargetIdentifierU5BU5D_t179798C153B7CE381B41C57863F98CB24023C4CE* L_10 = (RenderTargetIdentifierU5BU5D_t179798C153B7CE381B41C57863F98CB24023C4CE*)(RenderTargetIdentifierU5BU5D_t179798C153B7CE381B41C57863F98CB24023C4CE*)SZArrayNew(RenderTargetIdentifierU5BU5D_t179798C153B7CE381B41C57863F98CB24023C4CE_il2cpp_TypeInfo_var, (uint32_t)L_9);
		V_8 = L_10;
		// for( int i = 0; i < targetAmount; i++ )
		V_9 = 0;
		goto IL_005a;
	}

IL_003d:
	{
		// rtIDs[ i ] = m_rtGBuffers[ i ];
		RenderTargetIdentifierU5BU5D_t179798C153B7CE381B41C57863F98CB24023C4CE* L_11 = V_8;
		int32_t L_12 = V_9;
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_13 = __this->___m_rtGBuffers_32;
		int32_t L_14 = V_9;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_17;
		L_17 = RenderTargetIdentifier_op_Implicit_m91673C4B60A050517CD535B84B9B88CF9D5BB5CE(L_16, NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B)L_17);
		// for( int i = 0; i < targetAmount; i++ )
		int32_t L_18 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_005a:
	{
		// for( int i = 0; i < targetAmount; i++ )
		int32_t L_19 = V_9;
		int32_t L_20 = ___targetAmount1;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_003d;
		}
	}
	{
		// commandBuffer.SetRenderTarget( rtIDs, m_trueDepth );
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_21 = V_2;
		RenderTargetIdentifierU5BU5D_t179798C153B7CE381B41C57863F98CB24023C4CE* L_22 = V_8;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_23 = __this->___m_trueDepth_34;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_24;
		L_24 = RenderTargetIdentifier_op_Implicit_m91673C4B60A050517CD535B84B9B88CF9D5BB5CE(L_23, NULL);
		NullCheck(L_21);
		CommandBuffer_SetRenderTarget_mEB1DFBA6D3C2B51946FADBFF25D6BB58A0199A04(L_21, L_22, L_24, NULL);
		// commandBuffer.ClearRenderTarget( true, true, Color.clear, 1 );
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_25 = V_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_26;
		L_26 = Color_get_clear_m8B58EA88C92F7DD2C66F0EC1BCC8AC697D631298_inline(NULL);
		NullCheck(L_25);
		CommandBuffer_ClearRenderTarget_mAE759EFA193F3F683A244826504EB0DBB51CB62A(L_25, (bool)1, (bool)1, L_26, (1.0f), NULL);
	}

IL_0084:
	{
		// CommandBuffer commandAlphaBuffer = new CommandBuffer();
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_27 = (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7*)il2cpp_codegen_object_new(CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		CommandBuffer__ctor_m9445F1606331B732FCA393591F3E230714FD5FF4(L_27, NULL);
		V_3 = L_27;
		// if( combinedAlphas )
		bool L_28 = ___combinedAlphas3;
		if (!L_28)
		{
			goto IL_00ed;
		}
	}
	{
		// commandAlphaBuffer.name = "DepthAlphaCatcher";
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_29 = V_3;
		NullCheck(L_29);
		CommandBuffer_set_name_mEC83B7FE28D6817A36A8B894A661D6D217488965(L_29, _stringLiteral9F46E5D2973B2B1D06B690EFA981CFC096E5DED1, NULL);
		// RenderTargetIdentifier[] rtIDsAlpha = new RenderTargetIdentifier[ targetAmount ];
		int32_t L_30 = ___targetAmount1;
		RenderTargetIdentifierU5BU5D_t179798C153B7CE381B41C57863F98CB24023C4CE* L_31 = (RenderTargetIdentifierU5BU5D_t179798C153B7CE381B41C57863F98CB24023C4CE*)(RenderTargetIdentifierU5BU5D_t179798C153B7CE381B41C57863F98CB24023C4CE*)SZArrayNew(RenderTargetIdentifierU5BU5D_t179798C153B7CE381B41C57863F98CB24023C4CE_il2cpp_TypeInfo_var, (uint32_t)L_30);
		V_10 = L_31;
		// for( int i = 0; i < targetAmount; i++ )
		V_11 = 0;
		goto IL_00c3;
	}

IL_00a6:
	{
		// rtIDsAlpha[ i ] = m_alphaGBuffers[ i ];
		RenderTargetIdentifierU5BU5D_t179798C153B7CE381B41C57863F98CB24023C4CE* L_32 = V_10;
		int32_t L_33 = V_11;
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_34 = __this->___m_alphaGBuffers_33;
		int32_t L_35 = V_11;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_38;
		L_38 = RenderTargetIdentifier_op_Implicit_m91673C4B60A050517CD535B84B9B88CF9D5BB5CE(L_37, NULL);
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B)L_38);
		// for( int i = 0; i < targetAmount; i++ )
		int32_t L_39 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00c3:
	{
		// for( int i = 0; i < targetAmount; i++ )
		int32_t L_40 = V_11;
		int32_t L_41 = ___targetAmount1;
		if ((((int32_t)L_40) < ((int32_t)L_41)))
		{
			goto IL_00a6;
		}
	}
	{
		// commandAlphaBuffer.SetRenderTarget( rtIDsAlpha, m_trueDepth );
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_42 = V_3;
		RenderTargetIdentifierU5BU5D_t179798C153B7CE381B41C57863F98CB24023C4CE* L_43 = V_10;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_44 = __this->___m_trueDepth_34;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_45;
		L_45 = RenderTargetIdentifier_op_Implicit_m91673C4B60A050517CD535B84B9B88CF9D5BB5CE(L_44, NULL);
		NullCheck(L_42);
		CommandBuffer_SetRenderTarget_mEB1DFBA6D3C2B51946FADBFF25D6BB58A0199A04(L_42, L_43, L_45, NULL);
		// commandAlphaBuffer.ClearRenderTarget( true, true, Color.clear, 1 );
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_46 = V_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_47;
		L_47 = Color_get_clear_m8B58EA88C92F7DD2C66F0EC1BCC8AC697D631298_inline(NULL);
		NullCheck(L_46);
		CommandBuffer_ClearRenderTarget_mAE759EFA193F3F683A244826504EB0DBB51CB62A(L_46, (bool)1, (bool)1, L_47, (1.0f), NULL);
	}

IL_00ed:
	{
		// int hframes = m_data.HorizontalFrames;
		AmplifyImpostorAsset_t8EC9563BE7AD641AE5EF7369E4677234BD158F1C* L_48 = __this->___m_data_18;
		NullCheck(L_48);
		int32_t L_49 = L_48->___HorizontalFrames_12;
		V_4 = L_49;
		// int vframes = m_data.HorizontalFrames;
		AmplifyImpostorAsset_t8EC9563BE7AD641AE5EF7369E4677234BD158F1C* L_50 = __this->___m_data_18;
		NullCheck(L_50);
		int32_t L_51 = L_50->___HorizontalFrames_12;
		V_5 = L_51;
		// if( impostorType == ImpostorType.Spherical )
		int32_t L_52 = ___impostorType0;
		if (L_52)
		{
			goto IL_0135;
		}
	}
	{
		// vframes = m_data.HorizontalFrames - 1;
		AmplifyImpostorAsset_t8EC9563BE7AD641AE5EF7369E4677234BD158F1C* L_53 = __this->___m_data_18;
		NullCheck(L_53);
		int32_t L_54 = L_53->___HorizontalFrames_12;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_54, 1));
		// if( m_data.DecoupleAxisFrames )
		AmplifyImpostorAsset_t8EC9563BE7AD641AE5EF7369E4677234BD158F1C* L_55 = __this->___m_data_18;
		NullCheck(L_55);
		bool L_56 = L_55->___DecoupleAxisFrames_11;
		if (!L_56)
		{
			goto IL_0135;
		}
	}
	{
		// vframes = m_data.VerticalFrames - 1;
		AmplifyImpostorAsset_t8EC9563BE7AD641AE5EF7369E4677234BD158F1C* L_57 = __this->___m_data_18;
		NullCheck(L_57);
		int32_t L_58 = L_57->___VerticalFrames_13;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_58, 1));
	}

IL_0135:
	{
		// List<MeshFilter> validMeshes = new List<MeshFilter>();
		List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* L_59 = (List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930*)il2cpp_codegen_object_new(List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930_il2cpp_TypeInfo_var);
		NullCheck(L_59);
		List_1__ctor_mE87D19792408B0284962521E4F189E704CEE1A8C(L_59, List_1__ctor_mE87D19792408B0284962521E4F189E704CEE1A8C_RuntimeMethod_var);
		V_6 = L_59;
		// for( int i = 0; i < Renderers.Length; i++ )
		V_12 = 0;
		goto IL_01bf;
	}

IL_0141:
	{
		// if( Renderers[ i ] == null || !Renderers[ i ].enabled || Renderers[ i ].shadowCastingMode == ShadowCastingMode.ShadowsOnly )
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_60;
		L_60 = AmplifyImpostor_get_Renderers_mE743B4A3FD10A48EF555974A7833B062F4585DCD_inline(__this, NULL);
		int32_t L_61 = V_12;
		NullCheck(L_60);
		int32_t L_62 = L_61;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_64;
		L_64 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_63, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_64)
		{
			goto IL_0173;
		}
	}
	{
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_65;
		L_65 = AmplifyImpostor_get_Renderers_mE743B4A3FD10A48EF555974A7833B062F4585DCD_inline(__this, NULL);
		int32_t L_66 = V_12;
		NullCheck(L_65);
		int32_t L_67 = L_66;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		NullCheck(L_68);
		bool L_69;
		L_69 = Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54(L_68, NULL);
		if (!L_69)
		{
			goto IL_0173;
		}
	}
	{
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_70;
		L_70 = AmplifyImpostor_get_Renderers_mE743B4A3FD10A48EF555974A7833B062F4585DCD_inline(__this, NULL);
		int32_t L_71 = V_12;
		NullCheck(L_70);
		int32_t L_72 = L_71;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		NullCheck(L_73);
		int32_t L_74;
		L_74 = Renderer_get_shadowCastingMode_m15B0BCD8948C2DAFDF58FD8041DB55084AC59FE8(L_73, NULL);
		if ((!(((uint32_t)L_74) == ((uint32_t)3))))
		{
			goto IL_017d;
		}
	}

IL_0173:
	{
		// validMeshes.Add( null );
		List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* L_75 = V_6;
		NullCheck(L_75);
		List_1_Add_m2DCDE5FFA7020B15019DC9EB26D48CB88BE23252_inline(L_75, (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5*)NULL, List_1_Add_m2DCDE5FFA7020B15019DC9EB26D48CB88BE23252_RuntimeMethod_var);
		// continue;
		goto IL_01b9;
	}

IL_017d:
	{
		// MeshFilter mf = Renderers[ i ].GetComponent<MeshFilter>();
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_76;
		L_76 = AmplifyImpostor_get_Renderers_mE743B4A3FD10A48EF555974A7833B062F4585DCD_inline(__this, NULL);
		int32_t L_77 = V_12;
		NullCheck(L_76);
		int32_t L_78 = L_77;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_79 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		NullCheck(L_79);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_80;
		L_80 = Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623(L_79, Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		V_13 = L_80;
		// if( mf == null || mf.sharedMesh == null )
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_81 = V_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_82;
		L_82 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_81, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_82)
		{
			goto IL_01a6;
		}
	}
	{
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_83 = V_13;
		NullCheck(L_83);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_84;
		L_84 = MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C(L_83, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_85;
		L_85 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_84, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_85)
		{
			goto IL_01b0;
		}
	}

IL_01a6:
	{
		// validMeshes.Add( null );
		List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* L_86 = V_6;
		NullCheck(L_86);
		List_1_Add_m2DCDE5FFA7020B15019DC9EB26D48CB88BE23252_inline(L_86, (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5*)NULL, List_1_Add_m2DCDE5FFA7020B15019DC9EB26D48CB88BE23252_RuntimeMethod_var);
		// continue;
		goto IL_01b9;
	}

IL_01b0:
	{
		// validMeshes.Add( mf );
		List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* L_87 = V_6;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_88 = V_13;
		NullCheck(L_87);
		List_1_Add_m2DCDE5FFA7020B15019DC9EB26D48CB88BE23252_inline(L_87, L_88, List_1_Add_m2DCDE5FFA7020B15019DC9EB26D48CB88BE23252_RuntimeMethod_var);
	}

IL_01b9:
	{
		// for( int i = 0; i < Renderers.Length; i++ )
		int32_t L_89 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_89, 1));
	}

IL_01bf:
	{
		// for( int i = 0; i < Renderers.Length; i++ )
		int32_t L_90 = V_12;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_91;
		L_91 = AmplifyImpostor_get_Renderers_mE743B4A3FD10A48EF555974A7833B062F4585DCD_inline(__this, NULL);
		NullCheck(L_91);
		if ((((int32_t)L_90) < ((int32_t)((int32_t)(((RuntimeArray*)L_91)->max_length)))))
		{
			goto IL_0141;
		}
	}
	{
		// int validMeshesCount = validMeshes.Count;
		List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* L_92 = V_6;
		NullCheck(L_92);
		int32_t L_93;
		L_93 = List_1_get_Count_mEA72181DA04067D7475922C8DBA014128689F30B_inline(L_92, List_1_get_Count_mEA72181DA04067D7475922C8DBA014128689F30B_RuntimeMethod_var);
		V_7 = L_93;
		// for( int x = 0; x < hframes; x++ )
		V_14 = 0;
		goto IL_07c8;
	}

IL_01df:
	{
		// for( int y = 0; y <= vframes; y++ )
		V_15 = 0;
		goto IL_07b9;
	}

IL_01e7:
	{
		// Bounds frameBounds = new Bounds();
		il2cpp_codegen_initobj((&V_16), sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3));
		// Matrix4x4 camMatrixRot = GetCameraRotationMatrix( impostorType, hframes, vframes, x, y );
		int32_t L_94 = ___impostorType0;
		int32_t L_95 = V_4;
		int32_t L_96 = V_5;
		int32_t L_97 = V_14;
		int32_t L_98 = V_15;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_99;
		L_99 = AmplifyImpostor_GetCameraRotationMatrix_m7B957D9944609272E5B66BB9CE84517033E84E73(__this, L_94, L_95, L_96, L_97, L_98, NULL);
		V_17 = L_99;
		// for( int i = 0; i < validMeshesCount; i++ )
		V_21 = 0;
		goto IL_02ac;
	}

IL_0208:
	{
		// if( validMeshes[ i ] == null )
		List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* L_100 = V_6;
		int32_t L_101 = V_21;
		NullCheck(L_100);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_102;
		L_102 = List_1_get_Item_m1DDAF5804C36E171686D1F31AEDD7D32876E8348(L_100, L_101, List_1_get_Item_m1DDAF5804C36E171686D1F31AEDD7D32876E8348_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_103;
		L_103 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_102, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_103)
		{
			goto IL_02a6;
		}
	}
	{
		// if( frameBounds.size == Vector3.zero )
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_104;
		L_104 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_16), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_105;
		L_105 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		bool L_106;
		L_106 = Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline(L_104, L_105, NULL);
		if (!L_106)
		{
			goto IL_0269;
		}
	}
	{
		// frameBounds = validMeshes[ i ].sharedMesh.bounds.Transform( m_rootTransform.worldToLocalMatrix * Renderers[ i ].localToWorldMatrix );
		List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* L_107 = V_6;
		int32_t L_108 = V_21;
		NullCheck(L_107);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_109;
		L_109 = List_1_get_Item_m1DDAF5804C36E171686D1F31AEDD7D32876E8348(L_107, L_108, List_1_get_Item_m1DDAF5804C36E171686D1F31AEDD7D32876E8348_RuntimeMethod_var);
		NullCheck(L_109);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_110;
		L_110 = MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C(L_109, NULL);
		NullCheck(L_110);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_111;
		L_111 = Mesh_get_bounds_m9E3A46226824676703990270A722A89A4860A100(L_110, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_112 = __this->___m_rootTransform_19;
		NullCheck(L_112);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_113;
		L_113 = Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1(L_112, NULL);
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_114;
		L_114 = AmplifyImpostor_get_Renderers_mE743B4A3FD10A48EF555974A7833B062F4585DCD_inline(__this, NULL);
		int32_t L_115 = V_21;
		NullCheck(L_114);
		int32_t L_116 = L_115;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_117 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		NullCheck(L_117);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_118;
		L_118 = Renderer_get_localToWorldMatrix_mCC910A9BA14BDA7A5BACE0D13B5456358FA8EC22(L_117, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_119;
		L_119 = Matrix4x4_op_Multiply_m7649669D493400913FF60AFB04B1C19F14E0FDB0(L_113, L_118, NULL);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_120;
		L_120 = BoundsEx_Transform_m8C0564D73B860CEC7C616B15237F4B9166E223BF(L_111, L_119, NULL);
		V_16 = L_120;
		goto IL_02a6;
	}

IL_0269:
	{
		// frameBounds.Encapsulate( validMeshes[ i ].sharedMesh.bounds.Transform( m_rootTransform.worldToLocalMatrix * Renderers[ i ].localToWorldMatrix ) );
		List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* L_121 = V_6;
		int32_t L_122 = V_21;
		NullCheck(L_121);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_123;
		L_123 = List_1_get_Item_m1DDAF5804C36E171686D1F31AEDD7D32876E8348(L_121, L_122, List_1_get_Item_m1DDAF5804C36E171686D1F31AEDD7D32876E8348_RuntimeMethod_var);
		NullCheck(L_123);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_124;
		L_124 = MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C(L_123, NULL);
		NullCheck(L_124);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_125;
		L_125 = Mesh_get_bounds_m9E3A46226824676703990270A722A89A4860A100(L_124, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_126 = __this->___m_rootTransform_19;
		NullCheck(L_126);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_127;
		L_127 = Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1(L_126, NULL);
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_128;
		L_128 = AmplifyImpostor_get_Renderers_mE743B4A3FD10A48EF555974A7833B062F4585DCD_inline(__this, NULL);
		int32_t L_129 = V_21;
		NullCheck(L_128);
		int32_t L_130 = L_129;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_131 = (L_128)->GetAt(static_cast<il2cpp_array_size_t>(L_130));
		NullCheck(L_131);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_132;
		L_132 = Renderer_get_localToWorldMatrix_mCC910A9BA14BDA7A5BACE0D13B5456358FA8EC22(L_131, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_133;
		L_133 = Matrix4x4_op_Multiply_m7649669D493400913FF60AFB04B1C19F14E0FDB0(L_127, L_132, NULL);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_134;
		L_134 = BoundsEx_Transform_m8C0564D73B860CEC7C616B15237F4B9166E223BF(L_125, L_133, NULL);
		Bounds_Encapsulate_m7C70C382B9380A8C962074C78E189B53CE8F7A22((&V_16), L_134, NULL);
	}

IL_02a6:
	{
		// for( int i = 0; i < validMeshesCount; i++ )
		int32_t L_135 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_135, 1));
	}

IL_02ac:
	{
		// for( int i = 0; i < validMeshesCount; i++ )
		int32_t L_136 = V_21;
		int32_t L_137 = V_7;
		if ((((int32_t)L_136) < ((int32_t)L_137)))
		{
			goto IL_0208;
		}
	}
	{
		// if( x == 0 && y == 0 )
		int32_t L_138 = V_14;
		if (L_138)
		{
			goto IL_02c5;
		}
	}
	{
		int32_t L_139 = V_15;
		if (L_139)
		{
			goto IL_02c5;
		}
	}
	{
		// m_originalBound = frameBounds;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_140 = V_16;
		__this->___m_originalBound_39 = L_140;
	}

IL_02c5:
	{
		// frameBounds = frameBounds.Transform( camMatrixRot );
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_141 = V_16;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_142 = V_17;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_143;
		L_143 = BoundsEx_Transform_m8C0564D73B860CEC7C616B15237F4B9166E223BF(L_141, L_142, NULL);
		V_16 = L_143;
		// Matrix4x4 V = camMatrixRot.inverse * Matrix4x4.LookAt( frameBounds.center - new Vector3( 0, 0, m_depthFitSize * 0.5f ), frameBounds.center, Vector3.up );
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_144;
		L_144 = Matrix4x4_get_inverse_m4F4A881CD789281EA90EB68CFD39F36C8A81E6BD((&V_17), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_145;
		L_145 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&V_16), NULL);
		float L_146 = __this->___m_depthFitSize_37;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_147;
		memset((&L_147), 0, sizeof(L_147));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_147), (0.0f), (0.0f), ((float)il2cpp_codegen_multiply(L_146, (0.5f))), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_148;
		L_148 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_145, L_147, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_149;
		L_149 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&V_16), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_150;
		L_150 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_151;
		L_151 = Matrix4x4_LookAt_mBB8D69CBC1DA4632A9C24A5A8D7B08A36378EED2(L_148, L_149, L_150, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_152;
		L_152 = Matrix4x4_op_Multiply_m7649669D493400913FF60AFB04B1C19F14E0FDB0(L_144, L_151, NULL);
		V_18 = L_152;
		// float fitSize = m_xyFitSize * 0.5f;
		float L_153 = __this->___m_xyFitSize_36;
		V_19 = ((float)il2cpp_codegen_multiply(L_153, (0.5f)));
		// Matrix4x4 P = Matrix4x4.Ortho( -fitSize+ m_pixelOffset.x, fitSize + m_pixelOffset.x, -fitSize + m_pixelOffset.y, fitSize + m_pixelOffset.y, 0, -m_depthFitSize );
		float L_154 = V_19;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_155 = (&__this->___m_pixelOffset_38);
		float L_156 = L_155->___x_0;
		float L_157 = V_19;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_158 = (&__this->___m_pixelOffset_38);
		float L_159 = L_158->___x_0;
		float L_160 = V_19;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_161 = (&__this->___m_pixelOffset_38);
		float L_162 = L_161->___y_1;
		float L_163 = V_19;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_164 = (&__this->___m_pixelOffset_38);
		float L_165 = L_164->___y_1;
		float L_166 = __this->___m_depthFitSize_37;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_167;
		L_167 = Matrix4x4_Ortho_m2C3F7FDC23CFC7E6D59009362559FDC0B6A3DC25(((float)il2cpp_codegen_add(((-L_154)), L_156)), ((float)il2cpp_codegen_add(L_157, L_159)), ((float)il2cpp_codegen_add(((-L_160)), L_162)), ((float)il2cpp_codegen_add(L_163, L_165)), (0.0f), ((-L_166)), NULL);
		V_20 = L_167;
		// V = V.inverse * m_rootTransform.worldToLocalMatrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_168;
		L_168 = Matrix4x4_get_inverse_m4F4A881CD789281EA90EB68CFD39F36C8A81E6BD((&V_18), NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_169 = __this->___m_rootTransform_19;
		NullCheck(L_169);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_170;
		L_170 = Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1(L_169, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_171;
		L_171 = Matrix4x4_op_Multiply_m7649669D493400913FF60AFB04B1C19F14E0FDB0(L_168, L_170, NULL);
		V_18 = L_171;
		// if( standardrendering && m_renderPipelineInUse == RenderPipelineInUse.HD )
		bool L_172 = V_0;
		if (!L_172)
		{
			goto IL_03a0;
		}
	}
	{
		int32_t L_173 = __this->___m_renderPipelineInUse_23;
		if ((!(((uint32_t)L_173) == ((uint32_t)2))))
		{
			goto IL_03a0;
		}
	}
	{
		// P = GL.GetGPUProjectionMatrix( P, true );
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_174 = V_20;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_175;
		L_175 = GL_GetGPUProjectionMatrix_m5E0E33B107C7CA271DC6E9B3DBD45F5D8FA56688(L_174, (bool)1, NULL);
		V_20 = L_175;
	}

IL_03a0:
	{
		// if( impostorMaps )
		bool L_176 = ___impostorMaps2;
		if (!L_176)
		{
			goto IL_0493;
		}
	}
	{
		// commandBuffer.SetViewProjectionMatrices( V, P );
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_177 = V_2;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_178 = V_18;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_179 = V_20;
		NullCheck(L_177);
		CommandBuffer_SetViewProjectionMatrices_m50A472F193C13207D81B5EC8FB007F76E36A8C75(L_177, L_178, L_179, NULL);
		// commandBuffer.SetViewport( new Rect( ( m_data.TexSize.x / hframes ) * x, ( m_data.TexSize.y / ( vframes + ( impostorType == ImpostorType.Spherical ? 1 : 0 ) ) ) * y, ( m_data.TexSize.x / m_data.HorizontalFrames ), ( m_data.TexSize.y / m_data.VerticalFrames ) ) );
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_180 = V_2;
		AmplifyImpostorAsset_t8EC9563BE7AD641AE5EF7369E4677234BD158F1C* L_181 = __this->___m_data_18;
		NullCheck(L_181);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_182 = (&L_181->___TexSize_10);
		float L_183 = L_182->___x_0;
		int32_t L_184 = V_4;
		int32_t L_185 = V_14;
		AmplifyImpostorAsset_t8EC9563BE7AD641AE5EF7369E4677234BD158F1C* L_186 = __this->___m_data_18;
		NullCheck(L_186);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_187 = (&L_186->___TexSize_10);
		float L_188 = L_187->___y_1;
		int32_t L_189 = V_5;
		int32_t L_190 = ___impostorType0;
		G_B46_0 = L_189;
		G_B46_1 = L_188;
		G_B46_2 = ((float)il2cpp_codegen_multiply(((float)(L_183/((float)L_184))), ((float)L_185)));
		G_B46_3 = L_180;
		if (!L_190)
		{
			G_B47_0 = L_189;
			G_B47_1 = L_188;
			G_B47_2 = ((float)il2cpp_codegen_multiply(((float)(L_183/((float)L_184))), ((float)L_185)));
			G_B47_3 = L_180;
			goto IL_03e1;
		}
	}
	{
		G_B48_0 = 0;
		G_B48_1 = G_B46_0;
		G_B48_2 = G_B46_1;
		G_B48_3 = G_B46_2;
		G_B48_4 = G_B46_3;
		goto IL_03e2;
	}

IL_03e1:
	{
		G_B48_0 = 1;
		G_B48_1 = G_B47_0;
		G_B48_2 = G_B47_1;
		G_B48_3 = G_B47_2;
		G_B48_4 = G_B47_3;
	}

IL_03e2:
	{
		int32_t L_191 = V_15;
		AmplifyImpostorAsset_t8EC9563BE7AD641AE5EF7369E4677234BD158F1C* L_192 = __this->___m_data_18;
		NullCheck(L_192);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_193 = (&L_192->___TexSize_10);
		float L_194 = L_193->___x_0;
		AmplifyImpostorAsset_t8EC9563BE7AD641AE5EF7369E4677234BD158F1C* L_195 = __this->___m_data_18;
		NullCheck(L_195);
		int32_t L_196 = L_195->___HorizontalFrames_12;
		AmplifyImpostorAsset_t8EC9563BE7AD641AE5EF7369E4677234BD158F1C* L_197 = __this->___m_data_18;
		NullCheck(L_197);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_198 = (&L_197->___TexSize_10);
		float L_199 = L_198->___y_1;
		AmplifyImpostorAsset_t8EC9563BE7AD641AE5EF7369E4677234BD158F1C* L_200 = __this->___m_data_18;
		NullCheck(L_200);
		int32_t L_201 = L_200->___VerticalFrames_13;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_202;
		memset((&L_202), 0, sizeof(L_202));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_202), G_B48_3, ((float)il2cpp_codegen_multiply(((float)(G_B48_2/((float)((int32_t)il2cpp_codegen_add(G_B48_1, G_B48_0))))), ((float)L_191))), ((float)(L_194/((float)L_196))), ((float)(L_199/((float)L_201))), /*hidden argument*/NULL);
		NullCheck(G_B48_4);
		CommandBuffer_SetViewport_m3BCCABB7493369D88DB15EE43C41D9858AE2574D(G_B48_4, L_202, NULL);
		// if( standardrendering && m_renderPipelineInUse == RenderPipelineInUse.HD )
		bool L_203 = V_0;
		if (!L_203)
		{
			goto IL_0493;
		}
	}
	{
		int32_t L_204 = __this->___m_renderPipelineInUse_23;
		if ((!(((uint32_t)L_204) == ((uint32_t)2))))
		{
			goto IL_0493;
		}
	}
	{
		// BakeHDRPTool.SetupShaderVariableGlobals( V, P, commandBuffer );
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_205 = V_18;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_206 = V_20;
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_207 = V_2;
		BakeHDRPTool_SetupShaderVariableGlobals_mC29896918A4B6FBE1F0327212DBAE95812CC76A5(L_205, L_206, L_207, NULL);
		// commandBuffer.SetGlobalMatrix( "_ViewMatrix", V );
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_208 = V_2;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_209 = V_18;
		NullCheck(L_208);
		CommandBuffer_SetGlobalMatrix_mBADE644FA9946E1AD6D4B4575BFD146A113B0911(L_208, _stringLiteralD5A59EF736212174C538CE94E1A1BC47039BEBCB, L_209, NULL);
		// commandBuffer.SetGlobalMatrix( "_InvViewMatrix", V.inverse );
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_210 = V_2;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_211;
		L_211 = Matrix4x4_get_inverse_m4F4A881CD789281EA90EB68CFD39F36C8A81E6BD((&V_18), NULL);
		NullCheck(L_210);
		CommandBuffer_SetGlobalMatrix_mBADE644FA9946E1AD6D4B4575BFD146A113B0911(L_210, _stringLiteral6D84EC851B9A1D42DA33C099A9894034BFFC157C, L_211, NULL);
		// commandBuffer.SetGlobalMatrix( "_ProjMatrix", P );
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_212 = V_2;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_213 = V_20;
		NullCheck(L_212);
		CommandBuffer_SetGlobalMatrix_mBADE644FA9946E1AD6D4B4575BFD146A113B0911(L_212, _stringLiteral471089BE66AC5DA10544936EFDBCCCD99CC5C821, L_213, NULL);
		// commandBuffer.SetGlobalMatrix( "_ViewProjMatrix", P * V );
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_214 = V_2;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_215 = V_20;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_216 = V_18;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_217;
		L_217 = Matrix4x4_op_Multiply_m7649669D493400913FF60AFB04B1C19F14E0FDB0(L_215, L_216, NULL);
		NullCheck(L_214);
		CommandBuffer_SetGlobalMatrix_mBADE644FA9946E1AD6D4B4575BFD146A113B0911(L_214, _stringLiteralBCF0D23863042E55540C90CF70FA3CCB5DE77135, L_217, NULL);
		// commandBuffer.SetGlobalVector( "_WorldSpaceCameraPos", Vector4.zero );
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_218 = V_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_219;
		L_219 = Vector4_get_zero_m51B18794FAF141EBD06CA9907E6F7DF9D60F3515_inline(NULL);
		NullCheck(L_218);
		CommandBuffer_SetGlobalVector_mA5AF1BDEA174489A81DCE9D3E0415331FB05CE47(L_218, _stringLiteralCC755BAA1D6CD9058F3A8FAF0C73B9922AEC608B, L_219, NULL);
	}

IL_0493:
	{
		// if( combinedAlphas )
		bool L_220 = ___combinedAlphas3;
		if (!L_220)
		{
			goto IL_0529;
		}
	}
	{
		// commandAlphaBuffer.SetViewProjectionMatrices( V, P );
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_221 = V_3;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_222 = V_18;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_223 = V_20;
		NullCheck(L_221);
		CommandBuffer_SetViewProjectionMatrices_m50A472F193C13207D81B5EC8FB007F76E36A8C75(L_221, L_222, L_223, NULL);
		// commandAlphaBuffer.SetViewport( new Rect( 0, 0, MinAlphaResolution, MinAlphaResolution ) );
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_224 = V_3;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_225;
		memset((&L_225), 0, sizeof(L_225));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_225), (0.0f), (0.0f), (256.0f), (256.0f), /*hidden argument*/NULL);
		NullCheck(L_224);
		CommandBuffer_SetViewport_m3BCCABB7493369D88DB15EE43C41D9858AE2574D(L_224, L_225, NULL);
		// if( standardrendering && m_renderPipelineInUse == RenderPipelineInUse.HD )
		bool L_226 = V_0;
		if (!L_226)
		{
			goto IL_0529;
		}
	}
	{
		int32_t L_227 = __this->___m_renderPipelineInUse_23;
		if ((!(((uint32_t)L_227) == ((uint32_t)2))))
		{
			goto IL_0529;
		}
	}
	{
		// BakeHDRPTool.SetupShaderVariableGlobals( V, P, commandAlphaBuffer );
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_228 = V_18;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_229 = V_20;
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_230 = V_3;
		BakeHDRPTool_SetupShaderVariableGlobals_mC29896918A4B6FBE1F0327212DBAE95812CC76A5(L_228, L_229, L_230, NULL);
		// commandAlphaBuffer.SetGlobalMatrix( "_ViewMatrix", V );
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_231 = V_3;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_232 = V_18;
		NullCheck(L_231);
		CommandBuffer_SetGlobalMatrix_mBADE644FA9946E1AD6D4B4575BFD146A113B0911(L_231, _stringLiteralD5A59EF736212174C538CE94E1A1BC47039BEBCB, L_232, NULL);
		// commandAlphaBuffer.SetGlobalMatrix( "_InvViewMatrix", V.inverse );
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_233 = V_3;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_234;
		L_234 = Matrix4x4_get_inverse_m4F4A881CD789281EA90EB68CFD39F36C8A81E6BD((&V_18), NULL);
		NullCheck(L_233);
		CommandBuffer_SetGlobalMatrix_mBADE644FA9946E1AD6D4B4575BFD146A113B0911(L_233, _stringLiteral6D84EC851B9A1D42DA33C099A9894034BFFC157C, L_234, NULL);
		// commandAlphaBuffer.SetGlobalMatrix( "_ProjMatrix", P );
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_235 = V_3;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_236 = V_20;
		NullCheck(L_235);
		CommandBuffer_SetGlobalMatrix_mBADE644FA9946E1AD6D4B4575BFD146A113B0911(L_235, _stringLiteral471089BE66AC5DA10544936EFDBCCCD99CC5C821, L_236, NULL);
		// commandAlphaBuffer.SetGlobalMatrix( "_ViewProjMatrix", P * V );
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_237 = V_3;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_238 = V_20;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_239 = V_18;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_240;
		L_240 = Matrix4x4_op_Multiply_m7649669D493400913FF60AFB04B1C19F14E0FDB0(L_238, L_239, NULL);
		NullCheck(L_237);
		CommandBuffer_SetGlobalMatrix_mBADE644FA9946E1AD6D4B4575BFD146A113B0911(L_237, _stringLiteralBCF0D23863042E55540C90CF70FA3CCB5DE77135, L_240, NULL);
		// commandAlphaBuffer.SetGlobalVector( "_WorldSpaceCameraPos", Vector4.zero );
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_241 = V_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_242;
		L_242 = Vector4_get_zero_m51B18794FAF141EBD06CA9907E6F7DF9D60F3515_inline(NULL);
		NullCheck(L_241);
		CommandBuffer_SetGlobalVector_mA5AF1BDEA174489A81DCE9D3E0415331FB05CE47(L_241, _stringLiteralCC755BAA1D6CD9058F3A8FAF0C73B9922AEC608B, L_242, NULL);
	}

IL_0529:
	{
		// for( int j = 0; j < validMeshesCount; j++ )
		V_22 = 0;
		goto IL_0797;
	}

IL_0531:
	{
		// if( validMeshes[ j ] == null )
		List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* L_243 = V_6;
		int32_t L_244 = V_22;
		NullCheck(L_243);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_245;
		L_245 = List_1_get_Item_m1DDAF5804C36E171686D1F31AEDD7D32876E8348(L_243, L_244, List_1_get_Item_m1DDAF5804C36E171686D1F31AEDD7D32876E8348_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_246;
		L_246 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_245, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_246)
		{
			goto IL_0791;
		}
	}
	{
		// Material[] meshMaterials = Renderers[ j ].sharedMaterials;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_247;
		L_247 = AmplifyImpostor_get_Renderers_mE743B4A3FD10A48EF555974A7833B062F4585DCD_inline(__this, NULL);
		int32_t L_248 = V_22;
		NullCheck(L_247);
		int32_t L_249 = L_248;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_250 = (L_247)->GetAt(static_cast<il2cpp_array_size_t>(L_249));
		NullCheck(L_250);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_251;
		L_251 = Renderer_get_sharedMaterials_m0B61AFD8EDA35A70C796FFB2F28BB62380051ABF(L_250, NULL);
		V_23 = L_251;
		// for( int k = 0; k < meshMaterials.Length; k++ )
		V_24 = 0;
		goto IL_0786;
	}

IL_055d:
	{
		// Material renderMaterial = null;
		V_25 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
		// Mesh mesh = validMeshes[ j ].sharedMesh;
		List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* L_252 = V_6;
		int32_t L_253 = V_22;
		NullCheck(L_252);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_254;
		L_254 = List_1_get_Item_m1DDAF5804C36E171686D1F31AEDD7D32876E8348(L_252, L_253, List_1_get_Item_m1DDAF5804C36E171686D1F31AEDD7D32876E8348_RuntimeMethod_var);
		NullCheck(L_254);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_255;
		L_255 = MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C(L_254, NULL);
		// int pass = 0;
		V_26 = 0;
		// int prePass = 0;
		V_27 = 0;
		// if( standardrendering )
		bool L_256 = V_0;
		if (!L_256)
		{
			goto IL_060e;
		}
	}
	{
		// renderMaterial = meshMaterials[ k ];
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_257 = V_23;
		int32_t L_258 = V_24;
		NullCheck(L_257);
		int32_t L_259 = L_258;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_260 = (L_257)->GetAt(static_cast<il2cpp_array_size_t>(L_259));
		V_25 = L_260;
		// pass = renderMaterial.FindPass( "DEFERRED" );
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_261 = V_25;
		NullCheck(L_261);
		int32_t L_262;
		L_262 = Material_FindPass_mCCAAC088EE0E39AD5950BA41E965371417DBCFBC(L_261, _stringLiteral5D8EF61C72F6DF1EEE107B7E72F83434BBA9D324, NULL);
		V_26 = L_262;
		// if( pass == -1 )
		int32_t L_263 = V_26;
		if ((!(((uint32_t)L_263) == ((uint32_t)(-1)))))
		{
			goto IL_05a3;
		}
	}
	{
		// pass = renderMaterial.FindPass( "Deferred" );
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_264 = V_25;
		NullCheck(L_264);
		int32_t L_265;
		L_265 = Material_FindPass_mCCAAC088EE0E39AD5950BA41E965371417DBCFBC(L_264, _stringLiteralCF46806076510A5B175A911F127607D39D6442F5, NULL);
		V_26 = L_265;
	}

IL_05a3:
	{
		// if( pass == -1 )
		int32_t L_266 = V_26;
		if ((!(((uint32_t)L_266) == ((uint32_t)(-1)))))
		{
			goto IL_05b6;
		}
	}
	{
		// pass = renderMaterial.FindPass( "GBuffer" );
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_267 = V_25;
		NullCheck(L_267);
		int32_t L_268;
		L_268 = Material_FindPass_mCCAAC088EE0E39AD5950BA41E965371417DBCFBC(L_267, _stringLiteral4B27BFC27B5C98B524DD18892F6D318DBBA780BA, NULL);
		V_26 = L_268;
	}

IL_05b6:
	{
		// prePass = renderMaterial.FindPass( "DepthOnly" );
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_269 = V_25;
		NullCheck(L_269);
		int32_t L_270;
		L_270 = Material_FindPass_mCCAAC088EE0E39AD5950BA41E965371417DBCFBC(L_269, _stringLiteralB78AE6D5DE258AD55142707C4F5599B2FDA85727, NULL);
		V_27 = L_270;
		// if( pass == -1 ) // last resort fallback
		int32_t L_271 = V_26;
		if ((!(((uint32_t)L_271) == ((uint32_t)(-1)))))
		{
			goto IL_0601;
		}
	}
	{
		// pass = 0;
		V_26 = 0;
		// for( int sp = 0; sp < renderMaterial.passCount; sp++ )
		V_30 = 0;
		goto IL_05f6;
	}

IL_05d1:
	{
		// string lightmode = renderMaterial.GetTag( "LightMode", true );
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_272 = V_25;
		NullCheck(L_272);
		String_t* L_273;
		L_273 = Material_GetTag_m0B37070270E231B88808DB1B3F9EF4C1851627D4(L_272, _stringLiteral565F9C56DD9483223083FD5E97FB3FF2136D8C25, (bool)1, NULL);
		// if( lightmode.Equals( "Deferred" ) )
		NullCheck(L_273);
		bool L_274;
		L_274 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_273, _stringLiteralCF46806076510A5B175A911F127607D39D6442F5, NULL);
		if (!L_274)
		{
			goto IL_05f0;
		}
	}
	{
		// pass = sp;
		int32_t L_275 = V_30;
		V_26 = L_275;
		// break;
		goto IL_0601;
	}

IL_05f0:
	{
		// for( int sp = 0; sp < renderMaterial.passCount; sp++ )
		int32_t L_276 = V_30;
		V_30 = ((int32_t)il2cpp_codegen_add(L_276, 1));
	}

IL_05f6:
	{
		// for( int sp = 0; sp < renderMaterial.passCount; sp++ )
		int32_t L_277 = V_30;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_278 = V_25;
		NullCheck(L_278);
		int32_t L_279;
		L_279 = Material_get_passCount_m7BA071AFFA34DC3E49B56A16CB8B098566BDE765(L_278, NULL);
		if ((((int32_t)L_277) < ((int32_t)L_279)))
		{
			goto IL_05d1;
		}
	}

IL_0601:
	{
		// commandBuffer.EnableShaderKeyword( "UNITY_HDR_ON" );
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_280 = V_2;
		NullCheck(L_280);
		CommandBuffer_EnableShaderKeyword_m9DE5732149961F1EA14B295D9E72914E1CC7DA5A(L_280, _stringLiteral2C173DA80D18B5C4ADB5904CE60C97161DC79E87, NULL);
		goto IL_063e;
	}

IL_060e:
	{
		// prePass = -1;
		V_27 = (-1);
		// if( !bakeMats.TryGetValue( meshMaterials[ k ], out renderMaterial ) )
		Dictionary_2_t7B0F5D63DDA1E532530982C8043F0A132FF9745F* L_281 = V_1;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_282 = V_23;
		int32_t L_283 = V_24;
		NullCheck(L_282);
		int32_t L_284 = L_283;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_285 = (L_282)->GetAt(static_cast<il2cpp_array_size_t>(L_284));
		NullCheck(L_281);
		bool L_286;
		L_286 = Dictionary_2_TryGetValue_m05E005148A355590FF412AEBEC05295C4AB9446C(L_281, L_285, (&V_25), Dictionary_2_TryGetValue_m05E005148A355590FF412AEBEC05295C4AB9446C_RuntimeMethod_var);
		if (L_286)
		{
			goto IL_063e;
		}
	}
	{
		// renderMaterial = new Material( customShader ) { hideFlags = HideFlags.HideAndDontSave };
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_287 = ___customShader5;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_288 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_288);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_288, L_287, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_289 = L_288;
		NullCheck(L_289);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_289, ((int32_t)61), NULL);
		V_25 = L_289;
		// bakeMats.Add( meshMaterials[ k ], renderMaterial );
		Dictionary_2_t7B0F5D63DDA1E532530982C8043F0A132FF9745F* L_290 = V_1;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_291 = V_23;
		int32_t L_292 = V_24;
		NullCheck(L_291);
		int32_t L_293 = L_292;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_294 = (L_291)->GetAt(static_cast<il2cpp_array_size_t>(L_293));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_295 = V_25;
		NullCheck(L_290);
		Dictionary_2_Add_mB81AEBAD0FDC07C870309E662E4CB1134CA76188(L_290, L_294, L_295, Dictionary_2_Add_mB81AEBAD0FDC07C870309E662E4CB1134CA76188_RuntimeMethod_var);
	}

IL_063e:
	{
		// bool isUsingBakedGI = Renderers[ j ].lightmapIndex > -1;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_296;
		L_296 = AmplifyImpostor_get_Renderers_mE743B4A3FD10A48EF555974A7833B062F4585DCD_inline(__this, NULL);
		int32_t L_297 = V_22;
		NullCheck(L_296);
		int32_t L_298 = L_297;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_299 = (L_296)->GetAt(static_cast<il2cpp_array_size_t>(L_298));
		NullCheck(L_299);
		int32_t L_300;
		L_300 = Renderer_get_lightmapIndex_m54938EF40D6EC5F3673C52C99DCA8109C8211147(L_299, NULL);
		V_28 = (bool)((((int32_t)L_300) > ((int32_t)(-1)))? 1 : 0);
		// bool isUsingRealtimeGI = Renderers[ j ].realtimeLightmapIndex > -1;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_301;
		L_301 = AmplifyImpostor_get_Renderers_mE743B4A3FD10A48EF555974A7833B062F4585DCD_inline(__this, NULL);
		int32_t L_302 = V_22;
		NullCheck(L_301);
		int32_t L_303 = L_302;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_304 = (L_301)->GetAt(static_cast<il2cpp_array_size_t>(L_303));
		NullCheck(L_304);
		int32_t L_305;
		L_305 = Renderer_get_realtimeLightmapIndex_mC5186849F60301D8D9ACA247A7AC317C8CDC297A(L_304, NULL);
		V_29 = (bool)((((int32_t)L_305) > ((int32_t)(-1)))? 1 : 0);
		// if(( isUsingBakedGI || isUsingRealtimeGI) && !standardrendering )
		bool L_306 = V_28;
		bool L_307 = V_29;
		if (!((int32_t)((int32_t)L_306|(int32_t)L_307)))
		{
			goto IL_06ef;
		}
	}
	{
		bool L_308 = V_0;
		if (L_308)
		{
			goto IL_06ef;
		}
	}
	{
		// commandBuffer.EnableShaderKeyword( "LIGHTMAP_ON" );
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_309 = V_2;
		NullCheck(L_309);
		CommandBuffer_EnableShaderKeyword_m9DE5732149961F1EA14B295D9E72914E1CC7DA5A(L_309, _stringLiteralA74EA15A49BB463C292FDB96BA4FF5DE30D72558, NULL);
		// if( isUsingBakedGI )
		bool L_310 = V_28;
		if (!L_310)
		{
			goto IL_0699;
		}
	}
	{
		// commandBuffer.SetGlobalVector( "unity_LightmapST", Renderers[ j ].lightmapScaleOffset );
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_311 = V_2;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_312;
		L_312 = AmplifyImpostor_get_Renderers_mE743B4A3FD10A48EF555974A7833B062F4585DCD_inline(__this, NULL);
		int32_t L_313 = V_22;
		NullCheck(L_312);
		int32_t L_314 = L_313;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_315 = (L_312)->GetAt(static_cast<il2cpp_array_size_t>(L_314));
		NullCheck(L_315);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_316;
		L_316 = Renderer_get_lightmapScaleOffset_m4F9B66CD1212370CEAF1024A6748130C9C55702A(L_315, NULL);
		NullCheck(L_311);
		CommandBuffer_SetGlobalVector_mA5AF1BDEA174489A81DCE9D3E0415331FB05CE47(L_311, _stringLiteral6F98743F9D37A27D62A61808CF2139EBDC613D95, L_316, NULL);
	}

IL_0699:
	{
		// if( isUsingRealtimeGI )
		bool L_317 = V_29;
		if (!L_317)
		{
			goto IL_06c3;
		}
	}
	{
		// commandBuffer.EnableShaderKeyword( "DYNAMICLIGHTMAP_ON" );
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_318 = V_2;
		NullCheck(L_318);
		CommandBuffer_EnableShaderKeyword_m9DE5732149961F1EA14B295D9E72914E1CC7DA5A(L_318, _stringLiteralAC1019871BBF52D81334EBE531E97EB566035E97, NULL);
		// commandBuffer.SetGlobalVector( "unity_DynamicLightmapST", Renderers[ j ].realtimeLightmapScaleOffset );
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_319 = V_2;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_320;
		L_320 = AmplifyImpostor_get_Renderers_mE743B4A3FD10A48EF555974A7833B062F4585DCD_inline(__this, NULL);
		int32_t L_321 = V_22;
		NullCheck(L_320);
		int32_t L_322 = L_321;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_323 = (L_320)->GetAt(static_cast<il2cpp_array_size_t>(L_322));
		NullCheck(L_323);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_324;
		L_324 = Renderer_get_realtimeLightmapScaleOffset_m4E1F185D15FAE29503C27AAAA2D694C8D015D2A1(L_323, NULL);
		NullCheck(L_319);
		CommandBuffer_SetGlobalVector_mA5AF1BDEA174489A81DCE9D3E0415331FB05CE47(L_319, _stringLiteralD22D3025953F507F343D6D95F6F21FBA35BD146C, L_324, NULL);
		goto IL_06ce;
	}

IL_06c3:
	{
		// commandBuffer.DisableShaderKeyword( "DYNAMICLIGHTMAP_ON" );
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_325 = V_2;
		NullCheck(L_325);
		CommandBuffer_DisableShaderKeyword_m2B66FB1F672F3EE51FEA8A2CBA24AA6B7E4454BD(L_325, _stringLiteralAC1019871BBF52D81334EBE531E97EB566035E97, NULL);
	}

IL_06ce:
	{
		// if( isUsingBakedGI && isUsingRealtimeGI )
		bool L_326 = V_28;
		bool L_327 = V_29;
		if (!((int32_t)((int32_t)L_326&(int32_t)L_327)))
		{
			goto IL_06e2;
		}
	}
	{
		// commandBuffer.EnableShaderKeyword( "DIRLIGHTMAP_COMBINED" );
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_328 = V_2;
		NullCheck(L_328);
		CommandBuffer_EnableShaderKeyword_m9DE5732149961F1EA14B295D9E72914E1CC7DA5A(L_328, _stringLiteral978600362E17418CDF6C99B1CA1CF6CCCCBEF31A, NULL);
		goto IL_0710;
	}

IL_06e2:
	{
		// commandBuffer.DisableShaderKeyword( "DIRLIGHTMAP_COMBINED" );
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_329 = V_2;
		NullCheck(L_329);
		CommandBuffer_DisableShaderKeyword_m2B66FB1F672F3EE51FEA8A2CBA24AA6B7E4454BD(L_329, _stringLiteral978600362E17418CDF6C99B1CA1CF6CCCCBEF31A, NULL);
		goto IL_0710;
	}

IL_06ef:
	{
		// commandBuffer.DisableShaderKeyword( "LIGHTMAP_ON" );
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_330 = V_2;
		NullCheck(L_330);
		CommandBuffer_DisableShaderKeyword_m2B66FB1F672F3EE51FEA8A2CBA24AA6B7E4454BD(L_330, _stringLiteralA74EA15A49BB463C292FDB96BA4FF5DE30D72558, NULL);
		// commandBuffer.DisableShaderKeyword( "DYNAMICLIGHTMAP_ON" );
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_331 = V_2;
		NullCheck(L_331);
		CommandBuffer_DisableShaderKeyword_m2B66FB1F672F3EE51FEA8A2CBA24AA6B7E4454BD(L_331, _stringLiteralAC1019871BBF52D81334EBE531E97EB566035E97, NULL);
		// commandBuffer.DisableShaderKeyword( "DIRLIGHTMAP_COMBINED" );
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_332 = V_2;
		NullCheck(L_332);
		CommandBuffer_DisableShaderKeyword_m2B66FB1F672F3EE51FEA8A2CBA24AA6B7E4454BD(L_332, _stringLiteral978600362E17418CDF6C99B1CA1CF6CCCCBEF31A, NULL);
	}

IL_0710:
	{
		// commandBuffer.DisableShaderKeyword( "LIGHTPROBE_SH" );
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_333 = V_2;
		NullCheck(L_333);
		CommandBuffer_DisableShaderKeyword_m2B66FB1F672F3EE51FEA8A2CBA24AA6B7E4454BD(L_333, _stringLiteralB78DF7621651B991FAD45DC18055EA06269B40E9, NULL);
		// if( impostorMaps )
		bool L_334 = ___impostorMaps2;
		if (!L_334)
		{
			goto IL_074d;
		}
	}
	{
		// if( prePass > -1 )
		int32_t L_335 = V_27;
		if ((((int32_t)L_335) <= ((int32_t)(-1))))
		{
			goto IL_0738;
		}
	}
	{
		// commandBuffer.DrawRenderer( Renderers[ j ], renderMaterial, k, prePass );
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_336 = V_2;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_337;
		L_337 = AmplifyImpostor_get_Renderers_mE743B4A3FD10A48EF555974A7833B062F4585DCD_inline(__this, NULL);
		int32_t L_338 = V_22;
		NullCheck(L_337);
		int32_t L_339 = L_338;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_340 = (L_337)->GetAt(static_cast<il2cpp_array_size_t>(L_339));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_341 = V_25;
		int32_t L_342 = V_24;
		int32_t L_343 = V_27;
		NullCheck(L_336);
		CommandBuffer_DrawRenderer_m0E01900E0CA8B52F3BB03C82A27214A354007138(L_336, L_340, L_341, L_342, L_343, NULL);
	}

IL_0738:
	{
		// commandBuffer.DrawRenderer( Renderers[ j ], renderMaterial, k, pass );
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_344 = V_2;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_345;
		L_345 = AmplifyImpostor_get_Renderers_mE743B4A3FD10A48EF555974A7833B062F4585DCD_inline(__this, NULL);
		int32_t L_346 = V_22;
		NullCheck(L_345);
		int32_t L_347 = L_346;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_348 = (L_345)->GetAt(static_cast<il2cpp_array_size_t>(L_347));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_349 = V_25;
		int32_t L_350 = V_24;
		int32_t L_351 = V_26;
		NullCheck(L_344);
		CommandBuffer_DrawRenderer_m0E01900E0CA8B52F3BB03C82A27214A354007138(L_344, L_348, L_349, L_350, L_351, NULL);
	}

IL_074d:
	{
		// if( combinedAlphas )
		bool L_352 = ___combinedAlphas3;
		if (!L_352)
		{
			goto IL_0780;
		}
	}
	{
		// if( prePass > -1 )
		int32_t L_353 = V_27;
		if ((((int32_t)L_353) <= ((int32_t)(-1))))
		{
			goto IL_076b;
		}
	}
	{
		// commandAlphaBuffer.DrawRenderer( Renderers[ j ], renderMaterial, k, prePass );
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_354 = V_3;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_355;
		L_355 = AmplifyImpostor_get_Renderers_mE743B4A3FD10A48EF555974A7833B062F4585DCD_inline(__this, NULL);
		int32_t L_356 = V_22;
		NullCheck(L_355);
		int32_t L_357 = L_356;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_358 = (L_355)->GetAt(static_cast<il2cpp_array_size_t>(L_357));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_359 = V_25;
		int32_t L_360 = V_24;
		int32_t L_361 = V_27;
		NullCheck(L_354);
		CommandBuffer_DrawRenderer_m0E01900E0CA8B52F3BB03C82A27214A354007138(L_354, L_358, L_359, L_360, L_361, NULL);
	}

IL_076b:
	{
		// commandAlphaBuffer.DrawRenderer( Renderers[ j ], renderMaterial, k, pass );
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_362 = V_3;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_363;
		L_363 = AmplifyImpostor_get_Renderers_mE743B4A3FD10A48EF555974A7833B062F4585DCD_inline(__this, NULL);
		int32_t L_364 = V_22;
		NullCheck(L_363);
		int32_t L_365 = L_364;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_366 = (L_363)->GetAt(static_cast<il2cpp_array_size_t>(L_365));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_367 = V_25;
		int32_t L_368 = V_24;
		int32_t L_369 = V_26;
		NullCheck(L_362);
		CommandBuffer_DrawRenderer_m0E01900E0CA8B52F3BB03C82A27214A354007138(L_362, L_366, L_367, L_368, L_369, NULL);
	}

IL_0780:
	{
		// for( int k = 0; k < meshMaterials.Length; k++ )
		int32_t L_370 = V_24;
		V_24 = ((int32_t)il2cpp_codegen_add(L_370, 1));
	}

IL_0786:
	{
		// for( int k = 0; k < meshMaterials.Length; k++ )
		int32_t L_371 = V_24;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_372 = V_23;
		NullCheck(L_372);
		if ((((int32_t)L_371) < ((int32_t)((int32_t)(((RuntimeArray*)L_372)->max_length)))))
		{
			goto IL_055d;
		}
	}

IL_0791:
	{
		// for( int j = 0; j < validMeshesCount; j++ )
		int32_t L_373 = V_22;
		V_22 = ((int32_t)il2cpp_codegen_add(L_373, 1));
	}

IL_0797:
	{
		// for( int j = 0; j < validMeshesCount; j++ )
		int32_t L_374 = V_22;
		int32_t L_375 = V_7;
		if ((((int32_t)L_374) < ((int32_t)L_375)))
		{
			goto IL_0531;
		}
	}
	{
		// if( impostorMaps )
		bool L_376 = ___impostorMaps2;
		if (!L_376)
		{
			goto IL_07a9;
		}
	}
	{
		// Graphics.ExecuteCommandBuffer( commandBuffer );
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_377 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_ExecuteCommandBuffer_m6DF8B1F93BA2BD9BED8F911A05A64D56BC1FFBA1(L_377, NULL);
	}

IL_07a9:
	{
		// if( combinedAlphas )
		bool L_378 = ___combinedAlphas3;
		if (!L_378)
		{
			goto IL_07b3;
		}
	}
	{
		// Graphics.ExecuteCommandBuffer( commandAlphaBuffer );
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_379 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_ExecuteCommandBuffer_m6DF8B1F93BA2BD9BED8F911A05A64D56BC1FFBA1(L_379, NULL);
	}

IL_07b3:
	{
		// for( int y = 0; y <= vframes; y++ )
		int32_t L_380 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_380, 1));
	}

IL_07b9:
	{
		// for( int y = 0; y <= vframes; y++ )
		int32_t L_381 = V_15;
		int32_t L_382 = V_5;
		if ((((int32_t)L_381) <= ((int32_t)L_382)))
		{
			goto IL_01e7;
		}
	}
	{
		// for( int x = 0; x < hframes; x++ )
		int32_t L_383 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_383, 1));
	}

IL_07c8:
	{
		// for( int x = 0; x < hframes; x++ )
		int32_t L_384 = V_14;
		int32_t L_385 = V_4;
		if ((((int32_t)L_384) < ((int32_t)L_385)))
		{
			goto IL_01df;
		}
	}
	{
		// validMeshes.Clear();
		List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* L_386 = V_6;
		NullCheck(L_386);
		List_1_Clear_m47377D7758798C489896B13DDD6EAFEC1B6D9917_inline(L_386, List_1_Clear_m47377D7758798C489896B13DDD6EAFEC1B6D9917_RuntimeMethod_var);
		// foreach( var pair in bakeMats )
		Dictionary_2_t7B0F5D63DDA1E532530982C8043F0A132FF9745F* L_387 = V_1;
		NullCheck(L_387);
		Enumerator_t07C26ED2F5F8668F764FEEBCAA3E15D546EF661B L_388;
		L_388 = Dictionary_2_GetEnumerator_m71CCF46E896A3B30D201D7DE113D036ED5BB2971(L_387, Dictionary_2_GetEnumerator_m71CCF46E896A3B30D201D7DE113D036ED5BB2971_RuntimeMethod_var);
		V_31 = L_388;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_081a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m61B5C03832F0F13F7FFB8AEA4BF9B0FB108751EA((&V_31), Enumerator_Dispose_m61B5C03832F0F13F7FFB8AEA4BF9B0FB108751EA_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_080f_1;
			}

IL_07e2_1:
			{
				// foreach( var pair in bakeMats )
				KeyValuePair_2_t2913F672181757C35EF65E5366FB4F700F5FE5DA L_389;
				L_389 = Enumerator_get_Current_mD4C103A14262CBA39F94C6D28E01D6B9C3C77D43_inline((&V_31), Enumerator_get_Current_mD4C103A14262CBA39F94C6D28E01D6B9C3C77D43_RuntimeMethod_var);
				V_32 = L_389;
				// Material bakeMat = pair.Value;
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_390;
				L_390 = KeyValuePair_2_get_Value_m230C0120AEEB00A0FB41EFB49B43B4666CC9C410_inline((&V_32), KeyValuePair_2_get_Value_m230C0120AEEB00A0FB41EFB49B43B4666CC9C410_RuntimeMethod_var);
				V_33 = L_390;
				// if( bakeMat != null )
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_391 = V_33;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_392;
				L_392 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_391, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_392)
				{
					goto IL_080f_1;
				}
			}
			{
				// if( !Application.isPlaying )
				bool L_393;
				L_393 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
				if (L_393)
				{
					goto IL_080c_1;
				}
			}
			{
				// DestroyImmediate( bakeMat );
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_394 = V_33;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_394, NULL);
			}

IL_080c_1:
			{
				// bakeMat = null;
				V_33 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
			}

IL_080f_1:
			{
				// foreach( var pair in bakeMats )
				bool L_395;
				L_395 = Enumerator_MoveNext_mAA67D06FC2C56B827B0BFD4A1F4E79FA460FD334((&V_31), Enumerator_MoveNext_mAA67D06FC2C56B827B0BFD4A1F4E79FA460FD334_RuntimeMethod_var);
				if (L_395)
				{
					goto IL_07e2_1;
				}
			}
			{
				goto IL_0828;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0828:
	{
		// bakeMats.Clear();
		Dictionary_2_t7B0F5D63DDA1E532530982C8043F0A132FF9745F* L_396 = V_1;
		NullCheck(L_396);
		Dictionary_2_Clear_m23BA91B0F6DC61F753378785862281334A780902(L_396, Dictionary_2_Clear_m23BA91B0F6DC61F753378785862281334A780902_RuntimeMethod_var);
		// commandBuffer.Release();
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_397 = V_2;
		NullCheck(L_397);
		CommandBuffer_Release_m7D3C99D5B1598F727BD2E0E115FAD6A4E1A123A6(L_397, NULL);
		// commandBuffer = null;
		V_2 = (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7*)NULL;
		// commandAlphaBuffer.Release();
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_398 = V_3;
		NullCheck(L_398);
		CommandBuffer_Release_m7D3C99D5B1598F727BD2E0E115FAD6A4E1A123A6(L_398, NULL);
		// commandAlphaBuffer = null;
		V_3 = (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7*)NULL;
		// }
		return;
	}
}
// UnityEngine.Matrix4x4 AmplifyImpostors.AmplifyImpostor::GetCameraRotationMatrix(AmplifyImpostors.ImpostorType,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 AmplifyImpostor_GetCameraRotationMatrix_m7B957D9944609272E5B66BB9CE84517033E84E73 (AmplifyImpostor_tE757F7B6A3714CB07452670A8C4491B8CC747B3D* __this, int32_t ___impostorType0, int32_t ___hframes1, int32_t ___vframes2, int32_t ___x3, int32_t ___y4, const RuntimeMethod* method) 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// Matrix4x4 camMatrixRot = Matrix4x4.identity;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0;
		L_0 = Matrix4x4_get_identity_m94A09872C449C26863FF10D0FDF87842D91BECD6_inline(NULL);
		V_0 = L_0;
		// if( impostorType == ImpostorType.Spherical ) //SPHERICAL
		int32_t L_1 = ___impostorType0;
		if (L_1)
		{
			goto IL_006a;
		}
	}
	{
		// float fractionY = 0;
		V_1 = (0.0f);
		// if( vframes > 0 )
		int32_t L_2 = ___vframes2;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		// fractionY = -( 180.0f / vframes );
		int32_t L_3 = ___vframes2;
		V_1 = ((-((float)((180.0f)/((float)L_3)))));
	}

IL_001d:
	{
		// Quaternion hRot = Quaternion.Euler( fractionY * y + StartYRotation, 0, 0 );
		float L_4 = V_1;
		int32_t L_5 = ___y4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_4, ((float)L_5))), (90.0f))), (0.0f), (0.0f), NULL);
		// Quaternion vRot = Quaternion.Euler( 0, ( 360.0f / hframes ) * x + StartXRotation, 0 );
		int32_t L_7 = ___hframes1;
		int32_t L_8 = ___x3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)((360.0f)/((float)L_7))), ((float)L_8))), (-90.0f))), (0.0f), NULL);
		V_2 = L_9;
		// camMatrixRot = Matrix4x4.Rotate( hRot * vRot );
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_6, L_10, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12;
		L_12 = Matrix4x4_Rotate_mE2C31B51EEC282F2969B9C2BE24BD73E312807E8(L_11, NULL);
		V_0 = L_12;
		goto IL_016d;
	}

IL_006a:
	{
		// else if( impostorType == ImpostorType.Octahedron ) //OCTAHEDRON
		int32_t L_13 = ___impostorType0;
		if ((!(((uint32_t)L_13) == ((uint32_t)1))))
		{
			goto IL_00ec;
		}
	}
	{
		// Vector3 forw = OctahedronToVector( ( (float)( x ) / ( (float)hframes - 1 ) ) * 2f - 1f, ( (float)( y ) / ( (float)vframes - 1 ) ) * 2f - 1f );
		int32_t L_14 = ___x3;
		int32_t L_15 = ___hframes1;
		int32_t L_16 = ___y4;
		int32_t L_17 = ___vframes2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = AmplifyImpostor_OctahedronToVector_mDDE664219388ACF1202A3F2EEBB6754360368B0B(__this, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)(((float)L_14)/((float)il2cpp_codegen_subtract(((float)L_15), (1.0f))))), (2.0f))), (1.0f))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)(((float)L_16)/((float)il2cpp_codegen_subtract(((float)L_17), (1.0f))))), (2.0f))), (1.0f))), NULL);
		V_3 = L_18;
		// Quaternion octa = Quaternion.LookRotation( new Vector3( forw.x * -1, forw.z * -1, forw.y * -1 ), Vector3.up );
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_3;
		float L_20 = L_19.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_3;
		float L_22 = L_21.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_3;
		float L_24 = L_23.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_25), ((float)il2cpp_codegen_multiply(L_20, (-1.0f))), ((float)il2cpp_codegen_multiply(L_22, (-1.0f))), ((float)il2cpp_codegen_multiply(L_24, (-1.0f))), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27;
		L_27 = Quaternion_LookRotation_mE6859FEBE85BC0AE72A14159988151FF69BF4401(L_25, L_26, NULL);
		// camMatrixRot = Matrix4x4.Rotate( octa ).inverse;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_28;
		L_28 = Matrix4x4_Rotate_mE2C31B51EEC282F2969B9C2BE24BD73E312807E8(L_27, NULL);
		V_4 = L_28;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_29;
		L_29 = Matrix4x4_get_inverse_m4F4A881CD789281EA90EB68CFD39F36C8A81E6BD((&V_4), NULL);
		V_0 = L_29;
		goto IL_016d;
	}

IL_00ec:
	{
		// else if( impostorType == ImpostorType.HemiOctahedron ) //HEMIOCTAHEDRON
		int32_t L_30 = ___impostorType0;
		if ((!(((uint32_t)L_30) == ((uint32_t)2))))
		{
			goto IL_016d;
		}
	}
	{
		// Vector3 forw = HemiOctahedronToVector( ( (float)( x ) / ( (float)hframes - 1 ) ) * 2f - 1f, ( (float)( y ) / ( (float)vframes - 1 ) ) * 2f - 1f );
		int32_t L_31 = ___x3;
		int32_t L_32 = ___hframes1;
		int32_t L_33 = ___y4;
		int32_t L_34 = ___vframes2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = AmplifyImpostor_HemiOctahedronToVector_mCD49FD719E79C5DD714489C3550845D84C0CDB5D(__this, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)(((float)L_31)/((float)il2cpp_codegen_subtract(((float)L_32), (1.0f))))), (2.0f))), (1.0f))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)(((float)L_33)/((float)il2cpp_codegen_subtract(((float)L_34), (1.0f))))), (2.0f))), (1.0f))), NULL);
		V_5 = L_35;
		// Quaternion octa = Quaternion.LookRotation( new Vector3( forw.x * -1, forw.z * -1, forw.y * -1 ), Vector3.up );
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = V_5;
		float L_37 = L_36.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = V_5;
		float L_39 = L_38.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = V_5;
		float L_41 = L_40.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_42), ((float)il2cpp_codegen_multiply(L_37, (-1.0f))), ((float)il2cpp_codegen_multiply(L_39, (-1.0f))), ((float)il2cpp_codegen_multiply(L_41, (-1.0f))), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44;
		L_44 = Quaternion_LookRotation_mE6859FEBE85BC0AE72A14159988151FF69BF4401(L_42, L_43, NULL);
		// camMatrixRot = Matrix4x4.Rotate( octa ).inverse;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_45;
		L_45 = Matrix4x4_Rotate_mE2C31B51EEC282F2969B9C2BE24BD73E312807E8(L_44, NULL);
		V_4 = L_45;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_46;
		L_46 = Matrix4x4_get_inverse_m4F4A881CD789281EA90EB68CFD39F36C8A81E6BD((&V_4), NULL);
		V_0 = L_46;
	}

IL_016d:
	{
		// return camMatrixRot;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_47 = V_0;
		return L_47;
	}
}
// UnityEngine.Vector3 AmplifyImpostors.AmplifyImpostor::OctahedronToVector(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 AmplifyImpostor_OctahedronToVector_m04198491D3909E5D08416D6CE40F07C640FEBC79 (AmplifyImpostor_tE757F7B6A3714CB07452670A8C4491B8CC747B3D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oct0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float G_B2_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B2_1 = NULL;
	float G_B1_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B1_1 = NULL;
	float G_B3_0 = 0.0f;
	float G_B3_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B3_2 = NULL;
	float G_B5_0 = 0.0f;
	float G_B5_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B5_2 = NULL;
	float G_B4_0 = 0.0f;
	float G_B4_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B4_2 = NULL;
	float G_B6_0 = 0.0f;
	float G_B6_1 = 0.0f;
	float G_B6_2 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B6_3 = NULL;
	{
		// Vector3 N = new Vector3( oct.x, oct.y, 1.0f - Mathf.Abs( oct.x ) - Mathf.Abs( oct.y ) );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___oct0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___oct0;
		float L_3 = L_2.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___oct0;
		float L_5 = L_4.___x_0;
		float L_6;
		L_6 = fabsf(L_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___oct0;
		float L_8 = L_7.___y_1;
		float L_9;
		L_9 = fabsf(L_8);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), L_1, L_3, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract((1.0f), L_6)), L_9)), NULL);
		// float t = Mathf.Clamp01( -N.z );
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		float L_11 = L_10.___z_4;
		float L_12;
		L_12 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(((-L_11)), NULL);
		V_1 = L_12;
		// N.Set( N.x + ( N.x >= 0.0f ? -t : t ), N.y + ( N.y >= 0.0f ? -t : t ), N.z );
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		float L_14 = L_13.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_0;
		float L_16 = L_15.___x_2;
		G_B1_0 = L_14;
		G_B1_1 = (&V_0);
		if ((((float)L_16) >= ((float)(0.0f))))
		{
			G_B2_0 = L_14;
			G_B2_1 = (&V_0);
			goto IL_0055;
		}
	}
	{
		float L_17 = V_1;
		G_B3_0 = L_17;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0057;
	}

IL_0055:
	{
		float L_18 = V_1;
		G_B3_0 = ((-L_18));
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0057:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_0;
		float L_20 = L_19.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_0;
		float L_22 = L_21.___y_3;
		G_B4_0 = L_20;
		G_B4_1 = ((float)il2cpp_codegen_add(G_B3_1, G_B3_0));
		G_B4_2 = G_B3_2;
		if ((((float)L_22) >= ((float)(0.0f))))
		{
			G_B5_0 = L_20;
			G_B5_1 = ((float)il2cpp_codegen_add(G_B3_1, G_B3_0));
			G_B5_2 = G_B3_2;
			goto IL_006e;
		}
	}
	{
		float L_23 = V_1;
		G_B6_0 = L_23;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0070;
	}

IL_006e:
	{
		float L_24 = V_1;
		G_B6_0 = ((-L_24));
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0070:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_0;
		float L_26 = L_25.___z_4;
		Vector3_Set_m1C7E543216734FB513F9CEBA44C50E6FC2AFD49D_inline(G_B6_3, G_B6_2, ((float)il2cpp_codegen_add(G_B6_1, G_B6_0)), L_26, NULL);
		// N = Vector3.Normalize( N );
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline(L_27, NULL);
		V_0 = L_28;
		// return N;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_0;
		return L_29;
	}
}
// UnityEngine.Vector3 AmplifyImpostors.AmplifyImpostor::OctahedronToVector(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 AmplifyImpostor_OctahedronToVector_mDDE664219388ACF1202A3F2EEBB6754360368B0B (AmplifyImpostor_tE757F7B6A3714CB07452670A8C4491B8CC747B3D* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float G_B2_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B2_1 = NULL;
	float G_B1_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B1_1 = NULL;
	float G_B3_0 = 0.0f;
	float G_B3_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B3_2 = NULL;
	float G_B5_0 = 0.0f;
	float G_B5_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B5_2 = NULL;
	float G_B4_0 = 0.0f;
	float G_B4_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B4_2 = NULL;
	float G_B6_0 = 0.0f;
	float G_B6_1 = 0.0f;
	float G_B6_2 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B6_3 = NULL;
	{
		// Vector3 N = new Vector3( x, y, 1.0f - Mathf.Abs( x ) - Mathf.Abs( y ) );
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___x0;
		float L_3;
		L_3 = fabsf(L_2);
		float L_4 = ___y1;
		float L_5;
		L_5 = fabsf(L_4);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), L_0, L_1, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract((1.0f), L_3)), L_5)), NULL);
		// float t = Mathf.Clamp01( -N.z );
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		float L_7 = L_6.___z_4;
		float L_8;
		L_8 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(((-L_7)), NULL);
		V_1 = L_8;
		// N.Set( N.x + ( N.x >= 0.0f ? -t : t ), N.y + ( N.y >= 0.0f ? -t : t ), N.z );
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		float L_10 = L_9.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_0;
		float L_12 = L_11.___x_2;
		G_B1_0 = L_10;
		G_B1_1 = (&V_0);
		if ((((float)L_12) >= ((float)(0.0f))))
		{
			G_B2_0 = L_10;
			G_B2_1 = (&V_0);
			goto IL_0041;
		}
	}
	{
		float L_13 = V_1;
		G_B3_0 = L_13;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0043;
	}

IL_0041:
	{
		float L_14 = V_1;
		G_B3_0 = ((-L_14));
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0043:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_0;
		float L_16 = L_15.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_0;
		float L_18 = L_17.___y_3;
		G_B4_0 = L_16;
		G_B4_1 = ((float)il2cpp_codegen_add(G_B3_1, G_B3_0));
		G_B4_2 = G_B3_2;
		if ((((float)L_18) >= ((float)(0.0f))))
		{
			G_B5_0 = L_16;
			G_B5_1 = ((float)il2cpp_codegen_add(G_B3_1, G_B3_0));
			G_B5_2 = G_B3_2;
			goto IL_005a;
		}
	}
	{
		float L_19 = V_1;
		G_B6_0 = L_19;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_005c;
	}

IL_005a:
	{
		float L_20 = V_1;
		G_B6_0 = ((-L_20));
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_005c:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_0;
		float L_22 = L_21.___z_4;
		Vector3_Set_m1C7E543216734FB513F9CEBA44C50E6FC2AFD49D_inline(G_B6_3, G_B6_2, ((float)il2cpp_codegen_add(G_B6_1, G_B6_0)), L_22, NULL);
		// N = Vector3.Normalize( N );
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline(L_23, NULL);
		V_0 = L_24;
		// return N;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_0;
		return L_25;
	}
}
// UnityEngine.Vector3 AmplifyImpostors.AmplifyImpostor::HemiOctahedronToVector(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 AmplifyImpostor_HemiOctahedronToVector_mCD49FD719E79C5DD714489C3550845D84C0CDB5D (AmplifyImpostor_tE757F7B6A3714CB07452670A8C4491B8CC747B3D* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float tempx = x;
		float L_0 = ___x0;
		// float tempy = y;
		float L_1 = ___y1;
		V_0 = L_1;
		// x = ( tempx + tempy ) * 0.5f;
		float L_2 = L_0;
		float L_3 = V_0;
		___x0 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(L_2, L_3)), (0.5f)));
		// y = ( tempx - tempy ) * 0.5f;
		float L_4 = V_0;
		___y1 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_2, L_4)), (0.5f)));
		// Vector3 N = new Vector3( x, y, 1.0f - Mathf.Abs( x ) - Mathf.Abs( y ) );
		float L_5 = ___x0;
		float L_6 = ___y1;
		float L_7 = ___x0;
		float L_8;
		L_8 = fabsf(L_7);
		float L_9 = ___y1;
		float L_10;
		L_10 = fabsf(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), L_5, L_6, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract((1.0f), L_8)), L_10)), /*hidden argument*/NULL);
		// N = Vector3.Normalize( N );
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline(L_11, NULL);
		// return N;
		return L_12;
	}
}
// System.Void AmplifyImpostors.AmplifyImpostor::GenerateAutomaticMesh(AmplifyImpostors.AmplifyImpostorAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AmplifyImpostor_GenerateAutomaticMesh_m09A3A5B30B0BFFE1EE66CFDFF981D788A3814B1D (AmplifyImpostor_tE757F7B6A3714CB07452670A8C4491B8CC747B3D* __this, AmplifyImpostorAsset_t8EC9563BE7AD641AE5EF7369E4677234BD158F1C* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2U5BU5DU5BU5D_t02CC59651AB42ABB047B0391F32F881D7E7A0092* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		// Rect testRect = new Rect( 0, 0, m_alphaTex.width, m_alphaTex.height );
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = __this->___m_alphaTex_35;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = __this->___m_alphaTex_35;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_0), (0.0f), (0.0f), ((float)L_1), ((float)L_3), NULL);
		// SpriteUtilityEx.GenerateOutline( m_alphaTex, testRect, data.Tolerance, 254, false, out paths );
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4 = __this->___m_alphaTex_35;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_5 = V_0;
		AmplifyImpostorAsset_t8EC9563BE7AD641AE5EF7369E4677234BD158F1C* L_6 = ___data0;
		NullCheck(L_6);
		float L_7 = L_6->___Tolerance_16;
		SpriteUtilityEx_GenerateOutline_m4C89EA92F3720CB901100866A06393BAAC293913(L_4, L_5, L_7, (uint8_t)((int32_t)254), (bool)0, (&V_1), NULL);
		// int sum = 0;
		V_2 = 0;
		// for( int i = 0; i < paths.Length; i++ )
		V_4 = 0;
		goto IL_0059;
	}

IL_004a:
	{
		// sum += paths[ i ].Length;
		int32_t L_8 = V_2;
		Vector2U5BU5DU5BU5D_t02CC59651AB42ABB047B0391F32F881D7E7A0092* L_9 = V_1;
		int32_t L_10 = V_4;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		V_2 = ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)(((RuntimeArray*)L_12)->max_length))));
		// for( int i = 0; i < paths.Length; i++ )
		int32_t L_13 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0059:
	{
		// for( int i = 0; i < paths.Length; i++ )
		int32_t L_14 = V_4;
		Vector2U5BU5DU5BU5D_t02CC59651AB42ABB047B0391F32F881D7E7A0092* L_15 = V_1;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_004a;
		}
	}
	{
		// data.ShapePoints = new Vector2[ sum ];
		AmplifyImpostorAsset_t8EC9563BE7AD641AE5EF7369E4677234BD158F1C* L_16 = ___data0;
		int32_t L_17 = V_2;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_18 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)L_17);
		NullCheck(L_16);
		L_16->___ShapePoints_18 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&L_16->___ShapePoints_18), (void*)L_18);
		// int index = 0;
		V_3 = 0;
		// for( int i = 0; i < paths.Length; i++ )
		V_5 = 0;
		goto IL_0126;
	}

IL_0076:
	{
		// for( int j = 0; j < paths[ i ].Length; j++ )
		V_6 = 0;
		goto IL_0113;
	}

IL_007e:
	{
		// data.ShapePoints[ index ] = (Vector2)( paths[ i ][ j ] ) + ( new Vector2( m_alphaTex.width * 0.5f, m_alphaTex.height * 0.5f ) );
		AmplifyImpostorAsset_t8EC9563BE7AD641AE5EF7369E4677234BD158F1C* L_19 = ___data0;
		NullCheck(L_19);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_20 = L_19->___ShapePoints_18;
		int32_t L_21 = V_3;
		Vector2U5BU5DU5BU5D_t02CC59651AB42ABB047B0391F32F881D7E7A0092* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		int32_t L_26 = V_6;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_29 = __this->___m_alphaTex_35;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_29);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_31 = __this->___m_alphaTex_35;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_31);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_33), ((float)il2cpp_codegen_multiply(((float)L_30), (0.5f))), ((float)il2cpp_codegen_multiply(((float)L_32), (0.5f))), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34;
		L_34 = Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline(L_28, L_33, NULL);
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_34);
		// data.ShapePoints[ index ] = Vector2.Scale( data.ShapePoints[ index ], new Vector2( 1.0f / m_alphaTex.width, 1.0f / m_alphaTex.height ) );
		AmplifyImpostorAsset_t8EC9563BE7AD641AE5EF7369E4677234BD158F1C* L_35 = ___data0;
		NullCheck(L_35);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_36 = L_35->___ShapePoints_18;
		int32_t L_37 = V_3;
		AmplifyImpostorAsset_t8EC9563BE7AD641AE5EF7369E4677234BD158F1C* L_38 = ___data0;
		NullCheck(L_38);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_39 = L_38->___ShapePoints_18;
		int32_t L_40 = V_3;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_43 = __this->___m_alphaTex_35;
		NullCheck(L_43);
		int32_t L_44;
		L_44 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_43);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_45 = __this->___m_alphaTex_35;
		NullCheck(L_45);
		int32_t L_46;
		L_46 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_45);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_47;
		memset((&L_47), 0, sizeof(L_47));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_47), ((float)((1.0f)/((float)L_44))), ((float)((1.0f)/((float)L_46))), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_Scale_mC9AFC562DF393640663C6FFC733EADD343FB6B65_inline(L_42, L_47, NULL);
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_48);
		// index++;
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		// for( int j = 0; j < paths[ i ].Length; j++ )
		int32_t L_50 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_50, 1));
	}

IL_0113:
	{
		// for( int j = 0; j < paths[ i ].Length; j++ )
		int32_t L_51 = V_6;
		Vector2U5BU5DU5BU5D_t02CC59651AB42ABB047B0391F32F881D7E7A0092* L_52 = V_1;
		int32_t L_53 = V_5;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		NullCheck(L_55);
		if ((((int32_t)L_51) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_007e;
		}
	}
	{
		// for( int i = 0; i < paths.Length; i++ )
		int32_t L_56 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_56, 1));
	}

IL_0126:
	{
		// for( int i = 0; i < paths.Length; i++ )
		int32_t L_57 = V_5;
		Vector2U5BU5DU5BU5D_t02CC59651AB42ABB047B0391F32F881D7E7A0092* L_58 = V_1;
		NullCheck(L_58);
		if ((((int32_t)L_57) < ((int32_t)((int32_t)(((RuntimeArray*)L_58)->max_length)))))
		{
			goto IL_0076;
		}
	}
	{
		// data.ShapePoints = Vector2Ex.ConvexHull( data.ShapePoints );
		AmplifyImpostorAsset_t8EC9563BE7AD641AE5EF7369E4677234BD158F1C* L_59 = ___data0;
		AmplifyImpostorAsset_t8EC9563BE7AD641AE5EF7369E4677234BD158F1C* L_60 = ___data0;
		NullCheck(L_60);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_61 = L_60->___ShapePoints_18;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_62;
		L_62 = Vector2Ex_ConvexHull_m3F5DCB24D8B364C01F246CE3B9EFE80BA97F9019(L_61, NULL);
		NullCheck(L_59);
		L_59->___ShapePoints_18 = L_62;
		Il2CppCodeGenWriteBarrier((void**)(&L_59->___ShapePoints_18), (void*)L_62);
		// data.ShapePoints = Vector2Ex.ReduceVertices( data.ShapePoints, data.MaxVertices );
		AmplifyImpostorAsset_t8EC9563BE7AD641AE5EF7369E4677234BD158F1C* L_63 = ___data0;
		AmplifyImpostorAsset_t8EC9563BE7AD641AE5EF7369E4677234BD158F1C* L_64 = ___data0;
		NullCheck(L_64);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_65 = L_64->___ShapePoints_18;
		AmplifyImpostorAsset_t8EC9563BE7AD641AE5EF7369E4677234BD158F1C* L_66 = ___data0;
		NullCheck(L_66);
		int32_t L_67 = L_66->___MaxVertices_15;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_68;
		L_68 = Vector2Ex_ReduceVertices_m5DC8BBEA77ABF8AAD3456BC255DB4FD59BD631DA(L_65, L_67, NULL);
		NullCheck(L_63);
		L_63->___ShapePoints_18 = L_68;
		Il2CppCodeGenWriteBarrier((void**)(&L_63->___ShapePoints_18), (void*)L_68);
		// data.ShapePoints = Vector2Ex.ScaleAlongNormals( data.ShapePoints, data.NormalScale );
		AmplifyImpostorAsset_t8EC9563BE7AD641AE5EF7369E4677234BD158F1C* L_69 = ___data0;
		AmplifyImpostorAsset_t8EC9563BE7AD641AE5EF7369E4677234BD158F1C* L_70 = ___data0;
		NullCheck(L_70);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_71 = L_70->___ShapePoints_18;
		AmplifyImpostorAsset_t8EC9563BE7AD641AE5EF7369E4677234BD158F1C* L_72 = ___data0;
		NullCheck(L_72);
		float L_73 = L_72->___NormalScale_17;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_74;
		L_74 = Vector2Ex_ScaleAlongNormals_m622B47DD9726BAB1637B513D1A962E39015735FF(L_71, L_73, NULL);
		NullCheck(L_69);
		L_69->___ShapePoints_18 = L_74;
		Il2CppCodeGenWriteBarrier((void**)(&L_69->___ShapePoints_18), (void*)L_74);
		// for( int i = 0; i < data.ShapePoints.Length; i++ )
		V_7 = 0;
		goto IL_01cc;
	}

IL_0174:
	{
		// data.ShapePoints[ i ].x = Mathf.Clamp01( data.ShapePoints[ i ].x );
		AmplifyImpostorAsset_t8EC9563BE7AD641AE5EF7369E4677234BD158F1C* L_75 = ___data0;
		NullCheck(L_75);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_76 = L_75->___ShapePoints_18;
		int32_t L_77 = V_7;
		NullCheck(L_76);
		AmplifyImpostorAsset_t8EC9563BE7AD641AE5EF7369E4677234BD158F1C* L_78 = ___data0;
		NullCheck(L_78);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_79 = L_78->___ShapePoints_18;
		int32_t L_80 = V_7;
		NullCheck(L_79);
		float L_81 = ((L_79)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_80)))->___x_0;
		float L_82;
		L_82 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_81, NULL);
		((L_76)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_77)))->___x_0 = L_82;
		// data.ShapePoints[ i ].y = Mathf.Clamp01( data.ShapePoints[ i ].y );
		AmplifyImpostorAsset_t8EC9563BE7AD641AE5EF7369E4677234BD158F1C* L_83 = ___data0;
		NullCheck(L_83);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_84 = L_83->___ShapePoints_18;
		int32_t L_85 = V_7;
		NullCheck(L_84);
		AmplifyImpostorAsset_t8EC9563BE7AD641AE5EF7369E4677234BD158F1C* L_86 = ___data0;
		NullCheck(L_86);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_87 = L_86->___ShapePoints_18;
		int32_t L_88 = V_7;
		NullCheck(L_87);
		float L_89 = ((L_87)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_88)))->___y_1;
		float L_90;
		L_90 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_89, NULL);
		((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___y_1 = L_90;
		// for( int i = 0; i < data.ShapePoints.Length; i++ )
		int32_t L_91 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_91, 1));
	}

IL_01cc:
	{
		// for( int i = 0; i < data.ShapePoints.Length; i++ )
		int32_t L_92 = V_7;
		AmplifyImpostorAsset_t8EC9563BE7AD641AE5EF7369E4677234BD158F1C* L_93 = ___data0;
		NullCheck(L_93);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_94 = L_93->___ShapePoints_18;
		NullCheck(L_94);
		if ((((int32_t)L_92) < ((int32_t)((int32_t)(((RuntimeArray*)L_94)->max_length)))))
		{
			goto IL_0174;
		}
	}
	{
		// data.ShapePoints = Vector2Ex.ConvexHull( data.ShapePoints );
		AmplifyImpostorAsset_t8EC9563BE7AD641AE5EF7369E4677234BD158F1C* L_95 = ___data0;
		AmplifyImpostorAsset_t8EC9563BE7AD641AE5EF7369E4677234BD158F1C* L_96 = ___data0;
		NullCheck(L_96);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_97 = L_96->___ShapePoints_18;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_98;
		L_98 = Vector2Ex_ConvexHull_m3F5DCB24D8B364C01F246CE3B9EFE80BA97F9019(L_97, NULL);
		NullCheck(L_95);
		L_95->___ShapePoints_18 = L_98;
		Il2CppCodeGenWriteBarrier((void**)(&L_95->___ShapePoints_18), (void*)L_98);
		// for( int i = 0; i < data.ShapePoints.Length; i++ )
		V_8 = 0;
		goto IL_0230;
	}

IL_01ee:
	{
		// data.ShapePoints[ i ] = new Vector2( data.ShapePoints[ i ].x, 1 - data.ShapePoints[ i ].y );
		AmplifyImpostorAsset_t8EC9563BE7AD641AE5EF7369E4677234BD158F1C* L_99 = ___data0;
		NullCheck(L_99);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_100 = L_99->___ShapePoints_18;
		int32_t L_101 = V_8;
		AmplifyImpostorAsset_t8EC9563BE7AD641AE5EF7369E4677234BD158F1C* L_102 = ___data0;
		NullCheck(L_102);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_103 = L_102->___ShapePoints_18;
		int32_t L_104 = V_8;
		NullCheck(L_103);
		float L_105 = ((L_103)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_104)))->___x_0;
		AmplifyImpostorAsset_t8EC9563BE7AD641AE5EF7369E4677234BD158F1C* L_106 = ___data0;
		NullCheck(L_106);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_107 = L_106->___ShapePoints_18;
		int32_t L_108 = V_8;
		NullCheck(L_107);
		float L_109 = ((L_107)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_108)))->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_110;
		memset((&L_110), 0, sizeof(L_110));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_110), L_105, ((float)il2cpp_codegen_subtract((1.0f), L_109)), /*hidden argument*/NULL);
		NullCheck(L_100);
		(L_100)->SetAt(static_cast<il2cpp_array_size_t>(L_101), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_110);
		// for( int i = 0; i < data.ShapePoints.Length; i++ )
		int32_t L_111 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_111, 1));
	}

IL_0230:
	{
		// for( int i = 0; i < data.ShapePoints.Length; i++ )
		int32_t L_112 = V_8;
		AmplifyImpostorAsset_t8EC9563BE7AD641AE5EF7369E4677234BD158F1C* L_113 = ___data0;
		NullCheck(L_113);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_114 = L_113->___ShapePoints_18;
		NullCheck(L_114);
		if ((((int32_t)L_112) < ((int32_t)((int32_t)(((RuntimeArray*)L_114)->max_length)))))
		{
			goto IL_01ee;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.Mesh AmplifyImpostors.AmplifyImpostor::GenerateMesh(UnityEngine.Vector2[],UnityEngine.Vector3,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* AmplifyImpostor_GenerateMesh_mF90D63FEE34DD17A829462B187A49FE394A80685 (AmplifyImpostor_tE757F7B6A3714CB07452670A8C4491B8CC747B3D* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___points0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___offset1, float ___width2, float ___height3, bool ___invertY4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Triangulator_tB201648A1D8A86DFA5BA3B50ECAA301D7D07123E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_0 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Triangulator_tB201648A1D8A86DFA5BA3B50ECAA301D7D07123E* V_4 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_5 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		// Vector2[] newPoints = new Vector2[ points.Length ];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_0 = ___points0;
		NullCheck(L_0);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_1 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		V_0 = L_1;
		// Vector2[] UVs = new Vector2[ points.Length ];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_2 = ___points0;
		NullCheck(L_2);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_3 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)));
		V_1 = L_3;
		// Array.Copy( points, newPoints, points.Length );
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_4 = ___points0;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_5 = V_0;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_6 = ___points0;
		NullCheck(L_6);
		Array_Copy_m4239F97ECC23A71F4191B8722362A1AA38E2E98F((RuntimeArray*)L_4, (RuntimeArray*)L_5, ((int32_t)(((RuntimeArray*)L_6)->max_length)), NULL);
		// float halfWidth = width * 0.5f;
		float L_7 = ___width2;
		V_2 = ((float)il2cpp_codegen_multiply(L_7, (0.5f)));
		// float halfHeight = height * 0.5f;
		float L_8 = ___height3;
		V_3 = ((float)il2cpp_codegen_multiply(L_8, (0.5f)));
		// if( invertY )
		bool L_9 = ___invertY4;
		if (!L_9)
		{
			goto IL_0070;
		}
	}
	{
		// for( int i = 0; i < newPoints.Length; i++ )
		V_7 = 0;
		goto IL_0069;
	}

IL_0036:
	{
		// newPoints[ i ] = new Vector2( newPoints[ i ].x, 1 - newPoints[ i ].y );
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_10 = V_0;
		int32_t L_11 = V_7;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_12 = V_0;
		int32_t L_13 = V_7;
		NullCheck(L_12);
		float L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___x_0;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_15 = V_0;
		int32_t L_16 = V_7;
		NullCheck(L_15);
		float L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_18), L_14, ((float)il2cpp_codegen_subtract((1.0f), L_17)), /*hidden argument*/NULL);
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_18);
		// for( int i = 0; i < newPoints.Length; i++ )
		int32_t L_19 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0069:
	{
		// for( int i = 0; i < newPoints.Length; i++ )
		int32_t L_20 = V_7;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_21 = V_0;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0036;
		}
	}

IL_0070:
	{
		// Array.Copy( newPoints, UVs, newPoints.Length );
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_22 = V_0;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_23 = V_1;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_24 = V_0;
		NullCheck(L_24);
		Array_Copy_m4239F97ECC23A71F4191B8722362A1AA38E2E98F((RuntimeArray*)L_22, (RuntimeArray*)L_23, ((int32_t)(((RuntimeArray*)L_24)->max_length)), NULL);
		// for( int i = 0; i < newPoints.Length; i++ )
		V_8 = 0;
		goto IL_00cd;
	}

IL_007f:
	{
		// newPoints[ i ] = new Vector2( newPoints[ i ].x * width - halfWidth + m_pixelOffset.x, newPoints[ i ].y * height - halfHeight + m_pixelOffset.y );
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_25 = V_0;
		int32_t L_26 = V_8;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_27 = V_0;
		int32_t L_28 = V_8;
		NullCheck(L_27);
		float L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___x_0;
		float L_30 = ___width2;
		float L_31 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_32 = (&__this->___m_pixelOffset_38);
		float L_33 = L_32->___x_0;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_34 = V_0;
		int32_t L_35 = V_8;
		NullCheck(L_34);
		float L_36 = ((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___y_1;
		float L_37 = ___height3;
		float L_38 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_39 = (&__this->___m_pixelOffset_38);
		float L_40 = L_39->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_41;
		memset((&L_41), 0, sizeof(L_41));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_41), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_29, L_30)), L_31)), L_33)), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_36, L_37)), L_38)), L_40)), /*hidden argument*/NULL);
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_41);
		// for( int i = 0; i < newPoints.Length; i++ )
		int32_t L_42 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_00cd:
	{
		// for( int i = 0; i < newPoints.Length; i++ )
		int32_t L_43 = V_8;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_44 = V_0;
		NullCheck(L_44);
		if ((((int32_t)L_43) < ((int32_t)((int32_t)(((RuntimeArray*)L_44)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		// Triangulator tr = new Triangulator( newPoints );
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_45 = V_0;
		Triangulator_tB201648A1D8A86DFA5BA3B50ECAA301D7D07123E* L_46 = (Triangulator_tB201648A1D8A86DFA5BA3B50ECAA301D7D07123E*)il2cpp_codegen_object_new(Triangulator_tB201648A1D8A86DFA5BA3B50ECAA301D7D07123E_il2cpp_TypeInfo_var);
		NullCheck(L_46);
		Triangulator__ctor_m20D91D7FE56A804525A65824D83526D12F8D4E24(L_46, L_45, NULL);
		V_4 = L_46;
		// int[] indices = tr.Triangulate();
		Triangulator_tB201648A1D8A86DFA5BA3B50ECAA301D7D07123E* L_47 = V_4;
		NullCheck(L_47);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_48;
		L_48 = Triangulator_Triangulate_m5FF6C65699EE4999598D16DBF678DE8EE184D020(L_47, NULL);
		V_5 = L_48;
		// Vector3[] vertices = new Vector3[ tr.Points.Count ];
		Triangulator_tB201648A1D8A86DFA5BA3B50ECAA301D7D07123E* L_49 = V_4;
		NullCheck(L_49);
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_50;
		L_50 = Triangulator_get_Points_m1560D679DCB06E74B19DDAFB6D946043D999BB33_inline(L_49, NULL);
		NullCheck(L_50);
		int32_t L_51;
		L_51 = List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_inline(L_50, List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_52 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)L_51);
		V_6 = L_52;
		// for( int i = 0; i < vertices.Length; i++ )
		V_9 = 0;
		goto IL_013c;
	}

IL_00fd:
	{
		// vertices[ i ] = new Vector3( tr.Points[ i ].x, tr.Points[ i ].y, 0 );
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_53 = V_6;
		int32_t L_54 = V_9;
		Triangulator_tB201648A1D8A86DFA5BA3B50ECAA301D7D07123E* L_55 = V_4;
		NullCheck(L_55);
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_56;
		L_56 = Triangulator_get_Points_m1560D679DCB06E74B19DDAFB6D946043D999BB33_inline(L_55, NULL);
		int32_t L_57 = V_9;
		NullCheck(L_56);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_58;
		L_58 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_56, L_57, List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		float L_59 = L_58.___x_0;
		Triangulator_tB201648A1D8A86DFA5BA3B50ECAA301D7D07123E* L_60 = V_4;
		NullCheck(L_60);
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_61;
		L_61 = Triangulator_get_Points_m1560D679DCB06E74B19DDAFB6D946043D999BB33_inline(L_60, NULL);
		int32_t L_62 = V_9;
		NullCheck(L_61);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_63;
		L_63 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_61, L_62, List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		float L_64 = L_63.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		memset((&L_65), 0, sizeof(L_65));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_65), L_59, L_64, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(L_54), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_65);
		// for( int i = 0; i < vertices.Length; i++ )
		int32_t L_66 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_66, 1));
	}

IL_013c:
	{
		// for( int i = 0; i < vertices.Length; i++ )
		int32_t L_67 = V_9;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_68 = V_6;
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_00fd;
		}
	}
	{
		// Mesh mesh = new Mesh();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_69 = (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)il2cpp_codegen_object_new(Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		NullCheck(L_69);
		Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00(L_69, NULL);
		// mesh.vertices = vertices;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_70 = L_69;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_71 = V_6;
		NullCheck(L_70);
		Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(L_70, L_71, NULL);
		// mesh.uv = UVs;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_72 = L_70;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_73 = V_1;
		NullCheck(L_72);
		Mesh_set_uv_m6ED9C50E0DA8166DD48AC40FD6C828B9AD2E9617(L_72, L_73, NULL);
		// mesh.triangles = indices;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_74 = L_72;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_75 = V_5;
		NullCheck(L_74);
		Mesh_set_triangles_m124405320579A8D92711BB5A124644963A26F60B(L_74, L_75, NULL);
		// mesh.RecalculateNormals();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_76 = L_74;
		NullCheck(L_76);
		Mesh_RecalculateNormals_m3AA2788914611444E030CA310E03E3CFE683902B(L_76, NULL);
		// mesh.bounds = new Bounds( offset, m_originalBound.size );
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_77 = L_76;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78 = ___offset1;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_79 = (&__this->___m_originalBound_39);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80;
		L_80 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4(L_79, NULL);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_81;
		memset((&L_81), 0, sizeof(L_81));
		Bounds__ctor_mAF7B238B9FBF90C495E5D7951760085A93119C5A((&L_81), L_78, L_80, /*hidden argument*/NULL);
		NullCheck(L_77);
		Mesh_set_bounds_m2E526E9B61ACA77D644C22A9D8EB49583012B54E(L_77, L_81, NULL);
		// return mesh;
		return L_77;
	}
}
// System.Void AmplifyImpostors.AmplifyImpostor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AmplifyImpostor__ctor_m80DA34CFE3EFF46D6C8E426C5008754440081CC0 (AmplifyImpostor_tE757F7B6A3714CB07452670A8C4491B8CC747B3D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public LODReplacement m_lodReplacement = LODReplacement.ReplaceLast;
		__this->___m_lodReplacement_22 = 2;
		// public int m_insertIndex = 1;
		__this->___m_insertIndex_24 = 1;
		// public string m_impostorName = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___m_impostorName_27 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_impostorName_27), (void*)L_0);
		// private Vector2 m_pixelOffset = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		__this->___m_pixelOffset_38 = L_1;
		// private Vector3 m_oriPos = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___m_oriPos_40 = L_2;
		// private Quaternion m_oriRot = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		__this->___m_oriRot_41 = L_3;
		// private Vector3 m_oriSca = Vector3.one;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		__this->___m_oriSca_42 = L_4;
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
// System.Void AmplifyImpostors.AmplifyImpostorAsset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AmplifyImpostorAsset__ctor_mCE4FFA294C5E3966D75BF9B2A21C2E7E68666426 (AmplifyImpostorAsset_t8EC9563BE7AD641AE5EF7369E4677234BD158F1C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDB37C597C4185D9DAC4F9E3B580B7C4F1693EAAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0448AD99A177BC2606599BEAB410C01DDFEE7687_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ImpostorType ImpostorType = ImpostorType.Octahedron;
		__this->___ImpostorType_7 = 1;
		// public bool LockedSizes = true;
		__this->___LockedSizes_8 = (bool)1;
		// public int SelectedSize = 2048;
		__this->___SelectedSize_9 = ((int32_t)2048);
		// public Vector2 TexSize = new Vector2( 2048, 2048 );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_0), (2048.0f), (2048.0f), /*hidden argument*/NULL);
		__this->___TexSize_10 = L_0;
		// public int HorizontalFrames = 16;
		__this->___HorizontalFrames_12 = ((int32_t)16);
		// public int VerticalFrames = 16;
		__this->___VerticalFrames_13 = ((int32_t)16);
		// public int PixelPadding = 32;
		__this->___PixelPadding_14 = ((int32_t)32);
		// public int MaxVertices = 8;
		__this->___MaxVertices_15 = 8;
		// public float Tolerance = 0.15f;
		__this->___Tolerance_16 = (0.150000006f);
		// public float NormalScale = 0.01f;
		__this->___NormalScale_17 = (0.00999999978f);
		// public Vector2[] ShapePoints = new Vector2[] {
		//     new Vector2(0.15f, 0f),
		//     new Vector2(0.85f, 0f),
		//     new Vector2(1f, 0.15f),
		//     new Vector2(1f, 0.85f),
		//     new Vector2(0.85f, 1f),
		//     new Vector2(0.15f, 1f),
		//     new Vector2(0f, 0.85f),
		//     new Vector2(0f, 0.15f),
		// };
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_1 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)8);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_2 = L_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_3), (0.150000006f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_3);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_4 = L_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_5), (0.850000024f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_5);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_6 = L_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_7), (1.0f), (0.150000006f), /*hidden argument*/NULL);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_7);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_8 = L_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_9), (1.0f), (0.850000024f), /*hidden argument*/NULL);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_9);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_10 = L_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_11), (0.850000024f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(4), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_11);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_12 = L_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_13), (0.150000006f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(5), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_13);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_14 = L_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_15), (0.0f), (0.850000024f), /*hidden argument*/NULL);
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(6), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_15);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_16 = L_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_17), (0.0f), (0.150000006f), /*hidden argument*/NULL);
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(7), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_17);
		__this->___ShapePoints_18 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ShapePoints_18), (void*)L_16);
		// public List<TextureOutput> OverrideOutput = new List<TextureOutput>();
		List_1_t0448AD99A177BC2606599BEAB410C01DDFEE7687* L_18 = (List_1_t0448AD99A177BC2606599BEAB410C01DDFEE7687*)il2cpp_codegen_object_new(List_1_t0448AD99A177BC2606599BEAB410C01DDFEE7687_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		List_1__ctor_mDB37C597C4185D9DAC4F9E3B580B7C4F1693EAAC(L_18, List_1__ctor_mDB37C597C4185D9DAC4F9E3B580B7C4F1693EAAC_RuntimeMethod_var);
		__this->___OverrideOutput_20 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OverrideOutput_20), (void*)L_18);
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
// System.Void AmplifyImpostors.TextureOutput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureOutput__ctor_mBFB0EAB9DCD1394181E521D8E8A378A7923DFD0C (TextureOutput_t5DA7CF51AFA4E662ABD5BEE0CEC6CC5159BD448B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int Index = -1;
		__this->___Index_0 = (-1);
		// public bool Active = true;
		__this->___Active_2 = (bool)1;
		// public string Name = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___Name_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Name_3), (void*)L_0);
		// public TextureScale Scale = TextureScale.Full;
		__this->___Scale_4 = 1;
		// public TextureCompression Compression = TextureCompression.Normal;
		__this->___Compression_7 = 1;
		// public ImageFormat ImageFormat = ImageFormat.TGA;
		__this->___ImageFormat_8 = 1;
		// public TextureOutput() { }
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public TextureOutput() { }
		return;
	}
}
// System.Void AmplifyImpostors.TextureOutput::.ctor(System.Boolean,System.String,AmplifyImpostors.TextureScale,System.Boolean,AmplifyImpostors.TextureChannels,AmplifyImpostors.TextureCompression,AmplifyImpostors.ImageFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureOutput__ctor_m6BFE00AEB92C5322833A548514E1E6FD525ADA88 (TextureOutput_t5DA7CF51AFA4E662ABD5BEE0CEC6CC5159BD448B* __this, bool ___a0, String_t* ___n1, int32_t ___s2, bool ___sr3, int32_t ___c4, int32_t ___nc5, int32_t ___i6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int Index = -1;
		__this->___Index_0 = (-1);
		// public bool Active = true;
		__this->___Active_2 = (bool)1;
		// public string Name = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___Name_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Name_3), (void*)L_0);
		// public TextureScale Scale = TextureScale.Full;
		__this->___Scale_4 = 1;
		// public TextureCompression Compression = TextureCompression.Normal;
		__this->___Compression_7 = 1;
		// public ImageFormat ImageFormat = ImageFormat.TGA;
		__this->___ImageFormat_8 = 1;
		// public TextureOutput( bool a, string n, TextureScale s, bool sr, TextureChannels c, TextureCompression nc, ImageFormat i )
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Active = a;
		bool L_1 = ___a0;
		__this->___Active_2 = L_1;
		// Name = n;
		String_t* L_2 = ___n1;
		__this->___Name_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Name_3), (void*)L_2);
		// Scale = s;
		int32_t L_3 = ___s2;
		__this->___Scale_4 = L_3;
		// SRGB = sr;
		bool L_4 = ___sr3;
		__this->___SRGB_5 = L_4;
		// Channels = c;
		int32_t L_5 = ___c4;
		__this->___Channels_6 = L_5;
		// Compression = nc;
		int32_t L_6 = ___nc5;
		__this->___Compression_7 = L_6;
		// ImageFormat = i;
		int32_t L_7 = ___i6;
		__this->___ImageFormat_8 = L_7;
		// }
		return;
	}
}
// AmplifyImpostors.TextureOutput AmplifyImpostors.TextureOutput::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextureOutput_t5DA7CF51AFA4E662ABD5BEE0CEC6CC5159BD448B* TextureOutput_Clone_m40FCE759228BA813DA4CED21E4641F4EB0BBBFB2 (TextureOutput_t5DA7CF51AFA4E662ABD5BEE0CEC6CC5159BD448B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureOutput_t5DA7CF51AFA4E662ABD5BEE0CEC6CC5159BD448B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (TextureOutput)this.MemberwiseClone();
		RuntimeObject* L_0;
		L_0 = Object_MemberwiseClone_m0676AEE25C3CF7C09F15ECF9EC5CC407863617B3(__this, NULL);
		return ((TextureOutput_t5DA7CF51AFA4E662ABD5BEE0CEC6CC5159BD448B*)CastclassClass((RuntimeObject*)L_0, TextureOutput_t5DA7CF51AFA4E662ABD5BEE0CEC6CC5159BD448B_il2cpp_TypeInfo_var));
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
// System.Void AmplifyImpostors.AmplifyImpostorBakePreset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AmplifyImpostorBakePreset__ctor_m37CE1492BD06B8BA0CD7BD4D32F543E5F17E621F (AmplifyImpostorBakePreset_tB4321CCFBD0C4932C80B16CBAD3565C7B04D782A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDB37C597C4185D9DAC4F9E3B580B7C4F1693EAAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0448AD99A177BC2606599BEAB410C01DDFEE7687_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<TextureOutput> Output = new List<TextureOutput>();
		List_1_t0448AD99A177BC2606599BEAB410C01DDFEE7687* L_0 = (List_1_t0448AD99A177BC2606599BEAB410C01DDFEE7687*)il2cpp_codegen_object_new(List_1_t0448AD99A177BC2606599BEAB410C01DDFEE7687_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mDB37C597C4185D9DAC4F9E3B580B7C4F1693EAAC(L_0, List_1__ctor_mDB37C597C4185D9DAC4F9E3B580B7C4F1693EAAC_RuntimeMethod_var);
		__this->___Output_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Output_8), (void*)L_0);
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
// System.Void AmplifyImpostors.BakeHDRPTool::SetupShaderVariableGlobals(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Rendering.CommandBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BakeHDRPTool_SetupShaderVariableGlobals_mC29896918A4B6FBE1F0327212DBAE95812CC76A5 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___viewMat0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___projMatrix1, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___commandBuffer2, const RuntimeMethod* method) 
{
	{
		// public static void SetupShaderVariableGlobals( Matrix4x4 viewMat, Matrix4x4 projMatrix , CommandBuffer commandBuffer ){/*This does nothing on HDRP lower that 10*/}
		return;
	}
}
// System.Void AmplifyImpostors.BakeHDRPTool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BakeHDRPTool__ctor_mDB9E15005D3B6C6C5FFAB373F5BAAE63D0970C70 (BakeHDRPTool_t31E336586982DA3974E8127E92D5E59D552F951B* __this, const RuntimeMethod* method) 
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
// UnityEngine.Bounds AmplifyImpostors.BoundsEx::Transform(UnityEngine.Bounds,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 BoundsEx_Transform_m8C0564D73B860CEC7C616B15237F4B9166E223BF (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___bounds0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___matrix1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// var center = matrix.MultiplyPoint3x4( bounds.center );
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&___bounds0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&___matrix1), L_0, NULL);
		V_0 = L_1;
		// var extents = bounds.extents;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&___bounds0), NULL);
		V_1 = L_2;
		// var axisX = matrix.MultiplyVector( new Vector3( extents.x, 0, 0 ) );
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_1;
		float L_4 = L_3.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), L_4, (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Matrix4x4_MultiplyVector_mFD12F86A473E90BBB0002149ABA3917B2A518937((&___matrix1), L_5, NULL);
		V_2 = L_6;
		// var axisY = matrix.MultiplyVector( new Vector3( 0, extents.y, 0 ) );
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_1;
		float L_8 = L_7.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), (0.0f), L_8, (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Matrix4x4_MultiplyVector_mFD12F86A473E90BBB0002149ABA3917B2A518937((&___matrix1), L_9, NULL);
		V_3 = L_10;
		// var axisZ = matrix.MultiplyVector( new Vector3( 0, 0, extents.z ) );
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_1;
		float L_12 = L_11.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_13), (0.0f), (0.0f), L_12, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Matrix4x4_MultiplyVector_mFD12F86A473E90BBB0002149ABA3917B2A518937((&___matrix1), L_13, NULL);
		V_4 = L_14;
		// extents.x = Mathf.Abs( axisX.x ) + Mathf.Abs( axisY.x ) + Mathf.Abs( axisZ.x );
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_2;
		float L_16 = L_15.___x_2;
		float L_17;
		L_17 = fabsf(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_3;
		float L_19 = L_18.___x_2;
		float L_20;
		L_20 = fabsf(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_4;
		float L_22 = L_21.___x_2;
		float L_23;
		L_23 = fabsf(L_22);
		(&V_1)->___x_2 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_17, L_20)), L_23));
		// extents.y = Mathf.Abs( axisX.y ) + Mathf.Abs( axisY.y ) + Mathf.Abs( axisZ.y );
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_2;
		float L_25 = L_24.___y_3;
		float L_26;
		L_26 = fabsf(L_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_3;
		float L_28 = L_27.___y_3;
		float L_29;
		L_29 = fabsf(L_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_4;
		float L_31 = L_30.___y_3;
		float L_32;
		L_32 = fabsf(L_31);
		(&V_1)->___y_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_26, L_29)), L_32));
		// extents.z = Mathf.Abs( axisX.z ) + Mathf.Abs( axisY.z ) + Mathf.Abs( axisZ.z );
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = V_2;
		float L_34 = L_33.___z_4;
		float L_35;
		L_35 = fabsf(L_34);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = V_3;
		float L_37 = L_36.___z_4;
		float L_38;
		L_38 = fabsf(L_37);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = V_4;
		float L_40 = L_39.___z_4;
		float L_41;
		L_41 = fabsf(L_40);
		(&V_1)->___z_4 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_35, L_38)), L_41));
		// return new Bounds { center = center, extents = extents };
		il2cpp_codegen_initobj((&V_5), sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = V_0;
		Bounds_set_center_m891869DD5B1BEEE2D17907BBFB7EB79AAE44884B((&V_5), L_42, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_1;
		Bounds_set_extents_m09496358547B86A93EFE7BE6371E7A6FE937C46F((&V_5), L_43, NULL);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_44 = V_5;
		return L_44;
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
// System.Byte[] AmplifyImpostors.Texture2DEx::EncodeToTGA(UnityEngine.Texture2D,AmplifyImpostors.Texture2DEx/Compression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Texture2DEx_EncodeToTGA_mF35A4B7D71EEB48BA5FF4EB74FA720355C5A12E5 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___tex0, int32_t ___compression1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2DEx_tC0E3140D8E9BC44B42583F1BCCECEF71A9A59150_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_1 = NULL;
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* V_2 = NULL;
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* V_3 = NULL;
	int32_t V_4 = 0;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	bool V_13 = false;
	int32_t V_14 = 0;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_15;
	memset((&V_15), 0, sizeof(V_15));
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_16 = NULL;
	int32_t G_B4_0 = 0;
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* G_B8_0 = NULL;
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* G_B9_1 = NULL;
	int32_t G_B20_0 = 0;
	{
		// int bytesPerPixel = tex.format == TextureFormat.ARGB32 || tex.format == TextureFormat.RGBA32 ? bytesRGBA32 : bytesRGB24;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___tex0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Texture2D_get_format_mE39DD922F83CA1097383309278BB6F20636A7D9D(L_0, NULL);
		if ((((int32_t)L_1) == ((int32_t)5)))
		{
			goto IL_0015;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = ___tex0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Texture2D_get_format_mE39DD922F83CA1097383309278BB6F20636A7D9D(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)4)))
		{
			goto IL_0015;
		}
	}
	{
		G_B4_0 = 3;
		goto IL_0016;
	}

IL_0015:
	{
		G_B4_0 = 4;
	}

IL_0016:
	{
		V_0 = G_B4_0;
		// using( MemoryStream stream = new MemoryStream( headerSize + tex.width * tex.height * bytesPerPixel ) )
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4 = ___tex0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_4);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_6 = ___tex0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_6);
		int32_t L_8 = V_0;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_9 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		MemoryStream__ctor_m9E93692A2BB0E34119603FF6A5D44F6A132052E8(L_9, ((int32_t)il2cpp_codegen_add(((int32_t)18), ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_5, L_7)), L_8)))), NULL);
		V_1 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_02a6:
			{// begin finally (depth: 1)
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_10 = V_1;
					if (!L_10)
					{
						goto IL_02af;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_11 = V_1;
					NullCheck(L_11);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_11);
				}

IL_02af:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// using( BinaryWriter writer = new BinaryWriter( stream ) )
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_12 = V_1;
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_13 = (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E*)il2cpp_codegen_object_new(BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var);
				NullCheck(L_13);
				BinaryWriter__ctor_mF2F1235E378C3EC493A8C816597BCEB4205A9CA0(L_13, L_12, NULL);
				V_2 = L_13;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0292_1:
					{// begin finally (depth: 2)
						{
							BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_14 = V_2;
							if (!L_14)
							{
								goto IL_029b_1;
							}
						}
						{
							BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_15 = V_2;
							NullCheck(L_15);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_15);
						}

IL_029b_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						// writer.Write( (byte)0 );                      // IDLength (not in use)
						BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_16 = V_2;
						NullCheck(L_16);
						VirtualActionInvoker1< uint8_t >::Invoke(9 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_16, (uint8_t)0);
						// writer.Write( (byte)0 );                      // ColorMapType (not in use)
						BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_17 = V_2;
						NullCheck(L_17);
						VirtualActionInvoker1< uint8_t >::Invoke(9 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_17, (uint8_t)0);
						// writer.Write( (byte)( compression == Compression.None ? 2 : 10 ) ); // DataTypeCode (10 == Runlength encoded RGB images)
						BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_18 = V_2;
						int32_t L_19 = ___compression1;
						G_B7_0 = L_18;
						if (!L_19)
						{
							G_B8_0 = L_18;
							goto IL_004c_2;
						}
					}
					{
						G_B9_0 = ((int32_t)10);
						G_B9_1 = G_B7_0;
						goto IL_004d_2;
					}

IL_004c_2:
					{
						G_B9_0 = 2;
						G_B9_1 = G_B8_0;
					}

IL_004d_2:
					{
						NullCheck(G_B9_1);
						VirtualActionInvoker1< uint8_t >::Invoke(9 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, G_B9_1, (uint8_t)((int32_t)(uint8_t)G_B9_0));
						// writer.Write( (short)0 );                     // ColorMapOrigin (not in use)
						BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_20 = V_2;
						NullCheck(L_20);
						VirtualActionInvoker1< int16_t >::Invoke(15 /* System.Void System.IO.BinaryWriter::Write(System.Int16) */, L_20, (int16_t)0);
						// writer.Write( (short)0 );                     // ColorMapLength (not in use)
						BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_21 = V_2;
						NullCheck(L_21);
						VirtualActionInvoker1< int16_t >::Invoke(15 /* System.Void System.IO.BinaryWriter::Write(System.Int16) */, L_21, (int16_t)0);
						// writer.Write( (byte)0 );                      // ColorMapDepth (not in use)
						BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_22 = V_2;
						NullCheck(L_22);
						VirtualActionInvoker1< uint8_t >::Invoke(9 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_22, (uint8_t)0);
						// writer.Write( (short)0 );                     // Origin X
						BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_23 = V_2;
						NullCheck(L_23);
						VirtualActionInvoker1< int16_t >::Invoke(15 /* System.Void System.IO.BinaryWriter::Write(System.Int16) */, L_23, (int16_t)0);
						// writer.Write( (short)0 );                     // Origin Y
						BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_24 = V_2;
						NullCheck(L_24);
						VirtualActionInvoker1< int16_t >::Invoke(15 /* System.Void System.IO.BinaryWriter::Write(System.Int16) */, L_24, (int16_t)0);
						// writer.Write( (short)tex.width );             // Width
						BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_25 = V_2;
						Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_26 = ___tex0;
						NullCheck(L_26);
						int32_t L_27;
						L_27 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_26);
						NullCheck(L_25);
						VirtualActionInvoker1< int16_t >::Invoke(15 /* System.Void System.IO.BinaryWriter::Write(System.Int16) */, L_25, ((int16_t)L_27));
						// writer.Write( (short)tex.height );            // Height
						BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_28 = V_2;
						Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_29 = ___tex0;
						NullCheck(L_29);
						int32_t L_30;
						L_30 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_29);
						NullCheck(L_28);
						VirtualActionInvoker1< int16_t >::Invoke(15 /* System.Void System.IO.BinaryWriter::Write(System.Int16) */, L_28, ((int16_t)L_30));
						// writer.Write( (byte)( bytesPerPixel * 8 ) );  // Bits Per Pixel
						BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_31 = V_2;
						int32_t L_32 = V_0;
						NullCheck(L_31);
						VirtualActionInvoker1< uint8_t >::Invoke(9 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_31, (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_multiply(L_32, 8))));
						// writer.Write( (byte)8 );                      // ImageDescriptor (photoshop uses 8?)
						BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_33 = V_2;
						NullCheck(L_33);
						VirtualActionInvoker1< uint8_t >::Invoke(9 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_33, (uint8_t)8);
						// Color32[] pixels = tex.GetPixels32();
						Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_34 = ___tex0;
						NullCheck(L_34);
						Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_35;
						L_35 = Texture2D_GetPixels32_m48230192E7543765C1A517F251D1D9BFCFB58C3D(L_34, NULL);
						V_3 = L_35;
						// if( compression == Compression.None )
						int32_t L_36 = ___compression1;
						if (L_36)
						{
							goto IL_0104_2;
						}
					}
					{
						// for( int i = 0; i < pixels.Length; i++ )
						V_4 = 0;
						goto IL_00f8_2;
					}

IL_00b0_2:
					{
						// Color32 pixel = pixels[ i ];
						Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_37 = V_3;
						int32_t L_38 = V_4;
						NullCheck(L_37);
						int32_t L_39 = L_38;
						Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
						V_5 = L_40;
						// writer.Write( pixel.r );
						BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_41 = V_2;
						Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_42 = V_5;
						uint8_t L_43 = L_42.___r_1;
						NullCheck(L_41);
						VirtualActionInvoker1< uint8_t >::Invoke(9 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_41, L_43);
						// writer.Write( pixel.g );
						BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_44 = V_2;
						Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_45 = V_5;
						uint8_t L_46 = L_45.___g_2;
						NullCheck(L_44);
						VirtualActionInvoker1< uint8_t >::Invoke(9 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_44, L_46);
						// writer.Write( pixel.b );
						BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_47 = V_2;
						Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_48 = V_5;
						uint8_t L_49 = L_48.___b_3;
						NullCheck(L_47);
						VirtualActionInvoker1< uint8_t >::Invoke(9 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_47, L_49);
						// if( bytesPerPixel == bytesRGBA32 )
						int32_t L_50 = V_0;
						if ((!(((uint32_t)L_50) == ((uint32_t)4))))
						{
							goto IL_00f2_2;
						}
					}
					{
						// writer.Write( pixel.a );
						BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_51 = V_2;
						Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_52 = V_5;
						uint8_t L_53 = L_52.___a_4;
						NullCheck(L_51);
						VirtualActionInvoker1< uint8_t >::Invoke(9 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_51, L_53);
					}

IL_00f2_2:
					{
						// for( int i = 0; i < pixels.Length; i++ )
						int32_t L_54 = V_4;
						V_4 = ((int32_t)il2cpp_codegen_add(L_54, 1));
					}

IL_00f8_2:
					{
						// for( int i = 0; i < pixels.Length; i++ )
						int32_t L_55 = V_4;
						Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_56 = V_3;
						NullCheck(L_56);
						if ((((int32_t)L_55) < ((int32_t)((int32_t)(((RuntimeArray*)L_56)->max_length)))))
						{
							goto IL_00b0_2;
						}
					}
					{
						goto IL_0277_2;
					}

IL_0104_2:
					{
						// int packetStart = 0;
						V_6 = 0;
						// int packetEnd = 0;
						V_7 = 0;
						goto IL_026d_2;
					}

IL_010f_2:
					{
						// Color32 currentPixel = pixels[ packetStart ];
						Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_57 = V_3;
						int32_t L_58 = V_6;
						NullCheck(L_57);
						int32_t L_59 = L_58;
						Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
						V_8 = L_60;
						// bool isRLE = ( packetStart != pixels.Length - 1 ) && Equals( pixels[ packetStart ], pixels[ packetStart + 1 ] );
						int32_t L_61 = V_6;
						Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_62 = V_3;
						NullCheck(L_62);
						if ((((int32_t)L_61) == ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_62)->max_length)), 1)))))
						{
							goto IL_013b_2;
						}
					}
					{
						Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_63 = V_3;
						int32_t L_64 = V_6;
						NullCheck(L_63);
						int32_t L_65 = L_64;
						Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_66 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
						Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_67 = V_3;
						int32_t L_68 = V_6;
						NullCheck(L_67);
						int32_t L_69 = ((int32_t)il2cpp_codegen_add(L_68, 1));
						Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_70 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
						il2cpp_codegen_runtime_class_init_inline(Texture2DEx_tC0E3140D8E9BC44B42583F1BCCECEF71A9A59150_il2cpp_TypeInfo_var);
						bool L_71;
						L_71 = Texture2DEx_Equals_m7B16C4056E1DF7BC32706ECED858AC553E6A7659(L_66, L_70, NULL);
						G_B20_0 = ((int32_t)(L_71));
						goto IL_013c_2;
					}

IL_013b_2:
					{
						G_B20_0 = 0;
					}

IL_013c_2:
					{
						V_9 = (bool)G_B20_0;
						// int endOfWidth = ( ( packetStart / tex.width ) + 1 ) * tex.width;
						int32_t L_72 = V_6;
						Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_73 = ___tex0;
						NullCheck(L_73);
						int32_t L_74;
						L_74 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_73);
						Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_75 = ___tex0;
						NullCheck(L_75);
						int32_t L_76;
						L_76 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_75);
						V_10 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)(L_72/L_74)), 1)), L_76));
						// int readEnd = Mathf.Min( packetStart + maxPacket, pixels.Length, endOfWidth );
						Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_77 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
						Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_78 = L_77;
						int32_t L_79 = V_6;
						NullCheck(L_78);
						(L_78)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)il2cpp_codegen_add(L_79, ((int32_t)128))));
						Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_80 = L_78;
						Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_81 = V_3;
						NullCheck(L_81);
						NullCheck(L_80);
						(L_80)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)(((RuntimeArray*)L_81)->max_length)));
						Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_82 = L_80;
						int32_t L_83 = V_10;
						NullCheck(L_82);
						(L_82)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_83);
						int32_t L_84;
						L_84 = Mathf_Min_m464FF96F8532FE33EB226E049BDAB1885AB67366_inline(L_82, NULL);
						V_11 = L_84;
						// for( packetEnd = packetStart + 1; packetEnd < readEnd; ++packetEnd )
						int32_t L_85 = V_6;
						V_7 = ((int32_t)il2cpp_codegen_add(L_85, 1));
						goto IL_01ae_2;
					}

IL_017d_2:
					{
						// bool bPreviousEqualsCurrent = Equals( pixels[ packetEnd - 1 ], pixels[ packetEnd ] );
						Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_86 = V_3;
						int32_t L_87 = V_7;
						NullCheck(L_86);
						int32_t L_88 = ((int32_t)il2cpp_codegen_subtract(L_87, 1));
						Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_89 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
						Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_90 = V_3;
						int32_t L_91 = V_7;
						NullCheck(L_90);
						int32_t L_92 = L_91;
						Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
						il2cpp_codegen_runtime_class_init_inline(Texture2DEx_tC0E3140D8E9BC44B42583F1BCCECEF71A9A59150_il2cpp_TypeInfo_var);
						bool L_94;
						L_94 = Texture2DEx_Equals_m7B16C4056E1DF7BC32706ECED858AC553E6A7659(L_89, L_93, NULL);
						V_13 = L_94;
						// if( !isRLE && bPreviousEqualsCurrent || isRLE && !bPreviousEqualsCurrent )
						bool L_95 = V_9;
						bool L_96 = V_13;
						if (((int32_t)(((((int32_t)L_95) == ((int32_t)0))? 1 : 0)&(int32_t)L_96)))
						{
							goto IL_01b4_2;
						}
					}
					{
						bool L_97 = V_9;
						if (!L_97)
						{
							goto IL_01a8_2;
						}
					}
					{
						bool L_98 = V_13;
						if (!L_98)
						{
							goto IL_01b4_2;
						}
					}

IL_01a8_2:
					{
						// for( packetEnd = packetStart + 1; packetEnd < readEnd; ++packetEnd )
						int32_t L_99 = V_7;
						V_7 = ((int32_t)il2cpp_codegen_add(L_99, 1));
					}

IL_01ae_2:
					{
						// for( packetEnd = packetStart + 1; packetEnd < readEnd; ++packetEnd )
						int32_t L_100 = V_7;
						int32_t L_101 = V_11;
						if ((((int32_t)L_100) < ((int32_t)L_101)))
						{
							goto IL_017d_2;
						}
					}

IL_01b4_2:
					{
						// int packetLength = packetEnd - packetStart;
						int32_t L_102 = V_7;
						int32_t L_103 = V_6;
						V_12 = ((int32_t)il2cpp_codegen_subtract(L_102, L_103));
						// if( isRLE )
						bool L_104 = V_9;
						if (!L_104)
						{
							goto IL_020a_2;
						}
					}
					{
						// writer.Write( (byte)( ( packetLength - 1 ) | ( 1 << 7 ) ) );
						BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_105 = V_2;
						int32_t L_106 = V_12;
						NullCheck(L_105);
						VirtualActionInvoker1< uint8_t >::Invoke(9 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_105, (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)il2cpp_codegen_subtract(L_106, 1))|((int32_t)128)))));
						// writer.Write( currentPixel.r );
						BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_107 = V_2;
						Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_108 = V_8;
						uint8_t L_109 = L_108.___r_1;
						NullCheck(L_107);
						VirtualActionInvoker1< uint8_t >::Invoke(9 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_107, L_109);
						// writer.Write( currentPixel.g );
						BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_110 = V_2;
						Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_111 = V_8;
						uint8_t L_112 = L_111.___g_2;
						NullCheck(L_110);
						VirtualActionInvoker1< uint8_t >::Invoke(9 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_110, L_112);
						// writer.Write( currentPixel.b );
						BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_113 = V_2;
						Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_114 = V_8;
						uint8_t L_115 = L_114.___b_3;
						NullCheck(L_113);
						VirtualActionInvoker1< uint8_t >::Invoke(9 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_113, L_115);
						// if( bytesPerPixel == bytesRGBA32 )
						int32_t L_116 = V_0;
						if ((!(((uint32_t)L_116) == ((uint32_t)4))))
						{
							goto IL_0269_2;
						}
					}
					{
						// writer.Write( currentPixel.a );
						BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_117 = V_2;
						Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_118 = V_8;
						uint8_t L_119 = L_118.___a_4;
						NullCheck(L_117);
						VirtualActionInvoker1< uint8_t >::Invoke(9 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_117, L_119);
						goto IL_0269_2;
					}

IL_020a_2:
					{
						// writer.Write( (byte)( packetLength - 1 ) );
						BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_120 = V_2;
						int32_t L_121 = V_12;
						NullCheck(L_120);
						VirtualActionInvoker1< uint8_t >::Invoke(9 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_120, (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_subtract(L_121, 1))));
						// for( int i = packetStart; i < packetEnd; ++i )
						int32_t L_122 = V_6;
						V_14 = L_122;
						goto IL_0263_2;
					}

IL_021b_2:
					{
						// Color32 pixel = pixels[ i ];
						Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_123 = V_3;
						int32_t L_124 = V_14;
						NullCheck(L_123);
						int32_t L_125 = L_124;
						Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_126 = (L_123)->GetAt(static_cast<il2cpp_array_size_t>(L_125));
						V_15 = L_126;
						// writer.Write( pixel.r );
						BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_127 = V_2;
						Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_128 = V_15;
						uint8_t L_129 = L_128.___r_1;
						NullCheck(L_127);
						VirtualActionInvoker1< uint8_t >::Invoke(9 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_127, L_129);
						// writer.Write( pixel.g );
						BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_130 = V_2;
						Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_131 = V_15;
						uint8_t L_132 = L_131.___g_2;
						NullCheck(L_130);
						VirtualActionInvoker1< uint8_t >::Invoke(9 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_130, L_132);
						// writer.Write( pixel.b );
						BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_133 = V_2;
						Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_134 = V_15;
						uint8_t L_135 = L_134.___b_3;
						NullCheck(L_133);
						VirtualActionInvoker1< uint8_t >::Invoke(9 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_133, L_135);
						// if( bytesPerPixel == bytesRGBA32 )
						int32_t L_136 = V_0;
						if ((!(((uint32_t)L_136) == ((uint32_t)4))))
						{
							goto IL_025d_2;
						}
					}
					{
						// writer.Write( pixel.a );
						BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_137 = V_2;
						Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_138 = V_15;
						uint8_t L_139 = L_138.___a_4;
						NullCheck(L_137);
						VirtualActionInvoker1< uint8_t >::Invoke(9 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_137, L_139);
					}

IL_025d_2:
					{
						// for( int i = packetStart; i < packetEnd; ++i )
						int32_t L_140 = V_14;
						V_14 = ((int32_t)il2cpp_codegen_add(L_140, 1));
					}

IL_0263_2:
					{
						// for( int i = packetStart; i < packetEnd; ++i )
						int32_t L_141 = V_14;
						int32_t L_142 = V_7;
						if ((((int32_t)L_141) < ((int32_t)L_142)))
						{
							goto IL_021b_2;
						}
					}

IL_0269_2:
					{
						// packetStart = packetEnd;
						int32_t L_143 = V_7;
						V_6 = L_143;
					}

IL_026d_2:
					{
						// while( packetStart < pixels.Length )
						int32_t L_144 = V_6;
						Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_145 = V_3;
						NullCheck(L_145);
						if ((((int32_t)L_144) < ((int32_t)((int32_t)(((RuntimeArray*)L_145)->max_length)))))
						{
							goto IL_010f_2;
						}
					}

IL_0277_2:
					{
						// writer.Write( 0 );        // Offset of meta-information (not in use)
						BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_146 = V_2;
						NullCheck(L_146);
						VirtualActionInvoker1< int32_t >::Invoke(17 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_146, 0);
						// writer.Write( 0 );        // Offset of Developer-Area (not in use)
						BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_147 = V_2;
						NullCheck(L_147);
						VirtualActionInvoker1< int32_t >::Invoke(17 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_147, 0);
						// writer.Write( Footer );   // Signature
						BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_148 = V_2;
						il2cpp_codegen_runtime_class_init_inline(Texture2DEx_tC0E3140D8E9BC44B42583F1BCCECEF71A9A59150_il2cpp_TypeInfo_var);
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_149 = ((Texture2DEx_tC0E3140D8E9BC44B42583F1BCCECEF71A9A59150_StaticFields*)il2cpp_codegen_static_fields_for(Texture2DEx_tC0E3140D8E9BC44B42583F1BCCECEF71A9A59150_il2cpp_TypeInfo_var))->___Footer_0;
						NullCheck(L_148);
						VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(10 /* System.Void System.IO.BinaryWriter::Write(System.Byte[]) */, L_148, L_149);
						// }
						goto IL_029c_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_029c_1:
			{
				// return stream.ToArray();
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_150 = V_1;
				NullCheck(L_150);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_151;
				L_151 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(43 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_150);
				V_16 = L_151;
				goto IL_02b0;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_02b0:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_152 = V_16;
		return L_152;
	}
}
// System.Boolean AmplifyImpostors.Texture2DEx::Equals(UnityEngine.Color32,UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Texture2DEx_Equals_m7B16C4056E1DF7BC32706ECED858AC553E6A7659 (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___first0, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___second1, const RuntimeMethod* method) 
{
	{
		// return first.r == second.r && first.g == second.g && first.b == second.b && first.a == second.a;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = ___first0;
		uint8_t L_1 = L_0.___r_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_2 = ___second1;
		uint8_t L_3 = L_2.___r_1;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0039;
		}
	}
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_4 = ___first0;
		uint8_t L_5 = L_4.___g_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_6 = ___second1;
		uint8_t L_7 = L_6.___g_2;
		if ((!(((uint32_t)L_5) == ((uint32_t)L_7))))
		{
			goto IL_0039;
		}
	}
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_8 = ___first0;
		uint8_t L_9 = L_8.___b_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_10 = ___second1;
		uint8_t L_11 = L_10.___b_3;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_11))))
		{
			goto IL_0039;
		}
	}
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_12 = ___first0;
		uint8_t L_13 = L_12.___a_4;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_14 = ___second1;
		uint8_t L_15 = L_14.___a_4;
		return (bool)((((int32_t)L_13) == ((int32_t)L_15))? 1 : 0);
	}

IL_0039:
	{
		return (bool)0;
	}
}
// System.Void AmplifyImpostors.Texture2DEx::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2DEx__cctor_m30BD66F8DC563DDDE6751286D7B57D6008503849 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2DEx_tC0E3140D8E9BC44B42583F1BCCECEF71A9A59150_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tA06CB68372E283C085AA7A5F853F92FD6E118B87____E157F1250D3AD5BB797DB4766E316424315B66E1FBA23FE6C84F9966F2265CAD_0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly byte[] Footer = { 0x54, 0x52, 0x55, 0x45, 0x56, 0x49, 0x53, 0x49, 0x4F, 0x4E, 0x2D, 0x58, 0x46, 0x49, 0x4C, 0x45, 0x2E, 0x00 }; // TRUEVISION-XFILE.\0 signature (new TGA format)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)18));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tA06CB68372E283C085AA7A5F853F92FD6E118B87____E157F1250D3AD5BB797DB4766E316424315B66E1FBA23FE6C84F9966F2265CAD_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		((Texture2DEx_tC0E3140D8E9BC44B42583F1BCCECEF71A9A59150_StaticFields*)il2cpp_codegen_static_fields_for(Texture2DEx_tC0E3140D8E9BC44B42583F1BCCECEF71A9A59150_il2cpp_TypeInfo_var))->___Footer_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Texture2DEx_tC0E3140D8E9BC44B42583F1BCCECEF71A9A59150_StaticFields*)il2cpp_codegen_static_fields_for(Texture2DEx_tC0E3140D8E9BC44B42583F1BCCECEF71A9A59150_il2cpp_TypeInfo_var))->___Footer_0), (void*)L_1);
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
// System.Type AmplifyImpostors.SpriteUtilityEx::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* SpriteUtilityEx_get_Type_m88BEB114DB8D278C5AAF9689DD45D384122CCB3D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpriteUtilityEx_get_Type_m88BEB114DB8D278C5AAF9689DD45D384122CCB3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpriteUtilityEx_tAE1EBA72E33F74C27E6F0CD15EF301770DC178B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m80C621C4D91A89DDEE6D3DDF343925B30F99BC45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67FC3B1EFE258D885DE32E898CA3A66F99EDF90E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static System.Type Type { get { return ( type == null ) ? type = System.Type.GetType( "UnityEditor.Sprites.SpriteUtility, UnityEditor" ) : type; } }
		Type_t* L_0 = ((SpriteUtilityEx_tAE1EBA72E33F74C27E6F0CD15EF301770DC178B2_StaticFields*)il2cpp_codegen_static_fields_for(SpriteUtilityEx_tAE1EBA72E33F74C27E6F0CD15EF301770DC178B2_il2cpp_TypeInfo_var))->___type_0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_0, (Type_t*)NULL, NULL);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		Type_t* L_2 = ((SpriteUtilityEx_tAE1EBA72E33F74C27E6F0CD15EF301770DC178B2_StaticFields*)il2cpp_codegen_static_fields_for(SpriteUtilityEx_tAE1EBA72E33F74C27E6F0CD15EF301770DC178B2_il2cpp_TypeInfo_var))->___type_0;
		return L_2;
	}

IL_0013:
	{
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = il2cpp_codegen_get_type(_stringLiteral67FC3B1EFE258D885DE32E898CA3A66F99EDF90E, Type_GetType_m80C621C4D91A89DDEE6D3DDF343925B30F99BC45_RuntimeMethod_var, SpriteUtilityEx_get_Type_m88BEB114DB8D278C5AAF9689DD45D384122CCB3D_RuntimeMethod_var);
		Type_t* L_4 = L_3;
		((SpriteUtilityEx_tAE1EBA72E33F74C27E6F0CD15EF301770DC178B2_StaticFields*)il2cpp_codegen_static_fields_for(SpriteUtilityEx_tAE1EBA72E33F74C27E6F0CD15EF301770DC178B2_il2cpp_TypeInfo_var))->___type_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((SpriteUtilityEx_tAE1EBA72E33F74C27E6F0CD15EF301770DC178B2_StaticFields*)il2cpp_codegen_static_fields_for(SpriteUtilityEx_tAE1EBA72E33F74C27E6F0CD15EF301770DC178B2_il2cpp_TypeInfo_var))->___type_0), (void*)L_4);
		return L_4;
	}
}
// System.Void AmplifyImpostors.SpriteUtilityEx::GenerateOutline(UnityEngine.Texture2D,UnityEngine.Rect,System.Single,System.Byte,System.Boolean,UnityEngine.Vector2[][]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteUtilityEx_GenerateOutline_m4C89EA92F3720CB901100866A06393BAAC293913 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect1, float ___detail2, uint8_t ___alphaTolerance3, bool ___holeDetection4, Vector2U5BU5DU5BU5D_t02CC59651AB42ABB047B0391F32F881D7E7A0092** ___paths5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5DU5BU5D_t02CC59651AB42ABB047B0391F32F881D7E7A0092_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD096CB2DE3B9F333712C095AE4D157F87E643C9);
		s_Il2CppMethodInitialized = true;
	}
	Vector2U5BU5DU5BU5D_t02CC59651AB42ABB047B0391F32F881D7E7A0092* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	{
		// Vector2[][] opaths = new Vector2[ 0 ][];
		Vector2U5BU5DU5BU5D_t02CC59651AB42ABB047B0391F32F881D7E7A0092* L_0 = (Vector2U5BU5DU5BU5D_t02CC59651AB42ABB047B0391F32F881D7E7A0092*)(Vector2U5BU5DU5BU5D_t02CC59651AB42ABB047B0391F32F881D7E7A0092*)SZArrayNew(Vector2U5BU5DU5BU5D_t02CC59651AB42ABB047B0391F32F881D7E7A0092_il2cpp_TypeInfo_var, (uint32_t)0);
		V_0 = L_0;
		// object[] parameters = new object[] { texture, rect, detail, alphaTolerance, holeDetection, opaths };
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_3 = ___texture0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_5 = ___rect1;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_6 = L_5;
		RuntimeObject* L_7 = Box(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_4;
		float L_9 = ___detail2;
		float L_10 = L_9;
		RuntimeObject* L_11 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_8;
		uint8_t L_13 = ___alphaTolerance3;
		uint8_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_15);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_12;
		bool L_17 = ___holeDetection4;
		bool L_18 = L_17;
		RuntimeObject* L_19 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_19);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_16;
		Vector2U5BU5DU5BU5D_t02CC59651AB42ABB047B0391F32F881D7E7A0092* L_21 = V_0;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_21);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_21);
		V_1 = L_20;
		// MethodInfo method = Type.GetMethod( "GenerateOutline", BindingFlags.Static | BindingFlags.NonPublic );
		Type_t* L_22;
		L_22 = SpriteUtilityEx_get_Type_m88BEB114DB8D278C5AAF9689DD45D384122CCB3D(NULL);
		NullCheck(L_22);
		MethodInfo_t* L_23;
		L_23 = Type_GetMethod_m9E66B5053F150537A74C490C1DA5174A7875189D(L_22, _stringLiteralAD096CB2DE3B9F333712C095AE4D157F87E643C9, ((int32_t)40), NULL);
		// method.Invoke( null, parameters );
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = V_1;
		NullCheck(L_23);
		RuntimeObject* L_25;
		L_25 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_23, NULL, L_24, NULL);
		// paths = (Vector2[][])parameters[ 5 ];
		Vector2U5BU5DU5BU5D_t02CC59651AB42ABB047B0391F32F881D7E7A0092** L_26 = ___paths5;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_1;
		NullCheck(L_27);
		int32_t L_28 = 5;
		RuntimeObject* L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		*((RuntimeObject**)L_26) = (RuntimeObject*)((Vector2U5BU5DU5BU5D_t02CC59651AB42ABB047B0391F32F881D7E7A0092*)Castclass((RuntimeObject*)L_29, Vector2U5BU5DU5BU5D_t02CC59651AB42ABB047B0391F32F881D7E7A0092_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_26, (void*)(RuntimeObject*)((Vector2U5BU5DU5BU5D_t02CC59651AB42ABB047B0391F32F881D7E7A0092*)Castclass((RuntimeObject*)L_29, Vector2U5BU5DU5BU5D_t02CC59651AB42ABB047B0391F32F881D7E7A0092_il2cpp_TypeInfo_var)));
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
// UnityEngine.RenderTexture AmplifyImpostors.RenderTextureEx::GetTemporary(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* RenderTextureEx_GetTemporary_mE566FA17B00C1C748B6C71DE2015DB7735422EB5 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___renderTexture0, const RuntimeMethod* method) 
{
	{
		// return RenderTexture.GetTemporary( renderTexture.width, renderTexture.height, renderTexture.depth, renderTexture.format );
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = ___renderTexture0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = ___renderTexture0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_4 = ___renderTexture0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = RenderTexture_get_depth_mFF0403F4DE88EDEAD9A8C3D56FA5C4EEB0FDD305(L_4, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_6 = ___renderTexture0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = RenderTexture_get_format_m58556ABB91A1FADA8044BEEA2E8C55280768CF35(L_6, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_8;
		L_8 = RenderTexture_GetTemporary_mEB21705B78CAF6B8F1F6617453A8EE8A94498DE2(L_1, L_3, L_5, L_7, NULL);
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
// System.Single AmplifyImpostors.Vector2Ex::Cross(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2Ex_Cross_m6B7DFF570DEC9F8D39E7B40408722A9A676590D2 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___O0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___A1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___B2, const RuntimeMethod* method) 
{
	{
		// return ( A.x - O.x ) * ( B.y - O.y ) - ( A.y - O.y ) * ( B.x - O.x );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___A1;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___O0;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___B2;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___O0;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___A1;
		float L_9 = L_8.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___O0;
		float L_11 = L_10.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = ___B2;
		float L_13 = L_12.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = ___O0;
		float L_15 = L_14.___x_0;
		return ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_9, L_11)), ((float)il2cpp_codegen_subtract(L_13, L_15))))));
	}
}
// System.Single AmplifyImpostors.Vector2Ex::TriangleArea(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2Ex_TriangleArea_m5636808ADA571E4A08B0DE35CC1165701883E8A8 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___O0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___A1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___B2, const RuntimeMethod* method) 
{
	{
		// return Mathf.Abs( ( A.x - B.x ) * ( O.y - A.y ) - ( A.x - O.x ) * ( B.y - A.y ) ) * 0.5f;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___A1;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___B2;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___O0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___A1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___A1;
		float L_9 = L_8.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___O0;
		float L_11 = L_10.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = ___B2;
		float L_13 = L_12.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = ___A1;
		float L_15 = L_14.___y_1;
		float L_16;
		L_16 = fabsf(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_9, L_11)), ((float)il2cpp_codegen_subtract(L_13, L_15)))))));
		return ((float)il2cpp_codegen_multiply(L_16, (0.5f)));
	}
}
// System.Single AmplifyImpostors.Vector2Ex::TriangleArea(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2Ex_TriangleArea_mEDA95CE89139443AF9DF886041F856CC28D17FF9 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___O0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___A1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___B2, const RuntimeMethod* method) 
{
	{
		// return Mathf.Abs( ( A.x - B.x ) * ( O.y - A.y ) - ( A.x - O.x ) * ( B.y - A.y ) ) * 0.5f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___A1;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___B2;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___O0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___A1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___A1;
		float L_9 = L_8.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___O0;
		float L_11 = L_10.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___B2;
		float L_13 = L_12.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___A1;
		float L_15 = L_14.___y_3;
		float L_16;
		L_16 = fabsf(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_9, L_11)), ((float)il2cpp_codegen_subtract(L_13, L_15)))))));
		return ((float)il2cpp_codegen_multiply(L_16, (0.5f)));
	}
}
// UnityEngine.Vector2[] AmplifyImpostors.Vector2Ex::ConvexHull(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* Vector2Ex_ConvexHull_m3F5DCB24D8B364C01F246CE3B9EFE80BA97F9019 (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___P0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m1544A31070A94F187BC8B7B345E9958557DAEA57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Sort_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mC4B49058AD0FA6B4F0E0B8B28E28CE55F6D988FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparison_1_t30B79D9F5F84D1FC372D3727914E6F0CA6B42F65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CConvexHullU3Eb__3_0_m7D5AD1FDC54E7F74DD52302225578ACF552B11EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t5AA2192F2C3EF1E998258301FA66B029084AF095_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_2 = NULL;
	Comparison_1_t30B79D9F5F84D1FC372D3727914E6F0CA6B42F65* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Comparison_1_t30B79D9F5F84D1FC372D3727914E6F0CA6B42F65* G_B3_0 = NULL;
	Comparison_1_t30B79D9F5F84D1FC372D3727914E6F0CA6B42F65* G_B2_0 = NULL;
	{
		// if( P.Length > 1 )
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_0 = ___P0;
		NullCheck(L_0);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) <= ((int32_t)1)))
		{
			goto IL_00f9;
		}
	}
	{
		// int n = P.Length, k = 0;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_1 = ___P0;
		NullCheck(L_1);
		V_0 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		// int n = P.Length, k = 0;
		V_1 = 0;
		// Vector2[] H = new Vector2[ 2 * n ];
		int32_t L_2 = V_0;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_3 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(2, L_2)));
		V_2 = L_3;
		// Comparison<Vector2> comparison = new Comparison<Vector2>( ( a, b ) =>
		// {
		//     if( a.x == b.x )
		//         return a.y.CompareTo( b.y );
		//     else
		//         return a.x.CompareTo( b.x );
		// } );
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t5AA2192F2C3EF1E998258301FA66B029084AF095_il2cpp_TypeInfo_var);
		Comparison_1_t30B79D9F5F84D1FC372D3727914E6F0CA6B42F65* L_4 = ((U3CU3Ec_t5AA2192F2C3EF1E998258301FA66B029084AF095_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5AA2192F2C3EF1E998258301FA66B029084AF095_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_1;
		Comparison_1_t30B79D9F5F84D1FC372D3727914E6F0CA6B42F65* L_5 = L_4;
		G_B2_0 = L_5;
		if (L_5)
		{
			G_B3_0 = L_5;
			goto IL_0037;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t5AA2192F2C3EF1E998258301FA66B029084AF095_il2cpp_TypeInfo_var);
		U3CU3Ec_t5AA2192F2C3EF1E998258301FA66B029084AF095* L_6 = ((U3CU3Ec_t5AA2192F2C3EF1E998258301FA66B029084AF095_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5AA2192F2C3EF1E998258301FA66B029084AF095_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Comparison_1_t30B79D9F5F84D1FC372D3727914E6F0CA6B42F65* L_7 = (Comparison_1_t30B79D9F5F84D1FC372D3727914E6F0CA6B42F65*)il2cpp_codegen_object_new(Comparison_1_t30B79D9F5F84D1FC372D3727914E6F0CA6B42F65_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Comparison_1__ctor_m00B27E3ACB966A745A2A894A7CF0CA6AB4E66B4F(L_7, L_6, (intptr_t)((void*)U3CU3Ec_U3CConvexHullU3Eb__3_0_m7D5AD1FDC54E7F74DD52302225578ACF552B11EC_RuntimeMethod_var), NULL);
		Comparison_1_t30B79D9F5F84D1FC372D3727914E6F0CA6B42F65* L_8 = L_7;
		((U3CU3Ec_t5AA2192F2C3EF1E998258301FA66B029084AF095_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5AA2192F2C3EF1E998258301FA66B029084AF095_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t5AA2192F2C3EF1E998258301FA66B029084AF095_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5AA2192F2C3EF1E998258301FA66B029084AF095_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_1), (void*)L_8);
		G_B3_0 = L_8;
	}

IL_0037:
	{
		V_3 = G_B3_0;
		// Array.Sort<Vector2>( P, comparison );
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_9 = ___P0;
		Comparison_1_t30B79D9F5F84D1FC372D3727914E6F0CA6B42F65* L_10 = V_3;
		Array_Sort_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mC4B49058AD0FA6B4F0E0B8B28E28CE55F6D988FC(L_9, L_10, Array_Sort_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mC4B49058AD0FA6B4F0E0B8B28E28CE55F6D988FC_RuntimeMethod_var);
		// for( int i = 0; i < n; ++i )
		V_4 = 0;
		goto IL_008b;
	}

IL_0044:
	{
		// k--;
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
	}

IL_0048:
	{
		// while( k >= 2 && P[ i ].Cross( H[ k - 2 ], H[ k - 1 ] ) <= 0 )
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) < ((int32_t)2)))
		{
			goto IL_0072;
		}
	}
	{
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_13 = ___P0;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_17 = V_2;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = ((int32_t)il2cpp_codegen_subtract(L_18, 2));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_21 = V_2;
		int32_t L_22 = V_1;
		NullCheck(L_21);
		int32_t L_23 = ((int32_t)il2cpp_codegen_subtract(L_22, 1));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		float L_25;
		L_25 = Vector2Ex_Cross_m6B7DFF570DEC9F8D39E7B40408722A9A676590D2(L_16, L_20, L_24, NULL);
		if ((((float)L_25) <= ((float)(0.0f))))
		{
			goto IL_0044;
		}
	}

IL_0072:
	{
		// H[ k++ ] = P[ i ];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_26 = V_2;
		int32_t L_27 = V_1;
		int32_t L_28 = L_27;
		V_1 = ((int32_t)il2cpp_codegen_add(L_28, 1));
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_29 = ___P0;
		int32_t L_30 = V_4;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_32);
		// for( int i = 0; i < n; ++i )
		int32_t L_33 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_008b:
	{
		// for( int i = 0; i < n; ++i )
		int32_t L_34 = V_4;
		int32_t L_35 = V_0;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_0048;
		}
	}
	{
		// for( int i = n - 2, t = k + 1; i >= 0; i-- )
		int32_t L_36 = V_0;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_36, 2));
		// for( int i = n - 2, t = k + 1; i >= 0; i-- )
		int32_t L_37 = V_1;
		V_6 = ((int32_t)il2cpp_codegen_add(L_37, 1));
		goto IL_00e4;
	}

IL_009c:
	{
		// k--;
		int32_t L_38 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_00a0:
	{
		// while( k >= t && P[ i ].Cross( H[ k - 2 ], H[ k - 1 ] ) <= 0 )
		int32_t L_39 = V_1;
		int32_t L_40 = V_6;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_00cb;
		}
	}
	{
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_41 = ___P0;
		int32_t L_42 = V_5;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_45 = V_2;
		int32_t L_46 = V_1;
		NullCheck(L_45);
		int32_t L_47 = ((int32_t)il2cpp_codegen_subtract(L_46, 2));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_49 = V_2;
		int32_t L_50 = V_1;
		NullCheck(L_49);
		int32_t L_51 = ((int32_t)il2cpp_codegen_subtract(L_50, 1));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		float L_53;
		L_53 = Vector2Ex_Cross_m6B7DFF570DEC9F8D39E7B40408722A9A676590D2(L_44, L_48, L_52, NULL);
		if ((((float)L_53) <= ((float)(0.0f))))
		{
			goto IL_009c;
		}
	}

IL_00cb:
	{
		// H[ k++ ] = P[ i ];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_54 = V_2;
		int32_t L_55 = V_1;
		int32_t L_56 = L_55;
		V_1 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_57 = ___P0;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		int32_t L_59 = L_58;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		NullCheck(L_54);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(L_56), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_60);
		// for( int i = n - 2, t = k + 1; i >= 0; i-- )
		int32_t L_61 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_61, 1));
	}

IL_00e4:
	{
		// for( int i = n - 2, t = k + 1; i >= 0; i-- )
		int32_t L_62 = V_5;
		if ((((int32_t)L_62) >= ((int32_t)0)))
		{
			goto IL_00a0;
		}
	}
	{
		// if( k > 1 )
		int32_t L_63 = V_1;
		if ((((int32_t)L_63) <= ((int32_t)1)))
		{
			goto IL_00f7;
		}
	}
	{
		// Array.Resize<Vector2>( ref H, k - 1 );
		int32_t L_64 = V_1;
		Array_Resize_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m1544A31070A94F187BC8B7B345E9958557DAEA57((&V_2), ((int32_t)il2cpp_codegen_subtract(L_64, 1)), Array_Resize_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m1544A31070A94F187BC8B7B345E9958557DAEA57_RuntimeMethod_var);
	}

IL_00f7:
	{
		// return H;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_65 = V_2;
		return L_65;
	}

IL_00f9:
	{
		// else if( P.Length <= 1 )
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_66 = ___P0;
		NullCheck(L_66);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_66)->max_length))) > ((int32_t)1)))
		{
			goto IL_0101;
		}
	}
	{
		// return P;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_67 = ___P0;
		return L_67;
	}

IL_0101:
	{
		// return null;
		return (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)NULL;
	}
}
// UnityEngine.Vector2[] AmplifyImpostors.Vector2Ex::ScaleAlongNormals(UnityEngine.Vector2[],System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* Vector2Ex_ScaleAlongNormals_m622B47DD9726BAB1637B513D1A962E39015735FF (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___P0, float ___scaleAmount1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	{
		// Vector2[] normals = new Vector2[ P.Length ];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_0 = ___P0;
		NullCheck(L_0);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_1 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		V_0 = L_1;
		// for( int i = 0; i < normals.Length; i++ )
		V_1 = 0;
		goto IL_007d;
	}

IL_000d:
	{
		// int prev = i - 1;
		int32_t L_2 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		// int next = i + 1;
		int32_t L_3 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		// if( i == 0 )
		int32_t L_4 = V_1;
		if (L_4)
		{
			goto IL_001e;
		}
	}
	{
		// prev = P.Length - 1;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_5 = ___P0;
		NullCheck(L_5);
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_5)->max_length)), 1));
	}

IL_001e:
	{
		// if( i == P.Length - 1 )
		int32_t L_6 = V_1;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_7 = ___P0;
		NullCheck(L_7);
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), 1))))))
		{
			goto IL_0028;
		}
	}
	{
		// next = 0;
		V_3 = 0;
	}

IL_0028:
	{
		// Vector2 ba = P[ i ] - P[ prev ];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_8 = ___P0;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_12 = ___P0;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_11, L_15, NULL);
		V_4 = L_16;
		// Vector2 bc = P[ i ] - P[ next ];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_17 = ___P0;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_21 = ___P0;
		int32_t L_22 = V_3;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25;
		L_25 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_20, L_24, NULL);
		V_5 = L_25;
		// Vector2 normal = ( ba.normalized + bc.normalized ).normalized;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		L_26 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline((&V_4), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27;
		L_27 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline((&V_5), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		L_28 = Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline(L_26, L_27, NULL);
		V_7 = L_28;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29;
		L_29 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline((&V_7), NULL);
		V_6 = L_29;
		// normals[ i ] = normal;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_30 = V_0;
		int32_t L_31 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32 = V_6;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_32);
		// for( int i = 0; i < normals.Length; i++ )
		int32_t L_33 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_007d:
	{
		// for( int i = 0; i < normals.Length; i++ )
		int32_t L_34 = V_1;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_35 = V_0;
		NullCheck(L_35);
		if ((((int32_t)L_34) < ((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		// for( int i = 0; i < normals.Length; i++ )
		V_8 = 0;
		goto IL_00b1;
	}

IL_0088:
	{
		// P[ i ] = P[ i ] + normals[ i ] * scaleAmount;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_36 = ___P0;
		int32_t L_37 = V_8;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_38 = ___P0;
		int32_t L_39 = V_8;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_42 = V_0;
		int32_t L_43 = V_8;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		float L_46 = ___scaleAmount1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_47;
		L_47 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_45, L_46, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline(L_41, L_47, NULL);
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_48);
		// for( int i = 0; i < normals.Length; i++ )
		int32_t L_49 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_00b1:
	{
		// for( int i = 0; i < normals.Length; i++ )
		int32_t L_50 = V_8;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_51 = V_0;
		NullCheck(L_51);
		if ((((int32_t)L_50) < ((int32_t)((int32_t)(((RuntimeArray*)L_51)->max_length)))))
		{
			goto IL_0088;
		}
	}
	{
		// return P;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_52 = ___P0;
		return L_52;
	}
}
// UnityEngine.Vector2[] AmplifyImpostors.Vector2Ex::ReduceLeastSignificantVertice(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* Vector2Ex_ReduceLeastSignificantVertice_m0514351A829FE85A2F10F91D107E2CBE9C888DDA (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___P0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_FindAll_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m360F9A238A493AE524F17EFCE128B1FAD72EA20B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t7744EBE2271FC2C4CBF28703CF361AF669D73B95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3CReduceLeastSignificantVerticeU3Eb__0_m6DCF3F41AC63B55D529970E4641AC1A5A9EAFE13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_t83480A865FF4BA1AE0BC2DA5F0DDECF243A8C957_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass5_0_t83480A865FF4BA1AE0BC2DA5F0DDECF243A8C957* V_0 = NULL;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_8;
	memset((&V_8), 0, sizeof(V_8));
	float V_9 = 0.0f;
	{
		U3CU3Ec__DisplayClass5_0_t83480A865FF4BA1AE0BC2DA5F0DDECF243A8C957* L_0 = (U3CU3Ec__DisplayClass5_0_t83480A865FF4BA1AE0BC2DA5F0DDECF243A8C957*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_t83480A865FF4BA1AE0BC2DA5F0DDECF243A8C957_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass5_0__ctor_m2289A4F754618E86E7DC0A7B1BF8B75911953E70(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass5_0_t83480A865FF4BA1AE0BC2DA5F0DDECF243A8C957* L_1 = V_0;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_2 = ___P0;
		NullCheck(L_1);
		L_1->___P_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___P_0), (void*)L_2);
		// float currentArea = 0;
		V_1 = (0.0f);
		// int smallestIndex = 0;
		U3CU3Ec__DisplayClass5_0_t83480A865FF4BA1AE0BC2DA5F0DDECF243A8C957* L_3 = V_0;
		NullCheck(L_3);
		L_3->___smallestIndex_1 = 0;
		// int replacementIndex = 0;
		V_2 = 0;
		// Vector2 newPos = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		V_3 = L_4;
		// for( int i = 0; i < P.Length; i++ )
		V_4 = 0;
		goto IL_0183;
	}

IL_002a:
	{
		// int next = i + 1;
		int32_t L_5 = V_4;
		V_5 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		// int upNext = i + 2;
		int32_t L_6 = V_4;
		V_6 = ((int32_t)il2cpp_codegen_add(L_6, 2));
		// int finalNext = i + 3;
		int32_t L_7 = V_4;
		V_7 = ((int32_t)il2cpp_codegen_add(L_7, 3));
		// if( next >= P.Length )
		int32_t L_8 = V_5;
		U3CU3Ec__DisplayClass5_0_t83480A865FF4BA1AE0BC2DA5F0DDECF243A8C957* L_9 = V_0;
		NullCheck(L_9);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_10 = L_9->___P_0;
		NullCheck(L_10);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_0055;
		}
	}
	{
		// next -= P.Length;
		int32_t L_11 = V_5;
		U3CU3Ec__DisplayClass5_0_t83480A865FF4BA1AE0BC2DA5F0DDECF243A8C957* L_12 = V_0;
		NullCheck(L_12);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_13 = L_12->___P_0;
		NullCheck(L_13);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_11, ((int32_t)(((RuntimeArray*)L_13)->max_length))));
	}

IL_0055:
	{
		// if( upNext >= P.Length )
		int32_t L_14 = V_6;
		U3CU3Ec__DisplayClass5_0_t83480A865FF4BA1AE0BC2DA5F0DDECF243A8C957* L_15 = V_0;
		NullCheck(L_15);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_16 = L_15->___P_0;
		NullCheck(L_16);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_006e;
		}
	}
	{
		// upNext -= P.Length;
		int32_t L_17 = V_6;
		U3CU3Ec__DisplayClass5_0_t83480A865FF4BA1AE0BC2DA5F0DDECF243A8C957* L_18 = V_0;
		NullCheck(L_18);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_19 = L_18->___P_0;
		NullCheck(L_19);
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_17, ((int32_t)(((RuntimeArray*)L_19)->max_length))));
	}

IL_006e:
	{
		// if( finalNext >= P.Length )
		int32_t L_20 = V_7;
		U3CU3Ec__DisplayClass5_0_t83480A865FF4BA1AE0BC2DA5F0DDECF243A8C957* L_21 = V_0;
		NullCheck(L_21);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_22 = L_21->___P_0;
		NullCheck(L_22);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0087;
		}
	}
	{
		// finalNext -= P.Length;
		int32_t L_23 = V_7;
		U3CU3Ec__DisplayClass5_0_t83480A865FF4BA1AE0BC2DA5F0DDECF243A8C957* L_24 = V_0;
		NullCheck(L_24);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_25 = L_24->___P_0;
		NullCheck(L_25);
		V_7 = ((int32_t)il2cpp_codegen_subtract(L_23, ((int32_t)(((RuntimeArray*)L_25)->max_length))));
	}

IL_0087:
	{
		// Vector2 intersect = GetIntersectionPointCoordinates( P[ i ], P[ next ], P[ upNext ], P[ finalNext ] );
		U3CU3Ec__DisplayClass5_0_t83480A865FF4BA1AE0BC2DA5F0DDECF243A8C957* L_26 = V_0;
		NullCheck(L_26);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_27 = L_26->___P_0;
		int32_t L_28 = V_4;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		U3CU3Ec__DisplayClass5_0_t83480A865FF4BA1AE0BC2DA5F0DDECF243A8C957* L_31 = V_0;
		NullCheck(L_31);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_32 = L_31->___P_0;
		int32_t L_33 = V_5;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		U3CU3Ec__DisplayClass5_0_t83480A865FF4BA1AE0BC2DA5F0DDECF243A8C957* L_36 = V_0;
		NullCheck(L_36);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_37 = L_36->___P_0;
		int32_t L_38 = V_6;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		U3CU3Ec__DisplayClass5_0_t83480A865FF4BA1AE0BC2DA5F0DDECF243A8C957* L_41 = V_0;
		NullCheck(L_41);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_42 = L_41->___P_0;
		int32_t L_43 = V_7;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_46;
		L_46 = Vector2Ex_GetIntersectionPointCoordinates_m02BA444FBF77C4D4471D5334E73AE5ED90759104(L_30, L_35, L_40, L_45, NULL);
		V_8 = L_46;
		// if( i == 0 )
		int32_t L_47 = V_4;
		if (L_47)
		{
			goto IL_0116;
		}
	}
	{
		// currentArea = intersect.TriangleArea( P[ next ], P[ upNext ] );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48 = V_8;
		U3CU3Ec__DisplayClass5_0_t83480A865FF4BA1AE0BC2DA5F0DDECF243A8C957* L_49 = V_0;
		NullCheck(L_49);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_50 = L_49->___P_0;
		int32_t L_51 = V_5;
		NullCheck(L_50);
		int32_t L_52 = L_51;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		U3CU3Ec__DisplayClass5_0_t83480A865FF4BA1AE0BC2DA5F0DDECF243A8C957* L_54 = V_0;
		NullCheck(L_54);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_55 = L_54->___P_0;
		int32_t L_56 = V_6;
		NullCheck(L_55);
		int32_t L_57 = L_56;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		float L_59;
		L_59 = Vector2Ex_TriangleArea_m5636808ADA571E4A08B0DE35CC1165701883E8A8(L_48, L_53, L_58, NULL);
		V_1 = L_59;
		// if( OutsideBounds( intersect ) > 0 )
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_60 = V_8;
		float L_61;
		L_61 = Vector2Ex_OutsideBounds_mA331BDC16E52CE3F585896AB889896C4228E140C(L_60, NULL);
		if ((!(((float)L_61) > ((float)(0.0f)))))
		{
			goto IL_0106;
		}
	}
	{
		// currentArea = currentArea + OutsideBounds( intersect ) * 1;
		float L_62 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_63 = V_8;
		float L_64;
		L_64 = Vector2Ex_OutsideBounds_mA331BDC16E52CE3F585896AB889896C4228E140C(L_63, NULL);
		V_1 = ((float)il2cpp_codegen_add(L_62, ((float)il2cpp_codegen_multiply(L_64, (1.0f)))));
	}

IL_0106:
	{
		// smallestIndex = next;
		U3CU3Ec__DisplayClass5_0_t83480A865FF4BA1AE0BC2DA5F0DDECF243A8C957* L_65 = V_0;
		int32_t L_66 = V_5;
		NullCheck(L_65);
		L_65->___smallestIndex_1 = L_66;
		// replacementIndex = upNext;
		int32_t L_67 = V_6;
		V_2 = L_67;
		// newPos = intersect;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_68 = V_8;
		V_3 = L_68;
		goto IL_017d;
	}

IL_0116:
	{
		// float newArea = intersect.TriangleArea( P[ next ], P[ upNext ] );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_8;
		U3CU3Ec__DisplayClass5_0_t83480A865FF4BA1AE0BC2DA5F0DDECF243A8C957* L_70 = V_0;
		NullCheck(L_70);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_71 = L_70->___P_0;
		int32_t L_72 = V_5;
		NullCheck(L_71);
		int32_t L_73 = L_72;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		U3CU3Ec__DisplayClass5_0_t83480A865FF4BA1AE0BC2DA5F0DDECF243A8C957* L_75 = V_0;
		NullCheck(L_75);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_76 = L_75->___P_0;
		int32_t L_77 = V_6;
		NullCheck(L_76);
		int32_t L_78 = L_77;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		float L_80;
		L_80 = Vector2Ex_TriangleArea_m5636808ADA571E4A08B0DE35CC1165701883E8A8(L_69, L_74, L_79, NULL);
		V_9 = L_80;
		// if( OutsideBounds( intersect ) > 0 )
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_81 = V_8;
		float L_82;
		L_82 = Vector2Ex_OutsideBounds_mA331BDC16E52CE3F585896AB889896C4228E140C(L_81, NULL);
		if ((!(((float)L_82) > ((float)(0.0f)))))
		{
			goto IL_0159;
		}
	}
	{
		// newArea = newArea + OutsideBounds( intersect ) * 1;
		float L_83 = V_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_84 = V_8;
		float L_85;
		L_85 = Vector2Ex_OutsideBounds_mA331BDC16E52CE3F585896AB889896C4228E140C(L_84, NULL);
		V_9 = ((float)il2cpp_codegen_add(L_83, ((float)il2cpp_codegen_multiply(L_85, (1.0f)))));
	}

IL_0159:
	{
		// if( newArea < currentArea && OutsideBounds( intersect ) <= 0 )
		float L_86 = V_9;
		float L_87 = V_1;
		if ((!(((float)L_86) < ((float)L_87))))
		{
			goto IL_017d;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_88 = V_8;
		float L_89;
		L_89 = Vector2Ex_OutsideBounds_mA331BDC16E52CE3F585896AB889896C4228E140C(L_88, NULL);
		if ((!(((float)L_89) <= ((float)(0.0f)))))
		{
			goto IL_017d;
		}
	}
	{
		// currentArea = newArea;
		float L_90 = V_9;
		V_1 = L_90;
		// smallestIndex = next;
		U3CU3Ec__DisplayClass5_0_t83480A865FF4BA1AE0BC2DA5F0DDECF243A8C957* L_91 = V_0;
		int32_t L_92 = V_5;
		NullCheck(L_91);
		L_91->___smallestIndex_1 = L_92;
		// replacementIndex = upNext;
		int32_t L_93 = V_6;
		V_2 = L_93;
		// newPos = intersect;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_94 = V_8;
		V_3 = L_94;
	}

IL_017d:
	{
		// for( int i = 0; i < P.Length; i++ )
		int32_t L_95 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_95, 1));
	}

IL_0183:
	{
		// for( int i = 0; i < P.Length; i++ )
		int32_t L_96 = V_4;
		U3CU3Ec__DisplayClass5_0_t83480A865FF4BA1AE0BC2DA5F0DDECF243A8C957* L_97 = V_0;
		NullCheck(L_97);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_98 = L_97->___P_0;
		NullCheck(L_98);
		if ((((int32_t)L_96) < ((int32_t)((int32_t)(((RuntimeArray*)L_98)->max_length)))))
		{
			goto IL_002a;
		}
	}
	{
		// P[ replacementIndex ] = newPos;
		U3CU3Ec__DisplayClass5_0_t83480A865FF4BA1AE0BC2DA5F0DDECF243A8C957* L_99 = V_0;
		NullCheck(L_99);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_100 = L_99->___P_0;
		int32_t L_101 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = V_3;
		NullCheck(L_100);
		(L_100)->SetAt(static_cast<il2cpp_array_size_t>(L_101), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_102);
		// return Array.FindAll<Vector2>( P, x => Array.IndexOf( P, x ) != smallestIndex );
		U3CU3Ec__DisplayClass5_0_t83480A865FF4BA1AE0BC2DA5F0DDECF243A8C957* L_103 = V_0;
		NullCheck(L_103);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_104 = L_103->___P_0;
		U3CU3Ec__DisplayClass5_0_t83480A865FF4BA1AE0BC2DA5F0DDECF243A8C957* L_105 = V_0;
		Predicate_1_t7744EBE2271FC2C4CBF28703CF361AF669D73B95* L_106 = (Predicate_1_t7744EBE2271FC2C4CBF28703CF361AF669D73B95*)il2cpp_codegen_object_new(Predicate_1_t7744EBE2271FC2C4CBF28703CF361AF669D73B95_il2cpp_TypeInfo_var);
		NullCheck(L_106);
		Predicate_1__ctor_mFBDD941A383278B84BD8E0B75B1D3C9E9D46238B(L_106, L_105, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3CReduceLeastSignificantVerticeU3Eb__0_m6DCF3F41AC63B55D529970E4641AC1A5A9EAFE13_RuntimeMethod_var), NULL);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_107;
		L_107 = Array_FindAll_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m360F9A238A493AE524F17EFCE128B1FAD72EA20B(L_104, L_106, Array_FindAll_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m360F9A238A493AE524F17EFCE128B1FAD72EA20B_RuntimeMethod_var);
		return L_107;
	}
}
// UnityEngine.Vector2[] AmplifyImpostors.Vector2Ex::ReduceVertices(UnityEngine.Vector2[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* Vector2Ex_ReduceVertices_m5DC8BBEA77ABF8AAD3456BC255DB4FD59BD631DA (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___P0, int32_t ___maxVertices1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// if( maxVertices == 4 )
		int32_t L_0 = ___maxVertices1;
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_0132;
		}
	}
	{
		// Rect newBox = new Rect( P[ 0 ].x, P[ 0 ].y, 0f, 0f );
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_1 = ___P0;
		NullCheck(L_1);
		float L_2 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___x_0;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_3 = ___P0;
		NullCheck(L_3);
		float L_4 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___y_1;
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_0), L_2, L_4, (0.0f), (0.0f), NULL);
		// for( int i = 0; i < P.Length; i++ )
		V_1 = 0;
		goto IL_00b7;
	}

IL_0037:
	{
		// newBox.xMin = Mathf.Min( newBox.xMin, P[ i ].x );
		float L_5;
		L_5 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D((&V_0), NULL);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_6 = ___P0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		float L_8 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___x_0;
		float L_9;
		L_9 = Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline(L_5, L_8, NULL);
		Rect_set_xMin_mA873FCFAF9EABA46A026B73CA045192DF1946F19((&V_0), L_9, NULL);
		// newBox.xMax = Mathf.Max( newBox.xMax, P[ i ].x );
		float L_10;
		L_10 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F((&V_0), NULL);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_11 = ___P0;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		float L_13 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->___x_0;
		float L_14;
		L_14 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_10, L_13, NULL);
		Rect_set_xMax_m97C28D468455A6D19325D0D862E80A093240D49D((&V_0), L_14, NULL);
		// newBox.yMin = Mathf.Min( newBox.yMin, P[ i ].y );
		float L_15;
		L_15 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F((&V_0), NULL);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_16 = ___P0;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		float L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___y_1;
		float L_19;
		L_19 = Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline(L_15, L_18, NULL);
		Rect_set_yMin_m9F780E509B9215A9E5826178CF664BD0E486D4EE((&V_0), L_19, NULL);
		// newBox.yMax = Mathf.Max( newBox.yMax, P[ i ].y );
		float L_20;
		L_20 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E((&V_0), NULL);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_21 = ___P0;
		int32_t L_22 = V_1;
		NullCheck(L_21);
		float L_23 = ((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)))->___y_1;
		float L_24;
		L_24 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_20, L_23, NULL);
		Rect_set_yMax_mCF452040E0068A4B3CB15994C0B4B6AD4D78E04B((&V_0), L_24, NULL);
		// for( int i = 0; i < P.Length; i++ )
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_00b7:
	{
		// for( int i = 0; i < P.Length; i++ )
		int32_t L_26 = V_1;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_27 = ___P0;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length)))))
		{
			goto IL_0037;
		}
	}
	{
		// P = new Vector2[]
		// {
		//     new Vector2(newBox.xMin, newBox.yMin),
		//     new Vector2(newBox.xMax, newBox.yMin),
		//     new Vector2(newBox.xMax, newBox.yMax),
		//     new Vector2(newBox.xMin, newBox.yMax),
		// };
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_28 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)4);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_29 = L_28;
		float L_30;
		L_30 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D((&V_0), NULL);
		float L_31;
		L_31 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_32), L_30, L_31, /*hidden argument*/NULL);
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_32);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_33 = L_29;
		float L_34;
		L_34 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F((&V_0), NULL);
		float L_35;
		L_35 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_36), L_34, L_35, /*hidden argument*/NULL);
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_36);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_37 = L_33;
		float L_38;
		L_38 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F((&V_0), NULL);
		float L_39;
		L_39 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40;
		memset((&L_40), 0, sizeof(L_40));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_40), L_38, L_39, /*hidden argument*/NULL);
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_40);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_41 = L_37;
		float L_42;
		L_42 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D((&V_0), NULL);
		float L_43;
		L_43 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), L_42, L_43, /*hidden argument*/NULL);
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_44);
		___P0 = L_41;
		goto IL_0152;
	}

IL_0132:
	{
		// int reduction = Math.Max( 0, P.Length - maxVertices );
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_45 = ___P0;
		NullCheck(L_45);
		int32_t L_46 = ___maxVertices1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_47;
		L_47 = Math_Max_m830F00B616D7A2130E46E974DFB27E9DA7FE30E5(0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_45)->max_length)), L_46)), NULL);
		V_2 = L_47;
		// for( int k = 0; k < reduction; k++ )
		V_3 = 0;
		goto IL_014e;
	}

IL_0142:
	{
		// P = ReduceLeastSignificantVertice( P );
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_48 = ___P0;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_49;
		L_49 = Vector2Ex_ReduceLeastSignificantVertice_m0514351A829FE85A2F10F91D107E2CBE9C888DDA(L_48, NULL);
		___P0 = L_49;
		// for( int k = 0; k < reduction; k++ )
		int32_t L_50 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_50, 1));
	}

IL_014e:
	{
		// for( int k = 0; k < reduction; k++ )
		int32_t L_51 = V_3;
		int32_t L_52 = V_2;
		if ((((int32_t)L_51) < ((int32_t)L_52)))
		{
			goto IL_0142;
		}
	}

IL_0152:
	{
		// return P;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_53 = ___P0;
		return L_53;
	}
}
// UnityEngine.Vector2 AmplifyImpostors.Vector2Ex::GetIntersectionPointCoordinates(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2Ex_GetIntersectionPointCoordinates_m02BA444FBF77C4D4471D5334E73AE5ED90759104 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___A10, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___A21, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___B12, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___B23, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float tmp = ( B2.x - B1.x ) * ( A2.y - A1.y ) - ( B2.y - B1.y ) * ( A2.x - A1.x );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___B23;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___B12;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___A21;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___A10;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___B23;
		float L_9 = L_8.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___B12;
		float L_11 = L_10.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = ___A21;
		float L_13 = L_12.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = ___A10;
		float L_15 = L_14.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_9, L_11)), ((float)il2cpp_codegen_subtract(L_13, L_15))))));
		// if( tmp == 0 )
		float L_16 = V_0;
		if ((!(((float)L_16) == ((float)(0.0f)))))
		{
			goto IL_007f;
		}
	}
	{
		// return ( ( Vector2.Lerp( A2, B1, 0.5f ) - ( Vector2.one * 0.5f ) ) * 1000 ) + ( Vector2.one * 500f );//Vector2.positiveInfinity;// Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = ___A21;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = ___B12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_Lerp_mF3BD6827807680A529E800FD027734D40A3597E1_inline(L_17, L_18, (0.5f), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = Vector2_get_one_m232E885D3C7BB6A96D5FEF4494709BA170447604_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		L_21 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_20, (0.5f), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		L_22 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_19, L_21, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_22, (1000.0f), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
		L_24 = Vector2_get_one_m232E885D3C7BB6A96D5FEF4494709BA170447604_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25;
		L_25 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_24, (500.0f), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		L_26 = Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline(L_23, L_25, NULL);
		return L_26;
	}

IL_007f:
	{
		// float mu = ( ( A1.x - B1.x ) * ( A2.y - A1.y ) - ( A1.y - B1.y ) * ( A2.x - A1.x ) ) / tmp;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = ___A10;
		float L_28 = L_27.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29 = ___B12;
		float L_30 = L_29.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31 = ___A21;
		float L_32 = L_31.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33 = ___A10;
		float L_34 = L_33.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35 = ___A10;
		float L_36 = L_35.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37 = ___B12;
		float L_38 = L_37.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39 = ___A21;
		float L_40 = L_39.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_41 = ___A10;
		float L_42 = L_41.___x_0;
		float L_43 = V_0;
		V_1 = ((float)(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_28, L_30)), ((float)il2cpp_codegen_subtract(L_32, L_34)))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_36, L_38)), ((float)il2cpp_codegen_subtract(L_40, L_42))))))/L_43));
		// return new Vector2(
		//     B1.x + ( B2.x - B1.x ) * mu,
		//     B1.y + ( B2.y - B1.y ) * mu
		// );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44 = ___B12;
		float L_45 = L_44.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_46 = ___B23;
		float L_47 = L_46.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48 = ___B12;
		float L_49 = L_48.___x_0;
		float L_50 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_51 = ___B12;
		float L_52 = L_51.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_53 = ___B23;
		float L_54 = L_53.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_55 = ___B12;
		float L_56 = L_55.___y_1;
		float L_57 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_58), ((float)il2cpp_codegen_add(L_45, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_47, L_49)), L_50)))), ((float)il2cpp_codegen_add(L_52, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_54, L_56)), L_57)))), /*hidden argument*/NULL);
		return L_58;
	}
}
// System.Single AmplifyImpostors.Vector2Ex::OutsideBounds(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2Ex_OutsideBounds_mA331BDC16E52CE3F585896AB889896C4228E140C (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___P0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// P = P - ( Vector2.one * 0.5f );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___P0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_get_one_m232E885D3C7BB6A96D5FEF4494709BA170447604_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_1, (0.5f), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_0, L_2, NULL);
		___P0 = L_3;
		// float vert = Mathf.Clamp01( Mathf.Abs( P.y ) - 0.5f );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___P0;
		float L_5 = L_4.___y_1;
		float L_6;
		L_6 = fabsf(L_5);
		float L_7;
		L_7 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(((float)il2cpp_codegen_subtract(L_6, (0.5f))), NULL);
		V_0 = L_7;
		// float hori = Mathf.Clamp01( Mathf.Abs( P.x ) - 0.5f );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___P0;
		float L_9 = L_8.___x_0;
		float L_10;
		L_10 = fabsf(L_9);
		float L_11;
		L_11 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(((float)il2cpp_codegen_subtract(L_10, (0.5f))), NULL);
		// return hori + vert;
		float L_12 = V_0;
		return ((float)il2cpp_codegen_add(L_11, L_12));
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
// System.Void AmplifyImpostors.Vector2Ex/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m8B3FCD15F0332C0CD117D54A27E6C61D3A7A0AB8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t5AA2192F2C3EF1E998258301FA66B029084AF095_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t5AA2192F2C3EF1E998258301FA66B029084AF095* L_0 = (U3CU3Ec_t5AA2192F2C3EF1E998258301FA66B029084AF095*)il2cpp_codegen_object_new(U3CU3Ec_t5AA2192F2C3EF1E998258301FA66B029084AF095_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m28EA3554DD59C4E417619505425AE5FCB44E2691(L_0, NULL);
		((U3CU3Ec_t5AA2192F2C3EF1E998258301FA66B029084AF095_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5AA2192F2C3EF1E998258301FA66B029084AF095_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t5AA2192F2C3EF1E998258301FA66B029084AF095_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5AA2192F2C3EF1E998258301FA66B029084AF095_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void AmplifyImpostors.Vector2Ex/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m28EA3554DD59C4E417619505425AE5FCB44E2691 (U3CU3Ec_t5AA2192F2C3EF1E998258301FA66B029084AF095* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 AmplifyImpostors.Vector2Ex/<>c::<ConvexHull>b__3_0(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CConvexHullU3Eb__3_0_m7D5AD1FDC54E7F74DD52302225578ACF552B11EC (U3CU3Ec_t5AA2192F2C3EF1E998258301FA66B029084AF095* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	{
		// if( a.x == b.x )
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		if ((!(((float)L_1) == ((float)L_3))))
		{
			goto IL_0021;
		}
	}
	{
		// return a.y.CompareTo( b.y );
		float* L_4 = (&(&___a0)->___y_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___b1;
		float L_6 = L_5.___y_1;
		int32_t L_7;
		L_7 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_4, L_6, NULL);
		return L_7;
	}

IL_0021:
	{
		// return a.x.CompareTo( b.x );
		float* L_8 = (&(&___a0)->___x_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___b1;
		float L_10 = L_9.___x_0;
		int32_t L_11;
		L_11 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_8, L_10, NULL);
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
// System.Void AmplifyImpostors.Vector2Ex/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m2289A4F754618E86E7DC0A7B1BF8B75911953E70 (U3CU3Ec__DisplayClass5_0_t83480A865FF4BA1AE0BC2DA5F0DDECF243A8C957* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean AmplifyImpostors.Vector2Ex/<>c__DisplayClass5_0::<ReduceLeastSignificantVertice>b__0(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass5_0_U3CReduceLeastSignificantVerticeU3Eb__0_m6DCF3F41AC63B55D529970E4641AC1A5A9EAFE13 (U3CU3Ec__DisplayClass5_0_t83480A865FF4BA1AE0BC2DA5F0DDECF243A8C957* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_IndexOf_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mB22ACA25FDC85004C7264DA6FE3AB3C2355417D4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Array.FindAll<Vector2>( P, x => Array.IndexOf( P, x ) != smallestIndex );
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_0 = __this->___P_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___x0;
		int32_t L_2;
		L_2 = Array_IndexOf_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mB22ACA25FDC85004C7264DA6FE3AB3C2355417D4(L_0, L_1, Array_IndexOf_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mB22ACA25FDC85004C7264DA6FE3AB3C2355417D4_RuntimeMethod_var);
		int32_t L_3 = __this->___smallestIndex_1;
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
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
// System.Void AmplifyImpostors.ImpostorBakingTools::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImpostorBakingTools__cctor_m0E94A0605A1CDC05B7ABEA63BA658EC8A2B39C68 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral173972C42ADBABD3115E67AA407F725C56F5B044);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A05286D8BF9B4FE1D0593DFD446582B7D71C8D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A6FA1DA252FEC9A3786ABE380086A0FE61D1697);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C7842F39CAFA5406A2F9A0F557D8D8667F9798A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C7B9222D9F376215CB65708C03B0CF20272C229);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F2F71323EE1C823062888821810540F23561E8A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6320D23BA8D529632E72998CCD0FE8627FB267E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral657E6CBF491350BE05C2BD10E4D61DEA801744C2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F531D4DFC1D00512035C60D81C733914A3E9FC0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81943B70956ECCD22D7491A919E6BE30E1EEFFE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral918EAAC3063A7B4BF82DBA25562B975C5F712D6C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral936602A478A63146F6EF71635039909217F66F00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0FED56C1FB93B8FFC56FEA9C03F3C74F92D809A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8F82C0C2397173589D92E3D439EC75AEBB603F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralABF796D94D594BC965F5370898DD45DC98E42503);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB971F925ED49B82BC09040ED59ECF4780469122F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD57B1939B6E2F4CAFC224B8EB311A24A3B33563);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE1C317FB05D738347D176BE79342CE7C8379A82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE49805E8C78E82F62CEC1B2C378C4DDF1796E9FC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE87636BB81B4F627EB9DB4762BCF85812B1DC2B4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF9849C4BB8B75A005F8BD6AD0B3C421A586A13B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF257F125A2F6B5D2A2A29FCAA536931C125AF6B3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly string PrefGlobalFolder = "IMPOSTORS_GLOBALFOLDER";
		((ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_StaticFields*)il2cpp_codegen_static_fields_for(ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_il2cpp_TypeInfo_var))->___PrefGlobalFolder_0 = _stringLiteralABF796D94D594BC965F5370898DD45DC98E42503;
		Il2CppCodeGenWriteBarrier((void**)(&((ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_StaticFields*)il2cpp_codegen_static_fields_for(ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_il2cpp_TypeInfo_var))->___PrefGlobalFolder_0), (void*)_stringLiteralABF796D94D594BC965F5370898DD45DC98E42503);
		// public static readonly string PrefGlobalRelativeFolder = "IMPOSTORS_GLOBALRELATIVEFOLDER";
		((ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_StaticFields*)il2cpp_codegen_static_fields_for(ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_il2cpp_TypeInfo_var))->___PrefGlobalRelativeFolder_1 = _stringLiteralB971F925ED49B82BC09040ED59ECF4780469122F;
		Il2CppCodeGenWriteBarrier((void**)(&((ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_StaticFields*)il2cpp_codegen_static_fields_for(ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_il2cpp_TypeInfo_var))->___PrefGlobalRelativeFolder_1), (void*)_stringLiteralB971F925ED49B82BC09040ED59ECF4780469122F);
		// public static readonly string PrefGlobalDefault = "IMPOSTORS_GLOBALDEFAULT";
		((ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_StaticFields*)il2cpp_codegen_static_fields_for(ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_il2cpp_TypeInfo_var))->___PrefGlobalDefault_2 = _stringLiteralA0FED56C1FB93B8FFC56FEA9C03F3C74F92D809A;
		Il2CppCodeGenWriteBarrier((void**)(&((ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_StaticFields*)il2cpp_codegen_static_fields_for(ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_il2cpp_TypeInfo_var))->___PrefGlobalDefault_2), (void*)_stringLiteralA0FED56C1FB93B8FFC56FEA9C03F3C74F92D809A);
		// public static readonly string PrefGlobalTexImport = "IMPOSTORS_GLOBALTEXIMPORT";
		((ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_StaticFields*)il2cpp_codegen_static_fields_for(ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_il2cpp_TypeInfo_var))->___PrefGlobalTexImport_3 = _stringLiteral2A05286D8BF9B4FE1D0593DFD446582B7D71C8D1;
		Il2CppCodeGenWriteBarrier((void**)(&((ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_StaticFields*)il2cpp_codegen_static_fields_for(ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_il2cpp_TypeInfo_var))->___PrefGlobalTexImport_3), (void*)_stringLiteral2A05286D8BF9B4FE1D0593DFD446582B7D71C8D1);
		// public static readonly string PrefGlobalCreateLodGroup = "IMPOSTORS_GLOBALCREATELODGROUP ";
		((ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_StaticFields*)il2cpp_codegen_static_fields_for(ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_il2cpp_TypeInfo_var))->___PrefGlobalCreateLodGroup_4 = _stringLiteral7F531D4DFC1D00512035C60D81C733914A3E9FC0;
		Il2CppCodeGenWriteBarrier((void**)(&((ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_StaticFields*)il2cpp_codegen_static_fields_for(ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_il2cpp_TypeInfo_var))->___PrefGlobalCreateLodGroup_4), (void*)_stringLiteral7F531D4DFC1D00512035C60D81C733914A3E9FC0);
		// public static readonly string PrefGlobalGBuffer0Name = "IMPOSTORS_GLOBALGBUFFER0SUFFIX";
		((ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_StaticFields*)il2cpp_codegen_static_fields_for(ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_il2cpp_TypeInfo_var))->___PrefGlobalGBuffer0Name_5 = _stringLiteral5F2F71323EE1C823062888821810540F23561E8A;
		Il2CppCodeGenWriteBarrier((void**)(&((ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_StaticFields*)il2cpp_codegen_static_fields_for(ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_il2cpp_TypeInfo_var))->___PrefGlobalGBuffer0Name_5), (void*)_stringLiteral5F2F71323EE1C823062888821810540F23561E8A);
		// public static readonly string PrefGlobalGBuffer1Name = "IMPOSTORS_GLOBALGBUFFER1SUFFIX";
		((ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_StaticFields*)il2cpp_codegen_static_fields_for(ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_il2cpp_TypeInfo_var))->___PrefGlobalGBuffer1Name_6 = _stringLiteral4A6FA1DA252FEC9A3786ABE380086A0FE61D1697;
		Il2CppCodeGenWriteBarrier((void**)(&((ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_StaticFields*)il2cpp_codegen_static_fields_for(ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_il2cpp_TypeInfo_var))->___PrefGlobalGBuffer1Name_6), (void*)_stringLiteral4A6FA1DA252FEC9A3786ABE380086A0FE61D1697);
		// public static readonly string PrefGlobalGBuffer2Name = "IMPOSTORS_GLOBALGBUFFER2SUFFIX";
		((ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_StaticFields*)il2cpp_codegen_static_fields_for(ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_il2cpp_TypeInfo_var))->___PrefGlobalGBuffer2Name_7 = _stringLiteralE49805E8C78E82F62CEC1B2C378C4DDF1796E9FC;
		Il2CppCodeGenWriteBarrier((void**)(&((ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_StaticFields*)il2cpp_codegen_static_fields_for(ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_il2cpp_TypeInfo_var))->___PrefGlobalGBuffer2Name_7), (void*)_stringLiteralE49805E8C78E82F62CEC1B2C378C4DDF1796E9FC);
		// public static readonly string PrefGlobalGBuffer3Name = "IMPOSTORS_GLOBALGBUFFER3SUFFIX";
		((ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_StaticFields*)il2cpp_codegen_static_fields_for(ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_il2cpp_TypeInfo_var))->___PrefGlobalGBuffer3Name_8 = _stringLiteral5C7B9222D9F376215CB65708C03B0CF20272C229;
		Il2CppCodeGenWriteBarrier((void**)(&((ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_StaticFields*)il2cpp_codegen_static_fields_for(ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_il2cpp_TypeInfo_var))->___PrefGlobalGBuffer3Name_8), (void*)_stringLiteral5C7B9222D9F376215CB65708C03B0CF20272C229);
		// public static readonly string PrefGlobalBakingOptions = "IMPOSTORS_GLOBALBakingOptions";
		((ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_StaticFields*)il2cpp_codegen_static_fields_for(ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_il2cpp_TypeInfo_var))->___PrefGlobalBakingOptions_9 = _stringLiteral657E6CBF491350BE05C2BD10E4D61DEA801744C2;
		Il2CppCodeGenWriteBarrier((void**)(&((ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_StaticFields*)il2cpp_codegen_static_fields_for(ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_il2cpp_TypeInfo_var))->___PrefGlobalBakingOptions_9), (void*)_stringLiteral657E6CBF491350BE05C2BD10E4D61DEA801744C2);
		// public static readonly string PrefDataImpType = "IMPOSTORS_DATAIMPTYPE";
		((ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_StaticFields*)il2cpp_codegen_static_fields_for(ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_il2cpp_TypeInfo_var))->___PrefDataImpType_10 = _stringLiteral173972C42ADBABD3115E67AA407F725C56F5B044;
		Il2CppCodeGenWriteBarrier((void**)(&((ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_StaticFields*)il2cpp_codegen_static_fields_for(ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_il2cpp_TypeInfo_var))->___PrefDataImpType_10), (void*)_stringLiteral173972C42ADBABD3115E67AA407F725C56F5B044);
		// public static readonly string PrefDataTexSizeLocked = "IMPOSTORS_DATATEXSIZEXLOCKED";
		((ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_StaticFields*)il2cpp_codegen_static_fields_for(ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_il2cpp_TypeInfo_var))->___PrefDataTexSizeLocked_11 = _stringLiteralEF9849C4BB8B75A005F8BD6AD0B3C421A586A13B;
		Il2CppCodeGenWriteBarrier((void**)(&((ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_StaticFields*)il2cpp_codegen_static_fields_for(ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_il2cpp_TypeInfo_var))->___PrefDataTexSizeLocked_11), (void*)_stringLiteralEF9849C4BB8B75A005F8BD6AD0B3C421A586A13B);
		// public static readonly string PrefDataTexSizeSelected = "IMPOSTORS_DATATEXSIZEXSELECTED";
		((ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_StaticFields*)il2cpp_codegen_static_fields_for(ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_il2cpp_TypeInfo_var))->___PrefDataTexSizeSelected_12 = _stringLiteralA8F82C0C2397173589D92E3D439EC75AEBB603F9;
		Il2CppCodeGenWriteBarrier((void**)(&((ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_StaticFields*)il2cpp_codegen_static_fields_for(ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_il2cpp_TypeInfo_var))->___PrefDataTexSizeSelected_12), (void*)_stringLiteralA8F82C0C2397173589D92E3D439EC75AEBB603F9);
		// public static readonly string PrefDataTexSizeX = "IMPOSTORS_DATATEXSIZEX";
		((ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_StaticFields*)il2cpp_codegen_static_fields_for(ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_il2cpp_TypeInfo_var))->___PrefDataTexSizeX_13 = _stringLiteralF257F125A2F6B5D2A2A29FCAA536931C125AF6B3;
		Il2CppCodeGenWriteBarrier((void**)(&((ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_StaticFields*)il2cpp_codegen_static_fields_for(ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_il2cpp_TypeInfo_var))->___PrefDataTexSizeX_13), (void*)_stringLiteralF257F125A2F6B5D2A2A29FCAA536931C125AF6B3);
		// public static readonly string PrefDataTexSizeY = "IMPOSTORS_DATATEXSIZEY";
		((ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_StaticFields*)il2cpp_codegen_static_fields_for(ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_il2cpp_TypeInfo_var))->___PrefDataTexSizeY_14 = _stringLiteralDE1C317FB05D738347D176BE79342CE7C8379A82;
		Il2CppCodeGenWriteBarrier((void**)(&((ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_StaticFields*)il2cpp_codegen_static_fields_for(ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_il2cpp_TypeInfo_var))->___PrefDataTexSizeY_14), (void*)_stringLiteralDE1C317FB05D738347D176BE79342CE7C8379A82);
		// public static readonly string PrefDataDecoupledFrames = "IMPOSTORS_DATADECOUPLEDFRAMES";
		((ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_StaticFields*)il2cpp_codegen_static_fields_for(ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_il2cpp_TypeInfo_var))->___PrefDataDecoupledFrames_15 = _stringLiteralE87636BB81B4F627EB9DB4762BCF85812B1DC2B4;
		Il2CppCodeGenWriteBarrier((void**)(&((ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_StaticFields*)il2cpp_codegen_static_fields_for(ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_il2cpp_TypeInfo_var))->___PrefDataDecoupledFrames_15), (void*)_stringLiteralE87636BB81B4F627EB9DB4762BCF85812B1DC2B4);
		// public static readonly string PrefDataXFrames = "IMPOSTORS_DATAXFRAMES";
		((ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_StaticFields*)il2cpp_codegen_static_fields_for(ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_il2cpp_TypeInfo_var))->___PrefDataXFrames_16 = _stringLiteral6320D23BA8D529632E72998CCD0FE8627FB267E4;
		Il2CppCodeGenWriteBarrier((void**)(&((ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_StaticFields*)il2cpp_codegen_static_fields_for(ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_il2cpp_TypeInfo_var))->___PrefDataXFrames_16), (void*)_stringLiteral6320D23BA8D529632E72998CCD0FE8627FB267E4);
		// public static readonly string PrefDataYFrames = "IMPOSTORS_DATAYFRAMES";
		((ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_StaticFields*)il2cpp_codegen_static_fields_for(ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_il2cpp_TypeInfo_var))->___PrefDataYFrames_17 = _stringLiteral81943B70956ECCD22D7491A919E6BE30E1EEFFE9;
		Il2CppCodeGenWriteBarrier((void**)(&((ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_StaticFields*)il2cpp_codegen_static_fields_for(ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_il2cpp_TypeInfo_var))->___PrefDataYFrames_17), (void*)_stringLiteral81943B70956ECCD22D7491A919E6BE30E1EEFFE9);
		// public static readonly string PrefDataPixelBleeding = "IMPOSTORS_DATAPIXELBLEEDING";
		((ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_StaticFields*)il2cpp_codegen_static_fields_for(ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_il2cpp_TypeInfo_var))->___PrefDataPixelBleeding_18 = _stringLiteral936602A478A63146F6EF71635039909217F66F00;
		Il2CppCodeGenWriteBarrier((void**)(&((ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_StaticFields*)il2cpp_codegen_static_fields_for(ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_il2cpp_TypeInfo_var))->___PrefDataPixelBleeding_18), (void*)_stringLiteral936602A478A63146F6EF71635039909217F66F00);
		// public static readonly string PrefDataTolerance = "IMPOSTORS_DATATOLERANCE ";
		((ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_StaticFields*)il2cpp_codegen_static_fields_for(ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_il2cpp_TypeInfo_var))->___PrefDataTolerance_19 = _stringLiteralCD57B1939B6E2F4CAFC224B8EB311A24A3B33563;
		Il2CppCodeGenWriteBarrier((void**)(&((ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_StaticFields*)il2cpp_codegen_static_fields_for(ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_il2cpp_TypeInfo_var))->___PrefDataTolerance_19), (void*)_stringLiteralCD57B1939B6E2F4CAFC224B8EB311A24A3B33563);
		// public static readonly string PrefDataNormalScale = "IMPOSTORS_DATANORMALSCALE";
		((ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_StaticFields*)il2cpp_codegen_static_fields_for(ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_il2cpp_TypeInfo_var))->___PrefDataNormalScale_20 = _stringLiteral918EAAC3063A7B4BF82DBA25562B975C5F712D6C;
		Il2CppCodeGenWriteBarrier((void**)(&((ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_StaticFields*)il2cpp_codegen_static_fields_for(ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_il2cpp_TypeInfo_var))->___PrefDataNormalScale_20), (void*)_stringLiteral918EAAC3063A7B4BF82DBA25562B975C5F712D6C);
		// public static readonly string PrefDataMaxVertices = "IMPOSTORS_DATAMAXVERTICES";
		((ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_StaticFields*)il2cpp_codegen_static_fields_for(ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_il2cpp_TypeInfo_var))->___PrefDataMaxVertices_21 = _stringLiteral4C7842F39CAFA5406A2F9A0F557D8D8667F9798A;
		Il2CppCodeGenWriteBarrier((void**)(&((ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_StaticFields*)il2cpp_codegen_static_fields_for(ImpostorBakingTools_tB6655C9A860C9931CD045398E25801AB6A559CFB_il2cpp_TypeInfo_var))->___PrefDataMaxVertices_21), (void*)_stringLiteral4C7842F39CAFA5406A2F9A0F557D8D8667F9798A);
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
// System.Collections.Generic.List`1<UnityEngine.Vector2> AmplifyImpostors.Triangulator::get_Points()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* Triangulator_get_Points_m1560D679DCB06E74B19DDAFB6D946043D999BB33 (Triangulator_tB201648A1D8A86DFA5BA3B50ECAA301D7D07123E* __this, const RuntimeMethod* method) 
{
	{
		// public List<Vector2> Points { get { return m_points; } }
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_0 = __this->___m_points_0;
		return L_0;
	}
}
// System.Void AmplifyImpostors.Triangulator::.ctor(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Triangulator__ctor_m20D91D7FE56A804525A65824D83526D12F8D4E24 (Triangulator_tB201648A1D8A86DFA5BA3B50ECAA301D7D07123E* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___points0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m105596C2159C46B75E96D26ACEC0A5C1C1F5C5EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<Vector2> m_points = new List<Vector2>();
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_0 = (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*)il2cpp_codegen_object_new(List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F(L_0, List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F_RuntimeMethod_var);
		__this->___m_points_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_points_0), (void*)L_0);
		// public Triangulator( Vector2[] points )
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_points = new List<Vector2>( points );
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_1 = ___points0;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_2 = (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*)il2cpp_codegen_object_new(List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m105596C2159C46B75E96D26ACEC0A5C1C1F5C5EC(L_2, (RuntimeObject*)L_1, List_1__ctor_m105596C2159C46B75E96D26ACEC0A5C1C1F5C5EC_RuntimeMethod_var);
		__this->___m_points_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_points_0), (void*)L_2);
		// }
		return;
	}
}
// System.Void AmplifyImpostors.Triangulator::.ctor(UnityEngine.Vector2[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Triangulator__ctor_mEBF6C04C531E15DF6975A2EFC1280072E2E3DB0E (Triangulator_tB201648A1D8A86DFA5BA3B50ECAA301D7D07123E* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___points0, bool ___invertY1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m105596C2159C46B75E96D26ACEC0A5C1C1F5C5EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// private List<Vector2> m_points = new List<Vector2>();
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_0 = (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*)il2cpp_codegen_object_new(List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F(L_0, List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F_RuntimeMethod_var);
		__this->___m_points_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_points_0), (void*)L_0);
		// public Triangulator( Vector2[] points, bool invertY = true )
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// if( invertY )
		bool L_1 = ___invertY1;
		if (!L_1)
		{
			goto IL_005c;
		}
	}
	{
		// m_points = new List<Vector2>();
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_2 = (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*)il2cpp_codegen_object_new(List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F(L_2, List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F_RuntimeMethod_var);
		__this->___m_points_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_points_0), (void*)L_2);
		// for( int i = 0; i < points.Length; i++ )
		V_0 = 0;
		goto IL_0055;
	}

IL_0023:
	{
		// m_points.Add( new Vector2( points[ i ].x, 1 - points[ i ].y ) );
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_3 = __this->___m_points_0;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_4 = ___points0;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		float L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___x_0;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_7 = ___points0;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		float L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_10), L_6, ((float)il2cpp_codegen_subtract((1.0f), L_9)), /*hidden argument*/NULL);
		NullCheck(L_3);
		List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_inline(L_3, L_10, List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var);
		// for( int i = 0; i < points.Length; i++ )
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0055:
	{
		// for( int i = 0; i < points.Length; i++ )
		int32_t L_12 = V_0;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_13 = ___points0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0023;
		}
	}
	{
		return;
	}

IL_005c:
	{
		// m_points = new List<Vector2>( points );
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_14 = ___points0;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_15 = (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*)il2cpp_codegen_object_new(List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		List_1__ctor_m105596C2159C46B75E96D26ACEC0A5C1C1F5C5EC(L_15, (RuntimeObject*)L_14, List_1__ctor_m105596C2159C46B75E96D26ACEC0A5C1C1F5C5EC_RuntimeMethod_var);
		__this->___m_points_0 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_points_0), (void*)L_15);
		// }
		return;
	}
}
// System.Int32[] AmplifyImpostors.Triangulator::Triangulate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Triangulator_Triangulate_m5FF6C65699EE4999598D16DBF678DE8EE184D020 (Triangulator_tB201648A1D8A86DFA5BA3B50ECAA301D7D07123E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Reverse_m09394C650409964E568ED088D88C1BA78EE468DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_0 = NULL;
	int32_t V_1 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		// List<int> indices = new List<int>();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_0, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		V_0 = L_0;
		// int n = m_points.Count;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_1 = __this->___m_points_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_inline(L_1, List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var);
		V_1 = L_2;
		// if( n < 3 )
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) >= ((int32_t)3)))
		{
			goto IL_001d;
		}
	}
	{
		// return indices.ToArray();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_4 = V_0;
		NullCheck(L_4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5;
		L_5 = List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA(L_4, List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var);
		return L_5;
	}

IL_001d:
	{
		// int[] V = new int[ n ];
		int32_t L_6 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_2 = L_7;
		// if( Area() > 0 )
		float L_8;
		L_8 = Triangulator_Area_m795C06102D0B8326DFBE9A33C29341C960EB663A(__this, NULL);
		if ((!(((float)L_8) > ((float)(0.0f)))))
		{
			goto IL_0049;
		}
	}
	{
		// for( int v = 0; v < n; v++ )
		V_5 = 0;
		goto IL_0042;
	}

IL_0036:
	{
		// V[ v ] = v;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_2;
		int32_t L_10 = V_5;
		int32_t L_11 = V_5;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (int32_t)L_11);
		// for( int v = 0; v < n; v++ )
		int32_t L_12 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0042:
	{
		// for( int v = 0; v < n; v++ )
		int32_t L_13 = V_5;
		int32_t L_14 = V_1;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0036;
		}
	}
	{
		goto IL_0063;
	}

IL_0049:
	{
		// for( int v = 0; v < n; v++ )
		V_6 = 0;
		goto IL_005e;
	}

IL_004e:
	{
		// V[ v ] = ( n - 1 ) - v;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = V_2;
		int32_t L_16 = V_6;
		int32_t L_17 = V_1;
		int32_t L_18 = V_6;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_17, 1)), L_18)));
		// for( int v = 0; v < n; v++ )
		int32_t L_19 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_005e:
	{
		// for( int v = 0; v < n; v++ )
		int32_t L_20 = V_6;
		int32_t L_21 = V_1;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_004e;
		}
	}

IL_0063:
	{
		// int nv = n;
		int32_t L_22 = V_1;
		V_3 = L_22;
		// int count = 2 * nv;
		int32_t L_23 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_multiply(2, L_23));
		// for( int m = 0, v = nv - 1; nv > 2; )
		V_7 = 0;
		// for( int m = 0, v = nv - 1; nv > 2; )
		int32_t L_24 = V_3;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_24, 1));
		goto IL_011e;
	}

IL_0077:
	{
		// if( ( count-- ) <= 0 )
		int32_t L_25 = V_4;
		int32_t L_26 = L_25;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
		if ((((int32_t)L_26) > ((int32_t)0)))
		{
			goto IL_0088;
		}
	}
	{
		// return indices.ToArray();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_27 = V_0;
		NullCheck(L_27);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28;
		L_28 = List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA(L_27, List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var);
		return L_28;
	}

IL_0088:
	{
		// int u = v;
		int32_t L_29 = V_8;
		V_9 = L_29;
		// if( nv <= u )
		int32_t L_30 = V_3;
		int32_t L_31 = V_9;
		if ((((int32_t)L_30) > ((int32_t)L_31)))
		{
			goto IL_0094;
		}
	}
	{
		// u = 0;
		V_9 = 0;
	}

IL_0094:
	{
		// v = u + 1;
		int32_t L_32 = V_9;
		V_8 = ((int32_t)il2cpp_codegen_add(L_32, 1));
		// if( nv <= v )
		int32_t L_33 = V_3;
		int32_t L_34 = V_8;
		if ((((int32_t)L_33) > ((int32_t)L_34)))
		{
			goto IL_00a2;
		}
	}
	{
		// v = 0;
		V_8 = 0;
	}

IL_00a2:
	{
		// int w = v + 1;
		int32_t L_35 = V_8;
		V_10 = ((int32_t)il2cpp_codegen_add(L_35, 1));
		// if( nv <= w )
		int32_t L_36 = V_3;
		int32_t L_37 = V_10;
		if ((((int32_t)L_36) > ((int32_t)L_37)))
		{
			goto IL_00b0;
		}
	}
	{
		// w = 0;
		V_10 = 0;
	}

IL_00b0:
	{
		// if( Snip( u, v, w, nv, V ) )
		int32_t L_38 = V_9;
		int32_t L_39 = V_8;
		int32_t L_40 = V_10;
		int32_t L_41 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = V_2;
		bool L_43;
		L_43 = Triangulator_Snip_mB920074AAEF3A405CF0B7D6D85B1C4DA62F1ABAC(__this, L_38, L_39, L_40, L_41, L_42, NULL);
		if (!L_43)
		{
			goto IL_011e;
		}
	}
	{
		// a = V[ u ];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_44 = V_2;
		int32_t L_45 = V_9;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		int32_t L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		V_11 = L_47;
		// b = V[ v ];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_48 = V_2;
		int32_t L_49 = V_8;
		NullCheck(L_48);
		int32_t L_50 = L_49;
		int32_t L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		V_12 = L_51;
		// c = V[ w ];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_52 = V_2;
		int32_t L_53 = V_10;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		int32_t L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		V_13 = L_55;
		// indices.Add( a );
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_56 = V_0;
		int32_t L_57 = V_11;
		NullCheck(L_56);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_56, L_57, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// indices.Add( b );
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_58 = V_0;
		int32_t L_59 = V_12;
		NullCheck(L_58);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_58, L_59, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// indices.Add( c );
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_60 = V_0;
		int32_t L_61 = V_13;
		NullCheck(L_60);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_60, L_61, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// m++;
		int32_t L_62 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_62, 1));
		// for( s = v, t = v + 1; t < nv; s++, t++ )
		int32_t L_63 = V_8;
		V_14 = L_63;
		// for( s = v, t = v + 1; t < nv; s++, t++ )
		int32_t L_64 = V_8;
		V_15 = ((int32_t)il2cpp_codegen_add(L_64, 1));
		goto IL_0110;
	}

IL_00fc:
	{
		// V[ s ] = V[ t ];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_65 = V_2;
		int32_t L_66 = V_14;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_67 = V_2;
		int32_t L_68 = V_15;
		NullCheck(L_67);
		int32_t L_69 = L_68;
		int32_t L_70 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		NullCheck(L_65);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(L_66), (int32_t)L_70);
		// for( s = v, t = v + 1; t < nv; s++, t++ )
		int32_t L_71 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_71, 1));
		// for( s = v, t = v + 1; t < nv; s++, t++ )
		int32_t L_72 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_72, 1));
	}

IL_0110:
	{
		// for( s = v, t = v + 1; t < nv; s++, t++ )
		int32_t L_73 = V_15;
		int32_t L_74 = V_3;
		if ((((int32_t)L_73) < ((int32_t)L_74)))
		{
			goto IL_00fc;
		}
	}
	{
		// nv--;
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_75, 1));
		// count = 2 * nv;
		int32_t L_76 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_multiply(2, L_76));
	}

IL_011e:
	{
		// for( int m = 0, v = nv - 1; nv > 2; )
		int32_t L_77 = V_3;
		if ((((int32_t)L_77) > ((int32_t)2)))
		{
			goto IL_0077;
		}
	}
	{
		// indices.Reverse();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_78 = V_0;
		NullCheck(L_78);
		List_1_Reverse_m09394C650409964E568ED088D88C1BA78EE468DC(L_78, List_1_Reverse_m09394C650409964E568ED088D88C1BA78EE468DC_RuntimeMethod_var);
		// return indices.ToArray();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_79 = V_0;
		NullCheck(L_79);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_80;
		L_80 = List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA(L_79, List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var);
		return L_80;
	}
}
// System.Single AmplifyImpostors.Triangulator::Area()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Triangulator_Area_m795C06102D0B8326DFBE9A33C29341C960EB663A (Triangulator_tB201648A1D8A86DFA5BA3B50ECAA301D7D07123E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// int n = m_points.Count;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_0 = __this->___m_points_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_inline(L_0, List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var);
		V_0 = L_1;
		// float A = 0.0f;
		V_1 = (0.0f);
		// for( int p = n - 1, q = 0; q < n; p = q++ )
		int32_t L_2 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		// for( int p = n - 1, q = 0; q < n; p = q++ )
		V_3 = 0;
		goto IL_005e;
	}

IL_001a:
	{
		// Vector2 pval = m_points[ p ];
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_3 = __this->___m_points_0;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_3, L_4, List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		V_4 = L_5;
		// Vector2 qval = m_points[ q ];
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_6 = __this->___m_points_0;
		int32_t L_7 = V_3;
		NullCheck(L_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_6, L_7, List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		V_5 = L_8;
		// A += pval.x * qval.y - qval.x * pval.y;
		float L_9 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_4;
		float L_11 = L_10.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_5;
		float L_13 = L_12.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = V_5;
		float L_15 = L_14.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = V_4;
		float L_17 = L_16.___y_1;
		V_1 = ((float)il2cpp_codegen_add(L_9, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_11, L_13)), ((float)il2cpp_codegen_multiply(L_15, L_17))))));
		// for( int p = n - 1, q = 0; q < n; p = q++ )
		int32_t L_18 = V_3;
		int32_t L_19 = L_18;
		V_3 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		V_2 = L_19;
	}

IL_005e:
	{
		// for( int p = n - 1, q = 0; q < n; p = q++ )
		int32_t L_20 = V_3;
		int32_t L_21 = V_0;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_001a;
		}
	}
	{
		// return ( A * 0.5f );
		float L_22 = V_1;
		return ((float)il2cpp_codegen_multiply(L_22, (0.5f)));
	}
}
// System.Boolean AmplifyImpostors.Triangulator::Snip(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Triangulator_Snip_mB920074AAEF3A405CF0B7D6D85B1C4DA62F1ABAC (Triangulator_tB201648A1D8A86DFA5BA3B50ECAA301D7D07123E* __this, int32_t ___u0, int32_t ___v1, int32_t ___w2, int32_t ___n3, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___V4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// Vector2 A = m_points[ V[ u ] ];
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_0 = __this->___m_points_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ___V4;
		int32_t L_2 = ___u0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_0, L_4, List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		V_1 = L_5;
		// Vector2 B = m_points[ V[ v ] ];
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_6 = __this->___m_points_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = ___V4;
		int32_t L_8 = ___v1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_6, L_10, List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		V_2 = L_11;
		// Vector2 C = m_points[ V[ w ] ];
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_12 = __this->___m_points_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = ___V4;
		int32_t L_14 = ___w2;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		int32_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_12);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_12, L_16, List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		V_3 = L_17;
		// if( Mathf.Epsilon > ( ( ( B.x - A.x ) * ( C.y - A.y ) ) - ( ( B.y - A.y ) * ( C.x - A.x ) ) ) )
		float L_18 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = V_2;
		float L_20 = L_19.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = V_1;
		float L_22 = L_21.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23 = V_3;
		float L_24 = L_23.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25 = V_1;
		float L_26 = L_25.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = V_2;
		float L_28 = L_27.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29 = V_1;
		float L_30 = L_29.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31 = V_3;
		float L_32 = L_31.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33 = V_1;
		float L_34 = L_33.___x_0;
		if ((!(((float)L_18) > ((float)((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_20, L_22)), ((float)il2cpp_codegen_subtract(L_24, L_26)))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_28, L_30)), ((float)il2cpp_codegen_subtract(L_32, L_34))))))))))
		{
			goto IL_0070;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0070:
	{
		// for( p = 0; p < n; p++ )
		V_0 = 0;
		goto IL_00a4;
	}

IL_0074:
	{
		// if( ( p == u ) || ( p == v ) || ( p == w ) )
		int32_t L_35 = V_0;
		int32_t L_36 = ___u0;
		if ((((int32_t)L_35) == ((int32_t)L_36)))
		{
			goto IL_00a0;
		}
	}
	{
		int32_t L_37 = V_0;
		int32_t L_38 = ___v1;
		if ((((int32_t)L_37) == ((int32_t)L_38)))
		{
			goto IL_00a0;
		}
	}
	{
		int32_t L_39 = V_0;
		int32_t L_40 = ___w2;
		if ((((int32_t)L_39) == ((int32_t)L_40)))
		{
			goto IL_00a0;
		}
	}
	{
		// Vector2 P = m_points[ V[ p ] ];
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_41 = __this->___m_points_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = ___V4;
		int32_t L_43 = V_0;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		int32_t L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		NullCheck(L_41);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_46;
		L_46 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_41, L_45, List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		V_4 = L_46;
		// if( InsideTriangle( P, A, B, C ) )
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_47 = V_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_50 = V_3;
		bool L_51;
		L_51 = Triangulator_InsideTriangle_m4279D2BA40AEBE80ADFCAE5A71258B0139FCD1EE(__this, L_47, L_48, L_49, L_50, NULL);
		if (!L_51)
		{
			goto IL_00a0;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_00a0:
	{
		// for( p = 0; p < n; p++ )
		int32_t L_52 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_52, 1));
	}

IL_00a4:
	{
		// for( p = 0; p < n; p++ )
		int32_t L_53 = V_0;
		int32_t L_54 = ___n3;
		if ((((int32_t)L_53) < ((int32_t)L_54)))
		{
			goto IL_0074;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean AmplifyImpostors.Triangulator::InsideTriangle(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Triangulator_InsideTriangle_m4279D2BA40AEBE80ADFCAE5A71258B0139FCD1EE (Triangulator_tB201648A1D8A86DFA5BA3B50ECAA301D7D07123E* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pt0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v11, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v22, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v33, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// b1 = pt.Cross( v1, v2 ) < 0.0f;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___pt0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___v11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v22;
		float L_3;
		L_3 = Vector2Ex_Cross_m6B7DFF570DEC9F8D39E7B40408722A9A676590D2(L_0, L_1, L_2, NULL);
		// b2 = pt.Cross( v2, v3 ) < 0.0f;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___pt0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___v22;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___v33;
		float L_7;
		L_7 = Vector2Ex_Cross_m6B7DFF570DEC9F8D39E7B40408722A9A676590D2(L_4, L_5, L_6, NULL);
		V_0 = (bool)((((float)L_7) < ((float)(0.0f)))? 1 : 0);
		// b3 = pt.Cross( v3, v1 ) < 0.0f;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___pt0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___v33;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___v11;
		float L_11;
		L_11 = Vector2Ex_Cross_m6B7DFF570DEC9F8D39E7B40408722A9A676590D2(L_8, L_9, L_10, NULL);
		V_1 = (bool)((((float)L_11) < ((float)(0.0f)))? 1 : 0);
		// return ( ( b1 == b2 ) && ( b2 == b3 ) );
		bool L_12 = V_0;
		if ((!(((uint32_t)((((float)L_3) < ((float)(0.0f)))? 1 : 0)) == ((uint32_t)L_12))))
		{
			goto IL_0039;
		}
	}
	{
		bool L_13 = V_0;
		bool L_14 = V_1;
		return (bool)((((int32_t)L_13) == ((int32_t)L_14))? 1 : 0);
	}

IL_0039:
	{
		return (bool)0;
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
// System.String AmplifyImpostors.VersionInfo::StaticToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VersionInfo_StaticToString_mFEE76BC256AFF2F1CCAEA55AC42466D90575A5CA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VersionInfo_t48D5E5F39CB7970719C48D19825B1CB56AF101F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8244FF4469CD24AECA8F7B1B293CA6DF261B2861);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA33A5CAE02B786C2060461DF8C6764B4C05E9423);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	{
		// return string.Format( "{0}.{1}.{2}", Major, Minor, Release ) + ( Revision > 0 ? "r" + Revision.ToString() : "" );
		uint8_t L_0 = ((uint8_t)0);
		RuntimeObject* L_1 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_0);
		uint8_t L_2 = ((uint8_t)((int32_t)9));
		RuntimeObject* L_3 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_2);
		uint8_t L_4 = ((uint8_t)7);
		RuntimeObject* L_5 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(_stringLiteral8244FF4469CD24AECA8F7B1B293CA6DF261B2861, L_1, L_3, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(VersionInfo_t48D5E5F39CB7970719C48D19825B1CB56AF101F7_il2cpp_TypeInfo_var);
		uint8_t L_7 = ((VersionInfo_t48D5E5F39CB7970719C48D19825B1CB56AF101F7_StaticFields*)il2cpp_codegen_static_fields_for(VersionInfo_t48D5E5F39CB7970719C48D19825B1CB56AF101F7_il2cpp_TypeInfo_var))->___Revision_3;
		G_B1_0 = L_6;
		if ((((int32_t)L_7) > ((int32_t)0)))
		{
			G_B2_0 = L_6;
			goto IL_002c;
		}
	}
	{
		G_B3_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B3_1 = G_B1_0;
		goto IL_0040;
	}

IL_002c:
	{
		il2cpp_codegen_runtime_class_init_inline(VersionInfo_t48D5E5F39CB7970719C48D19825B1CB56AF101F7_il2cpp_TypeInfo_var);
		String_t* L_8;
		L_8 = Byte_ToString_mB80CE094B94215119578E4D796566E71D7277EE4((&((VersionInfo_t48D5E5F39CB7970719C48D19825B1CB56AF101F7_StaticFields*)il2cpp_codegen_static_fields_for(VersionInfo_t48D5E5F39CB7970719C48D19825B1CB56AF101F7_il2cpp_TypeInfo_var))->___Revision_3), NULL);
		String_t* L_9;
		L_9 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralA33A5CAE02B786C2060461DF8C6764B4C05E9423, L_8, NULL);
		G_B3_0 = L_9;
		G_B3_1 = G_B2_0;
	}

IL_0040:
	{
		String_t* L_10;
		L_10 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(G_B3_1, G_B3_0, NULL);
		return L_10;
	}
}
// System.Int32 AmplifyImpostors.VersionInfo::get_FullNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VersionInfo_get_FullNumber_mD890CE4401F0B816C60A5B253D2E66B9AD27C7E8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VersionInfo_t48D5E5F39CB7970719C48D19825B1CB56AF101F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int FullNumber { get { return Major * 10000 + Minor * 1000 + Release * 100 + Revision; } }
		il2cpp_codegen_runtime_class_init_inline(VersionInfo_t48D5E5F39CB7970719C48D19825B1CB56AF101F7_il2cpp_TypeInfo_var);
		uint8_t L_0 = ((VersionInfo_t48D5E5F39CB7970719C48D19825B1CB56AF101F7_StaticFields*)il2cpp_codegen_static_fields_for(VersionInfo_t48D5E5F39CB7970719C48D19825B1CB56AF101F7_il2cpp_TypeInfo_var))->___Revision_3;
		return ((int32_t)il2cpp_codegen_add(((int32_t)9700), (int32_t)L_0));
	}
}
// System.String AmplifyImpostors.VersionInfo::get_FullLabel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VersionInfo_get_FullLabel_m4850E0CD7A9C94732E5A8B926485CA13D626B288 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VersionInfo_t48D5E5F39CB7970719C48D19825B1CB56AF101F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral347AE41DEB51E5C24D439F61C0DEC02AEB379143);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// public static string FullLabel { get { return "Version=" + FullNumber; } }
		il2cpp_codegen_runtime_class_init_inline(VersionInfo_t48D5E5F39CB7970719C48D19825B1CB56AF101F7_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = VersionInfo_get_FullNumber_mD890CE4401F0B816C60A5B253D2E66B9AD27C7E8(NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral347AE41DEB51E5C24D439F61C0DEC02AEB379143, L_1, NULL);
		return L_2;
	}
}
// System.Void AmplifyImpostors.VersionInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VersionInfo__ctor_mA7B43208911553392940684D41E85A0F67ED5864 (VersionInfo_t48D5E5F39CB7970719C48D19825B1CB56AF101F7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void AmplifyImpostors.VersionInfo::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VersionInfo__cctor_m2C678EBD6D419576381FEBE82BB008BAFEC13447 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VersionInfo_t48D5E5F39CB7970719C48D19825B1CB56AF101F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static byte Revision = 13;
		((VersionInfo_t48D5E5F39CB7970719C48D19825B1CB56AF101F7_StaticFields*)il2cpp_codegen_static_fields_for(VersionInfo_t48D5E5F39CB7970719C48D19825B1CB56AF101F7_il2cpp_TypeInfo_var))->___Revision_3 = (uint8_t)((int32_t)13);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_mA75C525C1E78B5BB99E9B7A63EF68C731043FE18_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___leftVector_9;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
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
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* AmplifyImpostor_get_Renderers_mE743B4A3FD10A48EF555974A7833B062F4585DCD_inline (AmplifyImpostor_tE757F7B6A3714CB07452670A8C4491B8CC747B3D* __this, const RuntimeMethod* method) 
{
	{
		// public Renderer[] Renderers { get { return m_renderers; } set { m_renderers = value; } }
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_0 = __this->___m_renderers_21;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Set_m1C7E543216734FB513F9CEBA44C50E6FC2AFD49D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___newX0, float ___newY1, float ___newZ2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___newX0;
		__this->___x_2 = L_0;
		float L_1 = ___newY1;
		__this->___y_3 = L_1;
		float L_2 = ___newZ2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Scale_mC9AFC562DF393640663C6FFC733EADD343FB6B65_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* Triangulator_get_Points_m1560D679DCB06E74B19DDAFB6D946043D999BB33_inline (Triangulator_tB201648A1D8A86DFA5BA3B50ECAA301D7D07123E* __this, const RuntimeMethod* method) 
{
	{
		// public List<Vector2> Points { get { return m_points; } }
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_0 = __this->___m_points_0;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_m464FF96F8532FE33EB226E049BDAB1885AB67366_inline (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___values0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___values0;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		int32_t L_1 = V_0;
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0011;
		}
	}
	{
		V_3 = 0;
		goto IL_0043;
	}

IL_0011:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ___values0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		int32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		V_4 = 1;
		goto IL_0034;
	}

IL_001a:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___values0;
		int32_t L_7 = V_4;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		int32_t L_10 = V_1;
		V_5 = (bool)((((int32_t)L_9) < ((int32_t)L_10))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_002d;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = ___values0;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		int32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_1 = L_15;
	}

IL_002d:
	{
		int32_t L_16 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0034:
	{
		int32_t L_17 = V_4;
		int32_t L_18 = V_0;
		V_6 = (bool)((((int32_t)L_17) < ((int32_t)L_18))? 1 : 0);
		bool L_19 = V_6;
		if (L_19)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_20 = V_1;
		V_3 = L_20;
		goto IL_0043;
	}

IL_0043:
	{
		int32_t L_21 = V_3;
		return L_21;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
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
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) < ((float)L_1)))
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Lerp_mF3BD6827807680A529E800FD027734D40A3597E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		___t2 = L_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___a0;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___b1;
		float L_5 = L_4.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___a0;
		float L_7 = L_6.___x_0;
		float L_8 = ___t2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___a0;
		float L_10 = L_9.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = ___b1;
		float L_12 = L_11.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = ___a0;
		float L_14 = L_13.___y_1;
		float L_15 = ___t2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_16), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_003d;
	}

IL_003d:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m232E885D3C7BB6A96D5FEF4494709BA170447604_inline (const RuntimeMethod* method) 
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
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___oneVector_3;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_gshared_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_gshared_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___item0, const RuntimeMethod* method) 
{
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_1 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_6 = V_0;
		int32_t L_7 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_8);
		return;
	}

IL_0034:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___item0;
		((  void (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___item0;
		((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
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
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
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
