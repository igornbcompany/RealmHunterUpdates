#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`3<System.Char,System.Int32,System.Char>
struct Func_3_t2B0D96B11960CC2841861EAC2E3DEA368500085D;
// System.Collections.Generic.IEnumerable`1<System.Char>
struct IEnumerable_1_t9CC3C47C67E4184F7F1B8B0AFAEF692B9EDDDF05;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskFactory`1<System.Int32>
struct TaskFactory_1_t0BEF06D58E44525B9135AB0B22D016856EE69FF3;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// ICSharpCode.SharpZipLib.Checksum.Adler32
struct Adler32_t719B695D8A1A84E2A465697391C35131CA4FB1CD;
// System.Security.Cryptography.Aes
struct Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// ICSharpCode.SharpZipLib.Checksum.BZip2Crc
struct BZip2Crc_t1A45B70CB448F473D16EAA0E3C2733DDE97A102F;
// ICSharpCode.SharpZipLib.BZip2.BZip2Exception
struct BZip2Exception_t1741AC6EA11FAF77F0D91DECA2B9440919007096;
// ICSharpCode.SharpZipLib.BZip2.BZip2InputStream
struct BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// ICSharpCode.SharpZipLib.Checksum.Crc32
struct Crc32_t44597B0AB0A0CE01AB30303BA5EC0F6E4F51BF33;
// System.Security.Cryptography.CryptoStream
struct CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65;
// System.Security.Cryptography.CryptographicException
struct CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F;
// ICSharpCode.SharpZipLib.Zip.Compression.Deflater
struct Deflater_t8287F9AE01983279256AABA94642FF95CC633FB4;
// ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine
struct DeflaterEngine_tE4F7D61146664C338CBDFC20B089EC4AB235959C;
// ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream
struct DeflaterOutputStream_t1A33D4BC42D9AF34A523563436A1C6A1136CE259;
// ICSharpCode.SharpZipLib.Zip.Compression.DeflaterPending
struct DeflaterPending_tC4C25BD0FC4D0215D31953050D4B3A874482C027;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IO.EndOfStreamException
struct EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028;
// System.Exception
struct Exception_t;
// System.Security.Cryptography.HMAC
struct HMAC_tD2DDF5CB02E7064020823E8EE01DA127E46E1684;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D;
// ICSharpCode.SharpZipLib.Checksum.IChecksum
struct IChecksum_tE3D732C1F11753D7DC63E2F93286A7C581C81676;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_tE6DA9E01069FDC62AB562B589C8E43EEC53B2377;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
// System.Security.Cryptography.IncrementalHash
struct IncrementalHash_tBD1EFC035497BBC804293E950C47D5392D9D76D0;
// ICSharpCode.SharpZipLib.Zip.Compression.Inflater
struct Inflater_t2F41C3E2608A77A69EDAB071BCA9752305595494;
// ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader
struct InflaterDynHeader_tB69F561C81D8F6D536510477A1FC9EFD39DE4EFF;
// ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree
struct InflaterHuffmanTree_tB7309822439A9E51BA1EF5544BF706DB30F7C71F;
// ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer
struct InflaterInputBuffer_t947724C1CD4D44B75584D59D1ECA71C121D62129;
// ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream
struct InflaterInputStream_t25453CA4D454447A9D30F0011CCE23037B465EA2;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Security.Cryptography.KeySizes
struct KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow
struct OutputWindow_tAA96562C1DB1269206CBF4CDFC8ACE36C26A99E8;
// ICSharpCode.SharpZipLib.Encryption.PkzipClassic
struct PkzipClassic_tFBEEDDCE7A3840AB2B8ABA2387B818EFA1963851;
// ICSharpCode.SharpZipLib.Encryption.PkzipClassicCryptoBase
struct PkzipClassicCryptoBase_t511C47A22320A10E38F63EB601DD36A46637FD38;
// ICSharpCode.SharpZipLib.Encryption.PkzipClassicDecryptCryptoTransform
struct PkzipClassicDecryptCryptoTransform_t2D73686A12E6EC67223F5891644A7E57759E3178;
// ICSharpCode.SharpZipLib.Encryption.PkzipClassicEncryptCryptoTransform
struct PkzipClassicEncryptCryptoTransform_t221C3842059AAB91DA3A0029848D9C06F8093233;
// ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged
struct PkzipClassicManaged_tC3A9C9A5CC6D9FDD958207518E982E5C54080DAB;
// System.Security.Cryptography.RNGCryptoServiceProvider
struct RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170;
// System.Security.Cryptography.Rfc2898DeriveBytes
struct Rfc2898DeriveBytes_t0614FA7A5D23F6A9C781F7CA38E07BD8295256FB;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// ICSharpCode.SharpZipLib.SharpZipBaseException
struct SharpZipBaseException_t1C56A0584338F84B653352995CA5718A5BF2EB75;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator
struct StreamManipulator_t626C6631E1D9BD1EAA5FDB4987C79A2F34A92689;
// System.String
struct String_t;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// ICSharpCode.SharpZipLib.Encryption.ZipAESStream
struct ZipAESStream_t9CB50BCC4129C9B2D9EF26F8FE10CB1933AB0226;
// ICSharpCode.SharpZipLib.Encryption.ZipAESTransform
struct ZipAESTransform_t81E0F17E8B4E0D3470F5D5A46D6DE031DDBC5C2C;
// ICSharpCode.SharpZipLib.Zip.ZipException
struct ZipException_t96D0219AEA3A9ACA11F3DD018FDAA302995E720F;
// ICSharpCode.SharpZipLib.Core.PathUtils/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t4D8D3C6EF1270E6548975398AC843D57F25F048F;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* Adler32_t719B695D8A1A84E2A465697391C35131CA4FB1CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BZip2Constants_t2FB3AE8623497F724C02B1D7A551E23824E15939_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BZip2Crc_t1A45B70CB448F473D16EAA0E3C2733DDE97A102F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BZip2Exception_t1741AC6EA11FAF77F0D91DECA2B9440919007096_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Crc32_t44597B0AB0A0CE01AB30303BA5EC0F6E4F51BF33_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_3_t2B0D96B11960CC2841861EAC2E3DEA368500085D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IChecksum_tE3D732C1F11753D7DC63E2F93286A7C581C81676_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICryptoTransform_tE6DA9E01069FDC62AB562B589C8E43EEC53B2377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InflaterInputBuffer_t947724C1CD4D44B75584D59D1ECA71C121D62129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PkzipClassicDecryptCryptoTransform_t2D73686A12E6EC67223F5891644A7E57759E3178_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PkzipClassicEncryptCryptoTransform_t221C3842059AAB91DA3A0029848D9C06F8093233_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rfc2898DeriveBytes_t0614FA7A5D23F6A9C781F7CA38E07BD8295256FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SharpZipBaseException_t1C56A0584338F84B653352995CA5718A5BF2EB75_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass0_0_t4D8D3C6EF1270E6548975398AC843D57F25F048F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ZipAESTransform_t81E0F17E8B4E0D3470F5D5A46D6DE031DDBC5C2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ZipException_t96D0219AEA3A9ACA11F3DD018FDAA302995E720F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tFA7F7F30E34DF4A03E60907D6B496B57A82AC22D____6116ACF9BA29EF61E63AF05766A8CCBC05D3DF52FE07AE0DBCD10FF1065B6938_1_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tFA7F7F30E34DF4A03E60907D6B496B57A82AC22D____FA6F7D5596F6084EE582060B76239C49C1BF8567F7EA556E2D83971C75E26951_11_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral022792C88272442BF8F4DE76B0434B7C4A39F223;
IL2CPP_EXTERN_C String_t* _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626;
IL2CPP_EXTERN_C String_t* _stringLiteral0C5D82EC0DDFC2A751DB2B8E28F3256ABDE01270;
IL2CPP_EXTERN_C String_t* _stringLiteral139A7192A4E8A47ABD8DD76806B0D6C2FEA68766;
IL2CPP_EXTERN_C String_t* _stringLiteral19735335CA05EBD60664E496D17C7EF387AC7C8B;
IL2CPP_EXTERN_C String_t* _stringLiteral1B51DC7F7A299FDF20D4111AA6D04EFD1D4FDD6B;
IL2CPP_EXTERN_C String_t* _stringLiteral20B43C997D46773915E000B0A5DBB64316FDD2E8;
IL2CPP_EXTERN_C String_t* _stringLiteral245B50E2C13208F7C0CD450C27207D86AF461D75;
IL2CPP_EXTERN_C String_t* _stringLiteral2D1336CF54989C981F460E20B23CF7092A4FBD4D;
IL2CPP_EXTERN_C String_t* _stringLiteral30CAD18346B4AC106F4C27BDD5FF7775D7F71A38;
IL2CPP_EXTERN_C String_t* _stringLiteral30D44D3EB7B534CAF51AD514F18FE7DD626129FE;
IL2CPP_EXTERN_C String_t* _stringLiteral36919DB41559814DAA1900952B7D08BD1CA0C036;
IL2CPP_EXTERN_C String_t* _stringLiteral3B08B15164C3DE662F591B588DBEE5D47CB1DFAB;
IL2CPP_EXTERN_C String_t* _stringLiteral3BC92E1B5CE5B99C166F700A26CD758E80249C3F;
IL2CPP_EXTERN_C String_t* _stringLiteral3F11B04FE00DABBA4008AE870D166A4B864C92FF;
IL2CPP_EXTERN_C String_t* _stringLiteral42185AEF1D13B50B099FF24FCC6919AA7E22945E;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral4EB4BE55A4E968B39CF168F95F155F0CE9E4A4BC;
IL2CPP_EXTERN_C String_t* _stringLiteral4F13D9CF93D00D34A69E6720B2AEA7C9132F6B2B;
IL2CPP_EXTERN_C String_t* _stringLiteral51F1DBAC2A477B647C00F35F5067C191B5F39517;
IL2CPP_EXTERN_C String_t* _stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4;
IL2CPP_EXTERN_C String_t* _stringLiteral5B83DDB4DB491961BE1315130C2ED402FB87DE45;
IL2CPP_EXTERN_C String_t* _stringLiteral606EA95C661C90C80AAC03510D6C265BA14D36B4;
IL2CPP_EXTERN_C String_t* _stringLiteral6339537EF82C3CA99F06106076EB017F09E2696C;
IL2CPP_EXTERN_C String_t* _stringLiteral668BC7EE3DABD652E48EEF464BF03AD9B53F7D26;
IL2CPP_EXTERN_C String_t* _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5;
IL2CPP_EXTERN_C String_t* _stringLiteral685754E232BB2C9F1958DD15B2C38BA9177C7579;
IL2CPP_EXTERN_C String_t* _stringLiteral6AFC685BFEB5280EBD767AA771B413E44CE00C08;
IL2CPP_EXTERN_C String_t* _stringLiteral6E211FC3D3E3E7F3871E0DFFD781ED6B15E23EFB;
IL2CPP_EXTERN_C String_t* _stringLiteral735090184B1D11369C49CCB0438BABDD500A19D5;
IL2CPP_EXTERN_C String_t* _stringLiteral77B8FF6E0BFB09EB9D8A7585234E9561468125FD;
IL2CPP_EXTERN_C String_t* _stringLiteral89384C233A6744C5BF62F5F29E357EBB62768241;
IL2CPP_EXTERN_C String_t* _stringLiteral8AE0806856295C8F6BD78436B652512A64DDA6EA;
IL2CPP_EXTERN_C String_t* _stringLiteral8FF23D129BAAFF88D5BFD6399DCAA2557F8F2030;
IL2CPP_EXTERN_C String_t* _stringLiteral906BBE5F7CD672B7E71DFD5F848785C3BC25F023;
IL2CPP_EXTERN_C String_t* _stringLiteral9413892BFE723FDF603E2A7F4DCECB3703459A95;
IL2CPP_EXTERN_C String_t* _stringLiteralABA8F64A9F94A564D9AC678557D76653D0CD2628;
IL2CPP_EXTERN_C String_t* _stringLiteralB451C24C18CAC042FF546D3E38C0F36D3BDADC14;
IL2CPP_EXTERN_C String_t* _stringLiteralB9F5D6B4F1F6DAC8F4EEB3AB72C41EBAB801FE5C;
IL2CPP_EXTERN_C String_t* _stringLiteralBC4FDA8C54913FB01B2F19F0F1D7824A534038F9;
IL2CPP_EXTERN_C String_t* _stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10;
IL2CPP_EXTERN_C String_t* _stringLiteralC8FE4FB2F0C7351CCB064A9D9BD65C0FC83D4E12;
IL2CPP_EXTERN_C String_t* _stringLiteralCBC3EE4B235C41540E696A527B41C2EB3D741A62;
IL2CPP_EXTERN_C String_t* _stringLiteralCBDDDDE911E2F08DD3A4D52E8CFF5D244531824C;
IL2CPP_EXTERN_C String_t* _stringLiteralCCF12B74DC9FC35FD79F50B6BD9E5803766CD12B;
IL2CPP_EXTERN_C String_t* _stringLiteralCE8479479307229DA7944DFC6B23FFC66B1407A6;
IL2CPP_EXTERN_C String_t* _stringLiteralD89ADD2DB1FBF30630EEA02FAAF144060CA0E908;
IL2CPP_EXTERN_C String_t* _stringLiteralDB7BC86F654DDCF33A2F8477D9823029B198B9B1;
IL2CPP_EXTERN_C String_t* _stringLiteralDC926AD4C478A88A08B54B90CE3FF6A65ECEF876;
IL2CPP_EXTERN_C String_t* _stringLiteralE1E140E61CDB0B9046F6A826A83854609AD41561;
IL2CPP_EXTERN_C String_t* _stringLiteralE22404C030BAB2A73AA2CEE3DEBD2DF8C77EED85;
IL2CPP_EXTERN_C String_t* _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB;
IL2CPP_EXTERN_C String_t* _stringLiteralEB602C87D2D6273F24CEC6C67CC7B78DDDE775DC;
IL2CPP_EXTERN_C String_t* _stringLiteralEC390FAC4E9601671FC753027681341A598737E9;
IL2CPP_EXTERN_C String_t* _stringLiteralEE6DF8099AE75DD42F869879C18E332A6FC033EF;
IL2CPP_EXTERN_C String_t* _stringLiteralF0A45CCAC3B8CC663DC29BD756A86295833579C1;
IL2CPP_EXTERN_C String_t* _stringLiteralF29231C610048421771CAF09B4C0C892E086F10E;
IL2CPP_EXTERN_C String_t* _stringLiteralF3508635B3721D6D1253A5DF75A7CC2646E28F5B;
IL2CPP_EXTERN_C String_t* _stringLiteralF55E72FEF46CED230283C41245B193D83EE776BB;
IL2CPP_EXTERN_C String_t* _stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BZip2InputStream_BadBlockHeader_m042E436789D30482BEB00E272D67E6A98F6275FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BZip2InputStream_BlockOverrun_m29C63342909C2DC1CC6F197CECD42CACFF9F31D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BZip2InputStream_CompressedStreamEOF_m8AC116EF42A7B859ECF35E3CBCFBCF61F693B22C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BZip2InputStream_CrcError_m3B8460F42E8FFAC2E591D1FC382853873D90B9CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BZip2InputStream_GetAndMoveToFrontDecode_m3D99019D7E95B8396077B35582E99F86092EF526_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BZip2InputStream_Read_mD2420F9C7066D844712E272C5084BA84457AACCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BZip2InputStream_Seek_mA22AD11F85D0056A2E138E17B20C37D6B3300044_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BZip2InputStream_SetDecompressStructureSizes_m527B6A7D7A0905BC26CFD176F11B44D32C1A417F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BZip2InputStream_SetLength_m96E6B9141C7F2EAB2267ACFF4282CFCFC2974A3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BZip2InputStream_WriteByte_mD0625FA4615D5B50D2F1482F6197441676AE8312_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BZip2InputStream_Write_m9626911E5C2E721FC4AD501A8E59CDAC271C6DAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BZip2InputStream__ctor_m6C9F56BFE47945DB0B943D840AE4AA01DACE4E62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BZip2InputStream_set_Position_m975849119963BADC4183A3C36133B71EDE7DEC67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Crc32_Update_mEABA7B10AD590CE609EC1475C50B7A422F3DC25E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflaterOutputStream_Deflate_m3E563D2FFE72D2658FD1C852F2AF3787F9DE629D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflaterOutputStream_Finish_mFEEF530B3CE8DFD5D8D2BE98E8956C0B562252B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflaterOutputStream_ReadByte_mC998753B9AC2579C2733A00692E5C2858E8D5328_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflaterOutputStream_Read_mD9696789B4254232BA07B5E6F4D2DD5762EF9A04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflaterOutputStream_Seek_m75650CA6E8C8E4883A33CCE936617F9F18E76A4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflaterOutputStream_SetLength_m250C8B9BE0ECB3BCAE8DCE3AA6BC80EBECC248CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflaterOutputStream__ctor_m3605F6B8B630FB441D8A737AFDFEF80CC2F33842_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflaterOutputStream_set_Position_m0AF94DC2591B8A98E698E41CE66603FD4AA18E1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Empty_Array_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3D3E9C7401E6F237EFF9B076466763048CF14917_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Contains_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m3979BE7355F65890520EC3C8092E2983495AE03D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m3DB5A07821652CBD6C7F7BC5A43F7610DB230567_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Take_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m3866E2EB7A63709492EE683A90BA8BD671A4D314_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mECF2AE4F9225A8A7CE16CA858A60B98A7627699C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InflaterInputStream_Fill_mBC6A8C31004A86E3363600E8307A7D5FAB29CB4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InflaterInputStream_Read_mFEA9B693BB50AF9EB4CBE1923C79005CB411C5FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InflaterInputStream_Seek_m1E1AC2C1269904300E26B29B26C132AC3B5027F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InflaterInputStream_SetLength_m2524C0C1608DA18ED088244F33680146C6664C40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InflaterInputStream_WriteByte_mD82CC287C483418EDFF2BFEF7F46396BA29CE728_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InflaterInputStream_Write_m53ADE5F0ECCBDDA93E6EC68C863D9D478ACDA432_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InflaterInputStream__ctor_mEB11817AAD6E905924DCE2C8CF758DFFA0B15C91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InflaterInputStream_get_Length_m176C2D20D50FA17B06066EDF062C8CD726085155_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InflaterInputStream_set_Position_m9BD4DF58F5220794828190502FC6DF7571554C85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OutputWindow_CopyOutput_m908635A98F7C5A3BF1BFBA96507CF8BE64121477_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OutputWindow_Repeat_mF71C1109E018A243A011D3D2CDFC8A4BEA6D6E66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OutputWindow_Write_m98568B7A777A909CE6738BEBC2BD050FA5EF3939_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PkzipClassicCryptoBase_SetKeys_m0444E777B325A95CB7E8922D431D84E413B91469_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PkzipClassicManaged_set_BlockSize_m49688514B12E14C0D7E5D0789D735D31DA14D040_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PkzipClassicManaged_set_Key_m51DEB0FE186DC44DA5F64C57C157F614E49A5CE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PkzipClassic_GenerateKeys_m30F9A75E745183CA5361F959D5588F6B15927404_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StreamManipulator_CopyBytes_m326B46651BD903626068679C41A1ADF495A757D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StreamManipulator_SetInput_mFD2FB5325969D00CE3C052CC8D57D5B6DCF351A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StreamUtils_Copy_m39E242B89E58257C6818A067122D3A08146A0F98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StreamUtils_ReadFully_m42CD384742E86785E03CC1458E1EB5D45D68343B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StreamUtils_ReadRequestedBytes_mD39A463BD7A4D4E9CE6EA2996775843E95660E91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromResult_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1AB522FB726C8CC51C9F00459B7CE60065461032_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_0_U3CDropPathRootU3Eb__0_m7B39AFAC70CB43B3767D91D86271F029C8C1DBEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZipAESStream_ReadAndTransform_mBB994079CAFA0957CA1EEF16B7D4ABE6567EDD93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZipAESStream_Write_mCC1EA1542CEFC06FBC64C09A072D89D1DE644FBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZipAESStream__ctor_mBE431878A503B03F92D14E1DD44248516628D483_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZipAESTransform_TransformFinalBlock_m3DE69A3BAA81D1D9EE5BF2D1F8439B9C0C6AE16C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZipAESTransform__ctor_m159186BF570F35F6E144B4AA90E162FC2FDF7BE9_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680;
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ICSharpCode.SharpZipLib.Checksum.Adler32
struct Adler32_t719B695D8A1A84E2A465697391C35131CA4FB1CD  : public RuntimeObject
{
	// System.UInt32 ICSharpCode.SharpZipLib.Checksum.Adler32::checkValue
	uint32_t ___checkValue_1;
};

struct Adler32_t719B695D8A1A84E2A465697391C35131CA4FB1CD_StaticFields
{
	// System.UInt32 ICSharpCode.SharpZipLib.Checksum.Adler32::BASE
	uint32_t ___BASE_0;
};
struct Il2CppArrayBounds;

// ICSharpCode.SharpZipLib.BZip2.BZip2Constants
struct BZip2Constants_t2FB3AE8623497F724C02B1D7A551E23824E15939  : public RuntimeObject
{
};

struct BZip2Constants_t2FB3AE8623497F724C02B1D7A551E23824E15939_StaticFields
{
	// System.Int32[] ICSharpCode.SharpZipLib.BZip2.BZip2Constants::RandomNumbers
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___RandomNumbers_0;
};

// ICSharpCode.SharpZipLib.Checksum.BZip2Crc
struct BZip2Crc_t1A45B70CB448F473D16EAA0E3C2733DDE97A102F  : public RuntimeObject
{
	// System.UInt32 ICSharpCode.SharpZipLib.Checksum.BZip2Crc::checkValue
	uint32_t ___checkValue_1;
};

struct BZip2Crc_t1A45B70CB448F473D16EAA0E3C2733DDE97A102F_StaticFields
{
	// System.UInt32[] ICSharpCode.SharpZipLib.Checksum.BZip2Crc::crcTable
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___crcTable_0;
};

// ICSharpCode.SharpZipLib.Checksum.Crc32
struct Crc32_t44597B0AB0A0CE01AB30303BA5EC0F6E4F51BF33  : public RuntimeObject
{
	// System.UInt32 ICSharpCode.SharpZipLib.Checksum.Crc32::checkValue
	uint32_t ___checkValue_3;
};

struct Crc32_t44597B0AB0A0CE01AB30303BA5EC0F6E4F51BF33_StaticFields
{
	// System.UInt32 ICSharpCode.SharpZipLib.Checksum.Crc32::crcInit
	uint32_t ___crcInit_0;
	// System.UInt32 ICSharpCode.SharpZipLib.Checksum.Crc32::crcXor
	uint32_t ___crcXor_1;
	// System.UInt32[] ICSharpCode.SharpZipLib.Checksum.Crc32::crcTable
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___crcTable_2;
};

// ICSharpCode.SharpZipLib.Checksum.CrcUtilities
struct CrcUtilities_tA31E724ACD651983678D5C2A3B579FA1E3A42ACD  : public RuntimeObject
{
};

// ICSharpCode.SharpZipLib.Zip.Compression.Deflater
struct Deflater_t8287F9AE01983279256AABA94642FF95CC633FB4  : public RuntimeObject
{
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Deflater::level
	int32_t ___level_0;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Deflater::noZlibHeaderOrFooter
	bool ___noZlibHeaderOrFooter_1;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Deflater::state
	int32_t ___state_2;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.Compression.Deflater::totalOut
	int64_t ___totalOut_3;
	// ICSharpCode.SharpZipLib.Zip.Compression.DeflaterPending ICSharpCode.SharpZipLib.Zip.Compression.Deflater::pending
	DeflaterPending_tC4C25BD0FC4D0215D31953050D4B3A874482C027* ___pending_4;
	// ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine ICSharpCode.SharpZipLib.Zip.Compression.Deflater::engine
	DeflaterEngine_tE4F7D61146664C338CBDFC20B089EC4AB235959C* ___engine_5;
};

// System.Security.Cryptography.DeriveBytes
struct DeriveBytes_t385A92C1BE5732BD434FBD449B8BFA1A7702A179  : public RuntimeObject
{
};

// ICSharpCode.SharpZipLib.Core.Empty
struct Empty_t20FB1EE349585E1DAD9DF3E41AD79EE8299373F1  : public RuntimeObject
{
};

// ICSharpCode.SharpZipLib.Zip.Compression.Inflater
struct Inflater_t2F41C3E2608A77A69EDAB071BCA9752305595494  : public RuntimeObject
{
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Inflater::mode
	int32_t ___mode_4;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Inflater::readAdler
	int32_t ___readAdler_5;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Inflater::neededBits
	int32_t ___neededBits_6;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Inflater::repLength
	int32_t ___repLength_7;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Inflater::repDist
	int32_t ___repDist_8;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Inflater::uncomprLen
	int32_t ___uncomprLen_9;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Inflater::isLastBlock
	bool ___isLastBlock_10;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.Compression.Inflater::totalOut
	int64_t ___totalOut_11;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.Compression.Inflater::totalIn
	int64_t ___totalIn_12;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Inflater::noHeader
	bool ___noHeader_13;
	// ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator ICSharpCode.SharpZipLib.Zip.Compression.Inflater::input
	StreamManipulator_t626C6631E1D9BD1EAA5FDB4987C79A2F34A92689* ___input_14;
	// ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow ICSharpCode.SharpZipLib.Zip.Compression.Inflater::outputWindow
	OutputWindow_tAA96562C1DB1269206CBF4CDFC8ACE36C26A99E8* ___outputWindow_15;
	// ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader ICSharpCode.SharpZipLib.Zip.Compression.Inflater::dynHeader
	InflaterDynHeader_tB69F561C81D8F6D536510477A1FC9EFD39DE4EFF* ___dynHeader_16;
	// ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree ICSharpCode.SharpZipLib.Zip.Compression.Inflater::litlenTree
	InflaterHuffmanTree_tB7309822439A9E51BA1EF5544BF706DB30F7C71F* ___litlenTree_17;
	// ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree ICSharpCode.SharpZipLib.Zip.Compression.Inflater::distTree
	InflaterHuffmanTree_tB7309822439A9E51BA1EF5544BF706DB30F7C71F* ___distTree_18;
	// ICSharpCode.SharpZipLib.Checksum.Adler32 ICSharpCode.SharpZipLib.Zip.Compression.Inflater::adler
	Adler32_t719B695D8A1A84E2A465697391C35131CA4FB1CD* ___adler_19;
};

struct Inflater_t2F41C3E2608A77A69EDAB071BCA9752305595494_StaticFields
{
	// System.Int32[] ICSharpCode.SharpZipLib.Zip.Compression.Inflater::CPLENS
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___CPLENS_0;
	// System.Int32[] ICSharpCode.SharpZipLib.Zip.Compression.Inflater::CPLEXT
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___CPLEXT_1;
	// System.Int32[] ICSharpCode.SharpZipLib.Zip.Compression.Inflater::CPDIST
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___CPDIST_2;
	// System.Int32[] ICSharpCode.SharpZipLib.Zip.Compression.Inflater::CPDEXT
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___CPDEXT_3;
};

// ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer
struct InflaterInputBuffer_t947724C1CD4D44B75584D59D1ECA71C121D62129  : public RuntimeObject
{
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::rawLength
	int32_t ___rawLength_0;
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::rawData
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___rawData_1;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::clearTextLength
	int32_t ___clearTextLength_2;
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::clearText
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___clearText_3;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::available
	int32_t ___available_4;
	// System.Security.Cryptography.ICryptoTransform ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::cryptoTransform
	RuntimeObject* ___cryptoTransform_5;
	// System.IO.Stream ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::inputStream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___inputStream_6;
};

// System.Security.Cryptography.KeySizes
struct KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4  : public RuntimeObject
{
	// System.Int32 System.Security.Cryptography.KeySizes::m_minSize
	int32_t ___m_minSize_0;
	// System.Int32 System.Security.Cryptography.KeySizes::m_maxSize
	int32_t ___m_maxSize_1;
	// System.Int32 System.Security.Cryptography.KeySizes::m_skipSize
	int32_t ___m_skipSize_2;
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

// ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow
struct OutputWindow_tAA96562C1DB1269206CBF4CDFC8ACE36C26A99E8  : public RuntimeObject
{
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow::window
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___window_0;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow::windowEnd
	int32_t ___windowEnd_1;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow::windowFilled
	int32_t ___windowFilled_2;
};

// ICSharpCode.SharpZipLib.Core.PathUtils
struct PathUtils_t0C0FC886A7BA5A539ED6FBCEE048488D241F160A  : public RuntimeObject
{
};

// ICSharpCode.SharpZipLib.Encryption.PkzipClassicCryptoBase
struct PkzipClassicCryptoBase_t511C47A22320A10E38F63EB601DD36A46637FD38  : public RuntimeObject
{
	// System.UInt32[] ICSharpCode.SharpZipLib.Encryption.PkzipClassicCryptoBase::keys
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___keys_0;
};

// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3  : public RuntimeObject
{
};

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t* ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;
};

// ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator
struct StreamManipulator_t626C6631E1D9BD1EAA5FDB4987C79A2F34A92689  : public RuntimeObject
{
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::window_
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___window__0;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::windowStart_
	int32_t ___windowStart__1;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::windowEnd_
	int32_t ___windowEnd__2;
	// System.UInt32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::buffer_
	uint32_t ___buffer__3;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::bitsInBuffer_
	int32_t ___bitsInBuffer__4;
};

// ICSharpCode.SharpZipLib.Core.StreamUtils
struct StreamUtils_tF3C1FFFEB85ECCEF7103BAF34DA07C22ADC6718C  : public RuntimeObject
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

// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8  : public RuntimeObject
{
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::BlockSizeValue
	int32_t ___BlockSizeValue_0;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::FeedbackSizeValue
	int32_t ___FeedbackSizeValue_1;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::IVValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___IVValue_2;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::KeyValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___KeyValue_3;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalBlockSizesValue
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___LegalBlockSizesValue_4;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___LegalKeySizesValue_5;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_6;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::ModeValue
	int32_t ___ModeValue_7;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::PaddingValue
	int32_t ___PaddingValue_8;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_23;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_26;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_24;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_25;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_27;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_30;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_31;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_32;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_33;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_34;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_36;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_37;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_28;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_29;
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

// ICSharpCode.SharpZipLib.Encryption.ZipAESTransform
struct ZipAESTransform_t81E0F17E8B4E0D3470F5D5A46D6DE031DDBC5C2C  : public RuntimeObject
{
	// System.Int32 ICSharpCode.SharpZipLib.Encryption.ZipAESTransform::_blockSize
	int32_t ____blockSize_0;
	// System.Security.Cryptography.ICryptoTransform ICSharpCode.SharpZipLib.Encryption.ZipAESTransform::_encryptor
	RuntimeObject* ____encryptor_1;
	// System.Byte[] ICSharpCode.SharpZipLib.Encryption.ZipAESTransform::_counterNonce
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____counterNonce_2;
	// System.Byte[] ICSharpCode.SharpZipLib.Encryption.ZipAESTransform::_encryptBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____encryptBuffer_3;
	// System.Int32 ICSharpCode.SharpZipLib.Encryption.ZipAESTransform::_encrPos
	int32_t ____encrPos_4;
	// System.Byte[] ICSharpCode.SharpZipLib.Encryption.ZipAESTransform::_pwdVerifier
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____pwdVerifier_5;
	// System.Security.Cryptography.IncrementalHash ICSharpCode.SharpZipLib.Encryption.ZipAESTransform::_hmacsha1
	IncrementalHash_tBD1EFC035497BBC804293E950C47D5392D9D76D0* ____hmacsha1_6;
	// System.Byte[] ICSharpCode.SharpZipLib.Encryption.ZipAESTransform::_authCode
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____authCode_7;
	// System.Boolean ICSharpCode.SharpZipLib.Encryption.ZipAESTransform::_writeMode
	bool ____writeMode_8;
};

// ICSharpCode.SharpZipLib.Core.PathUtils/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t4D8D3C6EF1270E6548975398AC843D57F25F048F  : public RuntimeObject
{
	// System.Char[] ICSharpCode.SharpZipLib.Core.PathUtils/<>c__DisplayClass0_0::invalidChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___invalidChars_0;
	// System.Boolean ICSharpCode.SharpZipLib.Core.PathUtils/<>c__DisplayClass0_0::cleanRootSep
	bool ___cleanRootSep_1;
};

// System.ArraySegment`1<System.Byte>
struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 
{
	// T[] System.ArraySegment`1::_array
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____array_1;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_2;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_3;
};

struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_StaticFields
{
	// System.ArraySegment`1<T> System.ArraySegment`1::<Empty>k__BackingField
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___U3CEmptyU3Ek__BackingField_0;
};

// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_38;
};

struct Task_1_t4C228DE57804012969575431CFF12D57C875552D_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t0BEF06D58E44525B9135AB0B22D016856EE69FF3* ___s_defaultFactory_39;
};

// System.Security.Cryptography.Aes
struct Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047  : public SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8
{
};

struct Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047_StaticFields
{
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.Aes::s_legalBlockSizes
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___s_legalBlockSizes_9;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.Aes::s_legalKeySizes
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___s_legalKeySizes_10;
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

// System.Security.Cryptography.HashAlgorithmName
struct HashAlgorithmName_t7FCDC65C37365F7AFAAA96952D14F51676480A3F 
{
	// System.String System.Security.Cryptography.HashAlgorithmName::_name
	String_t* ____name_0;
};
// Native definition for P/Invoke marshalling of System.Security.Cryptography.HashAlgorithmName
struct HashAlgorithmName_t7FCDC65C37365F7AFAAA96952D14F51676480A3F_marshaled_pinvoke
{
	char* ____name_0;
};
// Native definition for COM marshalling of System.Security.Cryptography.HashAlgorithmName
struct HashAlgorithmName_t7FCDC65C37365F7AFAAA96952D14F51676480A3F_marshaled_com
{
	Il2CppChar* ____name_0;
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

// ICSharpCode.SharpZipLib.Encryption.PkzipClassic
struct PkzipClassic_tFBEEDDCE7A3840AB2B8ABA2387B818EFA1963851  : public SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8
{
};

// ICSharpCode.SharpZipLib.Encryption.PkzipClassicDecryptCryptoTransform
struct PkzipClassicDecryptCryptoTransform_t2D73686A12E6EC67223F5891644A7E57759E3178  : public PkzipClassicCryptoBase_t511C47A22320A10E38F63EB601DD36A46637FD38
{
};

// ICSharpCode.SharpZipLib.Encryption.PkzipClassicEncryptCryptoTransform
struct PkzipClassicEncryptCryptoTransform_t221C3842059AAB91DA3A0029848D9C06F8093233  : public PkzipClassicCryptoBase_t511C47A22320A10E38F63EB601DD36A46637FD38
{
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

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject* ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=116
struct __StaticArrayInitTypeSizeU3D116_t4379CDA09C3AEACFB3F21D3E01C2946FAF0C1A4D 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D116_t4379CDA09C3AEACFB3F21D3E01C2946FAF0C1A4D__padding[116];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
struct __StaticArrayInitTypeSizeU3D12_t158631407689574D444918681EBC7FD1CBBDA860 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t158631407689574D444918681EBC7FD1CBBDA860__padding[12];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120
struct __StaticArrayInitTypeSizeU3D120_t17C93B168881F31BB6D232F4805E828BA1F6688B 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D120_t17C93B168881F31BB6D232F4805E828BA1F6688B__padding[120];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_t0D936C805B7F519A7E2F85E11BAB4BACFE3542C0 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_t0D936C805B7F519A7E2F85E11BAB4BACFE3542C0__padding[16];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2048
struct __StaticArrayInitTypeSizeU3D2048_tDDE0E9B287850E7D3C0C4B38EDF570715E6C027F 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2048_tDDE0E9B287850E7D3C0C4B38EDF570715E6C027F__padding[2048];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40
struct __StaticArrayInitTypeSizeU3D40_t43E0D0A80D504FD33253989687993704985C3140 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D40_t43E0D0A80D504FD33253989687993704985C3140__padding[40];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=76
struct __StaticArrayInitTypeSizeU3D76_t6769B150454113C7C86C26F5D2F58E1E8A2AF363 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D76_t6769B150454113C7C86C26F5D2F58E1E8A2AF363__padding[76];
	};
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tFA7F7F30E34DF4A03E60907D6B496B57A82AC22D  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_tFA7F7F30E34DF4A03E60907D6B496B57A82AC22D_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=116 <PrivateImplementationDetails>::52AA14DBFAD385CC0A67E081C133BE3C353A46E2260E564186F0FEF33B8874E5
	__StaticArrayInitTypeSizeU3D116_t4379CDA09C3AEACFB3F21D3E01C2946FAF0C1A4D ___52AA14DBFAD385CC0A67E081C133BE3C353A46E2260E564186F0FEF33B8874E5_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::6116ACF9BA29EF61E63AF05766A8CCBC05D3DF52FE07AE0DBCD10FF1065B6938
	__StaticArrayInitTypeSizeU3D12_t158631407689574D444918681EBC7FD1CBBDA860 ___6116ACF9BA29EF61E63AF05766A8CCBC05D3DF52FE07AE0DBCD10FF1065B6938_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::8A09971C787BEEE474BD54896939731E2A3355B6E32B43DBAD8C01B16989FA81
	__StaticArrayInitTypeSizeU3D40_t43E0D0A80D504FD33253989687993704985C3140 ___8A09971C787BEEE474BD54896939731E2A3355B6E32B43DBAD8C01B16989FA81_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::9BF8B8F5278471CADD7855C9B61F9E373EE074000698135096C3092424366308
	__StaticArrayInitTypeSizeU3D40_t43E0D0A80D504FD33253989687993704985C3140 ___9BF8B8F5278471CADD7855C9B61F9E373EE074000698135096C3092424366308_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::A7694C04CA4B4D91FB020E8B56FE479930289B8E7A568A1A5D7E0265C796AB8C
	__StaticArrayInitTypeSizeU3D40_t43E0D0A80D504FD33253989687993704985C3140 ___A7694C04CA4B4D91FB020E8B56FE479930289B8E7A568A1A5D7E0265C796AB8C_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::A7BECD43C1DE3B2E78F02487AF261536EF05E65091673703AE6BC720345CCF2D
	__StaticArrayInitTypeSizeU3D16_t0D936C805B7F519A7E2F85E11BAB4BACFE3542C0 ___A7BECD43C1DE3B2E78F02487AF261536EF05E65091673703AE6BC720345CCF2D_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::B23D510F520CB4BA8AFA847F8A40E757C40CB6A55B237EFA1AC6D3984911B114
	__StaticArrayInitTypeSizeU3D120_t17C93B168881F31BB6D232F4805E828BA1F6688B ___B23D510F520CB4BA8AFA847F8A40E757C40CB6A55B237EFA1AC6D3984911B114_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=76 <PrivateImplementationDetails>::C133E473E5E653C5C4AEDB8BCC1C1A3A44D384FC0B6C0FCF04672B1B325EC01B
	__StaticArrayInitTypeSizeU3D76_t6769B150454113C7C86C26F5D2F58E1E8A2AF363 ___C133E473E5E653C5C4AEDB8BCC1C1A3A44D384FC0B6C0FCF04672B1B325EC01B_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::CD2382355D9226A8C1CEEB9A9C63F823E230005D8BCBB8CC159DB065D7FD954C
	__StaticArrayInitTypeSizeU3D40_t43E0D0A80D504FD33253989687993704985C3140 ___CD2382355D9226A8C1CEEB9A9C63F823E230005D8BCBB8CC159DB065D7FD954C_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::F287F1380EB445B32353E2806270F282A7CA37F5A2770C58F4A011F1328E334F
	__StaticArrayInitTypeSizeU3D40_t43E0D0A80D504FD33253989687993704985C3140 ___F287F1380EB445B32353E2806270F282A7CA37F5A2770C58F4A011F1328E334F_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=116 <PrivateImplementationDetails>::F8D7861760C88CC514F66095AF0AED47ECBA063ADB65F47125ED07BCC2CF9842
	__StaticArrayInitTypeSizeU3D116_t4379CDA09C3AEACFB3F21D3E01C2946FAF0C1A4D ___F8D7861760C88CC514F66095AF0AED47ECBA063ADB65F47125ED07BCC2CF9842_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2048 <PrivateImplementationDetails>::FA6F7D5596F6084EE582060B76239C49C1BF8567F7EA556E2D83971C75E26951
	__StaticArrayInitTypeSizeU3D2048_tDDE0E9B287850E7D3C0C4B38EDF570715E6C027F ___FA6F7D5596F6084EE582060B76239C49C1BF8567F7EA556E2D83971C75E26951_11;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::FC216F5C5AE2947D800794ECD5F752EE8381073C2E5D0D095FDA040F541702F3
	__StaticArrayInitTypeSizeU3D120_t17C93B168881F31BB6D232F4805E828BA1F6688B ___FC216F5C5AE2947D800794ECD5F752EE8381073C2E5D0D095FDA040F541702F3_12;
};

// ICSharpCode.SharpZipLib.BZip2.BZip2InputStream
struct BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::last
	int32_t ___last_5;
	// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::origPtr
	int32_t ___origPtr_6;
	// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::blockSize100k
	int32_t ___blockSize100k_7;
	// System.Boolean ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::blockRandomised
	bool ___blockRandomised_8;
	// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::bsBuff
	int32_t ___bsBuff_9;
	// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::bsLive
	int32_t ___bsLive_10;
	// ICSharpCode.SharpZipLib.Checksum.IChecksum ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::mCrc
	RuntimeObject* ___mCrc_11;
	// System.Boolean[] ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::inUse
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___inUse_12;
	// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::nInUse
	int32_t ___nInUse_13;
	// System.Byte[] ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::seqToUnseq
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___seqToUnseq_14;
	// System.Byte[] ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::unseqToSeq
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___unseqToSeq_15;
	// System.Byte[] ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::selector
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___selector_16;
	// System.Byte[] ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::selectorMtf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___selectorMtf_17;
	// System.Int32[] ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::tt
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___tt_18;
	// System.Byte[] ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::ll8
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ll8_19;
	// System.Int32[] ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::unzftab
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___unzftab_20;
	// System.Int32[][] ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::limit
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ___limit_21;
	// System.Int32[][] ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::baseArray
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ___baseArray_22;
	// System.Int32[][] ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::perm
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ___perm_23;
	// System.Int32[] ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::minLens
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___minLens_24;
	// System.IO.Stream ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::baseStream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___baseStream_25;
	// System.Boolean ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::streamEnd
	bool ___streamEnd_26;
	// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::currentChar
	int32_t ___currentChar_27;
	// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::currentState
	int32_t ___currentState_28;
	// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::storedBlockCRC
	int32_t ___storedBlockCRC_29;
	// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::storedCombinedCRC
	int32_t ___storedCombinedCRC_30;
	// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::computedBlockCRC
	int32_t ___computedBlockCRC_31;
	// System.UInt32 ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::computedCombinedCRC
	uint32_t ___computedCombinedCRC_32;
	// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::count
	int32_t ___count_33;
	// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::chPrev
	int32_t ___chPrev_34;
	// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::ch2
	int32_t ___ch2_35;
	// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::tPos
	int32_t ___tPos_36;
	// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::rNToGo
	int32_t ___rNToGo_37;
	// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::rTPos
	int32_t ___rTPos_38;
	// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::i2
	int32_t ___i2_39;
	// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::j2
	int32_t ___j2_40;
	// System.Byte ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::z
	uint8_t ___z_41;
	// System.Boolean ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::<IsStreamOwner>k__BackingField
	bool ___U3CIsStreamOwnerU3Ek__BackingField_42;
};

// System.Security.Cryptography.CryptoStream
struct CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.IO.Stream System.Security.Cryptography.CryptoStream::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_5;
	// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.CryptoStream::_transform
	RuntimeObject* ____transform_6;
	// System.Security.Cryptography.CryptoStreamMode System.Security.Cryptography.CryptoStream::_transformMode
	int32_t ____transformMode_7;
	// System.Byte[] System.Security.Cryptography.CryptoStream::_inputBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____inputBuffer_8;
	// System.Int32 System.Security.Cryptography.CryptoStream::_inputBufferIndex
	int32_t ____inputBufferIndex_9;
	// System.Int32 System.Security.Cryptography.CryptoStream::_inputBlockSize
	int32_t ____inputBlockSize_10;
	// System.Byte[] System.Security.Cryptography.CryptoStream::_outputBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____outputBuffer_11;
	// System.Int32 System.Security.Cryptography.CryptoStream::_outputBufferIndex
	int32_t ____outputBufferIndex_12;
	// System.Int32 System.Security.Cryptography.CryptoStream::_outputBlockSize
	int32_t ____outputBlockSize_13;
	// System.Boolean System.Security.Cryptography.CryptoStream::_canRead
	bool ____canRead_14;
	// System.Boolean System.Security.Cryptography.CryptoStream::_canWrite
	bool ____canWrite_15;
	// System.Boolean System.Security.Cryptography.CryptoStream::_finalBlockTransformed
	bool ____finalBlockTransformed_16;
	// System.Threading.SemaphoreSlim System.Security.Cryptography.CryptoStream::_lazyAsyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____lazyAsyncActiveSemaphore_17;
	// System.Boolean System.Security.Cryptography.CryptoStream::_leaveOpen
	bool ____leaveOpen_18;
};

// ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream
struct DeflaterOutputStream_t1A33D4BC42D9AF34A523563436A1C6A1136CE259  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::<IsStreamOwner>k__BackingField
	bool ___U3CIsStreamOwnerU3Ek__BackingField_5;
	// System.Security.Cryptography.ICryptoTransform ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::cryptoTransform_
	RuntimeObject* ___cryptoTransform__6;
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::AESAuthCode
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___AESAuthCode_7;
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::buffer_
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer__8;
	// ICSharpCode.SharpZipLib.Zip.Compression.Deflater ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::deflater_
	Deflater_t8287F9AE01983279256AABA94642FF95CC633FB4* ___deflater__9;
	// System.IO.Stream ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::baseOutputStream_
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___baseOutputStream__10;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::isClosed_
	bool ___isClosed__11;
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

// System.Security.Cryptography.IncrementalHash
struct IncrementalHash_tBD1EFC035497BBC804293E950C47D5392D9D76D0  : public RuntimeObject
{
	// System.Security.Cryptography.HashAlgorithmName System.Security.Cryptography.IncrementalHash::_algorithmName
	HashAlgorithmName_t7FCDC65C37365F7AFAAA96952D14F51676480A3F ____algorithmName_0;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.IncrementalHash::_hash
	HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* ____hash_1;
	// System.Boolean System.Security.Cryptography.IncrementalHash::_disposed
	bool ____disposed_2;
	// System.Boolean System.Security.Cryptography.IncrementalHash::_resetPending
	bool ____resetPending_3;
};

// ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream
struct InflaterInputStream_t25453CA4D454447A9D30F0011CCE23037B465EA2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::<IsStreamOwner>k__BackingField
	bool ___U3CIsStreamOwnerU3Ek__BackingField_5;
	// ICSharpCode.SharpZipLib.Zip.Compression.Inflater ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::inf
	Inflater_t2F41C3E2608A77A69EDAB071BCA9752305595494* ___inf_6;
	// ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::inputBuffer
	InflaterInputBuffer_t947724C1CD4D44B75584D59D1ECA71C121D62129* ___inputBuffer_7;
	// System.IO.Stream ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::baseInputStream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___baseInputStream_8;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::isClosed
	bool ___isClosed_9;
};

// ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged
struct PkzipClassicManaged_tC3A9C9A5CC6D9FDD958207518E982E5C54080DAB  : public PkzipClassic_tFBEEDDCE7A3840AB2B8ABA2387B818EFA1963851
{
	// System.Byte[] ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged::key_
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key__9;
};

// System.Security.Cryptography.RNGCryptoServiceProvider
struct RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170  : public RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3
{
	// System.IntPtr System.Security.Cryptography.RNGCryptoServiceProvider::_handle
	intptr_t ____handle_1;
};

struct RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170_StaticFields
{
	// System.Object System.Security.Cryptography.RNGCryptoServiceProvider::_lock
	RuntimeObject* ____lock_0;
};

// System.Security.Cryptography.Rfc2898DeriveBytes
struct Rfc2898DeriveBytes_t0614FA7A5D23F6A9C781F7CA38E07BD8295256FB  : public DeriveBytes_t385A92C1BE5732BD434FBD449B8BFA1A7702A179
{
	// System.Byte[] System.Security.Cryptography.Rfc2898DeriveBytes::_password
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____password_1;
	// System.Byte[] System.Security.Cryptography.Rfc2898DeriveBytes::_salt
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____salt_2;
	// System.UInt32 System.Security.Cryptography.Rfc2898DeriveBytes::_iterations
	uint32_t ____iterations_3;
	// System.Security.Cryptography.HMAC System.Security.Cryptography.Rfc2898DeriveBytes::_hmac
	HMAC_tD2DDF5CB02E7064020823E8EE01DA127E46E1684* ____hmac_4;
	// System.Int32 System.Security.Cryptography.Rfc2898DeriveBytes::_blockSize
	int32_t ____blockSize_5;
	// System.Byte[] System.Security.Cryptography.Rfc2898DeriveBytes::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_6;
	// System.UInt32 System.Security.Cryptography.Rfc2898DeriveBytes::_block
	uint32_t ____block_7;
	// System.Int32 System.Security.Cryptography.Rfc2898DeriveBytes::_startIndex
	int32_t ____startIndex_8;
	// System.Int32 System.Security.Cryptography.Rfc2898DeriveBytes::_endIndex
	int32_t ____endIndex_9;
	// System.Security.Cryptography.HashAlgorithmName System.Security.Cryptography.Rfc2898DeriveBytes::<HashAlgorithm>k__BackingField
	HashAlgorithmName_t7FCDC65C37365F7AFAAA96952D14F51676480A3F ___U3CHashAlgorithmU3Ek__BackingField_10;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
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

// ICSharpCode.SharpZipLib.SharpZipBaseException
struct SharpZipBaseException_t1C56A0584338F84B653352995CA5718A5BF2EB75  : public Exception_t
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// ICSharpCode.SharpZipLib.Encryption.ZipAESStream
struct ZipAESStream_t9CB50BCC4129C9B2D9EF26F8FE10CB1933AB0226  : public CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65
{
	// System.IO.Stream ICSharpCode.SharpZipLib.Encryption.ZipAESStream::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_19;
	// ICSharpCode.SharpZipLib.Encryption.ZipAESTransform ICSharpCode.SharpZipLib.Encryption.ZipAESStream::_transform
	ZipAESTransform_t81E0F17E8B4E0D3470F5D5A46D6DE031DDBC5C2C* ____transform_20;
	// System.Byte[] ICSharpCode.SharpZipLib.Encryption.ZipAESStream::_slideBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____slideBuffer_21;
	// System.Int32 ICSharpCode.SharpZipLib.Encryption.ZipAESStream::_slideBufStartPos
	int32_t ____slideBufStartPos_22;
	// System.Int32 ICSharpCode.SharpZipLib.Encryption.ZipAESStream::_slideBufFreePos
	int32_t ____slideBufFreePos_23;
	// System.Byte[] ICSharpCode.SharpZipLib.Encryption.ZipAESStream::_transformBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____transformBuffer_24;
	// System.Int32 ICSharpCode.SharpZipLib.Encryption.ZipAESStream::_transformBufferFreePos
	int32_t ____transformBufferFreePos_25;
	// System.Int32 ICSharpCode.SharpZipLib.Encryption.ZipAESStream::_transformBufferStartPos
	int32_t ____transformBufferStartPos_26;
};

// System.Func`3<System.Char,System.Int32,System.Char>
struct Func_3_t2B0D96B11960CC2841861EAC2E3DEA368500085D  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// ICSharpCode.SharpZipLib.BZip2.BZip2Exception
struct BZip2Exception_t1741AC6EA11FAF77F0D91DECA2B9440919007096  : public SharpZipBaseException_t1C56A0584338F84B653352995CA5718A5BF2EB75
{
};

// System.Security.Cryptography.CryptographicException
struct CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// ICSharpCode.SharpZipLib.Zip.ZipException
struct ZipException_t96D0219AEA3A9ACA11F3DD018FDAA302995E720F  : public SharpZipBaseException_t1C56A0584338F84B653352995CA5718A5BF2EB75
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// System.IO.EndOfStreamException
struct EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028  : public IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910
{
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
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03  : public RuntimeArray
{
	ALIGN_FIELD (8) KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4* m_Items[1];

	inline KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
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
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E  : public RuntimeArray
{
	ALIGN_FIELD (8) Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* m_Items[1];

	inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[][]
struct CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680  : public RuntimeArray
{
	ALIGN_FIELD (8) CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* m_Items[1];

	inline CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromResult<System.Int32>(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C228DE57804012969575431CFF12D57C875552D* Task_FromResult_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1AB522FB726C8CC51C9F00459B7CE60065461032_gshared (int32_t ___result0, const RuntimeMethod* method) ;
// T[] ICSharpCode.SharpZipLib.Core.Empty::Array<System.Byte>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Empty_Array_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3D3E9C7401E6F237EFF9B076466763048CF14917_gshared (const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Take<System.Char>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Take_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m3866E2EB7A63709492EE683A90BA8BD671A4D314_gshared (RuntimeObject* ___source0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Void System.Func`3<System.Char,System.Int32,System.Char>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_3__ctor_mD53871D13F8D31590D5CDA52E4CB5763701A6EA9_gshared (Func_3_t2B0D96B11960CC2841861EAC2E3DEA368500085D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Char,System.Char>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`3<TSource,System.Int32,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m3DB5A07821652CBD6C7F7BC5A43F7610DB230567_gshared (RuntimeObject* ___source0, Func_3_t2B0D96B11960CC2841861EAC2E3DEA368500085D* ___selector1, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Char>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* Enumerable_ToArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mECF2AE4F9225A8A7CE16CA858A60B98A7627699C_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Contains<System.Char>(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Contains_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m3979BE7355F65890520EC3C8092E2983495AE03D_gshared (RuntimeObject* ___source0, Il2CppChar ___value1, const RuntimeMethod* method) ;
// System.Int32 System.ArraySegment`1<System.Byte>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) ;
// System.Int32 System.ArraySegment`1<System.Byte>::get_Offset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) ;
// T[] System.ArraySegment`1<System.Byte>::get_Array()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) ;

// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::.ctor(System.IO.Stream,ICSharpCode.SharpZipLib.Zip.Compression.Deflater,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflaterOutputStream__ctor_m3605F6B8B630FB441D8A737AFDFEF80CC2F33842 (DeflaterOutputStream_t1A33D4BC42D9AF34A523563436A1C6A1136CE259* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___baseOutputStream0, Deflater_t8287F9AE01983279256AABA94642FF95CC633FB4* ___deflater1, int32_t ___bufferSize2, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Deflater::Finish()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflater_Finish_mDFAC32ED1554D6AA19FADAF0764E03B18455E43E (Deflater_t8287F9AE01983279256AABA94642FF95CC633FB4* __this, const RuntimeMethod* method) ;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Deflater::Deflate(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Deflater_Deflate_m40F7F94572DEB3C858D91F9D4B5A6692599EFC59 (Deflater_t8287F9AE01983279256AABA94642FF95CC633FB4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::EncryptBlock(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflaterOutputStream_EncryptBlock_m9A63B02E6654493AB99CFD75995233AF853E4D74 (DeflaterOutputStream_t1A33D4BC42D9AF34A523563436A1C6A1136CE259* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Deflater::get_IsFinished()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Deflater_get_IsFinished_m6F269B459AFA741C71E6E44725571226EBCBC03C (Deflater_t8287F9AE01983279256AABA94642FF95CC633FB4* __this, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.SharpZipBaseException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharpZipBaseException__ctor_m07FFE4C817E577AEA017E1508D178F0654E0A81C (SharpZipBaseException_t1C56A0584338F84B653352995CA5718A5BF2EB75* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Byte[] ICSharpCode.SharpZipLib.Encryption.ZipAESTransform::GetAuthCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ZipAESTransform_GetAuthCode_m30147C4C3EB8C4777CE236DEC81012EB3AA959A4 (ZipAESTransform_t81E0F17E8B4E0D3470F5D5A46D6DE031DDBC5C2C* __this, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::Deflate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflaterOutputStream_Deflate_m3E563D2FFE72D2658FD1C852F2AF3787F9DE629D (DeflaterOutputStream_t1A33D4BC42D9AF34A523563436A1C6A1136CE259* __this, bool ___flushing0, const RuntimeMethod* method) ;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Deflater::get_IsNeedingInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Deflater_get_IsNeedingInput_mA2828850583675D48457B76E1B6A3442E2587EA5 (Deflater_t8287F9AE01983279256AABA94642FF95CC633FB4* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Deflater::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflater_Flush_m024CBF07E759D4111D7FCB34F041E53AA5D09B51 (Deflater_t8287F9AE01983279256AABA94642FF95CC633FB4* __this, const RuntimeMethod* method) ;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::get_IsStreamOwner()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DeflaterOutputStream_get_IsStreamOwner_mEBD8D769B49DA7336F4D52E9113216EED307C859_inline (DeflaterOutputStream_t1A33D4BC42D9AF34A523563436A1C6A1136CE259* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::GetAuthCodeIfAES()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflaterOutputStream_GetAuthCodeIfAES_m4A2E7F2334C24CB3E8729FADB161D32B637988AE (DeflaterOutputStream_t1A33D4BC42D9AF34A523563436A1C6A1136CE259* __this, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Deflater::SetInput(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflater_SetInput_m99C25F50DB61A9B758DD173553CA602161079E9E (Deflater_t8287F9AE01983279256AABA94642FF95CC633FB4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::Deflate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflaterOutputStream_Deflate_mCB7284893B7CE4608DE0E8EEFC43D329EE23FB5B (DeflaterOutputStream_t1A33D4BC42D9AF34A523563436A1C6A1136CE259* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Inflater::SetInput(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inflater_SetInput_mD03E4341BFA7288F0E8CDA67B7D2F511EE97077A (Inflater_t2F41C3E2608A77A69EDAB071BCA9752305595494* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::.ctor(System.IO.Stream,ICSharpCode.SharpZipLib.Zip.Compression.Inflater,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflaterInputStream__ctor_mEB11817AAD6E905924DCE2C8CF758DFFA0B15C91 (InflaterInputStream_t25453CA4D454447A9D30F0011CCE23037B465EA2* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___baseInputStream0, Inflater_t2F41C3E2608A77A69EDAB071BCA9752305595494* ___inflater1, int32_t ___bufferSize2, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::.ctor(System.IO.Stream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflaterInputBuffer__ctor_m042F879BBDA06AA51FF199DBA3B9BF798A8F8929 (InflaterInputBuffer_t947724C1CD4D44B75584D59D1ECA71C121D62129* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, int32_t ___bufferSize1, const RuntimeMethod* method) ;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::get_Available()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InflaterInputBuffer_get_Available_m5E66CD4D88490D425B7AF3636A27538003E48169_inline (InflaterInputBuffer_t947724C1CD4D44B75584D59D1ECA71C121D62129* __this, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::Fill()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflaterInputBuffer_Fill_m29B03A52B8B5F49C784486079FDE4BA5C3C77231 (InflaterInputBuffer_t947724C1CD4D44B75584D59D1ECA71C121D62129* __this, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::SetInflaterInput(ICSharpCode.SharpZipLib.Zip.Compression.Inflater)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflaterInputBuffer_SetInflaterInput_m303A5BED84FD7C3C23B73448E5405F497F2542C4 (InflaterInputBuffer_t947724C1CD4D44B75584D59D1ECA71C121D62129* __this, Inflater_t2F41C3E2608A77A69EDAB071BCA9752305595494* ___inflater0, const RuntimeMethod* method) ;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::get_IsStreamOwner()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InflaterInputStream_get_IsStreamOwner_mF78646DE2A962B44726310E31223230C8617F0CC_inline (InflaterInputStream_t25453CA4D454447A9D30F0011CCE23037B465EA2* __this, const RuntimeMethod* method) ;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Inflater::get_IsNeedingDictionary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Inflater_get_IsNeedingDictionary_m244394D004966CD7C5FBCFB38470134B9E76E5B4 (Inflater_t2F41C3E2608A77A69EDAB071BCA9752305595494* __this, const RuntimeMethod* method) ;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Inflater::Inflate(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Inflater_Inflate_m81859B7CD192B60897C8137AF1649556B7CA8E3D (Inflater_t2F41C3E2608A77A69EDAB071BCA9752305595494* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Inflater::get_IsFinished()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Inflater_get_IsFinished_mEB6FCF59E91599BB0DF568A190DE2A9F85CDB20E (Inflater_t2F41C3E2608A77A69EDAB071BCA9752305595494* __this, const RuntimeMethod* method) ;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Inflater::get_IsNeedingInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Inflater_get_IsNeedingInput_m379F0BEB540051929C7CC519DDCC50707890B007 (Inflater_t2F41C3E2608A77A69EDAB071BCA9752305595494* __this, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::Fill()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflaterInputStream_Fill_mBC6A8C31004A86E3363600E8307A7D5FAB29CB4A (InflaterInputStream_t25453CA4D454447A9D30F0011CCE23037B465EA2* __this, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipException__ctor_mDEED5E97D6904FCD3B5A7183E81AFAC479DE85C4 (ZipException_t96D0219AEA3A9ACA11F3DD018FDAA302995E720F* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7 (RuntimeArray* ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray* ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow::SlowRepeat(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputWindow_SlowRepeat_mAED2CEC54827CA0EDE654F8C012CB54D6903FE7A (OutputWindow_tAA96562C1DB1269206CBF4CDFC8ACE36C26A99E8* __this, int32_t ___repStart0, int32_t ___length1, int32_t ___distance2, const RuntimeMethod* method) ;
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::get_AvailableBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StreamManipulator_get_AvailableBytes_m3F02851B6B30C7F729CD93D4CB6917473D45FDB4 (StreamManipulator_t626C6631E1D9BD1EAA5FDB4987C79A2F34A92689* __this, const RuntimeMethod* method) ;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::CopyBytes(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StreamManipulator_CopyBytes_m326B46651BD903626068679C41A1ADF495A757D6 (StreamManipulator_t626C6631E1D9BD1EAA5FDB4987C79A2F34A92689* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, const RuntimeMethod* method) ;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::PeekBits(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StreamManipulator_PeekBits_mF211C8B59086D72F8836E9F4F5619102F71E149A (StreamManipulator_t626C6631E1D9BD1EAA5FDB4987C79A2F34A92689* __this, int32_t ___bitCount0, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::DropBits(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamManipulator_DropBits_m094CABA3AB3B1B70D2680E4FB8962EBD6B8E0E49 (StreamManipulator_t626C6631E1D9BD1EAA5FDB4987C79A2F34A92689* __this, int32_t ___bitCount0, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.UInt32 ICSharpCode.SharpZipLib.Checksum.Crc32::ComputeCrc32(System.UInt32,System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t Crc32_ComputeCrc32_m415C4FD62B6CD1AC763E92C848DFD6B9AF7157DD_inline (uint32_t ___oldCrc0, uint8_t ___bval1, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SymmetricAlgorithm__ctor_mB028F36D59487421C796D35BE91150C3BDFCEC5A (SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8* __this, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassicCryptoBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PkzipClassicCryptoBase__ctor_m013F4376CF64AA2B5D5DE9BB20A19A6AA2842D86 (PkzipClassicCryptoBase_t511C47A22320A10E38F63EB601DD36A46637FD38* __this, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassicCryptoBase::SetKeys(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PkzipClassicCryptoBase_SetKeys_m0444E777B325A95CB7E8922D431D84E413B91469 (PkzipClassicCryptoBase_t511C47A22320A10E38F63EB601DD36A46637FD38* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keyData0, const RuntimeMethod* method) ;
// System.Int32 ICSharpCode.SharpZipLib.Encryption.PkzipClassicEncryptCryptoTransform::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PkzipClassicEncryptCryptoTransform_TransformBlock_mF6ED7F17496AAC2E4E709EB95FA246055A962A4B (PkzipClassicEncryptCryptoTransform_t221C3842059AAB91DA3A0029848D9C06F8093233* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outputBuffer3, int32_t ___outputOffset4, const RuntimeMethod* method) ;
// System.Byte ICSharpCode.SharpZipLib.Encryption.PkzipClassicCryptoBase::TransformByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PkzipClassicCryptoBase_TransformByte_m562E81B3284793B00040A9B1DE61B5D96DF443E1 (PkzipClassicCryptoBase_t511C47A22320A10E38F63EB601DD36A46637FD38* __this, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassicCryptoBase::UpdateKeys(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PkzipClassicCryptoBase_UpdateKeys_mBBDD4941427951A62A21C2CDD8FDE31A5F1A0441 (PkzipClassicCryptoBase_t511C47A22320A10E38F63EB601DD36A46637FD38* __this, uint8_t ___ch0, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassicCryptoBase::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PkzipClassicCryptoBase_Reset_m4AAF69726582F9C9EA9F8109D32B13CA661C703B (PkzipClassicCryptoBase_t511C47A22320A10E38F63EB601DD36A46637FD38* __this, const RuntimeMethod* method) ;
// System.Int32 ICSharpCode.SharpZipLib.Encryption.PkzipClassicDecryptCryptoTransform::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PkzipClassicDecryptCryptoTransform_TransformBlock_m4F754CB891277C9DA593C40BBCCB13BE9DDB0E1C (PkzipClassicDecryptCryptoTransform_t2D73686A12E6EC67223F5891644A7E57759E3178* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outputBuffer3, int32_t ___outputOffset4, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.CryptographicException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.KeySizes::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeySizes__ctor_m0488C1FC71E4A417E16EA1E06FC24F4D7DC80104 (KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4* __this, int32_t ___minSize0, int32_t ___maxSize1, int32_t ___skipSize2, const RuntimeMethod* method) ;
// System.Object System.Array::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042 (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RNGCryptoServiceProvider__ctor_m605146E692C0209B3FFE83F7AC94335CA089CA09 (RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170* __this, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassicEncryptCryptoTransform::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PkzipClassicEncryptCryptoTransform__ctor_mF6FEC4C002E888A7742B7476D0370407CE8F85E3 (PkzipClassicEncryptCryptoTransform_t221C3842059AAB91DA3A0029848D9C06F8093233* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keyBlock0, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassicDecryptCryptoTransform::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PkzipClassicDecryptCryptoTransform__ctor_m71FE21D85A22418C575FA90E0BAC63B2F0B4E931 (PkzipClassicDecryptCryptoTransform_t2D73686A12E6EC67223F5891644A7E57759E3178* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keyBlock0, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassic::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PkzipClassic__ctor_m9725AEEB72479F55DFDB5AB212437BE7E938A1E5 (PkzipClassic_tFBEEDDCE7A3840AB2B8ABA2387B818EFA1963851* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.CryptoStream::.ctor(System.IO.Stream,System.Security.Cryptography.ICryptoTransform,System.Security.Cryptography.CryptoStreamMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CryptoStream__ctor_mFCB7E1F2B96287E968978AC12DC1B1F4E44851B6 (CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, RuntimeObject* ___transform1, int32_t ___mode2, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Boolean ICSharpCode.SharpZipLib.Encryption.ZipAESStream::get_HasBufferedData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZipAESStream_get_HasBufferedData_mEFAA3542F9B6A9DD396EFD7C24E494E7A7E658E6 (ZipAESStream_t9CB50BCC4129C9B2D9EF26F8FE10CB1933AB0226* __this, const RuntimeMethod* method) ;
// System.Int32 ICSharpCode.SharpZipLib.Encryption.ZipAESStream::ReadBufferedData(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZipAESStream_ReadBufferedData_mA2E55A04EC90833054995728FF1D7E53D45F4FCA (ZipAESStream_t9CB50BCC4129C9B2D9EF26F8FE10CB1933AB0226* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Int32 ICSharpCode.SharpZipLib.Encryption.ZipAESStream::ReadAndTransform(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZipAESStream_ReadAndTransform_mBB994079CAFA0957CA1EEF16B7D4ABE6567EDD93 (ZipAESStream_t9CB50BCC4129C9B2D9EF26F8FE10CB1933AB0226* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromResult<System.Int32>(TResult)
inline Task_1_t4C228DE57804012969575431CFF12D57C875552D* Task_FromResult_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1AB522FB726C8CC51C9F00459B7CE60065461032 (int32_t ___result0, const RuntimeMethod* method)
{
	return ((  Task_1_t4C228DE57804012969575431CFF12D57C875552D* (*) (int32_t, const RuntimeMethod*))Task_FromResult_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1AB522FB726C8CC51C9F00459B7CE60065461032_gshared)(___result0, method);
}
// System.Int32 ICSharpCode.SharpZipLib.Core.StreamUtils::ReadRequestedBytes(System.IO.Stream,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StreamUtils_ReadRequestedBytes_mD39A463BD7A4D4E9CE6EA2996775843E95660E91 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer1, int32_t ___offset2, int32_t ___count3, const RuntimeMethod* method) ;
// System.Int32 ICSharpCode.SharpZipLib.Encryption.ZipAESStream::TransformAndBufferBlock(System.Byte[],System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZipAESStream_TransformAndBufferBlock_m096433E20FEE76C760F58390E290A1FCBF6AFB92 (ZipAESStream_t9CB50BCC4129C9B2D9EF26F8FE10CB1933AB0226* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, int32_t ___blockSize3, const RuntimeMethod* method) ;
// System.Int32 ICSharpCode.SharpZipLib.Encryption.ZipAESTransform::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZipAESTransform_TransformBlock_m36C6662BD0F182056F2D71AB0B3FB6E9F70FB31D (ZipAESTransform_t81E0F17E8B4E0D3470F5D5A46D6DE031DDBC5C2C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outputBuffer3, int32_t ___outputOffset4, const RuntimeMethod* method) ;
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.Rfc2898DeriveBytes::.ctor(System.String,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rfc2898DeriveBytes__ctor_m6A404112259375CF4C7A32B9205F6DDBC2EA1E8A (Rfc2898DeriveBytes_t0614FA7A5D23F6A9C781F7CA38E07BD8295256FB* __this, String_t* ___password0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___salt1, int32_t ___iterations2, const RuntimeMethod* method) ;
// System.Security.Cryptography.Aes System.Security.Cryptography.Aes::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* Aes_Create_mA7AA221AEC418AC59B642AB2C536766C1309C006 (const RuntimeMethod* method) ;
// System.Security.Cryptography.HashAlgorithmName System.Security.Cryptography.HashAlgorithmName::get_SHA1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashAlgorithmName_t7FCDC65C37365F7AFAAA96952D14F51676480A3F HashAlgorithmName_get_SHA1_m01E7CFC175B30F11BFF73055188809BC255928A7 (const RuntimeMethod* method) ;
// System.Security.Cryptography.IncrementalHash System.Security.Cryptography.IncrementalHash::CreateHMAC(System.Security.Cryptography.HashAlgorithmName,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IncrementalHash_tBD1EFC035497BBC804293E950C47D5392D9D76D0* IncrementalHash_CreateHMAC_mBCE86D12ACFC9DD81B0F1008D5C437C19F908FC1 (HashAlgorithmName_t7FCDC65C37365F7AFAAA96952D14F51676480A3F ___hashAlgorithm0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key1, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.IncrementalHash::AppendData(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncrementalHash_AppendData_m70E6EF7A42C38CDFD1423DD2EBAB133C6E365D0F (IncrementalHash_tBD1EFC035497BBC804293E950C47D5392D9D76D0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Byte[] System.Security.Cryptography.IncrementalHash::GetHashAndReset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* IncrementalHash_GetHashAndReset_mF882C501DCB4EC86E7A04926448F0E4B62984DCF (IncrementalHash_tBD1EFC035497BBC804293E950C47D5392D9D76D0* __this, const RuntimeMethod* method) ;
// System.Void System.NotImplementedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742 (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, String_t* ___message0, const RuntimeMethod* method) ;
// T[] ICSharpCode.SharpZipLib.Core.Empty::Array<System.Byte>()
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Empty_Array_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3D3E9C7401E6F237EFF9B076466763048CF14917 (const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (const RuntimeMethod*))Empty_Array_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3D3E9C7401E6F237EFF9B076466763048CF14917_gshared)(method);
}
// System.Void ICSharpCode.SharpZipLib.Core.PathUtils/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_m7D63BF759246E81E9B091B173C12A6D586A1438E (U3CU3Ec__DisplayClass0_0_t4D8D3C6EF1270E6548975398AC843D57F25F048F* __this, const RuntimeMethod* method) ;
// System.Char[] System.IO.Path::GetInvalidPathChars()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* Path_GetInvalidPathChars_m771E6754D2B0E556D0363B0F4C21A500D820E6DD (const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Take<System.Char>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
inline RuntimeObject* Enumerable_Take_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m3866E2EB7A63709492EE683A90BA8BD671A4D314 (RuntimeObject* ___source0, int32_t ___count1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_Take_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m3866E2EB7A63709492EE683A90BA8BD671A4D314_gshared)(___source0, ___count1, method);
}
// System.Void System.Func`3<System.Char,System.Int32,System.Char>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_mD53871D13F8D31590D5CDA52E4CB5763701A6EA9 (Func_3_t2B0D96B11960CC2841861EAC2E3DEA368500085D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_3_t2B0D96B11960CC2841861EAC2E3DEA368500085D*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_3__ctor_mD53871D13F8D31590D5CDA52E4CB5763701A6EA9_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Char,System.Char>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`3<TSource,System.Int32,TResult>)
inline RuntimeObject* Enumerable_Select_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m3DB5A07821652CBD6C7F7BC5A43F7610DB230567 (RuntimeObject* ___source0, Func_3_t2B0D96B11960CC2841861EAC2E3DEA368500085D* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_3_t2B0D96B11960CC2841861EAC2E3DEA368500085D*, const RuntimeMethod*))Enumerable_Select_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m3DB5A07821652CBD6C7F7BC5A43F7610DB230567_gshared)(___source0, ___selector1, method);
}
// TSource[] System.Linq.Enumerable::ToArray<System.Char>(System.Collections.Generic.IEnumerable`1<TSource>)
inline CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* Enumerable_ToArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mECF2AE4F9225A8A7CE16CA858A60B98A7627699C (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mECF2AE4F9225A8A7CE16CA858A60B98A7627699C_gshared)(___source0, method);
}
// System.String System.String::CreateString(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___val0, const RuntimeMethod* method) ;
// System.String System.IO.Path::GetPathRoot(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetPathRoot_m6DDE2394DA53E1C4F4753406F0B48955DFF1E5EB (String_t* ___path0, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Contains<System.Char>(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
inline bool Enumerable_Contains_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m3979BE7355F65890520EC3C8092E2983495AE03D (RuntimeObject* ___source0, Il2CppChar ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, Il2CppChar, const RuntimeMethod*))Enumerable_Contains_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m3979BE7355F65890520EC3C8092E2983495AE03D_gshared)(___source0, ___value1, method);
}
// System.Void ICSharpCode.SharpZipLib.Core.StreamUtils::ReadFully(System.IO.Stream,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamUtils_ReadFully_m42CD384742E86785E03CC1458E1EB5D45D68343B (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer1, int32_t ___offset2, int32_t ___count3, const RuntimeMethod* method) ;
// System.Void System.IO.EndOfStreamException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndOfStreamException__ctor_m154EAE9BDAE2A8EB0EE6714D881FA7075628C582 (EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028* __this, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.Checksum.Adler32::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adler32_Reset_mF1FC2116EC33946831C0658FFA208CB33E8984D5 (Adler32_t719B695D8A1A84E2A465697391C35131CA4FB1CD* __this, const RuntimeMethod* method) ;
// System.Int32 System.ArraySegment`1<System.Byte>::get_Count()
inline int32_t ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, const RuntimeMethod*))ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_gshared_inline)(__this, method);
}
// System.Int32 System.ArraySegment`1<System.Byte>::get_Offset()
inline int32_t ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, const RuntimeMethod*))ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_gshared_inline)(__this, method);
}
// T[] System.ArraySegment`1<System.Byte>::get_Array()
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, const RuntimeMethod*))ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_gshared_inline)(__this, method);
}
// System.Void ICSharpCode.SharpZipLib.Checksum.BZip2Crc::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BZip2Crc_Reset_m87F6B17ACA701341C626E80DE772BA9BE55072B5 (BZip2Crc_t1A45B70CB448F473D16EAA0E3C2733DDE97A102F* __this, const RuntimeMethod* method) ;
// System.UInt32[] ICSharpCode.SharpZipLib.Checksum.CrcUtilities::GenerateSlicingLookupTable(System.UInt32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* CrcUtilities_GenerateSlicingLookupTable_m55BEFB6C7730BE853B2CEDCB1709828E0340462C (uint32_t ___polynomial0, bool ___isReversed1, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.Checksum.Crc32::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crc32_Reset_m055211F869D1A53CC76E85300325087FB1AC5327 (Crc32_t44597B0AB0A0CE01AB30303BA5EC0F6E4F51BF33* __this, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.Checksum.Crc32::Update(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crc32_Update_mB32326F7BF0D2F3B304618464B74ADF76249550F (Crc32_t44597B0AB0A0CE01AB30303BA5EC0F6E4F51BF33* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) ;
// System.UInt32 ICSharpCode.SharpZipLib.Checksum.CrcUtilities::UpdateDataForReversedPoly(System.Byte[],System.Int32,System.UInt32[],System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t CrcUtilities_UpdateDataForReversedPoly_mE37B9692EE9D5E6AA0DF313CC4AF194F6102827C_inline (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___offset1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___crcTable2, uint32_t ___checkValue3, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.Checksum.Crc32::SlowUpdateLoop(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Crc32_SlowUpdateLoop_m04536C3FD895A0A6320FE74A47090F98B0113444 (Crc32_t44597B0AB0A0CE01AB30303BA5EC0F6E4F51BF33* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___offset1, int32_t ___end2, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.Checksum.Crc32::Update(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Crc32_Update_mEABA7B10AD590CE609EC1475C50B7A422F3DC25E_inline (Crc32_t44597B0AB0A0CE01AB30303BA5EC0F6E4F51BF33* __this, int32_t ___bval0, const RuntimeMethod* method) ;
// System.UInt32 ICSharpCode.SharpZipLib.Checksum.CrcUtilities::UpdateDataCommon(System.Byte[],System.Int32,System.UInt32[],System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t CrcUtilities_UpdateDataCommon_mD835B4B3EDA46A218258B95D901E6EF225B888C1_inline (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___offset1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___crcTable2, uint8_t ___x13, uint8_t ___x24, uint8_t ___x35, uint8_t ___x46, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.SharpZipBaseException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharpZipBaseException__ctor_m917B6575F2EF2273884AB9109302E636BF2F9777 (SharpZipBaseException_t1C56A0584338F84B653352995CA5718A5BF2EB75* __this, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.SharpZipBaseException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharpZipBaseException__ctor_mF6FC2972E678A47F03291205D8701EC5FAC8FFDB (SharpZipBaseException_t1C56A0584338F84B653352995CA5718A5BF2EB75* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.Checksum.BZip2Crc::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BZip2Crc__ctor_m44988A7ABB1C4BE9641ACB2A5DD3C80E3A964030 (BZip2Crc_t1A45B70CB448F473D16EAA0E3C2733DDE97A102F* __this, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BZip2InputStream_Initialize_mAAF7F4BBF0284BF55CFC5E6ED87F734318B794B9 (BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* __this, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::InitBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BZip2InputStream_InitBlock_m93DD86F9271DBEA5811A33CE8D386E812176780D (BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* __this, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::SetupBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BZip2InputStream_SetupBlock_m899C33F44F1838D4BFDE4C069AE652BA1EDF36E5 (BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* __this, const RuntimeMethod* method) ;
// System.Boolean ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::get_IsStreamOwner()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BZip2InputStream_get_IsStreamOwner_m41E5817E414E2FDDB0153B6F3AEC091B7242A0BA_inline (BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* __this, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::SetupRandPartB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BZip2InputStream_SetupRandPartB_m5535A0A3843EE09F4B8BC02B25A2C784F90A702D (BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* __this, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::SetupRandPartC()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BZip2InputStream_SetupRandPartC_m6A32047DE375216D8C6B48E14DD852F3C33C1052 (BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* __this, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::SetupNoRandPartB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BZip2InputStream_SetupNoRandPartB_m316C6311888936B36E70C7E57870F804E1F90A49 (BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* __this, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::SetupNoRandPartC()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BZip2InputStream_SetupNoRandPartC_mD0FDD6E542ACD8D986F0EE98FB4C465ED8ED14FD (BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* __this, const RuntimeMethod* method) ;
// System.Char ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::BsGetUChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar BZip2InputStream_BsGetUChar_m2111337E4BE1CE4C11D5840121B92DBFA6377CB7 (BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* __this, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::SetDecompressStructureSizes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BZip2InputStream_SetDecompressStructureSizes_m527B6A7D7A0905BC26CFD176F11B44D32C1A417F (BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* __this, int32_t ___newSize100k0, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::Complete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BZip2InputStream_Complete_m5BECD99C71E964108C3F2765F27BD37710F7F5E3 (BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* __this, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::BadBlockHeader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BZip2InputStream_BadBlockHeader_m042E436789D30482BEB00E272D67E6A98F6275FB (const RuntimeMethod* method) ;
// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::BsGetInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BZip2InputStream_BsGetInt32_mA476E857090B44576F9629C2265B0390CC8C95BA (BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* __this, const RuntimeMethod* method) ;
// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::BsR(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BZip2InputStream_BsR_m87FC44F178D98623119D75BDBA011BEF72BB1613 (BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* __this, int32_t ___n0, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::GetAndMoveToFrontDecode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BZip2InputStream_GetAndMoveToFrontDecode_m3D99019D7E95B8396077B35582E99F86092EF526 (BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* __this, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::CrcError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BZip2InputStream_CrcError_m3B8460F42E8FFAC2E591D1FC382853873D90B9CB (const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::CompressedStreamEOF()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BZip2InputStream_CompressedStreamEOF_m8AC116EF42A7B859ECF35E3CBCFBCF61F693B22C (const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::FillBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BZip2InputStream_FillBuffer_mD7CB990F9178525D296153D04BD375E9E72FD83A (BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* __this, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::MakeMaps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BZip2InputStream_MakeMaps_mC38259B3DCBDF7DBD8433CAF6715D6EFFBAE733A (BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* __this, const RuntimeMethod* method) ;
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m830F00B616D7A2130E46E974DFB27E9DA7FE30E5 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::HbCreateDecodeTables(System.Int32[],System.Int32[],System.Int32[],System.Char[],System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BZip2InputStream_HbCreateDecodeTables_m08C490887BB4A71E27E1E504042BD8578DBF494F (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___limit0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___baseArray1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___perm2, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___length3, int32_t ___minLen4, int32_t ___maxLen5, int32_t ___alphaSize6, const RuntimeMethod* method) ;
// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::BsGetIntVS(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BZip2InputStream_BsGetIntVS_m7C0246D84E52E09EE51B2A1ED96671BCB885B405 (BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* __this, int32_t ___numBits0, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::RecvDecodingTables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BZip2InputStream_RecvDecodingTables_m7DF3E08211C27893B36E83BC49A3045DCF864DB1 (BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* __this, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BZip2Exception__ctor_m8D0263A2BD0CCC9CB6D2886ABBE2539671EE4F1C (BZip2Exception_t1741AC6EA11FAF77F0D91DECA2B9440919007096* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::BlockOverrun()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BZip2InputStream_BlockOverrun_m29C63342909C2DC1CC6F197CECD42CACFF9F31D4 (const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::SetupRandPartA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BZip2InputStream_SetupRandPartA_mB668B399E66AA4E0EED64DCF6307A082EAF61D8C (BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* __this, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::SetupNoRandPartA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BZip2InputStream_SetupNoRandPartA_mC524B2897F62558926C7D06C0B66153ABACAAE20 (BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* __this, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::EndBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BZip2InputStream_EndBlock_m9857538948902F7DCE49A785F03A7D491A567AC6 (BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* __this, const RuntimeMethod* method) ;
// System.Void System.IO.EndOfStreamException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndOfStreamException__ctor_m5629E1A514051A3D56052BD6D2D50C054308CCA4 (EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028* __this, String_t* ___message0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::.ctor(System.IO.Stream,ICSharpCode.SharpZipLib.Zip.Compression.Deflater)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflaterOutputStream__ctor_m14F311DE5A141096609FAE33975B92D76F8C5A9E (DeflaterOutputStream_t1A33D4BC42D9AF34A523563436A1C6A1136CE259* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___baseOutputStream0, Deflater_t8287F9AE01983279256AABA94642FF95CC633FB4* ___deflater1, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___baseOutputStream0;
		Deflater_t8287F9AE01983279256AABA94642FF95CC633FB4* L_1 = ___deflater1;
		DeflaterOutputStream__ctor_m3605F6B8B630FB441D8A737AFDFEF80CC2F33842(__this, L_0, L_1, ((int32_t)512), NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::.ctor(System.IO.Stream,ICSharpCode.SharpZipLib.Zip.Compression.Deflater,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflaterOutputStream__ctor_m3605F6B8B630FB441D8A737AFDFEF80CC2F33842 (DeflaterOutputStream_t1A33D4BC42D9AF34A523563436A1C6A1136CE259* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___baseOutputStream0, Deflater_t8287F9AE01983279256AABA94642FF95CC633FB4* ___deflater1, int32_t ___bufferSize2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Deflater_t8287F9AE01983279256AABA94642FF95CC633FB4* G_B8_0 = NULL;
	DeflaterOutputStream_t1A33D4BC42D9AF34A523563436A1C6A1136CE259* G_B8_1 = NULL;
	Deflater_t8287F9AE01983279256AABA94642FF95CC633FB4* G_B7_0 = NULL;
	DeflaterOutputStream_t1A33D4BC42D9AF34A523563436A1C6A1136CE259* G_B7_1 = NULL;
	{
		__this->___U3CIsStreamOwnerU3Ek__BackingField_5 = (bool)1;
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___baseOutputStream0;
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral139A7192A4E8A47ABD8DD76806B0D6C2FEA68766)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflaterOutputStream__ctor_m3605F6B8B630FB441D8A737AFDFEF80CC2F33842_RuntimeMethod_var)));
	}

IL_001b:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = ___baseOutputStream0;
		NullCheck(L_2);
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_2);
		if (L_3)
		{
			goto IL_0033;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral906BBE5F7CD672B7E71DFD5F848785C3BC25F023)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral139A7192A4E8A47ABD8DD76806B0D6C2FEA68766)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflaterOutputStream__ctor_m3605F6B8B630FB441D8A737AFDFEF80CC2F33842_RuntimeMethod_var)));
	}

IL_0033:
	{
		int32_t L_5 = ___bufferSize2;
		if ((((int32_t)L_5) >= ((int32_t)((int32_t)512))))
		{
			goto IL_0046;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC8FE4FB2F0C7351CCB064A9D9BD65C0FC83D4E12)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflaterOutputStream__ctor_m3605F6B8B630FB441D8A737AFDFEF80CC2F33842_RuntimeMethod_var)));
	}

IL_0046:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_7 = ___baseOutputStream0;
		__this->___baseOutputStream__10 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___baseOutputStream__10), (void*)L_7);
		int32_t L_8 = ___bufferSize2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_8);
		__this->___buffer__8 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer__8), (void*)L_9);
		Deflater_t8287F9AE01983279256AABA94642FF95CC633FB4* L_10 = ___deflater1;
		Deflater_t8287F9AE01983279256AABA94642FF95CC633FB4* L_11 = L_10;
		G_B7_0 = L_11;
		G_B7_1 = __this;
		if (L_11)
		{
			G_B8_0 = L_11;
			G_B8_1 = __this;
			goto IL_006a;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_12 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral606EA95C661C90C80AAC03510D6C265BA14D36B4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflaterOutputStream__ctor_m3605F6B8B630FB441D8A737AFDFEF80CC2F33842_RuntimeMethod_var)));
	}

IL_006a:
	{
		NullCheck(G_B8_1);
		G_B8_1->___deflater__9 = G_B8_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B8_1->___deflater__9), (void*)G_B8_0);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::Finish()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflaterOutputStream_Finish_mFEEF530B3CE8DFD5D8D2BE98E8956C0B562252B4 (DeflaterOutputStream_t1A33D4BC42D9AF34A523563436A1C6A1136CE259* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZipAESTransform_t81E0F17E8B4E0D3470F5D5A46D6DE031DDBC5C2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Deflater_t8287F9AE01983279256AABA94642FF95CC633FB4* L_0 = __this->___deflater__9;
		NullCheck(L_0);
		Deflater_Finish_mDFAC32ED1554D6AA19FADAF0764E03B18455E43E(L_0, NULL);
		goto IL_0055;
	}

IL_000d:
	{
		Deflater_t8287F9AE01983279256AABA94642FF95CC633FB4* L_1 = __this->___deflater__9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___buffer__8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___buffer__8;
		NullCheck(L_3);
		NullCheck(L_1);
		int32_t L_4;
		L_4 = Deflater_Deflate_m40F7F94572DEB3C858D91F9D4B5A6692599EFC59(L_1, L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0062;
		}
	}
	{
		RuntimeObject* L_6 = __this->___cryptoTransform__6;
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___buffer__8;
		int32_t L_8 = V_0;
		DeflaterOutputStream_EncryptBlock_m9A63B02E6654493AB99CFD75995233AF853E4D74(__this, L_7, 0, L_8, NULL);
	}

IL_0042:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_9 = __this->___baseOutputStream__10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___buffer__8;
		int32_t L_11 = V_0;
		NullCheck(L_9);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(37 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_9, L_10, 0, L_11);
	}

IL_0055:
	{
		Deflater_t8287F9AE01983279256AABA94642FF95CC633FB4* L_12 = __this->___deflater__9;
		NullCheck(L_12);
		bool L_13;
		L_13 = Deflater_get_IsFinished_m6F269B459AFA741C71E6E44725571226EBCBC03C(L_12, NULL);
		if (!L_13)
		{
			goto IL_000d;
		}
	}

IL_0062:
	{
		Deflater_t8287F9AE01983279256AABA94642FF95CC633FB4* L_14 = __this->___deflater__9;
		NullCheck(L_14);
		bool L_15;
		L_15 = Deflater_get_IsFinished_m6F269B459AFA741C71E6E44725571226EBCBC03C(L_14, NULL);
		if (L_15)
		{
			goto IL_007a;
		}
	}
	{
		SharpZipBaseException_t1C56A0584338F84B653352995CA5718A5BF2EB75* L_16 = (SharpZipBaseException_t1C56A0584338F84B653352995CA5718A5BF2EB75*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SharpZipBaseException_t1C56A0584338F84B653352995CA5718A5BF2EB75_il2cpp_TypeInfo_var)));
		NullCheck(L_16);
		SharpZipBaseException__ctor_m07FFE4C817E577AEA017E1508D178F0654E0A81C(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral245B50E2C13208F7C0CD450C27207D86AF461D75)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflaterOutputStream_Finish_mFEEF530B3CE8DFD5D8D2BE98E8956C0B562252B4_RuntimeMethod_var)));
	}

IL_007a:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_17 = __this->___baseOutputStream__10;
		NullCheck(L_17);
		VirtualActionInvoker0::Invoke(22 /* System.Void System.IO.Stream::Flush() */, L_17);
		RuntimeObject* L_18 = __this->___cryptoTransform__6;
		if (!L_18)
		{
			goto IL_00c2;
		}
	}
	{
		RuntimeObject* L_19 = __this->___cryptoTransform__6;
		if (!((ZipAESTransform_t81E0F17E8B4E0D3470F5D5A46D6DE031DDBC5C2C*)IsInstClass((RuntimeObject*)L_19, ZipAESTransform_t81E0F17E8B4E0D3470F5D5A46D6DE031DDBC5C2C_il2cpp_TypeInfo_var)))
		{
			goto IL_00b0;
		}
	}
	{
		RuntimeObject* L_20 = __this->___cryptoTransform__6;
		NullCheck(((ZipAESTransform_t81E0F17E8B4E0D3470F5D5A46D6DE031DDBC5C2C*)CastclassClass((RuntimeObject*)L_20, ZipAESTransform_t81E0F17E8B4E0D3470F5D5A46D6DE031DDBC5C2C_il2cpp_TypeInfo_var)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21;
		L_21 = ZipAESTransform_GetAuthCode_m30147C4C3EB8C4777CE236DEC81012EB3AA959A4(((ZipAESTransform_t81E0F17E8B4E0D3470F5D5A46D6DE031DDBC5C2C*)CastclassClass((RuntimeObject*)L_20, ZipAESTransform_t81E0F17E8B4E0D3470F5D5A46D6DE031DDBC5C2C_il2cpp_TypeInfo_var)), NULL);
		__this->___AESAuthCode_7 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AESAuthCode_7), (void*)L_21);
	}

IL_00b0:
	{
		RuntimeObject* L_22 = __this->___cryptoTransform__6;
		NullCheck(L_22);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_22);
		__this->___cryptoTransform__6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cryptoTransform__6), (void*)(RuntimeObject*)NULL);
	}

IL_00c2:
	{
		return;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::get_IsStreamOwner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflaterOutputStream_get_IsStreamOwner_mEBD8D769B49DA7336F4D52E9113216EED307C859 (DeflaterOutputStream_t1A33D4BC42D9AF34A523563436A1C6A1136CE259* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsStreamOwnerU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::set_IsStreamOwner(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflaterOutputStream_set_IsStreamOwner_mB8B0A93A4AC06B6ECD2A61CC6CA7548D09AFBECE (DeflaterOutputStream_t1A33D4BC42D9AF34A523563436A1C6A1136CE259* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CIsStreamOwnerU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::get_CanPatchEntries()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflaterOutputStream_get_CanPatchEntries_m1CAD42E40C22F177BEC8DCEAE6F65978D814725A (DeflaterOutputStream_t1A33D4BC42D9AF34A523563436A1C6A1136CE259* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___baseOutputStream__10;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.IO.Stream::get_CanSeek() */, L_0);
		return L_1;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::EncryptBlock(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflaterOutputStream_EncryptBlock_m9A63B02E6654493AB99CFD75995233AF853E4D74 (DeflaterOutputStream_t1A33D4BC42D9AF34A523563436A1C6A1136CE259* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICryptoTransform_tE6DA9E01069FDC62AB562B589C8E43EEC53B2377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___cryptoTransform__6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___buffer0;
		int32_t L_2 = ___length2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___buffer0;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker5< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 System.Security.Cryptography.ICryptoTransform::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32) */, ICryptoTransform_tE6DA9E01069FDC62AB562B589C8E43EEC53B2377_il2cpp_TypeInfo_var, L_0, L_1, 0, L_2, L_3, 0);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::Deflate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflaterOutputStream_Deflate_mCB7284893B7CE4608DE0E8EEFC43D329EE23FB5B (DeflaterOutputStream_t1A33D4BC42D9AF34A523563436A1C6A1136CE259* __this, const RuntimeMethod* method) 
{
	{
		DeflaterOutputStream_Deflate_m3E563D2FFE72D2658FD1C852F2AF3787F9DE629D(__this, (bool)0, NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::Deflate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflaterOutputStream_Deflate_m3E563D2FFE72D2658FD1C852F2AF3787F9DE629D (DeflaterOutputStream_t1A33D4BC42D9AF34A523563436A1C6A1136CE259* __this, bool ___flushing0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		goto IL_004a;
	}

IL_0002:
	{
		Deflater_t8287F9AE01983279256AABA94642FF95CC633FB4* L_0 = __this->___deflater__9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___buffer__8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___buffer__8;
		NullCheck(L_2);
		NullCheck(L_0);
		int32_t L_3;
		L_3 = Deflater_Deflate_m40F7F94572DEB3C858D91F9D4B5A6692599EFC59(L_0, L_1, 0, ((int32_t)(((RuntimeArray*)L_2)->max_length)), NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_5 = __this->___cryptoTransform__6;
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___buffer__8;
		int32_t L_7 = V_0;
		DeflaterOutputStream_EncryptBlock_m9A63B02E6654493AB99CFD75995233AF853E4D74(__this, L_6, 0, L_7, NULL);
	}

IL_0037:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_8 = __this->___baseOutputStream__10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___buffer__8;
		int32_t L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(37 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_8, L_9, 0, L_10);
	}

IL_004a:
	{
		bool L_11 = ___flushing0;
		if (L_11)
		{
			goto IL_0002;
		}
	}
	{
		Deflater_t8287F9AE01983279256AABA94642FF95CC633FB4* L_12 = __this->___deflater__9;
		NullCheck(L_12);
		bool L_13;
		L_13 = Deflater_get_IsNeedingInput_mA2828850583675D48457B76E1B6A3442E2587EA5(L_12, NULL);
		if (!L_13)
		{
			goto IL_0002;
		}
	}

IL_005a:
	{
		Deflater_t8287F9AE01983279256AABA94642FF95CC633FB4* L_14 = __this->___deflater__9;
		NullCheck(L_14);
		bool L_15;
		L_15 = Deflater_get_IsNeedingInput_mA2828850583675D48457B76E1B6A3442E2587EA5(L_14, NULL);
		if (L_15)
		{
			goto IL_0072;
		}
	}
	{
		SharpZipBaseException_t1C56A0584338F84B653352995CA5718A5BF2EB75* L_16 = (SharpZipBaseException_t1C56A0584338F84B653352995CA5718A5BF2EB75*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SharpZipBaseException_t1C56A0584338F84B653352995CA5718A5BF2EB75_il2cpp_TypeInfo_var)));
		NullCheck(L_16);
		SharpZipBaseException__ctor_m07FFE4C817E577AEA017E1508D178F0654E0A81C(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralABA8F64A9F94A564D9AC678557D76653D0CD2628)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflaterOutputStream_Deflate_m3E563D2FFE72D2658FD1C852F2AF3787F9DE629D_RuntimeMethod_var)));
	}

IL_0072:
	{
		return;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflaterOutputStream_get_CanRead_mFF7601EA9F736C27F3E8D1E6B1E1AABE138DFCC2 (DeflaterOutputStream_t1A33D4BC42D9AF34A523563436A1C6A1136CE259* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::get_CanSeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflaterOutputStream_get_CanSeek_mA30A7ADB9D0D70776DF4F1EC3383F90DEDE200F3 (DeflaterOutputStream_t1A33D4BC42D9AF34A523563436A1C6A1136CE259* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflaterOutputStream_get_CanWrite_m6996C55310B5B9F1B23898956571E535193C749E (DeflaterOutputStream_t1A33D4BC42D9AF34A523563436A1C6A1136CE259* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___baseOutputStream__10;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_0);
		return L_1;
	}
}
// System.Int64 ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DeflaterOutputStream_get_Length_m858697D04A3C8542A40AD427D0A3FD37CA125497 (DeflaterOutputStream_t1A33D4BC42D9AF34A523563436A1C6A1136CE259* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___baseOutputStream__10;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_0);
		return L_1;
	}
}
// System.Int64 ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DeflaterOutputStream_get_Position_m0F2293D222A7C7E6B64FFF8A09C383F8B2F5A475 (DeflaterOutputStream_t1A33D4BC42D9AF34A523563436A1C6A1136CE259* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___baseOutputStream__10;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_0);
		return L_1;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::set_Position(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflaterOutputStream_set_Position_m0AF94DC2591B8A98E698E41CE66603FD4AA18E1C (DeflaterOutputStream_t1A33D4BC42D9AF34A523563436A1C6A1136CE259* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9413892BFE723FDF603E2A7F4DCECB3703459A95)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflaterOutputStream_set_Position_m0AF94DC2591B8A98E698E41CE66603FD4AA18E1C_RuntimeMethod_var)));
	}
}
// System.Int64 ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::Seek(System.Int64,System.IO.SeekOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DeflaterOutputStream_Seek_m75650CA6E8C8E4883A33CCE936617F9F18E76A4E (DeflaterOutputStream_t1A33D4BC42D9AF34A523563436A1C6A1136CE259* __this, int64_t ___offset0, int32_t ___origin1, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCBDDDDE911E2F08DD3A4D52E8CFF5D244531824C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflaterOutputStream_Seek_m75650CA6E8C8E4883A33CCE936617F9F18E76A4E_RuntimeMethod_var)));
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::SetLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflaterOutputStream_SetLength_m250C8B9BE0ECB3BCAE8DCE3AA6BC80EBECC248CE (DeflaterOutputStream_t1A33D4BC42D9AF34A523563436A1C6A1136CE259* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF29231C610048421771CAF09B4C0C892E086F10E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflaterOutputStream_SetLength_m250C8B9BE0ECB3BCAE8DCE3AA6BC80EBECC248CE_RuntimeMethod_var)));
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::ReadByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflaterOutputStream_ReadByte_mC998753B9AC2579C2733A00692E5C2858E8D5328 (DeflaterOutputStream_t1A33D4BC42D9AF34A523563436A1C6A1136CE259* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCCF12B74DC9FC35FD79F50B6BD9E5803766CD12B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflaterOutputStream_ReadByte_mC998753B9AC2579C2733A00692E5C2858E8D5328_RuntimeMethod_var)));
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::Read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflaterOutputStream_Read_mD9696789B4254232BA07B5E6F4D2DD5762EF9A04 (DeflaterOutputStream_t1A33D4BC42D9AF34A523563436A1C6A1136CE259* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral30CAD18346B4AC106F4C27BDD5FF7775D7F71A38)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflaterOutputStream_Read_mD9696789B4254232BA07B5E6F4D2DD5762EF9A04_RuntimeMethod_var)));
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflaterOutputStream_Flush_mE30D7824AB69EE41E5FEB995A7ADBCB7C9C4EB07 (DeflaterOutputStream_t1A33D4BC42D9AF34A523563436A1C6A1136CE259* __this, const RuntimeMethod* method) 
{
	{
		Deflater_t8287F9AE01983279256AABA94642FF95CC633FB4* L_0 = __this->___deflater__9;
		NullCheck(L_0);
		Deflater_Flush_m024CBF07E759D4111D7FCB34F041E53AA5D09B51(L_0, NULL);
		DeflaterOutputStream_Deflate_m3E563D2FFE72D2658FD1C852F2AF3787F9DE629D(__this, (bool)1, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = __this->___baseOutputStream__10;
		NullCheck(L_1);
		VirtualActionInvoker0::Invoke(22 /* System.Void System.IO.Stream::Flush() */, L_1);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflaterOutputStream_Dispose_mA42ADF43588462F2D3E64558061D02BA3584764A (DeflaterOutputStream_t1A33D4BC42D9AF34A523563436A1C6A1136CE259* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->___isClosed__11;
		if (L_0)
		{
			goto IL_004b;
		}
	}
	{
		__this->___isClosed__11 = (bool)1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0037:
			{// begin finally (depth: 1)
				{
					bool L_1;
					L_1 = DeflaterOutputStream_get_IsStreamOwner_mEBD8D769B49DA7336F4D52E9113216EED307C859_inline(__this, NULL);
					if (!L_1)
					{
						goto IL_004a;
					}
				}
				{
					Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = __this->___baseOutputStream__10;
					NullCheck(L_2);
					Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8(L_2, NULL);
				}

IL_004a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				VirtualActionInvoker0::Invoke(40 /* System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::Finish() */, __this);
				RuntimeObject* L_3 = __this->___cryptoTransform__6;
				if (!L_3)
				{
					goto IL_0035_1;
				}
			}
			{
				DeflaterOutputStream_GetAuthCodeIfAES_m4A2E7F2334C24CB3E8729FADB161D32B637988AE(__this, NULL);
				RuntimeObject* L_4 = __this->___cryptoTransform__6;
				NullCheck(L_4);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				__this->___cryptoTransform__6 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___cryptoTransform__6), (void*)(RuntimeObject*)NULL);
			}

IL_0035_1:
			{
				goto IL_004b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004b:
	{
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::GetAuthCodeIfAES()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflaterOutputStream_GetAuthCodeIfAES_m4A2E7F2334C24CB3E8729FADB161D32B637988AE (DeflaterOutputStream_t1A33D4BC42D9AF34A523563436A1C6A1136CE259* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZipAESTransform_t81E0F17E8B4E0D3470F5D5A46D6DE031DDBC5C2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___cryptoTransform__6;
		if (!((ZipAESTransform_t81E0F17E8B4E0D3470F5D5A46D6DE031DDBC5C2C*)IsInstClass((RuntimeObject*)L_0, ZipAESTransform_t81E0F17E8B4E0D3470F5D5A46D6DE031DDBC5C2C_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject* L_1 = __this->___cryptoTransform__6;
		NullCheck(((ZipAESTransform_t81E0F17E8B4E0D3470F5D5A46D6DE031DDBC5C2C*)CastclassClass((RuntimeObject*)L_1, ZipAESTransform_t81E0F17E8B4E0D3470F5D5A46D6DE031DDBC5C2C_il2cpp_TypeInfo_var)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = ZipAESTransform_GetAuthCode_m30147C4C3EB8C4777CE236DEC81012EB3AA959A4(((ZipAESTransform_t81E0F17E8B4E0D3470F5D5A46D6DE031DDBC5C2C*)CastclassClass((RuntimeObject*)L_1, ZipAESTransform_t81E0F17E8B4E0D3470F5D5A46D6DE031DDBC5C2C_il2cpp_TypeInfo_var)), NULL);
		__this->___AESAuthCode_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AESAuthCode_7), (void*)L_2);
	}

IL_0023:
	{
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::WriteByte(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflaterOutputStream_WriteByte_mF65C000D98D9D30188C517AC3222FEBDDEDF8C8E (DeflaterOutputStream_t1A33D4BC42D9AF34A523563436A1C6A1136CE259* __this, uint8_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		uint8_t L_2 = ___value0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(37 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, __this, L_3, 0, 1);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflaterOutputStream_Write_mBC058CC3F0D438D734256F8790860DE200DAAEA1 (DeflaterOutputStream_t1A33D4BC42D9AF34A523563436A1C6A1136CE259* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	{
		Deflater_t8287F9AE01983279256AABA94642FF95CC633FB4* L_0 = __this->___deflater__9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___buffer0;
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___count2;
		NullCheck(L_0);
		Deflater_SetInput_m99C25F50DB61A9B758DD173553CA602161079E9E(L_0, L_1, L_2, L_3, NULL);
		DeflaterOutputStream_Deflate_mCB7284893B7CE4608DE0E8EEFC43D329EE23FB5B(__this, NULL);
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
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::.ctor(System.IO.Stream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflaterInputBuffer__ctor_m042F879BBDA06AA51FF199DBA3B9BF798A8F8929 (InflaterInputBuffer_t947724C1CD4D44B75584D59D1ECA71C121D62129* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, int32_t ___bufferSize1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		__this->___inputStream_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inputStream_6), (void*)L_0);
		int32_t L_1 = ___bufferSize1;
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)1024))))
		{
			goto IL_001c;
		}
	}
	{
		___bufferSize1 = ((int32_t)1024);
	}

IL_001c:
	{
		int32_t L_2 = ___bufferSize1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->___rawData_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rawData_1), (void*)L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___rawData_1;
		__this->___clearText_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___clearText_3), (void*)L_4);
		return;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::get_Available()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflaterInputBuffer_get_Available_m5E66CD4D88490D425B7AF3636A27538003E48169 (InflaterInputBuffer_t947724C1CD4D44B75584D59D1ECA71C121D62129* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___available_4;
		return L_0;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::SetInflaterInput(ICSharpCode.SharpZipLib.Zip.Compression.Inflater)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflaterInputBuffer_SetInflaterInput_m303A5BED84FD7C3C23B73448E5405F497F2542C4 (InflaterInputBuffer_t947724C1CD4D44B75584D59D1ECA71C121D62129* __this, Inflater_t2F41C3E2608A77A69EDAB071BCA9752305595494* ___inflater0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___available_4;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		Inflater_t2F41C3E2608A77A69EDAB071BCA9752305595494* L_1 = ___inflater0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___clearText_3;
		int32_t L_3 = __this->___clearTextLength_2;
		int32_t L_4 = __this->___available_4;
		int32_t L_5 = __this->___available_4;
		NullCheck(L_1);
		Inflater_SetInput_mD03E4341BFA7288F0E8CDA67B7D2F511EE97077A(L_1, L_2, ((int32_t)il2cpp_codegen_subtract(L_3, L_4)), L_5, NULL);
		__this->___available_4 = 0;
	}

IL_002f:
	{
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::Fill()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflaterInputBuffer_Fill_m29B03A52B8B5F49C784486079FDE4BA5C3C77231 (InflaterInputBuffer_t947724C1CD4D44B75584D59D1ECA71C121D62129* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICryptoTransform_tE6DA9E01069FDC62AB562B589C8E43EEC53B2377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		__this->___rawLength_0 = 0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___rawData_1;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		goto IL_0041;
	}

IL_0012:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = __this->___inputStream_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___rawData_1;
		int32_t L_3 = __this->___rawLength_0;
		int32_t L_4 = V_0;
		NullCheck(L_1);
		int32_t L_5;
		L_5 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(34 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_1, L_2, L_3, L_4);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_7 = __this->___rawLength_0;
		int32_t L_8 = V_1;
		__this->___rawLength_0 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		int32_t L_9 = V_0;
		int32_t L_10 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_9, L_10));
	}

IL_0041:
	{
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_0052;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_12 = __this->___inputStream_6;
		NullCheck(L_12);
		bool L_13;
		L_13 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, L_12);
		if (L_13)
		{
			goto IL_0012;
		}
	}

IL_0052:
	{
		RuntimeObject* L_14 = __this->___cryptoTransform_5;
		if (!L_14)
		{
			goto IL_0081;
		}
	}
	{
		RuntimeObject* L_15 = __this->___cryptoTransform_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___rawData_1;
		int32_t L_17 = __this->___rawLength_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->___clearText_3;
		NullCheck(L_15);
		int32_t L_19;
		L_19 = InterfaceFuncInvoker5< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 System.Security.Cryptography.ICryptoTransform::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32) */, ICryptoTransform_tE6DA9E01069FDC62AB562B589C8E43EEC53B2377_il2cpp_TypeInfo_var, L_15, L_16, 0, L_17, L_18, 0);
		__this->___clearTextLength_2 = L_19;
		goto IL_008d;
	}

IL_0081:
	{
		int32_t L_20 = __this->___rawLength_0;
		__this->___clearTextLength_2 = L_20;
	}

IL_008d:
	{
		int32_t L_21 = __this->___clearTextLength_2;
		__this->___available_4 = L_21;
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
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::.ctor(System.IO.Stream,ICSharpCode.SharpZipLib.Zip.Compression.Inflater)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflaterInputStream__ctor_mAEA971E711654A0AFB588ABE8512960D41F3E3D0 (InflaterInputStream_t25453CA4D454447A9D30F0011CCE23037B465EA2* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___baseInputStream0, Inflater_t2F41C3E2608A77A69EDAB071BCA9752305595494* ___inf1, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___baseInputStream0;
		Inflater_t2F41C3E2608A77A69EDAB071BCA9752305595494* L_1 = ___inf1;
		InflaterInputStream__ctor_mEB11817AAD6E905924DCE2C8CF758DFFA0B15C91(__this, L_0, L_1, ((int32_t)4096), NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::.ctor(System.IO.Stream,ICSharpCode.SharpZipLib.Zip.Compression.Inflater,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflaterInputStream__ctor_mEB11817AAD6E905924DCE2C8CF758DFFA0B15C91 (InflaterInputStream_t25453CA4D454447A9D30F0011CCE23037B465EA2* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___baseInputStream0, Inflater_t2F41C3E2608A77A69EDAB071BCA9752305595494* ___inflater1, int32_t ___bufferSize2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InflaterInputBuffer_t947724C1CD4D44B75584D59D1ECA71C121D62129_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CIsStreamOwnerU3Ek__BackingField_5 = (bool)1;
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___baseInputStream0;
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEE6DF8099AE75DD42F869879C18E332A6FC033EF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InflaterInputStream__ctor_mEB11817AAD6E905924DCE2C8CF758DFFA0B15C91_RuntimeMethod_var)));
	}

IL_001b:
	{
		Inflater_t2F41C3E2608A77A69EDAB071BCA9752305595494* L_2 = ___inflater1;
		if (L_2)
		{
			goto IL_0029;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDC926AD4C478A88A08B54B90CE3FF6A65ECEF876)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InflaterInputStream__ctor_mEB11817AAD6E905924DCE2C8CF758DFFA0B15C91_RuntimeMethod_var)));
	}

IL_0029:
	{
		int32_t L_4 = ___bufferSize2;
		if ((((int32_t)L_4) > ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC8FE4FB2F0C7351CCB064A9D9BD65C0FC83D4E12)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InflaterInputStream__ctor_mEB11817AAD6E905924DCE2C8CF758DFFA0B15C91_RuntimeMethod_var)));
	}

IL_0038:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = ___baseInputStream0;
		__this->___baseInputStream_8 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___baseInputStream_8), (void*)L_6);
		Inflater_t2F41C3E2608A77A69EDAB071BCA9752305595494* L_7 = ___inflater1;
		__this->___inf_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inf_6), (void*)L_7);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_8 = ___baseInputStream0;
		int32_t L_9 = ___bufferSize2;
		InflaterInputBuffer_t947724C1CD4D44B75584D59D1ECA71C121D62129* L_10 = (InflaterInputBuffer_t947724C1CD4D44B75584D59D1ECA71C121D62129*)il2cpp_codegen_object_new(InflaterInputBuffer_t947724C1CD4D44B75584D59D1ECA71C121D62129_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		InflaterInputBuffer__ctor_m042F879BBDA06AA51FF199DBA3B9BF798A8F8929(L_10, L_8, L_9, NULL);
		__this->___inputBuffer_7 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inputBuffer_7), (void*)L_10);
		return;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::get_IsStreamOwner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InflaterInputStream_get_IsStreamOwner_mF78646DE2A962B44726310E31223230C8617F0CC (InflaterInputStream_t25453CA4D454447A9D30F0011CCE23037B465EA2* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsStreamOwnerU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::Fill()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflaterInputStream_Fill_mBC6A8C31004A86E3363600E8307A7D5FAB29CB4A (InflaterInputStream_t25453CA4D454447A9D30F0011CCE23037B465EA2* __this, const RuntimeMethod* method) 
{
	{
		InflaterInputBuffer_t947724C1CD4D44B75584D59D1ECA71C121D62129* L_0 = __this->___inputBuffer_7;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InflaterInputBuffer_get_Available_m5E66CD4D88490D425B7AF3636A27538003E48169_inline(L_0, NULL);
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_0032;
		}
	}
	{
		InflaterInputBuffer_t947724C1CD4D44B75584D59D1ECA71C121D62129* L_2 = __this->___inputBuffer_7;
		NullCheck(L_2);
		InflaterInputBuffer_Fill_m29B03A52B8B5F49C784486079FDE4BA5C3C77231(L_2, NULL);
		InflaterInputBuffer_t947724C1CD4D44B75584D59D1ECA71C121D62129* L_3 = __this->___inputBuffer_7;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InflaterInputBuffer_get_Available_m5E66CD4D88490D425B7AF3636A27538003E48169_inline(L_3, NULL);
		if ((((int32_t)L_4) > ((int32_t)0)))
		{
			goto IL_0032;
		}
	}
	{
		SharpZipBaseException_t1C56A0584338F84B653352995CA5718A5BF2EB75* L_5 = (SharpZipBaseException_t1C56A0584338F84B653352995CA5718A5BF2EB75*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SharpZipBaseException_t1C56A0584338F84B653352995CA5718A5BF2EB75_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		SharpZipBaseException__ctor_m07FFE4C817E577AEA017E1508D178F0654E0A81C(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4EB4BE55A4E968B39CF168F95F155F0CE9E4A4BC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InflaterInputStream_Fill_mBC6A8C31004A86E3363600E8307A7D5FAB29CB4A_RuntimeMethod_var)));
	}

IL_0032:
	{
		InflaterInputBuffer_t947724C1CD4D44B75584D59D1ECA71C121D62129* L_6 = __this->___inputBuffer_7;
		Inflater_t2F41C3E2608A77A69EDAB071BCA9752305595494* L_7 = __this->___inf_6;
		NullCheck(L_6);
		InflaterInputBuffer_SetInflaterInput_m303A5BED84FD7C3C23B73448E5405F497F2542C4(L_6, L_7, NULL);
		return;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InflaterInputStream_get_CanRead_mF199AA88E5BCAD1985F2391CBC4A569D5736F3F2 (InflaterInputStream_t25453CA4D454447A9D30F0011CCE23037B465EA2* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___baseInputStream_8;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, L_0);
		return L_1;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::get_CanSeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InflaterInputStream_get_CanSeek_m33C42DA85C433F162680D208EB87ADBF8DA7A883 (InflaterInputStream_t25453CA4D454447A9D30F0011CCE23037B465EA2* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InflaterInputStream_get_CanWrite_m62B25F45921B271811FEC5DD261A1415255C78FB (InflaterInputStream_t25453CA4D454447A9D30F0011CCE23037B465EA2* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Int64 ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t InflaterInputStream_get_Length_m176C2D20D50FA17B06066EDF062C8CD726085155 (InflaterInputStream_t25453CA4D454447A9D30F0011CCE23037B465EA2* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51F1DBAC2A477B647C00F35F5067C191B5F39517)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InflaterInputStream_get_Length_m176C2D20D50FA17B06066EDF062C8CD726085155_RuntimeMethod_var)));
	}
}
// System.Int64 ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t InflaterInputStream_get_Position_m949DB5C05CFCBA60155D0B20727EE54E97300459 (InflaterInputStream_t25453CA4D454447A9D30F0011CCE23037B465EA2* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___baseInputStream_8;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_0);
		return L_1;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::set_Position(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflaterInputStream_set_Position_m9BD4DF58F5220794828190502FC6DF7571554C85 (InflaterInputStream_t25453CA4D454447A9D30F0011CCE23037B465EA2* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0C5D82EC0DDFC2A751DB2B8E28F3256ABDE01270)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InflaterInputStream_set_Position_m9BD4DF58F5220794828190502FC6DF7571554C85_RuntimeMethod_var)));
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflaterInputStream_Flush_mEED5BE2716A9AB687387812D09DC97EDD4140BEA (InflaterInputStream_t25453CA4D454447A9D30F0011CCE23037B465EA2* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___baseInputStream_8;
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(22 /* System.Void System.IO.Stream::Flush() */, L_0);
		return;
	}
}
// System.Int64 ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::Seek(System.Int64,System.IO.SeekOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t InflaterInputStream_Seek_m1E1AC2C1269904300E26B29B26C132AC3B5027F5 (InflaterInputStream_t25453CA4D454447A9D30F0011CCE23037B465EA2* __this, int64_t ___offset0, int32_t ___origin1, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCBC3EE4B235C41540E696A527B41C2EB3D741A62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InflaterInputStream_Seek_m1E1AC2C1269904300E26B29B26C132AC3B5027F5_RuntimeMethod_var)));
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::SetLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflaterInputStream_SetLength_m2524C0C1608DA18ED088244F33680146C6664C40 (InflaterInputStream_t25453CA4D454447A9D30F0011CCE23037B465EA2* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6E211FC3D3E3E7F3871E0DFFD781ED6B15E23EFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InflaterInputStream_SetLength_m2524C0C1608DA18ED088244F33680146C6664C40_RuntimeMethod_var)));
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflaterInputStream_Write_m53ADE5F0ECCBDDA93E6EC68C863D9D478ACDA432 (InflaterInputStream_t25453CA4D454447A9D30F0011CCE23037B465EA2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B51DC7F7A299FDF20D4111AA6D04EFD1D4FDD6B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InflaterInputStream_Write_m53ADE5F0ECCBDDA93E6EC68C863D9D478ACDA432_RuntimeMethod_var)));
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::WriteByte(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflaterInputStream_WriteByte_mD82CC287C483418EDFF2BFEF7F46396BA29CE728 (InflaterInputStream_t25453CA4D454447A9D30F0011CCE23037B465EA2* __this, uint8_t ___value0, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral19735335CA05EBD60664E496D17C7EF387AC7C8B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InflaterInputStream_WriteByte_mD82CC287C483418EDFF2BFEF7F46396BA29CE728_RuntimeMethod_var)));
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflaterInputStream_Dispose_mF6E9832286177D24F636D92F5D99C1E5DA6F32D4 (InflaterInputStream_t25453CA4D454447A9D30F0011CCE23037B465EA2* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___isClosed_9;
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		__this->___isClosed_9 = (bool)1;
		bool L_1;
		L_1 = InflaterInputStream_get_IsStreamOwner_mF78646DE2A962B44726310E31223230C8617F0CC_inline(__this, NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = __this->___baseInputStream_8;
		NullCheck(L_2);
		Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8(L_2, NULL);
	}

IL_0022:
	{
		return;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::Read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflaterInputStream_Read_mFEA9B693BB50AF9EB4CBE1923C79005CB411C5FA (InflaterInputStream_t25453CA4D454447A9D30F0011CCE23037B465EA2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Inflater_t2F41C3E2608A77A69EDAB071BCA9752305595494* L_0 = __this->___inf_6;
		NullCheck(L_0);
		bool L_1;
		L_1 = Inflater_get_IsNeedingDictionary_m244394D004966CD7C5FBCFB38470134B9E76E5B4(L_0, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		SharpZipBaseException_t1C56A0584338F84B653352995CA5718A5BF2EB75* L_2 = (SharpZipBaseException_t1C56A0584338F84B653352995CA5718A5BF2EB75*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SharpZipBaseException_t1C56A0584338F84B653352995CA5718A5BF2EB75_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		SharpZipBaseException__ctor_m07FFE4C817E577AEA017E1508D178F0654E0A81C(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8FF23D129BAAFF88D5BFD6399DCAA2557F8F2030)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InflaterInputStream_Read_mFEA9B693BB50AF9EB4CBE1923C79005CB411C5FA_RuntimeMethod_var)));
	}

IL_0018:
	{
		int32_t L_3 = ___count2;
		V_0 = L_3;
	}

IL_001a:
	{
		Inflater_t2F41C3E2608A77A69EDAB071BCA9752305595494* L_4 = __this->___inf_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___buffer0;
		int32_t L_6 = ___offset1;
		int32_t L_7 = V_0;
		NullCheck(L_4);
		int32_t L_8;
		L_8 = Inflater_Inflate_m81859B7CD192B60897C8137AF1649556B7CA8E3D(L_4, L_5, L_6, L_7, NULL);
		V_1 = L_8;
		int32_t L_9 = ___offset1;
		int32_t L_10 = V_1;
		___offset1 = ((int32_t)il2cpp_codegen_add(L_9, L_10));
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, L_12));
		int32_t L_13 = V_0;
		if (!L_13)
		{
			goto IL_0065;
		}
	}
	{
		Inflater_t2F41C3E2608A77A69EDAB071BCA9752305595494* L_14 = __this->___inf_6;
		NullCheck(L_14);
		bool L_15;
		L_15 = Inflater_get_IsFinished_mEB6FCF59E91599BB0DF568A190DE2A9F85CDB20E(L_14, NULL);
		if (L_15)
		{
			goto IL_0065;
		}
	}
	{
		Inflater_t2F41C3E2608A77A69EDAB071BCA9752305595494* L_16 = __this->___inf_6;
		NullCheck(L_16);
		bool L_17;
		L_17 = Inflater_get_IsNeedingInput_m379F0BEB540051929C7CC519DDCC50707890B007(L_16, NULL);
		if (!L_17)
		{
			goto IL_0057;
		}
	}
	{
		InflaterInputStream_Fill_mBC6A8C31004A86E3363600E8307A7D5FAB29CB4A(__this, NULL);
		goto IL_001a;
	}

IL_0057:
	{
		int32_t L_18 = V_1;
		if (L_18)
		{
			goto IL_001a;
		}
	}
	{
		ZipException_t96D0219AEA3A9ACA11F3DD018FDAA302995E720F* L_19 = (ZipException_t96D0219AEA3A9ACA11F3DD018FDAA302995E720F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipException_t96D0219AEA3A9ACA11F3DD018FDAA302995E720F_il2cpp_TypeInfo_var)));
		NullCheck(L_19);
		ZipException__ctor_mDEED5E97D6904FCD3B5A7183E81AFAC479DE85C4(L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral77B8FF6E0BFB09EB9D8A7585234E9561468125FD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InflaterInputStream_Read_mFEA9B693BB50AF9EB4CBE1923C79005CB411C5FA_RuntimeMethod_var)));
	}

IL_0065:
	{
		int32_t L_20 = ___count2;
		int32_t L_21 = V_0;
		return ((int32_t)il2cpp_codegen_subtract(L_20, L_21));
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
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow::Write(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputWindow_Write_m98568B7A777A909CE6738BEBC2BD050FA5EF3939 (OutputWindow_tAA96562C1DB1269206CBF4CDFC8ACE36C26A99E8* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___windowFilled_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		__this->___windowFilled_2 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)32768)))))
		{
			goto IL_0023;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral20B43C997D46773915E000B0A5DBB64316FDD2E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OutputWindow_Write_m98568B7A777A909CE6738BEBC2BD050FA5EF3939_RuntimeMethod_var)));
	}

IL_0023:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___window_0;
		int32_t L_5 = __this->___windowEnd_1;
		V_0 = L_5;
		int32_t L_6 = V_0;
		__this->___windowEnd_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = V_0;
		int32_t L_8 = ___value0;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (uint8_t)((int32_t)(uint8_t)L_8));
		int32_t L_9 = __this->___windowEnd_1;
		__this->___windowEnd_1 = ((int32_t)(L_9&((int32_t)32767)));
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow::SlowRepeat(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputWindow_SlowRepeat_mAED2CEC54827CA0EDE654F8C012CB54D6903FE7A (OutputWindow_tAA96562C1DB1269206CBF4CDFC8ACE36C26A99E8* __this, int32_t ___repStart0, int32_t ___length1, int32_t ___distance2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		goto IL_0042;
	}

IL_0002:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___window_0;
		int32_t L_1 = __this->___windowEnd_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		__this->___windowEnd_1 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___window_0;
		int32_t L_5 = ___repStart0;
		int32_t L_6 = L_5;
		___repStart0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		NullCheck(L_4);
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)L_8);
		int32_t L_9 = __this->___windowEnd_1;
		__this->___windowEnd_1 = ((int32_t)(L_9&((int32_t)32767)));
		int32_t L_10 = ___repStart0;
		___repStart0 = ((int32_t)(L_10&((int32_t)32767)));
	}

IL_0042:
	{
		int32_t L_11 = ___length1;
		int32_t L_12 = L_11;
		___length1 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_0002;
		}
	}
	{
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow::Repeat(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputWindow_Repeat_mF71C1109E018A243A011D3D2CDFC8A4BEA6D6E66 (OutputWindow_tAA96562C1DB1269206CBF4CDFC8ACE36C26A99E8* __this, int32_t ___length0, int32_t ___distance1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___windowFilled_2;
		int32_t L_1 = ___length0;
		int32_t L_2 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		V_2 = L_2;
		__this->___windowFilled_2 = L_2;
		int32_t L_3 = V_2;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)32768))))
		{
			goto IL_0023;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral20B43C997D46773915E000B0A5DBB64316FDD2E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OutputWindow_Repeat_mF71C1109E018A243A011D3D2CDFC8A4BEA6D6E66_RuntimeMethod_var)));
	}

IL_0023:
	{
		int32_t L_5 = __this->___windowEnd_1;
		int32_t L_6 = ___distance1;
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_5, L_6))&((int32_t)32767)));
		int32_t L_7 = ___length0;
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)32768), L_7));
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		if ((((int32_t)L_8) > ((int32_t)L_9)))
		{
			goto IL_00a1;
		}
	}
	{
		int32_t L_10 = __this->___windowEnd_1;
		int32_t L_11 = V_1;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_00a1;
		}
	}
	{
		int32_t L_12 = ___length0;
		int32_t L_13 = ___distance1;
		if ((((int32_t)L_12) > ((int32_t)L_13)))
		{
			goto IL_0097;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->___window_0;
		int32_t L_15 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___window_0;
		int32_t L_17 = __this->___windowEnd_1;
		int32_t L_18 = ___length0;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_14, L_15, (RuntimeArray*)L_16, L_17, L_18, NULL);
		int32_t L_19 = __this->___windowEnd_1;
		int32_t L_20 = ___length0;
		__this->___windowEnd_1 = ((int32_t)il2cpp_codegen_add(L_19, L_20));
		return;
	}

IL_0073:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = __this->___window_0;
		int32_t L_22 = __this->___windowEnd_1;
		V_2 = L_22;
		int32_t L_23 = V_2;
		__this->___windowEnd_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		int32_t L_24 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = __this->___window_0;
		int32_t L_26 = V_0;
		int32_t L_27 = L_26;
		V_0 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		NullCheck(L_25);
		int32_t L_28 = L_27;
		uint8_t L_29 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (uint8_t)L_29);
	}

IL_0097:
	{
		int32_t L_30 = ___length0;
		int32_t L_31 = L_30;
		___length0 = ((int32_t)il2cpp_codegen_subtract(L_31, 1));
		if ((((int32_t)L_31) > ((int32_t)0)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00a1:
	{
		int32_t L_32 = V_0;
		int32_t L_33 = ___length0;
		int32_t L_34 = ___distance1;
		OutputWindow_SlowRepeat_mAED2CEC54827CA0EDE654F8C012CB54D6903FE7A(__this, L_32, L_33, L_34, NULL);
		return;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow::CopyStored(ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OutputWindow_CopyStored_m4DBB3A23F88263ABDF3ED6AA234E8F21ADDD6B26 (OutputWindow_tAA96562C1DB1269206CBF4CDFC8ACE36C26A99E8* __this, StreamManipulator_t626C6631E1D9BD1EAA5FDB4987C79A2F34A92689* ___input0, int32_t ___length1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___length1;
		int32_t L_1 = __this->___windowFilled_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8(L_0, ((int32_t)il2cpp_codegen_subtract(((int32_t)32768), L_1)), NULL);
		StreamManipulator_t626C6631E1D9BD1EAA5FDB4987C79A2F34A92689* L_3 = ___input0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = StreamManipulator_get_AvailableBytes_m3F02851B6B30C7F729CD93D4CB6917473D45FDB4(L_3, NULL);
		int32_t L_5;
		L_5 = Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8(L_2, L_4, NULL);
		___length1 = L_5;
		int32_t L_6 = __this->___windowEnd_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)32768), L_6));
		int32_t L_7 = ___length1;
		int32_t L_8 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)L_8)))
		{
			goto IL_005d;
		}
	}
	{
		StreamManipulator_t626C6631E1D9BD1EAA5FDB4987C79A2F34A92689* L_9 = ___input0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___window_0;
		int32_t L_11 = __this->___windowEnd_1;
		int32_t L_12 = V_1;
		NullCheck(L_9);
		int32_t L_13;
		L_13 = StreamManipulator_CopyBytes_m326B46651BD903626068679C41A1ADF495A757D6(L_9, L_10, L_11, L_12, NULL);
		V_0 = L_13;
		int32_t L_14 = V_0;
		int32_t L_15 = V_1;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_0071;
		}
	}
	{
		int32_t L_16 = V_0;
		StreamManipulator_t626C6631E1D9BD1EAA5FDB4987C79A2F34A92689* L_17 = ___input0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->___window_0;
		int32_t L_19 = ___length1;
		int32_t L_20 = V_1;
		NullCheck(L_17);
		int32_t L_21;
		L_21 = StreamManipulator_CopyBytes_m326B46651BD903626068679C41A1ADF495A757D6(L_17, L_18, 0, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, L_21));
		goto IL_0071;
	}

IL_005d:
	{
		StreamManipulator_t626C6631E1D9BD1EAA5FDB4987C79A2F34A92689* L_22 = ___input0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = __this->___window_0;
		int32_t L_24 = __this->___windowEnd_1;
		int32_t L_25 = ___length1;
		NullCheck(L_22);
		int32_t L_26;
		L_26 = StreamManipulator_CopyBytes_m326B46651BD903626068679C41A1ADF495A757D6(L_22, L_23, L_24, L_25, NULL);
		V_0 = L_26;
	}

IL_0071:
	{
		int32_t L_27 = __this->___windowEnd_1;
		int32_t L_28 = V_0;
		__this->___windowEnd_1 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_27, L_28))&((int32_t)32767)));
		int32_t L_29 = __this->___windowFilled_2;
		int32_t L_30 = V_0;
		__this->___windowFilled_2 = ((int32_t)il2cpp_codegen_add(L_29, L_30));
		int32_t L_31 = V_0;
		return L_31;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow::GetFreeSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OutputWindow_GetFreeSpace_m1D7A6594FA9BD7FFE6757752EC2344E8A8D42576 (OutputWindow_tAA96562C1DB1269206CBF4CDFC8ACE36C26A99E8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___windowFilled_2;
		return ((int32_t)il2cpp_codegen_subtract(((int32_t)32768), L_0));
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow::GetAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OutputWindow_GetAvailable_m106E5803870827EA5BC8DFC4926FC2F43304CB28 (OutputWindow_tAA96562C1DB1269206CBF4CDFC8ACE36C26A99E8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___windowFilled_2;
		return L_0;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow::CopyOutput(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OutputWindow_CopyOutput_m908635A98F7C5A3BF1BFBA96507CF8BE64121477 (OutputWindow_tAA96562C1DB1269206CBF4CDFC8ACE36C26A99E8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___offset1, int32_t ___len2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___windowEnd_1;
		V_0 = L_0;
		int32_t L_1 = ___len2;
		int32_t L_2 = __this->___windowFilled_2;
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = __this->___windowFilled_2;
		___len2 = L_3;
		goto IL_0030;
	}

IL_001a:
	{
		int32_t L_4 = __this->___windowEnd_1;
		int32_t L_5 = __this->___windowFilled_2;
		int32_t L_6 = ___len2;
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_4, L_5)), L_6))&((int32_t)32767)));
	}

IL_0030:
	{
		int32_t L_7 = ___len2;
		V_1 = L_7;
		int32_t L_8 = ___len2;
		int32_t L_9 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_8, L_9));
		int32_t L_10 = V_2;
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_0057;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___window_0;
		int32_t L_12 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___output0;
		int32_t L_14 = ___offset1;
		int32_t L_15 = V_2;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_subtract(((int32_t)32768), L_12)), (RuntimeArray*)L_13, L_14, L_15, NULL);
		int32_t L_16 = ___offset1;
		int32_t L_17 = V_2;
		___offset1 = ((int32_t)il2cpp_codegen_add(L_16, L_17));
		int32_t L_18 = V_0;
		___len2 = L_18;
	}

IL_0057:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = __this->___window_0;
		int32_t L_20 = V_0;
		int32_t L_21 = ___len2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___output0;
		int32_t L_23 = ___offset1;
		int32_t L_24 = ___len2;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_19, ((int32_t)il2cpp_codegen_subtract(L_20, L_21)), (RuntimeArray*)L_22, L_23, L_24, NULL);
		int32_t L_25 = __this->___windowFilled_2;
		int32_t L_26 = V_1;
		__this->___windowFilled_2 = ((int32_t)il2cpp_codegen_subtract(L_25, L_26));
		int32_t L_27 = __this->___windowFilled_2;
		if ((((int32_t)L_27) >= ((int32_t)0)))
		{
			goto IL_0085;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_28 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_28);
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_28, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OutputWindow_CopyOutput_m908635A98F7C5A3BF1BFBA96507CF8BE64121477_RuntimeMethod_var)));
	}

IL_0085:
	{
		int32_t L_29 = V_1;
		return L_29;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputWindow__ctor_m27D9398752C21DFE507E95A1507A2061005F9487 (OutputWindow_tAA96562C1DB1269206CBF4CDFC8ACE36C26A99E8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32768));
		__this->___window_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___window_0), (void*)L_0);
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
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::PeekBits(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StreamManipulator_PeekBits_mF211C8B59086D72F8836E9F4F5619102F71E149A (StreamManipulator_t626C6631E1D9BD1EAA5FDB4987C79A2F34A92689* __this, int32_t ___bitCount0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___bitsInBuffer__4;
		int32_t L_1 = ___bitCount0;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_2 = __this->___windowStart__1;
		int32_t L_3 = __this->___windowEnd__2;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0019;
		}
	}
	{
		return (-1);
	}

IL_0019:
	{
		uint32_t L_4 = __this->___buffer__3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___window__0;
		int32_t L_6 = __this->___windowStart__1;
		V_0 = L_6;
		int32_t L_7 = V_0;
		__this->___windowStart__1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_8 = V_0;
		NullCheck(L_5);
		int32_t L_9 = L_8;
		uint8_t L_10 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___window__0;
		int32_t L_12 = __this->___windowStart__1;
		V_0 = L_12;
		int32_t L_13 = V_0;
		__this->___windowStart__1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		int32_t L_14 = V_0;
		NullCheck(L_11);
		int32_t L_15 = L_14;
		uint8_t L_16 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		int32_t L_17 = __this->___bitsInBuffer__4;
		__this->___buffer__3 = ((int32_t)((int32_t)L_4|((int32_t)(((int32_t)(((int32_t)((int32_t)L_10&((int32_t)255)))|((int32_t)(((int32_t)((int32_t)L_16&((int32_t)255)))<<8))))<<((int32_t)(L_17&((int32_t)31)))))));
		int32_t L_18 = __this->___bitsInBuffer__4;
		__this->___bitsInBuffer__4 = ((int32_t)il2cpp_codegen_add(L_18, ((int32_t)16)));
	}

IL_007e:
	{
		uint32_t L_19 = __this->___buffer__3;
		int32_t L_20 = ___bitCount0;
		return ((int32_t)((int64_t)(((int64_t)(uint64_t)L_19)&((int64_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(1<<((int32_t)(L_20&((int32_t)31))))), 1))))));
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::TryGetBits(System.Int32,System.Int32&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StreamManipulator_TryGetBits_m5C2ABD3EBACED46DB068C323914CDA30D85B8CC1 (StreamManipulator_t626C6631E1D9BD1EAA5FDB4987C79A2F34A92689* __this, int32_t ___bitCount0, int32_t* ___output1, int32_t ___outputOffset2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___bitCount0;
		int32_t L_1;
		L_1 = StreamManipulator_PeekBits_mF211C8B59086D72F8836E9F4F5619102F71E149A(__this, L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}

IL_000e:
	{
		int32_t* L_3 = ___output1;
		int32_t L_4 = V_0;
		int32_t L_5 = ___outputOffset2;
		*((int32_t*)L_3) = (int32_t)((int32_t)il2cpp_codegen_add(L_4, L_5));
		int32_t L_6 = ___bitCount0;
		StreamManipulator_DropBits_m094CABA3AB3B1B70D2680E4FB8962EBD6B8E0E49(__this, L_6, NULL);
		return (bool)1;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::TryGetBits(System.Int32,System.Byte[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StreamManipulator_TryGetBits_m6BF0BAD1FFBBCDFCBFFA7AC58D17D03A381A65E1 (StreamManipulator_t626C6631E1D9BD1EAA5FDB4987C79A2F34A92689* __this, int32_t ___bitCount0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** ___array1, int32_t ___index2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___bitCount0;
		int32_t L_1;
		L_1 = StreamManipulator_PeekBits_mF211C8B59086D72F8836E9F4F5619102F71E149A(__this, L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}

IL_000e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_3 = ___array1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = *((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031**)L_3);
		int32_t L_5 = ___index2;
		int32_t L_6 = V_0;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (uint8_t)((int32_t)(uint8_t)L_6));
		int32_t L_7 = ___bitCount0;
		StreamManipulator_DropBits_m094CABA3AB3B1B70D2680E4FB8962EBD6B8E0E49(__this, L_7, NULL);
		return (bool)1;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::DropBits(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamManipulator_DropBits_m094CABA3AB3B1B70D2680E4FB8962EBD6B8E0E49 (StreamManipulator_t626C6631E1D9BD1EAA5FDB4987C79A2F34A92689* __this, int32_t ___bitCount0, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___buffer__3;
		int32_t L_1 = ___bitCount0;
		__this->___buffer__3 = ((int32_t)((uint32_t)L_0>>((int32_t)(L_1&((int32_t)31)))));
		int32_t L_2 = __this->___bitsInBuffer__4;
		int32_t L_3 = ___bitCount0;
		__this->___bitsInBuffer__4 = ((int32_t)il2cpp_codegen_subtract(L_2, L_3));
		return;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::get_AvailableBits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StreamManipulator_get_AvailableBits_m90991A9D5E1F58AD333D717C1E1F5B6AE65C1D48 (StreamManipulator_t626C6631E1D9BD1EAA5FDB4987C79A2F34A92689* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___bitsInBuffer__4;
		return L_0;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::get_AvailableBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StreamManipulator_get_AvailableBytes_m3F02851B6B30C7F729CD93D4CB6917473D45FDB4 (StreamManipulator_t626C6631E1D9BD1EAA5FDB4987C79A2F34A92689* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___windowEnd__2;
		int32_t L_1 = __this->___windowStart__1;
		int32_t L_2 = __this->___bitsInBuffer__4;
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), ((int32_t)(L_2>>3))));
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::SkipToByteBoundary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamManipulator_SkipToByteBoundary_m11A241EB548D46A99D9E55C543FBCD9A02C11D32 (StreamManipulator_t626C6631E1D9BD1EAA5FDB4987C79A2F34A92689* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___buffer__3;
		int32_t L_1 = __this->___bitsInBuffer__4;
		__this->___buffer__3 = ((int32_t)((uint32_t)L_0>>((int32_t)(((int32_t)(L_1&7))&((int32_t)31)))));
		int32_t L_2 = __this->___bitsInBuffer__4;
		__this->___bitsInBuffer__4 = ((int32_t)(L_2&((int32_t)-8)));
		return;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::get_IsNeedingInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StreamManipulator_get_IsNeedingInput_mEA9A2390430364EA2A84A33709CC6625C04050D9 (StreamManipulator_t626C6631E1D9BD1EAA5FDB4987C79A2F34A92689* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___windowStart__1;
		int32_t L_1 = __this->___windowEnd__2;
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::CopyBytes(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StreamManipulator_CopyBytes_m326B46651BD903626068679C41A1ADF495A757D6 (StreamManipulator_t626C6631E1D9BD1EAA5FDB4987C79A2F34A92689* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___length2;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamManipulator_CopyBytes_m326B46651BD903626068679C41A1ADF495A757D6_RuntimeMethod_var)));
	}

IL_000f:
	{
		int32_t L_2 = __this->___bitsInBuffer__4;
		if (!((int32_t)(L_2&7)))
		{
			goto IL_0024;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral36919DB41559814DAA1900952B7D08BD1CA0C036)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamManipulator_CopyBytes_m326B46651BD903626068679C41A1ADF495A757D6_RuntimeMethod_var)));
	}

IL_0024:
	{
		V_0 = 0;
		goto IL_005c;
	}

IL_0028:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___output0;
		int32_t L_5 = ___offset1;
		int32_t L_6 = L_5;
		___offset1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		uint32_t L_7 = __this->___buffer__3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (uint8_t)((int32_t)(uint8_t)L_7));
		uint32_t L_8 = __this->___buffer__3;
		__this->___buffer__3 = ((int32_t)((uint32_t)L_8>>8));
		int32_t L_9 = __this->___bitsInBuffer__4;
		__this->___bitsInBuffer__4 = ((int32_t)il2cpp_codegen_subtract(L_9, 8));
		int32_t L_10 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_005c:
	{
		int32_t L_12 = __this->___bitsInBuffer__4;
		if ((((int32_t)L_12) <= ((int32_t)0)))
		{
			goto IL_0069;
		}
	}
	{
		int32_t L_13 = ___length2;
		if ((((int32_t)L_13) > ((int32_t)0)))
		{
			goto IL_0028;
		}
	}

IL_0069:
	{
		int32_t L_14 = ___length2;
		if (L_14)
		{
			goto IL_006e;
		}
	}
	{
		int32_t L_15 = V_0;
		return L_15;
	}

IL_006e:
	{
		int32_t L_16 = __this->___windowEnd__2;
		int32_t L_17 = __this->___windowStart__1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_16, L_17));
		int32_t L_18 = ___length2;
		int32_t L_19 = V_1;
		if ((((int32_t)L_18) <= ((int32_t)L_19)))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_20 = V_1;
		___length2 = L_20;
	}

IL_0083:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = __this->___window__0;
		int32_t L_22 = __this->___windowStart__1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = ___output0;
		int32_t L_24 = ___offset1;
		int32_t L_25 = ___length2;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_21, L_22, (RuntimeArray*)L_23, L_24, L_25, NULL);
		int32_t L_26 = __this->___windowStart__1;
		int32_t L_27 = ___length2;
		__this->___windowStart__1 = ((int32_t)il2cpp_codegen_add(L_26, L_27));
		int32_t L_28 = __this->___windowStart__1;
		int32_t L_29 = __this->___windowEnd__2;
		if (!((int32_t)(((int32_t)il2cpp_codegen_subtract(L_28, L_29))&1)))
		{
			goto IL_00e1;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = __this->___window__0;
		int32_t L_31 = __this->___windowStart__1;
		V_2 = L_31;
		int32_t L_32 = V_2;
		__this->___windowStart__1 = ((int32_t)il2cpp_codegen_add(L_32, 1));
		int32_t L_33 = V_2;
		NullCheck(L_30);
		int32_t L_34 = L_33;
		uint8_t L_35 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		__this->___buffer__3 = ((int32_t)((int32_t)L_35&((int32_t)255)));
		__this->___bitsInBuffer__4 = 8;
	}

IL_00e1:
	{
		int32_t L_36 = V_0;
		int32_t L_37 = ___length2;
		return ((int32_t)il2cpp_codegen_add(L_36, L_37));
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::SetInput(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamManipulator_SetInput_mFD2FB5325969D00CE3C052CC8D57D5B6DCF351A7 (StreamManipulator_t626C6631E1D9BD1EAA5FDB4987C79A2F34A92689* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___buffer0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamManipulator_SetInput_mFD2FB5325969D00CE3C052CC8D57D5B6DCF351A7_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___offset1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF0A45CCAC3B8CC663DC29BD756A86295833579C1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamManipulator_SetInput_mFD2FB5325969D00CE3C052CC8D57D5B6DCF351A7_RuntimeMethod_var)));
	}

IL_0022:
	{
		int32_t L_4 = ___count2;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF0A45CCAC3B8CC663DC29BD756A86295833579C1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamManipulator_SetInput_mFD2FB5325969D00CE3C052CC8D57D5B6DCF351A7_RuntimeMethod_var)));
	}

IL_0036:
	{
		int32_t L_6 = __this->___windowStart__1;
		int32_t L_7 = __this->___windowEnd__2;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_004f;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_8 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral30D44D3EB7B534CAF51AD514F18FE7DD626129FE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamManipulator_SetInput_mFD2FB5325969D00CE3C052CC8D57D5B6DCF351A7_RuntimeMethod_var)));
	}

IL_004f:
	{
		int32_t L_9 = ___offset1;
		int32_t L_10 = ___count2;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, L_10));
		int32_t L_11 = ___offset1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) > ((int32_t)L_12)))
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___buffer0;
		NullCheck(L_14);
		if ((((int32_t)L_13) <= ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0068;
		}
	}

IL_005d:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_15 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamManipulator_SetInput_mFD2FB5325969D00CE3C052CC8D57D5B6DCF351A7_RuntimeMethod_var)));
	}

IL_0068:
	{
		int32_t L_16 = ___count2;
		if (!((int32_t)(L_16&1)))
		{
			goto IL_00a0;
		}
	}
	{
		uint32_t L_17 = __this->___buffer__3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___buffer0;
		int32_t L_19 = ___offset1;
		int32_t L_20 = L_19;
		___offset1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		NullCheck(L_18);
		int32_t L_21 = L_20;
		uint8_t L_22 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		int32_t L_23 = __this->___bitsInBuffer__4;
		__this->___buffer__3 = ((int32_t)((int32_t)L_17|((int32_t)(((int32_t)((int32_t)L_22&((int32_t)255)))<<((int32_t)(L_23&((int32_t)31)))))));
		int32_t L_24 = __this->___bitsInBuffer__4;
		__this->___bitsInBuffer__4 = ((int32_t)il2cpp_codegen_add(L_24, 8));
	}

IL_00a0:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = ___buffer0;
		__this->___window__0 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___window__0), (void*)L_25);
		int32_t L_26 = ___offset1;
		__this->___windowStart__1 = L_26;
		int32_t L_27 = V_0;
		__this->___windowEnd__2 = L_27;
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamManipulator__ctor_mABF375127B2C20DC969C50EC909C3FB0C01DF6B9 (StreamManipulator_t626C6631E1D9BD1EAA5FDB4987C79A2F34A92689* __this, const RuntimeMethod* method) 
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
// System.Byte[] ICSharpCode.SharpZipLib.Encryption.PkzipClassic::GenerateKeys(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* PkzipClassic_GenerateKeys_m30F9A75E745183CA5361F959D5588F6B15927404 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___seed0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Crc32_t44597B0AB0A0CE01AB30303BA5EC0F6E4F51BF33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tFA7F7F30E34DF4A03E60907D6B496B57A82AC22D____6116ACF9BA29EF61E63AF05766A8CCBC05D3DF52FE07AE0DBCD10FF1065B6938_1_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___seed0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2D1336CF54989C981F460E20B23CF7092A4FBD4D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PkzipClassic_GenerateKeys_m30F9A75E745183CA5361F959D5588F6B15927404_RuntimeMethod_var)));
	}

IL_000e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___seed0;
		NullCheck(L_2);
		if ((((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3B08B15164C3DE662F591B588DBEE5D47CB1DFAB)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2D1336CF54989C981F460E20B23CF7092A4FBD4D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PkzipClassic_GenerateKeys_m30F9A75E745183CA5361F959D5588F6B15927404_RuntimeMethod_var)));
	}

IL_0022:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)3);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = L_4;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_6 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tFA7F7F30E34DF4A03E60907D6B496B57A82AC22D____6116ACF9BA29EF61E63AF05766A8CCBC05D3DF52FE07AE0DBCD10FF1065B6938_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_5, L_6, NULL);
		V_0 = L_5;
		V_1 = 0;
		goto IL_0075;
	}

IL_0038:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = 0;
		uint32_t L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___seed0;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		uint8_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		il2cpp_codegen_runtime_class_init_inline(Crc32_t44597B0AB0A0CE01AB30303BA5EC0F6E4F51BF33_il2cpp_TypeInfo_var);
		uint32_t L_15;
		L_15 = Crc32_ComputeCrc32_m415C4FD62B6CD1AC763E92C848DFD6B9AF7157DD_inline(L_10, L_14, NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_15);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18 = 1;
		uint32_t L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = 0;
		uint32_t L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_19, ((int32_t)(uint8_t)L_22))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = V_0;
		NullCheck(L_24);
		int32_t L_25 = 1;
		uint32_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((int32_t)L_26, ((int32_t)134775813))), 1)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = V_0;
		NullCheck(L_28);
		int32_t L_29 = 2;
		uint32_t L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = V_0;
		NullCheck(L_31);
		int32_t L_32 = 1;
		uint32_t L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		uint32_t L_34;
		L_34 = Crc32_ComputeCrc32_m415C4FD62B6CD1AC763E92C848DFD6B9AF7157DD_inline(L_30, (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_33>>((int32_t)24)))), NULL);
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_34);
		int32_t L_35 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_0075:
	{
		int32_t L_36 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = ___seed0;
		NullCheck(L_37);
		if ((((int32_t)L_36) < ((int32_t)((int32_t)(((RuntimeArray*)L_37)->max_length)))))
		{
			goto IL_0038;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = L_38;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = V_0;
		NullCheck(L_40);
		int32_t L_41 = 0;
		uint32_t L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_42&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = L_39;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = V_0;
		NullCheck(L_44);
		int32_t L_45 = 0;
		uint32_t L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((uint32_t)L_46>>8))&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = L_43;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = V_0;
		NullCheck(L_48);
		int32_t L_49 = 0;
		uint32_t L_50 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((uint32_t)L_50>>((int32_t)16)))&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = L_47;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_52 = V_0;
		NullCheck(L_52);
		int32_t L_53 = 0;
		uint32_t L_54 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((uint32_t)L_54>>((int32_t)24)))&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55 = L_51;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = V_0;
		NullCheck(L_56);
		int32_t L_57 = 1;
		uint32_t L_58 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		NullCheck(L_55);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_58&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_59 = L_55;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = V_0;
		NullCheck(L_60);
		int32_t L_61 = 1;
		uint32_t L_62 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		NullCheck(L_59);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((uint32_t)L_62>>8))&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63 = L_59;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_64 = V_0;
		NullCheck(L_64);
		int32_t L_65 = 1;
		uint32_t L_66 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((uint32_t)L_66>>((int32_t)16)))&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_67 = L_63;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_68 = V_0;
		NullCheck(L_68);
		int32_t L_69 = 1;
		uint32_t L_70 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((uint32_t)L_70>>((int32_t)24)))&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_71 = L_67;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_72 = V_0;
		NullCheck(L_72);
		int32_t L_73 = 2;
		uint32_t L_74 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		NullCheck(L_71);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_74&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_75 = L_71;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_76 = V_0;
		NullCheck(L_76);
		int32_t L_77 = 2;
		uint32_t L_78 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((uint32_t)L_78>>8))&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_79 = L_75;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_80 = V_0;
		NullCheck(L_80);
		int32_t L_81 = 2;
		uint32_t L_82 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((uint32_t)L_82>>((int32_t)16)))&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_83 = L_79;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_84 = V_0;
		NullCheck(L_84);
		int32_t L_85 = 2;
		uint32_t L_86 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		NullCheck(L_83);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((uint32_t)L_86>>((int32_t)24)))&((int32_t)255)))));
		return L_83;
	}
}
// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassic::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PkzipClassic__ctor_m9725AEEB72479F55DFDB5AB212437BE7E938A1E5 (PkzipClassic_tFBEEDDCE7A3840AB2B8ABA2387B818EFA1963851* __this, const RuntimeMethod* method) 
{
	{
		SymmetricAlgorithm__ctor_mB028F36D59487421C796D35BE91150C3BDFCEC5A(__this, NULL);
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
// System.Byte ICSharpCode.SharpZipLib.Encryption.PkzipClassicCryptoBase::TransformByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PkzipClassicCryptoBase_TransformByte_m562E81B3284793B00040A9B1DE61B5D96DF443E1 (PkzipClassicCryptoBase_t511C47A22320A10E38F63EB601DD36A46637FD38* __this, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___keys_0;
		NullCheck(L_0);
		int32_t L_1 = 2;
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		int32_t L_3 = ((int32_t)(((int32_t)((int32_t)L_2&((int32_t)65535)))|2));
		return (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)((int32_t)il2cpp_codegen_multiply(L_3, ((int32_t)(L_3^1))))>>8)));
	}
}
// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassicCryptoBase::SetKeys(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PkzipClassicCryptoBase_SetKeys_m0444E777B325A95CB7E8922D431D84E413B91469 (PkzipClassicCryptoBase_t511C47A22320A10E38F63EB601DD36A46637FD38* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keyData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___keyData0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC4FDA8C54913FB01B2F19F0F1D7824A534038F9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PkzipClassicCryptoBase_SetKeys_m0444E777B325A95CB7E8922D431D84E413B91469_RuntimeMethod_var)));
	}

IL_000e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___keyData0;
		NullCheck(L_2);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))) == ((int32_t)((int32_t)12))))
		{
			goto IL_0020;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42185AEF1D13B50B099FF24FCC6919AA7E22945E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PkzipClassicCryptoBase_SetKeys_m0444E777B325A95CB7E8922D431D84E413B91469_RuntimeMethod_var)));
	}

IL_0020:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->___keys_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___keys_0), (void*)L_4);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = __this->___keys_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___keyData0;
		NullCheck(L_6);
		int32_t L_7 = 3;
		uint8_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___keyData0;
		NullCheck(L_9);
		int32_t L_10 = 2;
		uint8_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___keyData0;
		NullCheck(L_12);
		int32_t L_13 = 1;
		uint8_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___keyData0;
		NullCheck(L_15);
		int32_t L_16 = 0;
		uint8_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_8<<((int32_t)24)))|((int32_t)((int32_t)L_11<<((int32_t)16)))))|((int32_t)((int32_t)L_14<<8))))|(int32_t)L_17)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = __this->___keys_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___keyData0;
		NullCheck(L_19);
		int32_t L_20 = 7;
		uint8_t L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___keyData0;
		NullCheck(L_22);
		int32_t L_23 = 6;
		uint8_t L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = ___keyData0;
		NullCheck(L_25);
		int32_t L_26 = 5;
		uint8_t L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = ___keyData0;
		NullCheck(L_28);
		int32_t L_29 = 4;
		uint8_t L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_21<<((int32_t)24)))|((int32_t)((int32_t)L_24<<((int32_t)16)))))|((int32_t)((int32_t)L_27<<8))))|(int32_t)L_30)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = __this->___keys_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ___keyData0;
		NullCheck(L_32);
		int32_t L_33 = ((int32_t)11);
		uint8_t L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = ___keyData0;
		NullCheck(L_35);
		int32_t L_36 = ((int32_t)10);
		uint8_t L_37 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = ___keyData0;
		NullCheck(L_38);
		int32_t L_39 = ((int32_t)9);
		uint8_t L_40 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = ___keyData0;
		NullCheck(L_41);
		int32_t L_42 = 8;
		uint8_t L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_34<<((int32_t)24)))|((int32_t)((int32_t)L_37<<((int32_t)16)))))|((int32_t)((int32_t)L_40<<8))))|(int32_t)L_43)));
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassicCryptoBase::UpdateKeys(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PkzipClassicCryptoBase_UpdateKeys_mBBDD4941427951A62A21C2CDD8FDE31A5F1A0441 (PkzipClassicCryptoBase_t511C47A22320A10E38F63EB601DD36A46637FD38* __this, uint8_t ___ch0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Crc32_t44597B0AB0A0CE01AB30303BA5EC0F6E4F51BF33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___keys_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = __this->___keys_0;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		uint8_t L_4 = ___ch0;
		il2cpp_codegen_runtime_class_init_inline(Crc32_t44597B0AB0A0CE01AB30303BA5EC0F6E4F51BF33_il2cpp_TypeInfo_var);
		uint32_t L_5;
		L_5 = Crc32_ComputeCrc32_m415C4FD62B6CD1AC763E92C848DFD6B9AF7157DD_inline(L_3, L_4, NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = __this->___keys_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = __this->___keys_0;
		NullCheck(L_7);
		int32_t L_8 = 1;
		uint32_t L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = __this->___keys_0;
		NullCheck(L_10);
		int32_t L_11 = 0;
		uint32_t L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, ((int32_t)(uint8_t)L_12))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = __this->___keys_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = __this->___keys_0;
		NullCheck(L_14);
		int32_t L_15 = 1;
		uint32_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((int32_t)L_16, ((int32_t)134775813))), 1)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = __this->___keys_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = __this->___keys_0;
		NullCheck(L_18);
		int32_t L_19 = 2;
		uint32_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = __this->___keys_0;
		NullCheck(L_21);
		int32_t L_22 = 1;
		uint32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		uint32_t L_24;
		L_24 = Crc32_ComputeCrc32_m415C4FD62B6CD1AC763E92C848DFD6B9AF7157DD_inline(L_20, (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_23>>((int32_t)24)))), NULL);
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_24);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassicCryptoBase::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PkzipClassicCryptoBase_Reset_m4AAF69726582F9C9EA9F8109D32B13CA661C703B (PkzipClassicCryptoBase_t511C47A22320A10E38F63EB601DD36A46637FD38* __this, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___keys_0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = __this->___keys_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = __this->___keys_0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)0);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassicCryptoBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PkzipClassicCryptoBase__ctor_m013F4376CF64AA2B5D5DE9BB20A19A6AA2842D86 (PkzipClassicCryptoBase_t511C47A22320A10E38F63EB601DD36A46637FD38* __this, const RuntimeMethod* method) 
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
// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassicEncryptCryptoTransform::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PkzipClassicEncryptCryptoTransform__ctor_mF6FEC4C002E888A7742B7476D0370407CE8F85E3 (PkzipClassicEncryptCryptoTransform_t221C3842059AAB91DA3A0029848D9C06F8093233* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keyBlock0, const RuntimeMethod* method) 
{
	{
		PkzipClassicCryptoBase__ctor_m013F4376CF64AA2B5D5DE9BB20A19A6AA2842D86(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___keyBlock0;
		PkzipClassicCryptoBase_SetKeys_m0444E777B325A95CB7E8922D431D84E413B91469(__this, L_0, NULL);
		return;
	}
}
// System.Byte[] ICSharpCode.SharpZipLib.Encryption.PkzipClassicEncryptCryptoTransform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* PkzipClassicEncryptCryptoTransform_TransformFinalBlock_m78CDB5E4992629BAD696B6335D0E077B205D839B (PkzipClassicEncryptCryptoTransform_t221C3842059AAB91DA3A0029848D9C06F8093233* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		int32_t L_0 = ___inputCount2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___inputBuffer0;
		int32_t L_3 = ___inputOffset1;
		int32_t L_4 = ___inputCount2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		int32_t L_6;
		L_6 = PkzipClassicEncryptCryptoTransform_TransformBlock_mF6ED7F17496AAC2E4E709EB95FA246055A962A4B(__this, L_2, L_3, L_4, L_5, 0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		return L_7;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Encryption.PkzipClassicEncryptCryptoTransform::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PkzipClassicEncryptCryptoTransform_TransformBlock_mF6ED7F17496AAC2E4E709EB95FA246055A962A4B (PkzipClassicEncryptCryptoTransform_t221C3842059AAB91DA3A0029848D9C06F8093233* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outputBuffer3, int32_t ___outputOffset4, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	{
		int32_t L_0 = ___inputOffset1;
		V_0 = L_0;
		goto IL_0028;
	}

IL_0004:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___inputBuffer0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___outputBuffer3;
		int32_t L_6 = ___outputOffset4;
		int32_t L_7 = L_6;
		___outputOffset4 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___inputBuffer0;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		uint8_t L_12;
		L_12 = PkzipClassicCryptoBase_TransformByte_m562E81B3284793B00040A9B1DE61B5D96DF443E1(__this, NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_11^(int32_t)L_12))));
		uint8_t L_13 = V_1;
		PkzipClassicCryptoBase_UpdateKeys_mBBDD4941427951A62A21C2CDD8FDE31A5F1A0441(__this, L_13, NULL);
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0028:
	{
		int32_t L_15 = V_0;
		int32_t L_16 = ___inputOffset1;
		int32_t L_17 = ___inputCount2;
		if ((((int32_t)L_15) < ((int32_t)((int32_t)il2cpp_codegen_add(L_16, L_17)))))
		{
			goto IL_0004;
		}
	}
	{
		int32_t L_18 = ___inputCount2;
		return L_18;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Encryption.PkzipClassicEncryptCryptoTransform::get_CanReuseTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PkzipClassicEncryptCryptoTransform_get_CanReuseTransform_m473D0B5F0578EBE657B13464759AEA19635AAAC4 (PkzipClassicEncryptCryptoTransform_t221C3842059AAB91DA3A0029848D9C06F8093233* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Encryption.PkzipClassicEncryptCryptoTransform::get_InputBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PkzipClassicEncryptCryptoTransform_get_InputBlockSize_mC9DAB908DC4A334418A34914C8E7D01B233ED184 (PkzipClassicEncryptCryptoTransform_t221C3842059AAB91DA3A0029848D9C06F8093233* __this, const RuntimeMethod* method) 
{
	{
		return 1;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Encryption.PkzipClassicEncryptCryptoTransform::get_OutputBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PkzipClassicEncryptCryptoTransform_get_OutputBlockSize_m5AB9717309C40D8B119371E21F66D179BECCCB29 (PkzipClassicEncryptCryptoTransform_t221C3842059AAB91DA3A0029848D9C06F8093233* __this, const RuntimeMethod* method) 
{
	{
		return 1;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Encryption.PkzipClassicEncryptCryptoTransform::get_CanTransformMultipleBlocks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PkzipClassicEncryptCryptoTransform_get_CanTransformMultipleBlocks_m2E8C4BF7A6C7509D0CDB129C99FDB5ABC58BA219 (PkzipClassicEncryptCryptoTransform_t221C3842059AAB91DA3A0029848D9C06F8093233* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassicEncryptCryptoTransform::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PkzipClassicEncryptCryptoTransform_Dispose_m9D379C9BBA4689CDDF82A1516C0E9A89D7126524 (PkzipClassicEncryptCryptoTransform_t221C3842059AAB91DA3A0029848D9C06F8093233* __this, const RuntimeMethod* method) 
{
	{
		PkzipClassicCryptoBase_Reset_m4AAF69726582F9C9EA9F8109D32B13CA661C703B(__this, NULL);
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
// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassicDecryptCryptoTransform::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PkzipClassicDecryptCryptoTransform__ctor_m71FE21D85A22418C575FA90E0BAC63B2F0B4E931 (PkzipClassicDecryptCryptoTransform_t2D73686A12E6EC67223F5891644A7E57759E3178* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keyBlock0, const RuntimeMethod* method) 
{
	{
		PkzipClassicCryptoBase__ctor_m013F4376CF64AA2B5D5DE9BB20A19A6AA2842D86(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___keyBlock0;
		PkzipClassicCryptoBase_SetKeys_m0444E777B325A95CB7E8922D431D84E413B91469(__this, L_0, NULL);
		return;
	}
}
// System.Byte[] ICSharpCode.SharpZipLib.Encryption.PkzipClassicDecryptCryptoTransform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* PkzipClassicDecryptCryptoTransform_TransformFinalBlock_m8E7C6D63545A316F41372EC5212F0C5EE5320F65 (PkzipClassicDecryptCryptoTransform_t2D73686A12E6EC67223F5891644A7E57759E3178* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		int32_t L_0 = ___inputCount2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___inputBuffer0;
		int32_t L_3 = ___inputOffset1;
		int32_t L_4 = ___inputCount2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		int32_t L_6;
		L_6 = PkzipClassicDecryptCryptoTransform_TransformBlock_m4F754CB891277C9DA593C40BBCCB13BE9DDB0E1C(__this, L_2, L_3, L_4, L_5, 0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		return L_7;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Encryption.PkzipClassicDecryptCryptoTransform::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PkzipClassicDecryptCryptoTransform_TransformBlock_m4F754CB891277C9DA593C40BBCCB13BE9DDB0E1C (PkzipClassicDecryptCryptoTransform_t2D73686A12E6EC67223F5891644A7E57759E3178* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outputBuffer3, int32_t ___outputOffset4, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	{
		int32_t L_0 = ___inputOffset1;
		V_0 = L_0;
		goto IL_0026;
	}

IL_0004:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___inputBuffer0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		uint8_t L_5;
		L_5 = PkzipClassicCryptoBase_TransformByte_m562E81B3284793B00040A9B1DE61B5D96DF443E1(__this, NULL);
		V_1 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_4^(int32_t)L_5)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___outputBuffer3;
		int32_t L_7 = ___outputOffset4;
		int32_t L_8 = L_7;
		___outputOffset4 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		uint8_t L_9 = V_1;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (uint8_t)L_9);
		uint8_t L_10 = V_1;
		PkzipClassicCryptoBase_UpdateKeys_mBBDD4941427951A62A21C2CDD8FDE31A5F1A0441(__this, L_10, NULL);
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0026:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = ___inputOffset1;
		int32_t L_14 = ___inputCount2;
		if ((((int32_t)L_12) < ((int32_t)((int32_t)il2cpp_codegen_add(L_13, L_14)))))
		{
			goto IL_0004;
		}
	}
	{
		int32_t L_15 = ___inputCount2;
		return L_15;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Encryption.PkzipClassicDecryptCryptoTransform::get_CanReuseTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PkzipClassicDecryptCryptoTransform_get_CanReuseTransform_mE62151C43F0F14353C363FCEF81B09F307ACA656 (PkzipClassicDecryptCryptoTransform_t2D73686A12E6EC67223F5891644A7E57759E3178* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Encryption.PkzipClassicDecryptCryptoTransform::get_InputBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PkzipClassicDecryptCryptoTransform_get_InputBlockSize_mE6D4842AC8ABE61D209A999A4421F0C3E43BB726 (PkzipClassicDecryptCryptoTransform_t2D73686A12E6EC67223F5891644A7E57759E3178* __this, const RuntimeMethod* method) 
{
	{
		return 1;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Encryption.PkzipClassicDecryptCryptoTransform::get_OutputBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PkzipClassicDecryptCryptoTransform_get_OutputBlockSize_m8FA4498E4181D3BF050FDF281CF61E1B5F406B5F (PkzipClassicDecryptCryptoTransform_t2D73686A12E6EC67223F5891644A7E57759E3178* __this, const RuntimeMethod* method) 
{
	{
		return 1;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Encryption.PkzipClassicDecryptCryptoTransform::get_CanTransformMultipleBlocks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PkzipClassicDecryptCryptoTransform_get_CanTransformMultipleBlocks_mBB377F96020A7E02990B7A88CA245516C017C722 (PkzipClassicDecryptCryptoTransform_t2D73686A12E6EC67223F5891644A7E57759E3178* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassicDecryptCryptoTransform::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PkzipClassicDecryptCryptoTransform_Dispose_mD8DB144E991017437DAFE09F8C6992B6500352BA (PkzipClassicDecryptCryptoTransform_t2D73686A12E6EC67223F5891644A7E57759E3178* __this, const RuntimeMethod* method) 
{
	{
		PkzipClassicCryptoBase_Reset_m4AAF69726582F9C9EA9F8109D32B13CA661C703B(__this, NULL);
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
// System.Int32 ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged::get_BlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PkzipClassicManaged_get_BlockSize_m2844CE869EFCC7F73A2C668AE30DAD618A299F67 (PkzipClassicManaged_tC3A9C9A5CC6D9FDD958207518E982E5C54080DAB* __this, const RuntimeMethod* method) 
{
	{
		return 8;
	}
}
// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged::set_BlockSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PkzipClassicManaged_set_BlockSize_m49688514B12E14C0D7E5D0789D735D31DA14D040 (PkzipClassicManaged_tC3A9C9A5CC6D9FDD958207518E982E5C54080DAB* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)8)))
		{
			goto IL_000f;
		}
	}
	{
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_1 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral668BC7EE3DABD652E48EEF464BF03AD9B53F7D26)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PkzipClassicManaged_set_BlockSize_m49688514B12E14C0D7E5D0789D735D31DA14D040_RuntimeMethod_var)));
	}

IL_000f:
	{
		return;
	}
}
// System.Security.Cryptography.KeySizes[] ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged::get_LegalKeySizes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* PkzipClassicManaged_get_LegalKeySizes_m9E37F8F53F055769D0DFBF0389A5BD8C868815A4 (PkzipClassicManaged_tC3A9C9A5CC6D9FDD958207518E982E5C54080DAB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* L_0 = (KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03*)(KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03*)SZArrayNew(KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03_il2cpp_TypeInfo_var, (uint32_t)1);
		KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* L_1 = L_0;
		KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4* L_2 = (KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4*)il2cpp_codegen_object_new(KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		KeySizes__ctor_m0488C1FC71E4A417E16EA1E06FC24F4D7DC80104(L_2, ((int32_t)96), ((int32_t)96), 0, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4*)L_2);
		return L_1;
	}
}
// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged::GenerateIV()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PkzipClassicManaged_GenerateIV_m68E82697BF5AAA6F0E3D2788515F171FE489970D (PkzipClassicManaged_tC3A9C9A5CC6D9FDD958207518E982E5C54080DAB* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Security.Cryptography.KeySizes[] ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged::get_LegalBlockSizes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* PkzipClassicManaged_get_LegalBlockSizes_m4A9353E0EF1DE8F6D606A39A8ECC11E46DF009F7 (PkzipClassicManaged_tC3A9C9A5CC6D9FDD958207518E982E5C54080DAB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* L_0 = (KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03*)(KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03*)SZArrayNew(KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03_il2cpp_TypeInfo_var, (uint32_t)1);
		KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* L_1 = L_0;
		KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4* L_2 = (KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4*)il2cpp_codegen_object_new(KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		KeySizes__ctor_m0488C1FC71E4A417E16EA1E06FC24F4D7DC80104(L_2, 8, 8, 0, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4*)L_2);
		return L_1;
	}
}
// System.Byte[] ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* PkzipClassicManaged_get_Key_m578035169EF71DC6AF23C0EB935D98D1285E8FD9 (PkzipClassicManaged_tC3A9C9A5CC6D9FDD958207518E982E5C54080DAB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___key__9;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		VirtualActionInvoker0::Invoke(26 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::GenerateKey() */, __this);
	}

IL_000e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___key__9;
		NullCheck((RuntimeArray*)L_1);
		RuntimeObject* L_2;
		L_2 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_1, NULL);
		return ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var));
	}
}
// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged::set_Key(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PkzipClassicManaged_set_Key_m51DEB0FE186DC44DA5F64C57C157F614E49A5CE4 (PkzipClassicManaged_tC3A9C9A5CC6D9FDD958207518E982E5C54080DAB* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PkzipClassicManaged_set_Key_m51DEB0FE186DC44DA5F64C57C157F614E49A5CE4_RuntimeMethod_var)));
	}

IL_000e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___value0;
		NullCheck(L_2);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))) == ((int32_t)((int32_t)12))))
		{
			goto IL_0020;
		}
	}
	{
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_3 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4F13D9CF93D00D34A69E6720B2AEA7C9132F6B2B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PkzipClassicManaged_set_Key_m51DEB0FE186DC44DA5F64C57C157F614E49A5CE4_RuntimeMethod_var)));
	}

IL_0020:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___value0;
		NullCheck((RuntimeArray*)L_4);
		RuntimeObject* L_5;
		L_5 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_4, NULL);
		__this->___key__9 = ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_5, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___key__9), (void*)((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_5, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged::GenerateKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PkzipClassicManaged_GenerateKey_m3346E68C2652740113A979D2EE7CAC132E952BDF (PkzipClassicManaged_tC3A9C9A5CC6D9FDD958207518E982E5C54080DAB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		__this->___key__9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___key__9), (void*)L_0);
		RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170* L_1 = (RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170*)il2cpp_codegen_object_new(RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		RNGCryptoServiceProvider__ctor_m605146E692C0209B3FFE83F7AC94335CA089CA09(L_1, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0021:
			{// begin finally (depth: 1)
				{
					RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170* L_2 = V_0;
					if (!L_2)
					{
						goto IL_002a;
					}
				}
				{
					RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_002a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170* L_4 = V_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___key__9;
			NullCheck(L_4);
			VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(6 /* System.Void System.Security.Cryptography.RandomNumberGenerator::GetBytes(System.Byte[]) */, L_4, L_5);
			goto IL_002b;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002b:
	{
		return;
	}
}
// System.Security.Cryptography.ICryptoTransform ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged::CreateEncryptor(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PkzipClassicManaged_CreateEncryptor_m9F436CE33B3438787BFE4503376CBA298C33B6E5 (PkzipClassicManaged_tC3A9C9A5CC6D9FDD958207518E982E5C54080DAB* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___rgbKey0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___rgbIV1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PkzipClassicEncryptCryptoTransform_t221C3842059AAB91DA3A0029848D9C06F8093233_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___rgbKey0;
		__this->___key__9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___key__9), (void*)L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(12 /* System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_Key() */, __this);
		PkzipClassicEncryptCryptoTransform_t221C3842059AAB91DA3A0029848D9C06F8093233* L_2 = (PkzipClassicEncryptCryptoTransform_t221C3842059AAB91DA3A0029848D9C06F8093233*)il2cpp_codegen_object_new(PkzipClassicEncryptCryptoTransform_t221C3842059AAB91DA3A0029848D9C06F8093233_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		PkzipClassicEncryptCryptoTransform__ctor_mF6FEC4C002E888A7742B7476D0370407CE8F85E3(L_2, L_1, NULL);
		return L_2;
	}
}
// System.Security.Cryptography.ICryptoTransform ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged::CreateDecryptor(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PkzipClassicManaged_CreateDecryptor_mF6D61B13DC8DF5A308BFDF28216E65105D2A4940 (PkzipClassicManaged_tC3A9C9A5CC6D9FDD958207518E982E5C54080DAB* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___rgbKey0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___rgbIV1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PkzipClassicDecryptCryptoTransform_t2D73686A12E6EC67223F5891644A7E57759E3178_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___rgbKey0;
		__this->___key__9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___key__9), (void*)L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(12 /* System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_Key() */, __this);
		PkzipClassicDecryptCryptoTransform_t2D73686A12E6EC67223F5891644A7E57759E3178* L_2 = (PkzipClassicDecryptCryptoTransform_t2D73686A12E6EC67223F5891644A7E57759E3178*)il2cpp_codegen_object_new(PkzipClassicDecryptCryptoTransform_t2D73686A12E6EC67223F5891644A7E57759E3178_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		PkzipClassicDecryptCryptoTransform__ctor_m71FE21D85A22418C575FA90E0BAC63B2F0B4E931(L_2, L_1, NULL);
		return L_2;
	}
}
// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PkzipClassicManaged__ctor_m4A04A8B6C4B44BD96DB38D12624D14F9C9819593 (PkzipClassicManaged_tC3A9C9A5CC6D9FDD958207518E982E5C54080DAB* __this, const RuntimeMethod* method) 
{
	{
		PkzipClassic__ctor_m9725AEEB72479F55DFDB5AB212437BE7E938A1E5(__this, NULL);
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
// System.Void ICSharpCode.SharpZipLib.Encryption.ZipAESStream::.ctor(System.IO.Stream,ICSharpCode.SharpZipLib.Encryption.ZipAESTransform,System.Security.Cryptography.CryptoStreamMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipAESStream__ctor_mBE431878A503B03F92D14E1DD44248516628D483 (ZipAESStream_t9CB50BCC4129C9B2D9EF26F8FE10CB1933AB0226* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, ZipAESTransform_t81E0F17E8B4E0D3470F5D5A46D6DE031DDBC5C2C* ___transform1, int32_t ___mode2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		ZipAESTransform_t81E0F17E8B4E0D3470F5D5A46D6DE031DDBC5C2C* L_1 = ___transform1;
		int32_t L_2 = ___mode2;
		CryptoStream__ctor_mFCB7E1F2B96287E968978AC12DC1B1F4E44851B6(__this, L_0, L_1, L_2, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = ___stream0;
		__this->____stream_19 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____stream_19), (void*)L_3);
		ZipAESTransform_t81E0F17E8B4E0D3470F5D5A46D6DE031DDBC5C2C* L_4 = ___transform1;
		__this->____transform_20 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____transform_20), (void*)L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		__this->____slideBuffer_21 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slideBuffer_21), (void*)L_5);
		int32_t L_6 = ___mode2;
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		Exception_t* L_7 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5B83DDB4DB491961BE1315130C2ED402FB87DE45)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipAESStream__ctor_mBE431878A503B03F92D14E1DD44248516628D483_RuntimeMethod_var)));
	}

IL_0035:
	{
		return;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Encryption.ZipAESStream::get_HasBufferedData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZipAESStream_get_HasBufferedData_mEFAA3542F9B6A9DD396EFD7C24E494E7A7E658E6 (ZipAESStream_t9CB50BCC4129C9B2D9EF26F8FE10CB1933AB0226* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____transformBuffer_24;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = __this->____transformBufferStartPos_26;
		int32_t L_2 = __this->____transformBufferFreePos_25;
		return (bool)((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0);
	}

IL_0017:
	{
		return (bool)0;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Encryption.ZipAESStream::Read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZipAESStream_Read_m39852704A0F6EA98DBD68B9DA5E6AE7395614129 (ZipAESStream_t9CB50BCC4129C9B2D9EF26F8FE10CB1933AB0226* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___count2;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		V_0 = 0;
		bool L_1;
		L_1 = ZipAESStream_get_HasBufferedData_mEFAA3542F9B6A9DD396EFD7C24E494E7A7E658E6(__this, NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___buffer0;
		int32_t L_3 = ___offset1;
		int32_t L_4 = ___count2;
		int32_t L_5;
		L_5 = ZipAESStream_ReadBufferedData_mA2E55A04EC90833054995728FF1D7E53D45F4FCA(__this, L_2, L_3, L_4, NULL);
		V_0 = L_5;
		int32_t L_6 = V_0;
		int32_t L_7 = ___count2;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_8 = V_0;
		return L_8;
	}

IL_001f:
	{
		int32_t L_9 = ___offset1;
		int32_t L_10 = V_0;
		___offset1 = ((int32_t)il2cpp_codegen_add(L_9, L_10));
		int32_t L_11 = ___count2;
		int32_t L_12 = V_0;
		___count2 = ((int32_t)il2cpp_codegen_subtract(L_11, L_12));
	}

IL_0029:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->____slideBuffer_21;
		if (!L_13)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_14 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___buffer0;
		int32_t L_16 = ___offset1;
		int32_t L_17 = ___count2;
		int32_t L_18;
		L_18 = ZipAESStream_ReadAndTransform_mBB994079CAFA0957CA1EEF16B7D4ABE6567EDD93(__this, L_15, L_16, L_17, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, L_18));
	}

IL_003d:
	{
		int32_t L_19 = V_0;
		return L_19;
	}
}
// System.Threading.Tasks.Task`1<System.Int32> ICSharpCode.SharpZipLib.Encryption.ZipAESStream::ReadAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C228DE57804012969575431CFF12D57C875552D* ZipAESStream_ReadAsync_mC1421BB0229E8300598E25E9E5EE7DB37BF34569 (ZipAESStream_t9CB50BCC4129C9B2D9EF26F8FE10CB1933AB0226* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_FromResult_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1AB522FB726C8CC51C9F00459B7CE60065461032_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___buffer0;
		int32_t L_1 = ___offset1;
		int32_t L_2 = ___count2;
		int32_t L_3;
		L_3 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(34 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, __this, L_0, L_1, L_2);
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_4;
		L_4 = Task_FromResult_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1AB522FB726C8CC51C9F00459B7CE60065461032(L_3, Task_FromResult_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1AB522FB726C8CC51C9F00459B7CE60065461032_RuntimeMethod_var);
		return L_4;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Encryption.ZipAESStream::ReadAndTransform(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZipAESStream_ReadAndTransform_mBB994079CAFA0957CA1EEF16B7D4ABE6567EDD93 (ZipAESStream_t9CB50BCC4129C9B2D9EF26F8FE10CB1933AB0226* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	{
		V_0 = 0;
		goto IL_0149;
	}

IL_0007:
	{
		int32_t L_0 = ___count2;
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		int32_t L_2 = __this->____slideBufFreePos_23;
		int32_t L_3 = __this->____slideBufStartPos_22;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_2, L_3));
		int32_t L_4 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)26), L_4));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->____slideBuffer_21;
		NullCheck(L_5);
		int32_t L_6 = __this->____slideBufFreePos_23;
		int32_t L_7 = V_3;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_5)->max_length)), L_6))) >= ((int32_t)L_7)))
		{
			goto IL_007f;
		}
	}
	{
		V_5 = 0;
		int32_t L_8 = __this->____slideBufStartPos_22;
		V_6 = L_8;
		goto IL_005b;
	}

IL_003d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->____slideBuffer_21;
		int32_t L_10 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->____slideBuffer_21;
		int32_t L_12 = V_6;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		uint8_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (uint8_t)L_14);
		int32_t L_15 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		int32_t L_16 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_005b:
	{
		int32_t L_17 = V_6;
		int32_t L_18 = __this->____slideBufFreePos_23;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_19 = __this->____slideBufFreePos_23;
		int32_t L_20 = __this->____slideBufStartPos_22;
		__this->____slideBufFreePos_23 = ((int32_t)il2cpp_codegen_subtract(L_19, L_20));
		__this->____slideBufStartPos_22 = 0;
	}

IL_007f:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_21 = __this->____stream_19;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = __this->____slideBuffer_21;
		int32_t L_23 = __this->____slideBufFreePos_23;
		int32_t L_24 = V_3;
		int32_t L_25;
		L_25 = StreamUtils_ReadRequestedBytes_mD39A463BD7A4D4E9CE6EA2996775843E95660E91(L_21, L_22, L_23, L_24, NULL);
		V_4 = L_25;
		int32_t L_26 = __this->____slideBufFreePos_23;
		int32_t L_27 = V_4;
		__this->____slideBufFreePos_23 = ((int32_t)il2cpp_codegen_add(L_26, L_27));
		int32_t L_28 = __this->____slideBufFreePos_23;
		int32_t L_29 = __this->____slideBufStartPos_22;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_28, L_29));
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) < ((int32_t)((int32_t)26))))
		{
			goto IL_00d5;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = ___buffer0;
		int32_t L_32 = ___offset1;
		int32_t L_33 = V_1;
		int32_t L_34;
		L_34 = ZipAESStream_TransformAndBufferBlock_m096433E20FEE76C760F58390E290A1FCBF6AFB92(__this, L_31, L_32, L_33, ((int32_t)16), NULL);
		V_7 = L_34;
		int32_t L_35 = V_0;
		int32_t L_36 = V_7;
		V_0 = ((int32_t)il2cpp_codegen_add(L_35, L_36));
		int32_t L_37 = ___offset1;
		int32_t L_38 = V_7;
		___offset1 = ((int32_t)il2cpp_codegen_add(L_37, L_38));
		goto IL_0149;
	}

IL_00d5:
	{
		int32_t L_39 = V_2;
		if ((((int32_t)L_39) <= ((int32_t)((int32_t)10))))
		{
			goto IL_00f0;
		}
	}
	{
		int32_t L_40 = V_2;
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_40, ((int32_t)10)));
		int32_t L_41 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = ___buffer0;
		int32_t L_43 = ___offset1;
		int32_t L_44 = V_1;
		int32_t L_45 = V_9;
		int32_t L_46;
		L_46 = ZipAESStream_TransformAndBufferBlock_m096433E20FEE76C760F58390E290A1FCBF6AFB92(__this, L_42, L_43, L_44, L_45, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_41, L_46));
		goto IL_0100;
	}

IL_00f0:
	{
		int32_t L_47 = V_2;
		if ((((int32_t)L_47) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0100;
		}
	}
	{
		ZipException_t96D0219AEA3A9ACA11F3DD018FDAA302995E720F* L_48 = (ZipException_t96D0219AEA3A9ACA11F3DD018FDAA302995E720F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipException_t96D0219AEA3A9ACA11F3DD018FDAA302995E720F_il2cpp_TypeInfo_var)));
		NullCheck(L_48);
		ZipException__ctor_mDEED5E97D6904FCD3B5A7183E81AFAC479DE85C4(L_48, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE22404C030BAB2A73AA2CEE3DEBD2DF8C77EED85)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_48, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipAESStream_ReadAndTransform_mBB994079CAFA0957CA1EEF16B7D4ABE6567EDD93_RuntimeMethod_var)));
	}

IL_0100:
	{
		ZipAESTransform_t81E0F17E8B4E0D3470F5D5A46D6DE031DDBC5C2C* L_49 = __this->____transform_20;
		NullCheck(L_49);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50;
		L_50 = ZipAESTransform_GetAuthCode_m30147C4C3EB8C4777CE236DEC81012EB3AA959A4(L_49, NULL);
		V_8 = L_50;
		V_10 = 0;
		goto IL_013a;
	}

IL_0112:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = V_8;
		int32_t L_52 = V_10;
		NullCheck(L_51);
		int32_t L_53 = L_52;
		uint8_t L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55 = __this->____slideBuffer_21;
		int32_t L_56 = __this->____slideBufStartPos_22;
		int32_t L_57 = V_10;
		NullCheck(L_55);
		int32_t L_58 = ((int32_t)il2cpp_codegen_add(L_56, L_57));
		uint8_t L_59 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		if ((((int32_t)L_54) == ((int32_t)L_59)))
		{
			goto IL_0134;
		}
	}
	{
		ZipException_t96D0219AEA3A9ACA11F3DD018FDAA302995E720F* L_60 = (ZipException_t96D0219AEA3A9ACA11F3DD018FDAA302995E720F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipException_t96D0219AEA3A9ACA11F3DD018FDAA302995E720F_il2cpp_TypeInfo_var)));
		NullCheck(L_60);
		ZipException__ctor_mDEED5E97D6904FCD3B5A7183E81AFAC479DE85C4(L_60, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF55E72FEF46CED230283C41245B193D83EE776BB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_60, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipAESStream_ReadAndTransform_mBB994079CAFA0957CA1EEF16B7D4ABE6567EDD93_RuntimeMethod_var)));
	}

IL_0134:
	{
		int32_t L_61 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_61, 1));
	}

IL_013a:
	{
		int32_t L_62 = V_10;
		if ((((int32_t)L_62) < ((int32_t)((int32_t)10))))
		{
			goto IL_0112;
		}
	}
	{
		__this->____slideBuffer_21 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slideBuffer_21), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		goto IL_0150;
	}

IL_0149:
	{
		int32_t L_63 = V_0;
		int32_t L_64 = ___count2;
		if ((((int32_t)L_63) < ((int32_t)L_64)))
		{
			goto IL_0007;
		}
	}

IL_0150:
	{
		int32_t L_65 = V_0;
		return L_65;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Encryption.ZipAESStream::ReadBufferedData(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZipAESStream_ReadBufferedData_mA2E55A04EC90833054995728FF1D7E53D45F4FCA (ZipAESStream_t9CB50BCC4129C9B2D9EF26F8FE10CB1933AB0226* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___count2;
		int32_t L_1 = __this->____transformBufferFreePos_25;
		int32_t L_2 = __this->____transformBufferStartPos_26;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8(L_0, ((int32_t)il2cpp_codegen_subtract(L_1, L_2)), NULL);
		V_0 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->____transformBuffer_24;
		int32_t L_5 = __this->____transformBufferStartPos_26;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___buffer0;
		int32_t L_7 = ___offset1;
		int32_t L_8 = V_0;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_4, L_5, (RuntimeArray*)L_6, L_7, L_8, NULL);
		int32_t L_9 = __this->____transformBufferStartPos_26;
		int32_t L_10 = V_0;
		__this->____transformBufferStartPos_26 = ((int32_t)il2cpp_codegen_add(L_9, L_10));
		int32_t L_11 = V_0;
		return L_11;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Encryption.ZipAESStream::TransformAndBufferBlock(System.Byte[],System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZipAESStream_TransformAndBufferBlock_m096433E20FEE76C760F58390E290A1FCBF6AFB92 (ZipAESStream_t9CB50BCC4129C9B2D9EF26F8FE10CB1933AB0226* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, int32_t ___blockSize3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	{
		int32_t L_0 = ___blockSize3;
		int32_t L_1 = ___count2;
		int32_t L_2 = ((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0);
		G_B1_0 = L_2;
		if (!L_2)
		{
			G_B3_0 = L_2;
			goto IL_001d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->____transformBuffer_24;
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B3_0 = G_B1_0;
			goto IL_001d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->____transformBuffer_24 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____transformBuffer_24), (void*)L_4);
		G_B3_0 = G_B2_0;
	}

IL_001d:
	{
		int32_t L_5 = G_B3_0;
		G_B4_0 = L_5;
		if (L_5)
		{
			G_B5_0 = L_5;
			goto IL_0023;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___buffer0;
		G_B6_0 = L_6;
		G_B6_1 = G_B4_0;
		goto IL_0029;
	}

IL_0023:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->____transformBuffer_24;
		G_B6_0 = L_7;
		G_B6_1 = G_B5_0;
	}

IL_0029:
	{
		V_0 = G_B6_0;
		int32_t L_8 = G_B6_1;
		G_B7_0 = L_8;
		if (L_8)
		{
			G_B8_0 = L_8;
			goto IL_0030;
		}
	}
	{
		int32_t L_9 = ___offset1;
		G_B9_0 = L_9;
		G_B9_1 = G_B7_0;
		goto IL_0031;
	}

IL_0030:
	{
		G_B9_0 = 0;
		G_B9_1 = G_B8_0;
	}

IL_0031:
	{
		V_1 = G_B9_0;
		ZipAESTransform_t81E0F17E8B4E0D3470F5D5A46D6DE031DDBC5C2C* L_10 = __this->____transform_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->____slideBuffer_21;
		int32_t L_12 = __this->____slideBufStartPos_22;
		int32_t L_13 = ___blockSize3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		int32_t L_15 = V_1;
		NullCheck(L_10);
		int32_t L_16;
		L_16 = ZipAESTransform_TransformBlock_m36C6662BD0F182056F2D71AB0B3FB6E9F70FB31D(L_10, L_11, L_12, L_13, L_14, L_15, NULL);
		int32_t L_17 = __this->____slideBufStartPos_22;
		int32_t L_18 = ___blockSize3;
		__this->____slideBufStartPos_22 = ((int32_t)il2cpp_codegen_add(L_17, L_18));
		if (G_B9_1)
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_19 = ___blockSize3;
		return L_19;
	}

IL_0062:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = __this->____transformBuffer_24;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___buffer0;
		int32_t L_22 = ___offset1;
		int32_t L_23 = ___count2;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		int32_t L_24 = ___count2;
		__this->____transformBufferStartPos_26 = L_24;
		int32_t L_25 = ___blockSize3;
		__this->____transformBufferFreePos_25 = L_25;
		int32_t L_26 = ___count2;
		return L_26;
	}
}
// System.Void ICSharpCode.SharpZipLib.Encryption.ZipAESStream::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipAESStream_Write_mCC1EA1542CEFC06FBC64C09A072D89D1DE644FBC (ZipAESStream_t9CB50BCC4129C9B2D9EF26F8FE10CB1933AB0226* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipAESStream_Write_mCC1EA1542CEFC06FBC64C09A072D89D1DE644FBC_RuntimeMethod_var)));
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
// System.Void ICSharpCode.SharpZipLib.Encryption.ZipAESTransform::.ctor(System.String,System.Byte[],System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipAESTransform__ctor_m159186BF570F35F6E144B4AA90E162FC2FDF7BE9 (ZipAESTransform_t81E0F17E8B4E0D3470F5D5A46D6DE031DDBC5C2C* __this, String_t* ___key0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___saltBytes1, int32_t ___blockSize2, bool ___writeMode3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rfc2898DeriveBytes_t0614FA7A5D23F6A9C781F7CA38E07BD8295256FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rfc2898DeriveBytes_t0614FA7A5D23F6A9C781F7CA38E07BD8295256FB* V_0 = NULL;
	Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	int32_t V_4 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___blockSize2;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)16))))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_1 = ___blockSize2;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)32))))
		{
			goto IL_002c;
		}
	}
	{
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___blockSize2), NULL);
		String_t* L_3;
		L_3 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral022792C88272442BF8F4DE76B0434B7C4A39F223)), L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6AFC685BFEB5280EBD767AA771B413E44CE00C08)), NULL);
		Exception_t* L_4 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipAESTransform__ctor_m159186BF570F35F6E144B4AA90E162FC2FDF7BE9_RuntimeMethod_var)));
	}

IL_002c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___saltBytes1;
		NullCheck(L_5);
		int32_t L_6 = ___blockSize2;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))) == ((int32_t)((int32_t)(L_6/2)))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_7 = ___blockSize2;
		V_4 = ((int32_t)(L_7/2));
		String_t* L_8;
		L_8 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_4), NULL);
		String_t* L_9;
		L_9 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___blockSize2), NULL);
		String_t* L_10;
		L_10 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3508635B3721D6D1253A5DF75A7CC2646E28F5B)), L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDB7BC86F654DDCF33A2F8477D9823029B198B9B1)), L_9, NULL);
		Exception_t* L_11 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipAESTransform__ctor_m159186BF570F35F6E144B4AA90E162FC2FDF7BE9_RuntimeMethod_var)));
	}

IL_005c:
	{
		int32_t L_12 = ___blockSize2;
		__this->____blockSize_0 = L_12;
		int32_t L_13 = __this->____blockSize_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_13);
		__this->____encryptBuffer_3 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____encryptBuffer_3), (void*)L_14);
		__this->____encrPos_4 = ((int32_t)16);
		String_t* L_15 = ___key0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___saltBytes1;
		Rfc2898DeriveBytes_t0614FA7A5D23F6A9C781F7CA38E07BD8295256FB* L_17 = (Rfc2898DeriveBytes_t0614FA7A5D23F6A9C781F7CA38E07BD8295256FB*)il2cpp_codegen_object_new(Rfc2898DeriveBytes_t0614FA7A5D23F6A9C781F7CA38E07BD8295256FB_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		Rfc2898DeriveBytes__ctor_m6A404112259375CF4C7A32B9205F6DDBC2EA1E8A(L_17, L_15, L_16, ((int32_t)1000), NULL);
		V_0 = L_17;
		il2cpp_codegen_runtime_class_init_inline(Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047_il2cpp_TypeInfo_var);
		Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* L_18;
		L_18 = Aes_Create_mA7AA221AEC418AC59B642AB2C536766C1309C006(NULL);
		V_1 = L_18;
		Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* L_19 = V_1;
		NullCheck(L_19);
		VirtualActionInvoker1< int32_t >::Invoke(19 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Mode(System.Security.Cryptography.CipherMode) */, L_19, 2);
		int32_t L_20 = __this->____blockSize_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_20);
		__this->____counterNonce_2 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____counterNonce_2), (void*)L_21);
		Rfc2898DeriveBytes_t0614FA7A5D23F6A9C781F7CA38E07BD8295256FB* L_22 = V_0;
		int32_t L_23 = __this->____blockSize_0;
		NullCheck(L_22);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24;
		L_24 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(5 /* System.Byte[] System.Security.Cryptography.DeriveBytes::GetBytes(System.Int32) */, L_22, L_23);
		V_2 = L_24;
		Rfc2898DeriveBytes_t0614FA7A5D23F6A9C781F7CA38E07BD8295256FB* L_25 = V_0;
		int32_t L_26 = __this->____blockSize_0;
		NullCheck(L_25);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27;
		L_27 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(5 /* System.Byte[] System.Security.Cryptography.DeriveBytes::GetBytes(System.Int32) */, L_25, L_26);
		V_3 = L_27;
		Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* L_28 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		NullCheck(L_28);
		RuntimeObject* L_31;
		L_31 = VirtualFuncInvoker2< RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(23 /* System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateEncryptor(System.Byte[],System.Byte[]) */, L_28, L_29, L_30);
		__this->____encryptor_1 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____encryptor_1), (void*)L_31);
		Rfc2898DeriveBytes_t0614FA7A5D23F6A9C781F7CA38E07BD8295256FB* L_32 = V_0;
		NullCheck(L_32);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33;
		L_33 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(5 /* System.Byte[] System.Security.Cryptography.DeriveBytes::GetBytes(System.Int32) */, L_32, 2);
		__this->____pwdVerifier_5 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pwdVerifier_5), (void*)L_33);
		HashAlgorithmName_t7FCDC65C37365F7AFAAA96952D14F51676480A3F L_34;
		L_34 = HashAlgorithmName_get_SHA1_m01E7CFC175B30F11BFF73055188809BC255928A7(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_3;
		IncrementalHash_tBD1EFC035497BBC804293E950C47D5392D9D76D0* L_36;
		L_36 = IncrementalHash_CreateHMAC_mBCE86D12ACFC9DD81B0F1008D5C437C19F908FC1(L_34, L_35, NULL);
		__this->____hmacsha1_6 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____hmacsha1_6), (void*)L_36);
		bool L_37 = ___writeMode3;
		__this->____writeMode_8 = L_37;
		return;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Encryption.ZipAESTransform::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZipAESTransform_TransformBlock_m36C6662BD0F182056F2D71AB0B3FB6E9F70FB31D (ZipAESTransform_t81E0F17E8B4E0D3470F5D5A46D6DE031DDBC5C2C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outputBuffer3, int32_t ___outputOffset4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICryptoTransform_tE6DA9E01069FDC62AB562B589C8E43EEC53B2377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	int32_t V_3 = 0;
	{
		bool L_0 = __this->____writeMode_8;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		IncrementalHash_tBD1EFC035497BBC804293E950C47D5392D9D76D0* L_1 = __this->____hmacsha1_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___inputBuffer0;
		int32_t L_3 = ___inputOffset1;
		int32_t L_4 = ___inputCount2;
		NullCheck(L_1);
		IncrementalHash_AppendData_m70E6EF7A42C38CDFD1423DD2EBAB133C6E365D0F(L_1, L_2, L_3, L_4, NULL);
	}

IL_0016:
	{
		V_0 = 0;
		goto IL_0094;
	}

IL_001a:
	{
		int32_t L_5 = __this->____encrPos_4;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_006a;
		}
	}
	{
		V_1 = 0;
		goto IL_002c;
	}

IL_0028:
	{
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_002c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->____counterNonce_2;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		uint8_t* L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)));
		int32_t L_10 = *((uint8_t*)L_9);
		V_2 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(L_10, 1)));
		uint8_t L_11 = V_2;
		*((int8_t*)L_9) = (int8_t)L_11;
		uint8_t L_12 = V_2;
		if (!L_12)
		{
			goto IL_0028;
		}
	}
	{
		RuntimeObject* L_13 = __this->____encryptor_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->____counterNonce_2;
		int32_t L_15 = __this->____blockSize_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->____encryptBuffer_3;
		NullCheck(L_13);
		int32_t L_17;
		L_17 = InterfaceFuncInvoker5< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 System.Security.Cryptography.ICryptoTransform::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32) */, ICryptoTransform_tE6DA9E01069FDC62AB562B589C8E43EEC53B2377_il2cpp_TypeInfo_var, L_13, L_14, 0, L_15, L_16, 0);
		__this->____encrPos_4 = 0;
	}

IL_006a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___outputBuffer3;
		int32_t L_19 = V_0;
		int32_t L_20 = ___outputOffset4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___inputBuffer0;
		int32_t L_22 = V_0;
		int32_t L_23 = ___inputOffset1;
		NullCheck(L_21);
		int32_t L_24 = ((int32_t)il2cpp_codegen_add(L_22, L_23));
		uint8_t L_25 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = __this->____encryptBuffer_3;
		int32_t L_27 = __this->____encrPos_4;
		V_3 = L_27;
		int32_t L_28 = V_3;
		__this->____encrPos_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
		int32_t L_29 = V_3;
		NullCheck(L_26);
		int32_t L_30 = L_29;
		uint8_t L_31 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_19, L_20))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_25^(int32_t)L_31))));
		int32_t L_32 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_0094:
	{
		int32_t L_33 = V_0;
		int32_t L_34 = ___inputCount2;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_001a;
		}
	}
	{
		bool L_35 = __this->____writeMode_8;
		if (!L_35)
		{
			goto IL_00b0;
		}
	}
	{
		IncrementalHash_tBD1EFC035497BBC804293E950C47D5392D9D76D0* L_36 = __this->____hmacsha1_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = ___outputBuffer3;
		int32_t L_38 = ___outputOffset4;
		int32_t L_39 = ___inputCount2;
		NullCheck(L_36);
		IncrementalHash_AppendData_m70E6EF7A42C38CDFD1423DD2EBAB133C6E365D0F(L_36, L_37, L_38, L_39, NULL);
	}

IL_00b0:
	{
		int32_t L_40 = ___inputCount2;
		return L_40;
	}
}
// System.Byte[] ICSharpCode.SharpZipLib.Encryption.ZipAESTransform::get_PwdVerifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ZipAESTransform_get_PwdVerifier_m2393389FFB045BFA21D9B61ACAC24D33B5F1DA7F (ZipAESTransform_t81E0F17E8B4E0D3470F5D5A46D6DE031DDBC5C2C* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____pwdVerifier_5;
		return L_0;
	}
}
// System.Byte[] ICSharpCode.SharpZipLib.Encryption.ZipAESTransform::GetAuthCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ZipAESTransform_GetAuthCode_m30147C4C3EB8C4777CE236DEC81012EB3AA959A4 (ZipAESTransform_t81E0F17E8B4E0D3470F5D5A46D6DE031DDBC5C2C* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____authCode_7;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		IncrementalHash_tBD1EFC035497BBC804293E950C47D5392D9D76D0* L_1 = __this->____hmacsha1_6;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = IncrementalHash_GetHashAndReset_mF882C501DCB4EC86E7A04926448F0E4B62984DCF(L_1, NULL);
		__this->____authCode_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____authCode_7), (void*)L_2);
	}

IL_0019:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->____authCode_7;
		return L_3;
	}
}
// System.Byte[] ICSharpCode.SharpZipLib.Encryption.ZipAESTransform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ZipAESTransform_TransformFinalBlock_m3DE69A3BAA81D1D9EE5BF2D1F8439B9C0C6AE16C (ZipAESTransform_t81E0F17E8B4E0D3470F5D5A46D6DE031DDBC5C2C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Empty_Array_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3D3E9C7401E6F237EFF9B076466763048CF14917_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___inputCount2;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_1 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEC390FAC4E9601671FC753027681341A598737E9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipAESTransform_TransformFinalBlock_m3DE69A3BAA81D1D9EE5BF2D1F8439B9C0C6AE16C_RuntimeMethod_var)));
	}

IL_000f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = Empty_Array_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3D3E9C7401E6F237EFF9B076466763048CF14917(Empty_Array_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3D3E9C7401E6F237EFF9B076466763048CF14917_RuntimeMethod_var);
		return L_2;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Encryption.ZipAESTransform::get_InputBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZipAESTransform_get_InputBlockSize_m9A8406CBACC812E83421309C67EE73569C849D13 (ZipAESTransform_t81E0F17E8B4E0D3470F5D5A46D6DE031DDBC5C2C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____blockSize_0;
		return L_0;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Encryption.ZipAESTransform::get_OutputBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZipAESTransform_get_OutputBlockSize_m38533860E91CC2404B000E5916806D0B0CFF4F26 (ZipAESTransform_t81E0F17E8B4E0D3470F5D5A46D6DE031DDBC5C2C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____blockSize_0;
		return L_0;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Encryption.ZipAESTransform::get_CanTransformMultipleBlocks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZipAESTransform_get_CanTransformMultipleBlocks_m737240ABDEA6735087A7298A8496705CF4C83628 (ZipAESTransform_t81E0F17E8B4E0D3470F5D5A46D6DE031DDBC5C2C* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Encryption.ZipAESTransform::get_CanReuseTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZipAESTransform_get_CanReuseTransform_m955D3110398980EFEA1D54FE750FA19FB841040E (ZipAESTransform_t81E0F17E8B4E0D3470F5D5A46D6DE031DDBC5C2C* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// System.Void ICSharpCode.SharpZipLib.Encryption.ZipAESTransform::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipAESTransform_Dispose_mE2E4C43496564375DC2137699A482667AD0527B4 (ZipAESTransform_t81E0F17E8B4E0D3470F5D5A46D6DE031DDBC5C2C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____encryptor_1;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_0);
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
// System.String ICSharpCode.SharpZipLib.Core.PathUtils::DropPathRoot(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PathUtils_DropPathRoot_m1E33CCE6B682A966928BFEA7BBC2BC5D9378781F (String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m3DB5A07821652CBD6C7F7BC5A43F7610DB230567_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Take_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m3866E2EB7A63709492EE683A90BA8BD671A4D314_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mECF2AE4F9225A8A7CE16CA858A60B98A7627699C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_t2B0D96B11960CC2841861EAC2E3DEA368500085D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_U3CDropPathRootU3Eb__0_m7B39AFAC70CB43B3767D91D86271F029C8C1DBEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_t4D8D3C6EF1270E6548975398AC843D57F25F048F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass0_0_t4D8D3C6EF1270E6548975398AC843D57F25F048F* V_0 = NULL;
	int32_t V_1 = 0;
	U3CU3Ec__DisplayClass0_0_t4D8D3C6EF1270E6548975398AC843D57F25F048F* G_B3_0 = NULL;
	U3CU3Ec__DisplayClass0_0_t4D8D3C6EF1270E6548975398AC843D57F25F048F* G_B1_0 = NULL;
	U3CU3Ec__DisplayClass0_0_t4D8D3C6EF1270E6548975398AC843D57F25F048F* G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	U3CU3Ec__DisplayClass0_0_t4D8D3C6EF1270E6548975398AC843D57F25F048F* G_B4_1 = NULL;
	{
		U3CU3Ec__DisplayClass0_0_t4D8D3C6EF1270E6548975398AC843D57F25F048F* L_0 = (U3CU3Ec__DisplayClass0_0_t4D8D3C6EF1270E6548975398AC843D57F25F048F*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass0_0_t4D8D3C6EF1270E6548975398AC843D57F25F048F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass0_0__ctor_m7D63BF759246E81E9B091B173C12A6D586A1438E(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass0_0_t4D8D3C6EF1270E6548975398AC843D57F25F048F* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2;
		L_2 = Path_GetInvalidPathChars_m771E6754D2B0E556D0363B0F4C21A500D820E6DD(NULL);
		NullCheck(L_1);
		L_1->___invalidChars_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___invalidChars_0), (void*)L_2);
		U3CU3Ec__DisplayClass0_0_t4D8D3C6EF1270E6548975398AC843D57F25F048F* L_3 = V_0;
		String_t* L_4 = ___path0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		G_B1_0 = L_3;
		if ((((int32_t)L_5) < ((int32_t)3)))
		{
			G_B3_0 = L_3;
			goto IL_0033;
		}
	}
	{
		String_t* L_6 = ___path0;
		NullCheck(L_6);
		Il2CppChar L_7;
		L_7 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_6, 1, NULL);
		G_B2_0 = G_B1_0;
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)58)))))
		{
			G_B3_0 = G_B1_0;
			goto IL_0033;
		}
	}
	{
		String_t* L_8 = ___path0;
		NullCheck(L_8);
		Il2CppChar L_9;
		L_9 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_8, 2, NULL);
		G_B4_0 = ((((int32_t)L_9) == ((int32_t)((int32_t)58)))? 1 : 0);
		G_B4_1 = G_B2_0;
		goto IL_0034;
	}

IL_0033:
	{
		G_B4_0 = 0;
		G_B4_1 = G_B3_0;
	}

IL_0034:
	{
		NullCheck(G_B4_1);
		G_B4_1->___cleanRootSep_1 = (bool)G_B4_0;
		String_t* L_10 = ___path0;
		RuntimeObject* L_11;
		L_11 = Enumerable_Take_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m3866E2EB7A63709492EE683A90BA8BD671A4D314(L_10, ((int32_t)258), Enumerable_Take_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m3866E2EB7A63709492EE683A90BA8BD671A4D314_RuntimeMethod_var);
		U3CU3Ec__DisplayClass0_0_t4D8D3C6EF1270E6548975398AC843D57F25F048F* L_12 = V_0;
		Func_3_t2B0D96B11960CC2841861EAC2E3DEA368500085D* L_13 = (Func_3_t2B0D96B11960CC2841861EAC2E3DEA368500085D*)il2cpp_codegen_object_new(Func_3_t2B0D96B11960CC2841861EAC2E3DEA368500085D_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Func_3__ctor_mD53871D13F8D31590D5CDA52E4CB5763701A6EA9(L_13, L_12, (intptr_t)((void*)U3CU3Ec__DisplayClass0_0_U3CDropPathRootU3Eb__0_m7B39AFAC70CB43B3767D91D86271F029C8C1DBEF_RuntimeMethod_var), NULL);
		RuntimeObject* L_14;
		L_14 = Enumerable_Select_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m3DB5A07821652CBD6C7F7BC5A43F7610DB230567(L_11, L_13, Enumerable_Select_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m3DB5A07821652CBD6C7F7BC5A43F7610DB230567_RuntimeMethod_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_15;
		L_15 = Enumerable_ToArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mECF2AE4F9225A8A7CE16CA858A60B98A7627699C(L_14, Enumerable_ToArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mECF2AE4F9225A8A7CE16CA858A60B98A7627699C_RuntimeMethod_var);
		String_t* L_16;
		L_16 = String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF(NULL, L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_17;
		L_17 = Path_GetPathRoot_m6DDE2394DA53E1C4F4753406F0B48955DFF1E5EB(L_16, NULL);
		NullCheck(L_17);
		int32_t L_18;
		L_18 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_17, NULL);
		V_1 = L_18;
		goto IL_0070;
	}

IL_006c:
	{
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0070:
	{
		String_t* L_20 = ___path0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_20, NULL);
		int32_t L_22 = V_1;
		if ((((int32_t)L_21) <= ((int32_t)L_22)))
		{
			goto IL_008f;
		}
	}
	{
		String_t* L_23 = ___path0;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		Il2CppChar L_25;
		L_25 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_23, L_24, NULL);
		if ((((int32_t)L_25) == ((int32_t)((int32_t)47))))
		{
			goto IL_006c;
		}
	}
	{
		String_t* L_26 = ___path0;
		int32_t L_27 = V_1;
		NullCheck(L_26);
		Il2CppChar L_28;
		L_28 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_26, L_27, NULL);
		if ((((int32_t)L_28) == ((int32_t)((int32_t)92))))
		{
			goto IL_006c;
		}
	}

IL_008f:
	{
		String_t* L_29 = ___path0;
		int32_t L_30 = V_1;
		NullCheck(L_29);
		String_t* L_31;
		L_31 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_29, L_30, NULL);
		return L_31;
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
// System.Void ICSharpCode.SharpZipLib.Core.PathUtils/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_m7D63BF759246E81E9B091B173C12A6D586A1438E (U3CU3Ec__DisplayClass0_0_t4D8D3C6EF1270E6548975398AC843D57F25F048F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Char ICSharpCode.SharpZipLib.Core.PathUtils/<>c__DisplayClass0_0::<DropPathRoot>b__0(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar U3CU3Ec__DisplayClass0_0_U3CDropPathRootU3Eb__0_m7B39AFAC70CB43B3767D91D86271F029C8C1DBEF (U3CU3Ec__DisplayClass0_0_t4D8D3C6EF1270E6548975398AC843D57F25F048F* __this, Il2CppChar ___c0, int32_t ___i1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Contains_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m3979BE7355F65890520EC3C8092E2983495AE03D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = __this->___invalidChars_0;
		Il2CppChar L_1 = ___c0;
		bool L_2;
		L_2 = Enumerable_Contains_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m3979BE7355F65890520EC3C8092E2983495AE03D((RuntimeObject*)L_0, L_1, Enumerable_Contains_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m3979BE7355F65890520EC3C8092E2983495AE03D_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_3 = ___i1;
		bool L_4 = __this->___cleanRootSep_1;
		if (((int32_t)(((((int32_t)L_3) == ((int32_t)2))? 1 : 0)&(int32_t)L_4)))
		{
			goto IL_001d;
		}
	}
	{
		Il2CppChar L_5 = ___c0;
		return L_5;
	}

IL_001d:
	{
		return ((int32_t)95);
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
// System.Void ICSharpCode.SharpZipLib.Core.StreamUtils::ReadFully(System.IO.Stream,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamUtils_ReadFully_m490C815AA3B3679C08E2A364978A25EA2319E93D (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer1, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___buffer1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___buffer1;
		NullCheck(L_2);
		StreamUtils_ReadFully_m42CD384742E86785E03CC1458E1EB5D45D68343B(L_0, L_1, 0, ((int32_t)(((RuntimeArray*)L_2)->max_length)), NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Core.StreamUtils::ReadFully(System.IO.Stream,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamUtils_ReadFully_m42CD384742E86785E03CC1458E1EB5D45D68343B (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer1, int32_t ___offset2, int32_t ___count3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamUtils_ReadFully_m42CD384742E86785E03CC1458E1EB5D45D68343B_RuntimeMethod_var)));
	}

IL_000e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___buffer1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamUtils_ReadFully_m42CD384742E86785E03CC1458E1EB5D45D68343B_RuntimeMethod_var)));
	}

IL_001c:
	{
		int32_t L_4 = ___offset2;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_5 = ___offset2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___buffer1;
		NullCheck(L_6);
		if ((((int32_t)L_5) <= ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0031;
		}
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_7 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamUtils_ReadFully_m42CD384742E86785E03CC1458E1EB5D45D68343B_RuntimeMethod_var)));
	}

IL_0031:
	{
		int32_t L_8 = ___count3;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_9 = ___offset2;
		int32_t L_10 = ___count3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___buffer1;
		NullCheck(L_11);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_9, L_10))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0066;
		}
	}

IL_003d:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_12 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamUtils_ReadFully_m42CD384742E86785E03CC1458E1EB5D45D68343B_RuntimeMethod_var)));
	}

IL_0048:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_13 = ___stream0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___buffer1;
		int32_t L_15 = ___offset2;
		int32_t L_16 = ___count3;
		NullCheck(L_13);
		int32_t L_17;
		L_17 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(34 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_13, L_14, L_15, L_16);
		V_0 = L_17;
		int32_t L_18 = V_0;
		if ((((int32_t)L_18) > ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028* L_19 = (EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028_il2cpp_TypeInfo_var)));
		NullCheck(L_19);
		EndOfStreamException__ctor_m154EAE9BDAE2A8EB0EE6714D881FA7075628C582(L_19, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamUtils_ReadFully_m42CD384742E86785E03CC1458E1EB5D45D68343B_RuntimeMethod_var)));
	}

IL_005c:
	{
		int32_t L_20 = ___offset2;
		int32_t L_21 = V_0;
		___offset2 = ((int32_t)il2cpp_codegen_add(L_20, L_21));
		int32_t L_22 = ___count3;
		int32_t L_23 = V_0;
		___count3 = ((int32_t)il2cpp_codegen_subtract(L_22, L_23));
	}

IL_0066:
	{
		int32_t L_24 = ___count3;
		if ((((int32_t)L_24) > ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		return;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Core.StreamUtils::ReadRequestedBytes(System.IO.Stream,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StreamUtils_ReadRequestedBytes_mD39A463BD7A4D4E9CE6EA2996775843E95660E91 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer1, int32_t ___offset2, int32_t ___count3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamUtils_ReadRequestedBytes_mD39A463BD7A4D4E9CE6EA2996775843E95660E91_RuntimeMethod_var)));
	}

IL_000e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___buffer1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamUtils_ReadRequestedBytes_mD39A463BD7A4D4E9CE6EA2996775843E95660E91_RuntimeMethod_var)));
	}

IL_001c:
	{
		int32_t L_4 = ___offset2;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_5 = ___offset2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___buffer1;
		NullCheck(L_6);
		if ((((int32_t)L_5) <= ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0031;
		}
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_7 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamUtils_ReadRequestedBytes_mD39A463BD7A4D4E9CE6EA2996775843E95660E91_RuntimeMethod_var)));
	}

IL_0031:
	{
		int32_t L_8 = ___count3;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_9 = ___offset2;
		int32_t L_10 = ___count3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___buffer1;
		NullCheck(L_11);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_9, L_10))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0048;
		}
	}

IL_003d:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_12 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamUtils_ReadRequestedBytes_mD39A463BD7A4D4E9CE6EA2996775843E95660E91_RuntimeMethod_var)));
	}

IL_0048:
	{
		V_0 = 0;
		goto IL_0068;
	}

IL_004c:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_13 = ___stream0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___buffer1;
		int32_t L_15 = ___offset2;
		int32_t L_16 = ___count3;
		NullCheck(L_13);
		int32_t L_17;
		L_17 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(34 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_13, L_14, L_15, L_16);
		V_1 = L_17;
		int32_t L_18 = V_1;
		if ((((int32_t)L_18) <= ((int32_t)0)))
		{
			goto IL_006c;
		}
	}
	{
		int32_t L_19 = ___offset2;
		int32_t L_20 = V_1;
		___offset2 = ((int32_t)il2cpp_codegen_add(L_19, L_20));
		int32_t L_21 = ___count3;
		int32_t L_22 = V_1;
		___count3 = ((int32_t)il2cpp_codegen_subtract(L_21, L_22));
		int32_t L_23 = V_0;
		int32_t L_24 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_23, L_24));
	}

IL_0068:
	{
		int32_t L_25 = ___count3;
		if ((((int32_t)L_25) > ((int32_t)0)))
		{
			goto IL_004c;
		}
	}

IL_006c:
	{
		int32_t L_26 = V_0;
		return L_26;
	}
}
// System.Void ICSharpCode.SharpZipLib.Core.StreamUtils::Copy(System.IO.Stream,System.IO.Stream,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamUtils_Copy_m39E242B89E58257C6818A067122D3A08146A0F98 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___source0, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___destination1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamUtils_Copy_m39E242B89E58257C6818A067122D3A08146A0F98_RuntimeMethod_var)));
	}

IL_000e:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = ___destination1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89ADD2DB1FBF30630EEA02FAAF144060CA0E908)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamUtils_Copy_m39E242B89E58257C6818A067122D3A08146A0F98_RuntimeMethod_var)));
	}

IL_001c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___buffer2;
		if (L_4)
		{
			goto IL_002a;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamUtils_Copy_m39E242B89E58257C6818A067122D3A08146A0F98_RuntimeMethod_var)));
	}

IL_002a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___buffer2;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB9F5D6B4F1F6DAC8F4EEB3AB72C41EBAB801FE5C)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamUtils_Copy_m39E242B89E58257C6818A067122D3A08146A0F98_RuntimeMethod_var)));
	}

IL_0044:
	{
		V_0 = (bool)1;
		goto IL_006b;
	}

IL_0048:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_8 = ___source0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___buffer2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___buffer2;
		NullCheck(L_10);
		NullCheck(L_8);
		int32_t L_11;
		L_11 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(34 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_8, L_9, 0, ((int32_t)(((RuntimeArray*)L_10)->max_length)));
		V_1 = L_11;
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) <= ((int32_t)0)))
		{
			goto IL_0063;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_13 = ___destination1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___buffer2;
		int32_t L_15 = V_1;
		NullCheck(L_13);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(37 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_13, L_14, 0, L_15);
		goto IL_006b;
	}

IL_0063:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_16 = ___destination1;
		NullCheck(L_16);
		VirtualActionInvoker0::Invoke(22 /* System.Void System.IO.Stream::Flush() */, L_16);
		V_0 = (bool)0;
	}

IL_006b:
	{
		bool L_17 = V_0;
		if (L_17)
		{
			goto IL_0048;
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
// System.Void ICSharpCode.SharpZipLib.Checksum.Adler32::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adler32__ctor_mB60FEE1C35C49DBD391DE8F67BAAAA7DFA5C5F37 (Adler32_t719B695D8A1A84E2A465697391C35131CA4FB1CD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Adler32_Reset_mF1FC2116EC33946831C0658FFA208CB33E8984D5(__this, NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Checksum.Adler32::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adler32_Reset_mF1FC2116EC33946831C0658FFA208CB33E8984D5 (Adler32_t719B695D8A1A84E2A465697391C35131CA4FB1CD* __this, const RuntimeMethod* method) 
{
	{
		__this->___checkValue_1 = 1;
		return;
	}
}
// System.Int64 ICSharpCode.SharpZipLib.Checksum.Adler32::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Adler32_get_Value_mFA327307664CBD7FFA6BF7A903FDB6D8F76E59D2 (Adler32_t719B695D8A1A84E2A465697391C35131CA4FB1CD* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___checkValue_1;
		return ((int64_t)(uint64_t)L_0);
	}
}
// System.Void ICSharpCode.SharpZipLib.Checksum.Adler32::Update(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adler32_Update_m705E9898BE9687D03682E5663A34E04B0BC68285 (Adler32_t719B695D8A1A84E2A465697391C35131CA4FB1CD* __this, int32_t ___bval0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Adler32_t719B695D8A1A84E2A465697391C35131CA4FB1CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		uint32_t L_0 = __this->___checkValue_1;
		V_0 = ((int32_t)((int32_t)L_0&((int32_t)65535)));
		uint32_t L_1 = __this->___checkValue_1;
		V_1 = ((int32_t)((uint32_t)L_1>>((int32_t)16)));
		uint32_t L_2 = V_0;
		int32_t L_3 = ___bval0;
		il2cpp_codegen_runtime_class_init_inline(Adler32_t719B695D8A1A84E2A465697391C35131CA4FB1CD_il2cpp_TypeInfo_var);
		uint32_t L_4 = ((Adler32_t719B695D8A1A84E2A465697391C35131CA4FB1CD_StaticFields*)il2cpp_codegen_static_fields_for(Adler32_t719B695D8A1A84E2A465697391C35131CA4FB1CD_il2cpp_TypeInfo_var))->___BASE_0;
		V_0 = ((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, ((int32_t)(L_3&((int32_t)255)))))%(uint32_t)(int32_t)L_4));
		uint32_t L_5 = V_0;
		uint32_t L_6 = V_1;
		uint32_t L_7 = ((Adler32_t719B695D8A1A84E2A465697391C35131CA4FB1CD_StaticFields*)il2cpp_codegen_static_fields_for(Adler32_t719B695D8A1A84E2A465697391C35131CA4FB1CD_il2cpp_TypeInfo_var))->___BASE_0;
		V_1 = ((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)L_6))%(uint32_t)(int32_t)L_7));
		uint32_t L_8 = V_1;
		uint32_t L_9 = V_0;
		__this->___checkValue_1 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_8<<((int32_t)16))), (int32_t)L_9));
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Checksum.Adler32::Update(System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adler32_Update_m35F6DD4EB74B942CEA83976C6B2047622C812A56 (Adler32_t719B695D8A1A84E2A465697391C35131CA4FB1CD* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___segment0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Adler32_t719B695D8A1A84E2A465697391C35131CA4FB1CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		uint32_t L_0 = __this->___checkValue_1;
		V_0 = ((int32_t)((int32_t)L_0&((int32_t)65535)));
		uint32_t L_1 = __this->___checkValue_1;
		V_1 = ((int32_t)((uint32_t)L_1>>((int32_t)16)));
		int32_t L_2;
		L_2 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___segment0), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		V_2 = L_2;
		int32_t L_3;
		L_3 = ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline((&___segment0), ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		V_3 = L_3;
		goto IL_0073;
	}

IL_0029:
	{
		V_4 = ((int32_t)3800);
		int32_t L_4 = V_4;
		int32_t L_5 = V_2;
		if ((((int32_t)L_4) <= ((int32_t)L_5)))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_6 = V_2;
		V_4 = L_6;
	}

IL_0038:
	{
		int32_t L_7 = V_2;
		int32_t L_8 = V_4;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		goto IL_0059;
	}

IL_003f:
	{
		uint32_t L_9 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
		L_10 = ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline((&___segment0), ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		int32_t L_11 = V_3;
		int32_t L_12 = L_11;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		NullCheck(L_10);
		int32_t L_13 = L_12;
		uint8_t L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, ((int32_t)((int32_t)L_14&((int32_t)255)))));
		uint32_t L_15 = V_1;
		uint32_t L_16 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)L_16));
	}

IL_0059:
	{
		int32_t L_17 = V_4;
		int32_t L_18 = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		V_4 = L_18;
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_003f;
		}
	}
	{
		uint32_t L_19 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Adler32_t719B695D8A1A84E2A465697391C35131CA4FB1CD_il2cpp_TypeInfo_var);
		uint32_t L_20 = ((Adler32_t719B695D8A1A84E2A465697391C35131CA4FB1CD_StaticFields*)il2cpp_codegen_static_fields_for(Adler32_t719B695D8A1A84E2A465697391C35131CA4FB1CD_il2cpp_TypeInfo_var))->___BASE_0;
		V_0 = ((int32_t)((uint32_t)(int32_t)L_19%(uint32_t)(int32_t)L_20));
		uint32_t L_21 = V_1;
		uint32_t L_22 = ((Adler32_t719B695D8A1A84E2A465697391C35131CA4FB1CD_StaticFields*)il2cpp_codegen_static_fields_for(Adler32_t719B695D8A1A84E2A465697391C35131CA4FB1CD_il2cpp_TypeInfo_var))->___BASE_0;
		V_1 = ((int32_t)((uint32_t)(int32_t)L_21%(uint32_t)(int32_t)L_22));
	}

IL_0073:
	{
		int32_t L_23 = V_2;
		if ((((int32_t)L_23) > ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		uint32_t L_24 = V_1;
		uint32_t L_25 = V_0;
		__this->___checkValue_1 = ((int32_t)(((int32_t)((int32_t)L_24<<((int32_t)16)))|(int32_t)L_25));
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Checksum.Adler32::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adler32__cctor_m4999D20A4FBFFCBD51577DEB49236FFD8B622ECE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Adler32_t719B695D8A1A84E2A465697391C35131CA4FB1CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Adler32_t719B695D8A1A84E2A465697391C35131CA4FB1CD_StaticFields*)il2cpp_codegen_static_fields_for(Adler32_t719B695D8A1A84E2A465697391C35131CA4FB1CD_il2cpp_TypeInfo_var))->___BASE_0 = ((int32_t)65521);
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
// System.Void ICSharpCode.SharpZipLib.Checksum.BZip2Crc::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BZip2Crc__ctor_m44988A7ABB1C4BE9641ACB2A5DD3C80E3A964030 (BZip2Crc_t1A45B70CB448F473D16EAA0E3C2733DDE97A102F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		BZip2Crc_Reset_m87F6B17ACA701341C626E80DE772BA9BE55072B5(__this, NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Checksum.BZip2Crc::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BZip2Crc_Reset_m87F6B17ACA701341C626E80DE772BA9BE55072B5 (BZip2Crc_t1A45B70CB448F473D16EAA0E3C2733DDE97A102F* __this, const RuntimeMethod* method) 
{
	{
		__this->___checkValue_1 = (-1);
		return;
	}
}
// System.Int64 ICSharpCode.SharpZipLib.Checksum.BZip2Crc::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BZip2Crc_get_Value_m6B8F672C0C299C475E3DA047EFBE8FA8403B4885 (BZip2Crc_t1A45B70CB448F473D16EAA0E3C2733DDE97A102F* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___checkValue_1;
		return ((int64_t)(uint64_t)((~L_0)));
	}
}
// System.Void ICSharpCode.SharpZipLib.Checksum.BZip2Crc::Update(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BZip2Crc_Update_m4F502295AE57FF154C672C06889B58FD0182A94A (BZip2Crc_t1A45B70CB448F473D16EAA0E3C2733DDE97A102F* __this, int32_t ___bval0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BZip2Crc_t1A45B70CB448F473D16EAA0E3C2733DDE97A102F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BZip2Crc_t1A45B70CB448F473D16EAA0E3C2733DDE97A102F_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ((BZip2Crc_t1A45B70CB448F473D16EAA0E3C2733DDE97A102F_StaticFields*)il2cpp_codegen_static_fields_for(BZip2Crc_t1A45B70CB448F473D16EAA0E3C2733DDE97A102F_il2cpp_TypeInfo_var))->___crcTable_0;
		uint32_t L_1 = __this->___checkValue_1;
		int32_t L_2 = ___bval0;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)(uint8_t)((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)(((int32_t)((uint32_t)L_1>>((int32_t)24)))&((int32_t)255)))))^((int64_t)L_2))));
		uint32_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		uint32_t L_5 = __this->___checkValue_1;
		__this->___checkValue_1 = ((int32_t)((int32_t)L_4^((int32_t)((int32_t)L_5<<8))));
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Checksum.BZip2Crc::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BZip2Crc__cctor_m9C22F7D9C0BAA19DD04180E3FA035D4FF38BA87F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BZip2Crc_t1A45B70CB448F473D16EAA0E3C2733DDE97A102F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0;
		L_0 = CrcUtilities_GenerateSlicingLookupTable_m55BEFB6C7730BE853B2CEDCB1709828E0340462C(((int32_t)79764919), (bool)0, NULL);
		((BZip2Crc_t1A45B70CB448F473D16EAA0E3C2733DDE97A102F_StaticFields*)il2cpp_codegen_static_fields_for(BZip2Crc_t1A45B70CB448F473D16EAA0E3C2733DDE97A102F_il2cpp_TypeInfo_var))->___crcTable_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((BZip2Crc_t1A45B70CB448F473D16EAA0E3C2733DDE97A102F_StaticFields*)il2cpp_codegen_static_fields_for(BZip2Crc_t1A45B70CB448F473D16EAA0E3C2733DDE97A102F_il2cpp_TypeInfo_var))->___crcTable_0), (void*)L_0);
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
// System.UInt32 ICSharpCode.SharpZipLib.Checksum.Crc32::ComputeCrc32(System.UInt32,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Crc32_ComputeCrc32_m415C4FD62B6CD1AC763E92C848DFD6B9AF7157DD (uint32_t ___oldCrc0, uint8_t ___bval1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Crc32_t44597B0AB0A0CE01AB30303BA5EC0F6E4F51BF33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Crc32_t44597B0AB0A0CE01AB30303BA5EC0F6E4F51BF33_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ((Crc32_t44597B0AB0A0CE01AB30303BA5EC0F6E4F51BF33_StaticFields*)il2cpp_codegen_static_fields_for(Crc32_t44597B0AB0A0CE01AB30303BA5EC0F6E4F51BF33_il2cpp_TypeInfo_var))->___crcTable_2;
		uint32_t L_1 = ___oldCrc0;
		uint8_t L_2 = ___bval1;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)(((int32_t)((int32_t)L_1^(int32_t)L_2))&((int32_t)255)));
		uint32_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		uint32_t L_5 = ___oldCrc0;
		return ((int32_t)((int32_t)L_4^((int32_t)((uint32_t)L_5>>8))));
	}
}
// System.Void ICSharpCode.SharpZipLib.Checksum.Crc32::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crc32__ctor_m8A5C41DB8E6A1D20B87D0BDC73C4A01AB6024233 (Crc32_t44597B0AB0A0CE01AB30303BA5EC0F6E4F51BF33* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Crc32_Reset_m055211F869D1A53CC76E85300325087FB1AC5327(__this, NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Checksum.Crc32::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crc32_Reset_m055211F869D1A53CC76E85300325087FB1AC5327 (Crc32_t44597B0AB0A0CE01AB30303BA5EC0F6E4F51BF33* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Crc32_t44597B0AB0A0CE01AB30303BA5EC0F6E4F51BF33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Crc32_t44597B0AB0A0CE01AB30303BA5EC0F6E4F51BF33_il2cpp_TypeInfo_var);
		uint32_t L_0 = ((Crc32_t44597B0AB0A0CE01AB30303BA5EC0F6E4F51BF33_StaticFields*)il2cpp_codegen_static_fields_for(Crc32_t44597B0AB0A0CE01AB30303BA5EC0F6E4F51BF33_il2cpp_TypeInfo_var))->___crcInit_0;
		__this->___checkValue_3 = L_0;
		return;
	}
}
// System.Int64 ICSharpCode.SharpZipLib.Checksum.Crc32::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Crc32_get_Value_mCF12699150B63F2C2DF34811B006973F923F6FAB (Crc32_t44597B0AB0A0CE01AB30303BA5EC0F6E4F51BF33* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Crc32_t44597B0AB0A0CE01AB30303BA5EC0F6E4F51BF33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = __this->___checkValue_3;
		il2cpp_codegen_runtime_class_init_inline(Crc32_t44597B0AB0A0CE01AB30303BA5EC0F6E4F51BF33_il2cpp_TypeInfo_var);
		uint32_t L_1 = ((Crc32_t44597B0AB0A0CE01AB30303BA5EC0F6E4F51BF33_StaticFields*)il2cpp_codegen_static_fields_for(Crc32_t44597B0AB0A0CE01AB30303BA5EC0F6E4F51BF33_il2cpp_TypeInfo_var))->___crcXor_1;
		return ((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_0^(int32_t)L_1))));
	}
}
// System.Void ICSharpCode.SharpZipLib.Checksum.Crc32::Update(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crc32_Update_mEABA7B10AD590CE609EC1475C50B7A422F3DC25E (Crc32_t44597B0AB0A0CE01AB30303BA5EC0F6E4F51BF33* __this, int32_t ___bval0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Crc32_Update_mEABA7B10AD590CE609EC1475C50B7A422F3DC25E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Crc32_t44597B0AB0A0CE01AB30303BA5EC0F6E4F51BF33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Crc32_t44597B0AB0A0CE01AB30303BA5EC0F6E4F51BF33_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ((Crc32_t44597B0AB0A0CE01AB30303BA5EC0F6E4F51BF33_StaticFields*)il2cpp_codegen_static_fields_for(Crc32_t44597B0AB0A0CE01AB30303BA5EC0F6E4F51BF33_il2cpp_TypeInfo_var))->___crcTable_2;
		uint32_t L_1 = __this->___checkValue_3;
		int32_t L_2 = ___bval0;
		if ((int64_t)(((int64_t)(((int64_t)(((int64_t)(uint64_t)L_1)^((int64_t)L_2)))&((int64_t)((int32_t)255))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Crc32_Update_mEABA7B10AD590CE609EC1475C50B7A422F3DC25E_RuntimeMethod_var);
		NullCheck(L_0);
		intptr_t L_3 = ((intptr_t)((int64_t)(((int64_t)(((int64_t)(uint64_t)L_1)^((int64_t)L_2)))&((int64_t)((int32_t)255)))));
		uint32_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		uint32_t L_5 = __this->___checkValue_3;
		__this->___checkValue_3 = ((int32_t)((int32_t)L_4^((int32_t)((uint32_t)L_5>>8))));
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Checksum.Crc32::Update(System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crc32_Update_m0D0B1C956640F0796484DCFE51890CD460F6C5C3 (Crc32_t44597B0AB0A0CE01AB30303BA5EC0F6E4F51BF33* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___segment0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline((&___segment0), ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		int32_t L_1;
		L_1 = ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline((&___segment0), ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		int32_t L_2;
		L_2 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___segment0), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		Crc32_Update_mB32326F7BF0D2F3B304618464B74ADF76249550F(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Checksum.Crc32::Update(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crc32_Update_mB32326F7BF0D2F3B304618464B74ADF76249550F (Crc32_t44597B0AB0A0CE01AB30303BA5EC0F6E4F51BF33* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Crc32_t44597B0AB0A0CE01AB30303BA5EC0F6E4F51BF33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___count2;
		V_0 = ((int32_t)(L_0%((int32_t)16)));
		int32_t L_1 = ___offset1;
		int32_t L_2 = ___count2;
		int32_t L_3 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_1, L_2)), L_3));
		goto IL_002b;
	}

IL_000d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___data0;
		int32_t L_5 = ___offset1;
		il2cpp_codegen_runtime_class_init_inline(Crc32_t44597B0AB0A0CE01AB30303BA5EC0F6E4F51BF33_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ((Crc32_t44597B0AB0A0CE01AB30303BA5EC0F6E4F51BF33_StaticFields*)il2cpp_codegen_static_fields_for(Crc32_t44597B0AB0A0CE01AB30303BA5EC0F6E4F51BF33_il2cpp_TypeInfo_var))->___crcTable_2;
		uint32_t L_7 = __this->___checkValue_3;
		uint32_t L_8;
		L_8 = CrcUtilities_UpdateDataForReversedPoly_mE37B9692EE9D5E6AA0DF313CC4AF194F6102827C_inline(L_4, L_5, L_6, L_7, NULL);
		__this->___checkValue_3 = L_8;
		int32_t L_9 = ___offset1;
		___offset1 = ((int32_t)il2cpp_codegen_add(L_9, ((int32_t)16)));
	}

IL_002b:
	{
		int32_t L_10 = ___offset1;
		int32_t L_11 = V_1;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_12 = V_0;
		if (!L_12)
		{
			goto IL_003d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___data0;
		int32_t L_14 = ___offset1;
		int32_t L_15 = V_1;
		int32_t L_16 = V_0;
		Crc32_SlowUpdateLoop_m04536C3FD895A0A6320FE74A47090F98B0113444(__this, L_13, L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), NULL);
	}

IL_003d:
	{
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Checksum.Crc32::SlowUpdateLoop(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Crc32_SlowUpdateLoop_m04536C3FD895A0A6320FE74A47090F98B0113444 (Crc32_t44597B0AB0A0CE01AB30303BA5EC0F6E4F51BF33* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___offset1, int32_t ___end2, const RuntimeMethod* method) 
{
	{
		goto IL_0010;
	}

IL_0002:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___data0;
		int32_t L_1 = ___offset1;
		int32_t L_2 = L_1;
		___offset1 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		NullCheck(L_0);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		Crc32_Update_mEABA7B10AD590CE609EC1475C50B7A422F3DC25E_inline(__this, L_4, NULL);
	}

IL_0010:
	{
		int32_t L_5 = ___offset1;
		int32_t L_6 = ___end2;
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_0002;
		}
	}
	{
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Checksum.Crc32::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crc32__cctor_m56DE0A29BD5ACFFC3631E34B52732BC85BDADAE8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Crc32_t44597B0AB0A0CE01AB30303BA5EC0F6E4F51BF33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Crc32_t44597B0AB0A0CE01AB30303BA5EC0F6E4F51BF33_StaticFields*)il2cpp_codegen_static_fields_for(Crc32_t44597B0AB0A0CE01AB30303BA5EC0F6E4F51BF33_il2cpp_TypeInfo_var))->___crcInit_0 = (-1);
		((Crc32_t44597B0AB0A0CE01AB30303BA5EC0F6E4F51BF33_StaticFields*)il2cpp_codegen_static_fields_for(Crc32_t44597B0AB0A0CE01AB30303BA5EC0F6E4F51BF33_il2cpp_TypeInfo_var))->___crcXor_1 = (-1);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0;
		L_0 = CrcUtilities_GenerateSlicingLookupTable_m55BEFB6C7730BE853B2CEDCB1709828E0340462C(((int32_t)-306674912), (bool)1, NULL);
		((Crc32_t44597B0AB0A0CE01AB30303BA5EC0F6E4F51BF33_StaticFields*)il2cpp_codegen_static_fields_for(Crc32_t44597B0AB0A0CE01AB30303BA5EC0F6E4F51BF33_il2cpp_TypeInfo_var))->___crcTable_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Crc32_t44597B0AB0A0CE01AB30303BA5EC0F6E4F51BF33_StaticFields*)il2cpp_codegen_static_fields_for(Crc32_t44597B0AB0A0CE01AB30303BA5EC0F6E4F51BF33_il2cpp_TypeInfo_var))->___crcTable_2), (void*)L_0);
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
// System.UInt32[] ICSharpCode.SharpZipLib.Checksum.CrcUtilities::GenerateSlicingLookupTable(System.UInt32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* CrcUtilities_GenerateSlicingLookupTable_m55BEFB6C7730BE853B2CEDCB1709828E0340462C (uint32_t ___polynomial0, bool ___isReversed1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B7_0 = 0;
	uint32_t G_B13_0 = 0;
	uint32_t G_B17_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)4096));
		V_0 = L_0;
		bool L_1 = ___isReversed1;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		G_B3_0 = ((int32_t)-2147483648LL);
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 1;
	}

IL_0016:
	{
		V_1 = G_B3_0;
		V_2 = 0;
		goto IL_007e;
	}

IL_001b:
	{
		bool L_2 = ___isReversed1;
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_3 = V_2;
		G_B7_0 = ((int32_t)(L_3<<((int32_t)24)));
		goto IL_0025;
	}

IL_0024:
	{
		int32_t L_4 = V_2;
		G_B7_0 = L_4;
	}

IL_0025:
	{
		V_3 = G_B7_0;
		V_4 = 0;
		goto IL_0074;
	}

IL_002b:
	{
		V_5 = 0;
		goto IL_005c;
	}

IL_0030:
	{
		bool L_5 = ___isReversed1;
		if (!L_5)
		{
			goto IL_0046;
		}
	}
	{
		uint32_t L_6 = V_3;
		uint32_t L_7 = V_1;
		if ((((int32_t)((int32_t)((int32_t)L_6&(int32_t)L_7))) == ((int32_t)1)))
		{
			goto IL_003e;
		}
	}
	{
		uint32_t L_8 = V_3;
		G_B13_0 = ((uint32_t)(((int32_t)((uint32_t)L_8>>1))));
		goto IL_0043;
	}

IL_003e:
	{
		uint32_t L_9 = ___polynomial0;
		uint32_t L_10 = V_3;
		G_B13_0 = ((uint32_t)(((int32_t)((int32_t)L_9^((int32_t)((uint32_t)L_10>>1))))));
	}

IL_0043:
	{
		V_3 = G_B13_0;
		goto IL_0056;
	}

IL_0046:
	{
		uint32_t L_11 = V_3;
		uint32_t L_12 = V_1;
		if (((int32_t)((int32_t)L_11&(int32_t)L_12)))
		{
			goto IL_0050;
		}
	}
	{
		uint32_t L_13 = V_3;
		G_B17_0 = ((uint32_t)(((int32_t)((int32_t)L_13<<1))));
		goto IL_0055;
	}

IL_0050:
	{
		uint32_t L_14 = ___polynomial0;
		uint32_t L_15 = V_3;
		G_B17_0 = ((uint32_t)(((int32_t)((int32_t)L_14^((int32_t)((int32_t)L_15<<1))))));
	}

IL_0055:
	{
		V_3 = G_B17_0;
	}

IL_0056:
	{
		int32_t L_16 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_005c:
	{
		int32_t L_17 = V_5;
		if ((((int32_t)L_17) < ((int32_t)8)))
		{
			goto IL_0030;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = V_0;
		int32_t L_19 = V_4;
		int32_t L_20 = V_2;
		uint32_t L_21 = V_3;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)256), L_19)), L_20))), (uint32_t)L_21);
		int32_t L_22 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0074:
	{
		int32_t L_23 = V_4;
		if ((((int32_t)L_23) < ((int32_t)((int32_t)16))))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_007e:
	{
		int32_t L_25 = V_2;
		if ((((int32_t)L_25) < ((int32_t)((int32_t)256))))
		{
			goto IL_001b;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = V_0;
		return L_26;
	}
}
// System.UInt32 ICSharpCode.SharpZipLib.Checksum.CrcUtilities::UpdateDataForReversedPoly(System.Byte[],System.Int32,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CrcUtilities_UpdateDataForReversedPoly_mE37B9692EE9D5E6AA0DF313CC4AF194F6102827C (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___offset1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___crcTable2, uint32_t ___checkValue3, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	uint8_t V_1 = 0x0;
	uint8_t V_2 = 0x0;
	uint8_t V_3 = 0x0;
	{
		uint32_t L_0 = ___checkValue3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___input0;
		int32_t L_2 = ___offset1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(uint8_t)L_0)^(int32_t)L_4)));
		uint32_t L_5 = ___checkValue3;
		int32_t L_6 = ((int32_t)((uint32_t)L_5>>8));
		___checkValue3 = L_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___input0;
		int32_t L_8 = ___offset1;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		uint8_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_1 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(uint8_t)L_6)^(int32_t)L_10)));
		uint32_t L_11 = ___checkValue3;
		int32_t L_12 = ((int32_t)((uint32_t)L_11>>8));
		___checkValue3 = L_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___input0;
		int32_t L_14 = ___offset1;
		NullCheck(L_13);
		int32_t L_15 = ((int32_t)il2cpp_codegen_add(L_14, 2));
		uint8_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_2 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(uint8_t)L_12)^(int32_t)L_16)));
		uint32_t L_17 = ___checkValue3;
		int32_t L_18 = ((int32_t)((uint32_t)L_17>>8));
		___checkValue3 = L_18;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___input0;
		int32_t L_20 = ___offset1;
		NullCheck(L_19);
		int32_t L_21 = ((int32_t)il2cpp_codegen_add(L_20, 3));
		uint8_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_3 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(uint8_t)L_18)^(int32_t)L_22)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = ___input0;
		int32_t L_24 = ___offset1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = ___crcTable2;
		uint8_t L_26 = V_0;
		uint8_t L_27 = V_1;
		uint8_t L_28 = V_2;
		uint8_t L_29 = V_3;
		uint32_t L_30;
		L_30 = CrcUtilities_UpdateDataCommon_mD835B4B3EDA46A218258B95D901E6EF225B888C1_inline(L_23, L_24, L_25, L_26, L_27, L_28, L_29, NULL);
		return L_30;
	}
}
// System.UInt32 ICSharpCode.SharpZipLib.Checksum.CrcUtilities::UpdateDataCommon(System.Byte[],System.Int32,System.UInt32[],System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CrcUtilities_UpdateDataCommon_mD835B4B3EDA46A218258B95D901E6EF225B888C1 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___offset1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___crcTable2, uint8_t ___x13, uint8_t ___x24, uint8_t ___x35, uint8_t ___x46, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___crcTable2;
		uint8_t L_1 = ___x13;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, ((int32_t)3840)));
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___crcTable2;
		uint8_t L_5 = ___x24;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, ((int32_t)3584)));
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = ((int32_t)((int32_t)L_3^(int32_t)L_7));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___crcTable2;
		uint8_t L_9 = ___x35;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, ((int32_t)3328)));
		uint32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___crcTable2;
		uint8_t L_13 = ___x46;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, ((int32_t)3072)));
		uint32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_1 = ((int32_t)((int32_t)L_11^(int32_t)L_15));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = ___crcTable2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___input0;
		int32_t L_18 = ___offset1;
		NullCheck(L_17);
		int32_t L_19 = ((int32_t)il2cpp_codegen_add(L_18, 4));
		uint8_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_16);
		int32_t L_21 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, ((int32_t)2816)));
		uint32_t L_22 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = ___crcTable2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___input0;
		int32_t L_25 = ___offset1;
		NullCheck(L_24);
		int32_t L_26 = ((int32_t)il2cpp_codegen_add(L_25, 5));
		uint8_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_23);
		int32_t L_28 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, ((int32_t)2560)));
		uint32_t L_29 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		uint32_t L_30 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___crcTable2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ___input0;
		int32_t L_33 = ___offset1;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)il2cpp_codegen_add(L_33, ((int32_t)9)));
		uint8_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_31);
		int32_t L_36 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, ((int32_t)1536)));
		uint32_t L_37 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		V_0 = ((int32_t)((int32_t)L_30^(int32_t)L_37));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38 = ___crcTable2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = ___input0;
		int32_t L_40 = ___offset1;
		NullCheck(L_39);
		int32_t L_41 = ((int32_t)il2cpp_codegen_add(L_40, 6));
		uint8_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_38);
		int32_t L_43 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, ((int32_t)2304)));
		uint32_t L_44 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = ___crcTable2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = ___input0;
		int32_t L_47 = ___offset1;
		NullCheck(L_46);
		int32_t L_48 = ((int32_t)il2cpp_codegen_add(L_47, 7));
		uint8_t L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_45);
		int32_t L_50 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, ((int32_t)2048)));
		uint32_t L_51 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_52 = ___crcTable2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = ___input0;
		int32_t L_54 = ___offset1;
		NullCheck(L_53);
		int32_t L_55 = ((int32_t)il2cpp_codegen_add(L_54, 8));
		uint8_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		NullCheck(L_52);
		int32_t L_57 = ((int32_t)il2cpp_codegen_add((int32_t)L_56, ((int32_t)1792)));
		uint32_t L_58 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		uint32_t L_59 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = ___crcTable2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_61 = ___input0;
		int32_t L_62 = ___offset1;
		NullCheck(L_61);
		int32_t L_63 = ((int32_t)il2cpp_codegen_add(L_62, ((int32_t)13)));
		uint8_t L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		NullCheck(L_60);
		int32_t L_65 = ((int32_t)il2cpp_codegen_add((int32_t)L_64, ((int32_t)512)));
		uint32_t L_66 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		V_1 = ((int32_t)((int32_t)L_59^(int32_t)L_66));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = ___crcTable2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_68 = ___input0;
		int32_t L_69 = ___offset1;
		NullCheck(L_68);
		int32_t L_70 = ((int32_t)il2cpp_codegen_add(L_69, ((int32_t)10)));
		uint8_t L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		NullCheck(L_67);
		int32_t L_72 = ((int32_t)il2cpp_codegen_add((int32_t)L_71, ((int32_t)1280)));
		uint32_t L_73 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_74 = ___crcTable2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_75 = ___input0;
		int32_t L_76 = ___offset1;
		NullCheck(L_75);
		int32_t L_77 = ((int32_t)il2cpp_codegen_add(L_76, ((int32_t)11)));
		uint8_t L_78 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		NullCheck(L_74);
		int32_t L_79 = ((int32_t)il2cpp_codegen_add((int32_t)L_78, ((int32_t)1024)));
		uint32_t L_80 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_81 = ___crcTable2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_82 = ___input0;
		int32_t L_83 = ___offset1;
		NullCheck(L_82);
		int32_t L_84 = ((int32_t)il2cpp_codegen_add(L_83, ((int32_t)12)));
		uint8_t L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		NullCheck(L_81);
		int32_t L_86 = ((int32_t)il2cpp_codegen_add((int32_t)L_85, ((int32_t)768)));
		uint32_t L_87 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		uint32_t L_88 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_89 = ___crcTable2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_90 = ___input0;
		int32_t L_91 = ___offset1;
		NullCheck(L_90);
		int32_t L_92 = ((int32_t)il2cpp_codegen_add(L_91, ((int32_t)14)));
		uint8_t L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		NullCheck(L_89);
		int32_t L_94 = ((int32_t)il2cpp_codegen_add((int32_t)L_93, ((int32_t)256)));
		uint32_t L_95 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_96 = ___crcTable2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_97 = ___input0;
		int32_t L_98 = ___offset1;
		NullCheck(L_97);
		int32_t L_99 = ((int32_t)il2cpp_codegen_add(L_98, ((int32_t)15)));
		uint8_t L_100 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		NullCheck(L_96);
		uint8_t L_101 = L_100;
		uint32_t L_102 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		uint32_t L_103 = V_1;
		return ((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_22^(int32_t)L_29))^(int32_t)L_44))^(int32_t)L_51))^(int32_t)L_58))^(int32_t)L_73))^(int32_t)L_80))^(int32_t)L_87))^(int32_t)L_88))^(int32_t)L_95))^(int32_t)L_102))^(int32_t)L_103));
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
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2Constants::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BZip2Constants__cctor_m1C1B2F7ECC1B5D8E03D3AFE4323E121176A86AFB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BZip2Constants_t2FB3AE8623497F724C02B1D7A551E23824E15939_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tFA7F7F30E34DF4A03E60907D6B496B57A82AC22D____FA6F7D5596F6084EE582060B76239C49C1BF8567F7EA556E2D83971C75E26951_11_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)512));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tFA7F7F30E34DF4A03E60907D6B496B57A82AC22D____FA6F7D5596F6084EE582060B76239C49C1BF8567F7EA556E2D83971C75E26951_11_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		((BZip2Constants_t2FB3AE8623497F724C02B1D7A551E23824E15939_StaticFields*)il2cpp_codegen_static_fields_for(BZip2Constants_t2FB3AE8623497F724C02B1D7A551E23824E15939_il2cpp_TypeInfo_var))->___RandomNumbers_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((BZip2Constants_t2FB3AE8623497F724C02B1D7A551E23824E15939_StaticFields*)il2cpp_codegen_static_fields_for(BZip2Constants_t2FB3AE8623497F724C02B1D7A551E23824E15939_il2cpp_TypeInfo_var))->___RandomNumbers_0), (void*)L_1);
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
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BZip2Exception__ctor_m0090C4098824A1E60315DB97BDAE5F7C9112BB5F (BZip2Exception_t1741AC6EA11FAF77F0D91DECA2B9440919007096* __this, const RuntimeMethod* method) 
{
	{
		SharpZipBaseException__ctor_m917B6575F2EF2273884AB9109302E636BF2F9777(__this, NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BZip2Exception__ctor_m8D0263A2BD0CCC9CB6D2886ABBE2539671EE4F1C (BZip2Exception_t1741AC6EA11FAF77F0D91DECA2B9440919007096* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___message0;
		SharpZipBaseException__ctor_m07FFE4C817E577AEA017E1508D178F0654E0A81C(__this, L_0, NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2Exception::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BZip2Exception__ctor_mAAA63BA512BBAED21D0F4094DDA88F8280B934A3 (BZip2Exception_t1741AC6EA11FAF77F0D91DECA2B9440919007096* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_1 = ___context1;
		SharpZipBaseException__ctor_mF6FC2972E678A47F03291205D8701EC5FAC8FFDB(__this, L_0, L_1, NULL);
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
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BZip2InputStream__ctor_m6C9F56BFE47945DB0B943D840AE4AA01DACE4E62 (BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BZip2Crc_t1A45B70CB448F473D16EAA0E3C2733DDE97A102F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		BZip2Crc_t1A45B70CB448F473D16EAA0E3C2733DDE97A102F* L_0 = (BZip2Crc_t1A45B70CB448F473D16EAA0E3C2733DDE97A102F*)il2cpp_codegen_object_new(BZip2Crc_t1A45B70CB448F473D16EAA0E3C2733DDE97A102F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BZip2Crc__ctor_m44988A7ABB1C4BE9641ACB2A5DD3C80E3A964030(L_0, NULL);
		__this->___mCrc_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mCrc_11), (void*)L_0);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_1 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		__this->___inUse_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inUse_12), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		__this->___seqToUnseq_14 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___seqToUnseq_14), (void*)L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		__this->___unseqToSeq_15 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___unseqToSeq_15), (void*)L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)18002));
		__this->___selector_16 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_16), (void*)L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)18002));
		__this->___selectorMtf_17 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selectorMtf_17), (void*)L_5);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		__this->___unzftab_20 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___unzftab_20), (void*)L_6);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_7 = (Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E*)(Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E*)SZArrayNew(Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E_il2cpp_TypeInfo_var, (uint32_t)6);
		__this->___limit_21 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___limit_21), (void*)L_7);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_8 = (Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E*)(Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E*)SZArrayNew(Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E_il2cpp_TypeInfo_var, (uint32_t)6);
		__this->___baseArray_22 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___baseArray_22), (void*)L_8);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_9 = (Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E*)(Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E*)SZArrayNew(Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E_il2cpp_TypeInfo_var, (uint32_t)6);
		__this->___perm_23 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___perm_23), (void*)L_9);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)6);
		__this->___minLens_24 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___minLens_24), (void*)L_10);
		__this->___currentChar_27 = (-1);
		__this->___currentState_28 = 1;
		__this->___U3CIsStreamOwnerU3Ek__BackingField_42 = (bool)1;
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_11 = ___stream0;
		if (L_11)
		{
			goto IL_00c4;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_12 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BZip2InputStream__ctor_m6C9F56BFE47945DB0B943D840AE4AA01DACE4E62_RuntimeMethod_var)));
	}

IL_00c4:
	{
		V_0 = 0;
		goto IL_0102;
	}

IL_00c8:
	{
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_13 = __this->___limit_21;
		int32_t L_14 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)258));
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_15);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_15);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_16 = __this->___baseArray_22;
		int32_t L_17 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)258));
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_18);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_18);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_19 = __this->___perm_23;
		int32_t L_20 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)258));
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_21);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_21);
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0102:
	{
		int32_t L_23 = V_0;
		if ((((int32_t)L_23) < ((int32_t)6)))
		{
			goto IL_00c8;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_24 = ___stream0;
		__this->___baseStream_25 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___baseStream_25), (void*)L_24);
		__this->___bsLive_10 = 0;
		__this->___bsBuff_9 = 0;
		BZip2InputStream_Initialize_mAAF7F4BBF0284BF55CFC5E6ED87F734318B794B9(__this, NULL);
		BZip2InputStream_InitBlock_m93DD86F9271DBEA5811A33CE8D386E812176780D(__this, NULL);
		BZip2InputStream_SetupBlock_m899C33F44F1838D4BFDE4C069AE652BA1EDF36E5(__this, NULL);
		return;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::get_IsStreamOwner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BZip2InputStream_get_IsStreamOwner_m41E5817E414E2FDDB0153B6F3AEC091B7242A0BA (BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsStreamOwnerU3Ek__BackingField_42;
		return L_0;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BZip2InputStream_get_CanRead_mC71680334D1938D45301B259CA7E588483CEAD70 (BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___baseStream_25;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, L_0);
		return L_1;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::get_CanSeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BZip2InputStream_get_CanSeek_mFCABA926A11F94A5E024CA3EAEC5D07BD7C8B4BD (BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BZip2InputStream_get_CanWrite_m8909CABE27E39FED0157DCCC228BC41A9EC42CC0 (BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Int64 ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BZip2InputStream_get_Length_mC3857DC2D4282B9D95E013CCA0E3EBD4501CDF17 (BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___baseStream_25;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_0);
		return L_1;
	}
}
// System.Int64 ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BZip2InputStream_get_Position_m8BC28258E50DD14E58AF4EA3E7A41908B621F5FB (BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___baseStream_25;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_0);
		return L_1;
	}
}
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::set_Position(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BZip2InputStream_set_Position_m975849119963BADC4183A3C36133B71EDE7DEC67 (BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89384C233A6744C5BF62F5F29E357EBB62768241)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BZip2InputStream_set_Position_m975849119963BADC4183A3C36133B71EDE7DEC67_RuntimeMethod_var)));
	}
}
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BZip2InputStream_Flush_m517332FC2D7406124E0682B071A67F919FE716F4 (BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___baseStream_25;
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(22 /* System.Void System.IO.Stream::Flush() */, L_0);
		return;
	}
}
// System.Int64 ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::Seek(System.Int64,System.IO.SeekOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BZip2InputStream_Seek_mA22AD11F85D0056A2E138E17B20C37D6B3300044 (BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* __this, int64_t ___offset0, int32_t ___origin1, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3F11B04FE00DABBA4008AE870D166A4B864C92FF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BZip2InputStream_Seek_mA22AD11F85D0056A2E138E17B20C37D6B3300044_RuntimeMethod_var)));
	}
}
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::SetLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BZip2InputStream_SetLength_m96E6B9141C7F2EAB2267ACFF4282CFCFC2974A3F (BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCE8479479307229DA7944DFC6B23FFC66B1407A6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BZip2InputStream_SetLength_m96E6B9141C7F2EAB2267ACFF4282CFCFC2974A3F_RuntimeMethod_var)));
	}
}
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BZip2InputStream_Write_m9626911E5C2E721FC4AD501A8E59CDAC271C6DAC (BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral735090184B1D11369C49CCB0438BABDD500A19D5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BZip2InputStream_Write_m9626911E5C2E721FC4AD501A8E59CDAC271C6DAC_RuntimeMethod_var)));
	}
}
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::WriteByte(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BZip2InputStream_WriteByte_mD0625FA4615D5B50D2F1482F6197441676AE8312 (BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* __this, uint8_t ___value0, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE1E140E61CDB0B9046F6A826A83854609AD41561)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BZip2InputStream_WriteByte_mD0625FA4615D5B50D2F1482F6197441676AE8312_RuntimeMethod_var)));
	}
}
// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::Read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BZip2InputStream_Read_mD2420F9C7066D844712E272C5084BA84457AACCB (BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___buffer0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BZip2InputStream_Read_mD2420F9C7066D844712E272C5084BA84457AACCB_RuntimeMethod_var)));
	}

IL_000e:
	{
		V_0 = 0;
		goto IL_002a;
	}

IL_0012:
	{
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(36 /* System.Int32 System.IO.Stream::ReadByte() */, __this);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_4 = V_0;
		return L_4;
	}

IL_001f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___buffer0;
		int32_t L_6 = ___offset1;
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_6, L_7))), (uint8_t)((int32_t)(uint8_t)L_8));
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_002a:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = ___count2;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_12 = ___count2;
		return L_12;
	}
}
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BZip2InputStream_Dispose_m5458CBF478321D6F775CADACE45D35C509A216FC (BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___disposing0;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		bool L_1;
		L_1 = BZip2InputStream_get_IsStreamOwner_m41E5817E414E2FDDB0153B6F3AEC091B7242A0BA_inline(__this, NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = __this->___baseStream_25;
		NullCheck(L_2);
		Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8(L_2, NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::ReadByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BZip2InputStream_ReadByte_m798D4995D0F5F1AAF60B1A202DF1A8E5F2D214C1 (BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		bool L_0 = __this->___streamEnd_26;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (-1);
	}

IL_000a:
	{
		int32_t L_1 = __this->___currentChar_27;
		V_0 = L_1;
		int32_t L_2 = __this->___currentState_28;
		V_1 = L_2;
		int32_t L_3 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract(L_3, 1)))
		{
			case 0:
			{
				goto IL_005c;
			}
			case 1:
			{
				goto IL_005c;
			}
			case 2:
			{
				goto IL_003e;
			}
			case 3:
			{
				goto IL_0046;
			}
			case 4:
			{
				goto IL_005c;
			}
			case 5:
			{
				goto IL_004e;
			}
			case 6:
			{
				goto IL_0056;
			}
		}
	}
	{
		goto IL_005c;
	}

IL_003e:
	{
		BZip2InputStream_SetupRandPartB_m5535A0A3843EE09F4B8BC02B25A2C784F90A702D(__this, NULL);
		goto IL_005c;
	}

IL_0046:
	{
		BZip2InputStream_SetupRandPartC_m6A32047DE375216D8C6B48E14DD852F3C33C1052(__this, NULL);
		goto IL_005c;
	}

IL_004e:
	{
		BZip2InputStream_SetupNoRandPartB_m316C6311888936B36E70C7E57870F804E1F90A49(__this, NULL);
		goto IL_005c;
	}

IL_0056:
	{
		BZip2InputStream_SetupNoRandPartC_mD0FDD6E542ACD8D986F0EE98FB4C465ED8ED14FD(__this, NULL);
	}

IL_005c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::MakeMaps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BZip2InputStream_MakeMaps_mC38259B3DCBDF7DBD8433CAF6715D6EFFBAE733A (BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		__this->___nInUse_13 = 0;
		V_0 = 0;
		goto IL_0045;
	}

IL_000b:
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = __this->___inUse_12;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (uint8_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_0041;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___seqToUnseq_14;
		int32_t L_5 = __this->___nInUse_13;
		int32_t L_6 = V_0;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (uint8_t)((int32_t)(uint8_t)L_6));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___unseqToSeq_15;
		int32_t L_8 = V_0;
		int32_t L_9 = __this->___nInUse_13;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (uint8_t)((int32_t)(uint8_t)L_9));
		int32_t L_10 = __this->___nInUse_13;
		__this->___nInUse_13 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0041:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0045:
	{
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) < ((int32_t)((int32_t)256))))
		{
			goto IL_000b;
		}
	}
	{
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BZip2InputStream_Initialize_mAAF7F4BBF0284BF55CFC5E6ED87F734318B794B9 (BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* __this, const RuntimeMethod* method) 
{
	Il2CppChar V_0 = 0x0;
	Il2CppChar V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	{
		Il2CppChar L_0;
		L_0 = BZip2InputStream_BsGetUChar_m2111337E4BE1CE4C11D5840121B92DBFA6377CB7(__this, NULL);
		Il2CppChar L_1;
		L_1 = BZip2InputStream_BsGetUChar_m2111337E4BE1CE4C11D5840121B92DBFA6377CB7(__this, NULL);
		V_0 = L_1;
		Il2CppChar L_2;
		L_2 = BZip2InputStream_BsGetUChar_m2111337E4BE1CE4C11D5840121B92DBFA6377CB7(__this, NULL);
		V_1 = L_2;
		Il2CppChar L_3;
		L_3 = BZip2InputStream_BsGetUChar_m2111337E4BE1CE4C11D5840121B92DBFA6377CB7(__this, NULL);
		V_2 = L_3;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)66)))))
		{
			goto IL_0033;
		}
	}
	{
		Il2CppChar L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)90)))))
		{
			goto IL_0033;
		}
	}
	{
		Il2CppChar L_5 = V_1;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)104)))))
		{
			goto IL_0033;
		}
	}
	{
		Il2CppChar L_6 = V_2;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)49))))
		{
			goto IL_0033;
		}
	}
	{
		Il2CppChar L_7 = V_2;
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)57))))
		{
			goto IL_003b;
		}
	}

IL_0033:
	{
		__this->___streamEnd_26 = (bool)1;
		return;
	}

IL_003b:
	{
		Il2CppChar L_8 = V_2;
		BZip2InputStream_SetDecompressStructureSizes_m527B6A7D7A0905BC26CFD176F11B44D32C1A417F(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, ((int32_t)48))), NULL);
		__this->___computedCombinedCRC_32 = 0;
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::InitBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BZip2InputStream_InitBlock_m93DD86F9271DBEA5811A33CE8D386E812176780D (BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChecksum_tE3D732C1F11753D7DC63E2F93286A7C581C81676_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	Il2CppChar V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	Il2CppChar V_3 = 0x0;
	Il2CppChar V_4 = 0x0;
	Il2CppChar V_5 = 0x0;
	{
		Il2CppChar L_0;
		L_0 = BZip2InputStream_BsGetUChar_m2111337E4BE1CE4C11D5840121B92DBFA6377CB7(__this, NULL);
		V_0 = L_0;
		Il2CppChar L_1;
		L_1 = BZip2InputStream_BsGetUChar_m2111337E4BE1CE4C11D5840121B92DBFA6377CB7(__this, NULL);
		V_1 = L_1;
		Il2CppChar L_2;
		L_2 = BZip2InputStream_BsGetUChar_m2111337E4BE1CE4C11D5840121B92DBFA6377CB7(__this, NULL);
		V_2 = L_2;
		Il2CppChar L_3;
		L_3 = BZip2InputStream_BsGetUChar_m2111337E4BE1CE4C11D5840121B92DBFA6377CB7(__this, NULL);
		V_3 = L_3;
		Il2CppChar L_4;
		L_4 = BZip2InputStream_BsGetUChar_m2111337E4BE1CE4C11D5840121B92DBFA6377CB7(__this, NULL);
		V_4 = L_4;
		Il2CppChar L_5;
		L_5 = BZip2InputStream_BsGetUChar_m2111337E4BE1CE4C11D5840121B92DBFA6377CB7(__this, NULL);
		V_5 = L_5;
		Il2CppChar L_6 = V_0;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)23)))))
		{
			goto IL_0056;
		}
	}
	{
		Il2CppChar L_7 = V_1;
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)114)))))
		{
			goto IL_0056;
		}
	}
	{
		Il2CppChar L_8 = V_2;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)69)))))
		{
			goto IL_0056;
		}
	}
	{
		Il2CppChar L_9 = V_3;
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)56)))))
		{
			goto IL_0056;
		}
	}
	{
		Il2CppChar L_10 = V_4;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)80)))))
		{
			goto IL_0056;
		}
	}
	{
		Il2CppChar L_11 = V_5;
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)144)))))
		{
			goto IL_0056;
		}
	}
	{
		BZip2InputStream_Complete_m5BECD99C71E964108C3F2765F27BD37710F7F5E3(__this, NULL);
		return;
	}

IL_0056:
	{
		Il2CppChar L_12 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)49)))))
		{
			goto IL_0076;
		}
	}
	{
		Il2CppChar L_13 = V_1;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)65)))))
		{
			goto IL_0076;
		}
	}
	{
		Il2CppChar L_14 = V_2;
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)89)))))
		{
			goto IL_0076;
		}
	}
	{
		Il2CppChar L_15 = V_3;
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)38)))))
		{
			goto IL_0076;
		}
	}
	{
		Il2CppChar L_16 = V_4;
		if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)83)))))
		{
			goto IL_0076;
		}
	}
	{
		Il2CppChar L_17 = V_5;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)89))))
		{
			goto IL_0083;
		}
	}

IL_0076:
	{
		BZip2InputStream_BadBlockHeader_m042E436789D30482BEB00E272D67E6A98F6275FB(NULL);
		__this->___streamEnd_26 = (bool)1;
		return;
	}

IL_0083:
	{
		int32_t L_18;
		L_18 = BZip2InputStream_BsGetInt32_mA476E857090B44576F9629C2265B0390CC8C95BA(__this, NULL);
		__this->___storedBlockCRC_29 = L_18;
		int32_t L_19;
		L_19 = BZip2InputStream_BsR_m87FC44F178D98623119D75BDBA011BEF72BB1613(__this, 1, NULL);
		__this->___blockRandomised_8 = (bool)((((int32_t)L_19) == ((int32_t)1))? 1 : 0);
		BZip2InputStream_GetAndMoveToFrontDecode_m3D99019D7E95B8396077B35582E99F86092EF526(__this, NULL);
		RuntimeObject* L_20 = __this->___mCrc_11;
		NullCheck(L_20);
		InterfaceActionInvoker0::Invoke(0 /* System.Void ICSharpCode.SharpZipLib.Checksum.IChecksum::Reset() */, IChecksum_tE3D732C1F11753D7DC63E2F93286A7C581C81676_il2cpp_TypeInfo_var, L_20);
		__this->___currentState_28 = 1;
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::EndBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BZip2InputStream_EndBlock_m9857538948902F7DCE49A785F03A7D491A567AC6 (BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChecksum_tE3D732C1F11753D7DC63E2F93286A7C581C81676_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___mCrc_11;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = InterfaceFuncInvoker0< int64_t >::Invoke(1 /* System.Int64 ICSharpCode.SharpZipLib.Checksum.IChecksum::get_Value() */, IChecksum_tE3D732C1F11753D7DC63E2F93286A7C581C81676_il2cpp_TypeInfo_var, L_0);
		__this->___computedBlockCRC_31 = ((int32_t)L_1);
		int32_t L_2 = __this->___storedBlockCRC_29;
		int32_t L_3 = __this->___computedBlockCRC_31;
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_0025;
		}
	}
	{
		BZip2InputStream_CrcError_m3B8460F42E8FFAC2E591D1FC382853873D90B9CB(NULL);
	}

IL_0025:
	{
		uint32_t L_4 = __this->___computedCombinedCRC_32;
		uint32_t L_5 = __this->___computedCombinedCRC_32;
		__this->___computedCombinedCRC_32 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_4<<1))&(-1)))|((int32_t)((uint32_t)L_5>>((int32_t)31)))));
		uint32_t L_6 = __this->___computedCombinedCRC_32;
		int32_t L_7 = __this->___computedBlockCRC_31;
		__this->___computedCombinedCRC_32 = ((int32_t)((int32_t)L_6^L_7));
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::Complete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BZip2InputStream_Complete_m5BECD99C71E964108C3F2765F27BD37710F7F5E3 (BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = BZip2InputStream_BsGetInt32_mA476E857090B44576F9629C2265B0390CC8C95BA(__this, NULL);
		__this->___storedCombinedCRC_30 = L_0;
		int32_t L_1 = __this->___storedCombinedCRC_30;
		uint32_t L_2 = __this->___computedCombinedCRC_32;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_001f;
		}
	}
	{
		BZip2InputStream_CrcError_m3B8460F42E8FFAC2E591D1FC382853873D90B9CB(NULL);
	}

IL_001f:
	{
		__this->___streamEnd_26 = (bool)1;
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::FillBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BZip2InputStream_FillBuffer_mD7CB990F9178525D296153D04BD375E9E72FD83A (BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = 0;
	}
	try
	{// begin try (depth: 1)
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___baseStream_25;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(36 /* System.Int32 System.IO.Stream::ReadByte() */, L_0);
		V_0 = L_1;
		goto IL_0018;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0010;
		}
		throw e;
	}

CATCH_0010:
	{// begin catch(System.Exception)
		BZip2InputStream_CompressedStreamEOF_m8AC116EF42A7B859ECF35E3CBCFBCF61F693B22C(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0018;
	}// end catch (depth: 1)

IL_0018:
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0021;
		}
	}
	{
		BZip2InputStream_CompressedStreamEOF_m8AC116EF42A7B859ECF35E3CBCFBCF61F693B22C(NULL);
	}

IL_0021:
	{
		int32_t L_3 = __this->___bsBuff_9;
		int32_t L_4 = V_0;
		__this->___bsBuff_9 = ((int32_t)(((int32_t)(L_3<<8))|((int32_t)(L_4&((int32_t)255)))));
		int32_t L_5 = __this->___bsLive_10;
		__this->___bsLive_10 = ((int32_t)il2cpp_codegen_add(L_5, 8));
		return;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::BsR(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BZip2InputStream_BsR_m87FC44F178D98623119D75BDBA011BEF72BB1613 (BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* __this, int32_t ___n0, const RuntimeMethod* method) 
{
	{
		goto IL_0008;
	}

IL_0002:
	{
		BZip2InputStream_FillBuffer_mD7CB990F9178525D296153D04BD375E9E72FD83A(__this, NULL);
	}

IL_0008:
	{
		int32_t L_0 = __this->___bsLive_10;
		int32_t L_1 = ___n0;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0002;
		}
	}
	{
		int32_t L_2 = __this->___bsBuff_9;
		int32_t L_3 = __this->___bsLive_10;
		int32_t L_4 = ___n0;
		int32_t L_5 = ___n0;
		int32_t L_6 = __this->___bsLive_10;
		int32_t L_7 = ___n0;
		__this->___bsLive_10 = ((int32_t)il2cpp_codegen_subtract(L_6, L_7));
		return ((int32_t)(((int32_t)(L_2>>((int32_t)(((int32_t)il2cpp_codegen_subtract(L_3, L_4))&((int32_t)31)))))&((int32_t)il2cpp_codegen_subtract(((int32_t)(1<<((int32_t)(L_5&((int32_t)31))))), 1))));
	}
}
// System.Char ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::BsGetUChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar BZip2InputStream_BsGetUChar_m2111337E4BE1CE4C11D5840121B92DBFA6377CB7 (BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = BZip2InputStream_BsR_m87FC44F178D98623119D75BDBA011BEF72BB1613(__this, 8, NULL);
		return ((int32_t)(uint16_t)L_0);
	}
}
// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::BsGetIntVS(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BZip2InputStream_BsGetIntVS_m7C0246D84E52E09EE51B2A1ED96671BCB885B405 (BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* __this, int32_t ___numBits0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___numBits0;
		int32_t L_1;
		L_1 = BZip2InputStream_BsR_m87FC44F178D98623119D75BDBA011BEF72BB1613(__this, L_0, NULL);
		return L_1;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::BsGetInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BZip2InputStream_BsGetInt32_mA476E857090B44576F9629C2265B0390CC8C95BA (BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = BZip2InputStream_BsR_m87FC44F178D98623119D75BDBA011BEF72BB1613(__this, 8, NULL);
		int32_t L_1;
		L_1 = BZip2InputStream_BsR_m87FC44F178D98623119D75BDBA011BEF72BB1613(__this, 8, NULL);
		int32_t L_2;
		L_2 = BZip2InputStream_BsR_m87FC44F178D98623119D75BDBA011BEF72BB1613(__this, 8, NULL);
		int32_t L_3;
		L_3 = BZip2InputStream_BsR_m87FC44F178D98623119D75BDBA011BEF72BB1613(__this, 8, NULL);
		return ((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(L_0<<8))|L_1))<<8))|L_2))<<8))|L_3));
	}
}
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::RecvDecodingTables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BZip2InputStream_RecvDecodingTables_m7DF3E08211C27893B36E83BC49A3045DCF864DB1 (BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680* V_0 = NULL;
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
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
	uint8_t V_16 = 0x0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	int32_t V_23 = 0;
	{
		CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680* L_0 = (CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680*)(CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680*)SZArrayNew(CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680_il2cpp_TypeInfo_var, (uint32_t)6);
		V_0 = L_0;
		V_6 = 0;
		goto IL_0020;
	}

IL_000c:
	{
		CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680* L_1 = V_0;
		int32_t L_2 = V_6;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)258));
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)L_3);
		int32_t L_4 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0020:
	{
		int32_t L_5 = V_6;
		if ((((int32_t)L_5) < ((int32_t)6)))
		{
			goto IL_000c;
		}
	}
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_6 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_1 = L_6;
		V_7 = 0;
		goto IL_0046;
	}

IL_0032:
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_7 = V_1;
		int32_t L_8 = V_7;
		int32_t L_9;
		L_9 = BZip2InputStream_BsR_m87FC44F178D98623119D75BDBA011BEF72BB1613(__this, 1, NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (bool)((((int32_t)L_9) == ((int32_t)1))? 1 : 0));
		int32_t L_10 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0046:
	{
		int32_t L_11 = V_7;
		if ((((int32_t)L_11) < ((int32_t)((int32_t)16))))
		{
			goto IL_0032;
		}
	}
	{
		V_8 = 0;
		goto IL_00aa;
	}

IL_0051:
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_12 = V_1;
		int32_t L_13 = V_8;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		uint8_t L_15 = (uint8_t)(L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		if (!L_15)
		{
			goto IL_0083;
		}
	}
	{
		V_9 = 0;
		goto IL_007b;
	}

IL_005c:
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_16 = __this->___inUse_12;
		int32_t L_17 = V_8;
		int32_t L_18 = V_9;
		int32_t L_19;
		L_19 = BZip2InputStream_BsR_m87FC44F178D98623119D75BDBA011BEF72BB1613(__this, 1, NULL);
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_17, ((int32_t)16))), L_18))), (bool)((((int32_t)L_19) == ((int32_t)1))? 1 : 0));
		int32_t L_20 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_007b:
	{
		int32_t L_21 = V_9;
		if ((((int32_t)L_21) < ((int32_t)((int32_t)16))))
		{
			goto IL_005c;
		}
	}
	{
		goto IL_00a4;
	}

IL_0083:
	{
		V_10 = 0;
		goto IL_009e;
	}

IL_0088:
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_22 = __this->___inUse_12;
		int32_t L_23 = V_8;
		int32_t L_24 = V_10;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_23, ((int32_t)16))), L_24))), (bool)0);
		int32_t L_25 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_009e:
	{
		int32_t L_26 = V_10;
		if ((((int32_t)L_26) < ((int32_t)((int32_t)16))))
		{
			goto IL_0088;
		}
	}

IL_00a4:
	{
		int32_t L_27 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_00aa:
	{
		int32_t L_28 = V_8;
		if ((((int32_t)L_28) < ((int32_t)((int32_t)16))))
		{
			goto IL_0051;
		}
	}
	{
		BZip2InputStream_MakeMaps_mC38259B3DCBDF7DBD8433CAF6715D6EFFBAE733A(__this, NULL);
		int32_t L_29 = __this->___nInUse_13;
		V_2 = ((int32_t)il2cpp_codegen_add(L_29, 2));
		int32_t L_30;
		L_30 = BZip2InputStream_BsR_m87FC44F178D98623119D75BDBA011BEF72BB1613(__this, 3, NULL);
		V_3 = L_30;
		int32_t L_31;
		L_31 = BZip2InputStream_BsR_m87FC44F178D98623119D75BDBA011BEF72BB1613(__this, ((int32_t)15), NULL);
		V_4 = L_31;
		V_11 = 0;
		goto IL_00fd;
	}

IL_00d6:
	{
		V_12 = 0;
		goto IL_00e1;
	}

IL_00db:
	{
		int32_t L_32 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_00e1:
	{
		int32_t L_33;
		L_33 = BZip2InputStream_BsR_m87FC44F178D98623119D75BDBA011BEF72BB1613(__this, 1, NULL);
		if ((((int32_t)L_33) == ((int32_t)1)))
		{
			goto IL_00db;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = __this->___selectorMtf_17;
		int32_t L_35 = V_11;
		int32_t L_36 = V_12;
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(L_35), (uint8_t)((int32_t)(uint8_t)L_36));
		int32_t L_37 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00fd:
	{
		int32_t L_38 = V_11;
		int32_t L_39 = V_4;
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_00d6;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)6);
		V_5 = L_40;
		V_13 = 0;
		goto IL_011e;
	}

IL_0110:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = V_5;
		int32_t L_42 = V_13;
		int32_t L_43 = V_13;
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(L_42), (uint8_t)((int32_t)(uint8_t)L_43));
		int32_t L_44 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_011e:
	{
		int32_t L_45 = V_13;
		int32_t L_46 = V_3;
		if ((((int32_t)L_45) < ((int32_t)L_46)))
		{
			goto IL_0110;
		}
	}
	{
		V_14 = 0;
		goto IL_016a;
	}

IL_0128:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = __this->___selectorMtf_17;
		int32_t L_48 = V_14;
		NullCheck(L_47);
		int32_t L_49 = L_48;
		uint8_t L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		V_15 = L_50;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = V_5;
		int32_t L_52 = V_15;
		NullCheck(L_51);
		int32_t L_53 = L_52;
		uint8_t L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		V_16 = L_54;
		goto IL_014e;
	}

IL_013c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55 = V_5;
		int32_t L_56 = V_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = V_5;
		int32_t L_58 = V_15;
		NullCheck(L_57);
		int32_t L_59 = ((int32_t)il2cpp_codegen_subtract(L_58, 1));
		uint8_t L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		NullCheck(L_55);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(L_56), (uint8_t)L_60);
		int32_t L_61 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_subtract(L_61, 1));
	}

IL_014e:
	{
		int32_t L_62 = V_15;
		if ((((int32_t)L_62) > ((int32_t)0)))
		{
			goto IL_013c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63 = V_5;
		uint8_t L_64 = V_16;
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_64);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_65 = __this->___selector_16;
		int32_t L_66 = V_14;
		uint8_t L_67 = V_16;
		NullCheck(L_65);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(L_66), (uint8_t)L_67);
		int32_t L_68 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_68, 1));
	}

IL_016a:
	{
		int32_t L_69 = V_14;
		int32_t L_70 = V_4;
		if ((((int32_t)L_69) < ((int32_t)L_70)))
		{
			goto IL_0128;
		}
	}
	{
		V_17 = 0;
		goto IL_01bf;
	}

IL_0175:
	{
		int32_t L_71;
		L_71 = BZip2InputStream_BsR_m87FC44F178D98623119D75BDBA011BEF72BB1613(__this, 5, NULL);
		V_18 = L_71;
		V_19 = 0;
		goto IL_01b4;
	}

IL_0183:
	{
		int32_t L_72;
		L_72 = BZip2InputStream_BsR_m87FC44F178D98623119D75BDBA011BEF72BB1613(__this, 1, NULL);
		if (L_72)
		{
			goto IL_0194;
		}
	}
	{
		int32_t L_73 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add(L_73, 1));
		goto IL_019a;
	}

IL_0194:
	{
		int32_t L_74 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_subtract(L_74, 1));
	}

IL_019a:
	{
		int32_t L_75;
		L_75 = BZip2InputStream_BsR_m87FC44F178D98623119D75BDBA011BEF72BB1613(__this, 1, NULL);
		if ((((int32_t)L_75) == ((int32_t)1)))
		{
			goto IL_0183;
		}
	}
	{
		CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680* L_76 = V_0;
		int32_t L_77 = V_17;
		NullCheck(L_76);
		int32_t L_78 = L_77;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_79 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		int32_t L_80 = V_19;
		int32_t L_81 = V_18;
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(L_80), (Il2CppChar)((int32_t)(uint16_t)L_81));
		int32_t L_82 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add(L_82, 1));
	}

IL_01b4:
	{
		int32_t L_83 = V_19;
		int32_t L_84 = V_2;
		if ((((int32_t)L_83) < ((int32_t)L_84)))
		{
			goto IL_019a;
		}
	}
	{
		int32_t L_85 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_85, 1));
	}

IL_01bf:
	{
		int32_t L_86 = V_17;
		int32_t L_87 = V_3;
		if ((((int32_t)L_86) < ((int32_t)L_87)))
		{
			goto IL_0175;
		}
	}
	{
		V_20 = 0;
		goto IL_023a;
	}

IL_01c9:
	{
		V_21 = ((int32_t)32);
		V_22 = 0;
		V_23 = 0;
		goto IL_01fb;
	}

IL_01d5:
	{
		int32_t L_88 = V_22;
		CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680* L_89 = V_0;
		int32_t L_90 = V_20;
		NullCheck(L_89);
		int32_t L_91 = L_90;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_92 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		int32_t L_93 = V_23;
		NullCheck(L_92);
		int32_t L_94 = L_93;
		uint16_t L_95 = (uint16_t)(L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_96;
		L_96 = Math_Max_m830F00B616D7A2130E46E974DFB27E9DA7FE30E5(L_88, L_95, NULL);
		V_22 = L_96;
		int32_t L_97 = V_21;
		CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680* L_98 = V_0;
		int32_t L_99 = V_20;
		NullCheck(L_98);
		int32_t L_100 = L_99;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_101 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		int32_t L_102 = V_23;
		NullCheck(L_101);
		int32_t L_103 = L_102;
		uint16_t L_104 = (uint16_t)(L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		int32_t L_105;
		L_105 = Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8(L_97, L_104, NULL);
		V_21 = L_105;
		int32_t L_106 = V_23;
		V_23 = ((int32_t)il2cpp_codegen_add(L_106, 1));
	}

IL_01fb:
	{
		int32_t L_107 = V_23;
		int32_t L_108 = V_2;
		if ((((int32_t)L_107) < ((int32_t)L_108)))
		{
			goto IL_01d5;
		}
	}
	{
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_109 = __this->___limit_21;
		int32_t L_110 = V_20;
		NullCheck(L_109);
		int32_t L_111 = L_110;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_112 = (L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_113 = __this->___baseArray_22;
		int32_t L_114 = V_20;
		NullCheck(L_113);
		int32_t L_115 = L_114;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_116 = (L_113)->GetAt(static_cast<il2cpp_array_size_t>(L_115));
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_117 = __this->___perm_23;
		int32_t L_118 = V_20;
		NullCheck(L_117);
		int32_t L_119 = L_118;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_120 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
		CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680* L_121 = V_0;
		int32_t L_122 = V_20;
		NullCheck(L_121);
		int32_t L_123 = L_122;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_124 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		int32_t L_125 = V_21;
		int32_t L_126 = V_22;
		int32_t L_127 = V_2;
		BZip2InputStream_HbCreateDecodeTables_m08C490887BB4A71E27E1E504042BD8578DBF494F(L_112, L_116, L_120, L_124, L_125, L_126, L_127, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_128 = __this->___minLens_24;
		int32_t L_129 = V_20;
		int32_t L_130 = V_21;
		NullCheck(L_128);
		(L_128)->SetAt(static_cast<il2cpp_array_size_t>(L_129), (int32_t)L_130);
		int32_t L_131 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add(L_131, 1));
	}

IL_023a:
	{
		int32_t L_132 = V_20;
		int32_t L_133 = V_3;
		if ((((int32_t)L_132) < ((int32_t)L_133)))
		{
			goto IL_01c9;
		}
	}
	{
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::GetAndMoveToFrontDecode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BZip2InputStream_GetAndMoveToFrontDecode_m3D99019D7E95B8396077B35582E99F86092EF526 (BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
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
	uint8_t V_14 = 0x0;
	uint8_t V_15 = 0x0;
	int32_t V_16 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		V_0 = L_0;
		int32_t L_1 = __this->___blockSize100k_7;
		V_2 = ((int32_t)il2cpp_codegen_multiply(((int32_t)100000), L_1));
		int32_t L_2;
		L_2 = BZip2InputStream_BsGetIntVS_m7C0246D84E52E09EE51B2A1ED96671BCB885B405(__this, ((int32_t)24), NULL);
		__this->___origPtr_6 = L_2;
		BZip2InputStream_RecvDecodingTables_m7DF3E08211C27893B36E83BC49A3045DCF864DB1(__this, NULL);
		int32_t L_3 = __this->___nInUse_13;
		V_3 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		V_4 = (-1);
		V_5 = 0;
		V_10 = 0;
		goto IL_0050;
	}

IL_0040:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->___unzftab_20;
		int32_t L_5 = V_10;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (int32_t)0);
		int32_t L_6 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0050:
	{
		int32_t L_7 = V_10;
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)255))))
		{
			goto IL_0040;
		}
	}
	{
		V_11 = 0;
		goto IL_006b;
	}

IL_005e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		int32_t L_9 = V_11;
		int32_t L_10 = V_11;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint8_t)((int32_t)(uint8_t)L_10));
		int32_t L_11 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_006b:
	{
		int32_t L_12 = V_11;
		if ((((int32_t)L_12) <= ((int32_t)((int32_t)255))))
		{
			goto IL_005e;
		}
	}
	{
		__this->___last_5 = (-1);
		int32_t L_13 = V_5;
		if (L_13)
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_14 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		V_5 = ((int32_t)50);
	}

IL_0089:
	{
		int32_t L_15 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___selector_16;
		int32_t L_17 = V_4;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		uint8_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_6 = L_19;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = __this->___minLens_24;
		int32_t L_21 = V_6;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		int32_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_7 = L_23;
		int32_t L_24 = V_7;
		int32_t L_25;
		L_25 = BZip2InputStream_BsR_m87FC44F178D98623119D75BDBA011BEF72BB1613(__this, L_24, NULL);
		V_8 = L_25;
		goto IL_0106;
	}

IL_00b1:
	{
		int32_t L_26 = V_7;
		if ((((int32_t)L_26) <= ((int32_t)((int32_t)20))))
		{
			goto IL_00c2;
		}
	}
	{
		BZip2Exception_t1741AC6EA11FAF77F0D91DECA2B9440919007096* L_27 = (BZip2Exception_t1741AC6EA11FAF77F0D91DECA2B9440919007096*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BZip2Exception_t1741AC6EA11FAF77F0D91DECA2B9440919007096_il2cpp_TypeInfo_var)));
		NullCheck(L_27);
		BZip2Exception__ctor_m8D0263A2BD0CCC9CB6D2886ABBE2539671EE4F1C(L_27, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral685754E232BB2C9F1958DD15B2C38BA9177C7579)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BZip2InputStream_GetAndMoveToFrontDecode_m3D99019D7E95B8396077B35582E99F86092EF526_RuntimeMethod_var)));
	}

IL_00c2:
	{
		int32_t L_28 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_28, 1));
		goto IL_00d0;
	}

IL_00ca:
	{
		BZip2InputStream_FillBuffer_mD7CB990F9178525D296153D04BD375E9E72FD83A(__this, NULL);
	}

IL_00d0:
	{
		int32_t L_29 = __this->___bsLive_10;
		if ((((int32_t)L_29) < ((int32_t)1)))
		{
			goto IL_00ca;
		}
	}
	{
		int32_t L_30 = __this->___bsBuff_9;
		int32_t L_31 = __this->___bsLive_10;
		V_9 = ((int32_t)(((int32_t)(L_30>>((int32_t)(((int32_t)il2cpp_codegen_subtract(L_31, 1))&((int32_t)31)))))&1));
		int32_t L_32 = __this->___bsLive_10;
		__this->___bsLive_10 = ((int32_t)il2cpp_codegen_subtract(L_32, 1));
		int32_t L_33 = V_8;
		int32_t L_34 = V_9;
		V_8 = ((int32_t)(((int32_t)(L_33<<1))|L_34));
	}

IL_0106:
	{
		int32_t L_35 = V_8;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_36 = __this->___limit_21;
		int32_t L_37 = V_6;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		int32_t L_40 = V_7;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		int32_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		if ((((int32_t)L_35) > ((int32_t)L_42)))
		{
			goto IL_00b1;
		}
	}
	{
		int32_t L_43 = V_8;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_44 = __this->___baseArray_22;
		int32_t L_45 = V_6;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		int32_t L_48 = V_7;
		NullCheck(L_47);
		int32_t L_49 = L_48;
		int32_t L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_43, L_50))) < ((int32_t)0)))
		{
			goto IL_013e;
		}
	}
	{
		int32_t L_51 = V_8;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_52 = __this->___baseArray_22;
		int32_t L_53 = V_6;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		int32_t L_56 = V_7;
		NullCheck(L_55);
		int32_t L_57 = L_56;
		int32_t L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_51, L_58))) < ((int32_t)((int32_t)258))))
		{
			goto IL_0149;
		}
	}

IL_013e:
	{
		BZip2Exception_t1741AC6EA11FAF77F0D91DECA2B9440919007096* L_59 = (BZip2Exception_t1741AC6EA11FAF77F0D91DECA2B9440919007096*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BZip2Exception_t1741AC6EA11FAF77F0D91DECA2B9440919007096_il2cpp_TypeInfo_var)));
		NullCheck(L_59);
		BZip2Exception__ctor_m8D0263A2BD0CCC9CB6D2886ABBE2539671EE4F1C(L_59, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral685754E232BB2C9F1958DD15B2C38BA9177C7579)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_59, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BZip2InputStream_GetAndMoveToFrontDecode_m3D99019D7E95B8396077B35582E99F86092EF526_RuntimeMethod_var)));
	}

IL_0149:
	{
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_60 = __this->___perm_23;
		int32_t L_61 = V_6;
		NullCheck(L_60);
		int32_t L_62 = L_61;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		int32_t L_64 = V_8;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_65 = __this->___baseArray_22;
		int32_t L_66 = V_6;
		NullCheck(L_65);
		int32_t L_67 = L_66;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		int32_t L_69 = V_7;
		NullCheck(L_68);
		int32_t L_70 = L_69;
		int32_t L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		NullCheck(L_63);
		int32_t L_72 = ((int32_t)il2cpp_codegen_subtract(L_64, L_71));
		int32_t L_73 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		V_1 = L_73;
	}

IL_0163:
	{
		int32_t L_74 = V_1;
		int32_t L_75 = V_3;
		if ((((int32_t)L_74) == ((int32_t)L_75)))
		{
			goto IL_03c8;
		}
	}
	{
		int32_t L_76 = V_1;
		if (!L_76)
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_77 = V_1;
		if ((!(((uint32_t)L_77) == ((uint32_t)1))))
		{
			goto IL_02af;
		}
	}

IL_0174:
	{
		V_12 = (-1);
		V_13 = 1;
	}

IL_017a:
	{
		int32_t L_78 = V_1;
		if (L_78)
		{
			goto IL_0186;
		}
	}
	{
		int32_t L_79 = V_12;
		int32_t L_80 = V_13;
		V_12 = ((int32_t)il2cpp_codegen_add(L_79, L_80));
		goto IL_0193;
	}

IL_0186:
	{
		int32_t L_81 = V_1;
		if ((!(((uint32_t)L_81) == ((uint32_t)1))))
		{
			goto IL_0193;
		}
	}
	{
		int32_t L_82 = V_12;
		int32_t L_83 = V_13;
		V_12 = ((int32_t)il2cpp_codegen_add(L_82, ((int32_t)il2cpp_codegen_multiply(2, L_83))));
	}

IL_0193:
	{
		int32_t L_84 = V_13;
		V_13 = ((int32_t)(L_84<<1));
		int32_t L_85 = V_5;
		if (L_85)
		{
			goto IL_01a7;
		}
	}
	{
		int32_t L_86 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_86, 1));
		V_5 = ((int32_t)50);
	}

IL_01a7:
	{
		int32_t L_87 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_87, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_88 = __this->___selector_16;
		int32_t L_89 = V_4;
		NullCheck(L_88);
		int32_t L_90 = L_89;
		uint8_t L_91 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		V_6 = L_91;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_92 = __this->___minLens_24;
		int32_t L_93 = V_6;
		NullCheck(L_92);
		int32_t L_94 = L_93;
		int32_t L_95 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		V_7 = L_95;
		int32_t L_96 = V_7;
		int32_t L_97;
		L_97 = BZip2InputStream_BsR_m87FC44F178D98623119D75BDBA011BEF72BB1613(__this, L_96, NULL);
		V_8 = L_97;
		goto IL_0213;
	}

IL_01cf:
	{
		int32_t L_98 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_98, 1));
		goto IL_01dd;
	}

IL_01d7:
	{
		BZip2InputStream_FillBuffer_mD7CB990F9178525D296153D04BD375E9E72FD83A(__this, NULL);
	}

IL_01dd:
	{
		int32_t L_99 = __this->___bsLive_10;
		if ((((int32_t)L_99) < ((int32_t)1)))
		{
			goto IL_01d7;
		}
	}
	{
		int32_t L_100 = __this->___bsBuff_9;
		int32_t L_101 = __this->___bsLive_10;
		V_9 = ((int32_t)(((int32_t)(L_100>>((int32_t)(((int32_t)il2cpp_codegen_subtract(L_101, 1))&((int32_t)31)))))&1));
		int32_t L_102 = __this->___bsLive_10;
		__this->___bsLive_10 = ((int32_t)il2cpp_codegen_subtract(L_102, 1));
		int32_t L_103 = V_8;
		int32_t L_104 = V_9;
		V_8 = ((int32_t)(((int32_t)(L_103<<1))|L_104));
	}

IL_0213:
	{
		int32_t L_105 = V_8;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_106 = __this->___limit_21;
		int32_t L_107 = V_6;
		NullCheck(L_106);
		int32_t L_108 = L_107;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_109 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		int32_t L_110 = V_7;
		NullCheck(L_109);
		int32_t L_111 = L_110;
		int32_t L_112 = (L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
		if ((((int32_t)L_105) > ((int32_t)L_112)))
		{
			goto IL_01cf;
		}
	}
	{
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_113 = __this->___perm_23;
		int32_t L_114 = V_6;
		NullCheck(L_113);
		int32_t L_115 = L_114;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_116 = (L_113)->GetAt(static_cast<il2cpp_array_size_t>(L_115));
		int32_t L_117 = V_8;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_118 = __this->___baseArray_22;
		int32_t L_119 = V_6;
		NullCheck(L_118);
		int32_t L_120 = L_119;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_121 = (L_118)->GetAt(static_cast<il2cpp_array_size_t>(L_120));
		int32_t L_122 = V_7;
		NullCheck(L_121);
		int32_t L_123 = L_122;
		int32_t L_124 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		NullCheck(L_116);
		int32_t L_125 = ((int32_t)il2cpp_codegen_subtract(L_117, L_124));
		int32_t L_126 = (L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_125));
		V_1 = L_126;
		int32_t L_127 = V_1;
		if (!L_127)
		{
			goto IL_017a;
		}
	}
	{
		int32_t L_128 = V_1;
		if ((((int32_t)L_128) == ((int32_t)1)))
		{
			goto IL_017a;
		}
	}
	{
		int32_t L_129 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_129, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_130 = __this->___seqToUnseq_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_131 = V_0;
		NullCheck(L_131);
		int32_t L_132 = 0;
		uint8_t L_133 = (L_131)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
		NullCheck(L_130);
		uint8_t L_134 = L_133;
		uint8_t L_135 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_134));
		V_14 = L_135;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_136 = __this->___unzftab_20;
		uint8_t L_137 = V_14;
		NullCheck(L_136);
		int32_t* L_138 = ((L_136)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_137)));
		int32_t L_139 = *((int32_t*)L_138);
		int32_t L_140 = V_12;
		*((int32_t*)L_138) = (int32_t)((int32_t)il2cpp_codegen_add(L_139, L_140));
		goto IL_0294;
	}

IL_0271:
	{
		int32_t L_141 = __this->___last_5;
		__this->___last_5 = ((int32_t)il2cpp_codegen_add(L_141, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_142 = __this->___ll8_19;
		int32_t L_143 = __this->___last_5;
		uint8_t L_144 = V_14;
		NullCheck(L_142);
		(L_142)->SetAt(static_cast<il2cpp_array_size_t>(L_143), (uint8_t)L_144);
		int32_t L_145 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_subtract(L_145, 1));
	}

IL_0294:
	{
		int32_t L_146 = V_12;
		if ((((int32_t)L_146) > ((int32_t)0)))
		{
			goto IL_0271;
		}
	}
	{
		int32_t L_147 = __this->___last_5;
		int32_t L_148 = V_2;
		if ((((int32_t)L_147) < ((int32_t)L_148)))
		{
			goto IL_0163;
		}
	}
	{
		BZip2InputStream_BlockOverrun_m29C63342909C2DC1CC6F197CECD42CACFF9F31D4(NULL);
		goto IL_0163;
	}

IL_02af:
	{
		int32_t L_149 = __this->___last_5;
		__this->___last_5 = ((int32_t)il2cpp_codegen_add(L_149, 1));
		int32_t L_150 = __this->___last_5;
		int32_t L_151 = V_2;
		if ((((int32_t)L_150) < ((int32_t)L_151)))
		{
			goto IL_02cb;
		}
	}
	{
		BZip2InputStream_BlockOverrun_m29C63342909C2DC1CC6F197CECD42CACFF9F31D4(NULL);
	}

IL_02cb:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_152 = V_0;
		int32_t L_153 = V_1;
		NullCheck(L_152);
		int32_t L_154 = ((int32_t)il2cpp_codegen_subtract(L_153, 1));
		uint8_t L_155 = (L_152)->GetAt(static_cast<il2cpp_array_size_t>(L_154));
		V_15 = L_155;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_156 = __this->___unzftab_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_157 = __this->___seqToUnseq_14;
		uint8_t L_158 = V_15;
		NullCheck(L_157);
		uint8_t L_159 = L_158;
		uint8_t L_160 = (L_157)->GetAt(static_cast<il2cpp_array_size_t>(L_159));
		NullCheck(L_156);
		int32_t* L_161 = ((L_156)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_160)));
		int32_t L_162 = *((int32_t*)L_161);
		*((int32_t*)L_161) = (int32_t)((int32_t)il2cpp_codegen_add(L_162, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_163 = __this->___ll8_19;
		int32_t L_164 = __this->___last_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_165 = __this->___seqToUnseq_14;
		uint8_t L_166 = V_15;
		NullCheck(L_165);
		uint8_t L_167 = L_166;
		uint8_t L_168 = (L_165)->GetAt(static_cast<il2cpp_array_size_t>(L_167));
		NullCheck(L_163);
		(L_163)->SetAt(static_cast<il2cpp_array_size_t>(L_164), (uint8_t)L_168);
		int32_t L_169 = V_1;
		V_16 = ((int32_t)il2cpp_codegen_subtract(L_169, 1));
		goto IL_0315;
	}

IL_0308:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_170 = V_0;
		int32_t L_171 = V_16;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_172 = V_0;
		int32_t L_173 = V_16;
		int32_t L_174 = ((int32_t)il2cpp_codegen_subtract(L_173, 1));
		V_16 = L_174;
		NullCheck(L_172);
		int32_t L_175 = L_174;
		uint8_t L_176 = (L_172)->GetAt(static_cast<il2cpp_array_size_t>(L_175));
		NullCheck(L_170);
		(L_170)->SetAt(static_cast<il2cpp_array_size_t>(L_171), (uint8_t)L_176);
	}

IL_0315:
	{
		int32_t L_177 = V_16;
		if ((((int32_t)L_177) > ((int32_t)0)))
		{
			goto IL_0308;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_178 = V_0;
		uint8_t L_179 = V_15;
		NullCheck(L_178);
		(L_178)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_179);
		int32_t L_180 = V_5;
		if (L_180)
		{
			goto IL_032d;
		}
	}
	{
		int32_t L_181 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_181, 1));
		V_5 = ((int32_t)50);
	}

IL_032d:
	{
		int32_t L_182 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_182, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_183 = __this->___selector_16;
		int32_t L_184 = V_4;
		NullCheck(L_183);
		int32_t L_185 = L_184;
		uint8_t L_186 = (L_183)->GetAt(static_cast<il2cpp_array_size_t>(L_185));
		V_6 = L_186;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_187 = __this->___minLens_24;
		int32_t L_188 = V_6;
		NullCheck(L_187);
		int32_t L_189 = L_188;
		int32_t L_190 = (L_187)->GetAt(static_cast<il2cpp_array_size_t>(L_189));
		V_7 = L_190;
		int32_t L_191 = V_7;
		int32_t L_192;
		L_192 = BZip2InputStream_BsR_m87FC44F178D98623119D75BDBA011BEF72BB1613(__this, L_191, NULL);
		V_8 = L_192;
		goto IL_0399;
	}

IL_0355:
	{
		int32_t L_193 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_193, 1));
		goto IL_0363;
	}

IL_035d:
	{
		BZip2InputStream_FillBuffer_mD7CB990F9178525D296153D04BD375E9E72FD83A(__this, NULL);
	}

IL_0363:
	{
		int32_t L_194 = __this->___bsLive_10;
		if ((((int32_t)L_194) < ((int32_t)1)))
		{
			goto IL_035d;
		}
	}
	{
		int32_t L_195 = __this->___bsBuff_9;
		int32_t L_196 = __this->___bsLive_10;
		V_9 = ((int32_t)(((int32_t)(L_195>>((int32_t)(((int32_t)il2cpp_codegen_subtract(L_196, 1))&((int32_t)31)))))&1));
		int32_t L_197 = __this->___bsLive_10;
		__this->___bsLive_10 = ((int32_t)il2cpp_codegen_subtract(L_197, 1));
		int32_t L_198 = V_8;
		int32_t L_199 = V_9;
		V_8 = ((int32_t)(((int32_t)(L_198<<1))|L_199));
	}

IL_0399:
	{
		int32_t L_200 = V_8;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_201 = __this->___limit_21;
		int32_t L_202 = V_6;
		NullCheck(L_201);
		int32_t L_203 = L_202;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_204 = (L_201)->GetAt(static_cast<il2cpp_array_size_t>(L_203));
		int32_t L_205 = V_7;
		NullCheck(L_204);
		int32_t L_206 = L_205;
		int32_t L_207 = (L_204)->GetAt(static_cast<il2cpp_array_size_t>(L_206));
		if ((((int32_t)L_200) > ((int32_t)L_207)))
		{
			goto IL_0355;
		}
	}
	{
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_208 = __this->___perm_23;
		int32_t L_209 = V_6;
		NullCheck(L_208);
		int32_t L_210 = L_209;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_211 = (L_208)->GetAt(static_cast<il2cpp_array_size_t>(L_210));
		int32_t L_212 = V_8;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_213 = __this->___baseArray_22;
		int32_t L_214 = V_6;
		NullCheck(L_213);
		int32_t L_215 = L_214;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_216 = (L_213)->GetAt(static_cast<il2cpp_array_size_t>(L_215));
		int32_t L_217 = V_7;
		NullCheck(L_216);
		int32_t L_218 = L_217;
		int32_t L_219 = (L_216)->GetAt(static_cast<il2cpp_array_size_t>(L_218));
		NullCheck(L_211);
		int32_t L_220 = ((int32_t)il2cpp_codegen_subtract(L_212, L_219));
		int32_t L_221 = (L_211)->GetAt(static_cast<il2cpp_array_size_t>(L_220));
		V_1 = L_221;
		goto IL_0163;
	}

IL_03c8:
	{
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::SetupBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BZip2InputStream_SetupBlock_m899C33F44F1838D4BFDE4C069AE652BA1EDF36E5 (BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint8_t V_3 = 0x0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)257));
		V_0 = L_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = V_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->___unzftab_20;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_0;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_2, 0, (RuntimeArray*)L_3, 1, ((int32_t)256), NULL);
		V_1 = 1;
		goto IL_003a;
	}

IL_0026:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)));
		int32_t L_7 = *((int32_t*)L_6);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = V_0;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		*((int32_t*)L_6) = (int32_t)((int32_t)il2cpp_codegen_add(L_7, L_11));
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_003a:
	{
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) <= ((int32_t)((int32_t)256))))
		{
			goto IL_0026;
		}
	}
	{
		V_2 = 0;
		goto IL_006a;
	}

IL_0046:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->___ll8_19;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		uint8_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_3 = L_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = __this->___tt_18;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = V_0;
		uint8_t L_20 = V_3;
		NullCheck(L_19);
		uint8_t L_21 = L_20;
		int32_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		int32_t L_23 = V_2;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (int32_t)L_23);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = V_0;
		uint8_t L_25 = V_3;
		NullCheck(L_24);
		int32_t* L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)));
		int32_t L_27 = *((int32_t*)L_26);
		*((int32_t*)L_26) = (int32_t)((int32_t)il2cpp_codegen_add(L_27, 1));
		int32_t L_28 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_006a:
	{
		int32_t L_29 = V_2;
		int32_t L_30 = __this->___last_5;
		if ((((int32_t)L_29) <= ((int32_t)L_30)))
		{
			goto IL_0046;
		}
	}
	{
		V_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->___tt_18;
		int32_t L_32 = __this->___origPtr_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		__this->___tPos_36 = L_34;
		__this->___count_33 = 0;
		__this->___i2_39 = 0;
		__this->___ch2_35 = ((int32_t)256);
		bool L_35 = __this->___blockRandomised_8;
		if (!L_35)
		{
			goto IL_00be;
		}
	}
	{
		__this->___rNToGo_37 = 0;
		__this->___rTPos_38 = 0;
		BZip2InputStream_SetupRandPartA_mB668B399E66AA4E0EED64DCF6307A082EAF61D8C(__this, NULL);
		return;
	}

IL_00be:
	{
		BZip2InputStream_SetupNoRandPartA_mC524B2897F62558926C7D06C0B66153ABACAAE20(__this, NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::SetupRandPartA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BZip2InputStream_SetupRandPartA_mB668B399E66AA4E0EED64DCF6307A082EAF61D8C (BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BZip2Constants_t2FB3AE8623497F724C02B1D7A551E23824E15939_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChecksum_tE3D732C1F11753D7DC63E2F93286A7C581C81676_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B6_0 = 0;
	BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* G_B6_1 = NULL;
	int32_t G_B5_0 = 0;
	BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* G_B7_2 = NULL;
	{
		int32_t L_0 = __this->___i2_39;
		int32_t L_1 = __this->___last_5;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_00da;
		}
	}
	{
		int32_t L_2 = __this->___ch2_35;
		__this->___chPrev_34 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___ll8_19;
		int32_t L_4 = __this->___tPos_36;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint8_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		__this->___ch2_35 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->___tt_18;
		int32_t L_8 = __this->___tPos_36;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		__this->___tPos_36 = L_10;
		int32_t L_11 = __this->___rNToGo_37;
		if (L_11)
		{
			goto IL_007f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BZip2Constants_t2FB3AE8623497F724C02B1D7A551E23824E15939_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = ((BZip2Constants_t2FB3AE8623497F724C02B1D7A551E23824E15939_StaticFields*)il2cpp_codegen_static_fields_for(BZip2Constants_t2FB3AE8623497F724C02B1D7A551E23824E15939_il2cpp_TypeInfo_var))->___RandomNumbers_0;
		int32_t L_13 = __this->___rTPos_38;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		int32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		__this->___rNToGo_37 = L_15;
		int32_t L_16 = __this->___rTPos_38;
		__this->___rTPos_38 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = __this->___rTPos_38;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)512)))))
		{
			goto IL_007f;
		}
	}
	{
		__this->___rTPos_38 = 0;
	}

IL_007f:
	{
		int32_t L_18 = __this->___rNToGo_37;
		__this->___rNToGo_37 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
		int32_t L_19 = __this->___ch2_35;
		int32_t L_20 = __this->___rNToGo_37;
		G_B5_0 = L_19;
		G_B5_1 = __this;
		if ((((int32_t)L_20) == ((int32_t)1)))
		{
			G_B6_0 = L_19;
			G_B6_1 = __this;
			goto IL_00a0;
		}
	}
	{
		G_B7_0 = 0;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_00a1;
	}

IL_00a0:
	{
		G_B7_0 = 1;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_00a1:
	{
		NullCheck(G_B7_2);
		G_B7_2->___ch2_35 = ((int32_t)(G_B7_1^G_B7_0));
		int32_t L_21 = __this->___i2_39;
		__this->___i2_39 = ((int32_t)il2cpp_codegen_add(L_21, 1));
		int32_t L_22 = __this->___ch2_35;
		__this->___currentChar_27 = L_22;
		__this->___currentState_28 = 3;
		RuntimeObject* L_23 = __this->___mCrc_11;
		int32_t L_24 = __this->___ch2_35;
		NullCheck(L_23);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void ICSharpCode.SharpZipLib.Checksum.IChecksum::Update(System.Int32) */, IChecksum_tE3D732C1F11753D7DC63E2F93286A7C581C81676_il2cpp_TypeInfo_var, L_23, L_24);
		return;
	}

IL_00da:
	{
		BZip2InputStream_EndBlock_m9857538948902F7DCE49A785F03A7D491A567AC6(__this, NULL);
		BZip2InputStream_InitBlock_m93DD86F9271DBEA5811A33CE8D386E812176780D(__this, NULL);
		BZip2InputStream_SetupBlock_m899C33F44F1838D4BFDE4C069AE652BA1EDF36E5(__this, NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::SetupNoRandPartA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BZip2InputStream_SetupNoRandPartA_mC524B2897F62558926C7D06C0B66153ABACAAE20 (BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChecksum_tE3D732C1F11753D7DC63E2F93286A7C581C81676_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->___i2_39;
		int32_t L_1 = __this->___last_5;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0073;
		}
	}
	{
		int32_t L_2 = __this->___ch2_35;
		__this->___chPrev_34 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___ll8_19;
		int32_t L_4 = __this->___tPos_36;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint8_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		__this->___ch2_35 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->___tt_18;
		int32_t L_8 = __this->___tPos_36;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		__this->___tPos_36 = L_10;
		int32_t L_11 = __this->___i2_39;
		__this->___i2_39 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->___ch2_35;
		__this->___currentChar_27 = L_12;
		__this->___currentState_28 = 6;
		RuntimeObject* L_13 = __this->___mCrc_11;
		int32_t L_14 = __this->___ch2_35;
		NullCheck(L_13);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void ICSharpCode.SharpZipLib.Checksum.IChecksum::Update(System.Int32) */, IChecksum_tE3D732C1F11753D7DC63E2F93286A7C581C81676_il2cpp_TypeInfo_var, L_13, L_14);
		return;
	}

IL_0073:
	{
		BZip2InputStream_EndBlock_m9857538948902F7DCE49A785F03A7D491A567AC6(__this, NULL);
		BZip2InputStream_InitBlock_m93DD86F9271DBEA5811A33CE8D386E812176780D(__this, NULL);
		BZip2InputStream_SetupBlock_m899C33F44F1838D4BFDE4C069AE652BA1EDF36E5(__this, NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::SetupRandPartB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BZip2InputStream_SetupRandPartB_m5535A0A3843EE09F4B8BC02B25A2C784F90A702D (BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BZip2Constants_t2FB3AE8623497F724C02B1D7A551E23824E15939_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t G_B8_0 = 0x0;
	BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* G_B8_1 = NULL;
	uint8_t G_B7_0 = 0x0;
	BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* G_B7_1 = NULL;
	int32_t G_B9_0 = 0;
	uint8_t G_B9_1 = 0x0;
	BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* G_B9_2 = NULL;
	{
		int32_t L_0 = __this->___ch2_35;
		int32_t L_1 = __this->___chPrev_34;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0023;
		}
	}
	{
		__this->___currentState_28 = 2;
		__this->___count_33 = 1;
		BZip2InputStream_SetupRandPartA_mB668B399E66AA4E0EED64DCF6307A082EAF61D8C(__this, NULL);
		return;
	}

IL_0023:
	{
		int32_t L_2 = __this->___count_33;
		__this->___count_33 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = __this->___count_33;
		if ((((int32_t)L_3) < ((int32_t)4)))
		{
			goto IL_00de;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___ll8_19;
		int32_t L_5 = __this->___tPos_36;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		__this->___z_41 = L_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->___tt_18;
		int32_t L_9 = __this->___tPos_36;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		__this->___tPos_36 = L_11;
		int32_t L_12 = __this->___rNToGo_37;
		if (L_12)
		{
			goto IL_009f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BZip2Constants_t2FB3AE8623497F724C02B1D7A551E23824E15939_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = ((BZip2Constants_t2FB3AE8623497F724C02B1D7A551E23824E15939_StaticFields*)il2cpp_codegen_static_fields_for(BZip2Constants_t2FB3AE8623497F724C02B1D7A551E23824E15939_il2cpp_TypeInfo_var))->___RandomNumbers_0;
		int32_t L_14 = __this->___rTPos_38;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		int32_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		__this->___rNToGo_37 = L_16;
		int32_t L_17 = __this->___rTPos_38;
		__this->___rTPos_38 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		int32_t L_18 = __this->___rTPos_38;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)512)))))
		{
			goto IL_009f;
		}
	}
	{
		__this->___rTPos_38 = 0;
	}

IL_009f:
	{
		int32_t L_19 = __this->___rNToGo_37;
		__this->___rNToGo_37 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
		uint8_t L_20 = __this->___z_41;
		int32_t L_21 = __this->___rNToGo_37;
		G_B7_0 = L_20;
		G_B7_1 = __this;
		if ((((int32_t)L_21) == ((int32_t)1)))
		{
			G_B8_0 = L_20;
			G_B8_1 = __this;
			goto IL_00c0;
		}
	}
	{
		G_B9_0 = 0;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		goto IL_00c1;
	}

IL_00c0:
	{
		G_B9_0 = 1;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
	}

IL_00c1:
	{
		NullCheck(G_B9_2);
		G_B9_2->___z_41 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)G_B9_1^((int32_t)(uint8_t)G_B9_0))));
		__this->___j2_40 = 0;
		__this->___currentState_28 = 4;
		BZip2InputStream_SetupRandPartC_m6A32047DE375216D8C6B48E14DD852F3C33C1052(__this, NULL);
		return;
	}

IL_00de:
	{
		__this->___currentState_28 = 2;
		BZip2InputStream_SetupRandPartA_mB668B399E66AA4E0EED64DCF6307A082EAF61D8C(__this, NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::SetupRandPartC()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BZip2InputStream_SetupRandPartC_m6A32047DE375216D8C6B48E14DD852F3C33C1052 (BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChecksum_tE3D732C1F11753D7DC63E2F93286A7C581C81676_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->___j2_40;
		uint8_t L_1 = __this->___z_41;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_2 = __this->___ch2_35;
		__this->___currentChar_27 = L_2;
		RuntimeObject* L_3 = __this->___mCrc_11;
		int32_t L_4 = __this->___ch2_35;
		NullCheck(L_3);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void ICSharpCode.SharpZipLib.Checksum.IChecksum::Update(System.Int32) */, IChecksum_tE3D732C1F11753D7DC63E2F93286A7C581C81676_il2cpp_TypeInfo_var, L_3, L_4);
		int32_t L_5 = __this->___j2_40;
		__this->___j2_40 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}

IL_003a:
	{
		__this->___currentState_28 = 2;
		int32_t L_6 = __this->___i2_39;
		__this->___i2_39 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		__this->___count_33 = 0;
		BZip2InputStream_SetupRandPartA_mB668B399E66AA4E0EED64DCF6307A082EAF61D8C(__this, NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::SetupNoRandPartB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BZip2InputStream_SetupNoRandPartB_m316C6311888936B36E70C7E57870F804E1F90A49 (BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___ch2_35;
		int32_t L_1 = __this->___chPrev_34;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0023;
		}
	}
	{
		__this->___currentState_28 = 5;
		__this->___count_33 = 1;
		BZip2InputStream_SetupNoRandPartA_mC524B2897F62558926C7D06C0B66153ABACAAE20(__this, NULL);
		return;
	}

IL_0023:
	{
		int32_t L_2 = __this->___count_33;
		__this->___count_33 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = __this->___count_33;
		if ((((int32_t)L_3) < ((int32_t)4)))
		{
			goto IL_0075;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___ll8_19;
		int32_t L_5 = __this->___tPos_36;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		__this->___z_41 = L_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->___tt_18;
		int32_t L_9 = __this->___tPos_36;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		__this->___tPos_36 = L_11;
		__this->___currentState_28 = 7;
		__this->___j2_40 = 0;
		BZip2InputStream_SetupNoRandPartC_mD0FDD6E542ACD8D986F0EE98FB4C465ED8ED14FD(__this, NULL);
		return;
	}

IL_0075:
	{
		__this->___currentState_28 = 5;
		BZip2InputStream_SetupNoRandPartA_mC524B2897F62558926C7D06C0B66153ABACAAE20(__this, NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::SetupNoRandPartC()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BZip2InputStream_SetupNoRandPartC_mD0FDD6E542ACD8D986F0EE98FB4C465ED8ED14FD (BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChecksum_tE3D732C1F11753D7DC63E2F93286A7C581C81676_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->___j2_40;
		uint8_t L_1 = __this->___z_41;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_2 = __this->___ch2_35;
		__this->___currentChar_27 = L_2;
		RuntimeObject* L_3 = __this->___mCrc_11;
		int32_t L_4 = __this->___ch2_35;
		NullCheck(L_3);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void ICSharpCode.SharpZipLib.Checksum.IChecksum::Update(System.Int32) */, IChecksum_tE3D732C1F11753D7DC63E2F93286A7C581C81676_il2cpp_TypeInfo_var, L_3, L_4);
		int32_t L_5 = __this->___j2_40;
		__this->___j2_40 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}

IL_003a:
	{
		__this->___currentState_28 = 5;
		int32_t L_6 = __this->___i2_39;
		__this->___i2_39 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		__this->___count_33 = 0;
		BZip2InputStream_SetupNoRandPartA_mC524B2897F62558926C7D06C0B66153ABACAAE20(__this, NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::SetDecompressStructureSizes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BZip2InputStream_SetDecompressStructureSizes_m527B6A7D7A0905BC26CFD176F11B44D32C1A417F (BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* __this, int32_t ___newSize100k0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___newSize100k0;
		if ((((int32_t)0) > ((int32_t)L_0)))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_1 = ___newSize100k0;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)9))))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_2 = __this->___blockSize100k_7;
		if ((((int32_t)0) > ((int32_t)L_2)))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_3 = __this->___blockSize100k_7;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)9))))
		{
			goto IL_0027;
		}
	}

IL_001c:
	{
		BZip2Exception_t1741AC6EA11FAF77F0D91DECA2B9440919007096* L_4 = (BZip2Exception_t1741AC6EA11FAF77F0D91DECA2B9440919007096*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BZip2Exception_t1741AC6EA11FAF77F0D91DECA2B9440919007096_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		BZip2Exception__ctor_m8D0263A2BD0CCC9CB6D2886ABBE2539671EE4F1C(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6339537EF82C3CA99F06106076EB017F09E2696C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BZip2InputStream_SetDecompressStructureSizes_m527B6A7D7A0905BC26CFD176F11B44D32C1A417F_RuntimeMethod_var)));
	}

IL_0027:
	{
		int32_t L_5 = ___newSize100k0;
		__this->___blockSize100k_7 = L_5;
		int32_t L_6 = ___newSize100k0;
		if (L_6)
		{
			goto IL_0032;
		}
	}
	{
		return;
	}

IL_0032:
	{
		int32_t L_7 = ___newSize100k0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)100000), L_7));
		int32_t L_8 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_8);
		__this->___ll8_19 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ll8_19), (void*)L_9);
		int32_t L_10 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_10);
		__this->___tt_18 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tt_18), (void*)L_11);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::CompressedStreamEOF()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BZip2InputStream_CompressedStreamEOF_m8AC116EF42A7B859ECF35E3CBCFBCF61F693B22C (const RuntimeMethod* method) 
{
	{
		EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028* L_0 = (EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		EndOfStreamException__ctor_m5629E1A514051A3D56052BD6D2D50C054308CCA4(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3BC92E1B5CE5B99C166F700A26CD758E80249C3F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BZip2InputStream_CompressedStreamEOF_m8AC116EF42A7B859ECF35E3CBCFBCF61F693B22C_RuntimeMethod_var)));
	}
}
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::BlockOverrun()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BZip2InputStream_BlockOverrun_m29C63342909C2DC1CC6F197CECD42CACFF9F31D4 (const RuntimeMethod* method) 
{
	{
		BZip2Exception_t1741AC6EA11FAF77F0D91DECA2B9440919007096* L_0 = (BZip2Exception_t1741AC6EA11FAF77F0D91DECA2B9440919007096*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BZip2Exception_t1741AC6EA11FAF77F0D91DECA2B9440919007096_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		BZip2Exception__ctor_m8D0263A2BD0CCC9CB6D2886ABBE2539671EE4F1C(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8AE0806856295C8F6BD78436B652512A64DDA6EA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BZip2InputStream_BlockOverrun_m29C63342909C2DC1CC6F197CECD42CACFF9F31D4_RuntimeMethod_var)));
	}
}
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::BadBlockHeader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BZip2InputStream_BadBlockHeader_m042E436789D30482BEB00E272D67E6A98F6275FB (const RuntimeMethod* method) 
{
	{
		BZip2Exception_t1741AC6EA11FAF77F0D91DECA2B9440919007096* L_0 = (BZip2Exception_t1741AC6EA11FAF77F0D91DECA2B9440919007096*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BZip2Exception_t1741AC6EA11FAF77F0D91DECA2B9440919007096_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		BZip2Exception__ctor_m8D0263A2BD0CCC9CB6D2886ABBE2539671EE4F1C(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB451C24C18CAC042FF546D3E38C0F36D3BDADC14)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BZip2InputStream_BadBlockHeader_m042E436789D30482BEB00E272D67E6A98F6275FB_RuntimeMethod_var)));
	}
}
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::CrcError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BZip2InputStream_CrcError_m3B8460F42E8FFAC2E591D1FC382853873D90B9CB (const RuntimeMethod* method) 
{
	{
		BZip2Exception_t1741AC6EA11FAF77F0D91DECA2B9440919007096* L_0 = (BZip2Exception_t1741AC6EA11FAF77F0D91DECA2B9440919007096*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BZip2Exception_t1741AC6EA11FAF77F0D91DECA2B9440919007096_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		BZip2Exception__ctor_m8D0263A2BD0CCC9CB6D2886ABBE2539671EE4F1C(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEB602C87D2D6273F24CEC6C67CC7B78DDDE775DC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BZip2InputStream_CrcError_m3B8460F42E8FFAC2E591D1FC382853873D90B9CB_RuntimeMethod_var)));
	}
}
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::HbCreateDecodeTables(System.Int32[],System.Int32[],System.Int32[],System.Char[],System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BZip2InputStream_HbCreateDecodeTables_m08C490887BB4A71E27E1E504042BD8578DBF494F (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___limit0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___baseArray1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___perm2, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___length3, int32_t ___minLen4, int32_t ___maxLen5, int32_t ___alphaSize6, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		V_0 = 0;
		int32_t L_0 = ___minLen4;
		V_2 = L_0;
		goto IL_0026;
	}

IL_0007:
	{
		V_3 = 0;
		goto IL_001d;
	}

IL_000b:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = ___length3;
		int32_t L_2 = V_3;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint16_t L_4 = (uint16_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		int32_t L_5 = V_2;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_0019;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___perm2;
		int32_t L_7 = V_0;
		int32_t L_8 = V_3;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0019:
	{
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_001d:
	{
		int32_t L_11 = V_3;
		int32_t L_12 = ___alphaSize6;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0026:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = ___maxLen5;
		if ((((int32_t)L_14) <= ((int32_t)L_15)))
		{
			goto IL_0007;
		}
	}
	{
		V_4 = 0;
		goto IL_003b;
	}

IL_0030:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = ___baseArray1;
		int32_t L_17 = V_4;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (int32_t)0);
		int32_t L_18 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_003b:
	{
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) < ((int32_t)((int32_t)23))))
		{
			goto IL_0030;
		}
	}
	{
		V_5 = 0;
		goto IL_005d;
	}

IL_0046:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = ___baseArray1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_21 = ___length3;
		int32_t L_22 = V_5;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		uint16_t L_24 = (uint16_t)(L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_20);
		int32_t* L_25 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_24, 1)))));
		int32_t L_26 = *((int32_t*)L_25);
		*((int32_t*)L_25) = (int32_t)((int32_t)il2cpp_codegen_add(L_26, 1));
		int32_t L_27 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_005d:
	{
		int32_t L_28 = V_5;
		int32_t L_29 = ___alphaSize6;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_0046;
		}
	}
	{
		V_6 = 1;
		goto IL_0080;
	}

IL_0068:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = ___baseArray1;
		int32_t L_31 = V_6;
		NullCheck(L_30);
		int32_t* L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)));
		int32_t L_33 = *((int32_t*)L_32);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = ___baseArray1;
		int32_t L_35 = V_6;
		NullCheck(L_34);
		int32_t L_36 = ((int32_t)il2cpp_codegen_subtract(L_35, 1));
		int32_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		*((int32_t*)L_32) = (int32_t)((int32_t)il2cpp_codegen_add(L_33, L_37));
		int32_t L_38 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_0080:
	{
		int32_t L_39 = V_6;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)23))))
		{
			goto IL_0068;
		}
	}
	{
		V_7 = 0;
		goto IL_0096;
	}

IL_008b:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = ___limit0;
		int32_t L_41 = V_7;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(L_41), (int32_t)0);
		int32_t L_42 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_0096:
	{
		int32_t L_43 = V_7;
		if ((((int32_t)L_43) < ((int32_t)((int32_t)23))))
		{
			goto IL_008b;
		}
	}
	{
		V_1 = 0;
		int32_t L_44 = ___minLen4;
		V_8 = L_44;
		goto IL_00c3;
	}

IL_00a4:
	{
		int32_t L_45 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = ___baseArray1;
		int32_t L_47 = V_8;
		NullCheck(L_46);
		int32_t L_48 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		int32_t L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_50 = ___baseArray1;
		int32_t L_51 = V_8;
		NullCheck(L_50);
		int32_t L_52 = L_51;
		int32_t L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		V_1 = ((int32_t)il2cpp_codegen_add(L_45, ((int32_t)il2cpp_codegen_subtract(L_49, L_53))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = ___limit0;
		int32_t L_55 = V_8;
		int32_t L_56 = V_1;
		NullCheck(L_54);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(L_55), (int32_t)((int32_t)il2cpp_codegen_subtract(L_56, 1)));
		int32_t L_57 = V_1;
		V_1 = ((int32_t)(L_57<<1));
		int32_t L_58 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_58, 1));
	}

IL_00c3:
	{
		int32_t L_59 = V_8;
		int32_t L_60 = ___maxLen5;
		if ((((int32_t)L_59) <= ((int32_t)L_60)))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_61 = ___minLen4;
		V_9 = ((int32_t)il2cpp_codegen_add(L_61, 1));
		goto IL_00ea;
	}

IL_00d1:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_62 = ___baseArray1;
		int32_t L_63 = V_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_64 = ___limit0;
		int32_t L_65 = V_9;
		NullCheck(L_64);
		int32_t L_66 = ((int32_t)il2cpp_codegen_subtract(L_65, 1));
		int32_t L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_68 = ___baseArray1;
		int32_t L_69 = V_9;
		NullCheck(L_68);
		int32_t L_70 = L_69;
		int32_t L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(L_63), (int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((int32_t)il2cpp_codegen_add(L_67, 1))<<1)), L_71)));
		int32_t L_72 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_72, 1));
	}

IL_00ea:
	{
		int32_t L_73 = V_9;
		int32_t L_74 = ___maxLen5;
		if ((((int32_t)L_73) <= ((int32_t)L_74)))
		{
			goto IL_00d1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DeflaterOutputStream_get_IsStreamOwner_mEBD8D769B49DA7336F4D52E9113216EED307C859_inline (DeflaterOutputStream_t1A33D4BC42D9AF34A523563436A1C6A1136CE259* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsStreamOwnerU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InflaterInputBuffer_get_Available_m5E66CD4D88490D425B7AF3636A27538003E48169_inline (InflaterInputBuffer_t947724C1CD4D44B75584D59D1ECA71C121D62129* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___available_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InflaterInputStream_get_IsStreamOwner_mF78646DE2A962B44726310E31223230C8617F0CC_inline (InflaterInputStream_t25453CA4D454447A9D30F0011CCE23037B465EA2* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsStreamOwnerU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t Crc32_ComputeCrc32_m415C4FD62B6CD1AC763E92C848DFD6B9AF7157DD_inline (uint32_t ___oldCrc0, uint8_t ___bval1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Crc32_t44597B0AB0A0CE01AB30303BA5EC0F6E4F51BF33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Crc32_t44597B0AB0A0CE01AB30303BA5EC0F6E4F51BF33_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ((Crc32_t44597B0AB0A0CE01AB30303BA5EC0F6E4F51BF33_StaticFields*)il2cpp_codegen_static_fields_for(Crc32_t44597B0AB0A0CE01AB30303BA5EC0F6E4F51BF33_il2cpp_TypeInfo_var))->___crcTable_2;
		uint32_t L_1 = ___oldCrc0;
		uint8_t L_2 = ___bval1;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)(((int32_t)((int32_t)L_1^(int32_t)L_2))&((int32_t)255)));
		uint32_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		uint32_t L_5 = ___oldCrc0;
		return ((int32_t)((int32_t)L_4^((int32_t)((uint32_t)L_5>>8))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t CrcUtilities_UpdateDataForReversedPoly_mE37B9692EE9D5E6AA0DF313CC4AF194F6102827C_inline (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___offset1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___crcTable2, uint32_t ___checkValue3, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	uint8_t V_1 = 0x0;
	uint8_t V_2 = 0x0;
	uint8_t V_3 = 0x0;
	{
		uint32_t L_0 = ___checkValue3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___input0;
		int32_t L_2 = ___offset1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(uint8_t)L_0)^(int32_t)L_4)));
		uint32_t L_5 = ___checkValue3;
		int32_t L_6 = ((int32_t)((uint32_t)L_5>>8));
		___checkValue3 = L_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___input0;
		int32_t L_8 = ___offset1;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		uint8_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_1 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(uint8_t)L_6)^(int32_t)L_10)));
		uint32_t L_11 = ___checkValue3;
		int32_t L_12 = ((int32_t)((uint32_t)L_11>>8));
		___checkValue3 = L_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___input0;
		int32_t L_14 = ___offset1;
		NullCheck(L_13);
		int32_t L_15 = ((int32_t)il2cpp_codegen_add(L_14, 2));
		uint8_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_2 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(uint8_t)L_12)^(int32_t)L_16)));
		uint32_t L_17 = ___checkValue3;
		int32_t L_18 = ((int32_t)((uint32_t)L_17>>8));
		___checkValue3 = L_18;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___input0;
		int32_t L_20 = ___offset1;
		NullCheck(L_19);
		int32_t L_21 = ((int32_t)il2cpp_codegen_add(L_20, 3));
		uint8_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_3 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(uint8_t)L_18)^(int32_t)L_22)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = ___input0;
		int32_t L_24 = ___offset1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = ___crcTable2;
		uint8_t L_26 = V_0;
		uint8_t L_27 = V_1;
		uint8_t L_28 = V_2;
		uint8_t L_29 = V_3;
		uint32_t L_30;
		L_30 = CrcUtilities_UpdateDataCommon_mD835B4B3EDA46A218258B95D901E6EF225B888C1_inline(L_23, L_24, L_25, L_26, L_27, L_28, L_29, NULL);
		return L_30;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Crc32_Update_mEABA7B10AD590CE609EC1475C50B7A422F3DC25E_inline (Crc32_t44597B0AB0A0CE01AB30303BA5EC0F6E4F51BF33* __this, int32_t ___bval0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Crc32_Update_mEABA7B10AD590CE609EC1475C50B7A422F3DC25E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Crc32_t44597B0AB0A0CE01AB30303BA5EC0F6E4F51BF33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Crc32_t44597B0AB0A0CE01AB30303BA5EC0F6E4F51BF33_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ((Crc32_t44597B0AB0A0CE01AB30303BA5EC0F6E4F51BF33_StaticFields*)il2cpp_codegen_static_fields_for(Crc32_t44597B0AB0A0CE01AB30303BA5EC0F6E4F51BF33_il2cpp_TypeInfo_var))->___crcTable_2;
		uint32_t L_1 = __this->___checkValue_3;
		int32_t L_2 = ___bval0;
		if ((int64_t)(((int64_t)(((int64_t)(((int64_t)(uint64_t)L_1)^((int64_t)L_2)))&((int64_t)((int32_t)255))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Crc32_Update_mEABA7B10AD590CE609EC1475C50B7A422F3DC25E_RuntimeMethod_var);
		NullCheck(L_0);
		intptr_t L_3 = ((intptr_t)((int64_t)(((int64_t)(((int64_t)(uint64_t)L_1)^((int64_t)L_2)))&((int64_t)((int32_t)255)))));
		uint32_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		uint32_t L_5 = __this->___checkValue_3;
		__this->___checkValue_3 = ((int32_t)((int32_t)L_4^((int32_t)((uint32_t)L_5>>8))));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t CrcUtilities_UpdateDataCommon_mD835B4B3EDA46A218258B95D901E6EF225B888C1_inline (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___offset1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___crcTable2, uint8_t ___x13, uint8_t ___x24, uint8_t ___x35, uint8_t ___x46, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___crcTable2;
		uint8_t L_1 = ___x13;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, ((int32_t)3840)));
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___crcTable2;
		uint8_t L_5 = ___x24;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, ((int32_t)3584)));
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = ((int32_t)((int32_t)L_3^(int32_t)L_7));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___crcTable2;
		uint8_t L_9 = ___x35;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, ((int32_t)3328)));
		uint32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___crcTable2;
		uint8_t L_13 = ___x46;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, ((int32_t)3072)));
		uint32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_1 = ((int32_t)((int32_t)L_11^(int32_t)L_15));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = ___crcTable2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___input0;
		int32_t L_18 = ___offset1;
		NullCheck(L_17);
		int32_t L_19 = ((int32_t)il2cpp_codegen_add(L_18, 4));
		uint8_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_16);
		int32_t L_21 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, ((int32_t)2816)));
		uint32_t L_22 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = ___crcTable2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___input0;
		int32_t L_25 = ___offset1;
		NullCheck(L_24);
		int32_t L_26 = ((int32_t)il2cpp_codegen_add(L_25, 5));
		uint8_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_23);
		int32_t L_28 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, ((int32_t)2560)));
		uint32_t L_29 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		uint32_t L_30 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___crcTable2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ___input0;
		int32_t L_33 = ___offset1;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)il2cpp_codegen_add(L_33, ((int32_t)9)));
		uint8_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_31);
		int32_t L_36 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, ((int32_t)1536)));
		uint32_t L_37 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		V_0 = ((int32_t)((int32_t)L_30^(int32_t)L_37));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38 = ___crcTable2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = ___input0;
		int32_t L_40 = ___offset1;
		NullCheck(L_39);
		int32_t L_41 = ((int32_t)il2cpp_codegen_add(L_40, 6));
		uint8_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_38);
		int32_t L_43 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, ((int32_t)2304)));
		uint32_t L_44 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = ___crcTable2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = ___input0;
		int32_t L_47 = ___offset1;
		NullCheck(L_46);
		int32_t L_48 = ((int32_t)il2cpp_codegen_add(L_47, 7));
		uint8_t L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_45);
		int32_t L_50 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, ((int32_t)2048)));
		uint32_t L_51 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_52 = ___crcTable2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = ___input0;
		int32_t L_54 = ___offset1;
		NullCheck(L_53);
		int32_t L_55 = ((int32_t)il2cpp_codegen_add(L_54, 8));
		uint8_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		NullCheck(L_52);
		int32_t L_57 = ((int32_t)il2cpp_codegen_add((int32_t)L_56, ((int32_t)1792)));
		uint32_t L_58 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		uint32_t L_59 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = ___crcTable2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_61 = ___input0;
		int32_t L_62 = ___offset1;
		NullCheck(L_61);
		int32_t L_63 = ((int32_t)il2cpp_codegen_add(L_62, ((int32_t)13)));
		uint8_t L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		NullCheck(L_60);
		int32_t L_65 = ((int32_t)il2cpp_codegen_add((int32_t)L_64, ((int32_t)512)));
		uint32_t L_66 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		V_1 = ((int32_t)((int32_t)L_59^(int32_t)L_66));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = ___crcTable2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_68 = ___input0;
		int32_t L_69 = ___offset1;
		NullCheck(L_68);
		int32_t L_70 = ((int32_t)il2cpp_codegen_add(L_69, ((int32_t)10)));
		uint8_t L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		NullCheck(L_67);
		int32_t L_72 = ((int32_t)il2cpp_codegen_add((int32_t)L_71, ((int32_t)1280)));
		uint32_t L_73 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_74 = ___crcTable2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_75 = ___input0;
		int32_t L_76 = ___offset1;
		NullCheck(L_75);
		int32_t L_77 = ((int32_t)il2cpp_codegen_add(L_76, ((int32_t)11)));
		uint8_t L_78 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		NullCheck(L_74);
		int32_t L_79 = ((int32_t)il2cpp_codegen_add((int32_t)L_78, ((int32_t)1024)));
		uint32_t L_80 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_81 = ___crcTable2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_82 = ___input0;
		int32_t L_83 = ___offset1;
		NullCheck(L_82);
		int32_t L_84 = ((int32_t)il2cpp_codegen_add(L_83, ((int32_t)12)));
		uint8_t L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		NullCheck(L_81);
		int32_t L_86 = ((int32_t)il2cpp_codegen_add((int32_t)L_85, ((int32_t)768)));
		uint32_t L_87 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		uint32_t L_88 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_89 = ___crcTable2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_90 = ___input0;
		int32_t L_91 = ___offset1;
		NullCheck(L_90);
		int32_t L_92 = ((int32_t)il2cpp_codegen_add(L_91, ((int32_t)14)));
		uint8_t L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		NullCheck(L_89);
		int32_t L_94 = ((int32_t)il2cpp_codegen_add((int32_t)L_93, ((int32_t)256)));
		uint32_t L_95 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_96 = ___crcTable2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_97 = ___input0;
		int32_t L_98 = ___offset1;
		NullCheck(L_97);
		int32_t L_99 = ((int32_t)il2cpp_codegen_add(L_98, ((int32_t)15)));
		uint8_t L_100 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		NullCheck(L_96);
		uint8_t L_101 = L_100;
		uint32_t L_102 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		uint32_t L_103 = V_1;
		return ((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_22^(int32_t)L_29))^(int32_t)L_44))^(int32_t)L_51))^(int32_t)L_58))^(int32_t)L_73))^(int32_t)L_80))^(int32_t)L_87))^(int32_t)L_88))^(int32_t)L_95))^(int32_t)L_102))^(int32_t)L_103));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BZip2InputStream_get_IsStreamOwner_m41E5817E414E2FDDB0153B6F3AEC091B7242A0BA_inline (BZip2InputStream_t609FB872F5FB153AD1E3A37F251F238C4BC599AE* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsStreamOwnerU3Ek__BackingField_42;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____offset_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)__this->____array_1;
		return L_0;
	}
}
